// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 58

// GetPaintWindow @ 14243f550

/* WARNING: Enum "Type": Some values do not have unique names */

SWindow * __thiscall FSlateWindowElementList::GetPaintWindow(FSlateWindowElementList *this)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  SWindow *pSVar4;
  
  bVar3 = IsInGameThread();
  if (!bVar3) {
    bVar3 = IsInSlateThread();
    if (!bVar3) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread() || IsInSlateThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Rendering\\DrawElements.h"
                         ,0xec,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pSVar4 = (SWindow *)(*pcVar2)();
        return pSVar4;
      }
    }
  }
  if ((((this->WeakPaintWindow).Object != (SWindow *)0x0) &&
      (pTVar1 = (this->WeakPaintWindow).WeakReferenceCount.ReferenceController,
      pTVar1 != (TReferenceControllerBase<1> *)0x0)) && (0 < (int)pTVar1->SharedReferenceCount)) {
    return this->RawPaintWindow;
  }
  return (SWindow *)0x0;
}

// AddCachedElement<1> @ 1424cadc0

/* WARNING: Enum "Type": Some values do not have unique names */

FSlateBoxElement * __thiscall
FSlateWindowElementList::AddCachedElement<1>(FSlateWindowElementList *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  int iVar3;
  TReferenceControllerBase<1> *pTVar4;
  TReferenceControllerBase<1> *pTVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  FSlateCachedElementData *this_00;
  FSlateBoxElement *pFVar9;
  FSlateCachedElementsHandle *pFVar10;
  ForElementType<FSlateWindowElementList::FWidgetDrawElementState> FVar11;
  uint uVar12;
  FSlateCachedElementsHandle *pFVar13;
  FSlateCachedElementsHandle local_18;
  
  this_00 = GetCurrentCachedElementData(this);
  if ((this_00 == (FSlateCachedElementData *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("CurrentCachedElementData",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Rendering\\DrawElements.h"
                         ,0x1ac,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    pFVar9 = (FSlateBoxElement *)(*pcVar6)();
    return pFVar9;
  }
  iVar3 = (this->WidgetDrawStack).ArrayNum;
  uVar12 = iVar3 - 1;
  uVar8 = 0;
  if ((int)uVar12 < iVar3) {
    uVar8 = ~uVar12 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar6 = (code *)swi(3);
    pFVar9 = (FSlateBoxElement *)(*pcVar6)();
    return pFVar9;
  }
  FVar11 = (this->WidgetDrawStack).AllocatorInstance.SecondaryData;
  if (FVar11 == (ForElementType<FSlateWindowElementList::FWidgetDrawElementState>)0x0) {
    FVar11 = (ForElementType<FSlateWindowElementList::FWidgetDrawElementState>)
             &this->WidgetDrawStack;
  }
  pFVar13 = (FSlateCachedElementsHandle *)
            ((longlong)(this->WidgetDrawStack).ArrayNum * 0x20 + -0x20 + (longlong)FVar11);
  if ((*(char *)&pFVar13[1].Ptr.WeakReferenceCount.ReferenceController != '\0') &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("!CurrentWidgetState.bIsVolatile",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Rendering\\DrawElements.h"
                         ,0x1af,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    pFVar9 = (FSlateBoxElement *)(*pcVar6)();
    return pFVar9;
  }
  if ((((pFVar13->Ptr).Object == (FSlateCachedElementList *)0x0) ||
      (pTVar4 = (pFVar13->Ptr).WeakReferenceCount.ReferenceController,
      pTVar4 == (TReferenceControllerBase<1> *)0x0)) || ((int)pTVar4->SharedReferenceCount < 1)) {
    pFVar10 = FSlateCachedElementData::AddCache(this_00,&local_18,(SWidget *)pFVar13[1].Ptr.Object);
    if (pFVar13 != pFVar10) {
      (pFVar13->Ptr).Object = (pFVar10->Ptr).Object;
      pTVar4 = (pFVar10->Ptr).WeakReferenceCount.ReferenceController;
      (pFVar10->Ptr).Object = (FSlateCachedElementList *)0x0;
      pTVar5 = (pFVar13->Ptr).WeakReferenceCount.ReferenceController;
      (pFVar13->Ptr).WeakReferenceCount.ReferenceController = pTVar4;
      (pFVar10->Ptr).WeakReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        paVar1 = &pTVar5->WeakReferenceCount;
        aVar2 = *paVar1;
        *paVar1 = (atomic<int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar2 == (atomic<int>)0x1) {
          (**(code **)(pTVar5->_padding_ + 8))(pTVar5,1);
        }
      }
    }
    if (local_18.Ptr.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &(local_18.Ptr.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)((local_18.Ptr.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                  (local_18.Ptr.WeakReferenceCount.ReferenceController,1);
      }
    }
  }
  pFVar9 = FSlateCachedElementData::AddCachedElement<1>
                     (this_00,pFVar13,&this->ClippingManager,(SWidget *)pFVar13[1].Ptr.Object);
  return pFVar9;
}

// AddCachedElement<2> @ 1424cb0d0

/* WARNING: Enum "Type": Some values do not have unique names */

FSlateTextElement * __thiscall
FSlateWindowElementList::AddCachedElement<2>(FSlateWindowElementList *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  int iVar3;
  TReferenceControllerBase<1> *pTVar4;
  TReferenceControllerBase<1> *pTVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  FSlateCachedElementData *this_00;
  FSlateTextElement *pFVar9;
  FSlateCachedElementsHandle *pFVar10;
  ForElementType<FSlateWindowElementList::FWidgetDrawElementState> FVar11;
  uint uVar12;
  FSlateCachedElementsHandle *pFVar13;
  FSlateCachedElementsHandle local_18;
  
  this_00 = GetCurrentCachedElementData(this);
  if ((this_00 == (FSlateCachedElementData *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("CurrentCachedElementData",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Rendering\\DrawElements.h"
                         ,0x1ac,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    pFVar9 = (FSlateTextElement *)(*pcVar6)();
    return pFVar9;
  }
  iVar3 = (this->WidgetDrawStack).ArrayNum;
  uVar12 = iVar3 - 1;
  uVar8 = 0;
  if ((int)uVar12 < iVar3) {
    uVar8 = ~uVar12 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar6 = (code *)swi(3);
    pFVar9 = (FSlateTextElement *)(*pcVar6)();
    return pFVar9;
  }
  FVar11 = (this->WidgetDrawStack).AllocatorInstance.SecondaryData;
  if (FVar11 == (ForElementType<FSlateWindowElementList::FWidgetDrawElementState>)0x0) {
    FVar11 = (ForElementType<FSlateWindowElementList::FWidgetDrawElementState>)
             &this->WidgetDrawStack;
  }
  pFVar13 = (FSlateCachedElementsHandle *)
            ((longlong)(this->WidgetDrawStack).ArrayNum * 0x20 + -0x20 + (longlong)FVar11);
  if ((*(char *)&pFVar13[1].Ptr.WeakReferenceCount.ReferenceController != '\0') &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("!CurrentWidgetState.bIsVolatile",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Rendering\\DrawElements.h"
                         ,0x1af,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    pFVar9 = (FSlateTextElement *)(*pcVar6)();
    return pFVar9;
  }
  if ((((pFVar13->Ptr).Object == (FSlateCachedElementList *)0x0) ||
      (pTVar4 = (pFVar13->Ptr).WeakReferenceCount.ReferenceController,
      pTVar4 == (TReferenceControllerBase<1> *)0x0)) || ((int)pTVar4->SharedReferenceCount < 1)) {
    pFVar10 = FSlateCachedElementData::AddCache(this_00,&local_18,(SWidget *)pFVar13[1].Ptr.Object);
    if (pFVar13 != pFVar10) {
      (pFVar13->Ptr).Object = (pFVar10->Ptr).Object;
      pTVar4 = (pFVar10->Ptr).WeakReferenceCount.ReferenceController;
      (pFVar10->Ptr).Object = (FSlateCachedElementList *)0x0;
      pTVar5 = (pFVar13->Ptr).WeakReferenceCount.ReferenceController;
      (pFVar13->Ptr).WeakReferenceCount.ReferenceController = pTVar4;
      (pFVar10->Ptr).WeakReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        paVar1 = &pTVar5->WeakReferenceCount;
        aVar2 = *paVar1;
        *paVar1 = (atomic<int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar2 == (atomic<int>)0x1) {
          (**(code **)(pTVar5->_padding_ + 8))(pTVar5,1);
        }
      }
    }
    if (local_18.Ptr.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &(local_18.Ptr.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)((local_18.Ptr.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                  (local_18.Ptr.WeakReferenceCount.ReferenceController,1);
      }
    }
  }
  pFVar9 = FSlateCachedElementData::AddCachedElement<2>
                     (this_00,pFVar13,&this->ClippingManager,(SWidget *)pFVar13[1].Ptr.Object);
  return pFVar9;
}

// AddCachedElement<3> @ 1424cb3f0

/* WARNING: Enum "Type": Some values do not have unique names */

FSlateShapedTextElement * __thiscall
FSlateWindowElementList::AddCachedElement<3>(FSlateWindowElementList *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  int iVar3;
  TReferenceControllerBase<1> *pTVar4;
  TReferenceControllerBase<1> *pTVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  FSlateCachedElementData *this_00;
  FSlateShapedTextElement *pFVar9;
  FSlateCachedElementsHandle *pFVar10;
  ForElementType<FSlateWindowElementList::FWidgetDrawElementState> FVar11;
  uint uVar12;
  FSlateCachedElementsHandle *pFVar13;
  FSlateCachedElementsHandle local_18;
  
  this_00 = GetCurrentCachedElementData(this);
  if ((this_00 == (FSlateCachedElementData *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("CurrentCachedElementData",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Rendering\\DrawElements.h"
                         ,0x1ac,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    pFVar9 = (FSlateShapedTextElement *)(*pcVar6)();
    return pFVar9;
  }
  iVar3 = (this->WidgetDrawStack).ArrayNum;
  uVar12 = iVar3 - 1;
  uVar8 = 0;
  if ((int)uVar12 < iVar3) {
    uVar8 = ~uVar12 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar6 = (code *)swi(3);
    pFVar9 = (FSlateShapedTextElement *)(*pcVar6)();
    return pFVar9;
  }
  FVar11 = (this->WidgetDrawStack).AllocatorInstance.SecondaryData;
  if (FVar11 == (ForElementType<FSlateWindowElementList::FWidgetDrawElementState>)0x0) {
    FVar11 = (ForElementType<FSlateWindowElementList::FWidgetDrawElementState>)
             &this->WidgetDrawStack;
  }
  pFVar13 = (FSlateCachedElementsHandle *)
            ((longlong)(this->WidgetDrawStack).ArrayNum * 0x20 + -0x20 + (longlong)FVar11);
  if ((*(char *)&pFVar13[1].Ptr.WeakReferenceCount.ReferenceController != '\0') &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("!CurrentWidgetState.bIsVolatile",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Rendering\\DrawElements.h"
                         ,0x1af,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    pFVar9 = (FSlateShapedTextElement *)(*pcVar6)();
    return pFVar9;
  }
  if ((((pFVar13->Ptr).Object == (FSlateCachedElementList *)0x0) ||
      (pTVar4 = (pFVar13->Ptr).WeakReferenceCount.ReferenceController,
      pTVar4 == (TReferenceControllerBase<1> *)0x0)) || ((int)pTVar4->SharedReferenceCount < 1)) {
    pFVar10 = FSlateCachedElementData::AddCache(this_00,&local_18,(SWidget *)pFVar13[1].Ptr.Object);
    if (pFVar13 != pFVar10) {
      (pFVar13->Ptr).Object = (pFVar10->Ptr).Object;
      pTVar4 = (pFVar10->Ptr).WeakReferenceCount.ReferenceController;
      (pFVar10->Ptr).Object = (FSlateCachedElementList *)0x0;
      pTVar5 = (pFVar13->Ptr).WeakReferenceCount.ReferenceController;
      (pFVar13->Ptr).WeakReferenceCount.ReferenceController = pTVar4;
      (pFVar10->Ptr).WeakReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        paVar1 = &pTVar5->WeakReferenceCount;
        aVar2 = *paVar1;
        *paVar1 = (atomic<int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar2 == (atomic<int>)0x1) {
          (**(code **)(pTVar5->_padding_ + 8))(pTVar5,1);
        }
      }
    }
    if (local_18.Ptr.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &(local_18.Ptr.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)((local_18.Ptr.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                  (local_18.Ptr.WeakReferenceCount.ReferenceController,1);
      }
    }
  }
  pFVar9 = FSlateCachedElementData::AddCachedElement<3>
                     (this_00,pFVar13,&this->ClippingManager,(SWidget *)pFVar13[1].Ptr.Object);
  return pFVar9;
}

// AddCachedElement<4> @ 1424cb710

/* WARNING: Enum "Type": Some values do not have unique names */

FSlateSplineElement * __thiscall
FSlateWindowElementList::AddCachedElement<4>(FSlateWindowElementList *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  int iVar3;
  TReferenceControllerBase<1> *pTVar4;
  TReferenceControllerBase<1> *pTVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  FSlateCachedElementData *this_00;
  FSlateSplineElement *pFVar9;
  FSlateCachedElementsHandle *pFVar10;
  ForElementType<FSlateWindowElementList::FWidgetDrawElementState> FVar11;
  uint uVar12;
  FSlateCachedElementsHandle *pFVar13;
  FSlateCachedElementsHandle local_18;
  
  this_00 = GetCurrentCachedElementData(this);
  if ((this_00 == (FSlateCachedElementData *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("CurrentCachedElementData",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Rendering\\DrawElements.h"
                         ,0x1ac,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    pFVar9 = (FSlateSplineElement *)(*pcVar6)();
    return pFVar9;
  }
  iVar3 = (this->WidgetDrawStack).ArrayNum;
  uVar12 = iVar3 - 1;
  uVar8 = 0;
  if ((int)uVar12 < iVar3) {
    uVar8 = ~uVar12 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar6 = (code *)swi(3);
    pFVar9 = (FSlateSplineElement *)(*pcVar6)();
    return pFVar9;
  }
  FVar11 = (this->WidgetDrawStack).AllocatorInstance.SecondaryData;
  if (FVar11 == (ForElementType<FSlateWindowElementList::FWidgetDrawElementState>)0x0) {
    FVar11 = (ForElementType<FSlateWindowElementList::FWidgetDrawElementState>)
             &this->WidgetDrawStack;
  }
  pFVar13 = (FSlateCachedElementsHandle *)
            ((longlong)(this->WidgetDrawStack).ArrayNum * 0x20 + -0x20 + (longlong)FVar11);
  if ((*(char *)&pFVar13[1].Ptr.WeakReferenceCount.ReferenceController != '\0') &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("!CurrentWidgetState.bIsVolatile",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Rendering\\DrawElements.h"
                         ,0x1af,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    pFVar9 = (FSlateSplineElement *)(*pcVar6)();
    return pFVar9;
  }
  if ((((pFVar13->Ptr).Object == (FSlateCachedElementList *)0x0) ||
      (pTVar4 = (pFVar13->Ptr).WeakReferenceCount.ReferenceController,
      pTVar4 == (TReferenceControllerBase<1> *)0x0)) || ((int)pTVar4->SharedReferenceCount < 1)) {
    pFVar10 = FSlateCachedElementData::AddCache(this_00,&local_18,(SWidget *)pFVar13[1].Ptr.Object);
    if (pFVar13 != pFVar10) {
      (pFVar13->Ptr).Object = (pFVar10->Ptr).Object;
      pTVar4 = (pFVar10->Ptr).WeakReferenceCount.ReferenceController;
      (pFVar10->Ptr).Object = (FSlateCachedElementList *)0x0;
      pTVar5 = (pFVar13->Ptr).WeakReferenceCount.ReferenceController;
      (pFVar13->Ptr).WeakReferenceCount.ReferenceController = pTVar4;
      (pFVar10->Ptr).WeakReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        paVar1 = &pTVar5->WeakReferenceCount;
        aVar2 = *paVar1;
        *paVar1 = (atomic<int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar2 == (atomic<int>)0x1) {
          (**(code **)(pTVar5->_padding_ + 8))(pTVar5,1);
        }
      }
    }
    if (local_18.Ptr.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &(local_18.Ptr.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)((local_18.Ptr.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                  (local_18.Ptr.WeakReferenceCount.ReferenceController,1);
      }
    }
  }
  pFVar9 = FSlateCachedElementData::AddCachedElement<4>
                     (this_00,pFVar13,&this->ClippingManager,(SWidget *)pFVar13[1].Ptr.Object);
  return pFVar9;
}

// AddCachedElement<5> @ 1424cba30

/* WARNING: Enum "Type": Some values do not have unique names */

FSlateLineElement * __thiscall
FSlateWindowElementList::AddCachedElement<5>(FSlateWindowElementList *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  int iVar3;
  TReferenceControllerBase<1> *pTVar4;
  TReferenceControllerBase<1> *pTVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  FSlateCachedElementData *this_00;
  FSlateLineElement *pFVar9;
  FSlateCachedElementsHandle *pFVar10;
  ForElementType<FSlateWindowElementList::FWidgetDrawElementState> FVar11;
  uint uVar12;
  FSlateCachedElementsHandle *pFVar13;
  FSlateCachedElementsHandle local_18;
  
  this_00 = GetCurrentCachedElementData(this);
  if ((this_00 == (FSlateCachedElementData *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("CurrentCachedElementData",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Rendering\\DrawElements.h"
                         ,0x1ac,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    pFVar9 = (FSlateLineElement *)(*pcVar6)();
    return pFVar9;
  }
  iVar3 = (this->WidgetDrawStack).ArrayNum;
  uVar12 = iVar3 - 1;
  uVar8 = 0;
  if ((int)uVar12 < iVar3) {
    uVar8 = ~uVar12 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar6 = (code *)swi(3);
    pFVar9 = (FSlateLineElement *)(*pcVar6)();
    return pFVar9;
  }
  FVar11 = (this->WidgetDrawStack).AllocatorInstance.SecondaryData;
  if (FVar11 == (ForElementType<FSlateWindowElementList::FWidgetDrawElementState>)0x0) {
    FVar11 = (ForElementType<FSlateWindowElementList::FWidgetDrawElementState>)
             &this->WidgetDrawStack;
  }
  pFVar13 = (FSlateCachedElementsHandle *)
            ((longlong)(this->WidgetDrawStack).ArrayNum * 0x20 + -0x20 + (longlong)FVar11);
  if ((*(char *)&pFVar13[1].Ptr.WeakReferenceCount.ReferenceController != '\0') &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("!CurrentWidgetState.bIsVolatile",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Rendering\\DrawElements.h"
                         ,0x1af,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    pFVar9 = (FSlateLineElement *)(*pcVar6)();
    return pFVar9;
  }
  if ((((pFVar13->Ptr).Object == (FSlateCachedElementList *)0x0) ||
      (pTVar4 = (pFVar13->Ptr).WeakReferenceCount.ReferenceController,
      pTVar4 == (TReferenceControllerBase<1> *)0x0)) || ((int)pTVar4->SharedReferenceCount < 1)) {
    pFVar10 = FSlateCachedElementData::AddCache(this_00,&local_18,(SWidget *)pFVar13[1].Ptr.Object);
    if (pFVar13 != pFVar10) {
      (pFVar13->Ptr).Object = (pFVar10->Ptr).Object;
      pTVar4 = (pFVar10->Ptr).WeakReferenceCount.ReferenceController;
      (pFVar10->Ptr).Object = (FSlateCachedElementList *)0x0;
      pTVar5 = (pFVar13->Ptr).WeakReferenceCount.ReferenceController;
      (pFVar13->Ptr).WeakReferenceCount.ReferenceController = pTVar4;
      (pFVar10->Ptr).WeakReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        paVar1 = &pTVar5->WeakReferenceCount;
        aVar2 = *paVar1;
        *paVar1 = (atomic<int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar2 == (atomic<int>)0x1) {
          (**(code **)(pTVar5->_padding_ + 8))(pTVar5,1);
        }
      }
    }
    if (local_18.Ptr.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &(local_18.Ptr.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)((local_18.Ptr.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                  (local_18.Ptr.WeakReferenceCount.ReferenceController,1);
      }
    }
  }
  pFVar9 = FSlateCachedElementData::AddCachedElement<5>
                     (this_00,pFVar13,&this->ClippingManager,(SWidget *)pFVar13[1].Ptr.Object);
  return pFVar9;
}

// AddCachedElement<6> @ 1424cbd50

/* WARNING: Enum "Type": Some values do not have unique names */

FSlateGradientElement * __thiscall
FSlateWindowElementList::AddCachedElement<6>(FSlateWindowElementList *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  int iVar3;
  TReferenceControllerBase<1> *pTVar4;
  TReferenceControllerBase<1> *pTVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  FSlateCachedElementData *this_00;
  FSlateGradientElement *pFVar9;
  FSlateCachedElementsHandle *pFVar10;
  ForElementType<FSlateWindowElementList::FWidgetDrawElementState> FVar11;
  uint uVar12;
  FSlateCachedElementsHandle *pFVar13;
  FSlateCachedElementsHandle local_18;
  
  this_00 = GetCurrentCachedElementData(this);
  if ((this_00 == (FSlateCachedElementData *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("CurrentCachedElementData",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Rendering\\DrawElements.h"
                         ,0x1ac,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    pFVar9 = (FSlateGradientElement *)(*pcVar6)();
    return pFVar9;
  }
  iVar3 = (this->WidgetDrawStack).ArrayNum;
  uVar12 = iVar3 - 1;
  uVar8 = 0;
  if ((int)uVar12 < iVar3) {
    uVar8 = ~uVar12 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar6 = (code *)swi(3);
    pFVar9 = (FSlateGradientElement *)(*pcVar6)();
    return pFVar9;
  }
  FVar11 = (this->WidgetDrawStack).AllocatorInstance.SecondaryData;
  if (FVar11 == (ForElementType<FSlateWindowElementList::FWidgetDrawElementState>)0x0) {
    FVar11 = (ForElementType<FSlateWindowElementList::FWidgetDrawElementState>)
             &this->WidgetDrawStack;
  }
  pFVar13 = (FSlateCachedElementsHandle *)
            ((longlong)(this->WidgetDrawStack).ArrayNum * 0x20 + -0x20 + (longlong)FVar11);
  if ((*(char *)&pFVar13[1].Ptr.WeakReferenceCount.ReferenceController != '\0') &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("!CurrentWidgetState.bIsVolatile",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Rendering\\DrawElements.h"
                         ,0x1af,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    pFVar9 = (FSlateGradientElement *)(*pcVar6)();
    return pFVar9;
  }
  if ((((pFVar13->Ptr).Object == (FSlateCachedElementList *)0x0) ||
      (pTVar4 = (pFVar13->Ptr).WeakReferenceCount.ReferenceController,
      pTVar4 == (TReferenceControllerBase<1> *)0x0)) || ((int)pTVar4->SharedReferenceCount < 1)) {
    pFVar10 = FSlateCachedElementData::AddCache(this_00,&local_18,(SWidget *)pFVar13[1].Ptr.Object);
    if (pFVar13 != pFVar10) {
      (pFVar13->Ptr).Object = (pFVar10->Ptr).Object;
      pTVar4 = (pFVar10->Ptr).WeakReferenceCount.ReferenceController;
      (pFVar10->Ptr).Object = (FSlateCachedElementList *)0x0;
      pTVar5 = (pFVar13->Ptr).WeakReferenceCount.ReferenceController;
      (pFVar13->Ptr).WeakReferenceCount.ReferenceController = pTVar4;
      (pFVar10->Ptr).WeakReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        paVar1 = &pTVar5->WeakReferenceCount;
        aVar2 = *paVar1;
        *paVar1 = (atomic<int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar2 == (atomic<int>)0x1) {
          (**(code **)(pTVar5->_padding_ + 8))(pTVar5,1);
        }
      }
    }
    if (local_18.Ptr.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &(local_18.Ptr.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)((local_18.Ptr.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                  (local_18.Ptr.WeakReferenceCount.ReferenceController,1);
      }
    }
  }
  pFVar9 = FSlateCachedElementData::AddCachedElement<6>
                     (this_00,pFVar13,&this->ClippingManager,(SWidget *)pFVar13[1].Ptr.Object);
  return pFVar9;
}

// AddCachedElement<7> @ 1424cc070

/* WARNING: Enum "Type": Some values do not have unique names */

FSlateViewportElement * __thiscall
FSlateWindowElementList::AddCachedElement<7>(FSlateWindowElementList *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  int iVar3;
  TReferenceControllerBase<1> *pTVar4;
  TReferenceControllerBase<1> *pTVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  FSlateCachedElementData *this_00;
  FSlateViewportElement *pFVar9;
  FSlateCachedElementsHandle *pFVar10;
  ForElementType<FSlateWindowElementList::FWidgetDrawElementState> FVar11;
  uint uVar12;
  FSlateCachedElementsHandle *pFVar13;
  FSlateCachedElementsHandle local_18;
  
  this_00 = GetCurrentCachedElementData(this);
  if ((this_00 == (FSlateCachedElementData *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("CurrentCachedElementData",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Rendering\\DrawElements.h"
                         ,0x1ac,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    pFVar9 = (FSlateViewportElement *)(*pcVar6)();
    return pFVar9;
  }
  iVar3 = (this->WidgetDrawStack).ArrayNum;
  uVar12 = iVar3 - 1;
  uVar8 = 0;
  if ((int)uVar12 < iVar3) {
    uVar8 = ~uVar12 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar6 = (code *)swi(3);
    pFVar9 = (FSlateViewportElement *)(*pcVar6)();
    return pFVar9;
  }
  FVar11 = (this->WidgetDrawStack).AllocatorInstance.SecondaryData;
  if (FVar11 == (ForElementType<FSlateWindowElementList::FWidgetDrawElementState>)0x0) {
    FVar11 = (ForElementType<FSlateWindowElementList::FWidgetDrawElementState>)
             &this->WidgetDrawStack;
  }
  pFVar13 = (FSlateCachedElementsHandle *)
            ((longlong)(this->WidgetDrawStack).ArrayNum * 0x20 + -0x20 + (longlong)FVar11);
  if ((*(char *)&pFVar13[1].Ptr.WeakReferenceCount.ReferenceController != '\0') &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("!CurrentWidgetState.bIsVolatile",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Rendering\\DrawElements.h"
                         ,0x1af,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    pFVar9 = (FSlateViewportElement *)(*pcVar6)();
    return pFVar9;
  }
  if ((((pFVar13->Ptr).Object == (FSlateCachedElementList *)0x0) ||
      (pTVar4 = (pFVar13->Ptr).WeakReferenceCount.ReferenceController,
      pTVar4 == (TReferenceControllerBase<1> *)0x0)) || ((int)pTVar4->SharedReferenceCount < 1)) {
    pFVar10 = FSlateCachedElementData::AddCache(this_00,&local_18,(SWidget *)pFVar13[1].Ptr.Object);
    if (pFVar13 != pFVar10) {
      (pFVar13->Ptr).Object = (pFVar10->Ptr).Object;
      pTVar4 = (pFVar10->Ptr).WeakReferenceCount.ReferenceController;
      (pFVar10->Ptr).Object = (FSlateCachedElementList *)0x0;
      pTVar5 = (pFVar13->Ptr).WeakReferenceCount.ReferenceController;
      (pFVar13->Ptr).WeakReferenceCount.ReferenceController = pTVar4;
      (pFVar10->Ptr).WeakReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        paVar1 = &pTVar5->WeakReferenceCount;
        aVar2 = *paVar1;
        *paVar1 = (atomic<int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar2 == (atomic<int>)0x1) {
          (**(code **)(pTVar5->_padding_ + 8))(pTVar5,1);
        }
      }
    }
    if (local_18.Ptr.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &(local_18.Ptr.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)((local_18.Ptr.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                  (local_18.Ptr.WeakReferenceCount.ReferenceController,1);
      }
    }
  }
  pFVar9 = FSlateCachedElementData::AddCachedElement<7>
                     (this_00,pFVar13,&this->ClippingManager,(SWidget *)pFVar13[1].Ptr.Object);
  return pFVar9;
}

// AddCachedElement<8> @ 1424cc390

/* WARNING: Enum "Type": Some values do not have unique names */

FSlateBoxElement * __thiscall
FSlateWindowElementList::AddCachedElement<8>(FSlateWindowElementList *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  int iVar3;
  TReferenceControllerBase<1> *pTVar4;
  TReferenceControllerBase<1> *pTVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  FSlateCachedElementData *this_00;
  FSlateBoxElement *pFVar9;
  FSlateCachedElementsHandle *pFVar10;
  ForElementType<FSlateWindowElementList::FWidgetDrawElementState> FVar11;
  uint uVar12;
  FSlateCachedElementsHandle *pFVar13;
  FSlateCachedElementsHandle local_18;
  
  this_00 = GetCurrentCachedElementData(this);
  if ((this_00 == (FSlateCachedElementData *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("CurrentCachedElementData",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Rendering\\DrawElements.h"
                         ,0x1ac,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    pFVar9 = (FSlateBoxElement *)(*pcVar6)();
    return pFVar9;
  }
  iVar3 = (this->WidgetDrawStack).ArrayNum;
  uVar12 = iVar3 - 1;
  uVar8 = 0;
  if ((int)uVar12 < iVar3) {
    uVar8 = ~uVar12 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar6 = (code *)swi(3);
    pFVar9 = (FSlateBoxElement *)(*pcVar6)();
    return pFVar9;
  }
  FVar11 = (this->WidgetDrawStack).AllocatorInstance.SecondaryData;
  if (FVar11 == (ForElementType<FSlateWindowElementList::FWidgetDrawElementState>)0x0) {
    FVar11 = (ForElementType<FSlateWindowElementList::FWidgetDrawElementState>)
             &this->WidgetDrawStack;
  }
  pFVar13 = (FSlateCachedElementsHandle *)
            ((longlong)(this->WidgetDrawStack).ArrayNum * 0x20 + -0x20 + (longlong)FVar11);
  if ((*(char *)&pFVar13[1].Ptr.WeakReferenceCount.ReferenceController != '\0') &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("!CurrentWidgetState.bIsVolatile",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Rendering\\DrawElements.h"
                         ,0x1af,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    pFVar9 = (FSlateBoxElement *)(*pcVar6)();
    return pFVar9;
  }
  if ((((pFVar13->Ptr).Object == (FSlateCachedElementList *)0x0) ||
      (pTVar4 = (pFVar13->Ptr).WeakReferenceCount.ReferenceController,
      pTVar4 == (TReferenceControllerBase<1> *)0x0)) || ((int)pTVar4->SharedReferenceCount < 1)) {
    pFVar10 = FSlateCachedElementData::AddCache(this_00,&local_18,(SWidget *)pFVar13[1].Ptr.Object);
    if (pFVar13 != pFVar10) {
      (pFVar13->Ptr).Object = (pFVar10->Ptr).Object;
      pTVar4 = (pFVar10->Ptr).WeakReferenceCount.ReferenceController;
      (pFVar10->Ptr).Object = (FSlateCachedElementList *)0x0;
      pTVar5 = (pFVar13->Ptr).WeakReferenceCount.ReferenceController;
      (pFVar13->Ptr).WeakReferenceCount.ReferenceController = pTVar4;
      (pFVar10->Ptr).WeakReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        paVar1 = &pTVar5->WeakReferenceCount;
        aVar2 = *paVar1;
        *paVar1 = (atomic<int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar2 == (atomic<int>)0x1) {
          (**(code **)(pTVar5->_padding_ + 8))(pTVar5,1);
        }
      }
    }
    if (local_18.Ptr.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &(local_18.Ptr.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)((local_18.Ptr.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                  (local_18.Ptr.WeakReferenceCount.ReferenceController,1);
      }
    }
  }
  pFVar9 = FSlateCachedElementData::AddCachedElement<8>
                     (this_00,pFVar13,&this->ClippingManager,(SWidget *)pFVar13[1].Ptr.Object);
  return pFVar9;
}

// AddCachedElement<9> @ 1424cc6b0

/* WARNING: Enum "Type": Some values do not have unique names */

FSlateCustomDrawerElement * __thiscall
FSlateWindowElementList::AddCachedElement<9>(FSlateWindowElementList *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  int iVar3;
  TReferenceControllerBase<1> *pTVar4;
  TReferenceControllerBase<1> *pTVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  FSlateCachedElementData *this_00;
  FSlateCustomDrawerElement *pFVar9;
  FSlateCachedElementsHandle *pFVar10;
  ForElementType<FSlateWindowElementList::FWidgetDrawElementState> FVar11;
  uint uVar12;
  FSlateCachedElementsHandle *pFVar13;
  FSlateCachedElementsHandle local_18;
  
  this_00 = GetCurrentCachedElementData(this);
  if ((this_00 == (FSlateCachedElementData *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("CurrentCachedElementData",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Rendering\\DrawElements.h"
                         ,0x1ac,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    pFVar9 = (FSlateCustomDrawerElement *)(*pcVar6)();
    return pFVar9;
  }
  iVar3 = (this->WidgetDrawStack).ArrayNum;
  uVar12 = iVar3 - 1;
  uVar8 = 0;
  if ((int)uVar12 < iVar3) {
    uVar8 = ~uVar12 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar6 = (code *)swi(3);
    pFVar9 = (FSlateCustomDrawerElement *)(*pcVar6)();
    return pFVar9;
  }
  FVar11 = (this->WidgetDrawStack).AllocatorInstance.SecondaryData;
  if (FVar11 == (ForElementType<FSlateWindowElementList::FWidgetDrawElementState>)0x0) {
    FVar11 = (ForElementType<FSlateWindowElementList::FWidgetDrawElementState>)
             &this->WidgetDrawStack;
  }
  pFVar13 = (FSlateCachedElementsHandle *)
            ((longlong)(this->WidgetDrawStack).ArrayNum * 0x20 + -0x20 + (longlong)FVar11);
  if ((*(char *)&pFVar13[1].Ptr.WeakReferenceCount.ReferenceController != '\0') &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("!CurrentWidgetState.bIsVolatile",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Rendering\\DrawElements.h"
                         ,0x1af,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    pFVar9 = (FSlateCustomDrawerElement *)(*pcVar6)();
    return pFVar9;
  }
  if ((((pFVar13->Ptr).Object == (FSlateCachedElementList *)0x0) ||
      (pTVar4 = (pFVar13->Ptr).WeakReferenceCount.ReferenceController,
      pTVar4 == (TReferenceControllerBase<1> *)0x0)) || ((int)pTVar4->SharedReferenceCount < 1)) {
    pFVar10 = FSlateCachedElementData::AddCache(this_00,&local_18,(SWidget *)pFVar13[1].Ptr.Object);
    if (pFVar13 != pFVar10) {
      (pFVar13->Ptr).Object = (pFVar10->Ptr).Object;
      pTVar4 = (pFVar10->Ptr).WeakReferenceCount.ReferenceController;
      (pFVar10->Ptr).Object = (FSlateCachedElementList *)0x0;
      pTVar5 = (pFVar13->Ptr).WeakReferenceCount.ReferenceController;
      (pFVar13->Ptr).WeakReferenceCount.ReferenceController = pTVar4;
      (pFVar10->Ptr).WeakReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        paVar1 = &pTVar5->WeakReferenceCount;
        aVar2 = *paVar1;
        *paVar1 = (atomic<int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar2 == (atomic<int>)0x1) {
          (**(code **)(pTVar5->_padding_ + 8))(pTVar5,1);
        }
      }
    }
    if (local_18.Ptr.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &(local_18.Ptr.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)((local_18.Ptr.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                  (local_18.Ptr.WeakReferenceCount.ReferenceController,1);
      }
    }
  }
  pFVar9 = FSlateCachedElementData::AddCachedElement<9>
                     (this_00,pFVar13,&this->ClippingManager,(SWidget *)pFVar13[1].Ptr.Object);
  return pFVar9;
}

// AddCachedElement<10> @ 1424cc9d0

/* WARNING: Enum "Type": Some values do not have unique names */

FSlateCustomVertsElement * __thiscall
FSlateWindowElementList::AddCachedElement<10>(FSlateWindowElementList *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  int iVar3;
  TReferenceControllerBase<1> *pTVar4;
  TReferenceControllerBase<1> *pTVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  FSlateCachedElementData *this_00;
  FSlateCustomVertsElement *pFVar9;
  FSlateCachedElementsHandle *pFVar10;
  ForElementType<FSlateWindowElementList::FWidgetDrawElementState> FVar11;
  uint uVar12;
  FSlateCachedElementsHandle *pFVar13;
  FSlateCachedElementsHandle local_18;
  
  this_00 = GetCurrentCachedElementData(this);
  if ((this_00 == (FSlateCachedElementData *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("CurrentCachedElementData",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Rendering\\DrawElements.h"
                         ,0x1ac,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    pFVar9 = (FSlateCustomVertsElement *)(*pcVar6)();
    return pFVar9;
  }
  iVar3 = (this->WidgetDrawStack).ArrayNum;
  uVar12 = iVar3 - 1;
  uVar8 = 0;
  if ((int)uVar12 < iVar3) {
    uVar8 = ~uVar12 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar6 = (code *)swi(3);
    pFVar9 = (FSlateCustomVertsElement *)(*pcVar6)();
    return pFVar9;
  }
  FVar11 = (this->WidgetDrawStack).AllocatorInstance.SecondaryData;
  if (FVar11 == (ForElementType<FSlateWindowElementList::FWidgetDrawElementState>)0x0) {
    FVar11 = (ForElementType<FSlateWindowElementList::FWidgetDrawElementState>)
             &this->WidgetDrawStack;
  }
  pFVar13 = (FSlateCachedElementsHandle *)
            ((longlong)(this->WidgetDrawStack).ArrayNum * 0x20 + -0x20 + (longlong)FVar11);
  if ((*(char *)&pFVar13[1].Ptr.WeakReferenceCount.ReferenceController != '\0') &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("!CurrentWidgetState.bIsVolatile",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Rendering\\DrawElements.h"
                         ,0x1af,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    pFVar9 = (FSlateCustomVertsElement *)(*pcVar6)();
    return pFVar9;
  }
  if ((((pFVar13->Ptr).Object == (FSlateCachedElementList *)0x0) ||
      (pTVar4 = (pFVar13->Ptr).WeakReferenceCount.ReferenceController,
      pTVar4 == (TReferenceControllerBase<1> *)0x0)) || ((int)pTVar4->SharedReferenceCount < 1)) {
    pFVar10 = FSlateCachedElementData::AddCache(this_00,&local_18,(SWidget *)pFVar13[1].Ptr.Object);
    if (pFVar13 != pFVar10) {
      (pFVar13->Ptr).Object = (pFVar10->Ptr).Object;
      pTVar4 = (pFVar10->Ptr).WeakReferenceCount.ReferenceController;
      (pFVar10->Ptr).Object = (FSlateCachedElementList *)0x0;
      pTVar5 = (pFVar13->Ptr).WeakReferenceCount.ReferenceController;
      (pFVar13->Ptr).WeakReferenceCount.ReferenceController = pTVar4;
      (pFVar10->Ptr).WeakReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        paVar1 = &pTVar5->WeakReferenceCount;
        aVar2 = *paVar1;
        *paVar1 = (atomic<int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar2 == (atomic<int>)0x1) {
          (**(code **)(pTVar5->_padding_ + 8))(pTVar5,1);
        }
      }
    }
    if (local_18.Ptr.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &(local_18.Ptr.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)((local_18.Ptr.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                  (local_18.Ptr.WeakReferenceCount.ReferenceController,1);
      }
    }
  }
  pFVar9 = FSlateCachedElementData::AddCachedElement<10>
                     (this_00,pFVar13,&this->ClippingManager,(SWidget *)pFVar13[1].Ptr.Object);
  return pFVar9;
}

// AddCachedElement<0> @ 1424ccb80

/* WARNING: Enum "Type": Some values do not have unique names */

FSlateBoxElement * __thiscall
FSlateWindowElementList::AddCachedElement<0>(FSlateWindowElementList *this)

{
  atomic<int> *paVar1;
  undefined1 *puVar2;
  byte *pbVar3;
  atomic<int> aVar4;
  TReferenceControllerBase<1> *pTVar5;
  TReferenceControllerBase<1> *pTVar6;
  code *pcVar7;
  bool bVar8;
  uint uVar9;
  atomic<int> aVar10;
  int iVar11;
  FSlateCachedElementData *this_00;
  FSlateBoxElement *pFVar12;
  FSlateCachedElementsHandle *pFVar13;
  FSlateClippingState *pFVar14;
  FSlateCachedClipState *pFVar15;
  ForElementType<FSlateWindowElementList::FWidgetDrawElementState> FVar16;
  uint uVar17;
  FSlateCachedElementsHandle *pFVar18;
  FSlateCachedElementList *this_01;
  FSlateCachedElementList *pFVar19;
  FSlateCachedElementList *pFVar20;
  FSlateCachedElementList *local_res8;
  FSlateCachedElementsHandle local_28;
  
  this_00 = GetCurrentCachedElementData(this);
  if ((this_00 == (FSlateCachedElementData *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("CurrentCachedElementData",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Rendering\\DrawElements.h"
                         ,0x1ac,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    pFVar12 = (FSlateBoxElement *)(*pcVar7)();
    return pFVar12;
  }
  iVar11 = (this->WidgetDrawStack).ArrayNum;
  this_01 = (FSlateCachedElementList *)0x0;
  uVar17 = iVar11 - 1;
  uVar9 = 0;
  if ((int)uVar17 < iVar11) {
    uVar9 = ~uVar17 >> 0x1f;
  }
  if ((uVar9 == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar7 = (code *)swi(3);
    pFVar12 = (FSlateBoxElement *)(*pcVar7)();
    return pFVar12;
  }
  FVar16 = (this->WidgetDrawStack).AllocatorInstance.SecondaryData;
  if (FVar16 == (ForElementType<FSlateWindowElementList::FWidgetDrawElementState>)0x0) {
    FVar16 = (ForElementType<FSlateWindowElementList::FWidgetDrawElementState>)
             &this->WidgetDrawStack;
  }
  pFVar18 = (FSlateCachedElementsHandle *)
            ((longlong)(this->WidgetDrawStack).ArrayNum * 0x20 + -0x20 + (longlong)FVar16);
  if ((*(char *)&pFVar18[1].Ptr.WeakReferenceCount.ReferenceController != '\0') &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("!CurrentWidgetState.bIsVolatile",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Rendering\\DrawElements.h"
                         ,0x1af,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    pFVar12 = (FSlateBoxElement *)(*pcVar7)();
    return pFVar12;
  }
  if ((((pFVar18->Ptr).Object == (FSlateCachedElementList *)0x0) ||
      (pTVar5 = (pFVar18->Ptr).WeakReferenceCount.ReferenceController,
      pTVar5 == (TReferenceControllerBase<1> *)0x0)) || ((int)pTVar5->SharedReferenceCount < 1)) {
    pFVar13 = FSlateCachedElementData::AddCache(this_00,&local_28,(SWidget *)pFVar18[1].Ptr.Object);
    if (pFVar18 != pFVar13) {
      (pFVar18->Ptr).Object = (pFVar13->Ptr).Object;
      pTVar5 = (pFVar13->Ptr).WeakReferenceCount.ReferenceController;
      (pFVar13->Ptr).Object = (FSlateCachedElementList *)0x0;
      pTVar6 = (pFVar18->Ptr).WeakReferenceCount.ReferenceController;
      (pFVar18->Ptr).WeakReferenceCount.ReferenceController = pTVar5;
      (pFVar13->Ptr).WeakReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        paVar1 = &pTVar6->WeakReferenceCount;
        aVar4 = *paVar1;
        *paVar1 = (atomic<int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar4 == (atomic<int>)0x1) {
          (**(code **)(pTVar6->_padding_ + 8))(pTVar6,1);
        }
      }
    }
    if (local_28.Ptr.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &(local_28.Ptr.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
      aVar4 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar4 == (atomic<int>)0x1) {
        (**(code **)((local_28.Ptr.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                  (local_28.Ptr.WeakReferenceCount.ReferenceController,1);
      }
    }
  }
  pFVar20 = (FSlateCachedElementList *)(pFVar18->Ptr).WeakReferenceCount.ReferenceController;
  pFVar19 = pFVar20;
  if (pFVar20 == (FSlateCachedElementList *)0x0) {
LAB_1424ccd44:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pFVar19);
    pFVar20 = pFVar19;
  }
  else {
    aVar4 = *(atomic<int> *)&(pFVar20->DrawElements).field_0x8;
    do {
      pFVar19 = this_01;
      if (aVar4 == (atomic<int>)0x0) goto LAB_1424ccd44;
      paVar1 = (atomic<int> *)&(pFVar20->DrawElements).field_0x8;
      LOCK();
      aVar10 = *paVar1;
      bVar8 = aVar4 == aVar10;
      if (bVar8) {
        *paVar1 = (atomic<int>)((int)aVar4 + 1);
        aVar10 = aVar4;
      }
      UNLOCK();
      aVar4 = aVar10;
    } while (!bVar8);
    this_01 = (pFVar18->Ptr).Object;
    LOCK();
    paVar1 = (atomic<int> *)&(pFVar20->DrawElements).field_0x8;
    *paVar1 = (atomic<int>)((int)*paVar1 + 1);
    UNLOCK();
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pFVar20);
    if (this_01 != (FSlateCachedElementList *)0x0) goto LAB_1424ccd6f;
  }
  bVar8 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar8) {
    pcVar7 = (code *)swi(3);
    pFVar12 = (FSlateBoxElement *)(*pcVar7)();
    return pFVar12;
  }
LAB_1424ccd6f:
  iVar11 = *(int *)&(this_01->DrawElements).field_0x10;
  puVar2 = &(this_01->DrawElements).field_0x14;
  if (iVar11 == *(int *)puVar2) {
    iVar11 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<0,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>::ForAnyElementType>
                       (0x898,(ForAnyElementType *)this_01,(int *)puVar2);
  }
  *(int *)&(this_01->DrawElements).field_0x10 = iVar11 + 1;
  pFVar12 = (FSlateBoxElement *)((longlong)iVar11 * 0x98 + *(longlong *)&this_01->DrawElements);
  DefaultConstructItems<FSlateBoxElement,int>(pFVar12,1);
  pbVar3 = (byte *)((longlong)&pFVar12->_padding_ + 5);
  *pbVar3 = *pbVar3 | 1;
  local_res8 = this_01;
  TArray<FSlateCachedElementList_*,TSizedInlineAllocator<50,32,TSizedDefaultAllocator<32>_>_>::
  AddUniqueImpl<FSlateCachedElementList_*>(&this_00->ListsWithNewData,&local_res8);
  pFVar14 = FSlateCachedElementData::GetClipStateFromParent(&this->ClippingManager);
  if (pFVar14 != (FSlateClippingState *)0x0) {
    pFVar15 = FSlateCachedElementData::FindOrAddCachedClipState(this_00,pFVar14);
    FSlateCachedElementList::AddCachedClipState(this_01,pFVar15);
    pFVar12->_padding_ = (longlong)(pFVar15->ClippingState).Object;
    *(undefined4 *)&pFVar12->_padding_ = 0xffffffff;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar20);
  return pFVar12;
}

// AddCachedElement<11> @ 1424ccf90

/* WARNING: Enum "Type": Some values do not have unique names */

FSlatePostProcessElement * __thiscall
FSlateWindowElementList::AddCachedElement<11>(FSlateWindowElementList *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  int iVar3;
  TReferenceControllerBase<1> *pTVar4;
  TReferenceControllerBase<1> *pTVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  FSlateCachedElementData *this_00;
  FSlatePostProcessElement *pFVar9;
  FSlateCachedElementsHandle *pFVar10;
  ForElementType<FSlateWindowElementList::FWidgetDrawElementState> FVar11;
  uint uVar12;
  FSlateCachedElementsHandle *pFVar13;
  FSlateCachedElementsHandle local_18;
  
  this_00 = GetCurrentCachedElementData(this);
  if ((this_00 == (FSlateCachedElementData *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("CurrentCachedElementData",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Rendering\\DrawElements.h"
                         ,0x1ac,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    pFVar9 = (FSlatePostProcessElement *)(*pcVar6)();
    return pFVar9;
  }
  iVar3 = (this->WidgetDrawStack).ArrayNum;
  uVar12 = iVar3 - 1;
  uVar8 = 0;
  if ((int)uVar12 < iVar3) {
    uVar8 = ~uVar12 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar6 = (code *)swi(3);
    pFVar9 = (FSlatePostProcessElement *)(*pcVar6)();
    return pFVar9;
  }
  FVar11 = (this->WidgetDrawStack).AllocatorInstance.SecondaryData;
  if (FVar11 == (ForElementType<FSlateWindowElementList::FWidgetDrawElementState>)0x0) {
    FVar11 = (ForElementType<FSlateWindowElementList::FWidgetDrawElementState>)
             &this->WidgetDrawStack;
  }
  pFVar13 = (FSlateCachedElementsHandle *)
            ((longlong)(this->WidgetDrawStack).ArrayNum * 0x20 + -0x20 + (longlong)FVar11);
  if ((*(char *)&pFVar13[1].Ptr.WeakReferenceCount.ReferenceController != '\0') &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("!CurrentWidgetState.bIsVolatile",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Rendering\\DrawElements.h"
                         ,0x1af,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    pFVar9 = (FSlatePostProcessElement *)(*pcVar6)();
    return pFVar9;
  }
  if ((((pFVar13->Ptr).Object == (FSlateCachedElementList *)0x0) ||
      (pTVar4 = (pFVar13->Ptr).WeakReferenceCount.ReferenceController,
      pTVar4 == (TReferenceControllerBase<1> *)0x0)) || ((int)pTVar4->SharedReferenceCount < 1)) {
    pFVar10 = FSlateCachedElementData::AddCache(this_00,&local_18,(SWidget *)pFVar13[1].Ptr.Object);
    if (pFVar13 != pFVar10) {
      (pFVar13->Ptr).Object = (pFVar10->Ptr).Object;
      pTVar4 = (pFVar10->Ptr).WeakReferenceCount.ReferenceController;
      (pFVar10->Ptr).Object = (FSlateCachedElementList *)0x0;
      pTVar5 = (pFVar13->Ptr).WeakReferenceCount.ReferenceController;
      (pFVar13->Ptr).WeakReferenceCount.ReferenceController = pTVar4;
      (pFVar10->Ptr).WeakReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        paVar1 = &pTVar5->WeakReferenceCount;
        aVar2 = *paVar1;
        *paVar1 = (atomic<int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar2 == (atomic<int>)0x1) {
          (**(code **)(pTVar5->_padding_ + 8))(pTVar5,1);
        }
      }
    }
    if (local_18.Ptr.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &(local_18.Ptr.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)((local_18.Ptr.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                  (local_18.Ptr.WeakReferenceCount.ReferenceController,1);
      }
    }
  }
  pFVar9 = FSlateCachedElementData::AddCachedElement<11>
                     (this_00,pFVar13,&this->ClippingManager,(SWidget *)pFVar13[1].Ptr.Object);
  return pFVar9;
}

// AddCachedElement<12> @ 1424cd2b0

/* WARNING: Enum "Type": Some values do not have unique names */

FSlateRoundedBoxElement * __thiscall
FSlateWindowElementList::AddCachedElement<12>(FSlateWindowElementList *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  int iVar3;
  TReferenceControllerBase<1> *pTVar4;
  TReferenceControllerBase<1> *pTVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  FSlateCachedElementData *this_00;
  FSlateRoundedBoxElement *pFVar9;
  FSlateCachedElementsHandle *pFVar10;
  ForElementType<FSlateWindowElementList::FWidgetDrawElementState> FVar11;
  uint uVar12;
  FSlateCachedElementsHandle *pFVar13;
  FSlateCachedElementsHandle local_18;
  
  this_00 = GetCurrentCachedElementData(this);
  if ((this_00 == (FSlateCachedElementData *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("CurrentCachedElementData",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Rendering\\DrawElements.h"
                         ,0x1ac,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    pFVar9 = (FSlateRoundedBoxElement *)(*pcVar6)();
    return pFVar9;
  }
  iVar3 = (this->WidgetDrawStack).ArrayNum;
  uVar12 = iVar3 - 1;
  uVar8 = 0;
  if ((int)uVar12 < iVar3) {
    uVar8 = ~uVar12 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar6 = (code *)swi(3);
    pFVar9 = (FSlateRoundedBoxElement *)(*pcVar6)();
    return pFVar9;
  }
  FVar11 = (this->WidgetDrawStack).AllocatorInstance.SecondaryData;
  if (FVar11 == (ForElementType<FSlateWindowElementList::FWidgetDrawElementState>)0x0) {
    FVar11 = (ForElementType<FSlateWindowElementList::FWidgetDrawElementState>)
             &this->WidgetDrawStack;
  }
  pFVar13 = (FSlateCachedElementsHandle *)
            ((longlong)(this->WidgetDrawStack).ArrayNum * 0x20 + -0x20 + (longlong)FVar11);
  if ((*(char *)&pFVar13[1].Ptr.WeakReferenceCount.ReferenceController != '\0') &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("!CurrentWidgetState.bIsVolatile",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Rendering\\DrawElements.h"
                         ,0x1af,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    pFVar9 = (FSlateRoundedBoxElement *)(*pcVar6)();
    return pFVar9;
  }
  if ((((pFVar13->Ptr).Object == (FSlateCachedElementList *)0x0) ||
      (pTVar4 = (pFVar13->Ptr).WeakReferenceCount.ReferenceController,
      pTVar4 == (TReferenceControllerBase<1> *)0x0)) || ((int)pTVar4->SharedReferenceCount < 1)) {
    pFVar10 = FSlateCachedElementData::AddCache(this_00,&local_18,(SWidget *)pFVar13[1].Ptr.Object);
    if (pFVar13 != pFVar10) {
      (pFVar13->Ptr).Object = (pFVar10->Ptr).Object;
      pTVar4 = (pFVar10->Ptr).WeakReferenceCount.ReferenceController;
      (pFVar10->Ptr).Object = (FSlateCachedElementList *)0x0;
      pTVar5 = (pFVar13->Ptr).WeakReferenceCount.ReferenceController;
      (pFVar13->Ptr).WeakReferenceCount.ReferenceController = pTVar4;
      (pFVar10->Ptr).WeakReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        paVar1 = &pTVar5->WeakReferenceCount;
        aVar2 = *paVar1;
        *paVar1 = (atomic<int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar2 == (atomic<int>)0x1) {
          (**(code **)(pTVar5->_padding_ + 8))(pTVar5,1);
        }
      }
    }
    if (local_18.Ptr.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &(local_18.Ptr.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)((local_18.Ptr.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                  (local_18.Ptr.WeakReferenceCount.ReferenceController,1);
      }
    }
  }
  pFVar9 = FSlateCachedElementData::AddCachedElement<12>
                     (this_00,pFVar13,&this->ClippingManager,(SWidget *)pFVar13[1].Ptr.Object);
  return pFVar9;
}

// AddCachedElement<13> @ 1424cd5d0

/* WARNING: Enum "Type": Some values do not have unique names */

FSlateDrawElement * __thiscall
FSlateWindowElementList::AddCachedElement<13>(FSlateWindowElementList *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  int iVar3;
  TReferenceControllerBase<1> *pTVar4;
  TReferenceControllerBase<1> *pTVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  FSlateCachedElementData *this_00;
  FSlateDrawElement *pFVar9;
  FSlateCachedElementsHandle *pFVar10;
  ForElementType<FSlateWindowElementList::FWidgetDrawElementState> FVar11;
  uint uVar12;
  FSlateCachedElementsHandle *pFVar13;
  FSlateCachedElementsHandle local_18;
  
  this_00 = GetCurrentCachedElementData(this);
  if ((this_00 == (FSlateCachedElementData *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("CurrentCachedElementData",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Rendering\\DrawElements.h"
                         ,0x1ac,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    pFVar9 = (FSlateDrawElement *)(*pcVar6)();
    return pFVar9;
  }
  iVar3 = (this->WidgetDrawStack).ArrayNum;
  uVar12 = iVar3 - 1;
  uVar8 = 0;
  if ((int)uVar12 < iVar3) {
    uVar8 = ~uVar12 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar6 = (code *)swi(3);
    pFVar9 = (FSlateDrawElement *)(*pcVar6)();
    return pFVar9;
  }
  FVar11 = (this->WidgetDrawStack).AllocatorInstance.SecondaryData;
  if (FVar11 == (ForElementType<FSlateWindowElementList::FWidgetDrawElementState>)0x0) {
    FVar11 = (ForElementType<FSlateWindowElementList::FWidgetDrawElementState>)
             &this->WidgetDrawStack;
  }
  pFVar13 = (FSlateCachedElementsHandle *)
            ((longlong)(this->WidgetDrawStack).ArrayNum * 0x20 + -0x20 + (longlong)FVar11);
  if ((*(char *)&pFVar13[1].Ptr.WeakReferenceCount.ReferenceController != '\0') &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("!CurrentWidgetState.bIsVolatile",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Rendering\\DrawElements.h"
                         ,0x1af,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    pFVar9 = (FSlateDrawElement *)(*pcVar6)();
    return pFVar9;
  }
  if ((((pFVar13->Ptr).Object == (FSlateCachedElementList *)0x0) ||
      (pTVar4 = (pFVar13->Ptr).WeakReferenceCount.ReferenceController,
      pTVar4 == (TReferenceControllerBase<1> *)0x0)) || ((int)pTVar4->SharedReferenceCount < 1)) {
    pFVar10 = FSlateCachedElementData::AddCache(this_00,&local_18,(SWidget *)pFVar13[1].Ptr.Object);
    if (pFVar13 != pFVar10) {
      (pFVar13->Ptr).Object = (pFVar10->Ptr).Object;
      pTVar4 = (pFVar10->Ptr).WeakReferenceCount.ReferenceController;
      (pFVar10->Ptr).Object = (FSlateCachedElementList *)0x0;
      pTVar5 = (pFVar13->Ptr).WeakReferenceCount.ReferenceController;
      (pFVar13->Ptr).WeakReferenceCount.ReferenceController = pTVar4;
      (pFVar10->Ptr).WeakReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        paVar1 = &pTVar5->WeakReferenceCount;
        aVar2 = *paVar1;
        *paVar1 = (atomic<int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar2 == (atomic<int>)0x1) {
          (**(code **)(pTVar5->_padding_ + 8))(pTVar5,1);
        }
      }
    }
    if (local_18.Ptr.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &(local_18.Ptr.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)((local_18.Ptr.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                  (local_18.Ptr.WeakReferenceCount.ReferenceController,1);
      }
    }
  }
  pFVar9 = FSlateCachedElementData::AddCachedElement<13>
                     (this_00,pFVar13,&this->ClippingManager,(SWidget *)pFVar13[1].Ptr.Object);
  return pFVar9;
}

// AddUninitialized<1> @ 1424d1a70

/* WARNING: Enum "Type": Some values do not have unique names */

FSlateBoxElement * __thiscall
FSlateWindowElementList::AddUninitialized<1>(FSlateWindowElementList *this)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  FSlateBoxElement *pFVar7;
  ForElementType<FSlateWindowElementList::FWidgetDrawElementState> FVar8;
  uint uVar9;
  FSlateDebuggingElementTypeAddedEventArgs local_28;
  
  if (0 < (this->CachedElementDataListStack).ArrayNum) {
    iVar3 = (this->WidgetDrawStack).ArrayNum;
    if (iVar3 != 0) {
      uVar6 = 0;
      if ((int)(iVar3 - 1U) < iVar3) {
        uVar6 = ~(iVar3 - 1U) >> 0x1f;
      }
      if (uVar6 == 0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          pFVar7 = (FSlateBoxElement *)(*pcVar4)();
          return pFVar7;
        }
      }
      FVar8 = (this->WidgetDrawStack).AllocatorInstance.SecondaryData;
      if (FVar8 == (ForElementType<FSlateWindowElementList::FWidgetDrawElementState>)0x0) {
        FVar8 = (ForElementType<FSlateWindowElementList::FWidgetDrawElementState>)
                &this->WidgetDrawStack;
      }
      if (((undefined1 *)((longlong)FVar8 + -8))[(longlong)(this->WidgetDrawStack).ArrayNum * 0x20]
          == '\0') {
        pFVar7 = AddCachedElement<1>(this);
        return pFVar7;
      }
    }
  }
  puVar2 = &(this->UncachedDrawElements).field_0x18;
  uVar6 = *(uint *)&(this->UncachedDrawElements).field_0x28;
  puVar1 = &(this->UncachedDrawElements).field_0x2c;
  if (uVar6 == *(uint *)puVar1) {
    uVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>::ForAnyElementType>
                      (0x898,(ForAnyElementType *)puVar2,(int *)puVar1);
  }
  *(uint *)&(this->UncachedDrawElements).field_0x28 = uVar6 + 1;
  DefaultConstructItems<FSlateBoxElement,int>
            ((void *)(*(longlong *)puVar2 + (longlong)(int)uVar6 * 0x98),1);
  FSlateDebuggingElementTypeAddedEventArgs::FSlateDebuggingElementTypeAddedEventArgs
            (&local_28,this,uVar6,ET_DebugQuad);
  TMulticastDelegate<void___cdecl(FSlateDebuggingElementTypeAddedEventArgs_const_&),FDefaultDelegateUserPolicy>
  ::Broadcast(&FSlateDebugging::ElementTypeAdded,&local_28);
  uVar9 = 0;
  if ((int)uVar6 < *(int *)&(this->UncachedDrawElements).field_0x28) {
    uVar9 = ~uVar6 >> 0x1f;
  }
  if (uVar9 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar7 = (FSlateBoxElement *)(*pcVar4)();
      return pFVar7;
    }
  }
  return (FSlateBoxElement *)(*(longlong *)puVar2 + (longlong)(int)uVar6 * 0x98);
}

// AddUninitialized<2> @ 1424d1c00

/* WARNING: Enum "Type": Some values do not have unique names */

FSlateTextElement * __thiscall
FSlateWindowElementList::AddUninitialized<2>(FSlateWindowElementList *this)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  FSlateTextElement *pFVar7;
  ForElementType<FSlateWindowElementList::FWidgetDrawElementState> FVar8;
  uint uVar9;
  FSlateDebuggingElementTypeAddedEventArgs local_28;
  
  if (0 < (this->CachedElementDataListStack).ArrayNum) {
    iVar3 = (this->WidgetDrawStack).ArrayNum;
    if (iVar3 != 0) {
      uVar6 = 0;
      if ((int)(iVar3 - 1U) < iVar3) {
        uVar6 = ~(iVar3 - 1U) >> 0x1f;
      }
      if (uVar6 == 0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          pFVar7 = (FSlateTextElement *)(*pcVar4)();
          return pFVar7;
        }
      }
      FVar8 = (this->WidgetDrawStack).AllocatorInstance.SecondaryData;
      if (FVar8 == (ForElementType<FSlateWindowElementList::FWidgetDrawElementState>)0x0) {
        FVar8 = (ForElementType<FSlateWindowElementList::FWidgetDrawElementState>)
                &this->WidgetDrawStack;
      }
      if (((undefined1 *)((longlong)FVar8 + -8))[(longlong)(this->WidgetDrawStack).ArrayNum * 0x20]
          == '\0') {
        pFVar7 = AddCachedElement<2>(this);
        return pFVar7;
      }
    }
  }
  puVar2 = &(this->UncachedDrawElements).field_0x30;
  uVar6 = *(uint *)&(this->UncachedDrawElements).field_0x40;
  puVar1 = &(this->UncachedDrawElements).field_0x44;
  if (uVar6 == *(uint *)puVar1) {
    uVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>::ForAnyElementType>
                      (0x8c8,(ForAnyElementType *)puVar2,(int *)puVar1);
  }
  *(uint *)&(this->UncachedDrawElements).field_0x40 = uVar6 + 1;
  DefaultConstructItems<FSlateTextElement,int>
            ((void *)(*(longlong *)puVar2 + (longlong)(int)uVar6 * 200),1);
  FSlateDebuggingElementTypeAddedEventArgs::FSlateDebuggingElementTypeAddedEventArgs
            (&local_28,this,uVar6,ET_Text);
  TMulticastDelegate<void___cdecl(FSlateDebuggingElementTypeAddedEventArgs_const_&),FDefaultDelegateUserPolicy>
  ::Broadcast(&FSlateDebugging::ElementTypeAdded,&local_28);
  uVar9 = 0;
  if ((int)uVar6 < *(int *)&(this->UncachedDrawElements).field_0x40) {
    uVar9 = ~uVar6 >> 0x1f;
  }
  if (uVar9 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar7 = (FSlateTextElement *)(*pcVar4)();
      return pFVar7;
    }
  }
  return (FSlateTextElement *)(*(longlong *)puVar2 + (longlong)(int)uVar6 * 200);
}

// AddUninitialized<3> @ 1424d1d90

/* WARNING: Enum "Type": Some values do not have unique names */

FSlateShapedTextElement * __thiscall
FSlateWindowElementList::AddUninitialized<3>(FSlateWindowElementList *this)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  FSlateShapedTextElement *pFVar7;
  ForElementType<FSlateWindowElementList::FWidgetDrawElementState> FVar8;
  uint uVar9;
  FSlateDebuggingElementTypeAddedEventArgs local_28;
  
  if (0 < (this->CachedElementDataListStack).ArrayNum) {
    iVar3 = (this->WidgetDrawStack).ArrayNum;
    if (iVar3 != 0) {
      uVar6 = 0;
      if ((int)(iVar3 - 1U) < iVar3) {
        uVar6 = ~(iVar3 - 1U) >> 0x1f;
      }
      if (uVar6 == 0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          pFVar7 = (FSlateShapedTextElement *)(*pcVar4)();
          return pFVar7;
        }
      }
      FVar8 = (this->WidgetDrawStack).AllocatorInstance.SecondaryData;
      if (FVar8 == (ForElementType<FSlateWindowElementList::FWidgetDrawElementState>)0x0) {
        FVar8 = (ForElementType<FSlateWindowElementList::FWidgetDrawElementState>)
                &this->WidgetDrawStack;
      }
      if (((undefined1 *)((longlong)FVar8 + -8))[(longlong)(this->WidgetDrawStack).ArrayNum * 0x20]
          == '\0') {
        pFVar7 = AddCachedElement<3>(this);
        return pFVar7;
      }
    }
  }
  puVar2 = &(this->UncachedDrawElements).field_0x48;
  uVar6 = *(uint *)&(this->UncachedDrawElements).field_0x58;
  puVar1 = &(this->UncachedDrawElements).field_0x5c;
  if (uVar6 == *(uint *)puVar1) {
    uVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>::ForAnyElementType>
                      (0x890,(ForAnyElementType *)puVar2,(int *)puVar1);
  }
  *(uint *)&(this->UncachedDrawElements).field_0x58 = uVar6 + 1;
  DefaultConstructItems<FSlateShapedTextElement,int>
            ((void *)(*(longlong *)puVar2 + (longlong)(int)uVar6 * 0x90),1);
  FSlateDebuggingElementTypeAddedEventArgs::FSlateDebuggingElementTypeAddedEventArgs
            (&local_28,this,uVar6,ET_ShapedText);
  TMulticastDelegate<void___cdecl(FSlateDebuggingElementTypeAddedEventArgs_const_&),FDefaultDelegateUserPolicy>
  ::Broadcast(&FSlateDebugging::ElementTypeAdded,&local_28);
  uVar9 = 0;
  if ((int)uVar6 < *(int *)&(this->UncachedDrawElements).field_0x58) {
    uVar9 = ~uVar6 >> 0x1f;
  }
  if (uVar9 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar7 = (FSlateShapedTextElement *)(*pcVar4)();
      return pFVar7;
    }
  }
  return (FSlateShapedTextElement *)(*(longlong *)puVar2 + (longlong)(int)uVar6 * 0x90);
}

// AddUninitialized<4> @ 1424d1f20

/* WARNING: Enum "Type": Some values do not have unique names */

FSlateSplineElement * __thiscall
FSlateWindowElementList::AddUninitialized<4>(FSlateWindowElementList *this)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  FSlateSplineElement *pFVar7;
  ForElementType<FSlateWindowElementList::FWidgetDrawElementState> FVar8;
  uint uVar9;
  FSlateDebuggingElementTypeAddedEventArgs local_28;
  
  if (0 < (this->CachedElementDataListStack).ArrayNum) {
    iVar3 = (this->WidgetDrawStack).ArrayNum;
    if (iVar3 != 0) {
      uVar6 = 0;
      if ((int)(iVar3 - 1U) < iVar3) {
        uVar6 = ~(iVar3 - 1U) >> 0x1f;
      }
      if (uVar6 == 0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          pFVar7 = (FSlateSplineElement *)(*pcVar4)();
          return pFVar7;
        }
      }
      FVar8 = (this->WidgetDrawStack).AllocatorInstance.SecondaryData;
      if (FVar8 == (ForElementType<FSlateWindowElementList::FWidgetDrawElementState>)0x0) {
        FVar8 = (ForElementType<FSlateWindowElementList::FWidgetDrawElementState>)
                &this->WidgetDrawStack;
      }
      if (((undefined1 *)((longlong)FVar8 + -8))[(longlong)(this->WidgetDrawStack).ArrayNum * 0x20]
          == '\0') {
        pFVar7 = AddCachedElement<4>(this);
        return pFVar7;
      }
    }
  }
  puVar2 = &(this->UncachedDrawElements).field_0x60;
  uVar6 = *(uint *)&(this->UncachedDrawElements).field_0x70;
  puVar1 = &(this->UncachedDrawElements).field_0x74;
  if (uVar6 == *(uint *)puVar1) {
    uVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>::ForAnyElementType>
                      (0x890,(ForAnyElementType *)puVar2,(int *)puVar1);
  }
  *(uint *)&(this->UncachedDrawElements).field_0x70 = uVar6 + 1;
  DefaultConstructItems<FSlateSplineElement,int>
            ((void *)(*(longlong *)puVar2 + (longlong)(int)uVar6 * 0x90),1);
  FSlateDebuggingElementTypeAddedEventArgs::FSlateDebuggingElementTypeAddedEventArgs
            (&local_28,this,uVar6,ET_Spline);
  TMulticastDelegate<void___cdecl(FSlateDebuggingElementTypeAddedEventArgs_const_&),FDefaultDelegateUserPolicy>
  ::Broadcast(&FSlateDebugging::ElementTypeAdded,&local_28);
  uVar9 = 0;
  if ((int)uVar6 < *(int *)&(this->UncachedDrawElements).field_0x70) {
    uVar9 = ~uVar6 >> 0x1f;
  }
  if (uVar9 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar7 = (FSlateSplineElement *)(*pcVar4)();
      return pFVar7;
    }
  }
  return (FSlateSplineElement *)(*(longlong *)puVar2 + (longlong)(int)uVar6 * 0x90);
}

// AddUninitialized<5> @ 1424d20b0

/* WARNING: Enum "Type": Some values do not have unique names */

FSlateLineElement * __thiscall
FSlateWindowElementList::AddUninitialized<5>(FSlateWindowElementList *this)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  FSlateLineElement *pFVar7;
  ForElementType<FSlateWindowElementList::FWidgetDrawElementState> FVar8;
  uint uVar9;
  FSlateDebuggingElementTypeAddedEventArgs local_28;
  
  if (0 < (this->CachedElementDataListStack).ArrayNum) {
    iVar3 = (this->WidgetDrawStack).ArrayNum;
    if (iVar3 != 0) {
      uVar6 = 0;
      if ((int)(iVar3 - 1U) < iVar3) {
        uVar6 = ~(iVar3 - 1U) >> 0x1f;
      }
      if (uVar6 == 0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          pFVar7 = (FSlateLineElement *)(*pcVar4)();
          return pFVar7;
        }
      }
      FVar8 = (this->WidgetDrawStack).AllocatorInstance.SecondaryData;
      if (FVar8 == (ForElementType<FSlateWindowElementList::FWidgetDrawElementState>)0x0) {
        FVar8 = (ForElementType<FSlateWindowElementList::FWidgetDrawElementState>)
                &this->WidgetDrawStack;
      }
      if (((undefined1 *)((longlong)FVar8 + -8))[(longlong)(this->WidgetDrawStack).ArrayNum * 0x20]
          == '\0') {
        pFVar7 = AddCachedElement<5>(this);
        return pFVar7;
      }
    }
  }
  puVar2 = &(this->UncachedDrawElements).field_0x78;
  uVar6 = *(uint *)&(this->UncachedDrawElements).field_0x88;
  puVar1 = &(this->UncachedDrawElements).field_0x8c;
  if (uVar6 == *(uint *)puVar1) {
    uVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>::ForAnyElementType>
                      (0x888,(ForAnyElementType *)puVar2,(int *)puVar1);
  }
  *(uint *)&(this->UncachedDrawElements).field_0x88 = uVar6 + 1;
  DefaultConstructItems<FSlateLineElement,int>
            ((void *)(*(longlong *)puVar2 + (longlong)(int)uVar6 * 0x88),1);
  FSlateDebuggingElementTypeAddedEventArgs::FSlateDebuggingElementTypeAddedEventArgs
            (&local_28,this,uVar6,ET_Line);
  TMulticastDelegate<void___cdecl(FSlateDebuggingElementTypeAddedEventArgs_const_&),FDefaultDelegateUserPolicy>
  ::Broadcast(&FSlateDebugging::ElementTypeAdded,&local_28);
  uVar9 = 0;
  if ((int)uVar6 < *(int *)&(this->UncachedDrawElements).field_0x88) {
    uVar9 = ~uVar6 >> 0x1f;
  }
  if (uVar9 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar7 = (FSlateLineElement *)(*pcVar4)();
      return pFVar7;
    }
  }
  return (FSlateLineElement *)(*(longlong *)puVar2 + (longlong)(int)uVar6 * 0x88);
}

// AddUninitialized<6> @ 1424d2240

/* WARNING: Enum "Type": Some values do not have unique names */

FSlateGradientElement * __thiscall
FSlateWindowElementList::AddUninitialized<6>(FSlateWindowElementList *this)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  FSlateGradientElement *pFVar7;
  ForElementType<FSlateWindowElementList::FWidgetDrawElementState> FVar8;
  uint uVar9;
  FSlateDebuggingElementTypeAddedEventArgs local_28;
  
  if (0 < (this->CachedElementDataListStack).ArrayNum) {
    iVar3 = (this->WidgetDrawStack).ArrayNum;
    if (iVar3 != 0) {
      uVar6 = 0;
      if ((int)(iVar3 - 1U) < iVar3) {
        uVar6 = ~(iVar3 - 1U) >> 0x1f;
      }
      if (uVar6 == 0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          pFVar7 = (FSlateGradientElement *)(*pcVar4)();
          return pFVar7;
        }
      }
      FVar8 = (this->WidgetDrawStack).AllocatorInstance.SecondaryData;
      if (FVar8 == (ForElementType<FSlateWindowElementList::FWidgetDrawElementState>)0x0) {
        FVar8 = (ForElementType<FSlateWindowElementList::FWidgetDrawElementState>)
                &this->WidgetDrawStack;
      }
      if (((undefined1 *)((longlong)FVar8 + -8))[(longlong)(this->WidgetDrawStack).ArrayNum * 0x20]
          == '\0') {
        pFVar7 = AddCachedElement<6>(this);
        return pFVar7;
      }
    }
  }
  puVar2 = &(this->UncachedDrawElements).field_0x90;
  uVar6 = *(uint *)&(this->UncachedDrawElements).field_0xa0;
  puVar1 = &(this->UncachedDrawElements).field_0xa4;
  if (uVar6 == *(uint *)puVar1) {
    uVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>::ForAnyElementType>
                      (0x1070,(ForAnyElementType *)puVar2,(int *)puVar1);
  }
  *(uint *)&(this->UncachedDrawElements).field_0xa0 = uVar6 + 1;
  DefaultConstructItems<FSlateGradientElement,int>
            ((void *)(*(longlong *)puVar2 + (longlong)(int)uVar6 * 0x70),1);
  FSlateDebuggingElementTypeAddedEventArgs::FSlateDebuggingElementTypeAddedEventArgs
            (&local_28,this,uVar6,ET_Gradient);
  TMulticastDelegate<void___cdecl(FSlateDebuggingElementTypeAddedEventArgs_const_&),FDefaultDelegateUserPolicy>
  ::Broadcast(&FSlateDebugging::ElementTypeAdded,&local_28);
  uVar9 = 0;
  if ((int)uVar6 < *(int *)&(this->UncachedDrawElements).field_0xa0) {
    uVar9 = ~uVar6 >> 0x1f;
  }
  if (uVar9 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar7 = (FSlateGradientElement *)(*pcVar4)();
      return pFVar7;
    }
  }
  return (FSlateGradientElement *)(*(longlong *)puVar2 + (longlong)(int)uVar6 * 0x70);
}

// AddUninitialized<7> @ 1424d23d0

/* WARNING: Enum "Type": Some values do not have unique names */

FSlateViewportElement * __thiscall
FSlateWindowElementList::AddUninitialized<7>(FSlateWindowElementList *this)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  FSlateViewportElement *pFVar7;
  ForElementType<FSlateWindowElementList::FWidgetDrawElementState> FVar8;
  uint uVar9;
  FSlateDebuggingElementTypeAddedEventArgs local_28;
  
  if (0 < (this->CachedElementDataListStack).ArrayNum) {
    iVar3 = (this->WidgetDrawStack).ArrayNum;
    if (iVar3 != 0) {
      uVar6 = 0;
      if ((int)(iVar3 - 1U) < iVar3) {
        uVar6 = ~(iVar3 - 1U) >> 0x1f;
      }
      if (uVar6 == 0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          pFVar7 = (FSlateViewportElement *)(*pcVar4)();
          return pFVar7;
        }
      }
      FVar8 = (this->WidgetDrawStack).AllocatorInstance.SecondaryData;
      if (FVar8 == (ForElementType<FSlateWindowElementList::FWidgetDrawElementState>)0x0) {
        FVar8 = (ForElementType<FSlateWindowElementList::FWidgetDrawElementState>)
                &this->WidgetDrawStack;
      }
      if (((undefined1 *)((longlong)FVar8 + -8))[(longlong)(this->WidgetDrawStack).ArrayNum * 0x20]
          == '\0') {
        pFVar7 = AddCachedElement<7>(this);
        return pFVar7;
      }
    }
  }
  puVar2 = &(this->UncachedDrawElements).field_0xa8;
  uVar6 = *(uint *)&(this->UncachedDrawElements).field_0xb8;
  puVar1 = &(this->UncachedDrawElements).field_0xbc;
  if (uVar6 == *(uint *)puVar1) {
    uVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>::ForAnyElementType>
                      (0x868,(ForAnyElementType *)puVar2,(int *)puVar1);
  }
  *(uint *)&(this->UncachedDrawElements).field_0xb8 = uVar6 + 1;
  DefaultConstructItems<FSlateViewportElement,int>
            ((void *)(*(longlong *)puVar2 + (longlong)(int)uVar6 * 0x68),1);
  FSlateDebuggingElementTypeAddedEventArgs::FSlateDebuggingElementTypeAddedEventArgs
            (&local_28,this,uVar6,ET_Viewport);
  TMulticastDelegate<void___cdecl(FSlateDebuggingElementTypeAddedEventArgs_const_&),FDefaultDelegateUserPolicy>
  ::Broadcast(&FSlateDebugging::ElementTypeAdded,&local_28);
  uVar9 = 0;
  if ((int)uVar6 < *(int *)&(this->UncachedDrawElements).field_0xb8) {
    uVar9 = ~uVar6 >> 0x1f;
  }
  if (uVar9 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar7 = (FSlateViewportElement *)(*pcVar4)();
      return pFVar7;
    }
  }
  return (FSlateViewportElement *)(*(longlong *)puVar2 + (longlong)(int)uVar6 * 0x68);
}

// AddUninitialized<8> @ 1424d2560

/* WARNING: Enum "Type": Some values do not have unique names */

FSlateBoxElement * __thiscall
FSlateWindowElementList::AddUninitialized<8>(FSlateWindowElementList *this)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  FSlateBoxElement *pFVar7;
  ForElementType<FSlateWindowElementList::FWidgetDrawElementState> FVar8;
  uint uVar9;
  FSlateDebuggingElementTypeAddedEventArgs local_28;
  
  if (0 < (this->CachedElementDataListStack).ArrayNum) {
    iVar3 = (this->WidgetDrawStack).ArrayNum;
    if (iVar3 != 0) {
      uVar6 = 0;
      if ((int)(iVar3 - 1U) < iVar3) {
        uVar6 = ~(iVar3 - 1U) >> 0x1f;
      }
      if (uVar6 == 0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          pFVar7 = (FSlateBoxElement *)(*pcVar4)();
          return pFVar7;
        }
      }
      FVar8 = (this->WidgetDrawStack).AllocatorInstance.SecondaryData;
      if (FVar8 == (ForElementType<FSlateWindowElementList::FWidgetDrawElementState>)0x0) {
        FVar8 = (ForElementType<FSlateWindowElementList::FWidgetDrawElementState>)
                &this->WidgetDrawStack;
      }
      if (((undefined1 *)((longlong)FVar8 + -8))[(longlong)(this->WidgetDrawStack).ArrayNum * 0x20]
          == '\0') {
        pFVar7 = AddCachedElement<8>(this);
        return pFVar7;
      }
    }
  }
  puVar2 = &(this->UncachedDrawElements).field_0xc0;
  uVar6 = *(uint *)&(this->UncachedDrawElements).field_0xd0;
  puVar1 = &(this->UncachedDrawElements).field_0xd4;
  if (uVar6 == *(uint *)puVar1) {
    uVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>::ForAnyElementType>
                      (0x898,(ForAnyElementType *)puVar2,(int *)puVar1);
  }
  *(uint *)&(this->UncachedDrawElements).field_0xd0 = uVar6 + 1;
  DefaultConstructItems<FSlateBoxElement,int>
            ((void *)(*(longlong *)puVar2 + (longlong)(int)uVar6 * 0x98),1);
  FSlateDebuggingElementTypeAddedEventArgs::FSlateDebuggingElementTypeAddedEventArgs
            (&local_28,this,uVar6,ET_Border);
  TMulticastDelegate<void___cdecl(FSlateDebuggingElementTypeAddedEventArgs_const_&),FDefaultDelegateUserPolicy>
  ::Broadcast(&FSlateDebugging::ElementTypeAdded,&local_28);
  uVar9 = 0;
  if ((int)uVar6 < *(int *)&(this->UncachedDrawElements).field_0xd0) {
    uVar9 = ~uVar6 >> 0x1f;
  }
  if (uVar9 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar7 = (FSlateBoxElement *)(*pcVar4)();
      return pFVar7;
    }
  }
  return (FSlateBoxElement *)(*(longlong *)puVar2 + (longlong)(int)uVar6 * 0x98);
}

// AddUninitialized<9> @ 1424d26f0

/* WARNING: Enum "Type": Some values do not have unique names */

FSlateCustomDrawerElement * __thiscall
FSlateWindowElementList::AddUninitialized<9>(FSlateWindowElementList *this)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  FSlateCustomDrawerElement *pFVar7;
  ForElementType<FSlateWindowElementList::FWidgetDrawElementState> FVar8;
  uint uVar9;
  FSlateDebuggingElementTypeAddedEventArgs local_28;
  
  if (0 < (this->CachedElementDataListStack).ArrayNum) {
    iVar3 = (this->WidgetDrawStack).ArrayNum;
    if (iVar3 != 0) {
      uVar6 = 0;
      if ((int)(iVar3 - 1U) < iVar3) {
        uVar6 = ~(iVar3 - 1U) >> 0x1f;
      }
      if (uVar6 == 0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          pFVar7 = (FSlateCustomDrawerElement *)(*pcVar4)();
          return pFVar7;
        }
      }
      FVar8 = (this->WidgetDrawStack).AllocatorInstance.SecondaryData;
      if (FVar8 == (ForElementType<FSlateWindowElementList::FWidgetDrawElementState>)0x0) {
        FVar8 = (ForElementType<FSlateWindowElementList::FWidgetDrawElementState>)
                &this->WidgetDrawStack;
      }
      if (((undefined1 *)((longlong)FVar8 + -8))[(longlong)(this->WidgetDrawStack).ArrayNum * 0x20]
          == '\0') {
        pFVar7 = AddCachedElement<9>(this);
        return pFVar7;
      }
    }
  }
  puVar2 = &(this->UncachedDrawElements).field_0xd8;
  uVar6 = *(uint *)&(this->UncachedDrawElements).field_0xe8;
  puVar1 = &(this->UncachedDrawElements).field_0xec;
  if (uVar6 == *(uint *)puVar1) {
    uVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>::ForAnyElementType>
                      (0x858,(ForAnyElementType *)puVar2,(int *)puVar1);
  }
  *(uint *)&(this->UncachedDrawElements).field_0xe8 = uVar6 + 1;
  DefaultConstructItems<FSlateCustomDrawerElement,int>
            ((void *)(*(longlong *)puVar2 + (longlong)(int)uVar6 * 0x58),1);
  FSlateDebuggingElementTypeAddedEventArgs::FSlateDebuggingElementTypeAddedEventArgs
            (&local_28,this,uVar6,ET_Custom);
  TMulticastDelegate<void___cdecl(FSlateDebuggingElementTypeAddedEventArgs_const_&),FDefaultDelegateUserPolicy>
  ::Broadcast(&FSlateDebugging::ElementTypeAdded,&local_28);
  uVar9 = 0;
  if ((int)uVar6 < *(int *)&(this->UncachedDrawElements).field_0xe8) {
    uVar9 = ~uVar6 >> 0x1f;
  }
  if (uVar9 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar7 = (FSlateCustomDrawerElement *)(*pcVar4)();
      return pFVar7;
    }
  }
  return (FSlateCustomDrawerElement *)(*(longlong *)puVar2 + (longlong)(int)uVar6 * 0x58);
}

// AddUninitialized<10> @ 1424d2880

/* WARNING: Enum "Type": Some values do not have unique names */

FSlateCustomVertsElement * __thiscall
FSlateWindowElementList::AddUninitialized<10>(FSlateWindowElementList *this)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  FSlateCustomVertsElement *pFVar7;
  ForElementType<FSlateWindowElementList::FWidgetDrawElementState> FVar8;
  uint uVar9;
  FSlateDebuggingElementTypeAddedEventArgs local_28;
  
  if (0 < (this->CachedElementDataListStack).ArrayNum) {
    iVar3 = (this->WidgetDrawStack).ArrayNum;
    if (iVar3 != 0) {
      uVar6 = 0;
      if ((int)(iVar3 - 1U) < iVar3) {
        uVar6 = ~(iVar3 - 1U) >> 0x1f;
      }
      if (uVar6 == 0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          pFVar7 = (FSlateCustomVertsElement *)(*pcVar4)();
          return pFVar7;
        }
      }
      FVar8 = (this->WidgetDrawStack).AllocatorInstance.SecondaryData;
      if (FVar8 == (ForElementType<FSlateWindowElementList::FWidgetDrawElementState>)0x0) {
        FVar8 = (ForElementType<FSlateWindowElementList::FWidgetDrawElementState>)
                &this->WidgetDrawStack;
      }
      if (((undefined1 *)((longlong)FVar8 + -8))[(longlong)(this->WidgetDrawStack).ArrayNum * 0x20]
          == '\0') {
        pFVar7 = AddCachedElement<10>(this);
        return pFVar7;
      }
    }
  }
  puVar2 = &(this->UncachedDrawElements).field_0xf0;
  uVar6 = *(uint *)&(this->UncachedDrawElements).field_0x100;
  puVar1 = &(this->UncachedDrawElements).field_0x104;
  if (uVar6 == *(uint *)puVar1) {
    uVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>::ForAnyElementType>
                      (0x880,(ForAnyElementType *)puVar2,(int *)puVar1);
  }
  *(uint *)&(this->UncachedDrawElements).field_0x100 = uVar6 + 1;
  DefaultConstructItems<FSlateCustomVertsElement,int>
            ((void *)(*(longlong *)puVar2 + (longlong)(int)uVar6 * 0x80),1);
  FSlateDebuggingElementTypeAddedEventArgs::FSlateDebuggingElementTypeAddedEventArgs
            (&local_28,this,uVar6,ET_CustomVerts);
  TMulticastDelegate<void___cdecl(FSlateDebuggingElementTypeAddedEventArgs_const_&),FDefaultDelegateUserPolicy>
  ::Broadcast(&FSlateDebugging::ElementTypeAdded,&local_28);
  uVar9 = 0;
  if ((int)uVar6 < *(int *)&(this->UncachedDrawElements).field_0x100) {
    uVar9 = ~uVar6 >> 0x1f;
  }
  if (uVar9 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar7 = (FSlateCustomVertsElement *)(*pcVar4)();
      return pFVar7;
    }
  }
  return (FSlateCustomVertsElement *)(*(longlong *)puVar2 + (longlong)(int)uVar6 * 0x80);
}

// AddUninitialized<0> @ 1424d2a10

/* WARNING: Enum "Type": Some values do not have unique names */

FSlateBoxElement * __thiscall
FSlateWindowElementList::AddUninitialized<0>(FSlateWindowElementList *this)

{
  undefined1 *puVar1;
  TTuple<TArray<FSlateBoxElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateBoxElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateTextElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateShapedTextElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateSplineElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateLineElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateGradientElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateViewportElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateBoxElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateCustomDrawerElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateCustomVertsElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlatePostProcessElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateRoundedBoxElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateDrawElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>_>
  *pTVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  FSlateBoxElement *pFVar7;
  ForElementType<FSlateWindowElementList::FWidgetDrawElementState> FVar8;
  uint uVar9;
  FSlateDebuggingElementTypeAddedEventArgs local_28;
  
  if (0 < (this->CachedElementDataListStack).ArrayNum) {
    iVar3 = (this->WidgetDrawStack).ArrayNum;
    if (iVar3 != 0) {
      uVar6 = 0;
      if ((int)(iVar3 - 1U) < iVar3) {
        uVar6 = ~(iVar3 - 1U) >> 0x1f;
      }
      if (uVar6 == 0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          pFVar7 = (FSlateBoxElement *)(*pcVar4)();
          return pFVar7;
        }
      }
      FVar8 = (this->WidgetDrawStack).AllocatorInstance.SecondaryData;
      if (FVar8 == (ForElementType<FSlateWindowElementList::FWidgetDrawElementState>)0x0) {
        FVar8 = (ForElementType<FSlateWindowElementList::FWidgetDrawElementState>)
                &this->WidgetDrawStack;
      }
      if (((undefined1 *)((longlong)FVar8 + -8))[(longlong)(this->WidgetDrawStack).ArrayNum * 0x20]
          == '\0') {
        pFVar7 = AddCachedElement<0>(this);
        return pFVar7;
      }
    }
  }
  pTVar2 = &this->UncachedDrawElements;
  uVar6 = *(uint *)&(this->UncachedDrawElements).field_0x10;
  puVar1 = &(this->UncachedDrawElements).field_0x14;
  if (uVar6 == *(uint *)puVar1) {
    uVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>::ForAnyElementType>
                      (0x898,(ForAnyElementType *)pTVar2,(int *)puVar1);
  }
  *(uint *)&(this->UncachedDrawElements).field_0x10 = uVar6 + 1;
  DefaultConstructItems<FSlateBoxElement,int>
            ((void *)(*(longlong *)&pTVar2->field_0x0 + (longlong)(int)uVar6 * 0x98),1);
  FSlateDebuggingElementTypeAddedEventArgs::FSlateDebuggingElementTypeAddedEventArgs
            (&local_28,this,uVar6,ET_Box);
  TMulticastDelegate<void___cdecl(FSlateDebuggingElementTypeAddedEventArgs_const_&),FDefaultDelegateUserPolicy>
  ::Broadcast(&FSlateDebugging::ElementTypeAdded,&local_28);
  uVar9 = 0;
  if ((int)uVar6 < *(int *)&(this->UncachedDrawElements).field_0x10) {
    uVar9 = ~uVar6 >> 0x1f;
  }
  if (uVar9 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar7 = (FSlateBoxElement *)(*pcVar4)();
      return pFVar7;
    }
  }
  return (FSlateBoxElement *)(*(longlong *)&pTVar2->field_0x0 + (longlong)(int)uVar6 * 0x98);
}

// AddUninitialized<11> @ 1424d2ba0

/* WARNING: Enum "Type": Some values do not have unique names */

FSlatePostProcessElement * __thiscall
FSlateWindowElementList::AddUninitialized<11>(FSlateWindowElementList *this)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  FSlatePostProcessElement *pFVar7;
  ForElementType<FSlateWindowElementList::FWidgetDrawElementState> FVar8;
  uint uVar9;
  FSlateDebuggingElementTypeAddedEventArgs local_28;
  
  if (0 < (this->CachedElementDataListStack).ArrayNum) {
    iVar3 = (this->WidgetDrawStack).ArrayNum;
    if (iVar3 != 0) {
      uVar6 = 0;
      if ((int)(iVar3 - 1U) < iVar3) {
        uVar6 = ~(iVar3 - 1U) >> 0x1f;
      }
      if (uVar6 == 0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          pFVar7 = (FSlatePostProcessElement *)(*pcVar4)();
          return pFVar7;
        }
      }
      FVar8 = (this->WidgetDrawStack).AllocatorInstance.SecondaryData;
      if (FVar8 == (ForElementType<FSlateWindowElementList::FWidgetDrawElementState>)0x0) {
        FVar8 = (ForElementType<FSlateWindowElementList::FWidgetDrawElementState>)
                &this->WidgetDrawStack;
      }
      if (((undefined1 *)((longlong)FVar8 + -8))[(longlong)(this->WidgetDrawStack).ArrayNum * 0x20]
          == '\0') {
        pFVar7 = AddCachedElement<11>(this);
        return pFVar7;
      }
    }
  }
  puVar2 = &(this->UncachedDrawElements).field_0x108;
  uVar6 = *(uint *)&(this->UncachedDrawElements).field_0x118;
  puVar1 = &(this->UncachedDrawElements).field_0x11c;
  if (uVar6 == *(uint *)puVar1) {
    uVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>::ForAnyElementType>
                      (0x1080,(ForAnyElementType *)puVar2,(int *)puVar1);
  }
  *(uint *)&(this->UncachedDrawElements).field_0x118 = uVar6 + 1;
  DefaultConstructItems<FSlatePostProcessElement,int>
            ((void *)(*(longlong *)puVar2 + (longlong)(int)uVar6 * 0x80),1);
  FSlateDebuggingElementTypeAddedEventArgs::FSlateDebuggingElementTypeAddedEventArgs
            (&local_28,this,uVar6,ET_PostProcessPass);
  TMulticastDelegate<void___cdecl(FSlateDebuggingElementTypeAddedEventArgs_const_&),FDefaultDelegateUserPolicy>
  ::Broadcast(&FSlateDebugging::ElementTypeAdded,&local_28);
  uVar9 = 0;
  if ((int)uVar6 < *(int *)&(this->UncachedDrawElements).field_0x118) {
    uVar9 = ~uVar6 >> 0x1f;
  }
  if (uVar9 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar7 = (FSlatePostProcessElement *)(*pcVar4)();
      return pFVar7;
    }
  }
  return (FSlatePostProcessElement *)(*(longlong *)puVar2 + (longlong)(int)uVar6 * 0x80);
}

// AddUninitialized<12> @ 1424d2d30

/* WARNING: Enum "Type": Some values do not have unique names */

FSlateRoundedBoxElement * __thiscall
FSlateWindowElementList::AddUninitialized<12>(FSlateWindowElementList *this)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  FSlateRoundedBoxElement *pFVar7;
  ForElementType<FSlateWindowElementList::FWidgetDrawElementState> FVar8;
  uint uVar9;
  FSlateDebuggingElementTypeAddedEventArgs local_28;
  
  if (0 < (this->CachedElementDataListStack).ArrayNum) {
    iVar3 = (this->WidgetDrawStack).ArrayNum;
    if (iVar3 != 0) {
      uVar6 = 0;
      if ((int)(iVar3 - 1U) < iVar3) {
        uVar6 = ~(iVar3 - 1U) >> 0x1f;
      }
      if (uVar6 == 0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          pFVar7 = (FSlateRoundedBoxElement *)(*pcVar4)();
          return pFVar7;
        }
      }
      FVar8 = (this->WidgetDrawStack).AllocatorInstance.SecondaryData;
      if (FVar8 == (ForElementType<FSlateWindowElementList::FWidgetDrawElementState>)0x0) {
        FVar8 = (ForElementType<FSlateWindowElementList::FWidgetDrawElementState>)
                &this->WidgetDrawStack;
      }
      if (((undefined1 *)((longlong)FVar8 + -8))[(longlong)(this->WidgetDrawStack).ArrayNum * 0x20]
          == '\0') {
        pFVar7 = AddCachedElement<12>(this);
        return pFVar7;
      }
    }
  }
  puVar2 = &(this->UncachedDrawElements).field_0x120;
  uVar6 = *(uint *)&(this->UncachedDrawElements).field_0x130;
  puVar1 = &(this->UncachedDrawElements).field_0x134;
  if (uVar6 == *(uint *)puVar1) {
    uVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>::ForAnyElementType>
                      (0x10d0,(ForAnyElementType *)puVar2,(int *)puVar1);
  }
  *(uint *)&(this->UncachedDrawElements).field_0x130 = uVar6 + 1;
  DefaultConstructItems<FSlateRoundedBoxElement,int>
            ((void *)(*(longlong *)puVar2 + (longlong)(int)uVar6 * 0xd0),1);
  FSlateDebuggingElementTypeAddedEventArgs::FSlateDebuggingElementTypeAddedEventArgs
            (&local_28,this,uVar6,ET_RoundedBox);
  TMulticastDelegate<void___cdecl(FSlateDebuggingElementTypeAddedEventArgs_const_&),FDefaultDelegateUserPolicy>
  ::Broadcast(&FSlateDebugging::ElementTypeAdded,&local_28);
  uVar9 = 0;
  if ((int)uVar6 < *(int *)&(this->UncachedDrawElements).field_0x130) {
    uVar9 = ~uVar6 >> 0x1f;
  }
  if (uVar9 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar7 = (FSlateRoundedBoxElement *)(*pcVar4)();
      return pFVar7;
    }
  }
  return (FSlateRoundedBoxElement *)(*(longlong *)puVar2 + (longlong)(int)uVar6 * 0xd0);
}

// AddUninitialized<13> @ 1424d2ec0

/* WARNING: Enum "Type": Some values do not have unique names */

FSlateDrawElement * __thiscall
FSlateWindowElementList::AddUninitialized<13>(FSlateWindowElementList *this)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  FSlateDrawElement *pFVar7;
  ForElementType<FSlateWindowElementList::FWidgetDrawElementState> FVar8;
  uint uVar9;
  FSlateDebuggingElementTypeAddedEventArgs local_28;
  
  if (0 < (this->CachedElementDataListStack).ArrayNum) {
    iVar3 = (this->WidgetDrawStack).ArrayNum;
    if (iVar3 != 0) {
      uVar6 = 0;
      if ((int)(iVar3 - 1U) < iVar3) {
        uVar6 = ~(iVar3 - 1U) >> 0x1f;
      }
      if (uVar6 == 0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          pFVar7 = (FSlateDrawElement *)(*pcVar4)();
          return pFVar7;
        }
      }
      FVar8 = (this->WidgetDrawStack).AllocatorInstance.SecondaryData;
      if (FVar8 == (ForElementType<FSlateWindowElementList::FWidgetDrawElementState>)0x0) {
        FVar8 = (ForElementType<FSlateWindowElementList::FWidgetDrawElementState>)
                &this->WidgetDrawStack;
      }
      if (((undefined1 *)((longlong)FVar8 + -8))[(longlong)(this->WidgetDrawStack).ArrayNum * 0x20]
          == '\0') {
        pFVar7 = AddCachedElement<13>(this);
        return pFVar7;
      }
    }
  }
  puVar2 = &(this->UncachedDrawElements).field_0x138;
  uVar6 = *(uint *)&(this->UncachedDrawElements).field_0x148;
  puVar1 = &(this->UncachedDrawElements).field_0x14c;
  if (uVar6 == *(uint *)puVar1) {
    uVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>::ForAnyElementType>
                      (0x848,(ForAnyElementType *)puVar2,(int *)puVar1);
  }
  *(uint *)&(this->UncachedDrawElements).field_0x148 = uVar6 + 1;
  DefaultConstructItems<FSlateDrawElement,int>
            ((void *)(*(longlong *)puVar2 + (longlong)(int)uVar6 * 0x48),1);
  FSlateDebuggingElementTypeAddedEventArgs::FSlateDebuggingElementTypeAddedEventArgs
            (&local_28,this,uVar6,ET_NonMapped);
  TMulticastDelegate<void___cdecl(FSlateDebuggingElementTypeAddedEventArgs_const_&),FDefaultDelegateUserPolicy>
  ::Broadcast(&FSlateDebugging::ElementTypeAdded,&local_28);
  uVar9 = 0;
  if ((int)uVar6 < *(int *)&(this->UncachedDrawElements).field_0x148) {
    uVar9 = ~uVar6 >> 0x1f;
  }
  if (uVar9 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar7 = (FSlateDrawElement *)(*pcVar4)();
      return pFVar7;
    }
  }
  return (FSlateDrawElement *)(*(longlong *)puVar2 + (longlong)(int)uVar6 * 0x48);
}

// FSlateWindowElementList @ 1424eb330

/* WARNING: Enum "Type": Some values do not have unique names */

FSlateWindowElementList * __thiscall
FSlateWindowElementList::FSlateWindowElementList
          (FSlateWindowElementList *this,TSharedPtr<SWindow,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  FDeprecateSlateVector2D FVar2;
  
  (this->WeakPaintWindow).Object = param_1->Object;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  (this->WeakPaintWindow).WeakReferenceCount.ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
    UNLOCK();
  }
  this->RawPaintWindow = param_1->Object;
  FMemStackBase::FMemStackBase(&this->MemManager,Small);
  (this->BatchData).FirstRenderBatchIndex = -1;
  (this->BatchData).RenderBatches.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BatchData).RenderBatches.ArrayNum = 0;
  (this->BatchData).RenderBatches.ArrayMax = 0;
  (this->BatchData).UncachedSourceBatchVertices.AllocatorInstance._padding_ = 0;
  (this->BatchData).UncachedSourceBatchVertices.AllocatorInstance.AllocatedSize = 0;
  (this->BatchData).UncachedSourceBatchVertices.ArrayNum = 0;
  (this->BatchData).UncachedSourceBatchVertices.ArrayMax = 0;
  (this->BatchData).UncachedSourceBatchIndices.AllocatorInstance._padding_ = 0;
  (this->BatchData).UncachedSourceBatchIndices.AllocatorInstance.AllocatedSize = 0;
  (this->BatchData).UncachedSourceBatchIndices.ArrayNum = 0;
  (this->BatchData).UncachedSourceBatchIndices.ArrayMax = 0;
  (this->BatchData).FinalVertexData.AllocatorInstance._padding_ = 0;
  (this->BatchData).FinalVertexData.AllocatorInstance.AllocatedSize = 0;
  (this->BatchData).FinalVertexData.ArrayNum = 0;
  (this->BatchData).FinalVertexData.ArrayMax = 0;
  (this->BatchData).FinalIndexData.AllocatorInstance._padding_ = 0;
  (this->BatchData).FinalIndexData.AllocatorInstance.AllocatedSize = 0;
  (this->BatchData).FinalIndexData.ArrayNum = 0;
  (this->BatchData).FinalIndexData.ArrayMax = 0;
  (this->BatchData).MaxNumFinalVertices = 0;
  (this->BatchData).MaxNumFinalIndices = 0;
  (this->BatchData).NumLayers = 0;
  (this->BatchData).NumBatches = 0;
  (this->BatchData).bIsStencilBufferRequired = false;
  (this->BatchData).bRequiresVirtualTextureFeedback = false;
  (this->BatchDataHDR).RenderBatches.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BatchDataHDR).RenderBatches.ArrayNum = 0;
  (this->BatchDataHDR).RenderBatches.ArrayMax = 0;
  (this->BatchDataHDR).UncachedSourceBatchVertices.AllocatorInstance._padding_ = 0;
  (this->BatchDataHDR).UncachedSourceBatchVertices.AllocatorInstance.AllocatedSize = 0;
  (this->BatchDataHDR).UncachedSourceBatchVertices.ArrayNum = 0;
  (this->BatchDataHDR).UncachedSourceBatchVertices.ArrayMax = 0;
  (this->BatchDataHDR).UncachedSourceBatchIndices.AllocatorInstance._padding_ = 0;
  (this->BatchDataHDR).UncachedSourceBatchIndices.AllocatorInstance.AllocatedSize = 0;
  (this->BatchDataHDR).UncachedSourceBatchIndices.ArrayNum = 0;
  (this->BatchDataHDR).UncachedSourceBatchIndices.ArrayMax = 0;
  (this->BatchDataHDR).FinalVertexData.AllocatorInstance._padding_ = 0;
  (this->BatchDataHDR).FinalVertexData.AllocatorInstance.AllocatedSize = 0;
  (this->BatchDataHDR).FinalVertexData.ArrayNum = 0;
  (this->BatchDataHDR).FinalVertexData.ArrayMax = 0;
  (this->BatchDataHDR).FinalIndexData.AllocatorInstance._padding_ = 0;
  (this->BatchDataHDR).FinalIndexData.AllocatorInstance.AllocatedSize = 0;
  (this->BatchDataHDR).FinalIndexData.ArrayNum = 0;
  (this->BatchDataHDR).FinalIndexData.ArrayMax = 0;
  (this->BatchDataHDR).MaxNumFinalVertices = 0;
  (this->BatchDataHDR).MaxNumFinalIndices = 0;
  (this->BatchDataHDR).NumLayers = 0;
  (this->BatchDataHDR).NumBatches = 0;
  (this->BatchDataHDR).bIsStencilBufferRequired = false;
  (this->BatchDataHDR).bRequiresVirtualTextureFeedback = false;
  (this->MergeBatchDataTask).Pimpl.Reference = (FTaskBase *)0x0;
  (this->ClippingManager).ClippingStack.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ClippingManager).ClippingStack.ArrayNum = 0;
  (this->ClippingManager).ClippingStack.ArrayMax = 0;
  (this->ClippingManager).ClippingStates.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ClippingManager).ClippingStates.ArrayNum = 0;
  (this->ClippingManager).ClippingStates.ArrayMax = 0;
  (this->PixelSnappingMethodStack).AllocatorInstance.SecondaryData =
       (ForElementType<EWidgetPixelSnapping>)0x0;
  (this->BatchDataHDR).FirstRenderBatchIndex = -1;
  this->MemManagerAllocatedMemory = 0;
  this->RenderTargetWindow = (SWindow *)0x0;
  (this->PixelSnappingMethodStack).ArrayNum = 0;
  (this->PixelSnappingMethodStack).ArrayMax = 4;
  (this->DeferredPaintList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DeferredPaintList).ArrayNum = 0;
  (this->DeferredPaintList).ArrayMax = 0;
  this->bNeedsDeferredResolve = false;
  (this->ResolveToDeferredIndex).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ResolveToDeferredIndex).ArrayNum = 0;
  (this->ResolveToDeferredIndex).ArrayMax = 0;
  TTuple<TArray<FSlateBoxElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateBoxElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateTextElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateShapedTextElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateSplineElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateLineElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateGradientElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateViewportElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateBoxElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateCustomDrawerElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateCustomVertsElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlatePostProcessElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateRoundedBoxElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateDrawElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>_>
  ::
  TTuple<TArray<FSlateBoxElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateBoxElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateTextElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateShapedTextElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateSplineElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateLineElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateGradientElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateViewportElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateBoxElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateCustomDrawerElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateCustomVertsElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlatePostProcessElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateRoundedBoxElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateDrawElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>_>
            (&this->UncachedDrawElements);
  (this->WidgetDrawStack).AllocatorInstance.SecondaryData =
       (ForElementType<FSlateWindowElementList::FWidgetDrawElementState>)0x0;
  (this->WidgetDrawStack).ArrayNum = 0;
  (this->WidgetDrawStack).ArrayMax = 0x32;
  (this->CachedElementDataList).AllocatorInstance.SecondaryData =
       (ForElementType<FSlateCachedElementData_*>)0x0;
  (this->CachedElementDataList).ArrayNum = 0;
  (this->CachedElementDataList).ArrayMax = 4;
  (this->CachedElementDataListStack).AllocatorInstance.SecondaryData = (ForElementType<int>)0x0;
  (this->CachedElementDataListStack).ArrayNum = 0;
  *(undefined8 *)&(this->CachedElementDataListStack).ArrayMax = 4;
  (this->WindowSize).field0_0x0._s_0.Y = 0.0;
  this->bIsInGameLayer = false;
  if (param_1->Object != (SWindow *)0x0) {
    FVar2 = SWindow::GetSizeInScreen(param_1->Object);
    (this->WindowSize).field0_0x0 = *(TVector2<float>_u_0 *)FVar2;
  }
  return this;
}

// ~FSlateWindowElementList @ 1424ecca0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FSlateWindowElementList::~FSlateWindowElementList(FSlateWindowElementList *this)

{
  atomic<unsigned_int> *paVar1;
  atomic<int> *paVar2;
  FTaskHandle *pFVar3;
  atomic<unsigned_int> aVar4;
  atomic<int> aVar5;
  FTaskBase *pFVar6;
  ForElementType<int> FVar7;
  ForElementType<FSlateCachedElementData_*> FVar8;
  FScriptContainerElement *pFVar9;
  ForElementType<EWidgetPixelSnapping> FVar10;
  TReferenceControllerBase<1> *pTVar11;
  code *pcVar12;
  bool bVar13;
  ForElementType<FSlateWindowElementList::FWidgetDrawElementState> FVar14;
  longlong local_18 [2];
  
  pFVar3 = &this->MergeBatchDataTask;
  pFVar6 = (pFVar3->Pimpl).Reference;
  if (pFVar6 != (FTaskBase *)0x0) {
    UE::Tasks::Private::FTaskBase::Wait(pFVar6);
  }
  if (pFVar3 != (FTaskHandle *)local_18) {
    pFVar6 = (pFVar3->Pimpl).Reference;
    (pFVar3->Pimpl).Reference = (FTaskBase *)0x0;
    if (pFVar6 != (FTaskBase *)0x0) {
      LOCK();
      paVar1 = &pFVar6->RefCount;
      aVar4 = *paVar1;
      *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar4 == (atomic<unsigned_int>)0x1) {
        (**(code **)pFVar6->_padding_)(pFVar6,1);
      }
    }
  }
  FVar7 = (this->CachedElementDataListStack).AllocatorInstance.SecondaryData;
  if (FVar7 != (ForElementType<int>)0x0) {
    FMemory::Free((void *)FVar7);
  }
  FVar8 = (this->CachedElementDataList).AllocatorInstance.SecondaryData;
  if (FVar8 != (ForElementType<FSlateCachedElementData_*>)0x0) {
    FMemory::Free((void *)FVar8);
  }
  FVar14 = (this->WidgetDrawStack).AllocatorInstance.SecondaryData;
  if (FVar14 == (ForElementType<FSlateWindowElementList::FWidgetDrawElementState>)0x0) {
    FVar14 = (ForElementType<FSlateWindowElementList::FWidgetDrawElementState>)
             &this->WidgetDrawStack;
  }
  DestructItems<FSlateWindowElementList::FWidgetDrawElementState,int>
            ((FWidgetDrawElementState *)FVar14,(this->WidgetDrawStack).ArrayNum);
  FVar14 = (this->WidgetDrawStack).AllocatorInstance.SecondaryData;
  if (FVar14 != (ForElementType<FSlateWindowElementList::FWidgetDrawElementState>)0x0) {
    FMemory::Free((void *)FVar14);
  }
  UE::Core::Private::Tuple::
  TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7,8,9,10,11,12,13>,TArray<FSlateBoxElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateBoxElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateTextElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateShapedTextElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateSplineElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateLineElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateGradientElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateViewportElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateBoxElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateCustomDrawerElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateCustomVertsElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlatePostProcessElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateRoundedBoxElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateDrawElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>_>
  ::
  ~TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7,8,9,10,11,12,13>,TArray<FSlateBoxElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateBoxElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateTextElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateShapedTextElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateSplineElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateLineElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateGradientElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateViewportElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateBoxElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateCustomDrawerElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateCustomVertsElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlatePostProcessElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateRoundedBoxElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateDrawElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>_>
            ((TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7,8,9,10,11,12,13>,TArray<FSlateBoxElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateBoxElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateTextElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateShapedTextElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateSplineElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateLineElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateGradientElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateViewportElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateBoxElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateCustomDrawerElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateCustomVertsElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlatePostProcessElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateRoundedBoxElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateDrawElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>_>
              *)&this->UncachedDrawElements);
  pFVar9 = (this->ResolveToDeferredIndex).AllocatorInstance.Data;
  if (pFVar9 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar9);
  }
  DestructItems<TSharedPtr<FSlateWindowElementList::FDeferredPaint,1>,int>
            ((TSharedPtr<FSlateWindowElementList::FDeferredPaint,1> *)
             (this->DeferredPaintList).AllocatorInstance.Data,(this->DeferredPaintList).ArrayNum);
  pFVar9 = (this->DeferredPaintList).AllocatorInstance.Data;
  if (pFVar9 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar9);
  }
  FVar10 = (this->PixelSnappingMethodStack).AllocatorInstance.SecondaryData;
  if (FVar10 != (ForElementType<EWidgetPixelSnapping>)0x0) {
    FMemory::Free((void *)FVar10);
  }
  DestructItems<FSlateClippingState,int>
            ((FSlateClippingState *)(this->ClippingManager).ClippingStates.AllocatorInstance.Data,
             (this->ClippingManager).ClippingStates.ArrayNum);
  pFVar9 = (this->ClippingManager).ClippingStates.AllocatorInstance.Data;
  if (pFVar9 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar9);
  }
  pFVar9 = (this->ClippingManager).ClippingStack.AllocatorInstance.Data;
  if (pFVar9 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar9);
  }
  pFVar6 = (pFVar3->Pimpl).Reference;
  if (pFVar6 != (FTaskBase *)0x0) {
    LOCK();
    paVar1 = &pFVar6->RefCount;
    aVar4 = *paVar1;
    *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar4 == (atomic<unsigned_int>)0x1) {
      (**(code **)pFVar6->_padding_)();
    }
  }
  FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType::
  ~ForAnyElementType(&(this->BatchDataHDR).FinalIndexData.AllocatorInstance);
  FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType::
  ~ForAnyElementType(&(this->BatchDataHDR).FinalVertexData.AllocatorInstance);
  FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType::
  ~ForAnyElementType(&(this->BatchDataHDR).UncachedSourceBatchIndices.AllocatorInstance);
  FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType::
  ~ForAnyElementType(&(this->BatchDataHDR).UncachedSourceBatchVertices.AllocatorInstance);
  pFVar9 = (this->BatchDataHDR).RenderBatches.AllocatorInstance.Data;
  if (pFVar9 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar9);
  }
  FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType::
  ~ForAnyElementType(&(this->BatchData).FinalIndexData.AllocatorInstance);
  FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType::
  ~ForAnyElementType(&(this->BatchData).FinalVertexData.AllocatorInstance);
  FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType::
  ~ForAnyElementType(&(this->BatchData).UncachedSourceBatchIndices.AllocatorInstance);
  FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType::
  ~ForAnyElementType(&(this->BatchData).UncachedSourceBatchVertices.AllocatorInstance);
  pFVar9 = (this->BatchData).RenderBatches.AllocatorInstance.Data;
  if (pFVar9 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar9);
  }
  if ((GIsCriticalError == false) && ((this->MemManager).NumMarks != 0)) {
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("(GIsCriticalError || !NumMarks)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MemStack.h"
                        ,0x74,L"");
    if (bVar13) {
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
  }
  FMemStackBase::FreeChunks(&this->MemManager,(FTaggedMemory *)0x0);
  pTVar11 = (this->WeakPaintWindow).WeakReferenceCount.ReferenceController;
  if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar2 = &pTVar11->WeakReferenceCount;
    aVar5 = *paVar2;
    *paVar2 = (atomic<int>)((int)*paVar2 + -1);
    UNLOCK();
    if (aVar5 == (atomic<int>)0x1) {
      (**(code **)(pTVar11->_padding_ + 8))(pTVar11,1);
    }
  }
  return;
}

// operator() @ 1424fa2d0

void __thiscall
`FSlateWindowElementList::StartMergeRenderBatches'::__l5::<lambda_1>::operator()(void *this)

{
  if (CpuChannel->Enabled < 0) {
    FSlateBatchData::MergeRenderBatches((FSlateBatchData *)(*(longlong *)this + 0x50));
    FSlateBatchData::MergeRenderBatches((FSlateBatchData *)(*(longlong *)this + 0xd8));
    return;
  }
  FCpuProfilerTrace::GetOrCreateSpecId
            (&__CpuProfilerEventSpecId84,"Slate::MergeRenderBatches",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Rendering\\DrawElements.cpp"
             ,0x54);
  FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId84);
  FSlateBatchData::MergeRenderBatches((FSlateBatchData *)(*(longlong *)this + 0x50));
  FSlateBatchData::MergeRenderBatches((FSlateBatchData *)(*(longlong *)this + 0xd8));
  FCpuProfilerTrace::OutputEndEvent();
  return;
}

// AddReferencedObjects @ 1424fff60

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FSlateWindowElementList::AddReferencedObjects
          (FSlateWindowElementList *this,FReferenceCollector *param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 local_res8 [8];
  
  iVar1 = *(int *)&(this->UncachedDrawElements).field_0x40;
  lVar2 = *(longlong *)&(this->UncachedDrawElements).field_0x30;
  lVar3 = (longlong)iVar1 * 200 + lVar2;
  while( true ) {
    if (*(int *)&(this->UncachedDrawElements).field_0x40 != iVar1) {
      `TCheckedPointerIterator<FSlateTextElement,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (lVar2 == lVar3) break;
    FSlateFontInfo::AddReferencedObjects((FSlateFontInfo *)(lVar2 + 0x58),param_1);
    lVar2 = lVar2 + 200;
  }
  iVar1 = *(int *)&(this->UncachedDrawElements).field_0x58;
  lVar2 = *(longlong *)&(this->UncachedDrawElements).field_0x48;
  lVar3 = (longlong)iVar1 * 0x90 + lVar2;
  while( true ) {
    if (*(int *)&(this->UncachedDrawElements).field_0x58 != iVar1) {
      `TCheckedPointerIterator<FSlateShapedTextElement,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (lVar2 == lVar3) break;
    if (*(FShapedGlyphSequence **)(lVar2 + 0x58) != (FShapedGlyphSequence *)0x0) {
      FShapedGlyphSequence::AddReferencedObjects(*(FShapedGlyphSequence **)(lVar2 + 0x58),param_1);
    }
    if (*(FShapedGlyphSequence **)(lVar2 + 0x78) != (FShapedGlyphSequence *)0x0) {
      FShapedGlyphSequence::AddReferencedObjects(*(FShapedGlyphSequence **)(lVar2 + 0x78),param_1);
    }
    lVar2 = lVar2 + 0x90;
  }
  return;
}

// AddUninitializedLookup @ 142500800

/* WARNING: Enum "Type": Some values do not have unique names */

FSlateDrawElement * __thiscall
FSlateWindowElementList::AddUninitializedLookup(FSlateWindowElementList *this,EElementType param_1)

{
  FSlateRoundedBoxElement *pFVar1;
  FSlateBoxElement *pFVar2;
  FSlateTextElement *pFVar3;
  FSlateShapedTextElement *pFVar4;
  FSlateLineElement *pFVar5;
  FSlateSplineElement *pFVar6;
  FSlateGradientElement *pFVar7;
  FSlateViewportElement *pFVar8;
  FSlateCustomDrawerElement *pFVar9;
  FSlateCustomVertsElement *pFVar10;
  FSlatePostProcessElement *pFVar11;
  FSlateDrawElement *pFVar12;
  
  switch(param_1) {
  case ET_Box:
    pFVar2 = AddUninitialized<0>(this);
    return (FSlateDrawElement *)pFVar2;
  case ET_DebugQuad:
    pFVar2 = AddUninitialized<1>(this);
    return (FSlateDrawElement *)pFVar2;
  case ET_Text:
    pFVar3 = AddUninitialized<2>(this);
    return (FSlateDrawElement *)pFVar3;
  case ET_ShapedText:
    pFVar4 = AddUninitialized<3>(this);
    return (FSlateDrawElement *)pFVar4;
  case ET_Spline:
    pFVar6 = AddUninitialized<4>(this);
    return (FSlateDrawElement *)pFVar6;
  case ET_Line:
    pFVar5 = AddUninitialized<5>(this);
    return (FSlateDrawElement *)pFVar5;
  case ET_Gradient:
    pFVar7 = AddUninitialized<6>(this);
    return (FSlateDrawElement *)pFVar7;
  case ET_Viewport:
    pFVar8 = AddUninitialized<7>(this);
    return (FSlateDrawElement *)pFVar8;
  case ET_Border:
    pFVar2 = AddUninitialized<8>(this);
    return (FSlateDrawElement *)pFVar2;
  case ET_Custom:
    pFVar9 = AddUninitialized<9>(this);
    return (FSlateDrawElement *)pFVar9;
  case ET_CustomVerts:
    pFVar10 = AddUninitialized<10>(this);
    return (FSlateDrawElement *)pFVar10;
  case ET_PostProcessPass:
    pFVar11 = AddUninitialized<11>(this);
    return (FSlateDrawElement *)pFVar11;
  case ET_RoundedBox:
    pFVar1 = AddUninitialized<12>(this);
    return (FSlateDrawElement *)pFVar1;
  default:
    pFVar12 = AddUninitialized<13>(this);
    return pFVar12;
  }
}

// BeginDeferredGroup @ 142501da0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FSlateWindowElementList::BeginDeferredGroup(FSlateWindowElementList *this)

{
  int *piVar1;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  int local_18 [4];
  
  local_18[0] = (this->DeferredPaintList).ArrayNum;
  pTVar2 = &this->ResolveToDeferredIndex;
  pFVar3 = (pTVar2->AllocatorInstance).Data;
  if ((pFVar3 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 <
      pFVar3 + (longlong)(this->ResolveToDeferredIndex).ArrayMax * 4)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = (this->ResolveToDeferredIndex).ArrayNum;
  piVar1 = &(this->ResolveToDeferredIndex).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&pTVar2->AllocatorInstance,piVar1);
  }
  (this->ResolveToDeferredIndex).ArrayNum = iVar6 + 1;
  *(int *)((pTVar2->AllocatorInstance).Data + (longlong)iVar6 * 4) = local_18[0];
  return;
}

// EndDeferredGroup @ 142508640

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FSlateWindowElementList::EndDeferredGroup(FSlateWindowElementList *this)

{
  this->bNeedsDeferredResolve = true;
  return;
}

// FinishMergeRenderBatches @ 14250b050

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FSlateWindowElementList::FinishMergeRenderBatches(FSlateWindowElementList *this)

{
  atomic<unsigned_int> *paVar1;
  FTaskHandle *pFVar2;
  atomic<unsigned_int> aVar3;
  FTaskBase *pFVar4;
  longlong local_18 [2];
  
  pFVar2 = &this->MergeBatchDataTask;
  pFVar4 = (pFVar2->Pimpl).Reference;
  if (pFVar4 != (FTaskBase *)0x0) {
    UE::Tasks::Private::FTaskBase::Wait(pFVar4);
  }
  if (pFVar2 != (FTaskHandle *)local_18) {
    pFVar4 = (pFVar2->Pimpl).Reference;
    (pFVar2->Pimpl).Reference = (FTaskBase *)0x0;
    if (pFVar4 != (FTaskBase *)0x0) {
      LOCK();
      paVar1 = &pFVar4->RefCount;
      aVar3 = *paVar1;
      *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar3 == (atomic<unsigned_int>)0x1) {
                    /* WARNING: Could not recover jumptable at 0x00014250b09f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)pFVar4->_padding_)(pFVar4,1);
        return;
      }
    }
  }
  return;
}

// GetBatchData @ 14250be90

/* WARNING: Enum "Type": Some values do not have unique names */

FSlateBatchData * __thiscall FSlateWindowElementList::GetBatchData(FSlateWindowElementList *this)

{
  atomic<unsigned_int> *paVar1;
  FTaskHandle *pFVar2;
  atomic<unsigned_int> aVar3;
  FTaskBase *pFVar4;
  longlong local_18 [2];
  
  pFVar2 = &this->MergeBatchDataTask;
  pFVar4 = (pFVar2->Pimpl).Reference;
  if (pFVar4 != (FTaskBase *)0x0) {
    UE::Tasks::Private::FTaskBase::Wait(pFVar4);
  }
  if (pFVar2 != (FTaskHandle *)local_18) {
    pFVar4 = (pFVar2->Pimpl).Reference;
    (pFVar2->Pimpl).Reference = (FTaskBase *)0x0;
    if (pFVar4 != (FTaskBase *)0x0) {
      LOCK();
      paVar1 = &pFVar4->RefCount;
      aVar3 = *paVar1;
      *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar3 == (atomic<unsigned_int>)0x1) {
        (**(code **)pFVar4->_padding_)(pFVar4,1);
      }
    }
  }
  return &this->BatchData;
}

// GetClippingIndex @ 14250cb40

/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall FSlateWindowElementList::GetClippingIndex(FSlateWindowElementList *this)

{
  int iVar1;
  
  iVar1 = FSlateClippingManager::GetClippingIndex(&this->ClippingManager);
  return iVar1;
}

// GetClippingState @ 14250cb60

/* WARNING: Enum "Type": Some values do not have unique names */

TOptional<FSlateClippingState> * __thiscall
FSlateWindowElementList::GetClippingState
          (FSlateWindowElementList *this,TOptional<FSlateClippingState> *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TOptional<FSlateClippingState> *pTVar4;
  uint uVar5;
  
  uVar3 = FSlateClippingManager::GetClippingIndex(&this->ClippingManager);
  if (uVar3 == 0xffffffff) {
    __return_storage_ptr__->bIsSet = false;
    return __return_storage_ptr__;
  }
  uVar5 = 0;
  if ((int)uVar3 < (this->ClippingManager).ClippingStates.ArrayNum) {
    uVar5 = ~uVar3 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TOptional<FSlateClippingState> *)(*pcVar1)();
      return pTVar4;
    }
  }
  FSlateClippingState::FSlateClippingState
            (&__return_storage_ptr__->TypedValue,
             (FSlateClippingState *)
             ((this->ClippingManager).ClippingStates.AllocatorInstance.Data +
             (longlong)(int)uVar3 * 0x48));
  __return_storage_ptr__->bIsSet = false;
  __return_storage_ptr__->bIsSet = true;
  return __return_storage_ptr__;
}

// GetCurrentCachedElementData @ 14250d320

/* WARNING: Enum "Type": Some values do not have unique names */

FSlateCachedElementData * __thiscall
FSlateWindowElementList::GetCurrentCachedElementData(FSlateWindowElementList *this)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  FSlateCachedElementData *pFVar4;
  uint uVar5;
  ForElementType<int> FVar6;
  ForElementType<FSlateCachedElementData_*> FVar7;
  uint uVar8;
  
  iVar1 = (this->CachedElementDataListStack).ArrayNum;
  if (iVar1 == 0) {
    return (FSlateCachedElementData *)0x0;
  }
  uVar5 = 0;
  if ((int)(iVar1 - 1U) < iVar1) {
    uVar5 = ~(iVar1 - 1U) >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FSlateCachedElementData *)(*pcVar2)();
      return pFVar4;
    }
  }
  FVar6 = (this->CachedElementDataListStack).AllocatorInstance.SecondaryData;
  if (FVar6 == (ForElementType<int>)0x0) {
    FVar6 = (ForElementType<int>)&this->CachedElementDataListStack;
  }
  uVar5 = ((int *)((longlong)FVar6 + -4))[(this->CachedElementDataListStack).ArrayNum];
  uVar8 = 0;
  if ((int)uVar5 < (this->CachedElementDataList).ArrayNum) {
    uVar8 = ~uVar5 >> 0x1f;
  }
  if (uVar8 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FSlateCachedElementData *)(*pcVar2)();
      return pFVar4;
    }
  }
  FVar7 = (this->CachedElementDataList).AllocatorInstance.SecondaryData;
  if (FVar7 == (ForElementType<FSlateCachedElementData_*>)0x0) {
    FVar7 = (ForElementType<FSlateCachedElementData_*>)&this->CachedElementDataList;
  }
  return *(FSlateCachedElementData **)((longlong)FVar7 + (longlong)(int)uVar5 * 8);
}

// GetIsInGameLayer @ 14250e1b0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FSlateWindowElementList::GetIsInGameLayer(FSlateWindowElementList *this)

{
  return this->bIsInGameLayer;
}

// GetPixelSnappingMethod @ 14250e910

/* WARNING: Enum "Type": Some values do not have unique names */

EWidgetPixelSnapping __thiscall
FSlateWindowElementList::GetPixelSnappingMethod(FSlateWindowElementList *this)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  EWidgetPixelSnapping EVar4;
  uint uVar5;
  ForElementType<EWidgetPixelSnapping> FVar6;
  
  iVar1 = (this->PixelSnappingMethodStack).ArrayNum;
  if (iVar1 < 1) {
    return Inherit;
  }
  uVar5 = 0;
  if ((int)(iVar1 - 1U) < iVar1) {
    uVar5 = ~(iVar1 - 1U) >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      EVar4 = (*pcVar2)();
      return EVar4;
    }
  }
  FVar6 = (this->PixelSnappingMethodStack).AllocatorInstance.SecondaryData;
  if (FVar6 == (ForElementType<EWidgetPixelSnapping>)0x0) {
    FVar6 = (ForElementType<EWidgetPixelSnapping>)&this->PixelSnappingMethodStack;
  }
  return ((undefined1 *)((longlong)FVar6 + -1))[(this->PixelSnappingMethodStack).ArrayNum];
}

// PaintDeferred @ 142517a90

/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
FSlateWindowElementList::PaintDeferred
          (FSlateWindowElementList *this,int param_1,FSlateRect *param_2)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  code *pcVar4;
  atomic<int> aVar5;
  bool bVar6;
  int iVar7;
  atomic<int> aVar8;
  uint uVar9;
  TReferenceControllerBase<1> *pTVar10;
  uint uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  longlong lVar14;
  longlong lVar15;
  FScriptContainerElement *pFVar16;
  
  this->bNeedsDeferredResolve = false;
  if (((this->ResolveToDeferredIndex).ArrayNum < 1) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar4 = (code *)swi(3);
    iVar7 = (*pcVar4)();
    return iVar7;
  }
  iVar7 = (this->ResolveToDeferredIndex).ArrayNum;
  iVar2 = *(int *)((this->ResolveToDeferredIndex).AllocatorInstance.Data + (longlong)iVar7 * 4 + -4)
  ;
  uVar12 = (ulonglong)iVar2;
  (this->ResolveToDeferredIndex).ArrayNum = iVar7 + -1;
  iVar7 = (this->DeferredPaintList).ArrayNum;
  if (iVar2 < iVar7) {
    lVar14 = uVar12 << 4;
    uVar13 = uVar12;
    do {
      uVar11 = (uint)uVar13;
      uVar9 = 0;
      if ((int)uVar11 < (this->DeferredPaintList).ArrayNum) {
        uVar9 = ~uVar11 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        iVar7 = (*pcVar4)();
        return iVar7;
      }
      pFVar16 = (this->DeferredPaintList).AllocatorInstance.Data;
      if ((*(longlong *)(pFVar16 + lVar14) == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar6)) {
        pcVar4 = (code *)swi(3);
        iVar7 = (*pcVar4)();
        return iVar7;
      }
      puVar3 = *(undefined8 **)(pFVar16 + lVar14);
      pTVar10 = (TReferenceControllerBase<1> *)puVar3[1];
      if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
        aVar5 = pTVar10->SharedReferenceCount;
        do {
          if (aVar5 == (atomic<int>)0x0) {
            pTVar10 = (TReferenceControllerBase<1> *)0x0;
            goto LAB_142517be4;
          }
          LOCK();
          aVar8 = pTVar10->SharedReferenceCount;
          bVar6 = aVar5 == aVar8;
          if (bVar6) {
            pTVar10->SharedReferenceCount = (atomic<int>)((int)aVar5 + 1);
            aVar8 = aVar5;
          }
          UNLOCK();
          aVar5 = aVar8;
        } while (!bVar6);
        if ((SWidget *)*puVar3 != (SWidget *)0x0) {
          param_1 = SWidget::Paint((SWidget *)*puVar3,(FPaintArgs *)(puVar3 + 2),
                                   (FGeometry *)(puVar3 + 8),param_2,this,param_1,
                                   (FWidgetStyle *)(puVar3 + 0xf),*(bool *)(puVar3 + 0x15));
        }
      }
LAB_142517be4:
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
      iVar7 = (this->DeferredPaintList).ArrayNum;
      uVar13 = (ulonglong)(uVar11 + 1);
      lVar14 = lVar14 + 0x10;
    } while ((int)(uVar11 + 1) < iVar7);
  }
  uVar9 = iVar7 - 1;
  lVar14 = (longlong)(int)uVar9;
  if ((longlong)uVar12 <= lVar14) {
    lVar15 = lVar14 << 4;
    lVar14 = (lVar14 - uVar12) + 1;
    do {
      uVar11 = 0;
      if ((int)uVar9 < (this->DeferredPaintList).ArrayNum) {
        uVar11 = ~uVar9 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        iVar7 = (*pcVar4)();
        return iVar7;
      }
      pFVar16 = (this->DeferredPaintList).AllocatorInstance.Data + lVar15;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (*(TReferenceControllerBase<1> **)(pFVar16 + 8));
      iVar7 = (this->DeferredPaintList).ArrayNum + ~uVar9;
      if (iVar7 != 0) {
        memmove(pFVar16,pFVar16 + 0x10,(longlong)iVar7 << 4);
      }
      piVar1 = &(this->DeferredPaintList).ArrayNum;
      *piVar1 = *piVar1 + -1;
      uVar9 = uVar9 - 1;
      lVar15 = lVar15 + -0x10;
      lVar14 = lVar14 + -1;
    } while (lVar14 != 0);
  }
  return param_1;
}

// PopCachedElementData @ 142517d20

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FSlateWindowElementList::PopCachedElementData(FSlateWindowElementList *this)

{
  uint uVar1;
  int *piVar2;
  void *_Dst;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  ForElementType<int> FVar6;
  
  if ((this->CachedElementDataListStack).ArrayNum < 1) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar3 = (this->CachedElementDataListStack).ArrayNum;
  FVar6 = (this->CachedElementDataListStack).AllocatorInstance.SecondaryData;
  uVar1 = iVar3 - 1;
  if (FVar6 == (ForElementType<int>)0x0) {
    FVar6 = (ForElementType<int>)&this->CachedElementDataListStack;
  }
  _Dst = (void *)((longlong)FVar6 + (longlong)(int)uVar1 * 4);
  iVar3 = ~uVar1 + iVar3;
  if (iVar3 != 0) {
    memmove(_Dst,(void *)((longlong)_Dst + 4),(longlong)iVar3 << 2);
  }
  piVar2 = &(this->CachedElementDataListStack).ArrayNum;
  *piVar2 = *piVar2 + -1;
  UE::Core::Private::
  ReallocShrink<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
            (4,4,&(this->CachedElementDataListStack).AllocatorInstance,
             (this->CachedElementDataListStack).ArrayNum,
             &(this->CachedElementDataListStack).ArrayMax);
  return;
}

// PopClip @ 142517ec0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FSlateWindowElementList::PopClip(FSlateWindowElementList *this)

{
  uint uVar1;
  int *piVar2;
  FScriptContainerElement *_Dst;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  
  iVar3 = (this->ClippingManager).ClippingStack.ArrayNum;
  if (iVar3 == 0) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_3114265294382562982>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Layout\\Clipping.cpp"
                       ,0x15a,"ClippingStack.Num() != 0");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if (1 < (byte)LogSlate._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogSlate);
      return;
    }
  }
  else {
    if (iVar3 < 1) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    iVar3 = (this->ClippingManager).ClippingStack.ArrayNum;
    uVar1 = iVar3 - 1;
    _Dst = (this->ClippingManager).ClippingStack.AllocatorInstance.Data + (longlong)(int)uVar1 * 4;
    iVar3 = ~uVar1 + iVar3;
    if (iVar3 != 0) {
      memmove(_Dst,_Dst + 4,(longlong)iVar3 << 2);
    }
    piVar2 = &(this->ClippingManager).ClippingStack.ArrayNum;
    *piVar2 = *piVar2 + -1;
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,(ForAnyElementType *)&this->ClippingManager,
               (this->ClippingManager).ClippingStack.ArrayNum,
               &(this->ClippingManager).ClippingStack.ArrayMax);
  }
  return;
}

// PopClipToStackIndex @ 142517fc0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FSlateWindowElementList::PopClipToStackIndex(FSlateWindowElementList *this,int param_1)

{
  int *piVar1;
  FScriptContainerElement *_Dst;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  
  uVar6 = param_1 + 1;
  iVar4 = (this->ClippingManager).ClippingStack.ArrayNum;
  if ((int)uVar6 < iVar4) {
    uVar5 = iVar4 - uVar6;
    if (((int)(uVar5 | uVar6) < 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          ), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (uVar5 != 0) {
      _Dst = (this->ClippingManager).ClippingStack.AllocatorInstance.Data + (longlong)(int)uVar6 * 4
      ;
      iVar4 = ((this->ClippingManager).ClippingStack.ArrayNum - uVar5) - uVar6;
      if (iVar4 != 0) {
        memmove(_Dst,_Dst + (longlong)(int)uVar5 * 4,(longlong)iVar4 << 2);
      }
      piVar1 = &(this->ClippingManager).ClippingStack.ArrayNum;
      *piVar1 = *piVar1 - uVar5;
    }
  }
  return;
}

// PopPaintingWidget @ 142518080

/* WARNING: Enum "Type": Some values do not have unique names */

FSlateCachedElementsHandle * __thiscall
FSlateWindowElementList::PopPaintingWidget
          (FSlateWindowElementList *this,FSlateCachedElementsHandle *__return_storage_ptr__,
          SWidget *param_1)

{
  int *piVar1;
  atomic<int> *paVar2;
  TArray<FSlateWindowElementList::FWidgetDrawElementState,TSizedInlineAllocator<50,32,TSizedDefaultAllocator<32>_>_>
  *pTVar3;
  int iVar4;
  FSlateCachedElementList *pFVar5;
  TReferenceControllerBase<1> *pTVar6;
  longlong *plVar7;
  code *pcVar8;
  FWeakReferencer<1> FVar9;
  bool bVar10;
  int iVar11;
  FSlateCachedElementData *pFVar12;
  FSlateCachedElementsHandle *pFVar13;
  longlong lVar14;
  uint uVar15;
  ForElementType<FSlateWindowElementList::FWidgetDrawElementState> FVar16;
  uint uVar17;
  void *_Src;
  
  pFVar12 = GetCurrentCachedElementData(this);
  if (pFVar12 == (FSlateCachedElementData *)0x0) {
    (__return_storage_ptr__->Ptr).Object = FSlateCachedElementsHandle::Invalid.Ptr.Object;
    FVar9 = FSlateCachedElementsHandle::Invalid.Ptr.WeakReferenceCount;
    (__return_storage_ptr__->Ptr).WeakReferenceCount.ReferenceController =
         FSlateCachedElementsHandle::Invalid.Ptr.WeakReferenceCount.ReferenceController;
    if (FVar9.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar2 = &(FVar9.ReferenceController)->WeakReferenceCount;
      *paVar2 = (atomic<int>)((int)*paVar2 + 1);
      UNLOCK();
    }
    return __return_storage_ptr__;
  }
  iVar11 = (this->WidgetDrawStack).ArrayNum;
  pTVar3 = &this->WidgetDrawStack;
  uVar17 = iVar11 - 1;
  uVar15 = 0;
  if ((int)uVar17 < iVar11) {
    uVar15 = ~uVar17 >> 0x1f;
  }
  if (uVar15 == 0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar10) {
      pcVar8 = (code *)swi(3);
      pFVar13 = (FSlateCachedElementsHandle *)(*pcVar8)();
      return pFVar13;
    }
  }
  FVar16 = (this->WidgetDrawStack).AllocatorInstance.SecondaryData;
  if (FVar16 == (ForElementType<FSlateWindowElementList::FWidgetDrawElementState>)0x0) {
    FVar16 = (ForElementType<FSlateWindowElementList::FWidgetDrawElementState>)pTVar3;
  }
  if (*(SWidget **)
       ((undefined1 *)((longlong)FVar16 + -0x10) + (longlong)(this->WidgetDrawStack).ArrayNum * 0x20
       ) != param_1) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("WidgetDrawStack.Top().Widget == &CurrentWidget",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Rendering\\DrawElements.cpp"
                        ,200,L"");
    if (bVar10) {
      pcVar8 = (code *)swi(3);
      pFVar13 = (FSlateCachedElementsHandle *)(*pcVar8)();
      return pFVar13;
    }
  }
  if ((this->WidgetDrawStack).ArrayNum < 1) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar10) {
      pcVar8 = (code *)swi(3);
      pFVar13 = (FSlateCachedElementsHandle *)(*pcVar8)();
      return pFVar13;
    }
  }
  FVar16 = (this->WidgetDrawStack).AllocatorInstance.SecondaryData;
  if (FVar16 == (ForElementType<FSlateWindowElementList::FWidgetDrawElementState>)0x0) {
    FVar16 = (ForElementType<FSlateWindowElementList::FWidgetDrawElementState>)pTVar3;
  }
  lVar14 = (longlong)(this->WidgetDrawStack).ArrayNum * 0x20;
  pFVar5 = *(FSlateCachedElementList **)((undefined1 *)((longlong)FVar16 + -0x20) + lVar14);
  pTVar6 = *(TReferenceControllerBase<1> **)((undefined1 *)((longlong)FVar16 + -0x18) + lVar14);
  *(undefined8 *)((undefined1 *)((longlong)FVar16 + -0x18) + lVar14) = 0;
  *(undefined8 *)((undefined1 *)((longlong)FVar16 + -0x20) + lVar14) = 0;
  FVar16 = (this->WidgetDrawStack).AllocatorInstance.SecondaryData;
  iVar11 = (this->WidgetDrawStack).ArrayNum;
  if (FVar16 == (ForElementType<FSlateWindowElementList::FWidgetDrawElementState>)0x0) {
    FVar16 = (ForElementType<FSlateWindowElementList::FWidgetDrawElementState>)pTVar3;
  }
  _Src = (void *)((longlong)iVar11 * 0x20 + (longlong)FVar16);
  plVar7 = *(longlong **)((longlong)_Src + -0x18);
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar7 + 0xc);
    iVar4 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar4 == 1) {
      (**(code **)(*plVar7 + 8))(plVar7,1);
    }
  }
  iVar11 = (this->WidgetDrawStack).ArrayNum - iVar11;
  if (iVar11 != 0) {
    memmove((void *)((longlong)_Src + -0x20),_Src,(longlong)iVar11 << 5);
  }
  piVar1 = &(this->WidgetDrawStack).ArrayNum;
  *piVar1 = *piVar1 + -1;
  (__return_storage_ptr__->Ptr).WeakReferenceCount.ReferenceController = pTVar6;
  (__return_storage_ptr__->Ptr).Object = pFVar5;
  return __return_storage_ptr__;
}

// PopPixelSnappingMethod @ 142518280

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FSlateWindowElementList::PopPixelSnappingMethod(FSlateWindowElementList *this)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  ForElementType<EWidgetPixelSnapping> FVar6;
  void *_Dst;
  
  if ((this->PixelSnappingMethodStack).ArrayNum < 1) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<5271874907603468606>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Rendering\\DrawElements.cpp"
                       ,0x13e,"PixelSnappingMethodStack.Num() > 0");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  else {
    iVar3 = (this->PixelSnappingMethodStack).ArrayNum;
    FVar6 = (this->PixelSnappingMethodStack).AllocatorInstance.SecondaryData;
    uVar1 = iVar3 - 1;
    if (FVar6 == (ForElementType<EWidgetPixelSnapping>)0x0) {
      FVar6 = (ForElementType<EWidgetPixelSnapping>)&this->PixelSnappingMethodStack;
    }
    _Dst = (void *)((longlong)FVar6 + (longlong)(int)uVar1);
    iVar3 = ~uVar1 + iVar3;
    if (iVar3 != 0) {
      memmove(_Dst,(void *)((longlong)_Dst + 1),(longlong)iVar3);
    }
    piVar2 = &(this->PixelSnappingMethodStack).ArrayNum;
    *piVar2 = *piVar2 + -1;
    UE::Core::Private::
    ReallocShrink<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<enum_EWidgetPixelSnapping>_>
              (1,1,&(this->PixelSnappingMethodStack).AllocatorInstance,
               (this->PixelSnappingMethodStack).ArrayNum,&(this->PixelSnappingMethodStack).ArrayMax)
    ;
  }
  return;
}

// PushCachedElementData @ 142519b60

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FSlateWindowElementList::PushCachedElementData
          (FSlateWindowElementList *this,FSlateCachedElementData *param_1)

{
  int *piVar1;
  TArray<int,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> *pTVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  ForElementType<int> FVar6;
  FSlateCachedElementData *local_res8;
  int local_18 [4];
  
  if (param_1 == (FSlateCachedElementData *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("&CachedElementData",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Rendering\\DrawElements.cpp"
                       ,0xd3,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  local_res8 = param_1;
  local_18[0] = TArray<FSlateCachedElementData_*,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                ::AddUniqueImpl<FSlateCachedElementData_*>(&this->CachedElementDataList,&local_res8)
  ;
  FVar6 = (this->CachedElementDataListStack).AllocatorInstance.SecondaryData;
  pTVar2 = &this->CachedElementDataListStack;
  if (FVar6 == (ForElementType<int>)0x0) {
    FVar6 = (ForElementType<int>)pTVar2;
  }
  if (((ulonglong)FVar6 <= local_18) &&
     (local_18 <
      (int *)((longlong)FVar6 + (longlong)(this->CachedElementDataListStack).ArrayMax * 4))) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar5 = (this->CachedElementDataListStack).ArrayNum;
  piVar1 = &(this->CachedElementDataListStack).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                      (0x404,&pTVar2->AllocatorInstance,piVar1);
  }
  (this->CachedElementDataListStack).ArrayNum = iVar5 + 1;
  FVar6 = (this->CachedElementDataListStack).AllocatorInstance.SecondaryData;
  if (FVar6 == (ForElementType<int>)0x0) {
    FVar6 = (ForElementType<int>)pTVar2;
  }
  *(int *)((longlong)FVar6 + (longlong)iVar5 * 4) = local_18[0];
  return;
}

// PushClip @ 142519d80

/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
FSlateWindowElementList::PushClip(FSlateWindowElementList *this,FSlateClippingZone *param_1)

{
  int *piVar1;
  FSlateClippingManager *this_00;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FSlateClippingState *pFVar6;
  int local_58 [2];
  FSlateClippingState local_50;
  
  this_00 = &this->ClippingManager;
  pFVar6 = FSlateClippingManager::CreateClippingState(this_00,&local_50,param_1);
  local_58[0] = TArray<FSlateClippingState,TSizedDefaultAllocator<32>_>::
                AddUniqueImpl<FSlateClippingState_const_&>
                          (&(this->ClippingManager).ClippingStates,pFVar6);
  pFVar6->Debugging_StateIndex = local_58[0];
  pFVar6->Debugging_StateIndexFromFrame = GFrameNumber;
  pFVar2 = (this_00->ClippingStack).AllocatorInstance.Data;
  if ((pFVar2 <= (FScriptContainerElement *)local_58) &&
     ((FScriptContainerElement *)local_58 <
      pFVar2 + (longlong)(this->ClippingManager).ClippingStack.ArrayMax * 4)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      iVar5 = (*pcVar3)();
      return iVar5;
    }
  }
  iVar5 = (this->ClippingManager).ClippingStack.ArrayNum;
  piVar1 = &(this->ClippingManager).ClippingStack.ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,(ForAnyElementType *)this_00,piVar1);
  }
  (this->ClippingManager).ClippingStack.ArrayNum = iVar5 + 1;
  *(int *)((this_00->ClippingStack).AllocatorInstance.Data + (longlong)iVar5 * 4) = local_58[0];
  if (local_50.StencilQuads.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_50.StencilQuads.AllocatorInstance.Data);
  }
  return local_58[0];
}

// PushPaintingWidget @ 142519f70

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FSlateWindowElementList::PushPaintingWidget
          (FSlateWindowElementList *this,SWidget *param_1,int param_2,
          FSlateCachedElementsHandle *param_3)

{
  FWeakReferencer<1> *pFVar1;
  int *piVar2;
  undefined1 uVar3;
  SWidget *pSVar4;
  FSlateCachedElementList *pFVar5;
  code *pcVar6;
  atomic<int> aVar7;
  undefined1 uVar8;
  atomic<int> aVar9;
  int iVar10;
  FSlateCachedElementData *pFVar11;
  ForElementType<FSlateWindowElementList::FWidgetDrawElementState> FVar12;
  TReferenceControllerBase<1> *pTVar13;
  undefined8 *puVar14;
  bool bVar15;
  
  pFVar11 = GetCurrentCachedElementData(this);
  if (pFVar11 == (FSlateCachedElementData *)0x0) {
    return;
  }
  pFVar1 = &(param_3->Ptr).WeakReferenceCount;
  if ((((param_3->Ptr).Object == (FSlateCachedElementList *)0x0) ||
      (pFVar1->ReferenceController == (TReferenceControllerBase<1> *)0x0)) ||
     ((int)pFVar1->ReferenceController->SharedReferenceCount < 1)) goto LAB_14251a051;
  pTVar13 = pFVar1->ReferenceController;
  if (pTVar13 == (TReferenceControllerBase<1> *)0x0) {
LAB_142519ff4:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar13);
LAB_142519ffc:
    bVar15 = ::FDebug::CheckVerifyFailedImpl2
                       ("CurrentCacheHandle.IsOwnedByWidget(&CurrentWidget)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Rendering\\DrawElements.cpp"
                        ,0xb9,L"");
    if (bVar15) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  else {
    aVar7 = pTVar13->SharedReferenceCount;
    do {
      if (aVar7 == (atomic<int>)0x0) {
        pTVar13 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_142519ff4;
      }
      LOCK();
      aVar9 = pTVar13->SharedReferenceCount;
      bVar15 = aVar7 == aVar9;
      if (bVar15) {
        pTVar13->SharedReferenceCount = (atomic<int>)((int)aVar7 + 1);
        aVar9 = aVar7;
      }
      UNLOCK();
      aVar7 = aVar9;
    } while (!bVar15);
    pFVar5 = (param_3->Ptr).Object;
    if (pFVar5 == (FSlateCachedElementList *)0x0) goto LAB_142519ff4;
    pSVar4 = pFVar5->OwningWidget;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar13);
    if (pSVar4 != param_1) goto LAB_142519ffc;
  }
  pTVar13 = pFVar1->ReferenceController;
  if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
    aVar7 = pTVar13->SharedReferenceCount;
    do {
      if (aVar7 == (atomic<int>)0x0) {
        pTVar13 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14251a045;
      }
      LOCK();
      aVar9 = pTVar13->SharedReferenceCount;
      bVar15 = aVar7 == aVar9;
      if (bVar15) {
        pTVar13->SharedReferenceCount = (atomic<int>)((int)aVar7 + 1);
        aVar9 = aVar7;
      }
      UNLOCK();
      aVar7 = aVar9;
    } while (!bVar15);
    pFVar5 = (param_3->Ptr).Object;
    if (pFVar5 != (FSlateCachedElementList *)0x0) {
      FSlateCachedElementList::ClearCachedElements(pFVar5);
    }
  }
LAB_14251a045:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar13);
LAB_14251a051:
  piVar2 = &(this->WidgetDrawStack).ArrayMax;
  iVar10 = (this->WidgetDrawStack).ArrayNum;
  if (iVar10 == *piVar2) {
    iVar10 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<50,32,TSizedDefaultAllocator<32>_>::ForElementType<FSlateWindowElementList::FWidgetDrawElementState>_>
                       (0x820,&(this->WidgetDrawStack).AllocatorInstance,piVar2);
  }
  (this->WidgetDrawStack).ArrayNum = iVar10 + 1;
  FVar12 = (this->WidgetDrawStack).AllocatorInstance.SecondaryData;
  if (FVar12 == (ForElementType<FSlateWindowElementList::FWidgetDrawElementState>)0x0) {
    FVar12 = (ForElementType<FSlateWindowElementList::FWidgetDrawElementState>)
             &this->WidgetDrawStack;
  }
  puVar14 = (undefined8 *)((longlong)iVar10 * 0x20 + (longlong)FVar12);
  *puVar14 = (param_3->Ptr).Object;
  pTVar13 = (param_3->Ptr).WeakReferenceCount.ReferenceController;
  puVar14[1] = pTVar13;
  if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar13->WeakReferenceCount = (atomic<int>)((int)pTVar13->WeakReferenceCount + 1);
    UNLOCK();
  }
  *(bool *)(puVar14 + 3) = param_1->bCachedVolatile != '\0' || param_1->bInheritedVolatility != '\0'
  ;
  puVar14[2] = param_1;
  return;
}

// PushPixelSnappingMethod @ 14251a120

/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
FSlateWindowElementList::PushPixelSnappingMethod
          (FSlateWindowElementList *this,EWidgetPixelSnapping param_1)

{
  int *piVar1;
  TArray<EWidgetPixelSnapping,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> *pTVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  ForElementType<EWidgetPixelSnapping> FVar6;
  EWidgetPixelSnapping local_res10 [24];
  
  FVar6 = (this->PixelSnappingMethodStack).AllocatorInstance.SecondaryData;
  pTVar2 = &this->PixelSnappingMethodStack;
  if (FVar6 == (ForElementType<EWidgetPixelSnapping>)0x0) {
    FVar6 = (ForElementType<EWidgetPixelSnapping>)pTVar2;
  }
  local_res10[0] = param_1;
  if (((ulonglong)FVar6 <= local_res10) &&
     (local_res10 <
      (EWidgetPixelSnapping *)
      ((longlong)(this->PixelSnappingMethodStack).ArrayMax + (longlong)FVar6))) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      iVar5 = (*pcVar3)();
      return iVar5;
    }
  }
  iVar5 = (this->PixelSnappingMethodStack).ArrayNum;
  piVar1 = &(this->PixelSnappingMethodStack).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<enum_EWidgetPixelSnapping>_>
                      (0x101,&pTVar2->AllocatorInstance,piVar1);
  }
  (this->PixelSnappingMethodStack).ArrayNum = iVar5 + 1;
  FVar6 = (this->PixelSnappingMethodStack).AllocatorInstance.SecondaryData;
  if (FVar6 == (ForElementType<EWidgetPixelSnapping>)0x0) {
    FVar6 = (ForElementType<EWidgetPixelSnapping>)pTVar2;
  }
  *(EWidgetPixelSnapping *)((longlong)FVar6 + (longlong)iVar5) = local_res10[0];
  return (this->PixelSnappingMethodStack).ArrayNum;
}

// QueueDeferredPainting @ 14251a200

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FSlateWindowElementList::QueueDeferredPainting
          (FSlateWindowElementList *this,FDeferredPaint *param_1)

{
  int *piVar1;
  TArray<TSharedPtr<FSlateWindowElementList::FDeferredPaint,1>,TSizedDefaultAllocator<32>_> *pTVar2;
  TReferenceControllerBase<1> *pTVar3;
  code *pcVar4;
  FHittestGrid *pFVar5;
  SWidget *pSVar6;
  undefined8 uVar7;
  longlong lVar8;
  float fVar9;
  undefined4 uVar10;
  bool bVar11;
  int iVar12;
  TReferenceControllerBase<1> *pTVar13;
  FScriptContainerElement *pFVar14;
  TReferenceControllerBase<1> *local_18;
  TReferenceControllerBase<1> *pTStack_10;
  
  pTVar2 = &this->DeferredPaintList;
  pTVar13 = ::operator_new(0xc0);
  if (pTVar13 == (TReferenceControllerBase<1> *)0x0) {
    pTVar13 = (TReferenceControllerBase<1> *)0x0;
    local_18 = ___xmm_00000000000000000000000000000010;
    pTStack_10 = _UNK_150651568;
  }
  else {
    pTVar13->SharedReferenceCount = (atomic<int>)0x1;
    pTVar13->WeakReferenceCount = (atomic<int>)0x1;
    pTVar13->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_UFDeferredPaint_FSlateWindowElementList___00_SharedPointerInternals__6B_
    ;
    pTVar13[1]._padding_ = (longlong)(param_1->WidgetToPaintPtr).Object;
    pTVar3 = (param_1->WidgetToPaintPtr).WeakReferenceCount.ReferenceController;
    *(TReferenceControllerBase<1> **)&pTVar13[1].SharedReferenceCount = pTVar3;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->WeakReferenceCount = (atomic<int>)((int)pTVar3->WeakReferenceCount + 1);
      UNLOCK();
    }
    pFVar5 = (param_1->Args).CurrentGrid;
    pTVar13[2]._padding_ = (longlong)(param_1->Args).RootGrid;
    *(FHittestGrid **)&pTVar13[2].SharedReferenceCount = pFVar5;
    pSVar6 = (param_1->Args).PaintParentPtr;
    *(TVector2<float>_u_0 *)(pTVar13 + 3) = (param_1->Args).WindowOffset.field0_0x0;
    *(SWidget **)&pTVar13[3].SharedReferenceCount = pSVar6;
    fVar9 = (param_1->Args).DeltaTime;
    uVar10 = *(undefined4 *)&(param_1->Args).field_0x2c;
    pTVar13[4]._padding_ = (longlong)(param_1->Args).CurrentTime;
    pTVar13[4].SharedReferenceCount = (atomic<int>)fVar9;
    pTVar13[4].WeakReferenceCount = (atomic<int>)uVar10;
    uVar7 = *(undefined8 *)&(param_1->AllottedGeometry).Scale;
    pTVar13[5]._padding_ = (longlong)(param_1->AllottedGeometry).Size;
    pTVar13[5].SharedReferenceCount = (atomic<int>)(int)uVar7;
    pTVar13[5].WeakReferenceCount = (atomic<int>)(int)((ulonglong)uVar7 >> 0x20);
    uVar7 = *(undefined8 *)((longlong)&(param_1->AllottedGeometry).Position.field0_0x0 + 4);
    pTVar13[6]._padding_ =
         *(longlong *)((longlong)&(param_1->AllottedGeometry).AbsolutePosition.field0_0x0 + 4);
    pTVar13[6].SharedReferenceCount = (atomic<int>)(int)uVar7;
    pTVar13[6].WeakReferenceCount = (atomic<int>)(int)((ulonglong)uVar7 >> 0x20);
    uVar7 = *(undefined8 *)((param_1->AllottedGeometry).AccumulatedRenderTransform.M.M[1] + 1);
    pTVar13[7]._padding_ =
         *(longlong *)((param_1->AllottedGeometry).AccumulatedRenderTransform.M.M[0] + 1);
    pTVar13[7].SharedReferenceCount = (atomic<int>)(int)uVar7;
    pTVar13[7].WeakReferenceCount = (atomic<int>)(int)((ulonglong)uVar7 >> 0x20);
    pTVar13[8]._padding_ =
         *(longlong *)
          ((longlong)&(param_1->AllottedGeometry).AccumulatedRenderTransform.Trans.field0_0x0 + 4);
    uVar7 = *(undefined8 *)&(param_1->WidgetStyle).ColorAndOpacityTint.field0_0x0;
    lVar8 = *(longlong *)((longlong)&(param_1->WidgetStyle).ColorAndOpacityTint.field0_0x0 + 8);
    pTVar13[8].SharedReferenceCount = (atomic<int>)(int)uVar7;
    pTVar13[8].WeakReferenceCount = (atomic<int>)(int)((ulonglong)uVar7 >> 0x20);
    pTVar13[9]._padding_ = lVar8;
    uVar7 = *(undefined8 *)&(param_1->WidgetStyle).ForegroundColor.field0_0x0;
    lVar8 = *(longlong *)((longlong)&(param_1->WidgetStyle).ForegroundColor.field0_0x0 + 8);
    pTVar13[9].SharedReferenceCount = (atomic<int>)(int)uVar7;
    pTVar13[9].WeakReferenceCount = (atomic<int>)(int)((ulonglong)uVar7 >> 0x20);
    pTVar13[10]._padding_ = lVar8;
    uVar7 = *(undefined8 *)&(param_1->WidgetStyle).SubduedForeground.field0_0x0;
    lVar8 = *(longlong *)((longlong)&(param_1->WidgetStyle).SubduedForeground.field0_0x0 + 8);
    pTVar13[10].SharedReferenceCount = (atomic<int>)(int)uVar7;
    pTVar13[10].WeakReferenceCount = (atomic<int>)(int)((ulonglong)uVar7 >> 0x20);
    pTVar13[0xb]._padding_ = lVar8;
    *(bool *)&pTVar13[0xb].SharedReferenceCount = param_1->bParentEnabled;
    if (pTVar13 + 1 == (TReferenceControllerBase<1> *)0x0) {
      bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("InObject != nullptr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x246,L"");
      if (bVar11) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    LOCK();
    pTVar13->SharedReferenceCount = (atomic<int>)((int)pTVar13->SharedReferenceCount + 1);
    UNLOCK();
    local_18 = pTVar13 + 1;
    pTStack_10 = pTVar13;
  }
  pFVar14 = (pTVar2->AllocatorInstance).Data;
  if ((pFVar14 <= (FScriptContainerElement *)&local_18) &&
     ((FScriptContainerElement *)&local_18 <
      pFVar14 + (longlong)(this->DeferredPaintList).ArrayMax * 0x10)) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar11) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar12 = (this->DeferredPaintList).ArrayNum;
  piVar1 = &(this->DeferredPaintList).ArrayMax;
  if (iVar12 == *piVar1) {
    iVar12 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x810,&pTVar2->AllocatorInstance,piVar1);
  }
  (this->DeferredPaintList).ArrayNum = iVar12 + 1;
  pFVar14 = (pTVar2->AllocatorInstance).Data + (longlong)iVar12 * 0x10;
  *(TReferenceControllerBase<1> **)pFVar14 = local_18;
  *(TReferenceControllerBase<1> **)(pFVar14 + 8) = pTStack_10;
  pTStack_10 = (TReferenceControllerBase<1> *)0x0;
  local_18 = (TReferenceControllerBase<1> *)0x0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar13);
  return;
}

// ResetElementList @ 14251ce30

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FSlateWindowElementList::ResetElementList(FSlateWindowElementList *this)

{
  atomic<unsigned_int> *paVar1;
  int *piVar2;
  FTaskHandle *pFVar3;
  atomic<unsigned_int> aVar4;
  TSharedPtr<FSlateWindowElementList::FDeferredPaint,1> *pTVar5;
  FTaskBase *pFVar6;
  FSlateClippingState *pFVar7;
  FName FVar8;
  code *pcVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  int iVar14;
  FName *pFVar15;
  FThreadSafeStaticStat<_public:_void___cdecl_FSlateWindowElementList::ResetElementList(void)_::_2_::FStat_Slate_ResetElementList>
  FVar16;
  FThreadSafeStaticStat<FStat_STAT_FSlateWindowElementListMemManagerCount> FVar17;
  FThreadStats *pFVar18;
  FThreadStatsPool *pFVar19;
  FThreadSafeStaticStat<FStat_STAT_FSlateWindowElementListMemManager> FVar20;
  uint uVar21;
  FNameEntryId FVar22;
  FName FVar23;
  uchar auVar24 [8];
  uint local_res8;
  uint uStackX_c;
  int local_res10;
  FColor_u_0 local_res18 [2];
  FName local_res20;
  FName local_c0;
  FName local_b8;
  LARGE_INTEGER local_b0;
  FStatMessage local_a8;
  FStatMessage local_98;
  FStatMessage local_88;
  FName local_78;
  FName local_70;
  longlong local_68;
  FName local_60;
  FName local_58 [3];
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_Slate_ResetElementList ==
        (FThreadSafeStaticStat<_public:_void___cdecl_FSlateWindowElementList::ResetElementList(void)_::_2_::FStat_Slate_ResetElementList>
         )0x0) {
      pFVar15 = ::FName::FName(&local_78,"Slate_ResetElementList");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_Slate_ResetElementList,*pFVar15,
                 L"Slate_ResetElementList","STATGROUP_Quick","STATCAT_Advanced",L"Quick",true,true,
                 ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar16 = StatPtr_Slate_ResetElementList;
  if (StatPtr_Slate_ResetElementList ==
      (FThreadSafeStaticStat<_public:_void___cdecl_FSlateWindowElementList::ResetElementList(void)_::_2_::FStat_Slate_ResetElementList>
       )0x0) {
    pFVar15 = ::FName::FName(&local_70,"Slate_ResetElementList");
    FVar16 = (FThreadSafeStaticStat<_public:_void___cdecl_FSlateWindowElementList::ResetElementList(void)_::_2_::FStat_Slate_ResetElementList>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_Slate_ResetElementList,*pFVar15,
                          L"Slate_ResetElementList","STATGROUP_Quick","STATCAT_Advanced",L"Quick",
                          true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar23 = *(FName *)FVar16;
  bVar10 = false;
  bVar12 = false;
  FVar22 = FVar23.ComparisonIndex.Value;
  uVar21 = FVar23.Number;
  if ((FVar22.Value != 0) || (uVar21 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res18[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res18[0]._s_0,(char *)*(FName *)((longlong)FVar16 + 0x10));
      bVar10 = false;
      bVar12 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res20.ComparisonIndex.Value = FVar22.Value;
        local_res20.Number = uVar21;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res20,(wchar_t *)*(FName *)((longlong)FVar16 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Rendering\\DrawElements.cpp"
                   ,0x154);
        bVar10 = true;
        bVar12 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res8 = FVar22.Value;
      uStackX_c = uVar21;
      FThreadStats::AddMessage(FVar23,CycleScopeStart);
      bVar11 = true;
      goto LAB_14251cf91;
    }
  }
  bVar11 = false;
  FVar23.ComparisonIndex.Value = 0;
  FVar23.Number = 0;
LAB_14251cf91:
  piVar2 = &(this->DeferredPaintList).ArrayMax;
  pTVar5 = (TSharedPtr<FSlateWindowElementList::FDeferredPaint,1> *)
           (this->DeferredPaintList).AllocatorInstance.Data;
  iVar14 = (this->DeferredPaintList).ArrayNum;
  if (*piVar2 < 0) {
    DestructItems<TSharedPtr<FSlateWindowElementList::FDeferredPaint,1>,int>(pTVar5,iVar14);
    (this->DeferredPaintList).ArrayNum = 0;
    if (*piVar2 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,&(this->DeferredPaintList).AllocatorInstance,0,piVar2);
    }
  }
  else {
    DestructItems<TSharedPtr<FSlateWindowElementList::FDeferredPaint,1>,int>(pTVar5,iVar14);
    (this->DeferredPaintList).ArrayNum = 0;
  }
  pFVar3 = &this->MergeBatchDataTask;
  pFVar6 = (pFVar3->Pimpl).Reference;
  if (pFVar6 != (FTaskBase *)0x0) {
    UE::Tasks::Private::FTaskBase::Wait(pFVar6);
  }
  if (pFVar3 != (FTaskHandle *)&local_68) {
    pFVar6 = (pFVar3->Pimpl).Reference;
    (pFVar3->Pimpl).Reference = (FTaskBase *)0x0;
    if (pFVar6 != (FTaskBase *)0x0) {
      LOCK();
      paVar1 = &pFVar6->RefCount;
      aVar4 = *paVar1;
      *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar4 == (atomic<unsigned_int>)0x1) {
        (**(code **)pFVar6->_padding_)(pFVar6,1);
      }
    }
  }
  FSlateBatchData::ResetData(&this->BatchData);
  FSlateBatchData::ResetData(&this->BatchDataHDR);
  piVar2 = &(this->ClippingManager).ClippingStates.ArrayMax;
  pFVar7 = (FSlateClippingState *)(this->ClippingManager).ClippingStates.AllocatorInstance.Data;
  iVar14 = (this->ClippingManager).ClippingStates.ArrayNum;
  if (*piVar2 < 0) {
    DestructItems<FSlateClippingState,int>(pFVar7,iVar14);
    (this->ClippingManager).ClippingStates.ArrayNum = 0;
    if (*piVar2 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x48,8,0,&(this->ClippingManager).ClippingStates.AllocatorInstance,0,piVar2);
    }
  }
  else {
    DestructItems<FSlateClippingState,int>(pFVar7,iVar14);
    (this->ClippingManager).ClippingStates.ArrayNum = 0;
  }
  iVar14 = (this->ClippingManager).ClippingStack.ArrayMax;
  (this->ClippingManager).ClippingStack.ArrayNum = 0;
  if (iVar14 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,(ForAnyElementType *)&this->ClippingManager,0,
               &(this->ClippingManager).ClippingStack.ArrayMax);
  }
  UE::Core::Private::Tuple::
  TVisitTupleElements_Impl<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7,8,9,10,11,12,13>_>::
  Do<_FSlateWindowElementList::ResetElementList_::__l2::<lambda_1>_&,TTuple<TArray<FSlateBoxElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateBoxElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateTextElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateShapedTextElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateSplineElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateLineElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateGradientElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateViewportElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateBoxElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateCustomDrawerElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateCustomVertsElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlatePostProcessElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateRoundedBoxElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateDrawElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>_>_&>
            ((<lambda_1> *)&local_res8,&this->UncachedDrawElements);
  local_res10 = FMemStackBase::GetByteCount(&this->MemManager);
  local_res10 = local_res10 - this->MemManagerAllocatedMemory;
  if (FThreadStats::bPrimaryEnable != false) {
    FVar17 = StatPtr_STAT_FSlateWindowElementListMemManagerCount;
    if (StatPtr_STAT_FSlateWindowElementListMemManagerCount ==
        (FThreadSafeStaticStat<FStat_STAT_FSlateWindowElementListMemManagerCount>)0x0) {
      pFVar15 = ::FName::FName(&local_60,"STAT_FSlateWindowElementListMemManagerCount");
      FVar17 = (FThreadSafeStaticStat<FStat_STAT_FSlateWindowElementListMemManagerCount>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &StatPtr_STAT_FSlateWindowElementListMemManagerCount,*pFVar15,
                          L"FSlateWindowElementList MemManager Count","STATGROUP_SlateMemory",
                          "STATCAT_Advanced",L"Slate Memory",true,true,ST_int64,false,false,
                          MCR_Invalid);
    }
    FVar8 = *(FName *)FVar17;
    if (((FVar8 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar18 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar18 == (FThreadStats *)0x0) {
        pFVar19 = FThreadStatsPool::Get();
        pFVar18 = FThreadStatsPool::GetFromPool(pFVar19);
      }
      local_a8.NameAndInfo.Number = FVar8.Number & 0xffffafff | 0xa000;
      local_a8.StatData.Pad[0] = '\x01';
      local_a8.StatData.Pad[1] = '\0';
      local_a8.StatData.Pad[2] = '\0';
      local_a8.StatData.Pad[3] = '\0';
      local_a8.StatData.Pad[4] = '\0';
      local_a8.StatData.Pad[5] = '\0';
      local_a8.StatData.Pad[6] = '\0';
      local_a8.StatData.Pad[7] = '\0';
      local_c0 = FVar8;
      local_a8.NameAndInfo.Index.Value = FVar8.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(pFVar18,&local_a8);
      FStatsTrace::Add(&local_c0,1);
      if (pFVar18->ScopeCount == 0) {
        FThreadStats::Flush(pFVar18,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar18,false,false);
      }
    }
  }
  if (local_res10 != 0) {
    FVar20 = StatPtr_STAT_FSlateWindowElementListMemManager;
    if (StatPtr_STAT_FSlateWindowElementListMemManager ==
        (FThreadSafeStaticStat<FStat_STAT_FSlateWindowElementListMemManager>)0x0) {
      pFVar15 = ::FName::FName(local_58,"STAT_FSlateWindowElementListMemManager");
      FVar20 = (FThreadSafeStaticStat<FStat_STAT_FSlateWindowElementListMemManager>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &StatPtr_STAT_FSlateWindowElementListMemManager,*pFVar15,
                          L"FSlateWindowElementList MemManager","STATGROUP_SlateMemory",
                          "STATCAT_Advanced",L"Slate Memory",true,false,ST_int64,false,false,
                          MCR_Physical);
    }
    FVar8 = *(FName *)FVar20;
    if (((FVar8 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar18 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar18 == (FThreadStats *)0x0) {
        pFVar19 = FThreadStatsPool::Get();
        pFVar18 = FThreadStatsPool::GetFromPool(pFVar19);
      }
      local_98.NameAndInfo.Number = FVar8.Number & 0xffffafff | 0xa000;
      auVar24 = (uchar  [8])(longlong)local_res10;
      local_b8 = FVar8;
      local_98.StatData.Pad = auVar24;
      local_98.NameAndInfo.Index.Value = FVar8.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(pFVar18,&local_98);
      FStatsTrace::Add(&local_b8,(long64)auVar24);
      if (pFVar18->ScopeCount == 0) {
        FThreadStats::Flush(pFVar18,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar18,false,false);
      }
    }
  }
  iVar14 = FMemStackBase::GetByteCount(&this->MemManager);
  this->MemManagerAllocatedMemory = iVar14;
  if (((this->MemManager).NumMarks != 0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("!NumMarks",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MemStack.h"
                          ,0xad,L""), bVar13)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  FMemStackBase::FreeChunks(&this->MemManager,(FTaggedMemory *)0x0);
  piVar2 = &(this->CachedElementDataList).ArrayMax;
  (this->CachedElementDataList).ArrayNum = 0;
  if (*piVar2 != 0) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FSlateCachedElementData_*>_>
              (8,8,0,&(this->CachedElementDataList).AllocatorInstance,0,piVar2);
  }
  piVar2 = &(this->CachedElementDataListStack).ArrayMax;
  (this->CachedElementDataListStack).ArrayNum = 0;
  if (*piVar2 != 0) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
              (4,4,0,&(this->CachedElementDataListStack).AllocatorInstance,0,piVar2);
  }
  if (((this->WidgetDrawStack).ArrayNum != 0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("WidgetDrawStack.Num() == 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Rendering\\DrawElements.cpp"
                          ,0x172,L""), bVar13)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  if (((this->ResolveToDeferredIndex).ArrayNum != 0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("ResolveToDeferredIndex.Num() == 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Rendering\\DrawElements.cpp"
                          ,0x173,L""), bVar13)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  this->RenderTargetWindow = (SWindow *)0x0;
  if (bVar12) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar10) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar11) && (FVar23 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    pFVar18 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar18 == (FThreadStats *)0x0) {
      pFVar19 = FThreadStatsPool::Get();
      pFVar18 = FThreadStatsPool::GetFromPool(pFVar19);
    }
    if (pFVar18->bWaitForExplicitFlush < pFVar18->ScopeCount) {
      local_88.NameAndInfo.Index = FVar23.ComparisonIndex.Value;
      local_88.NameAndInfo.Number = FVar23.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_b0);
      local_88.StatData.Pad[4] = '\0';
      local_88.StatData.Pad[5] = '\0';
      local_88.StatData.Pad[6] = '\0';
      local_88.StatData.Pad[7] = '\0';
      local_88.StatData.Pad[0] = local_b0.s.LowPart._0_1_;
      local_88.StatData.Pad[1] = local_b0.s.LowPart._1_1_;
      local_88.StatData.Pad[2] = local_b0.s.LowPart._2_1_;
      local_88.StatData.Pad[3] = local_b0.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(pFVar18,&local_88);
      piVar2 = &pFVar18->ScopeCount;
      *piVar2 = *piVar2 + -1;
      if (*piVar2 == 0) {
        FThreadStats::Flush(pFVar18,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar18,false,false);
      }
    }
  }
  return;
}

// SetIsInGameLayer @ 14251f520

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FSlateWindowElementList::SetIsInGameLayer(FSlateWindowElementList *this,bool param_1)

{
  this->bIsInGameLayer = param_1;
  return;
}

// SetRenderTargetWindow @ 14251f6b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FSlateWindowElementList::SetRenderTargetWindow(FSlateWindowElementList *this,SWindow *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (GSlateLoadingThreadId != 0) {
    this->RenderTargetWindow = param_1;
    return;
  }
  bVar2 = IsInGameThread();
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsThreadSafeForSlateRendering()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Rendering\\DrawElements.cpp"
                       ,0x14b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this->RenderTargetWindow = param_1;
  return;
}

// StartMergeRenderBatches @ 14251fc20

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FSlateWindowElementList::StartMergeRenderBatches(FSlateWindowElementList *this)

{
  atomic<unsigned_int> *paVar1;
  atomic<unsigned_int> aVar2;
  FTaskBase *pFVar3;
  code *pcVar4;
  bool bVar5;
  FTaskBase *this_00;
  FTask *pFVar6;
  undefined8 uVar7;
  FTaskHandle *pFVar8;
  longlong local_18 [2];
  
  if (((this->BatchData).RenderBatches.ArrayNum != 0) ||
     ((this->BatchDataHDR).RenderBatches.ArrayNum != 0)) {
    this_00 = TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
              ::Allocate((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                          *)&UE::Tasks::Private::SmallTaskAllocator);
    if (this_00 != (FTaskBase *)0x0) {
      UE::Tasks::Private::FTaskBase::FTaskBase(this_00,2,true);
      this_00->_padding_ =
           (longlong)
           &UE::Tasks::Private::
            TExecutableTaskBase<`FSlateWindowElementList::StartMergeRenderBatches'::`5'::<lambda_1>,void,void>
            ::_vftable_;
      if (((*(ulonglong *)&(this_00->LowLevelTask).field_0x38 & 0x20) == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsCompleted()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Fundamental\\Task.h"
                             ,0x1dd,L"State: %d"), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      (**(code **)(*(longlong *)&(this_00->LowLevelTask).field_0x28 + 0x18))
                (&(this_00->LowLevelTask).field_0x28,&this_00->LowLevelTask);
      *(FTaskBase **)&this_00->LowLevelTask = this_00;
      *(undefined ***)&(this_00->LowLevelTask).field_0x28 =
           &
           ___7__TTaskDelegateImpl_V<lambda_1>__N_____Init_V<lambda_1>__1__0FTaskBase_Private_Tasks_UE__IEAAXPEB_WW4ETaskPriority_LowLevelTasks__W4EExtendedTaskPriority_45_W4ETaskFlags_45__Z__FTask_LowLevelTasks__QEAAXPEB_WW4ETaskPriority_3___QEAV1_1__Init_FTaskBase_Private_Tasks_UE__IEAAX01W4EExtendedTaskPriority_89_W4ETaskFlags_89__Z_W4ETaskFlags_3__Z__0A____TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
      ;
      *(FTaskBase **)&(this_00->LowLevelTask).field_0x8 = this_00;
      pFVar6 = LowLevelTasks::FTask::GetActiveTask();
      uVar7 = 0;
      if (pFVar6 != (FTask *)0x0) {
        uVar7 = *(undefined8 *)&pFVar6->field_0x30;
      }
      *(undefined8 *)&(this_00->LowLevelTask).field_0x30 = uVar7;
      *(undefined8 *)&(this_00->LowLevelTask).field_0x38 = 0xc80000542428c000;
      this_00->ExtendedPriority = None;
      UE::FInheritedContextBase::CaptureInheritedContext
                ((FInheritedContextBase *)&this_00->_padding_);
      this_00[1]._padding_ = (longlong)this;
      this_00->_padding_ =
           (longlong)
           &UE::Tasks::Private::
            TExecutableTask<`FSlateWindowElementList::StartMergeRenderBatches'::`5'::<lambda_1>_>::
            _vftable_;
    }
    UE::Tasks::Private::FTaskBase::TryLaunch(this_00,0x100);
    pFVar8 = &this->MergeBatchDataTask;
    if (pFVar8 == (FTaskHandle *)local_18) {
      if (this_00 != (FTaskBase *)0x0) {
        LOCK();
        paVar1 = &this_00->RefCount;
        aVar2 = *paVar1;
        *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar2 == (atomic<unsigned_int>)0x1) {
          (**(code **)this_00->_padding_)(this_00,1);
        }
      }
    }
    else {
      pFVar3 = (pFVar8->Pimpl).Reference;
      (pFVar8->Pimpl).Reference = this_00;
      if (pFVar3 != (FTaskBase *)0x0) {
        LOCK();
        paVar1 = &pFVar3->RefCount;
        aVar2 = *paVar1;
        *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar2 == (atomic<unsigned_int>)0x1) {
                    /* WARNING: Could not recover jumptable at 0x00014251fda4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)pFVar3->_padding_)(pFVar3,1);
          return;
        }
      }
    }
  }
  return;
}

