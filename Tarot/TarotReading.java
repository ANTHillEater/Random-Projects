package Tarot;

import java.util.*;

//TODO make sure that the same card cant be drawn twice

//TODO add descriptions

public class TarotReading {
	private static String [] major = {"0, The Fool", "I, The Magician", "II, The High Preistess", "III, The Empress",
					"IV, The Emperor", "V, The Heiophant", "VI, The Lovers", "VII, The Chariot", "VIII, Justice",
					"IX, The Hermit", "X, Wheel of Fortune", "XI, Strength", "XII, The Hanged Man", "XIII, Death",
					"XIV, Temperance", "XV, The Devil", "XVI, The Tower", "XVII, The Star", "XVIII, The Moon", "XIX, The Sun",
					"XX, Judgement", "XXI, The World"};
	private static String [] minorFaces = {"Chalices", "Pentacles", "Swords", "Wands"};
	private static String [] minorNames = {"King of ", "Queen of ", "Knight of ", "Sage of ", "Ace of ", "II of ",
					"III of ", "IV of ", "V of ", "VI of ", "VII of ", "VIII of ", "IX of ", "X of "};
	private static String [][] spreads = {{"Your card: "}, {"The Querent: ", "The Past: ", "The Present: ", "The Future: "},
					{"The Querent: ", "The Challenge: ", "The Concious: ", "The Subconcious: ", "The Past: ", "The Future: ",
					"Your Attitude: ", "Your Environment: ", "Your Hopes & Fears: ", "The Expected Outcome: "}};

	public static String arcana(){
		String s = "";
		int draw = 0;
		double invert = 0.0;
		double majOrMin = 0.0;

		majOrMin = Math.random();
		if(majOrMin > 0.5){
			draw = (int)(Math.random() * 22);
			s = spreads[0][0] + major[draw];
		}
		else{
			draw = (int)(Math.random() * 10);
			s = spreads[0][0] + minorNames[draw];
			draw = (int)(Math.random() * 4);
			s += minorFaces[draw];
		}
		invert = Math.random();
		if(invert > 0.5){
			s += " Inverted";
		}

		return s;
	}
	public static void main (String [] args){
		Scanner input = new Scanner(System.in);
		String s = "";

		System.out.println("Choose a spread:");
		System.out.println("1. Single card");
		System.out.println("2. 4 card spread");
		System.out.println("3. Celtic Cross");

		switch(input.nextInt()){
			case 1:
				s = arcana();
				System.out.println(s);
				break;
			case 2:
				for(int i = 0; i < 4; i++){
					s = arcana();
					System.out.println(s);
				}
				break;
			case 3:
				for(int i = 0; i < 10; i++){
					s = arcana();
					System.out.println(s);
				}
				break;
			default:
				System.out.println("Thats not an option");
				break;
		}

		input.close();
	}
}