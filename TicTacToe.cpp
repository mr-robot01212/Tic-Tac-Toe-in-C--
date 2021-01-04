#include<iostream>
using namespace std;
char Player='X';
char A[3][3]={{'1','2','3'},{'4','5','6'},{'7','8','9'}};
void display(){
	system("cls");
	cout<<"T I C  T A C  T O E\n";
	cout<<"Player1[X]\nPlayer2[*]\n";
	
	cout<<"\t    |    |    "<<endl;
	cout<<"\t "<<A[0][0]<<"  | "<<A[0][1]<<"  | "<<A[0][2]<<"  "<<endl;
	cout<<"\t____|____|____"<<endl;
	cout<<"\t    |    |    "<<endl;
	cout<<"\t "<<A[1][0]<<"  | "<<A[1][1]<<"  | "<<A[1][2]<<"  "<<endl;
	cout<<"\t____|____|____"<<endl;
	cout<<"\t    |    |    "<<endl;
	cout<<"\t "<<A[2][0]<<"  | "<<A[2][1]<<"  | "<<A[2][2]<<"  "<<endl;
	cout<<"\t    |    |    "<<endl;
	}
void player_input(){
char input;
cout<<"Enter your move :";
cin>>input;

switch (input)
	{
	case '1':
		if(A[0][0]!='X'&&A[0][0]!='*')
		A[0][0]=Player;
		else{
			cout<<"Input Again!\nBox Already Filled\n";
			player_input();
			}
		break;
	case '2':
		if(A[0][1]!='X'&&A[0][1]!='*')
		A[0][1]=Player;
		else{
			cout<<"Input Again!\nBox Already Filled\n";
			player_input();
			}
		break;
	case '3':
		if(A[0][2]!='X'&&A[0][2]!='*')
		A[0][2]=Player;
		else{
			cout<<"Input Again!\nBox Already Filled\n";
			player_input();
			}
		break;
	case '4':
		if(A[1][0]!='X'&&A[1][0]!='*')
		A[1][0]=Player;
		else{
			cout<<"Input Again!\nBox Already Filled\n";
			player_input();
			}
		break;
	case '5':
		if(A[1][1]!='X'&&A[1][1]!='*')
		A[1][1]=Player;
		else{
			cout<<"Input Again!\nBox Already Filled\n";
			player_input();
			}
		break;
	case '6':
		if(A[1][2]!='X'&&A[1][2]!='*')
		A[1][2]=Player;
		else{
			cout<<"Input Again!\nBox Already Filled\n";
			player_input();
			}
		break;
	case '7':
		if(A[2][0]!='X'&&A[2][0]!='*')
		A[2][0]=Player;
		else{
			cout<<"Input Again!\nBox Already Filled\n";
			player_input();
			}
		break;
	case '8':
		if(A[2][1]!='X'&&A[2][1]!='*')
		A[2][1]=Player;
		else{
			cout<<"Input Again!\nBox Already Filled\n";
			player_input();
			}
		break;
	case '9':
		if(A[2][2]!='X'&&A[2][2]!='*')
		A[2][2]=Player;
		else{
			cout<<"Input Again!\nBox Already Filled\n";
			player_input();
			}
		break;

	default:
		cout<<"Invalid Option :"<<endl;
	break;
	}
	}
void next_player(){
	if(Player=='X')
		Player='*';
	else
		{
		Player='X';
		}
	}
bool GameOver(){
	bool draw=false;
	for(int i=0;i<3;i++){
		if(A[i][0]==A[i][1]&&A[i][0]==A[i][2]){
			return false;
			}
		 else if(A[0][i]==A[1][i]&&A[0][i]==A[2][i]){
			return false;
			}
		}
	if(A[0][0]==A[1][1]&&A[0][0]==A[2][2]){
		return false;
		}
	else if(A[0][2]==A[1][1]&&A[0][2]==A[2][0]){
		return false;
		}
	}
	
void main(){
	
	while(true){
	display();
	player_input();
	if(GameOver()){
	next_player();
		}
	else{
		display();
		break;
		}
		}
	cout<<"Player "<<Player<<" wins"<<endl;
	system("pause");
	}