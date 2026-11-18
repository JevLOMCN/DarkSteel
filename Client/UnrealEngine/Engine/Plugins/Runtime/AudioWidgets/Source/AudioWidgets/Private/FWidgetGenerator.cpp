// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioWidgets
// Functions: 13

// ~FWidgetGenerator @ 14d8bf6f0

void __thiscall
SListView<TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>_>::FWidgetGenerator::~FWidgetGenerator
          (void *this)

{
  DestructItems<TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>,int>
            (*(TSharedPtr<EAudioOscilloscopeTriggerMode,1> **)((longlong)this + 0xc0),
             *(int *)((longlong)this + 200));
  if (*(void **)((longlong)this + 0xc0) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0xc0));
  }
  DestructItems<TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>,int>
            (*(TSharedPtr<EAudioOscilloscopeTriggerMode,1> **)((longlong)this + 0xa8),
             *(int *)((longlong)this + 0xb0));
  if (*(void **)((longlong)this + 0xa8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0xa8));
  }
  *(undefined4 *)((longlong)this + 0xa0) = 0;
  if (*(void **)((longlong)this + 0x98) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x98));
  }
  TSparseArray<TSparseSetElement<TTuple<ITableRow_const_*,TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<ITableRow_const_*,TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((void *)((longlong)this + 0x58));
  *(undefined4 *)((longlong)this + 0x50) = 0;
  if (*(void **)((longlong)this + 0x48) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x48));
  }
  TSparseArray<TSparseSetElement<TTuple<TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>,TSharedRef<ITableRow,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>,TSharedRef<ITableRow,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((void *)((longlong)this + 8));
  return;
}

// ~FWidgetGenerator @ 14d8bf7a0

void __thiscall
SListView<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>::
FWidgetGenerator::~FWidgetGenerator(FWidgetGenerator *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  DestructItems<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>,int>
            ((TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1> *)
             (this->ItemsToBeCleanedUp).AllocatorInstance.Data,(this->ItemsToBeCleanedUp).ArrayNum);
  pFVar1 = (this->ItemsToBeCleanedUp).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>,int>
            ((TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1> *)
             (this->ItemsWithGeneratedWidgets).AllocatorInstance.Data,
             (this->ItemsWithGeneratedWidgets).ArrayNum);
  pFVar1 = (this->ItemsWithGeneratedWidgets).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->WidgetMapToItem).field_0x48 = 0;
  pvVar2 = *(void **)&(this->WidgetMapToItem).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<ITableRow_const_*,TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<ITableRow_const_*,TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<ITableRow_const_*,TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->WidgetMapToItem);
  *(undefined4 *)&(this->ItemToWidgetMap).field_0x48 = 0;
  pvVar2 = *(void **)&(this->ItemToWidgetMap).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>,TSharedRef<ITableRow,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>,TSharedRef<ITableRow,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>,TSharedRef<ITableRow,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ItemToWidgetMap);
  return;
}

// Clear @ 14d8e5030

void __thiscall
SListView<TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>_>::FWidgetGenerator::Clear(void *this)

{
  TArray<TSharedPtr<EAudioOscilloscopeTriggerMode,1>,TSizedDefaultAllocator<32>_> *pTVar1;
  
  pTVar1 = (TArray<TSharedPtr<EAudioOscilloscopeTriggerMode,1>,TSizedDefaultAllocator<32>_> *)
           ((longlong)this + 0xa8);
  TArray<TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>,TSizedDefaultAllocator<32>_>::operator=
            ((void *)((longlong)this + 0xc0),pTVar1);
  DestructItems<TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>,int>
            ((TSharedPtr<EAudioOscilloscopeTriggerMode,1> *)(pTVar1->AllocatorInstance).Data,
             *(int *)((longlong)this + 0xb0));
  *(undefined4 *)((longlong)this + 0xb0) = 0;
  if (*(int *)((longlong)this + 0xb4) != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,(ForAnyElementType *)pTVar1,0,(int *)((longlong)this + 0xb4));
  }
  ProcessItemCleanUp(this);
  return;
}

// Clear @ 14d8e50b0

void __thiscall
SListView<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>::
FWidgetGenerator::Clear(FWidgetGenerator *this)

{
  int *piVar1;
  TArray<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>,TSizedDefaultAllocator<32>_>
  *pTVar2;
  
  pTVar2 = &this->ItemsWithGeneratedWidgets;
  TArray<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>,TSizedDefaultAllocator<32>_>
  ::operator=(&this->ItemsToBeCleanedUp,pTVar2);
  DestructItems<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>,int>
            ((TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1> *)
             (pTVar2->AllocatorInstance).Data,(this->ItemsWithGeneratedWidgets).ArrayNum);
  piVar1 = &(this->ItemsWithGeneratedWidgets).ArrayMax;
  (this->ItemsWithGeneratedWidgets).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,&pTVar2->AllocatorInstance,0,piVar1);
  }
  ProcessItemCleanUp(this);
  return;
}

// OnBeginGenerationPass @ 14d94a0e0

void __thiscall
SListView<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>::
FWidgetGenerator::OnBeginGenerationPass(FWidgetGenerator *this)

{
  int *piVar1;
  TArray<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>,TSizedDefaultAllocator<32>_>
  *pTVar2;
  
  pTVar2 = &this->ItemsWithGeneratedWidgets;
  TArray<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>,TSizedDefaultAllocator<32>_>
  ::operator=(&this->ItemsToBeCleanedUp,pTVar2);
  DestructItems<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>,int>
            ((TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1> *)
             (pTVar2->AllocatorInstance).Data,(this->ItemsWithGeneratedWidgets).ArrayNum);
  piVar1 = &(this->ItemsWithGeneratedWidgets).ArrayMax;
  (this->ItemsWithGeneratedWidgets).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,&pTVar2->AllocatorInstance,0,piVar1);
  }
  return;
}

// OnItemSeen @ 14d94b540

void __thiscall
SListView<TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>_>::FWidgetGenerator::OnItemSeen
          (void *this,TSharedPtr<EAudioOscilloscopeTriggerMode,1> *param_1,
          TSharedRef<ITableRow,1> *param_2)

{
  ForAnyElementType *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  EAudioOscilloscopeTriggerMode *pEVar3;
  longlong *plVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  TSharedRef<ITableRow,1> *pTVar9;
  TReferenceControllerBase<1> *pTVar10;
  longlong lVar11;
  longlong *plVar12;
  longlong lVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  TPairInitializer<TSharedPtr<EAudioOscilloscopeTriggerMode,1>_const_&,TSharedRef<ITableRow,1>_const_&>
  local_res10;
  ITableRow *local_b8;
  longlong *local_b0;
  TSharedPtr<EAudioOscilloscopeTriggerMode_const_,1> local_a8;
  TSharedPtr<EAudioOscilloscopeTriggerMode,1> *local_98;
  TSharedRef<ITableRow,1> *local_90;
  ITableRow **local_88;
  TSharedPtr<EAudioOscilloscopeTriggerMode,1> *local_80;
  EAudioOscilloscopeTriggerMode *local_78;
  TReferenceControllerBase<1> *local_70;
  FReadAccessScope local_68;
  
  local_res10.Value = param_2;
  if (param_1->Object == (EAudioOscilloscopeTriggerMode *)0x0) {
    bVar7 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_8670646794247470361>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets\\Views\\SListView.h"
                       ,0x2e7,"TListTypeTraits<ItemType>::IsPtrValid(InItem)");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  local_a8.Object = param_1->Object;
  local_a8.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_a8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar9 = TMapBase<TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>,TSharedRef<ITableRow,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>,TSharedRef<ITableRow,1>,0>_>
           ::Find((void *)((longlong)this + 8),&local_a8);
  if (pTVar9 == (TSharedRef<ITableRow,1> *)0x0) {
    local_98 = param_1;
    local_90 = param_2;
    TSet<TTuple<TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>,TSharedRef<ITableRow,1>_>,TDefaultMapHashableKeyFuncs<TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>,TSharedRef<ITableRow,1>,0>,FDefaultSetAllocator>
    ::
    Emplace<TPairInitializer<TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>_const_&,TSharedRef<ITableRow,1>_const_&>_>
              ((void *)((longlong)this + 8),&local_res10,(bool *)&local_98);
    local_b8 = param_2->Object;
    local_88 = &local_b8;
    local_80 = param_1;
    TSet<TTuple<ITableRow_const_*,TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>_>,TDefaultMapHashableKeyFuncs<ITableRow_const_*,TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>,0>,FDefaultSetAllocator>
    ::
    Emplace<TPairInitializer<ITableRow_const_*_&&,TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>_const_&>_>
              ((void *)((longlong)this + 0x58),
               (TPairInitializer<ITableRow_const_*_&&,TSharedPtr<EAudioOscilloscopeTriggerMode,1>_const_&>
                *)&stack0x00000020,(bool *)&local_88);
    (**(code **)*param_2->Object)();
    pTVar2 = (param_1->SharedReferenceCount).ReferenceController;
    pEVar3 = param_1->Object;
    lVar11 = *(longlong *)this;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(lVar11 + 0x730),&local_68)
    ;
    if ((*(int *)(lVar11 + 0x740) == 0) ||
       (plVar4 = *(longlong **)(lVar11 + 0x738), plVar4 == (longlong *)0x0)) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_68);
      pTVar10 = pTVar2;
    }
    else {
      local_78 = pEVar3;
      local_70 = pTVar2;
      (**(code **)(*plVar4 + 0x68))(plVar4,&local_78,param_2);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_68);
      pTVar10 = (TReferenceControllerBase<1> *)0x0;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  }
  if ((*(TSharedPtr<EAudioOscilloscopeTriggerMode,1> **)((longlong)this + 0xc0) <= param_1) &&
     (param_1 < *(TSharedPtr<EAudioOscilloscopeTriggerMode,1> **)((longlong)this + 0xc0) +
                *(int *)((longlong)this + 0xcc))) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  lVar11 = (longlong)*(int *)((longlong)this + 200);
  if (*(int *)((longlong)this + 200) != 0) {
    plVar4 = *(longlong **)((longlong)this + 0xc0);
    iVar16 = 0;
    bVar7 = (EAudioOscilloscopeTriggerMode *)*plVar4 != param_1->Object;
    lVar13 = 0;
    iVar8 = 0;
    local_b0 = plVar4;
    do {
      lVar13 = lVar13 + 1;
      iVar15 = iVar8 + 1;
      if (lVar13 < lVar11) {
        plVar12 = plVar4 + lVar13 * 2;
        do {
          if (bVar7 != ((EAudioOscilloscopeTriggerMode *)*plVar12 != param_1->Object)) break;
          iVar15 = iVar15 + 1;
          lVar13 = lVar13 + 1;
          plVar12 = plVar12 + 2;
        } while (lVar13 < lVar11);
      }
      iVar14 = iVar15 - iVar8;
      if (bVar7 == false) {
        DestructItems<TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>,int>
                  ((TSharedPtr<EAudioOscilloscopeTriggerMode,1> *)(plVar4 + (longlong)iVar8 * 2),
                   iVar14);
      }
      else {
        if (iVar16 != iVar8) {
          memmove(plVar4 + (longlong)iVar16 * 2,plVar4 + (longlong)iVar8 * 2,(longlong)iVar14 << 4);
        }
        iVar16 = iVar16 + iVar14;
      }
      bVar7 = (bool)(bVar7 ^ 1);
      iVar8 = iVar15;
    } while (lVar13 < lVar11);
    *(int *)((longlong)this + 200) = iVar16;
    param_2 = local_res10.Value;
  }
  pFVar1 = (ForAnyElementType *)((longlong)this + 0xa8);
  if (((TSharedPtr<EAudioOscilloscopeTriggerMode,1> *)pFVar1->Data <= param_1) &&
     (param_1 < (TSharedPtr<EAudioOscilloscopeTriggerMode,1> *)pFVar1->Data +
                *(int *)((longlong)this + 0xb4))) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  iVar8 = *(int *)((longlong)this + 0xb0);
  if (iVar8 == *(int *)((longlong)this + 0xb4)) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,pFVar1,(int *)((longlong)this + 0xb4));
  }
  *(int *)((longlong)this + 0xb0) = iVar8 + 1;
  pFVar5 = pFVar1->Data;
  *(EAudioOscilloscopeTriggerMode **)(pFVar5 + (longlong)iVar8 * 0x10) = param_1->Object;
  pTVar2 = (param_1->SharedReferenceCount).ReferenceController;
  *(TReferenceControllerBase<1> **)(pFVar5 + (longlong)iVar8 * 0x10 + 8) = pTVar2;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return;
}

// OnItemSeen @ 14d94b920

void __thiscall
SListView<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>::
FWidgetGenerator::OnItemSeen
          (FWidgetGenerator *this,
          TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1> *param_1,
          TSharedRef<ITableRow,1> *param_2)

{
  int *piVar1;
  TArray<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>,TSizedDefaultAllocator<32>_>
  *pTVar2;
  TReferenceControllerBase<1> *pTVar3;
  FLoudnessMetric *pFVar4;
  SListView<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_> *pSVar5;
  longlong *plVar6;
  TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1> *pTVar7;
  code *pcVar8;
  bool bVar9;
  int iVar10;
  TSharedRef<ITableRow,1> *pTVar11;
  longlong lVar12;
  FScriptContainerElement *pFVar13;
  FScriptContainerElement *pFVar14;
  atomic<int> *paVar15;
  longlong lVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  TPairInitializer<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_const_&,TSharedRef<ITableRow,1>_const_&>
  local_res10;
  ITableRow *local_a8;
  TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1> local_a0;
  TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1> *local_90;
  TSharedRef<ITableRow,1> *local_88;
  ITableRow **local_80;
  TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1> *local_78;
  FLoudnessMetric *local_70;
  TReferenceControllerBase<1> *local_68;
  FReadAccessScope local_60;
  
  pTVar3 = (param_1->SharedReferenceCount).ReferenceController;
  pFVar4 = param_1->Object;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_res10.Value = param_2;
  if (pFVar4 == (FLoudnessMetric *)0x0) {
    bVar9 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_8670646794247470361>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets\\Views\\SListView.h"
                       ,0x2e7,"TListTypeTraits<ItemType>::IsPtrValid(InItem)");
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  local_a0.Object = param_1->Object;
  local_a0.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_a0.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_a0.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_a0.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar11 = TMapBase<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>,TSharedRef<ITableRow,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>,TSharedRef<ITableRow,1>,0>_>
            ::Find((TMapBase<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>,TSharedRef<ITableRow,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>,TSharedRef<ITableRow,1>,0>_>
                    *)&this->ItemToWidgetMap,&local_a0);
  if (pTVar11 == (TSharedRef<ITableRow,1> *)0x0) {
    local_90 = param_1;
    local_88 = param_2;
    TSet<TTuple<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>,TSharedRef<ITableRow,1>_>,TDefaultMapHashableKeyFuncs<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>,TSharedRef<ITableRow,1>,0>,FDefaultSetAllocator>
    ::
    Emplace<TPairInitializer<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_const_&,TSharedRef<ITableRow,1>_const_&>_>
              ((TSet<TTuple<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>,TSharedRef<ITableRow,1>_>,TDefaultMapHashableKeyFuncs<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>,TSharedRef<ITableRow,1>,0>,FDefaultSetAllocator>
                *)&this->ItemToWidgetMap,&local_res10,(bool *)&local_90);
    local_a8 = param_2->Object;
    local_80 = &local_a8;
    local_78 = param_1;
    TSet<TTuple<ITableRow_const_*,TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>,TDefaultMapHashableKeyFuncs<ITableRow_const_*,TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>,0>,FDefaultSetAllocator>
    ::
    Emplace<TPairInitializer<ITableRow_const_*_&&,TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_const_&>_>
              ((TSet<TTuple<ITableRow_const_*,TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>,TDefaultMapHashableKeyFuncs<ITableRow_const_*,TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>,0>,FDefaultSetAllocator>
                *)&this->WidgetMapToItem,
               (TPairInitializer<ITableRow_const_*_&&,TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_const_&>
                *)&stack0x00000020,(bool *)&local_80);
    (**(code **)*param_2->Object)();
    pTVar3 = (param_1->SharedReferenceCount).ReferenceController;
    pFVar4 = param_1->Object;
    pSVar5 = this->OwnerList;
    if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
      paVar15 = (atomic<int> *)&DAT_00000008;
    }
    else {
      paVar15 = &pTVar3->SharedReferenceCount;
      LOCK();
      *paVar15 = (atomic<int>)((int)*paVar15 + 1);
      UNLOCK();
      LOCK();
      *paVar15 = (atomic<int>)((int)*paVar15 + 1);
      UNLOCK();
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pSVar5->OnEntryInitialized
               ,&local_60);
    if ((*(int *)&(pSVar5->OnEntryInitialized).field_0x10 != 0) &&
       (plVar6 = *(longlong **)&(pSVar5->OnEntryInitialized).field_0x8, plVar6 != (longlong *)0x0))
    {
      lVar12 = *plVar6;
      if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        *paVar15 = (atomic<int>)((int)*paVar15 + 1);
        UNLOCK();
      }
      local_70 = pFVar4;
      local_68 = pTVar3;
      (**(code **)(lVar12 + 0x68))(plVar6,&local_70,param_2);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_60);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  }
  pTVar7 = (TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1> *)
           (this->ItemsToBeCleanedUp).AllocatorInstance.Data;
  if ((pTVar7 <= param_1) && (param_1 < pTVar7 + (this->ItemsToBeCleanedUp).ArrayMax)) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  iVar10 = (this->ItemsToBeCleanedUp).ArrayNum;
  lVar12 = (longlong)iVar10;
  if (iVar10 != 0) {
    pFVar14 = (this->ItemsToBeCleanedUp).AllocatorInstance.Data;
    iVar19 = 0;
    bVar9 = *(FLoudnessMetric **)pFVar14 != param_1->Object;
    lVar16 = 0;
    iVar10 = 0;
    do {
      lVar16 = lVar16 + 1;
      iVar18 = iVar10 + 1;
      if (lVar16 < lVar12) {
        pFVar13 = pFVar14 + lVar16 * 0x10;
        do {
          if (bVar9 != (*(FLoudnessMetric **)pFVar13 != param_1->Object)) break;
          iVar18 = iVar18 + 1;
          lVar16 = lVar16 + 1;
          pFVar13 = pFVar13 + 0x10;
        } while (lVar16 < lVar12);
      }
      iVar17 = iVar18 - iVar10;
      if (bVar9 == false) {
        DestructItems<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>,int>
                  ((TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1> *)
                   (pFVar14 + (longlong)iVar10 * 0x10),iVar17);
      }
      else {
        if (iVar19 != iVar10) {
          memmove(pFVar14 + (longlong)iVar19 * 0x10,pFVar14 + (longlong)iVar10 * 0x10,
                  (longlong)iVar17 << 4);
        }
        iVar19 = iVar19 + iVar17;
      }
      bVar9 = (bool)(bVar9 ^ 1);
      iVar10 = iVar18;
    } while (lVar16 < lVar12);
    (this->ItemsToBeCleanedUp).ArrayNum = iVar19;
    param_2 = local_res10.Value;
  }
  pTVar2 = &this->ItemsWithGeneratedWidgets;
  pTVar7 = (TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1> *)
           (pTVar2->AllocatorInstance).Data;
  if ((pTVar7 <= param_1) && (param_1 < pTVar7 + (this->ItemsWithGeneratedWidgets).ArrayMax)) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  iVar10 = (this->ItemsWithGeneratedWidgets).ArrayNum;
  piVar1 = &(this->ItemsWithGeneratedWidgets).ArrayMax;
  if (iVar10 == *piVar1) {
    iVar10 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x810,&pTVar2->AllocatorInstance,piVar1);
  }
  (this->ItemsWithGeneratedWidgets).ArrayNum = iVar10 + 1;
  pFVar14 = (pTVar2->AllocatorInstance).Data + (longlong)iVar10 * 0x10;
  *(FLoudnessMetric **)pFVar14 = param_1->Object;
  pTVar3 = (param_1->SharedReferenceCount).ReferenceController;
  *(TReferenceControllerBase<1> **)(pFVar14 + 8) = pTVar3;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return;
}

// ProcessItemCleanUp @ 14d95bf70

void __thiscall
SListView<TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>_>::FWidgetGenerator::ProcessItemCleanUp
          (void *this)

{
  TSet<TTuple<TSharedPtr<EAudioOscilloscopeTriggerMode,1>,TSharedRef<ITableRow,1>_>,TDefaultMapHashableKeyFuncs<TSharedPtr<EAudioOscilloscopeTriggerMode,1>,TSharedRef<ITableRow,1>,0>,FDefaultSetAllocator>
  *this_00;
  EAudioOscilloscopeTriggerMode *pEVar1;
  TReferenceControllerBase<1> *pTVar2;
  TReferenceControllerBase<1> *pTVar3;
  EAudioOscilloscopeTriggerMode *pEVar4;
  longlong *plVar5;
  TSharedPtr<EAudioOscilloscopeTriggerMode,1> *pTVar6;
  code *pcVar7;
  undefined1 auVar8 [16];
  bool bVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  atomic<int> *paVar13;
  longlong lVar14;
  ulonglong uVar15;
  undefined8 *puVar16;
  ulonglong *puVar17;
  TBitArray<FDefaultBitArrayAllocator> *pTVar18;
  undefined1 local_res8 [8];
  uint local_res10;
  int local_res18;
  undefined4 local_res20;
  undefined1 auStack_150 [16];
  uint uStack_140;
  uint uStack_13c;
  int local_138;
  undefined4 uStack_134;
  void *pvStack_130;
  TSet<TTuple<TSharedPtr<EAudioOscilloscopeTriggerMode,1>,TSharedRef<ITableRow,1>_>,TDefaultMapHashableKeyFuncs<TSharedPtr<EAudioOscilloscopeTriggerMode,1>,TSharedRef<ITableRow,1>,0>,FDefaultSetAllocator>
  *local_128;
  undefined2 local_120;
  ITableRow *local_118;
  TReferenceControllerBase<1> *local_110;
  longlong local_108;
  TSharedPtr<EAudioOscilloscopeTriggerMode_const_,1> local_100;
  ITableRow *local_f0;
  ITableRow *local_e8;
  longlong *local_e0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_d8;
  FReadAccessScope local_b8;
  longlong *local_a0;
  longlong lStack_98;
  undefined1 local_90 [16];
  int local_80;
  undefined4 uStack_7c;
  void *pvStack_78;
  undefined4 local_54;
  
  local_res10 = 0;
  if (0 < *(int *)((longlong)this + 200)) {
    this_00 = (TSet<TTuple<TSharedPtr<EAudioOscilloscopeTriggerMode,1>,TSharedRef<ITableRow,1>_>,TDefaultMapHashableKeyFuncs<TSharedPtr<EAudioOscilloscopeTriggerMode,1>,TSharedRef<ITableRow,1>,0>,FDefaultSetAllocator>
               *)((longlong)this + 8);
    local_108 = 0;
    do {
      lVar14 = local_108;
      uVar12 = 0;
      if ((int)local_res10 < *(int *)((longlong)this + 200)) {
        uVar12 = ~local_res10 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pEVar1 = *(EAudioOscilloscopeTriggerMode **)(lVar14 + *(longlong *)((longlong)this + 0xc0));
      pTVar2 = *(TReferenceControllerBase<1> **)(lVar14 + 8 + *(longlong *)((longlong)this + 0xc0));
      if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
        UNLOCK();
        LOCK();
        pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
        UNLOCK();
        LOCK();
        pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
        UNLOCK();
        LOCK();
        pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
        UNLOCK();
      }
      uVar12 = ((uint)((ulonglong)pEVar1 >> 0x14) & 0xffff ^ (uint)((ulonglong)pEVar1 >> 4)) *
               -0x7a143595;
      uVar12 = (uVar12 >> 0xd ^ uVar12) * -0x3d4d51cb;
      local_100.Object = pEVar1;
      local_100.SharedReferenceCount.ReferenceController = pTVar2;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
      uVar12 = uVar12 >> 0x10 ^ uVar12;
      iVar10 = TSet<TTuple<TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>,TSharedRef<ITableRow,1>_>,TDefaultMapHashableKeyFuncs<TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>,TSharedRef<ITableRow,1>,0>,FDefaultSetAllocator>
               ::FindIndexByHash<TSharedPtr<enum_EAudioOscilloscopeTriggerMode_const_,1>_>
                         (this_00,uVar12,&local_100);
      if (iVar10 == -1) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
LAB_14d95c264:
        if (pEVar1 == (EAudioOscilloscopeTriggerMode *)0x0) {
          local_e0 = (longlong *)((longlong)this + 0x58);
          auStack_150._0_4_ = 0;
          TStack_d8.Array = (TBitArray<FDefaultBitArrayAllocator> *)((longlong)this + 0x68);
          auStack_150._4_4_ = 1;
          iVar10 = *(int *)((longlong)this + 0x80);
          local_138 = auStack_150._0_4_;
          iVar11 = 0;
          if (iVar10 != 0) {
            pTVar18 = TStack_d8.Array;
            if (*(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x78) !=
                (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
              pTVar18 = *(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x78);
            }
            uVar12 = *(uint *)(pTVar18->AllocatorInstance).InlineData;
            auStack_150._0_4_ = 0;
            local_138 = 0;
            while (uVar12 == 0) {
              lVar14 = (longlong)(int)auStack_150._0_4_;
              local_138 = local_138 + 0x20;
              auStack_150._0_4_ = auStack_150._0_4_ + 1;
              iVar11 = iVar10;
              if ((int)(iVar10 + -1 + (iVar10 + -1 >> 0x1f & 0x1fU)) >> 5 < (int)auStack_150._0_4_)
              goto LAB_14d95c2f1;
              uVar12 = *(uint *)((pTVar18->AllocatorInstance).InlineData + lVar14 * 4 + 4);
            }
            auStack_150._4_4_ = -uVar12 & uVar12;
            uVar15 = (ulonglong)(uint)auStack_150._4_4_ * 2 + 1;
            lVar14 = 0x3f;
            if (uVar15 != 0) {
              for (; uVar15 >> lVar14 == 0; lVar14 = lVar14 + -1) {
              }
            }
            local_res18 = (int)lVar14;
            iVar11 = local_res18 + -1 + local_138;
            if (iVar10 < iVar11) {
              iVar11 = iVar10;
            }
          }
LAB_14d95c2f1:
          uStack_140 = 0xffffffff;
          auStack_150._8_8_ = TStack_d8.Array;
          uStack_13c = iVar11;
          auVar8 = stack0xfffffffffffffeb8;
          uStack_134 = local_54;
          TStack_d8._padding_ = auStack_150._0_8_;
          TStack_d8.BaseBitIndex = local_138;
          TStack_d8._28_4_ = local_54;
          TStack_d8.UnvisitedBitMask = uStack_140;
          TStack_d8.CurrentBitIndex = uStack_13c;
          unique0x10000776 = auVar8;
          if (iVar11 < iVar10) {
            do {
              puVar17 = (ulonglong *)((longlong)iVar11 * 0x20 + *local_e0);
              if (puVar17[1] == 0) goto LAB_14d95c376;
              TStack_d8.UnvisitedBitMask = TStack_d8.UnvisitedBitMask & ~TStack_d8._padding_._4_4_;
              TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_d8);
              iVar11 = TStack_d8.CurrentBitIndex;
            } while (TStack_d8.CurrentBitIndex < (TStack_d8.Array)->NumBits);
          }
          puVar17 = (ulonglong *)0x0;
LAB_14d95c376:
          if (puVar17 != (ulonglong *)0x0) {
            TSet<TTuple<TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>,TSharedRef<ITableRow,1>_>,TDefaultMapHashableKeyFuncs<TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>,TSharedRef<ITableRow,1>,0>,FDefaultSetAllocator>
            ::TIterator::TIterator(&local_a0,this_00);
            plVar5 = local_a0;
            local_120 = 0;
            stack0xfffffffffffffeb8 = local_90;
            auStack_150._0_8_ = lStack_98;
            local_138 = local_80;
            uStack_134 = uStack_7c;
            pvStack_130 = pvStack_78;
            uVar15 = local_90._8_8_ >> 0x20;
            uVar12 = local_90._12_4_;
            local_128 = this_00;
            if ((int)uVar12 < *(int *)(local_90._0_8_ + 0x18)) {
              do {
                if (*(ulonglong *)(*plVar5 + 0x10 + (longlong)(int)uVar15 * 0x28) == *puVar17) {
                  TSet<TTuple<TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>,TSharedRef<ITableRow,1>_>,TDefaultMapHashableKeyFuncs<TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>,TSharedRef<ITableRow,1>,0>,FDefaultSetAllocator>
                  ::RemoveByIndex(pvStack_130,uVar12);
                  local_120 = CONCAT11(local_120._1_1_,1);
                  goto LAB_14d95c43b;
                }
                uStack_140 = uStack_140 & ~auStack_150._4_4_;
                TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                          ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_150);
                uVar15 = (ulonglong)uStack_13c;
                uVar12 = uStack_13c;
              } while ((int)uStack_13c < *(int *)(auStack_150._8_8_ + 0x18));
              if ((char)local_120 != '\0') {
LAB_14d95c43b:
                if (local_120._1_1_ != '\0') {
                  uVar12 = *(int *)&(local_128->Elements).field_0x8 -
                           *(int *)&(local_128->Elements).field_0x34;
                  if (uVar12 < 4) {
                    iVar10 = 1;
                  }
                  else {
                    uVar15 = (ulonglong)((uVar12 >> 1) + 7) * 2 + 1;
                    lVar14 = 0x3f;
                    if (uVar15 != 0) {
                      for (; uVar15 >> lVar14 == 0; lVar14 = lVar14 + -1) {
                      }
                    }
                    local_res20 = (undefined4)lVar14;
                    iVar10 = 1 << ((byte)lVar14 & 0x1f);
                  }
                  if (((0 < (int)uVar12) && (local_128->HashSize < iVar10)) ||
                     (iVar10 < local_128->HashSize)) {
                    local_128->HashSize = iVar10;
                    TSet<TTuple<TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>,TSharedRef<ITableRow,1>_>,TDefaultMapHashableKeyFuncs<TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>,TSharedRef<ITableRow,1>,0>,FDefaultSetAllocator>
                    ::Rehash(local_128);
                  }
                }
              }
            }
            local_e8 = (ITableRow *)*puVar17;
            if (*(int *)((longlong)this + 0x60) != *(int *)((longlong)this + 0x8c)) {
              uVar12 = ((uint)((ulonglong)local_e8 >> 0x14) & 0xffff ^
                       (uint)((ulonglong)local_e8 >> 4)) * -0x7a143595;
              uVar12 = (uVar12 >> 0xd ^ uVar12) * -0x3d4d51cb;
              TSet<TTuple<ITableRow_const_*,TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>_>,TDefaultMapHashableKeyFuncs<ITableRow_const_*,TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>,0>,FDefaultSetAllocator>
              ::RemoveImpl<ITableRow_const_*>
                        ((void *)((longlong)this + 0x58),uVar12 ^ uVar12 >> 0x10,&local_e8);
            }
          }
        }
      }
      else {
        lVar14 = *(longlong *)&this_00->Elements + (longlong)iVar10 * 0x28;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
        puVar16 = (undefined8 *)(lVar14 + 0x10);
        if (lVar14 == 0) {
          puVar16 = (undefined8 *)0x0;
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
        if (puVar16 == (undefined8 *)0x0) goto LAB_14d95c264;
        local_118 = (ITableRow *)*puVar16;
        local_110 = (TReferenceControllerBase<1> *)puVar16[1];
        if (local_110 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          local_110->SharedReferenceCount = (atomic<int>)((int)local_110->SharedReferenceCount + 1);
          UNLOCK();
        }
        if (pTVar2 == (TReferenceControllerBase<1> *)0x0) {
          paVar13 = (atomic<int> *)&DAT_00000008;
        }
        else {
          paVar13 = &pTVar2->SharedReferenceCount;
          LOCK();
          *paVar13 = (atomic<int>)((int)*paVar13 + 1);
          UNLOCK();
          LOCK();
          *paVar13 = (atomic<int>)((int)*paVar13 + 1);
          UNLOCK();
        }
        if (*(int *)((longlong)this + 0x10) != *(int *)((longlong)this + 0x3c)) {
          if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            *paVar13 = (atomic<int>)((int)*paVar13 + 1);
            UNLOCK();
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar2);
          lVar14 = (longlong)this + 0x40;
          if (*(longlong *)((longlong)this + 0x48) != 0) {
            lVar14 = *(longlong *)((longlong)this + 0x48);
          }
          iVar10 = *(int *)(lVar14 + ((longlong)*(int *)((longlong)this + 0x50) - 1U &
                                     (longlong)(int)uVar12) * 4);
          while (iVar10 != -1) {
            puVar17 = (ulonglong *)(*(longlong *)&this_00->Elements + (longlong)iVar10 * 0x28);
            if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
              UNLOCK();
            }
            pTVar3 = (TReferenceControllerBase<1> *)puVar17[1];
            pEVar4 = (EAudioOscilloscopeTriggerMode *)*puVar17;
            if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
              UNLOCK();
            }
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (pTVar3);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (pTVar2);
            if (pEVar4 == pEVar1) {
              TSet<TTuple<TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>,TSharedRef<ITableRow,1>_>,TDefaultMapHashableKeyFuncs<TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>,TSharedRef<ITableRow,1>,0>,FDefaultSetAllocator>
              ::RemoveByIndex(this_00,iVar10);
              break;
            }
            iVar10 = (int)puVar17[4];
          }
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
        local_f0 = local_118;
        if (*(int *)((longlong)this + 0x60) != *(int *)((longlong)this + 0x8c)) {
          uVar12 = ((uint)((ulonglong)local_118 >> 0x14) & 0xffff ^
                   (uint)((ulonglong)local_118 >> 4)) * -0x7a143595;
          uVar12 = (uVar12 >> 0xd ^ uVar12) * -0x3d4d51cb;
          TSet<TTuple<ITableRow_const_*,TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>_>,TDefaultMapHashableKeyFuncs<ITableRow_const_*,TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>,0>,FDefaultSetAllocator>
          ::RemoveImpl<ITableRow_const_*>
                    ((void *)((longlong)this + 0x58),uVar12 ^ uVar12 >> 0x10,&local_f0);
        }
        if (*(longlong *)this == 0) {
          local_res8[0] = 0;
          bVar9 = `SListView<TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>_>::FWidgetGenerator::
                  ProcessItemCleanUp'::__l8::<lambda_1>::operator()(local_res8);
          if (bVar9) goto LAB_14d95c202;
        }
        else {
LAB_14d95c202:
          (**(code **)((longlong)*local_118 + 8))();
          lVar14 = *(longlong *)this;
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                    ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(lVar14 + 0x7c0),
                     &local_b8);
          if ((*(int *)(lVar14 + 2000) != 0) &&
             (plVar5 = *(longlong **)(lVar14 + 0x7c8), plVar5 != (longlong *)0x0)) {
            (**(code **)(*plVar5 + 0x68))(plVar5,&local_118);
          }
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
          ~FReadAccessScope(&local_b8);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_110);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
      local_res10 = local_res10 + 1;
      local_108 = local_108 + 0x10;
    } while ((int)local_res10 < *(int *)((longlong)this + 200));
  }
  pTVar6 = (TSharedPtr<EAudioOscilloscopeTriggerMode,1> *)
           ((ForAnyElementType *)((longlong)this + 0xc0))->Data;
  if (*(int *)((longlong)this + 0xcc) < 0) {
    DestructItems<TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>,int>
              (pTVar6,*(int *)((longlong)this + 200));
    *(undefined4 *)((longlong)this + 200) = 0;
    if (*(int *)((longlong)this + 0xcc) != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,(ForAnyElementType *)((longlong)this + 0xc0),0,
                 (int *)((longlong)this + 0xcc));
    }
    return;
  }
  DestructItems<TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>,int>
            (pTVar6,*(int *)((longlong)this + 200));
  *(undefined4 *)((longlong)this + 200) = 0;
  return;
}

// ProcessItemCleanUp @ 14d95c5b0

void __thiscall
SListView<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>::
FWidgetGenerator::ProcessItemCleanUp(FWidgetGenerator *this)

{
  TMap<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>,TSharedRef<ITableRow,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>,TSharedRef<ITableRow,1>,0>_>
  *this_00;
  int *piVar1;
  FScriptContainerElement *pFVar2;
  FLoudnessMetric *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  undefined1 *puVar5;
  TReferenceControllerBase<1> *pTVar6;
  FLoudnessMetric *pFVar7;
  SListView<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_> *pSVar8;
  longlong *plVar9;
  uint *puVar10;
  TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1> *pTVar11;
  code *pcVar12;
  undefined1 auVar13 [16];
  undefined8 uVar14;
  bool bVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  atomic<int> *paVar19;
  longlong lVar20;
  ulonglong uVar21;
  undefined1 *puVar22;
  undefined8 *puVar23;
  ulonglong *puVar24;
  int iVar25;
  uint *puVar26;
  undefined1 local_res8 [8];
  uint local_res10;
  int local_res18;
  undefined4 local_res20;
  undefined1 auStack_150 [16];
  uint uStack_140;
  uint uStack_13c;
  undefined8 local_138;
  TSet<TTuple<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>,TSharedRef<ITableRow,1>_>,TDefaultMapHashableKeyFuncs<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>,TSharedRef<ITableRow,1>,0>,FDefaultSetAllocator>
  *pTStack_130;
  TSet<TTuple<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>,TSharedRef<ITableRow,1>_>,TDefaultMapHashableKeyFuncs<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>,TSharedRef<ITableRow,1>,0>,FDefaultSetAllocator>
  *local_128;
  undefined2 local_120;
  ITableRow *local_118;
  TReferenceControllerBase<1> *local_110;
  longlong local_108;
  TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1> local_100;
  ITableRow *local_f0;
  ITableRow *local_e8;
  TMap<ITableRow_const_*,TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<ITableRow_const_*,TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>,0>_>
  *local_e0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_d8;
  FReadAccessScope local_b8;
  undefined1 local_a0 [32];
  longlong local_80;
  TSet<TTuple<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>,TSharedRef<ITableRow,1>_>,TDefaultMapHashableKeyFuncs<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>,TSharedRef<ITableRow,1>,0>,FDefaultSetAllocator>
  *pTStack_78;
  undefined4 local_54;
  
  local_res10 = 0;
  if (0 < (this->ItemsToBeCleanedUp).ArrayNum) {
    this_00 = &this->ItemToWidgetMap;
    local_108 = 0;
    do {
      lVar20 = local_108;
      uVar18 = 0;
      if ((int)local_res10 < (this->ItemsToBeCleanedUp).ArrayNum) {
        uVar18 = ~local_res10 >> 0x1f;
      }
      if ((uVar18 == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar15)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      pFVar2 = (this->ItemsToBeCleanedUp).AllocatorInstance.Data;
      pFVar3 = *(FLoudnessMetric **)(pFVar2 + lVar20);
      pTVar4 = *(TReferenceControllerBase<1> **)(pFVar2 + lVar20 + 8);
      if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
        UNLOCK();
        LOCK();
        pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
        UNLOCK();
        LOCK();
        pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
        UNLOCK();
        LOCK();
        pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
        UNLOCK();
      }
      uVar18 = ((uint)((ulonglong)pFVar3 >> 0x14) & 0xffff ^ (uint)((ulonglong)pFVar3 >> 4)) *
               -0x7a143595;
      uVar18 = (uVar18 >> 0xd ^ uVar18) * -0x3d4d51cb;
      local_100.Object = pFVar3;
      local_100.SharedReferenceCount.ReferenceController = pTVar4;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      uVar18 = uVar18 >> 0x10 ^ uVar18;
      iVar16 = TSet<TTuple<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>,TSharedRef<ITableRow,1>_>,TDefaultMapHashableKeyFuncs<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>,TSharedRef<ITableRow,1>,0>,FDefaultSetAllocator>
               ::
               FindIndexByHash<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>
                         ((TSet<TTuple<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>,TSharedRef<ITableRow,1>_>,TDefaultMapHashableKeyFuncs<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>,TSharedRef<ITableRow,1>,0>,FDefaultSetAllocator>
                           *)this_00,uVar18,&local_100);
      if (iVar16 == -1) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
LAB_14d95c8a4:
        if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
          UNLOCK();
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
        if (pFVar3 == (FLoudnessMetric *)0x0) {
          local_e0 = &this->WidgetMapToItem;
          auStack_150._0_4_ = 0;
          TStack_d8.Array =
               (TBitArray<FDefaultBitArrayAllocator> *)&(this->WidgetMapToItem).field_0x10;
          auStack_150._4_4_ = 1;
          iVar16 = *(int *)&(this->WidgetMapToItem).field_0x28;
          iVar25 = auStack_150._0_4_;
          iVar17 = 0;
          if (iVar16 != 0) {
            puVar10 = *(uint **)&(this->WidgetMapToItem).field_0x20;
            puVar26 = (uint *)TStack_d8.Array;
            if (puVar10 != (uint *)0x0) {
              puVar26 = puVar10;
            }
            uVar18 = *puVar26;
            auStack_150._0_4_ = 0;
            iVar25 = 0;
            while (uVar18 == 0) {
              lVar20 = (longlong)(int)auStack_150._0_4_;
              iVar25 = iVar25 + 0x20;
              auStack_150._0_4_ = auStack_150._0_4_ + 1;
              iVar17 = iVar16;
              if ((int)(iVar16 + -1 + (iVar16 + -1 >> 0x1f & 0x1fU)) >> 5 < (int)auStack_150._0_4_)
              goto LAB_14d95c942;
              uVar18 = puVar26[lVar20 + 1];
            }
            auStack_150._4_4_ = -uVar18 & uVar18;
            uVar21 = (ulonglong)(uint)auStack_150._4_4_ * 2 + 1;
            lVar20 = 0x3f;
            if (uVar21 != 0) {
              for (; uVar21 >> lVar20 == 0; lVar20 = lVar20 + -1) {
              }
            }
            local_res18 = (int)lVar20;
            iVar17 = local_res18 + -1 + iVar25;
            if (iVar16 < iVar17) {
              iVar17 = iVar16;
            }
          }
LAB_14d95c942:
          uStack_140 = 0xffffffff;
          auStack_150._8_8_ = TStack_d8.Array;
          uStack_13c = iVar17;
          auVar13 = stack0xfffffffffffffeb8;
          local_138 = CONCAT44(local_54,iVar25);
          TStack_d8._padding_ = auStack_150._0_8_;
          TStack_d8._24_8_ = local_138;
          TStack_d8.UnvisitedBitMask = uStack_140;
          TStack_d8.CurrentBitIndex = uStack_13c;
          unique0x10000a18 = auVar13;
          if (iVar17 < iVar16) {
            do {
              puVar24 = (ulonglong *)((longlong)iVar17 * 0x20 + *(longlong *)local_e0);
              if (puVar24[1] == 0) goto LAB_14d95c9c7;
              TStack_d8.UnvisitedBitMask = TStack_d8.UnvisitedBitMask & ~TStack_d8._padding_._4_4_;
              TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_d8);
              iVar17 = TStack_d8.CurrentBitIndex;
            } while (TStack_d8.CurrentBitIndex < (TStack_d8.Array)->NumBits);
          }
          puVar24 = (ulonglong *)0x0;
LAB_14d95c9c7:
          if (puVar24 != (ulonglong *)0x0) {
            TSet<TTuple<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>,TSharedRef<ITableRow,1>_>,TDefaultMapHashableKeyFuncs<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>,TSharedRef<ITableRow,1>,0>,FDefaultSetAllocator>
            ::TIterator::TIterator
                      ((TIterator *)local_a0,
                       (TSet<TTuple<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>,TSharedRef<ITableRow,1>_>,TDefaultMapHashableKeyFuncs<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>,TSharedRef<ITableRow,1>,0>,FDefaultSetAllocator>
                        *)this_00);
            uVar14 = local_a0._0_8_;
            local_120 = 0;
            stack0xfffffffffffffeb8 = local_a0._16_16_;
            auStack_150._0_8_ = local_a0._8_8_;
            local_138 = local_80;
            pTStack_130 = pTStack_78;
            uVar21 = local_a0._24_8_ >> 0x20;
            uVar18 = local_a0._28_4_;
            local_128 = (TSet<TTuple<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>,TSharedRef<ITableRow,1>_>,TDefaultMapHashableKeyFuncs<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>,TSharedRef<ITableRow,1>,0>,FDefaultSetAllocator>
                         *)this_00;
            if ((int)uVar18 < *(int *)(local_a0._16_8_ + 0x18)) {
              do {
                if (*(ulonglong *)(*(longlong *)uVar14 + 0x10 + (longlong)(int)uVar21 * 0x28) ==
                    *puVar24) {
                  TSet<TTuple<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>,TSharedRef<ITableRow,1>_>,TDefaultMapHashableKeyFuncs<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>,TSharedRef<ITableRow,1>,0>,FDefaultSetAllocator>
                  ::RemoveByIndex(pTStack_130,uVar18);
                  local_120 = CONCAT11(local_120._1_1_,1);
                  goto LAB_14d95ca8b;
                }
                uStack_140 = uStack_140 & ~auStack_150._4_4_;
                TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                          ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_150);
                uVar21 = (ulonglong)uStack_13c;
                uVar18 = uStack_13c;
              } while ((int)uStack_13c < *(int *)(auStack_150._8_8_ + 0x18));
              if ((char)local_120 != '\0') {
LAB_14d95ca8b:
                if (local_120._1_1_ != '\0') {
                  uVar18 = *(int *)&(local_128->Elements).field_0x8 -
                           *(int *)&(local_128->Elements).field_0x34;
                  if (uVar18 < 4) {
                    iVar16 = 1;
                  }
                  else {
                    uVar21 = (ulonglong)((uVar18 >> 1) + 7) * 2 + 1;
                    lVar20 = 0x3f;
                    if (uVar21 != 0) {
                      for (; uVar21 >> lVar20 == 0; lVar20 = lVar20 + -1) {
                      }
                    }
                    local_res20 = (undefined4)lVar20;
                    iVar16 = 1 << ((byte)lVar20 & 0x1f);
                  }
                  if (((0 < (int)uVar18) && (local_128->HashSize < iVar16)) ||
                     (iVar16 < local_128->HashSize)) {
                    local_128->HashSize = iVar16;
                    TSet<TTuple<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>,TSharedRef<ITableRow,1>_>,TDefaultMapHashableKeyFuncs<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>,TSharedRef<ITableRow,1>,0>,FDefaultSetAllocator>
                    ::Rehash(local_128);
                  }
                }
              }
            }
            local_e8 = (ITableRow *)*puVar24;
            if (*(int *)&(this->WidgetMapToItem).field_0x8 !=
                *(int *)&(this->WidgetMapToItem).field_0x34) {
              uVar18 = ((uint)((ulonglong)local_e8 >> 0x14) & 0xffff ^
                       (uint)((ulonglong)local_e8 >> 4)) * -0x7a143595;
              uVar18 = (uVar18 >> 0xd ^ uVar18) * -0x3d4d51cb;
              TSet<TTuple<ITableRow_const_*,TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>,TDefaultMapHashableKeyFuncs<ITableRow_const_*,TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>,0>,FDefaultSetAllocator>
              ::RemoveImpl<ITableRow_const_*>
                        ((TSet<TTuple<ITableRow_const_*,TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>,TDefaultMapHashableKeyFuncs<ITableRow_const_*,TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>,0>,FDefaultSetAllocator>
                          *)&this->WidgetMapToItem,uVar18 ^ uVar18 >> 0x10,&local_e8);
            }
          }
        }
      }
      else {
        lVar20 = *(longlong *)&this_00->field_0x0 + (longlong)iVar16 * 0x28;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
        puVar23 = (undefined8 *)(lVar20 + 0x10);
        if (lVar20 == 0) {
          puVar23 = (undefined8 *)0x0;
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
        if (puVar23 == (undefined8 *)0x0) goto LAB_14d95c8a4;
        local_118 = (ITableRow *)*puVar23;
        local_110 = (TReferenceControllerBase<1> *)puVar23[1];
        if (local_110 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          local_110->SharedReferenceCount = (atomic<int>)((int)local_110->SharedReferenceCount + 1);
          UNLOCK();
        }
        if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
          paVar19 = (atomic<int> *)&DAT_00000008;
        }
        else {
          paVar19 = &pTVar4->SharedReferenceCount;
          LOCK();
          *paVar19 = (atomic<int>)((int)*paVar19 + 1);
          UNLOCK();
          LOCK();
          *paVar19 = (atomic<int>)((int)*paVar19 + 1);
          UNLOCK();
        }
        if (*(int *)&(this->ItemToWidgetMap).field_0x8 !=
            *(int *)&(this->ItemToWidgetMap).field_0x34) {
          if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            *paVar19 = (atomic<int>)((int)*paVar19 + 1);
            UNLOCK();
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar4);
          puVar5 = *(undefined1 **)&(this->ItemToWidgetMap).field_0x40;
          puVar22 = &(this->ItemToWidgetMap).field_0x38;
          if (puVar5 != (undefined1 *)0x0) {
            puVar22 = puVar5;
          }
          iVar16 = *(int *)(puVar22 +
                           ((longlong)*(int *)&(this->ItemToWidgetMap).field_0x48 - 1U &
                           (longlong)(int)uVar18) * 4);
          while (iVar16 != -1) {
            puVar24 = (ulonglong *)(*(longlong *)&this_00->field_0x0 + (longlong)iVar16 * 0x28);
            if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
              UNLOCK();
            }
            pTVar6 = (TReferenceControllerBase<1> *)puVar24[1];
            pFVar7 = (FLoudnessMetric *)*puVar24;
            if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
              UNLOCK();
            }
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (pTVar6);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (pTVar4);
            if (pFVar7 == pFVar3) {
              TSet<TTuple<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>,TSharedRef<ITableRow,1>_>,TDefaultMapHashableKeyFuncs<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>,TSharedRef<ITableRow,1>,0>,FDefaultSetAllocator>
              ::RemoveByIndex((TSet<TTuple<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>,TSharedRef<ITableRow,1>_>,TDefaultMapHashableKeyFuncs<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>,TSharedRef<ITableRow,1>,0>,FDefaultSetAllocator>
                               *)this_00,iVar16);
              break;
            }
            iVar16 = (int)puVar24[4];
          }
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
        local_f0 = local_118;
        if (*(int *)&(this->WidgetMapToItem).field_0x8 !=
            *(int *)&(this->WidgetMapToItem).field_0x34) {
          uVar18 = ((uint)((ulonglong)local_118 >> 0x14) & 0xffff ^
                   (uint)((ulonglong)local_118 >> 4)) * -0x7a143595;
          uVar18 = (uVar18 >> 0xd ^ uVar18) * -0x3d4d51cb;
          TSet<TTuple<ITableRow_const_*,TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>,TDefaultMapHashableKeyFuncs<ITableRow_const_*,TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>,0>,FDefaultSetAllocator>
          ::RemoveImpl<ITableRow_const_*>
                    ((TSet<TTuple<ITableRow_const_*,TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>,TDefaultMapHashableKeyFuncs<ITableRow_const_*,TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>,0>,FDefaultSetAllocator>
                      *)&this->WidgetMapToItem,uVar18 ^ uVar18 >> 0x10,&local_f0);
        }
        if (this->OwnerList ==
            (SListView<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>
             *)0x0) {
          local_res8[0] = 0;
          bVar15 = `SListView<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>
                   ::FWidgetGenerator::ProcessItemCleanUp'::__l8::<lambda_1>::operator()(local_res8)
          ;
          if (bVar15) goto LAB_14d95c842;
        }
        else {
LAB_14d95c842:
          (**(code **)((longlong)*local_118 + 8))();
          pSVar8 = this->OwnerList;
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                    ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                     &pSVar8->OnRowReleased,&local_b8);
          if ((*(int *)&(pSVar8->OnRowReleased).field_0x10 != 0) &&
             (plVar9 = *(longlong **)&(pSVar8->OnRowReleased).field_0x8, plVar9 != (longlong *)0x0))
          {
            (**(code **)(*plVar9 + 0x68))(plVar9,&local_118);
          }
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
          ~FReadAccessScope(&local_b8);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_110);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      local_res10 = local_res10 + 1;
      local_108 = local_108 + 0x10;
    } while ((int)local_res10 < (this->ItemsToBeCleanedUp).ArrayNum);
  }
  piVar1 = &(this->ItemsToBeCleanedUp).ArrayMax;
  pTVar11 = (TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1> *)
            (this->ItemsToBeCleanedUp).AllocatorInstance.Data;
  iVar16 = (this->ItemsToBeCleanedUp).ArrayNum;
  if ((this->ItemsToBeCleanedUp).ArrayMax < 0) {
    DestructItems<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>,int>
              (pTVar11,iVar16);
    (this->ItemsToBeCleanedUp).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,&(this->ItemsToBeCleanedUp).AllocatorInstance,0,piVar1);
    }
    return;
  }
  DestructItems<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>,int>
            (pTVar11,iVar16);
  (this->ItemsToBeCleanedUp).ArrayNum = 0;
  return;
}

// ValidateWidgetGeneration @ 14d97b980

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SListView<TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>_>::FWidgetGenerator::
ValidateWidgetGeneration(void *this)

{
  ulonglong uVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  code *pcVar6;
  char cVar7;
  bool bVar8;
  uint uVar9;
  uint uVar10;
  longlong lVar11;
  longlong *plVar12;
  longlong *plVar13;
  int iVar14;
  TBitArray<FDefaultBitArrayAllocator> *pTVar15;
  int iVar16;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_200;
  void *local_1d8 [2];
  longlong *local_1c8;
  TReferenceControllerBase<1> *local_1c0;
  void *local_1b8 [2];
  void *local_1a8 [2];
  longlong *local_198;
  int iStack_190;
  uint uStack_18c;
  TBitArray<FDefaultBitArrayAllocator> *local_188;
  undefined4 uStack_180;
  int iStack_17c;
  int local_178;
  int iStack_174;
  longlong *local_168;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_160;
  undefined8 local_140;
  longlong local_138;
  undefined8 local_130;
  longlong local_128;
  undefined8 local_120;
  longlong local_118;
  void *local_110 [2];
  void *local_100 [2];
  void *local_f0 [2];
  void *local_e0 [2];
  FReadAccessScope local_d0;
  FReadAccessScope local_b8;
  FReadAccessScope local_a0;
  FReadAccessScope local_88;
  FReadAccessScope local_70 [2];
  undefined4 local_3c;
  
  iVar14 = *(int *)((longlong)this + 0x60) - *(int *)((longlong)this + 0x8c);
  iVar16 = *(int *)((longlong)this + 0x10) - *(int *)((longlong)this + 0x3c);
  iVar2 = *(int *)((longlong)this + 0xb0);
  if ((iVar16 != iVar14) && (2 < (byte)LogSlate._0_1_)) {
    plVar12 = *(longlong **)this;
    if (plVar12 != (longlong *)0x0) {
      (**(code **)(*plVar12 + 0x1e0))(plVar12,local_110);
    }
    UE::Logging::Private::BasicLog<3>
              (&`public:_void___cdecl_SListView<TSharedPtr<EAudioOscilloscopeTriggerMode,1>_>::FWidgetGenerator::ValidateWidgetGeneration(void)___ptr64'
                ::__l6::LOG_Static,(FLogCategoryBase *)&LogSlate);
    if ((plVar12 != (longlong *)0x0) && (local_110[0] != (void *)0x0)) {
      FMemory::Free(local_110[0]);
    }
  }
  if ((iVar14 != iVar2) && (2 < (byte)LogSlate._0_1_)) {
    plVar12 = *(longlong **)this;
    if (plVar12 != (longlong *)0x0) {
      (**(code **)(*plVar12 + 0x1e0))(plVar12,local_100);
    }
    UE::Logging::Private::BasicLog<3>
              (&`public:_void___cdecl_SListView<TSharedPtr<EAudioOscilloscopeTriggerMode,1>_>::FWidgetGenerator::ValidateWidgetGeneration(void)___ptr64'
                ::__l26::LOG_Static,(FLogCategoryBase *)&LogSlate);
    if ((plVar12 != (longlong *)0x0) && (local_100[0] != (void *)0x0)) {
      FMemory::Free(local_100[0]);
    }
  }
  if ((iVar16 != iVar14) || (iVar14 != iVar2)) {
    lVar11 = *(longlong *)this;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(lVar11 + 0x790),&local_d0)
    ;
    if ((*(int *)(lVar11 + 0x7a0) == 0) ||
       ((*(longlong **)(lVar11 + 0x798) == (longlong *)0x0 ||
        (cVar7 = (**(code **)(**(longlong **)(lVar11 + 0x798) + 0x38))(), cVar7 == '\0')))) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_d0);
      if (2 < (byte)LogSlate._0_1_) {
        UE::Logging::Private::BasicLog<3>
                  (&`public:_void___cdecl_SListView<TSharedPtr<EAudioOscilloscopeTriggerMode,1>_>::FWidgetGenerator::ValidateWidgetGeneration(void)___ptr64'
                    ::__l210::LOG_Static,(FLogCategoryBase *)&LogSlate);
      }
    }
    else {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_d0);
      if ((2 < (byte)LogSlate._0_1_) &&
         (UE::Logging::Private::BasicLog<3>
                    (&`public:_void___cdecl_SListView<TSharedPtr<EAudioOscilloscopeTriggerMode,1>_>::FWidgetGenerator::ValidateWidgetGeneration(void)___ptr64'
                      ::__l49::LOG_Static,(FLogCategoryBase *)&LogSlate), 2 < (byte)LogSlate._0_1_))
      {
        UE::Logging::Private::BasicLog<3>
                  (&`public:_void___cdecl_SListView<TSharedPtr<EAudioOscilloscopeTriggerMode,1>_>::FWidgetGenerator::ValidateWidgetGeneration(void)___ptr64'
                    ::__l66::LOG_Static,(FLogCategoryBase *)&LogSlate);
      }
      local_168 = (longlong *)((longlong)this + 8);
      iVar14 = 0;
      iVar2 = *(int *)((longlong)this + 0x30);
      TStack_200.Array = (TBitArray<FDefaultBitArrayAllocator> *)((longlong)this + 0x18);
      TStack_200.BaseBitIndex = 0;
      uVar9 = 1;
      iVar16 = 0;
      if (iVar2 != 0) {
        pTVar15 = *(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x28);
        if (*(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x28) ==
            (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
          pTVar15 = TStack_200.Array;
        }
        uVar9 = *(uint *)(pTVar15->AllocatorInstance).InlineData;
        while (uVar9 == 0) {
          lVar11 = (longlong)iVar14;
          TStack_200.BaseBitIndex = TStack_200.BaseBitIndex + 0x20;
          iVar14 = iVar14 + 1;
          uVar9 = 1;
          iVar16 = iVar2;
          if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_14d97bbe1;
          uVar9 = *(uint *)((pTVar15->AllocatorInstance).InlineData + lVar11 * 4 + 4);
        }
        uVar9 = -uVar9 & uVar9;
        uVar1 = (ulonglong)uVar9 * 2 + 1;
        lVar11 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
          }
        }
        iVar16 = (int)lVar11 + -1 + TStack_200.BaseBitIndex;
        if (iVar2 < iVar16) {
          iVar16 = iVar2;
        }
      }
LAB_14d97bbe1:
      TStack_200._padding_ = CONCAT44(uVar9,iVar14);
      TStack_200.CurrentBitIndex = iVar16;
      TStack_200.UnvisitedBitMask = 0xffffffff;
      TStack_200._28_4_ = local_3c;
      TStack_160._padding_ = TStack_200._padding_;
      TStack_160.BaseBitIndex = TStack_200.BaseBitIndex;
      TStack_160._28_4_ = local_3c;
      TStack_160.UnvisitedBitMask = 0xffffffff;
      TStack_160.CurrentBitIndex = iVar16;
      TStack_160.Array = TStack_200.Array;
      if (iVar16 < iVar2) {
        do {
          plVar13 = local_168;
          plVar12 = *(longlong **)(*local_168 + 0x10 + (longlong)iVar16 * 0x28);
          (**(code **)(*plVar12 + 0x58))(plVar12,&local_1c8);
          if (2 < (byte)LogSlate._0_1_) {
            (**(code **)(*local_1c8 + 0x1e0))(local_1c8,local_f0);
            lVar11 = *(longlong *)this;
            lVar3 = *(longlong *)(*plVar13 + 8 + (longlong)iVar16 * 0x28);
            uVar4 = *(undefined8 *)(*plVar13 + (longlong)iVar16 * 0x28);
            if (lVar3 != 0) {
              LOCK();
              *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
              UNLOCK();
            }
            TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                      ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(lVar11 + 0x790),
                       &local_b8);
            if (*(int *)(lVar11 + 0x7a0) == 0) {
              plVar12 = (longlong *)0x0;
            }
            else {
              plVar12 = *(longlong **)(lVar11 + 0x798);
            }
            local_140 = uVar4;
            local_138 = lVar3;
            (**(code **)(*plVar12 + 0x60))(plVar12,local_1d8,&local_140);
            TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
            ~FReadAccessScope(&local_b8);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      ((TReferenceControllerBase<1> *)0x0);
            UE::Logging::Private::BasicLog<3>
                      (&`public:_void___cdecl_SListView<TSharedPtr<EAudioOscilloscopeTriggerMode,1>_>::FWidgetGenerator::ValidateWidgetGeneration(void)___ptr64'
                        ::__l85::LOG_Static,(FLogCategoryBase *)&LogSlate);
            if (local_1d8[0] != (void *)0x0) {
              FMemory::Free(local_1d8[0]);
            }
            if (local_f0[0] != (void *)0x0) {
              FMemory::Free(local_f0[0]);
            }
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_1c0);
          TStack_160.UnvisitedBitMask = TStack_160.UnvisitedBitMask & ~TStack_160._padding_._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_160);
          iVar16 = TStack_160.CurrentBitIndex;
        } while (TStack_160.CurrentBitIndex < (TStack_160.Array)->NumBits);
      }
      uVar9 = 1;
      if ((2 < (byte)LogSlate._0_1_) &&
         (UE::Logging::Private::BasicLog<3>
                    (&`public:_void___cdecl_SListView<TSharedPtr<EAudioOscilloscopeTriggerMode,1>_>::FWidgetGenerator::ValidateWidgetGeneration(void)___ptr64'
                      ::__l102::LOG_Static,(FLogCategoryBase *)&LogSlate), 2 < (byte)LogSlate._0_1_)
         ) {
        UE::Logging::Private::BasicLog<3>
                  (&`public:_void___cdecl_SListView<TSharedPtr<EAudioOscilloscopeTriggerMode,1>_>::FWidgetGenerator::ValidateWidgetGeneration(void)___ptr64'
                    ::__l119::LOG_Static,(FLogCategoryBase *)&LogSlate);
      }
      plVar12 = (longlong *)((longlong)this + 0x58);
      iStack_190 = 0;
      iVar2 = *(int *)((longlong)this + 0x80);
      TStack_200.Array = (TBitArray<FDefaultBitArrayAllocator> *)((longlong)this + 0x68);
      local_178 = 0;
      iVar14 = 0;
      if (iVar2 != 0) {
        pTVar15 = *(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x78);
        if (*(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x78) ==
            (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
          pTVar15 = TStack_200.Array;
        }
        uVar10 = *(uint *)(pTVar15->AllocatorInstance).InlineData;
        while (uVar10 == 0) {
          lVar11 = (longlong)iStack_190;
          local_178 = local_178 + 0x20;
          iStack_190 = iStack_190 + 1;
          iVar14 = iVar2;
          if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_190)
          goto LAB_14d97be31;
          uVar10 = *(uint *)((pTVar15->AllocatorInstance).InlineData + lVar11 * 4 + 4);
        }
        uVar9 = -uVar10 & uVar10;
        uVar1 = (ulonglong)uVar9 * 2 + 1;
        lVar11 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
          }
        }
        iVar14 = local_178 + -1 + (int)lVar11;
        if (iVar2 < iVar14) {
          iVar14 = iVar2;
        }
      }
LAB_14d97be31:
      uStack_180 = 0xffffffff;
      TStack_200._padding_ = CONCAT44(uVar9,iStack_190);
      TStack_200.CurrentBitIndex = iVar14;
      TStack_200.UnvisitedBitMask = 0xffffffff;
      TStack_200._28_4_ = iVar14;
      TStack_200.BaseBitIndex = local_178;
      local_198 = plVar12;
      uStack_18c = uVar9;
      local_188 = TStack_200.Array;
      iStack_17c = iVar14;
      iStack_174 = iVar14;
      if (iVar14 < iVar2) {
        do {
          if (2 < (byte)LogSlate._0_1_) {
            lVar11 = *(longlong *)this;
            lVar3 = *(longlong *)((longlong)iVar14 * 0x20 + 0x10 + *plVar12);
            uVar4 = *(undefined8 *)((longlong)iVar14 * 0x20 + 8 + *plVar12);
            if (lVar3 != 0) {
              LOCK();
              *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
              UNLOCK();
            }
            TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                      ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(lVar11 + 0x790),
                       &local_a0);
            if (*(int *)(lVar11 + 0x7a0) == 0) {
              plVar13 = (longlong *)0x0;
            }
            else {
              plVar13 = *(longlong **)(lVar11 + 0x798);
            }
            local_130 = uVar4;
            local_128 = lVar3;
            (**(code **)(*plVar13 + 0x60))(plVar13,local_1b8,&local_130);
            TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
            ~FReadAccessScope(&local_a0);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      ((TReferenceControllerBase<1> *)0x0);
            UE::Logging::Private::BasicLog<3>
                      ((FStaticBasicLogRecord *)
                       &`public:_void___cdecl_SListView<TSharedPtr<EAudioOscilloscopeTriggerMode,1>_>::FWidgetGenerator::ValidateWidgetGeneration(void)___ptr64'
                        ::K::LOG_Static,(FLogCategoryBase *)&LogSlate);
            if (local_1b8[0] != (void *)0x0) {
              FMemory::Free(local_1b8[0]);
            }
          }
          TStack_200.UnvisitedBitMask = TStack_200.UnvisitedBitMask & ~TStack_200._padding_._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_200);
          iVar14 = TStack_200.CurrentBitIndex;
        } while (TStack_200.CurrentBitIndex < (TStack_200.Array)->NumBits);
      }
      if ((2 < (byte)LogSlate._0_1_) &&
         (UE::Logging::Private::BasicLog<3>
                    (&`public:_void___cdecl_SListView<TSharedPtr<EAudioOscilloscopeTriggerMode,1>_>::FWidgetGenerator::ValidateWidgetGeneration(void)___ptr64'
                      ::__l155::LOG_Static,(FLogCategoryBase *)&LogSlate), 2 < (byte)LogSlate._0_1_)
         ) {
        UE::Logging::Private::BasicLog<3>
                  (&`public:_void___cdecl_SListView<TSharedPtr<EAudioOscilloscopeTriggerMode,1>_>::FWidgetGenerator::ValidateWidgetGeneration(void)___ptr64'
                    ::__l172::LOG_Static,(FLogCategoryBase *)&LogSlate);
      }
      uVar9 = 0;
      if (0 < *(int *)((longlong)this + 0xb0)) {
        lVar11 = 0;
        do {
          if (2 < (byte)LogSlate._0_1_) {
            lVar3 = *(longlong *)this;
            uVar10 = 0;
            if ((int)uVar9 < *(int *)((longlong)this + 0xb0)) {
              uVar10 = ~uVar9 >> 0x1f;
            }
            if ((uVar10 == 0) &&
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
            lVar5 = *(longlong *)(*(longlong *)((longlong)this + 0xa8) + 8 + lVar11);
            uVar4 = *(undefined8 *)(*(longlong *)((longlong)this + 0xa8) + lVar11);
            if (lVar5 != 0) {
              LOCK();
              *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
              UNLOCK();
            }
            TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                      ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(lVar3 + 0x790),
                       &local_88);
            if (*(int *)(lVar3 + 0x7a0) == 0) {
              plVar12 = (longlong *)0x0;
            }
            else {
              plVar12 = *(longlong **)(lVar3 + 0x798);
            }
            local_120 = uVar4;
            local_118 = lVar5;
            (**(code **)(*plVar12 + 0x60))(plVar12,local_1a8,&local_120);
            TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
            ~FReadAccessScope(&local_88);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      ((TReferenceControllerBase<1> *)0x0);
            UE::Logging::Private::BasicLog<3>
                      (&`public:_void___cdecl_SListView<TSharedPtr<EAudioOscilloscopeTriggerMode,1>_>::FWidgetGenerator::ValidateWidgetGeneration(void)___ptr64'
                        ::__l191::LOG_Static,(FLogCategoryBase *)&LogSlate);
            if (local_1a8[0] != (void *)0x0) {
              FMemory::Free(local_1a8[0]);
            }
          }
          uVar9 = uVar9 + 1;
          lVar11 = lVar11 + 0x10;
        } while ((int)uVar9 < *(int *)((longlong)this + 0xb0));
      }
    }
    lVar11 = *(longlong *)this;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(lVar11 + 0x7a8),local_70);
    if ((*(int *)(lVar11 + 0x7b8) != 0) && (*(longlong **)(lVar11 + 0x7b0) != (longlong *)0x0)) {
      (**(code **)(**(longlong **)(lVar11 + 0x7b0) + 0x68))();
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (local_70);
    (**(code **)(**(longlong **)this + 0x1e0))(*(longlong **)this,local_e0);
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets\\Views\\SListView.h"
                       ,0x37b,
                       L"%s detected a critical error. See diagnostic dump above. Provide a custom \'OnItemToString_Debug\' for more detailed diagnostics."
                      );
    if (local_e0[0] != (void *)0x0) {
      FMemory::Free(local_e0[0]);
    }
    if (bVar8) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  return;
}

// ValidateWidgetGeneration @ 14d97c1a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SListView<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>::
FWidgetGenerator::ValidateWidgetGeneration(FWidgetGenerator *this)

{
  TMap<ITableRow_const_*,TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<ITableRow_const_*,TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>,0>_>
  *pTVar1;
  ulonglong uVar2;
  int iVar3;
  SListView<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_> *pSVar4;
  TReferenceControllerBase<1> *pTVar5;
  undefined8 uVar6;
  FScriptContainerElement *pFVar7;
  longlong lVar8;
  code *pcVar9;
  TMap<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>,TSharedRef<ITableRow,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>,TSharedRef<ITableRow,1>,0>_>
  *pTVar10;
  char cVar11;
  bool bVar12;
  uint uVar13;
  uint uVar14;
  longlong lVar15;
  longlong *plVar16;
  atomic<int> *paVar17;
  int iVar18;
  uint *puVar19;
  int iVar20;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_200;
  void *local_1d8 [2];
  longlong *local_1c8;
  TReferenceControllerBase<1> *local_1c0;
  void *local_1b8 [2];
  void *local_1a8 [2];
  TMap<ITableRow_const_*,TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<ITableRow_const_*,TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>,0>_>
  *local_198;
  int iStack_190;
  uint uStack_18c;
  undefined1 *local_188;
  undefined4 uStack_180;
  int iStack_17c;
  int local_178;
  int iStack_174;
  TMap<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>,TSharedRef<ITableRow,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>,TSharedRef<ITableRow,1>,0>_>
  *local_168;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_160;
  undefined8 local_140;
  TReferenceControllerBase<1> *local_138;
  undefined8 local_130;
  TReferenceControllerBase<1> *local_128;
  undefined8 local_120;
  TReferenceControllerBase<1> *local_118;
  void *local_110 [2];
  void *local_100 [2];
  void *local_f0 [2];
  void *local_e0 [2];
  FReadAccessScope local_d0;
  FReadAccessScope local_b8;
  FReadAccessScope local_a0;
  FReadAccessScope local_88;
  FReadAccessScope local_70 [2];
  undefined4 local_3c;
  
  iVar18 = *(int *)&(this->WidgetMapToItem).field_0x8 - *(int *)&(this->WidgetMapToItem).field_0x34;
  iVar20 = *(int *)&(this->ItemToWidgetMap).field_0x8 - *(int *)&(this->ItemToWidgetMap).field_0x34;
  iVar3 = (this->ItemsWithGeneratedWidgets).ArrayNum;
  if ((iVar20 != iVar18) && (2 < (byte)LogSlate._0_1_)) {
    pSVar4 = this->OwnerList;
    if (pSVar4 != (SListView<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>
                   *)0x0) {
      (**(code **)(pSVar4->_padding_ + 0x1e0))(pSVar4,local_110);
    }
    UE::Logging::Private::BasicLog<3>
              (&`public:_void___cdecl_SListView<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>::FWidgetGenerator::ValidateWidgetGeneration(void)___ptr64'
                ::__l6::LOG_Static,(FLogCategoryBase *)&LogSlate);
    if ((pSVar4 != (SListView<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>
                    *)0x0) && (local_110[0] != (void *)0x0)) {
      FMemory::Free(local_110[0]);
    }
  }
  if ((iVar18 != iVar3) && (2 < (byte)LogSlate._0_1_)) {
    pSVar4 = this->OwnerList;
    if (pSVar4 != (SListView<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>
                   *)0x0) {
      (**(code **)(pSVar4->_padding_ + 0x1e0))(pSVar4,local_100);
    }
    UE::Logging::Private::BasicLog<3>
              (&`public:_void___cdecl_SListView<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>::FWidgetGenerator::ValidateWidgetGeneration(void)___ptr64'
                ::__l26::LOG_Static,(FLogCategoryBase *)&LogSlate);
    if ((pSVar4 != (SListView<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>
                    *)0x0) && (local_100[0] != (void *)0x0)) {
      FMemory::Free(local_100[0]);
    }
  }
  if ((iVar20 != iVar18) || (iVar18 != iVar3)) {
    pSVar4 = this->OwnerList;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &pSVar4->OnItemToString_Debug,&local_d0);
    if ((*(int *)&(pSVar4->OnItemToString_Debug).field_0x10 == 0) ||
       ((plVar16 = *(longlong **)&(pSVar4->OnItemToString_Debug).field_0x8,
        plVar16 == (longlong *)0x0 || (cVar11 = (**(code **)(*plVar16 + 0x38))(), cVar11 == '\0'))))
    {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_d0);
      if (2 < (byte)LogSlate._0_1_) {
        UE::Logging::Private::BasicLog<3>
                  (&`public:_void___cdecl_SListView<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>::FWidgetGenerator::ValidateWidgetGeneration(void)___ptr64'
                    ::__l210::LOG_Static,(FLogCategoryBase *)&LogSlate);
      }
    }
    else {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_d0);
      if ((2 < (byte)LogSlate._0_1_) &&
         (UE::Logging::Private::BasicLog<3>
                    (&`public:_void___cdecl_SListView<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>::FWidgetGenerator::ValidateWidgetGeneration(void)___ptr64'
                      ::__l49::LOG_Static,(FLogCategoryBase *)&LogSlate), 2 < (byte)LogSlate._0_1_))
      {
        UE::Logging::Private::BasicLog<3>
                  (&`public:_void___cdecl_SListView<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>::FWidgetGenerator::ValidateWidgetGeneration(void)___ptr64'
                    ::__l66::LOG_Static,(FLogCategoryBase *)&LogSlate);
      }
      local_168 = &this->ItemToWidgetMap;
      iVar18 = 0;
      iVar3 = *(int *)&(this->ItemToWidgetMap).field_0x28;
      TStack_200.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->ItemToWidgetMap).field_0x10
      ;
      TStack_200.BaseBitIndex = 0;
      uVar13 = 1;
      iVar20 = 0;
      if (iVar3 != 0) {
        puVar19 = *(uint **)&(this->ItemToWidgetMap).field_0x20;
        if (puVar19 == (uint *)0x0) {
          puVar19 = (uint *)TStack_200.Array;
        }
        uVar13 = *puVar19;
        while (uVar13 == 0) {
          lVar15 = (longlong)iVar18;
          TStack_200.BaseBitIndex = TStack_200.BaseBitIndex + 0x20;
          iVar18 = iVar18 + 1;
          uVar13 = 1;
          iVar20 = iVar3;
          if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar18) goto LAB_14d97c400;
          uVar13 = puVar19[lVar15 + 1];
        }
        uVar13 = -uVar13 & uVar13;
        uVar2 = (ulonglong)uVar13 * 2 + 1;
        lVar15 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar15 == 0; lVar15 = lVar15 + -1) {
          }
        }
        iVar20 = (int)lVar15 + -1 + TStack_200.BaseBitIndex;
        if (iVar3 < iVar20) {
          iVar20 = iVar3;
        }
      }
LAB_14d97c400:
      TStack_200._padding_ = CONCAT44(uVar13,iVar18);
      TStack_200.CurrentBitIndex = iVar20;
      TStack_200.UnvisitedBitMask = 0xffffffff;
      TStack_200._28_4_ = local_3c;
      TStack_160._padding_ = TStack_200._padding_;
      TStack_160.BaseBitIndex = TStack_200.BaseBitIndex;
      TStack_160._28_4_ = local_3c;
      TStack_160.UnvisitedBitMask = 0xffffffff;
      TStack_160.CurrentBitIndex = iVar20;
      TStack_160.Array = TStack_200.Array;
      if (iVar20 < iVar3) {
        do {
          pTVar10 = local_168;
          plVar16 = *(longlong **)(*(longlong *)local_168 + 0x10 + (longlong)iVar20 * 0x28);
          (**(code **)(*plVar16 + 0x58))(plVar16,&local_1c8);
          if (2 < (byte)LogSlate._0_1_) {
            (**(code **)(*local_1c8 + 0x1e0))(local_1c8,local_f0);
            pSVar4 = this->OwnerList;
            pTVar5 = *(TReferenceControllerBase<1> **)
                      (*(longlong *)pTVar10 + 8 + (longlong)iVar20 * 0x28);
            uVar6 = *(undefined8 *)(*(longlong *)pTVar10 + (longlong)iVar20 * 0x28);
            if (pTVar5 == (TReferenceControllerBase<1> *)0x0) {
              paVar17 = (atomic<int> *)&DAT_00000008;
            }
            else {
              paVar17 = &pTVar5->SharedReferenceCount;
              LOCK();
              *paVar17 = (atomic<int>)((int)*paVar17 + 1);
              UNLOCK();
            }
            TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                      ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                       &pSVar4->OnItemToString_Debug,&local_b8);
            if (*(int *)&(pSVar4->OnItemToString_Debug).field_0x10 == 0) {
              plVar16 = (longlong *)0x0;
            }
            else {
              plVar16 = *(longlong **)&(pSVar4->OnItemToString_Debug).field_0x8;
            }
            lVar15 = *plVar16;
            if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              *paVar17 = (atomic<int>)((int)*paVar17 + 1);
              UNLOCK();
            }
            local_140 = uVar6;
            local_138 = pTVar5;
            (**(code **)(lVar15 + 0x60))(plVar16,local_1d8,&local_140);
            TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
            ~FReadAccessScope(&local_b8);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (pTVar5);
            UE::Logging::Private::BasicLog<3>
                      (&`public:_void___cdecl_SListView<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>::FWidgetGenerator::ValidateWidgetGeneration(void)___ptr64'
                        ::__l85::LOG_Static,(FLogCategoryBase *)&LogSlate);
            if (local_1d8[0] != (void *)0x0) {
              FMemory::Free(local_1d8[0]);
            }
            if (local_f0[0] != (void *)0x0) {
              FMemory::Free(local_f0[0]);
            }
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_1c0);
          TStack_160.UnvisitedBitMask = TStack_160.UnvisitedBitMask & ~TStack_160._padding_._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_160);
          iVar20 = TStack_160.CurrentBitIndex;
        } while (TStack_160.CurrentBitIndex < (TStack_160.Array)->NumBits);
      }
      if ((2 < (byte)LogSlate._0_1_) &&
         (UE::Logging::Private::BasicLog<3>
                    (&`public:_void___cdecl_SListView<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>::FWidgetGenerator::ValidateWidgetGeneration(void)___ptr64'
                      ::__l102::LOG_Static,(FLogCategoryBase *)&LogSlate), 2 < (byte)LogSlate._0_1_)
         ) {
        UE::Logging::Private::BasicLog<3>
                  (&`public:_void___cdecl_SListView<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>::FWidgetGenerator::ValidateWidgetGeneration(void)___ptr64'
                    ::__l119::LOG_Static,(FLogCategoryBase *)&LogSlate);
      }
      pTVar1 = &this->WidgetMapToItem;
      iStack_190 = 0;
      iVar3 = *(int *)&(this->WidgetMapToItem).field_0x28;
      TStack_200.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->WidgetMapToItem).field_0x10
      ;
      local_178 = 0;
      iVar18 = 0;
      uStack_18c = 1;
      if (iVar3 != 0) {
        puVar19 = *(uint **)&(this->WidgetMapToItem).field_0x20;
        if (puVar19 == (uint *)0x0) {
          puVar19 = (uint *)TStack_200.Array;
        }
        uVar13 = *puVar19;
        while (uVar13 == 0) {
          lVar15 = (longlong)iStack_190;
          local_178 = local_178 + 0x20;
          iStack_190 = iStack_190 + 1;
          iVar18 = iVar3;
          if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_190)
          goto LAB_14d97c671;
          uVar13 = puVar19[lVar15 + 1];
        }
        uStack_18c = -uVar13 & uVar13;
        uVar2 = (ulonglong)uStack_18c * 2 + 1;
        lVar15 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar15 == 0; lVar15 = lVar15 + -1) {
          }
        }
        iVar18 = local_178 + -1 + (int)lVar15;
        if (iVar3 < iVar18) {
          iVar18 = iVar3;
        }
      }
LAB_14d97c671:
      uStack_180 = 0xffffffff;
      TStack_200._padding_ = CONCAT44(uStack_18c,iStack_190);
      TStack_200.CurrentBitIndex = iVar18;
      TStack_200.UnvisitedBitMask = 0xffffffff;
      TStack_200._28_4_ = iVar18;
      TStack_200.BaseBitIndex = local_178;
      local_198 = pTVar1;
      local_188 = (undefined1 *)TStack_200.Array;
      iStack_17c = iVar18;
      iStack_174 = iVar18;
      if (iVar18 < iVar3) {
        do {
          if (2 < (byte)LogSlate._0_1_) {
            pSVar4 = this->OwnerList;
            pTVar5 = *(TReferenceControllerBase<1> **)
                      ((longlong)iVar18 * 0x20 + 0x10 + *(longlong *)pTVar1);
            uVar6 = *(undefined8 *)((longlong)iVar18 * 0x20 + 8 + *(longlong *)pTVar1);
            if (pTVar5 == (TReferenceControllerBase<1> *)0x0) {
              paVar17 = (atomic<int> *)&DAT_00000008;
            }
            else {
              paVar17 = &pTVar5->SharedReferenceCount;
              LOCK();
              *paVar17 = (atomic<int>)((int)*paVar17 + 1);
              UNLOCK();
            }
            TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                      ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                       &pSVar4->OnItemToString_Debug,&local_a0);
            if (*(int *)&(pSVar4->OnItemToString_Debug).field_0x10 == 0) {
              plVar16 = (longlong *)0x0;
            }
            else {
              plVar16 = *(longlong **)&(pSVar4->OnItemToString_Debug).field_0x8;
            }
            lVar15 = *plVar16;
            if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              *paVar17 = (atomic<int>)((int)*paVar17 + 1);
              UNLOCK();
            }
            local_130 = uVar6;
            local_128 = pTVar5;
            (**(code **)(lVar15 + 0x60))(plVar16,local_1b8,&local_130);
            TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
            ~FReadAccessScope(&local_a0);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (pTVar5);
            UE::Logging::Private::BasicLog<3>
                      ((FStaticBasicLogRecord *)
                       &`public:_void___cdecl_SListView<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>::FWidgetGenerator::ValidateWidgetGeneration(void)___ptr64'
                        ::K::LOG_Static,(FLogCategoryBase *)&LogSlate);
            if (local_1b8[0] != (void *)0x0) {
              FMemory::Free(local_1b8[0]);
            }
          }
          TStack_200.UnvisitedBitMask = TStack_200.UnvisitedBitMask & ~TStack_200._padding_._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_200);
          iVar18 = TStack_200.CurrentBitIndex;
        } while (TStack_200.CurrentBitIndex < (TStack_200.Array)->NumBits);
      }
      if ((2 < (byte)LogSlate._0_1_) &&
         (UE::Logging::Private::BasicLog<3>
                    (&`public:_void___cdecl_SListView<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>::FWidgetGenerator::ValidateWidgetGeneration(void)___ptr64'
                      ::__l155::LOG_Static,(FLogCategoryBase *)&LogSlate), 2 < (byte)LogSlate._0_1_)
         ) {
        UE::Logging::Private::BasicLog<3>
                  (&`public:_void___cdecl_SListView<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>::FWidgetGenerator::ValidateWidgetGeneration(void)___ptr64'
                    ::__l172::LOG_Static,(FLogCategoryBase *)&LogSlate);
      }
      uVar13 = 0;
      if (0 < (this->ItemsWithGeneratedWidgets).ArrayNum) {
        lVar15 = 0;
        do {
          if (2 < (byte)LogSlate._0_1_) {
            pSVar4 = this->OwnerList;
            uVar14 = 0;
            if ((int)uVar13 < (this->ItemsWithGeneratedWidgets).ArrayNum) {
              uVar14 = ~uVar13 >> 0x1f;
            }
            if ((uVar14 == 0) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar12)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            pFVar7 = (this->ItemsWithGeneratedWidgets).AllocatorInstance.Data;
            pTVar5 = *(TReferenceControllerBase<1> **)(pFVar7 + lVar15 + 8);
            uVar6 = *(undefined8 *)(pFVar7 + lVar15);
            if (pTVar5 == (TReferenceControllerBase<1> *)0x0) {
              paVar17 = (atomic<int> *)&DAT_00000008;
            }
            else {
              paVar17 = &pTVar5->SharedReferenceCount;
              LOCK();
              *paVar17 = (atomic<int>)((int)*paVar17 + 1);
              UNLOCK();
            }
            TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                      ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                       &pSVar4->OnItemToString_Debug,&local_88);
            if (*(int *)&(pSVar4->OnItemToString_Debug).field_0x10 == 0) {
              plVar16 = (longlong *)0x0;
            }
            else {
              plVar16 = *(longlong **)&(pSVar4->OnItemToString_Debug).field_0x8;
            }
            lVar8 = *plVar16;
            if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              *paVar17 = (atomic<int>)((int)*paVar17 + 1);
              UNLOCK();
            }
            local_120 = uVar6;
            local_118 = pTVar5;
            (**(code **)(lVar8 + 0x60))(plVar16,local_1a8,&local_120);
            TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
            ~FReadAccessScope(&local_88);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (pTVar5);
            UE::Logging::Private::BasicLog<3>
                      (&`public:_void___cdecl_SListView<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>::FWidgetGenerator::ValidateWidgetGeneration(void)___ptr64'
                        ::__l191::LOG_Static,(FLogCategoryBase *)&LogSlate);
            if (local_1a8[0] != (void *)0x0) {
              FMemory::Free(local_1a8[0]);
            }
          }
          uVar13 = uVar13 + 1;
          lVar15 = lVar15 + 0x10;
        } while ((int)uVar13 < (this->ItemsWithGeneratedWidgets).ArrayNum);
      }
    }
    pSVar4 = this->OwnerList;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pSVar4->OnEnteredBadState,
               local_70);
    if ((*(int *)&(pSVar4->OnEnteredBadState).field_0x10 != 0) &&
       (plVar16 = *(longlong **)&(pSVar4->OnEnteredBadState).field_0x8, plVar16 != (longlong *)0x0))
    {
      (**(code **)(*plVar16 + 0x68))();
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (local_70);
    (**(code **)(this->OwnerList->_padding_ + 0x1e0))(this->OwnerList,local_e0);
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("false",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets\\Views\\SListView.h"
                        ,0x37b,
                        L"%s detected a critical error. See diagnostic dump above. Provide a custom \'OnItemToString_Debug\' for more detailed diagnostics."
                       );
    if (local_e0[0] != (void *)0x0) {
      FMemory::Free(local_e0[0]);
    }
    if (bVar12) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  return;
}

// operator() @ 150587a00

bool __thiscall
`SListView<TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>_>::FWidgetGenerator::ProcessItemCleanUp'
::__l8::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_8670646794247470298>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_8670646794247470298>,
                       &`public:___cdecl_`public:_void___cdecl_SListView<TSharedPtr<EAudioOscilloscopeTriggerMode,1>_>::FWidgetGenerator::ProcessItemCleanUp(void)___ptr64'::`8'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 150587a40

bool __thiscall
`SListView<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>::
FWidgetGenerator::ProcessItemCleanUp'::__l8::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_8670646794247470298>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_8670646794247470298>,
                       &`public:___cdecl_`public:_void___cdecl_SListView<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>::FWidgetGenerator::ProcessItemCleanUp(void)___ptr64'::`8'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

