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
	TMemo *mmShow2;
	TEdit *edtSend2;
	TButton *btSend2;
	TIdUDPClient *IdUDPClient2;
	TIdUDPServer *IdUDPServer2;
	void __fastcall IdUDPServer2UDPRead(TIdUDPListenerThread *AThread, const TIdBytes AData,
          TIdSocketHandle *ABinding);
	void __fastcall btSend2Click(TObject *Sender);
	void __fastcall edtSend2KeyPress(TObject *Sender, System::WideChar &Key);
private:	// User declarations
public:		// User declarations
	__fastcall TUMainF(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TUMainF *UMainF;
//---------------------------------------------------------------------------
#endif
