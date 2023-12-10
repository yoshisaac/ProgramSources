local function sleep(n)
    local runTime = os.clock()

    while os.clock() - runTime <= n do --[[ nothing ]] end
end

local i = 0.0
while true do

   for _=0, 65 * math.abs(math.tan(math.cos(i))) do
      io.write(" ")
   end

   print("*")

   i = i + 0.1

   sleep(0.1)
   
end
