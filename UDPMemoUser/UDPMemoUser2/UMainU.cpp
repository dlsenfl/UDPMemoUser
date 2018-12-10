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
//	IdUDPServer2->OnUDPRead = IdUDPServer2UDPRead;
}
//---------------------------------------------------------------------------
void __fastcall TUMainF::IdUDPServer2UDPRead(TIdUDPListenerThread *AThread, const TIdBytes AData,
		  TIdSocketHandle *ABinding)
{
	int iPos;
	UnicodeString sAmsg;
	UnicodeString sId;
	UnicodeString sMsg;

	sAmsg = BytesToString(AData, enUTF8);
	iPos = sAmsg.Pos("@");
	sId = sAmsg.SubString(0,iPos-1);
	sMsg = sAmsg.SubString(iPos+1,sAmsg.Length());

	mmShow2->Lines->Add("[" + sId + "]" + " : " + sMsg);

}
//---------------------------------------------------------------------------
void __fastcall TUMainF::btSend2Click(TObject *Sender)
{
	UnicodeString sId;
	UnicodeString sTemp;
	sId = "hj";

	sTemp = edtSend2->Text;
	IdUDPClient2->Send(sId+ "@" + sTemp, enUTF8);

	mmShow2->Lines->Add("[" + sId + "]" + ": " + edtSend2->Text);
	edtSend2->Clear();
}
//---------------------------------------------------------------------------
void __fastcall TUMainF::edtSend2KeyPress(TObject *Sender, System::WideChar &Key)

{
	if(Key == VK_RETURN){
		btSend2Click(NULL);
	}
}
//---------------------------------------------------------------------------
