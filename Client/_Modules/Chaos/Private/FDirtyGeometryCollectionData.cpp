// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 2

// operator= @ 143afdf00

FDirtyGeometryCollectionData * __thiscall
Chaos::FDirtyGeometryCollectionData::operator=
          (FDirtyGeometryCollectionData *this,FDirtyGeometryCollectionData *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  FGeometryCollectionResults *pFVar4;
  FGeometryCollectionResults *pFVar5;
  TReferenceControllerBase<1> *pTVar6;
  
  this->_padding_ = param_1->_padding_;
  lVar2 = param_1->_padding_;
  lVar3 = param_1->_padding_;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  pTVar6 = (TReferenceControllerBase<1> *)this->_padding_;
  this->_padding_ = lVar3;
  this->_padding_ = lVar2;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  pFVar4 = (param_1->ResultPtr).Reference;
  pFVar5 = (this->ResultPtr).Reference;
  if (pFVar5 != pFVar4) {
    (this->ResultPtr).Reference = pFVar4;
    if (pFVar4 != (FGeometryCollectionResults *)0x0) {
      *(int *)&pFVar4->_padding_ = (int)pFVar4->_padding_ + 1;
    }
    if (pFVar5 != (FGeometryCollectionResults *)0x0) {
      plVar1 = &pFVar5->_padding_;
      *(int *)plVar1 = (int)*plVar1 + -1;
      if ((int)*plVar1 == 0) {
        (**(code **)pFVar5->_padding_)(pFVar5,1);
      }
    }
  }
  return this;
}

// Results @ 14412ba90

FGeometryCollectionResults * __thiscall
Chaos::FDirtyGeometryCollectionData::Results(FDirtyGeometryCollectionData *this)

{
  code *pcVar1;
  bool bVar2;
  FGeometryCollectionResults *pFVar3;
  
  if ((this->ResultPtr).Reference != (FGeometryCollectionResults *)0x0) {
    return (this->ResultPtr).Reference;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("ResultPtr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\PullPhysicsDataImp.h"
                     ,0x59,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FGeometryCollectionResults *)(*pcVar1)();
    return pFVar3;
  }
  return (this->ResultPtr).Reference;
}

