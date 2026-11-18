// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ImageWriteQueue
// Functions: 18

// TImagePixelData<FColor> @ 1446e8b60

TImagePixelData<FColor> * __thiscall
TImagePixelData<FColor>::TImagePixelData<FColor>
          (TImagePixelData<FColor> *this,TImagePixelData<FColor> *param_1)

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
  this->_padding_ = (longlong)&___7__TImagePixelData_UFColor____6B_;
  (this->Pixels).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Pixels).AllocatorInstance.Data = (param_1->Pixels).AllocatorInstance.Data;
  (param_1->Pixels).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Pixels).ArrayNum = (param_1->Pixels).ArrayNum;
  (this->Pixels).ArrayMax = (param_1->Pixels).ArrayMax;
  (param_1->Pixels).ArrayNum = 0;
  (param_1->Pixels).ArrayMax = 0;
  return this;
}

// TImagePixelData<FColor> @ 1446e8bf0

TImagePixelData<FColor> * __thiscall
TImagePixelData<FColor>::TImagePixelData<FColor>
          (TImagePixelData<FColor> *this,TImagePixelData<FColor> *param_1)

{
  TArray<FColor,TSizedDefaultAllocator<64>_> *pTVar1;
  long64 *plVar2;
  longlong lVar3;
  FScriptContainerElement *_Src;
  
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
  lVar3 = param_1->_padding_;
  this->_padding_ = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  pTVar1 = &this->Pixels;
  this->_padding_ = (longlong)&___7__TImagePixelData_UFColor____6B_;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  plVar2 = &(this->Pixels).ArrayMax;
  lVar3 = (param_1->Pixels).ArrayNum;
  _Src = (param_1->Pixels).AllocatorInstance.Data;
  (this->Pixels).ArrayNum = lVar3;
  if (lVar3 == 0) {
    *plVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<64,FMemory>::ForAnyElementType>
              (4,4,lVar3,0,&pTVar1->AllocatorInstance,lVar3,plVar2);
    memcpy((pTVar1->AllocatorInstance).Data,_Src,lVar3 * 4);
  }
  return this;
}

// TImagePixelData<FColor> @ 1446e8ce0

TImagePixelData<FColor> * __thiscall
TImagePixelData<FColor>::TImagePixelData<FColor>
          (TImagePixelData<FColor> *this,TIntPoint<int> *param_1,
          TArray<FColor,TSizedDefaultAllocator<64>_> *param_2)

{
  this->_padding_ = (longlong)&___7FImagePixelData__6B_;
  this->_padding_ = (longlong)param_1->field0_0x0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0x1040801;
  this->_padding_ = 0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  this->_padding_ = (longlong)&___7__TImagePixelData_UFColor____6B_;
  (this->Pixels).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Pixels).AllocatorInstance.Data = (param_2->AllocatorInstance).Data;
  (param_2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->Pixels).ArrayNum = param_2->ArrayNum;
  (this->Pixels).ArrayMax = param_2->ArrayMax;
  param_2->ArrayNum = 0;
  param_2->ArrayMax = 0;
  return this;
}

// TImagePixelData<FLinearColor> @ 1446e8d70

TImagePixelData<FLinearColor> * __thiscall
TImagePixelData<FLinearColor>::TImagePixelData<FLinearColor>
          (TImagePixelData<FLinearColor> *this,TImagePixelData<FLinearColor> *param_1)

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
  this->_padding_ = (longlong)&___7__TImagePixelData_UFLinearColor____6B_;
  (this->Pixels).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Pixels).AllocatorInstance.Data = (param_1->Pixels).AllocatorInstance.Data;
  (param_1->Pixels).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Pixels).ArrayNum = (param_1->Pixels).ArrayNum;
  (this->Pixels).ArrayMax = (param_1->Pixels).ArrayMax;
  (param_1->Pixels).ArrayNum = 0;
  (param_1->Pixels).ArrayMax = 0;
  return this;
}

// TImagePixelData<FLinearColor> @ 1446e8e00

TImagePixelData<FLinearColor> * __thiscall
TImagePixelData<FLinearColor>::TImagePixelData<FLinearColor>
          (TImagePixelData<FLinearColor> *this,TImagePixelData<FLinearColor> *param_1)

{
  TArray<FLinearColor,TSizedDefaultAllocator<64>_> *pTVar1;
  long64 *plVar2;
  longlong lVar3;
  FScriptContainerElement *_Src;
  
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
  lVar3 = param_1->_padding_;
  this->_padding_ = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  pTVar1 = &this->Pixels;
  this->_padding_ = (longlong)&___7__TImagePixelData_UFLinearColor____6B_;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  plVar2 = &(this->Pixels).ArrayMax;
  lVar3 = (param_1->Pixels).ArrayNum;
  _Src = (param_1->Pixels).AllocatorInstance.Data;
  (this->Pixels).ArrayNum = lVar3;
  if (lVar3 == 0) {
    *plVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<64,FMemory>::ForAnyElementType>
              (0x10,4,lVar3,0,&pTVar1->AllocatorInstance,lVar3,plVar2);
    memcpy((pTVar1->AllocatorInstance).Data,_Src,lVar3 << 4);
  }
  return this;
}

// TImagePixelData<FLinearColor> @ 1446e8ef0

TImagePixelData<FLinearColor> * __thiscall
TImagePixelData<FLinearColor>::TImagePixelData<FLinearColor>
          (TImagePixelData<FLinearColor> *this,TIntPoint<int> *param_1,
          TArray<FLinearColor,TSizedDefaultAllocator<64>_> *param_2)

{
  this->_padding_ = (longlong)&___7FImagePixelData__6B_;
  this->_padding_ = (longlong)param_1->field0_0x0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 2;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0x42003;
  this->_padding_ = 0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  this->_padding_ = (longlong)&___7__TImagePixelData_UFLinearColor____6B_;
  (this->Pixels).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Pixels).AllocatorInstance.Data = (param_2->AllocatorInstance).Data;
  (param_2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->Pixels).ArrayNum = param_2->ArrayNum;
  (this->Pixels).ArrayMax = param_2->ArrayMax;
  param_2->ArrayNum = 0;
  param_2->ArrayMax = 0;
  return this;
}

// TImagePixelData<FFloat16Color> @ 1446e8f80

TImagePixelData<FFloat16Color> * __thiscall
TImagePixelData<FFloat16Color>::TImagePixelData<FFloat16Color>
          (TImagePixelData<FFloat16Color> *this,TImagePixelData<FFloat16Color> *param_1)

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
  this->_padding_ = (longlong)&___7__TImagePixelData_VFFloat16Color____6B_;
  (this->Pixels).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Pixels).AllocatorInstance.Data = (param_1->Pixels).AllocatorInstance.Data;
  (param_1->Pixels).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Pixels).ArrayNum = (param_1->Pixels).ArrayNum;
  (this->Pixels).ArrayMax = (param_1->Pixels).ArrayMax;
  (param_1->Pixels).ArrayNum = 0;
  (param_1->Pixels).ArrayMax = 0;
  return this;
}

// TImagePixelData<FFloat16Color> @ 1446e9010

TImagePixelData<FFloat16Color> * __thiscall
TImagePixelData<FFloat16Color>::TImagePixelData<FFloat16Color>
          (TImagePixelData<FFloat16Color> *this,TImagePixelData<FFloat16Color> *param_1)

{
  TArray<FFloat16Color,TSizedDefaultAllocator<64>_> *pTVar1;
  long64 *plVar2;
  longlong lVar3;
  FFloat16Color *pFVar4;
  
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
  lVar3 = param_1->_padding_;
  this->_padding_ = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  pTVar1 = &this->Pixels;
  this->_padding_ = (longlong)&___7__TImagePixelData_VFFloat16Color____6B_;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  plVar2 = &(this->Pixels).ArrayMax;
  lVar3 = (param_1->Pixels).ArrayNum;
  pFVar4 = (FFloat16Color *)(param_1->Pixels).AllocatorInstance.Data;
  (this->Pixels).ArrayNum = lVar3;
  if (lVar3 == 0) {
    *plVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<64,FMemory>::ForAnyElementType>
              (8,2,lVar3,0,&pTVar1->AllocatorInstance,lVar3,plVar2);
    ConstructItems<FFloat16Color,FFloat16Color,__int64>
              ((pTVar1->AllocatorInstance).Data,pFVar4,lVar3);
  }
  return this;
}

// TImagePixelData<FFloat16Color> @ 1446e9100

TImagePixelData<FFloat16Color> * __thiscall
TImagePixelData<FFloat16Color>::TImagePixelData<FFloat16Color>
          (TImagePixelData<FFloat16Color> *this,TIntPoint<int> *param_1,
          TArray<FFloat16Color,TSizedDefaultAllocator<64>_> *param_2)

{
  this->_padding_ = (longlong)&___7FImagePixelData__6B_;
  this->_padding_ = (longlong)param_1->field0_0x0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 1;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0x41003;
  this->_padding_ = 0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  this->_padding_ = (longlong)&___7__TImagePixelData_VFFloat16Color____6B_;
  (this->Pixels).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Pixels).AllocatorInstance.Data = (param_2->AllocatorInstance).Data;
  (param_2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->Pixels).ArrayNum = param_2->ArrayNum;
  (this->Pixels).ArrayMax = param_2->ArrayMax;
  param_2->ArrayNum = 0;
  param_2->ArrayMax = 0;
  return this;
}

// Copy @ 1446ebb90

TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_> __thiscall
TImagePixelData<FColor>::Copy(TImagePixelData<FColor> *this)

{
  TImagePixelData<FColor> *pTVar1;
  FImagePixelData *in_RDX;
  
  pTVar1 = ::operator_new(0x40);
  if (pTVar1 != (TImagePixelData<FColor> *)0x0) {
    pTVar1 = TImagePixelData<FColor>(pTVar1,this);
    in_RDX->_padding_ = (longlong)pTVar1;
    return (TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>)in_RDX;
  }
  in_RDX->_padding_ = 0;
  return (TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>)in_RDX;
}

// Copy @ 1446ebbf0

TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_> __thiscall
TImagePixelData<FLinearColor>::Copy(TImagePixelData<FLinearColor> *this)

{
  TImagePixelData<FLinearColor> *pTVar1;
  FImagePixelData *in_RDX;
  
  pTVar1 = ::operator_new(0x40);
  if (pTVar1 != (TImagePixelData<FLinearColor> *)0x0) {
    pTVar1 = TImagePixelData<FLinearColor>(pTVar1,this);
    in_RDX->_padding_ = (longlong)pTVar1;
    return (TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>)in_RDX;
  }
  in_RDX->_padding_ = 0;
  return (TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>)in_RDX;
}

// Copy @ 1446ebc50

TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_> __thiscall
TImagePixelData<FFloat16Color>::Copy(TImagePixelData<FFloat16Color> *this)

{
  TImagePixelData<FFloat16Color> *pTVar1;
  FImagePixelData *in_RDX;
  
  pTVar1 = ::operator_new(0x40);
  if (pTVar1 != (TImagePixelData<FFloat16Color> *)0x0) {
    pTVar1 = TImagePixelData<FFloat16Color>(pTVar1,this);
    in_RDX->_padding_ = (longlong)pTVar1;
    return (TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>)in_RDX;
  }
  in_RDX->_padding_ = 0;
  return (TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>)in_RDX;
}

// Move @ 1446ee580

TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_> __thiscall
TImagePixelData<FColor>::Move(TImagePixelData<FColor> *this)

{
  TImagePixelData<FColor> *pTVar1;
  FImagePixelData *in_RDX;
  
  pTVar1 = ::operator_new(0x40);
  if (pTVar1 != (TImagePixelData<FColor> *)0x0) {
    pTVar1 = TImagePixelData<FColor>(pTVar1,this);
    in_RDX->_padding_ = (longlong)pTVar1;
    return (TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>)in_RDX;
  }
  in_RDX->_padding_ = 0;
  return (TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>)in_RDX;
}

// Move @ 1446ee5e0

TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_> __thiscall
TImagePixelData<FLinearColor>::Move(TImagePixelData<FLinearColor> *this)

{
  TImagePixelData<FLinearColor> *pTVar1;
  FImagePixelData *in_RDX;
  
  pTVar1 = ::operator_new(0x40);
  if (pTVar1 != (TImagePixelData<FLinearColor> *)0x0) {
    pTVar1 = TImagePixelData<FLinearColor>(pTVar1,this);
    in_RDX->_padding_ = (longlong)pTVar1;
    return (TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>)in_RDX;
  }
  in_RDX->_padding_ = 0;
  return (TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>)in_RDX;
}

// Move @ 1446ee640

TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_> __thiscall
TImagePixelData<FFloat16Color>::Move(TImagePixelData<FFloat16Color> *this)

{
  TImagePixelData<FFloat16Color> *pTVar1;
  FImagePixelData *in_RDX;
  
  pTVar1 = ::operator_new(0x40);
  if (pTVar1 != (TImagePixelData<FFloat16Color> *)0x0) {
    pTVar1 = TImagePixelData<FFloat16Color>(pTVar1,this);
    in_RDX->_padding_ = (longlong)pTVar1;
    return (TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>)in_RDX;
  }
  in_RDX->_padding_ = 0;
  return (TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>)in_RDX;
}

// RetrieveData @ 1446ef920

void __thiscall
TImagePixelData<FColor>::RetrieveData(TImagePixelData<FColor> *this,void **param_1,long64 *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if ((this->Pixels).ArrayNum < 1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  *param_1 = (this->Pixels).AllocatorInstance.Data;
  *param_2 = (this->Pixels).ArrayNum << 2;
  return;
}

// RetrieveData @ 1446ef9a0

void __thiscall
TImagePixelData<FLinearColor>::RetrieveData
          (TImagePixelData<FLinearColor> *this,void **param_1,long64 *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if ((this->Pixels).ArrayNum < 1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  *param_1 = (this->Pixels).AllocatorInstance.Data;
  *param_2 = (this->Pixels).ArrayNum << 4;
  return;
}

// RetrieveData @ 1446efa20

void __thiscall
TImagePixelData<FFloat16Color>::RetrieveData
          (TImagePixelData<FFloat16Color> *this,void **param_1,long64 *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if ((this->Pixels).ArrayNum < 1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  *param_1 = (this->Pixels).AllocatorInstance.Data;
  *param_2 = (this->Pixels).ArrayNum << 3;
  return;
}

