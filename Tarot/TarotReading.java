package Tarot;

import java.util.*;

public class TarotReading {
	public static void main (String [] args){
		String [] major = {"The Fool", "The Magician", "The High Preistess", "The Empress",
					"The Emperor", "The Heiophant", "The Lovers", "The Chariot", "Justice",
					"The Hermit", "Wheel of Fortune", "Strength", "The Hanged Man", "Death",
					"Temperance", "The Devil", "The Tower", "The Star", "The Moon", "The Sun",
					"Judgement", "The World"};
		String [] minor = {""};
		String [][] spreads = {{"Your card: "}, {"The Querant: ", "The Past: ", "The Present: ", "The Future: "},
					{"There's a lot of these: "}};
		int draw = 0;
		Scanner input = new Scanner(System.in);

		System.out.println("Choose a spread:");
		System.out.println("1. Single card");
		System.out.println("2. 4 card spread");
		System.out.println("3. Celtic Cross");

		switch(input.nextInt()){
			case 1:
				draw = (int)(Math.random() * 22);
				System.out.println(spreads[0][0] + major[draw]);
				break;
			case 2:
				for(int i = 0; i < 4; i++){
					draw = (int)(Math.random() * 22);
					System.out.println(spreads[1][i] + major[draw]);
				}
				break;
			case 3:
				for(int i = 0; i < 12; i++){
					draw = (int)(Math.random() * 22);
					System.out.println(spreads[2][0] + major[draw]);	//put "i" here when Celtic cross is finished
				}
				break;
			default:
				System.out.println("Thats not an option");
				break;
		}

		input.close();
	}
}