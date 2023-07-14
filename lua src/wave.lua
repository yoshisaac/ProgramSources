local forwardWave = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14}
local backwardWave = {14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1}

local Number = 14

local clock = os.clock
local function sleep(n)-- seconds -- still takes decimals
    local t0 = clock()
    while clock() - t0 <= n do end
end

local write = io.write
local function prnt(i)

    while 0 < i do
        write(" ")
        i = i - 1
    end

end

while true do
    Number = 14

    for number in pairs(forwardWave) do
        prnt(number)
        print("*")
        sleep(0.1)
    end

    for number in pairs(backwardWave) do
        number = number + Number

        prnt(number)
        print("*")
        sleep(0.1)

        Number = Number - 2
    end
end