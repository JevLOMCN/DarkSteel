// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AdvancedWidgets
// Functions: 2

// ~SMultiRowType @ 14d83b4c0

void __thiscall
`UE::PropertyViewer::Private::FPropertyViewerImpl::HandleGenerateRow'::__l2::SMultiRowType::
~SMultiRowType(void *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)((longlong)this + 0x480);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x470));
  plVar3 = *(longlong **)((longlong)this + 0x460);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  *(undefined4 *)((longlong)this + 0x450) = 0;
  if (*(void **)((longlong)this + 0x448) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x448));
  }
  TSparseArray<TSparseSetElement<TTuple<FName,TSharedRef<SWidget,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,TSharedRef<SWidget,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,TSharedRef<SWidget,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)this + 0x408));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x400));
  STableRow<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>::
  ~STableRow<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>(this);
  return;
}

// GenerateWidgetForColumn @ 14d864350

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TSharedRef<SWidget,1> * __thiscall
`UE::PropertyViewer::Private::FPropertyViewerImpl::HandleGenerateRow'::__l2::SMultiRowType::
GenerateWidgetForColumn(void *this,TSharedRef<SWidget,1> *__return_storage_ptr__,FName *param_1)

{
  TOptional<FSlateClippingState> *pTVar1;
  atomic<int> *paVar2;
  FTreeNode *this_00;
  TReferenceControllerBase<1> *pTVar3;
  longlong lVar4;
  IModuleInterface this_01;
  FName FVar5;
  code *pcVar6;
  int iVar7;
  int iVar8;
  FArguments *pFVar9;
  FSlot *pFVar10;
  TArray<FFieldVariant,TSizedDefaultAllocator<32>_> *pTVar11;
  TArrayView<FFieldVariant_const_,int> *pTVar12;
  FContainer *pFVar13;
  TSharedPtr<SWidget,1> *pTVar14;
  FSlotArguments *pFVar15;
  FArguments *pFVar16;
  TSharedRef<SWidget,1> *pTVar17;
  TSharedRef<SExpanderArrow,1> *pTVar18;
  FSlotArguments *pFVar19;
  UObject *pUVar20;
  FPropertyPath *pFVar21;
  FProperty *pFVar22;
  FModuleManager *this_02;
  IModuleInterface *pIVar23;
  FSlotArguments *pFVar24;
  SWidget *pSVar25;
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs> *this_03;
  TSharedRef<SHorizontalBox,1> *pTVar26;
  SWidget *pSVar27;
  SWidget *pSVar28;
  SWidget *pSVar29;
  FSlotArguments *pFVar30;
  FHandle FVar31;
  FSlotArguments *pFVar32;
  undefined1 *puVar33;
  SWidget *pSVar34;
  FSharedReferencer<1> FVar35;
  SWidget *pSVar36;
  bool bVar37;
  FSharedReferencer<1> FVar38;
  undefined1 auStackY_fe8 [32];
  T0RequiredArgs local_fb8;
  T0RequiredArgs local_fb7 [15];
  TSharedPtr<SWidget,1> local_fa8;
  FLLMScope local_f98;
  FLLMScope local_f94;
  FSlotArguments *local_f90;
  SExpanderArrow *local_f88;
  FSharedReferencer<1> local_f80;
  TSharedPtr<SWidget,1> local_f78;
  TSharedRef<SWidget,1> *local_f68;
  longlong local_f60;
  FSharedReferencer<1> local_f58;
  TSharedPtr<SWidget,1> local_f50;
  float local_f40;
  undefined1 local_f3c;
  undefined1 local_f38 [8];
  void *pvStack_f30;
  undefined8 local_f28;
  undefined2 local_f20;
  undefined1 local_f18 [8];
  void *pvStack_f10;
  undefined8 local_f08;
  undefined8 local_f00;
  undefined8 uStack_ef8;
  undefined1 local_ef0;
  undefined1 local_ee8 [8];
  ForAnyElementType FStack_ee0;
  ulonglong local_ed8;
  TSharedRef<_private:_class_TSharedRef<ITableRow,1>___cdecl_UE::PropertyViewer::Private::FPropertyViewerImpl::HandleGenerateRow(TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,TSharedRef<STableViewBase,1>_const_&)_::_2_::SMultiRowType,1>
  local_ed0;
  TSharedRef<SHorizontalBox,1> local_ec0;
  TSharedPtr<SWidget,1> local_eb0;
  TSharedPtr<UE::PropertyViewer::Private::FContainer,1> local_ea0;
  undefined4 local_e90 [2];
  undefined4 local_e88 [2];
  FMemScope local_e80;
  FSlotArguments *local_e78;
  FName local_e70;
  T1RequiredArgs<TSharedRef<_private:_class_TSharedRef<ITableRow,1>___cdecl_UE::PropertyViewer::Private::FPropertyViewerImpl::HandleGenerateRow(TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,TSharedRef<STableViewBase,1>_const_&)_::_2_::SMultiRowType,1>_&&>
  local_e68;
  FMemScope local_e60;
  FSlotArguments *local_e58;
  FName local_e50;
  byte local_e48;
  TSharedPtr<UE::PropertyViewer::Private::FContainer,1> local_e40;
  TSharedPtr<UE::PropertyViewer::Private::FContainer,1> local_e30;
  TAttribute<float> local_e20;
  TSharedRef<SWidget,1> local_df8;
  FDestructionSentinel local_de8;
  FPropertyPath local_dd0;
  TVector2<float>_u_0 local_da0;
  undefined1 local_d98;
  TSharedRef<SWidget,1> local_d90;
  TArrayView<FFieldVariant_const_,int> local_d78;
  TArray<FFieldVariant,TSizedDefaultAllocator<32>_> local_d68;
  TArrayView<FFieldVariant_const_,int> local_d58;
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs> local_d48;
  undefined1 local_d30 [8];
  TReferenceControllerBase<1> *local_d28;
  TSharedPtr<SWidget,1> local_d18;
  TArray<FFieldVariant,TSizedDefaultAllocator<32>_> local_d08;
  TSharedRef<SWidget,1> local_cf8;
  TSharedRef<SExpanderArrow,1> local_ce8;
  TSharedRef<SHorizontalBox,1> local_cd8;
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs> local_cc8;
  TArrayView<FFieldVariant_const_,int> local_cb0;
  TArrayView<FFieldVariant_const_,int> local_ca0;
  FGenerateArgs local_c90;
  FGenerateArgs local_c50;
  undefined1 local_c10 [240];
  TPanelChildren<SBoxPanel::FSlot> *local_b20;
  int local_b18;
  undefined1 local_b10 [240];
  TPanelChildren<SBoxPanel::FSlot> *local_a20;
  int local_a18;
  undefined1 local_a10 [240];
  TPanelChildren<SBoxPanel::FSlot> *local_920;
  int local_918;
  FArguments local_910;
  FArguments local_708;
  FSlotArguments local_500;
  FSlotArguments local_418;
  FArguments local_330;
  FPropertyPath local_d0;
  TVector2<float>_u_0 local_a0;
  undefined1 local_98;
  FPropertyPath local_90;
  ulonglong local_60;
  
  local_60 = __security_cookie.value ^ (ulonglong)auStackY_fe8;
  local_f90 = (FSlotArguments *)param_1;
  local_f68 = __return_storage_ptr__;
  if (*param_1 == UE::PropertyViewer::Private::ColumnName_Field) {
    pFVar9 = SHorizontalBox::FArguments::FArguments(&local_910);
    FLLMScope::FLLMScope(&local_f98,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
    local_e50 = LLMTagDeclaration_UI_Slate.UniqueName;
    FMemScope::FMemScope(&local_e80,&local_e50,true);
    TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::
    TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>
              (&local_d48,"SHorizontalBox",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AdvancedWidgets\\Private\\Widgets\\PropertyViewer\\SPropertyViewerImpl.cpp"
               ,0x422,&local_fb8);
    FMemScope::~FMemScope(&local_e80);
    FLLMScope::~FLLMScope(&local_f98);
    TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::operator<<=
              (&local_d48,&local_ec0,pFVar9);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_d48._Widget.SharedReferenceCount.ReferenceController);
    DestructItems<SHorizontalBox::FSlot::FSlotArguments,int>
              ((FSlotArguments *)local_910._Slots.AllocatorInstance.Data,local_910._Slots.ArrayNum);
    if ((FSlotArguments *)local_910._Slots.AllocatorInstance.Data != (FSlotArguments *)0x0) {
      FMemory::Free(local_910._Slots.AllocatorInstance.Data);
    }
    FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_910);
    pFVar24 = *(FSlotArguments **)((longlong)this + 0x480);
    pFVar32 = (FSlotArguments *)0x0;
    FVar31.Id = 0;
    pFVar15 = pFVar32;
    if (pFVar24 != (FSlotArguments *)0x0) {
      iVar7 = *(int *)&pFVar24->field_0x8;
      do {
        if (iVar7 == 0) {
          pSVar29 = (SWidget *)0x0;
          FVar38.ReferenceController = (TReferenceControllerBase<1> *)0x0;
          local_fa8.Object = (SWidget *)0x0;
          local_fa8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
          pFVar24 = pFVar32;
          goto LAB_14d864519;
        }
        LOCK();
        iVar8 = *(int *)&pFVar24->field_0x8;
        bVar37 = iVar7 == iVar8;
        if (bVar37) {
          *(int *)&pFVar24->field_0x8 = iVar7 + 1;
          iVar8 = iVar7;
        }
        UNLOCK();
        iVar7 = iVar8;
      } while (!bVar37);
      pFVar15 = *(FSlotArguments **)((longlong)this + 0x478);
    }
    pSVar29 = (SWidget *)0x0;
    FVar38.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    local_fa8.Object = (SWidget *)0x0;
    local_fa8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (pFVar15 != (FSlotArguments *)0x0) {
      bVar37 = TDelegateBase<FNotThreadSafeDelegateMode>::IsBound
                         ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pFVar15->field_0x90);
      if (bVar37) {
        pFVar19 = *(FSlotArguments **)((longlong)this + 0x460);
        pFVar30 = pFVar19;
        if (pFVar19 != (FSlotArguments *)0x0) {
          iVar7 = *(int *)&pFVar19->field_0x8;
          do {
            pFVar30 = pFVar32;
            if (iVar7 == 0) goto LAB_14d864511;
            LOCK();
            iVar8 = *(int *)&pFVar19->field_0x8;
            bVar37 = iVar7 == iVar8;
            if (bVar37) {
              *(int *)&pFVar19->field_0x8 = iVar7 + 1;
              iVar8 = iVar7;
            }
            UNLOCK();
            iVar7 = iVar8;
          } while (!bVar37);
          this_00 = *(FTreeNode **)((longlong)this + 0x458);
          pFVar30 = pFVar19;
          if (this_00 != (FTreeNode *)0x0) {
            UE::PropertyViewer::Private::FTreeNode::GetOwnerContainer(this_00,&local_e40);
            pTVar11 = UE::PropertyViewer::Private::FTreeNode::GetFieldPath(this_00,&local_d08);
            pTVar12 = TArrayView<FFieldVariant_const_,int>::
                      TArrayView<FFieldVariant_const_,int><TArray<FFieldVariant,TSizedDefaultAllocator<32>_>,TArray<FFieldVariant,TSizedDefaultAllocator<32>_>_>
                                (&local_ca0,pTVar11);
            local_d58.DataPtr = pTVar12->DataPtr;
            local_d58.ArrayNum = pTVar12->ArrayNum;
            local_d58._12_4_ = *(undefined4 *)&pTVar12->field_0xc;
            if (local_e40.Object != (FContainer *)0x0) {
              pFVar13 = TSharedPtr<UE::PropertyViewer::Private::FContainer,1>::operator->
                                  (&local_e40);
              FVar31.Id = (pFVar13->Identifier).Id;
            }
            pTVar14 = TDelegate<TSharedPtr<SWidget,1>___cdecl(UE::PropertyViewer::SPropertyViewer::FHandle,TArrayView<FFieldVariant_const_,int>),FDefaultDelegateUserPolicy>
                      ::Execute((TDelegate<TSharedPtr<SWidget,1>___cdecl(UE::PropertyViewer::SPropertyViewer::FHandle,TArrayView<FFieldVariant_const_,int>),FDefaultDelegateUserPolicy>
                                 *)&pFVar15->field_0x90,&local_d18,FVar31,&local_d58);
            if (&local_fa8 != pTVar14) {
              local_fa8.Object = pTVar14->Object;
              pTVar14->Object = (SWidget *)0x0;
              SharedPointerInternals::FSharedReferencer<1>::operator=
                        (&local_fa8.SharedReferenceCount,&pTVar14->SharedReferenceCount);
              pSVar29 = local_fa8.Object;
              FVar38.ReferenceController = local_fa8.SharedReferenceCount.ReferenceController;
            }
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_d18.SharedReferenceCount.ReferenceController);
            if (local_d08.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_d08.AllocatorInstance.Data);
            }
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_e40.SharedReferenceCount.ReferenceController);
          }
        }
LAB_14d864511:
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)pFVar30);
      }
    }
LAB_14d864519:
    pFVar10 = ::operator_new(0x58);
    local_e78 = pFVar32;
    if (pFVar10 != (FSlot *)0x0) {
      *(undefined8 *)pFVar10 = 0;
      *(undefined8 *)&pFVar10->field_0x8 = 0;
      *(undefined8 *)&pFVar10->field_0x10 = 0;
      *(undefined8 *)&pFVar10->field_0x18 = 0;
      *(undefined8 *)&pFVar10->field_0x20 = 0;
      *(undefined8 *)&pFVar10->field_0x28 = 0;
      *(undefined8 *)&pFVar10->field_0x30 = 0;
      *(undefined8 *)&pFVar10->field_0x38 = 0;
      *(undefined8 *)&pFVar10->field_0x40 = 0;
      *(undefined8 *)&pFVar10->field_0x48 = 0;
      *(undefined8 *)&pFVar10->field_0x50 = 0;
      local_e78 = (FSlotArguments *)SHorizontalBox::FSlot::FSlot(pFVar10);
    }
    SHorizontalBox::FSlot::FSlotArguments::FSlotArguments
              ((FSlotArguments *)(local_c10 + 8),(FSlot *)&local_e78);
    puVar33 = &(local_ec0.Object)->field_0x218;
    local_c10._0_8_ = &___7__FScopedWidgetSlotArguments_VFSlot_SHorizontalBox___SBoxPanel__6B_;
    local_b18 = -1;
    local_b20 = (TPanelChildren<SBoxPanel::FSlot> *)puVar33;
    pFVar15 = SHorizontalBox::FSlot::FSlotArguments::AutoWidth((FSlotArguments *)(local_c10 + 8));
    pFVar16 = SExpanderArrow::FArguments::FArguments(&local_330);
    local_f3c = 1;
    local_f40 = __real_41800000;
    local_f28 = 0;
    local_f38 = (undefined1  [8])0x0;
    pvStack_f30 = (void *)0x0;
    (pFVar16->_IndentAmount).Value = __real_41800000;
    (pFVar16->_IndentAmount).bIsSet = true;
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar16->_IndentAmount).Getter,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_f38);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_f38);
    if (pvStack_f30 != (void *)0x0) {
      FMemory::Free(pvStack_f30);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_f38);
    local_f20 = 0x101;
    local_f08 = 0;
    local_f18 = (undefined1  [8])0x0;
    pvStack_f10 = (void *)0x0;
    (pFVar16->_ShouldDrawWires).Value = true;
    (pFVar16->_ShouldDrawWires).bIsSet = true;
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar16->_ShouldDrawWires).Getter,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_f18);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_f18);
    if (pvStack_f10 != (void *)0x0) {
      FMemory::Free(pvStack_f10);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_f18);
    pTVar17 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)((longlong)this + 0x10),&local_cf8);
    if (pTVar17->Object == (SWidget *)0x0) {
      local_ed0.Object = (SMultiRowType *)0x0;
    }
    else {
      local_ed0.Object = (SMultiRowType *)&pTVar17->Object[-1].StatID;
    }
    local_ed0.SharedReferenceCount.ReferenceController =
         (pTVar17->SharedReferenceCount).ReferenceController;
    if (local_ed0.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_ed0.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_ed0.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_cf8.SharedReferenceCount.ReferenceController);
    local_e68.Arg0 = &local_ed0;
    FLLMScope::FLLMScope(&local_f94,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
    local_e70 = LLMTagDeclaration_UI_Slate.UniqueName;
    FMemScope::FMemScope(&local_e60,&local_e70,true);
    TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<`UE::PropertyViewer::Private::FPropertyViewerImpl::HandleGenerateRow'::__l2::SMultiRowType,1>_&&>_>
    ::
    TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<_UE::PropertyViewer::Private::FPropertyViewerImpl::HandleGenerateRow_::__l2::SMultiRowType,1>_&&>_>
              (local_d30,"SExpanderArrow",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AdvancedWidgets\\Private\\Widgets\\PropertyViewer\\SPropertyViewerImpl.cpp"
               ,0x432,&local_e68);
    FMemScope::~FMemScope(&local_e60);
    FLLMScope::~FLLMScope(&local_f94);
    pTVar18 = TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<`UE::PropertyViewer::Private::FPropertyViewerImpl::HandleGenerateRow'::__l2::SMultiRowType,1>_&&>_>
              ::operator<<=(local_d30,&local_ce8,pFVar16);
    pTVar3 = (pTVar18->SharedReferenceCount).ReferenceController;
    local_f88 = pTVar18->Object;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_f80.ReferenceController = pTVar3;
    if ((SExpanderArrow **)&pFVar15->field_0x8 != &local_f88) {
      *(SExpanderArrow **)&pFVar15->field_0x8 = local_f88;
      local_f88 = (SExpanderArrow *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                ((FSharedReferencer<1> *)&pFVar15->field_0x10,&local_f80);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_f80.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_ce8.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_d28);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_ed0.SharedReferenceCount.ReferenceController);
    SExpanderArrow::FArguments::~FArguments(&local_330);
    SBoxPanel::FScopedWidgetSlotArguments<SHorizontalBox::FSlot>::
    ~FScopedWidgetSlotArguments<SHorizontalBox::FSlot>
              ((FScopedWidgetSlotArguments<SHorizontalBox::FSlot> *)local_c10);
    FVar35.ReferenceController = local_fa8.SharedReferenceCount.ReferenceController;
    if (pSVar29 != (SWidget *)0x0) {
      pFVar10 = ::operator_new(0x58);
      local_e58 = pFVar32;
      if (pFVar10 != (FSlot *)0x0) {
        *(undefined8 *)pFVar10 = 0;
        *(undefined8 *)&pFVar10->field_0x8 = 0;
        *(undefined8 *)&pFVar10->field_0x10 = 0;
        *(undefined8 *)&pFVar10->field_0x18 = 0;
        *(undefined8 *)&pFVar10->field_0x20 = 0;
        *(undefined8 *)&pFVar10->field_0x28 = 0;
        *(undefined8 *)&pFVar10->field_0x30 = 0;
        *(undefined8 *)&pFVar10->field_0x38 = 0;
        *(undefined8 *)&pFVar10->field_0x40 = 0;
        *(undefined8 *)&pFVar10->field_0x48 = 0;
        *(undefined8 *)&pFVar10->field_0x50 = 0;
        local_e58 = (FSlotArguments *)SHorizontalBox::FSlot::FSlot(pFVar10);
      }
      SHorizontalBox::FSlot::FSlotArguments::FSlotArguments
                ((FSlotArguments *)(local_b10 + 8),(FSlot *)&local_e58);
      local_b10._0_8_ = &___7__FScopedWidgetSlotArguments_VFSlot_SHorizontalBox___SBoxPanel__6B_;
      local_a18 = -1;
      local_a20 = (TPanelChildren<SBoxPanel::FSlot> *)puVar33;
      pFVar15 = SHorizontalBox::FSlot::FSlotArguments::AutoWidth((FSlotArguments *)(local_b10 + 8));
      if ((pSVar29 == (SWidget *)0x0) &&
         (bVar37 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x408,L""), bVar37)) {
        pcVar6 = (code *)swi(3);
        pTVar17 = (TSharedRef<SWidget,1> *)(*pcVar6)();
        return pTVar17;
      }
      if (FVar38.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (FVar38.ReferenceController)->SharedReferenceCount =
             (atomic<int>)((int)(FVar38.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_df8.Object = pSVar29;
      local_df8.SharedReferenceCount.ReferenceController = FVar38.ReferenceController;
      if ((pSVar29 == (SWidget *)0x0) &&
         (bVar37 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x25d,L""), bVar37)) {
        pcVar6 = (code *)swi(3);
        pTVar17 = (TSharedRef<SWidget,1> *)(*pcVar6)();
        return pTVar17;
      }
      TSlotBase<SHorizontalBox::FSlot>::FSlotArguments::operator[]
                ((FSlotArguments *)pFVar15,&local_df8);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_df8.SharedReferenceCount.ReferenceController);
      SBoxPanel::FScopedWidgetSlotArguments<SHorizontalBox::FSlot>::
      ~FScopedWidgetSlotArguments<SHorizontalBox::FSlot>
                ((FScopedWidgetSlotArguments<SHorizontalBox::FSlot> *)local_b10);
      FVar35.ReferenceController = FVar38.ReferenceController;
    }
    pFVar10 = ::operator_new(0x58);
    pFVar15 = pFVar32;
    if (pFVar10 != (FSlot *)0x0) {
      *(undefined8 *)pFVar10 = 0;
      *(undefined8 *)&pFVar10->field_0x8 = 0;
      *(undefined8 *)&pFVar10->field_0x10 = 0;
      *(undefined8 *)&pFVar10->field_0x18 = 0;
      *(undefined8 *)&pFVar10->field_0x20 = 0;
      *(undefined8 *)&pFVar10->field_0x28 = 0;
      *(undefined8 *)&pFVar10->field_0x30 = 0;
      *(undefined8 *)&pFVar10->field_0x38 = 0;
      *(undefined8 *)&pFVar10->field_0x40 = 0;
      *(undefined8 *)&pFVar10->field_0x48 = 0;
      *(undefined8 *)&pFVar10->field_0x50 = 0;
      pFVar15 = (FSlotArguments *)SHorizontalBox::FSlot::FSlot(pFVar10);
    }
    local_f90 = pFVar15;
    SHorizontalBox::FSlot::FSlotArguments::FSlotArguments
              ((FSlotArguments *)(local_a10 + 8),(FSlot *)&local_f90);
    local_920 = (TPanelChildren<SBoxPanel::FSlot> *)&(local_ec0.Object)->field_0x218;
    local_a10._0_8_ = &___7__FScopedWidgetSlotArguments_VFSlot_SHorizontalBox___SBoxPanel__6B_;
    local_918 = -1;
    pFVar15 = SHorizontalBox::FSlot::FSlotArguments::AutoWidth((FSlotArguments *)(local_a10 + 8));
    uStack_ef8 = _UNK_150925078;
    local_f00 = ___xmm_00000000400000000000000040000000;
    local_ef0 = 1;
    pFVar15->field_0x28 = 1;
    local_ed8 = 0;
    local_ee8 = (undefined1  [8])0x0;
    FStack_ee0.Data = (FScriptContainerElement *)0x0;
    *(undefined8 *)&pFVar15->field_0x18 = local_f00;
    *(undefined8 *)&pFVar15->field_0x20 = uStack_ef8;
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pFVar15->field_0x30,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_ee8);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_ee8,
               (FWriteAccessScope *)&local_de8);
    if (((int)local_ed8 != 0) && (FStack_ee0.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_ee0.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_ee0,0,0,0x10);
      local_ed8 = local_ed8 & 0xffffffff00000000;
    }
    if (local_de8.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_de8.Accessor,&local_de8);
    }
    if (FStack_ee0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_ee0.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_ee8);
    pFVar19 = pFVar32;
    if (&pFVar15->field_0x18 != (undefined1 *)0x0) {
      pFVar19 = pFVar15;
    }
    if (local_e90 != (undefined4 *)&pFVar19->field_0x50) {
      *(undefined4 *)&pFVar19->field_0x50 = 2;
      pFVar19->field_0x54 = 1;
    }
    if (pFVar19 != (FSlotArguments *)0xffffffffffffffb8) {
      pFVar32 = pFVar19;
    }
    if ((*(longlong *)((longlong)this + 0x468) == 0) &&
       (bVar37 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x408,L""), bVar37)) {
      pcVar6 = (code *)swi(3);
      pTVar17 = (TSharedRef<SWidget,1> *)(*pcVar6)();
      return pTVar17;
    }
    pTVar3 = *(TReferenceControllerBase<1> **)((longlong)this + 0x470);
    lVar4 = *(longlong *)((longlong)this + 0x468);
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((lVar4 == 0) &&
       (bVar37 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x25d,L""), bVar37)) {
      pcVar6 = (code *)swi(3);
      pTVar17 = (TSharedRef<SWidget,1> *)(*pcVar6)();
      return pTVar17;
    }
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_f60 = lVar4;
    local_f58.ReferenceController = pTVar3;
    if ((longlong *)&pFVar32->field_0x8 != &local_f60) {
      *(longlong *)&pFVar32->field_0x8 = lVar4;
      local_f60 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                ((FSharedReferencer<1> *)&pFVar32->field_0x10,&local_f58);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_f58.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    SBoxPanel::FScopedWidgetSlotArguments<SHorizontalBox::FSlot>::
    ~FScopedWidgetSlotArguments<SHorizontalBox::FSlot>
              ((FScopedWidgetSlotArguments<SHorizontalBox::FSlot> *)local_a10);
    pTVar17 = local_f68;
    local_f68->Object = (SWidget *)local_ec0.Object;
    (local_f68->SharedReferenceCount).ReferenceController =
         local_ec0.SharedReferenceCount.ReferenceController;
    if (local_ec0.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_ec0.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_ec0.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar35.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pFVar24);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_ec0.SharedReferenceCount.ReferenceController);
    return pTVar17;
  }
  pSVar29 = (SWidget *)0x0;
  FVar31.Id = 0;
  if (*param_1 != UE::PropertyViewer::Private::ColumnName_PropertyValue) goto LAB_14d86500b;
  pSVar25 = *(SWidget **)((longlong)this + 0x460);
  pSVar27 = pSVar29;
  pSVar36 = pSVar25;
  if (pSVar25 != (SWidget *)0x0) {
    iVar7 = (int)pSVar25->_padding_;
    do {
      pSVar27 = (SWidget *)0x0;
      pSVar36 = pSVar29;
      if (iVar7 == 0) goto LAB_14d864ca6;
      LOCK();
      iVar8 = (int)pSVar25->_padding_;
      bVar37 = iVar7 == iVar8;
      if (bVar37) {
        *(int *)&pSVar25->_padding_ = iVar7 + 1;
        iVar8 = iVar7;
      }
      UNLOCK();
      iVar7 = iVar8;
    } while (!bVar37);
    pSVar27 = *(SWidget **)((longlong)this + 0x458);
    pSVar36 = pSVar25;
  }
LAB_14d864ca6:
  pSVar25 = *(SWidget **)((longlong)this + 0x480);
  pSVar28 = pSVar25;
  pSVar34 = pSVar29;
  if (pSVar25 != (SWidget *)0x0) {
    iVar7 = (int)pSVar25->_padding_;
    do {
      pSVar28 = pSVar29;
      if (iVar7 == 0) goto LAB_14d864cd5;
      LOCK();
      iVar8 = (int)pSVar25->_padding_;
      bVar37 = iVar7 == iVar8;
      if (bVar37) {
        *(int *)&pSVar25->_padding_ = iVar7 + 1;
        iVar8 = iVar7;
      }
      UNLOCK();
      iVar7 = iVar8;
    } while (!bVar37);
    pSVar28 = pSVar25;
    pSVar34 = *(SWidget **)((longlong)this + 0x478);
  }
LAB_14d864cd5:
  if ((((pSVar27 != (SWidget *)0x0) && (pSVar34 != (SWidget *)0x0)) &&
      ((lVar4._0_1_ = pSVar27->UpdateFlags, lVar4._1_1_ = pSVar27->VisibilityAttribute,
       lVar4._2_1_ = pSVar27->EnabledStateAttribute, lVar4._3_1_ = pSVar27->HoveredAttribute,
       lVar4._4_4_ = pSVar27->PrepassLayoutScaleMultiplierValue, lVar4 != 0 ||
       ((pSVar27->PersistentState).PaintParent.Object != (SWidget *)0x0)))) &&
     (UE::PropertyViewer::Private::FTreeNode::GetField((FTreeNode *)pSVar27), (local_e48 & 1) == 0))
  {
    local_fb8 = (T0RequiredArgs)0x0;
    UE::PropertyViewer::Private::FTreeNode::GetOwnerContainer((FTreeNode *)pSVar27,&local_e30);
    if (local_e30.Object != (FContainer *)0x0) {
      pFVar13 = TSharedPtr<UE::PropertyViewer::Private::FContainer,1>::operator->(&local_e30);
      pUVar20 = FWeakObjectPtr::Get(&(pFVar13->ObjectInstance).WeakPtr);
      if (pFVar13->bIsObject == false) {
        pUVar20 = pFVar13->StructInstance;
      }
      local_fb8 = (T0RequiredArgs)(pUVar20 != (UObject *)0x0);
      __return_storage_ptr__ = local_f68;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_e30.SharedReferenceCount.ReferenceController);
    UE::PropertyViewer::FPropertyPath::FPropertyPath(&local_d0);
    local_a0 = (TVector2<float>_u_0)0x0;
    local_98 = 0;
    pFVar21 = UE::PropertyViewer::Private::FTreeNode::GetPropertyPath
                        ((FTreeNode *)pSVar27,&local_90);
    local_d0.TopLevelContainer_Object.WeakPtr = (pFVar21->TopLevelContainer_Object).WeakPtr;
    local_d0.TopLevelContainer_ScriptStruct.WeakPtr =
         (pFVar21->TopLevelContainer_ScriptStruct).WeakPtr;
    local_d0.TopLevelContainer_ScriptStructData = pFVar21->TopLevelContainer_ScriptStructData;
    if (&local_d0.Properties != &pFVar21->Properties) {
      if ((pFVar21->Properties).AllocatorInstance.SecondaryData ==
          (ForElementType<FProperty_const_*>)0x0) {
        local_d0.Properties.AllocatorInstance.InlineData =
             *&(pFVar21->Properties).AllocatorInstance.InlineData;
      }
      if (local_d0.Properties.AllocatorInstance.SecondaryData !=
          (ForElementType<FProperty_const_*>)0x0) {
        FMemory::Free((void *)local_d0.Properties.AllocatorInstance.SecondaryData);
      }
      local_d0.Properties.AllocatorInstance.SecondaryData =
           (pFVar21->Properties).AllocatorInstance.SecondaryData;
      (pFVar21->Properties).AllocatorInstance.SecondaryData = (ForElementType<FProperty_const_*>)0x0
      ;
      local_d0.Properties.ArrayNum = (pFVar21->Properties).ArrayNum;
      local_d0.Properties.ArrayMax = (pFVar21->Properties).ArrayMax;
      (pFVar21->Properties).ArrayNum = 0;
      (pFVar21->Properties).ArrayMax = 1;
    }
    if (local_90.Properties.AllocatorInstance.SecondaryData !=
        (ForElementType<FProperty_const_*>)0x0) {
      FMemory::Free((void *)local_90.Properties.AllocatorInstance.SecondaryData);
    }
    local_a0 = pSVar34[1].PersistentState.InitialClipState.TypedValue.ScissorRect.TypedValue.
               TopRight.field0_0x0;
    if (((local_fb8 == (T0RequiredArgs)0x0) ||
        ((pSVar34->PersistentState).WidgetStyle.ForegroundColor.field0_0x0._s_0.B != 2.8026e-45)) ||
       (pFVar22 = UE::PropertyViewer::FPropertyPath::GetLastProperty(&local_d0),
       pFVar22 == (FProperty *)0x0)) {
LAB_14d864e6b:
      local_98 = 0;
    }
    else {
      pFVar22 = UE::PropertyViewer::FPropertyPath::GetLastProperty(&local_d0);
      local_98 = 1;
      if ((pFVar22->PropertyFlags & CPF_BlueprintReadOnly) != CPF_None) goto LAB_14d864e6b;
    }
    FVar5 = UE::AdvancedWidgets::Private::NAME_AdvancedWidgets;
    this_02 = FModuleManager::Get();
    pIVar23 = FModuleManager::LoadModuleChecked(this_02,FVar5);
    this_01 = pIVar23[1];
    UE::PropertyViewer::FPropertyPath::FPropertyPath(&local_c90.Path,&local_d0);
    local_c90.NotifyHook = (INotifyHook *)local_a0;
    local_c90.bCanEditValue = (bool)local_98;
    UE::PropertyViewer::FPropertyValueFactory::Generate
              ((FPropertyValueFactory *)this_01,&local_f78,&local_c90);
    if (local_f78.Object != (SWidget *)0x0) {
LAB_14d865145:
      pFVar9 = SHorizontalBox::FArguments::FArguments(&local_708);
      pFVar24 = SHorizontalBox::Slot(&local_418);
      pSVar25 = (SWidget *)SHorizontalBox::FSlot::FSlotArguments::AutoWidth(pFVar24);
      pTVar1 = &(pSVar25->PersistentState).InitialClipState;
      if ((TOptional<FSlateClippingState> *)local_e88 != pTVar1) {
        *(undefined4 *)&(pTVar1->TypedValue).StencilQuads.AllocatorInstance.Data = 2;
        *(undefined1 *)
         ((longlong)
          &(pSVar25->PersistentState).InitialClipState.TypedValue.StencilQuads.AllocatorInstance.
           Data + 4) = 1;
      }
      if (pSVar25 != (SWidget *)0xffffffffffffffb8) {
        pSVar29 = pSVar25;
      }
      pTVar17 = TSharedPtr<SWidget,1>::ToSharedRef(&local_f78,&local_d90);
      pFVar24 = TSlotBase<SHorizontalBox::FSlot>::FSlotArguments::operator[]
                          ((FSlotArguments *)pSVar29,pTVar17);
      pFVar9 = SHorizontalBox::FArguments::operator+(pFVar9,pFVar24);
      pFVar24 = SHorizontalBox::Slot(&local_500);
      local_e20.Value = 1.0;
      local_e20.bIsSet = true;
      local_e20.Getter._16_8_ = 0;
      local_e20.Getter._0_8_ = 0;
      local_e20.Getter._8_8_ = 0;
      pFVar24 = SHorizontalBox::FSlot::FSlotArguments::FillWidth(pFVar24,&local_e20);
      pFVar24 = TSlotBase<SHorizontalBox::FSlot>::FSlotArguments::operator[]
                          ((FSlotArguments *)pFVar24,&SNullWidget::NullWidget);
      pFVar9 = SHorizontalBox::FArguments::operator+(pFVar9,pFVar24);
      this_03 = MakeTDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>
                          (&local_cc8,"SHorizontalBox",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AdvancedWidgets\\Private\\Widgets\\PropertyViewer\\SPropertyViewerImpl.cpp"
                           ,0x46d,local_fb7);
      pTVar26 = TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                          (this_03,&local_cd8,pFVar9);
      __return_storage_ptr__->Object = (SWidget *)pTVar26->Object;
      pTVar3 = (pTVar26->SharedReferenceCount).ReferenceController;
      (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar3;
      if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_cd8.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_cc8._Widget.SharedReferenceCount.ReferenceController);
      SHorizontalBox::FSlot::FSlotArguments::~FSlotArguments(&local_500);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_d90.SharedReferenceCount.ReferenceController);
      SHorizontalBox::FSlot::FSlotArguments::~FSlotArguments(&local_418);
      DestructItems<SHorizontalBox::FSlot::FSlotArguments,int>
                ((FSlotArguments *)local_708._Slots.AllocatorInstance.Data,local_708._Slots.ArrayNum
                );
      if ((FSlotArguments *)local_708._Slots.AllocatorInstance.Data != (FSlotArguments *)0x0) {
        FMemory::Free(local_708._Slots.AllocatorInstance.Data);
      }
      FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_708);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_f78.SharedReferenceCount.ReferenceController);
      if (local_d0.Properties.AllocatorInstance.SecondaryData !=
          (ForElementType<FProperty_const_*>)0x0) {
        FMemory::Free((void *)local_d0.Properties.AllocatorInstance.SecondaryData);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)pSVar28);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)pSVar36);
      return __return_storage_ptr__;
    }
    UE::PropertyViewer::FPropertyPath::FPropertyPath(&local_dd0,&local_d0);
    local_da0 = local_a0;
    local_d98 = local_98;
    pFVar22 = UE::PropertyViewer::FPropertyPath::GetLastProperty(&local_dd0);
    if ((pFVar22 == (FProperty *)0x0) ||
       ((pFVar22->PropertyFlags & CPF_BlueprintVisible) == CPF_None)) {
      local_f50.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      local_f78.Object = pSVar29;
      if (local_dd0.Properties.AllocatorInstance.SecondaryData !=
          (ForElementType<FProperty_const_*>)0x0) {
        FMemory::Free((void *)local_dd0.Properties.AllocatorInstance.SecondaryData);
      }
    }
    else {
      if ((pFVar22->PropertyFlags & CPF_BlueprintReadOnly) != CPF_None) {
        local_d98 = 0;
      }
      UE::PropertyViewer::FPropertyPath::FPropertyPath(&local_c50.Path,&local_dd0);
      local_c50.NotifyHook = (INotifyHook *)local_da0;
      local_c50.bCanEditValue = (bool)local_d98;
      UE::PropertyViewer::SDefaultPropertyValue::CreateInstance(&local_f50,&local_c50);
      local_f78.Object = local_f50.Object;
      if (local_dd0.Properties.AllocatorInstance.SecondaryData !=
          (ForElementType<FProperty_const_*>)0x0) {
        FMemory::Free((void *)local_dd0.Properties.AllocatorInstance.SecondaryData);
        local_f78.Object = local_f50.Object;
      }
    }
    local_f50.Object = (SWidget *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&local_f78.SharedReferenceCount,&local_f50.SharedReferenceCount);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_f50.SharedReferenceCount.ReferenceController);
    if (local_f78.Object != (SWidget *)0x0) goto LAB_14d865145;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_f78.SharedReferenceCount.ReferenceController);
    if (local_d0.Properties.AllocatorInstance.SecondaryData !=
        (ForElementType<FProperty_const_*>)0x0) {
      FMemory::Free((void *)local_d0.Properties.AllocatorInstance.SecondaryData);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar28);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar36);
LAB_14d86500b:
  FVar5.ComparisonIndex.Value = *(uint *)&local_f90->field_0x0;
  FVar5.Number = *(uint *)&local_f90->field_0x4;
  if (FVar5 == UE::PropertyViewer::Private::ColumnName_FieldPostWidget) {
    pSVar25 = *(SWidget **)((longlong)this + 0x460);
    pSVar27 = pSVar25;
    pSVar36 = pSVar29;
    if (pSVar25 != (SWidget *)0x0) {
      iVar7 = (int)pSVar25->_padding_;
      do {
        pSVar27 = pSVar29;
        if (iVar7 == 0) goto LAB_14d865055;
        LOCK();
        iVar8 = (int)pSVar25->_padding_;
        bVar37 = iVar7 == iVar8;
        if (bVar37) {
          *(int *)&pSVar25->_padding_ = iVar7 + 1;
          iVar8 = iVar7;
        }
        UNLOCK();
        iVar7 = iVar8;
      } while (!bVar37);
      pSVar27 = pSVar25;
      pSVar36 = *(SWidget **)((longlong)this + 0x458);
    }
LAB_14d865055:
    pSVar25 = *(SWidget **)((longlong)this + 0x480);
    pSVar28 = pSVar25;
    if (pSVar25 != (SWidget *)0x0) {
      iVar7 = (int)pSVar25->_padding_;
      do {
        pSVar28 = pSVar29;
        if (iVar7 == 0) goto LAB_14d865085;
        LOCK();
        iVar8 = (int)pSVar25->_padding_;
        bVar37 = iVar7 == iVar8;
        if (bVar37) {
          *(int *)&pSVar25->_padding_ = iVar7 + 1;
          iVar8 = iVar7;
        }
        UNLOCK();
        iVar7 = iVar8;
      } while (!bVar37);
      pSVar29 = *(SWidget **)((longlong)this + 0x478);
      pSVar28 = pSVar25;
    }
LAB_14d865085:
    if ((pSVar36 != (SWidget *)0x0) && (pSVar29 != (SWidget *)0x0)) {
      UE::PropertyViewer::Private::FTreeNode::GetOwnerContainer((FTreeNode *)pSVar36,&local_ea0);
      pTVar11 = UE::PropertyViewer::Private::FTreeNode::GetFieldPath
                          ((FTreeNode *)pSVar36,&local_d68);
      pTVar12 = TArrayView<FFieldVariant_const_,int>::
                TArrayView<FFieldVariant_const_,int><TArray<FFieldVariant,TSizedDefaultAllocator<32>_>,TArray<FFieldVariant,TSizedDefaultAllocator<32>_>_>
                          (&local_cb0,pTVar11);
      local_d78.DataPtr = pTVar12->DataPtr;
      local_d78.ArrayNum = pTVar12->ArrayNum;
      local_d78._12_4_ = *(undefined4 *)&pTVar12->field_0xc;
      if (local_ea0.Object != (FContainer *)0x0) {
        pFVar13 = TSharedPtr<UE::PropertyViewer::Private::FContainer,1>::operator->(&local_ea0);
        FVar31.Id = (pFVar13->Identifier).Id;
      }
      TDelegate<TSharedPtr<SWidget,1>___cdecl(UE::PropertyViewer::SPropertyViewer::FHandle,TArrayView<FFieldVariant_const_,int>),FDefaultDelegateUserPolicy>
      ::Execute((TDelegate<TSharedPtr<SWidget,1>___cdecl(UE::PropertyViewer::SPropertyViewer::FHandle,TArrayView<FFieldVariant_const_,int>),FDefaultDelegateUserPolicy>
                 *)&(pSVar29->PersistentState).AllottedGeometry.Scale,&local_eb0,FVar31,&local_d78);
      if (local_d68.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_d68.AllocatorInstance.Data);
      }
      if (local_eb0.Object != (SWidget *)0x0) {
        TSharedPtr<SWidget,1>::ToSharedRef(&local_eb0,__return_storage_ptr__);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_eb0.SharedReferenceCount.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_ea0.SharedReferenceCount.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)pSVar28);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)pSVar27);
        return __return_storage_ptr__;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_eb0.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_ea0.SharedReferenceCount.ReferenceController);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pSVar28);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pSVar27);
  }
  __return_storage_ptr__->Object = SNullWidget::NullWidget.Object;
  FVar38 = SNullWidget::NullWidget.SharedReferenceCount;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       SNullWidget::NullWidget.SharedReferenceCount.ReferenceController;
  if (FVar38.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar2 = &(FVar38.ReferenceController)->SharedReferenceCount;
    *paVar2 = (atomic<int>)((int)*paVar2 + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

