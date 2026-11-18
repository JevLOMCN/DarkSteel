// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 5

// operator= @ 148e56cf0

/* WARNING: Enum "Type": Some values do not have unique names */

TRefCountPtr<FNiagaraDataBuffer> * __thiscall
TRefCountPtr<FNiagaraDataBuffer>::operator=
          (TRefCountPtr<FNiagaraDataBuffer> *this,TRefCountPtr<FNiagaraDataBuffer> *param_1)

{
  FNiagaraDataBuffer *pFVar1;
  code *pcVar2;
  bool bVar3;
  TRefCountPtr<FNiagaraDataBuffer> *pTVar4;
  
  if (this == param_1) {
    return this;
  }
  pFVar1 = this->Reference;
  this->Reference = param_1->Reference;
  param_1->Reference = (FNiagaraDataBuffer *)0x0;
  if (pFVar1 != (FNiagaraDataBuffer *)0x0) {
    if ((int)pFVar1->_padding_ < 1) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsBeingRead()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataSet.h"
                         ,0x2c,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pTVar4 = (TRefCountPtr<FNiagaraDataBuffer> *)(*pcVar2)();
        return pTVar4;
      }
    }
    LOCK();
    *(int *)&pFVar1->_padding_ = (int)pFVar1->_padding_ + -1;
    UNLOCK();
  }
  return this;
}

// operator= @ 149026ca0

/* WARNING: Enum "Type": Some values do not have unique names */

TRefCountPtr<FNiagaraDataBuffer> * __thiscall
TRefCountPtr<FNiagaraDataBuffer>::operator=
          (TRefCountPtr<FNiagaraDataBuffer> *this,FNiagaraDataBuffer *param_1)

{
  FNiagaraDataBuffer *pFVar1;
  code *pcVar2;
  bool bVar3;
  TRefCountPtr<FNiagaraDataBuffer> *pTVar4;
  
  pFVar1 = this->Reference;
  if (pFVar1 != param_1) {
    this->Reference = param_1;
    if (param_1 != (FNiagaraDataBuffer *)0x0) {
      if ((int)param_1->_padding_ == -1) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("!IsBeingWritten()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataSet.h"
                           ,0x26,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          pTVar4 = (TRefCountPtr<FNiagaraDataBuffer> *)(*pcVar2)();
          return pTVar4;
        }
      }
      LOCK();
      *(int *)&param_1->_padding_ = (int)param_1->_padding_ + 1;
      UNLOCK();
    }
    if (pFVar1 != (FNiagaraDataBuffer *)0x0) {
      if ((int)pFVar1->_padding_ < 1) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsBeingRead()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataSet.h"
                           ,0x2c,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          pTVar4 = (TRefCountPtr<FNiagaraDataBuffer> *)(*pcVar2)();
          return pTVar4;
        }
      }
      LOCK();
      *(int *)&pFVar1->_padding_ = (int)pFVar1->_padding_ + -1;
      UNLOCK();
    }
  }
  return this;
}

// TRefCountPtr<FNiagaraDataBuffer> @ 1490b08b0

/* WARNING: Enum "Type": Some values do not have unique names */

TRefCountPtr<FNiagaraDataBuffer> * __thiscall
TRefCountPtr<FNiagaraDataBuffer>::TRefCountPtr<FNiagaraDataBuffer>
          (TRefCountPtr<FNiagaraDataBuffer> *this,TRefCountPtr<FNiagaraDataBuffer> *param_1)

{
  FNiagaraDataBuffer *pFVar1;
  code *pcVar2;
  bool bVar3;
  TRefCountPtr<FNiagaraDataBuffer> *pTVar4;
  
  this->Reference = (FNiagaraDataBuffer *)0x0;
  pFVar1 = param_1->Reference;
  this->Reference = pFVar1;
  if (pFVar1 != (FNiagaraDataBuffer *)0x0) {
    if ((int)pFVar1->_padding_ == -1) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("!IsBeingWritten()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataSet.h"
                         ,0x26,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pTVar4 = (TRefCountPtr<FNiagaraDataBuffer> *)(*pcVar2)();
        return pTVar4;
      }
    }
    LOCK();
    *(int *)&pFVar1->_padding_ = (int)pFVar1->_padding_ + 1;
    UNLOCK();
  }
  return this;
}

// operator= @ 149216510

TRefCountPtr<FSkeletalMeshLODRenderData_const_> * __thiscall
TRefCountPtr<FSkeletalMeshLODRenderData_const_>::operator=
          (TRefCountPtr<FSkeletalMeshLODRenderData_const_> *this,FSkeletalMeshLODRenderData *param_1
          )

{
  longlong *plVar1;
  FSkeletalMeshLODRenderData *pFVar2;
  longlong lVar3;
  
  pFVar2 = this->Reference;
  if (pFVar2 != param_1) {
    this->Reference = param_1;
    if (param_1 != (FSkeletalMeshLODRenderData *)0x0) {
      LOCK();
      *(int *)&param_1->_padding_ = (int)param_1->_padding_ + 1;
      UNLOCK();
    }
    if (pFVar2 != (FSkeletalMeshLODRenderData *)0x0) {
      plVar1 = &pFVar2->_padding_;
      LOCK();
      lVar3 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if (((int)lVar3 == 1) && (plVar1 != (longlong *)0x0)) {
        (**(code **)pFVar2->_padding_)(pFVar2,1);
      }
    }
  }
  return this;
}

// ~TRefCountPtr<FNiagaraDataBuffer> @ 149279090

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TRefCountPtr<FNiagaraDataBuffer>::~TRefCountPtr<FNiagaraDataBuffer>
          (TRefCountPtr<FNiagaraDataBuffer> *this)

{
  FNiagaraDataBuffer *pFVar1;
  code *pcVar2;
  bool bVar3;
  
  pFVar1 = this->Reference;
  if (pFVar1 != (FNiagaraDataBuffer *)0x0) {
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
  }
  return;
}

