local waveLengthBack = 0
local waveLengthForward = math.random(0, 15)

local function sleep(n)
   local runTime = os.clock()

   while os.clock() - runTime <= n do --[[ nothing ]] end
end

local function spaces(n)
   local i = 0

   while i <= n do
      io.write(" ")
      i = i + 1
   end
end

while true do
   
   local x = waveLengthBack
   while x < waveLengthForward do
      spaces(x)
      print("*")
      x = x + 1
      sleep(0.1)
   end

   waveLengthBack = math.random(0, 15)
   while not (waveLengthBack < waveLengthForward) do waveLengthBack = math.random(0, 15) end

   local y = waveLengthForward
   while y > waveLengthBack do
      spaces(y)
      print("*")
      y = y - 1
      sleep(0.1)
   end

   waveLengthForward = math.random(0, 15)
   while not (waveLengthBack < waveLengthForward) do waveLengthForward = math.random(0, 15) end
   
end
