// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 23

// AddCachedElement<1> @ 1424cac60

FSlateBoxElement * __thiscall
FSlateCachedElementData::AddCachedElement<1>
          (FSlateCachedElementData *this,FSlateCachedElementsHandle *param_1,
          FSlateClippingManager *param_2,SWidget *param_3)

{
  atomic<int> *paVar1;
  undefined1 *puVar2;
  byte *pbVar3;
  code *pcVar4;
  atomic<int> aVar5;
  atomic<int> aVar6;
  int iVar7;
  FSlateBoxElement *pFVar8;
  FSlateClippingState *pFVar9;
  FSlateCachedClipState *pFVar10;
  FSlateCachedElementList *pFVar11;
  FSlateCachedElementList *pFVar12;
  FSlateCachedElementList *this_00;
  bool bVar13;
  FSlateCachedElementList *local_res8;
  
  pFVar12 = (FSlateCachedElementList *)(param_1->Ptr).WeakReferenceCount.ReferenceController;
  this_00 = (FSlateCachedElementList *)0x0;
  pFVar11 = pFVar12;
  if (pFVar12 == (FSlateCachedElementList *)0x0) {
LAB_1424cacbe:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pFVar11);
    pFVar12 = pFVar11;
  }
  else {
    aVar5 = *(atomic<int> *)&(pFVar12->DrawElements).field_0x8;
    do {
      pFVar11 = this_00;
      if (aVar5 == (atomic<int>)0x0) goto LAB_1424cacbe;
      paVar1 = (atomic<int> *)&(pFVar12->DrawElements).field_0x8;
      LOCK();
      aVar6 = *paVar1;
      bVar13 = aVar5 == aVar6;
      if (bVar13) {
        *paVar1 = (atomic<int>)((int)aVar5 + 1);
        aVar6 = aVar5;
      }
      UNLOCK();
      aVar5 = aVar6;
    } while (!bVar13);
    this_00 = (param_1->Ptr).Object;
    LOCK();
    paVar1 = (atomic<int> *)&(pFVar12->DrawElements).field_0x8;
    *paVar1 = (atomic<int>)((int)*paVar1 + 1);
    UNLOCK();
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pFVar12);
    if (this_00 != (FSlateCachedElementList *)0x0) goto LAB_1424cace9;
  }
  bVar13 = ::FDebug::CheckVerifyFailedImpl2
                     ("IsValid()",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                      ,0x458,L"");
  if (bVar13) {
    pcVar4 = (code *)swi(3);
    pFVar8 = (FSlateBoxElement *)(*pcVar4)();
    return pFVar8;
  }
LAB_1424cace9:
  iVar7 = *(int *)&(this_00->DrawElements).field_0x28;
  puVar2 = &(this_00->DrawElements).field_0x2c;
  if (iVar7 == *(int *)puVar2) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>::ForAnyElementType>
                      (0x898,(ForAnyElementType *)&(this_00->DrawElements).field_0x18,(int *)puVar2)
    ;
  }
  *(int *)&(this_00->DrawElements).field_0x28 = iVar7 + 1;
  pFVar8 = (FSlateBoxElement *)
           (*(longlong *)&(this_00->DrawElements).field_0x18 + (longlong)iVar7 * 0x98);
  DefaultConstructItems<FSlateBoxElement,int>(pFVar8,1);
  pbVar3 = (byte *)((longlong)&pFVar8->_padding_ + 5);
  *pbVar3 = *pbVar3 | 1;
  local_res8 = this_00;
  TArray<FSlateCachedElementList_*,TSizedInlineAllocator<50,32,TSizedDefaultAllocator<32>_>_>::
  AddUniqueImpl<FSlateCachedElementList_*>(&this->ListsWithNewData,&local_res8);
  pFVar9 = GetClipStateFromParent(param_2);
  if (pFVar9 != (FSlateClippingState *)0x0) {
    pFVar10 = FindOrAddCachedClipState(this,pFVar9);
    if ((this_00 == (FSlateCachedElementList *)0x0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar13)) {
      pcVar4 = (code *)swi(3);
      pFVar8 = (FSlateBoxElement *)(*pcVar4)();
      return pFVar8;
    }
    FSlateCachedElementList::AddCachedClipState(this_00,pFVar10);
    pFVar8->_padding_ = (longlong)(pFVar10->ClippingState).Object;
    *(undefined4 *)&pFVar8->_padding_ = 0xffffffff;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar12);
  return pFVar8;
}

// AddCachedElement<2> @ 1424caf70

FSlateTextElement * __thiscall
FSlateCachedElementData::AddCachedElement<2>
          (FSlateCachedElementData *this,FSlateCachedElementsHandle *param_1,
          FSlateClippingManager *param_2,SWidget *param_3)

{
  atomic<int> *paVar1;
  undefined1 *puVar2;
  byte *pbVar3;
  code *pcVar4;
  atomic<int> aVar5;
  atomic<int> aVar6;
  int iVar7;
  FSlateTextElement *pFVar8;
  FSlateClippingState *pFVar9;
  FSlateCachedClipState *pFVar10;
  FSlateCachedElementList *pFVar11;
  FSlateCachedElementList *pFVar12;
  FSlateCachedElementList *this_00;
  bool bVar13;
  FSlateCachedElementList *local_res8;
  
  pFVar12 = (FSlateCachedElementList *)(param_1->Ptr).WeakReferenceCount.ReferenceController;
  this_00 = (FSlateCachedElementList *)0x0;
  pFVar11 = pFVar12;
  if (pFVar12 == (FSlateCachedElementList *)0x0) {
LAB_1424cafce:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pFVar11);
    pFVar12 = pFVar11;
  }
  else {
    aVar5 = *(atomic<int> *)&(pFVar12->DrawElements).field_0x8;
    do {
      pFVar11 = this_00;
      if (aVar5 == (atomic<int>)0x0) goto LAB_1424cafce;
      paVar1 = (atomic<int> *)&(pFVar12->DrawElements).field_0x8;
      LOCK();
      aVar6 = *paVar1;
      bVar13 = aVar5 == aVar6;
      if (bVar13) {
        *paVar1 = (atomic<int>)((int)aVar5 + 1);
        aVar6 = aVar5;
      }
      UNLOCK();
      aVar5 = aVar6;
    } while (!bVar13);
    this_00 = (param_1->Ptr).Object;
    LOCK();
    paVar1 = (atomic<int> *)&(pFVar12->DrawElements).field_0x8;
    *paVar1 = (atomic<int>)((int)*paVar1 + 1);
    UNLOCK();
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pFVar12);
    if (this_00 != (FSlateCachedElementList *)0x0) goto LAB_1424caff9;
  }
  bVar13 = ::FDebug::CheckVerifyFailedImpl2
                     ("IsValid()",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                      ,0x458,L"");
  if (bVar13) {
    pcVar4 = (code *)swi(3);
    pFVar8 = (FSlateTextElement *)(*pcVar4)();
    return pFVar8;
  }
LAB_1424caff9:
  iVar7 = *(int *)&(this_00->DrawElements).field_0x40;
  puVar2 = &(this_00->DrawElements).field_0x44;
  if (iVar7 == *(int *)puVar2) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>::ForAnyElementType>
                      (0x8c8,(ForAnyElementType *)&(this_00->DrawElements).field_0x30,(int *)puVar2)
    ;
  }
  *(int *)&(this_00->DrawElements).field_0x40 = iVar7 + 1;
  pFVar8 = (FSlateTextElement *)
           (*(longlong *)&(this_00->DrawElements).field_0x30 + (longlong)iVar7 * 200);
  DefaultConstructItems<FSlateTextElement,int>(pFVar8,1);
  pbVar3 = (byte *)((longlong)&pFVar8->_padding_ + 5);
  *pbVar3 = *pbVar3 | 1;
  local_res8 = this_00;
  TArray<FSlateCachedElementList_*,TSizedInlineAllocator<50,32,TSizedDefaultAllocator<32>_>_>::
  AddUniqueImpl<FSlateCachedElementList_*>(&this->ListsWithNewData,&local_res8);
  pFVar9 = GetClipStateFromParent(param_2);
  if (pFVar9 != (FSlateClippingState *)0x0) {
    pFVar10 = FindOrAddCachedClipState(this,pFVar9);
    if ((this_00 == (FSlateCachedElementList *)0x0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar13)) {
      pcVar4 = (code *)swi(3);
      pFVar8 = (FSlateTextElement *)(*pcVar4)();
      return pFVar8;
    }
    FSlateCachedElementList::AddCachedClipState(this_00,pFVar10);
    pFVar8->_padding_ = (longlong)(pFVar10->ClippingState).Object;
    *(undefined4 *)&pFVar8->_padding_ = 0xffffffff;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar12);
  return pFVar8;
}

// AddCachedElement<3> @ 1424cb280

FSlateShapedTextElement * __thiscall
FSlateCachedElementData::AddCachedElement<3>
          (FSlateCachedElementData *this,FSlateCachedElementsHandle *param_1,
          FSlateClippingManager *param_2,SWidget *param_3)

{
  atomic<int> *paVar1;
  undefined1 *puVar2;
  byte *pbVar3;
  code *pcVar4;
  atomic<int> aVar5;
  atomic<int> aVar6;
  int iVar7;
  FSlateShapedTextElement *pFVar8;
  FSlateClippingState *pFVar9;
  FSlateCachedClipState *pFVar10;
  FSlateCachedElementList *pFVar11;
  FSlateCachedElementList *pFVar12;
  FSlateCachedElementList *this_00;
  bool bVar13;
  FSlateCachedElementList *local_res8;
  
  pFVar12 = (FSlateCachedElementList *)(param_1->Ptr).WeakReferenceCount.ReferenceController;
  this_00 = (FSlateCachedElementList *)0x0;
  pFVar11 = pFVar12;
  if (pFVar12 == (FSlateCachedElementList *)0x0) {
LAB_1424cb2de:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pFVar11);
    pFVar12 = pFVar11;
  }
  else {
    aVar5 = *(atomic<int> *)&(pFVar12->DrawElements).field_0x8;
    do {
      pFVar11 = this_00;
      if (aVar5 == (atomic<int>)0x0) goto LAB_1424cb2de;
      paVar1 = (atomic<int> *)&(pFVar12->DrawElements).field_0x8;
      LOCK();
      aVar6 = *paVar1;
      bVar13 = aVar5 == aVar6;
      if (bVar13) {
        *paVar1 = (atomic<int>)((int)aVar5 + 1);
        aVar6 = aVar5;
      }
      UNLOCK();
      aVar5 = aVar6;
    } while (!bVar13);
    this_00 = (param_1->Ptr).Object;
    LOCK();
    paVar1 = (atomic<int> *)&(pFVar12->DrawElements).field_0x8;
    *paVar1 = (atomic<int>)((int)*paVar1 + 1);
    UNLOCK();
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pFVar12);
    if (this_00 != (FSlateCachedElementList *)0x0) goto LAB_1424cb309;
  }
  bVar13 = ::FDebug::CheckVerifyFailedImpl2
                     ("IsValid()",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                      ,0x458,L"");
  if (bVar13) {
    pcVar4 = (code *)swi(3);
    pFVar8 = (FSlateShapedTextElement *)(*pcVar4)();
    return pFVar8;
  }
LAB_1424cb309:
  iVar7 = *(int *)&(this_00->DrawElements).field_0x58;
  puVar2 = &(this_00->DrawElements).field_0x5c;
  if (iVar7 == *(int *)puVar2) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>::ForAnyElementType>
                      (0x890,(ForAnyElementType *)&(this_00->DrawElements).field_0x48,(int *)puVar2)
    ;
  }
  *(int *)&(this_00->DrawElements).field_0x58 = iVar7 + 1;
  pFVar8 = (FSlateShapedTextElement *)
           (*(longlong *)&(this_00->DrawElements).field_0x48 + (longlong)iVar7 * 0x90);
  DefaultConstructItems<FSlateShapedTextElement,int>(pFVar8,1);
  pbVar3 = (byte *)((longlong)&pFVar8->_padding_ + 5);
  *pbVar3 = *pbVar3 | 1;
  local_res8 = this_00;
  TArray<FSlateCachedElementList_*,TSizedInlineAllocator<50,32,TSizedDefaultAllocator<32>_>_>::
  AddUniqueImpl<FSlateCachedElementList_*>(&this->ListsWithNewData,&local_res8);
  pFVar9 = GetClipStateFromParent(param_2);
  if (pFVar9 != (FSlateClippingState *)0x0) {
    pFVar10 = FindOrAddCachedClipState(this,pFVar9);
    if ((this_00 == (FSlateCachedElementList *)0x0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar13)) {
      pcVar4 = (code *)swi(3);
      pFVar8 = (FSlateShapedTextElement *)(*pcVar4)();
      return pFVar8;
    }
    FSlateCachedElementList::AddCachedClipState(this_00,pFVar10);
    pFVar8->_padding_ = (longlong)(pFVar10->ClippingState).Object;
    *(undefined4 *)&pFVar8->_padding_ = 0xffffffff;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar12);
  return pFVar8;
}

// AddCachedElement<4> @ 1424cb5a0

FSlateSplineElement * __thiscall
FSlateCachedElementData::AddCachedElement<4>
          (FSlateCachedElementData *this,FSlateCachedElementsHandle *param_1,
          FSlateClippingManager *param_2,SWidget *param_3)

{
  atomic<int> *paVar1;
  undefined1 *puVar2;
  byte *pbVar3;
  code *pcVar4;
  atomic<int> aVar5;
  atomic<int> aVar6;
  int iVar7;
  FSlateSplineElement *pFVar8;
  FSlateClippingState *pFVar9;
  FSlateCachedClipState *pFVar10;
  FSlateCachedElementList *pFVar11;
  FSlateCachedElementList *pFVar12;
  FSlateCachedElementList *this_00;
  bool bVar13;
  FSlateCachedElementList *local_res8;
  
  pFVar12 = (FSlateCachedElementList *)(param_1->Ptr).WeakReferenceCount.ReferenceController;
  this_00 = (FSlateCachedElementList *)0x0;
  pFVar11 = pFVar12;
  if (pFVar12 == (FSlateCachedElementList *)0x0) {
LAB_1424cb5fe:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pFVar11);
    pFVar12 = pFVar11;
  }
  else {
    aVar5 = *(atomic<int> *)&(pFVar12->DrawElements).field_0x8;
    do {
      pFVar11 = this_00;
      if (aVar5 == (atomic<int>)0x0) goto LAB_1424cb5fe;
      paVar1 = (atomic<int> *)&(pFVar12->DrawElements).field_0x8;
      LOCK();
      aVar6 = *paVar1;
      bVar13 = aVar5 == aVar6;
      if (bVar13) {
        *paVar1 = (atomic<int>)((int)aVar5 + 1);
        aVar6 = aVar5;
      }
      UNLOCK();
      aVar5 = aVar6;
    } while (!bVar13);
    this_00 = (param_1->Ptr).Object;
    LOCK();
    paVar1 = (atomic<int> *)&(pFVar12->DrawElements).field_0x8;
    *paVar1 = (atomic<int>)((int)*paVar1 + 1);
    UNLOCK();
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pFVar12);
    if (this_00 != (FSlateCachedElementList *)0x0) goto LAB_1424cb629;
  }
  bVar13 = ::FDebug::CheckVerifyFailedImpl2
                     ("IsValid()",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                      ,0x458,L"");
  if (bVar13) {
    pcVar4 = (code *)swi(3);
    pFVar8 = (FSlateSplineElement *)(*pcVar4)();
    return pFVar8;
  }
LAB_1424cb629:
  iVar7 = *(int *)&(this_00->DrawElements).field_0x70;
  puVar2 = &(this_00->DrawElements).field_0x74;
  if (iVar7 == *(int *)puVar2) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>::ForAnyElementType>
                      (0x890,(ForAnyElementType *)&(this_00->DrawElements).field_0x60,(int *)puVar2)
    ;
  }
  *(int *)&(this_00->DrawElements).field_0x70 = iVar7 + 1;
  pFVar8 = (FSlateSplineElement *)
           (*(longlong *)&(this_00->DrawElements).field_0x60 + (longlong)iVar7 * 0x90);
  DefaultConstructItems<FSlateSplineElement,int>(pFVar8,1);
  pbVar3 = (byte *)((longlong)&pFVar8->_padding_ + 5);
  *pbVar3 = *pbVar3 | 1;
  local_res8 = this_00;
  TArray<FSlateCachedElementList_*,TSizedInlineAllocator<50,32,TSizedDefaultAllocator<32>_>_>::
  AddUniqueImpl<FSlateCachedElementList_*>(&this->ListsWithNewData,&local_res8);
  pFVar9 = GetClipStateFromParent(param_2);
  if (pFVar9 != (FSlateClippingState *)0x0) {
    pFVar10 = FindOrAddCachedClipState(this,pFVar9);
    if ((this_00 == (FSlateCachedElementList *)0x0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar13)) {
      pcVar4 = (code *)swi(3);
      pFVar8 = (FSlateSplineElement *)(*pcVar4)();
      return pFVar8;
    }
    FSlateCachedElementList::AddCachedClipState(this_00,pFVar10);
    pFVar8->_padding_ = (longlong)(pFVar10->ClippingState).Object;
    *(undefined4 *)&pFVar8->_padding_ = 0xffffffff;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar12);
  return pFVar8;
}

// AddCachedElement<5> @ 1424cb8c0

FSlateLineElement * __thiscall
FSlateCachedElementData::AddCachedElement<5>
          (FSlateCachedElementData *this,FSlateCachedElementsHandle *param_1,
          FSlateClippingManager *param_2,SWidget *param_3)

{
  atomic<int> *paVar1;
  byte *pbVar2;
  undefined1 *puVar3;
  code *pcVar4;
  atomic<int> aVar5;
  atomic<int> aVar6;
  int iVar7;
  FSlateLineElement *pFVar8;
  FSlateClippingState *pFVar9;
  FSlateCachedClipState *pFVar10;
  FSlateCachedElementList *pFVar11;
  FSlateCachedElementList *pFVar12;
  FSlateCachedElementList *this_00;
  bool bVar13;
  FSlateCachedElementList *local_res8;
  
  pFVar12 = (FSlateCachedElementList *)(param_1->Ptr).WeakReferenceCount.ReferenceController;
  this_00 = (FSlateCachedElementList *)0x0;
  pFVar11 = pFVar12;
  if (pFVar12 == (FSlateCachedElementList *)0x0) {
LAB_1424cb91e:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pFVar11);
    pFVar12 = pFVar11;
  }
  else {
    aVar5 = *(atomic<int> *)&(pFVar12->DrawElements).field_0x8;
    do {
      pFVar11 = this_00;
      if (aVar5 == (atomic<int>)0x0) goto LAB_1424cb91e;
      paVar1 = (atomic<int> *)&(pFVar12->DrawElements).field_0x8;
      LOCK();
      aVar6 = *paVar1;
      bVar13 = aVar5 == aVar6;
      if (bVar13) {
        *paVar1 = (atomic<int>)((int)aVar5 + 1);
        aVar6 = aVar5;
      }
      UNLOCK();
      aVar5 = aVar6;
    } while (!bVar13);
    this_00 = (param_1->Ptr).Object;
    LOCK();
    paVar1 = (atomic<int> *)&(pFVar12->DrawElements).field_0x8;
    *paVar1 = (atomic<int>)((int)*paVar1 + 1);
    UNLOCK();
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pFVar12);
    if (this_00 != (FSlateCachedElementList *)0x0) goto LAB_1424cb949;
  }
  bVar13 = ::FDebug::CheckVerifyFailedImpl2
                     ("IsValid()",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                      ,0x458,L"");
  if (bVar13) {
    pcVar4 = (code *)swi(3);
    pFVar8 = (FSlateLineElement *)(*pcVar4)();
    return pFVar8;
  }
LAB_1424cb949:
  iVar7 = *(int *)&(this_00->DrawElements).field_0x88;
  puVar3 = &(this_00->DrawElements).field_0x8c;
  if (iVar7 == *(int *)puVar3) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>::ForAnyElementType>
                      (0x888,(ForAnyElementType *)&(this_00->DrawElements).field_0x78,(int *)puVar3)
    ;
  }
  *(int *)&(this_00->DrawElements).field_0x88 = iVar7 + 1;
  pFVar8 = (FSlateLineElement *)
           (*(longlong *)&(this_00->DrawElements).field_0x78 + (longlong)iVar7 * 0x88);
  DefaultConstructItems<FSlateLineElement,int>(pFVar8,1);
  pbVar2 = (byte *)((longlong)&pFVar8->_padding_ + 5);
  *pbVar2 = *pbVar2 | 1;
  local_res8 = this_00;
  TArray<FSlateCachedElementList_*,TSizedInlineAllocator<50,32,TSizedDefaultAllocator<32>_>_>::
  AddUniqueImpl<FSlateCachedElementList_*>(&this->ListsWithNewData,&local_res8);
  pFVar9 = GetClipStateFromParent(param_2);
  if (pFVar9 != (FSlateClippingState *)0x0) {
    pFVar10 = FindOrAddCachedClipState(this,pFVar9);
    if ((this_00 == (FSlateCachedElementList *)0x0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar13)) {
      pcVar4 = (code *)swi(3);
      pFVar8 = (FSlateLineElement *)(*pcVar4)();
      return pFVar8;
    }
    FSlateCachedElementList::AddCachedClipState(this_00,pFVar10);
    pFVar8->_padding_ = (longlong)(pFVar10->ClippingState).Object;
    *(undefined4 *)&pFVar8->_padding_ = 0xffffffff;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar12);
  return pFVar8;
}

// AddCachedElement<6> @ 1424cbbe0

FSlateGradientElement * __thiscall
FSlateCachedElementData::AddCachedElement<6>
          (FSlateCachedElementData *this,FSlateCachedElementsHandle *param_1,
          FSlateClippingManager *param_2,SWidget *param_3)

{
  atomic<int> *paVar1;
  byte *pbVar2;
  undefined1 *puVar3;
  code *pcVar4;
  atomic<int> aVar5;
  atomic<int> aVar6;
  int iVar7;
  FSlateGradientElement *pFVar8;
  FSlateClippingState *pFVar9;
  FSlateCachedClipState *pFVar10;
  FSlateCachedElementList *pFVar11;
  FSlateCachedElementList *pFVar12;
  FSlateCachedElementList *this_00;
  bool bVar13;
  FSlateCachedElementList *local_res8;
  
  pFVar12 = (FSlateCachedElementList *)(param_1->Ptr).WeakReferenceCount.ReferenceController;
  this_00 = (FSlateCachedElementList *)0x0;
  pFVar11 = pFVar12;
  if (pFVar12 == (FSlateCachedElementList *)0x0) {
LAB_1424cbc3e:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pFVar11);
    pFVar12 = pFVar11;
  }
  else {
    aVar5 = *(atomic<int> *)&(pFVar12->DrawElements).field_0x8;
    do {
      pFVar11 = this_00;
      if (aVar5 == (atomic<int>)0x0) goto LAB_1424cbc3e;
      paVar1 = (atomic<int> *)&(pFVar12->DrawElements).field_0x8;
      LOCK();
      aVar6 = *paVar1;
      bVar13 = aVar5 == aVar6;
      if (bVar13) {
        *paVar1 = (atomic<int>)((int)aVar5 + 1);
        aVar6 = aVar5;
      }
      UNLOCK();
      aVar5 = aVar6;
    } while (!bVar13);
    this_00 = (param_1->Ptr).Object;
    LOCK();
    paVar1 = (atomic<int> *)&(pFVar12->DrawElements).field_0x8;
    *paVar1 = (atomic<int>)((int)*paVar1 + 1);
    UNLOCK();
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pFVar12);
    if (this_00 != (FSlateCachedElementList *)0x0) goto LAB_1424cbc69;
  }
  bVar13 = ::FDebug::CheckVerifyFailedImpl2
                     ("IsValid()",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                      ,0x458,L"");
  if (bVar13) {
    pcVar4 = (code *)swi(3);
    pFVar8 = (FSlateGradientElement *)(*pcVar4)();
    return pFVar8;
  }
LAB_1424cbc69:
  iVar7 = *(int *)&(this_00->DrawElements).field_0xa0;
  puVar3 = &(this_00->DrawElements).field_0xa4;
  if (iVar7 == *(int *)puVar3) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>::ForAnyElementType>
                      (0x1070,(ForAnyElementType *)&(this_00->DrawElements).field_0x90,(int *)puVar3
                      );
  }
  *(int *)&(this_00->DrawElements).field_0xa0 = iVar7 + 1;
  pFVar8 = (FSlateGradientElement *)
           (*(longlong *)&(this_00->DrawElements).field_0x90 + (longlong)iVar7 * 0x70);
  DefaultConstructItems<FSlateGradientElement,int>(pFVar8,1);
  pbVar2 = (byte *)((longlong)&pFVar8->_padding_ + 5);
  *pbVar2 = *pbVar2 | 1;
  local_res8 = this_00;
  TArray<FSlateCachedElementList_*,TSizedInlineAllocator<50,32,TSizedDefaultAllocator<32>_>_>::
  AddUniqueImpl<FSlateCachedElementList_*>(&this->ListsWithNewData,&local_res8);
  pFVar9 = GetClipStateFromParent(param_2);
  if (pFVar9 != (FSlateClippingState *)0x0) {
    pFVar10 = FindOrAddCachedClipState(this,pFVar9);
    if ((this_00 == (FSlateCachedElementList *)0x0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar13)) {
      pcVar4 = (code *)swi(3);
      pFVar8 = (FSlateGradientElement *)(*pcVar4)();
      return pFVar8;
    }
    FSlateCachedElementList::AddCachedClipState(this_00,pFVar10);
    pFVar8->_padding_ = (longlong)(pFVar10->ClippingState).Object;
    *(undefined4 *)&pFVar8->_padding_ = 0xffffffff;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar12);
  return pFVar8;
}

// AddCachedElement<7> @ 1424cbf00

FSlateViewportElement * __thiscall
FSlateCachedElementData::AddCachedElement<7>
          (FSlateCachedElementData *this,FSlateCachedElementsHandle *param_1,
          FSlateClippingManager *param_2,SWidget *param_3)

{
  atomic<int> *paVar1;
  byte *pbVar2;
  undefined1 *puVar3;
  code *pcVar4;
  atomic<int> aVar5;
  atomic<int> aVar6;
  int iVar7;
  FSlateViewportElement *pFVar8;
  FSlateClippingState *pFVar9;
  FSlateCachedClipState *pFVar10;
  FSlateCachedElementList *pFVar11;
  FSlateCachedElementList *pFVar12;
  FSlateCachedElementList *this_00;
  bool bVar13;
  FSlateCachedElementList *local_res8;
  
  pFVar12 = (FSlateCachedElementList *)(param_1->Ptr).WeakReferenceCount.ReferenceController;
  this_00 = (FSlateCachedElementList *)0x0;
  pFVar11 = pFVar12;
  if (pFVar12 == (FSlateCachedElementList *)0x0) {
LAB_1424cbf5e:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pFVar11);
    pFVar12 = pFVar11;
  }
  else {
    aVar5 = *(atomic<int> *)&(pFVar12->DrawElements).field_0x8;
    do {
      pFVar11 = this_00;
      if (aVar5 == (atomic<int>)0x0) goto LAB_1424cbf5e;
      paVar1 = (atomic<int> *)&(pFVar12->DrawElements).field_0x8;
      LOCK();
      aVar6 = *paVar1;
      bVar13 = aVar5 == aVar6;
      if (bVar13) {
        *paVar1 = (atomic<int>)((int)aVar5 + 1);
        aVar6 = aVar5;
      }
      UNLOCK();
      aVar5 = aVar6;
    } while (!bVar13);
    this_00 = (param_1->Ptr).Object;
    LOCK();
    paVar1 = (atomic<int> *)&(pFVar12->DrawElements).field_0x8;
    *paVar1 = (atomic<int>)((int)*paVar1 + 1);
    UNLOCK();
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pFVar12);
    if (this_00 != (FSlateCachedElementList *)0x0) goto LAB_1424cbf89;
  }
  bVar13 = ::FDebug::CheckVerifyFailedImpl2
                     ("IsValid()",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                      ,0x458,L"");
  if (bVar13) {
    pcVar4 = (code *)swi(3);
    pFVar8 = (FSlateViewportElement *)(*pcVar4)();
    return pFVar8;
  }
LAB_1424cbf89:
  iVar7 = *(int *)&(this_00->DrawElements).field_0xb8;
  puVar3 = &(this_00->DrawElements).field_0xbc;
  if (iVar7 == *(int *)puVar3) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>::ForAnyElementType>
                      (0x868,(ForAnyElementType *)&(this_00->DrawElements).field_0xa8,(int *)puVar3)
    ;
  }
  *(int *)&(this_00->DrawElements).field_0xb8 = iVar7 + 1;
  pFVar8 = (FSlateViewportElement *)
           (*(longlong *)&(this_00->DrawElements).field_0xa8 + (longlong)iVar7 * 0x68);
  DefaultConstructItems<FSlateViewportElement,int>(pFVar8,1);
  pbVar2 = (byte *)((longlong)&pFVar8->_padding_ + 5);
  *pbVar2 = *pbVar2 | 1;
  local_res8 = this_00;
  TArray<FSlateCachedElementList_*,TSizedInlineAllocator<50,32,TSizedDefaultAllocator<32>_>_>::
  AddUniqueImpl<FSlateCachedElementList_*>(&this->ListsWithNewData,&local_res8);
  pFVar9 = GetClipStateFromParent(param_2);
  if (pFVar9 != (FSlateClippingState *)0x0) {
    pFVar10 = FindOrAddCachedClipState(this,pFVar9);
    if ((this_00 == (FSlateCachedElementList *)0x0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar13)) {
      pcVar4 = (code *)swi(3);
      pFVar8 = (FSlateViewportElement *)(*pcVar4)();
      return pFVar8;
    }
    FSlateCachedElementList::AddCachedClipState(this_00,pFVar10);
    pFVar8->_padding_ = (longlong)(pFVar10->ClippingState).Object;
    *(undefined4 *)&pFVar8->_padding_ = 0xffffffff;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar12);
  return pFVar8;
}

// AddCachedElement<8> @ 1424cc220

FSlateBoxElement * __thiscall
FSlateCachedElementData::AddCachedElement<8>
          (FSlateCachedElementData *this,FSlateCachedElementsHandle *param_1,
          FSlateClippingManager *param_2,SWidget *param_3)

{
  atomic<int> *paVar1;
  byte *pbVar2;
  undefined1 *puVar3;
  code *pcVar4;
  atomic<int> aVar5;
  atomic<int> aVar6;
  int iVar7;
  FSlateBoxElement *pFVar8;
  FSlateClippingState *pFVar9;
  FSlateCachedClipState *pFVar10;
  FSlateCachedElementList *pFVar11;
  FSlateCachedElementList *pFVar12;
  FSlateCachedElementList *this_00;
  bool bVar13;
  FSlateCachedElementList *local_res8;
  
  pFVar12 = (FSlateCachedElementList *)(param_1->Ptr).WeakReferenceCount.ReferenceController;
  this_00 = (FSlateCachedElementList *)0x0;
  pFVar11 = pFVar12;
  if (pFVar12 == (FSlateCachedElementList *)0x0) {
LAB_1424cc27e:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pFVar11);
    pFVar12 = pFVar11;
  }
  else {
    aVar5 = *(atomic<int> *)&(pFVar12->DrawElements).field_0x8;
    do {
      pFVar11 = this_00;
      if (aVar5 == (atomic<int>)0x0) goto LAB_1424cc27e;
      paVar1 = (atomic<int> *)&(pFVar12->DrawElements).field_0x8;
      LOCK();
      aVar6 = *paVar1;
      bVar13 = aVar5 == aVar6;
      if (bVar13) {
        *paVar1 = (atomic<int>)((int)aVar5 + 1);
        aVar6 = aVar5;
      }
      UNLOCK();
      aVar5 = aVar6;
    } while (!bVar13);
    this_00 = (param_1->Ptr).Object;
    LOCK();
    paVar1 = (atomic<int> *)&(pFVar12->DrawElements).field_0x8;
    *paVar1 = (atomic<int>)((int)*paVar1 + 1);
    UNLOCK();
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pFVar12);
    if (this_00 != (FSlateCachedElementList *)0x0) goto LAB_1424cc2a9;
  }
  bVar13 = ::FDebug::CheckVerifyFailedImpl2
                     ("IsValid()",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                      ,0x458,L"");
  if (bVar13) {
    pcVar4 = (code *)swi(3);
    pFVar8 = (FSlateBoxElement *)(*pcVar4)();
    return pFVar8;
  }
LAB_1424cc2a9:
  iVar7 = *(int *)&(this_00->DrawElements).field_0xd0;
  puVar3 = &(this_00->DrawElements).field_0xd4;
  if (iVar7 == *(int *)puVar3) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>::ForAnyElementType>
                      (0x898,(ForAnyElementType *)&(this_00->DrawElements).field_0xc0,(int *)puVar3)
    ;
  }
  *(int *)&(this_00->DrawElements).field_0xd0 = iVar7 + 1;
  pFVar8 = (FSlateBoxElement *)
           (*(longlong *)&(this_00->DrawElements).field_0xc0 + (longlong)iVar7 * 0x98);
  DefaultConstructItems<FSlateBoxElement,int>(pFVar8,1);
  pbVar2 = (byte *)((longlong)&pFVar8->_padding_ + 5);
  *pbVar2 = *pbVar2 | 1;
  local_res8 = this_00;
  TArray<FSlateCachedElementList_*,TSizedInlineAllocator<50,32,TSizedDefaultAllocator<32>_>_>::
  AddUniqueImpl<FSlateCachedElementList_*>(&this->ListsWithNewData,&local_res8);
  pFVar9 = GetClipStateFromParent(param_2);
  if (pFVar9 != (FSlateClippingState *)0x0) {
    pFVar10 = FindOrAddCachedClipState(this,pFVar9);
    if ((this_00 == (FSlateCachedElementList *)0x0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar13)) {
      pcVar4 = (code *)swi(3);
      pFVar8 = (FSlateBoxElement *)(*pcVar4)();
      return pFVar8;
    }
    FSlateCachedElementList::AddCachedClipState(this_00,pFVar10);
    pFVar8->_padding_ = (longlong)(pFVar10->ClippingState).Object;
    *(undefined4 *)&pFVar8->_padding_ = 0xffffffff;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar12);
  return pFVar8;
}

// AddCachedElement<9> @ 1424cc540

FSlateCustomDrawerElement * __thiscall
FSlateCachedElementData::AddCachedElement<9>
          (FSlateCachedElementData *this,FSlateCachedElementsHandle *param_1,
          FSlateClippingManager *param_2,SWidget *param_3)

{
  atomic<int> *paVar1;
  byte *pbVar2;
  undefined1 *puVar3;
  code *pcVar4;
  atomic<int> aVar5;
  atomic<int> aVar6;
  int iVar7;
  FSlateCustomDrawerElement *pFVar8;
  FSlateClippingState *pFVar9;
  FSlateCachedClipState *pFVar10;
  FSlateCachedElementList *pFVar11;
  FSlateCachedElementList *pFVar12;
  FSlateCachedElementList *this_00;
  bool bVar13;
  FSlateCachedElementList *local_res8;
  
  pFVar12 = (FSlateCachedElementList *)(param_1->Ptr).WeakReferenceCount.ReferenceController;
  this_00 = (FSlateCachedElementList *)0x0;
  pFVar11 = pFVar12;
  if (pFVar12 == (FSlateCachedElementList *)0x0) {
LAB_1424cc59e:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pFVar11);
    pFVar12 = pFVar11;
  }
  else {
    aVar5 = *(atomic<int> *)&(pFVar12->DrawElements).field_0x8;
    do {
      pFVar11 = this_00;
      if (aVar5 == (atomic<int>)0x0) goto LAB_1424cc59e;
      paVar1 = (atomic<int> *)&(pFVar12->DrawElements).field_0x8;
      LOCK();
      aVar6 = *paVar1;
      bVar13 = aVar5 == aVar6;
      if (bVar13) {
        *paVar1 = (atomic<int>)((int)aVar5 + 1);
        aVar6 = aVar5;
      }
      UNLOCK();
      aVar5 = aVar6;
    } while (!bVar13);
    this_00 = (param_1->Ptr).Object;
    LOCK();
    paVar1 = (atomic<int> *)&(pFVar12->DrawElements).field_0x8;
    *paVar1 = (atomic<int>)((int)*paVar1 + 1);
    UNLOCK();
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pFVar12);
    if (this_00 != (FSlateCachedElementList *)0x0) goto LAB_1424cc5c9;
  }
  bVar13 = ::FDebug::CheckVerifyFailedImpl2
                     ("IsValid()",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                      ,0x458,L"");
  if (bVar13) {
    pcVar4 = (code *)swi(3);
    pFVar8 = (FSlateCustomDrawerElement *)(*pcVar4)();
    return pFVar8;
  }
LAB_1424cc5c9:
  iVar7 = *(int *)&(this_00->DrawElements).field_0xe8;
  puVar3 = &(this_00->DrawElements).field_0xec;
  if (iVar7 == *(int *)puVar3) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>::ForAnyElementType>
                      (0x858,(ForAnyElementType *)&(this_00->DrawElements).field_0xd8,(int *)puVar3)
    ;
  }
  *(int *)&(this_00->DrawElements).field_0xe8 = iVar7 + 1;
  pFVar8 = (FSlateCustomDrawerElement *)
           (*(longlong *)&(this_00->DrawElements).field_0xd8 + (longlong)iVar7 * 0x58);
  DefaultConstructItems<FSlateCustomDrawerElement,int>(pFVar8,1);
  pbVar2 = (byte *)((longlong)&pFVar8->_padding_ + 5);
  *pbVar2 = *pbVar2 | 1;
  local_res8 = this_00;
  TArray<FSlateCachedElementList_*,TSizedInlineAllocator<50,32,TSizedDefaultAllocator<32>_>_>::
  AddUniqueImpl<FSlateCachedElementList_*>(&this->ListsWithNewData,&local_res8);
  pFVar9 = GetClipStateFromParent(param_2);
  if (pFVar9 != (FSlateClippingState *)0x0) {
    pFVar10 = FindOrAddCachedClipState(this,pFVar9);
    if ((this_00 == (FSlateCachedElementList *)0x0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar13)) {
      pcVar4 = (code *)swi(3);
      pFVar8 = (FSlateCustomDrawerElement *)(*pcVar4)();
      return pFVar8;
    }
    FSlateCachedElementList::AddCachedClipState(this_00,pFVar10);
    pFVar8->_padding_ = (longlong)(pFVar10->ClippingState).Object;
    *(undefined4 *)&pFVar8->_padding_ = 0xffffffff;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar12);
  return pFVar8;
}

// AddCachedElement<10> @ 1424cc860

FSlateCustomVertsElement * __thiscall
FSlateCachedElementData::AddCachedElement<10>
          (FSlateCachedElementData *this,FSlateCachedElementsHandle *param_1,
          FSlateClippingManager *param_2,SWidget *param_3)

{
  atomic<int> *paVar1;
  byte *pbVar2;
  undefined1 *puVar3;
  code *pcVar4;
  atomic<int> aVar5;
  atomic<int> aVar6;
  int iVar7;
  FSlateCustomVertsElement *pFVar8;
  FSlateClippingState *pFVar9;
  FSlateCachedClipState *pFVar10;
  FSlateCachedElementList *pFVar11;
  FSlateCachedElementList *pFVar12;
  FSlateCachedElementList *this_00;
  bool bVar13;
  FSlateCachedElementList *local_res8;
  
  pFVar12 = (FSlateCachedElementList *)(param_1->Ptr).WeakReferenceCount.ReferenceController;
  this_00 = (FSlateCachedElementList *)0x0;
  pFVar11 = pFVar12;
  if (pFVar12 == (FSlateCachedElementList *)0x0) {
LAB_1424cc8be:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pFVar11);
    pFVar12 = pFVar11;
  }
  else {
    aVar5 = *(atomic<int> *)&(pFVar12->DrawElements).field_0x8;
    do {
      pFVar11 = this_00;
      if (aVar5 == (atomic<int>)0x0) goto LAB_1424cc8be;
      paVar1 = (atomic<int> *)&(pFVar12->DrawElements).field_0x8;
      LOCK();
      aVar6 = *paVar1;
      bVar13 = aVar5 == aVar6;
      if (bVar13) {
        *paVar1 = (atomic<int>)((int)aVar5 + 1);
        aVar6 = aVar5;
      }
      UNLOCK();
      aVar5 = aVar6;
    } while (!bVar13);
    this_00 = (param_1->Ptr).Object;
    LOCK();
    paVar1 = (atomic<int> *)&(pFVar12->DrawElements).field_0x8;
    *paVar1 = (atomic<int>)((int)*paVar1 + 1);
    UNLOCK();
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pFVar12);
    if (this_00 != (FSlateCachedElementList *)0x0) goto LAB_1424cc8e9;
  }
  bVar13 = ::FDebug::CheckVerifyFailedImpl2
                     ("IsValid()",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                      ,0x458,L"");
  if (bVar13) {
    pcVar4 = (code *)swi(3);
    pFVar8 = (FSlateCustomVertsElement *)(*pcVar4)();
    return pFVar8;
  }
LAB_1424cc8e9:
  iVar7 = *(int *)&(this_00->DrawElements).field_0x100;
  puVar3 = &(this_00->DrawElements).field_0x104;
  if (iVar7 == *(int *)puVar3) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>::ForAnyElementType>
                      (0x880,(ForAnyElementType *)&(this_00->DrawElements).field_0xf0,(int *)puVar3)
    ;
  }
  *(int *)&(this_00->DrawElements).field_0x100 = iVar7 + 1;
  pFVar8 = (FSlateCustomVertsElement *)
           (*(longlong *)&(this_00->DrawElements).field_0xf0 + (longlong)iVar7 * 0x80);
  DefaultConstructItems<FSlateCustomVertsElement,int>(pFVar8,1);
  pbVar2 = (byte *)((longlong)&pFVar8->_padding_ + 5);
  *pbVar2 = *pbVar2 | 1;
  local_res8 = this_00;
  TArray<FSlateCachedElementList_*,TSizedInlineAllocator<50,32,TSizedDefaultAllocator<32>_>_>::
  AddUniqueImpl<FSlateCachedElementList_*>(&this->ListsWithNewData,&local_res8);
  pFVar9 = GetClipStateFromParent(param_2);
  if (pFVar9 != (FSlateClippingState *)0x0) {
    pFVar10 = FindOrAddCachedClipState(this,pFVar9);
    if ((this_00 == (FSlateCachedElementList *)0x0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar13)) {
      pcVar4 = (code *)swi(3);
      pFVar8 = (FSlateCustomVertsElement *)(*pcVar4)();
      return pFVar8;
    }
    FSlateCachedElementList::AddCachedClipState(this_00,pFVar10);
    pFVar8->_padding_ = (longlong)(pFVar10->ClippingState).Object;
    *(undefined4 *)&pFVar8->_padding_ = 0xffffffff;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar12);
  return pFVar8;
}

// AddCachedElement<11> @ 1424cce20

FSlatePostProcessElement * __thiscall
FSlateCachedElementData::AddCachedElement<11>
          (FSlateCachedElementData *this,FSlateCachedElementsHandle *param_1,
          FSlateClippingManager *param_2,SWidget *param_3)

{
  atomic<int> *paVar1;
  undefined1 *puVar2;
  code *pcVar3;
  atomic<int> aVar4;
  atomic<int> aVar5;
  int iVar6;
  FSlatePostProcessElement *pFVar7;
  FSlateClippingState *pFVar8;
  FSlateCachedClipState *pFVar9;
  FSlateCachedElementList *pFVar10;
  FSlateCachedElementList *pFVar11;
  FSlateCachedElementList *this_00;
  bool bVar12;
  FSlateCachedElementList *local_res8;
  
  pFVar11 = (FSlateCachedElementList *)(param_1->Ptr).WeakReferenceCount.ReferenceController;
  this_00 = (FSlateCachedElementList *)0x0;
  pFVar10 = pFVar11;
  if (pFVar11 == (FSlateCachedElementList *)0x0) {
LAB_1424cce7e:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pFVar10);
    pFVar11 = pFVar10;
  }
  else {
    aVar4 = *(atomic<int> *)&(pFVar11->DrawElements).field_0x8;
    do {
      pFVar10 = this_00;
      if (aVar4 == (atomic<int>)0x0) goto LAB_1424cce7e;
      paVar1 = (atomic<int> *)&(pFVar11->DrawElements).field_0x8;
      LOCK();
      aVar5 = *paVar1;
      bVar12 = aVar4 == aVar5;
      if (bVar12) {
        *paVar1 = (atomic<int>)((int)aVar4 + 1);
        aVar5 = aVar4;
      }
      UNLOCK();
      aVar4 = aVar5;
    } while (!bVar12);
    this_00 = (param_1->Ptr).Object;
    LOCK();
    paVar1 = (atomic<int> *)&(pFVar11->DrawElements).field_0x8;
    *paVar1 = (atomic<int>)((int)*paVar1 + 1);
    UNLOCK();
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pFVar11);
    if (this_00 != (FSlateCachedElementList *)0x0) goto LAB_1424ccea9;
  }
  bVar12 = ::FDebug::CheckVerifyFailedImpl2
                     ("IsValid()",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                      ,0x458,L"");
  if (bVar12) {
    pcVar3 = (code *)swi(3);
    pFVar7 = (FSlatePostProcessElement *)(*pcVar3)();
    return pFVar7;
  }
LAB_1424ccea9:
  iVar6 = *(int *)&(this_00->DrawElements).field_0x118;
  puVar2 = &(this_00->DrawElements).field_0x11c;
  if (iVar6 == *(int *)puVar2) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>::ForAnyElementType>
                      (0x1080,(ForAnyElementType *)&(this_00->DrawElements).field_0x108,
                       (int *)puVar2);
  }
  *(int *)&(this_00->DrawElements).field_0x118 = iVar6 + 1;
  pFVar7 = (FSlatePostProcessElement *)
           (*(longlong *)&(this_00->DrawElements).field_0x108 + (longlong)iVar6 * 0x80);
  DefaultConstructItems<FSlatePostProcessElement,int>(pFVar7,1);
  pFVar7->field_0x45 = pFVar7->field_0x45 | 1;
  local_res8 = this_00;
  TArray<FSlateCachedElementList_*,TSizedInlineAllocator<50,32,TSizedDefaultAllocator<32>_>_>::
  AddUniqueImpl<FSlateCachedElementList_*>(&this->ListsWithNewData,&local_res8);
  pFVar8 = GetClipStateFromParent(param_2);
  if (pFVar8 != (FSlateClippingState *)0x0) {
    pFVar9 = FindOrAddCachedClipState(this,pFVar8);
    if ((this_00 == (FSlateCachedElementList *)0x0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar12)) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FSlatePostProcessElement *)(*pcVar3)();
      return pFVar7;
    }
    FSlateCachedElementList::AddCachedClipState(this_00,pFVar9);
    *(FSlateClippingState **)&pFVar7->field_0x30 = (pFVar9->ClippingState).Object;
    *(undefined4 *)&pFVar7->field_0x38 = 0xffffffff;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar11);
  return pFVar7;
}

// AddCachedElement<12> @ 1424cd140

FSlateRoundedBoxElement * __thiscall
FSlateCachedElementData::AddCachedElement<12>
          (FSlateCachedElementData *this,FSlateCachedElementsHandle *param_1,
          FSlateClippingManager *param_2,SWidget *param_3)

{
  atomic<int> *paVar1;
  undefined1 *puVar2;
  code *pcVar3;
  atomic<int> aVar4;
  atomic<int> aVar5;
  int iVar6;
  FSlateRoundedBoxElement *pFVar7;
  FSlateClippingState *pFVar8;
  FSlateCachedClipState *pFVar9;
  FSlateCachedElementList *pFVar10;
  FSlateCachedElementList *pFVar11;
  FSlateCachedElementList *this_00;
  bool bVar12;
  FSlateCachedElementList *local_res8;
  
  pFVar11 = (FSlateCachedElementList *)(param_1->Ptr).WeakReferenceCount.ReferenceController;
  this_00 = (FSlateCachedElementList *)0x0;
  pFVar10 = pFVar11;
  if (pFVar11 == (FSlateCachedElementList *)0x0) {
LAB_1424cd19e:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pFVar10);
    pFVar11 = pFVar10;
  }
  else {
    aVar4 = *(atomic<int> *)&(pFVar11->DrawElements).field_0x8;
    do {
      pFVar10 = this_00;
      if (aVar4 == (atomic<int>)0x0) goto LAB_1424cd19e;
      paVar1 = (atomic<int> *)&(pFVar11->DrawElements).field_0x8;
      LOCK();
      aVar5 = *paVar1;
      bVar12 = aVar4 == aVar5;
      if (bVar12) {
        *paVar1 = (atomic<int>)((int)aVar4 + 1);
        aVar5 = aVar4;
      }
      UNLOCK();
      aVar4 = aVar5;
    } while (!bVar12);
    this_00 = (param_1->Ptr).Object;
    LOCK();
    paVar1 = (atomic<int> *)&(pFVar11->DrawElements).field_0x8;
    *paVar1 = (atomic<int>)((int)*paVar1 + 1);
    UNLOCK();
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pFVar11);
    if (this_00 != (FSlateCachedElementList *)0x0) goto LAB_1424cd1c9;
  }
  bVar12 = ::FDebug::CheckVerifyFailedImpl2
                     ("IsValid()",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                      ,0x458,L"");
  if (bVar12) {
    pcVar3 = (code *)swi(3);
    pFVar7 = (FSlateRoundedBoxElement *)(*pcVar3)();
    return pFVar7;
  }
LAB_1424cd1c9:
  iVar6 = *(int *)&(this_00->DrawElements).field_0x130;
  puVar2 = &(this_00->DrawElements).field_0x134;
  if (iVar6 == *(int *)puVar2) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>::ForAnyElementType>
                      (0x10d0,(ForAnyElementType *)&(this_00->DrawElements).field_0x120,
                       (int *)puVar2);
  }
  *(int *)&(this_00->DrawElements).field_0x130 = iVar6 + 1;
  pFVar7 = (FSlateRoundedBoxElement *)
           (*(longlong *)&(this_00->DrawElements).field_0x120 + (longlong)iVar6 * 0xd0);
  DefaultConstructItems<FSlateRoundedBoxElement,int>(pFVar7,1);
  pFVar7->field_0x45 = pFVar7->field_0x45 | 1;
  local_res8 = this_00;
  TArray<FSlateCachedElementList_*,TSizedInlineAllocator<50,32,TSizedDefaultAllocator<32>_>_>::
  AddUniqueImpl<FSlateCachedElementList_*>(&this->ListsWithNewData,&local_res8);
  pFVar8 = GetClipStateFromParent(param_2);
  if (pFVar8 != (FSlateClippingState *)0x0) {
    pFVar9 = FindOrAddCachedClipState(this,pFVar8);
    if ((this_00 == (FSlateCachedElementList *)0x0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar12)) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FSlateRoundedBoxElement *)(*pcVar3)();
      return pFVar7;
    }
    FSlateCachedElementList::AddCachedClipState(this_00,pFVar9);
    *(FSlateClippingState **)&pFVar7->field_0x30 = (pFVar9->ClippingState).Object;
    *(undefined4 *)&pFVar7->field_0x38 = 0xffffffff;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar11);
  return pFVar7;
}

// AddCachedElement<13> @ 1424cd460

FSlateDrawElement * __thiscall
FSlateCachedElementData::AddCachedElement<13>
          (FSlateCachedElementData *this,FSlateCachedElementsHandle *param_1,
          FSlateClippingManager *param_2,SWidget *param_3)

{
  atomic<int> *paVar1;
  undefined1 *puVar2;
  code *pcVar3;
  atomic<int> aVar4;
  atomic<int> aVar5;
  int iVar6;
  FSlateDrawElement *pFVar7;
  FSlateClippingState *pFVar8;
  FSlateCachedClipState *pFVar9;
  FSlateCachedElementList *pFVar10;
  FSlateCachedElementList *pFVar11;
  FSlateCachedElementList *this_00;
  bool bVar12;
  FSlateCachedElementList *local_res8;
  
  pFVar11 = (FSlateCachedElementList *)(param_1->Ptr).WeakReferenceCount.ReferenceController;
  this_00 = (FSlateCachedElementList *)0x0;
  pFVar10 = pFVar11;
  if (pFVar11 == (FSlateCachedElementList *)0x0) {
LAB_1424cd4be:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pFVar10);
    pFVar11 = pFVar10;
  }
  else {
    aVar4 = *(atomic<int> *)&(pFVar11->DrawElements).field_0x8;
    do {
      pFVar10 = this_00;
      if (aVar4 == (atomic<int>)0x0) goto LAB_1424cd4be;
      paVar1 = (atomic<int> *)&(pFVar11->DrawElements).field_0x8;
      LOCK();
      aVar5 = *paVar1;
      bVar12 = aVar4 == aVar5;
      if (bVar12) {
        *paVar1 = (atomic<int>)((int)aVar4 + 1);
        aVar5 = aVar4;
      }
      UNLOCK();
      aVar4 = aVar5;
    } while (!bVar12);
    this_00 = (param_1->Ptr).Object;
    LOCK();
    paVar1 = (atomic<int> *)&(pFVar11->DrawElements).field_0x8;
    *paVar1 = (atomic<int>)((int)*paVar1 + 1);
    UNLOCK();
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pFVar11);
    if (this_00 != (FSlateCachedElementList *)0x0) goto LAB_1424cd4e9;
  }
  bVar12 = ::FDebug::CheckVerifyFailedImpl2
                     ("IsValid()",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                      ,0x458,L"");
  if (bVar12) {
    pcVar3 = (code *)swi(3);
    pFVar7 = (FSlateDrawElement *)(*pcVar3)();
    return pFVar7;
  }
LAB_1424cd4e9:
  iVar6 = *(int *)&(this_00->DrawElements).field_0x148;
  puVar2 = &(this_00->DrawElements).field_0x14c;
  if (iVar6 == *(int *)puVar2) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>::ForAnyElementType>
                      (0x848,(ForAnyElementType *)&(this_00->DrawElements).field_0x138,(int *)puVar2
                      );
  }
  *(int *)&(this_00->DrawElements).field_0x148 = iVar6 + 1;
  pFVar7 = (FSlateDrawElement *)
           (*(longlong *)&(this_00->DrawElements).field_0x138 + (longlong)iVar6 * 0x48);
  DefaultConstructItems<FSlateDrawElement,int>(pFVar7,1);
  pFVar7->bIsCached = '\x01';
  local_res8 = this_00;
  TArray<FSlateCachedElementList_*,TSizedInlineAllocator<50,32,TSizedDefaultAllocator<32>_>_>::
  AddUniqueImpl<FSlateCachedElementList_*>(&this->ListsWithNewData,&local_res8);
  pFVar8 = GetClipStateFromParent(param_2);
  if (pFVar8 != (FSlateClippingState *)0x0) {
    pFVar9 = FindOrAddCachedClipState(this,pFVar8);
    if ((this_00 == (FSlateCachedElementList *)0x0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar12)) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FSlateDrawElement *)(*pcVar3)();
      return pFVar7;
    }
    FSlateCachedElementList::AddCachedClipState(this_00,pFVar9);
    (pFVar7->ClipStateHandle).CachedClipState = (pFVar9->ClippingState).Object;
    (pFVar7->ClipStateHandle).PrecachedClipIndex = -1;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar11);
  return pFVar7;
}

// AddCache @ 1424fc610

FSlateCachedElementsHandle * __thiscall
FSlateCachedElementData::AddCache
          (FSlateCachedElementData *this,FSlateCachedElementsHandle *__return_storage_ptr__,
          SWidget *param_1)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FSlateCachedElementsHandle *pFVar5;
  TReferenceControllerBase<1> *pTVar6;
  FSlateCachedFastPathRenderingData *pFVar7;
  FSlateCachedFastPathRenderingData *pFVar8;
  FScriptContainerElement *pFVar9;
  FSlateCachedElementList *pFVar10;
  FScriptContainerElement *pFVar11;
  undefined1 local_res8 [8];
  FSlateCachedElementList *local_38;
  TReferenceControllerBase<1> *local_30;
  
  iVar4 = (this->CachedElementLists).ArrayNum;
  pFVar9 = (this->CachedElementLists).AllocatorInstance.Data;
  pFVar11 = pFVar9 + (longlong)iVar4 * 0x10;
  while( true ) {
    if ((this->CachedElementLists).ArrayNum != iVar4) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TSharedPtr<FSlateCachedElementList,1>,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar9 == pFVar11) {
      pTVar6 = ::operator_new(0x188);
      if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
        pFVar10 = (FSlateCachedElementList *)&DAT_00000010;
        pTVar6 = (TReferenceControllerBase<1> *)0x0;
      }
      else {
        pTVar6->SharedReferenceCount = (atomic<int>)0x1;
        pTVar6->WeakReferenceCount = (atomic<int>)0x1;
        pTVar6->_padding_ =
             (longlong)
             &
             ___7__TIntrusiveReferenceController_UFSlateCachedElementList___00_SharedPointerInternals__6B_
        ;
        TTuple<TArray<FSlateBoxElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateBoxElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateTextElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateShapedTextElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateSplineElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateLineElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateGradientElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateViewportElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateBoxElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateCustomDrawerElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateCustomVertsElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlatePostProcessElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateRoundedBoxElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateDrawElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>_>
        ::
        TTuple<TArray<FSlateBoxElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateBoxElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateTextElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateShapedTextElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateSplineElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateLineElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateGradientElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateViewportElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateBoxElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateCustomDrawerElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateCustomVertsElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlatePostProcessElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateRoundedBoxElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateDrawElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>_>
                  ((TTuple<TArray<FSlateBoxElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateBoxElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateTextElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateShapedTextElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateSplineElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateLineElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateGradientElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateViewportElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateBoxElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateCustomDrawerElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateCustomVertsElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlatePostProcessElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateRoundedBoxElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>,TArray<FSlateDrawElement,FSlateStatTrackingMemoryAllocator<FDrawElementStatTracker>_>_>
                    *)(pTVar6 + 1));
        pTVar6[0x17]._padding_ = (longlong)param_1;
        pFVar10 = (FSlateCachedElementList *)(pTVar6 + 1);
        pTVar6[0x16]._padding_ = 0;
        pTVar6[0x16].SharedReferenceCount = (atomic<int>)0x0;
        pTVar6[0x16].WeakReferenceCount = (atomic<int>)0x0;
        *(FSlateCachedElementData **)&pTVar6[0x17].SharedReferenceCount = this;
        pTVar6[0x18]._padding_ = 0;
        if ((pFVar10 == (FSlateCachedElementList *)0x0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("InObject != nullptr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x246,L""), bVar3)) {
          pcVar2 = (code *)swi(3);
          pFVar5 = (FSlateCachedElementsHandle *)(*pcVar2)();
          return pFVar5;
        }
      }
      pFVar8 = (FSlateCachedFastPathRenderingData *)0x0;
      pFVar7 = ::operator_new(0x50);
      if (pFVar7 != (FSlateCachedFastPathRenderingData *)0x0) {
        (pFVar7->CachedClipStates).AllocatorInstance.SecondaryData =
             (ForElementType<FSlateCachedClipState>)0x0;
        (pFVar7->CachedClipStates).ArrayNum = 0;
        (pFVar7->CachedClipStates).ArrayMax = 1;
        (pFVar7->Vertices).AllocatorInstance._padding_ = 0;
        (pFVar7->Vertices).AllocatorInstance.AllocatedSize = 0;
        (pFVar7->Vertices).ArrayNum = 0;
        (pFVar7->Vertices).ArrayMax = 0;
        (pFVar7->Indices).AllocatorInstance._padding_ = 0;
        (pFVar7->Indices).AllocatorInstance.AllocatedSize = 0;
        (pFVar7->Indices).ArrayNum = 0;
        (pFVar7->Indices).ArrayMax = 0;
        pFVar8 = pFVar7;
      }
      pFVar10->CachedRenderingData = pFVar8;
      if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
        UNLOCK();
      }
      pFVar9 = (this->CachedElementLists).AllocatorInstance.Data;
      local_38 = pFVar10;
      local_30 = pTVar6;
      if (((pFVar9 <= (FScriptContainerElement *)&local_38) &&
          ((FScriptContainerElement *)&local_38 <
           pFVar9 + (longlong)(this->CachedElementLists).ArrayMax * 0x10)) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        pFVar5 = (FSlateCachedElementsHandle *)(*pcVar2)();
        return pFVar5;
      }
      iVar4 = (this->CachedElementLists).ArrayNum;
      piVar1 = &(this->CachedElementLists).ArrayMax;
      if (iVar4 == *piVar1) {
        iVar4 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&(this->CachedElementLists).AllocatorInstance,piVar1);
      }
      (this->CachedElementLists).ArrayNum = iVar4 + 1;
      pFVar9 = (this->CachedElementLists).AllocatorInstance.Data + (longlong)iVar4 * 0x10;
      *(FSlateCachedElementList **)pFVar9 = local_38;
      *(TReferenceControllerBase<1> **)(pFVar9 + 8) = local_30;
      local_30 = (TReferenceControllerBase<1> *)0x0;
      local_38 = (FSlateCachedElementList *)0x0;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      (__return_storage_ptr__->Ptr).Object = pFVar10;
      (__return_storage_ptr__->Ptr).WeakReferenceCount.ReferenceController = pTVar6;
      if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar6->WeakReferenceCount = (atomic<int>)((int)pTVar6->WeakReferenceCount + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
      return __return_storage_ptr__;
    }
    if ((*(longlong *)pFVar9 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FSlateCachedElementsHandle *)(*pcVar2)();
      return pFVar5;
    }
    if ((*(SWidget **)(*(longlong *)pFVar9 + 0x160) == param_1) &&
       (bVar3 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<5271874907603468730>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Rendering\\DrawElements.cpp"
                           ,0x1ba,"CachedElementList->OwningWidget != Widget"), bVar3)) break;
    pFVar9 = pFVar9 + 0x10;
  }
  pcVar2 = (code *)swi(3);
  pFVar5 = (FSlateCachedElementsHandle *)(*pcVar2)();
  return pFVar5;
}

// AddCachedRenderBatch @ 1424fd3d0

FSlateRenderBatch * __thiscall
FSlateCachedElementData::AddCachedRenderBatch
          (FSlateCachedElementData *this,FSlateRenderBatch *param_1,int *param_2)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined8 uVar4;
  FSlateClippingState *pFVar5;
  ISlateUpdatableInstanceBufferRenderProxy *pIVar6;
  TArray<unsigned_int,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>_> *pTVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  
  if (*(int *)&(this->CachedBatches).field_0x34 == 0) {
    iVar8 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x90,0x10,1,(ForAnyElementType *)this,(int *)&(this->CachedBatches).field_0x8
                       ,(int *)&(this->CachedBatches).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->CachedBatches).field_0x10,true);
    lVar10 = *(longlong *)&this->CachedBatches;
  }
  else {
    iVar8 = TBitArray<FDefaultBitArrayAllocator>::FindAndSetFirstZeroBit
                      ((TBitArray<FDefaultBitArrayAllocator> *)&(this->CachedBatches).field_0x10,0);
    lVar10 = *(longlong *)&this->CachedBatches;
    lVar9 = (longlong)iVar8 * 0x90;
    if (*(int *)&(this->CachedBatches).field_0x30 == iVar8) {
      *(undefined4 *)&(this->CachedBatches).field_0x30 = *(undefined4 *)(lVar9 + 4 + lVar10);
    }
    iVar3 = *(int *)(lVar10 + 4 + lVar9);
    if (-1 < iVar3) {
      *(undefined4 *)(lVar10 + (longlong)iVar3 * 0x90) = *(undefined4 *)(lVar10 + lVar9);
    }
    if (-1 < *(int *)(lVar10 + lVar9)) {
      *(undefined4 *)(lVar10 + 4 + (longlong)*(int *)(lVar10 + lVar9) * 0x90) =
           *(undefined4 *)(lVar10 + 4 + lVar9);
    }
    puVar1 = &(this->CachedBatches).field_0x34;
    *(int *)puVar1 = *(int *)puVar1 + -1;
  }
  puVar2 = (undefined8 *)((longlong)iVar8 * 0x90 + lVar10);
  if (puVar2 != (undefined8 *)0x0) {
    uVar4 = *(undefined8 *)((longlong)&(param_1->ShaderParams).PixelParams.field0_0x0 + 8);
    *puVar2 = *(undefined8 *)&(param_1->ShaderParams).PixelParams.field0_0x0;
    puVar2[1] = uVar4;
    uVar4 = *(undefined8 *)((longlong)&(param_1->ShaderParams).PixelParams2.field0_0x0 + 8);
    puVar2[2] = *(undefined8 *)&(param_1->ShaderParams).PixelParams2.field0_0x0;
    puVar2[3] = uVar4;
    uVar4 = *(undefined8 *)((longlong)&(param_1->ShaderParams).PixelParams3.field0_0x0 + 8);
    puVar2[4] = *(undefined8 *)&(param_1->ShaderParams).PixelParams3.field0_0x0;
    puVar2[5] = uVar4;
    pFVar5 = param_1->ClippingState;
    *(TVector2<float>_u_0 *)(puVar2 + 6) = (param_1->DynamicOffset).field0_0x0;
    puVar2[7] = pFVar5;
    pIVar6 = param_1->InstanceData;
    puVar2[8] = param_1->ShaderResource;
    puVar2[9] = pIVar6;
    pTVar7 = param_1->SourceIndices;
    puVar2[10] = param_1->SourceVertices;
    puVar2[0xb] = pTVar7;
    uVar4 = *(undefined8 *)&param_1->LayerId;
    puVar2[0xc] = param_1->CustomDrawer;
    puVar2[0xd] = uVar4;
    uVar4 = *(undefined8 *)&param_1->NumIndices;
    puVar2[0xe] = *(undefined8 *)&param_1->IndexOffset;
    puVar2[0xf] = uVar4;
    uVar4 = *(undefined8 *)&param_1->DrawFlags;
    puVar2[0x10] = *(undefined8 *)&param_1->InstanceCount;
    puVar2[0x11] = uVar4;
  }
  *param_2 = iVar8;
  return (FSlateRenderBatch *)(*(longlong *)&this->CachedBatches + (longlong)iVar8 * 0x90);
}

// AddReferencedObjects @ 1424ffbb0

void __thiscall
FSlateCachedElementData::AddReferencedObjects
          (FSlateCachedElementData *this,FReferenceCollector *param_1)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  FScriptContainerElement *pFVar9;
  FScriptContainerElement *pFVar10;
  undefined1 local_res8 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  
  uVar1 = (this->CachedElementLists).ArrayNum;
  uVar6 = (ulonglong)(int)uVar1;
  pFVar10 = (this->CachedElementLists).AllocatorInstance.Data;
  pFVar9 = pFVar10 + uVar6 * 0x10;
  while( true ) {
    if ((this->CachedElementLists).ArrayNum != (int)uVar6) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TSharedPtr<FSlateCachedElementList,1>,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar10 == pFVar9) break;
    if (*(longlong *)pFVar10 == 0) {
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
    lVar3 = *(longlong *)pFVar10;
    iVar2 = *(int *)(lVar3 + 0x40);
    lVar7 = *(longlong *)(lVar3 + 0x30);
    lVar8 = (longlong)iVar2 * 200 + lVar7;
    while( true ) {
      if (*(int *)(lVar3 + 0x40) != iVar2) {
        local_res18[0] = 0;
        `TCheckedPointerIterator<FSlateTextElement,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res18);
      }
      if (lVar7 == lVar8) break;
      FSlateFontInfo::AddReferencedObjects((FSlateFontInfo *)(lVar7 + 0x58),param_1);
      lVar7 = lVar7 + 200;
    }
    iVar2 = *(int *)(lVar3 + 0x58);
    lVar7 = *(longlong *)(lVar3 + 0x48);
    lVar8 = (longlong)iVar2 * 0x90 + lVar7;
    while( true ) {
      if (*(int *)(lVar3 + 0x58) != iVar2) {
        local_res20[0] = 0;
        `TCheckedPointerIterator<FSlateShapedTextElement,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res20);
      }
      if (lVar7 == lVar8) break;
      if (*(FShapedGlyphSequence **)(lVar7 + 0x58) != (FShapedGlyphSequence *)0x0) {
        FShapedGlyphSequence::AddReferencedObjects(*(FShapedGlyphSequence **)(lVar7 + 0x58),param_1)
        ;
      }
      if (*(FShapedGlyphSequence **)(lVar7 + 0x78) != (FShapedGlyphSequence *)0x0) {
        FShapedGlyphSequence::AddReferencedObjects(*(FShapedGlyphSequence **)(lVar7 + 0x78),param_1)
        ;
      }
      lVar7 = lVar7 + 0x90;
    }
    uVar6 = (ulonglong)uVar1;
    pFVar10 = pFVar10 + 0x10;
  }
  return;
}

// CleanupUnusedClipStates @ 142503bf0

void __thiscall FSlateCachedElementData::CleanupUnusedClipStates(FSlateCachedElementData *this)

{
  TArray<FSlateCachedClipState,TSizedDefaultAllocator<32>_> *this_00;
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  
  uVar5 = 0;
  if (0 < (this->CachedClipStates).ArrayNum) {
    this_00 = &this->CachedClipStates;
    lVar6 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar5 < (this->CachedClipStates).ArrayNum) {
        uVar4 = ~uVar5 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      lVar1 = *(longlong *)((this_00->AllocatorInstance).Data + lVar6 + 8);
      if ((lVar1 == 0) || (*(int *)(lVar1 + 8) != 1)) {
        uVar5 = uVar5 + 1;
        lVar6 = lVar6 + 0x10;
      }
      else {
        uVar4 = 0;
        if ((int)uVar5 < (this->CachedClipStates).ArrayNum) {
          uVar4 = ~uVar5 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        TArray<FSlateCachedClipState,TSizedDefaultAllocator<32>_>::RemoveAtSwapImpl(this_00,uVar5);
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,&this_00->AllocatorInstance,(this->CachedClipStates).ArrayNum,
                   &(this->CachedClipStates).ArrayMax);
      }
    } while ((int)uVar5 < (this->CachedClipStates).ArrayNum);
  }
  return;
}

// Empty @ 1425083f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FSlateCachedElementData::Empty(FSlateCachedElementData *this)

{
  int *piVar1;
  undefined1 *puVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  undefined1 local_res8 [8];
  
  if (((this->CachedElementLists).ArrayNum != 0) && (5 < (byte)LogSlate._0_1_)) {
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogSlate);
  }
  iVar3 = (this->CachedElementLists).ArrayNum;
  pFVar7 = (this->CachedElementLists).AllocatorInstance.Data;
  pFVar6 = pFVar7 + (longlong)iVar3 * 0x10;
  while( true ) {
    if ((this->CachedElementLists).ArrayNum != iVar3) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TSharedPtr<FSlateCachedElementList,1>,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar7 == pFVar6) break;
    if ((*(longlong *)(pFVar7 + 8) == 0) || (*(int *)(*(longlong *)(pFVar7 + 8) + 8) != 1)) {
      bVar5 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<5271874907603468715>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Rendering\\DrawElements.cpp"
                         ,0x1ab,"CachedElementList.IsUnique()");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pFVar7 = pFVar7 + 0x10;
  }
  DestructItems<TSharedPtr<FSlateCachedElementList,1>,int>
            ((TSharedPtr<FSlateCachedElementList,1> *)
             (this->CachedElementLists).AllocatorInstance.Data,(this->CachedElementLists).ArrayNum);
  piVar1 = &(this->CachedElementLists).ArrayMax;
  (this->CachedElementLists).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,&(this->CachedElementLists).AllocatorInstance,0,piVar1);
  }
  puVar2 = &(this->CachedBatches).field_0xc;
  *(undefined4 *)&(this->CachedBatches).field_0x8 = 0;
  if (*(int *)puVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x90,0x10,0,(ForAnyElementType *)this,0,(int *)puVar2);
  }
  *(undefined4 *)&(this->CachedBatches).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->CachedBatches).field_0x34 = 0;
  iVar3 = *(int *)&(this->CachedBatches).field_0x2c;
  *(undefined4 *)&(this->CachedBatches).field_0x28 = 0;
  if ((iVar3 < 0) || (0x80 < iVar3)) {
    *(undefined4 *)&(this->CachedBatches).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->CachedBatches).field_0x10,0);
  }
  DestructItems<FSlateCachedClipState,int>
            ((FSlateCachedClipState *)(this->CachedClipStates).AllocatorInstance.Data,
             (this->CachedClipStates).ArrayNum);
  piVar1 = &(this->CachedClipStates).ArrayMax;
  (this->CachedClipStates).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,&(this->CachedClipStates).AllocatorInstance,0,piVar1);
  }
  piVar1 = &(this->ListsWithNewData).ArrayMax;
  (this->ListsWithNewData).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<50,32,TSizedDefaultAllocator<32>_>::ForElementType<FSlateCachedElementList_*>_>
              (8,8,0,&(this->ListsWithNewData).AllocatorInstance,0,piVar1);
  }
  return;
}

// FindOrAddCachedClipState @ 14250acd0

FSlateCachedClipState * __thiscall
FSlateCachedElementData::FindOrAddCachedClipState
          (FSlateCachedElementData *this,FSlateClippingState *param_1)

{
  int *piVar1;
  TArray<FSlateCachedClipState,TSizedDefaultAllocator<32>_> *pTVar2;
  undefined8 *puVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FSharedReferencer<1> FVar7;
  FSlateCachedClipState *pFVar8;
  FScriptContainerElement *pFVar9;
  FScriptContainerElement *pFVar10;
  TReferenceControllerBase<1> *pTVar11;
  undefined1 local_res8 [8];
  
  pTVar2 = &this->CachedClipStates;
  iVar6 = (this->CachedClipStates).ArrayNum;
  pFVar9 = (pTVar2->AllocatorInstance).Data;
  pFVar10 = pFVar9 + (longlong)iVar6 * 0x10;
  while( true ) {
    if ((this->CachedClipStates).ArrayNum != iVar6) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FSlateCachedClipState,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar9 == pFVar10) break;
    puVar3 = *(undefined8 **)pFVar9;
    if (*(EClippingFlags *)(puVar3 + 7) == param_1->Flags) {
      if ((((bool)*(char *)((longlong)puVar3 + 0x34) == (param_1->ScissorRect).bIsSet) &&
          (((*(char *)((longlong)puVar3 + 0x34) == '\0' ||
            (bVar5 = FSlateClippingZone::operator==
                               ((FSlateClippingZone *)(puVar3 + 2),
                                &(param_1->ScissorRect).TypedValue), bVar5)) &&
           (*(int *)(puVar3 + 1) == (param_1->StencilQuads).ArrayNum)))) &&
         (bVar5 = CompareItems<FSlateClippingZone,int>
                            ((FSlateClippingZone *)*puVar3,
                             (FSlateClippingZone *)(param_1->StencilQuads).AllocatorInstance.Data,
                             *(int *)(puVar3 + 1)), bVar5)) {
        return (FSlateCachedClipState *)pFVar9;
      }
    }
    pFVar9 = pFVar9 + 0x10;
  }
  FVar7.ReferenceController = ::operator_new(0x58);
  if (FVar7.ReferenceController == (TReferenceControllerBase<1> *)0x0) {
    FVar7.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pTVar11 = (TReferenceControllerBase<1> *)&DAT_00000010;
  }
  else {
    (FVar7.ReferenceController)->SharedReferenceCount = (atomic<int>)0x1;
    (FVar7.ReferenceController)->WeakReferenceCount = (atomic<int>)0x1;
    (FVar7.ReferenceController)->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_VFSlateClippingState___00_SharedPointerInternals__6B_;
    FSlateClippingState::FSlateClippingState
              ((FSlateClippingState *)(FVar7.ReferenceController + 1),param_1);
    pTVar11 = FVar7.ReferenceController + 1;
    if ((pTVar11 == (TReferenceControllerBase<1> *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      pFVar8 = (FSlateCachedClipState *)(*pcVar4)();
      return pFVar8;
    }
  }
  iVar6 = (this->CachedClipStates).ArrayNum;
  piVar1 = &(this->CachedClipStates).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&pTVar2->AllocatorInstance,piVar1);
  }
  pFVar9 = (pTVar2->AllocatorInstance).Data + (longlong)iVar6 * 0x10;
  (this->CachedClipStates).ArrayNum = iVar6 + 1;
  *(TReferenceControllerBase<1> **)pFVar9 = pTVar11;
  *(TReferenceControllerBase<1> **)(pFVar9 + 8) = FVar7.ReferenceController;
  if (FVar7.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar7.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar7.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar7.ReferenceController);
  return (FSlateCachedClipState *)pFVar9;
}

// GetClipStateFromParent @ 14250ca20

FSlateClippingState * __cdecl
FSlateCachedElementData::GetClipStateFromParent(FSlateClippingManager *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FSlateClippingState *pFVar4;
  uint uVar5;
  
  uVar3 = FSlateClippingManager::GetClippingIndex(param_1);
  if (uVar3 == 0xffffffff) {
    return (FSlateClippingState *)0x0;
  }
  uVar5 = 0;
  if ((int)uVar3 < (param_1->ClippingStates).ArrayNum) {
    uVar5 = ~uVar3 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FSlateClippingState *)(*pcVar1)();
      return pFVar4;
    }
  }
  return (FSlateClippingState *)
         ((param_1->ClippingStates).AllocatorInstance.Data + (longlong)(int)uVar3 * 0x48);
}

// RemoveCachedRenderBatches @ 14251b7b0

void __thiscall
FSlateCachedElementData::RemoveCachedRenderBatches
          (FSlateCachedElementData *this,TArray<int,TSizedDefaultAllocator<32>_> *param_1)

{
  longlong lVar1;
  undefined1 *puVar2;
  code *pcVar3;
  byte bVar4;
  FScriptContainerElement *pFVar5;
  bool bVar6;
  int iVar7;
  undefined4 uVar8;
  ulonglong uVar9;
  undefined1 *puVar10;
  int iVar11;
  uint uVar12;
  undefined1 *puVar13;
  FScriptContainerElement *pFVar14;
  undefined1 local_res10 [8];
  uint local_res18;
  FScriptContainerElement *local_res20;
  
  pFVar14 = (param_1->AllocatorInstance).Data;
  local_res18 = param_1->ArrayNum;
  uVar9 = (ulonglong)(int)local_res18;
  local_res20 = pFVar14 + uVar9 * 4;
  while( true ) {
    pFVar5 = local_res20;
    if (param_1->ArrayNum != (int)uVar9) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res10);
    }
    if (pFVar14 == pFVar5) break;
    iVar11 = *(int *)pFVar14;
    puVar13 = &(this->CachedBatches).field_0x10;
    lVar1 = *(longlong *)&this->CachedBatches;
    bVar4 = (byte)iVar11 & 0x1f;
    uVar12 = 1 << bVar4 | 1U >> 0x20 - bVar4;
    if ((iVar11 < 0) || (*(int *)&(this->CachedBatches).field_0x28 <= iVar11)) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index>=0 && Index<NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x5be,L"");
      if (bVar6) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    puVar2 = *(undefined1 **)&(this->CachedBatches).field_0x20;
    puVar10 = puVar13;
    if (puVar2 != (undefined1 *)0x0) {
      puVar10 = puVar2;
    }
    iVar7 = iVar11;
    if (iVar11 < 0) {
      iVar7 = iVar11 + 0x1f;
    }
    if ((*(uint *)(puVar10 + (longlong)(iVar7 >> 5) * 4) & uVar12) == 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("AllocationFlags[Index]",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                         ,0xc5,L"");
      if (bVar6) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    if (*(int *)&(this->CachedBatches).field_0x34 != 0) {
      *(int *)(lVar1 + (longlong)*(int *)&(this->CachedBatches).field_0x30 * 0x90) = iVar11;
    }
    *(undefined4 *)(lVar1 + (longlong)iVar11 * 0x90) = 0xffffffff;
    if (*(int *)&(this->CachedBatches).field_0x34 < 1) {
      uVar8 = 0xffffffff;
    }
    else {
      uVar8 = *(undefined4 *)&(this->CachedBatches).field_0x30;
    }
    *(undefined4 *)(lVar1 + 4 + (longlong)iVar11 * 0x90) = uVar8;
    puVar2 = &(this->CachedBatches).field_0x34;
    *(int *)puVar2 = *(int *)puVar2 + 1;
    *(int *)&(this->CachedBatches).field_0x30 = iVar11;
    if ((iVar11 < 0) || (*(int *)&(this->CachedBatches).field_0x28 <= iVar11)) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index>=0 && Index<NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x5be,L"");
      if (bVar6) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    puVar2 = *(undefined1 **)&(this->CachedBatches).field_0x20;
    if (puVar2 != (undefined1 *)0x0) {
      puVar13 = puVar2;
    }
    if (iVar11 < 0) {
      iVar11 = iVar11 + 0x1f;
    }
    uVar9 = (ulonglong)local_res18;
    *(uint *)(puVar13 + (longlong)(iVar11 >> 5) * 4) =
         *(uint *)(puVar13 + (longlong)(iVar11 >> 5) * 4) & ~uVar12;
    pFVar14 = pFVar14 + 4;
  }
  return;
}

// RemoveList @ 14251bef0

void __thiscall
FSlateCachedElementData::RemoveList
          (FSlateCachedElementData *this,FSlateCachedElementsHandle *param_1)

{
  atomic<int> *paVar1;
  int *piVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  atomic<int> aVar6;
  atomic<int> aVar7;
  uint uVar8;
  int iVar9;
  FSlateCachedElementList *pFVar10;
  FSlateCachedElementList *pFVar11;
  ForElementType<FSlateCachedElementList_*> FVar12;
  uint uVar13;
  FScriptContainerElement *pFVar14;
  ForElementType<FSlateCachedElementList_*> FVar15;
  TArray<FSlateCachedElementList_*,TSizedInlineAllocator<50,32,TSizedDefaultAllocator<32>_>_>
  *pTVar16;
  FSlateCachedElementList *this_00;
  FSlateCachedElementList *pFVar17;
  bool bVar18;
  
  pFVar10 = (FSlateCachedElementList *)(param_1->Ptr).WeakReferenceCount.ReferenceController;
  pFVar11 = (FSlateCachedElementList *)0x0;
  this_00 = pFVar11;
  pFVar17 = pFVar10;
  if (pFVar10 != (FSlateCachedElementList *)0x0) {
    aVar6 = *(atomic<int> *)&(pFVar10->DrawElements).field_0x8;
    do {
      this_00 = (FSlateCachedElementList *)0x0;
      pFVar17 = pFVar11;
      if (aVar6 == (atomic<int>)0x0) goto LAB_14251bf41;
      paVar1 = (atomic<int> *)&(pFVar10->DrawElements).field_0x8;
      LOCK();
      aVar7 = *paVar1;
      bVar18 = aVar6 == aVar7;
      if (bVar18) {
        *paVar1 = (atomic<int>)((int)aVar6 + 1);
        aVar7 = aVar6;
      }
      UNLOCK();
      aVar6 = aVar7;
    } while (!bVar18);
    this_00 = (param_1->Ptr).Object;
    pFVar17 = pFVar10;
  }
LAB_14251bf41:
  pFVar4 = (this->CachedElementLists).AllocatorInstance.Data;
  iVar3 = (this->CachedElementLists).ArrayNum;
  for (pFVar14 = pFVar4; pFVar14 != pFVar4 + (longlong)iVar3 * 0x10; pFVar14 = pFVar14 + 0x10) {
    if (*(FSlateCachedElementList **)pFVar14 == this_00) {
      uVar13 = (uint)((longlong)pFVar14 - (longlong)pFVar4 >> 4);
      if (uVar13 != 0xffffffff) {
        uVar8 = 0;
        if ((int)(uVar13 + 1) <= iVar3) {
          uVar8 = ~uVar13 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x458,
                                L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                               ), bVar18)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        TArray<TSharedPtr<FSlateCachedElementList,1>,TSizedDefaultAllocator<32>_>::RemoveAtSwapImpl
                  (&this->CachedElementLists,uVar13,1);
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,&(this->CachedElementLists).AllocatorInstance,
                   (this->CachedElementLists).ArrayNum,&(this->CachedElementLists).ArrayMax);
      }
      break;
    }
  }
  FVar12 = (this->ListsWithNewData).AllocatorInstance.SecondaryData;
  pTVar16 = &this->ListsWithNewData;
  if (FVar12 == (ForElementType<FSlateCachedElementList_*>)0x0) {
    FVar12 = (ForElementType<FSlateCachedElementList_*>)pTVar16;
  }
  iVar3 = (this->ListsWithNewData).ArrayNum;
  FVar15 = FVar12;
  do {
    if (FVar15 == (ForElementType<FSlateCachedElementList_*>)
                  ((longlong)FVar12 + (longlong)iVar3 * 8)) {
LAB_14251c111:
      if ((this_00 == (FSlateCachedElementList *)0x0) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar18)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      FSlateCachedElementList::DestroyCachedData(this_00);
      pFVar10 = ::operator_new(0x50);
      if (pFVar10 != (FSlateCachedElementList *)0x0) {
        *(ForElementType<FSlateCachedClipState> *)&(pFVar10->DrawElements).field_0x10 =
             (ForElementType<FSlateCachedClipState>)0x0;
        *(int *)&(pFVar10->DrawElements).field_0x18 = 0;
        *(int *)&(pFVar10->DrawElements).field_0x1c = 1;
        (((TArray<FSlateVertex,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>_> *)
         &(pFVar10->DrawElements).field_0x20)->AllocatorInstance)._padding_ = 0;
        *(int *)&(pFVar10->DrawElements).field_0x28 = 0;
        *(undefined8 *)&(pFVar10->DrawElements).field_0x30 = 0;
        (((TArray<unsigned_int,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>_> *)
         &(pFVar10->DrawElements).field_0x38)->AllocatorInstance)._padding_ = 0;
        *(int *)&(pFVar10->DrawElements).field_0x40 = 0;
        *(undefined8 *)&(pFVar10->DrawElements).field_0x48 = 0;
        pFVar11 = pFVar10;
      }
      this_00->CachedRenderingData = (FSlateCachedFastPathRenderingData *)pFVar11;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)pFVar17);
      return;
    }
    if (*(FSlateCachedElementList **)FVar15 == this_00) {
      uVar13 = (uint)((longlong)FVar15 - (longlong)FVar12 >> 3);
      if (uVar13 != 0xffffffff) {
        uVar8 = 0;
        if ((int)(uVar13 + 1) <= iVar3) {
          uVar8 = ~uVar13 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x458,
                                L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                               ), bVar18)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        FVar12 = (this->ListsWithNewData).AllocatorInstance.SecondaryData;
        iVar3 = (this->ListsWithNewData).ArrayNum;
        if (FVar12 == (ForElementType<FSlateCachedElementList_*>)0x0) {
          FVar12 = (ForElementType<FSlateCachedElementList_*>)pTVar16;
        }
        iVar9 = iVar3 + ~uVar13;
        if (1 < iVar9) {
          iVar9 = 1;
        }
        if (iVar9 != 0) {
          memmove((void *)((longlong)FVar12 + (longlong)(int)uVar13 * 8),
                  (void *)((longlong)FVar12 + (longlong)(iVar3 - iVar9) * 8),(longlong)iVar9 << 3);
        }
        piVar2 = &(this->ListsWithNewData).ArrayNum;
        *piVar2 = *piVar2 + -1;
        UE::Core::Private::
        ReallocShrink<2,TSizedInlineAllocator<50,32,TSizedDefaultAllocator<32>_>::ForElementType<FSlateCachedElementList_*>_>
                  (8,8,&pTVar16->AllocatorInstance,(this->ListsWithNewData).ArrayNum,
                   &(this->ListsWithNewData).ArrayMax);
      }
      goto LAB_14251c111;
    }
    FVar15 = (ForElementType<FSlateCachedElementList_*>)((longlong)FVar15 + 8);
  } while( true );
}

// ValidateWidgetOwner @ 142524310

void __thiscall
FSlateCachedElementData::ValidateWidgetOwner
          (FSlateCachedElementData *this,TSharedPtr<FSlateCachedElementList,1> *param_1,
          SWidget *param_2)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

