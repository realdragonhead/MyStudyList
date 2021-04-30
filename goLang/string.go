package main

// import ("fmt"; "time"; "unicode/utf8")
import ("fmt"
		"time"
		"unicode/utf8")

func main() {
	var test = 1
	// var Hangul = "한글" // error
	var Hangul string = "한글"
	var s1 string = "Hello"
	var s2 string = "Hello"
	var s3 string = "World"
	var s4 string = " "
	var s5 string = "\n"
	var i1 = 20;
	var i2 = 30;

	//*** String ***
	fmt.Println(s1==s2)
	fmt.Printf("%s %s\n", s2, s3)
	fmt.Printf(s2 + s4 + s3 + s5)
	fmt.Println(s2 + s4 + s3)

	fmt.Println(i1 + i2)
	fmt.Printf("%d%d\n", i1, i2)

	// fmt.Println("%s %s\n", s2, s3) // result : %s %s
	// fmt.Println("%s %s\n", &s2, &s3) // print memory address
	// fmt.Println(s2 + ' ' +s3) // error

	fmt.Printf("%d\n", test)
	fmt.Println(utf8.RuneCountInString(Hangul))	// 한글 길이 구하기
	fmt.Printf("%s\n", Hangul)
	start := time.Now()
	fmt.Printf("%s\n", &start)
	end := time.Now()
	fmt.Printf("%s", &end)
}
