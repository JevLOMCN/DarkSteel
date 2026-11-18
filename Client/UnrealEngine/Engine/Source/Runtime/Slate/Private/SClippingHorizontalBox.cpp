// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 8

// ~SClippingHorizontalBox @ 1427ba400

void __thiscall SClippingHorizontalBox::~SClippingHorizontalBox(SClippingHorizontalBox *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  DestructItems<TWeakPtr<SWidget,1>,int>
            ((TWeakPtr<SWidget,1> *)(this->ClippedWidgets).AllocatorInstance.Data,
             (this->ClippedWidgets).ArrayNum);
  pFVar1 = (this->ClippedWidgets).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnGetWidgetResizeParams);
  pvVar2 = *(void **)&(this->OnGetWidgetResizeParams).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnGetWidgetResizeParams);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->WrapButtonOpenTimer).SharedReferenceCount.ReferenceController);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnWrapButtonClicked);
  pvVar2 = *(void **)&(this->OnWrapButtonClicked).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnWrapButtonClicked);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->WrapButton).SharedReferenceCount.ReferenceController);
  SBoxPanel::~SBoxPanel((SBoxPanel *)this);
  return;
}

// AddWrapButton @ 1427ced30

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall SClippingHorizontalBox::AddWrapButton(SClippingHorizontalBox *this)

{
  TSharedPtr<SComboButton,1> *pTVar1;
  SWidget *pSVar2;
  SImage *pSVar3;
  code *pcVar4;
  bool bVar5;
  FToolBarStyle *pFVar6;
  ISlateStyle *pIVar7;
  FName *pFVar8;
  FComboButtonStyle *pFVar9;
  FArguments *pFVar10;
  FText *pFVar11;
  undefined8 *puVar12;
  TSharedRef<SWidget,1> *pTVar13;
  ulong64 uVar14;
  FArguments *pFVar15;
  TSharedRef<SImage,1> *pTVar16;
  TSharedRef<SComboButton,1> *pTVar17;
  FArguments *pFVar18;
  FScopedWidgetSlotArguments<SHorizontalBox::FSlot> *pFVar19;
  FSlotArguments *pFVar20;
  FArguments *pFVar21;
  TSharedRef<SSeparator,1> *pTVar22;
  FSlot *pFVar23;
  TOptional<float> *pTVar24;
  FSlateBrush *pFVar25;
  FDeprecateSlateVector2D FVar26;
  FSlot *this_00;
  TOptional<FMargin> *pTVar27;
  FComboButtonStyle *pFVar28;
  FSharedReferencer<1> FVar29;
  SComboButton *this_01;
  FComboButtonStyle *pFVar30;
  TReferenceControllerBase<1> *pTVar31;
  float fVar32;
  undefined4 local_res8;
  undefined4 uStackX_c;
  T0RequiredArgs local_res10 [8];
  T0RequiredArgs local_res18 [8];
  T0RequiredArgs local_res20 [8];
  T0RequiredArgs local_13b8 [4];
  FLLMScope local_13b4;
  FLLMScope local_13b0;
  FLLMScope local_13ac;
  FLLMScope local_13a8;
  FLLMScope local_13a4;
  code *local_13a0;
  FSharedReferencer<1> FStack_1398;
  SWidget *local_1390;
  TReferenceControllerBase<1> *pTStack_1388;
  SComboButton *local_1380;
  FSharedReferencer<1> local_1378;
  SComboButton *local_1370;
  FSharedReferencer<1> local_1368;
  SComboButton *local_1360;
  FSharedReferencer<1> local_1358;
  FSlateBrush *local_1350;
  undefined1 local_1348;
  undefined1 local_1340 [8];
  void *pvStack_1338;
  undefined8 local_1330;
  FName local_1328;
  FMemScope local_1320;
  FSlot *local_1318;
  FSlot *local_1310;
  FName local_1308;
  FMemScope local_1300;
  FSlot *local_12f8;
  FName local_12f0;
  FMemScope local_12e8;
  FName local_12e0;
  FMemScope local_12d8;
  FName local_12d0;
  FMemScope local_12c8;
  TAttribute<float> local_12c0;
  undefined8 local_12a0;
  undefined8 uStack_1298;
  undefined4 local_1290;
  TAttribute<TOptional<EMouseCursor::Type>_> local_1288;
  TSharedRef<SWidget,1> local_1260;
  TSharedRef<SSeparator,1> local_1250;
  TSharedRef<SHorizontalBox,1> local_1240;
  FLinearColor_u_0 local_1230;
  undefined4 local_1220;
  undefined1 local_121c;
  undefined8 local_1218;
  undefined8 uStack_1210;
  undefined8 local_1208;
  FDestructionSentinel local_1200;
  undefined1 *local_11e8;
  TAttribute<FText> local_11e0;
  TAttribute<FMargin> local_11b0;
  TSlateDecl<SComboButton,RequiredArgs::T0RequiredArgs> local_1180;
  TSlateDecl<SImage,RequiredArgs::T0RequiredArgs> local_1168;
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs> local_1150;
  TSlateDecl<SSeparator,RequiredArgs::T0RequiredArgs> local_1138;
  TSlateDecl<SSeparator,RequiredArgs::T0RequiredArgs> local_1120;
  TSharedRef<SWidget,1> local_1108;
  TSharedRef<SComboButton,1> local_10f8;
  TSharedRef<SImage,1> local_10e8;
  FText local_10d8;
  TSharedRef<SSeparator,1> local_10c8;
  FName local_10b8 [2];
  undefined **local_10a8;
  undefined8 *local_10a0 [2];
  TReferenceControllerBase<1> *local_1090;
  undefined1 local_1070 [40];
  FSlotArgumentsMixin local_1048;
  TPanelChildren<SBoxPanel::FSlot> *local_fb8;
  int local_fb0;
  undefined **local_fa8;
  undefined8 *local_fa0 [2];
  TReferenceControllerBase<1> *local_f90;
  undefined1 local_f70 [40];
  FSlotArgumentsMixin local_f48;
  TPanelChildren<SBoxPanel::FSlot> *local_eb8;
  int local_eb0;
  undefined1 local_ea8 [16];
  SSeparator *local_e98;
  FSharedReferencer<1> local_e90 [27];
  TPanelChildren<SBoxPanel::FSlot> *local_db8;
  int local_db0;
  FArguments local_da8;
  undefined1 local_ba0 [544];
  undefined1 local_980 [24];
  undefined1 local_968 [544];
  undefined1 local_748 [24];
  FScopedWidgetSlotArguments<SHorizontalBox::FSlot> local_730;
  FArguments local_630;
  FArguments local_388;
  undefined8 uStack_48;
  
  uStack_48 = 0x1427ced4f;
  pFVar28 = (FComboButtonStyle *)0x0;
  local_res8 = 0;
  pFVar6 = (FToolBarStyle *)
           (**(code **)((longlong)*this->StyleSet + 0xa0))
                     (this->StyleSet,FToolBarStyle::TypeName,this->StyleName,0,1);
  if (pFVar6 == (FToolBarStyle *)0x0) {
    pFVar6 = FToolBarStyle::GetDefault();
  }
  pFVar9 = &(pFVar6->WrapButtonStyle).ComboButtonStyle.TypedValue;
  if ((pFVar6->WrapButtonStyle).ComboButtonStyle.bIsSet == false) {
    pFVar9 = pFVar28;
  }
  pFVar30 = pFVar28;
  if (pFVar9 == (FComboButtonStyle *)0x0) {
    pIVar7 = FAppStyle::Get();
    pFVar8 = ::FName::FName(local_10b8,"ComboButton");
    pFVar9 = (FComboButtonStyle *)
             (**(code **)((longlong)*pIVar7 + 0xa0))(pIVar7,FComboButtonStyle::TypeName,*pFVar8,0,1)
    ;
    if (pFVar9 == (FComboButtonStyle *)0x0) {
      pFVar9 = FComboButtonStyle::GetDefault();
    }
    pFVar30 = (FComboButtonStyle *)&pFVar6->ButtonStyle;
  }
  pFVar10 = SComboButton::FArguments::FArguments(&local_388);
  pFVar10->_HasDownArrow = (pFVar6->WrapButtonStyle).bHasDownArrow;
  pFVar10->_ComboButtonStyle = pFVar9;
  pFVar10->_ButtonStyle = (FButtonStyle *)pFVar30;
  pFVar11 = FText::AsLocalizable_Advanced_LocText
                      (&local_10d8,L"Slate",L"ExpandToolbar",L"Click to expand toolbar");
  FText::FText(&local_11e0.Value,pFVar11);
  local_11e0.bIsSet = true;
  local_11e0.Getter._16_8_ = 0;
  local_11e0.Getter._0_8_ = 0;
  local_11e0.Getter._8_8_ = 0;
  pFVar10 = TSlateBaseNamedArgs<SComboButton>::ToolTipText
                      ((TSlateBaseNamedArgs<SComboButton> *)pFVar10,&local_11e0);
  TDelegate<TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>(&pFVar10->_OnGetMenuContent,&this->OnWrapButtonClicked);
  local_1288.Value.TypedValue = Default;
  local_1288.Getter._16_8_ = 0;
  local_1288.Value.bIsSet = true;
  local_1288.bIsSet = true;
  local_1288.Getter._0_8_ = 0;
  local_1288.Getter._8_8_ = 0;
  pFVar10 = TSlateBaseNamedArgs<SComboButton>::Cursor
                      ((TSlateBaseNamedArgs<SComboButton> *)pFVar10,&local_1288);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar10->_OnMenuOpenChanged,
             (FWriteAccessScope *)&local_1200);
  local_11e8 = &(pFVar10->_OnMenuOpenChanged).field_0x8;
  puVar12 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_11e8);
  if (puVar12 == (undefined8 *)0x0) {
    pTVar31 = (TReferenceControllerBase<1> *)CONCAT44(uStackX_c,local_res8);
  }
  else {
    local_13a0 = OnWrapButtonOpenChanged;
    FStack_1398.ReferenceController =
         (TReferenceControllerBase<1> *)
         ((ulonglong)local_1250.SharedReferenceCount.ReferenceController._4_4_ << 0x20);
    pTVar13 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_1108);
    pTVar31 = (pTVar13->SharedReferenceCount).ReferenceController;
    pSVar2 = pTVar13->Object;
    if (pTVar31 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar31->SharedReferenceCount = (atomic<int>)((int)pTVar31->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar31->SharedReferenceCount = (atomic<int>)((int)pTVar31->SharedReferenceCount + 1);
      UNLOCK();
    }
    *puVar12 = &___7__TCommonDelegateInstanceState___A6AX_N_ZUFDefaultDelegateUserPolicy____V__6B_;
    uVar14 = FDelegateHandle::GenerateNewID();
    puVar12[2] = uVar14;
    *puVar12 = &
               ___7__TBaseSPMethodDelegateInstance__0A_VSClippingHorizontalBox___00__A6AX_N_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar12[3] = pSVar2;
    puVar12[4] = pTVar31;
    if (pTVar31 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar31->WeakReferenceCount = (atomic<int>)((int)pTVar31->WeakReferenceCount + 1);
      UNLOCK();
    }
    pFVar28 = (FComboButtonStyle *)&DAT_00000007;
    puVar12[5] = local_13a0;
    puVar12[6] = FStack_1398.ReferenceController;
  }
  if (((ulonglong)pFVar28 & 4) != 0) {
    pFVar28 = (FComboButtonStyle *)(ulonglong)((uint)pFVar28 & 0xfffffffb);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar31);
  }
  if (((ulonglong)pFVar28 & 2) != 0) {
    pFVar28 = (FComboButtonStyle *)(ulonglong)((uint)pFVar28 & 0xfffffffd);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar31);
  }
  if (((ulonglong)pFVar28 & 1) != 0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1108.SharedReferenceCount.ReferenceController);
  }
  if (local_1200.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1200.Accessor,&local_1200);
  }
  pFVar10->_IsFocusable = true;
  pFVar15 = SImage::FArguments::FArguments(&local_630);
  local_1290 = CONCAT22(local_1290._2_2_,2);
  local_1220 = local_1290;
  local_12a0 = ___xmm_3f8000003f800000000000003f800000;
  uStack_1298 = _UNK_15090c6d8;
  local_121c = 1;
  local_1230._0_8_ = ___xmm_3f8000003f800000000000003f800000;
  local_1230._8_8_ = _UNK_15090c6d8;
  local_1208 = 0;
  local_1218 = 0;
  uStack_1210 = 0;
  pFVar15 = SImage::FArguments::ColorAndOpacity(pFVar15,(TAttribute<FSlateColor> *)&local_1230._s_0)
  ;
  local_1348 = 1;
  local_1350 = &(pFVar6->WrapButtonStyle).ExpandBrush;
  local_1330 = 0;
  local_1340 = (undefined1  [8])0x0;
  pvStack_1338 = (void *)0x0;
  (pFVar15->_Image).Value = local_1350;
  (pFVar15->_Image).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar15->_Image).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_1340);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1340);
  if (pvStack_1338 != (void *)0x0) {
    FMemory::Free(pvStack_1338);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1340);
  FLLMScope::FLLMScope(&local_13b4,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_12f0 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_12e8,&local_12f0,true);
  TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>::TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>
            (&local_1168,"SImage",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\MultiBox\\SClippingHorizontalBox.cpp"
             ,0x1c7,(T0RequiredArgs *)&local_res8);
  FMemScope::~FMemScope(&local_12e8);
  FLLMScope::~FLLMScope(&local_13b4);
  pTVar16 = TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_1168,&local_10e8,pFVar15);
  pTVar31 = (pTVar16->SharedReferenceCount).ReferenceController;
  pSVar3 = pTVar16->Object;
  if (pTVar31 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar31->SharedReferenceCount = (atomic<int>)((int)pTVar31->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar31->SharedReferenceCount = (atomic<int>)((int)pTVar31->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_1390 = (pFVar10->_ButtonContent).Widget.Object;
  pTStack_1388 = (pFVar10->_ButtonContent).Widget.SharedReferenceCount.ReferenceController;
  (pFVar10->_ButtonContent).Widget.Object = (SWidget *)pSVar3;
  (pFVar10->_ButtonContent).Widget.SharedReferenceCount.ReferenceController = pTVar31;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_1388);
  FLLMScope::FLLMScope(&local_13b0,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_12e0 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_12d8,&local_12e0,true);
  TSlateDecl<SComboButton,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SComboButton,RequiredArgs::T0RequiredArgs>
            (&local_1180,"SComboButton",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\MultiBox\\SClippingHorizontalBox.cpp"
             ,0x1bc,local_res10);
  FMemScope::~FMemScope(&local_12d8);
  FLLMScope::~FLLMScope(&local_13b0);
  pTVar17 = TSlateDecl<SComboButton,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_1180,&local_10f8,pFVar10);
  local_1378.ReferenceController = (pTVar17->SharedReferenceCount).ReferenceController;
  local_1380 = pTVar17->Object;
  if (local_1378.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_1378.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_1378.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar1 = &this->WrapButton;
  if (pTVar1 != (TSharedPtr<SComboButton,1> *)&local_1380) {
    pTVar1->Object = local_1380;
    local_1380 = (SComboButton *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->WrapButton).SharedReferenceCount,&local_1378);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1378.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_10f8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1180._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar31);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_10e8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1168._Widget.SharedReferenceCount.ReferenceController);
  SImage::FArguments::~FArguments(&local_630);
  if (local_10d8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_10d8.TextData.Reference + 0x10))();
  }
  SComboButton::FArguments::~FArguments(&local_388);
  if ((pTVar1->Object == (SComboButton *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x408,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  this_01 = pTVar1->Object;
  FVar29.ReferenceController = (this->WrapButton).SharedReferenceCount.ReferenceController;
  if (FVar29.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar29.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar29.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((this_01 == (SComboButton *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x25d,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (FVar29.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar29.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar29.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar29.ReferenceController);
  if ((pFVar6->WrapButtonStyle).bIncludeSeparator != false) {
    pFVar18 = SHorizontalBox::FArguments::FArguments(&local_da8);
    FLLMScope::FLLMScope(&local_13ac,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
    local_12d0 = LLMTagDeclaration_UI_Slate.UniqueName;
    FMemScope::FMemScope(&local_12c8,&local_12d0,true);
    TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::
    TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>
              (&local_1150,"SHorizontalBox",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\MultiBox\\SClippingHorizontalBox.cpp"
               ,0x1d0,local_res18);
    FMemScope::~FMemScope(&local_12c8);
    FLLMScope::~FLLMScope(&local_13ac);
    TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::operator<<=
              (&local_1150,&local_1240,pFVar18);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1150._Widget.SharedReferenceCount.ReferenceController);
    DestructItems<SHorizontalBox::FSlot::FSlotArguments,int>
              ((FSlotArguments *)local_da8._Slots.AllocatorInstance.Data,local_da8._Slots.ArrayNum);
    if ((FSlotArguments *)local_da8._Slots.AllocatorInstance.Data != (FSlotArguments *)0x0) {
      FMemory::Free(local_da8._Slots.AllocatorInstance.Data);
    }
    FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_da8);
    if ((pFVar6->WrapButtonStyle).WrapButtonIndex != 0) {
      pFVar19 = SHorizontalBox::AddSlot(local_1240.Object,&local_730);
      pFVar20 = SHorizontalBox::FSlot::FSlotArguments::AutoWidth
                          ((FSlotArguments *)&pFVar19->_padding_);
      pTVar27 = &(pFVar6->WrapButtonStyle).SeparatorPadding;
      if ((pFVar6->WrapButtonStyle).SeparatorPadding.bIsSet == false) {
        pTVar27 = (TOptional<FMargin> *)&pFVar6->SeparatorPadding;
      }
      local_11b0.Value.Left = (pTVar27->TypedValue).Left;
      local_11b0.Value.Top = (pTVar27->TypedValue).Top;
      local_11b0.Value.Right = (pTVar27->TypedValue).Right;
      local_11b0.Value.Bottom = (pTVar27->TypedValue).Bottom;
      local_11b0.bIsSet = true;
      local_11b0.Getter._16_8_ = 0;
      local_11b0.Getter._0_8_ = 0;
      local_11b0.Getter._8_8_ = 0;
      pFVar20 = TPaddingWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::Padding
                          ((FSlotArgumentsMixin *)&pFVar20->field_0x18,&local_11b0);
      pFVar21 = SSeparator::FArguments::FArguments((FArguments *)local_ba0);
      pFVar21->_Orientation = Orient_Vertical;
      pTVar24 = &(pFVar6->WrapButtonStyle).SeparatorThickness;
      if ((pFVar6->WrapButtonStyle).SeparatorThickness.bIsSet == false) {
        pTVar24 = (TOptional<float> *)&pFVar6->SeparatorThickness;
      }
      pFVar21->_Thickness = pTVar24->TypedValue;
      pFVar25 = &(pFVar6->WrapButtonStyle).SeparatorBrush.TypedValue;
      if ((pFVar6->WrapButtonStyle).SeparatorBrush.bIsSet == false) {
        pFVar25 = &pFVar6->SeparatorBrush;
      }
      pFVar21->_SeparatorImage = pFVar25;
      FLLMScope::FLLMScope
                (&local_13a8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
      local_1328 = LLMTagDeclaration_UI_Slate.UniqueName;
      FMemScope::FMemScope(&local_1320,&local_1328,true);
      TSlateDecl<SSeparator,RequiredArgs::T0RequiredArgs>::
      TSlateDecl<SSeparator,RequiredArgs::T0RequiredArgs>
                (&local_1138,"SSeparator",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\MultiBox\\SClippingHorizontalBox.cpp"
                 ,0x1d9,local_res20);
      FMemScope::~FMemScope(&local_1320);
      FLLMScope::~FLLMScope(&local_13a8);
      pTVar22 = TSlateDecl<SSeparator,RequiredArgs::T0RequiredArgs>::operator<<=
                          (&local_1138,&local_10c8,pFVar21);
      pTVar31 = (pTVar22->SharedReferenceCount).ReferenceController;
      local_1260.Object = (SWidget *)pTVar22->Object;
      if (pTVar31 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar31->SharedReferenceCount = (atomic<int>)((int)pTVar31->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_1260.SharedReferenceCount.ReferenceController = pTVar31;
      TSlotBase<SHorizontalBox::FSlot>::FSlotArguments::operator[]
                ((FSlotArguments *)pFVar20,&local_1260);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar31);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_10c8.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_1138._Widget.SharedReferenceCount.ReferenceController);
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_980);
      if ((void *)local_980._8_8_ != (void *)0x0) {
        FMemory::Free((void *)local_980._8_8_);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_980);
      FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)local_ba0);
      SBoxPanel::FScopedWidgetSlotArguments<SHorizontalBox::FSlot>::
      ~FScopedWidgetSlotArguments<SHorizontalBox::FSlot>(&local_730);
    }
    pFVar23 = ::operator_new(0x58);
    local_1318 = (FSlot *)0x0;
    if (pFVar23 != (FSlot *)0x0) {
      *(undefined8 *)pFVar23 = 0;
      *(undefined8 *)&pFVar23->field_0x8 = 0;
      *(undefined8 *)&pFVar23->field_0x10 = 0;
      *(undefined8 *)&pFVar23->field_0x18 = 0;
      *(undefined8 *)&pFVar23->field_0x20 = 0;
      *(undefined8 *)&pFVar23->field_0x28 = 0;
      *(undefined8 *)&pFVar23->field_0x30 = 0;
      *(undefined8 *)&pFVar23->field_0x38 = 0;
      *(undefined8 *)&pFVar23->field_0x40 = 0;
      *(undefined8 *)&pFVar23->field_0x48 = 0;
      *(undefined8 *)&pFVar23->field_0x50 = 0;
      local_1318 = SHorizontalBox::FSlot::FSlot(pFVar23);
    }
    SHorizontalBox::FSlot::FSlotArguments::FSlotArguments
              ((FSlotArguments *)local_10a0,(FSlot *)&local_1318);
    local_10a8 = &___7__FScopedWidgetSlotArguments_VFSlot_SHorizontalBox___SBoxPanel__6B_;
    local_fb0 = -1;
    local_fb8 = (TPanelChildren<SBoxPanel::FSlot> *)&(local_1240.Object)->field_0x218;
    pFVar20 = SHorizontalBox::FSlot::FSlotArguments::AutoWidth((FSlotArguments *)local_10a0);
    if (FVar29.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (FVar29.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(FVar29.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_1370 = this_01;
    local_1368.ReferenceController = FVar29.ReferenceController;
    if ((SComboButton **)&pFVar20->field_0x8 != &local_1370) {
      *(SComboButton **)&pFVar20->field_0x8 = this_01;
      local_1370 = (SComboButton *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                ((FSharedReferencer<1> *)&pFVar20->field_0x10,&local_1368);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1368.ReferenceController);
    local_10a8 = &___7__FScopedWidgetSlotArguments_VFSlot_SHorizontalBox___SBoxPanel__6B_;
    if (local_10a0[0] != (undefined8 *)0x0) {
      if (local_fb0 == -1) {
        TPanelChildren<SBoxPanel::FSlot>::AddSlot(local_fb8,(FSlotArguments *)local_10a0);
      }
      else {
        TPanelChildren<SBoxPanel::FSlot>::InsertSlot
                  (local_fb8,(FSlotArguments *)local_10a0,local_fb0);
      }
    }
    TResizingWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::~FSlotArgumentsMixin
              (&local_1048);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1070);
    if ((void *)local_1070._8_8_ != (void *)0x0) {
      FMemory::Free((void *)local_1070._8_8_);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_1070);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_1090);
    if (local_10a0[0] != (undefined8 *)0x0) {
      (**(code **)*local_10a0[0])(local_10a0[0],1);
    }
    if ((pFVar6->WrapButtonStyle).WrapButtonIndex != -1) {
      pFVar23 = ::operator_new(0x58);
      local_1310 = (FSlot *)0x0;
      if (pFVar23 != (FSlot *)0x0) {
        *(undefined8 *)pFVar23 = 0;
        *(undefined8 *)&pFVar23->field_0x8 = 0;
        *(undefined8 *)&pFVar23->field_0x10 = 0;
        *(undefined8 *)&pFVar23->field_0x18 = 0;
        *(undefined8 *)&pFVar23->field_0x20 = 0;
        *(undefined8 *)&pFVar23->field_0x28 = 0;
        *(undefined8 *)&pFVar23->field_0x30 = 0;
        *(undefined8 *)&pFVar23->field_0x38 = 0;
        *(undefined8 *)&pFVar23->field_0x40 = 0;
        *(undefined8 *)&pFVar23->field_0x48 = 0;
        *(undefined8 *)&pFVar23->field_0x50 = 0;
        local_1310 = SHorizontalBox::FSlot::FSlot(pFVar23);
      }
      SHorizontalBox::FSlot::FSlotArguments::FSlotArguments
                ((FSlotArguments *)(local_ea8 + 8),(FSlot *)&local_1310);
      local_ea8._0_8_ = &___7__FScopedWidgetSlotArguments_VFSlot_SHorizontalBox___SBoxPanel__6B_;
      local_db0 = -1;
      local_db8 = (TPanelChildren<SBoxPanel::FSlot> *)&(local_1240.Object)->field_0x218;
      pFVar21 = SSeparator::FArguments::FArguments((FArguments *)local_968);
      pFVar21->_Orientation = Orient_Vertical;
      pTVar24 = &(pFVar6->WrapButtonStyle).SeparatorThickness;
      if ((pFVar6->WrapButtonStyle).SeparatorThickness.bIsSet == false) {
        pTVar24 = (TOptional<float> *)&pFVar6->SeparatorThickness;
      }
      pFVar21->_Thickness = pTVar24->TypedValue;
      pFVar25 = &(pFVar6->WrapButtonStyle).SeparatorBrush.TypedValue;
      if ((pFVar6->WrapButtonStyle).SeparatorBrush.bIsSet == false) {
        pFVar25 = &pFVar6->SeparatorBrush;
      }
      pFVar21->_SeparatorImage = pFVar25;
      FLLMScope::FLLMScope
                (&local_13a4,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
      local_1308 = LLMTagDeclaration_UI_Slate.UniqueName;
      FMemScope::FMemScope(&local_1300,&local_1308,true);
      TSlateDecl<SSeparator,RequiredArgs::T0RequiredArgs>::
      TSlateDecl<SSeparator,RequiredArgs::T0RequiredArgs>
                (&local_1120,"SSeparator",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\MultiBox\\SClippingHorizontalBox.cpp"
                 ,0x1eb,local_13b8);
      FMemScope::~FMemScope(&local_1300);
      FLLMScope::~FLLMScope(&local_13a4);
      pTVar22 = TSlateDecl<SSeparator,RequiredArgs::T0RequiredArgs>::operator<<=
                          (&local_1120,&local_1250,pFVar21);
      pTVar31 = (pTVar22->SharedReferenceCount).ReferenceController;
      local_e98 = pTVar22->Object;
      if (pTVar31 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar31->SharedReferenceCount = (atomic<int>)((int)pTVar31->SharedReferenceCount + 1);
        UNLOCK();
        LOCK();
        pTVar31->SharedReferenceCount = (atomic<int>)((int)pTVar31->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_13a0 = (code *)0x0;
      FStack_1398.ReferenceController = pTVar31;
      SharedPointerInternals::FSharedReferencer<1>::operator=(local_e90,&FStack_1398);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FStack_1398.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar31);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)
                 CONCAT44(local_1250.SharedReferenceCount.ReferenceController._4_4_,
                          local_1250.SharedReferenceCount.ReferenceController._0_4_));
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_1120._Widget.SharedReferenceCount.ReferenceController);
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_748);
      if ((void *)local_748._8_8_ != (void *)0x0) {
        FMemory::Free((void *)local_748._8_8_);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_748);
      FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)local_968);
      SBoxPanel::FScopedWidgetSlotArguments<SHorizontalBox::FSlot>::
      ~FScopedWidgetSlotArguments<SHorizontalBox::FSlot>
                ((FScopedWidgetSlotArguments<SHorizontalBox::FSlot> *)local_ea8);
    }
    if (local_1240.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_1240.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_1240.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar29.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1240.SharedReferenceCount.ReferenceController);
    FVar29.ReferenceController = local_1240.SharedReferenceCount.ReferenceController;
    this_01 = (SComboButton *)local_1240.Object;
  }
  pFVar23 = (FSlot *)0x0;
  SWidget::SlatePrepass((SWidget *)this_01,__real_3f800000);
  if (this->bAllowWrapButton == false) {
    fVar32 = 0.0;
  }
  else {
    FVar26 = SWidget::GetDesiredSize((SWidget *)this_01);
    fVar32 = *(float *)FVar26;
  }
  this->WrapButtonWidth = fVar32;
  this->WrapButtonIndex = (pFVar6->WrapButtonStyle).WrapButtonIndex;
  this_00 = ::operator_new(0x58);
  if (this_00 != (FSlot *)0x0) {
    *(undefined8 *)this_00 = 0;
    *(undefined8 *)&this_00->field_0x8 = 0;
    *(undefined8 *)&this_00->field_0x10 = 0;
    *(undefined8 *)&this_00->field_0x18 = 0;
    *(undefined8 *)&this_00->field_0x20 = 0;
    *(undefined8 *)&this_00->field_0x28 = 0;
    *(undefined8 *)&this_00->field_0x30 = 0;
    *(undefined8 *)&this_00->field_0x38 = 0;
    *(undefined8 *)&this_00->field_0x40 = 0;
    *(undefined8 *)&this_00->field_0x48 = 0;
    *(undefined8 *)&this_00->field_0x50 = 0;
    pFVar23 = SHorizontalBox::FSlot::FSlot(this_00);
  }
  local_12f8 = pFVar23;
  SHorizontalBox::FSlot::FSlotArguments::FSlotArguments
            ((FSlotArguments *)local_fa0,(FSlot *)&local_12f8);
  local_eb8 = (TPanelChildren<SBoxPanel::FSlot> *)&this->_padding_;
  local_fa8 = &___7__FScopedWidgetSlotArguments_VFSlot_SHorizontalBox___SBoxPanel__6B_;
  local_eb0 = -1;
  local_12c0.Getter._16_8_ = 0;
  local_12c0.Value = 0.0;
  local_12c0.bIsSet = true;
  local_12c0.Getter._0_8_ = 0;
  local_12c0.Getter._8_8_ = 0;
  pFVar20 = SHorizontalBox::FSlot::FSlotArguments::FillWidth
                      ((FSlotArguments *)local_fa0,&local_12c0);
  pFVar20 = TPaddingWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::Padding
                      ((FSlotArgumentsMixin *)&pFVar20->field_0x18,0.0);
  if (FVar29.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar29.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar29.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_1360 = this_01;
  local_1358.ReferenceController = FVar29.ReferenceController;
  if ((SComboButton **)&pFVar20->field_0x8 != &local_1360) {
    *(SComboButton **)&pFVar20->field_0x8 = this_01;
    local_1360 = (SComboButton *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&pFVar20->field_0x10,&local_1358);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1358.ReferenceController);
  local_fa8 = &___7__FScopedWidgetSlotArguments_VFSlot_SHorizontalBox___SBoxPanel__6B_;
  if (local_fa0[0] != (undefined8 *)0x0) {
    if (local_eb0 == -1) {
      TPanelChildren<SBoxPanel::FSlot>::AddSlot(local_eb8,(FSlotArguments *)local_fa0);
    }
    else {
      TPanelChildren<SBoxPanel::FSlot>::InsertSlot(local_eb8,(FSlotArguments *)local_fa0,local_eb0);
    }
  }
  TResizingWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::~FSlotArgumentsMixin
            (&local_f48);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_f70);
  if ((void *)local_f70._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_f70._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_f70);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_f90);
  if (local_fa0[0] != (undefined8 *)0x0) {
    (**(code **)*local_fa0[0])(local_fa0[0],1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar29.ReferenceController);
  return;
}

// ComputeDesiredSize @ 1427ecf60

TVector2<double> * __thiscall
SClippingHorizontalBox::ComputeDesiredSize
          (SClippingHorizontalBox *this,TVector2<double> *__return_storage_ptr__,float param_1)

{
  FSlot *pFVar1;
  FDeprecateSlateVector2D FVar2;
  
  SBoxPanel::ComputeDesiredSize((SBoxPanel *)this,__return_storage_ptr__,param_1);
  pFVar1 = TPanelChildren<SBoxPanel::FSlot>::operator[]
                     ((TPanelChildren<SBoxPanel::FSlot> *)&this->_padding_,(int)this->_padding_ + -1
                     );
  FVar2 = SWidget::GetDesiredSize(*(SWidget **)&pFVar1->field_0x10);
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       (__return_storage_ptr__->field0_0x0)._s_0.X - (double)*(float *)FVar2;
  return __return_storage_ptr__;
}

// Construct @ 1427eeb70

void __thiscall SClippingHorizontalBox::Construct(SClippingHorizontalBox *this,FArguments *param_1)

{
  FToolBarStyle *pFVar1;
  TOptional<bool> *pTVar2;
  
  TDelegate<TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>(&this->OnWrapButtonClicked,&param_1->_OnWrapButtonClicked);
  this->StyleSet = param_1->_StyleSet;
  this->StyleName = param_1->_StyleName;
  this->bIsFocusable = param_1->_IsFocusable;
  TDelegate<FMenuEntryResizeParams___cdecl(TSharedRef<SWidget,1>_const_&),FDefaultDelegateUserPolicy>
  ::operator=(&this->OnGetWidgetResizeParams,&param_1->_OnGetWidgetResizeParams);
  pFVar1 = (FToolBarStyle *)
           (**(code **)((longlong)*this->StyleSet + 0xa0))
                     (this->StyleSet,FToolBarStyle::TypeName,this->StyleName,0,1);
  if (pFVar1 == (FToolBarStyle *)0x0) {
    pFVar1 = FToolBarStyle::GetDefault();
  }
  pTVar2 = &param_1->_AllowWrapButton;
  if ((param_1->_AllowWrapButton).bIsSet == false) {
    pTVar2 = (TOptional<bool> *)&pFVar1->bAllowWrapButton;
  }
  this->bAllowWrapButton = pTVar2->TypedValue;
  return;
}

// OnArrangeChildren @ 142822450

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void __thiscall
SClippingHorizontalBox::OnArrangeChildren
          (SClippingHorizontalBox *this,FGeometry *param_1,FArrangedChildren *param_2)

{
  int *piVar1;
  TArray<FArrangedWidget,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> *this_00;
  TArray<TWeakPtr<SWidget,1>,TSizedDefaultAllocator<32>_> *pTVar2;
  TWeakPtr<SWidget,1> *pTVar3;
  FDeprecateSlateVector2D FVar4;
  longlong *plVar5;
  undefined8 uVar6;
  FScriptContainerElement *pFVar7;
  ForElementType<FArrangedWidget> FVar8;
  TReferenceControllerBase<1> *pTVar9;
  SWidget *pSVar10;
  SWidget *pSVar11;
  code *pcVar12;
  int iVar13;
  FArrangedChildren *pFVar14;
  FGeometry *pFVar15;
  TVector2<float>_u_0 TVar16;
  bool bVar17;
  char cVar18;
  uint uVar19;
  int iVar20;
  FArrangedWidget *this_01;
  ForElementType<FArrangedWidget> FVar21;
  uint uVar22;
  ForAnyElementType FVar23;
  FGeometry *this_02;
  longlong lVar24;
  FClippingInfo *pFVar25;
  FToolBarStyle *pFVar26;
  ForAnyElementType FVar27;
  FMargin *pFVar28;
  FScriptContainerElement *pFVar29;
  FClippingInfo *pFVar30;
  FDeprecateSlateVector2D FVar31;
  uint uVar32;
  FClippingInfo *pFVar33;
  float fVar34;
  undefined1 auStackY_308 [32];
  undefined1 local_2b8 [8];
  float local_2b0;
  float fStack_2ac;
  TArray<UE::Slate::FClippingInfo,TSizedDefaultAllocator<32>_> local_2a8;
  FToolBarStyle *local_298;
  ForAnyElementType local_290;
  undefined8 local_288;
  undefined8 local_280;
  TOptional<float> local_278;
  FDeprecateSlateVector2D local_270;
  SWidget *local_268;
  TReferenceControllerBase<1> *local_260;
  FArrangedChildren *local_258;
  FGeometry *local_250;
  undefined8 local_248;
  undefined8 local_240;
  undefined8 local_238;
  float local_230 [2];
  undefined8 local_228;
  FSharedReferencer<1> local_220;
  FSlateLayoutTransform local_218;
  FSlateLayoutTransform local_20c;
  undefined8 local_200;
  undefined8 local_1f8;
  FDeprecateVector2DParameter local_1f0;
  FSlateLayoutTransform local_1e8;
  FSlateLayoutTransform local_1dc;
  undefined4 local_1d0;
  FScriptContainerElement local_1cc;
  undefined1 local_1c8 [24];
  FScriptContainerElement local_1b0;
  FScriptContainerElement local_1af;
  undefined1 local_1a8 [24];
  FScriptContainerElement local_190;
  FScriptContainerElement local_18f;
  undefined1 local_188 [24];
  FWrappingParams local_170;
  FMargin local_108;
  FReadAccessScope local_f8;
  FReadAccessScope local_e0;
  FGeometry local_c8;
  FGeometry local_90;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_308;
  local_258 = param_2;
  local_250 = param_1;
  local_248 = (FDeprecateSlateVector2D)this;
  if (((this->WrapButton).Object == (SComboButton *)0x0) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("WrapButton.IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\MultiBox\\SClippingHorizontalBox.cpp"
                          ,0xfb,L""), bVar17)) {
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
  SBoxPanel::OnArrangeChildren((SBoxPanel *)this,param_1,param_2);
  piVar1 = &(this->ClippedWidgets).ArrayMax;
  pTVar3 = (TWeakPtr<SWidget,1> *)(this->ClippedWidgets).AllocatorInstance.Data;
  iVar20 = (this->ClippedWidgets).ArrayNum;
  if ((this->ClippedWidgets).ArrayMax < 0) {
    DestructItems<TWeakPtr<SWidget,1>,int>(pTVar3,iVar20);
    (this->ClippedWidgets).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,&(this->ClippedWidgets).AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<TWeakPtr<SWidget,1>,int>(pTVar3,iVar20);
    (this->ClippedWidgets).ArrayNum = 0;
  }
  pFVar33 = (FClippingInfo *)0x0;
  uVar32 = 0;
  local_2a8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_2a8.ArrayNum = 0;
  local_2a8.ArrayMax = 0;
  local_2b0 = 0.0;
  if (0 < (param_2->Array).ArrayNum + -1) {
    local_270 = (FDeprecateSlateVector2D)&param_2->Array;
    local_298 = (FToolBarStyle *)0x0;
    pFVar30 = pFVar33;
    pFVar25 = pFVar33;
    do {
      FVar31 = local_270;
      pFVar26 = local_298;
      uVar22 = uVar32;
      if ((int)(uint)pFVar25 < *(int *)((longlong)local_270 + 0x128)) {
        uVar22 = ~(uint)pFVar25 >> 0x1f;
      }
      uVar19 = (uint)pFVar30;
      if ((uVar22 == 0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         uVar19 = local_2a8.ArrayNum, bVar17)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      FVar4 = *(FDeprecateSlateVector2D *)((longlong)FVar31 + 0x120);
      if (FVar4 != (FDeprecateSlateVector2D)0x0) {
        FVar31 = FVar4;
      }
      if (uVar19 == local_2a8.ArrayMax) {
        uVar19 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x8f0,&local_2a8.AllocatorInstance,&local_2a8.ArrayMax);
      }
      local_2a8.ArrayNum = uVar19 + 1;
      pFVar29 = local_2a8.AllocatorInstance.Data + (longlong)(int)uVar19 * 0xf0;
      DefaultConstructItems<UE::Slate::FClippingInfo,int>(pFVar29,1);
      local_220.ReferenceController =
           *(TReferenceControllerBase<1> **)((longlong)pFVar26 + 0x40 + (longlong)FVar31);
      local_228 = *(undefined8 *)((longlong)pFVar26 + 0x38 + (longlong)FVar31);
      if (local_220.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_220.ReferenceController)->SharedReferenceCount =
             (atomic<int>)((int)(local_220.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      if (pFVar29 != (FScriptContainerElement *)&local_228) {
        *(undefined8 *)&pFVar29->field_0x0 = local_228;
        local_228 = 0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  ((FSharedReferencer<1> *)(pFVar29 + 8),&local_220);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_220.ReferenceController);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                 &this->OnGetWidgetResizeParams,&local_f8);
      if (((*(int *)&(this->OnGetWidgetResizeParams).field_0x10 == 0) ||
          (plVar5 = *(longlong **)&(this->OnGetWidgetResizeParams).field_0x8,
          plVar5 == (longlong *)0x0)) || (cVar18 = (**(code **)(*plVar5 + 0x38))(), cVar18 == '\0'))
      {
        bVar17 = false;
      }
      else {
        bVar17 = true;
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_f8);
      pFVar26 = local_298;
      if (bVar17) {
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                   &this->OnGetWidgetResizeParams,&local_e0);
        pFVar26 = local_298;
        pFVar30 = pFVar33;
        if (*(int *)&(this->OnGetWidgetResizeParams).field_0x10 != 0) {
          pFVar30 = *(FClippingInfo **)&(this->OnGetWidgetResizeParams).field_0x8;
        }
        (*(code *)(((pFVar30->Widget).Object)->PersistentState).InitialClipState.TypedValue.
                  ScissorRect.TypedValue.TopLeft.field0_0x0)
                  (pFVar30,&local_1d0,(longlong)local_298 + 0x38 + (longlong)FVar31);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  (&local_e0);
        *(undefined4 *)(pFVar29 + 0x10) = local_1d0;
        pFVar29[0x14] = local_1cc;
        TDelegateBase<FNotThreadSafeDelegateMode>::operator=
                  ((TDelegateBase<FNotThreadSafeDelegateMode> *)(pFVar29 + 0x18),
                   (TDelegateBase<FNotThreadSafeDelegateMode> *)local_1c8);
        pFVar29[0x30] = local_1b0;
        pFVar29[0x31] = local_1af;
        TDelegateBase<FNotThreadSafeDelegateMode>::operator=
                  ((TDelegateBase<FNotThreadSafeDelegateMode> *)(pFVar29 + 0x38),
                   (TDelegateBase<FNotThreadSafeDelegateMode> *)local_1a8);
        pFVar29[0x50] = local_190;
        pFVar29[0x51] = local_18f;
        TDelegateBase<FNotThreadSafeDelegateMode>::operator=
                  ((TDelegateBase<FNotThreadSafeDelegateMode> *)(pFVar29 + 0x58),
                   (TDelegateBase<FNotThreadSafeDelegateMode> *)local_188);
        pFVar29[0x70] = (FScriptContainerElement)local_170.Allow.Value;
        pFVar29[0x71] = (FScriptContainerElement)local_170.Allow.bIsSet;
        TDelegateBase<FNotThreadSafeDelegateMode>::operator=
                  ((TDelegateBase<FNotThreadSafeDelegateMode> *)(pFVar29 + 0x78),
                   (TDelegateBase<FNotThreadSafeDelegateMode> *)&local_170.Allow.Getter);
        *(int *)(pFVar29 + 0x90) = local_170.Priority.Value;
        pFVar29[0x94] = (FScriptContainerElement)local_170.Priority.bIsSet;
        TDelegateBase<FNotThreadSafeDelegateMode>::operator=
                  ((TDelegateBase<FNotThreadSafeDelegateMode> *)(pFVar29 + 0x98),
                   (TDelegateBase<FNotThreadSafeDelegateMode> *)&local_170.Priority.Getter);
        pFVar29[0xb0] = (FScriptContainerElement)local_170.Mode.Value;
        pFVar29[0xb1] = (FScriptContainerElement)local_170.Mode.bIsSet;
        TDelegateBase<FNotThreadSafeDelegateMode>::operator=
                  ((TDelegateBase<FNotThreadSafeDelegateMode> *)(pFVar29 + 0xb8),
                   (TDelegateBase<FNotThreadSafeDelegateMode> *)&local_170.Mode.Getter);
        if (&local_170.VerticalOverflowBehavior !=
            (TOptional<UE::Slate::PrioritizedWrapBox::EVerticalOverflowBehavior> *)(pFVar29 + 0xd0))
        {
          if (local_170.VerticalOverflowBehavior.bIsSet == false) {
            if (pFVar29[0xd1] != (FScriptContainerElement)0x0) {
              pFVar29[0xd1] = (FScriptContainerElement)0x0;
            }
          }
          else {
            pFVar29[0xd0] = (FScriptContainerElement)local_170.VerticalOverflowBehavior.TypedValue;
            pFVar29[0xd1] = (FScriptContainerElement)0x1;
          }
        }
        if (&local_170.ForceNewLine != (TOptional<bool> *)(pFVar29 + 0xd2)) {
          if (local_170.ForceNewLine.bIsSet == false) {
            if (pFVar29[0xd3] != (FScriptContainerElement)0x0) {
              pFVar29[0xd3] = (FScriptContainerElement)0x0;
            }
          }
          else {
            pFVar29[0xd2] = (FScriptContainerElement)local_170.ForceNewLine.TypedValue;
            pFVar29[0xd3] = (FScriptContainerElement)0x1;
          }
        }
        FMenuEntryResizeParams::FWrappingParams::~FWrappingParams(&local_170);
        TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                  ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_188);
        if ((void *)local_188._8_8_ != (void *)0x0) {
          FMemory::Free((void *)local_188._8_8_);
        }
        FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                  ((FMRSWRecursiveAccessDetector *)local_188);
        TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                  ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1a8);
        if ((void *)local_1a8._8_8_ != (void *)0x0) {
          FMemory::Free((void *)local_1a8._8_8_);
        }
        FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                  ((FMRSWRecursiveAccessDetector *)local_1a8);
        TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                  ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1c8);
        if ((void *)local_1c8._8_8_ != (void *)0x0) {
          FMemory::Free((void *)local_1c8._8_8_);
        }
        FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                  ((FMRSWRecursiveAccessDetector *)local_1c8);
      }
      uVar6 = *(undefined8 *)((longlong)pFVar26 + (longlong)FVar31);
      local_240 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
      TVar16._s_0 = local_240;
      local_240._0_4_ = UE::Math::TVector2<float>::ZeroVector.field0_0x0._0_4_;
      local_238._0_4_ = (float)uVar6;
      local_240._4_4_ = UE::Math::TVector2<float>::ZeroVector.field0_0x0._4_4_;
      local_238._4_4_ = (float)((ulonglong)uVar6 >> 0x20);
      local_280 = (FDeprecateSlateVector2D)
                  CONCAT44(local_240._4_4_ * local_238._4_4_,(float)local_240 * (float)local_238);
      local_200 = local_280;
      *(double *)(pFVar29 + 0xd8) =
           (double)((float)local_240 * (float)local_238 +
                   *(float *)((longlong)pFVar26 + 0x14 + (longlong)FVar31));
      local_1f8 = *(undefined8 *)((longlong)pFVar26 + (longlong)FVar31);
      *(double *)(pFVar29 + 0xe0) = (double)(float)local_1f8;
      uVar22 = (int)this->_padding_ - 1;
      local_240 = TVar16._s_0;
      local_238 = uVar6;
      if (-1 < (int)uVar22) {
        lVar24 = (longlong)(int)uVar22 * 8;
        do {
          uVar19 = uVar32;
          if ((int)uVar22 < (int)this->_padding_) {
            uVar19 = ~uVar22 >> 0x1f;
          }
          if ((uVar19 == 0) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar17)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          if ((*(longlong *)&pFVar29->field_0x0 != 0) &&
             (*(longlong *)&pFVar29->field_0x0 ==
              *(longlong *)(*(longlong *)(lVar24 + this->_padding_) + 0x10))) {
            uVar19 = uVar32;
            if ((int)uVar22 < (int)this->_padding_) {
              uVar19 = ~uVar22 >> 0x1f;
            }
            if ((uVar19 == 0) &&
               (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar17)) {
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            if (*(int *)(*(longlong *)(lVar24 + this->_padding_) + 0x40) != 1) {
              uVar19 = uVar32;
              if ((int)uVar22 < (int)this->_padding_) {
                uVar19 = ~uVar22 >> 0x1f;
              }
              if ((uVar19 == 0) &&
                 (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar17)) {
                pcVar12 = (code *)swi(3);
                (*pcVar12)();
                return;
              }
              if (*(int *)(*(longlong *)(lVar24 + this->_padding_) + 0x40) != 2) goto LAB_142822a94;
            }
            pFVar29[0xe8] = (FScriptContainerElement)0x1;
            pFVar26 = local_298;
            break;
          }
LAB_142822a94:
          lVar24 = lVar24 + -8;
          uVar22 = uVar22 - 1;
          pFVar26 = local_298;
        } while (-1 < (int)uVar22);
      }
      local_298 = (FToolBarStyle *)((longlong)pFVar26 + 0x48);
      local_2b0 = (float)((int)local_2b0 + 1);
      pFVar25 = (FClippingInfo *)(ulonglong)(uint)local_2b0;
      param_2 = local_258;
      if ((local_258->Array).ArrayNum + -1 <= (int)local_2b0) break;
      pFVar30 = (FClippingInfo *)(ulonglong)(uint)local_2a8.ArrayNum;
    } while( true );
  }
  local_280 = local_250->Size;
  local_298 = (FToolBarStyle *)
              (**(code **)((longlong)*this->StyleSet + 0xa0))
                        (this->StyleSet,FToolBarStyle::TypeName,this->StyleName);
  if (local_298 == (FToolBarStyle *)0x0) {
    local_298 = FToolBarStyle::GetDefault();
  }
  local_278.bIsSet = false;
  if (this->bAllowWrapButton == false) {
    pFVar28 = &local_108;
    local_108.Left = 0.0;
    local_108.Top = 0.0;
    local_108.Right = 0.0;
    local_108.Bottom = 0.0;
    iVar20 = 0;
    fVar34 = 0.0;
  }
  else {
    iVar20 = this->WrapButtonIndex;
    pFVar28 = &(local_298->WrapButtonStyle).Padding;
    fVar34 = this->WrapButtonWidth;
  }
  UE::Slate::PrioritizedResize((float)local_280,fVar34,pFVar28,iVar20,&local_2a8,&local_278);
  local_290.Data = (FScriptContainerElement *)0x0;
  pFVar25 = (FClippingInfo *)
            (local_2a8.AllocatorInstance.Data + (longlong)local_2a8.ArrayNum * 0xf0);
  local_288 = 0;
  pFVar30 = pFVar33;
  FVar27.Data = (FScriptContainerElement *)pFVar33;
  for (FVar23.Data = local_2a8.AllocatorInstance.Data; iVar20 = (int)pFVar30,
      (FClippingInfo *)FVar23.Data != pFVar25; FVar23.Data = FVar23.Data + 0xf0) {
    if (((FClippingInfo *)FVar23.Data)->bWasClipped != false) {
      if ((FVar27.Data <= FVar23.Data) &&
         (local_288._4_4_ = (int)(local_288 >> 0x20), lVar24 = (longlong)local_288._4_4_,
         FVar23.Data < (FClippingInfo *)((longlong)FVar27.Data + lVar24 * 0xf0))) {
        bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           );
        if (bVar17) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        FVar27.Data = local_290.Data;
        iVar20 = (int)local_288;
      }
      if (iVar20 == local_288._4_4_) {
        iVar20 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x8f0,&local_290,(int *)((longlong)&local_288 + 4));
        FVar27.Data = local_290.Data;
      }
      local_288 = CONCAT44(local_288._4_4_,iVar20 + 1);
      UE::Slate::FClippingInfo::FClippingInfo
                ((FClippingInfo *)((longlong)FVar27.Data + (longlong)iVar20 * 0xf0),
                 (FClippingInfo *)FVar23.Data);
      pFVar30 = (FClippingInfo *)(local_288 & 0xffffffff);
      FVar27.Data = local_290.Data;
    }
  }
  DestructItems<UE::Slate::FClippingInfo,int>((FClippingInfo *)FVar27.Data,iVar20);
  if ((FClippingInfo *)local_290.Data != (FClippingInfo *)0x0) {
    FMemory::Free(local_290.Data);
  }
  iVar13 = local_2a8.ArrayNum;
  if (iVar20 == 0) {
    iVar20 = (param_2->Array).ArrayNum + -1;
  }
  else {
    pTVar2 = &this->ClippedWidgets;
    pFVar29 = local_2a8.AllocatorInstance.Data + 0xe9;
    pFVar30 = (FClippingInfo *)
              (local_2a8.AllocatorInstance.Data + (longlong)local_2a8.ArrayNum * 0xf0);
    while( true ) {
      if (local_2a8.ArrayNum != iVar13) {
        local_2b8[0] = 0;
        `TCheckedPointerIterator<UE::Slate::FClippingInfo,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_2b8);
      }
      pFVar15 = local_250;
      pFVar14 = local_258;
      if ((FClippingInfo *)(pFVar29 + -0xe9) == pFVar30) break;
      if ((pFVar29[1] != (FScriptContainerElement)0x0) && (*pFVar29 != (FScriptContainerElement)0x0)
         ) {
        local_268 = (((FClippingInfo *)(pFVar29 + -0xe9))->Widget).Object;
        local_260 = *(TReferenceControllerBase<1> **)(pFVar29 + -0xe1);
        if (local_260 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          local_260->WeakReferenceCount = (atomic<int>)((int)local_260->WeakReferenceCount + 1);
          UNLOCK();
        }
        pFVar7 = (pTVar2->AllocatorInstance).Data;
        if (((pFVar7 <= (FScriptContainerElement *)&local_268) &&
            ((FScriptContainerElement *)&local_268 <
             pFVar7 + (longlong)(this->ClippedWidgets).ArrayMax * 0x10)) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar17)) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        iVar20 = (this->ClippedWidgets).ArrayNum;
        if (iVar20 == (this->ClippedWidgets).ArrayMax) {
          iVar20 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x810,&pTVar2->AllocatorInstance,&(this->ClippedWidgets).ArrayMax);
        }
        (this->ClippedWidgets).ArrayNum = iVar20 + 1;
        pFVar7 = (pTVar2->AllocatorInstance).Data;
        *(SWidget **)(pFVar7 + (longlong)iVar20 * 0x10) = local_268;
        *(TReferenceControllerBase<1> **)(pFVar7 + (longlong)iVar20 * 0x10 + 8) = local_260;
        local_260 = (TReferenceControllerBase<1> *)0x0;
        local_268 = (SWidget *)0x0;
      }
      pFVar29 = pFVar29 + 0xf0;
    }
    iVar20 = (local_258->Array).ArrayNum;
    if (0 < iVar20 + -1) {
      this_00 = &local_258->Array;
      local_2b0 = 1.4013e-45;
      pFVar30 = pFVar33;
      pFVar25 = pFVar33;
      do {
        fVar34 = local_2b0;
        uVar19 = (uint)pFVar30;
        uVar22 = uVar32;
        if ((int)uVar19 < (pFVar14->Array).ArrayNum) {
          uVar22 = ~uVar19 >> 0x1f;
        }
        if ((uVar22 == 0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar17)) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        FVar8 = (pFVar14->Array).AllocatorInstance.SecondaryData;
        FVar21 = (ForElementType<FArrangedWidget>)this_00;
        if (FVar8 != (ForElementType<FArrangedWidget>)0x0) {
          FVar21 = FVar8;
        }
        pTVar9 = *(TReferenceControllerBase<1> **)
                  ((uchar *)((longlong)FVar21 + 0x30) + (longlong)&pFVar25->ResizeParams);
        pSVar10 = *(SWidget **)
                   ((uchar *)((longlong)FVar21 + 0x28) + (longlong)&pFVar25->ResizeParams);
        if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
          UNLOCK();
        }
        for (FVar27.Data = local_2a8.AllocatorInstance.Data;
            (FClippingInfo *)FVar27.Data !=
            (FClippingInfo *)
            (local_2a8.AllocatorInstance.Data + (longlong)local_2a8.ArrayNum * 0xf0);
            FVar27.Data = FVar27.Data + 0xf0) {
          pSVar11 = (((FClippingInfo *)FVar27.Data)->Widget).Object;
          if ((pSVar11 != (SWidget *)0x0) && (pSVar11 == pSVar10)) {
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (pTVar9);
            if ((FClippingInfo *)FVar27.Data != (FClippingInfo *)0x0) goto LAB_142822f6e;
            goto LAB_142822f48;
          }
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
        FVar27.Data = (FScriptContainerElement *)pFVar33;
LAB_142822f48:
        bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("Info",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\MultiBox\\SClippingHorizontalBox.cpp"
                            ,0x156,L"");
        if (bVar17) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
LAB_142822f6e:
        iVar20 = (pFVar14->Array).ArrayNum;
        if (((FClippingInfo *)FVar27.Data)->bWasClipped == false) {
          uVar22 = uVar32;
          if ((int)uVar19 < iVar20) {
            uVar22 = ~uVar19 >> 0x1f;
          }
          if ((uVar22 == 0) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar17)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          FVar8 = (pFVar14->Array).AllocatorInstance.SecondaryData;
          local_218.Translation.field0_0x0._s_0.X = (float)((FClippingInfo *)FVar27.Data)->X;
          local_218.Scale = 1.0;
          FVar21 = (ForElementType<FArrangedWidget>)this_00;
          if (FVar8 != (ForElementType<FArrangedWidget>)0x0) {
            FVar21 = FVar8;
          }
          local_218.Translation.field0_0x0._s_0.Y = 0.0;
          this_02 = (FGeometry *)((longlong)&(pFVar25->Widget).Object + (longlong)FVar21);
          local_230[0] = (float)((FClippingInfo *)FVar27.Data)->Width;
          local_270 = this_02->Size;
          local_1e8.Translation.field0_0x0 = (pFVar15->AbsolutePosition).field0_0x0;
          local_1e8.Scale = pFVar15->Scale;
          local_230[1] = (float)local_270._4_4_;
          FGeometry::FGeometry
                    (&local_c8,(FDeprecateVector2DParameter *)local_230,&local_218,&local_1e8,
                     &pFVar15->AccumulatedRenderTransform,pFVar15->bHasRenderTransform);
          FGeometry::operator=(this_02,&local_c8);
        }
        else {
          uVar22 = uVar32;
          if ((int)fVar34 <= iVar20) {
            uVar22 = ~uVar19 >> 0x1f;
          }
          if ((uVar22 == 0) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x458,
                                  L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                 ), bVar17)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          TArray<FArrangedWidget,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>::
          RemoveAtImpl(this_00,uVar19,1);
          UE::Core::Private::
          ReallocShrink<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FArrangedWidget>_>
                    (0x48,8,&this_00->AllocatorInstance,(pFVar14->Array).ArrayNum,
                     &(pFVar14->Array).ArrayMax);
          uVar19 = uVar19 - 1;
          local_2b0 = (float)((int)fVar34 - 1);
          pFVar25 = (FClippingInfo *)&pFVar25[-1].ResizeParams.Wrapping.Priority.Getter.field_0x10;
        }
        local_2b0 = (float)((int)local_2b0 + 1);
        pFVar30 = (FClippingInfo *)(ulonglong)(uVar19 + 1);
        pFVar25 = (FClippingInfo *)&(pFVar25->ResizeParams).AllowClipping.Getter.field_0x10;
        iVar20 = (local_258->Array).ArrayNum;
        this = (SClippingHorizontalBox *)local_248;
      } while ((int)(uVar19 + 1) < iVar20 + -1);
    }
    iVar20 = iVar20 + -1;
    param_2 = local_258;
    if (local_278.bIsSet != false) {
      this_01 = FArrangedChildren::operator[](local_258,iVar20);
      local_2b0 = *(float *)((longlong)this + 0x294);
      FVar31 = (this_01->Geometry).Size;
      local_248._4_4_ = FVar31._4_4_;
      fVar34 = (local_298->WrapButtonStyle).Padding.Left;
      if (fVar34 < 0.0) {
        local_2b0 = local_2b0 - fVar34;
        local_278.TypedValue = local_278.TypedValue - fVar34;
      }
      fVar34 = (local_298->WrapButtonStyle).Padding.Right;
      if (fVar34 < 0.0) {
        local_2b0 = local_2b0 - fVar34;
      }
      fVar34 = (local_298->WrapButtonStyle).Padding.Top;
      local_20c.Translation.field0_0x0._s_0.Y = 0.0;
      if (fVar34 < 0.0) {
        local_248._4_4_ = local_248._4_4_ - fVar34;
        local_20c.Translation.field0_0x0._s_0.Y = fVar34;
      }
      fVar34 = (local_298->WrapButtonStyle).Padding.Bottom;
      fStack_2ac = local_248._4_4_;
      if (fVar34 < 0.0) {
        fStack_2ac = local_248._4_4_ - fVar34;
      }
      local_1f0._4_4_ = fStack_2ac;
      local_1f0._0_4_ = local_2b0;
      local_1dc.Translation.field0_0x0 = (local_250->AbsolutePosition).field0_0x0;
      local_1dc.Scale = local_250->Scale;
      local_20c.Scale = 1.0;
      local_248 = FVar31;
      local_20c.Translation.field0_0x0._s_0.X = local_278.TypedValue;
      FGeometry::FGeometry
                (&local_90,&local_1f0,&local_20c,&local_1dc,&local_250->AccumulatedRenderTransform,
                 local_250->bHasRenderTransform);
      FGeometry::operator=(&this_01->Geometry,&local_90);
      goto LAB_142822cbd;
    }
  }
  FArrangedChildren::Remove(param_2,iVar20,1);
LAB_142822cbd:
  DestructItems<UE::Slate::FClippingInfo,int>
            ((FClippingInfo *)local_2a8.AllocatorInstance.Data,local_2a8.ArrayNum);
  if ((FClippingInfo *)local_2a8.AllocatorInstance.Data != (FClippingInfo *)0x0) {
    FMemory::Free(local_2a8.AllocatorInstance.Data);
  }
  return;
}

// OnPaint @ 14282af10

/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
SClippingHorizontalBox::OnPaint
          (SClippingHorizontalBox *this,FPaintArgs *param_1,FGeometry *param_2,FSlateRect *param_3,
          FSlateWindowElementList *param_4,int param_5,FWidgetStyle *param_6,bool param_7)

{
  int iVar1;
  
  iVar1 = SPanel::OnPaint((SPanel *)this,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return iVar1;
}

// OnWrapButtonOpenChanged @ 14282c040

void __thiscall
SClippingHorizontalBox::OnWrapButtonOpenChanged(SClippingHorizontalBox *this,bool param_1)

{
  TSharedPtr<FActiveTimerHandle,1> *pTVar1;
  FActiveTimerHandle *pFVar2;
  SWidget *pSVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  undefined8 *puVar8;
  TSharedRef<SWidget,1> *pTVar9;
  ulong64 uVar10;
  TSharedRef<FActiveTimerHandle,1> *pTVar11;
  FSharedReferencer<1> FVar12;
  TReferenceControllerBase<1> *local_res18;
  TSharedRef<FActiveTimerHandle,1> local_c8;
  FActiveTimerHandle *local_b8;
  FSharedReferencer<1> local_b0;
  undefined1 local_a8 [8];
  FDelegateAllocation local_a0;
  longlong local_90;
  FSharedReferencer<1> FStack_88;
  TSharedRef<FActiveTimerHandle,1> local_80;
  FDestructionSentinel local_70;
  FDelegateAllocation *local_58;
  TSharedRef<SWidget,1> local_50;
  
  bVar6 = false;
  bVar5 = false;
  bVar7 = false;
  pTVar1 = &this->WrapButtonOpenTimer;
  pFVar2 = pTVar1->Object;
  if (param_1) {
    if (pFVar2 != (FActiveTimerHandle *)0x0) {
      return;
    }
    local_a8 = (undefined1  [8])0x0;
    local_a0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_a0.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_a8,
               (FWriteAccessScope *)&local_70);
    local_58 = &local_a0;
    puVar8 = UE::Core::Private::DelegateAllocate(0x38,&local_a0);
    if (puVar8 != (undefined8 *)0x0) {
      local_c8.Object = (FActiveTimerHandle *)UpdateWrapButtonStatus;
      local_c8.SharedReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)
           ((ulonglong)local_80.SharedReferenceCount.ReferenceController._4_4_ << 0x20);
      pTVar9 = TSharedFromThis<SWidget,1>::AsShared
                         ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_50);
      local_res18 = (pTVar9->SharedReferenceCount).ReferenceController;
      pSVar3 = pTVar9->Object;
      if (local_res18 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        local_res18->SharedReferenceCount =
             (atomic<int>)((int)local_res18->SharedReferenceCount + 1);
        UNLOCK();
        LOCK();
        local_res18->SharedReferenceCount =
             (atomic<int>)((int)local_res18->SharedReferenceCount + 1);
        UNLOCK();
      }
      *puVar8 = &
                ___7__TCommonDelegateInstanceState___A6A_AW4EActiveTimerReturnType__NM_ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar10 = FDelegateHandle::GenerateNewID();
      puVar8[2] = uVar10;
      *puVar8 = &
                ___7__TBaseSPMethodDelegateInstance__0A_VSClippingHorizontalBox___00__A6A_AW4EActiveTimerReturnType__NM_ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      puVar8[3] = pSVar3;
      puVar8[4] = local_res18;
      if (local_res18 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        local_res18->WeakReferenceCount = (atomic<int>)((int)local_res18->WeakReferenceCount + 1);
        UNLOCK();
      }
      bVar6 = true;
      bVar5 = true;
      bVar7 = true;
      puVar8[5] = local_c8.Object;
      puVar8[6] = local_c8.SharedReferenceCount.ReferenceController;
    }
    if (bVar7) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_res18);
    }
    if (bVar5) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_res18);
    }
    if (bVar6) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_50.SharedReferenceCount.ReferenceController);
    }
    if (local_70.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_70.Accessor,&local_70);
    }
    pTVar11 = SWidget::RegisterActiveTimer
                        ((SWidget *)this,&local_80,0.0,
                         (TDelegate<EActiveTimerReturnType___cdecl(double,float),FDefaultDelegateUserPolicy>
                          *)local_a8);
    local_b0.ReferenceController = (pTVar11->SharedReferenceCount).ReferenceController;
    local_b8 = pTVar11->Object;
    if (local_b0.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_b0.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(local_b0.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (pTVar1 != (TSharedPtr<FActiveTimerHandle,1> *)&local_b8) {
      pTVar1->Object = local_b8;
      local_b8 = (FActiveTimerHandle *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->WrapButtonOpenTimer).SharedReferenceCount,&local_b0);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_b0.ReferenceController);
    FVar12.ReferenceController =
         (TReferenceControllerBase<1> *)
         CONCAT44(local_80.SharedReferenceCount.ReferenceController._4_4_,
                  local_80.SharedReferenceCount.ReferenceController._0_4_);
  }
  else {
    if (pFVar2 == (FActiveTimerHandle *)0x0) {
      return;
    }
    local_c8.SharedReferenceCount.ReferenceController =
         (this->WrapButtonOpenTimer).SharedReferenceCount.ReferenceController;
    if (local_c8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_c8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_c8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_c8.Object = pFVar2;
    if ((pFVar2 == (FActiveTimerHandle *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x25d,L""), bVar7)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    SWidget::UnRegisterActiveTimer((SWidget *)this,&local_c8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_c8.SharedReferenceCount.ReferenceController);
    local_90 = 0;
    FStack_88.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    FVar12.ReferenceController = FStack_88.ReferenceController;
    if (pTVar1 != (TSharedPtr<FActiveTimerHandle,1> *)&local_90) {
      pTVar1->Object = (FActiveTimerHandle *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->WrapButtonOpenTimer).SharedReferenceCount,&FStack_88);
      FVar12.ReferenceController = FStack_88.ReferenceController;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar12.ReferenceController);
  return;
}

// UpdateWrapButtonStatus @ 14283ac60

/* WARNING: Enum "Type": Some values do not have unique names */

EActiveTimerReturnType __thiscall
SClippingHorizontalBox::UpdateWrapButtonStatus
          (SClippingHorizontalBox *this,double param_1,float param_2)

{
  SComboButton *pSVar1;
  code *pcVar2;
  bool bVar3;
  EActiveTimerReturnType EVar4;
  undefined8 local_18;
  FSharedReferencer<1> FStack_10;
  
  if ((this->WrapButton).Object == (SComboButton *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      EVar4 = (*pcVar2)();
      return EVar4;
    }
  }
  bVar3 = SMenuAnchor::IsOpen((SMenuAnchor *)(this->WrapButton).Object);
  if (!bVar3) {
    if ((this->WrapButton).Object == (SComboButton *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        EVar4 = (*pcVar2)();
        return EVar4;
      }
    }
    pSVar1 = (this->WrapButton).Object;
    (**(code **)(pSVar1->_padding_ + 0x250))(pSVar1,0,1,0);
    local_18 = 0;
    FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (&this->WrapButtonOpenTimer != (TSharedPtr<FActiveTimerHandle,1> *)&local_18) {
      (this->WrapButtonOpenTimer).Object = (FActiveTimerHandle *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->WrapButtonOpenTimer).SharedReferenceCount,&FStack_10);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_10.ReferenceController);
    return Stop;
  }
  return Continue;
}

