// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineSubsystemUtils
// Functions: 1

// FOnlineUserStatsPair<FOnlineStatUpdate> @ 14ecd7290

FOnlineUserStatsPair<FOnlineStatUpdate> * __thiscall
FOnlineUserStatsPair<FOnlineStatUpdate>::FOnlineUserStatsPair<FOnlineStatUpdate>
          (FOnlineUserStatsPair<FOnlineStatUpdate> *this,TSharedRef<FUniqueNetId_const_,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  char cVar3;
  bool bVar4;
  FOnlineUserStatsPair<FOnlineStatUpdate> *pFVar5;
  
  (this->Account).Object = param_1->Object;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  (this->Account).SharedReferenceCount.ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  *(undefined8 *)&this->Stats = 0;
  *(undefined8 *)&(this->Stats).field_0x8 = 0;
  *(undefined8 *)&(this->Stats).field_0x20 = 0;
  *(undefined4 *)&(this->Stats).field_0x28 = 0;
  *(undefined4 *)&(this->Stats).field_0x2c = 0x80;
  *(undefined4 *)&(this->Stats).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->Stats).field_0x34 = 0;
  *(undefined8 *)&(this->Stats).field_0x40 = 0;
  *(undefined4 *)&(this->Stats).field_0x48 = 0;
  cVar3 = (**(code **)(*(longlong *)(this->Account).Object + 0x28))();
  if (cVar3 == '\0') {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Account->IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineSubsystem\\Source\\Public\\Interfaces\\OnlineStatsInterface.h"
                       ,0xd9,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FOnlineUserStatsPair<FOnlineStatUpdate> *)(*pcVar2)();
      return pFVar5;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return this;
}

