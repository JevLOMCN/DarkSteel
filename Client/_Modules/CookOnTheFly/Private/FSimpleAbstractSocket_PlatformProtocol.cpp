// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CookOnTheFly
// Functions: 3

// GetMagic @ 14311df90

uint __thiscall
_anon_3CB2A585::FSimpleAbstractSocket_PlatformProtocol::GetMagic
          (FSimpleAbstractSocket_PlatformProtocol *this)

{
  return 0x9e2b83c7;
}

// Receive @ 14311ece0

bool __thiscall
_anon_3CB2A585::FSimpleAbstractSocket_PlatformProtocol::Receive
          (FSimpleAbstractSocket_PlatformProtocol *this,uchar *param_1,int param_2)

{
  IPlatformHostSocket *pIVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  char cVar5;
  undefined1 local_res8 [8];
  
  if ((this->HostSocket).Object == (IPlatformHostSocket *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  pIVar1 = (this->HostSocket).Object;
  cVar5 = (**(code **)((longlong)*pIVar1 + 8))(pIVar1,param_1,(longlong)param_2,local_res8,1);
  return cVar5 == '\0';
}

// Send @ 14311f950

bool __thiscall
_anon_3CB2A585::FSimpleAbstractSocket_PlatformProtocol::Send
          (FSimpleAbstractSocket_PlatformProtocol *this,uchar *param_1,int param_2)

{
  IPlatformHostSocket *pIVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  char cVar5;
  
  if ((this->HostSocket).Object == (IPlatformHostSocket *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  pIVar1 = (this->HostSocket).Object;
  cVar5 = (**(code **)*pIVar1)(pIVar1,param_1,(longlong)param_2);
  return cVar5 == '\0';
}

