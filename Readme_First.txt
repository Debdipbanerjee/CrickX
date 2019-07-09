1.Name:	CrickX
2.Developer: Debdip Banerjee
3.Date: 30th May,2019
4.Type:	Number Based Sports Game

5.Requirements:
		Windows:  
			1.Please Use Visual Studio Community 2018 Or Higher
			2.Main.cpp ,add this File Under Same Project
			3.Run From Main.cpp
			4.If You Use Dev Cpp or Code::Blocks Please Change Unreal Standards
				Or For Sake of Simplicity, Just Use VS Community 2018 Or Higher
		
		   Mac:
			1.Please Use XCODE
			2.Main.cpp ,add this File Under Same Project
			3.Run From Main.cpp
			4.If You Use Dev Cpp or Code::Blocks Please Change Unreal Standards
6.Concept:
		This is A Alternate Version of Cricket,One of The most Populer Game
		in this Game user needs to input a number betwee 0-6
		after User Input computer wil RANDOMLY GENERATE a number between the Given Range
		
		If The RANDOMLY GENERATED number and User Input turned out to be Different
		Score Will increase  By the Number User Gives
		ex:	User Input: 6	
			Random Number: 4
			Score: 6
			wicket: 2
			
			User Input: 3	
			Random Number: 5
			Score: 6 + 3 = 9
			wicket: 2

		If The RANDOMLY GENERATED number and User Input turned out to be Same
		User Is Out and 1 Wicket will Deducted
		ex:	User Input: 2	
			Random Number: 2
			Score: 9
			wicket: 1

		Game will be Going Untill all Overs are finished or All Wickets are Gone.
		If You Finish all Overs without Losing all wickets, You will win or You will Lose.
		
	****Player Will have Certain Number Of WICKETS & OVERS that Needs to be Entered By User.****
		
		Numbers are RANDOMLY GENEREATED by using RAND() & SRAND() Function based on 
		Current Time Of the Day.
		
		Overs & Wickets are Given By Users

7.Rules:	1.Player needs to input WICKETS & OVERS
		2.Game will Go untill all Wickets are GONE or All OVERS are Finished
		3. These Rules will be followed:
			1.Wicket: User Needs To Enter How Many WICKETS He/She Wants To play with
			2.Overs: User Needs To Enter How Many OVERS He/She Wants To play
			3.Batting: User have To Enter a Number Between Given Range
			4.Bowling: Computer Will Generate a Number Between Given Range
			5.OUT: Different Types Of OUT
			----RUN OUT: If User Input Is Less Than 0
			----CATCH OUT: If User Input Is Greater Than 6
			----LEG BEFORE WICKET: If User Input Is 5
			----BOWLED OUT: If User Input is Same AS Computer Generated Number
			6.Score: If User Input & Computer Generated Numbers are Valid
				 & Not Same.User Scores
		

8.Test Cases:	
		----****USER INPUTS****----
		Enter Number of Wickets
		2
		Enter Number of Overs
		1
		********Now You Can Play*************

		Over:0.1
		Enter a Number Between 0 - 6
		3
		Bat: 3
		Ball: 5
		Score: 3
		Wickets: 2

		Over:0.2
		Enter a Number Between 0 - 6
		4
		Bat: 4
		Ball: 2
		Score: 7
		Wickets: 2

		Over:0.3
		Enter a Number Between 0 - 6
		6
		Bat: 6
		Ball: 5
		Score: 13
		Wickets: 2

		Over:0.4
		Enter a Number Between 0 - 6
		3
		****BOWLED OUt****
		Bat: 3
		Ball: 3
		Score: 13
		Wickets: 1

		Over:0.5
		Enter a Number Between 0 - 6
		2
		Bat: 2
		Ball: 4
		Score: 15
		Wickets: 1

		Over:0.6
		Enter a Number Between 0 - 6
		3
		****BOWLED OUt****
		Bat: 3
		Ball: 3
		Score: 15
		Wickets: 0
		All Wickets are Gone,Bye Bye
		****FINAL SCORE: 15****

9.Inspiration: Got This Idea During ICC Cricket World Cup 2019

10.Acknowledgement: Thanks a Lot to Ben Triestem & Gavin Milroy, instructors From GameDev.Tv
		    They Helped Me Build proper Understanding of Problem Solving 
		    & How to Make Something That is both Fun & Exciting.
11.Personal Info:	
		I,Debdip Banerjee am A Computer Science Undergrad At the Time Of making this Game.
		I am Also A Game Programmer,Software Engineer,Technical Animator and Entreprenuer.
		If Anyone Wants to use Any part Of My Source Code They can.
		I am Not responsible for Any Furthur use of my Code at any Work.
		if anyone want to make any improvement they can,
		if You want to contact me,Details are Below.

12.Contact Info:
		Email: Debdipbanerjee7@gmail.com
		Whatsapp Number: 9007480046
		Contact Number: +91-9007480046
		LinkedIn Id: www.linkedin.com/in/debdip-banerjee-07
		Facebook Id: http://facebook.com/Debdipbanerjee23