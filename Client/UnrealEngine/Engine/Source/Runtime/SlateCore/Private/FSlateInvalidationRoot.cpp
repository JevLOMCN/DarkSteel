// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 38

// FSlateInvalidationRoot @ 14242d620

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

FSlateInvalidationRoot * __thiscall
FSlateInvalidationRoot::FSlateInvalidationRoot(FSlateInvalidationRoot *this)

{
  TUniquePtr<FSlateInvalidationWidgetList,TDefaultDelete<FSlateInvalidationWidgetList>_> *pTVar1;
  TUniquePtr<FSlateInvalidationWidgetPreHeap,TDefaultDelete<FSlateInvalidationWidgetPreHeap>_>
  *pTVar2;
  TUniquePtr<FSlateInvalidationWidgetPrepassHeap,TDefaultDelete<FSlateInvalidationWidgetPrepassHeap>_>
  *pTVar3;
  TUniquePtr<FSlateInvalidationWidgetPostHeap,TDefaultDelete<FSlateInvalidationWidgetPostHeap>_>
  *pTVar4;
  int iVar5;
  void *pvVar6;
  ForElementType<FSlateInvalidationWidgetHeapElement> FVar7;
  code *pcVar8;
  undefined8 uVar9;
  TArray<FSlateInvalidationWidgetHeapElement,TSizedInlineAllocator<100,32,TSizedDefaultAllocator<32>_>_>
  *pTVar10;
  bool bVar11;
  FSlateInvalidationWidgetPostHeap *pFVar12;
  FSlateInvalidationRoot *pFVar13;
  FSlateApplicationBase *pFVar14;
  FSlateInvalidationWidgetList *pFVar15;
  FSlateInvalidationWidgetPostHeap *pFVar16;
  longlong lVar17;
  FSlateInvalidationWidgetPostHeap *pFVar18;
  TPairInitializer<int_const_&,FSlateInvalidationRoot_*_const_&> local_res8;
  uint uStack_9c;
  FArguments local_98;
  bool local_88 [8];
  FSlateInvalidationRoot ***local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  code *local_58;
  longlong lStack_50;
  FSlateInvalidationRootHandle local_48;
  
  *(undefined2 *)&this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FGCObject__6B_;
  FGCObject::RegisterGCObject((FGCObject *)this);
  pFVar18 = (FSlateInvalidationWidgetPostHeap *)0x0;
  this->_padding_ = (longlong)&___7FSlateInvalidationRoot__6B_;
  pTVar1 = &this->FastWidgetPathList;
  pTVar2 = &this->WidgetsNeedingPreUpdate;
  pTVar1->Ptr = (FSlateInvalidationWidgetList *)0x0;
  pTVar3 = &this->WidgetsNeedingPrepassUpdate;
  pTVar2->Ptr = (FSlateInvalidationWidgetPreHeap *)0x0;
  pTVar4 = &this->WidgetsNeedingPostUpdate;
  pTVar3->Ptr = (FSlateInvalidationWidgetPrepassHeap *)0x0;
  pTVar4->Ptr = (FSlateInvalidationWidgetPostHeap *)0x0;
  (this->FinalUpdateList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FinalUpdateList).ArrayNum = 0;
  (this->FinalUpdateList).ArrayMax = 0;
  (this->CachedViewOffset).field0_0x0 = (TVector2<float>_u_0)0x0;
  pFVar12 = ::operator_new(0x1f8);
  pFVar16 = pFVar18;
  if (pFVar12 != (FSlateInvalidationWidgetPostHeap *)0x0) {
    (pFVar12->Heap).AllocatorInstance.InlineData[0] = '\0';
    (pFVar12->Heap).AllocatorInstance.InlineData[1] = '\0';
    (pFVar12->Heap).AllocatorInstance.InlineData[2] = '\0';
    (pFVar12->Heap).AllocatorInstance.InlineData[3] = '\0';
    (pFVar12->Heap).AllocatorInstance.InlineData[4] = '\0';
    (pFVar12->Heap).AllocatorInstance.InlineData[5] = '\0';
    (pFVar12->Heap).AllocatorInstance.InlineData[6] = '\0';
    (pFVar12->Heap).AllocatorInstance.InlineData[7] = '\0';
    pTVar10 = &pFVar12->Heap;
    (pTVar10->AllocatorInstance).InlineData[8] = '\0';
    (pTVar10->AllocatorInstance).InlineData[9] = '\0';
    (pTVar10->AllocatorInstance).InlineData[10] = '\0';
    (pTVar10->AllocatorInstance).InlineData[0xb] = '\0';
    (pTVar10->AllocatorInstance).InlineData[0xc] = '\0';
    (pTVar10->AllocatorInstance).InlineData[0xd] = '\0';
    (pTVar10->AllocatorInstance).InlineData[0xe] = '\0';
    (pTVar10->AllocatorInstance).InlineData[0xf] = '\0';
    pTVar10 = &pFVar12->Heap;
    (pTVar10->AllocatorInstance).InlineData[0x20] = '\0';
    (pTVar10->AllocatorInstance).InlineData[0x21] = '\0';
    (pTVar10->AllocatorInstance).InlineData[0x22] = '\0';
    (pTVar10->AllocatorInstance).InlineData[0x23] = '\0';
    (pTVar10->AllocatorInstance).InlineData[0x24] = '\0';
    (pTVar10->AllocatorInstance).InlineData[0x25] = '\0';
    (pTVar10->AllocatorInstance).InlineData[0x26] = '\0';
    (pTVar10->AllocatorInstance).InlineData[0x27] = '\0';
    pTVar10 = &pFVar12->Heap;
    (pTVar10->AllocatorInstance).InlineData[0x28] = '\0';
    (pTVar10->AllocatorInstance).InlineData[0x29] = '\0';
    (pTVar10->AllocatorInstance).InlineData[0x2a] = '\0';
    (pTVar10->AllocatorInstance).InlineData[0x2b] = '\0';
    pTVar10 = &pFVar12->Heap;
    (pTVar10->AllocatorInstance).InlineData[0x2c] = 0x80;
    (pTVar10->AllocatorInstance).InlineData[0x2d] = '\0';
    (pTVar10->AllocatorInstance).InlineData[0x2e] = '\0';
    (pTVar10->AllocatorInstance).InlineData[0x2f] = '\0';
    pTVar10 = &pFVar12->Heap;
    (pTVar10->AllocatorInstance).InlineData[0x30] = 0xff;
    (pTVar10->AllocatorInstance).InlineData[0x31] = 0xff;
    (pTVar10->AllocatorInstance).InlineData[0x32] = 0xff;
    (pTVar10->AllocatorInstance).InlineData[0x33] = 0xff;
    pTVar10 = &pFVar12->Heap;
    (pTVar10->AllocatorInstance).InlineData[0x34] = '\0';
    (pTVar10->AllocatorInstance).InlineData[0x35] = '\0';
    (pTVar10->AllocatorInstance).InlineData[0x36] = '\0';
    (pTVar10->AllocatorInstance).InlineData[0x37] = '\0';
    pTVar10 = &pFVar12->Heap;
    (pTVar10->AllocatorInstance).InlineData[0x38] = '\0';
    (pTVar10->AllocatorInstance).InlineData[0x39] = '\0';
    (pTVar10->AllocatorInstance).InlineData[0x3a] = '\0';
    (pTVar10->AllocatorInstance).InlineData[0x3b] = '\0';
    (pTVar10->AllocatorInstance).InlineData[0x3c] = '\0';
    (pTVar10->AllocatorInstance).InlineData[0x3d] = '\0';
    (pTVar10->AllocatorInstance).InlineData[0x3e] = '\0';
    (pTVar10->AllocatorInstance).InlineData[0x3f] = '\0';
    pTVar10 = &pFVar12->Heap;
    (pTVar10->AllocatorInstance).InlineData[0x40] = '\0';
    (pTVar10->AllocatorInstance).InlineData[0x41] = '\0';
    (pTVar10->AllocatorInstance).InlineData[0x42] = '\0';
    (pTVar10->AllocatorInstance).InlineData[0x43] = '\0';
    (pTVar10->AllocatorInstance).InlineData[0x44] = '\0';
    (pTVar10->AllocatorInstance).InlineData[0x45] = '\0';
    (pTVar10->AllocatorInstance).InlineData[0x46] = '\0';
    (pTVar10->AllocatorInstance).InlineData[0x47] = '\0';
    *(undefined8 *)((pFVar12->Heap).AllocatorInstance.InlineData + 0x1d8) = 0;
    *(undefined4 *)((pFVar12->Heap).AllocatorInstance.InlineData + 0x1e0) = 0;
    *(undefined4 *)((pFVar12->Heap).AllocatorInstance.InlineData + 0x1e4) = 0x32;
    *(undefined8 *)((pFVar12->Heap).AllocatorInstance.InlineData + 0x1e8) = 0;
    *(undefined8 *)((pFVar12->Heap).AllocatorInstance.InlineData + 0x1f0) = 0;
    pFVar16 = pFVar12;
  }
  this->CachedElementData = (FSlateCachedElementData *)pFVar16;
  this->InvalidationRootWidget = (SWidget *)0x0;
  this->RootHittestGrid = (FHittestGrid *)0x0;
  this->CachedMaxLayerId = 0;
  (this->InvalidationRootHandle).InvalidationRoot = (FSlateInvalidationRoot *)0x0;
  (this->InvalidationRootHandle).UniqueId = -1;
  this->bNeedsSlowPath = true;
  this->bNeedScreenPositionShift = false;
  this->bProcessingPreUpdate = false;
  this->bProcessingAttributeUpdate = false;
  this->bProcessingPrepassUpdate = false;
  this->bProcessingPostUpdate = false;
  this->bBuildingWidgetList = false;
  this->bProcessingChildOrderInvalidation = false;
  this->LastPaintType = None;
  (this->PerformanceStat).WidgetsPreUpdate = 0.0;
  (this->PerformanceStat).WidgetsAttribute = 0.0;
  (this->PerformanceStat).WidgetsPrepass = 0.0;
  (this->PerformanceStat).WidgetsUpdate = 0.0;
  (this->PerformanceStat).InvalidationProcessing = 0.0;
  GSlateInvalidationRootListInstance.GenerationNumber =
       GSlateInvalidationRootListInstance.GenerationNumber + 1;
  local_res8.Value = (FSlateInvalidationRoot **)this;
  if ((GSlateInvalidationRootListInstance.GenerationNumber == -1) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("GenerationNumber != INDEX_NONE",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\FastUpdate\\SlateInvalidationRootList.h"
                          ,0x12,L""), bVar11)) {
    pcVar8 = (code *)swi(3);
    pFVar13 = (FSlateInvalidationRoot *)(*pcVar8)();
    return pFVar13;
  }
  local_88[0] = true;
  local_88[1] = true;
  local_88[2] = true;
  local_88[3] = true;
  local_88[4] = true;
  local_88[5] = false;
  local_88[6] = false;
  local_88[7] = false;
  local_80 = &local_res8.Value;
  TSet<TTuple<int,FSlateInvalidationRoot_*>,TDefaultMapHashableKeyFuncs<int,FSlateInvalidationRoot_*,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<int_const_&,FSlateInvalidationRoot_*_const_&>_>
            ((TSet<TTuple<int,FSlateInvalidationRoot_*>,TDefaultMapHashableKeyFuncs<int,FSlateInvalidationRoot_*,0>,FDefaultSetAllocator>
              *)&GSlateInvalidationRootListInstance,&local_res8,local_88);
  pFVar16 = pFVar18;
  if ((GSlateInvalidationRootListInstance.GenerationNumber != -1) &&
     (GSlateInvalidationRootListInstance.InvalidationRoots._8_4_ !=
      GSlateInvalidationRootListInstance.InvalidationRoots._52_4_)) {
    lVar17 = 0x154ba6198;
    if (GSlateInvalidationRootListInstance.InvalidationRoots._64_8_ != 0) {
      lVar17 = GSlateInvalidationRootListInstance.InvalidationRoots._64_8_;
    }
    iVar5 = *(int *)(lVar17 + (ulonglong)
                              (GSlateInvalidationRootListInstance.InvalidationRoots._72_4_ - 1 &
                              GSlateInvalidationRootListInstance.GenerationNumber) * 4);
    while (iVar5 != -1) {
      lVar17 = GSlateInvalidationRootListInstance.InvalidationRoots._0_8_ + (longlong)iVar5 * 0x18;
      if (*(int *)(GSlateInvalidationRootListInstance.InvalidationRoots._0_8_ +
                  (longlong)iVar5 * 0x18) == GSlateInvalidationRootListInstance.GenerationNumber) {
        pFVar12 = (FSlateInvalidationWidgetPostHeap *)(lVar17 + 8);
        if (lVar17 == 0) {
          pFVar12 = pFVar18;
        }
        if (pFVar12 != (FSlateInvalidationWidgetPostHeap *)0x0) {
          pFVar16 = *(FSlateInvalidationWidgetPostHeap **)
                     (pFVar12->Heap).AllocatorInstance.InlineData;
        }
        break;
      }
      iVar5 = *(int *)(lVar17 + 0x10);
    }
  }
  uVar9 = CONCAT44(uStack_9c,GSlateInvalidationRootListInstance.GenerationNumber);
  (this->InvalidationRootHandle).InvalidationRoot = (FSlateInvalidationRoot *)pFVar16;
  *(undefined8 *)&(this->InvalidationRootHandle).UniqueId = uVar9;
  lStack_50 = (ulonglong)uStack_9c << 0x20;
  local_58 = HandleInvalidateAllWidgets;
  pFVar14 = FSlateApplicationBase::Get();
  TMulticastDelegateRegistration<void___cdecl(bool),FDefaultDelegateUserPolicy>::
  AddRaw<FSlateInvalidationRoot>
            ((TMulticastDelegateRegistration<void___cdecl(bool),FDefaultDelegateUserPolicy> *)
             &pFVar14->OnInvalidateAllWidgetsEvent,(FSlateInvalidationRoot *)&stack0x00000018,
             (pmf_4b45c14d *)this);
  local_98.PreferedElementsNum = GSlateInvalidationWidgetListMaxArrayElements;
  local_98.NumberElementsLeftBeforeSplitting =
       GSlateInvalidationWidgetListNumberElementLeftBeforeSplitting;
  local_98.SortOrderPaddingBetweenArray = 1000;
  local_98.bAssignedWidgetIndex = true;
  pFVar15 = ::operator_new(0x80);
  pFVar16 = pFVar18;
  if (pFVar15 != (FSlateInvalidationWidgetList *)0x0) {
    local_48.InvalidationRoot = (this->InvalidationRootHandle).InvalidationRoot;
    local_48.UniqueId = (this->InvalidationRootHandle).UniqueId;
    local_48._12_4_ = *(undefined4 *)&(this->InvalidationRootHandle).field_0xc;
    pFVar16 = (FSlateInvalidationWidgetPostHeap *)
              FSlateInvalidationWidgetList::FSlateInvalidationWidgetList
                        (pFVar15,&local_48,&local_98);
  }
  if (pTVar1 == (TUniquePtr<FSlateInvalidationWidgetList,TDefaultDelete<FSlateInvalidationWidgetList>_>
                 *)&local_78) {
    if (pFVar16 != (FSlateInvalidationWidgetPostHeap *)0x0) {
      FSlateInvalidationWidgetList::~FSlateInvalidationWidgetList
                ((FSlateInvalidationWidgetList *)pFVar16);
      goto LAB_14242d911;
    }
  }
  else {
    pFVar12 = (FSlateInvalidationWidgetPostHeap *)pTVar1->Ptr;
    pTVar1->Ptr = (FSlateInvalidationWidgetList *)pFVar16;
    if (pFVar12 != (FSlateInvalidationWidgetPostHeap *)0x0) {
      FSlateInvalidationWidgetList::~FSlateInvalidationWidgetList
                ((FSlateInvalidationWidgetList *)pFVar12);
      pFVar16 = pFVar12;
LAB_14242d911:
      ::operator_delete(pFVar16,0x80);
    }
  }
  pFVar15 = pTVar1->Ptr;
  pFVar12 = ::operator_new(0x118);
  pFVar16 = pFVar18;
  if (pFVar12 != (FSlateInvalidationWidgetPostHeap *)0x0) {
    *(undefined8 *)
     &((ForElementType<FSlateInvalidationWidgetHeapElement> *)
      ((pFVar12->Heap).AllocatorInstance.InlineData + 0x100))->field_0x0 = 0;
    *(undefined4 *)((pFVar12->Heap).AllocatorInstance.InlineData + 0x108) = 0;
    *(undefined4 *)((pFVar12->Heap).AllocatorInstance.InlineData + 0x10c) = 0x20;
    *(FSlateInvalidationWidgetList **)
     ((longlong)(pFVar12->Heap).AllocatorInstance.InlineData + 0x110) = pFVar15;
    pFVar16 = pFVar12;
  }
  if (pTVar2 == (TUniquePtr<FSlateInvalidationWidgetPreHeap,TDefaultDelete<FSlateInvalidationWidgetPreHeap>_>
                 *)&local_70) {
    if (pFVar16 != (FSlateInvalidationWidgetPostHeap *)0x0) {
      pvVar6 = *(void **)&((ForElementType<FSlateInvalidationWidgetHeapElement> *)
                          ((pFVar16->Heap).AllocatorInstance.InlineData + 0x100))->field_0x0;
      pFVar12 = pFVar16;
      if (pvVar6 != (void *)0x0) {
        FMemory::Free(pvVar6);
      }
      goto LAB_14242d998;
    }
  }
  else {
    pFVar12 = (FSlateInvalidationWidgetPostHeap *)pTVar2->Ptr;
    pTVar2->Ptr = (FSlateInvalidationWidgetPreHeap *)pFVar16;
    if (pFVar12 != (FSlateInvalidationWidgetPostHeap *)0x0) {
      pvVar6 = *(void **)&((ForElementType<FSlateInvalidationWidgetHeapElement> *)
                          ((pFVar12->Heap).AllocatorInstance.InlineData + 0x100))->field_0x0;
      if (pvVar6 != (void *)0x0) {
        FMemory::Free(pvVar6);
      }
LAB_14242d998:
      ::operator_delete(pFVar12,0x118);
    }
  }
  pFVar15 = pTVar1->Ptr;
  pFVar12 = ::operator_new(0x120);
  pFVar16 = pFVar18;
  if (pFVar12 != (FSlateInvalidationWidgetPostHeap *)0x0) {
    *(undefined8 *)
     &((ForElementType<FSlateInvalidationWidgetHeapElement> *)
      ((pFVar12->Heap).AllocatorInstance.InlineData + 0x100))->field_0x0 = 0;
    *(undefined4 *)((pFVar12->Heap).AllocatorInstance.InlineData + 0x108) = 0;
    *(undefined4 *)((pFVar12->Heap).AllocatorInstance.InlineData + 0x10c) = 0x20;
    *(FSlateInvalidationWidgetList **)
     ((longlong)(pFVar12->Heap).AllocatorInstance.InlineData + 0x110) = pFVar15;
    *(undefined1 *)((longlong)(pFVar12->Heap).AllocatorInstance.InlineData + 0x118) = 0;
    pFVar16 = pFVar12;
  }
  if (pTVar3 == (TUniquePtr<FSlateInvalidationWidgetPrepassHeap,TDefaultDelete<FSlateInvalidationWidgetPrepassHeap>_>
                 *)&local_68) {
    if (pFVar16 != (FSlateInvalidationWidgetPostHeap *)0x0) {
      pvVar6 = *(void **)&((ForElementType<FSlateInvalidationWidgetHeapElement> *)
                          ((pFVar16->Heap).AllocatorInstance.InlineData + 0x100))->field_0x0;
      pFVar12 = pFVar16;
      if (pvVar6 != (void *)0x0) {
        FMemory::Free(pvVar6);
      }
      goto LAB_14242da28;
    }
  }
  else {
    pFVar12 = (FSlateInvalidationWidgetPostHeap *)pTVar3->Ptr;
    pTVar3->Ptr = (FSlateInvalidationWidgetPrepassHeap *)pFVar16;
    if (pFVar12 != (FSlateInvalidationWidgetPostHeap *)0x0) {
      pvVar6 = *(void **)&((ForElementType<FSlateInvalidationWidgetHeapElement> *)
                          ((pFVar12->Heap).AllocatorInstance.InlineData + 0x100))->field_0x0;
      if (pvVar6 != (void *)0x0) {
        FMemory::Free(pvVar6);
      }
LAB_14242da28:
      ::operator_delete(pFVar12,0x120);
    }
  }
  pFVar15 = pTVar1->Ptr;
  pFVar16 = ::operator_new(0x340);
  if (pFVar16 != (FSlateInvalidationWidgetPostHeap *)0x0) {
    (pFVar16->Heap).AllocatorInstance.SecondaryData =
         (ForElementType<FSlateInvalidationWidgetHeapElement>)0x0;
    (pFVar16->Heap).ArrayNum = 0;
    (pFVar16->Heap).ArrayMax = 100;
    pFVar16->OwnerList = pFVar15;
    pFVar16->WidgetCannotBeAdded = FSlateInvalidationWidgetIndex::Invalid;
    pFVar16->bIsHeap = false;
    pFVar18 = pFVar16;
  }
  if (pTVar4 == (TUniquePtr<FSlateInvalidationWidgetPostHeap,TDefaultDelete<FSlateInvalidationWidgetPostHeap>_>
                 *)&local_60) {
    if (pFVar18 == (FSlateInvalidationWidgetPostHeap *)0x0) goto LAB_14242dace;
    FVar7 = (pFVar18->Heap).AllocatorInstance.SecondaryData;
    pFVar16 = pFVar18;
    if (FVar7 != (ForElementType<FSlateInvalidationWidgetHeapElement>)0x0) {
      FMemory::Free((void *)FVar7);
    }
  }
  else {
    pFVar16 = pTVar4->Ptr;
    pTVar4->Ptr = pFVar18;
    if (pFVar16 == (FSlateInvalidationWidgetPostHeap *)0x0) goto LAB_14242dace;
    FVar7 = (pFVar16->Heap).AllocatorInstance.SecondaryData;
    if (FVar7 != (ForElementType<FSlateInvalidationWidgetHeapElement>)0x0) {
      FMemory::Free((void *)FVar7);
    }
  }
  ::operator_delete(pFVar16,0x340);
LAB_14242dace:
  this->LastPaintType = None;
  return this;
}

// ~FSlateInvalidationRoot @ 14242f320

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall FSlateInvalidationRoot::~FSlateInvalidationRoot(FSlateInvalidationRoot *this)

{
  FSlateRenderer *pFVar1;
  FSlateCachedElementData *this_00;
  ForElementType<FSlateCachedElementList_*> FVar2;
  FScriptContainerElement *pFVar3;
  FSlateInvalidationWidgetPostHeap *pFVar4;
  ForElementType<FSlateInvalidationWidgetHeapElement> FVar5;
  FSlateInvalidationWidgetPrepassHeap *pFVar6;
  FSlateInvalidationWidgetPreHeap *pFVar7;
  FSlateInvalidationWidgetList *this_01;
  FSlateApplicationBase *pFVar8;
  uint local_res8 [2];
  
  this->_padding_ = (longlong)&___7FSlateInvalidationRoot__6B_;
  ClearAllFastPathData(this,true);
  if (FSlateApplicationBase::CurrentBaseApplication.Object == (FSlateApplicationBase *)0x0) {
    this_00 = this->CachedElementData;
    if (this_00 != (FSlateCachedElementData *)0x0) {
      DestructItems<FSlateCachedClipState,int>
                ((FSlateCachedClipState *)(this_00->CachedClipStates).AllocatorInstance.Data,
                 (this_00->CachedClipStates).ArrayNum);
      pFVar3 = (this_00->CachedClipStates).AllocatorInstance.Data;
      if (pFVar3 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar3);
      }
      FVar2 = (this_00->ListsWithNewData).AllocatorInstance.SecondaryData;
      if (FVar2 != (ForElementType<FSlateCachedElementList_*>)0x0) {
        FMemory::Free((void *)FVar2);
      }
      DestructItems<TSharedPtr<FSlateCachedElementList,1>,int>
                ((TSharedPtr<FSlateCachedElementList,1> *)
                 (this_00->CachedElementLists).AllocatorInstance.Data,
                 (this_00->CachedElementLists).ArrayNum);
      pFVar3 = (this_00->CachedElementLists).AllocatorInstance.Data;
      if (pFVar3 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar3);
      }
      TSparseArray<FSlateRenderBatch,FDefaultSparseArrayAllocator>::
      ~TSparseArray<FSlateRenderBatch,FDefaultSparseArrayAllocator>(&this_00->CachedBatches);
      ::operator_delete(this_00,0x1f8);
    }
  }
  else {
    pFVar8 = FSlateApplicationBase::Get();
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pFVar8->OnInvalidateAllWidgetsEvent,this);
    pFVar8 = FSlateApplicationBase::Get();
    pFVar1 = (pFVar8->Renderer).Object;
    (**(code **)(pFVar1->_padding_ + 400))(pFVar1,this->CachedElementData);
  }
  local_res8[0] = (this->InvalidationRootHandle).UniqueId;
  if (GSlateInvalidationRootListInstance.InvalidationRoots._8_4_ !=
      GSlateInvalidationRootListInstance.InvalidationRoots._52_4_) {
    TSet<TTuple<int,FSlateInvalidationRoot_*>,TDefaultMapHashableKeyFuncs<int,FSlateInvalidationRoot_*,0>,FDefaultSetAllocator>
    ::RemoveImpl<int>((TSet<TTuple<int,FSlateInvalidationRoot_*>,TDefaultMapHashableKeyFuncs<int,FSlateInvalidationRoot_*,0>,FDefaultSetAllocator>
                       *)&GSlateInvalidationRootListInstance,local_res8[0],(int *)local_res8);
  }
  pFVar3 = (this->FinalUpdateList).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar4 = (this->WidgetsNeedingPostUpdate).Ptr;
  if (pFVar4 != (FSlateInvalidationWidgetPostHeap *)0x0) {
    FVar5 = (pFVar4->Heap).AllocatorInstance.SecondaryData;
    if (FVar5 != (ForElementType<FSlateInvalidationWidgetHeapElement>)0x0) {
      FMemory::Free((void *)FVar5);
    }
    ::operator_delete(pFVar4,0x340);
  }
  pFVar6 = (this->WidgetsNeedingPrepassUpdate).Ptr;
  if (pFVar6 != (FSlateInvalidationWidgetPrepassHeap *)0x0) {
    FVar5 = (pFVar6->Heap).AllocatorInstance.SecondaryData;
    if (FVar5 != (ForElementType<FSlateInvalidationWidgetHeapElement>)0x0) {
      FMemory::Free((void *)FVar5);
    }
    ::operator_delete(pFVar6,0x120);
  }
  pFVar7 = (this->WidgetsNeedingPreUpdate).Ptr;
  if (pFVar7 != (FSlateInvalidationWidgetPreHeap *)0x0) {
    FVar5 = (pFVar7->Heap).AllocatorInstance.SecondaryData;
    if (FVar5 != (ForElementType<FSlateInvalidationWidgetHeapElement>)0x0) {
      FMemory::Free((void *)FVar5);
    }
    ::operator_delete(pFVar7,0x118);
  }
  this_01 = (this->FastWidgetPathList).Ptr;
  if (this_01 != (FSlateInvalidationWidgetList *)0x0) {
    FSlateInvalidationWidgetList::~FSlateInvalidationWidgetList(this_01);
    ::operator_delete(this_01,0x80);
  }
  this->_padding_ = (longlong)&___7FGCObject__6B_;
  FGCObject::UnregisterGCObject((FGCObject *)this);
  return;
}

// AddReferencedObjects @ 142432e90

void __thiscall
FSlateInvalidationRoot::AddReferencedObjects
          (FSlateInvalidationRoot *this,FReferenceCollector *param_1)

{
  FSlateCachedElementData::AddReferencedObjects(this->CachedElementData,param_1);
  return;
}

// AdjustWidgetsDesktopGeometry @ 142433390

void __thiscall
FSlateInvalidationRoot::AdjustWidgetsDesktopGeometry
          (FSlateInvalidationRoot *this,FDeprecateVector2DParameter param_1)

{
  undefined4 uVar1;
  FSlateInvalidationWidgetList *pFVar2;
  longlong lVar3;
  longlong lVar4;
  code *pcVar5;
  float fVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  float local_c8;
  float fStack_c4;
  float local_b4;
  float fStack_b0;
  TTransform2<float> local_a0;
  TTransform2<float> local_88 [4];
  
  fVar6 = __real_3f800000;
  pFVar2 = (this->FastWidgetPathList).Ptr;
  iVar8 = pFVar2->FirstArrayIndex;
  if (iVar8 != -1) {
    fStack_b0 = param_1._4_4_;
    local_b4 = param_1._0_4_;
    do {
      lVar3 = *(longlong *)&pFVar2->Data;
      lVar14 = (longlong)iVar8 * 0x40;
      uVar11 = (ulonglong)*(ushort *)(lVar14 + 0xc + lVar3);
      lVar12 = (longlong)*(int *)(lVar14 + 0x18 + lVar3);
      if ((longlong)uVar11 < lVar12) {
        lVar13 = uVar11 * 0x18;
        lVar12 = lVar12 - uVar11;
        do {
          uVar10 = (uint)uVar11;
          uVar9 = 0;
          if ((int)uVar10 < *(int *)(lVar14 + 0x18 + lVar3)) {
            uVar9 = ~uVar10 >> 0x1f;
          }
          if ((uVar9 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          lVar4 = *(longlong *)(lVar13 + *(longlong *)(lVar14 + 0x10 + lVar3));
          if (lVar4 != 0) {
            FGeometry::operator=((FGeometry *)(lVar4 + 0xd8),(FGeometry *)(lVar4 + 0xa0));
            uVar1 = *(undefined4 *)(lVar4 + 0xe0);
            local_c8 = (float)*(undefined8 *)(lVar4 + 0xe4);
            fStack_c4 = (float)((ulonglong)*(undefined8 *)(lVar4 + 0xe4) >> 0x20);
            local_a0.M.M[0][1] = 0.0;
            local_a0.M.M[1][0] = 0.0;
            local_a0.M.M[0][0] = fVar6;
            local_a0.M.M[1][1] = fVar6;
            local_a0.Trans.field0_0x0 = (TVector2<float>_u_0)param_1;
            Concatenate<TTransform2<float>_>
                      (local_88,(TTransform2<float> *)(lVar4 + 0xf4),&local_a0);
            *(float (*) [2])(lVar4 + 0xf4) = local_88[0].M.M[0];
            *(float (*) [2])(lVar4 + 0xfc) = local_88[0].M.M[1];
            *(ulonglong *)(lVar4 + 0xe4) =
                 CONCAT44(fStack_c4 * fVar6 + fStack_b0,local_c8 * fVar6 + local_b4);
            *(TVector2<float>_u_0 *)(lVar4 + 0x104) = local_88[0].Trans.field0_0x0;
            *(undefined4 *)(lVar4 + 0xe0) = uVar1;
          }
          uVar11 = (ulonglong)(uVar10 + 1);
          lVar13 = lVar13 + 0x18;
          lVar12 = lVar12 + -1;
        } while (lVar12 != 0);
      }
      iVar8 = *(int *)(*(longlong *)&pFVar2->Data + 4 + lVar14);
    } while (iVar8 != -1);
  }
  return;
}

// Advanced_ResetInvalidation @ 1424335d0

void __thiscall
FSlateInvalidationRoot::Advanced_ResetInvalidation(FSlateInvalidationRoot *this,bool param_1)

{
  int *piVar1;
  FSlateInvalidationWidgetPreHeap *pFVar2;
  FSlateInvalidationWidgetPrepassHeap *pFVar3;
  FSlateInvalidationWidgetPostHeap *pFVar4;
  SWidget *pSVar5;
  bool bVar6;
  FSlateDebuggingInvalidateArgs local_28;
  
  FSlateInvalidationWidgetList::Reset((this->FastWidgetPathList).Ptr);
  pFVar2 = (this->WidgetsNeedingPreUpdate).Ptr;
  piVar1 = &(pFVar2->Heap).ArrayMax;
  (pFVar2->Heap).ArrayNum = 0;
  if (*piVar1 != 0x20) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<FSlateInvalidationWidgetHeapElement>_>
              (8,4,0x20,(ForElementType<FSlateInvalidationWidgetHeapElement> *)pFVar2,0,piVar1);
  }
  pFVar3 = (this->WidgetsNeedingPrepassUpdate).Ptr;
  piVar1 = &(pFVar3->Heap).ArrayMax;
  (pFVar3->Heap).ArrayNum = 0;
  if (*piVar1 != 0x20) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<FSlateInvalidationWidgetHeapElement>_>
              (8,4,0x20,(ForElementType<FSlateInvalidationWidgetHeapElement> *)pFVar3,0,piVar1);
  }
  pFVar3->bIsHeap = false;
  pFVar4 = (this->WidgetsNeedingPostUpdate).Ptr;
  piVar1 = &(pFVar4->Heap).ArrayMax;
  (pFVar4->Heap).ArrayNum = 0;
  if (*piVar1 != 100) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<100,32,TSizedDefaultAllocator<32>_>::ForElementType<FSlateInvalidationWidgetHeapElement>_>
              (8,4,100,(ForElementType<FSlateInvalidationWidgetHeapElement> *)pFVar4,0,piVar1);
  }
  pFVar4->bIsHeap = false;
  SWidget::Invalidate(this->InvalidationRootWidget,Prepass);
  pSVar5 = this->InvalidationRootWidget;
  this->bNeedsSlowPath = true;
  bVar6 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                    ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                     &FSlateDebugging::WidgetInvalidateEvent);
  if (bVar6) {
    local_28.WidgetInvalidateInvestigator = (SWidget *)0x0;
    local_28.InvalidateWidgetReason = None;
    local_28.InvalidateInvalidationRootReason = ChildOrder;
    local_28.WidgetInvalidated = pSVar5;
    TMulticastDelegate<void___cdecl(FSlateDebuggingInvalidateArgs_const_&),FDefaultDelegateUserPolicy>
    ::Broadcast(&FSlateDebugging::WidgetInvalidateEvent,&local_28);
  }
  FSlateTrace::RootChildOrderInvalidated(this->InvalidationRootWidget,(SWidget *)0x0);
  if (param_1) {
    ClearAllFastPathData(this,true);
  }
  this->bNeedsSlowPath = true;
  return;
}

// BuildFastPathWidgetList @ 142435a30

void __thiscall
FSlateInvalidationRoot::BuildFastPathWidgetList
          (FSlateInvalidationRoot *this,TSharedRef<SWidget,1> *param_1)

{
  int *piVar1;
  bool bVar2;
  FSlateInvalidationWidgetPreHeap *pFVar3;
  FSlateInvalidationWidgetPrepassHeap *pFVar4;
  FSlateInvalidationWidgetPostHeap *pFVar5;
  
  bVar2 = this->bBuildingWidgetList;
  this->bBuildingWidgetList = true;
  pFVar3 = (this->WidgetsNeedingPreUpdate).Ptr;
  piVar1 = &(pFVar3->Heap).ArrayMax;
  (pFVar3->Heap).ArrayNum = 0;
  if (*piVar1 != 0x20) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<FSlateInvalidationWidgetHeapElement>_>
              (8,4,0x20,(ForElementType<FSlateInvalidationWidgetHeapElement> *)pFVar3,0,piVar1);
  }
  pFVar4 = (this->WidgetsNeedingPrepassUpdate).Ptr;
  piVar1 = &(pFVar4->Heap).ArrayMax;
  (pFVar4->Heap).ArrayNum = 0;
  if (*piVar1 != 0x20) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<FSlateInvalidationWidgetHeapElement>_>
              (8,4,0x20,(ForElementType<FSlateInvalidationWidgetHeapElement> *)pFVar4,0,piVar1);
  }
  pFVar4->bIsHeap = false;
  pFVar5 = (this->WidgetsNeedingPostUpdate).Ptr;
  piVar1 = &(pFVar5->Heap).ArrayMax;
  (pFVar5->Heap).ArrayNum = 0;
  if (*piVar1 != 100) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<100,32,TSizedDefaultAllocator<32>_>::ForElementType<FSlateInvalidationWidgetHeapElement>_>
              (8,4,100,(ForElementType<FSlateInvalidationWidgetHeapElement> *)pFVar5,0,piVar1);
  }
  pFVar5->bIsHeap = false;
  (this->FinalUpdateList).ArrayNum = 0;
  if ((this->FinalUpdateList).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,0,&(this->FinalUpdateList).AllocatorInstance,0,&(this->FinalUpdateList).ArrayMax)
    ;
  }
  FSlateInvalidationWidgetList::BuildWidgetList((this->FastWidgetPathList).Ptr,param_1);
  this->bBuildingWidgetList = bVar2;
  return;
}

// ClearAllFastPathData @ 142436410

void __thiscall
FSlateInvalidationRoot::ClearAllFastPathData(FSlateInvalidationRoot *this,bool param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  FSlateInvalidationWidgetList *pFVar4;
  longlong lVar5;
  FSlateInvalidationWidgetPreHeap *pFVar6;
  FSlateInvalidationWidgetPrepassHeap *pFVar7;
  FSlateInvalidationWidgetPostHeap *pFVar8;
  code *pcVar9;
  longlong *plVar10;
  FSlateCachedElementList *pFVar11;
  FWeakReferencer<1> FVar12;
  bool bVar13;
  uint uVar14;
  longlong lVar15;
  longlong lVar16;
  uint uVar17;
  ulonglong uVar18;
  longlong lVar19;
  undefined4 uStack_3c;
  
  pFVar4 = (this->FastWidgetPathList).Ptr;
  iVar3 = pFVar4->FirstArrayIndex;
  do {
    if (iVar3 == -1) {
      FSlateInvalidationWidgetList::Reset((this->FastWidgetPathList).Ptr);
      pFVar6 = (this->WidgetsNeedingPreUpdate).Ptr;
      piVar1 = &(pFVar6->Heap).ArrayMax;
      (pFVar6->Heap).ArrayNum = 0;
      if (*piVar1 != 0x20) {
        UE::Core::Private::
        ReallocTo<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<FSlateInvalidationWidgetHeapElement>_>
                  (8,4,0x20,(ForElementType<FSlateInvalidationWidgetHeapElement> *)pFVar6,0,piVar1);
      }
      pFVar7 = (this->WidgetsNeedingPrepassUpdate).Ptr;
      piVar1 = &(pFVar7->Heap).ArrayMax;
      (pFVar7->Heap).ArrayNum = 0;
      if (*piVar1 != 0x20) {
        UE::Core::Private::
        ReallocTo<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<FSlateInvalidationWidgetHeapElement>_>
                  (8,4,0x20,(ForElementType<FSlateInvalidationWidgetHeapElement> *)pFVar7,0,piVar1);
      }
      pFVar7->bIsHeap = false;
      pFVar8 = (this->WidgetsNeedingPostUpdate).Ptr;
      piVar1 = &(pFVar8->Heap).ArrayMax;
      (pFVar8->Heap).ArrayNum = 0;
      if (*piVar1 != 100) {
        UE::Core::Private::
        ReallocTo<2,TSizedInlineAllocator<100,32,TSizedDefaultAllocator<32>_>::ForElementType<FSlateInvalidationWidgetHeapElement>_>
                  (8,4,100,(ForElementType<FSlateInvalidationWidgetHeapElement> *)pFVar8,0,piVar1);
      }
      pFVar8->bIsHeap = false;
      FSlateInvalidationWidgetList::Empty((this->FastWidgetPathList).Ptr);
      FSlateCachedElementData::Empty(this->CachedElementData);
      piVar1 = &(this->FinalUpdateList).ArrayMax;
      (this->FinalUpdateList).ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,4,0,&(this->FinalUpdateList).AllocatorInstance,0,piVar1);
      }
      return;
    }
    lVar19 = *(longlong *)&pFVar4->Data + (longlong)iVar3 * 0x40;
    uVar18 = (ulonglong)*(ushort *)(lVar19 + 0xc);
    if ((longlong)uVar18 < (longlong)*(int *)(lVar19 + 0x18)) {
      lVar16 = uVar18 * 0x18;
      lVar15 = (longlong)*(int *)(lVar19 + 0x18) - uVar18;
      do {
        uVar17 = (uint)uVar18;
        uVar14 = 0;
        if ((int)uVar17 < *(int *)(lVar19 + 0x18)) {
          uVar14 = ~uVar17 >> 0x1f;
        }
        if ((uVar14 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        FVar12.ReferenceController =
             FSlateCachedElementsHandle::Invalid.Ptr.WeakReferenceCount.ReferenceController;
        pFVar11 = FSlateCachedElementsHandle::Invalid.Ptr.Object;
        lVar5 = *(longlong *)(lVar16 + *(longlong *)(lVar19 + 0x10));
        if (lVar5 != 0) {
          if (FSlateCachedElementsHandle::Invalid.Ptr.WeakReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (FSlateCachedElementsHandle::Invalid.Ptr.WeakReferenceCount.ReferenceController)->
            WeakReferenceCount =
                 (atomic<int>)
                 ((int)(FSlateCachedElementsHandle::Invalid.Ptr.WeakReferenceCount.
                       ReferenceController)->WeakReferenceCount + 1);
            UNLOCK();
          }
          plVar10 = *(longlong **)(lVar5 + 0x158);
          *(FSlateCachedElementList **)(lVar5 + 0x150) = pFVar11;
          *(TReferenceControllerBase<1> **)(lVar5 + 0x158) = FVar12.ReferenceController;
          if (plVar10 != (longlong *)0x0) {
            LOCK();
            piVar1 = (int *)((longlong)plVar10 + 0xc);
            iVar2 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar2 == 1) {
              (**(code **)(*plVar10 + 8))(plVar10,1);
            }
          }
          if (param_1) {
            uVar18 = (ulonglong)(uint)FSlateInvalidationWidgetIndex::Invalid;
            *(undefined8 *)(lVar5 + 0x18) = 0;
            *(ulonglong *)(lVar5 + 0x20) = CONCAT44(uStack_3c,0xffffffff);
            *(ulonglong *)(lVar5 + 0x28) = uVar18;
          }
        }
        uVar18 = (ulonglong)(uVar17 + 1);
        lVar16 = lVar16 + 0x18;
        lVar15 = lVar15 + -1;
      } while (lVar15 != 0);
    }
    iVar3 = *(int *)((longlong)iVar3 * 0x40 + 4 + *(longlong *)&pFVar4->Data);
  } while( true );
}

// GetFastPathWidgetListRoot @ 14243eb80

TSharedPtr<SWidget,1> * __thiscall
FSlateInvalidationRoot::GetFastPathWidgetListRoot
          (FSlateInvalidationRoot *this,TSharedPtr<SWidget,1> *__return_storage_ptr__)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  FSlateInvalidationWidgetList *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  SWidget *pSVar5;
  atomic<int> aVar6;
  bool bVar7;
  
  pFVar3 = (this->FastWidgetPathList).Ptr;
  pTVar4 = (pFVar3->Root).WeakReferenceCount.ReferenceController;
  pSVar5 = (pFVar3->Root).Object;
  if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
    __return_storage_ptr__->Object = (SWidget *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    LOCK();
    pTVar4->WeakReferenceCount = (atomic<int>)((int)pTVar4->WeakReferenceCount + 1);
    UNLOCK();
    __return_storage_ptr__->Object = (SWidget *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar4;
    aVar2 = pTVar4->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
        break;
      }
      LOCK();
      aVar6 = pTVar4->SharedReferenceCount;
      bVar7 = aVar2 == aVar6;
      if (bVar7) {
        pTVar4->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar6 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar6;
    } while (!bVar7);
  }
  if ((__return_storage_ptr__->SharedReferenceCount).ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    __return_storage_ptr__->Object = pSVar5;
  }
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar4->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
    }
  }
  return __return_storage_ptr__;
}

// GetReferencerName @ 14243f6a0

FString * __thiscall
FSlateInvalidationRoot::GetReferencerName
          (FSlateInvalidationRoot *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"FSlateInvalidationRoot");
  return __return_storage_ptr__;
}

// HandleInvalidateAllWidgets @ 1424408e0

void __thiscall
FSlateInvalidationRoot::HandleInvalidateAllWidgets(FSlateInvalidationRoot *this,bool param_1)

{
  int *piVar1;
  FSlateInvalidationWidgetPreHeap *pFVar2;
  FSlateInvalidationWidgetPrepassHeap *pFVar3;
  FSlateInvalidationWidgetPostHeap *pFVar4;
  SWidget *pSVar5;
  bool bVar6;
  FSlateDebuggingInvalidateArgs local_28;
  
  FSlateInvalidationWidgetList::Reset((this->FastWidgetPathList).Ptr);
  pFVar2 = (this->WidgetsNeedingPreUpdate).Ptr;
  piVar1 = &(pFVar2->Heap).ArrayMax;
  (pFVar2->Heap).ArrayNum = 0;
  if (*piVar1 != 0x20) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<FSlateInvalidationWidgetHeapElement>_>
              (8,4,0x20,(ForElementType<FSlateInvalidationWidgetHeapElement> *)pFVar2,0,piVar1);
  }
  pFVar3 = (this->WidgetsNeedingPrepassUpdate).Ptr;
  piVar1 = &(pFVar3->Heap).ArrayMax;
  (pFVar3->Heap).ArrayNum = 0;
  if (*piVar1 != 0x20) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<FSlateInvalidationWidgetHeapElement>_>
              (8,4,0x20,(ForElementType<FSlateInvalidationWidgetHeapElement> *)pFVar3,0,piVar1);
  }
  pFVar3->bIsHeap = false;
  pFVar4 = (this->WidgetsNeedingPostUpdate).Ptr;
  piVar1 = &(pFVar4->Heap).ArrayMax;
  (pFVar4->Heap).ArrayNum = 0;
  if (*piVar1 != 100) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<100,32,TSizedDefaultAllocator<32>_>::ForElementType<FSlateInvalidationWidgetHeapElement>_>
              (8,4,100,(ForElementType<FSlateInvalidationWidgetHeapElement> *)pFVar4,0,piVar1);
  }
  pFVar4->bIsHeap = false;
  SWidget::Invalidate(this->InvalidationRootWidget,Prepass);
  pSVar5 = this->InvalidationRootWidget;
  this->bNeedsSlowPath = true;
  bVar6 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                    ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                     &FSlateDebugging::WidgetInvalidateEvent);
  if (bVar6) {
    local_28.WidgetInvalidateInvestigator = (SWidget *)0x0;
    local_28.InvalidateWidgetReason = None;
    local_28.InvalidateInvalidationRootReason = ChildOrder;
    local_28.WidgetInvalidated = pSVar5;
    TMulticastDelegate<void___cdecl(FSlateDebuggingInvalidateArgs_const_&),FDefaultDelegateUserPolicy>
    ::Broadcast(&FSlateDebugging::WidgetInvalidateEvent,&local_28);
  }
  FSlateTrace::RootChildOrderInvalidated(this->InvalidationRootWidget,(SWidget *)0x0);
  if (param_1) {
    ClearAllFastPathData(this,true);
  }
  this->bNeedsSlowPath = true;
                    /* WARNING: Could not recover jumptable at 0x000142440a39. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x30))(this);
  return;
}

// InvalidateRootChildOrder @ 1424452c0

void __thiscall
FSlateInvalidationRoot::InvalidateRootChildOrder(FSlateInvalidationRoot *this,SWidget *param_1)

{
  int *piVar1;
  FSlateInvalidationWidgetPreHeap *pFVar2;
  FSlateInvalidationWidgetPrepassHeap *pFVar3;
  FSlateInvalidationWidgetPostHeap *pFVar4;
  SWidget *pSVar5;
  bool bVar6;
  FSlateDebuggingInvalidateArgs local_28;
  
  FSlateInvalidationWidgetList::Reset((this->FastWidgetPathList).Ptr);
  pFVar2 = (this->WidgetsNeedingPreUpdate).Ptr;
  piVar1 = &(pFVar2->Heap).ArrayMax;
  (pFVar2->Heap).ArrayNum = 0;
  if (*piVar1 != 0x20) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<FSlateInvalidationWidgetHeapElement>_>
              (8,4,0x20,(ForElementType<FSlateInvalidationWidgetHeapElement> *)pFVar2,0,piVar1);
  }
  pFVar3 = (this->WidgetsNeedingPrepassUpdate).Ptr;
  piVar1 = &(pFVar3->Heap).ArrayMax;
  (pFVar3->Heap).ArrayNum = 0;
  if (*piVar1 != 0x20) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<FSlateInvalidationWidgetHeapElement>_>
              (8,4,0x20,(ForElementType<FSlateInvalidationWidgetHeapElement> *)pFVar3,0,piVar1);
  }
  pFVar3->bIsHeap = false;
  pFVar4 = (this->WidgetsNeedingPostUpdate).Ptr;
  piVar1 = &(pFVar4->Heap).ArrayMax;
  (pFVar4->Heap).ArrayNum = 0;
  if (*piVar1 != 100) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<100,32,TSizedDefaultAllocator<32>_>::ForElementType<FSlateInvalidationWidgetHeapElement>_>
              (8,4,100,(ForElementType<FSlateInvalidationWidgetHeapElement> *)pFVar4,0,piVar1);
  }
  pFVar4->bIsHeap = false;
  SWidget::Invalidate(this->InvalidationRootWidget,Prepass);
  pSVar5 = this->InvalidationRootWidget;
  this->bNeedsSlowPath = true;
  bVar6 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                    ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                     &FSlateDebugging::WidgetInvalidateEvent);
  if (bVar6) {
    local_28.InvalidateWidgetReason = None;
    local_28.InvalidateInvalidationRootReason = ChildOrder;
    local_28.WidgetInvalidated = pSVar5;
    local_28.WidgetInvalidateInvestigator = param_1;
    TMulticastDelegate<void___cdecl(FSlateDebuggingInvalidateArgs_const_&),FDefaultDelegateUserPolicy>
    ::Broadcast(&FSlateDebugging::WidgetInvalidateEvent,&local_28);
  }
  FSlateTrace::RootChildOrderInvalidated(this->InvalidationRootWidget,param_1);
  return;
}

// InvalidateRootLayout @ 142445410

void __thiscall
FSlateInvalidationRoot::InvalidateRootLayout(FSlateInvalidationRoot *this,SWidget *param_1)

{
  SWidget *pSVar1;
  bool bVar2;
  FSlateDebuggingInvalidateArgs local_28;
  
  SWidget::Invalidate(this->InvalidationRootWidget,Prepass);
  pSVar1 = this->InvalidationRootWidget;
  this->bNeedsSlowPath = true;
  bVar2 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                    ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                     &FSlateDebugging::WidgetInvalidateEvent);
  if (bVar2) {
    local_28.InvalidateWidgetReason = None;
    local_28.InvalidateInvalidationRootReason = Root;
    local_28.WidgetInvalidated = pSVar1;
    local_28.WidgetInvalidateInvestigator = param_1;
    TMulticastDelegate<void___cdecl(FSlateDebuggingInvalidateArgs_const_&),FDefaultDelegateUserPolicy>
    ::Broadcast(&FSlateDebugging::WidgetInvalidateEvent,&local_28);
  }
  FSlateTrace::RootInvalidated(this->InvalidationRootWidget,param_1);
  return;
}

// InvalidateScreenPosition @ 1424454a0

void __thiscall
FSlateInvalidationRoot::InvalidateScreenPosition(FSlateInvalidationRoot *this,SWidget *param_1)

{
  SWidget *pSVar1;
  bool bVar2;
  FSlateDebuggingInvalidateArgs local_28;
  
  pSVar1 = this->InvalidationRootWidget;
  this->bNeedScreenPositionShift = true;
  bVar2 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                    ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                     &FSlateDebugging::WidgetInvalidateEvent);
  if (bVar2) {
    local_28.InvalidateWidgetReason = None;
    local_28.InvalidateInvalidationRootReason = ScreenPosition;
    local_28.WidgetInvalidated = pSVar1;
    local_28.WidgetInvalidateInvestigator = param_1;
    TMulticastDelegate<void___cdecl(FSlateDebuggingInvalidateArgs_const_&),FDefaultDelegateUserPolicy>
    ::Broadcast(&FSlateDebugging::WidgetInvalidateEvent,&local_28);
  }
  return;
}

// InvalidateWidget @ 142445500

/* WARNING: Type propagation algorithm not settling */

void __thiscall
FSlateInvalidationRoot::InvalidateWidget
          (FSlateInvalidationRoot *this,FWidgetProxy *param_1,EInvalidateWidgetReason param_2)

{
  FSlateInvalidationWidgetIndex *pFVar1;
  FSlateInvalidationWidgetIndex FVar2;
  FSlateInvalidationWidgetPrepassHeap *this_00;
  SWidget *pSVar3;
  code *pcVar4;
  int *piVar5;
  bool bVar6;
  int iVar7;
  FSlateInvalidationWidgetIndex *pFVar8;
  FSlateInvalidationWidgetPrepassHeap *pFVar9;
  undefined1 local_res8 [8];
  undefined1 local_res20 [8];
  undefined1 local_48;
  undefined1 local_47 [3];
  FSlateInvalidationWidgetSortOrder local_44;
  FSlateDebuggingInvalidateArgs local_40;
  
  if (this->bProcessingChildOrderInvalidation != false) {
    local_res8[0] = 0;
    `FSlateInvalidationRoot::InvalidateWidget'::__l2::<lambda_1>::operator()(local_res8);
  }
  if ((this->bProcessingAttributeUpdate != false) &&
     ((param_2 & (AttributeRegistration|ChildOrder)) != None)) {
    `FSlateInvalidationRoot::InvalidateWidget'::__l8::<lambda_2>::operator()(local_47);
    return;
  }
  if (this->bNeedsSlowPath == false) {
    param_1->CurrentInvalidateReason = param_1->CurrentInvalidateReason | param_2;
    if ((param_2 & (AttributeRegistration|Visibility|ChildOrder|Layout)) != None) {
      FSlateInvalidationWidgetPreHeap::HeapPushUnique((this->WidgetsNeedingPreUpdate).Ptr,param_1);
    }
    if (((this->bProcessingPrepassUpdate == false) && (this->bProcessingPostUpdate == false)) &&
       ((char)param_2 < '\0')) {
      if ((param_1->Widget == (SWidget *)0x0) || (!(bool)param_1->Widget->bNeedsPrepass)) {
        local_res20[0] = 0;
        `FSlateInvalidationRoot::InvalidateWidget'::__l17::<lambda_3>::operator()(local_res20);
      }
      if ((param_2 & Layout) == None) {
        local_48 = 0;
        `FSlateInvalidationRoot::InvalidateWidget'::__l17::<lambda_4>::operator()(&local_48);
      }
      this_00 = (this->WidgetsNeedingPrepassUpdate).Ptr;
      if ((this_00->bIsHeap != false) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("bIsHeap == false",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\FastUpdate\\SlateInvalidationWidgetHeap.h"
                             ,0x1a6,L""), bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if ((((param_1->Index).ArrayIndex == FSlateInvalidationWidgetIndex::Invalid.ArrayIndex) &&
          ((param_1->Index).ElementIndex == FSlateInvalidationWidgetIndex::Invalid.ElementIndex)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("InvalidationWidget.Index != FSlateInvalidationWidgetIndex::Invalid",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\FastUpdate\\SlateInvalidationWidgetHeap.h"
                             ,0x1a7,L""), bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      FSlateInvalidationWidgetPrepassHeap::VerifyContainsFlag(this_00,param_1);
      if (((param_1->field6_0x16).PrivateFlags & 4) == 0) {
        (param_1->field6_0x16).PrivateFlags = (param_1->field6_0x16).PrivateFlags | 4;
        pFVar8 = (FSlateInvalidationWidgetIndex *)
                 FSlateInvalidationWidgetSortOrder::FSlateInvalidationWidgetSortOrder
                           (&local_44,this_00->OwnerList,param_1->Index);
        piVar5 = &(this_00->Heap).ArrayMax;
        iVar7 = (this_00->Heap).ArrayNum;
        if (iVar7 == *piVar5) {
          iVar7 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<FSlateInvalidationWidgetHeapElement>_>
                            (0x408,(ForElementType<FSlateInvalidationWidgetHeapElement> *)this_00,
                             piVar5);
        }
        (this_00->Heap).ArrayNum = iVar7 + 1;
        pFVar9 = *(FSlateInvalidationWidgetPrepassHeap **)
                  &(this_00->Heap).AllocatorInstance.SecondaryData.field_0x0;
        if (pFVar9 == (FSlateInvalidationWidgetPrepassHeap *)0x0) {
          pFVar9 = this_00;
        }
        pFVar1 = (FSlateInvalidationWidgetIndex *)
                 ((pFVar9->Heap).AllocatorInstance.InlineData + (longlong)iVar7 * 8);
        FVar2 = *pFVar8;
        *pFVar1 = param_1->Index;
        pFVar1[1] = FVar2;
      }
    }
    if ((param_2 & (Prepass|Visibility|RenderTransform|ChildOrder|PaintAndVolatility|Layout)) !=
        None) {
      FSlateInvalidationWidgetPostHeap::PushBackOrHeapUnique
                ((this->WidgetsNeedingPostUpdate).Ptr,param_1);
    }
    pSVar3 = param_1->Widget;
    bVar6 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                      ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                       &FSlateDebugging::WidgetInvalidateEvent);
    if (bVar6) {
      local_40.WidgetInvalidateInvestigator = (SWidget *)0x0;
      local_40.InvalidateInvalidationRootReason = None;
      local_40.WidgetInvalidated = pSVar3;
      local_40.InvalidateWidgetReason = param_2;
      TMulticastDelegate<void___cdecl(FSlateDebuggingInvalidateArgs_const_&),FDefaultDelegateUserPolicy>
      ::Broadcast(&FSlateDebugging::WidgetInvalidateEvent,&local_40);
    }
    FSlateTrace::WidgetInvalidated(pSVar3,(SWidget *)0x0,param_2);
  }
  return;
}

// OnRootInvalidated @ 142448760

void __thiscall FSlateInvalidationRoot::OnRootInvalidated(FSlateInvalidationRoot *this)

{
  return;
}

// OnWidgetDestroyed @ 142448c70

void __thiscall
FSlateInvalidationRoot::OnWidgetDestroyed(FSlateInvalidationRoot *this,SWidget *param_1)

{
  undefined4 uVar3;
  bool bVar1;
  FWidgetProxy *pFVar2;
  FSlateInvalidationWidgetIndex local_18;
  
  uVar3._0_2_ = (param_1->FastPathProxyHandle).WidgetIndex.ArrayIndex;
  uVar3._2_2_ = (param_1->FastPathProxyHandle).WidgetIndex.ElementIndex;
  bVar1 = FSlateInvalidationWidgetList::IsValidIndex
                    ((this->FastWidgetPathList).Ptr,(FSlateInvalidationWidgetIndex)uVar3);
  if (bVar1) {
    pFVar2 = FSlateInvalidationWidgetList::operator[]
                       ((this->FastWidgetPathList).Ptr,(FSlateInvalidationWidgetIndex)uVar3);
    if (param_1 == pFVar2->Widget) {
      pFVar2->Widget = (SWidget *)0x0;
    }
  }
  return;
}

// PaintFastPath @ 142448e60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall
FSlateInvalidationRoot::PaintFastPath
          (FSlateInvalidationRoot *this,FSlateInvalidationContext *param_1)

{
  int *piVar1;
  FSlateInvalidationWidgetIndex *pFVar2;
  byte *pbVar3;
  byte bVar4;
  char cVar5;
  undefined4 uVar6;
  SWidget *pSVar7;
  code *pcVar8;
  bool bVar9;
  bool bVar10;
  undefined1 uVar11;
  bool bVar12;
  uint uVar13;
  int iVar14;
  FWidgetProxy *pFVar15;
  ForElementType<FSlateInvalidationWidgetHeapElement> FVar16;
  FSlateInvalidationWidgetList *pFVar17;
  FSlateInvalidationWidgetIndex FVar18;
  uint uVar19;
  ulonglong uVar20;
  longlong lVar21;
  longlong lVar22;
  longlong lVar23;
  bool bVar24;
  undefined1 auStackY_138 [32];
  FWidgetOrderGreater local_107;
  FWidgetOrderGreater local_106 [2];
  FSlateInvalidationWidgetIndex local_104;
  uint local_100;
  FSlateInvalidationWidgetIndex local_f8;
  FSlateInvalidationWidgetIndex local_f4;
  FSlateInvalidationWidgetSortOrder local_f0;
  FSlateInvalidationWidgetSortOrder local_ec;
  FSlateInvalidationWidgetList *local_e8;
  FSlateInvalidationContext *local_e0;
  TArray<FSlateInvalidationWidgetHeapElement,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>
  local_d8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_138;
  local_e0 = param_1;
  FGenericPlatformMisc::BeginNamedEvent(&FColor::Green,"SWidget_FastPathUpdate");
  bVar24 = -1 < CpuChannel->Enabled;
  if (bVar24) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId719,"SWidget_FastPathUpdate",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\FastUpdate\\SlateInvalidationRoot.cpp"
               ,0x2cf);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId719);
  }
  if (__CsvProfilerStat720 == false) {
    FCsvProfilerTrace::OutputInlineStat("PaintFastPath",_GCsvCategory_Slate.Index);
    __CsvProfilerStat720 = true;
  }
  local_100 = _GCsvCategory_Slate.Index;
  FCsvProfiler::BeginStat("PaintFastPath",_GCsvCategory_Slate.Index,"CSV_PaintFastPath");
  if ((this->bNeedsSlowPath != false) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("!bNeedsSlowPath",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\FastUpdate\\SlateInvalidationRoot.cpp"
                          ,0x2d2,L""), bVar10)) {
    pcVar8 = (code *)swi(3);
    uVar11 = (*pcVar8)();
    return (bool)uVar11;
  }
  if ((GSlateInvalidationRootDumpUpdateList != false) ||
     (GSlateInvalidationRootDumpUpdateListOnce != false)) {
    DumpUpdateList((this->FastWidgetPathList).Ptr,&this->FinalUpdateList);
  }
  if (GSlateInvalidationRootVerifyWidgetsAreUpdatedOnce != false) {
    pFVar17 = (this->FastWidgetPathList).Ptr;
    local_e8 = pFVar17;
    for (iVar14 = pFVar17->FirstArrayIndex; iVar14 != -1;
        iVar14 = *(int *)((longlong)iVar14 * 0x40 + 4 + *(longlong *)&pFVar17->Data)) {
      lVar22 = (longlong)iVar14 * 0x40 + *(longlong *)&pFVar17->Data;
      uVar20 = (ulonglong)*(ushort *)(lVar22 + 0xc);
      if ((longlong)uVar20 < (longlong)*(int *)(lVar22 + 0x18)) {
        lVar21 = uVar20 * 0x18;
        lVar23 = (longlong)*(int *)(lVar22 + 0x18) - uVar20;
        do {
          uVar19 = (uint)uVar20;
          uVar13 = 0;
          if ((int)uVar19 < *(int *)(lVar22 + 0x18)) {
            uVar13 = ~uVar19 >> 0x1f;
          }
          if ((uVar13 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar8 = (code *)swi(3);
            uVar11 = (*pcVar8)();
            return (bool)uVar11;
          }
          uVar20 = (ulonglong)(uVar19 + 1);
          pbVar3 = (byte *)(lVar21 + 0x17 + *(longlong *)(lVar22 + 0x10));
          *pbVar3 = *pbVar3 & 0xf7;
          lVar21 = lVar21 + 0x18;
          lVar23 = lVar23 + -1;
          pFVar17 = local_e8;
        } while (lVar23 != 0);
      }
      param_1 = local_e0;
    }
  }
  bVar9 = GSlateIsOnFastUpdatePath;
  GSlateIsOnFastUpdatePath = true;
  bVar10 = false;
  pFVar17 = (this->FastWidgetPathList).Ptr;
  local_d8.AllocatorInstance.SecondaryData =
       (ForElementType<FSlateInvalidationWidgetHeapElement>)0x0;
  local_d8.ArrayNum = 0;
  local_d8.ArrayMax = 0x10;
  uVar13 = pFVar17->FirstArrayIndex;
  FVar18 = FSlateInvalidationWidgetIndex::Invalid;
  if (uVar13 != 0xffffffff) {
    FVar18 = (FSlateInvalidationWidgetIndex)
             ((uint)*(ushort *)((longlong)(int)uVar13 * 0x40 + 0xc + *(longlong *)&pFVar17->Data) <<
              0x10 | uVar13 & 0xffff);
  }
  if ((FVar18.ArrayIndex != FSlateInvalidationWidgetIndex::Invalid.ArrayIndex) ||
     (FVar18.ElementIndex != FSlateInvalidationWidgetIndex::Invalid.ElementIndex)) {
    pFVar15 = FSlateInvalidationWidgetList::operator[](pFVar17,FVar18);
    iVar14 = (this->FinalUpdateList).ArrayNum;
    if (iVar14 != 0) {
      uVar13 = 0;
      if ((int)(iVar14 - 1U) < iVar14) {
        uVar13 = ~(iVar14 - 1U) >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar8 = (code *)swi(3);
        uVar11 = (*pcVar8)();
        return (bool)uVar11;
      }
      uVar6 = *(undefined4 *)
               ((this->FinalUpdateList).AllocatorInstance.Data +
               (longlong)(this->FinalUpdateList).ArrayNum * 8 + -8);
      if (((ushort)uVar6 == FVar18.ArrayIndex) &&
         ((ushort)((uint)uVar6 >> 0x10) == FVar18.ElementIndex)) goto LAB_1424491c0;
    }
    pSVar7 = pFVar15->Widget;
    if ((pSVar7 != (SWidget *)0x0) &&
       (iVar14 = param_1->IncomingLayerId, (pSVar7->PersistentState).LayerId < iVar14)) {
      pSVar7->UpdateFlags = pSVar7->UpdateFlags | NeedsRepaint;
      (pSVar7->PersistentState).LayerId = iVar14 + 100;
      FSlateInvalidationWidgetSortOrder::FSlateInvalidationWidgetSortOrder
                ((FSlateInvalidationWidgetSortOrder *)&local_104,(this->FastWidgetPathList).Ptr,
                 FVar18);
      iVar14 = (this->FinalUpdateList).ArrayNum;
      piVar1 = &(this->FinalUpdateList).ArrayMax;
      if (iVar14 == *piVar1) {
        iVar14 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x408,&(this->FinalUpdateList).AllocatorInstance,piVar1);
      }
      (this->FinalUpdateList).ArrayNum = iVar14 + 1;
      pFVar2 = (FSlateInvalidationWidgetIndex *)
               ((this->FinalUpdateList).AllocatorInstance.Data + (longlong)iVar14 * 8);
      *pFVar2 = FVar18;
      pFVar2[1] = local_104;
    }
  }
LAB_1424491c0:
  do {
    while ((this->FinalUpdateList).ArrayNum < 1) {
      if (local_d8.ArrayNum == 0) goto LAB_14244948a;
      if ((local_d8.ArrayNum < 1) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar8 = (code *)swi(3);
        uVar11 = (*pcVar8)();
        return (bool)uVar11;
      }
      FVar16 = (ForElementType<FSlateInvalidationWidgetHeapElement>)&local_d8;
      if (local_d8.AllocatorInstance.SecondaryData !=
          (ForElementType<FSlateInvalidationWidgetHeapElement>)0x0) {
        FVar16 = local_d8.AllocatorInstance.SecondaryData;
      }
      uVar20 = *(ulonglong *)FVar16 >> 0x10 & 0xffff;
      lVar22 = (*(ulonglong *)FVar16 & 0xffff) * 0x40 +
               *(longlong *)&((this->FastWidgetPathList).Ptr)->Data;
      if ((*(int *)(lVar22 + 0x18) <= (int)uVar20) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar8 = (code *)swi(3);
        uVar11 = (*pcVar8)();
        return (bool)uVar11;
      }
      pFVar15 = (FWidgetProxy *)(*(longlong *)(lVar22 + 0x10) + uVar20 * 0x18);
      TArray<FSlateInvalidationWidgetHeapElement,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>
      ::HeapPopDiscard<UE::Slate::Private::FSlateInvalidationReindexHeap::FWidgetOrderGreater>
                (&local_d8,&local_107,No);
      bVar4 = (pFVar15->Visibility).field0_0x0.Flags;
      pSVar7 = pFVar15->Widget;
joined_r0x000142449295:
      if (((bVar4 & 3) == 3) && (pSVar7 != (SWidget *)0x0)) {
        PaintFastPath_FixupLayerId
                  (this,(FSlateInvalidationPaintFastPathContext *)&local_d8,pFVar15,
                   (pSVar7->PersistentState).OutgoingLayerId);
      }
    }
    if (local_d8.ArrayNum == 0) {
      bVar12 = PaintFastPath_UpdateNextWidget
                         (this,param_1,(FSlateInvalidationPaintFastPathContext *)&local_d8);
      if ((bVar10 != false) || (bVar12)) {
        bVar10 = true;
      }
      cVar5 = this->bNeedsSlowPath;
    }
    else {
      if ((local_d8.ArrayNum < 1) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar8 = (code *)swi(3);
        uVar11 = (*pcVar8)();
        return (bool)uVar11;
      }
      FVar16 = (ForElementType<FSlateInvalidationWidgetHeapElement>)&local_d8;
      if (local_d8.AllocatorInstance.SecondaryData !=
          (ForElementType<FSlateInvalidationWidgetHeapElement>)0x0) {
        FVar16 = local_d8.AllocatorInstance.SecondaryData;
      }
      uVar20 = *(ulonglong *)FVar16 >> 0x10 & 0xffff;
      lVar22 = (*(ulonglong *)FVar16 & 0xffff) * 0x40 +
               *(longlong *)&((this->FastWidgetPathList).Ptr)->Data;
      if ((*(int *)(lVar22 + 0x18) <= (int)uVar20) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar8 = (code *)swi(3);
        uVar11 = (*pcVar8)();
        return (bool)uVar11;
      }
      lVar22 = *(longlong *)(lVar22 + 0x10);
      local_f8 = *(FSlateInvalidationWidgetIndex *)(lVar22 + 8 + uVar20 * 0x18);
      pFVar15 = (FWidgetProxy *)(lVar22 + uVar20 * 0x18);
      FVar18 = pFVar15->LeafMostChildIndex;
      pFVar17 = (this->FastWidgetPathList).Ptr;
      local_f4 = FVar18;
      FSlateInvalidationWidgetSortOrder::FSlateInvalidationWidgetSortOrder
                (&local_f0,pFVar17,local_f8);
      FSlateInvalidationWidgetSortOrder::FSlateInvalidationWidgetSortOrder(&local_ec,pFVar17,FVar18)
      ;
      iVar14 = (this->FinalUpdateList).ArrayNum;
      uVar19 = iVar14 - 1;
      uVar13 = 0;
      if ((int)uVar19 < iVar14) {
        uVar13 = ~uVar19 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar8 = (code *)swi(3);
        uVar11 = (*pcVar8)();
        return (bool)uVar11;
      }
      uVar13 = *(uint *)((this->FinalUpdateList).AllocatorInstance.Data +
                        (longlong)(int)uVar19 * 8 + 4);
      if ((uVar13 < local_f0.Order) || (local_ec.Order < uVar13)) {
        TArray<FSlateInvalidationWidgetHeapElement,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>
        ::HeapPopDiscard<UE::Slate::Private::FSlateInvalidationReindexHeap::FWidgetOrderGreater>
                  (&local_d8,local_106,No);
        bVar4 = (pFVar15->Visibility).field0_0x0.Flags;
        pSVar7 = pFVar15->Widget;
        goto joined_r0x000142449295;
      }
      bVar12 = PaintFastPath_UpdateNextWidget
                         (this,param_1,(FSlateInvalidationPaintFastPathContext *)&local_d8);
      if ((bVar10 != false) || (bVar12)) {
        bVar10 = true;
      }
      cVar5 = this->bNeedsSlowPath;
    }
  } while (cVar5 == '\0');
LAB_14244948a:
  (this->FinalUpdateList).ArrayNum = 0;
  if ((this->FinalUpdateList).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,0,&(this->FinalUpdateList).AllocatorInstance,0,&(this->FinalUpdateList).ArrayMax)
    ;
  }
  if (local_d8.AllocatorInstance.SecondaryData !=
      (ForElementType<FSlateInvalidationWidgetHeapElement>)0x0) {
    FMemory::Free((void *)local_d8.AllocatorInstance.SecondaryData);
  }
  bVar12 = this->bNeedsSlowPath;
  GSlateIsOnFastUpdatePath = bVar9;
  if (bVar12 != false) {
    FGenericPlatformMisc::BeginNamedEvent(&FColor::Red,"Slate_PaintSlowPath");
    if (CpuChannel->Enabled < 0) {
      iVar14 = (**(code **)(this->_padding_ + 0x28))(this,param_1);
      this->CachedMaxLayerId = iVar14;
    }
    else {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId833,"Slate_PaintSlowPath",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\FastUpdate\\SlateInvalidationRoot.cpp"
                 ,0x341);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId833);
      iVar14 = (**(code **)(this->_padding_ + 0x28))(this,param_1);
      this->CachedMaxLayerId = iVar14;
      FCpuProfilerTrace::OutputEndEvent();
    }
    FGenericPlatformMisc::EndNamedEvent();
  }
  this->LastPaintType = Fast - (bVar12 != false);
  FCsvProfiler::EndStat("PaintFastPath",local_100);
  if (bVar24) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FGenericPlatformMisc::EndNamedEvent();
  return bVar10;
}

// PaintFastPath_AddUniqueSortedToFinalUpdateList @ 1424495e0

void __thiscall
FSlateInvalidationRoot::PaintFastPath_AddUniqueSortedToFinalUpdateList
          (FSlateInvalidationRoot *this,FSlateInvalidationWidgetIndex param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  longlong lVar7;
  uint uVar8;
  FSlateInvalidationWidgetSortOrder local_res10 [2];
  
  FSlateInvalidationWidgetSortOrder::FSlateInvalidationWidgetSortOrder
            (local_res10,(this->FastWidgetPathList).Ptr,param_1);
  uVar8 = (this->FinalUpdateList).ArrayNum - 1;
  if (-1 < (int)uVar8) {
    lVar7 = (longlong)(int)uVar8 * 8;
    do {
      uVar4 = 0;
      if ((int)uVar8 < (this->FinalUpdateList).ArrayNum) {
        uVar4 = ~uVar8 >> 0x1f;
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
      uVar1 = *(undefined8 *)((this->FinalUpdateList).AllocatorInstance.Data + lVar7);
      if (((ushort)uVar1 == param_1.ArrayIndex) &&
         ((ushort)((ulonglong)uVar1 >> 0x10) == param_1.ElementIndex)) {
        return;
      }
      if (local_res10[0].Order < (uint)((ulonglong)uVar1 >> 0x20)) break;
      lVar7 = lVar7 + -8;
      uVar8 = uVar8 - 1;
    } while (-1 < (int)uVar8);
  }
  iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,4,1,&(this->FinalUpdateList).AllocatorInstance,
                     &(this->FinalUpdateList).ArrayNum,&(this->FinalUpdateList).ArrayMax);
  lVar7 = (longlong)(int)uVar8 * 8 + 8;
  pFVar6 = (this->FinalUpdateList).AllocatorInstance.Data + lVar7;
  memmove(pFVar6 + 8,pFVar6,(longlong)(int)((iVar5 - uVar8) + -1) << 3);
  pFVar6 = (this->FinalUpdateList).AllocatorInstance.Data;
  *(FSlateInvalidationWidgetIndex *)(pFVar6 + lVar7) = param_1;
  *(uint *)(pFVar6 + (longlong)(int)uVar8 * 8 + 0xc) = local_res10[0].Order;
  return;
}

// PaintFastPath_FixupLayerId @ 142449720

void __thiscall
FSlateInvalidationRoot::PaintFastPath_FixupLayerId
          (FSlateInvalidationRoot *this,FSlateInvalidationPaintFastPathContext *param_1,
          FWidgetProxy *param_2,int param_3)

{
  FSlateInvalidationWidgetList *pFVar1;
  longlong lVar2;
  undefined8 uVar3;
  code *pcVar4;
  ushort uVar5;
  ushort uVar6;
  bool bVar7;
  FSlateInvalidationWidgetIndex FVar8;
  int iVar9;
  FWidgetProxy *pFVar10;
  undefined4 extraout_var;
  FSlateInvalidationWidgetIndex FVar11;
  FScriptContainerElement *pFVar12;
  uint uVar13;
  FSlateInvalidationWidgetSortOrder FVar14;
  longlong lVar15;
  uint uVar16;
  uint uVar17;
  FSlateInvalidationWidgetSortOrder FVar18;
  FSlateInvalidationWidgetIndex local_68;
  FSlateInvalidationWidgetSortOrder local_64;
  int local_60;
  undefined1 local_5c [4];
  FSlateInvalidationWidgetIndex local_58;
  FSlateInvalidationWidgetIndex FStack_54;
  FSlateInvalidationWidgetSortOrder FStack_50;
  FSlateInvalidationWidgetSortOrder FStack_4c;
  FSlateInvalidationWidgetIndex local_48;
  FSlateInvalidationWidgetIndex FStack_44;
  uint uStack_40;
  uint uStack_3c;
  
  if ((param_2->Widget->PersistentState).bDeferredPainting != '\0') {
    return;
  }
  local_60 = (param_2->Widget->PersistentState).LayerId;
  local_48 = FSlateInvalidationWidgetIndex::Invalid;
  if (((param_2->ParentIndex).ArrayIndex != FSlateInvalidationWidgetIndex::Invalid.ArrayIndex) ||
     (FVar14.Order = 0, FVar18.Order = 0,
     (param_2->ParentIndex).ElementIndex != FSlateInvalidationWidgetIndex::Invalid.ElementIndex)) {
    pFVar10 = FSlateInvalidationWidgetList::operator[]
                        ((this->FastWidgetPathList).Ptr,param_2->ParentIndex);
    pFVar1 = (this->FastWidgetPathList).Ptr;
    local_58 = pFVar10->Index;
    FVar8 = pFVar10->LeafMostChildIndex;
    FStack_54 = FVar8;
    FSlateInvalidationWidgetSortOrder::FSlateInvalidationWidgetSortOrder(&FStack_50,pFVar1,local_58)
    ;
    FSlateInvalidationWidgetSortOrder::FSlateInvalidationWidgetSortOrder(&FStack_4c,pFVar1,FVar8);
    local_48 = local_58;
    FStack_44 = FStack_54;
    uStack_40 = FStack_50.Order;
    uStack_3c = FStack_4c.Order;
    FVar14.Order = FStack_4c.Order;
    FVar18.Order = FStack_50.Order;
  }
  FSlateInvalidationWidgetList::FindNextSibling((this->FastWidgetPathList).Ptr,SUB84(&local_68,0));
  uVar6 = local_48.ElementIndex;
  uVar5 = local_48.ArrayIndex;
  do {
    if ((local_68.ArrayIndex == FSlateInvalidationWidgetIndex::Invalid.ArrayIndex) &&
       (local_68.ElementIndex == FSlateInvalidationWidgetIndex::Invalid.ElementIndex))
    goto LAB_142449b41;
    uVar13 = (uint)local_68 >> 0x10;
    lVar15 = (ulonglong)((uint)local_68 & 0xffff) * 0x40 +
             *(longlong *)&((this->FastWidgetPathList).Ptr)->Data;
    if ((*(int *)(lVar15 + 0x18) <= (int)uVar13) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    uVar17 = (uint)FSlateInvalidationWidgetIndex::Invalid >> 0x10;
    lVar15 = *(longlong *)(lVar15 + 0x10);
    lVar2 = *(longlong *)(lVar15 + (ulonglong)uVar13 * 0x18);
    if ((((*(byte *)(lVar15 + 0x15 + (ulonglong)uVar13 * 0x18) & 3) == 3) && (lVar2 != 0)) &&
       ((*(byte *)(lVar2 + 0x16b) & 4) == 0)) {
      bVar7 = false;
      uVar13 = (this->FinalUpdateList).ArrayNum - 1;
      if ((int)uVar13 < 0) {
LAB_1424499ba:
        iVar9 = *(int *)(lVar2 + 0x160);
        if (bVar7) {
          if ((iVar9 != local_60) && (iVar9 < param_3 + 1)) {
            *(int *)(lVar2 + 0x160) = param_3 + 1;
          }
          goto LAB_142449b41;
        }
      }
      else {
        lVar15 = (longlong)(int)uVar13 * 8;
        FVar8 = local_68;
        FVar11 = FSlateInvalidationWidgetIndex::Invalid;
        do {
          uVar16 = 0;
          if ((int)uVar13 < (this->FinalUpdateList).ArrayNum) {
            uVar16 = ~uVar13 >> 0x1f;
          }
          if (uVar16 == 0) {
            bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar7) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            uVar17 = (uint)FSlateInvalidationWidgetIndex::Invalid >> 0x10;
            FVar8 = local_68;
            FVar11 = FSlateInvalidationWidgetIndex::Invalid;
          }
          uVar3 = *(undefined8 *)((this->FinalUpdateList).AllocatorInstance.Data + lVar15);
          if (((ushort)uVar3 == FVar8.ArrayIndex) &&
             ((ushort)((ulonglong)uVar3 >> 0x10) == FVar8.ElementIndex)) {
            bVar7 = (*(byte *)(lVar2 + 0x38) & 0x50) != 0;
            goto LAB_1424499ba;
          }
          if (((uVar5 != FVar11.ArrayIndex) || (uVar6 != (ushort)uVar17)) &&
             ((uVar16 = (uint)((ulonglong)uVar3 >> 0x20), uVar16 < FVar18.Order ||
              (FVar14.Order < uVar16)))) break;
          lVar15 = lVar15 + -8;
          uVar13 = uVar13 - 1;
        } while (-1 < (int)uVar13);
        iVar9 = *(int *)(lVar2 + 0x160);
      }
      FVar8 = local_68;
      if (iVar9 != local_60) break;
    }
    FVar8 = FSlateInvalidationWidgetList::FindNextSibling
                      ((this->FastWidgetPathList).Ptr,SUB84(local_5c,0));
    local_68 = *(FSlateInvalidationWidgetIndex *)CONCAT44(extraout_var,FVar8);
  } while( true );
  if (iVar9 < param_3 + 1) {
    *(byte *)(lVar2 + 0x38) = *(byte *)(lVar2 + 0x38) | 0x10;
    *(int *)(lVar2 + 0x160) = param_3 + 1;
    FSlateInvalidationWidgetSortOrder::FSlateInvalidationWidgetSortOrder
              (&local_64,(this->FastWidgetPathList).Ptr,local_68);
    uVar13 = (this->FinalUpdateList).ArrayNum - 1;
    if (-1 < (int)uVar13) {
      lVar15 = (longlong)(int)uVar13 * 8;
      do {
        uVar17 = 0;
        if ((int)uVar13 < (this->FinalUpdateList).ArrayNum) {
          uVar17 = ~uVar13 >> 0x1f;
        }
        if ((uVar17 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        uVar3 = *(undefined8 *)((this->FinalUpdateList).AllocatorInstance.Data + lVar15);
        if (((ushort)uVar3 == FVar8.ArrayIndex) &&
           ((ushort)((ulonglong)uVar3 >> 0x10) == FVar8.ElementIndex)) goto LAB_142449b41;
        if (local_64.Order < (uint)((ulonglong)uVar3 >> 0x20)) break;
        lVar15 = lVar15 + -8;
        uVar13 = uVar13 - 1;
      } while (-1 < (int)uVar13);
    }
    iVar9 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,4,1,&(this->FinalUpdateList).AllocatorInstance,
                       &(this->FinalUpdateList).ArrayNum,&(this->FinalUpdateList).ArrayMax);
    lVar15 = (longlong)(int)uVar13 * 8 + 8;
    pFVar12 = (this->FinalUpdateList).AllocatorInstance.Data + lVar15;
    memmove(pFVar12 + 8,pFVar12,(longlong)(int)((iVar9 - uVar13) + -1) << 3);
    pFVar12 = (this->FinalUpdateList).AllocatorInstance.Data;
    *(FSlateInvalidationWidgetIndex *)(pFVar12 + lVar15) = FVar8;
    *(uint *)(pFVar12 + (longlong)(int)uVar13 * 8 + 0xc) = local_64.Order;
  }
LAB_142449b41:
  PaintFastPath_FixupParentLayerId(this,param_1,param_2,param_3);
  return;
}

// PaintFastPath_FixupParentLayerId @ 142449ba0

void __thiscall
FSlateInvalidationRoot::PaintFastPath_FixupParentLayerId
          (FSlateInvalidationRoot *this,FSlateInvalidationPaintFastPathContext *param_1,
          FWidgetProxy *param_2,int param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  FSlateInvalidationWidgetIndex FVar4;
  SWidget *pSVar5;
  ForElementType<FSlateInvalidationWidgetHeapElement> FVar6;
  undefined8 uVar7;
  code *pcVar8;
  bool bVar9;
  int iVar10;
  FWidgetProxy *pFVar11;
  FSlateInvalidationWidgetSortOrder *pFVar12;
  ForElementType<FSlateInvalidationWidgetHeapElement> FVar13;
  FSlateInvalidationWidgetSortOrder local_res18 [4];
  undefined8 local_28;
  FSlateInvalidationWidgetIndex local_20;
  uint uStack_1c;
  
  FVar4 = param_2->ParentIndex;
  if ((FVar4.ArrayIndex != FSlateInvalidationWidgetIndex::Invalid.ArrayIndex) ||
     (FVar4.ElementIndex != FSlateInvalidationWidgetIndex::Invalid.ElementIndex)) {
    pFVar11 = FSlateInvalidationWidgetList::operator[]((this->FastWidgetPathList).Ptr,FVar4);
    pSVar5 = pFVar11->Widget;
    if ((pSVar5 == (SWidget *)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("ParentWidgetPtr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\FastUpdate\\SlateInvalidationRoot.cpp"
                           ,0x224,L""), bVar9)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    if ((pSVar5->PersistentState).OutgoingLayerId < param_3) {
      (pSVar5->PersistentState).OutgoingLayerId = param_3;
      local_20 = FVar4;
      pFVar12 = FSlateInvalidationWidgetSortOrder::FSlateInvalidationWidgetSortOrder
                          (local_res18,(this->FastWidgetPathList).Ptr,FVar4);
      FVar6 = (param_1->ReindexUpdateList).Heap.AllocatorInstance.SecondaryData;
      uStack_1c = pFVar12->Order;
      local_28 = CONCAT44(uStack_1c,local_20);
      FVar13 = (ForElementType<FSlateInvalidationWidgetHeapElement>)param_1;
      if (FVar6 != (ForElementType<FSlateInvalidationWidgetHeapElement>)0x0) {
        FVar13 = FVar6;
      }
      if ((ulonglong)FVar13 <= &local_28) {
        FVar13 = (ForElementType<FSlateInvalidationWidgetHeapElement>)param_1;
        if (FVar6 != (ForElementType<FSlateInvalidationWidgetHeapElement>)0x0) {
          FVar13 = FVar6;
        }
        if ((&local_28 <
             (undefined8 *)
             ((longlong)FVar13 + (longlong)(param_1->ReindexUpdateList).Heap.ArrayMax * 8)) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar9)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
      }
      iVar10 = (param_1->ReindexUpdateList).Heap.ArrayNum;
      piVar1 = &(param_1->ReindexUpdateList).Heap.ArrayMax;
      if (iVar10 == *piVar1) {
        iVar10 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<FSlateInvalidationWidgetHeapElement>_>
                           (0x408,(ForElementType<FSlateInvalidationWidgetHeapElement> *)param_1,
                            piVar1);
      }
      (param_1->ReindexUpdateList).Heap.ArrayNum = iVar10 + 1;
      FVar6 = (param_1->ReindexUpdateList).Heap.AllocatorInstance.SecondaryData;
      FVar13 = (ForElementType<FSlateInvalidationWidgetHeapElement>)param_1;
      if (FVar6 != (ForElementType<FSlateInvalidationWidgetHeapElement>)0x0) {
        FVar13 = FVar6;
      }
      *(undefined8 *)((longlong)FVar13 + (longlong)iVar10 * 8) = local_28;
      FVar6 = (param_1->ReindexUpdateList).Heap.AllocatorInstance.SecondaryData;
      iVar10 = (param_1->ReindexUpdateList).Heap.ArrayNum + -1;
      if (FVar6 != (ForElementType<FSlateInvalidationWidgetHeapElement>)0x0) {
        param_1 = (FSlateInvalidationPaintFastPathContext *)FVar6;
      }
      while (0 < iVar10) {
        puVar2 = (undefined8 *)((longlong)param_1 + (longlong)iVar10 * 8);
        iVar10 = (iVar10 + -1) / 2;
        puVar3 = (undefined8 *)((longlong)param_1 + (longlong)iVar10 * 8);
        if (*(uint *)((uchar *)((longlong)param_1 + 4) + (longlong)iVar10 * 8) <=
            *(uint *)((longlong)puVar2 + 4)) {
          return;
        }
        uVar7 = *puVar2;
        *puVar2 = *puVar3;
        *puVar3 = uVar7;
      }
    }
  }
  return;
}

// PaintFastPath_UpdateNextWidget @ 142449da0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FSlateInvalidationRoot::PaintFastPath_UpdateNextWidget
          (FSlateInvalidationRoot *this,FSlateInvalidationContext *param_1,
          FSlateInvalidationPaintFastPathContext *param_2)

{
  int *piVar1;
  FScriptContainerElement *_Dst;
  FSlateInvalidationWidgetIndex FVar2;
  uint uVar3;
  FSlateInvalidationWidgetList *pFVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  uint uVar8;
  int iVar9;
  FWidgetProxy *this_00;
  FWidgetProxy *local_res8;
  FUpdateResult local_48;
  FSlateInvalidationWidgetIndex local_38;
  FSlateInvalidationWidgetIndex local_34;
  FSlateInvalidationWidgetSortOrder local_30;
  FSlateInvalidationWidgetSortOrder local_2c;
  
  if (((this->FinalUpdateList).ArrayNum < 1) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar5 = (code *)swi(3);
    uVar7 = (*pcVar5)();
    return (bool)uVar7;
  }
  iVar9 = (this->FinalUpdateList).ArrayNum;
  FVar2 = *(FSlateInvalidationWidgetIndex *)
           ((this->FinalUpdateList).AllocatorInstance.Data + (longlong)iVar9 * 8 + -8);
  (this->FinalUpdateList).ArrayNum = iVar9 + -1;
  this_00 = FSlateInvalidationWidgetList::operator[]((this->FastWidgetPathList).Ptr,FVar2);
  if ((GSlateInvalidationRootVerifyWidgetsAreUpdatedOnce != false) &&
     (((this_00->field7_0x17).PrivateDebugFlags & 8) != 0)) {
    local_res8 = this_00;
    `FSlateInvalidationRoot::PaintFastPath_UpdateNextWidget'::__l5::<lambda_1>::operator()
              (&local_res8);
  }
  if (((((this_00->Visibility).field0_0x0.Flags & 3) != 3) || (this_00->Widget == (SWidget *)0x0))
     || (FWidgetProxy::Update(this_00,&local_48,param_1->PaintArgs,param_1->WindowElementList),
        local_48.bPainted == false)) {
    return false;
  }
  local_38 = this_00->Index;
  FVar2 = this_00->LeafMostChildIndex;
  pFVar4 = (this->FastWidgetPathList).Ptr;
  local_34 = FVar2;
  FSlateInvalidationWidgetSortOrder::FSlateInvalidationWidgetSortOrder(&local_30,pFVar4,local_38);
  FSlateInvalidationWidgetSortOrder::FSlateInvalidationWidgetSortOrder(&local_2c,pFVar4,FVar2);
  uVar3 = (this->FinalUpdateList).ArrayNum;
  while (0 < (int)uVar3) {
    uVar8 = 0;
    if ((int)(uVar3 - 1) < (int)uVar3) {
      uVar8 = -uVar3 >> 0x1f;
    }
    if ((uVar8 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return (bool)uVar7;
    }
    uVar8 = *(uint *)((this->FinalUpdateList).AllocatorInstance.Data +
                     ((ulonglong)uVar3 - 1) * 8 + 4);
    if ((uVar8 < local_30.Order) || (local_2c.Order < uVar8)) break;
    uVar8 = 0;
    if ((int)(uVar3 - 1) < (this->FinalUpdateList).ArrayNum) {
      uVar8 = -uVar3 >> 0x1f;
    }
    if ((uVar8 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return (bool)uVar7;
    }
    _Dst = (this->FinalUpdateList).AllocatorInstance.Data + ((ulonglong)uVar3 - 1) * 8;
    iVar9 = (this->FinalUpdateList).ArrayNum - uVar3;
    if (iVar9 != 0) {
      memmove(_Dst,_Dst + 8,(longlong)iVar9 << 3);
    }
    piVar1 = &(this->FinalUpdateList).ArrayNum;
    *piVar1 = *piVar1 + -1;
    uVar3 = (this->FinalUpdateList).ArrayNum;
  }
  if ((((local_48.PreviousOutgoingLayerId < local_48.NewOutgoingLayerId) &&
       (GSlateInvalidationEnableReindexLayerId != false)) &&
      (((this_00->Visibility).field0_0x0.Flags & 3) == 3)) && (this_00->Widget != (SWidget *)0x0)) {
    PaintFastPath_FixupLayerId(this,param_2,this_00,local_48.NewOutgoingLayerId);
  }
  iVar9 = this->CachedMaxLayerId;
  if (this->CachedMaxLayerId < local_48.NewOutgoingLayerId) {
    iVar9 = local_48.NewOutgoingLayerId;
  }
  this->CachedMaxLayerId = iVar9;
  return true;
}

// PaintInvalidationRoot @ 14244a010

/* WARNING: Removing unreachable block (ram,0x00014244a4ac) */
/* WARNING: Removing unreachable block (ram,0x00014244a4b6) */
/* WARNING: Enum "Type": Some values do not have unique names */

FSlateInvalidationResult * __thiscall
FSlateInvalidationRoot::PaintInvalidationRoot
          (FSlateInvalidationRoot *this,FSlateInvalidationResult *__return_storage_ptr__,
          FSlateInvalidationContext *param_1)

{
  atomic<int> *paVar1;
  undefined4 uVar2;
  atomic<int> aVar3;
  TVector2<float>_u_0_s_0 TVar4;
  longlong lVar5;
  SWidget *pSVar6;
  code *pcVar7;
  float fVar8;
  bool bVar9;
  bool bVar10;
  EFlowDirection EVar11;
  uint uVar12;
  atomic<int> aVar13;
  int iVar14;
  FSlateInvalidationResult *pFVar15;
  FSlateInvalidationWidgetList *pFVar16;
  EFlowDirection EVar17;
  uint uVar18;
  ulonglong uVar19;
  longlong lVar20;
  TReferenceControllerBase<1> *pTVar21;
  longlong lVar22;
  TReferenceControllerBase<1> *pTVar23;
  longlong lVar24;
  longlong lVar25;
  float local_100;
  float fStack_fc;
  float local_ec;
  float fStack_e8;
  TSharedRef<SWidget,1> local_e0;
  longlong local_d0;
  FSlateInvalidationWidgetList *local_c8;
  FSlateInvalidationContext *local_c0;
  FSlateInvalidationResult *local_b8;
  TTransform2<float> local_b0;
  TTransform2<float> local_98 [4];
  
  local_c0 = param_1;
  local_b8 = __return_storage_ptr__;
  if ((this->InvalidationRootWidget == (SWidget *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("InvalidationRootWidget",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\FastUpdate\\SlateInvalidationRoot.cpp"
                         ,0x169,L""), bVar9)) {
    pcVar7 = (code *)swi(3);
    pFVar15 = (FSlateInvalidationResult *)(*pcVar7)();
    return pFVar15;
  }
  if ((this->RootHittestGrid == (FHittestGrid *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("RootHittestGrid",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\FastUpdate\\SlateInvalidationRoot.cpp"
                         ,0x16a,L""), bVar9)) {
    pcVar7 = (code *)swi(3);
    pFVar15 = (FSlateInvalidationResult *)(*pcVar7)();
    return pFVar15;
  }
  this->LastPaintType = None;
  __return_storage_ptr__->ViewOffset = (FDeprecateSlateVector2D)0x0;
  __return_storage_ptr__->MaxLayerIdPainted = 0;
  __return_storage_ptr__->bRepaintedWidgets = false;
  if (param_1->bAllowFastPathUpdate != false) {
    FSlateWindowElementList::PushCachedElementData
              (param_1->WindowElementList,this->CachedElementData);
  }
  (**(code **)(this->_padding_ + 0x20))(this,&local_e0);
  if (this->bNeedScreenPositionShift != false) {
    FGenericPlatformMisc::BeginNamedEvent(&FColor::Red,"Slate_InvalidateScreenPosition");
    bVar9 = -1 < CpuChannel->Enabled;
    if (bVar9) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId379,"Slate_InvalidateScreenPosition",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\FastUpdate\\SlateInvalidationRoot.cpp"
                 ,0x17b);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId379);
    }
    fVar8 = __real_3f800000;
    pFVar16 = (this->FastWidgetPathList).Ptr;
    iVar14 = pFVar16->FirstArrayIndex;
    TVar4 = (param_1->PaintArgs->WindowOffset).field0_0x0._s_0;
    local_c8 = pFVar16;
    if (iVar14 != -1) {
      fStack_e8 = TVar4.Y;
      local_ec = TVar4.X;
      do {
        lVar20 = *(longlong *)&pFVar16->Data;
        lVar24 = (longlong)iVar14 * 0x40;
        uVar19 = (ulonglong)*(ushort *)(lVar20 + 0xc + lVar24);
        lVar22 = (longlong)*(int *)(lVar20 + 0x18 + lVar24);
        local_d0 = lVar20;
        if ((longlong)uVar19 < lVar22) {
          lVar25 = uVar19 * 0x18;
          lVar22 = lVar22 - uVar19;
          do {
            uVar18 = (uint)uVar19;
            uVar12 = 0;
            if ((int)uVar18 < *(int *)(lVar20 + 0x18 + lVar24)) {
              uVar12 = ~uVar18 >> 0x1f;
            }
            if ((uVar12 == 0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar10)) {
              pcVar7 = (code *)swi(3);
              pFVar15 = (FSlateInvalidationResult *)(*pcVar7)();
              return pFVar15;
            }
            lVar5 = *(longlong *)(lVar25 + *(longlong *)(lVar20 + 0x10 + lVar24));
            if (lVar5 != 0) {
              FGeometry::operator=((FGeometry *)(lVar5 + 0xd8),(FGeometry *)(lVar5 + 0xa0));
              uVar2 = *(undefined4 *)(lVar5 + 0xe0);
              local_100 = (float)*(undefined8 *)(lVar5 + 0xe4);
              fStack_fc = (float)((ulonglong)*(undefined8 *)(lVar5 + 0xe4) >> 0x20);
              local_b0.M.M[0][1] = 0.0;
              local_b0.M.M[1][0] = 0.0;
              local_b0.M.M[0][0] = fVar8;
              local_b0.M.M[1][1] = fVar8;
              local_b0.Trans.field0_0x0 = (TVector2<float>_u_0)TVar4;
              Concatenate<TTransform2<float>_>
                        (local_98,(TTransform2<float> *)(lVar5 + 0xf4),&local_b0);
              *(float (*) [2])(lVar5 + 0xf4) = local_98[0].M.M[0];
              *(float (*) [2])(lVar5 + 0xfc) = local_98[0].M.M[1];
              *(ulonglong *)(lVar5 + 0xe4) =
                   CONCAT44(fStack_fc * fVar8 + fStack_e8,local_100 * fVar8 + local_ec);
              *(TVector2<float>_u_0 *)(lVar5 + 0x104) = local_98[0].Trans.field0_0x0;
              *(undefined4 *)(lVar5 + 0xe0) = uVar2;
              lVar20 = local_d0;
            }
            uVar19 = (ulonglong)(uVar18 + 1);
            lVar25 = lVar25 + 0x18;
            lVar22 = lVar22 + -1;
            pFVar16 = local_c8;
          } while (lVar22 != 0);
        }
        iVar14 = *(int *)(*(longlong *)&pFVar16->Data + 4 + lVar24);
        __return_storage_ptr__ = local_b8;
        param_1 = local_c0;
      } while (iVar14 != -1);
    }
    this->bNeedScreenPositionShift = false;
    if (bVar9) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    FGenericPlatformMisc::EndNamedEvent();
  }
  EVar17 = GSlateFlowDirection;
  EVar11 = GSlateFlowDirection;
  if (((local_e0.Object)->FlowDirectionPreference == Inherit) &&
     (GSlateFlowDirectionShouldFollowCultureByDefault != 0)) {
    EVar11 = FLayoutLocalization::GetLocalizedLayoutDirection();
    EVar17 = GSlateFlowDirection;
  }
  GSlateFlowDirection = EVar11;
  if (((param_1->bAllowFastPathUpdate == false) || (this->bNeedsSlowPath != false)) ||
     (GSlateIsInInvalidationSlowPath != false)) {
    FGenericPlatformMisc::BeginNamedEvent(&FColor::Red,"Slate_PaintSlowPath");
    bVar9 = -1 < CpuChannel->Enabled;
    if (bVar9) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId392,"Slate_PaintSlowPath",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\FastUpdate\\SlateInvalidationRoot.cpp"
                 ,0x188);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId392);
    }
    ClearAllFastPathData(this,param_1->bAllowFastPathUpdate == false);
    GSlateIsOnFastUpdatePath = false;
    this->bNeedsSlowPath = false;
    (this->CachedViewOffset).field0_0x0 = *(TVector2<float>_u_0 *)&param_1->ViewOffset;
    bVar10 = GSlateIsInInvalidationSlowPath;
    if (param_1->bAllowFastPathUpdate != false) {
      GSlateIsInInvalidationSlowPath = true;
      BuildFastPathWidgetList(this,&local_e0);
    }
    GSlateIsInInvalidationSlowPath = bVar10;
    iVar14 = (**(code **)(this->_padding_ + 0x28))(this,param_1);
    this->LastPaintType = Slow;
    this->CachedMaxLayerId = iVar14;
    __return_storage_ptr__->bRepaintedWidgets = true;
    if (bVar9) {
LAB_14244a648:
      FCpuProfilerTrace::OutputEndEvent();
    }
  }
  else {
    pFVar16 = (this->FastWidgetPathList).Ptr;
    if ((pFVar16->FirstArrayIndex == -1) ||
       (*(int *)((longlong)pFVar16->FirstArrayIndex * 0x40 + 0x18 + *(longlong *)&pFVar16->Data) ==
        0)) goto LAB_14244a652;
    pSVar6 = (pFVar16->Root).Object;
    pTVar23 = (pFVar16->Root).WeakReferenceCount.ReferenceController;
    if (pTVar23 == (TReferenceControllerBase<1> *)0x0) {
LAB_14244a49f:
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar23);
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("RootWidget == FastWidgetPathList->GetRoot().Pin()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\FastUpdate\\SlateInvalidationRoot.cpp"
                         ,0x1a7,L"");
      if (bVar9) {
        pcVar7 = (code *)swi(3);
        pFVar15 = (FSlateInvalidationResult *)(*pcVar7)();
        return pFVar15;
      }
    }
    else {
      LOCK();
      pTVar23->WeakReferenceCount = (atomic<int>)((int)pTVar23->WeakReferenceCount + 1);
      UNLOCK();
      aVar3 = pTVar23->SharedReferenceCount;
      do {
        if (aVar3 == (atomic<int>)0x0) {
          pTVar21 = (TReferenceControllerBase<1> *)0x0;
          break;
        }
        LOCK();
        aVar13 = pTVar23->SharedReferenceCount;
        bVar9 = aVar3 == aVar13;
        if (bVar9) {
          pTVar23->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
          aVar13 = aVar3;
        }
        UNLOCK();
        pTVar21 = pTVar23;
        aVar3 = aVar13;
      } while (!bVar9);
      LOCK();
      paVar1 = &pTVar23->WeakReferenceCount;
      aVar3 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar3 == (atomic<int>)0x1) {
        (**(code **)(pTVar23->_padding_ + 8))(pTVar23,1);
      }
      pTVar23 = pTVar21;
      if (((pTVar21 == (TReferenceControllerBase<1> *)0x0) || (pSVar6 == (SWidget *)0x0)) ||
         (pSVar6 != local_e0.Object)) goto LAB_14244a49f;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar21);
    }
    bVar9 = PaintFastPath(this,param_1);
    __return_storage_ptr__->bRepaintedWidgets = bVar9;
    if ((this->bNeedsSlowPath != false) ||
       ((((this->WidgetsNeedingPreUpdate).Ptr)->Heap).ArrayNum < 1)) goto LAB_14244a652;
    FGenericPlatformMisc::BeginNamedEvent(&FColor::Blue,"Slate_InvalidationProcessing_PreUpdate");
    if (-1 < CpuChannel->Enabled) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId431,"Slate_InvalidationProcessing_PreUpdate",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\FastUpdate\\SlateInvalidationRoot.cpp"
                 ,0x1af);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId431);
      ProcessPreUpdate(this);
      goto LAB_14244a648;
    }
    ProcessPreUpdate(this);
  }
  FGenericPlatformMisc::EndNamedEvent();
LAB_14244a652:
  if (param_1->bAllowFastPathUpdate != false) {
    FSlateWindowElementList::PopCachedElementData(param_1->WindowElementList);
  }
  (this->FinalUpdateList).ArrayNum = 0;
  if ((this->FinalUpdateList).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,0,&(this->FinalUpdateList).AllocatorInstance,0,&(this->FinalUpdateList).ArrayMax)
    ;
  }
  if ((GSlateInvalidationRootVerifyCachedElementDataList != false) &&
     (this->bNeedsSlowPath == false)) {
    VerifyCachedElementDataList(this);
  }
  if ((GSlateInvalidationRootVerifyHittestGrid != false) && (param_1->bAllowFastPathUpdate != false)
     ) {
    VerifyHittest(this->InvalidationRootWidget,(this->FastWidgetPathList).Ptr,this->RootHittestGrid)
    ;
  }
  *(float *)&__return_storage_ptr__->ViewOffset = (this->CachedViewOffset).field0_0x0._s_0.X;
  *(float *)&(__return_storage_ptr__->ViewOffset).field_0x4 =
       (this->CachedViewOffset).field0_0x0._s_0.Y;
  __return_storage_ptr__->MaxLayerIdPainted = this->CachedMaxLayerId;
  GSlateFlowDirection = EVar17;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_e0.SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// ProcessAttributeUpdate @ 14244b0c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FSlateInvalidationRoot::ProcessAttributeUpdate(FSlateInvalidationRoot *this)

{
  byte *pbVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  FSlateInvalidationWidgetList *pFVar5;
  code *pcVar6;
  undefined8 uVar7;
  bool bVar8;
  uint uVar9;
  undefined8 uVar10;
  uint uVar11;
  ulonglong uVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  undefined1 local_res8 [8];
  bool local_res10;
  undefined1 local_res18 [8];
  SWidget *local_res20;
  SWidget **local_a0;
  SWidget **local_98;
  undefined1 local_90 [12];
  undefined4 local_84;
  undefined1 local_80;
  undefined8 local_7c;
  undefined1 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  FWidgetAttributeIterator local_68;
  
  local_res10 = this->bProcessingAttributeUpdate;
  this->bProcessingAttributeUpdate = true;
  if (GSlateInvalidationRootVerifySlateAttribute != false) {
    pFVar5 = (this->FastWidgetPathList).Ptr;
    for (iVar3 = pFVar5->FirstArrayIndex; iVar3 != -1;
        iVar3 = *(int *)((longlong)iVar3 * 0x40 + 4 + *(longlong *)&pFVar5->Data)) {
      lVar15 = *(longlong *)&pFVar5->Data + (longlong)iVar3 * 0x40;
      uVar12 = (ulonglong)*(ushort *)(lVar15 + 0xc);
      if ((longlong)uVar12 < (longlong)*(int *)(lVar15 + 0x18)) {
        lVar14 = uVar12 * 0x18;
        lVar13 = (longlong)*(int *)(lVar15 + 0x18) - uVar12;
        do {
          uVar11 = (uint)uVar12;
          uVar9 = 0;
          if ((int)uVar11 < *(int *)(lVar15 + 0x18)) {
            uVar9 = ~uVar11 >> 0x1f;
          }
          if ((uVar9 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          uVar12 = (ulonglong)(uVar11 + 1);
          pbVar1 = (byte *)(lVar14 + 0x17 + *(longlong *)(lVar15 + 0x10));
          *pbVar1 = *pbVar1 & 0xfb;
          lVar14 = lVar14 + 0x18;
          lVar13 = lVar13 + -1;
        } while (lVar13 != 0);
      }
    }
  }
  FSlateInvalidationWidgetList::FWidgetAttributeIterator::FWidgetAttributeIterator
            (&local_68,(this->FastWidgetPathList).Ptr);
  while( true ) {
    if ((local_68.CurrentWidgetIndex.ArrayIndex == FSlateInvalidationWidgetIndex::Invalid.ArrayIndex
        ) && (local_68.CurrentWidgetIndex.ElementIndex ==
              FSlateInvalidationWidgetIndex::Invalid.ElementIndex)) {
      if ((GSlateInvalidationRootVerifySlateAttribute != false) &&
         (bVar8 = FSlateInvalidationWidgetList::VerifyElementIndexList
                            ((this->FastWidgetPathList).Ptr), !bVar8)) {
        `VerifySlateAttribute_AfterUpdate'::__l2::<lambda_1>::operator()(local_res18);
        if (1 < (byte)LogSlate._0_1_) {
          UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogSlate);
        }
        uVar7 = CVarSlateInvalidationRootVerifySlateAttribute._8_8_;
        local_84 = (**(code **)(*(longlong *)CVarSlateInvalidationRootVerifySlateAttribute._8_8_ +
                               0x18))(CVarSlateInvalidationRootVerifySlateAttribute._8_8_);
        lVar15 = *(longlong *)uVar7;
        local_7c = 0;
        local_80 = 0;
        local_74 = 0;
        local_70 = 0xf000000;
        local_6c = 0x1000000;
        uVar10 = (**(code **)(lVar15 + 0xa8))(uVar7,local_90,&local_84);
        (**(code **)(lVar15 + 0xb0))(uVar7,&u_0,uVar10);
      }
      FSlateInvalidationWidgetList::FWidgetAttributeIterator::~FWidgetAttributeIterator(&local_68);
      this->bProcessingAttributeUpdate = local_res10;
      return;
    }
    uVar9 = (uint)local_68.CurrentWidgetIndex.ElementIndex;
    lVar15 = ((ulonglong)
              CONCAT22(local_68.CurrentWidgetIndex.ElementIndex,
                       local_68.CurrentWidgetIndex.ArrayIndex) & 0xffff) * 0x40 +
             *(longlong *)&((this->FastWidgetPathList).Ptr)->Data;
    if ((*(int *)(lVar15 + 0x18) <= (int)uVar9) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) break;
    lVar13 = *(longlong *)(lVar15 + 0x10);
    lVar15 = lVar13 + (ulonglong)uVar9 * 0x18;
    local_res20 = *(SWidget **)(lVar13 + (ulonglong)uVar9 * 0x18);
    if (local_res20 == (SWidget *)0x0) {
      bVar8 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<5617769476016571483>,true,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\FastUpdate\\SlateInvalidationRoot.cpp"
                         ,0x45b,"WidgetPtr");
      if (bVar8) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      FSlateInvalidationWidgetList::FWidgetAttributeIterator::Advance(&local_68);
    }
    else if (((*(byte *)(lVar15 + 0x15) & 4) == 0) &&
            (FSlateAttributeMetaData::UpdateOnlyVisibilityAttributes(local_res20,AllowInvalidation),
            (*(byte *)(lVar15 + 0x15) & 0xc) == 0)) {
      if ((GSlateInvalidationRootVerifySlateAttribute != false) &&
         ((*(byte *)(lVar15 + 0x17) & 4) != 0)) {
        local_res8[0] = 0;
        `FSlateInvalidationRoot::ProcessAttributeUpdate'::__l16::<lambda_1>::operator()(local_res8);
      }
      uVar4 = *(undefined4 *)(lVar15 + 0x10);
      *(byte *)(lVar15 + 0x17) = *(byte *)(lVar15 + 0x17) | 4;
      cVar2 = *(char *)(lVar15 + 0x15);
      FSlateAttributeMetaData::UpdateExceptVisibilityAttributes(local_res20,AllowInvalidation);
      FSlateInvalidationWidgetList::FWidgetAttributeIterator::Advance(&local_68);
      if (*(char *)(lVar15 + 0x15) != cVar2) {
        local_a0 = &local_res20;
        `FSlateInvalidationRoot::ProcessAttributeUpdate'::__l16::<lambda_2>::operator()(&local_a0);
      }
      if (((short)uVar4 != (short)*(undefined4 *)(lVar15 + 0x10)) ||
         ((short)((uint)uVar4 >> 0x10) != (short)((uint)*(undefined4 *)(lVar15 + 0x10) >> 0x10))) {
        local_98 = &local_res20;
        `FSlateInvalidationRoot::ProcessAttributeUpdate'::__l16::<lambda_3>::operator()(&local_98);
      }
    }
    else {
      FSlateAttributeMetaData::ApplyDelayedInvalidation(local_res20);
      FSlateInvalidationWidgetList::FWidgetAttributeIterator::Advance(&local_68);
    }
  }
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}

// ProcessInvalidation @ 14244bc90

bool __thiscall FSlateInvalidationRoot::ProcessInvalidation(FSlateInvalidationRoot *this)

{
  FWidgetProxy *pFVar1;
  ushort uVar2;
  int iVar3;
  longlong lVar4;
  FSlateInvalidationWidgetPrepassHeap *pFVar5;
  FSlateInvalidationWidgetPrepassHeap *pFVar6;
  FSlateInvalidationWidgetPostHeap *pFVar7;
  FSlateInvalidationWidgetPostHeap *pFVar8;
  code *pcVar9;
  double dVar10;
  double dVar11;
  bool bVar12;
  bool bVar13;
  undefined1 uVar14;
  bool bVar15;
  uint uVar16;
  char cVar17;
  FSlateInvalidationWidgetList *pFVar18;
  uint uVar19;
  ulonglong uVar20;
  FSlateInvalidationWidgetPrepassHeap *pFVar21;
  FSlateInvalidationWidgetPostHeap *pFVar22;
  longlong lVar23;
  longlong lVar24;
  bool bVar25;
  FIdentityFunctor local_res8;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  LARGE_INTEGER local_f0;
  LARGE_INTEGER local_e8;
  LARGE_INTEGER local_e0;
  LARGE_INTEGER local_d8;
  LARGE_INTEGER local_d0;
  FSlateInvalidationWidgetList *local_c8;
  longlong local_c0;
  FSlateInvalidationWidgetList *local_b8;
  LARGE_INTEGER local_b0;
  LARGE_INTEGER local_a8;
  LARGE_INTEGER local_a0;
  LARGE_INTEGER local_98;
  LARGE_INTEGER local_90;
  FWidgetVolatileUpdateIterator local_88 [3];
  
  FGenericPlatformMisc::BeginNamedEvent(&FColor::Blue,"Slate_InvalidationProcessing");
  bVar25 = -1 < CpuChannel->Enabled;
  if (bVar25) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1289,"Slate_InvalidationProcessing",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\FastUpdate\\SlateInvalidationRoot.cpp"
               ,0x509);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1289);
  }
  (this->PerformanceStat).WidgetsPreUpdate = 0.0;
  (this->PerformanceStat).WidgetsAttribute = 0.0;
  (this->PerformanceStat).WidgetsPrepass = 0.0;
  (this->PerformanceStat).WidgetsUpdate = 0.0;
  (this->PerformanceStat).InvalidationProcessing = 0.0;
  QueryPerformanceCounter(&local_f0);
  bVar12 = GSlateIsOnFastProcessInvalidation;
  GSlateIsOnFastProcessInvalidation = true;
  dVar11 = (double)local_f0.QuadPart * FGenericPlatformTime::SecondsPerCycle;
  if (this->bNeedsSlowPath == false) {
    if (((this->WidgetsNeedingPreUpdate).Ptr == (FSlateInvalidationWidgetPreHeap *)0x0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("WidgetsNeedingPreUpdate",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\FastUpdate\\SlateInvalidationRoot.cpp"
                            ,0x516,L""), bVar13)) {
      pcVar9 = (code *)swi(3);
      uVar14 = (*pcVar9)();
      return (bool)uVar14;
    }
    if (((this->WidgetsNeedingPrepassUpdate).Ptr == (FSlateInvalidationWidgetPrepassHeap *)0x0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("WidgetsNeedingPrepassUpdate",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\FastUpdate\\SlateInvalidationRoot.cpp"
                            ,0x517,L""), bVar13)) {
      pcVar9 = (code *)swi(3);
      uVar14 = (*pcVar9)();
      return (bool)uVar14;
    }
    if (((this->WidgetsNeedingPostUpdate).Ptr == (FSlateInvalidationWidgetPostHeap *)0x0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("WidgetsNeedingPostUpdate",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\FastUpdate\\SlateInvalidationRoot.cpp"
                            ,0x518,L""), bVar13)) {
      pcVar9 = (code *)swi(3);
      uVar14 = (*pcVar9)();
      return (bool)uVar14;
    }
    FGenericPlatformMisc::BeginNamedEvent(&FColor::Blue,"Slate_InvalidationProcessing_PreUpdate");
    bVar13 = -1 < CpuChannel->Enabled;
    if (bVar13) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId1306,"Slate_InvalidationProcessing_PreUpdate",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\FastUpdate\\SlateInvalidationRoot.cpp"
                 ,0x51a);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1306);
    }
    QueryPerformanceCounter(&local_e8);
    dVar10 = (double)local_e8.QuadPart * FGenericPlatformTime::SecondsPerCycle;
    ProcessPreUpdate(this);
    QueryPerformanceCounter(&local_e0);
    (this->PerformanceStat).WidgetsPreUpdate =
         ((double)local_e0.QuadPart * FGenericPlatformTime::SecondsPerCycle - dVar10) +
         (this->PerformanceStat).WidgetsPreUpdate;
    if (bVar13) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    FGenericPlatformMisc::EndNamedEvent();
    if (this->bNeedsSlowPath == false) {
      FGenericPlatformMisc::BeginNamedEvent
                (&FColor::Blue,"Slate_InvalidationProcessing_AttributeUpdate");
      bVar13 = -1 < CpuChannel->Enabled;
      if (bVar13) {
        FCpuProfilerTrace::GetOrCreateSpecId
                  (&__CpuProfilerEventSpecId1317,"Slate_InvalidationProcessing_AttributeUpdate",
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\FastUpdate\\SlateInvalidationRoot.cpp"
                   ,0x525);
        FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1317);
      }
      QueryPerformanceCounter(&local_d8);
      dVar10 = (double)local_d8.QuadPart * FGenericPlatformTime::SecondsPerCycle;
      ProcessAttributeUpdate(this);
      QueryPerformanceCounter(&local_d0);
      (this->PerformanceStat).WidgetsAttribute =
           ((double)local_d0.QuadPart * FGenericPlatformTime::SecondsPerCycle - dVar10) +
           (this->PerformanceStat).WidgetsAttribute;
      if (bVar13) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      FGenericPlatformMisc::EndNamedEvent();
    }
  }
  cVar17 = this->bNeedsSlowPath;
  if (((bool)cVar17 == false) && (0 < (((this->WidgetsNeedingPreUpdate).Ptr)->Heap).ArrayNum)) {
    FGenericPlatformMisc::BeginNamedEvent(&FColor::Blue,"Slate_InvalidationProcessing_PreUpdate");
    if (CpuChannel->Enabled < 0) {
      ProcessPreUpdate(this);
    }
    else {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId1328,"Slate_InvalidationProcessing_PreUpdate",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\FastUpdate\\SlateInvalidationRoot.cpp"
                 ,0x530);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1328);
      ProcessPreUpdate(this);
      FCpuProfilerTrace::OutputEndEvent();
    }
    FGenericPlatformMisc::EndNamedEvent();
    cVar17 = this->bNeedsSlowPath;
  }
  if ((GSlateInvalidationRootVerifyWidgetVisibility != false) && (cVar17 == '\0')) {
    pFVar18 = (this->FastWidgetPathList).Ptr;
    iVar3 = pFVar18->FirstArrayIndex;
    local_c8 = pFVar18;
    local_b8 = pFVar18;
    while (iVar3 != -1) {
      lVar4 = *(longlong *)&pFVar18->Data;
      local_c0 = (longlong)iVar3;
      lVar23 = local_c0 * 0x40;
      uVar2 = *(ushort *)(lVar23 + 0xc + lVar4);
      uVar20 = (ulonglong)uVar2;
      iVar3 = *(int *)(lVar23 + 0x18 + lVar4);
      if ((int)(uint)uVar2 < iVar3) {
        lVar24 = uVar20 * 0x18;
        do {
          uVar19 = (uint)uVar20;
          uVar16 = 0;
          if ((int)uVar19 < *(int *)(lVar23 + 0x18 + lVar4)) {
            uVar16 = ~uVar19 >> 0x1f;
          }
          if ((uVar16 == 0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar13)) {
            pcVar9 = (code *)swi(3);
            uVar14 = (*pcVar9)();
            return (bool)uVar14;
          }
          `VerifyWidgetVisibility'::__l2::<lambda_1>::operator()
                    (&local_c8,(FWidgetProxy *)(*(longlong *)(lVar23 + 0x10 + lVar4) + lVar24));
          uVar20 = (ulonglong)(uVar19 + 1);
          lVar24 = lVar24 + 0x18;
          pFVar18 = local_b8;
        } while ((int)(uVar19 + 1) < iVar3);
      }
      iVar3 = *(int *)(local_c0 * 0x40 + 4 + *(longlong *)&pFVar18->Data);
    }
  }
  if (this->bNeedsSlowPath == false) {
    pFVar5 = (this->WidgetsNeedingPrepassUpdate).Ptr;
    if ((pFVar5->bIsHeap != false) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("!bIsHeap",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\FastUpdate\\SlateInvalidationWidgetHeap.h"
                            ,0x1e0,L""), bVar13)) {
      pcVar9 = (code *)swi(3);
      uVar14 = (*pcVar9)();
      return (bool)uVar14;
    }
    pFVar6 = *(FSlateInvalidationWidgetPrepassHeap **)
              &(pFVar5->Heap).AllocatorInstance.SecondaryData.field_0x0;
    local_res8 = SUB81(this,0);
    pFVar21 = pFVar5;
    if (pFVar6 != (FSlateInvalidationWidgetPrepassHeap *)0x0) {
      pFVar21 = pFVar6;
    }
    AlgoImpl::
    HeapifyInternal<FSlateInvalidationWidgetHeapElement,int,FIdentityFunctor,TDereferenceWrapper<FSlateInvalidationWidgetHeapElement,FSlateInvalidationWidgetPrepassHeap::FWidgetOrderGreater>_>
              ((FSlateInvalidationWidgetHeapElement *)pFVar21,(pFVar5->Heap).ArrayNum,local_res8,
               (FWidgetOrderGreater *)local_res18);
    pFVar5->bIsHeap = true;
    pFVar7 = (this->WidgetsNeedingPostUpdate).Ptr;
    if ((pFVar7->bIsHeap != false) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("!bIsHeap",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\FastUpdate\\SlateInvalidationWidgetHeap.h"
                            ,0x121,L""), bVar13)) {
      pcVar9 = (code *)swi(3);
      uVar14 = (*pcVar9)();
      return (bool)uVar14;
    }
    pFVar8 = *(FSlateInvalidationWidgetPostHeap **)
              &(pFVar7->Heap).AllocatorInstance.SecondaryData.field_0x0;
    pFVar22 = pFVar7;
    if (pFVar8 != (FSlateInvalidationWidgetPostHeap *)0x0) {
      pFVar22 = pFVar8;
    }
    AlgoImpl::
    HeapifyInternal<FSlateInvalidationWidgetHeapElement,int,FIdentityFunctor,TDereferenceWrapper<FSlateInvalidationWidgetHeapElement,FSlateInvalidationWidgetPostHeap::FWidgetOrderGreater>_>
              ((FSlateInvalidationWidgetHeapElement *)pFVar22,(pFVar7->Heap).ArrayNum,local_res8,
               (FWidgetOrderGreater *)local_res20);
    pFVar7->bIsHeap = true;
    FSlateInvalidationWidgetList::FWidgetVolatileUpdateIterator::FWidgetVolatileUpdateIterator
              (local_88,(this->FastWidgetPathList).Ptr,true);
    while ((local_88[0].CurrentWidgetIndex.ArrayIndex !=
            FSlateInvalidationWidgetIndex::Invalid.ArrayIndex ||
           (local_88[0].CurrentWidgetIndex.ElementIndex !=
            FSlateInvalidationWidgetIndex::Invalid.ElementIndex))) {
      lVar23 = ((ulonglong)
                CONCAT22(local_88[0].CurrentWidgetIndex.ElementIndex,
                         local_88[0].CurrentWidgetIndex.ArrayIndex) & 0xffff) * 0x40;
      uVar16 = (uint)local_88[0].CurrentWidgetIndex.ElementIndex;
      lVar4 = *(longlong *)&((this->FastWidgetPathList).Ptr)->Data;
      if ((*(int *)(lVar23 + 0x18 + lVar4) <= (int)uVar16) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar9 = (code *)swi(3);
        uVar14 = (*pcVar9)();
        return (bool)uVar14;
      }
      pFVar1 = (FWidgetProxy *)(*(longlong *)(lVar23 + 0x10 + lVar4) + (ulonglong)uVar16 * 0x18);
      FSlateInvalidationWidgetPostHeap::HeapPushUnique((this->WidgetsNeedingPostUpdate).Ptr,pFVar1);
      if (((pFVar1->field6_0x16).PrivateFlags & 0x10) != 0) {
        pFVar1->CurrentInvalidateReason = pFVar1->CurrentInvalidateReason | Layout;
        FSlateInvalidationWidgetPrepassHeap::HeapPushUnique
                  ((this->WidgetsNeedingPrepassUpdate).Ptr,pFVar1);
      }
      FSlateInvalidationWidgetList::FWidgetVolatileUpdateIterator::Advance(local_88);
    }
  }
  if (this->bNeedsSlowPath == false) {
    FGenericPlatformMisc::BeginNamedEvent
              (&FColor::Blue,"Slate_InvalidationProcessing_PrepassUpdate");
    bVar13 = -1 < CpuChannel->Enabled;
    if (bVar13) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId1366,"Slate_InvalidationProcessing_PrepassUpdate",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\FastUpdate\\SlateInvalidationRoot.cpp"
                 ,0x556);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1366);
    }
    QueryPerformanceCounter(&local_b0);
    dVar10 = (double)local_b0.QuadPart * FGenericPlatformTime::SecondsPerCycle;
    ProcessPrepassUpdate(this);
    QueryPerformanceCounter(&local_a8);
    (this->PerformanceStat).WidgetsPrepass =
         ((double)local_a8.QuadPart * FGenericPlatformTime::SecondsPerCycle - dVar10) +
         (this->PerformanceStat).WidgetsPrepass;
    if (bVar13) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    FGenericPlatformMisc::EndNamedEvent();
    if (this->bNeedsSlowPath == false) {
      uVar16 = (((this->WidgetsNeedingPostUpdate).Ptr)->Heap).ArrayNum;
      if ((int)uVar16 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar16);
      }
      (this->FinalUpdateList).ArrayNum = 0;
      if ((this->FinalUpdateList).ArrayMax < (int)uVar16) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,4,uVar16,&(this->FinalUpdateList).AllocatorInstance,0,
                   &(this->FinalUpdateList).ArrayMax);
      }
      FGenericPlatformMisc::BeginNamedEvent(&FColor::Blue,"Slate_InvalidationProcessing_PostUpdate")
      ;
      bVar13 = -1 < CpuChannel->Enabled;
      if (bVar13) {
        FCpuProfilerTrace::GetOrCreateSpecId
                  (&__CpuProfilerEventSpecId1379,"Slate_InvalidationProcessing_PostUpdate",
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\FastUpdate\\SlateInvalidationRoot.cpp"
                   ,0x563);
        FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1379);
      }
      QueryPerformanceCounter(&local_a0);
      dVar10 = (double)local_a0.QuadPart * FGenericPlatformTime::SecondsPerCycle;
      bVar15 = ProcessPostUpdate(this);
      QueryPerformanceCounter(&local_98);
      (this->PerformanceStat).WidgetsUpdate =
           ((double)local_98.QuadPart * FGenericPlatformTime::SecondsPerCycle - dVar10) +
           (this->PerformanceStat).WidgetsUpdate;
      if (bVar13) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      FGenericPlatformMisc::EndNamedEvent();
      if (this->bNeedsSlowPath == false) goto LAB_14244c4bc;
    }
  }
  FSlateInvalidationWidgetPreHeap::Reset((this->WidgetsNeedingPreUpdate).Ptr,true);
  FSlateInvalidationWidgetPrepassHeap::Reset((this->WidgetsNeedingPrepassUpdate).Ptr,true);
  FSlateInvalidationWidgetPostHeap::Reset((this->WidgetsNeedingPostUpdate).Ptr,true);
  (this->FinalUpdateList).ArrayNum = 0;
  if ((this->FinalUpdateList).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,0,&(this->FinalUpdateList).AllocatorInstance,0,&(this->FinalUpdateList).ArrayMax)
    ;
  }
  FSlateCachedElementData::Empty(this->CachedElementData);
  bVar15 = true;
LAB_14244c4bc:
  if ((GSlateInvalidationRootVerifyWidgetVolatile != false) && (this->bNeedsSlowPath == false)) {
    VerifyWidgetVolatile((this->FastWidgetPathList).Ptr,&this->FinalUpdateList);
  }
  GSlateIsOnFastProcessInvalidation = bVar12;
  QueryPerformanceCounter(&local_90);
  (this->PerformanceStat).InvalidationProcessing =
       ((double)local_90.QuadPart * FGenericPlatformTime::SecondsPerCycle - dVar11) +
       (this->PerformanceStat).InvalidationProcessing;
  if (bVar25) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FGenericPlatformMisc::EndNamedEvent();
  return bVar15;
}

// ProcessPostUpdate @ 14244c560

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall FSlateInvalidationRoot::ProcessPostUpdate(FSlateInvalidationRoot *this)

{
  TUniquePtr<FSlateInvalidationWidgetPostHeap,TDefaultDelete<FSlateInvalidationWidgetPostHeap>_>
  *pTVar1;
  int *piVar2;
  bool bVar3;
  FSlateInvalidationWidgetPostHeap *pFVar4;
  FSlateInvalidationWidgetPreHeap *pFVar5;
  FSlateInvalidationWidgetList *pFVar6;
  ForElementType<FSlateInvalidationWidgetHeapElement> this_00;
  ulonglong uVar7;
  longlong lVar8;
  FScriptContainerElement *pFVar9;
  code *pcVar10;
  bool bVar11;
  undefined1 uVar12;
  int iVar13;
  TSharedRef<SWidget,1> *pTVar14;
  FWidgetProxy *pFVar15;
  FSlateInvalidationWidgetIndex FVar16;
  ForElementType<FSlateInvalidationWidgetHeapElement> FVar17;
  ulonglong uVar18;
  bool bVar19;
  longlong lVar20;
  FWidgetOrderGreater local_res8 [8];
  undefined8 local_res10;
  undefined1 local_58 [8];
  TReferenceControllerBase<1> *local_50;
  undefined1 local_48 [8];
  TReferenceControllerBase<1> *local_40;
  
  if (GSlateInvalidationRootVerifyWidgetsUpdateList) {
    pFVar4 = (this->WidgetsNeedingPostUpdate).Ptr;
    pFVar5 = (this->WidgetsNeedingPreUpdate).Ptr;
    pFVar6 = (this->FastWidgetPathList).Ptr;
    pTVar14 = (TSharedRef<SWidget,1> *)(**(code **)(this->_padding_ + 0x20))(this,local_58);
    VerifyWidgetsUpdateList_BeforeProcessPostUpdate
              (pTVar14,pFVar6,pFVar5,pFVar4,&this->FinalUpdateList);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_50);
  }
  bVar3 = this->bProcessingPostUpdate;
  bVar19 = false;
  this->bProcessingPostUpdate = true;
  if (GSlateInvalidationRootDumpPostInvalidationList != false) {
    if (4 < (byte)LogSlate._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogSlate);
    }
    if (4 < (byte)LogSlate._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogSlate);
    }
  }
  pTVar1 = &this->WidgetsNeedingPostUpdate;
  this_00 = (ForElementType<FSlateInvalidationWidgetHeapElement>)pTVar1->Ptr;
  iVar13 = *(int *)((longlong)this_00 + 0x328);
  while( true ) {
    if ((iVar13 == 0) || (this->bNeedsSlowPath != false)) {
      FSlateInvalidationWidgetPostHeap::Reset((FSlateInvalidationWidgetPostHeap *)this_00,true);
      if ((GSlateInvalidationRootVerifyWidgetsUpdateList != false) &&
         (this->bNeedsSlowPath == false)) {
        pFVar4 = (this->WidgetsNeedingPostUpdate).Ptr;
        pFVar5 = (this->WidgetsNeedingPreUpdate).Ptr;
        pFVar6 = (this->FastWidgetPathList).Ptr;
        pTVar14 = (TSharedRef<SWidget,1> *)(**(code **)(this->_padding_ + 0x20))(this,local_48);
        VerifyWidgetsUpdateList_AfterProcessPostUpdate
                  (pTVar14,pFVar6,pFVar5,pFVar4,&this->FinalUpdateList);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_40);
      }
      this->bProcessingPostUpdate = bVar3;
      return bVar19;
    }
    if ((*(bool *)((longlong)this_00 + 0x33c) != true) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("bIsHeap == true",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\FastUpdate\\SlateInvalidationWidgetHeap.h"
                            ,0xf5,L""), bVar11)) {
      pcVar10 = (code *)swi(3);
      uVar12 = (*pcVar10)();
      return (bool)uVar12;
    }
    if ((*(int *)((longlong)this_00 + 0x328) < 1) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar11)) {
      pcVar10 = (code *)swi(3);
      uVar12 = (*pcVar10)();
      return (bool)uVar12;
    }
    FVar17 = this_00;
    if (*(ForElementType<FSlateInvalidationWidgetHeapElement> *)((longlong)this_00 + 800) !=
        (ForElementType<FSlateInvalidationWidgetHeapElement>)0x0) {
      FVar17 = *(ForElementType<FSlateInvalidationWidgetHeapElement> *)((longlong)this_00 + 800);
    }
    uVar7 = *(ulonglong *)FVar17;
    local_res10 = uVar7;
    TArray<FSlateInvalidationWidgetHeapElement,TSizedInlineAllocator<100,32,TSizedDefaultAllocator<32>_>_>
    ::HeapPopDiscard<FSlateInvalidationWidgetPostHeap::FWidgetOrderGreater>
              ((TArray<FSlateInvalidationWidgetHeapElement,TSizedInlineAllocator<100,32,TSizedDefaultAllocator<32>_>_>
                *)this_00,local_res8,No);
    FVar16 = SUB84(uVar7,0);
    pFVar15 = FSlateInvalidationWidgetList::operator[]
                        (*(FSlateInvalidationWidgetList **)((longlong)this_00 + 0x330),FVar16);
    uVar18 = uVar7 >> 0x10 & 0xffff;
    (pFVar15->field6_0x16).PrivateFlags = (pFVar15->field6_0x16).PrivateFlags & 0xfd;
    lVar20 = (uVar7 & 0xffff) * 0x40 + *(longlong *)&((this->FastWidgetPathList).Ptr)->Data;
    if ((*(int *)(lVar20 + 0x18) <= (int)uVar18) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar11)) break;
    lVar20 = *(longlong *)(lVar20 + 0x10);
    lVar8 = *(longlong *)(lVar20 + uVar18 * 0x18);
    pFVar15 = (FWidgetProxy *)(lVar20 + uVar18 * 0x18);
    if (lVar8 != 0) {
      if (GSlateInvalidationRootDumpPostInvalidationList != false) {
        LogPostInvalidationItem((this->FastWidgetPathList).Ptr,FVar16);
      }
      bVar11 = FWidgetProxy::ProcessPostInvalidation
                         (pFVar15,pTVar1->Ptr,(this->FastWidgetPathList).Ptr,this);
      pFVar15->CurrentInvalidateReason =
           pFVar15->CurrentInvalidateReason & (AttributeRegistration|Visibility|ChildOrder);
      bVar19 = (bool)(bVar19 | bVar11);
      if ((*(char *)(lVar8 + 0x38) != '\0') && (((pFVar15->Visibility).field0_0x0.Flags & 3) == 3))
      {
        iVar13 = (this->FinalUpdateList).ArrayNum;
        piVar2 = &(this->FinalUpdateList).ArrayMax;
        if (iVar13 == *piVar2) {
          iVar13 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x408,&(this->FinalUpdateList).AllocatorInstance,piVar2);
        }
        (this->FinalUpdateList).ArrayNum = iVar13 + 1;
        pFVar9 = (this->FinalUpdateList).AllocatorInstance.Data;
        *(FSlateInvalidationWidgetIndex *)(pFVar9 + (longlong)iVar13 * 8) = FVar16;
        *(undefined4 *)(pFVar9 + (longlong)iVar13 * 8 + 4) = local_res10._4_4_;
      }
    }
    this_00 = (ForElementType<FSlateInvalidationWidgetHeapElement>)pTVar1->Ptr;
    iVar13 = *(int *)((longlong)this_00 + 0x328);
  }
  pcVar10 = (code *)swi(3);
  uVar12 = (*pcVar10)();
  return (bool)uVar12;
}

// ProcessPreUpdate @ 14244c870

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014244c98e) */
/* WARNING: Removing unreachable block (ram,0x00014244c99b) */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall FSlateInvalidationRoot::ProcessPreUpdate(FSlateInvalidationRoot *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  byte bVar3;
  int iVar4;
  FSlateInvalidationWidgetIndex FVar5;
  FSlateInvalidationWidgetPostHeap *pFVar6;
  FSlateInvalidationWidgetPreHeap *pFVar7;
  FSlateInvalidationWidgetList *pFVar8;
  SWidget *pSVar9;
  ForElementType<FSlateInvalidationWidgetHeapElement> this_00;
  code *pcVar10;
  undefined8 uVar11;
  bool bVar12;
  atomic<int> aVar13;
  TSharedRef<SWidget,1> *pTVar14;
  FWidgetProxy *pFVar15;
  FLowLevelMemTracker *this_01;
  FPageAllocator *this_02;
  undefined8 uVar16;
  ForAnyElementType FVar17;
  ForElementType<FSlateInvalidationWidgetHeapElement> FVar18;
  uint uVar19;
  SWidget *pSVar20;
  SWidget *pSVar21;
  longlong lVar22;
  uint *puVar23;
  int *piVar24;
  undefined1 uVar25;
  bool bVar26;
  undefined1 auStackY_218 [32];
  byte local_1e8;
  undefined1 local_1e7;
  FWidgetOrderLess local_1e6;
  undefined1 local_1e5;
  undefined1 local_1e4;
  undefined1 local_1e3 [11];
  TSharedRef<SWidget,1> local_1d8;
  undefined8 local_1c8;
  FArguments local_1c0;
  TSharedRef<SWidget,1> local_1a8;
  undefined4 local_198;
  undefined1 local_194;
  undefined8 local_190;
  undefined1 local_188;
  undefined4 local_184;
  undefined4 local_180;
  IProcessChildOrderInvalidationCallback local_178;
  FSlateInvalidationWidgetList *local_170;
  ForElementType<FSlateInvalidationWidgetHeapElement> local_168;
  FSlateInvalidationWidgetPrepassHeap *local_160;
  FSlateInvalidationWidgetPostHeap *local_158;
  longlong local_150;
  undefined8 local_148;
  undefined1 local_140 [8];
  TReferenceControllerBase<1> *local_138;
  FString local_130;
  FString local_120;
  FString local_110;
  FSlateInvalidationRootHandle local_f8;
  FWidgetProxyHandle local_e8;
  undefined1 local_d0 [24];
  FSlateInvalidationWidgetList local_b8;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_218;
  if (GSlateInvalidationRootVerifyWidgetsUpdateList) {
    pFVar6 = (this->WidgetsNeedingPostUpdate).Ptr;
    pFVar7 = (this->WidgetsNeedingPreUpdate).Ptr;
    pFVar8 = (this->FastWidgetPathList).Ptr;
    pTVar14 = (TSharedRef<SWidget,1> *)(**(code **)(this->_padding_ + 0x20))(this,local_140);
    VerifyWidgetsUpdateList_BeforeProcessPreUpdate
              (pTVar14,pFVar8,pFVar7,pFVar6,&this->FinalUpdateList);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_138);
  }
  uVar25 = this->bProcessingPreUpdate;
  this->bProcessingPreUpdate = true;
  local_1e7 = uVar25;
  (**(code **)(this->_padding_ + 0x20))(this);
  pFVar8 = (this->FastWidgetPathList).Ptr;
  pSVar9 = (SWidget *)(pFVar8->Root).WeakReferenceCount.ReferenceController;
  pSVar20 = (pFVar8->Root).Object;
  pSVar21 = pSVar9;
  if (pSVar9 != (SWidget *)0x0) {
    LOCK();
    ((atomic<int> *)&pSVar9->_padding_)[1] =
         (atomic<int>)((int)((atomic<int> *)&pSVar9->_padding_)[1] + 1);
    UNLOCK();
    aVar2 = *(atomic<int> *)&pSVar9->_padding_;
    do {
      pSVar21 = (SWidget *)0x0;
      if (aVar2 == (atomic<int>)0x0) break;
      LOCK();
      aVar13 = *(atomic<int> *)&pSVar9->_padding_;
      bVar26 = aVar2 == aVar13;
      if (bVar26) {
        *(atomic<int> *)&pSVar9->_padding_ = (atomic<int>)((int)aVar2 + 1);
        aVar13 = aVar2;
      }
      UNLOCK();
      pSVar21 = pSVar9;
      aVar2 = aVar13;
    } while (!bVar26);
    LOCK();
    paVar1 = (atomic<int> *)&pSVar9->_padding_ + 1;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pSVar9->_padding_ + 8))(pSVar9);
    }
  }
  if (pSVar21 == (SWidget *)0x0) {
    pSVar20 = (SWidget *)0x0;
  }
  if ((pSVar20 == (SWidget *)0x0) || (pSVar20 != local_1d8.Object)) {
    bVar26 = true;
  }
  else {
    bVar26 = false;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar21);
  if (bVar26) {
    BuildFastPathWidgetList(this,&local_1d8);
    local_e8.InvalidationRootHandle.InvalidationRoot =
         ((local_1d8.Object)->FastPathProxyHandle).InvalidationRootHandle.InvalidationRoot;
    local_e8.InvalidationRootHandle.UniqueId =
         ((local_1d8.Object)->FastPathProxyHandle).InvalidationRootHandle.UniqueId;
    local_e8.InvalidationRootHandle._12_4_ =
         *(undefined4 *)&((local_1d8.Object)->FastPathProxyHandle).InvalidationRootHandle.field_0xc;
    local_e8.WidgetIndex = ((local_1d8.Object)->FastPathProxyHandle).WidgetIndex;
    local_e8.WidgetSortOrder.Order = ((local_1d8.Object)->FastPathProxyHandle).WidgetSortOrder.Order
    ;
    bVar26 = FWidgetProxyHandle::IsValid(&local_e8,local_1d8.Object);
    if ((!bVar26) &&
       (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                           ("RootWidget->GetProxyHandle().IsValid(&RootWidget.Get())",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\FastUpdate\\SlateInvalidationRoot.cpp"
                            ,0x387,L""), bVar26)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    FSlateInvalidationWidgetPostHeap::Reset((this->WidgetsNeedingPostUpdate).Ptr,true);
    SWidget::Invalidate(local_1d8.Object,Prepass);
  }
  else {
    if (((GSlateInvalidationRootDumpPreInvalidationList != false) && (4 < (byte)LogSlate._0_1_)) &&
       (UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogSlate),
       4 < (byte)LogSlate._0_1_)) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogSlate);
    }
    this_00 = (ForElementType<FSlateInvalidationWidgetHeapElement>)
              (this->WidgetsNeedingPreUpdate).Ptr;
    local_178 = (IProcessChildOrderInvalidationCallback)
                &`FSlateInvalidationRoot::ProcessPreUpdate'::`18'::
                 FChildOrderInvalidationCallbackImpl::_vftable_;
    local_170 = (this->FastWidgetPathList).Ptr;
    local_160 = (this->WidgetsNeedingPrepassUpdate).Ptr;
    local_158 = (this->WidgetsNeedingPostUpdate).Ptr;
    local_150 = 0;
    local_148 = 0;
    iVar4 = *(int *)((longlong)this_00 + 0x108);
    local_168 = this_00;
    while ((0 < iVar4 && (uVar25 = local_1e7, this->bNeedsSlowPath == false))) {
      if ((*(int *)((longlong)this_00 + 0x108) < 1) &&
         (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                             ("Heap.Num() > 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\FastUpdate\\SlateInvalidationWidgetHeap.h"
                              ,0x3e,L""), bVar26)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      if ((*(int *)((longlong)this_00 + 0x108) < 1) &&
         (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar26)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      FVar18 = this_00;
      if (*(ForElementType<FSlateInvalidationWidgetHeapElement> *)((longlong)this_00 + 0x100) !=
          (ForElementType<FSlateInvalidationWidgetHeapElement>)0x0) {
        FVar18 = *(ForElementType<FSlateInvalidationWidgetHeapElement> *)((longlong)this_00 + 0x100)
        ;
      }
      FVar5 = *(FSlateInvalidationWidgetIndex *)FVar18;
      TArray<FSlateInvalidationWidgetHeapElement,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>
      ::HeapPopDiscard<FSlateInvalidationWidgetPreHeap::FWidgetOrderLess>
                ((TArray<FSlateInvalidationWidgetHeapElement,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>
                  *)this_00,&local_1e6,No);
      pFVar15 = FSlateInvalidationWidgetList::operator[]
                          (*(FSlateInvalidationWidgetList **)((longlong)this_00 + 0x110),FVar5);
      uVar19 = (uint)FVar5 >> 0x10;
      (pFVar15->field6_0x16).PrivateFlags = (pFVar15->field6_0x16).PrivateFlags & 0xfe;
      lVar22 = (ulonglong)((uint)FVar5 & 0xffff) * 0x40 +
               *(longlong *)&((this->FastWidgetPathList).Ptr)->Data;
      if ((*(int *)(lVar22 + 0x18) <= (int)uVar19) &&
         (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar26)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      lVar22 = *(longlong *)(lVar22 + 0x10);
      pSVar9 = *(SWidget **)(lVar22 + (ulonglong)uVar19 * 0x18);
      bVar3 = *(byte *)(lVar22 + 0x14 + (ulonglong)uVar19 * 0x18);
      if (pSVar9 != (SWidget *)0x0) {
        if (GSlateInvalidationRootDumpPreInvalidationList != false) {
          pFVar15 = FSlateInvalidationWidgetList::operator[]((this->FastWidgetPathList).Ptr,FVar5);
          if ((pFVar15->CurrentInvalidateReason & AttributeRegistration) == None) {
            if ((pFVar15->CurrentInvalidateReason & ChildOrder) == None) {
              if (4 < (byte)LogSlate._0_1_) {
                FReflectionMetaData::GetWidgetDebugInfo(&local_110,pFVar15->Widget);
                UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogSlate);
                FVar17.Data = local_110.Data.AllocatorInstance.Data;
                goto LAB_14244ccac;
              }
            }
            else if (4 < (byte)LogSlate._0_1_) {
              FReflectionMetaData::GetWidgetDebugInfo(&local_120,pFVar15->Widget);
              UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogSlate);
              FVar17.Data = local_120.Data.AllocatorInstance.Data;
LAB_14244ccac:
              if (FVar17.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(FVar17.Data);
              }
            }
          }
          else if (4 < (byte)LogSlate._0_1_) {
            FReflectionMetaData::GetWidgetDebugInfo(&local_130,pFVar15->Widget);
            UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogSlate);
            FVar17.Data = local_130.Data.AllocatorInstance.Data;
            goto LAB_14244ccac;
          }
        }
        if ((bVar3 & 8) != 0) {
          bVar26 = this->bProcessingChildOrderInvalidation;
          this->bProcessingChildOrderInvalidation = true;
          bVar12 = FSlateInvalidationWidgetList::ProcessChildOrderInvalidation
                             ((this->FastWidgetPathList).Ptr,FVar5,&local_178);
          if (!bVar12) {
            this->bProcessingChildOrderInvalidation = bVar26;
            goto LAB_14244cd68;
          }
          pFVar15 = FSlateInvalidationWidgetList::operator[]((this->FastWidgetPathList).Ptr,FVar5);
          pFVar15->CurrentInvalidateReason =
               pFVar15->CurrentInvalidateReason &
               (Prepass|AttributeRegistration|Visibility|RenderTransform|PaintAndVolatility|Layout);
          this->bProcessingChildOrderInvalidation = bVar26;
        }
        if ((bVar3 & 0x40) != 0) {
          pFVar15 = FSlateInvalidationWidgetList::operator[]((this->FastWidgetPathList).Ptr,FVar5);
          FSlateInvalidationWidgetList::ProcessAttributeRegistrationInvalidation
                    ((this->FastWidgetPathList).Ptr,pFVar15);
          pFVar15->CurrentInvalidateReason =
               pFVar15->CurrentInvalidateReason &
               (Prepass|Visibility|RenderTransform|ChildOrder|PaintAndVolatility|Layout);
        }
        if ((bVar3 & 0x20) != 0) {
          pFVar15 = FSlateInvalidationWidgetList::operator[]((this->FastWidgetPathList).Ptr,FVar5);
          bVar3 = (pFVar15->Visibility).field0_0x0.Flags;
          local_1e8 = (bVar3 & 5) * '\x02' ^ bVar3 & 5;
          SWidget::UpdateFastPathVisibility
                    (pSVar9,(FSlateInvalidationWidgetVisibility)SUB81(&local_1e8,0),
                     this->RootHittestGrid);
          pFVar15->CurrentInvalidateReason =
               pFVar15->CurrentInvalidateReason &
               (Prepass|AttributeRegistration|RenderTransform|ChildOrder|PaintAndVolatility|Layout);
          pFVar15->CurrentInvalidateReason = pFVar15->CurrentInvalidateReason | RenderTransform;
          FSlateInvalidationWidgetPostHeap::PushBackOrHeapUnique
                    ((this->WidgetsNeedingPostUpdate).Ptr,pFVar15);
        }
      }
LAB_14244cd68:
      this_00 = (ForElementType<FSlateInvalidationWidgetHeapElement>)
                (this->WidgetsNeedingPreUpdate).Ptr;
      iVar4 = *(int *)((longlong)this_00 + 0x108);
      uVar25 = local_1e7;
    }
    if (local_150 != 0) {
      puVar23 = (uint *)(local_150 + -8);
      MemoryTrace_Free((ulong64)puVar23,0,0);
      if (FLowLevelMemTracker::EnabledState != Disabled) {
        this_01 = FLowLevelMemTracker::TrackerInstance;
        if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
          this_01 = FLowLevelMemTracker::Construct();
        }
        FLowLevelMemTracker::OnLowLevelFree(this_01,Default,puVar23,FMalloc,true);
      }
      piVar24 = (int *)((longlong)puVar23 - (ulonglong)*puVar23);
      LOCK();
      iVar4 = *piVar24;
      *piVar24 = *piVar24 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        lVar22 = *(longlong *)(piVar24 + 0x10);
        MemoryTrace_UnmarkAllocAsHeap((ulong64)piVar24,0,0);
        if (lVar22 - (longlong)piVar24 == 0x10000) {
          this_02 = FPageAllocator::Get();
          FPageAllocator::Free(this_02,piVar24);
        }
        else {
          (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,piVar24);
        }
      }
    }
  }
  if (GSlateInvalidationRootVerifyWidgetList != false) {
    pFVar8 = (this->FastWidgetPathList).Ptr;
    local_f8.InvalidationRoot = (this->InvalidationRootHandle).InvalidationRoot;
    local_f8.UniqueId = (this->InvalidationRootHandle).UniqueId;
    local_f8._12_4_ = *(undefined4 *)&(this->InvalidationRootHandle).field_0xc;
    local_1a8.Object = local_1d8.Object;
    local_1a8.SharedReferenceCount.ReferenceController =
         local_1d8.SharedReferenceCount.ReferenceController;
    if (local_1d8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_1d8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_1d8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_1c0.PreferedElementsNum = 0x80;
    local_1c0.NumberElementsLeftBeforeSplitting = 0x80;
    local_1c0.SortOrderPaddingBetweenArray = 1000;
    local_1c0.bAssignedWidgetIndex = false;
    FSlateInvalidationWidgetList::FSlateInvalidationWidgetList(&local_b8,&local_f8,&local_1c0);
    FSlateInvalidationWidgetList::BuildWidgetList(&local_b8,&local_1a8);
    bVar26 = FSlateInvalidationWidgetList::DeepCompare(&local_b8,pFVar8);
    if (!bVar26) {
      if (4 < (byte)LogSlate._0_1_) {
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogSlate);
      }
      FSlateInvalidationWidgetList::LogWidgetsList(&local_b8,true);
      if (4 < (byte)LogSlate._0_1_) {
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogSlate);
      }
      FSlateInvalidationWidgetList::LogWidgetsList(pFVar8,true);
      `VerifyWidgetList'::__l5::<lambda_1>::operator()(&local_1e5);
      if (1 < (byte)LogSlate._0_1_) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogSlate);
      }
      uVar11 = CVarSlateInvalidationRootVerifyWidgetList._8_8_;
      local_1c8 = 0;
      local_198 = (**(code **)(*(longlong *)CVarSlateInvalidationRootVerifyWidgetList._8_8_ + 0x18))
                            (CVarSlateInvalidationRootVerifyWidgetList._8_8_);
      lVar22 = *(longlong *)uVar11;
      local_190 = local_1c8;
      local_194 = 0;
      local_188 = 0;
      local_184 = 0xf000000;
      local_180 = 0x1000000;
      uVar16 = (**(code **)(lVar22 + 0xa8))(uVar11,local_d0,&local_198);
      (**(code **)(lVar22 + 0xb0))(uVar11,&u_0,uVar16);
    }
    FSlateInvalidationWidgetList::~FSlateInvalidationWidgetList(&local_b8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1a8.SharedReferenceCount.ReferenceController);
  }
  if ((GSlateInvalidationRootVerifyWidgetsIndex != false) &&
     (bVar26 = FSlateInvalidationWidgetList::VerifyWidgetsIndex((this->FastWidgetPathList).Ptr),
     !bVar26)) {
    `FSlateInvalidationRoot::ProcessPreUpdate'::__l84::<lambda_1>::operator()(&local_1e4);
  }
  if ((GSlateInvalidationRootVerifyValidWidgets != false) &&
     (bVar26 = FSlateInvalidationWidgetList::VerifyProxiesWidget((this->FastWidgetPathList).Ptr),
     !bVar26)) {
    `FSlateInvalidationRoot::ProcessPreUpdate'::__l87::<lambda_2>::operator()(local_1e3);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1d8.SharedReferenceCount.ReferenceController);
  this->bProcessingPreUpdate = (bool)uVar25;
  return;
}

// ProcessPrepassUpdate @ 14244d020

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall FSlateInvalidationRoot::ProcessPrepassUpdate(FSlateInvalidationRoot *this)

{
  undefined1 *puVar1;
  bool bVar2;
  int iVar3;
  FSlateInvalidationWidgetIndex FVar4;
  FSlateInvalidationWidgetIndex FVar5;
  ForElementType<FSlateInvalidationWidgetHeapElement> this_00;
  ulonglong uVar6;
  FSlateInvalidationWidgetList *pFVar7;
  SWidget *pSVar8;
  code *pcVar9;
  undefined8 uVar10;
  bool bVar11;
  FWidgetProxy *pFVar12;
  FWidgetProxy *pFVar13;
  ulonglong uVar14;
  uint uVar15;
  longlong lVar16;
  ForElementType<FSlateInvalidationWidgetHeapElement> FVar17;
  FWidgetOrderGreater local_res8 [8];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 uStack_50;
  <lambda_1> local_48;
  FString local_38;
  
  bVar2 = this->bProcessingPrepassUpdate;
  this->bProcessingPrepassUpdate = true;
  if (((GSlateInvalidationRootDumpPostInvalidationList != false) && (4 < (byte)LogSlate._0_1_)) &&
     (UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogSlate),
     4 < (byte)LogSlate._0_1_)) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogSlate);
  }
  if (GSlateInvalidationRootVerifyWidgetsUpdateList != false) {
    local_48.FastWidgetPathList = (this->FastWidgetPathList).Ptr;
    local_48.WidgetsNeedingPostUpdate = (this->WidgetsNeedingPostUpdate).Ptr;
    FSlateInvalidationWidgetPrepassHeap::
    ForEachIndexes<_VerifyWidgetsUpdateList_ProcessPrepassUpdate_::__l2::<lambda_1>_>
              ((this->WidgetsNeedingPrepassUpdate).Ptr,&local_48);
  }
  this_00 = (ForElementType<FSlateInvalidationWidgetHeapElement>)
            (this->WidgetsNeedingPrepassUpdate).Ptr;
  local_68 = (ulonglong)(uint)FSlateInvalidationWidgetIndex::Invalid;
  uStack_60 = 0;
  iVar3 = *(int *)((longlong)this_00 + 0x108);
  uVar10 = uStack_60;
  uVar14 = local_68;
  do {
    if (iVar3 == 0) {
      FSlateInvalidationWidgetPrepassHeap::Reset
                ((FSlateInvalidationWidgetPrepassHeap *)this_00,true);
      this->bProcessingPrepassUpdate = bVar2;
      return;
    }
    if ((*(bool *)((longlong)this_00 + 0x118) != true) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("bIsHeap == true",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\FastUpdate\\SlateInvalidationWidgetHeap.h"
                            ,0x1b4,L""), bVar11)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    if ((*(int *)((longlong)this_00 + 0x108) < 1) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar11)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    FVar17 = this_00;
    if (*(ForElementType<FSlateInvalidationWidgetHeapElement> *)((longlong)this_00 + 0x100) !=
        (ForElementType<FSlateInvalidationWidgetHeapElement>)0x0) {
      FVar17 = *(ForElementType<FSlateInvalidationWidgetHeapElement> *)((longlong)this_00 + 0x100);
    }
    uVar6 = *(ulonglong *)FVar17;
    TArray<FSlateInvalidationWidgetHeapElement,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>
    ::HeapPopDiscard<FSlateInvalidationWidgetPrepassHeap::FWidgetOrderGreater>
              ((TArray<FSlateInvalidationWidgetHeapElement,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>
                *)this_00,local_res8,No);
    pFVar12 = FSlateInvalidationWidgetList::operator[]
                        (*(FSlateInvalidationWidgetList **)((longlong)this_00 + 0x110),
                         SUB84(uVar6,0));
    (pFVar12->field6_0x16).PrivateFlags = (pFVar12->field6_0x16).PrivateFlags & 0xfb;
    local_68._0_2_ = (ushort)uVar14;
    if (((ushort)local_68 == FSlateInvalidationWidgetIndex::Invalid.ArrayIndex) &&
       (local_68._2_2_ = (ushort)(uVar14 >> 0x10),
       local_68._2_2_ == FSlateInvalidationWidgetIndex::Invalid.ElementIndex)) {
LAB_14244d1b5:
      uVar14 = uVar6 >> 0x10 & 0xffff;
      lVar16 = (uVar6 & 0xffff) * 0x40 + *(longlong *)&((this->FastWidgetPathList).Ptr)->Data;
      if ((*(int *)(lVar16 + 0x18) <= (int)uVar14) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      pFVar7 = (this->FastWidgetPathList).Ptr;
      pFVar12 = (FWidgetProxy *)(*(longlong *)(lVar16 + 0x10) + uVar14 * 0x18);
      FVar4 = pFVar12->LeafMostChildIndex;
      FVar5 = pFVar12->Index;
      FSlateInvalidationWidgetSortOrder::FSlateInvalidationWidgetSortOrder
                ((FSlateInvalidationWidgetSortOrder *)&uStack_50,pFVar7,FVar5);
      FSlateInvalidationWidgetSortOrder::FSlateInvalidationWidgetSortOrder
                ((FSlateInvalidationWidgetSortOrder *)((longlong)&uStack_50 + 4),pFVar7,FVar4);
      pSVar8 = pFVar12->Widget;
      local_68 = CONCAT44(FVar4,FVar5);
      uStack_60 = uStack_50;
      if (pSVar8 != (SWidget *)0x0) {
        if ((GSlateInvalidationRootDumpPrepassInvalidationList != false) &&
           (pFVar13 = FSlateInvalidationWidgetList::operator[]
                                ((this->FastWidgetPathList).Ptr,SUB84(uVar6,0)),
           4 < (byte)LogSlate._0_1_)) {
          FReflectionMetaData::GetWidgetDebugInfo(&local_38,pFVar13->Widget);
          UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogSlate);
          if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_38.Data.AllocatorInstance.Data);
          }
        }
        if ((((pFVar12->Visibility).field0_0x0.Flags & 0xc) == 0) &&
           (((pFVar12->field6_0x16).PrivateFlags & 0x10) != 0)) {
          pSVar8->bNeedsPrepass = '\x01';
        }
        FWidgetProxy::ProcessPostInvalidation
                  (pFVar12,(this->WidgetsNeedingPostUpdate).Ptr,(this->FastWidgetPathList).Ptr,this)
        ;
        pFVar12->CurrentInvalidateReason =
             pFVar12->CurrentInvalidateReason & (AttributeRegistration|Visibility|ChildOrder);
      }
    }
    else {
      uStack_60._0_4_ = (uint)uVar10;
      uVar15 = (uint)(uVar6 >> 0x20);
      if ((uVar15 < (uint)uStack_60) ||
         (uStack_60._4_4_ = (uint)((ulonglong)uVar10 >> 0x20), bVar11 = uStack_60._4_4_ < uVar15,
         local_68 = uVar14, uStack_60 = uVar10, bVar11)) goto LAB_14244d1b5;
    }
    this_00 = (ForElementType<FSlateInvalidationWidgetHeapElement>)
              (this->WidgetsNeedingPrepassUpdate).Ptr;
    iVar3 = *(int *)((longlong)this_00 + 0x108);
    uVar10 = uStack_60;
    uVar14 = local_68;
  } while( true );
}

// SetNeedsSlowPath @ 1424524a0

void __thiscall FSlateInvalidationRoot::SetNeedsSlowPath(FSlateInvalidationRoot *this,bool param_1)

{
  this->bNeedsSlowPath = param_1;
  return;
}

// operator() @ 15048c740

bool __thiscall `FSlateInvalidationRoot::InvalidateWidget'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<5617769476016570670>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<5617769476016570670>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 15048c920

bool __thiscall
`FSlateInvalidationRoot::PaintFastPath_UpdateNextWidget'::__l5::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FString local_18;
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<5617769476016571037>);
  if (bVar2) {
    FReflectionMetaData::GetWidgetDebugInfo(&local_18,(SWidget *)**(undefined8 **)this);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<5617769476016571037>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_15048c98a;
    }
  }
  bVar2 = false;
LAB_15048c98a:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 15048cbc0

bool __thiscall
`FSlateInvalidationRoot::ProcessAttributeUpdate'::__l16::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<5617769476016571492>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<5617769476016571492>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 15048cc00

bool __thiscall
`FSlateInvalidationRoot::ProcessPreUpdate'::__l84::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<5617769476016571457>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<5617769476016571457>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 15048ce40

bool __thiscall `FSlateInvalidationRoot::InvalidateWidget'::__l8::<lambda_2>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<5617769476016570676>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<5617769476016570676>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 15048cf70

bool __thiscall
`FSlateInvalidationRoot::ProcessAttributeUpdate'::__l16::<lambda_2>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FString local_18;
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<5617769476016571506>);
  if (bVar2) {
    FReflectionMetaData::GetWidgetDebugInfo(&local_18,(SWidget *)**(undefined8 **)this);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<5617769476016571506>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_15048cfda;
    }
  }
  bVar2 = false;
LAB_15048cfda:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 15048d2d0

bool __thiscall
`FSlateInvalidationRoot::ProcessPreUpdate'::__l87::<lambda_2>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<5617769476016571462>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<5617769476016571462>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 15048d310

bool __thiscall
`FSlateInvalidationRoot::ProcessAttributeUpdate'::__l16::<lambda_3>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FString local_18;
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<5617769476016571508>);
  if (bVar2) {
    FReflectionMetaData::GetWidgetDebugInfo(&local_18,(SWidget *)**(undefined8 **)this);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<5617769476016571508>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_15048d37a;
    }
  }
  bVar2 = false;
LAB_15048d37a:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 15048d4f0

bool __thiscall
`FSlateInvalidationRoot::InvalidateWidget'::__l17::<lambda_3>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<5617769476016570691>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<5617769476016570691>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 15048d870

bool __thiscall
`FSlateInvalidationRoot::InvalidateWidget'::__l17::<lambda_4>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<5617769476016570692>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<5617769476016570692>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

