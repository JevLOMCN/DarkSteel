// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 1

// ~FStatelessDataCache @ 14942c470

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FNiagaraStatelessComputeManager::FStatelessDataCache::~FStatelessDataCache
          (FStatelessDataCache *this)

{
  FNiagaraDataBuffer *pFVar1;
  code *pcVar2;
  bool bVar3;
  
  pFVar1 = (this->DataBuffer).Reference;
  if (pFVar1 != (FNiagaraDataBuffer *)0x0) {
    FNiagaraSharedObject::Destroy((FNiagaraSharedObject *)pFVar1);
    pFVar1 = (this->DataBuffer).Reference;
    if (pFVar1 != (FNiagaraDataBuffer *)0x0) {
      (this->DataBuffer).Reference = (FNiagaraDataBuffer *)0x0;
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
  }
  pFVar1 = (this->DataBuffer).Reference;
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
  FNiagaraDataSet::~FNiagaraDataSet(&this->DataSet);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->DataSetCompiledData).SharedReferenceCount.ReferenceController);
  return;
}

