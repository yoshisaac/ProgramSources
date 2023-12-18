for i=1, 100 do
   x = tostring(i)

   if i%3 == 0 and i%5 == 0 then
      x = "FizzBuzz"
   elseif i%5 == 0 then
      x = "Buzz"
   elseif i%3 == 0 then
      x = "Fizz"
   end

   print(tostring(i) .. " - " .. x)
end
