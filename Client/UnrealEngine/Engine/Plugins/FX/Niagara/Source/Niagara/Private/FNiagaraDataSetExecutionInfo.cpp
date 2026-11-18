// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 2

// Init @ 1493a8570

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FNiagaraDataSetExecutionInfo::Init
          (FNiagaraDataSetExecutionInfo *this,FNiagaraDataSet *param_1,FNiagaraDataBuffer *param_2,
          int param_3,bool param_4)

{
  FNiagaraDataBuffer *pFVar1;
  code *pcVar2;
  bool bVar3;
  
  this->DataSet = param_1;
  TRefCountPtr<FNiagaraDataBuffer>::operator=(&this->Input,param_2);
  this->bUpdateInstanceCount = param_4;
  this->StartInstance = param_3;
  if (this->DataSet == (FNiagaraDataSet *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("DataSet",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraScriptExecutionContext.h"
                       ,0x4c,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar1 = (this->Input).Reference;
  if ((pFVar1 != (FNiagaraDataBuffer *)0x0) && (this->DataSet != pFVar1->Owner)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Input == nullptr || DataSet == Input->GetOwner()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraScriptExecutionContext.h"
                       ,0x4d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  return;
}

// Reset @ 1493b5070

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FNiagaraDataSetExecutionInfo::Reset(FNiagaraDataSetExecutionInfo *this)

{
  FNiagaraDataBuffer *pFVar1;
  code *pcVar2;
  bool bVar3;
  
  this->DataSet = (FNiagaraDataSet *)0x0;
  pFVar1 = (this->Input).Reference;
  if (pFVar1 == (FNiagaraDataBuffer *)0x0) {
    this->StartInstance = -1;
    this->bUpdateInstanceCount = false;
    return;
  }
  (this->Input).Reference = (FNiagaraDataBuffer *)0x0;
  if ((int)pFVar1->_padding_ < 1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsBeingRead()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataSet.h"
                       ,0x2c,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  LOCK();
  *(int *)&pFVar1->_padding_ = (int)pFVar1->_padding_ + -1;
  UNLOCK();
  this->StartInstance = -1;
  this->bUpdateInstanceCount = false;
  return;
}

