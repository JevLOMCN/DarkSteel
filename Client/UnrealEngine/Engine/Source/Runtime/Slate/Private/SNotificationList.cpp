// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 3

// AddNotification @ 1429c4be0

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<SNotificationItem,1> * __thiscall
SNotificationList::AddNotification
          (SNotificationList *this,TSharedRef<SNotificationItem,1> *__return_storage_ptr__,
          FNotificationInfo *param_1)

{
  byte *pbVar1;
  longlong lVar2;
  TArray<FNotificationButtonInfo,TSizedDefaultAllocator<32>_> *this_00;
  int iVar3;
  TReferenceControllerBase<1> *pTVar4;
  INotificationWidget *pIVar5;
  void *pvVar6;
  ITextData *pIVar7;
  SWidget *pSVar8;
  longlong *plVar9;
  SVerticalBox *pSVar10;
  code *pcVar11;
  FSharedReferencer<1> FVar12;
  bool bVar13;
  char cVar14;
  byte bVar15;
  FSlateNotificationManager *pFVar16;
  FArguments *pFVar17;
  TSharedRef<SNotificationItem,1> *pTVar18;
  FArguments *pFVar19;
  TAttribute<FText> *pTVar20;
  TSharedRef<SNotificationItemImpl,1> *pTVar21;
  TSharedRef<SWidget,1> *pTVar22;
  FSlot *this_01;
  FSlot *pFVar23;
  FSlotArguments *pFVar24;
  undefined1 *puVar25;
  ISlateStyle *pIVar26;
  FName *pFVar27;
  FSlateBrush *pFVar28;
  SNotificationItemExternalImpl **ppSVar29;
  T0RequiredArgs local_res8 [8];
  T0RequiredArgs local_res10 [8];
  T0RequiredArgs local_res20 [8];
  SNotificationItemExternalImpl *local_cb8;
  FSharedReferencer<1> FStack_cb0;
  FLLMScope local_ca8;
  FLLMScope local_ca4;
  FLLMScope local_ca0 [2];
  TArray<FNotificationButtonInfo,TSizedDefaultAllocator<32>_> local_c98;
  SNotificationItemExternalImpl *local_c88;
  FSharedReferencer<1> local_c80;
  TSlateDecl<SNotificationItemExternalImpl,RequiredArgs::T0RequiredArgs> local_c78;
  float local_c60;
  undefined1 local_c5c;
  undefined1 local_c58 [8];
  void *pvStack_c50;
  undefined8 local_c48;
  float local_c40;
  undefined1 local_c3c;
  undefined1 local_c38 [8];
  void *pvStack_c30;
  undefined8 local_c28;
  float local_c20;
  undefined1 local_c1c;
  undefined1 local_c18 [8];
  void *pvStack_c10;
  undefined8 local_c08;
  SNotificationItemExternalImpl *local_bf8;
  FSharedReferencer<1> FStack_bf0;
  ECheckBoxState local_be8;
  bool local_be7;
  undefined1 local_be0 [24];
  undefined4 local_bc8 [2];
  FName local_bc0;
  FMemScope local_bb8;
  FName local_bb0;
  FMemScope local_ba8;
  FSlot *local_ba0;
  FName local_b98;
  FMemScope local_b90;
  undefined8 local_b88;
  FSharedReferencer<1> local_b80;
  undefined8 local_b78;
  FSharedReferencer<1> local_b70;
  undefined8 local_b68;
  FSharedReferencer<1> local_b60;
  FName local_b58;
  TSlateDecl<SNotificationItemImpl,RequiredArgs::T0RequiredArgs> local_b50;
  TSlateDecl<SNotificationItemImpl,RequiredArgs::T0RequiredArgs> local_b38;
  INotificationWidget *local_b20;
  TReferenceControllerBase<1> *pTStack_b18;
  TSharedRef<SNotificationItemImpl,1> local_b10;
  TSharedRef<SWidget,1> local_b00;
  TSharedRef<SNotificationItemImpl,1> local_af0;
  undefined **local_ae0;
  undefined8 *local_ad8 [2];
  TReferenceControllerBase<1> *local_ac8;
  undefined1 local_aa8 [40];
  FSlotArgumentsMixin local_a80;
  TPanelChildren<SBoxPanel::FSlot> *local_9f0;
  int local_9e8;
  TAttribute<FText> local_9e0;
  TAttribute<FText> local_9b0;
  TAttribute<FText> local_980;
  TAttribute<FText> local_950;
  undefined1 local_920 [512];
  undefined1 local_720 [32];
  undefined1 local_700 [32];
  undefined1 local_6e0 [40];
  FSharedReferencer<1> local_6b8;
  FArguments local_6b0;
  FArguments local_378;
  
  pFVar23 = (FSlot *)0x0;
  FStack_cb0.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pFVar16 = FSlateNotificationManager::Get();
  if (pFVar16->bAllowNotifications == false) {
    pFVar19 = SNotificationItemImpl::FArguments::FArguments(&local_378);
    FLLMScope::FLLMScope(local_ca0,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
    local_b98 = LLMTagDeclaration_UI_Slate.UniqueName;
    FMemScope::FMemScope(&local_b90,&local_b98,true);
    TSlateDecl<SNotificationItemImpl,RequiredArgs::T0RequiredArgs>::
    TSlateDecl<SNotificationItemImpl,RequiredArgs::T0RequiredArgs>
              (&local_b38,"SNotificationItemImpl",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Notifications\\SNotificationList.cpp"
               ,0x393,local_res20);
    FMemScope::~FMemScope(&local_b90);
    FLLMScope::~FLLMScope(local_ca0);
    pTVar21 = TSlateDecl<SNotificationItemImpl,RequiredArgs::T0RequiredArgs>::operator<<=
                        (&local_b38,&local_af0,pFVar19);
    local_b80.ReferenceController = (pTVar21->SharedReferenceCount).ReferenceController;
    local_cb8 = (SNotificationItemExternalImpl *)pTVar21->Object;
    if (local_b80.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_b80.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(local_b80.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_b88 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(&FStack_cb0,&local_b80);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_b80.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_af0.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_b38._Widget.SharedReferenceCount.ReferenceController);
    SNotificationItemImpl::FArguments::~FArguments(&local_378);
    goto LAB_1429c57e9;
  }
  if ((param_1->ContentWidget).Object == (INotificationWidget *)0x0) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      pIVar26 = FAppStyle::Get();
      pcVar11 = *(code **)((longlong)*pIVar26 + 0x50);
      pFVar27 = ::FName::FName(&local_b58,"UnrealCircle.Thick");
      CachedImage = (FSlateBrush *)(*pcVar11)(pIVar26,*pFVar27,0);
      _Init_thread_footer(&::_TSS0);
    }
    pFVar19 = SNotificationItemImpl::FArguments::FArguments(&local_6b0);
    pTVar20 = TAttribute<FText>::TAttribute<FText>(&local_9e0,&param_1->Text);
    FText::operator=(&(pFVar19->_Text).Value,&pTVar20->Value);
    (pFVar19->_Text).bIsSet = pTVar20->bIsSet;
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar19->_Text).Getter,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)&pTVar20->Getter);
    TAttribute<FText>::~TAttribute<FText>(pTVar20);
    pTVar20 = TAttribute<FText>::TAttribute<FText>(&local_9b0,&param_1->SubText);
    FText::operator=(&(pFVar19->_SubText).Value,&pTVar20->Value);
    (pFVar19->_SubText).bIsSet = pTVar20->bIsSet;
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar19->_SubText).Getter,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)&pTVar20->Getter);
    TAttribute<FText>::~TAttribute<FText>(pTVar20);
    local_c98.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    TArray<FNotificationButtonInfo,TSizedDefaultAllocator<32>_>::
    CopyToEmpty<FNotificationButtonInfo,int>
              (&local_c98,(FNotificationButtonInfo *)(param_1->ButtonDetails).AllocatorInstance.Data
               ,(param_1->ButtonDetails).ArrayNum,0);
    this_00 = &pFVar19->_ButtonDetails;
    if (this_00 != &local_c98) {
      DestructItems<FNotificationButtonInfo,int>
                ((FNotificationButtonInfo *)(this_00->AllocatorInstance).Data,
                 (pFVar19->_ButtonDetails).ArrayNum);
      TArray<FNotificationButtonInfo,TSizedDefaultAllocator<32>_>::
      CopyToEmpty<FNotificationButtonInfo,int>
                (this_00,(FNotificationButtonInfo *)local_c98.AllocatorInstance.Data,
                 local_c98.ArrayNum,(pFVar19->_ButtonDetails).ArrayMax);
    }
    DestructItems<FNotificationButtonInfo,int>
              ((FNotificationButtonInfo *)local_c98.AllocatorInstance.Data,local_c98.ArrayNum);
    if ((FNotificationButtonInfo *)local_c98.AllocatorInstance.Data !=
        (FNotificationButtonInfo *)0x0) {
      FMemory::Free(local_c98.AllocatorInstance.Data);
    }
    pFVar28 = CachedImage;
    if (param_1->Image != (FSlateBrush *)0x0) {
      pFVar28 = param_1->Image;
    }
    pFVar19->_Image = pFVar28;
    pFVar19->_FadeInDuration = param_1->FadeInDuration;
    pFVar19->_ExpireDuration = param_1->ExpireDuration;
    pFVar19->_FadeOutDuration = param_1->FadeOutDuration;
    pFVar19->_bUseThrobber = param_1->bUseThrobber;
    pFVar19->_bUseSuccessFailIcons = param_1->bUseSuccessFailIcons;
    pFVar19->_bUseLargeFont = param_1->bUseLargeFont;
    pFVar19->_bUseCopyToClipboard = param_1->bUseCopyToClipboard;
    (pFVar19->_WidthOverride).Size = (param_1->WidthOverride).Size;
    local_be8 = (param_1->CheckBoxState).Value;
    local_be7 = (param_1->CheckBoxState).bIsSet;
    TDelegate<enum_ECheckBoxState___cdecl(void),FDefaultDelegateUserPolicy>::
    TDelegate<enum_ECheckBoxState___cdecl(void),FDefaultDelegateUserPolicy>
              (local_be0,&(param_1->CheckBoxState).Getter);
    (pFVar19->_CheckBoxState).Value = local_be8;
    (pFVar19->_CheckBoxState).bIsSet = local_be7;
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar19->_CheckBoxState).Getter,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_be0);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_be0);
    if ((void *)local_be0._8_8_ != (void *)0x0) {
      FMemory::Free((void *)local_be0._8_8_);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_be0);
    TDelegate<void___cdecl(enum_ECheckBoxState),FDefaultDelegateUserPolicy>::operator=
              (&pFVar19->_CheckBoxStateChanged,&param_1->CheckBoxStateChanged);
    pTVar20 = TAttribute<FText>::TAttribute<FText>(&local_980,&param_1->CheckBoxText);
    FText::operator=(&(pFVar19->_CheckBoxText).Value,&pTVar20->Value);
    (pFVar19->_CheckBoxText).bIsSet = pTVar20->bIsSet;
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar19->_CheckBoxText).Getter,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)&pTVar20->Getter);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pTVar20->Getter);
    pvVar6 = *(void **)&(pTVar20->Getter).field_0x8;
    if (pvVar6 != (void *)0x0) {
      FMemory::Free(pvVar6);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)&pTVar20->Getter);
    pIVar7 = (pTVar20->Value).TextData.Reference;
    if (pIVar7 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar7 + 0x10))();
    }
    TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
              (&pFVar19->_Hyperlink,&param_1->Hyperlink);
    pTVar20 = TAttribute<FText>::TAttribute<FText>(&local_950,&param_1->HyperlinkText);
    FText::operator=(&(pFVar19->_HyperlinkText).Value,&pTVar20->Value);
    (pFVar19->_HyperlinkText).bIsSet = pTVar20->bIsSet;
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar19->_HyperlinkText).Getter,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)&pTVar20->Getter);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pTVar20->Getter);
    pvVar6 = *(void **)&(pTVar20->Getter).field_0x8;
    if (pvVar6 != (void *)0x0) {
      FMemory::Free(pvVar6);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)&pTVar20->Getter);
    pIVar7 = (pTVar20->Value).TextData.Reference;
    if (pIVar7 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar7 + 0x10))();
    }
    FLLMScope::FLLMScope(&local_ca4,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
    local_bb0 = LLMTagDeclaration_UI_Slate.UniqueName;
    FMemScope::FMemScope(&local_ba8,&local_bb0,true);
    TSlateDecl<SNotificationItemImpl,RequiredArgs::T0RequiredArgs>::
    TSlateDecl<SNotificationItemImpl,RequiredArgs::T0RequiredArgs>
              (&local_b50,"SNotificationItemImpl",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Notifications\\SNotificationList.cpp"
               ,0x36c,local_res10);
    FMemScope::~FMemScope(&local_ba8);
    FLLMScope::~FLLMScope(&local_ca4);
    pTVar21 = TSlateDecl<SNotificationItemImpl,RequiredArgs::T0RequiredArgs>::operator<<=
                        (&local_b50,&local_b10,pFVar19);
    local_b60.ReferenceController = (pTVar21->SharedReferenceCount).ReferenceController;
    local_cb8 = (SNotificationItemExternalImpl *)pTVar21->Object;
    if (local_b60.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_b60.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(local_b60.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_b68 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(&FStack_cb0,&local_b60);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_b60.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_b10.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_b50._Widget.SharedReferenceCount.ReferenceController);
    SNotificationItemImpl::FArguments::~FArguments(&local_6b0);
  }
  else {
    pFVar17 = SNotificationItemExternalImpl::FArguments::FArguments((FArguments *)local_920);
    pTVar4 = (param_1->ContentWidget).SharedReferenceCount.ReferenceController;
    pIVar5 = (param_1->ContentWidget).Object;
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_b20 = (pFVar17->_ContentWidget).Object;
    pTStack_b18 = (pFVar17->_ContentWidget).SharedReferenceCount.ReferenceController;
    (pFVar17->_ContentWidget).Object = pIVar5;
    (pFVar17->_ContentWidget).SharedReferenceCount.ReferenceController = pTVar4;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_b18)
    ;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
    local_c60 = param_1->FadeInDuration;
    local_c5c = 1;
    local_c48 = 0;
    local_c58 = (undefined1  [8])0x0;
    pvStack_c50 = (void *)0x0;
    (pFVar17->_FadeInDuration).Value = local_c60;
    (pFVar17->_FadeInDuration).bIsSet = true;
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar17->_FadeInDuration).Getter,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_c58);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_c58);
    if (pvStack_c50 != (void *)0x0) {
      FMemory::Free(pvStack_c50);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_c58);
    local_c40 = param_1->ExpireDuration;
    local_c3c = 1;
    local_c28 = 0;
    local_c38 = (undefined1  [8])0x0;
    pvStack_c30 = (void *)0x0;
    (pFVar17->_ExpireDuration).Value = local_c40;
    (pFVar17->_ExpireDuration).bIsSet = true;
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar17->_ExpireDuration).Getter,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_c38);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_c38);
    if (pvStack_c30 != (void *)0x0) {
      FMemory::Free(pvStack_c30);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_c38);
    local_c20 = param_1->FadeOutDuration;
    local_c1c = 1;
    local_c08 = 0;
    local_c18 = (undefined1  [8])0x0;
    pvStack_c10 = (void *)0x0;
    (pFVar17->_FadeOutDuration).Value = local_c20;
    (pFVar17->_FadeOutDuration).bIsSet = true;
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar17->_FadeOutDuration).Getter,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_c18);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_c18);
    if (pvStack_c10 != (void *)0x0) {
      FMemory::Free(pvStack_c10);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_c18);
    (pFVar17->_WidthOverride).Size = (param_1->WidthOverride).Size;
    FLLMScope::FLLMScope(&local_ca8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
    local_bc0 = LLMTagDeclaration_UI_Slate.UniqueName;
    FMemScope::FMemScope(&local_bb8,&local_bc0,true);
    TSlateDecl<SNotificationItemExternalImpl,RequiredArgs::T0RequiredArgs>::
    TSlateDecl<SNotificationItemExternalImpl,RequiredArgs::T0RequiredArgs>
              (&local_c78,"SNotificationItemExternalImpl",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Notifications\\SNotificationList.cpp"
               ,0x360,local_res8);
    FMemScope::~FMemScope(&local_bb8);
    FLLMScope::~FLLMScope(&local_ca8);
    local_cb8 = local_c78._Widget.Object;
    if ((local_c78._Widget.Object == (SNotificationItemExternalImpl *)0x0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar13)) {
      pcVar11 = (code *)swi(3);
      pTVar18 = (TSharedRef<SNotificationItem,1> *)(*pcVar11)();
      return pTVar18;
    }
    SWidget::SWidgetConstruct((SWidget *)local_c78._Widget.Object,(FSlateBaseNamedArgs *)pFVar17);
    SNotificationItemExternalImpl::Construct(local_c78._Widget.Object,pFVar17);
    if ((local_c78._Widget.Object == (SNotificationItemExternalImpl *)0x0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar13)) {
      pcVar11 = (code *)swi(3);
      pTVar18 = (TSharedRef<SNotificationItem,1> *)(*pcVar11)();
      return pTVar18;
    }
    if (((local_c78._Widget.Object)->_padding_ & 0x10) == 0) {
      cVar14 = (**(code **)((local_c78._Widget.Object)->_padding_ + 0x228))
                         (local_c78._Widget.Object);
      bVar15 = 0;
      if (cVar14 != '\0') goto LAB_1429c4ed2;
    }
    else {
LAB_1429c4ed2:
      bVar15 = 0x20;
    }
    *(byte *)&(local_c78._Widget.Object)->_padding_ =
         (byte)(local_c78._Widget.Object)->_padding_ & 0xdf;
    *(byte *)&(local_c78._Widget.Object)->_padding_ =
         (byte)(local_c78._Widget.Object)->_padding_ | bVar15;
    if ((local_c78._Widget.Object == (SNotificationItemExternalImpl *)0x0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar13)) {
      pcVar11 = (code *)swi(3);
      pTVar18 = (TSharedRef<SNotificationItem,1> *)(*pcVar11)();
      return pTVar18;
    }
    pbVar1 = (byte *)((longlong)&(local_c78._Widget.Object)->_padding_ + 1);
    *pbVar1 = *pbVar1 | 4;
    if ((local_c78._Widget.Object == (SNotificationItemExternalImpl *)0x0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x416,L""), bVar13)) {
      pcVar11 = (code *)swi(3);
      pTVar18 = (TSharedRef<SNotificationItem,1> *)(*pcVar11)();
      return pTVar18;
    }
    FVar12.ReferenceController = local_c78._Widget.SharedReferenceCount.ReferenceController;
    local_c78._Widget.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    local_c78._Widget.Object = (SNotificationItemExternalImpl *)0x0;
    if ((local_cb8 == (SNotificationItemExternalImpl *)0x0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x26c,L""), bVar13)) {
      pcVar11 = (code *)swi(3);
      pTVar18 = (TSharedRef<SNotificationItem,1> *)(*pcVar11)();
      return pTVar18;
    }
    local_b70.ReferenceController = FVar12.ReferenceController;
    if (FVar12.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (FVar12.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(FVar12.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_b78 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(&FStack_cb0,&local_b70);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_b70.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar12.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_6b8.ReferenceController);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_6e0);
    if ((void *)local_6e0._8_8_ != (void *)0x0) {
      FMemory::Free((void *)local_6e0._8_8_);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_6e0);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_700);
    if ((void *)local_700._8_8_ != (void *)0x0) {
      FMemory::Free((void *)local_700._8_8_);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_700);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_720);
    if ((void *)local_720._8_8_ != (void *)0x0) {
      FMemory::Free((void *)local_720._8_8_);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_720);
    FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)local_920);
  }
  pTVar22 = TSharedFromThis<SWidget,1>::AsShared
                      ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_b00);
  pTVar4 = (pTVar22->SharedReferenceCount).ReferenceController;
  pSVar8 = pTVar22->Object;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_b00.SharedReferenceCount.ReferenceController);
  if ((local_cb8 == (SNotificationItemExternalImpl *)0x0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar13)) {
    pcVar11 = (code *)swi(3);
    pTVar18 = (TSharedRef<SNotificationItem,1> *)(*pcVar11)();
    return pTVar18;
  }
  local_cb8->_padding_ = (longlong)pSVar8;
  if (pTVar4 != (TReferenceControllerBase<1> *)local_cb8->_padding_) {
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar4->WeakReferenceCount = (atomic<int>)((int)pTVar4->WeakReferenceCount + 1);
      UNLOCK();
    }
    plVar9 = (longlong *)local_cb8->_padding_;
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      lVar2 = (longlong)plVar9 + 0xc;
      iVar3 = *(int *)lVar2;
      *(int *)lVar2 = *(int *)lVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar9 + 8))(plVar9,1);
      }
    }
    local_cb8->_padding_ = (longlong)pTVar4;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  if (((this->MessageItemBoxPtr).Object == (SVerticalBox *)0x0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar13)) {
    pcVar11 = (code *)swi(3);
    pTVar18 = (TSharedRef<SNotificationItem,1> *)(*pcVar11)();
    return pTVar18;
  }
  pSVar10 = (this->MessageItemBoxPtr).Object;
  this_01 = ::operator_new(0x58);
  if (this_01 != (FSlot *)0x0) {
    *(undefined8 *)this_01 = 0;
    *(undefined8 *)&this_01->field_0x8 = 0;
    *(undefined8 *)&this_01->field_0x10 = 0;
    *(undefined8 *)&this_01->field_0x18 = 0;
    *(undefined8 *)&this_01->field_0x20 = 0;
    *(undefined8 *)&this_01->field_0x28 = 0;
    *(undefined8 *)&this_01->field_0x30 = 0;
    *(undefined8 *)&this_01->field_0x38 = 0;
    *(undefined8 *)&this_01->field_0x40 = 0;
    *(undefined8 *)&this_01->field_0x48 = 0;
    *(undefined8 *)&this_01->field_0x50 = 0;
    pFVar23 = SVerticalBox::FSlot::FSlot(this_01);
  }
  local_ba0 = pFVar23;
  SVerticalBox::FSlot::FSlotArguments::FSlotArguments
            ((FSlotArguments *)local_ad8,(FSlot *)&local_ba0);
  local_9e8 = -1;
  local_ae0 = &___7__FScopedWidgetSlotArguments_VFSlot_SVerticalBox___SBoxPanel__6B_;
  local_9f0 = (TPanelChildren<SBoxPanel::FSlot> *)&pSVar10->field_0x218;
  pFVar24 = SVerticalBox::FSlot::FSlotArguments::AutoHeight((FSlotArguments *)local_ad8);
  puVar25 = &pFVar24->field_0x48;
  if (local_bc8 != (undefined4 *)puVar25) {
    *(undefined4 *)puVar25 = 3;
    pFVar24->field_0x4c = 1;
  }
  ppSVar29 = (SNotificationItemExternalImpl **)&pFVar24->field_0x8;
  if (puVar25 == (undefined1 *)0x0) {
    ppSVar29 = (SNotificationItemExternalImpl **)&DAT_00000008;
  }
  if ((local_cb8 == (SNotificationItemExternalImpl *)0x0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x408,L""), bVar13)) {
    pcVar11 = (code *)swi(3);
    pTVar18 = (TSharedRef<SNotificationItem,1> *)(*pcVar11)();
    return pTVar18;
  }
  FVar12.ReferenceController = FStack_cb0.ReferenceController;
  if (FStack_cb0.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FStack_cb0.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FStack_cb0.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((local_cb8 == (SNotificationItemExternalImpl *)0x0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x25d,L""), bVar13)) {
    pcVar11 = (code *)swi(3);
    pTVar18 = (TSharedRef<SNotificationItem,1> *)(*pcVar11)();
    return pTVar18;
  }
  local_c88 = local_cb8;
  local_c80.ReferenceController = FVar12.ReferenceController;
  if (FVar12.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar12.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar12.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    (FVar12.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar12.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (ppSVar29 != &local_c88) {
    *ppSVar29 = local_cb8;
    local_c88 = (SNotificationItemExternalImpl *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)(ppSVar29 + 1),&local_c80);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_c80.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar12.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar12.ReferenceController);
  local_ae0 = &___7__FScopedWidgetSlotArguments_VFSlot_SVerticalBox___SBoxPanel__6B_;
  if (local_ad8[0] != (undefined8 *)0x0) {
    if (local_9e8 == -1) {
      TPanelChildren<SBoxPanel::FSlot>::AddSlot(local_9f0,(FSlotArguments *)local_ad8);
    }
    else {
      TPanelChildren<SBoxPanel::FSlot>::InsertSlot(local_9f0,(FSlotArguments *)local_ad8,local_9e8);
    }
  }
  TResizingWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::~FSlotArgumentsMixin
            (&local_a80);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_aa8);
  if ((void *)local_aa8._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_aa8._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_aa8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_ac8);
  if (local_ad8[0] != (undefined8 *)0x0) {
    (**(code **)*local_ad8[0])(local_ad8[0],1);
  }
  if ((local_cb8 == (SNotificationItemExternalImpl *)0x0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar13)) {
    pcVar11 = (code *)swi(3);
    pTVar18 = (TSharedRef<SNotificationItem,1> *)(*pcVar11)();
    return pTVar18;
  }
  SNotificationExtendable::Fadein
            ((SNotificationExtendable *)local_cb8,param_1->bAllowThrottleWhenFrameRateIsLow);
  if (param_1->bFireAndForget != false) {
    if ((local_cb8 == (SNotificationItemExternalImpl *)0x0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar13)) {
      pcVar11 = (code *)swi(3);
      pTVar18 = (TSharedRef<SNotificationItem,1> *)(*pcVar11)();
      return pTVar18;
    }
    (**(code **)(local_cb8->_padding_ + 0x288))(local_cb8);
  }
LAB_1429c57e9:
  local_bf8 = local_cb8;
  FStack_bf0.ReferenceController = FStack_cb0.ReferenceController;
  if (FStack_cb0.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FStack_cb0.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FStack_cb0.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (&this->LastNotification != (TSharedPtr<SNotificationItem,1> *)&local_bf8) {
    (this->LastNotification).Object = (SNotificationItem *)local_cb8;
    local_bf8 = (SNotificationItemExternalImpl *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->LastNotification).SharedReferenceCount,&FStack_bf0);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_bf0.ReferenceController);
  if ((local_cb8 == (SNotificationItemExternalImpl *)0x0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x408,L""), bVar13)) {
    pcVar11 = (code *)swi(3);
    pTVar18 = (TSharedRef<SNotificationItem,1> *)(*pcVar11)();
    return pTVar18;
  }
  FVar12.ReferenceController = FStack_cb0.ReferenceController;
  if (FStack_cb0.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FStack_cb0.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FStack_cb0.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((local_cb8 == (SNotificationItemExternalImpl *)0x0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x25d,L""), bVar13)) {
    pcVar11 = (code *)swi(3);
    pTVar18 = (TSharedRef<SNotificationItem,1> *)(*pcVar11)();
    return pTVar18;
  }
  __return_storage_ptr__->Object = (SNotificationItem *)local_cb8;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = FVar12.ReferenceController;
  if (FVar12.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar12.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar12.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar12.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_cb0.ReferenceController);
  return __return_storage_ptr__;
}

// Construct @ 1429d6450

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SNotificationList::Construct(SNotificationList *this,FArguments *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  FMemScope FVar2;
  TReferenceControllerBase<1> *pTVar3;
  FArguments *pFVar4;
  TSharedRef<SVerticalBox,1> *pTVar5;
  longlong *this_00;
  T0RequiredArgs local_res8 [8];
  FLLMScope local_res18 [2];
  FName local_res20;
  FMemScope local_258;
  TReferenceControllerBase<1> *pTStack_250;
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs> local_248;
  TSharedRef<SVerticalBox,1> local_230;
  FArguments local_220;
  
  this->bDone = false;
  pFVar4 = SVerticalBox::FArguments::FArguments(&local_220);
  FLLMScope::FLLMScope(local_res18,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_res20 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_258,&local_res20,true);
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>
            (&local_248,"SVerticalBox",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Notifications\\SNotificationList.cpp"
             ,0x3b3,local_res8);
  FMemScope::~FMemScope(&local_258);
  FLLMScope::~FLLMScope(local_res18);
  if (local_248._Widget.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_248._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_248._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
         1);
    UNLOCK();
  }
  pTVar1 = (this->MessageItemBoxPtr).SharedReferenceCount.ReferenceController;
  (this->MessageItemBoxPtr).Object = local_248._Widget.Object;
  (this->MessageItemBoxPtr).SharedReferenceCount.ReferenceController =
       local_248._Widget.SharedReferenceCount.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  pTVar5 = TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                     (&local_248,&local_230,pFVar4);
  this_00 = &this->_padding_;
  pTVar1 = (pTVar5->SharedReferenceCount).ReferenceController;
  FVar2 = (FMemScope)pTVar5->Object;
  if (pTVar1 == (TReferenceControllerBase<1> *)0x0) {
    FSlotBase::DetatchParentFromContent((FSlotBase *)this_00);
  }
  else {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
    FSlotBase::DetatchParentFromContent((FSlotBase *)this_00);
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar3 = (TReferenceControllerBase<1> *)this->_padding_;
  this->_padding_ = (longlong)FVar2;
  this->_padding_ = (longlong)pTVar1;
  local_258 = FVar2;
  pTStack_250 = pTVar1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  FSlotBase::AfterContentOrOwnerAssigned((FSlotBase *)this_00);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_230.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_248._Widget.SharedReferenceCount.ReferenceController);
  DestructItems<SVerticalBox::FSlot::FSlotArguments,int>
            ((FSlotArguments *)local_220._Slots.AllocatorInstance.Data,local_220._Slots.ArrayNum);
  if ((FSlotArguments *)local_220._Slots.AllocatorInstance.Data != (FSlotArguments *)0x0) {
    FMemory::Free(local_220._Slots.AllocatorInstance.Data);
  }
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_220);
  return;
}

// NotificationItemFadedOut @ 1429f7d70

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SNotificationList::NotificationItemFadedOut
          (SNotificationList *this,TSharedRef<SNotificationItem,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  SBoxPanel *this_00;
  code *pcVar2;
  bool bVar3;
  TSharedRef<SWidget,1> local_18;
  
  if ((((this->ParentWindowPtr).Object != (SWindow *)0x0) &&
      (pTVar1 = (this->ParentWindowPtr).WeakReferenceCount.ReferenceController,
      pTVar1 != (TReferenceControllerBase<1> *)0x0)) && (0 < (int)pTVar1->SharedReferenceCount)) {
    this->bDone = true;
    return;
  }
  if ((this->MessageItemBoxPtr).Object == (SVerticalBox *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  local_18.Object = (SWidget *)param_1->Object;
  this_00 = (SBoxPanel *)(this->MessageItemBoxPtr).Object;
  local_18.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SBoxPanel::RemoveSlot(this_00,&local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return;
}

