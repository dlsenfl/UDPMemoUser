//---------------------------------------------------------------------------

#ifndef UMainUH
#define UMainUH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <IdBaseComponent.hpp>
#include <IdComponent.hpp>
#include <IdEchoUDP.hpp>
#include <IdUDPBase.hpp>
#include <IdUDPClient.hpp>
#include <IdSocketHandle.hpp>
#include <IdUDPServer.hpp>
//---------------------------------------------------------------------------
class TUMainF : public TForm
{
__published:	// IDE-managed Components
	TMemo *mmShow1;
	TEdit *edtSend1;
	TButton *btSend1;
	TIdUDPClient *IdUDPClient1;
	TIdUDPServer *IdUDPServer1;
	void __fastcall btSend1Click(TObject *Sender);
	void __fastcall edtSend1KeyPress(TObject *Sender, System::WideChar &Key);
	void __fastcall IdUDPServer1UDPRead(TIdUDPListenerThread *AThread, const TIdBytes AData,
          TIdSocketHandle *ABinding);
private:	// User declarations
public:		// User declarations
	__fastcall TUMainF(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TUMainF *UMainF;
//---------------------------------------------------------------------------
#endif
