#include <windows.h>
#include <string>
#include <cstdio>

#define btn_idigual 10001
#define btn_id1 10002
#define btn_id2 10003
#define btn_id3 10004
#define btn_id4 10005
#define btn_id5 10006
#define btn_id6 10007
#define btn_id7 10008
#define btn_id8 10009
#define btn_id9 10010
#define btn_id0 10011

#define btn_idmas 10012
#define btn_idmenos 10013
#define btn_idpor 10014
#define btn_identre 10015

#define btn_idpunto 10016

#define btn_idpara 10017
#define btn_idparc 10018


HWND stc_ventana;



HWND btn_nmr1;
HWND btn_nmr2;
HWND btn_nmr3;
HWND btn_nmr4;
HWND btn_nmr5;
HWND btn_nmr6;
HWND btn_nmr7;
HWND btn_nmr8;
HWND btn_nmr9;
HWND btn_nmr0;

HWND btn_mas;
HWND btn_menos;
HWND btn_por;
HWND btn_entre;

HWND btn_para;
HWND btn_parc;

HWND btn_punto;

HWND btn_igual;

float nmra=0,nmrb=0,nmrres=0;
int vand=0,van1=0;
/* This is where all the input to the window goes to */
LRESULT CALLBACK WndProc(HWND hwnd, UINT Message, WPARAM wParam, LPARAM lParam) {
	switch(Message) {
		
		case WM_CREATE:{
			stc_ventana =CreateWindowEx(0,"EDIT","",WS_VISIBLE | WS_CHILD | WS_BORDER | ES_NUMBER, 10,10,100,30,hwnd,0,0,0);
			
			btn_nmr1 = CreateWindowEx(0,"BUTTON","1",WS_VISIBLE | WS_CHILD , 50,170,50,25,hwnd,(HMENU)btn_id1,0,0);
			btn_nmr2 = CreateWindowEx(0,"BUTTON","2",WS_VISIBLE | WS_CHILD , 110,170,50,25,hwnd,(HMENU)btn_id2,0,0);
			btn_nmr3 = CreateWindowEx(0,"BUTTON","3",WS_VISIBLE | WS_CHILD , 170,170,50,25,hwnd,(HMENU)btn_id3,0,0);
			btn_nmr4 = CreateWindowEx(0,"BUTTON","4",WS_VISIBLE | WS_CHILD , 50,135,50,25,hwnd,(HMENU)btn_id4,0,0);
			btn_nmr5 = CreateWindowEx(0,"BUTTON","5",WS_VISIBLE | WS_CHILD , 110,135,50,25,hwnd,(HMENU)btn_id5,0,0);
			btn_nmr6 = CreateWindowEx(0,"BUTTON","6",WS_VISIBLE | WS_CHILD , 170,135,50,25,hwnd,(HMENU)btn_id6,0,0);
			btn_nmr7 = CreateWindowEx(0,"BUTTON","7",WS_VISIBLE | WS_CHILD , 50,100,50,25,hwnd,(HMENU)btn_id7,0,0);
			btn_nmr8 = CreateWindowEx(0,"BUTTON","8",WS_VISIBLE | WS_CHILD , 110,100,50,25,hwnd,(HMENU)btn_id8,0,0);
			btn_nmr9 = CreateWindowEx(0,"BUTTON","9",WS_VISIBLE | WS_CHILD , 170,100,50,25,hwnd,(HMENU)btn_id9,0,0);
			btn_nmr0 = CreateWindowEx(0,"BUTTON","0",WS_VISIBLE | WS_CHILD , 170,205,50,25,hwnd,(HMENU)btn_id0,0,0);
			
			btn_punto = CreateWindowEx(0,"BUTTON",".",WS_VISIBLE | WS_CHILD , 50,205,50,25,hwnd,(HMENU)btn_idpunto,0,0);
			
			btn_menos=CreateWindowEx(0,"BUTTON"," - ",WS_VISIBLE | WS_CHILD | BS_CENTER, 225,100,50,25,hwnd,(HMENU)btn_idmenos,0,0);
			btn_mas=CreateWindowEx(0,"BUTTON"," + ",WS_VISIBLE | WS_CHILD | BS_CENTER, 225,135,50,25,hwnd,(HMENU)btn_idmas,0,0);
			btn_por=CreateWindowEx(0,"BUTTON"," * ",WS_VISIBLE | WS_CHILD | BS_CENTER, 225,65,50,25,hwnd,(HMENU)btn_idpor,0,0);
			btn_entre=CreateWindowEx(0,"BUTTON"," / ",WS_VISIBLE | WS_CHILD | BS_CENTER, 170,65,50,25,hwnd,(HMENU)btn_identre,0,0);
			btn_igual=CreateWindowEx(0,"BUTTON"," = ",WS_VISIBLE | WS_CHILD | BS_CENTER, 225,170,50,60,hwnd,(HMENU)btn_idigual,0,0);
			
			btn_para=CreateWindowEx(0,"BUTTON"," C ",WS_VISIBLE | WS_CHILD | BS_CENTER, 50,65,50,25,hwnd,(HMENU)btn_idpara,0,0);
			btn_parc=CreateWindowEx(0,"BUTTON"," <- ",WS_VISIBLE | WS_CHILD | BS_CENTER, 110,65,50,25,hwnd,(HMENU)btn_idparc,0,0);
			
			break;
		}
		case WM_COMMAND:{
			if(LOWORD(wParam)==btn_idigual){
				char texto[100]="";

				GetWindowText(stc_ventana,texto,100);
				
				nmrb=atof(texto);
				
				if(vand==1){
					nmrres=nmra+nmrb;
				}
				if(vand==2){
					nmrres=nmra-nmrb;
				}
				if(vand==3){
					nmrres=nmra*nmrb;
				}
				if(vand==4){
					nmrres=nmra/nmrb;
				}
				vand=0;
				van1=1;
				sprintf(texto,"%.4f",nmrres);
				SetWindowText(stc_ventana,texto);
			}else if(LOWORD(wParam)==btn_id1){
				if (van1==1){
					SetWindowText(stc_ventana,"");
					van1=0;	
				}
				char texto[100]="";

				GetWindowText(stc_ventana,texto,100);
				strcat(texto,"1");
				SetWindowText(stc_ventana,texto);
				
			}
			else if(LOWORD(wParam)==btn_id2){
				if (van1==1){
					SetWindowText(stc_ventana,"");
					van1=0;	
				}
				char texto[100]="";

				GetWindowText(stc_ventana,texto,100);
				strcat(texto,"2");
				SetWindowText(stc_ventana,texto);
			}
			else if(LOWORD(wParam)==btn_id3){
				if (van1==1){
					SetWindowText(stc_ventana,"");
					van1=0;	
				}
				char texto[100]="";

				GetWindowText(stc_ventana,texto,100);
				strcat(texto,"3");
				SetWindowText(stc_ventana,texto);
			}
			else if(LOWORD(wParam)==btn_id4){
				if (van1==1){
					SetWindowText(stc_ventana,"");
					van1=0;	
				}
				char texto[100]="";

				GetWindowText(stc_ventana,texto,100);
				strcat(texto,"4");
				SetWindowText(stc_ventana,texto);
			}
			else if(LOWORD(wParam)==btn_id5){
				if (van1==1){
					SetWindowText(stc_ventana,"");
					van1=0;	
				}
				char texto[100]="";

				GetWindowText(stc_ventana,texto,100);
				strcat(texto,"5");
				SetWindowText(stc_ventana,texto);
			}
			else if(LOWORD(wParam)==btn_id6){
				if (van1==1){
					SetWindowText(stc_ventana,"");
					van1=0;	
				}
				char texto[100]="";

				GetWindowText(stc_ventana,texto,100);
				strcat(texto,"6");
				SetWindowText(stc_ventana,texto);
			}
			else if(LOWORD(wParam)==btn_id7){
				if (van1==1){
					SetWindowText(stc_ventana,"");
					van1=0;	
				}
				char texto[100]="";

				GetWindowText(stc_ventana,texto,100);
				strcat(texto,"7");
				SetWindowText(stc_ventana,texto);
			}
			else if(LOWORD(wParam)==btn_id8){
				if (van1==1){
					SetWindowText(stc_ventana,"");
					van1=0;	
				}
				char texto[100]="";

				GetWindowText(stc_ventana,texto,100);
				strcat(texto,"8");
				SetWindowText(stc_ventana,texto);
			}
			else if(LOWORD(wParam)==btn_id9){
				if (van1==1){
					SetWindowText(stc_ventana,"");
					van1=0;	
				}
				char texto[100]="";

				GetWindowText(stc_ventana,texto,100);
				strcat(texto,"9");
				SetWindowText(stc_ventana,texto);
			}
			else if(LOWORD(wParam)==btn_id0){
				if (van1==1){
					SetWindowText(stc_ventana,"");
					van1=0;	
				}
				char texto[100]="";

				GetWindowText(stc_ventana,texto,100);
				strcat(texto,"0");
				SetWindowText(stc_ventana,texto);
			}
			else if(LOWORD(wParam)==btn_idpunto){
				char texto[100]="";

				GetWindowText(stc_ventana,texto,100);
				strcat(texto,".");
				SetWindowText(stc_ventana,texto);
			}
			else if(LOWORD(wParam)==btn_idmas){
				char texto[100]="";

				GetWindowText(stc_ventana,texto,100);
				
				nmra=atof(texto);
				SetWindowText(stc_ventana,"");
				vand=1;
			}
			else if(LOWORD(wParam)==btn_idmenos){
				char texto[100]="";

				GetWindowText(stc_ventana,texto,100);
				
				nmra=atof(texto);
				SetWindowText(stc_ventana,"");
				vand=2;
			}
			else if(LOWORD(wParam)==btn_idpor){
				char texto[100]="";

				GetWindowText(stc_ventana,texto,100);
				
				nmra=atof(texto);
				SetWindowText(stc_ventana,"");
				vand=3;
			}
			else if(LOWORD(wParam)==btn_identre){
				char texto[100]="";

				GetWindowText(stc_ventana,texto,100);
				
				nmra=atof(texto);
				SetWindowText(stc_ventana,"");
				vand=4;
			}else if(LOWORD(wParam)==btn_idpara){
				SetWindowText(stc_ventana,"");
			}
			else if(LOWORD(wParam)==btn_idparc){
				char texto[100]="";

				GetWindowText(stc_ventana,texto,100);
				texto[strlen(texto) - 1] = '\0';
				SetWindowText(stc_ventana,texto);
			}
			
			break;
		}
		/* Upon destruction, tell the main thread to stop */
		case WM_DESTROY: {
			PostQuitMessage(0);
			break;
		}
		
		
		/* All other messages (a lot of them) are processed using default procedures */
		default:
			return DefWindowProc(hwnd, Message, wParam, lParam);
	}
	return 0;
}

/* The 'main' function of Win32 GUI programs: this is where execution starts */
int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow) {
	WNDCLASSEX wc; /* A properties struct of our window */
	HWND hwnd; /* A 'HANDLE', hence the H, or a pointer to our window */
	MSG msg; /* A temporary location for all messages */

	/* zero out the struct and set the stuff we want to modify */
	memset(&wc,0,sizeof(wc));
	wc.cbSize		 = sizeof(WNDCLASSEX);
	wc.lpfnWndProc	 = WndProc; /* This is where we will send messages to */
	wc.hInstance	 = hInstance;
	wc.hCursor		 = LoadCursor(NULL, IDC_ARROW);
	
	/* White, COLOR_WINDOW is just a #define for a system color, try Ctrl+Clicking it */
	wc.hbrBackground = (HBRUSH)(COLOR_WINDOW+1);
	wc.lpszClassName = "WindowClass";
	wc.hIcon		 = LoadIcon(NULL, IDI_APPLICATION); /* Load a standard icon */
	wc.hIconSm		 = LoadIcon(NULL, IDI_APPLICATION); /* use the name "A" to use the project icon */

	if(!RegisterClassEx(&wc)) {
		MessageBox(NULL, "Window Registration Failed!","Error!",MB_ICONEXCLAMATION|MB_OK);
		return 0;
	}

	hwnd = CreateWindowEx(WS_EX_CLIENTEDGE,"WindowClass","Calculadora Cpp",WS_VISIBLE|WS_OVERLAPPEDWINDOW,
		CW_USEDEFAULT, /* x */
		CW_USEDEFAULT, /* y */
		640, /* width */
		480, /* height */
		NULL,NULL,hInstance,NULL);

	if(hwnd == NULL) {
		MessageBox(NULL, "Window Creation Failed!","Error!",MB_ICONEXCLAMATION|MB_OK);
		return 0;
	}

	/*
		This is the heart of our program where all input is processed and 
		sent to WndProc. Note that GetMessage blocks code flow until it receives something, so
		this loop will not produce unreasonably high CPU usage
	*/
	while(GetMessage(&msg, NULL, 0, 0) > 0) { /* If no error is received... */
		TranslateMessage(&msg); /* Translate key codes to chars if present */
		DispatchMessage(&msg); /* Send it to WndProc */
	}
	return msg.wParam;
}
