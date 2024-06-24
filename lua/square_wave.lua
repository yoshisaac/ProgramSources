local waveLengthBack = 0
local waveLengthForward = 15

local waveLineLength = waveLengthForward

if waveLengthBack == 0 then
   waveLineLength = waveLengthForward + 1
end



local function sleep(n)
   local runTime = os.clock()

   while os.clock() - runTime <= n do --[[ nothing ]] end
end

local function spaces(n)
   local i = 0

   while i <= n do
      if i == 0 and n == 0 then goto continue end
      io.write(" ")
      ::continue::
      i = i + 1
   end
end

local function line(n)
   local i = 0

   while i <= n do
      io.write("*")
      i = i + 1
   end
   print()
end

while true do
   for x=0, waveLengthForward do
      spaces(waveLengthBack)
      print("*")
      sleep(0.1)
   end

   spaces(waveLengthBack)
   line(waveLineLength)
   sleep(0.1)

   for x=0, waveLengthForward do
      spaces(waveLengthBack + waveLengthForward)
      print("*")
      sleep(0.1)
   end

   spaces(waveLengthBack)
   line(waveLineLength)
   sleep(0.1)
end
