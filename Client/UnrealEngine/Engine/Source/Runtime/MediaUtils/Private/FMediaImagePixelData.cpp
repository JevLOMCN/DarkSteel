// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MediaUtils
// Functions: 5

// FMediaImagePixelData @ 146bf2480

FMediaImagePixelData * __thiscall
FMediaImagePixelData::FMediaImagePixelData(FMediaImagePixelData *this,FMediaImagePixelData *param_1)

{
  longlong lVar1;
  
  this->_padding_ = (longlong)&___7FImagePixelData__6B_;
  this->_padding_ = param_1->_padding_;
  *(int *)&this->_padding_ = (int)param_1->_padding_;
  *(undefined1 *)((longlong)&this->_padding_ + 4) =
       *(undefined1 *)((longlong)&param_1->_padding_ + 4);
  *(undefined1 *)((longlong)&this->_padding_ + 5) =
       *(undefined1 *)((longlong)&param_1->_padding_ + 5);
  *(undefined1 *)((longlong)&this->_padding_ + 6) =
       *(undefined1 *)((longlong)&param_1->_padding_ + 6);
  *(undefined1 *)((longlong)&this->_padding_ + 7) =
       *(undefined1 *)((longlong)&param_1->_padding_ + 7);
  this->_padding_ = param_1->_padding_;
  lVar1 = param_1->_padding_;
  this->_padding_ = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  this->_padding_ = (longlong)&___7FMediaImagePixelData__6B_;
  (this->Sample).Object = (param_1->Sample).Object;
  (this->Sample).SharedReferenceCount.ReferenceController =
       (param_1->Sample).SharedReferenceCount.ReferenceController;
  (param_1->Sample).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (param_1->Sample).Object = (IMediaTextureSample *)0x0;
  return this;
}

// FMediaImagePixelData @ 146bf2500

FMediaImagePixelData * __thiscall
FMediaImagePixelData::FMediaImagePixelData(FMediaImagePixelData *this,FMediaImagePixelData *param_1)

{
  longlong lVar1;
  TReferenceControllerBase<1> *pTVar2;
  
  this->_padding_ = (longlong)&___7FImagePixelData__6B_;
  this->_padding_ = param_1->_padding_;
  *(int *)&this->_padding_ = (int)param_1->_padding_;
  *(undefined1 *)((longlong)&this->_padding_ + 4) =
       *(undefined1 *)((longlong)&param_1->_padding_ + 4);
  *(undefined1 *)((longlong)&this->_padding_ + 5) =
       *(undefined1 *)((longlong)&param_1->_padding_ + 5);
  *(undefined1 *)((longlong)&this->_padding_ + 6) =
       *(undefined1 *)((longlong)&param_1->_padding_ + 6);
  *(undefined1 *)((longlong)&this->_padding_ + 7) =
       *(undefined1 *)((longlong)&param_1->_padding_ + 7);
  this->_padding_ = param_1->_padding_;
  lVar1 = param_1->_padding_;
  this->_padding_ = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  this->_padding_ = (longlong)&___7FMediaImagePixelData__6B_;
  (this->Sample).Object = (param_1->Sample).Object;
  pTVar2 = (param_1->Sample).SharedReferenceCount.ReferenceController;
  (this->Sample).SharedReferenceCount.ReferenceController = pTVar2;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  return this;
}

// Copy @ 146bf7480

TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_> __thiscall
FMediaImagePixelData::Copy(FMediaImagePixelData *this)

{
  FMediaImagePixelData *pFVar1;
  FImagePixelData *in_RDX;
  
  pFVar1 = ::operator_new(0x38);
  if (pFVar1 != (FMediaImagePixelData *)0x0) {
    pFVar1 = FMediaImagePixelData(pFVar1,this);
    in_RDX->_padding_ = (longlong)pFVar1;
    return (TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>)in_RDX;
  }
  in_RDX->_padding_ = 0;
  return (TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>)in_RDX;
}

// Move @ 146c02d50

TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_> __thiscall
FMediaImagePixelData::Move(FMediaImagePixelData *this)

{
  FMediaImagePixelData *pFVar1;
  FImagePixelData *in_RDX;
  
  pFVar1 = ::operator_new(0x38);
  if (pFVar1 != (FMediaImagePixelData *)0x0) {
    pFVar1 = FMediaImagePixelData(pFVar1,this);
    in_RDX->_padding_ = (longlong)pFVar1;
    return (TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>)in_RDX;
  }
  in_RDX->_padding_ = 0;
  return (TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>)in_RDX;
}

// RetrieveData @ 146c0ba40

void __thiscall
FMediaImagePixelData::RetrieveData(FMediaImagePixelData *this,void **param_1,long64 *param_2)

{
  int iVar1;
  IMediaTextureSample *pIVar2;
  IMediaTextureSample *pIVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  void *pvVar7;
  longlong lVar8;
  undefined1 local_res8 [8];
  
  if ((this->Sample).Object == (IMediaTextureSample *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pvVar7 = (void *)(**(code **)*(this->Sample).Object)();
  *param_1 = pvVar7;
  if ((this->Sample).Object == (IMediaTextureSample *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pIVar2 = (this->Sample).Object;
  if (pIVar2 == (IMediaTextureSample *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pIVar3 = (this->Sample).Object;
  lVar8 = (**(code **)((longlong)*pIVar3 + 8))(pIVar3,local_res8);
  iVar1 = *(int *)(lVar8 + 4);
  uVar6 = (**(code **)((longlong)*pIVar2 + 0x38))(pIVar2);
  *param_2 = (ulonglong)uVar6 * (longlong)iVar1;
  return;
}

