fib :: [Int]
fib = 1 : scanl (+) 2 fib

main :: IO ()
main = print . sum . filter even $ takeWhile (< 4000001) fib
