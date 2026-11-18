// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineServicesCommon
// Functions: 3

// TOnlineId<UE::Online::OnlineIdHandleTags::FAccount> @ 14efe2dd0

TOnlineId<UE::Online::OnlineIdHandleTags::FAccount> * __thiscall
UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>::
TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>
          (TOnlineId<UE::Online::OnlineIdHandleTags::FAccount> *this,EOnlineServices param_1,
          uint param_2)

{
  code *pcVar1;
  bool bVar2;
  TOnlineId<UE::Online::OnlineIdHandleTags::FAccount> *pTVar3;
  
  this->Value = 0;
  if (0xfeffffff < param_2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Handle < 0xFF000000",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreOnline\\Public\\Online\\CoreOnline.h"
                       ,0x13a,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TOnlineId<UE::Online::OnlineIdHandleTags::FAccount> *)(*pcVar1)();
      return pTVar3;
    }
  }
  this->Value = (uint)param_1 << 0x18 | param_2 & 0xffffff;
  return this;
}

// TOnlineId<UE::Online::OnlineIdHandleTags::FLobby> @ 14efe2e50

TOnlineId<UE::Online::OnlineIdHandleTags::FLobby> * __thiscall
UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FLobby>::
TOnlineId<UE::Online::OnlineIdHandleTags::FLobby>
          (TOnlineId<UE::Online::OnlineIdHandleTags::FLobby> *this,EOnlineServices param_1,
          uint param_2)

{
  code *pcVar1;
  bool bVar2;
  TOnlineId<UE::Online::OnlineIdHandleTags::FLobby> *pTVar3;
  
  this->Value = 0;
  if (0xfeffffff < param_2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Handle < 0xFF000000",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreOnline\\Public\\Online\\CoreOnline.h"
                       ,0x13a,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TOnlineId<UE::Online::OnlineIdHandleTags::FLobby> *)(*pcVar1)();
      return pTVar3;
    }
  }
  this->Value = (uint)param_1 << 0x18 | param_2 & 0xffffff;
  return this;
}

// IsValid @ 14efff750

bool __thiscall
UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>::IsValid
          (TOnlineId<UE::Online::OnlineIdHandleTags::FAccount> *this)

{
  return (this->Value & 0xffffff) != 0;
}

