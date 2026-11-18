// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 1

// FNiagaraDataChannelPublishRequest @ 1490b1580

/* WARNING: Enum "Type": Some values do not have unique names */

FNiagaraDataChannelPublishRequest * __thiscall
FNiagaraDataChannelPublishRequest::FNiagaraDataChannelPublishRequest
          (FNiagaraDataChannelPublishRequest *this,FNiagaraDataChannelPublishRequest *param_1)

{
  FNiagaraDataBuffer *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  bool bVar4;
  FNiagaraDataChannelPublishRequest *pFVar5;
  
  (this->Data).Reference = (FNiagaraDataBuffer *)0x0;
  pFVar1 = (param_1->Data).Reference;
  (this->Data).Reference = pFVar1;
  if (pFVar1 != (FNiagaraDataBuffer *)0x0) {
    if ((int)pFVar1->_padding_ == -1) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("!IsBeingWritten()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataSet.h"
                         ,0x26,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pFVar5 = (FNiagaraDataChannelPublishRequest *)(*pcVar3)();
        return pFVar5;
      }
    }
    LOCK();
    *(int *)&pFVar1->_padding_ = (int)pFVar1->_padding_ + 1;
    UNLOCK();
  }
  (this->GameData).Object = (param_1->GameData).Object;
  pTVar2 = (param_1->GameData).SharedReferenceCount.ReferenceController;
  (this->GameData).SharedReferenceCount.ReferenceController = pTVar2;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  this->bVisibleToGame = param_1->bVisibleToGame;
  this->bVisibleToCPUSims = param_1->bVisibleToCPUSims;
  this->bVisibleToGPUSims = param_1->bVisibleToGPUSims;
  *(undefined8 *)&(this->LwcTile).field0_0x0 = *(undefined8 *)&(param_1->LwcTile).field0_0x0;
  (this->LwcTile).field0_0x0._s_0.Z = (param_1->LwcTile).field0_0x0._s_0.Z;
  ::FString::FString(&this->DebugSource,&param_1->DebugSource);
  return this;
}

