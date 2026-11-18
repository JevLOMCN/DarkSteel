// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StateTreeDeveloper
// Functions: 19

// Construct<UE::StateTree::CompactTreeView::FStateItemCustomData> @ 14d7028c0

void __cdecl
UE::CoreUObject::Private::Construct<UE::StateTree::CompactTreeView::FStateItemCustomData>
          (void *param_1)

{
  return;
}

// ConstructForTests<UE::StateTree::CompactTreeView::FStateItemCustomData> @ 14d7028d0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<UE::StateTree::CompactTreeView::FStateItemCustomData>
          (void *param_1)

{
  return;
}

// Construct<UE::StateTree::CompactTreeView::FStateItemDebuggerData> @ 14d7029a0

void __cdecl
UE::CoreUObject::Private::Construct<UE::StateTree::CompactTreeView::FStateItemDebuggerData>
          (void *param_1)

{
  *(undefined1 *)param_1 = 0;
  return;
}

// ConstructForTests<UE::StateTree::CompactTreeView::FStateItemDebuggerData> @ 14d7029b0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<UE::StateTree::CompactTreeView::FStateItemDebuggerData>
          (void *param_1)

{
  *(undefined1 *)param_1 = 0;
  return;
}

// Destruct<UE::StateTree::CompactTreeView::FStateItemDebuggerData> @ 14d7029c0

void __cdecl
UE::CoreUObject::Private::Destruct<UE::StateTree::CompactTreeView::FStateItemDebuggerData>
          (void *param_1)

{
  return;
}

// Copy<UE::StateTree::CompactTreeView::FStateItemDebuggerData> @ 14d7029d0

bool __cdecl
UE::CoreUObject::Private::Copy<UE::StateTree::CompactTreeView::FStateItemDebuggerData>
          (void *param_1,void *param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined1 *)param_1 = *(undefined1 *)((longlong)param_1 + lVar1);
      param_1 = (void *)((longlong)param_1 + 1);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// DereferenceIfNecessary<UE::Slate::ItemsSource::FObservableArrayPointer<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_>,UE::Slate::ItemsSource::FObservableArrayPointer<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_>_*_&> @ 14d704d50

FObservableArrayPointer<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_> * __cdecl
UE::Core::Private::
DereferenceIfNecessary<UE::Slate::ItemsSource::FObservableArrayPointer<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_>,UE::Slate::ItemsSource::FObservableArrayPointer<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_>_*_&>
          (FObservableArrayPointer<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_>
           **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<UE::Slate::ItemsSource::FObservableArrayPointer<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>_>,UE::Slate::ItemsSource::FObservableArrayPointer<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>_>_*_&> @ 14d704d70

FObservableArrayPointer<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>_> * __cdecl
UE::Core::Private::
DereferenceIfNecessary<UE::Slate::ItemsSource::FObservableArrayPointer<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>_>,UE::Slate::ItemsSource::FObservableArrayPointer<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>_>_*_&>
          (FObservableArrayPointer<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>_>
           **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<UE::Slate::ItemsSource::FSharedObservableArray<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_>,UE::Slate::ItemsSource::FSharedObservableArray<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_>_*_&> @ 14d704d90

FSharedObservableArray<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_> * __cdecl
UE::Core::Private::
DereferenceIfNecessary<UE::Slate::ItemsSource::FSharedObservableArray<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_>,UE::Slate::ItemsSource::FSharedObservableArray<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_>_*_&>
          (FSharedObservableArray<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_>
           **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<UE::Slate::ItemsSource::FSharedObservableArray<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>_>,UE::Slate::ItemsSource::FSharedObservableArray<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>_>_*_&> @ 14d704db0

FSharedObservableArray<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>_> * __cdecl
UE::Core::Private::
DereferenceIfNecessary<UE::Slate::ItemsSource::FSharedObservableArray<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>_>,UE::Slate::ItemsSource::FSharedObservableArray<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>_>_*_&>
          (FSharedObservableArray<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>_>
           **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<STableRow<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_>,STableRow<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_>_*_&> @ 14d704dd0

STableRow<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_> * __cdecl
UE::Core::Private::
DereferenceIfNecessary<STableRow<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_>,STableRow<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_>_*_&>
          (STableRow<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_> **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<STableRow<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>_>,STableRow<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>_>_*_&> @ 14d704df0

STableRow<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>_> * __cdecl
UE::Core::Private::
DereferenceIfNecessary<STableRow<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>_>,STableRow<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>_>_*_&>
          (STableRow<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>_> **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<UE::StateTree::SCompactTreeView,UE::StateTree::SCompactTreeView_*_&> @ 14d704e10

SCompactTreeView * __cdecl
UE::Core::Private::
DereferenceIfNecessary<UE::StateTree::SCompactTreeView,UE::StateTree::SCompactTreeView_*_&>
          (SCompactTreeView **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<SListView<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_>::SListViewPinnedRowWidget,SListView<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_>::SListViewPinnedRowWidget_*_&> @ 14d704e30

SListViewPinnedRowWidget * __cdecl
UE::Core::Private::
DereferenceIfNecessary<SListView<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_>::SListViewPinnedRowWidget,SListView<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_>::SListViewPinnedRowWidget_*_&>
          (SListViewPinnedRowWidget **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<SListView<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>_>::SListViewPinnedRowWidget,SListView<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>_>::SListViewPinnedRowWidget_*_&> @ 14d704e50

SListViewPinnedRowWidget * __cdecl
UE::Core::Private::
DereferenceIfNecessary<SListView<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>_>::SListViewPinnedRowWidget,SListView<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>_>::SListViewPinnedRowWidget_*_&>
          (SListViewPinnedRowWidget **param_1)

{
  return *param_1;
}

// GetStructRef<UE::StateTree::CompactTreeView::FStateItemDebuggerData> @ 14d706a20

FStateItemDebuggerData * __cdecl
UE::StructUtils::GetStructRef<UE::StateTree::CompactTreeView::FStateItemDebuggerData>
          (UScriptStruct *param_1,void *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  FStateItemDebuggerData *pFVar4;
  UPackage *pUVar5;
  FString local_28;
  FString local_18;
  
  if ((param_2 == (void *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("StructMemory != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\StructUtils.h"
                         ,0x22,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar4 = (FStateItemDebuggerData *)(*pcVar2)();
    return pFVar4;
  }
  if ((param_1 == (UScriptStruct *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ScriptStruct != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\StructUtils.h"
                         ,0x23,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar4 = (FStateItemDebuggerData *)(*pcVar2)();
    return pFVar4;
  }
  if (Z_Registration_Info_UScriptStruct_FStateItemDebuggerData.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar5 = Z_Construct_UPackage__Script_StateTreeDeveloper();
    Z_Registration_Info_UScriptStruct_FStateItemDebuggerData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FStateItemDebuggerData,(UObject *)pUVar5,
                         L"StateItemDebuggerData");
  }
  if (param_1 == Z_Registration_Info_UScriptStruct_FStateItemDebuggerData.OuterSingleton) {
    return param_2;
  }
  if (Z_Registration_Info_UScriptStruct_FStateItemDebuggerData.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar5 = Z_Construct_UPackage__Script_StateTreeDeveloper();
    Z_Registration_Info_UScriptStruct_FStateItemDebuggerData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FStateItemDebuggerData,(UObject *)pUVar5,
                         L"StateItemDebuggerData");
    if (Z_Registration_Info_UScriptStruct_FStateItemDebuggerData.OuterSingleton ==
        (UScriptStruct *)0x0) goto LAB_14d706b1b;
  }
  iVar1 = (int)(Z_Registration_Info_UScriptStruct_FStateItemDebuggerData.OuterSingleton)->_padding_;
  if (((int)param_1->_padding_ < iVar1) ||
     ((longlong *)*(undefined1 **)(param_1->_padding_ + (longlong)iVar1 * 8) !=
      &(Z_Registration_Info_UScriptStruct_FStateItemDebuggerData.OuterSingleton)->_padding_)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if (bVar3) {
    return param_2;
  }
LAB_14d706b1b:
  if (Z_Registration_Info_UScriptStruct_FStateItemDebuggerData.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar5 = Z_Construct_UPackage__Script_StateTreeDeveloper();
    Z_Registration_Info_UScriptStruct_FStateItemDebuggerData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FStateItemDebuggerData,(UObject *)pUVar5,
                         L"StateItemDebuggerData");
  }
  UObjectBaseUtility::GetPathName
            ((UObjectBaseUtility *)
             Z_Registration_Info_UScriptStruct_FStateItemDebuggerData.OuterSingleton,&local_18,
             (UObject *)0x0);
  UObjectBaseUtility::GetPathName((UObjectBaseUtility *)param_1,&local_28,(UObject *)0x0);
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("ScriptStruct == TBaseStructure<T>::Get() || ScriptStruct->IsChildOf(TBaseStructure<T>::Get())"
                     ,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\StructUtils.h"
                     ,0x27,L"Incompatible struct types: Cannot cast \'%s\' to \'%s\'");
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (!bVar3) {
    return param_2;
  }
  pcVar2 = (code *)swi(3);
  pFVar4 = (FStateItemDebuggerData *)(*pcVar2)();
  return pFVar4;
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_>_> @ 14d708280

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_>_>
          (ushort param_1,
          ForElementType<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_> *param_2,
          int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar7 = (ulonglong)(byte)param_1;
    if (uVar1 < 9) {
      iVar8 = 8;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 9) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar6 = 4;
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::
    ForElementType<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_>::ResizeAllocation
              (param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocShrink<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_>_> @ 14d708350

void __cdecl
UE::Core::Private::
ReallocShrink<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_>_>
          (uint param_1,uint param_2,
          ForElementType<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_> *param_3,
          int param_4,int *param_5)

{
  int iVar1;
  int iVar2;
  ulong64 uVar3;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)param_1;
  iVar1 = *param_5;
  if ((uint)param_4 < 9) {
    iVar2 = 8;
  }
  else {
    iVar2 = iVar1;
    if ((((0x3fff < (longlong)(iVar1 - param_4) * uVar4) || (param_4 * 3 < iVar1 * 2)) &&
        ((0x40 < iVar1 - param_4 || (param_4 == 0)))) && (iVar2 = param_4, 0 < param_4)) {
      uVar3 = FMemory::QuantizeSize((longlong)param_4 * uVar4,0);
      iVar2 = (int)(uVar3 / uVar4);
    }
  }
  if (iVar2 != iVar1) {
    *param_5 = iVar2;
    TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::
    ForElementType<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_>::ResizeAllocation
              (param_3,param_4,iVar2,uVar4);
  }
  return;
}

// VisitEventTreeElements @ 14d74b770

void __cdecl
UE::StateTreeDebugger::VisitEventTreeElements
          (TArrayView<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_const_,int>
           *param_1,
          TFunctionRef<bool___cdecl(TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_&)>
          *param_2)

{
  int iVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  longlong lVar4;
  bool bVar5;
  char cVar6;
  uint uVar7;
  TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1> *pTVar8;
  TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1> *pTVar9;
  TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1> *pTVar10;
  ForAnyElementType FVar11;
  TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1> *pTVar12;
  undefined1 local_res8 [8];
  ForAnyElementType local_58;
  uint local_50;
  uint local_4c;
  longlong local_48;
  TReferenceControllerBase<1> *local_40;
  
  pTVar8 = (TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1> *)0x0;
  uVar7 = 0;
  pTVar12 = param_1->DataPtr;
  pTVar9 = pTVar12 + param_1->ArrayNum;
  local_58.Data = (FScriptContainerElement *)0x0;
  local_50 = 0;
  cVar6 = '\x01';
  local_4c = 0;
  FVar11.Data = (FScriptContainerElement *)pTVar8;
  for (; pTVar12 != pTVar9; pTVar12 = pTVar12 + 1) {
    if (pTVar12->Object != (FFrameEventTreeElement *)0x0) {
      uVar7 = (uint)pTVar8;
      if (((FVar11.Data <= pTVar12) &&
          (pTVar12 < (TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1> *)
                     ((longlong)FVar11.Data + (longlong)(int)local_4c * 0x10))) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), FVar11.Data = local_58.Data, uVar7 = local_50, bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (uVar7 == local_4c) {
        uVar7 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&local_58,(int *)&local_4c);
        FVar11.Data = local_58.Data;
      }
      local_50 = uVar7 + 1;
      ((TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1> *)
      ((longlong)FVar11.Data + (longlong)(int)uVar7 * 0x10))->Object = pTVar12->Object;
      pTVar2 = (pTVar12->SharedReferenceCount).ReferenceController;
      (((TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1> *)
       ((longlong)FVar11.Data + (longlong)(int)uVar7 * 0x10))->SharedReferenceCount).
      ReferenceController = pTVar2;
      if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
        UNLOCK();
      }
      pTVar8 = (TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1> *)(ulonglong)local_50;
      if (local_50 != 0) {
        do {
          uVar7 = (uint)pTVar8;
          FVar11.Data = local_58.Data;
          if (cVar6 == '\0') goto LAB_14d74bb30;
          if (((int)uVar7 < 1) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             uVar7 = local_50, bVar5)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          local_48 = *(longlong *)local_58.Data;
          local_40 = *(TReferenceControllerBase<1> **)(local_58.Data + 8);
          if (local_40 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            local_40->SharedReferenceCount = (atomic<int>)((int)local_40->SharedReferenceCount + 1);
            UNLOCK();
            uVar7 = local_50;
          }
          if ((local_48 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("StackedElement",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\StateTree\\Source\\StateTreeDeveloper\\Private\\Debugger\\SStateTreeFrameEventsView.cpp"
                                 ,0x27,L""), uVar7 = local_50, bVar5)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          if (((int)uVar7 < 1) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          FVar11.Data = local_58.Data;
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (*(TReferenceControllerBase<1> **)(local_58.Data + 8));
          if (local_50 - 1 != 0) {
            memmove(FVar11.Data,
                    (TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1> *)
                    (FVar11.Data + 0x10),(longlong)(int)(local_50 - 1) << 4);
          }
          local_50 = local_50 - 1;
          Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,8,&local_58,local_50,(int *)&local_4c);
          cVar6 = (**(code **)param_2)(*(undefined8 *)&param_2->field_0x8,&local_48);
          if (cVar6 != '\0') {
            if ((local_48 == 0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x458,L""), bVar5)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            lVar4 = local_48;
            iVar1 = *(int *)(local_48 + 0x90);
            pTVar8 = *(TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1> **)
                      (local_48 + 0x88);
            pTVar10 = pTVar8 + iVar1;
            while( true ) {
              if (*(int *)(lVar4 + 0x90) != iVar1) {
                local_res8[0] = 0;
                `TCheckedPointerIterator<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>,int,0>
                ::operator!='::__l2::<lambda_1>::operator()(local_res8);
              }
              if (pTVar8 == pTVar10) break;
              if (pTVar8->Object != (FFrameEventTreeElement *)0x0) {
                if (((local_58.Data <= pTVar8) &&
                    (pTVar8 < (TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1> *)
                              (local_58.Data + (longlong)(int)local_4c * 0x10))) &&
                   (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x7a5,
                                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                      ), bVar5)) {
                  pcVar3 = (code *)swi(3);
                  (*pcVar3)();
                  return;
                }
                if (local_50 == local_4c) {
                  local_50 = Core::Private::
                             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                       (0x810,&local_58,(int *)&local_4c);
                }
                uVar7 = local_50 + 1;
                *(FFrameEventTreeElement **)&local_58.Data[(longlong)(int)local_50 * 0x10].field_0x0
                     = pTVar8->Object;
                pTVar2 = (pTVar8->SharedReferenceCount).ReferenceController;
                *(TReferenceControllerBase<1> **)
                 (local_58.Data + (longlong)(int)local_50 * 0x10 + 8) = pTVar2;
                local_50 = uVar7;
                if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
                  LOCK();
                  pTVar2->SharedReferenceCount =
                       (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
                  UNLOCK();
                }
              }
              pTVar8 = pTVar8 + 1;
            }
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_40);
          pTVar8 = (TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1> *)
                   (ulonglong)local_50;
        } while (local_50 != 0);
        pTVar8 = (TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1> *)0x0;
      }
      uVar7 = (uint)pTVar8;
      FVar11.Data = local_58.Data;
      if (cVar6 == '\0') break;
    }
    uVar7 = (uint)pTVar8;
  }
LAB_14d74bb30:
  DestructItems<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>,int>
            ((TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1> *)FVar11.Data,uVar7);
  if ((TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1> *)local_58.Data !=
      (TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1> *)0x0) {
    FMemory::Free(local_58.Data);
  }
  return;
}

