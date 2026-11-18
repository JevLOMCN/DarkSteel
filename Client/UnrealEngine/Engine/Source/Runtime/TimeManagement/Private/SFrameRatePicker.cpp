// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TimeManagement
// Functions: 7

// ~SFrameRatePicker @ 146040470

void __thiscall SFrameRatePicker::~SFrameRatePicker(SFrameRatePicker *this)

{
  ITextData *pIVar1;
  FScriptContainerElement *pFVar2;
  
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->IsPresetRecommendedDelegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->NotRecommendedToolTip).Getter);
  pIVar1 = (this->NotRecommendedToolTip).Value.TextData.Reference;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 0x10))();
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->NotRecommendedText).Getter);
  pIVar1 = (this->NotRecommendedText).Value.TextData.Reference;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 0x10))();
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->RecommendedText).Getter);
  pIVar1 = (this->RecommendedText).Value.TextData.Reference;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 0x10))();
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->HasMultipleValuesAttribute).Getter
            );
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnValueChangedDelegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ValueAttribute).Getter);
  DestructItems<FCommonFrameRateInfo,int>
            ((FCommonFrameRateInfo *)(this->PresetValues).AllocatorInstance.Data,
             (this->PresetValues).ArrayNum);
  pFVar2 = (this->PresetValues).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  SCompoundWidget::~SCompoundWidget((SCompoundWidget *)this);
  return;
}

// BuildMenu @ 146042090

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Removing unreachable block (ram,0x000146042b5b) */
/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

TSharedRef<SWidget,1> * __thiscall
SFrameRatePicker::BuildMenu(SFrameRatePicker *this,TSharedRef<SWidget,1> *__return_storage_ptr__)

{
  byte *pbVar1;
  SWidget *pSVar2;
  FFrameRate FVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  FCommonFrameRateInfo *pFVar9;
  FSharedReferencer<1> FVar10;
  FSharedReferencer<1> FVar11;
  uint uVar12;
  bool bVar13;
  char cVar14;
  byte bVar15;
  bool bVar16;
  bool bVar17;
  int iVar18;
  ISlateStyle *pIVar19;
  bool *pbVar20;
  FArguments *pFVar21;
  FArguments *pFVar22;
  undefined8 *puVar23;
  TSharedRef<SWidget,1> *pTVar24;
  ulong64 uVar25;
  SFrameRateEntryBox *pSVar26;
  SFrameRateEntryBox *pSVar27;
  SBox *pSVar28;
  SBox *pSVar29;
  FSlateIcon *pFVar30;
  FText *pFVar31;
  longlong *plVar32;
  longlong *plVar33;
  ulonglong uVar34;
  ulonglong uVar35;
  ulonglong uVar36;
  FScriptContainerElement *pFVar37;
  TReferenceControllerBase<1> *pTVar38;
  FCommonFrameRateInfo *pFVar39;
  SFrameRatePicker *pSVar40;
  FIdentityFunctor local_res8;
  SWidget *local_res20;
  ForAnyElementType local_10a8;
  undefined8 uStack_10a0;
  T0RequiredArgs local_1098;
  T0RequiredArgs local_1097;
  undefined1 local_1096;
  undefined1 local_1095;
  undefined1 local_1094 [4];
  uint local_1090;
  code *local_1088;
  undefined4 uStack_1080;
  uint uStack_107c;
  FLLMScope local_1078;
  FLLMScope local_1074;
  undefined1 local_1070 [8];
  FDelegateAllocation local_1068;
  FCommonFrameRateInfo *local_1058;
  undefined1 local_1050 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_1048;
  ForAnyElementType FStack_1040;
  ulonglong local_1038;
  SBox *local_1030;
  TReferenceControllerBase<1> *local_1028;
  SFrameRatePicker *local_1020;
  TSlateDecl<SFrameRateEntryBox,RequiredArgs::T0RequiredArgs> local_1018;
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs> local_1000;
  undefined8 local_fe8;
  undefined8 local_fe0;
  undefined8 local_fd8;
  FName local_fd0;
  FName local_fc8;
  undefined8 local_fc0;
  FName local_fb8;
  FName local_fb0;
  FName local_fa8;
  FName local_fa0;
  TSharedRef<SWidget,1> local_f98;
  undefined1 local_f88 [24];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_f70;
  ForAnyElementType FStack_f68;
  ulonglong local_f60;
  undefined4 local_f58;
  undefined1 local_f54;
  TDelegateBase<FNotThreadSafeDelegateMode> local_f50;
  undefined1 local_f38 [8];
  FDelegateAllocation local_f30;
  undefined1 local_f20 [8];
  FDelegateAllocation local_f18;
  undefined1 local_f08 [8];
  FDelegateAllocation local_f00;
  undefined1 local_ef0 [8];
  FDelegateAllocation local_ee8;
  bool local_ed8;
  bool local_ed7;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> local_ed0;
  FName local_eb8;
  FMemScope local_eb0;
  FName local_ea8;
  FText local_ea0;
  undefined1 local_e90 [4];
  undefined1 local_e8c [4];
  FMemScope local_e88;
  undefined1 local_e80 [4];
  undefined1 local_e7c [4];
  TAttribute<EVisibility> local_e78;
  TAttribute<EVisibility> local_e58;
  TAttribute<EVisibility> local_e38;
  TAttribute<EVisibility> local_e18;
  FFrameRate local_df8;
  bool local_df0;
  TDelegate<FFrameRate___cdecl(void),FDefaultDelegateUserPolicy> local_de8;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> local_dd0;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> local_db8;
  TAttribute<FText> local_da0;
  TAttribute<FText> local_d70;
  TAttribute<FText> local_d40;
  TAttribute<FText> local_d10;
  TAttribute<FMenuEntryResizeParams> local_ce0;
  FText local_bf8;
  TSharedRef<SWidget,1> local_be8;
  TAttribute<FText> local_bd8;
  TAttribute<FText> local_ba8;
  TAttribute<FText> local_b78;
  TAttribute<FText> local_b48;
  TSharedRef<SWidget,1> local_b18;
  FMenuBuilder local_b08;
  FDestructionSentinel local_980;
  FDestructionSentinel local_968;
  FDestructionSentinel local_950;
  FDestructionSentinel local_938;
  undefined1 *local_920;
  FDestructionSentinel local_918;
  FDelegateAllocation *local_900;
  FDestructionSentinel local_8f8;
  FDelegateAllocation *local_8e0;
  FDestructionSentinel local_8d8;
  FDelegateAllocation *local_8c0;
  FDestructionSentinel local_8b8;
  FDelegateAllocation *local_8a0;
  FDestructionSentinel local_898;
  FDelegateAllocation *local_880;
  TSharedRef<SWidget,1> local_878;
  TSharedPtr<FUICommandList_const_,1> local_868;
  TSharedPtr<FExtender,1> local_858;
  FText local_848;
  TSharedRef<SWidget,1> local_838;
  FText local_828;
  TSharedRef<SWidget,1> local_818;
  SWidget *local_808;
  TReferenceControllerBase<1> *pTStack_800;
  FReadAccessScope local_7f8;
  FReadAccessScope local_7e0;
  FUIAction local_7c8;
  FUIAction local_760;
  FSlateIcon local_6f8;
  FSlateIcon local_6d8;
  FSlateIcon local_6b8;
  FArguments local_698;
  FArguments local_358;
  undefined8 uStack_48;
  
  uStack_48 = 0x1460420b8;
  bVar6 = false;
  bVar5 = false;
  bVar17 = false;
  local_fe0 = 0;
  pIVar19 = FAppStyle::Get();
  local_fd8 = 0;
  local_858.Object = (FExtender *)0x0;
  local_858.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_868.Object = (FUICommandList *)0x0;
  local_868.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  FBaseMenuBuilder::FBaseMenuBuilder
            ((FBaseMenuBuilder *)&local_b08,Menu,true,&local_868,false,&local_858,pIVar19,(FName)0x0
             ,(FName)0x0);
  local_b08.CurrentSectionExtensionHook.ComparisonIndex.Value = 0;
  local_b08.CurrentSectionExtensionHook.Number = 0;
  local_b08._padding_ = (longlong)&___7FMenuBuilder__6B_;
  FText::FText(&local_b08.CurrentSectionHeadingText);
  local_b08.CurrentSectionVisibility.Value.Value.Value = (TEnumAsByte<EVisibility::Private>)0x19;
  local_b08.CurrentSectionVisibility.bIsSet = false;
  local_b08.CurrentSectionVisibility.Getter._16_8_ = 0;
  local_b08.CurrentSectionVisibility.Getter._0_8_ = 0;
  local_b08.CurrentSectionVisibility.Getter._8_8_ = 0;
  memset(&local_b08.CurrentSectionResizeParams,0,200);
  local_b08.CurrentSectionResizeParams.Value.ClippingPriority.Value = 0;
  local_b08.CurrentSectionResizeParams.Value.ClippingPriority.Getter._16_8_ = 0;
  local_b08.CurrentSectionResizeParams.Value.AllowClipping.Getter._16_8_ = 0;
  local_b08.CurrentSectionResizeParams.Value.VisibleInOverflow.Getter._16_8_ = 0;
  local_b08.CurrentSectionResizeParams.Value.Wrapping.Allow.Getter._16_8_ = 0;
  local_b08.CurrentSectionResizeParams.Value.Wrapping.Priority.Getter._16_8_ = 0;
  local_b08.CurrentSectionResizeParams.Value.Wrapping.Mode.Getter._16_8_ = 0;
  local_b08.CurrentSectionResizeParams.Getter._16_8_ = 0;
  local_b08.CurrentSectionResizeParams.Value.ClippingPriority.bIsSet = false;
  local_b08.CurrentSectionResizeParams.Value.ClippingPriority.Getter._0_8_ = 0;
  local_b08.CurrentSectionResizeParams.Value.ClippingPriority.Getter._8_8_ = 0;
  local_b08.CurrentSectionResizeParams.Value.AllowClipping.Value = false;
  local_b08.CurrentSectionResizeParams.Value.AllowClipping.bIsSet = false;
  local_b08.CurrentSectionResizeParams.Value.AllowClipping.Getter._0_8_ = 0;
  local_b08.CurrentSectionResizeParams.Value.AllowClipping.Getter._8_8_ = 0;
  local_b08.CurrentSectionResizeParams.Value.VisibleInOverflow.Value = false;
  local_b08.CurrentSectionResizeParams.Value.VisibleInOverflow.bIsSet = false;
  local_b08.CurrentSectionResizeParams.Value.VisibleInOverflow.Getter._0_8_ = 0;
  local_b08.CurrentSectionResizeParams.Value.VisibleInOverflow.Getter._8_8_ = 0;
  local_b08.CurrentSectionResizeParams.Value.Wrapping.Allow.Value = false;
  local_b08.CurrentSectionResizeParams.Value.Wrapping.Allow.bIsSet = false;
  local_b08.CurrentSectionResizeParams.Value.Wrapping.Allow.Getter._0_8_ = 0;
  local_b08.CurrentSectionResizeParams.Value.Wrapping.Allow.Getter._8_8_ = 0;
  local_b08.CurrentSectionResizeParams.Value.Wrapping.Priority.Value = 0;
  local_b08.CurrentSectionResizeParams.Value.Wrapping.Priority.bIsSet = false;
  local_b08.CurrentSectionResizeParams.Value.Wrapping.Priority.Getter._0_8_ = 0;
  local_b08.CurrentSectionResizeParams.Value.Wrapping.Priority.Getter._8_8_ = 0;
  local_b08.CurrentSectionResizeParams.Value.Wrapping.Mode.Value = Preferred;
  local_b08.CurrentSectionResizeParams.Value.Wrapping.Mode.bIsSet = false;
  local_b08.CurrentSectionResizeParams.Value.Wrapping.Mode.Getter._0_8_ = 0;
  local_b08.CurrentSectionResizeParams.Value.Wrapping.Mode.Getter._8_8_ = 0;
  local_b08.CurrentSectionResizeParams.Value.Wrapping.VerticalOverflowBehavior.bIsSet = false;
  local_b08.CurrentSectionResizeParams.Value.Wrapping.ForceNewLine.bIsSet = false;
  local_b08.CurrentSectionResizeParams.bIsSet = false;
  local_b08.CurrentSectionResizeParams.Getter._0_8_ = 0;
  local_b08.CurrentSectionResizeParams.Getter._8_8_ = 0;
  local_b08.bSectionNeedsToBeApplied = false;
  local_b08.bSearchable = true;
  local_b08.bRecursivelySearchable = true;
  local_b08.bIsEditing = false;
  FMenuBuilder::AddSearchWidget(&local_b08);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  bVar13 = TDelegateBase<FNotThreadSafeDelegateMode>::IsBound
                     ((TDelegateBase<FNotThreadSafeDelegateMode> *)
                      &this->IsPresetRecommendedDelegate);
  pbVar20 = TAttribute<bool>::Get(&this->HasMultipleValuesAttribute);
  if (*pbVar20 == false) {
    TAttribute<FFrameRate>::Get(&this->ValueAttribute);
  }
  pFVar21 = SBox::FArguments::FArguments(&local_698);
  pFVar21->_HAlign = HAlign_Right;
  local_f58 = 0x42c80000;
  local_f50._0_8_ = 0;
  local_f50._8_8_ = 0;
  local_f54 = 1;
  local_f50._16_8_ = 0;
  (pFVar21->_MaxDesiredWidth).Value.Size = 100.0;
  (pFVar21->_MaxDesiredWidth).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar21->_MaxDesiredWidth).Getter,
             &local_f50);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>(&local_f50);
  pFVar22 = SFrameRateEntryBox::FArguments::FArguments(&local_358);
  local_df8 = (this->ValueAttribute).Value;
  local_df0 = (this->ValueAttribute).bIsSet;
  local_de8._0_8_ = 0;
  local_de8._8_8_ = 0;
  local_de8._16_4_ = 0;
  TDelegate<FFrameRate___cdecl(void),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>(&local_de8,&(this->ValueAttribute).Getter);
  (pFVar22->_Value).Value = local_df8;
  (pFVar22->_Value).bIsSet = local_df0;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar22->_Value).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)&local_de8);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_de8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar22->_OnValueChanged,
             (FWriteAccessScope *)&local_938);
  local_920 = &(pFVar22->_OnValueChanged).field_0x8;
  puVar23 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_920);
  pSVar40 = this;
  if (puVar23 != (undefined8 *)0x0) {
    local_10a8.Data = (FScriptContainerElement *)SetValue;
    uStack_10a0 = (ulonglong)local_f98.SharedReferenceCount.ReferenceController._4_4_ << 0x20;
    pTVar24 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_878);
    pSVar40 = (SFrameRatePicker *)(pTVar24->SharedReferenceCount).ReferenceController;
    pSVar2 = pTVar24->Object;
    if (pSVar40 != (SFrameRatePicker *)0x0) {
      LOCK();
      *(atomic<int> *)&pSVar40->_padding_ =
           (atomic<int>)((int)*(atomic<int> *)&pSVar40->_padding_ + 1);
      UNLOCK();
      LOCK();
      *(atomic<int> *)&pSVar40->_padding_ =
           (atomic<int>)((int)*(atomic<int> *)&pSVar40->_padding_ + 1);
      UNLOCK();
    }
    *puVar23 = &
               ___7__TCommonDelegateInstanceState___A6AXUFFrameRate___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar25 = FDelegateHandle::GenerateNewID();
    puVar23[2] = uVar25;
    *puVar23 = &
               ___7__TBaseSPMethodDelegateInstance__0A_VSFrameRatePicker___00__A6AXUFFrameRate___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar23[3] = pSVar2;
    puVar23[4] = pSVar40;
    if (pSVar40 != (SFrameRatePicker *)0x0) {
      LOCK();
      ((atomic<int> *)&pSVar40->_padding_)[1] =
           (atomic<int>)((int)((atomic<int> *)&pSVar40->_padding_)[1] + 1);
      UNLOCK();
    }
    bVar6 = true;
    bVar5 = true;
    bVar17 = true;
    puVar23[5] = local_10a8.Data;
    puVar23[6] = uStack_10a0;
  }
  if (bVar17) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pSVar40);
  }
  if (bVar5) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pSVar40);
  }
  if (bVar6) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_878.SharedReferenceCount.ReferenceController);
  }
  bVar8 = false;
  bVar7 = false;
  bVar6 = false;
  bVar5 = false;
  bVar17 = false;
  if (local_938.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_938.Accessor,&local_938);
  }
  local_ed8 = (this->HasMultipleValuesAttribute).Value;
  local_ed7 = (this->HasMultipleValuesAttribute).bIsSet;
  local_ed0._0_8_ = 0;
  local_ed0._8_8_ = 0;
  local_ed0._16_4_ = 0;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&local_ed0,&(this->HasMultipleValuesAttribute).Getter);
  (pFVar22->_HasMultipleValues).Value = local_ed8;
  (pFVar22->_HasMultipleValues).bIsSet = local_ed7;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar22->_HasMultipleValues).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)&local_ed0);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_ed0);
  FLLMScope::FLLMScope(&local_1078,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_ea8 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_eb0,&local_ea8,true);
  TSlateDecl<SFrameRateEntryBox,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SFrameRateEntryBox,RequiredArgs::T0RequiredArgs>
            (&local_1018,"SFrameRateEntryBox",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\TimeManagement\\Private\\Widgets\\SFrameRatePicker.cpp"
             ,0x58,&local_1098);
  FMemScope::~FMemScope(&local_eb0);
  FLLMScope::~FLLMScope(&local_1078);
  pSVar26 = TSharedPtr<SFrameRateEntryBox,1>::operator->(&local_1018._Widget);
  SWidget::SWidgetConstruct((SWidget *)pSVar26,(FSlateBaseNamedArgs *)pFVar22);
  pSVar26 = local_1018._Widget.Object;
  SFrameRateEntryBox::Construct(local_1018._Widget.Object,pFVar22);
  pSVar27 = TSharedPtr<SFrameRateEntryBox,1>::operator->(&local_1018._Widget);
  if ((pSVar27->_padding_ & 0x10) == 0) {
    cVar14 = (**(code **)(pSVar27->_padding_ + 0x228))(pSVar27);
    bVar15 = 0;
    if (cVar14 == '\0') goto LAB_14604262b;
  }
  bVar15 = 0x20;
LAB_14604262b:
  *(byte *)&pSVar27->_padding_ = (byte)pSVar27->_padding_ & 0xdf;
  *(byte *)&pSVar27->_padding_ = (byte)pSVar27->_padding_ | bVar15;
  pSVar27 = TSharedPtr<SFrameRateEntryBox,1>::operator->(&local_1018._Widget);
  pbVar1 = (byte *)((longlong)&pSVar27->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  if ((local_1018._Widget.Object == (SFrameRateEntryBox *)0x0) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x416,L""), bVar16)) {
    pcVar4 = (code *)swi(3);
    pTVar24 = (TSharedRef<SWidget,1> *)(*pcVar4)();
    return pTVar24;
  }
  FVar10.ReferenceController = local_1018._Widget.SharedReferenceCount.ReferenceController;
  local_1018._Widget.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_1018._Widget.Object = (SFrameRateEntryBox *)0x0;
  if ((pSVar26 == (SFrameRateEntryBox *)0x0) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x26c,L""), bVar16)) {
    pcVar4 = (code *)swi(3);
    pTVar24 = (TSharedRef<SWidget,1> *)(*pcVar4)();
    return pTVar24;
  }
  if (FVar10.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar10.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar10.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    (FVar10.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar10.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_808 = (pFVar21->_Content).Widget.Object;
  pTStack_800 = (pFVar21->_Content).Widget.SharedReferenceCount.ReferenceController;
  (pFVar21->_Content).Widget.Object = (SWidget *)pSVar26;
  (pFVar21->_Content).Widget.SharedReferenceCount.ReferenceController = FVar10.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_800);
  FLLMScope::FLLMScope(&local_1074,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_eb8 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_e88,&local_eb8,true);
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>::TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>
            (&local_1000,"SBox",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\TimeManagement\\Private\\Widgets\\SFrameRatePicker.cpp"
             ,0x54,&local_1097);
  FMemScope::~FMemScope(&local_e88);
  FLLMScope::~FLLMScope(&local_1074);
  pSVar28 = TSharedPtr<SBox,1>::operator->(&local_1000._Widget);
  SWidget::SWidgetConstruct((SWidget *)pSVar28,(FSlateBaseNamedArgs *)pFVar21);
  pSVar28 = local_1000._Widget.Object;
  local_1030 = local_1000._Widget.Object;
  SBox::Construct(local_1000._Widget.Object,pFVar21);
  pSVar29 = TSharedPtr<SBox,1>::operator->(&local_1000._Widget);
  SWidget::CacheVolatility((SWidget *)pSVar29);
  pSVar29 = TSharedPtr<SBox,1>::operator->(&local_1000._Widget);
  pbVar1 = (byte *)((longlong)&pSVar29->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  if ((local_1000._Widget.Object == (SBox *)0x0) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x416,L""), bVar16)) {
    pcVar4 = (code *)swi(3);
    pTVar24 = (TSharedRef<SWidget,1> *)(*pcVar4)();
    return pTVar24;
  }
  FVar11.ReferenceController = local_1000._Widget.SharedReferenceCount.ReferenceController;
  plVar33 = (longlong *)0x0;
  local_1028 = local_1000._Widget.SharedReferenceCount.ReferenceController;
  local_1000._Widget.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_1000._Widget.Object = (SBox *)0x0;
  if ((pSVar28 == (SBox *)0x0) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x26c,L""), bVar16)) {
    pcVar4 = (code *)swi(3);
    pTVar24 = (TSharedRef<SWidget,1> *)(*pcVar4)();
    return pTVar24;
  }
  if (FVar11.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar11.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar11.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar11.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar10.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar10.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1018._Widget.SharedReferenceCount.ReferenceController);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_358._ForegroundColor.Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_358._Font.Getter);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_358._Font.Value.CompositeFont.SharedReferenceCount.ReferenceController);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_358._HasMultipleValues.Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_358._OnValueChanged);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_358._Value.Getter);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_358);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_698._MaxAspectRatio.Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_698._MinAspectRatio.Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_698._MaxDesiredHeight.Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_698._MaxDesiredWidth.Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_698._MinDesiredHeight.Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_698._MinDesiredWidth.Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_698._HeightOverride.Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_698._WidthOverride.Getter);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_698._Content.Widget.SharedReferenceCount.ReferenceController);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_698._Padding.Getter);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_698);
  FText::AsLocalizable_Advanced_LocText
            (&local_ea0,L"SFrameRatePicker",L"CustomFramerateDisplayLabel",L"Custom");
  local_1090 = (this->PresetValues).ArrayNum;
  uVar34 = (ulonglong)(int)local_1090;
  pFVar39 = (FCommonFrameRateInfo *)(this->PresetValues).AllocatorInstance.Data;
  local_1058 = pFVar39 + uVar34;
  pSVar40 = this;
  if (bVar13) {
    local_10a8.Data = (FScriptContainerElement *)0x0;
    uStack_10a0 = 0;
    while( true ) {
      pFVar9 = local_1058;
      if ((this->PresetValues).ArrayNum != (int)uVar34) {
        local_res20 = (SWidget *)((ulonglong)local_res20 & 0xffffffffffffff00);
        `TCheckedPointerIterator<FCommonFrameRateInfo,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_res20);
      }
      if (pFVar39 == pFVar9) break;
      FVar3 = pFVar39->FrameRate;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                 &this->IsPresetRecommendedDelegate,&local_7f8);
      plVar32 = plVar33;
      if (*(int *)&(this->IsPresetRecommendedDelegate).field_0x10 != 0) {
        plVar32 = *(longlong **)&(this->IsPresetRecommendedDelegate).field_0x8;
      }
      cVar14 = (**(code **)(*plVar32 + 0x60))(plVar32,FVar3);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_7f8);
      if (cVar14 != '\0') {
        if (((local_10a8.Data <= pFVar39) &&
            (pFVar39 < (FCommonFrameRateInfo *)
                       (local_10a8.Data + (longlong)uStack_10a0._4_4_ * 0x28))) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar17)) {
          pcVar4 = (code *)swi(3);
          pTVar24 = (TSharedRef<SWidget,1> *)(*pcVar4)();
          return pTVar24;
        }
        iVar18 = (int)uStack_10a0;
        if ((int)uStack_10a0 == uStack_10a0._4_4_) {
          iVar18 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x828,&local_10a8,(int *)((longlong)&uStack_10a0 + 4));
        }
        uStack_10a0 = CONCAT44(uStack_10a0._4_4_,iVar18 + 1);
        FCommonFrameRateInfo::FCommonFrameRateInfo
                  ((FCommonFrameRateInfo *)(local_10a8.Data + (longlong)iVar18 * 0x28),pFVar39);
      }
      uVar34 = (ulonglong)local_1090;
      pFVar39 = pFVar39 + 1;
    }
    local_res8 = SUB81(this,0);
    AlgoImpl::
    IntroSortInternal<FCommonFrameRateInfo,int,FIdentityFunctor,TDereferenceWrapper<FCommonFrameRateInfo,_SFrameRatePicker::BuildMenu_::__l11::<lambda_2>_>_>
              ((FCommonFrameRateInfo *)local_10a8.Data,(int)uStack_10a0,local_res8,
               (<lambda_2> *)&local_1095);
    memset(&local_ce0,0,200);
    local_ce0.Value.Wrapping.Priority.Value = 0;
    local_ce0.Value.ClippingPriority.Getter._16_8_ = 0;
    local_ce0.Value.AllowClipping.Getter._16_8_ = 0;
    local_ce0.Value.VisibleInOverflow.Getter._16_8_ = 0;
    local_ce0.Value.Wrapping.Allow.Getter._16_8_ = 0;
    local_ce0.Value.Wrapping.Priority.Getter._16_8_ = 0;
    local_ce0.Value.Wrapping.Mode.Getter._16_8_ = 0;
    local_ce0.Getter._16_8_ = 0;
    local_e58.Getter._16_8_ = 0;
    local_ce0.Value.ClippingPriority.Getter._0_8_ = 0;
    local_ce0.Value.ClippingPriority.Getter._8_8_ = 0;
    local_ce0.Value.AllowClipping.Value = false;
    local_ce0.Value.AllowClipping.bIsSet = false;
    local_ce0.Value.AllowClipping.Getter._0_8_ = 0;
    local_ce0.Value.AllowClipping.Getter._8_8_ = 0;
    local_ce0.Value.VisibleInOverflow.Value = false;
    local_ce0.Value.VisibleInOverflow.bIsSet = false;
    local_ce0.Value.VisibleInOverflow.Getter._0_8_ = 0;
    local_ce0.Value.VisibleInOverflow.Getter._8_8_ = 0;
    local_ce0.Value.Wrapping.Allow.Value = false;
    local_ce0.Value.Wrapping.Allow.bIsSet = false;
    local_ce0.Value.Wrapping.Allow.Getter._0_8_ = 0;
    local_ce0.Value.Wrapping.Allow.Getter._8_8_ = 0;
    local_ce0.Value.Wrapping.Priority.bIsSet = false;
    local_ce0.Value.Wrapping.Priority.Getter._0_8_ = 0;
    local_ce0.Value.Wrapping.Priority.Getter._8_8_ = 0;
    local_ce0.Value.Wrapping.Mode.Value = Preferred;
    local_ce0.Value.Wrapping.Mode.bIsSet = false;
    local_ce0.Value.Wrapping.Mode.Getter._0_8_ = 0;
    local_ce0.Value.Wrapping.Mode.Getter._8_8_ = 0;
    local_ce0.Value.Wrapping.VerticalOverflowBehavior.bIsSet = false;
    local_ce0.Value.Wrapping.ForceNewLine.bIsSet = false;
    local_ce0.bIsSet = false;
    local_ce0.Getter._0_8_ = 0;
    local_ce0.Getter._8_8_ = 0;
    local_e58.Value.Value.Value = (TEnumAsByte<EVisibility::Private>)0x19;
    local_e58.bIsSet = false;
    local_e58.Getter._0_8_ = 0;
    local_e58.Getter._8_8_ = 0;
    bVar17 = TDelegateBase<FNotThreadSafeDelegateMode>::IsBound
                       ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->RecommendedText).Getter
                       );
    if (bVar17) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                 &(this->RecommendedText).Getter,&local_7e0);
      if (*(int *)&(this->RecommendedText).Getter.field_0x10 != 0) {
        plVar33 = *(longlong **)&(this->RecommendedText).Getter.field_0x8;
      }
      (**(code **)(*plVar33 + 0x60))(plVar33,&local_bf8);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_7e0);
      FText::operator=(&(this->RecommendedText).Value,&local_bf8);
      if (local_bf8.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_bf8.TextData.Reference + 0x10))();
      }
    }
    FText::FText(&local_b78.Value,&(this->RecommendedText).Value);
    local_b78.bIsSet = true;
    local_b78.Getter._16_8_ = 0;
    local_fc0 = 0;
    local_b78.Getter._0_8_ = 0;
    local_b78.Getter._8_8_ = 0;
    FMenuBuilder::BeginSection(&local_b08,(FName)0x0,&local_b78,&local_e58,&local_ce0);
    TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_b78.Getter);
    if (local_b78.Value.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_b78.Value.TextData.Reference + 0x10))();
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_e58.Getter);
    TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_ce0.Getter);
    FMenuEntryResizeParams::~FMenuEntryResizeParams(&local_ce0.Value);
    uVar12 = local_f98.SharedReferenceCount.ReferenceController._4_4_;
    uVar34 = uStack_10a0;
    uVar35 = (ulonglong)(int)uStack_10a0;
    local_1058 = (FCommonFrameRateInfo *)(local_10a8.Data + uVar35 * 0x28);
    pFVar37 = local_10a8.Data + 0x20;
    uVar36 = uVar35;
    while( true ) {
      pFVar39 = local_1058;
      bVar13 = false;
      bVar6 = false;
      bVar17 = false;
      if ((int)uVar35 != (int)uVar36) {
        `TCheckedPointerIterator<FCommonFrameRateInfo,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_1094);
      }
      if ((FCommonFrameRateInfo *)(pFVar37 + -0x20) == pFVar39) break;
      FVar3 = ((FCommonFrameRateInfo *)(pFVar37 + -0x20))->FrameRate;
      local_f20 = (undefined1  [8])0x0;
      local_f18.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      local_f18.DelegateSize = 0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_f20,
                 (FWriteAccessScope *)&local_8f8);
      local_8e0 = &local_f18;
      puVar23 = UE::Core::Private::DelegateAllocate(0x28,&local_f18);
      if (puVar23 != (undefined8 *)0x0) {
        *puVar23 = &
                   ___7__TCommonDelegateInstanceState___A6A_NXZUFDefaultDelegateUserPolicy____V__6B_
        ;
        uVar25 = FDelegateHandle::GenerateNewID();
        puVar23[2] = uVar25;
        *puVar23 = &TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`SFrameRatePicker::BuildMenu'::`23'::<lambda_3>_>
                    ::_vftable_;
        puVar23[3] = this;
        *(FFrameRate *)(puVar23 + 4) = FVar3;
      }
      if (local_8f8.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_8f8.Accessor,&local_8f8);
      }
      local_dd0._16_8_ = 0;
      local_dd0._0_8_ = 0;
      local_dd0._8_8_ = 0;
      local_f38 = (undefined1  [8])0x0;
      local_f30.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      local_f30.DelegateSize = 0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_f38,
                 (FWriteAccessScope *)&local_8d8);
      local_8c0 = &local_f30;
      puVar23 = UE::Core::Private::DelegateAllocate(0x38,&local_f30);
      if (puVar23 != (undefined8 *)0x0) {
        uStack_1080 = 0;
        local_1088 = SetValue;
        uStack_107c = uVar12;
        pTVar24 = TSharedFromThis<SWidget,1>::AsShared
                            ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_838);
        pSVar40 = (SFrameRatePicker *)(pTVar24->SharedReferenceCount).ReferenceController;
        local_res20 = pTVar24->Object;
        if (pSVar40 != (SFrameRatePicker *)0x0) {
          LOCK();
          *(atomic<int> *)&pSVar40->_padding_ =
               (atomic<int>)((int)*(atomic<int> *)&pSVar40->_padding_ + 1);
          UNLOCK();
          LOCK();
          *(atomic<int> *)&pSVar40->_padding_ =
               (atomic<int>)((int)*(atomic<int> *)&pSVar40->_padding_ + 1);
          UNLOCK();
        }
        bVar7 = true;
        bVar8 = true;
        bVar5 = true;
        *puVar23 = &
                   ___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy__UFFrameRate____6B_
        ;
        *(FFrameRate *)(puVar23 + 1) = FVar3;
        local_1020 = pSVar40;
        uVar25 = FDelegateHandle::GenerateNewID();
        puVar23[2] = uVar25;
        *puVar23 = &
                   ___7__TBaseSPMethodDelegateInstance__0A_VSFrameRatePicker___00__A6AXXZUFDefaultDelegateUserPolicy__UFFrameRate____6B_
        ;
        puVar23[3] = local_res20;
        puVar23[4] = pSVar40;
        if (pSVar40 != (SFrameRatePicker *)0x0) {
          LOCK();
          ((atomic<int> *)&pSVar40->_padding_)[1] =
               (atomic<int>)((int)((atomic<int> *)&pSVar40->_padding_)[1] + 1);
          UNLOCK();
        }
        puVar23[5] = local_1088;
        puVar23[6] = CONCAT44(uStack_107c,uStack_1080);
      }
      if (bVar7) {
        bVar7 = false;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)pSVar40);
      }
      if (bVar8) {
        bVar8 = false;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)local_1020);
      }
      if (bVar5) {
        bVar5 = false;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_838.SharedReferenceCount.ReferenceController);
      }
      if (local_8d8.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_8d8.Accessor,&local_8d8);
      }
      FUIAction::FUIAction
                (&local_760,(TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_f38,
                 &local_dd0,(TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *)local_f20,
                 RepeatDisabled);
      local_e38.Value.Value.Value = (TEnumAsByte<EVisibility::Private>)0x19;
      local_e38.bIsSet = false;
      local_e38.Getter._16_8_ = 0;
      local_e38.Getter._0_8_ = 0;
      local_e38.Getter._8_8_ = 0;
      FText::FText((FText *)local_f88);
      local_f88[0x10] = false;
      local_f60 = 0;
      local_f70.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
      FStack_f68.Data = (FScriptContainerElement *)0x0;
      local_fb8.ComparisonIndex.Value = 0;
      local_fb8.Number = 0;
      local_fb0.ComparisonIndex.Value = 0;
      local_fb0.Number = 0;
      pFVar30 = FSlateIcon::FSlateIcon(&local_6d8);
      local_d10.Value.TextData.Reference = (((FText *)(pFVar37 + -8))->TextData).Reference;
      if (local_d10.Value.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_d10.Value.TextData.Reference + 8))
                  (local_d10.Value.TextData.Reference,local_e8c);
      }
      local_d10.Value.Flags = *(uint *)pFVar37;
      local_da0.Value.TextData.Reference = *(ITextData **)(pFVar37 + -0x18);
      local_d10.bIsSet = true;
      local_d10.Getter._16_8_ = 0;
      local_d10.Getter._0_8_ = 0;
      local_d10.Getter._8_8_ = 0;
      if (local_da0.Value.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_da0.Value.TextData.Reference + 8))
                  (local_da0.Value.TextData.Reference,local_e90);
      }
      local_da0.Value.Flags = *(uint *)(pFVar37 + -0x10);
      local_da0.bIsSet = true;
      local_da0.Getter._16_8_ = 0;
      local_da0.Getter._0_8_ = 0;
      local_da0.Getter._8_8_ = 0;
      FBaseMenuBuilder::AddMenuEntry
                ((FBaseMenuBuilder *)&local_b08,&local_da0,&local_d10,pFVar30,&local_760,local_fb0,
                 RadioButton,local_fb8,(TAttribute<FText> *)local_f88,&local_e38);
      TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_da0.Getter);
      if (local_da0.Value.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_da0.Value.TextData.Reference + 0x10))();
      }
      TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_d10.Getter);
      if (local_d10.Value.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_d10.Value.TextData.Reference + 0x10))();
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&local_f70,(FWriteAccessScope *)&local_980);
      if (((int)local_f60 != 0) && (FStack_f68.Data != (FScriptContainerElement *)0x0)) {
        (*(code *)**(undefined8 **)FStack_f68.Data)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_f68,0,0,0x10);
        local_f60 = local_f60 & 0xffffffff00000000;
      }
      if (local_980.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_980.Accessor,&local_980);
      }
      if (FStack_f68.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_f68.Data);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_f70.AccessDetector);
      if ((ITextData *)local_f88._0_8_ != (ITextData *)0x0) {
        (**(code **)((longlong)*(ITextData *)local_f88._0_8_ + 0x10))();
      }
      TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_e38.Getter);
      TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_760.IsActionVisibleDelegate);
      TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_760.GetActionCheckState);
      TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_760.CanExecuteAction);
      TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_760);
      uVar35 = uStack_10a0 & 0xffffffff;
      pFVar37 = pFVar37 + 0x28;
      uVar36 = uVar34 & 0xffffffff;
    }
    pFVar31 = FText::FText(&local_848);
    FText::FText(&local_b48.Value,pFVar31);
    pTVar38 = local_1028;
    local_b18.Object = (SWidget *)local_1030;
    local_b48.bIsSet = true;
    local_b48.Getter._16_8_ = 0;
    local_b18.SharedReferenceCount.ReferenceController = local_1028;
    local_b48.Getter._0_8_ = 0;
    local_b48.Getter._8_8_ = 0;
    if (local_1028 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      local_1028->SharedReferenceCount = (atomic<int>)((int)local_1028->SharedReferenceCount + 1);
      UNLOCK();
    }
    FMenuBuilder::AddWidget(&local_b08,&local_b18,&local_ea0,false,true,&local_b48);
    TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_b48.Getter);
    if (local_b48.Value.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_b48.Value.TextData.Reference + 0x10))();
    }
    if (local_848.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_848.TextData.Reference + 0x10))();
    }
    FMenuBuilder::EndSection(&local_b08);
    local_1050[0] = (TEnumAsByte<EVisibility::Private>)0x19;
    local_1050[1] = false;
    local_1038 = 0;
    local_fe8 = 0;
    local_1048.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_1040.Data = (FScriptContainerElement *)0x0;
    FMenuBuilder::AddMenuSeparator(&local_b08,(FName)0x0,(TAttribute<EVisibility> *)local_1050);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_1048,(FWriteAccessScope *)&local_968);
    if (((int)local_1038 != 0) && (FStack_1040.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_1040.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_1040,0,0,0x10);
      local_1038 = local_1038 & 0xffffffff00000000;
    }
    if (local_968.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_968.Accessor,&local_968);
    }
    if (FStack_1040.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_1040.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_1048.AccessDetector);
    if ((int)uStack_10a0 < (this->PresetValues).ArrayNum) {
      local_e18.Value.Value.Value = (TEnumAsByte<EVisibility::Private>)0x19;
      local_e18.bIsSet = false;
      local_e18.Getter._16_8_ = 0;
      local_e18.Getter._0_8_ = 0;
      local_e18.Getter._8_8_ = 0;
      local_fa8.ComparisonIndex.Value = 0;
      local_fa8.Number = 0;
      local_fa0.ComparisonIndex.Value = 0;
      local_fa0.Number = 0;
      pFVar30 = FSlateIcon::FSlateIcon(&local_6b8);
      local_1070 = (undefined1  [8])0x0;
      local_1068.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      local_1068.DelegateSize = 0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1070,
                 (FWriteAccessScope *)&local_8b8);
      local_8a0 = &local_1068;
      puVar23 = UE::Core::Private::DelegateAllocate(0x38,&local_1068);
      pSVar40 = this;
      if (puVar23 != (undefined8 *)0x0) {
        uStack_107c = local_f98.SharedReferenceCount.ReferenceController._4_4_;
        local_1088 = PopulateNotRecommendedMenu;
        uStack_1080 = 0;
        pTVar24 = TSharedFromThis<SWidget,1>::AsShared
                            ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_f98);
        pSVar40 = (SFrameRatePicker *)(pTVar24->SharedReferenceCount).ReferenceController;
        pSVar2 = pTVar24->Object;
        if (pSVar40 != (SFrameRatePicker *)0x0) {
          LOCK();
          *(atomic<int> *)&pSVar40->_padding_ =
               (atomic<int>)((int)*(atomic<int> *)&pSVar40->_padding_ + 1);
          UNLOCK();
          LOCK();
          *(atomic<int> *)&pSVar40->_padding_ =
               (atomic<int>)((int)*(atomic<int> *)&pSVar40->_padding_ + 1);
          UNLOCK();
        }
        bVar13 = true;
        bVar6 = true;
        bVar17 = true;
        *puVar23 = &
                   ___7__TCommonDelegateInstanceState___A6AXAEAVFMenuBuilder___ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        uVar25 = FDelegateHandle::GenerateNewID();
        puVar23[2] = uVar25;
        *puVar23 = &
                   ___7__TBaseSPMethodDelegateInstance__0A_VSFrameRatePicker___00__A6AXAEAVFMenuBuilder___ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        puVar23[3] = pSVar2;
        puVar23[4] = pSVar40;
        if (pSVar40 != (SFrameRatePicker *)0x0) {
          LOCK();
          ((atomic<int> *)&pSVar40->_padding_)[1] =
               (atomic<int>)((int)((atomic<int> *)&pSVar40->_padding_)[1] + 1);
          UNLOCK();
        }
        puVar23[5] = local_1088;
        puVar23[6] = CONCAT44(uStack_107c,uStack_1080);
      }
      if (bVar17) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)pSVar40);
      }
      if (bVar6) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)pSVar40);
      }
      if (bVar13) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)
                   CONCAT44(local_f98.SharedReferenceCount.ReferenceController._4_4_,
                            local_f98.SharedReferenceCount.ReferenceController._0_4_));
      }
      if (local_8b8.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_8b8.Accessor,&local_8b8);
      }
      FMenuBuilder::AddSubMenu
                (&local_b08,&this->NotRecommendedText,&this->NotRecommendedToolTip,
                 (TDelegate<void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy> *)local_1070,
                 false,pFVar30,true,local_fa0,local_fa8,&local_e18);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1070,
                 (FWriteAccessScope *)&local_950);
      if ((local_1068.DelegateSize != 0) &&
         (local_1068.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
        (*(code *)**(undefined8 **)local_1068.DelegateAllocator)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                  ((ForAnyElementType *)&local_1068,0,0,0x10);
        local_1068.DelegateSize = 0;
      }
      if (local_950.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_950.Accessor,&local_950);
      }
      if (local_1068.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
        FMemory::Free((void *)local_1068.DelegateAllocator);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_1070);
      TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_e18.Getter);
      pTVar38 = local_1028;
    }
    DestructItems<FCommonFrameRateInfo,int>
              ((FCommonFrameRateInfo *)local_10a8.Data,(int)uStack_10a0);
    if ((FCommonFrameRateInfo *)local_10a8.Data != (FCommonFrameRateInfo *)0x0) {
      FMemory::Free(local_10a8.Data);
    }
  }
  else {
    while( true ) {
      pFVar9 = local_1058;
      if ((this->PresetValues).ArrayNum != (int)uVar34) {
        `TCheckedPointerIterator<FCommonFrameRateInfo,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_1096);
      }
      if (pFVar39 == pFVar9) break;
      FVar3 = pFVar39->FrameRate;
      local_ef0 = (undefined1  [8])0x0;
      local_ee8.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      local_ee8.DelegateSize = 0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_ef0,
                 (FWriteAccessScope *)&local_918);
      local_900 = &local_ee8;
      puVar23 = UE::Core::Private::DelegateAllocate(0x28,&local_ee8);
      if (puVar23 != (undefined8 *)0x0) {
        *puVar23 = &
                   ___7__TCommonDelegateInstanceState___A6A_NXZUFDefaultDelegateUserPolicy____V__6B_
        ;
        uVar25 = FDelegateHandle::GenerateNewID();
        puVar23[2] = uVar25;
        *puVar23 = &TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`SFrameRatePicker::BuildMenu'::`9'::<lambda_1>_>
                    ::_vftable_;
        puVar23[3] = this;
        *(FFrameRate *)(puVar23 + 4) = FVar3;
      }
      if (local_918.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_918.Accessor,&local_918);
      }
      local_db8._16_8_ = 0;
      local_db8._0_8_ = 0;
      local_db8._8_8_ = 0;
      local_f08 = (undefined1  [8])0x0;
      local_f00.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      local_f00.DelegateSize = 0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_f08,
                 (FWriteAccessScope *)&local_898);
      local_880 = &local_f00;
      puVar23 = UE::Core::Private::DelegateAllocate(0x38,&local_f00);
      if (puVar23 != (undefined8 *)0x0) {
        uStack_1080 = 0;
        local_1088 = SetValue;
        uStack_107c = local_f98.SharedReferenceCount.ReferenceController._4_4_;
        pTVar24 = TSharedFromThis<SWidget,1>::AsShared
                            ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_818);
        pSVar40 = (SFrameRatePicker *)(pTVar24->SharedReferenceCount).ReferenceController;
        pSVar2 = pTVar24->Object;
        if (pSVar40 != (SFrameRatePicker *)0x0) {
          LOCK();
          *(atomic<int> *)&pSVar40->_padding_ =
               (atomic<int>)((int)*(atomic<int> *)&pSVar40->_padding_ + 1);
          UNLOCK();
          LOCK();
          *(atomic<int> *)&pSVar40->_padding_ =
               (atomic<int>)((int)*(atomic<int> *)&pSVar40->_padding_ + 1);
          UNLOCK();
        }
        bVar17 = true;
        bVar6 = true;
        *puVar23 = &
                   ___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy__UFFrameRate____6B_
        ;
        *(FFrameRate *)(puVar23 + 1) = FVar3;
        local_1020 = pSVar40;
        uVar25 = FDelegateHandle::GenerateNewID();
        puVar23[2] = uVar25;
        *puVar23 = &
                   ___7__TBaseSPMethodDelegateInstance__0A_VSFrameRatePicker___00__A6AXXZUFDefaultDelegateUserPolicy__UFFrameRate____6B_
        ;
        puVar23[3] = pSVar2;
        puVar23[4] = pSVar40;
        if (pSVar40 != (SFrameRatePicker *)0x0) {
          LOCK();
          ((atomic<int> *)&pSVar40->_padding_)[1] =
               (atomic<int>)((int)((atomic<int> *)&pSVar40->_padding_)[1] + 1);
          UNLOCK();
        }
        puVar23[5] = local_1088;
        puVar23[6] = CONCAT44(uStack_107c,uStack_1080);
      }
      if (bVar17) {
        bVar17 = false;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)pSVar40);
      }
      if (bVar6) {
        bVar6 = false;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_818.SharedReferenceCount.ReferenceController);
      }
      if (local_898.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_898.Accessor,&local_898);
      }
      FUIAction::FUIAction
                (&local_7c8,(TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_f08,
                 &local_db8,(TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *)local_ef0,
                 RepeatDisabled);
      local_e78.Value.Value.Value = (TEnumAsByte<EVisibility::Private>)0x19;
      local_e78.bIsSet = false;
      local_e78.Getter._16_8_ = 0;
      local_e78.Getter._0_8_ = 0;
      local_e78.Getter._8_8_ = 0;
      FText::FText(&local_bd8.Value);
      local_bd8.bIsSet = false;
      local_bd8.Getter._16_8_ = 0;
      local_bd8.Getter._0_8_ = 0;
      local_bd8.Getter._8_8_ = 0;
      local_fd0.ComparisonIndex.Value = 0;
      local_fd0.Number = 0;
      local_fc8.ComparisonIndex.Value = 0;
      local_fc8.Number = 0;
      pFVar30 = FSlateIcon::FSlateIcon(&local_6f8);
      local_d40.Value.TextData.Reference = (pFVar39->Description).TextData.Reference;
      if (local_d40.Value.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_d40.Value.TextData.Reference + 8))
                  (local_d40.Value.TextData.Reference,local_e7c);
      }
      local_d40.Value.Flags = (pFVar39->Description).Flags;
      local_d70.Value.TextData.Reference = (pFVar39->DisplayName).TextData.Reference;
      local_d40.bIsSet = true;
      local_d40.Getter._16_8_ = 0;
      local_d40.Getter._0_8_ = 0;
      local_d40.Getter._8_8_ = 0;
      if (local_d70.Value.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_d70.Value.TextData.Reference + 8))
                  (local_d70.Value.TextData.Reference,local_e80);
      }
      local_d70.Value.Flags = (pFVar39->DisplayName).Flags;
      local_d70.bIsSet = true;
      local_d70.Getter._16_8_ = 0;
      local_d70.Getter._0_8_ = 0;
      local_d70.Getter._8_8_ = 0;
      FBaseMenuBuilder::AddMenuEntry
                ((FBaseMenuBuilder *)&local_b08,&local_d70,&local_d40,pFVar30,&local_7c8,local_fc8,
                 RadioButton,local_fd0,&local_bd8,&local_e78);
      TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_d70.Getter);
      if (local_d70.Value.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_d70.Value.TextData.Reference + 0x10))();
      }
      TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_d40.Getter);
      if (local_d40.Value.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_d40.Value.TextData.Reference + 0x10))();
      }
      TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_bd8.Getter);
      if (local_bd8.Value.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_bd8.Value.TextData.Reference + 0x10))();
      }
      TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_e78.Getter);
      TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_7c8.IsActionVisibleDelegate);
      TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_7c8.GetActionCheckState);
      TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_7c8.CanExecuteAction);
      TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_7c8);
      uVar34 = (ulonglong)local_1090;
      pFVar39 = pFVar39 + 1;
    }
    pFVar31 = FText::FText(&local_828);
    FText::FText(&local_ba8.Value,pFVar31);
    pTVar38 = local_1028;
    local_ba8.Getter._16_8_ = 0;
    local_be8.Object = (SWidget *)local_1030;
    local_ba8.bIsSet = true;
    local_be8.SharedReferenceCount.ReferenceController = local_1028;
    local_ba8.Getter._0_8_ = 0;
    local_ba8.Getter._8_8_ = 0;
    if (local_1028 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      local_1028->SharedReferenceCount = (atomic<int>)((int)local_1028->SharedReferenceCount + 1);
      UNLOCK();
    }
    FMenuBuilder::AddWidget(&local_b08,&local_be8,&local_ea0,false,true,&local_ba8);
    TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_ba8.Getter);
    if (local_ba8.Value.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_ba8.Value.TextData.Reference + 0x10))();
    }
    if (local_828.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_828.TextData.Reference + 0x10))();
    }
  }
  FMenuBuilder::MakeWidget
            (&local_b08,__return_storage_ptr__,
             (TDelegate<void___cdecl(TSharedRef<FMultiBox,1>_const_&,TSharedRef<SMultiBoxWidget,1>_const_&),FDefaultDelegateUserPolicy>
              *)0x0);
  if (local_ea0.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_ea0.TextData.Reference + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar38);
  FMenuBuilder::~FMenuBuilder(&local_b08);
  return __return_storage_ptr__;
}

// Construct @ 146045000

void __thiscall SFrameRatePicker::Construct(SFrameRatePicker *this,FArguments *param_1)

{
  int *piVar1;
  byte *pbVar2;
  TArray<FCommonFrameRateInfo,TSizedDefaultAllocator<32>_> *pTVar3;
  int iVar4;
  FCommonFrameRateInfo *pFVar5;
  FScriptContainerElement *pFVar6;
  SWidget *pSVar7;
  code *pcVar8;
  bool bVar9;
  bool bVar10;
  SComboButton *pSVar11;
  FSharedReferencer<1> FVar12;
  STextBlock *pSVar13;
  FSharedReferencer<1> FVar14;
  bool bVar15;
  char cVar16;
  byte bVar17;
  FArguments *pFVar18;
  undefined8 *puVar19;
  TSharedRef<SWidget,1> *pTVar20;
  ulong64 uVar21;
  FArguments *pFVar22;
  TSharedRef<SWidget_const_,1> *pTVar23;
  longlong *plVar24;
  TReferenceControllerBase<1> *pTVar25;
  undefined4 local_res8;
  undefined4 uStackX_c;
  T0RequiredArgs local_res10 [8];
  FLLMScope local_res18 [2];
  FLLMScope local_res20 [2];
  ForAnyElementType local_af8;
  int local_af0;
  int local_aec;
  FMemScope local_ae8;
  undefined4 uStack_ae0;
  undefined4 uStack_adc;
  undefined1 local_ad8 [8];
  ForAnyElementType local_ad0;
  int local_ac8;
  TSlateDecl<SComboButton,RequiredArgs::T0RequiredArgs> local_ac0;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_aa8;
  FName local_a90;
  FMemScope local_a88;
  FArguments *local_a80;
  FName local_a78;
  longlong local_a70;
  undefined8 uStack_a68;
  undefined8 local_a60;
  undefined8 uStack_a58;
  undefined4 local_a50;
  bool local_a4c;
  TDelegate<FSlateColor___cdecl(void),FDefaultDelegateUserPolicy> local_a48;
  FDestructionSentinel local_a30;
  FDestructionSentinel local_a18;
  undefined1 *local_a00;
  FDestructionSentinel local_9f8;
  undefined1 *local_9e0;
  undefined8 local_9d8;
  undefined8 uStack_9d0;
  bool local_9c8;
  TDelegate<FMargin___cdecl(void),FDefaultDelegateUserPolicy> local_9c0;
  TSharedRef<SWidget,1> local_9a8;
  TSharedRef<SWidget_const_,1> local_998;
  SWidget *local_988;
  TReferenceControllerBase<1> *pTStack_980;
  FReadAccessScope local_978;
  FSlateFontInfo local_960;
  bool local_900;
  TDelegate<FSlateFontInfo___cdecl(void),FDefaultDelegateUserPolicy> local_8f8;
  FArguments local_8e0;
  FArguments local_388;
  
  bVar10 = false;
  bVar9 = false;
  bVar15 = false;
  pTVar3 = &this->PresetValues;
  local_res8 = 0;
  if (pTVar3 != &param_1->_PresetValues) {
    DestructItems<FCommonFrameRateInfo,int>
              ((FCommonFrameRateInfo *)(pTVar3->AllocatorInstance).Data,
               (this->PresetValues).ArrayNum);
    iVar4 = (param_1->_PresetValues).ArrayNum;
    piVar1 = &(this->PresetValues).ArrayMax;
    pFVar5 = (FCommonFrameRateInfo *)(param_1->_PresetValues).AllocatorInstance.Data;
    (this->PresetValues).ArrayNum = iVar4;
    if ((iVar4 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x28,8,iVar4,*piVar1,&pTVar3->AllocatorInstance,iVar4,piVar1);
      ConstructItems<FCommonFrameRateInfo,FCommonFrameRateInfo,int>
                ((pTVar3->AllocatorInstance).Data,pFVar5,iVar4);
    }
  }
  (this->ValueAttribute).Value = (param_1->_Value).Value;
  (this->ValueAttribute).bIsSet = (param_1->_Value).bIsSet;
  TDelegate<FFrameRate___cdecl(void),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>(&(this->ValueAttribute).Getter,&(param_1->_Value).Getter);
  TDelegate<void___cdecl(FFrameRate),FDefaultDelegateUserPolicy>::operator=
            (&this->OnValueChangedDelegate,&param_1->_OnValueChanged);
  (this->HasMultipleValuesAttribute).Value = (param_1->_HasMultipleValues).Value;
  (this->HasMultipleValuesAttribute).bIsSet = (param_1->_HasMultipleValues).bIsSet;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&(this->HasMultipleValuesAttribute).Getter,&(param_1->_HasMultipleValues).Getter);
  TAttribute<FText>::operator=(&this->RecommendedText,&param_1->_RecommendedText);
  TAttribute<FText>::operator=(&this->NotRecommendedText,&param_1->_NotRecommendedText);
  TAttribute<FText>::operator=(&this->NotRecommendedToolTip,&param_1->_NotRecommendedToolTip);
  if (&param_1->_IsPresetRecommended != &this->IsPresetRecommendedDelegate) {
    local_ad8 = (undefined1  [8])0x0;
    local_ad0.Data = (FScriptContainerElement *)0x0;
    local_ac8 = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &param_1->_IsPresetRecommended,&local_978);
    if ((*(int *)&(param_1->_IsPresetRecommended).field_0x10 != 0) &&
       (plVar24 = *(longlong **)&(param_1->_IsPresetRecommended).field_0x8,
       plVar24 != (longlong *)0x0)) {
      (**(code **)(*plVar24 + 0x50))(plVar24,local_ad8);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_978);
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->IsPresetRecommendedDelegate,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_ad8);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_ad8,
               (FWriteAccessScope *)&local_a30);
    if ((local_ac8 != 0) && (local_ad0.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)local_ad0.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_ad0,0,0,0x10);
      local_ac8 = 0;
    }
    if (local_a30.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_a30.Accessor,&local_a30);
    }
    if (local_ad0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_ad0.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_ad8);
  }
  if ((this->PresetValues).ArrayNum == 0) {
    local_af8.Data = (FScriptContainerElement *)0x0;
    local_af0 = 0xe;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,0xe,0,&local_af8,0xe,&local_aec);
    ConstructItems<FCommonFrameRateInfo,FCommonFrameRateInfo,int>
              (local_af8.Data,FCommonFrameRates::AllFrameRates,0xe);
    if (pTVar3 != (TArray<FCommonFrameRateInfo,TSizedDefaultAllocator<32>_> *)&local_af8) {
      DestructItems<FCommonFrameRateInfo,int>
                ((FCommonFrameRateInfo *)(pTVar3->AllocatorInstance).Data,
                 (this->PresetValues).ArrayNum);
      pFVar6 = (pTVar3->AllocatorInstance).Data;
      if (pFVar6 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar6);
      }
      (pTVar3->AllocatorInstance).Data = local_af8.Data;
      (this->PresetValues).ArrayNum = local_af0;
      (this->PresetValues).ArrayMax = local_aec;
      local_aec = 0;
      local_af8.Data = (FScriptContainerElement *)0x0;
      local_af0 = 0;
    }
    DestructItems<FCommonFrameRateInfo,int>((FCommonFrameRateInfo *)local_af8.Data,local_af0);
    if ((FCommonFrameRateInfo *)local_af8.Data != (FCommonFrameRateInfo *)0x0) {
      FMemory::Free(local_af8.Data);
    }
  }
  pFVar18 = SComboButton::FArguments::FArguments(&local_388);
  pFVar18->_ComboButtonStyle = param_1->_ComboButtonStyle;
  pFVar18->_ButtonStyle = param_1->_ButtonStyle;
  local_a50._0_1_ = (param_1->_ForegroundColor).Value.ColorUseRule;
  local_a50._1_1_ = (param_1->_ForegroundColor).Value.ColorTableId;
  local_a50._2_2_ = *(undefined2 *)&(param_1->_ForegroundColor).Value.field_0x12;
  local_a60 = *(undefined8 *)&(param_1->_ForegroundColor).Value.SpecifiedColor.field0_0x0;
  uStack_a58 = *(undefined8 *)
                ((longlong)&(param_1->_ForegroundColor).Value.SpecifiedColor.field0_0x0 + 8);
  local_a4c = (param_1->_ForegroundColor).bIsSet;
  local_a48._16_4_ = 0;
  local_a48._0_8_ = 0;
  local_a48._8_8_ = 0;
  local_a80 = pFVar18;
  TDelegate<FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>(&local_a48,&(param_1->_ForegroundColor).Getter);
  *(undefined8 *)&(pFVar18->_ForegroundColor).Value.SpecifiedColor.field0_0x0 = local_a60;
  *(undefined8 *)((longlong)&(pFVar18->_ForegroundColor).Value.SpecifiedColor.field0_0x0 + 8) =
       uStack_a58;
  (pFVar18->_ForegroundColor).Value.ColorUseRule = (undefined1)local_a50;
  (pFVar18->_ForegroundColor).Value.ColorTableId = local_a50._1_1_;
  *(undefined2 *)&(pFVar18->_ForegroundColor).Value.field_0x12 = local_a50._2_2_;
  (pFVar18->_ForegroundColor).bIsSet = local_a4c;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar18->_ForegroundColor).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)&local_a48);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_a48);
  local_9d8._0_4_ = (param_1->_ContentPadding).Value.Left;
  local_9d8._4_4_ = (param_1->_ContentPadding).Value.Top;
  uStack_9d0._0_4_ = (param_1->_ContentPadding).Value.Right;
  uStack_9d0._4_4_ = (param_1->_ContentPadding).Value.Bottom;
  local_9c8 = (param_1->_ContentPadding).bIsSet;
  TDelegate<FMargin___cdecl(void),FDefaultDelegateUserPolicy>::
  TDelegate<FMargin___cdecl(void),FDefaultDelegateUserPolicy>
            (&local_9c0,&(param_1->_ContentPadding).Getter);
  (pFVar18->_ContentPadding).Value.Left = (float)(undefined4)local_9d8;
  (pFVar18->_ContentPadding).Value.Top = (float)local_9d8._4_4_;
  (pFVar18->_ContentPadding).Value.Right = (float)(undefined4)uStack_9d0;
  (pFVar18->_ContentPadding).Value.Bottom = (float)uStack_9d0._4_4_;
  (pFVar18->_ContentPadding).bIsSet = local_9c8;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar18->_ContentPadding).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)&local_9c0);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_9c0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar18->_OnGetMenuContent,
             (FWriteAccessScope *)&local_a18);
  local_a00 = &(pFVar18->_OnGetMenuContent).field_0x8;
  puVar19 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_a00);
  if (puVar19 == (undefined8 *)0x0) {
    pTVar25 = (TReferenceControllerBase<1> *)CONCAT44(uStackX_c,local_res8);
  }
  else {
    uStack_adc = uStack_a68._4_4_;
    local_ae8 = (FMemScope)BuildMenu;
    uStack_ae0 = 0;
    pTVar20 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_9a8);
    pTVar25 = (pTVar20->SharedReferenceCount).ReferenceController;
    pSVar7 = pTVar20->Object;
    if (pTVar25 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar25->SharedReferenceCount = (atomic<int>)((int)pTVar25->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar25->SharedReferenceCount = (atomic<int>)((int)pTVar25->SharedReferenceCount + 1);
      UNLOCK();
    }
    *puVar19 = &
               ___7__TCommonDelegateInstanceState___A6A_AV__TSharedRef_VSWidget___00__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar21 = FDelegateHandle::GenerateNewID();
    puVar19[2] = uVar21;
    *puVar19 = &
               ___7__TBaseSPMethodDelegateInstance__0A_VSFrameRatePicker___00__A6A_AV__TSharedRef_VSWidget___00__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar19[3] = pSVar7;
    puVar19[4] = pTVar25;
    if (pTVar25 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar25->WeakReferenceCount = (atomic<int>)((int)pTVar25->WeakReferenceCount + 1);
      UNLOCK();
    }
    bVar10 = true;
    bVar9 = true;
    bVar15 = true;
    *(FMemScope *)(puVar19 + 5) = local_ae8;
    puVar19[6] = CONCAT44(uStack_adc,uStack_ae0);
  }
  if (bVar15) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar25);
  }
  if (bVar9) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar25);
  }
  if (bVar10) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_9a8.SharedReferenceCount.ReferenceController);
  }
  bVar10 = false;
  bVar9 = false;
  bVar15 = false;
  if (local_a18.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_a18.Accessor,&local_a18);
  }
  pFVar22 = STextBlock::FArguments::FArguments(&local_8e0);
  FSlateFontInfo::FSlateFontInfo(&local_960,&(param_1->_Font).Value);
  local_900 = (param_1->_Font).bIsSet;
  local_8f8._0_8_ = 0;
  local_8f8._8_8_ = 0;
  local_8f8._16_4_ = 0;
  TDelegate<FSlateFontInfo___cdecl(void),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>(&local_8f8,&(param_1->_Font).Getter);
  FSlateFontInfo::operator=(&(pFVar22->_Font).Value,&local_960);
  (pFVar22->_Font).bIsSet = local_900;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar22->_Font).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)&local_8f8);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_8f8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_960.CompositeFont.SharedReferenceCount.ReferenceController);
  (pFVar22->_Text).bIsSet = true;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&(pFVar22->_Text).Getter,
             (FWriteAccessScope *)&local_9f8);
  local_9e0 = &(pFVar22->_Text).Getter.field_0x8;
  puVar19 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_9e0);
  if (puVar19 == (undefined8 *)0x0) {
    pTVar25 = (TReferenceControllerBase<1> *)CONCAT44(uStackX_c,local_res8);
  }
  else {
    uStack_adc = uStack_a68._4_4_;
    local_ae8 = (FMemScope)GetValueText;
    uStack_ae0 = 0;
    pTVar23 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_998);
    pTVar25 = (pTVar23->SharedReferenceCount).ReferenceController;
    pSVar7 = pTVar23->Object;
    if (pTVar25 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar25->SharedReferenceCount = (atomic<int>)((int)pTVar25->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar25->SharedReferenceCount = (atomic<int>)((int)pTVar25->SharedReferenceCount + 1);
      UNLOCK();
    }
    bVar10 = true;
    bVar9 = true;
    bVar15 = true;
    *puVar19 = &
               ___7__TCommonDelegateInstanceState___A6A_AVFText__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar21 = FDelegateHandle::GenerateNewID();
    puVar19[2] = uVar21;
    *puVar19 = &
               ___7__TBaseSPMethodDelegateInstance__00__CBVSFrameRatePicker___00__A6A_AVFText__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar19[3] = pSVar7;
    puVar19[4] = pTVar25;
    if (pTVar25 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar25->WeakReferenceCount = (atomic<int>)((int)pTVar25->WeakReferenceCount + 1);
      UNLOCK();
    }
    *(FMemScope *)(puVar19 + 5) = local_ae8;
    puVar19[6] = CONCAT44(uStack_adc,uStack_ae0);
  }
  if (bVar15) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar25);
  }
  if (bVar9) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar25);
  }
  if (bVar10) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_998.SharedReferenceCount.ReferenceController);
  }
  if (local_9f8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_9f8.Accessor,&local_9f8);
  }
  FLLMScope::FLLMScope(local_res18,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_a90 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_a88,&local_a90,true);
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>
            (&local_aa8,"STextBlock",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\TimeManagement\\Private\\Widgets\\SFrameRatePicker.cpp"
             ,0x2b,(T0RequiredArgs *)&local_res8);
  FMemScope::~FMemScope(&local_a88);
  FLLMScope::~FLLMScope(local_res18);
  pSVar13 = local_aa8._Widget.Object;
  if ((local_aa8._Widget.Object == (STextBlock *)0x0) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar15)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  SWidget::SWidgetConstruct((SWidget *)local_aa8._Widget.Object,(FSlateBaseNamedArgs *)pFVar22);
  STextBlock::Construct(local_aa8._Widget.Object,pFVar22);
  if ((local_aa8._Widget.Object == (STextBlock *)0x0) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar15)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  if (((local_aa8._Widget.Object)->_padding_ & 0x10) == 0) {
    cVar16 = (**(code **)((local_aa8._Widget.Object)->_padding_ + 0x228))(local_aa8._Widget.Object);
    bVar17 = 0;
    if (cVar16 != '\0') goto LAB_14604579b;
  }
  else {
LAB_14604579b:
    bVar17 = 0x20;
  }
  *(byte *)&(local_aa8._Widget.Object)->_padding_ =
       (byte)(local_aa8._Widget.Object)->_padding_ & 0xdf;
  *(byte *)&(local_aa8._Widget.Object)->_padding_ =
       (byte)(local_aa8._Widget.Object)->_padding_ | bVar17;
  if ((local_aa8._Widget.Object == (STextBlock *)0x0) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar15)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  pbVar2 = (byte *)((longlong)&(local_aa8._Widget.Object)->_padding_ + 1);
  *pbVar2 = *pbVar2 | 4;
  if ((local_aa8._Widget.Object == (STextBlock *)0x0) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x416,L""), bVar15)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  FVar14.ReferenceController = local_aa8._Widget.SharedReferenceCount.ReferenceController;
  local_aa8._Widget.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_aa8._Widget.Object = (STextBlock *)0x0;
  if ((pSVar13 == (STextBlock *)0x0) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x26c,L""), bVar15)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  pFVar18 = local_a80;
  if (FVar14.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar14.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar14.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    (FVar14.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar14.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_988 = (local_a80->_ButtonContent).Widget.Object;
  pTStack_980 = (local_a80->_ButtonContent).Widget.SharedReferenceCount.ReferenceController;
  (local_a80->_ButtonContent).Widget.Object = (SWidget *)pSVar13;
  (local_a80->_ButtonContent).Widget.SharedReferenceCount.ReferenceController =
       FVar14.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_980);
  FLLMScope::FLLMScope(local_res20,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_a78 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_ae8,&local_a78,true);
  TSlateDecl<SComboButton,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SComboButton,RequiredArgs::T0RequiredArgs>
            (&local_ac0,"SComboButton",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\TimeManagement\\Private\\Widgets\\SFrameRatePicker.cpp"
             ,0x23,local_res10);
  FMemScope::~FMemScope(&local_ae8);
  FLLMScope::~FLLMScope(local_res20);
  pSVar11 = local_ac0._Widget.Object;
  if ((local_ac0._Widget.Object == (SComboButton *)0x0) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar15)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  SWidget::SWidgetConstruct((SWidget *)local_ac0._Widget.Object,(FSlateBaseNamedArgs *)pFVar18);
  SComboButton::Construct(local_ac0._Widget.Object,pFVar18);
  if ((local_ac0._Widget.Object == (SComboButton *)0x0) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar15)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  if (((local_ac0._Widget.Object)->_padding_ & 0x10) == 0) {
    cVar16 = (**(code **)((local_ac0._Widget.Object)->_padding_ + 0x228))(local_ac0._Widget.Object);
    bVar17 = 0;
    if (cVar16 == '\0') goto LAB_14604598a;
  }
  bVar17 = 0x20;
LAB_14604598a:
  *(byte *)&(local_ac0._Widget.Object)->_padding_ =
       (byte)(local_ac0._Widget.Object)->_padding_ & 0xdf;
  *(byte *)&(local_ac0._Widget.Object)->_padding_ =
       (byte)(local_ac0._Widget.Object)->_padding_ | bVar17;
  if ((local_ac0._Widget.Object == (SComboButton *)0x0) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar15)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  pbVar2 = (byte *)((longlong)&(local_ac0._Widget.Object)->_padding_ + 1);
  *pbVar2 = *pbVar2 | 4;
  if ((local_ac0._Widget.Object == (SComboButton *)0x0) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x416,L""), bVar15)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  FVar12.ReferenceController = local_ac0._Widget.SharedReferenceCount.ReferenceController;
  local_ac0._Widget.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_ac0._Widget.Object = (SComboButton *)0x0;
  if ((pSVar11 == (SComboButton *)0x0) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x26c,L""), bVar15)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  plVar24 = &this->_padding_;
  if (FVar12.ReferenceController == (TReferenceControllerBase<1> *)0x0) {
    FSlotBase::DetatchParentFromContent((FSlotBase *)plVar24);
  }
  else {
    LOCK();
    (FVar12.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar12.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
    FSlotBase::DetatchParentFromContent((FSlotBase *)plVar24);
    LOCK();
    (FVar12.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar12.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_a70 = this->_padding_;
  uStack_a68 = (TReferenceControllerBase<1> *)this->_padding_;
  this->_padding_ = (longlong)pSVar11;
  this->_padding_ = (longlong)FVar12.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(uStack_a68);
  FSlotBase::AfterContentOrOwnerAssigned((FSlotBase *)plVar24);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar12.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar12.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_ac0._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar14.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar14.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_aa8._Widget.SharedReferenceCount.ReferenceController);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_8e0._OnDoubleClicked);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_8e0._LineBreakPolicy.SharedReferenceCount.ReferenceController);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_8e0._MinDesiredWidth.Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_8e0._Justification.Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &local_8e0._ApplyLineHeightToBottomLine.Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_8e0._LineHeightPercentage.Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_8e0._Margin.Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_8e0._TransformPolicy.Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_8e0._WrappingPolicy.Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_8e0._AutoWrapText.Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_8e0._WrapTextAt.Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_8e0._HighlightText.Getter);
  if (local_8e0._HighlightText.Value.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_8e0._HighlightText.Value.TextData.Reference + 0x10))();
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_8e0._HighlightShape.Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_8e0._HighlightColor.Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_8e0._ShadowColorAndOpacity.Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_8e0._ShadowOffset.Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_8e0._ColorAndOpacity.Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_8e0._StrikeBrush.Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_8e0._Font.Getter);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_8e0._Font.Value.CompositeFont.SharedReferenceCount.ReferenceController);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_8e0._Text.Getter);
  if (local_8e0._Text.Value.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_8e0._Text.Value.TextData.Reference + 0x10))();
  }
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_8e0);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_388._MenuPlacement.Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_388._ContentPadding.Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_388._ButtonColorAndOpacity.Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_388._ForegroundColor.Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_388._OnComboBoxOpened);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_388._OnMenuOpenChanged);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_388._OnGetMenuContent);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_388._MenuContent.Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_388._ButtonContent.Widget.SharedReferenceCount.ReferenceController);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_388);
  return;
}

// GetCurrentValue @ 14604c340

FFrameRate __thiscall SFrameRatePicker::GetCurrentValue(SFrameRatePicker *this)

{
  FFrameRate *pFVar1;
  FFrameRate in_RDX;
  
  pFVar1 = TAttribute<FFrameRate>::Get(&this->ValueAttribute);
  *(FFrameRate *)in_RDX = *pFVar1;
  return in_RDX;
}

// GetValueText @ 14604d7b0

FText * __thiscall
SFrameRatePicker::GetValueText(SFrameRatePicker *this,FText *__return_storage_ptr__)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  ITextData *pIVar3;
  bool *pbVar4;
  FFrameRate *pFVar5;
  FFrameRate FVar6;
  FScriptContainerElement *pFVar7;
  undefined1 local_res8 [8];
  FFrameRate local_res18;
  
  pbVar4 = TAttribute<bool>::Get(&this->HasMultipleValuesAttribute);
  if (*pbVar4 != false) {
    FText::AsLocalizable_Advanced_LocText
              (__return_storage_ptr__,L"SFrameRatePicker",L"MultipleValuesText",L"<multiple values>"
              );
    return __return_storage_ptr__;
  }
  pFVar5 = TAttribute<FFrameRate>::Get(&this->ValueAttribute);
  iVar2 = (this->PresetValues).ArrayNum;
  pFVar7 = (this->PresetValues).AllocatorInstance.Data;
  FVar6 = *pFVar5;
  pFVar1 = pFVar7 + (longlong)iVar2 * 0x28;
  local_res18 = FVar6;
  while( true ) {
    if ((this->PresetValues).ArrayNum != iVar2) {
      `TCheckedPointerIterator<FCommonFrameRateInfo_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
      FVar6 = local_res18;
    }
    if (pFVar7 == pFVar1) break;
    if ((*(int *)pFVar7 == FVar6.Numerator) && (*(int *)(pFVar7 + 4) == local_res18.Denominator)) {
      (__return_storage_ptr__->TextData).Reference = (ITextData *)0x0;
      pIVar3 = *(ITextData **)(pFVar7 + 8);
      (__return_storage_ptr__->TextData).Reference = pIVar3;
      if (pIVar3 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar3 + 8))(pIVar3,local_res8);
      }
      __return_storage_ptr__->Flags = *(uint *)(pFVar7 + 0x10);
      return __return_storage_ptr__;
    }
    pFVar7 = pFVar7 + 0x28;
  }
  FFrameRate::ToPrettyText(&local_res18,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// PopulateNotRecommendedMenu @ 14604ef90

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void __thiscall
SFrameRatePicker::PopulateNotRecommendedMenu(SFrameRatePicker *this,FMenuBuilder *param_1)

{
  FCommonFrameRateInfo *pFVar1;
  int iVar2;
  FFrameRate FVar3;
  undefined8 uVar4;
  SWidget *pSVar5;
  code *pcVar6;
  FScriptContainerElement *pFVar7;
  undefined4 uVar8;
  char cVar9;
  bool bVar10;
  int iVar11;
  bool *pbVar12;
  undefined8 *puVar13;
  ulong64 uVar14;
  TSharedRef<SWidget,1> *pTVar15;
  FSlateIcon *pFVar16;
  longlong *plVar17;
  ulonglong uVar18;
  FCommonFrameRateInfo *pFVar19;
  SFrameRatePicker *pSVar20;
  uint uVar21;
  FScriptContainerElement *pFVar22;
  FIdentityFunctor local_res8;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  ForAnyElementType local_2f8;
  undefined8 local_2f0;
  undefined1 local_2e8 [8];
  SFrameRatePicker *local_2e0;
  uint local_2d8;
  undefined1 local_2d0 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_2c8;
  ForAnyElementType FStack_2c0;
  ulonglong local_2b8;
  FName local_2b0;
  FName local_2a8;
  FScriptContainerElement *local_2a0;
  undefined1 local_298 [24];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_280;
  ForAnyElementType FStack_278;
  ulonglong local_270;
  undefined1 local_268 [24];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_250;
  ForAnyElementType FStack_248;
  ulonglong local_240;
  undefined1 local_238 [24];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_220;
  ForAnyElementType FStack_218;
  ulonglong local_210;
  undefined1 local_208 [8];
  FDelegateAllocation local_200;
  undefined1 local_1f0 [8];
  FDelegateAllocation local_1e8;
  undefined1 local_1d8 [4];
  undefined1 local_1d4 [4];
  FScriptContainerElement *local_1d0;
  code *local_1c8;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> local_1b8;
  TSharedRef<SWidget,1> local_1a0;
  FDestructionSentinel local_190;
  FDestructionSentinel local_178;
  FDestructionSentinel local_160;
  FDestructionSentinel local_148;
  FDestructionSentinel local_130;
  FDelegateAllocation *local_118;
  FDestructionSentinel local_110;
  FDelegateAllocation *local_f8;
  FReadAccessScope local_f0;
  FUIAction local_d8;
  FSlateIcon local_70;
  
  local_2e0 = (SFrameRatePicker *)((ulonglong)local_2e0 & 0xffffffff00000000);
  pbVar12 = TAttribute<bool>::Get(&this->HasMultipleValuesAttribute);
  if (*pbVar12 == false) {
    TAttribute<FFrameRate>::Get(&this->ValueAttribute);
  }
  local_2f8.Data = (FScriptContainerElement *)0x0;
  local_2f0 = 0;
  iVar2 = (this->PresetValues).ArrayNum;
  pFVar19 = (FCommonFrameRateInfo *)(this->PresetValues).AllocatorInstance.Data;
  pFVar1 = pFVar19 + iVar2;
  while( true ) {
    if ((this->PresetValues).ArrayNum != iVar2) {
      local_res18[0] = 0;
      `TCheckedPointerIterator<FCommonFrameRateInfo,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res18);
    }
    if (pFVar19 == pFVar1) break;
    FVar3 = pFVar19->FrameRate;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &this->IsPresetRecommendedDelegate,&local_f0);
    plVar17 = (longlong *)0x0;
    if (*(int *)&(this->IsPresetRecommendedDelegate).field_0x10 != 0) {
      plVar17 = *(longlong **)&(this->IsPresetRecommendedDelegate).field_0x8;
    }
    cVar9 = (**(code **)(*plVar17 + 0x60))(plVar17,FVar3);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_f0);
    if (cVar9 == '\0') {
      if (((local_2f8.Data <= pFVar19) &&
          (pFVar19 < (FCommonFrameRateInfo *)(local_2f8.Data + (longlong)local_2f0._4_4_ * 0x28)))
         && (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar10)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iVar11 = (uint)local_2f0;
      if ((uint)local_2f0 == local_2f0._4_4_) {
        iVar11 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x828,&local_2f8,(int *)((longlong)&local_2f0 + 4));
      }
      local_2f0 = CONCAT44(local_2f0._4_4_,iVar11 + 1);
      FCommonFrameRateInfo::FCommonFrameRateInfo
                ((FCommonFrameRateInfo *)(local_2f8.Data + (longlong)iVar11 * 0x28),pFVar19);
    }
    pFVar19 = pFVar19 + 1;
  }
  local_res8 = SUB81(this,0);
  AlgoImpl::
  IntroSortInternal<FCommonFrameRateInfo,int,FIdentityFunctor,TDereferenceWrapper<FCommonFrameRateInfo,_SFrameRatePicker::PopulateNotRecommendedMenu_::__l2::<lambda_1>_>_>
            ((FCommonFrameRateInfo *)local_2f8.Data,(uint)local_2f0,local_res8,
             (<lambda_1> *)local_res20);
  uVar8 = local_1a0.SharedReferenceCount.ReferenceController._4_4_;
  uVar18 = (ulonglong)(int)(uint)local_2f0;
  local_1d0 = local_2f8.Data + uVar18 * 0x28;
  local_2d8 = (uint)local_2f0;
  pFVar22 = local_2f8.Data + 0x20;
  pSVar20 = this;
  uVar21 = (uint)local_2e0;
  while( true ) {
    pFVar7 = local_1d0;
    local_2a0 = pFVar22;
    if ((uint)local_2f0 != (int)uVar18) {
      `TCheckedPointerIterator<FCommonFrameRateInfo,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_2e8);
    }
    if (pFVar22 + -0x20 == pFVar7) break;
    uVar4 = *(undefined8 *)&pFVar22[-0x20].field_0x0;
    local_208 = (undefined1  [8])0x0;
    local_200.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_200.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_208,
               (FWriteAccessScope *)&local_130);
    local_118 = &local_200;
    puVar13 = UE::Core::Private::DelegateAllocate(0x28,&local_200);
    if (puVar13 != (undefined8 *)0x0) {
      *puVar13 = &___7__TCommonDelegateInstanceState___A6A_NXZUFDefaultDelegateUserPolicy____V__6B_;
      uVar14 = FDelegateHandle::GenerateNewID();
      puVar13[2] = uVar14;
      *puVar13 = &TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`SFrameRatePicker::PopulateNotRecommendedMenu'::`13'::<lambda_2>_>
                  ::_vftable_;
      puVar13[3] = this;
      puVar13[4] = uVar4;
    }
    if (local_130.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_130.Accessor,&local_130);
    }
    local_1b8._16_8_ = 0;
    local_1b8._0_8_ = 0;
    local_1b8._8_8_ = 0;
    local_1f0 = (undefined1  [8])0x0;
    local_1e8.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_1e8.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1f0,
               (FWriteAccessScope *)&local_110);
    local_f8 = &local_1e8;
    puVar13 = UE::Core::Private::DelegateAllocate(0x38,&local_1e8);
    if (puVar13 != (undefined8 *)0x0) {
      uStack_1bc = uVar8;
      local_1c8 = SetValue;
      uStack_1c0 = 0;
      pTVar15 = TSharedFromThis<SWidget,1>::AsShared
                          ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_1a0);
      pSVar20 = (SFrameRatePicker *)(pTVar15->SharedReferenceCount).ReferenceController;
      pSVar5 = pTVar15->Object;
      if (pSVar20 != (SFrameRatePicker *)0x0) {
        LOCK();
        *(atomic<int> *)&pSVar20->_padding_ =
             (atomic<int>)((int)*(atomic<int> *)&pSVar20->_padding_ + 1);
        UNLOCK();
        LOCK();
        *(atomic<int> *)&pSVar20->_padding_ =
             (atomic<int>)((int)*(atomic<int> *)&pSVar20->_padding_ + 1);
        UNLOCK();
      }
      uVar21 = uVar21 | 7;
      *puVar13 = &
                 ___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy__UFFrameRate____6B_
      ;
      puVar13[1] = uVar4;
      local_2e0 = pSVar20;
      uVar14 = FDelegateHandle::GenerateNewID();
      puVar13[2] = uVar14;
      *puVar13 = &
                 ___7__TBaseSPMethodDelegateInstance__0A_VSFrameRatePicker___00__A6AXXZUFDefaultDelegateUserPolicy__UFFrameRate____6B_
      ;
      puVar13[3] = pSVar5;
      puVar13[4] = pSVar20;
      if (pSVar20 != (SFrameRatePicker *)0x0) {
        LOCK();
        ((atomic<int> *)&pSVar20->_padding_)[1] =
             (atomic<int>)((int)((atomic<int> *)&pSVar20->_padding_)[1] + 1);
        UNLOCK();
      }
      puVar13[5] = local_1c8;
      puVar13[6] = CONCAT44(uStack_1bc,uStack_1c0);
      pFVar22 = local_2a0;
    }
    if ((uVar21 & 4) != 0) {
      uVar21 = uVar21 & 0xfffffffb;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)pSVar20);
    }
    if ((uVar21 & 2) != 0) {
      uVar21 = uVar21 & 0xfffffffd;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)local_2e0);
    }
    if ((uVar21 & 1) != 0) {
      uVar21 = uVar21 & 0xfffffffe;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)
                 CONCAT44(local_1a0.SharedReferenceCount.ReferenceController._4_4_,
                          local_1a0.SharedReferenceCount.ReferenceController._0_4_));
    }
    if (local_110.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_110.Accessor,&local_110);
    }
    FUIAction::FUIAction
              (&local_d8,(TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_1f0,
               &local_1b8,(TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *)local_208,
               RepeatDisabled);
    local_2d0[0] = (TEnumAsByte<EVisibility::Private>)0x19;
    local_2d0[1] = false;
    local_2b8 = 0;
    local_2c8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_2c0.Data = (FScriptContainerElement *)0x0;
    FText::FText((FText *)local_238);
    local_238[0x10] = false;
    local_210 = 0;
    local_220.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_218.Data = (FScriptContainerElement *)0x0;
    local_2b0.ComparisonIndex.Value = 0;
    local_2b0.Number = 0;
    local_2a8.ComparisonIndex.Value = 0;
    local_2a8.Number = 0;
    pFVar16 = FSlateIcon::FSlateIcon(&local_70);
    local_268._0_8_ = (((FText *)(pFVar22 + -8))->TextData).Reference;
    if ((ITextData *)local_268._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_268._0_8_ + 8))(local_268._0_8_,local_1d8);
    }
    local_268._8_4_ = *(undefined4 *)pFVar22;
    local_298._0_8_ = *(undefined8 *)(pFVar22 + -0x18);
    local_268[0x10] = true;
    local_240 = 0;
    local_250.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_248.Data = (FScriptContainerElement *)0x0;
    if ((ITextData *)local_298._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_298._0_8_ + 8))(local_298._0_8_,local_1d4);
    }
    local_298._8_4_ = *(undefined4 *)(pFVar22 + -0x10);
    local_298[0x10] = true;
    local_270 = 0;
    local_280.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_278.Data = (FScriptContainerElement *)0x0;
    FBaseMenuBuilder::AddMenuEntry
              ((FBaseMenuBuilder *)param_1,(TAttribute<FText> *)local_298,
               (TAttribute<FText> *)local_268,pFVar16,&local_d8,local_2a8,RadioButton,local_2b0,
               (TAttribute<FText> *)local_238,(TAttribute<EVisibility> *)local_2d0);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_280,(FWriteAccessScope *)&local_190);
    if (((int)local_270 != 0) && (FStack_278.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_278.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_278,0,0,0x10);
      local_270 = local_270 & 0xffffffff00000000;
    }
    if (local_190.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_190.Accessor,&local_190);
    }
    if (FStack_278.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_278.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_280.AccessDetector);
    if ((ITextData *)local_298._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_298._0_8_ + 0x10))();
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_250,(FWriteAccessScope *)&local_178);
    if (((int)local_240 != 0) && (FStack_248.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_248.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_248,0,0,0x10);
      local_240 = local_240 & 0xffffffff00000000;
    }
    if (local_178.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_178.Accessor,&local_178);
    }
    if (FStack_248.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_248.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_250.AccessDetector);
    if ((ITextData *)local_268._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_268._0_8_ + 0x10))();
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_220,(FWriteAccessScope *)&local_160);
    if (((int)local_210 != 0) && (FStack_218.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_218.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_218,0,0,0x10);
      local_210 = local_210 & 0xffffffff00000000;
    }
    if (local_160.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_160.Accessor,&local_160);
    }
    if (FStack_218.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_218.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_220.AccessDetector);
    if ((ITextData *)local_238._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_238._0_8_ + 0x10))();
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_2c8,(FWriteAccessScope *)&local_148);
    if (((int)local_2b8 != 0) && (FStack_2c0.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_2c0.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_2c0,0,0,0x10);
      local_2b8 = local_2b8 & 0xffffffff00000000;
    }
    if (local_148.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_148.Accessor,&local_148);
    }
    if (FStack_2c0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_2c0.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_2c8.AccessDetector);
    TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_d8.IsActionVisibleDelegate);
    TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_d8.GetActionCheckState);
    TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_d8.CanExecuteAction);
    TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_d8);
    uVar18 = (ulonglong)local_2d8;
    pFVar22 = pFVar22 + 0x28;
  }
  DestructItems<FCommonFrameRateInfo,int>((FCommonFrameRateInfo *)local_2f8.Data,(uint)local_2f0);
  if ((FCommonFrameRateInfo *)local_2f8.Data != (FCommonFrameRateInfo *)0x0) {
    FMemory::Free(local_2f8.Data);
  }
  return;
}

// SetValue @ 14604fa90

void __thiscall SFrameRatePicker::SetValue(SFrameRatePicker *this,FFrameRate param_1)

{
  longlong *plVar1;
  char cVar2;
  bool bVar3;
  FDestructionSentinel local_48;
  FFrameRate local_30;
  undefined1 local_28;
  undefined1 local_20 [8];
  ForAnyElementType FStack_18;
  ulonglong local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnValueChangedDelegate
             ,(FReadAccessScope *)&local_48);
  if (((*(int *)&(this->OnValueChangedDelegate).field_0x10 != 0) &&
      (plVar1 = *(longlong **)&(this->OnValueChangedDelegate).field_0x8, plVar1 != (longlong *)0x0))
     && (cVar2 = (**(code **)(*plVar1 + 0x38))(), cVar2 != '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_48);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &this->OnValueChangedDelegate,(FReadAccessScope *)&local_48);
    if ((*(int *)&(this->OnValueChangedDelegate).field_0x10 != 0) &&
       (plVar1 = *(longlong **)&(this->OnValueChangedDelegate).field_0x8, plVar1 != (longlong *)0x0)
       ) {
      (**(code **)(*plVar1 + 0x68))(plVar1,param_1);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_48);
    return;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            ((FReadAccessScope *)&local_48);
  bVar3 = TAttribute<FFrameRate>::IsBound(&this->ValueAttribute);
  if (bVar3) {
    local_28 = 1;
    local_10 = 0;
    (this->ValueAttribute).Value = param_1;
    local_20 = (undefined1  [8])0x0;
    FStack_18.Data = (FScriptContainerElement *)0x0;
    (this->ValueAttribute).bIsSet = true;
    local_30 = param_1;
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ValueAttribute).Getter,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_20);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_20,
               (FWriteAccessScope *)&local_48);
    if (((int)local_10 != 0) && (FStack_18.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_18.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_18,0,0,0x10);
      local_10 = local_10 & 0xffffffff00000000;
    }
    if (local_48.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
    }
    if (FStack_18.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_18.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_20);
  }
  return;
}

