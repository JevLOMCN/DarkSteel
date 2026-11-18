// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SourceControl
// Functions: 27

// Construct @ 146b08a30

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SSourceControlControls::Construct(SSourceControlControls *this,FArguments *param_1)

{
  undefined1 *puVar1;
  TReferenceControllerBase<1> *pTVar2;
  TReferenceControllerBase<1> *pTVar3;
  longlong *plVar4;
  TReferenceControllerBase<1> *pTVar5;
  TReferenceControllerBase<1> *pTVar6;
  TReferenceControllerBase<1> *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  TReferenceControllerBase<1> *pTVar9;
  undefined8 uVar10;
  undefined4 uVar11;
  FArguments *pFVar12;
  undefined8 uVar13;
  FArguments *pFVar14;
  FSlotArguments *pFVar15;
  FSizeParam *pFVar16;
  FArguments *pFVar17;
  ISlateStyle *pIVar18;
  FName *pFVar19;
  FButtonStyle *pFVar20;
  undefined8 *puVar21;
  ulong64 uVar22;
  FArguments *pFVar23;
  FArguments *pFVar24;
  TSharedRef<SImage,1> *pTVar25;
  FArguments *pFVar26;
  FTextBlockStyle *pFVar27;
  TSharedRef<STextBlock,1> *pTVar28;
  TSharedRef<SHorizontalBox,1> *pTVar29;
  TSharedRef<SButton,1> *pTVar30;
  FSlotArguments *pFVar31;
  FArguments *pFVar32;
  FComboButtonStyle *pFVar33;
  TSharedRef<SComboButton,1> *pTVar34;
  FArguments *pFVar35;
  TSlateDecl<SSeparator,RequiredArgs::T0RequiredArgs> *pTVar36;
  TSharedRef<SSeparator,1> *pTVar37;
  TSlateDecl<SImage,RequiredArgs::T0RequiredArgs> *this_00;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> *this_01;
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs> *pTVar38;
  TSlateDecl<SButton,RequiredArgs::T0RequiredArgs> *this_02;
  FSlotArguments *pFVar39;
  FSlotArguments *pFVar40;
  FArguments *local_res10;
  T0RequiredArgs local_res18 [8];
  T0RequiredArgs local_res20 [8];
  FLLMScope local_4898 [2];
  FName local_4890;
  FDestructionSentinel local_4888;
  FName local_4868;
  T0RequiredArgs local_4860;
  T0RequiredArgs local_485f;
  T0RequiredArgs local_485e;
  T0RequiredArgs local_485d;
  T0RequiredArgs local_485c;
  T0RequiredArgs local_485b;
  T0RequiredArgs local_485a;
  T0RequiredArgs local_4859;
  T0RequiredArgs local_4858;
  T0RequiredArgs local_4857;
  T0RequiredArgs local_4856;
  T0RequiredArgs local_4855;
  T0RequiredArgs local_4854;
  T0RequiredArgs local_4853 [3];
  FDestructionSentinel local_4850;
  longlong *local_4838;
  STextBlock *local_4830;
  FSharedReferencer<1> local_4828;
  SButton *local_4820;
  FSharedReferencer<1> local_4818;
  SImage *local_4810;
  FSharedReferencer<1> local_4808;
  STextBlock *local_4800;
  FSharedReferencer<1> local_47f8;
  SButton *local_47f0;
  FSharedReferencer<1> local_47e8;
  SImage *local_47e0;
  FSharedReferencer<1> local_47d8;
  SHorizontalBox *local_47d0;
  TReferenceControllerBase<1> *pTStack_47c8;
  bool local_47c0;
  SHorizontalBox *local_47b8;
  TReferenceControllerBase<1> *pTStack_47b0;
  undefined8 local_47a8;
  undefined8 uStack_47a0;
  undefined1 local_4798;
  undefined1 local_4790 [8];
  ForAnyElementType FStack_4788;
  ulonglong local_4780;
  undefined8 local_4778;
  undefined8 uStack_4770;
  undefined1 local_4768;
  undefined1 local_4760 [8];
  ForAnyElementType FStack_4758;
  ulonglong local_4750;
  undefined8 local_4748;
  undefined8 uStack_4740;
  undefined1 local_4738;
  undefined1 local_4730 [8];
  ForAnyElementType FStack_4728;
  ulonglong local_4720;
  undefined4 local_4718;
  undefined1 local_4714;
  TDelegateBase<FNotThreadSafeDelegateMode> local_4710;
  undefined4 local_46f8 [2];
  TReferenceControllerBase<1> *local_46f0;
  TReferenceControllerBase<1> *local_46e8;
  undefined4 local_46e0 [2];
  TReferenceControllerBase<1> *local_46d8;
  TReferenceControllerBase<1> *local_46d0;
  undefined4 local_46c8 [2];
  TReferenceControllerBase<1> *local_46c0;
  TReferenceControllerBase<1> *local_46b8;
  TReferenceControllerBase<1> *local_46b0;
  undefined4 local_46a8 [2];
  undefined4 local_46a0 [2];
  undefined4 local_4698 [2];
  undefined4 local_4690 [2];
  undefined4 local_4688 [2];
  undefined4 local_4680 [2];
  undefined4 local_4678 [2];
  undefined4 local_4670 [2];
  FDestructionSentinel local_4668;
  longlong *local_4650;
  FDestructionSentinel local_4648;
  undefined1 *local_4630;
  undefined4 local_4628 [2];
  FDestructionSentinel local_4620;
  undefined1 *local_4608;
  undefined4 local_4600 [2];
  undefined4 local_45f8 [2];
  undefined4 local_45f0 [2];
  undefined1 local_45e8 [48];
  TDelegateBase<FNotThreadSafeDelegateMode> local_45b8;
  TSlateDecl<SComboButton,RequiredArgs::T0RequiredArgs> local_45a0;
  undefined8 local_4588;
  undefined8 uStack_4580;
  undefined1 local_4578;
  TDelegateBase<FNotThreadSafeDelegateMode> local_4570;
  undefined8 local_4558;
  undefined8 uStack_4550;
  undefined1 local_4548;
  TDelegateBase<FNotThreadSafeDelegateMode> local_4540;
  undefined8 local_4528;
  undefined8 uStack_4520;
  undefined1 local_4518;
  TDelegateBase<FNotThreadSafeDelegateMode> local_4510;
  FName local_44f8;
  TSharedRef<SComboButton,1> local_44f0;
  TSharedRef<SButton,1> local_44e0;
  TSharedRef<SHorizontalBox,1> local_44d0;
  TSharedRef<STextBlock,1> local_44c0;
  TSharedRef<SImage,1> local_44b0;
  TSharedRef<SButton,1> local_44a0;
  TSharedRef<SHorizontalBox,1> local_4490;
  TSharedRef<STextBlock,1> local_4480;
  TSharedRef<SImage,1> local_4470;
  FName local_4460;
  TSlateDecl<SButton,RequiredArgs::T0RequiredArgs> local_4458;
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs> local_4440;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_4428;
  FName local_4410;
  TSharedRef<SSeparator,1> local_4408;
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs> local_43f8;
  FName local_43e0;
  FName local_43d8;
  FName local_43d0;
  FName local_43c8;
  TSharedRef<SHorizontalBox,1> local_43c0;
  TSharedRef<SSeparator,1> local_43b0;
  TSharedRef<SButton,1> local_43a0;
  TSharedRef<SHorizontalBox,1> local_4390;
  TSharedRef<STextBlock,1> local_4380;
  TSharedRef<SImage,1> local_4370;
  TSlateDecl<SSeparator,RequiredArgs::T0RequiredArgs> local_4360;
  TSlateDecl<SButton,RequiredArgs::T0RequiredArgs> local_4348;
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs> local_4330;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_4318;
  TSlateDecl<SImage,RequiredArgs::T0RequiredArgs> local_4300;
  TSlateDecl<SSeparator,RequiredArgs::T0RequiredArgs> local_42e8;
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs> local_42d0;
  FArguments local_42b8;
  FArguments local_40b0;
  FArguments local_3ea8;
  FArguments local_3ca0;
  FSlotArguments local_3a98;
  FSlotArguments local_39b0;
  FSlotArguments local_38c8;
  FSlotArguments local_37e0;
  FSlotArguments local_36f8;
  FSlotArguments local_3610;
  FSlotArguments local_3528;
  FSlotArguments local_3440;
  FSlotArguments local_3358;
  FSlotArguments local_3270;
  FSlotArguments local_3188;
  FSlotArguments local_30a0;
  FArguments local_2fb8;
  FArguments local_2d10;
  FArguments local_2a68;
  FArguments local_27c0;
  FArguments local_2588;
  FArguments local_2350;
  FArguments local_2018;
  FArguments local_1ad8;
  FArguments local_1598;
  FArguments local_1058;
  FArguments local_b00;
  FArguments local_5a8;
  undefined8 uStack_48;
  
  uStack_48 = 0x146b08a58;
  local_res10 = param_1;
  TAttribute<bool>::operator=(&this->IsMiddleSeparatorEnabled,&param_1->_IsEnabledMiddleSeparator);
  TAttribute<bool>::operator=(&this->IsRightSeparatorEnabled,&param_1->_IsEnabledRightSeparator);
  pFVar14 = SHorizontalBox::FArguments::FArguments(&local_3ca0);
  pFVar15 = SHorizontalBox::Slot(&local_3440);
  if (local_46c8 != (undefined4 *)&pFVar15->field_0x50) {
    *(undefined4 *)&pFVar15->field_0x50 = 2;
    pFVar15->field_0x54 = 1;
  }
  uVar10 = _UNK_150957978;
  pFVar40 = (FSlotArguments *)0x0;
  local_4798 = 1;
  local_47a8 = ___xmm_00000000408000000000000000000000;
  uStack_47a0 = _UNK_150957978;
  pFVar31 = pFVar40;
  if (pFVar15 != (FSlotArguments *)0xffffffffffffffb8) {
    pFVar31 = pFVar15;
  }
  local_4790 = (undefined1  [8])0x0;
  FStack_4788.Data = (FScriptContainerElement *)0x0;
  local_4780 = 0;
  *(undefined8 *)&pFVar31->field_0x18 = ___xmm_00000000408000000000000000000000;
  *(undefined8 *)&pFVar31->field_0x20 = uVar10;
  pFVar31->field_0x28 = 1;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pFVar31->field_0x30,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_4790);
  if (&pFVar31->field_0x18 == (undefined1 *)0x0) {
    pFVar31 = pFVar40;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_4790,
             (FWriteAccessScope *)&local_4888);
  if (((int)local_4780 != 0) && (FStack_4788.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_4788.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_4788,0,0,0x10);
    local_4780 = local_4780 & 0xffffffff00000000;
  }
  if (local_4888.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_4888.Accessor,&local_4888);
  }
  if (FStack_4788.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_4788.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_4790);
  pFVar16 = (FSizeParam *)FAuto::FAuto((FAuto *)local_45e8);
  TOptional<FSizeParam>::operator=((TOptional<FSizeParam> *)&pFVar31->field_0x58,pFVar16);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>(&local_45b8)
  ;
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)(local_45e8 + 0x10));
  pFVar17 = SButton::FArguments::FArguments(&local_1598);
  pIVar18 = FAppStyle::Get();
  pFVar19 = ::FName::FName(&local_4460,"StatusBar.StatusBarButton");
  pFVar20 = (FButtonStyle *)
            (**(code **)((longlong)*pIVar18 + 0xa0))(pIVar18,FButtonStyle::TypeName,*pFVar19,0,1);
  if (pFVar20 == (FButtonStyle *)0x0) {
    pFVar20 = FButtonStyle::GetDefault();
  }
  pFVar17->_ButtonStyle = pFVar20;
  *(undefined1 *)&pFVar17->_padding_ = 1;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar17->_padding_,
             (FWriteAccessScope *)&local_4850);
  local_4838 = &pFVar17->_padding_;
  puVar21 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_4838);
  if (puVar21 != (undefined8 *)0x0) {
    *puVar21 = &
               ___7__TCommonDelegateInstanceState___A6A_AVFText__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar22 = FDelegateHandle::GenerateNewID();
    puVar21[2] = uVar22;
    puVar21[3] = GetSourceControlCheckInStatusToolTipText;
    *puVar21 = &
               ___7__TBaseStaticDelegateInstance___A6A_AVFText__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
  }
  if (local_4850.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_4850.Accessor,&local_4850);
  }
  *(undefined1 *)((longlong)&pFVar17->_padding_ + 1) = 1;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar17->_padding_,
             (FWriteAccessScope *)&local_4850);
  local_4838 = &pFVar17->_padding_;
  puVar21 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_4838);
  if (puVar21 != (undefined8 *)0x0) {
    *puVar21 = &
               ___7__TCommonDelegateInstanceState___A6A_AUEVisibility__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar22 = FDelegateHandle::GenerateNewID();
    puVar21[2] = uVar22;
    *puVar21 = &
               ___7__TBaseStaticDelegateInstance___A6A_AUEVisibility__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar21[3] = GetSourceControlCheckInStatusVisibility;
  }
  if (local_4850.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_4850.Accessor,&local_4850);
  }
  *(undefined1 *)((longlong)&pFVar17->_padding_ + 1) = 1;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar17->_padding_,
             (FWriteAccessScope *)&local_4850);
  local_4838 = &pFVar17->_padding_;
  puVar21 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_4838);
  if (puVar21 != (undefined8 *)0x0) {
    *puVar21 = &___7__TCommonDelegateInstanceState___A6A_NXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar22 = FDelegateHandle::GenerateNewID();
    puVar21[2] = uVar22;
    puVar21[3] = IsSourceControlCheckInEnabled;
    *puVar21 = &___7__TBaseStaticDelegateInstance___A6A_NXZUFDefaultDelegateUserPolicy____V__6B_;
  }
  if (local_4850.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_4850.Accessor,&local_4850);
  }
  pFVar23 = SHorizontalBox::FArguments::FArguments(&local_3ea8);
  pFVar15 = SHorizontalBox::Slot(&local_3528);
  pFVar16 = (FSizeParam *)FAuto::FAuto((FAuto *)local_45e8);
  TOptional<FSizeParam>::operator=((TOptional<FSizeParam> *)&pFVar15->field_0x58,pFVar16);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>(&local_45b8)
  ;
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)(local_45e8 + 0x10));
  if (local_46f8 != (undefined4 *)&pFVar15->field_0x50) {
    *(undefined4 *)&pFVar15->field_0x50 = 2;
    pFVar15->field_0x54 = 1;
  }
  pFVar39 = pFVar40;
  if (pFVar15 != (FSlotArguments *)0xffffffffffffffb8) {
    pFVar39 = pFVar15;
  }
  puVar1 = &pFVar39->field_0x48;
  if (local_46e0 != (undefined4 *)puVar1) {
    *(undefined4 *)puVar1 = 2;
    pFVar39->field_0x4c = 1;
  }
  if (puVar1 != (undefined1 *)0x0) {
    pFVar40 = pFVar39;
  }
  pFVar24 = SImage::FArguments::FArguments(&local_2a68);
  (pFVar24->_Image).bIsSet = true;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&(pFVar24->_Image).Getter,
             (FWriteAccessScope *)&local_4850);
  local_4838 = (longlong *)&(pFVar24->_Image).Getter.field_0x8;
  puVar21 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_4838);
  if (puVar21 != (undefined8 *)0x0) {
    *puVar21 = &
               ___7__TCommonDelegateInstanceState___A6APEBUFSlateBrush__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar22 = FDelegateHandle::GenerateNewID();
    puVar21[2] = uVar22;
    *puVar21 = &
               ___7__TBaseStaticDelegateInstance___A6APEBUFSlateBrush__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar21[3] = GetSourceControlCheckInStatusIcon;
  }
  if (local_4850.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_4850.Accessor,&local_4850);
  }
  FLLMScope::FLLMScope(local_4898,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_4868 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope((FMemScope *)&local_4890,&local_4868,true);
  TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>::TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>
            ((TSlateDecl<SImage,RequiredArgs::T0RequiredArgs> *)&local_4850,"SImage",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\SourceControl\\Private\\SSourceControlControls.cpp"
             ,0x69,local_res18);
  FMemScope::~FMemScope((FMemScope *)&local_4890);
  FLLMScope::~FLLMScope(local_4898);
  pTVar25 = TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>::operator<<=
                      ((TSlateDecl<SImage,RequiredArgs::T0RequiredArgs> *)&local_4850,&local_4470,
                       pFVar24);
  local_47e0 = pTVar25->Object;
  local_47d8.ReferenceController = (pTVar25->SharedReferenceCount).ReferenceController;
  if (local_47d8.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_47d8.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_47d8.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    (local_47d8.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_47d8.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_46b0 = local_47d8.ReferenceController;
  if ((SImage **)&pFVar40->field_0x8 != &local_47e0) {
    *(SImage **)&pFVar40->field_0x8 = local_47e0;
    local_47e0 = (SImage *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&pFVar40->field_0x10,&local_47d8);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_47d8.ReferenceController);
  pFVar23 = SHorizontalBox::FArguments::operator+(pFVar23,pFVar40);
  pFVar15 = SHorizontalBox::Slot(&local_3610);
  pFVar16 = (FSizeParam *)FAuto::FAuto((FAuto *)local_45e8);
  TOptional<FSizeParam>::operator=((TOptional<FSizeParam> *)&pFVar15->field_0x58,pFVar16);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>(&local_45b8)
  ;
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)(local_45e8 + 0x10));
  if (local_46a8 != (undefined4 *)&pFVar15->field_0x50) {
    *(undefined4 *)&pFVar15->field_0x50 = 2;
    pFVar15->field_0x54 = 1;
  }
  uVar10 = _UNK_150a07f48;
  local_4768 = 1;
  local_4778 = ___xmm_00000000000000000000000040a00000;
  uStack_4770 = _UNK_150a07f48;
  pFVar40 = (FSlotArguments *)0x0;
  if (pFVar15 != (FSlotArguments *)0xffffffffffffffb8) {
    pFVar40 = pFVar15;
  }
  local_4760 = (undefined1  [8])0x0;
  FStack_4758.Data = (FScriptContainerElement *)0x0;
  local_4750 = 0;
  *(undefined8 *)&pFVar40->field_0x18 = ___xmm_00000000000000000000000040a00000;
  *(undefined8 *)&pFVar40->field_0x20 = uVar10;
  pFVar40->field_0x28 = 1;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pFVar40->field_0x30,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_4760);
  if (&pFVar40->field_0x18 == (undefined1 *)0x0) {
    pFVar40 = (FSlotArguments *)0x0;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_4760,
             (FWriteAccessScope *)&local_4888);
  if (((int)local_4750 != 0) && (FStack_4758.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_4758.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_4758,0,0,0x10);
    local_4750 = local_4750 & 0xffffffff00000000;
  }
  if (local_4888.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_4888.Accessor,&local_4888);
  }
  if (FStack_4758.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_4758.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_4760);
  pFVar26 = STextBlock::FArguments::FArguments(&local_5a8);
  pIVar18 = FAppStyle::Get();
  pFVar19 = ::FName::FName(&local_4410,"NormalText");
  pFVar27 = (FTextBlockStyle *)
            (**(code **)((longlong)*pIVar18 + 0xa0))(pIVar18,FTextBlockStyle::TypeName,*pFVar19,0,1)
  ;
  if (pFVar27 == (FTextBlockStyle *)0x0) {
    pFVar27 = FTextBlockStyle::GetDefault();
  }
  pFVar26->_TextStyle = pFVar27;
  (pFVar26->_Text).bIsSet = true;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&(pFVar26->_Text).Getter,
             (FWriteAccessScope *)&local_4648);
  local_4630 = &(pFVar26->_Text).Getter.field_0x8;
  puVar21 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_4630);
  if (puVar21 != (undefined8 *)0x0) {
    *puVar21 = &
               ___7__TCommonDelegateInstanceState___A6A_AVFText__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar22 = FDelegateHandle::GenerateNewID();
    puVar21[2] = uVar22;
    *puVar21 = &
               ___7__TBaseStaticDelegateInstance___A6A_AVFText__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar21[3] = GetSourceControlCheckInStatusText;
  }
  if (local_4648.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_4648.Accessor,&local_4648);
  }
  FLLMScope::FLLMScope(local_4898,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_4890 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope((FMemScope *)&local_4868,&local_4890,true);
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>
            ((TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> *)&local_4648,"STextBlock",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\SourceControl\\Private\\SSourceControlControls.cpp"
             ,0x71,local_res20);
  FMemScope::~FMemScope((FMemScope *)&local_4868);
  FLLMScope::~FLLMScope(local_4898);
  pTVar28 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                      ((TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> *)&local_4648,
                       &local_4480,pFVar26);
  local_4830 = pTVar28->Object;
  local_4828.ReferenceController = (pTVar28->SharedReferenceCount).ReferenceController;
  if (local_4828.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_4828.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_4828.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    (local_4828.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_4828.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_46b8 = local_4828.ReferenceController;
  if ((STextBlock **)&pFVar40->field_0x8 != &local_4830) {
    *(STextBlock **)&pFVar40->field_0x8 = local_4830;
    local_4830 = (STextBlock *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&pFVar40->field_0x10,&local_4828);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_4828.ReferenceController);
  pFVar23 = SHorizontalBox::FArguments::operator+(pFVar23,pFVar40);
  FLLMScope::FLLMScope(local_4898,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_4890 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope((FMemScope *)&local_4868,&local_4890,true);
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>
            (&local_43f8,"SHorizontalBox",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\SourceControl\\Private\\SSourceControlControls.cpp"
             ,99,local_4853);
  FMemScope::~FMemScope((FMemScope *)&local_4868);
  FLLMScope::~FLLMScope(local_4898);
  pTVar29 = TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_43f8,&local_4490,pFVar23);
  local_47b8 = pTVar29->Object;
  pTStack_47b0 = (pTVar29->SharedReferenceCount).ReferenceController;
  if (pTStack_47b0 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_47b0->SharedReferenceCount = (atomic<int>)((int)pTStack_47b0->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTStack_47b0->SharedReferenceCount = (atomic<int>)((int)pTStack_47b0->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar2 = (pFVar17->_Content).Widget.SharedReferenceCount.ReferenceController;
  (pFVar17->_Content).Widget.Object = (SWidget *)local_47b8;
  (pFVar17->_Content).Widget.SharedReferenceCount.ReferenceController = pTStack_47b0;
  local_46c0 = pTStack_47b0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar17->_OnClicked,
             (FWriteAccessScope *)&local_4620);
  local_4608 = &(pFVar17->_OnClicked).field_0x8;
  puVar21 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_4608);
  if (puVar21 != (undefined8 *)0x0) {
    *puVar21 = &
               ___7__TCommonDelegateInstanceState___A6A_AVFReply__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar22 = FDelegateHandle::GenerateNewID();
    puVar21[2] = uVar22;
    *puVar21 = &
               ___7__TBaseStaticDelegateInstance___A6A_AVFReply__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar21[3] = OnSourceControlCheckInChangesClicked;
  }
  if (local_4620.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_4620.Accessor,&local_4620);
  }
  FLLMScope::FLLMScope(local_4898,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_4890 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope((FMemScope *)&local_4868,&local_4890,true);
  TSlateDecl<SButton,RequiredArgs::T0RequiredArgs>::TSlateDecl<SButton,RequiredArgs::T0RequiredArgs>
            ((TSlateDecl<SButton,RequiredArgs::T0RequiredArgs> *)&local_4620,"SButton",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\SourceControl\\Private\\SSourceControlControls.cpp"
             ,0x5d,&local_4860);
  FMemScope::~FMemScope((FMemScope *)&local_4868);
  FLLMScope::~FLLMScope(local_4898);
  pTVar30 = TSlateDecl<SButton,RequiredArgs::T0RequiredArgs>::operator<<=
                      ((TSlateDecl<SButton,RequiredArgs::T0RequiredArgs> *)&local_4620,&local_44a0,
                       pFVar17);
  local_4820 = pTVar30->Object;
  local_4818.ReferenceController = (pTVar30->SharedReferenceCount).ReferenceController;
  if (local_4818.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_4818.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_4818.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    (local_4818.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_4818.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pFVar15 = (FSlotArguments *)0x0;
  local_47b8 = (SHorizontalBox *)local_4818.ReferenceController;
  if ((SButton **)&pFVar31->field_0x8 != &local_4820) {
    *(SButton **)&pFVar31->field_0x8 = local_4820;
    local_4820 = (SButton *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&pFVar31->field_0x10,&local_4818);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_4818.ReferenceController);
  pFVar14 = SHorizontalBox::FArguments::operator+(pFVar14,pFVar31);
  pFVar31 = SHorizontalBox::Slot(&local_36f8);
  if (local_46a0 != (undefined4 *)&pFVar31->field_0x50) {
    *(undefined4 *)&pFVar31->field_0x50 = 2;
    pFVar31->field_0x54 = 1;
  }
  uVar10 = _UNK_150957978;
  local_4738 = 1;
  local_4748 = ___xmm_00000000408000000000000000000000;
  uStack_4740 = _UNK_150957978;
  pFVar40 = pFVar15;
  if (pFVar31 != (FSlotArguments *)0xffffffffffffffb8) {
    pFVar40 = pFVar31;
  }
  local_4730 = (undefined1  [8])0x0;
  FStack_4728.Data = (FScriptContainerElement *)0x0;
  local_4720 = 0;
  *(undefined8 *)&pFVar40->field_0x18 = ___xmm_00000000408000000000000000000000;
  *(undefined8 *)&pFVar40->field_0x20 = uVar10;
  pFVar40->field_0x28 = 1;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pFVar40->field_0x30,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_4730);
  if (&pFVar40->field_0x18 == (undefined1 *)0x0) {
    pFVar40 = pFVar15;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_4730,
             (FWriteAccessScope *)&local_4888);
  if (((int)local_4720 != 0) && (FStack_4728.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_4728.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_4728,0,0,0x10);
    local_4720 = local_4720 & 0xffffffff00000000;
  }
  if (local_4888.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_4888.Accessor,&local_4888);
  }
  if (FStack_4728.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_4728.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_4730);
  pFVar16 = (FSizeParam *)FAuto::FAuto((FAuto *)local_45e8);
  TOptional<FSizeParam>::operator=((TOptional<FSizeParam> *)&pFVar40->field_0x58,pFVar16);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>(&local_45b8)
  ;
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)(local_45e8 + 0x10));
  pFVar17 = SButton::FArguments::FArguments(&local_1ad8);
  pIVar18 = FAppStyle::Get();
  pFVar19 = ::FName::FName(&local_43e0,"StatusBar.StatusBarButton");
  pFVar20 = (FButtonStyle *)
            (**(code **)((longlong)*pIVar18 + 0xa0))(pIVar18,FButtonStyle::TypeName,*pFVar19,0,1);
  if (pFVar20 == (FButtonStyle *)0x0) {
    pFVar20 = FButtonStyle::GetDefault();
  }
  pFVar17->_ButtonStyle = pFVar20;
  TAttribute<FText>::BindStatic<>
            ((TAttribute<FText> *)pFVar17,GetSourceControlRestoreAsLatestToolTipText);
  TAttribute<EVisibility>::BindStatic<>
            ((TAttribute<EVisibility> *)&pFVar17->_padding_,
             GetSourceControlRestoreAsLatestVisibility);
  *(undefined1 *)((longlong)&pFVar17->_padding_ + 1) = 1;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar17->_padding_,
             (FWriteAccessScope *)&local_4668);
  local_4650 = &pFVar17->_padding_;
  puVar21 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_4650);
  if (puVar21 != (undefined8 *)0x0) {
    *puVar21 = &___7__TCommonDelegateInstanceState___A6A_NXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar22 = FDelegateHandle::GenerateNewID();
    puVar21[2] = uVar22;
    *puVar21 = &___7__TBaseStaticDelegateInstance___A6A_NXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar21[3] = IsSourceControlRestoreAsLatestEnabled;
  }
  if (local_4668.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_4668.Accessor,&local_4668);
  }
  pFVar23 = SHorizontalBox::FArguments::FArguments(&local_40b0);
  pFVar31 = SHorizontalBox::Slot(&local_37e0);
  pFVar16 = (FSizeParam *)FAuto::FAuto((FAuto *)local_45e8);
  TOptional<FSizeParam>::operator=((TOptional<FSizeParam> *)&pFVar31->field_0x58,pFVar16);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>(&local_45b8)
  ;
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)(local_45e8 + 0x10));
  if (local_4698 != (undefined4 *)&pFVar31->field_0x50) {
    *(undefined4 *)&pFVar31->field_0x50 = 2;
    pFVar31->field_0x54 = 1;
  }
  pFVar39 = pFVar15;
  if (pFVar31 != (FSlotArguments *)0xffffffffffffffb8) {
    pFVar39 = pFVar31;
  }
  puVar1 = &pFVar39->field_0x48;
  if (local_4690 != (undefined4 *)puVar1) {
    *(undefined4 *)puVar1 = 2;
    pFVar39->field_0x4c = 1;
  }
  if (puVar1 != (undefined1 *)0x0) {
    pFVar15 = pFVar39;
  }
  pFVar24 = SImage::FArguments::FArguments(&local_2d10);
  pFVar24 = SImage::FArguments::Image_Static<>(pFVar24,GetSourceControlRestoreAsLatestStatusIcon);
  FLLMScope::FLLMScope(local_4898,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_4890 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope((FMemScope *)&local_4868,&local_4890,true);
  TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>::TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>
            ((TSlateDecl<SImage,RequiredArgs::T0RequiredArgs> *)&local_4668,"SImage",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\SourceControl\\Private\\SSourceControlControls.cpp"
             ,0x89,&local_485f);
  FMemScope::~FMemScope((FMemScope *)&local_4868);
  FLLMScope::~FLLMScope(local_4898);
  pTVar25 = TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>::operator<<=
                      ((TSlateDecl<SImage,RequiredArgs::T0RequiredArgs> *)&local_4668,&local_44b0,
                       pFVar24);
  local_4810 = pTVar25->Object;
  local_4808.ReferenceController = (pTVar25->SharedReferenceCount).ReferenceController;
  if (local_4808.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_4808.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_4808.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    (local_4808.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_4808.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_46d0 = local_4808.ReferenceController;
  if ((SImage **)&pFVar15->field_0x8 != &local_4810) {
    *(SImage **)&pFVar15->field_0x8 = local_4810;
    local_4810 = (SImage *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&pFVar15->field_0x10,&local_4808);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_4808.ReferenceController);
  pFVar23 = SHorizontalBox::FArguments::operator+(pFVar23,pFVar15);
  pFVar15 = SHorizontalBox::Slot(&local_38c8);
  pFVar16 = (FSizeParam *)FAuto::FAuto((FAuto *)local_45e8);
  TOptional<FSizeParam>::operator=((TOptional<FSizeParam> *)&pFVar15->field_0x58,pFVar16);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>(&local_45b8)
  ;
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)(local_45e8 + 0x10));
  if (local_4688 != (undefined4 *)&pFVar15->field_0x50) {
    *(undefined4 *)&pFVar15->field_0x50 = 2;
    pFVar15->field_0x54 = 1;
  }
  uVar10 = _UNK_150a07f48;
  local_4578 = 1;
  local_4588 = ___xmm_00000000000000000000000040a00000;
  uStack_4580 = _UNK_150a07f48;
  pFVar31 = (FSlotArguments *)0x0;
  if (pFVar15 != (FSlotArguments *)0xffffffffffffffb8) {
    pFVar31 = pFVar15;
  }
  local_4570._0_8_ = 0;
  local_4570._8_8_ = 0;
  local_4570._16_8_ = 0;
  *(undefined8 *)&pFVar31->field_0x18 = ___xmm_00000000000000000000000040a00000;
  *(undefined8 *)&pFVar31->field_0x20 = uVar10;
  pFVar31->field_0x28 = 1;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pFVar31->field_0x30,&local_4570);
  if (&pFVar31->field_0x18 == (undefined1 *)0x0) {
    pFVar31 = (FSlotArguments *)0x0;
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>(&local_4570)
  ;
  pFVar26 = STextBlock::FArguments::FArguments(&local_b00);
  pIVar18 = FAppStyle::Get();
  pFVar19 = ::FName::FName(&local_43d8,"NormalText");
  pFVar27 = ISlateStyle::GetWidgetStyle<FTextBlockStyle>
                      (pIVar18,*pFVar19,(char *)0x0,(FTextBlockStyle *)0x0);
  pFVar26->_TextStyle = pFVar27;
  pFVar26 = STextBlock::FArguments::Text_Static<>(pFVar26,GetSourceControlRestoreAsLatestText);
  FLLMScope::FLLMScope(local_4898,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_4890 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope((FMemScope *)&local_4868,&local_4890,true);
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>
            (&local_4428,"STextBlock",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\SourceControl\\Private\\SSourceControlControls.cpp"
             ,0x91,&local_485e);
  FMemScope::~FMemScope((FMemScope *)&local_4868);
  FLLMScope::~FLLMScope(local_4898);
  pTVar28 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_4428,&local_44c0,pFVar26);
  local_4800 = pTVar28->Object;
  local_47f8.ReferenceController = (pTVar28->SharedReferenceCount).ReferenceController;
  if (local_47f8.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_47f8.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_47f8.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    (local_47f8.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_47f8.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_46d8 = local_47f8.ReferenceController;
  if ((STextBlock **)&pFVar31->field_0x8 != &local_4800) {
    *(STextBlock **)&pFVar31->field_0x8 = local_4800;
    local_4800 = (STextBlock *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&pFVar31->field_0x10,&local_47f8);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_47f8.ReferenceController);
  pFVar23 = SHorizontalBox::FArguments::operator+(pFVar23,pFVar31);
  FLLMScope::FLLMScope(local_4898,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_4890 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope((FMemScope *)&local_4868,&local_4890,true);
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>
            (&local_4440,"SHorizontalBox",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\SourceControl\\Private\\SSourceControlControls.cpp"
             ,0x83,&local_485d);
  FMemScope::~FMemScope((FMemScope *)&local_4868);
  FLLMScope::~FLLMScope(local_4898);
  pTVar29 = TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_4440,&local_44d0,pFVar23);
  pTVar2 = (pTVar29->SharedReferenceCount).ReferenceController;
  local_47d0 = pTVar29->Object;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar3 = (pFVar17->_Content).Widget.SharedReferenceCount.ReferenceController;
  (pFVar17->_Content).Widget.Object = (SWidget *)local_47d0;
  (pFVar17->_Content).Widget.SharedReferenceCount.ReferenceController = pTVar2;
  pTStack_47c8 = pTVar2;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  pFVar17 = SButton::FArguments::OnClicked_Static<FReply_(__cdecl*)(void)>
                      (pFVar17,OnSourceControlRestoreAsLatestClicked);
  FLLMScope::FLLMScope(local_4898,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_4890 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope((FMemScope *)&local_4868,&local_4890,true);
  TSlateDecl<SButton,RequiredArgs::T0RequiredArgs>::TSlateDecl<SButton,RequiredArgs::T0RequiredArgs>
            (&local_4458,"SButton",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\SourceControl\\Private\\SSourceControlControls.cpp"
             ,0x7d,&local_485c);
  FMemScope::~FMemScope((FMemScope *)&local_4868);
  FLLMScope::~FLLMScope(local_4898);
  pTVar30 = TSlateDecl<SButton,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_4458,&local_44e0,pFVar17);
  pTVar3 = (pTVar30->SharedReferenceCount).ReferenceController;
  local_47f0 = pTVar30->Object;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_47e8.ReferenceController = pTVar3;
  if ((SButton **)&pFVar40->field_0x8 != &local_47f0) {
    *(SButton **)&pFVar40->field_0x8 = local_47f0;
    local_47f0 = (SButton *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&pFVar40->field_0x10,&local_47e8);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_47e8.ReferenceController);
  pFVar14 = SHorizontalBox::FArguments::operator+(pFVar14,pFVar40);
  pFVar15 = SHorizontalBox::Slot(&local_39b0);
  if (local_45f0 != (undefined4 *)&pFVar15->field_0x50) {
    *(undefined4 *)&pFVar15->field_0x50 = 2;
    pFVar15->field_0x54 = 1;
  }
  pFVar31 = (FSlotArguments *)0x0;
  if (pFVar15 != (FSlotArguments *)0xffffffffffffffb8) {
    pFVar31 = pFVar15;
  }
  pFVar15 = SHorizontalBox::FSlot::FSlotArguments::AutoWidth(pFVar31);
  pFVar32 = SComboButton::FArguments::FArguments(&local_2350);
  uVar10 = _UNK_1513f6c28;
  local_4548 = 1;
  local_4540._16_8_ = 0;
  local_4558 = ___xmm_0000000040e000000000000040e00000;
  uStack_4550 = _UNK_1513f6c28;
  local_4540._0_8_ = 0;
  local_4540._8_8_ = 0;
  uVar11 = _UNK_1513f6c24;
  (pFVar32->_ContentPadding).Value.Left = (float)___xmm_0000000040e000000000000040e00000;
  uVar13 = _UNK_1513f6c28;
  (pFVar32->_ContentPadding).Value.Top = (float)uVar11;
  _UNK_1513f6c28 = (undefined4)uVar10;
  _UNK_1513f6c2c = SUB84(uVar10,4);
  uVar11 = _UNK_1513f6c2c;
  (pFVar32->_ContentPadding).Value.Right = (float)_UNK_1513f6c28;
  _UNK_1513f6c28 = uVar13;
  (pFVar32->_ContentPadding).Value.Bottom = (float)uVar11;
  (pFVar32->_ContentPadding).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar32->_ContentPadding).Getter,
             &local_4540);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>(&local_4540)
  ;
  pIVar18 = FAppStyle::Get();
  pFVar19 = ::FName::FName(&local_43d0,"StatusBar.StatusBarEllipsisComboButton");
  pFVar33 = ISlateStyle::GetWidgetStyle<FComboButtonStyle>
                      (pIVar18,*pFVar19,(char *)0x0,(FComboButtonStyle *)0x0);
  pFVar32->_ComboButtonStyle = pFVar33;
  local_4714 = 1;
  local_4718 = 6;
  local_4710._0_8_ = 0;
  local_4710._8_8_ = 0;
  local_4710._16_8_ = 0;
  (pFVar32->_MenuPlacement).Value = MenuPlacement_AboveAnchor;
  (pFVar32->_MenuPlacement).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar32->_MenuPlacement).Getter,
             &local_4710);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>(&local_4710)
  ;
  TAttribute<EVisibility>::BindStatic<>
            ((TAttribute<EVisibility> *)&pFVar32->_padding_,GetSourceControlCheckInStatusVisibility)
  ;
  pFVar12 = local_res10;
  if (&local_res10->_OnGenerateKebabMenu != &pFVar32->_OnGetMenuContent) {
    local_4888._0_8_ = (atomic<unsigned___int64>)0x0;
    local_4888.Accessor = (FMRSWRecursiveAccessDetector *)0x0;
    local_4888._16_4_ = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &local_res10->_OnGenerateKebabMenu,(FReadAccessScope *)&local_45a0);
    if ((*(int *)&(pFVar12->_OnGenerateKebabMenu).field_0x10 != 0) &&
       (plVar4 = *(longlong **)&(pFVar12->_OnGenerateKebabMenu).field_0x8, plVar4 != (longlong *)0x0
       )) {
      (**(code **)(*plVar4 + 0x50))(plVar4,&local_4888);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_45a0);
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pFVar32->_OnGetMenuContent,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)&local_4888);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&local_4888,
               (FWriteAccessScope *)&local_47d0);
    if ((local_4888._16_4_ != 0) &&
       ((TReferenceControllerBase<1> *)local_4888.Accessor != (TReferenceControllerBase<1> *)0x0)) {
      (**(code **)(local_4888.Accessor)->State)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_4888.Accessor,0,0,0x10);
      local_4888._16_4_ = 0;
    }
    if (local_47c0 == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                ((FMRSWRecursiveAccessDetector *)pTStack_47c8,(FDestructionSentinel *)&local_47d0);
    }
    if ((TReferenceControllerBase<1> *)local_4888.Accessor != (TReferenceControllerBase<1> *)0x0) {
      FMemory::Free(local_4888.Accessor);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)&local_4888);
  }
  FLLMScope::FLLMScope
            ((FLLMScope *)&local_res10,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true
            );
  local_4890 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope((FMemScope *)&local_4868,&local_4890,true);
  TSlateDecl<SComboButton,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SComboButton,RequiredArgs::T0RequiredArgs>
            (&local_45a0,"SComboButton",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\SourceControl\\Private\\SSourceControlControls.cpp"
             ,0x9c,&local_485b);
  FMemScope::~FMemScope((FMemScope *)&local_4868);
  FLLMScope::~FLLMScope((FLLMScope *)&local_res10);
  pTVar34 = TSlateDecl<SComboButton,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_45a0,&local_44f0,pFVar32);
  local_4888._0_8_ = pTVar34->Object;
  local_4888.Accessor =
       (FMRSWRecursiveAccessDetector *)(pTVar34->SharedReferenceCount).ReferenceController;
  if ((TReferenceControllerBase<1> *)local_4888.Accessor != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    ((TReferenceControllerBase<1> *)local_4888.Accessor)->SharedReferenceCount =
         (atomic<int>)
         ((int)((TReferenceControllerBase<1> *)local_4888.Accessor)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_47d0 = (SHorizontalBox *)local_4888.Accessor;
  pFVar15 = TSlotBase<SHorizontalBox::FSlot>::FSlotArguments::operator[]
                      ((FSlotArguments *)pFVar15,(TSharedRef<SWidget,1> *)&local_4888);
  pFVar14 = SHorizontalBox::FArguments::operator+(pFVar14,pFVar15);
  pFVar15 = SHorizontalBox::Slot(&local_3a98);
  if (local_4680 != (undefined4 *)&pFVar15->field_0x50) {
    *(undefined4 *)&pFVar15->field_0x50 = 2;
    pFVar15->field_0x54 = 1;
  }
  pFVar40 = (FSlotArguments *)0x0;
  pFVar31 = pFVar40;
  if (pFVar15 != (FSlotArguments *)0xffffffffffffffb8) {
    pFVar31 = pFVar15;
  }
  pFVar15 = SHorizontalBox::FSlot::FSlotArguments::AutoWidth(pFVar31);
  pFVar35 = SSeparator::FArguments::FArguments(&local_27c0);
  local_4888.Accessor =
       (FMRSWRecursiveAccessDetector *)((ulonglong)local_4888.Accessor & 0xffffffff00000000);
  local_4888._0_8_ = GetSourceControlMiddleSeparatorVisibility;
  pFVar35 = TSlateBaseNamedArgs<SSeparator>::Visibility<SSourceControlControls>
                      ((TSlateBaseNamedArgs<SSeparator> *)pFVar35,this,(pmf_929c1ac0 *)&local_4888);
  pFVar35->_Thickness = 1.0;
  pFVar35->_Orientation = Orient_Vertical;
  pTVar36 = MakeTDecl<SSeparator,RequiredArgs::T0RequiredArgs>
                      (&local_42e8,"SSeparator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\SourceControl\\Private\\SSourceControlControls.cpp"
                       ,0xa7,&local_4854);
  pTVar37 = TSlateDecl<SSeparator,RequiredArgs::T0RequiredArgs>::operator<<=
                      (pTVar36,&local_4408,pFVar35);
  local_4888._0_8_ = pTVar37->Object;
  local_4888.Accessor =
       (FMRSWRecursiveAccessDetector *)(pTVar37->SharedReferenceCount).ReferenceController;
  if ((TReferenceControllerBase<1> *)local_4888.Accessor != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    ((TReferenceControllerBase<1> *)local_4888.Accessor)->SharedReferenceCount =
         (atomic<int>)
         ((int)((TReferenceControllerBase<1> *)local_4888.Accessor)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_46e8 = (TReferenceControllerBase<1> *)local_4888.Accessor;
  pFVar15 = TSlotBase<SHorizontalBox::FSlot>::FSlotArguments::operator[]
                      ((FSlotArguments *)pFVar15,(TSharedRef<SWidget,1> *)&local_4888);
  local_4868 = (FName)SHorizontalBox::FArguments::operator+(pFVar14,pFVar15);
  pFVar15 = SHorizontalBox::Slot(&local_30a0);
  if (local_4678 != (undefined4 *)&pFVar15->field_0x50) {
    *(undefined4 *)&pFVar15->field_0x50 = 2;
    pFVar15->field_0x54 = 1;
  }
  pFVar31 = pFVar40;
  if (pFVar15 != (FSlotArguments *)0xffffffffffffffb8) {
    pFVar31 = pFVar15;
  }
  local_4890 = (FName)SHorizontalBox::FSlot::FSlotArguments::AutoWidth(pFVar31);
  pFVar17 = SButton::FArguments::FArguments(&local_2018);
  pIVar18 = FAppStyle::Get();
  pFVar19 = ::FName::FName(&local_44f8,"StatusBar.StatusBarButton");
  pFVar20 = ISlateStyle::GetWidgetStyle<FButtonStyle>
                      (pIVar18,*pFVar19,(char *)0x0,(FButtonStyle *)0x0);
  pFVar17->_ButtonStyle = pFVar20;
  pFVar17 = TSlateBaseNamedArgs<SButton>::ToolTipText_Static<>
                      ((TSlateBaseNamedArgs<SButton> *)pFVar17,GetSourceControlSyncStatusToolTipText
                      );
  pFVar17 = TSlateBaseNamedArgs<SButton>::Visibility_Static<>
                      ((TSlateBaseNamedArgs<SButton> *)pFVar17,GetSourceControlSyncStatusVisibility)
  ;
  pFVar17 = TSlateBaseNamedArgs<SButton>::IsEnabled_Static<>
                      ((TSlateBaseNamedArgs<SButton> *)pFVar17,IsSourceControlSyncEnabled);
  pFVar14 = SHorizontalBox::FArguments::FArguments(&local_42b8);
  pFVar15 = SHorizontalBox::Slot(&local_3188);
  pFVar15 = SHorizontalBox::FSlot::FSlotArguments::AutoWidth(pFVar15);
  if (local_4670 != (undefined4 *)&pFVar15->field_0x50) {
    *(undefined4 *)&pFVar15->field_0x50 = 2;
    pFVar15->field_0x54 = 1;
  }
  pFVar31 = pFVar40;
  if (pFVar15 != (FSlotArguments *)0xffffffffffffffb8) {
    pFVar31 = pFVar15;
  }
  puVar1 = &pFVar31->field_0x48;
  if (local_4628 != (undefined4 *)puVar1) {
    *(undefined4 *)puVar1 = 2;
    pFVar31->field_0x4c = 1;
  }
  if (puVar1 != (undefined1 *)0x0) {
    pFVar40 = pFVar31;
  }
  pFVar24 = SImage::FArguments::FArguments(&local_2fb8);
  pFVar24 = SImage::FArguments::Image_Static<>(pFVar24,GetSourceControlSyncStatusIcon);
  this_00 = MakeTDecl<SImage,RequiredArgs::T0RequiredArgs>
                      (&local_4300,"SImage",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\SourceControl\\Private\\SSourceControlControls.cpp"
                       ,0xbc,&local_485a);
  pTVar25 = TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>::operator<<=
                      (this_00,&local_4370,pFVar24);
  pTVar5 = (pTVar25->SharedReferenceCount).ReferenceController;
  local_4888._0_8_ = pTVar25->Object;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_4888.Accessor = (FMRSWRecursiveAccessDetector *)pTVar5;
  pFVar15 = TSlotBase<SHorizontalBox::FSlot>::FSlotArguments::operator[]
                      ((FSlotArguments *)pFVar40,(TSharedRef<SWidget,1> *)&local_4888);
  local_res10 = (FArguments *)SHorizontalBox::FArguments::operator+(pFVar14,pFVar15);
  pFVar15 = SHorizontalBox::Slot(&local_3270);
  pFVar15 = SHorizontalBox::FSlot::FSlotArguments::AutoWidth(pFVar15);
  if (local_4600 != (undefined4 *)&pFVar15->field_0x50) {
    *(undefined4 *)&pFVar15->field_0x50 = 2;
    pFVar15->field_0x54 = 1;
  }
  uVar10 = _UNK_150a07f48;
  local_4518 = 1;
  local_4528 = ___xmm_00000000000000000000000040a00000;
  uStack_4520 = _UNK_150a07f48;
  pFVar31 = (FSlotArguments *)0x0;
  if (pFVar15 != (FSlotArguments *)0xffffffffffffffb8) {
    pFVar31 = pFVar15;
  }
  local_4510._0_8_ = 0;
  local_4510._8_8_ = 0;
  local_4510._16_8_ = 0;
  *(undefined8 *)&pFVar31->field_0x18 = ___xmm_00000000000000000000000040a00000;
  *(undefined8 *)&pFVar31->field_0x20 = uVar10;
  pFVar31->field_0x28 = 1;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pFVar31->field_0x30,&local_4510);
  if (&pFVar31->field_0x18 == (undefined1 *)0x0) {
    pFVar31 = (FSlotArguments *)0x0;
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>(&local_4510)
  ;
  pFVar26 = STextBlock::FArguments::FArguments(&local_1058);
  pIVar18 = FAppStyle::Get();
  pFVar19 = ::FName::FName(&local_43c8,"NormalText");
  pFVar27 = ISlateStyle::GetWidgetStyle<FTextBlockStyle>
                      (pIVar18,*pFVar19,(char *)0x0,(FTextBlockStyle *)0x0);
  pFVar26->_TextStyle = pFVar27;
  pFVar26 = STextBlock::FArguments::Text_Static<>(pFVar26,GetSourceControlSyncStatusText);
  this_01 = MakeTDecl<STextBlock,RequiredArgs::T0RequiredArgs>
                      (&local_4318,"STextBlock",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\SourceControl\\Private\\SSourceControlControls.cpp"
                       ,0xc4,&local_4859);
  pTVar28 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                      (this_01,&local_4380,pFVar26);
  local_4888._0_8_ = pTVar28->Object;
  local_4888.Accessor =
       (FMRSWRecursiveAccessDetector *)(pTVar28->SharedReferenceCount).ReferenceController;
  if ((TReferenceControllerBase<1> *)local_4888.Accessor != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    ((TReferenceControllerBase<1> *)local_4888.Accessor)->SharedReferenceCount =
         (atomic<int>)
         ((int)((TReferenceControllerBase<1> *)local_4888.Accessor)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_46f0 = (TReferenceControllerBase<1> *)local_4888.Accessor;
  pFVar15 = TSlotBase<SHorizontalBox::FSlot>::FSlotArguments::operator[]
                      ((FSlotArguments *)pFVar31,(TSharedRef<SWidget,1> *)&local_4888);
  pFVar14 = SHorizontalBox::FArguments::operator+((FArguments *)local_res10,pFVar15);
  pTVar38 = MakeTDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>
                      (&local_4330,"SHorizontalBox",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\SourceControl\\Private\\SSourceControlControls.cpp"
                       ,0xb6,&local_4858);
  pTVar29 = TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (pTVar38,&local_4390,pFVar14);
  pTVar6 = (pTVar29->SharedReferenceCount).ReferenceController;
  local_4888._0_8_ = pTVar29->Object;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar7 = (pFVar17->_Content).Widget.SharedReferenceCount.ReferenceController;
  (pFVar17->_Content).Widget.Object = (SWidget *)local_4888._0_8_;
  (pFVar17->_Content).Widget.SharedReferenceCount.ReferenceController = pTVar6;
  local_4888.Accessor = (FMRSWRecursiveAccessDetector *)pTVar6;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  pFVar17 = SButton::FArguments::OnClicked_Static<FReply_(__cdecl*)(void)>
                      (pFVar17,OnSourceControlSyncClicked);
  this_02 = MakeTDecl<SButton,RequiredArgs::T0RequiredArgs>
                      (&local_4348,"SButton",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\SourceControl\\Private\\SSourceControlControls.cpp"
                       ,0xb0,&local_4857);
  pTVar30 = TSlateDecl<SButton,RequiredArgs::T0RequiredArgs>::operator<<=
                      (this_02,&local_43a0,pFVar17);
  pTVar7 = (pTVar30->SharedReferenceCount).ReferenceController;
  local_4888._0_8_ = pTVar30->Object;
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_4888.Accessor = (FMRSWRecursiveAccessDetector *)pTVar7;
  pFVar15 = TSlotBase<SHorizontalBox::FSlot>::FSlotArguments::operator[]
                      ((FSlotArguments *)local_4890,(TSharedRef<SWidget,1> *)&local_4888);
  local_4890 = (FName)SHorizontalBox::FArguments::operator+((FArguments *)local_4868,pFVar15);
  pFVar15 = SHorizontalBox::Slot(&local_3358);
  if (local_45f8 != (undefined4 *)&pFVar15->field_0x50) {
    *(undefined4 *)&pFVar15->field_0x50 = 2;
    pFVar15->field_0x54 = 1;
  }
  pFVar31 = (FSlotArguments *)0x0;
  if (pFVar15 != (FSlotArguments *)0xffffffffffffffb8) {
    pFVar31 = pFVar15;
  }
  local_res10 = (FArguments *)SHorizontalBox::FSlot::FSlotArguments::AutoWidth(pFVar31);
  pFVar35 = SSeparator::FArguments::FArguments(&local_2588);
  local_4888.Accessor =
       (FMRSWRecursiveAccessDetector *)((ulonglong)local_4888.Accessor & 0xffffffff00000000);
  local_4888._0_8_ = GetSourceControlRightSeparatorVisibility;
  pFVar35 = TSlateBaseNamedArgs<SSeparator>::Visibility<SSourceControlControls>
                      ((TSlateBaseNamedArgs<SSeparator> *)pFVar35,this,(pmf_929c1ac0 *)&local_4888);
  pFVar35->_Thickness = 1.0;
  pFVar35->_Orientation = Orient_Vertical;
  pTVar36 = MakeTDecl<SSeparator,RequiredArgs::T0RequiredArgs>
                      (&local_4360,"SSeparator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\SourceControl\\Private\\SSourceControlControls.cpp"
                       ,0xcf,&local_4856);
  pTVar37 = TSlateDecl<SSeparator,RequiredArgs::T0RequiredArgs>::operator<<=
                      (pTVar36,&local_43b0,pFVar35);
  pTVar8 = (pTVar37->SharedReferenceCount).ReferenceController;
  local_4888._0_8_ = pTVar37->Object;
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_4888.Accessor = (FMRSWRecursiveAccessDetector *)pTVar8;
  pFVar15 = TSlotBase<SHorizontalBox::FSlot>::FSlotArguments::operator[]
                      ((FSlotArguments *)local_res10,(TSharedRef<SWidget,1> *)&local_4888);
  pFVar14 = SHorizontalBox::FArguments::operator+((FArguments *)local_4890,pFVar15);
  pTVar38 = MakeTDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>
                      (&local_42d0,"SHorizontalBox",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\SourceControl\\Private\\SSourceControlControls.cpp"
                       ,0x57,&local_4855);
  pTVar29 = TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (pTVar38,&local_43c0,pFVar14);
  pTVar9 = (pTVar29->SharedReferenceCount).ReferenceController;
  local_4888._0_8_ = pTVar29->Object;
  if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_4888.Accessor = (FMRSWRecursiveAccessDetector *)pTVar9;
  TSingleWidgetChildrenWithSlot<TSingleWidgetChildrenWithBasicLayoutSlot<0>_>::operator[]
            ((TSingleWidgetChildrenWithSlot<TSingleWidgetChildrenWithBasicLayoutSlot<0>_> *)
             &this->_padding_,(TSharedRef<SWidget,1> *)&local_4888);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_43c0.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_42d0._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_43b0.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_4360._Widget.SharedReferenceCount.ReferenceController);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_2588._ColorAndOpacity.Getter);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_2588);
  SBoxPanel::TSlot<SHorizontalBox::FSlot>::FSlotArguments::~FSlotArguments
            ((FSlotArguments *)&local_3358);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_43a0.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_4348._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_4390.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_4330._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_46f0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_4380.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_4318._Widget.SharedReferenceCount.ReferenceController);
  STextBlock::FArguments::~FArguments(&local_1058);
  SBoxPanel::TSlot<SHorizontalBox::FSlot>::FSlotArguments::~FSlotArguments
            ((FSlotArguments *)&local_3270);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_4370.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_4300._Widget.SharedReferenceCount.ReferenceController);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_2fb8._OnMouseButtonDown);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_2fb8._DesiredSizeOverride.Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_2fb8._ColorAndOpacity.Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_2fb8._Image.Getter);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_2fb8);
  SBoxPanel::TSlot<SHorizontalBox::FSlot>::FSlotArguments::~FSlotArguments
            ((FSlotArguments *)&local_3188);
  DestructItems<SHorizontalBox::FSlot::FSlotArguments,int>
            ((FSlotArguments *)local_42b8._Slots.AllocatorInstance.Data,local_42b8._Slots.ArrayNum);
  if ((FSlotArguments *)local_42b8._Slots.AllocatorInstance.Data != (FSlotArguments *)0x0) {
    FMemory::Free(local_42b8._Slots.AllocatorInstance.Data);
  }
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_42b8);
  SButton::FArguments::~FArguments(&local_2018);
  SBoxPanel::TSlot<SHorizontalBox::FSlot>::FSlotArguments::~FSlotArguments
            ((FSlotArguments *)&local_30a0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_46e8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_4408.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_42e8._Widget.SharedReferenceCount.ReferenceController);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_27c0._ColorAndOpacity.Getter);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_27c0);
  SBoxPanel::TSlot<SHorizontalBox::FSlot>::FSlotArguments::~FSlotArguments
            ((FSlotArguments *)&local_3a98);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_47d0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_44f0.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_45a0._Widget.SharedReferenceCount.ReferenceController);
  SComboButton::FArguments::~FArguments(&local_2350);
  SBoxPanel::TSlot<SHorizontalBox::FSlot>::FSlotArguments::~FSlotArguments
            ((FSlotArguments *)&local_39b0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_44e0.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_4458._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_44d0.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_4440._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_46d8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_44c0.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_4428._Widget.SharedReferenceCount.ReferenceController);
  STextBlock::FArguments::~FArguments(&local_b00);
  SBoxPanel::TSlot<SHorizontalBox::FSlot>::FSlotArguments::~FSlotArguments
            ((FSlotArguments *)&local_38c8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_46d0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_44b0.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_4668.Accessor);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_2d10._OnMouseButtonDown);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_2d10._DesiredSizeOverride.Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_2d10._ColorAndOpacity.Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_2d10._Image.Getter);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_2d10);
  SBoxPanel::TSlot<SHorizontalBox::FSlot>::FSlotArguments::~FSlotArguments
            ((FSlotArguments *)&local_37e0);
  DestructItems<SHorizontalBox::FSlot::FSlotArguments,int>
            ((FSlotArguments *)local_40b0._Slots.AllocatorInstance.Data,local_40b0._Slots.ArrayNum);
  if ((FSlotArguments *)local_40b0._Slots.AllocatorInstance.Data != (FSlotArguments *)0x0) {
    FMemory::Free(local_40b0._Slots.AllocatorInstance.Data);
  }
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_40b0);
  SButton::FArguments::~FArguments(&local_1ad8);
  SBoxPanel::TSlot<SHorizontalBox::FSlot>::FSlotArguments::~FSlotArguments
            ((FSlotArguments *)&local_36f8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_47b8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_44a0.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_4620.Accessor);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_46c0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_4490.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_43f8._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_46b8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_4480.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_4648.Accessor);
  STextBlock::FArguments::~FArguments(&local_5a8);
  SBoxPanel::TSlot<SHorizontalBox::FSlot>::FSlotArguments::~FSlotArguments
            ((FSlotArguments *)&local_3610);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_46b0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_4470.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_4850.Accessor);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_2a68._OnMouseButtonDown);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_2a68._DesiredSizeOverride.Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_2a68._ColorAndOpacity.Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_2a68._Image.Getter);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_2a68);
  SBoxPanel::TSlot<SHorizontalBox::FSlot>::FSlotArguments::~FSlotArguments
            ((FSlotArguments *)&local_3528);
  DestructItems<SHorizontalBox::FSlot::FSlotArguments,int>
            ((FSlotArguments *)local_3ea8._Slots.AllocatorInstance.Data,local_3ea8._Slots.ArrayNum);
  if ((FSlotArguments *)local_3ea8._Slots.AllocatorInstance.Data != (FSlotArguments *)0x0) {
    FMemory::Free(local_3ea8._Slots.AllocatorInstance.Data);
  }
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_3ea8);
  SButton::FArguments::~FArguments(&local_1598);
  SBoxPanel::TSlot<SHorizontalBox::FSlot>::FSlotArguments::~FSlotArguments
            ((FSlotArguments *)&local_3440);
  DestructItems<SHorizontalBox::FSlot::FSlotArguments,int>
            ((FSlotArguments *)local_3ca0._Slots.AllocatorInstance.Data,local_3ca0._Slots.ArrayNum);
  if ((FSlotArguments *)local_3ca0._Slots.AllocatorInstance.Data != (FSlotArguments *)0x0) {
    FMemory::Free(local_3ca0._Slots.AllocatorInstance.Data);
  }
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_3ca0);
  return;
}

// GetNumConflictsRemaining @ 146b18a60

int __cdecl SSourceControlControls::GetNumConflictsRemaining(void)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  longlong *plVar4;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&NumConflictsRemaining,
             &local_28);
  if ((NumConflictsRemaining._16_4_ != 0) && (NumConflictsRemaining._8_8_ != 0)) {
    cVar2 = (**(code **)(*(longlong *)NumConflictsRemaining._8_8_ + 0x38))();
    if (cVar2 != '\0') {
      bVar1 = true;
      goto LAB_146b18a9c;
    }
  }
  bVar1 = false;
LAB_146b18a9c:
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  if (bVar1) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&NumConflictsRemaining,
               &local_28);
    plVar4 = (longlong *)0x0;
    if (NumConflictsRemaining._16_4_ != 0) {
      plVar4 = (longlong *)NumConflictsRemaining._8_8_;
    }
    iVar3 = (**(code **)(*plVar4 + 0x60))();
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_28);
    return iVar3;
  }
  return 0;
}

// GetNumConflictsUpcoming @ 146b18b00

int __cdecl SSourceControlControls::GetNumConflictsUpcoming(void)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  longlong *plVar4;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&NumConflictsUpcoming,
             &local_28);
  if ((NumConflictsUpcoming._16_4_ != 0) && (NumConflictsUpcoming._8_8_ != 0)) {
    cVar2 = (**(code **)(*(longlong *)NumConflictsUpcoming._8_8_ + 0x38))();
    if (cVar2 != '\0') {
      bVar1 = true;
      goto LAB_146b18b3c;
    }
  }
  bVar1 = false;
LAB_146b18b3c:
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  if (bVar1) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&NumConflictsUpcoming,
               &local_28);
    plVar4 = (longlong *)0x0;
    if (NumConflictsUpcoming._16_4_ != 0) {
      plVar4 = (longlong *)NumConflictsUpcoming._8_8_;
    }
    iVar3 = (**(code **)(*plVar4 + 0x60))();
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_28);
    return iVar3;
  }
  return 0;
}

// GetNumLocalChanges @ 146b18bb0

int __cdecl SSourceControlControls::GetNumLocalChanges(void)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  ISourceControlModule *pIVar5;
  longlong *plVar6;
  longlong lVar7;
  int *piVar8;
  undefined1 local_res8 [8];
  undefined1 local_res10 [24];
  
  pIVar5 = ISourceControlModule::Get();
  cVar2 = (**(code **)((longlong)*pIVar5 + 0x70))(pIVar5);
  if (cVar2 != '\0') {
    plVar6 = (longlong *)(**(code **)((longlong)*pIVar5 + 0x78))(pIVar5);
    cVar2 = (**(code **)(*plVar6 + 0x40))(plVar6);
    if (cVar2 != '\0') {
      plVar6 = (longlong *)(**(code **)((longlong)*pIVar5 + 0x78))(pIVar5);
      lVar7 = (**(code **)(*plVar6 + 0x178))(plVar6,local_res8);
      if (*(char *)(lVar7 + 4) != '\0') {
        plVar6 = (longlong *)(**(code **)((longlong)*pIVar5 + 0x78))(pIVar5);
        piVar8 = (int *)(**(code **)(*plVar6 + 0x178))(plVar6,local_res10);
        if ((char)piVar8[1] == '\0') {
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0x1bd,
                             L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                            );
          if (bVar3) {
            pcVar1 = (code *)swi(3);
            iVar4 = (*pcVar1)();
            return iVar4;
          }
        }
        return *piVar8;
      }
    }
  }
  return 0;
}

// GetSourceControlCheckInStatusIcon @ 146b19970

FSlateBrush * __cdecl SSourceControlControls::GetSourceControlCheckInStatusIcon(void)

{
  code *pcVar1;
  int iVar2;
  ISlateStyle *pIVar3;
  FName *pFVar4;
  FSlateBrush *pFVar5;
  int *piVar6;
  FName local_res8;
  
  piVar6 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar6 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      pIVar3 = FRevisionControlStyleManager::Get();
      pcVar1 = *(code **)((longlong)*pIVar3 + 0x50);
      pFVar4 = ::FName::FName(&local_res8,"RevisionControl.StatusBar.Conflict");
      ConflictBrush = (FSlateBrush *)(*pcVar1)(pIVar3,*pFVar4,0,0);
      _Init_thread_footer(&::_TSS0);
    }
  }
  if (*piVar6 < ::_TSS1) {
    _Init_thread_header(&::_TSS1);
    if (::_TSS1 == -1) {
      pIVar3 = FRevisionControlStyleManager::Get();
      pcVar1 = *(code **)((longlong)*pIVar3 + 0x50);
      pFVar4 = ::FName::FName(&local_res8,"RevisionControl.StatusBar.ConflictUpcoming");
      ConflictUpcomingBrush = (FSlateBrush *)(*pcVar1)(pIVar3,*pFVar4,0,0);
      _Init_thread_footer(&::_TSS1);
    }
  }
  if (*piVar6 < ::_TSS2) {
    _Init_thread_header(&::_TSS2);
    if (::_TSS2 == -1) {
      pIVar3 = FRevisionControlStyleManager::Get();
      pcVar1 = *(code **)((longlong)*pIVar3 + 0x50);
      pFVar4 = ::FName::FName(&local_res8,"RevisionControl.StatusBar.NoLocalChanges");
      NoLocalChangesBrush = (FSlateBrush *)(*pcVar1)(pIVar3,*pFVar4,0,0);
      _Init_thread_footer(&::_TSS2);
    }
  }
  if (*piVar6 < ::_TSS3) {
    _Init_thread_header(&::_TSS3);
    if (::_TSS3 == -1) {
      pIVar3 = FRevisionControlStyleManager::Get();
      pcVar1 = *(code **)((longlong)*pIVar3 + 0x50);
      pFVar4 = ::FName::FName(&local_res8,"RevisionControl.StatusBar.HasLocalChanges");
      HasLocalChangesBrush = (FSlateBrush *)(*pcVar1)(pIVar3,*pFVar4,0,0);
      _Init_thread_footer(&::_TSS3);
    }
  }
  iVar2 = GetNumConflictsRemaining();
  if (0 < iVar2) {
    return ConflictBrush;
  }
  iVar2 = GetNumConflictsUpcoming();
  if (0 < iVar2) {
    return ConflictUpcomingBrush;
  }
  iVar2 = GetNumLocalChanges();
  pFVar5 = NoLocalChangesBrush;
  if (0 < iVar2) {
    pFVar5 = HasLocalChangesBrush;
  }
  return pFVar5;
}

// GetSourceControlCheckInStatusText @ 146b19bb0

FText * __cdecl
SSourceControlControls::GetSourceControlCheckInStatusText(FText *__return_storage_ptr__)

{
  int iVar1;
  
  iVar1 = GetNumLocalChanges();
  if (0 < iVar1) {
    FText::AsLocalizable_Advanced_LocText
              (__return_storage_ptr__,L"SSkeinSourceControlWidgets",L"CheckInButtonChangesText",
               L"Check-in Changes");
    return __return_storage_ptr__;
  }
  FText::AsLocalizable_Advanced_LocText
            (__return_storage_ptr__,L"SSkeinSourceControlWidgets",L"CheckInButtonNoChangesText",
             L"No Changes");
  return __return_storage_ptr__;
}

// GetSourceControlCheckInStatusToolTipText @ 146b19c10

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

FText * __cdecl
SSourceControlControls::GetSourceControlCheckInStatusToolTipText(FText *__return_storage_ptr__)

{
  int iVar1;
  FText *pFVar2;
  FTextFormat *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  TArray<FFormatArgumentValue,TSizedDefaultAllocator<32>_> local_68;
  FTextFormat local_58;
  FText local_48;
  FTextFormat local_38;
  FFormatArgumentValue local_28;
  
  iVar1 = GetNumConflictsRemaining();
  if (iVar1 < 1) {
    iVar1 = GetNumConflictsUpcoming();
    if (iVar1 < 1) {
      iVar1 = GetNumLocalChanges();
      if (0 < iVar1) {
        iVar1 = GetNumLocalChanges();
        pFVar2 = FText::AsLocalizable_Advanced_LocText
                           (&local_48,L"SSkeinSourceControlWidgets",
                            L"CheckInButtonChangesTooltipText",
                            L"Check-in {0} change(s) to this project");
        pFVar3 = FTextFormat::FTextFormat(&local_38,pFVar2,Default);
        local_68.ArrayNum = 1;
        local_28.Type = Int;
        local_28.TextValue.field0_0x0.TypedValue.TextData.Reference =
             (TRefCountPtr<ITextData>)(ITextData *)0x0;
        local_28.TextValue.field0_0x0.TypedValue.Flags = 0;
        local_68.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_28.field1_0x8 = (FFormatArgumentValue_u_8)(longlong)iVar1;
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x20,8,1,0,&local_68.AllocatorInstance,1,&local_68.ArrayMax);
        ConstructItems<FFormatArgumentValue,FFormatArgumentValue,int>
                  (local_68.AllocatorInstance.Data,&local_28,1);
        local_58.TextFormatData.Object = (pFVar3->TextFormatData).Object;
        local_58.TextFormatData.SharedReferenceCount.ReferenceController =
             (pFVar3->TextFormatData).SharedReferenceCount.ReferenceController;
        if (local_58.TextFormatData.SharedReferenceCount.ReferenceController !=
            (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (local_58.TextFormatData.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_58.TextFormatData.SharedReferenceCount.ReferenceController)->
                     SharedReferenceCount + 1);
          UNLOCK();
        }
        FText::Format(__return_storage_ptr__,&local_58,&local_68);
        DestructItems<FFormatArgumentValue,int>
                  ((FFormatArgumentValue *)local_68.AllocatorInstance.Data,local_68.ArrayNum);
        if ((FFormatArgumentValue *)local_68.AllocatorInstance.Data != (FFormatArgumentValue *)0x0)
        {
          FMemory::Free(local_68.AllocatorInstance.Data);
        }
        if (local_28.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)
                       *(ITextData *)local_28.TextValue.field0_0x0.TypedValue.TextData.Reference +
                      0x10))();
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((pFVar3->TextFormatData).SharedReferenceCount.ReferenceController);
        if (local_48.TextData.Reference == (ITextData *)0x0) {
          return __return_storage_ptr__;
        }
        (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
        return __return_storage_ptr__;
      }
      pwVar5 = L"No Changes to check in for this project";
      pwVar4 = L"CheckInButtonNoChangesTooltipText";
    }
    else {
      pwVar5 = 
      L"Some of your local changes conflict with later snapshots on the project. Sync Latest or Check-in Changes to review and address these issues."
      ;
      pwVar4 = L"CheckInButtonChangesTooltipTextConflictUpcoming";
    }
  }
  else {
    pwVar5 = 
    L"Some of your local changes conflict with the latest snapshot of the project. Click here to review these conflicts."
    ;
    pwVar4 = L"CheckInButtonChangesTooltipTextConflict";
  }
  FText::AsLocalizable_Advanced_LocText
            (__return_storage_ptr__,L"SSkeinSourceControlWidgets",pwVar4,pwVar5);
  return __return_storage_ptr__;
}

// GetSourceControlCheckInStatusVisibility @ 146b19df0

/* WARNING: Type propagation algorithm not settling */

EVisibility __cdecl SSourceControlControls::GetSourceControlCheckInStatusVisibility(void)

{
  TEnumAsByte<EVisibility::Private> *in_RCX;
  
  in_RCX->Value = (uchar)EVisibility::Visible.Value.Value;
  return (EVisibility)SUB81(in_RCX,0);
}

// GetSourceControlMiddleSeparatorVisibility @ 146b19e60

EVisibility __thiscall
SSourceControlControls::GetSourceControlMiddleSeparatorVisibility(SSourceControlControls *this)

{
  bool *pbVar1;
  uchar *in_RDX;
  EVisibility EVar2;
  bool local_res18 [16];
  
  local_res18[0] = true;
  pbVar1 = TAttribute<bool>::Get(&this->IsMiddleSeparatorEnabled,local_res18);
  EVar2 = EVisibility::Collapsed;
  if (*pbVar1 != false) {
    EVar2 = EVisibility::Visible;
  }
  *in_RDX = (uchar)EVar2.Value.Value;
  return (EVisibility)SUB81(in_RDX,0);
}

// GetSourceControlRestoreAsLatestStatusIcon @ 146b1a1d0

FSlateBrush * __cdecl SSourceControlControls::GetSourceControlRestoreAsLatestStatusIcon(void)

{
  code *pcVar1;
  ISlateStyle *pIVar2;
  FName *pFVar3;
  FSlateBrush *pFVar4;
  FName local_res8;
  
  pIVar2 = FRevisionControlStyleManager::Get();
  pcVar1 = *(code **)((longlong)*pIVar2 + 0x50);
  pFVar3 = ::FName::FName(&local_res8,"RevisionControl.StatusBar.Promote");
  pFVar4 = (FSlateBrush *)(*pcVar1)(pIVar2,*pFVar3,0,0);
  return pFVar4;
}

// GetSourceControlRestoreAsLatestText @ 146b1a220

FText * __cdecl
SSourceControlControls::GetSourceControlRestoreAsLatestText(FText *__return_storage_ptr__)

{
  FText::AsLocalizable_Advanced_LocText
            (__return_storage_ptr__,L"SSkeinSourceControlWidgets",L"RestoreAsLatestButtonText",
             L"Restore as Latest");
  return __return_storage_ptr__;
}

// GetSourceControlRestoreAsLatestToolTipText @ 146b1a260

FText * __cdecl
SSourceControlControls::GetSourceControlRestoreAsLatestToolTipText(FText *__return_storage_ptr__)

{
  FText::AsLocalizable_Advanced_LocText
            (__return_storage_ptr__,L"SSkeinSourceControlWidgets",L"RestoreAsLatestTooltipText",
             L"Restore this snapshot to be the latest version of the project for all team members.")
  ;
  return __return_storage_ptr__;
}

// GetSourceControlRestoreAsLatestVisibility @ 146b1a2a0

EVisibility __cdecl SSourceControlControls::GetSourceControlRestoreAsLatestVisibility(void)

{
  char cVar1;
  char cVar2;
  bool bVar3;
  EVisibility EVar4;
  uchar *in_RCX;
  longlong *plVar5;
  FReadAccessScope local_28;
  
  cVar2 = '\0';
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&IsRestoreAsLatestVisible,
             &local_28);
  if ((IsRestoreAsLatestVisible._16_4_ != 0) && (IsRestoreAsLatestVisible._8_8_ != 0)) {
    cVar1 = (**(code **)(*(longlong *)IsRestoreAsLatestVisible._8_8_ + 0x38))();
    if (cVar1 != '\0') {
      bVar3 = true;
      goto LAB_146b1a2ed;
    }
  }
  bVar3 = false;
LAB_146b1a2ed:
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  if (bVar3) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&IsRestoreAsLatestVisible,
               &local_28);
    plVar5 = (longlong *)0x0;
    if (IsRestoreAsLatestVisible._16_4_ != 0) {
      plVar5 = (longlong *)IsRestoreAsLatestVisible._8_8_;
    }
    cVar2 = (**(code **)(*plVar5 + 0x60))();
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_28);
  }
  bVar3 = DisplayCheckInStatus();
  if ((cVar2 == '\0') || (EVar4 = EVisibility::Visible, !bVar3)) {
    EVar4 = EVisibility::Collapsed;
  }
  *in_RCX = (uchar)EVar4.Value.Value;
  return (EVisibility)SUB81(in_RCX,0);
}

// GetSourceControlRightSeparatorVisibility @ 146b1a370

EVisibility __thiscall
SSourceControlControls::GetSourceControlRightSeparatorVisibility(SSourceControlControls *this)

{
  bool *pbVar1;
  uchar *in_RDX;
  EVisibility EVar2;
  bool local_res18 [16];
  
  local_res18[0] = true;
  pbVar1 = TAttribute<bool>::Get(&this->IsRightSeparatorEnabled,local_res18);
  EVar2 = EVisibility::Collapsed;
  if (*pbVar1 != false) {
    EVar2 = EVisibility::Visible;
  }
  *in_RDX = (uchar)EVar2.Value.Value;
  return (EVisibility)SUB81(in_RDX,0);
}

// GetSourceControlSyncStatusIcon @ 146b1a3c0

FSlateBrush * __cdecl SSourceControlControls::GetSourceControlSyncStatusIcon(void)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  ISlateStyle *pIVar4;
  FName *pFVar5;
  FSlateBrush *pFVar6;
  int *piVar7;
  FName local_res8;
  
  piVar7 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar7 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      pIVar4 = FRevisionControlStyleManager::Get();
      pcVar1 = *(code **)((longlong)*pIVar4 + 0x50);
      pFVar5 = ::FName::FName(&local_res8,"RevisionControl.StatusBar.Conflict");
      ConflictBrush = (FSlateBrush *)(*pcVar1)(pIVar4,*pFVar5,0,0);
      _Init_thread_footer(&::_TSS0);
    }
  }
  if (*piVar7 < ::_TSS1) {
    _Init_thread_header(&::_TSS1);
    if (::_TSS1 == -1) {
      pIVar4 = FRevisionControlStyleManager::Get();
      pcVar1 = *(code **)((longlong)*pIVar4 + 0x50);
      pFVar5 = ::FName::FName(&local_res8,"RevisionControl.StatusBar.ConflictUpcoming");
      ConflictUpcomingBrush = (FSlateBrush *)(*pcVar1)(pIVar4,*pFVar5,0,0);
      _Init_thread_footer(&::_TSS1);
    }
  }
  if (*piVar7 < ::_TSS2) {
    _Init_thread_header(&::_TSS2);
    if (::_TSS2 == -1) {
      pIVar4 = FRevisionControlStyleManager::Get();
      pcVar1 = *(code **)((longlong)*pIVar4 + 0x50);
      pFVar5 = ::FName::FName(&local_res8,"RevisionControl.StatusBar.AtLatestRevision");
      AtHeadBrush = (FSlateBrush *)(*pcVar1)(pIVar4,*pFVar5,0,0);
      _Init_thread_footer(&::_TSS2);
    }
  }
  if (*piVar7 < ::_TSS3) {
    _Init_thread_header(&::_TSS3);
    if (::_TSS3 == -1) {
      pIVar4 = FRevisionControlStyleManager::Get();
      pcVar1 = *(code **)((longlong)*pIVar4 + 0x50);
      pFVar5 = ::FName::FName(&local_res8,"RevisionControl.StatusBar.NotAtLatestRevision");
      NotAtHeadBrush = (FSlateBrush *)(*pcVar1)(pIVar4,*pFVar5,0,0);
      _Init_thread_footer(&::_TSS3);
    }
  }
  iVar3 = GetNumConflictsRemaining();
  if (0 < iVar3) {
    return ConflictBrush;
  }
  iVar3 = GetNumConflictsUpcoming();
  if (0 < iVar3) {
    return ConflictUpcomingBrush;
  }
  bVar2 = HasSourceControlChangesToSync();
  pFVar6 = AtHeadBrush;
  if (bVar2) {
    pFVar6 = NotAtHeadBrush;
  }
  return pFVar6;
}

// GetSourceControlSyncStatusText @ 146b1a600

FText * __cdecl
SSourceControlControls::GetSourceControlSyncStatusText(FText *__return_storage_ptr__)

{
  bool bVar1;
  
  bVar1 = HasSourceControlChangesToSync();
  if (bVar1) {
    FText::AsLocalizable_Advanced_LocText
              (__return_storage_ptr__,L"SSkeinSourceControlWidgets",L"SyncLatestButtonNotAtHeadText"
               ,L"Sync Latest");
    return __return_storage_ptr__;
  }
  FText::AsLocalizable_Advanced_LocText
            (__return_storage_ptr__,L"SSkeinSourceControlWidgets",L"SyncLatestButtonAtHeadText",
             L"At Latest");
  return __return_storage_ptr__;
}

// GetSourceControlSyncStatusToolTipText @ 146b1a660

FText * __cdecl
SSourceControlControls::GetSourceControlSyncStatusToolTipText(FText *__return_storage_ptr__)

{
  bool bVar1;
  int iVar2;
  wchar_t *pwVar3;
  wchar_t *pwVar4;
  
  iVar2 = GetNumConflictsRemaining();
  if (iVar2 < 1) {
    iVar2 = GetNumConflictsUpcoming();
    if (iVar2 < 1) {
      bVar1 = HasSourceControlChangesToSync();
      if (bVar1) {
        pwVar4 = L"Sync to the latest Snapshot for this project";
        pwVar3 = L"SyncLatestButtonNotAtHeadTooltipText";
      }
      else {
        pwVar4 = L"Currently at the latest Snapshot for this project";
        pwVar3 = L"SyncLatestButtonAtHeadTooltipText";
      }
    }
    else {
      pwVar4 = 
      L"Some of your local changes conflict with later snapshots on the project. Sync Latest or Check-in Changes to review and address these issues."
      ;
      pwVar3 = L"SyncLatestButtonNotAtHeadTooltipTextConflictUpcoming";
    }
  }
  else {
    pwVar4 = 
    L"Some of your local changes conflict with the latest snapshot of the project. Click here to review these conflicts."
    ;
    pwVar3 = L"SyncLatestButtonNotAtHeadTooltipTextConflict";
  }
  FText::AsLocalizable_Advanced_LocText
            (__return_storage_ptr__,L"SSkeinSourceControlWidgets",pwVar3,pwVar4);
  return __return_storage_ptr__;
}

// GetSourceControlSyncStatusVisibility @ 146b1a6e0

/* WARNING: Type propagation algorithm not settling */

EVisibility __cdecl SSourceControlControls::GetSourceControlSyncStatusVisibility(void)

{
  TEnumAsByte<EVisibility::Private> *in_RCX;
  
  in_RCX->Value = (uchar)EVisibility::Visible.Value.Value;
  return (EVisibility)SUB81(in_RCX,0);
}

// HasSourceControlChangesToCheckIn @ 146b1b6e0

bool __cdecl SSourceControlControls::HasSourceControlChangesToCheckIn(void)

{
  int iVar1;
  
  iVar1 = GetNumLocalChanges();
  return 0 < iVar1;
}

// HasSourceControlChangesToSync @ 146b1b700

bool __cdecl SSourceControlControls::HasSourceControlChangesToSync(void)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  undefined1 uVar4;
  ISourceControlModule *pIVar5;
  longlong *plVar6;
  longlong lVar7;
  char *pcVar8;
  undefined1 local_res8 [8];
  undefined1 local_res10 [24];
  
  pIVar5 = ISourceControlModule::Get();
  cVar2 = (**(code **)((longlong)*pIVar5 + 0x70))(pIVar5);
  if (cVar2 != '\0') {
    plVar6 = (longlong *)(**(code **)((longlong)*pIVar5 + 0x78))(pIVar5);
    cVar2 = (**(code **)(*plVar6 + 0x40))(plVar6);
    if (cVar2 != '\0') {
      plVar6 = (longlong *)(**(code **)((longlong)*pIVar5 + 0x78))(pIVar5);
      lVar7 = (**(code **)(*plVar6 + 0x170))(plVar6,local_res8);
      if (*(char *)(lVar7 + 1) != '\0') {
        plVar6 = (longlong *)(**(code **)((longlong)*pIVar5 + 0x78))(pIVar5);
        pcVar8 = (char *)(**(code **)(*plVar6 + 0x170))(plVar6,local_res10);
        if (pcVar8[1] == '\0') {
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0x1bd,
                             L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                            );
          if (bVar3) {
            pcVar1 = (code *)swi(3);
            uVar4 = (*pcVar1)();
            return (bool)uVar4;
          }
        }
        if (*pcVar8 != '\0') {
          return false;
        }
      }
    }
  }
  return true;
}

// IsAtLatestRevision @ 146b1bbd0

bool __cdecl SSourceControlControls::IsAtLatestRevision(void)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  undefined1 uVar4;
  ISourceControlModule *pIVar5;
  longlong *plVar6;
  longlong lVar7;
  char *pcVar8;
  undefined1 local_res8 [8];
  undefined1 local_res10 [24];
  
  pIVar5 = ISourceControlModule::Get();
  cVar2 = (**(code **)((longlong)*pIVar5 + 0x70))(pIVar5);
  if (cVar2 != '\0') {
    plVar6 = (longlong *)(**(code **)((longlong)*pIVar5 + 0x78))(pIVar5);
    cVar2 = (**(code **)(*plVar6 + 0x40))(plVar6);
    if (cVar2 != '\0') {
      plVar6 = (longlong *)(**(code **)((longlong)*pIVar5 + 0x78))(pIVar5);
      lVar7 = (**(code **)(*plVar6 + 0x170))(plVar6,local_res8);
      if (*(char *)(lVar7 + 1) != '\0') {
        plVar6 = (longlong *)(**(code **)((longlong)*pIVar5 + 0x78))(pIVar5);
        pcVar8 = (char *)(**(code **)(*plVar6 + 0x170))(plVar6,local_res10);
        if (pcVar8[1] == '\0') {
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0x1bd,
                             L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                            );
          if (bVar3) {
            pcVar1 = (code *)swi(3);
            uVar4 = (*pcVar1)();
            return (bool)uVar4;
          }
        }
        if (*pcVar8 != '\0') {
          return true;
        }
      }
    }
  }
  return false;
}

// IsSourceControlCheckInEnabled @ 146b1c1b0

bool __cdecl SSourceControlControls::IsSourceControlCheckInEnabled(void)

{
  bool bVar1;
  char cVar2;
  undefined1 uVar3;
  int iVar4;
  longlong *plVar5;
  FReadAccessScope local_28;
  
  iVar4 = GetNumLocalChanges();
  if (iVar4 < 1) {
    return false;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&IsCheckInChangesEnabled,
             &local_28);
  if (((IsCheckInChangesEnabled._16_4_ == 0) || (IsCheckInChangesEnabled._8_8_ == 0)) ||
     (cVar2 = (**(code **)(*(longlong *)IsCheckInChangesEnabled._8_8_ + 0x38))(), cVar2 == '\0')) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  if (!bVar1) {
    return false;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&IsCheckInChangesEnabled,
             &local_28);
  plVar5 = (longlong *)0x0;
  if (IsCheckInChangesEnabled._16_4_ != 0) {
    plVar5 = (longlong *)IsCheckInChangesEnabled._8_8_;
  }
  uVar3 = (**(code **)(*plVar5 + 0x60))();
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return (bool)uVar3;
}

// IsSourceControlRestoreAsLatestEnabled @ 146b1c260

bool __cdecl SSourceControlControls::IsSourceControlRestoreAsLatestEnabled(void)

{
  bool bVar1;
  char cVar2;
  undefined1 uVar3;
  longlong *plVar4;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&IsRestoreAsLatestEnabled,
             &local_28);
  if ((IsRestoreAsLatestEnabled._16_4_ != 0) && (IsRestoreAsLatestEnabled._8_8_ != 0)) {
    cVar2 = (**(code **)(*(longlong *)IsRestoreAsLatestEnabled._8_8_ + 0x38))();
    if (cVar2 != '\0') {
      bVar1 = true;
      goto LAB_146b1c29c;
    }
  }
  bVar1 = false;
LAB_146b1c29c:
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  if (bVar1) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&IsRestoreAsLatestEnabled,
               &local_28);
    plVar4 = (longlong *)0x0;
    if (IsRestoreAsLatestEnabled._16_4_ != 0) {
      plVar4 = (longlong *)IsRestoreAsLatestEnabled._8_8_;
    }
    uVar3 = (**(code **)(*plVar4 + 0x60))();
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_28);
    return (bool)uVar3;
  }
  return false;
}

// IsSourceControlSyncEnabled @ 146b1c300

bool __cdecl SSourceControlControls::IsSourceControlSyncEnabled(void)

{
  bool bVar1;
  char cVar2;
  undefined1 uVar3;
  longlong *plVar4;
  FReadAccessScope local_28;
  
  bVar1 = HasSourceControlChangesToSync();
  if (!bVar1) {
    return false;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&IsSyncLatestEnabled,
             &local_28);
  if (((IsSyncLatestEnabled._16_4_ == 0) || (IsSyncLatestEnabled._8_8_ == 0)) ||
     (cVar2 = (**(code **)(*(longlong *)IsSyncLatestEnabled._8_8_ + 0x38))(), cVar2 == '\0')) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  if (!bVar1) {
    return false;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&IsSyncLatestEnabled,
             &local_28);
  plVar4 = (longlong *)0x0;
  if (IsSyncLatestEnabled._16_4_ != 0) {
    plVar4 = (longlong *)IsSyncLatestEnabled._8_8_;
  }
  uVar3 = (**(code **)(*plVar4 + 0x60))();
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return (bool)uVar3;
}

// OnSourceControlCheckInChangesClicked @ 146b20430

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __cdecl
SSourceControlControls::OnSourceControlCheckInChangesClicked(FReply *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  FReply *pFVar5;
  longlong *plVar6;
  FOutputDeviceRedirector *pFVar7;
  FString *local_108;
  undefined8 local_100;
  FReadAccessScope local_f8;
  FReadAccessScope local_e0;
  FReply local_c8;
  
  iVar4 = GetNumConflictsRemaining();
  if (0 < iVar4) {
    if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
      IConsoleManager::SetupSingleton();
      if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Singleton != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                           ,0x4fb,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          pFVar5 = (FReply *)(*pcVar1)();
          return pFVar5;
        }
      }
    }
    plVar6 = (longlong *)
             (**(code **)((longlong)*IConsoleManager::Singleton + 200))
                       (IConsoleManager::Singleton,L"UnrealRevisionControl.FocusConflictResolution",
                        1);
    if (plVar6 != (longlong *)0x0) {
      plVar6 = (longlong *)(**(code **)(*plVar6 + 0x80))(plVar6);
      pcVar1 = *(code **)(*plVar6 + 0xa8);
      pFVar7 = GetGlobalLogSingleton();
      local_108 = (FString *)0x0;
      local_100 = 0;
      (*pcVar1)(plVar6,&local_108,0,pFVar7);
      DestructItems<FString,int>(local_108,(int)local_100);
      if (local_108 != (FString *)0x0) {
        FMemory::Free(local_108);
      }
    }
    goto LAB_146b205b3;
  }
  iVar4 = GetNumLocalChanges();
  if (iVar4 < 1) goto LAB_146b205b3;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&OnCheckInChangesClicked,
             &local_f8);
  if ((OnCheckInChangesClicked._16_4_ == 0) || (OnCheckInChangesClicked._8_8_ == 0)) {
LAB_146b20563:
    bVar2 = false;
  }
  else {
    cVar3 = (**(code **)(*(longlong *)OnCheckInChangesClicked._8_8_ + 0x38))();
    if (cVar3 == '\0') goto LAB_146b20563;
    bVar2 = true;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_f8);
  if (bVar2) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&OnCheckInChangesClicked,
               &local_e0);
    plVar6 = (longlong *)0x0;
    if (OnCheckInChangesClicked._16_4_ != 0) {
      plVar6 = (longlong *)OnCheckInChangesClicked._8_8_;
    }
    (**(code **)(*plVar6 + 0x60))(plVar6,&local_c8);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_e0);
    FReply::~FReply(&local_c8);
  }
LAB_146b205b3:
  FReply::FReply(__return_storage_ptr__,true);
  return __return_storage_ptr__;
}

// OnSourceControlRestoreAsLatestClicked @ 146b20d20

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __cdecl
SSourceControlControls::OnSourceControlRestoreAsLatestClicked(FReply *__return_storage_ptr__)

{
  bool bVar1;
  char cVar2;
  longlong *plVar3;
  FReadAccessScope local_d8;
  FReply local_c0;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&OnRestoreAsLatestClicked,
             &local_d8);
  if ((OnRestoreAsLatestClicked._16_4_ != 0) && (OnRestoreAsLatestClicked._8_8_ != 0)) {
    cVar2 = (**(code **)(*(longlong *)OnRestoreAsLatestClicked._8_8_ + 0x38))();
    if (cVar2 != '\0') {
      bVar1 = true;
      goto LAB_146b20d66;
    }
  }
  bVar1 = false;
LAB_146b20d66:
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_d8);
  if (bVar1) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&OnRestoreAsLatestClicked,
               &local_d8);
    plVar3 = (longlong *)0x0;
    if (OnRestoreAsLatestClicked._16_4_ != 0) {
      plVar3 = (longlong *)OnRestoreAsLatestClicked._8_8_;
    }
    (**(code **)(*plVar3 + 0x60))(plVar3,&local_c0);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_d8);
    FReply::~FReply(&local_c0);
  }
  FReply::FReply(__return_storage_ptr__,true);
  return __return_storage_ptr__;
}

// OnSourceControlSyncClicked @ 146b21350

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __cdecl SSourceControlControls::OnSourceControlSyncClicked(FReply *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  FReply *pFVar5;
  longlong *plVar6;
  FOutputDeviceRedirector *pFVar7;
  FString *local_108;
  undefined8 local_100;
  FReadAccessScope local_f8;
  FReadAccessScope local_e0;
  FReply local_c8;
  
  iVar4 = GetNumConflictsRemaining();
  if (0 < iVar4) {
    if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
      IConsoleManager::SetupSingleton();
      if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Singleton != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                           ,0x4fb,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          pFVar5 = (FReply *)(*pcVar1)();
          return pFVar5;
        }
      }
    }
    plVar6 = (longlong *)
             (**(code **)((longlong)*IConsoleManager::Singleton + 200))
                       (IConsoleManager::Singleton,L"UnrealRevisionControl.FocusConflictResolution",
                        1);
    if (plVar6 != (longlong *)0x0) {
      plVar6 = (longlong *)(**(code **)(*plVar6 + 0x80))(plVar6);
      pcVar1 = *(code **)(*plVar6 + 0xa8);
      pFVar7 = GetGlobalLogSingleton();
      local_108 = (FString *)0x0;
      local_100 = 0;
      (*pcVar1)(plVar6,&local_108,0,pFVar7);
      DestructItems<FString,int>(local_108,(int)local_100);
      if (local_108 != (FString *)0x0) {
        FMemory::Free(local_108);
      }
    }
    goto LAB_146b214d3;
  }
  bVar2 = HasSourceControlChangesToSync();
  if (!bVar2) goto LAB_146b214d3;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&OnSyncLatestClicked,
             &local_f8);
  if ((OnSyncLatestClicked._16_4_ == 0) || (OnSyncLatestClicked._8_8_ == 0)) {
LAB_146b21483:
    bVar2 = false;
  }
  else {
    cVar3 = (**(code **)(*(longlong *)OnSyncLatestClicked._8_8_ + 0x38))();
    if (cVar3 == '\0') goto LAB_146b21483;
    bVar2 = true;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_f8);
  if (bVar2) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&OnSyncLatestClicked,
               &local_e0);
    plVar6 = (longlong *)0x0;
    if (OnSyncLatestClicked._16_4_ != 0) {
      plVar6 = (longlong *)OnSyncLatestClicked._8_8_;
    }
    (**(code **)(*plVar6 + 0x60))(plVar6,&local_c8);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_e0);
    FReply::~FReply(&local_c8);
  }
LAB_146b214d3:
  FReply::FReply(__return_storage_ptr__,true);
  return __return_storage_ptr__;
}

