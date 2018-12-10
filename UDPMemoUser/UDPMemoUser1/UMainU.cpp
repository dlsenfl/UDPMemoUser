//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "UMainU.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TUMainF *UMainF;
//---------------------------------------------------------------------------
__fastcall TUMainF::TUMainF(TComponent* Owner)
	: TForm(Owner)
{
//	IdUDPServer1->OnUDPRead = IdUDPServer1UDPRead;
}
//---------------------------------------------------------------------------
void __fastcall TUMainF::IdUDPServer1UDPRead(TIdUDPListenerThread *AThread, const TIdBytes AData,
		  TIdSocketHandle *ABinding)
{
	mmShow1->Alignment = taLeftJustify;
	int iPos;
	UnicodeString sAmsg;
	UnicodeString sId;
	UnicodeString sMsg;

	sAmsg = BytesToString(AData, enUTF8);
	iPos = sAmsg.Pos("@");
	sId = sAmsg.SubString(0,iPos-1);
	sMsg = sAmsg.SubString(iPos+1,sAmsg.Length());

	mmShow1->Lines->Add("[" + sId + "]" + " : " + sMsg);
}
//---------------------------------------------------------------------------

void __fastcall TUMainF::btSend1Click(TObject *Sender)
{
	mmShow1->Alignment = taRightJustify;
	UnicodeString sId;
	UnicodeString sTemp;
	sId = "kis";

	sTemp = edtSend1->Text;
	IdUDPClient1->Send(sId + "@" + sTemp, enUTF8);

	mmShow1->Lines->Add("[" + sId + "]" + ": " + edtSend1->Text);
	edtSend1->Clear();
}
//---------------------------------------------------------------------------
void __fastcall TUMainF::edtSend1KeyPress(TObject *Sender, System::WideChar &Key)

{
	if(Key==VK_RETURN){
		btSend1Click(NULL);
	}
}
//---------------------------------------------------------------------------

