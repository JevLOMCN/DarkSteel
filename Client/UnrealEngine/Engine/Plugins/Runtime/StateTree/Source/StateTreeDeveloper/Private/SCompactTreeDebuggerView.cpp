// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StateTreeDeveloper
// Functions: 7

// operator() @ 14d711bd0

void __thiscall
`UE::StateTree::SCompactTreeDebuggerView::CacheStateRecursive'::__l2::<lambda_1>::operator()
          (void *this,TSharedRef<UE::StateTree::SCompactTreeView::FStateItem,1> *param_1,
          bool param_2)

{
  char cVar1;
  undefined4 uVar2;
  FStateItem *pFVar3;
  uchar *puVar4;
  UScriptStruct *pUVar5;
  longlong *plVar6;
  longlong lVar7;
  FStateItem **ppFVar8;
  undefined8 uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  bool bVar13;
  int iVar14;
  FText *pFVar15;
  FGuid *pFVar16;
  UPackage *pUVar17;
  FStateTreeStyle *pFVar18;
  FName *pFVar19;
  undefined8 *puVar20;
  FSlateBrush *pFVar21;
  char *pcVar22;
  code *pcVar23;
  FName local_res8;
  FName local_res10;
  FName local_res20;
  FStateItem *local_b8;
  TReferenceControllerBase<1> *local_b0;
  FStateItem *local_a8;
  FSharedReferencer<1> local_a0;
  FName local_98;
  FName local_90;
  FName local_88;
  FName local_80;
  FText local_78;
  FText local_68;
  FGuid local_58;
  undefined1 local_48 [32];
  
  pFVar15 = FText::FromName(&local_78,(FName *)((longlong)this + 0x18));
  FText::operator=(&param_1->Object->Desc,pFVar15);
  if (local_78.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
  }
  pFVar16 = UStateTree::GetStateIdFromHandle
                      (*(UStateTree **)((longlong)this + 0x80),&local_58,
                       (FStateTreeStateHandle)*(ushort *)((longlong)this + 0x88));
  uVar10 = pFVar16->B;
  uVar11 = pFVar16->C;
  uVar12 = pFVar16->D;
  pFVar3 = param_1->Object;
  (pFVar3->StateID).A = pFVar16->A;
  (pFVar3->StateID).B = uVar10;
  (pFVar3->StateID).C = uVar11;
  (pFVar3->StateID).D = uVar12;
  pFVar15 = FText::FromName(&local_68,(FName *)((longlong)this + 0x18));
  FText::operator=(&param_1->Object->TooltipText,pFVar15);
  if (local_68.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
  }
  param_1->Object->bIsEnabled = (bool)(*(byte *)((longlong)this + 0x7d) >> 5 & 1);
  puVar4 = (param_1->Object->CustomData).InstancedStruct.StructMemory;
  pUVar5 = (param_1->Object->CustomData).InstancedStruct.ScriptStruct.field0_0x0.DebugPtr;
  if ((puVar4 == (uchar *)0x0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("Memory != nullptr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\InstancedStruct.h"
                          ,0xd1,L""), bVar13)) {
    pcVar23 = (code *)swi(3);
    (*pcVar23)();
    return;
  }
  if ((pUVar5 == (UScriptStruct *)0x0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("Struct != nullptr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\InstancedStruct.h"
                          ,0xd2,L""), bVar13)) {
    pcVar23 = (code *)swi(3);
    (*pcVar23)();
    return;
  }
  if (Z_Registration_Info_UScriptStruct_FStateItemDebuggerData.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar17 = Z_Construct_UPackage__Script_StateTreeDeveloper();
    Z_Registration_Info_UScriptStruct_FStateItemDebuggerData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FStateItemDebuggerData,(UObject *)pUVar17,
                         L"StateItemDebuggerData");
    if (Z_Registration_Info_UScriptStruct_FStateItemDebuggerData.OuterSingleton !=
        (UScriptStruct *)0x0) goto LAB_14d711d0f;
LAB_14d711d33:
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("Struct->IsChildOf(TBaseStructure<T>::Get())",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\InstancedStruct.h"
                        ,0xd3,L"");
    if (bVar13) {
      pcVar23 = (code *)swi(3);
      (*pcVar23)();
      return;
    }
  }
  else {
LAB_14d711d0f:
    iVar14 = (int)(Z_Registration_Info_UScriptStruct_FStateItemDebuggerData.OuterSingleton)->
                  _padding_;
    if (((int)pUVar5->_padding_ < iVar14) ||
       ((longlong *)*(undefined1 **)(pUVar5->_padding_ + (longlong)iVar14 * 8) !=
        &(Z_Registration_Info_UScriptStruct_FStateItemDebuggerData.OuterSingleton)->_padding_)) {
      bVar13 = false;
    }
    else {
      bVar13 = true;
    }
    if (!bVar13) goto LAB_14d711d33;
  }
  *puVar4 = param_2;
  pFVar18 = FStateTreeStyle::Get();
  pcVar23 = *(code **)(*(longlong *)pFVar18 + 0x40);
  pFVar19 = ::FName::FName(&local_res8,"StateTree.CompactView.State");
  pFVar21 = (FSlateBrush *)0x0;
  puVar20 = (undefined8 *)
            (*pcVar23)(pFVar18,local_48,*pFVar19,0,&FStyleDefaults::DefaultSlateColor,0);
  uVar2 = *(undefined4 *)(puVar20 + 2);
  uVar9 = puVar20[1];
  pFVar3 = param_1->Object;
  *(undefined8 *)&(pFVar3->Color).SpecifiedColor.field0_0x0 = *puVar20;
  *(undefined8 *)((longlong)&(pFVar3->Color).SpecifiedColor.field0_0x0 + 8) = uVar9;
  (pFVar3->Color).ColorUseRule = (char)uVar2;
  (pFVar3->Color).ColorTableId = (char)((uint)uVar2 >> 8);
  *(short *)&(pFVar3->Color).field_0x12 = (short)((uint)uVar2 >> 0x10);
  cVar1 = *(char *)((longlong)this + 0x7b);
  if (cVar1 == '\0') {
    pFVar18 = FStateTreeStyle::Get();
    pcVar22 = "StateTreeEditor.SelectNone";
    pcVar23 = *(code **)(*(longlong *)pFVar18 + 0x50);
    pFVar19 = &local_res10;
  }
  else if (cVar1 == '\x01') {
    pFVar18 = FStateTreeStyle::Get();
    pcVar22 = "StateTreeEditor.TryEnterState";
    pcVar23 = *(code **)(*(longlong *)pFVar18 + 0x50);
    pFVar19 = &local_res20;
  }
  else if ((cVar1 - 2U & 0xfc) == 0) {
    if (cVar1 == '\x03') {
LAB_14d711e69:
      pFVar18 = FStateTreeStyle::Get();
      pcVar22 = "StateTreeEditor.TrySelectChildrenAtRandom";
      pcVar23 = *(code **)(*(longlong *)pFVar18 + 0x50);
      pFVar19 = &local_88;
    }
    else if ((*(ushort *)((longlong)this + 0x4c) < *(ushort *)((longlong)this + 0x4e)) &&
            (1 < (byte)(*(char *)((longlong)this + 0x7a) - 2U))) {
      pFVar18 = FStateTreeStyle::Get();
      pcVar22 = "StateTreeEditor.TrySelectChildrenInOrder";
      pcVar23 = *(code **)(*(longlong *)pFVar18 + 0x50);
      pFVar19 = &local_98;
    }
    else {
      pFVar18 = FStateTreeStyle::Get();
      pcVar22 = "StateTreeEditor.TryEnterState";
      pcVar23 = *(code **)(*(longlong *)pFVar18 + 0x50);
      pFVar19 = &local_90;
    }
  }
  else {
    if (cVar1 == '\x03') goto LAB_14d711e69;
    if (cVar1 != '\x06') goto LAB_14d711ea9;
    pFVar18 = FStateTreeStyle::Get();
    pcVar22 = "StateTreeEditor.TryFollowTransitions";
    pcVar23 = *(code **)(*(longlong *)pFVar18 + 0x50);
    pFVar19 = &local_80;
  }
  pFVar19 = ::FName::FName(pFVar19,pcVar22);
  pFVar21 = (FSlateBrush *)(*pcVar23)(pFVar18,*pFVar19,0,0);
LAB_14d711ea9:
  param_1->Object->Icon = pFVar21;
  plVar6 = *(longlong **)this;
  if ((*plVar6 == 0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar13)) {
    pcVar23 = (code *)swi(3);
    (*pcVar23)();
    return;
  }
  local_b8 = param_1->Object;
  lVar7 = *plVar6;
  local_b0 = (param_1->SharedReferenceCount).ReferenceController;
  if (local_b0 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_b0->SharedReferenceCount = (atomic<int>)((int)local_b0->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (((*(FStateItem ***)(lVar7 + 0x58) <= &local_b8) &&
      (&local_b8 < *(FStateItem ***)(lVar7 + 0x58) + (longlong)*(int *)(lVar7 + 100) * 2)) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar13)) {
    pcVar23 = (code *)swi(3);
    (*pcVar23)();
    return;
  }
  iVar14 = *(int *)(lVar7 + 0x60);
  if (iVar14 == *(int *)(lVar7 + 100)) {
    iVar14 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x810,(ForAnyElementType *)(lVar7 + 0x58),(int *)(lVar7 + 100));
  }
  *(int *)(lVar7 + 0x60) = iVar14 + 1;
  puVar20 = (undefined8 *)((longlong)iVar14 * 0x10 + *(longlong *)(lVar7 + 0x58));
  *puVar20 = local_b8;
  puVar20[1] = local_b0;
  local_b0 = (TReferenceControllerBase<1> *)0x0;
  local_b8 = (FStateItem *)0x0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  local_a0.ReferenceController = (param_1->SharedReferenceCount).ReferenceController;
  local_a8 = param_1->Object;
  if (local_a0.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_a0.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_a0.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  ppFVar8 = *(FStateItem ***)this;
  if (ppFVar8 != &local_a8) {
    *ppFVar8 = local_a8;
    local_a8 = (FStateItem *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)(ppFVar8 + 1),&local_a0);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_a0.ReferenceController);
  return;
}

// operator() @ 14d7123f0

FSlateColor * __thiscall
`UE::StateTree::SCompactTreeDebuggerView::CreateNameWidgetInternal'::__l2::<lambda_1>::operator()
          (void *this,FSlateColor *__return_storage_ptr__)

{
  longlong lVar1;
  code *pcVar2;
  FLinearColor FVar3;
  FStateItemDebuggerData *pFVar4;
  FStateTreeStyle *pFVar5;
  FName *pFVar6;
  FName local_res8;
  
  lVar1 = *(longlong *)this;
  if (lVar1 != 0) {
    pFVar4 = UE::StructUtils::GetStructRef<UE::StateTree::CompactTreeView::FStateItemDebuggerData>
                       (*(UScriptStruct **)(lVar1 + 0x48),*(void **)(lVar1 + 0x50));
    if (pFVar4->bIsActive != false) {
      pFVar5 = FStateTreeStyle::Get();
      pcVar2 = *(code **)(*(longlong *)pFVar5 + 0x40);
      pFVar6 = ::FName::FName(&local_res8,"StateTree.Debugger.State.Active");
      (*pcVar2)(pFVar5,__return_storage_ptr__,*pFVar6,0,&FStyleDefaults::DefaultSlateColor,0);
      return __return_storage_ptr__;
    }
  }
  FVar3.field0_0x0 = FLinearColor::Transparent.field0_0x0;
  __return_storage_ptr__->ColorUseRule = UseColor_Specified;
  (__return_storage_ptr__->SpecifiedColor).field0_0x0._s_0 = (FLinearColor_u_0_s_0)FVar3.field0_0x0;
  return __return_storage_ptr__;
}

// CacheStateRecursive @ 14d716500

/* WARNING: Enum "EStateTreeStateSelectionBehavior": Some values do not have unique names */

void __thiscall
UE::StateTree::SCompactTreeDebuggerView::CacheStateRecursive
          (SCompactTreeDebuggerView *this,
          TNotNull<FStateTreeTraceActiveStates::FAssetActiveStates_const_*> param_1,
          TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1> *param_2,ushort param_3,
          TArray<UE::StateTree::SCompactTreeDebuggerView::FProcessedState,TSizedDefaultAllocator<32>_>
          *param_4)

{
  FAssetActiveStates *pFVar1;
  FScriptContainerElement *pFVar2;
  longlong lVar3;
  UStateTree *pUVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  UObject *pUVar8;
  UPackage *pUVar9;
  TSharedRef<UE::StateTree::SCompactTreeView::FStateItem,1> *pTVar10;
  FStateTreeTraceActiveStates *pFVar11;
  UStateTree *pUVar12;
  FScriptContainerElement *pFVar13;
  ushort uVar14;
  FCompactStateTreeState *pFVar15;
  FAssetActiveStates *this_00;
  uchar local_res10 [8];
  int local_188;
  int iStack_184;
  undefined4 local_180;
  FWeakObjectPtr local_178;
  UObject *local_170;
  FInstancedStruct local_168;
  TSharedRef<UE::StateTree::SCompactTreeView::FStateItem,1> local_158;
  FAssetActiveStates local_148;
  TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1> local_130;
  TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1> local_120;
  TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1> local_110;
  TSharedRef<UE::StateTree::SCompactTreeView::FStateItem,1> local_100;
  TSharedRef<UE::StateTree::SCompactTreeView::FStateItem,1> local_f0;
  FString local_e0;
  TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1> *local_c8;
  FCompactStateTreeState local_c0;
  UObject *local_48;
  ushort local_40;
  
  pUVar8 = FWeakObjectPtr::Get((FWeakObjectPtr *)param_1.Val);
  if (pUVar8 == (UObject *)0x0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::ReportNotNullPtr();
  }
  if (GC::GIsIncrementalReachabilityPending != false) {
    GC::MarkAsReachable(pUVar8);
  }
  local_178.ObjectIndex = 0;
  local_178.ObjectSerialNumber = 0;
  local_170 = pUVar8;
  if (GC::GIsIncrementalReachabilityPending != false) {
    GC::MarkAsReachable(pUVar8);
  }
  FWeakObjectPtr::operator=(&local_178,(FObjectPtr)&local_170);
  local_188 = local_178.ObjectIndex;
  pFVar2 = (param_4->AllocatorInstance).Data;
  iStack_184 = local_178.ObjectSerialNumber;
  local_180 = CONCAT22(local_180._2_2_,param_3);
  for (pFVar13 = pFVar2; pFVar13 != pFVar2 + (longlong)param_4->ArrayNum * 0xc;
      pFVar13 = pFVar13 + 0xc) {
    if (((*(int *)pFVar13 == local_178.ObjectIndex) &&
        (*(int *)(pFVar13 + 4) == local_178.ObjectSerialNumber)) &&
       (*(ushort *)(pFVar13 + 8) == param_3)) goto LAB_14d716a97;
  }
  if (((pFVar2 <= (FScriptContainerElement *)&local_188) &&
      ((FScriptContainerElement *)&local_188 < pFVar2 + (longlong)param_4->ArrayMax * 0xc)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  iVar7 = param_4->ArrayNum;
  if (iVar7 == param_4->ArrayMax) {
    iVar7 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x40c,&param_4->AllocatorInstance,&param_4->ArrayMax);
  }
  param_4->ArrayNum = iVar7 + 1;
  pFVar2 = (param_4->AllocatorInstance).Data;
  *(ulonglong *)(pFVar2 + (longlong)iVar7 * 0xc) = CONCAT44(iStack_184,local_188);
  *(undefined4 *)(pFVar2 + (longlong)iVar7 * 0xc + 8) = local_180;
  iVar7 = *(int *)&pUVar8[2].field_0x8;
  lVar3 = *(longlong *)(pUVar8 + 2);
  if ((iVar7 < 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if ((iVar7 <= (int)(uint)param_3) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
     bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pFVar15 = (FCompactStateTreeState *)((ulonglong)param_3 * 0x78 + lVar3);
  ::FName::ToString(&pFVar15->Name,&local_e0);
  pFVar13 = ((param_1.Val)->ActiveStates).AllocatorInstance.Data;
  pFVar2 = pFVar13 + (longlong)((param_1.Val)->ActiveStates).ArrayNum * 2;
  for (; pFVar13 != pFVar2; pFVar13 = pFVar13 + 2) {
    if (*(ushort *)pFVar13 == param_3) {
      bVar6 = true;
      goto LAB_14d71673a;
    }
  }
  bVar6 = false;
LAB_14d71673a:
  local_c8 = param_2;
  FCompactStateTreeState::FCompactStateTreeState(&local_c0,pFVar15);
  local_48 = pUVar8;
  local_40 = param_3;
  if ((pFVar15->LinkedState).Index == 0xffff) {
    if ((pFVar15->LinkedAsset).field0_0x0.DebugPtr == (UStateTree *)0x0) {
      if ((pFVar15->Type != Group) || (pFVar15->ChildrenBegin < pFVar15->ChildrenEnd)) {
        pTVar10 = CreateStateItemInternal(this,&local_f0);
        `UE::StateTree::SCompactTreeDebuggerView::CacheStateRecursive'::__l2::<lambda_1>::operator()
                  (&local_c8,pTVar10,bVar6);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_f0.SharedReferenceCount.ReferenceController);
        uVar14 = pFVar15->ChildrenBegin;
        if (uVar14 < pFVar15->ChildrenEnd) {
          do {
            local_110.Object = param_2->Object;
            local_110.SharedReferenceCount.ReferenceController =
                 (param_2->SharedReferenceCount).ReferenceController;
            if (local_110.SharedReferenceCount.ReferenceController !=
                (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              (local_110.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                   (atomic<int>)
                   ((int)(local_110.SharedReferenceCount.ReferenceController)->SharedReferenceCount
                   + 1);
              UNLOCK();
            }
            CacheStateRecursive(this,param_1,&local_110,uVar14,param_4);
            uVar14 = uVar14 + 1;
          } while (uVar14 < pFVar15->ChildrenEnd);
        }
      }
    }
    else {
      pTVar10 = CreateStateItemInternal(this,&local_100);
      `UE::StateTree::SCompactTreeDebuggerView::CacheStateRecursive'::__l2::<lambda_1>::operator()
                (&local_c8,pTVar10,bVar6);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_100.SharedReferenceCount.ReferenceController);
      if (bVar6 != false) {
        iVar7 = (((pFVar15->LinkedAsset).field0_0x0.DebugPtr)->States).ArrayNum;
        if (iVar7 < 0) {
          bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L"");
          if (bVar6) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
        }
        else if (iVar7 == 0) goto LAB_14d716a79;
        pFVar11 = TAttribute<FStateTreeTraceActiveStates>::Get(&this->AllActiveStates);
        pUVar4 = (pFVar15->LinkedAsset).field0_0x0.DebugPtr;
        if (GC::GIsIncrementalReachabilityPending != false) {
          if (pUVar4 != (UStateTree *)0x0) {
            GC::MarkAsReachable((UObject *)pUVar4);
          }
          if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UStateTree *)0x0)) {
            GC::MarkAsReachable((UObject *)pUVar4);
          }
        }
        this_00 = (FAssetActiveStates *)(pFVar11->PerAssetStates).AllocatorInstance.Data;
        pFVar1 = this_00 + (pFVar11->PerAssetStates).ArrayNum;
        for (; this_00 != pFVar1; this_00 = this_00 + 1) {
          pUVar12 = (UStateTree *)FWeakObjectPtr::Get((FWeakObjectPtr *)this_00);
          if (pUVar4 == (UStateTree *)0x0) {
            bVar6 = pUVar12 == (UStateTree *)0x0;
          }
          else {
            bVar6 = pUVar4 == pUVar12;
          }
          if (bVar6) {
            if ((this_00 != (FAssetActiveStates *)0x0) && (0 < (this_00->ActiveStates).ArrayNum)) {
              FStateTreeTraceActiveStates::FAssetActiveStates::FAssetActiveStates
                        (&local_148,this_00);
              if ((local_148.ActiveStates.ArrayNum < 1) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar6)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              uVar14 = *(ushort *)local_148.ActiveStates.AllocatorInstance.Data;
              local_120.Object = param_2->Object;
              local_120.SharedReferenceCount.ReferenceController =
                   (param_2->SharedReferenceCount).ReferenceController;
              if (local_120.SharedReferenceCount.ReferenceController !=
                  (TReferenceControllerBase<1> *)0x0) {
                LOCK();
                (local_120.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                     (atomic<int>)
                     ((int)(local_120.SharedReferenceCount.ReferenceController)->
                           SharedReferenceCount + 1);
                UNLOCK();
              }
              CacheStateRecursive(this,&local_148,&local_120,uVar14,param_4);
              if (local_148.ActiveStates.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_148.ActiveStates.AllocatorInstance.Data);
              }
            }
            break;
          }
        }
      }
    }
  }
  else {
    MakeShared<UE::StateTree::SCompactTreeView::FStateItem,1>(&local_158);
    local_res10[0] = '\0';
    FInstancedStruct::FInstancedStruct(&local_168);
    if (Z_Registration_Info_UScriptStruct_FStateItemDebuggerData.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar9 = Z_Construct_UPackage__Script_StateTreeDeveloper();
      Z_Registration_Info_UScriptStruct_FStateItemDebuggerData.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FStateItemDebuggerData,(UObject *)pUVar9,
                           L"StateItemDebuggerData");
    }
    FInstancedStruct::InitializeAs
              (&local_168,Z_Registration_Info_UScriptStruct_FStateItemDebuggerData.OuterSingleton,
               local_res10);
    FInstancedStruct::operator=(&((local_158.Object)->CustomData).InstancedStruct,&local_168);
    FInstancedStruct::Reset(&local_168);
    `UE::StateTree::SCompactTreeDebuggerView::CacheStateRecursive'::__l2::<lambda_1>::operator()
              (&local_c8,&local_158,bVar6);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_158.SharedReferenceCount.ReferenceController);
    if (bVar6 != false) {
      local_130.Object = param_2->Object;
      uVar14 = (pFVar15->LinkedState).Index;
      local_130.SharedReferenceCount.ReferenceController =
           (param_2->SharedReferenceCount).ReferenceController;
      if (local_130.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (local_130.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_130.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      CacheStateRecursive(this,param_1,&local_130,uVar14,param_4);
    }
  }
LAB_14d716a79:
  if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e0.Data.AllocatorInstance.Data);
  }
LAB_14d716a97:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return;
}

// CacheStatesInternal @ 14d716ba0

void __thiscall
UE::StateTree::SCompactTreeDebuggerView::CacheStatesInternal(SCompactTreeDebuggerView *this)

{
  FAssetActiveStates *pFVar1;
  ushort uVar2;
  code *pcVar3;
  bool bVar4;
  UStateTree *pUVar5;
  FStateTreeTraceActiveStates *pFVar6;
  FAssetActiveStates *this_00;
  TArray<UE::StateTree::SCompactTreeDebuggerView::FProcessedState,TSizedDefaultAllocator<32>_>
  local_48;
  TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1> local_38;
  FAssetActiveStates local_28;
  
  pUVar5 = (UStateTree *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
  if (pUVar5 != (UStateTree *)0x0) {
    pFVar6 = TAttribute<FStateTreeTraceActiveStates>::Get(&this->AllActiveStates);
    this_00 = (FAssetActiveStates *)(pFVar6->PerAssetStates).AllocatorInstance.Data;
    pFVar1 = this_00 + (pFVar6->PerAssetStates).ArrayNum;
    for (; this_00 != pFVar1; this_00 = this_00 + 1) {
      bVar4 = TWeakObjectPtr<UStateTree_const_,FWeakObjectPtr>::UEOpEquals<UStateTree,bool>
                        (&this_00->WeakStateTree,pUVar5);
      if (bVar4) {
        if (this_00 == (FAssetActiveStates *)0x0) {
          return;
        }
        if ((this_00->ActiveStates).ArrayNum < 1) {
          return;
        }
        FStateTreeTraceActiveStates::FAssetActiveStates::FAssetActiveStates(&local_28,this_00);
        local_48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_48.ArrayNum = 0;
        local_48.ArrayMax = 0;
        if ((local_28.ActiveStates.ArrayNum < 1) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        uVar2 = *(ushort *)local_28.ActiveStates.AllocatorInstance.Data;
        local_38.Object = (FStateItem *)this->_padding_;
        local_38.SharedReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)this->_padding_;
        if (local_38.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
        {
          LOCK();
          (local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
          UNLOCK();
        }
        CacheStateRecursive(this,&local_28,&local_38,uVar2,&local_48);
        if (local_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_48.AllocatorInstance.Data);
        }
        if (local_28.ActiveStates.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
          return;
        }
        FMemory::Free(local_28.ActiveStates.AllocatorInstance.Data);
        return;
      }
    }
  }
  return;
}

// Construct @ 14d718fc0

void __thiscall
UE::StateTree::SCompactTreeDebuggerView::Construct
          (SCompactTreeDebuggerView *this,FArguments *param_1,TNotNull<UStateTree_const_*> param_2)

{
  int *piVar1;
  TAttribute<FStateTreeTraceActiveStates> *pTVar2;
  int iVar3;
  int iVar4;
  FAssetActiveStates *pFVar5;
  longlong *plVar6;
  FArguments *pFVar7;
  FStateTreeStyle *pFVar8;
  FName *pFVar9;
  FTextBlockStyle *pFVar10;
  TDelegate<FStateTreeTraceActiveStates___cdecl(void),FDefaultDelegateUserPolicy> *this_00;
  TDelegate<FStateTreeTraceActiveStates___cdecl(void),FDefaultDelegateUserPolicy> *this_01;
  FName local_res8;
  undefined1 local_298 [8];
  ForAnyElementType local_290;
  int local_288;
  FDestructionSentinel local_280;
  undefined1 local_268 [520];
  undefined1 local_60 [24];
  undefined1 local_48 [32];
  
  pTVar2 = &this->AllActiveStates;
  if (pTVar2 != &param_1->_ActiveStates) {
    DestructItems<FStateTreeTraceActiveStates::FAssetActiveStates,int>
              ((FAssetActiveStates *)(pTVar2->Value).PerAssetStates.AllocatorInstance.Data,
               (this->AllActiveStates).Value.PerAssetStates.ArrayNum);
    iVar3 = (param_1->_ActiveStates).Value.PerAssetStates.ArrayNum;
    piVar1 = &(this->AllActiveStates).Value.PerAssetStates.ArrayMax;
    pFVar5 = (FAssetActiveStates *)
             (param_1->_ActiveStates).Value.PerAssetStates.AllocatorInstance.Data;
    iVar4 = *piVar1;
    (this->AllActiveStates).Value.PerAssetStates.ArrayNum = iVar3;
    if ((iVar3 == 0) && (iVar4 == 0)) {
      *piVar1 = 0;
    }
    else {
      Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,iVar3,iVar4,(ForAnyElementType *)pTVar2,iVar3,piVar1);
      ConstructItems<FStateTreeTraceActiveStates::FAssetActiveStates,FStateTreeTraceActiveStates::FAssetActiveStates,int>
                ((pTVar2->Value).PerAssetStates.AllocatorInstance.Data,pFVar5,iVar3);
    }
  }
  this_00 = &(param_1->_ActiveStates).Getter;
  (this->AllActiveStates).bIsSet = (param_1->_ActiveStates).bIsSet;
  this_01 = &(this->AllActiveStates).Getter;
  if (this_00 != this_01) {
    local_298 = (undefined1  [8])0x0;
    local_290.Data = (FScriptContainerElement *)0x0;
    local_288 = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,
               (FReadAccessScope *)&local_280);
    if ((*(int *)&(param_1->_ActiveStates).Getter.field_0x10 != 0) &&
       (plVar6 = *(longlong **)&(param_1->_ActiveStates).Getter.field_0x8, plVar6 != (longlong *)0x0
       )) {
      (**(code **)(*plVar6 + 0x50))(plVar6,local_298);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_280);
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)this_01,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_298);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_298,
               (FWriteAccessScope *)&local_280);
    if ((local_288 != 0) && (local_290.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)local_290.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_290,0,0,0x10);
      local_288 = 0;
    }
    if (local_280.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_280.Accessor,&local_280);
    }
    if (local_290.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_290.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_298);
  }
  pFVar7 = SCompactTreeView::FArguments::FArguments((FArguments *)local_268);
  pFVar7->_SelectionMode = Single;
  pFVar8 = FStateTreeStyle::Get();
  pFVar9 = ::FName::FName(&local_res8,"StateTree.State.Title");
  pFVar10 = (FTextBlockStyle *)
            (**(code **)(*(longlong *)pFVar8 + 0xa0))(pFVar8,FTextBlockStyle::TypeName,*pFVar9,0,1);
  if (pFVar10 == (FTextBlockStyle *)0x0) {
    pFVar10 = FTextBlockStyle::GetDefault();
  }
  pFVar7->_TextStyle = pFVar10;
  SCompactTreeView::Construct((SCompactTreeView *)this,pFVar7,param_2);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_48);
  if ((void *)local_48._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_48._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_48);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_60);
  if ((void *)local_60._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_60._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_60);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)local_268);
  return;
}

// CreateNameWidgetInternal @ 14d723dc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TSharedRef<SWidget,1> * __thiscall
UE::StateTree::SCompactTreeDebuggerView::CreateNameWidgetInternal
          (SCompactTreeDebuggerView *this,TSharedRef<SWidget,1> *__return_storage_ptr__,
          TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1> *param_1)

{
  byte *pbVar1;
  code *pcVar2;
  FStateItem *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  SWidget *pSVar5;
  SBorder *pSVar6;
  TReferenceControllerBase<1> *pTVar7;
  undefined4 uVar8;
  FSharedReferencer<1> FVar9;
  FArguments *pFVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  bool bVar13;
  char cVar14;
  byte bVar15;
  FArguments *pFVar16;
  FStateTreeStyle *pFVar17;
  FName *pFVar18;
  undefined8 *puVar19;
  ulong64 uVar20;
  FArguments *this_00;
  TSharedRef<SWidget,1> *pTVar21;
  TSharedRef<SBorder,1> *pTVar22;
  SBox *pSVar23;
  SBox *pSVar24;
  undefined ***pppuVar25;
  undefined1 auStackY_ef8 [32];
  T0RequiredArgs local_ec8;
  T0RequiredArgs local_ec7;
  T0RequiredArgs local_ec6 [2];
  FLLMScope local_ec4;
  FLLMScope local_ec0;
  FLLMScope local_ebc;
  FSlateBrush *local_eb8;
  undefined1 local_eb0;
  undefined1 local_ea8 [8];
  ForAnyElementType FStack_ea0;
  ulonglong local_e98;
  FSlateBrush *local_e90;
  undefined1 local_e88;
  undefined1 local_e80 [8];
  ForAnyElementType FStack_e78;
  ulonglong local_e70;
  FText local_e68;
  undefined1 local_e58;
  undefined1 local_e50 [8];
  ForAnyElementType FStack_e48;
  ulonglong local_e40;
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs> local_e38;
  undefined8 local_e20;
  undefined8 uStack_e18;
  undefined4 local_e10;
  undefined1 local_e0c;
  undefined1 local_e08 [8];
  ForAnyElementType FStack_e00;
  ulonglong local_df8;
  SWidget *local_df0;
  TReferenceControllerBase<1> *pTStack_de8;
  SWidget *local_de0;
  TReferenceControllerBase<1> *pTStack_dd8;
  undefined8 local_dd0;
  undefined8 uStack_dc8;
  undefined1 local_dc0;
  undefined1 local_db8 [8];
  ForAnyElementType FStack_db0;
  ulonglong local_da8;
  undefined8 local_da0;
  undefined8 uStack_d98;
  undefined1 local_d90;
  undefined1 local_d88 [8];
  ForAnyElementType FStack_d80;
  ulonglong local_d78;
  undefined1 local_d70 [8];
  SCompactTreeDebuggerView *local_d68;
  FName local_d60;
  FMemScope local_d58;
  FName local_d50;
  FMemScope local_d48;
  FArguments *local_d40;
  FName local_d38;
  FMemScope local_d30;
  TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1> local_d28;
  FDestructionSentinel local_d18;
  FDestructionSentinel local_d00;
  FDestructionSentinel local_ce8;
  FDestructionSentinel local_cd0;
  FDestructionSentinel local_cb8;
  FDestructionSentinel local_ca0;
  FDestructionSentinel local_c88;
  longlong *local_c70;
  FDestructionSentinel local_c68;
  undefined1 *local_c50;
  TSharedRef<SBorder,1> local_c48;
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs> local_c38;
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs> local_c20;
  TSharedRef<SBorder,1> local_c08;
  SWidget *local_bf8;
  TReferenceControllerBase<1> *pTStack_bf0;
  FName local_be8;
  FName local_be0;
  FName local_bd8;
  TSharedRef<SWidget,1> local_bd0;
  undefined1 local_bc0 [24];
  FArguments local_ba8;
  FArguments local_868;
  FArguments local_488;
  code *local_a8;
  undefined **local_98;
  FStateItem *local_90;
  TReferenceControllerBase<1> *local_88;
  undefined ***local_80;
  code *local_78;
  undefined **local_68;
  FStateItem *local_60;
  TReferenceControllerBase<1> *local_58;
  undefined ***local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_ef8;
  local_d68 = this;
  local_d40 = SBox::FArguments::FArguments(&local_ba8);
  uStack_d98 = _UNK_150689698;
  local_da0 = ___xmm_40000000000000004000000000000000;
  local_d40->_VAlign = VAlign_Fill;
  (local_d40->_Padding).bIsSet = true;
  uVar11 = ___xmm_40000000000000004000000000000000;
  ___xmm_40000000000000004000000000000000 = (undefined4)local_da0;
  _UNK_150689694 = SUB84(local_da0,4);
  uVar8 = _UNK_150689694;
  (local_d40->_Padding).Value.Left = (float)___xmm_40000000000000004000000000000000;
  ___xmm_40000000000000004000000000000000 = uVar11;
  uVar11 = _UNK_150689698;
  (local_d40->_Padding).Value.Top = (float)uVar8;
  _UNK_150689698 = (undefined4)uStack_d98;
  _UNK_15068969c = SUB84(uStack_d98,4);
  uVar8 = _UNK_15068969c;
  (local_d40->_Padding).Value.Right = (float)_UNK_150689698;
  _UNK_150689698 = uVar11;
  (local_d40->_Padding).Value.Bottom = (float)uVar8;
  local_d90 = 1;
  local_d78 = 0;
  local_d88 = (undefined1  [8])0x0;
  FStack_d80.Data = (FScriptContainerElement *)0x0;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(local_d40->_Padding).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_d88);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_d88,
             (FWriteAccessScope *)&local_d18);
  if (((int)local_d78 != 0) && (FStack_d80.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_d80.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_d80,0,0,0x10);
    local_d78 = local_d78 & 0xffffffff00000000;
  }
  if (local_d18.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_d18.Accessor,&local_d18);
  }
  if (FStack_d80.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_d80.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_d88);
  pFVar16 = SBorder::FArguments::FArguments(&local_488);
  pFVar17 = FStateTreeStyle::Get();
  pcVar2 = *(code **)(*(longlong *)pFVar17 + 0x50);
  pFVar18 = ::FName::FName(&local_bd8,"StateTree.State.Border");
  local_e90 = (FSlateBrush *)(*pcVar2)(pFVar17,*pFVar18);
  local_e88 = 1;
  local_e70 = 0;
  local_e80 = (undefined1  [8])0x0;
  FStack_e78.Data = (FScriptContainerElement *)0x0;
  (pFVar16->_BorderImage).Value = local_e90;
  (pFVar16->_BorderImage).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar16->_BorderImage).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_e80);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_e80,
             (FWriteAccessScope *)&local_d00);
  if (((int)local_e70 != 0) && (FStack_e78.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_e78.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_e78,0,0,0x10);
    local_e70 = local_e70 & 0xffffffff00000000;
  }
  if (local_d00.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_d00.Accessor,&local_d00);
  }
  if (FStack_e78.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_e78.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_e80);
  local_58 = (param_1->SharedReferenceCount).ReferenceController;
  local_60 = param_1->Object;
  if (local_58 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_58->SharedReferenceCount = (atomic<int>)((int)local_58->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_68 = &Core::Private::Function::
              TFunction_OwnedObject<`UE::StateTree::SCompactTreeDebuggerView::CreateNameWidgetInternal'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  local_78 = Core::Private::Function::
             TFunctionRefCaller<`UE::StateTree::SCompactTreeDebuggerView::CreateNameWidgetInternal'::__l2::<lambda_1>,FSlateColor>
             ::Call;
  local_50 = (undefined ***)0x0;
  (pFVar16->_BorderBackgroundColor).bIsSet = true;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &(pFVar16->_BorderBackgroundColor).Getter,(FWriteAccessScope *)&local_c68);
  local_c50 = &(pFVar16->_BorderBackgroundColor).Getter.field_0x8;
  puVar19 = Core::Private::DelegateAllocate(0x50,(FDelegateAllocation *)local_c50);
  if (puVar19 != (undefined8 *)0x0) {
    *puVar19 = &
               ___7__TCommonDelegateInstanceState___A6A_AUFSlateColor__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar20 = FDelegateHandle::GenerateNewID();
    puVar19[2] = uVar20;
    *puVar19 = &
               ___7__TBaseFunctorDelegateInstance___A6A_AUFSlateColor__XZUFDefaultDelegateUserPolicy__V__TFunction___A6A_AUFSlateColor__XZ____V__6B_
    ;
    puVar19[4] = local_78;
    puVar19[9] = 0;
    if (local_78 != (code *)0x0) {
      pppuVar25 = &local_68;
      if (local_50 != (undefined ***)0x0) {
        pppuVar25 = local_50;
      }
      (*(code *)**pppuVar25)();
    }
  }
  if (local_c68.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_c68.Accessor,&local_c68);
  }
  this_00 = SBorder::FArguments::FArguments(&local_868);
  pFVar17 = FStateTreeStyle::Get();
  pcVar2 = *(code **)(*(longlong *)pFVar17 + 0x50);
  pFVar18 = ::FName::FName(&local_be0,"StateTree.State");
  local_eb8 = (FSlateBrush *)(*pcVar2)(pFVar17,*pFVar18);
  local_eb0 = 1;
  local_e98 = 0;
  local_ea8 = (undefined1  [8])0x0;
  FStack_ea0.Data = (FScriptContainerElement *)0x0;
  (this_00->_BorderImage).Value = local_eb8;
  (this_00->_BorderImage).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this_00->_BorderImage).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_ea8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_ea8,
             (FWriteAccessScope *)&local_ce8);
  if (((int)local_e98 != 0) && (FStack_ea0.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_ea0.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_ea0,0,0,0x10);
    local_e98 = local_e98 & 0xffffffff00000000;
  }
  if (local_ce8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_ce8.Accessor,&local_ce8);
  }
  if (FStack_ea0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_ea0.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_ea8);
  pFVar17 = FStateTreeStyle::Get();
  pcVar2 = *(code **)(*(longlong *)pFVar17 + 0x40);
  ::FName::FName(&local_be8,"StateTree.CompactView.State");
  puVar19 = (undefined8 *)(*pcVar2)(pFVar17,local_bc0);
  local_e20 = *puVar19;
  uStack_e18 = puVar19[1];
  local_e10 = *(undefined4 *)(puVar19 + 2);
  local_e0c = 1;
  local_df8 = 0;
  local_e08 = (undefined1  [8])0x0;
  FStack_e00.Data = (FScriptContainerElement *)0x0;
  *(undefined8 *)&(this_00->_BorderBackgroundColor).Value.SpecifiedColor.field0_0x0 = local_e20;
  *(undefined8 *)((longlong)&(this_00->_BorderBackgroundColor).Value.SpecifiedColor.field0_0x0 + 8)
       = uStack_e18;
  (this_00->_BorderBackgroundColor).Value.ColorUseRule = (char)local_e10;
  (this_00->_BorderBackgroundColor).Value.ColorTableId = (char)((uint)local_e10 >> 8);
  *(short *)&(this_00->_BorderBackgroundColor).Value.field_0x12 = (short)((uint)local_e10 >> 0x10);
  (this_00->_BorderBackgroundColor).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this_00->_BorderBackgroundColor).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_e08);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_e08,
             (FWriteAccessScope *)&local_ca0);
  if (((int)local_df8 != 0) && (FStack_e00.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_e00.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_e00,0,0,0x10);
    local_df8 = local_df8 & 0xffffffff00000000;
  }
  if (local_ca0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_ca0.Accessor,&local_ca0);
  }
  if (FStack_e00.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_e00.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_e08);
  uVar11 = _UNK_152bc65f8;
  local_dc0 = 1;
  local_da8 = 0;
  local_dd0 = ___xmm_00000000414000000000000000000000;
  uStack_dc8 = _UNK_152bc65f8;
  local_db8 = (undefined1  [8])0x0;
  FStack_db0.Data = (FScriptContainerElement *)0x0;
  uVar8 = _UNK_152bc65f4;
  (this_00->_Padding).Value.Left = (float)___xmm_00000000414000000000000000000000;
  uVar12 = _UNK_152bc65f8;
  (this_00->_Padding).Value.Top = (float)uVar8;
  _UNK_152bc65f8 = (undefined4)uVar11;
  _UNK_152bc65fc = SUB84(uVar11,4);
  uVar8 = _UNK_152bc65fc;
  (this_00->_Padding).Value.Right = (float)_UNK_152bc65f8;
  _UNK_152bc65f8 = uVar12;
  (this_00->_Padding).Value.Bottom = (float)uVar8;
  (this_00->_Padding).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this_00->_Padding).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_db8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_db8,
             (FWriteAccessScope *)&local_cd0);
  if (((int)local_da8 != 0) && (FStack_db0.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_db0.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_db0,0,0,0x10);
    local_da8 = local_da8 & 0xffffffff00000000;
  }
  if (local_cd0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_cd0.Accessor,&local_cd0);
  }
  if (FStack_db0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_db0.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_db8);
  if (param_1->Object == (FStateItem *)0x0) {
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x458,L"");
    if (bVar13) {
      pcVar2 = (code *)swi(3);
      pTVar21 = (TSharedRef<SWidget,1> *)(*pcVar2)();
      return pTVar21;
    }
  }
  pFVar3 = param_1->Object;
  local_e68.TextData.Reference = (pFVar3->TooltipText).TextData.Reference;
  if (local_e68.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_e68.TextData.Reference + 8))
              (local_e68.TextData.Reference,local_d70);
  }
  local_e68.Flags = (pFVar3->TooltipText).Flags;
  local_e58 = 1;
  local_e40 = 0;
  local_e50 = (undefined1  [8])0x0;
  FStack_e48.Data = (FScriptContainerElement *)0x0;
  FText::operator=((FText *)this_00,&local_e68);
  *(undefined1 *)&this_00->_padding_ = local_e58;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this_00->_padding_,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_e50);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_e50,
             (FWriteAccessScope *)&local_cb8);
  if (((int)local_e40 != 0) && (FStack_e48.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_e48.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_e48,0,0,0x10);
    local_e40 = local_e40 & 0xffffffff00000000;
  }
  if (local_cb8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_cb8.Accessor,&local_cb8);
  }
  if (FStack_e48.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_e48.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_e50);
  if (local_e68.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_e68.TextData.Reference + 0x10))();
  }
  local_88 = (param_1->SharedReferenceCount).ReferenceController;
  local_90 = param_1->Object;
  if (local_88 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_88->SharedReferenceCount = (atomic<int>)((int)local_88->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_a8 = Core::Private::Function::
             TFunctionRefCaller<`UE::StateTree::SCompactTreeDebuggerView::CreateNameWidgetInternal'::__l2::<lambda_2>,bool>
             ::Call;
  local_80 = (undefined ***)0x0;
  local_98 = &Core::Private::Function::
              TFunction_OwnedObject<`UE::StateTree::SCompactTreeDebuggerView::CreateNameWidgetInternal'::`2'::<lambda_2>,0,0>
              ::_vftable_;
  *(undefined1 *)((longlong)&this_00->_padding_ + 1) = 1;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this_00->_padding_,
             (FWriteAccessScope *)&local_c88);
  local_c70 = &this_00->_padding_;
  puVar19 = Core::Private::DelegateAllocate(0x50,(FDelegateAllocation *)local_c70);
  if (puVar19 != (undefined8 *)0x0) {
    *puVar19 = &___7__TCommonDelegateInstanceState___A6A_NXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar20 = FDelegateHandle::GenerateNewID();
    puVar19[2] = uVar20;
    *puVar19 = &
               ___7__TBaseFunctorDelegateInstance___A6A_NXZUFDefaultDelegateUserPolicy__V__TFunction___A6A_NXZ____V__6B_
    ;
    puVar19[4] = local_a8;
    puVar19[9] = 0;
    if (local_a8 != (code *)0x0) {
      pppuVar25 = &local_98;
      if (local_80 != (undefined ***)0x0) {
        pppuVar25 = local_80;
      }
      (*(code *)**pppuVar25)();
    }
  }
  if (local_c88.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_c88.Accessor,&local_c88);
  }
  local_d28.Object = param_1->Object;
  local_d28.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_d28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_d28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_d28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar21 = SCompactTreeView::CreateNameWidgetInternal
                      ((SCompactTreeView *)local_d68,&local_bd0,&local_d28);
  pTVar4 = (pTVar21->SharedReferenceCount).ReferenceController;
  pSVar5 = pTVar21->Object;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_bf8 = (this_00->_Content).Widget.Object;
  pTStack_bf0 = (this_00->_Content).Widget.SharedReferenceCount.ReferenceController;
  (this_00->_Content).Widget.Object = pSVar5;
  (this_00->_Content).Widget.SharedReferenceCount.ReferenceController = pTVar4;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_bf0);
  FLLMScope::FLLMScope(&local_ec4,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_d60 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_d58,&local_d60,true);
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>::TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>
            (&local_c20,"SBorder",
             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\StateTree\\Source\\StateTreeDeveloper\\Private\\Debugger\\SCompactTreeDebuggerView.cpp"
             ,0x9d,&local_ec8);
  FMemScope::~FMemScope(&local_d58);
  FLLMScope::~FLLMScope(&local_ec4);
  pTVar22 = TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_c20,&local_c48,this_00);
  pTVar4 = (pTVar22->SharedReferenceCount).ReferenceController;
  pSVar6 = pTVar22->Object;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_df0 = (pFVar16->_Content).Widget.Object;
  pTStack_de8 = (pFVar16->_Content).Widget.SharedReferenceCount.ReferenceController;
  (pFVar16->_Content).Widget.Object = (SWidget *)pSVar6;
  (pFVar16->_Content).Widget.SharedReferenceCount.ReferenceController = pTVar4;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_de8);
  FLLMScope::FLLMScope(&local_ec0,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_d50 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_d48,&local_d50,true);
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>::TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>
            (&local_c38,"SBorder",
             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\StateTree\\Source\\StateTreeDeveloper\\Private\\Debugger\\SCompactTreeDebuggerView.cpp"
             ,0x8e,&local_ec7);
  FMemScope::~FMemScope(&local_d48);
  FLLMScope::~FLLMScope(&local_ec0);
  pTVar22 = TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_c38,&local_c08,pFVar16);
  pFVar10 = local_d40;
  pTVar7 = (pTVar22->SharedReferenceCount).ReferenceController;
  pSVar6 = pTVar22->Object;
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_de0 = (local_d40->_Content).Widget.Object;
  pTStack_dd8 = (local_d40->_Content).Widget.SharedReferenceCount.ReferenceController;
  (local_d40->_Content).Widget.Object = (SWidget *)pSVar6;
  (local_d40->_Content).Widget.SharedReferenceCount.ReferenceController = pTVar7;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_dd8);
  FLLMScope::FLLMScope(&local_ebc,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_d38 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_d30,&local_d38,true);
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>::TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>
            (&local_e38,"SBox",
             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\StateTree\\Source\\StateTreeDeveloper\\Private\\Debugger\\SCompactTreeDebuggerView.cpp"
             ,0x8a,local_ec6);
  FMemScope::~FMemScope(&local_d30);
  FLLMScope::~FLLMScope(&local_ebc);
  pSVar23 = TSharedPtr<SBox,1>::operator->(&local_e38._Widget);
  SWidget::SWidgetConstruct((SWidget *)pSVar23,(FSlateBaseNamedArgs *)pFVar10);
  pSVar23 = local_e38._Widget.Object;
  SBox::Construct(local_e38._Widget.Object,pFVar10);
  pSVar24 = TSharedPtr<SBox,1>::operator->(&local_e38._Widget);
  if ((pSVar24->_padding_ & 0x10) == 0) {
    cVar14 = (**(code **)(pSVar24->_padding_ + 0x228))(pSVar24);
    bVar15 = 0;
    if (cVar14 == '\0') goto LAB_14d72485d;
  }
  bVar15 = 0x20;
LAB_14d72485d:
  *(byte *)&pSVar24->_padding_ = (byte)pSVar24->_padding_ & 0xdf;
  *(byte *)&pSVar24->_padding_ = (byte)pSVar24->_padding_ | bVar15;
  pSVar24 = TSharedPtr<SBox,1>::operator->(&local_e38._Widget);
  pbVar1 = (byte *)((longlong)&pSVar24->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  if (local_e38._Widget.Object == (SBox *)0x0) {
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x416,L"");
    if (bVar13) {
      pcVar2 = (code *)swi(3);
      pTVar21 = (TSharedRef<SWidget,1> *)(*pcVar2)();
      return pTVar21;
    }
  }
  FVar9.ReferenceController = local_e38._Widget.SharedReferenceCount.ReferenceController;
  local_e38._Widget.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_e38._Widget.Object = (SBox *)0x0;
  if (pSVar23 == (SBox *)0x0) {
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x26c,L"");
    if (bVar13) {
      pcVar2 = (code *)swi(3);
      pTVar21 = (TSharedRef<SWidget,1> *)(*pcVar2)();
      return pTVar21;
    }
  }
  __return_storage_ptr__->Object = (SWidget *)pSVar23;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = FVar9.ReferenceController;
  if (FVar9.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar9.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar9.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar9.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_c08.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_c38._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_c48.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_c20._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_bd0.SharedReferenceCount.ReferenceController);
  if (local_a8 != (code *)0x0) {
    pppuVar25 = &local_98;
    if (local_80 != (undefined ***)0x0) {
      pppuVar25 = local_80;
    }
    (*(code *)(*pppuVar25)[2])();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  SBorder::FArguments::~FArguments(&local_868);
  if (local_78 != (code *)0x0) {
    pppuVar25 = &local_68;
    if (local_50 != (undefined ***)0x0) {
      pppuVar25 = local_50;
    }
    (*(code *)(*pppuVar25)[2])();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  SBorder::FArguments::~FArguments(&local_488);
  SBox::FArguments::~FArguments(&local_ba8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return __return_storage_ptr__;
}

// CreateStateItemInternal @ 14d724f00

TSharedRef<UE::StateTree::SCompactTreeView::FStateItem,1> * __thiscall
UE::StateTree::SCompactTreeDebuggerView::CreateStateItemInternal
          (SCompactTreeDebuggerView *this,
          TSharedRef<UE::StateTree::SCompactTreeView::FStateItem,1> *__return_storage_ptr__)

{
  UPackage *pUVar1;
  uchar local_res10 [24];
  FInstancedStruct local_18;
  
  MakeShared<UE::StateTree::SCompactTreeView::FStateItem,1>(__return_storage_ptr__);
  local_res10[0] = '\0';
  FInstancedStruct::FInstancedStruct(&local_18);
  if (Z_Registration_Info_UScriptStruct_FStateItemDebuggerData.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_StateTreeDeveloper();
    Z_Registration_Info_UScriptStruct_FStateItemDebuggerData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FStateItemDebuggerData,(UObject *)pUVar1,
                         L"StateItemDebuggerData");
  }
  FInstancedStruct::InitializeAs
            (&local_18,Z_Registration_Info_UScriptStruct_FStateItemDebuggerData.OuterSingleton,
             local_res10);
  FInstancedStruct::operator=
            (&(__return_storage_ptr__->Object->CustomData).InstancedStruct,&local_18);
  FInstancedStruct::Reset(&local_18);
  return __return_storage_ptr__;
}

