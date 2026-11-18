// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 2

// Construct @ 1429d4ea0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SNotificationItemExternalImpl::Construct(SNotificationItemExternalImpl *this,FArguments *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  INotificationWidget *pIVar2;
  SWidget *pSVar3;
  TReferenceControllerBase<1> *pTVar4;
  TReferenceControllerBase<1> *pTVar5;
  code *pcVar6;
  FSharedReferencer<1> FVar7;
  bool bVar8;
  char cVar9;
  FArguments *pFVar10;
  FArguments *pFVar11;
  undefined8 *puVar12;
  TSharedRef<SBox,1> *pTVar13;
  TSharedRef<SNotificationBackground,1> *pTVar14;
  FArguments *pFVar15;
  ISlateStyle *pIVar16;
  FName *pFVar17;
  FArguments *pFVar18;
  FSlotArguments *pFVar19;
  longlong *plVar20;
  TSharedRef<SBorder,1> *pTVar21;
  TSharedRef<SOverlay,1> *pTVar22;
  TReferenceControllerBase<1> *pTVar23;
  SNotificationBackground *pSVar24;
  FSlotArguments *local_res8;
  FArguments *local_res10;
  T0RequiredArgs local_res18 [8];
  T0RequiredArgs local_res20 [8];
  T0RequiredArgs local_17d8;
  T0RequiredArgs local_17d7 [15];
  FArguments *local_17c8;
  undefined4 uStack_17c0;
  uint uStack_17bc;
  FArguments *local_17b8;
  undefined4 uStack_17b0;
  uint uStack_17ac;
  FLLMScope local_17a8;
  FLLMScope local_17a4;
  FLLMScope local_17a0;
  FLLMScope local_179c;
  FLLMScope local_1798;
  FLLMScope local_1794;
  SBorder *local_1790;
  FSharedReferencer<1> local_1788 [2];
  SBox *local_1778;
  undefined8 uStack_1770;
  longlong local_1768;
  FSharedReferencer<1> local_1760;
  uchar local_1758;
  undefined1 local_1757;
  undefined1 local_1750 [8];
  void *pvStack_1748;
  undefined8 local_1740;
  SOverlay *local_1738;
  TReferenceControllerBase<1> *pTStack_1730;
  SBox *local_1728;
  TReferenceControllerBase<1> *pTStack_1720;
  FName local_1718;
  FName local_1710;
  FMemScope local_1708;
  FMemScope local_1700;
  FName local_16f8;
  FMemScope local_16f0;
  FName local_16e8;
  FMemScope local_16e0;
  FName local_16d8;
  FMemScope local_16d0;
  FName local_16c8;
  FMemScope local_16c0;
  TAttribute<FOptionalSize> local_16b8;
  TAttribute<FOptionalSize> local_1698;
  TAttribute<FSlateBrush_const_*> local_1678;
  TAttribute<FSlateBrush_const_*> local_1650;
  TAttribute<FMargin> local_1628;
  SWidget *local_15f8;
  TReferenceControllerBase<1> *pTStack_15f0;
  TSharedRef<SNotificationBackground,1> local_15e8;
  TSharedRef<SBox,1> local_15d8;
  undefined1 local_15c8 [8];
  TReferenceControllerBase<1> *local_15c0;
  code *local_15b8;
  longlong lStack_15b0;
  code *local_15a8;
  longlong lStack_15a0;
  code *local_1598;
  longlong lStack_1590;
  code *local_1588;
  TReferenceControllerBase<1> *pTStack_1580;
  TSharedRef<SBorder,1> local_1578;
  TSharedRef<SBox,1> local_1568;
  TSharedRef<SOverlay,1> local_1558;
  TSharedRef<SBorder,1> local_1548;
  undefined1 local_1538 [8];
  TReferenceControllerBase<1> *local_1530;
  longlong local_1528;
  TReferenceControllerBase<1> *pTStack_1520;
  TSlateDecl<SNotificationBackground,RequiredArgs::T0RequiredArgs> local_1518;
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs> local_1500;
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs> local_14e8;
  FName local_14d0;
  TSlateDecl<SOverlay,RequiredArgs::T0RequiredArgs> local_14c8;
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs> local_14b0;
  FName local_1498;
  INotificationWidget *local_1490;
  TReferenceControllerBase<1> *pTStack_1488;
  code *local_1478;
  longlong lStack_1470;
  code *local_1468;
  longlong lStack_1460;
  code *local_1458;
  longlong lStack_1450;
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs> local_1448;
  undefined1 local_1430 [56];
  void *local_13f8;
  undefined1 local_13d0 [56];
  void *local_1398;
  FArguments local_1370;
  FArguments local_1168;
  FArguments local_ea0;
  FArguments local_b60;
  FArguments local_820;
  FArguments local_440;
  
  if ((param_1->_ContentWidget).Object == (INotificationWidget *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("InArgs._ContentWidget.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Notifications\\SNotificationList.cpp"
                       ,0x2f1,L"");
    if (bVar8) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  *(float *)&this->_padding_ = (param_1->_FadeInDuration).Value;
  *(bool *)((longlong)&this->_padding_ + 4) = (param_1->_FadeInDuration).bIsSet;
  TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy> *)&this->_padding_,
             &(param_1->_FadeInDuration).Getter);
  *(float *)&this->_padding_ = (param_1->_FadeOutDuration).Value;
  *(bool *)((longlong)&this->_padding_ + 4) = (param_1->_FadeOutDuration).bIsSet;
  TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy> *)&this->_padding_,
             &(param_1->_FadeOutDuration).Getter);
  *(float *)&this->_padding_ = (param_1->_ExpireDuration).Value;
  *(bool *)((longlong)&this->_padding_ + 4) = (param_1->_ExpireDuration).bIsSet;
  TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy> *)&this->_padding_,
             &(param_1->_ExpireDuration).Getter);
  pTVar1 = (param_1->_ContentWidget).SharedReferenceCount.ReferenceController;
  pIVar2 = (param_1->_ContentWidget).Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_1490 = (this->NotificationWidget).Object;
  pTStack_1488 = (this->NotificationWidget).SharedReferenceCount.ReferenceController;
  (this->NotificationWidget).Object = pIVar2;
  (this->NotificationWidget).SharedReferenceCount.ReferenceController = pTVar1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_1488);
  FVar7 = SNullWidget::NullWidget.SharedReferenceCount;
  if (SNullWidget::NullWidget.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (SNullWidget::NullWidget.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(SNullWidget::NullWidget.SharedReferenceCount.ReferenceController)->
               SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((this->NotificationWidget).Object == (INotificationWidget *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar8) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  cVar9 = (**(code **)((longlong)*(this->NotificationWidget).Object + 0x10))();
  if (cVar9 == '\0') {
    pFVar15 = SBorder::FArguments::FArguments(&local_440);
    pFVar15 = SBorder::FArguments::Padding(pFVar15,0.0);
    pIVar16 = FAppStyle::Get();
    pcVar6 = *(code **)((longlong)*pIVar16 + 0x50);
    pFVar17 = ::FName::FName(&local_14d0,"NoBorder");
    local_1678.Value = (FSlateBrush *)(*pcVar6)(pIVar16,*pFVar17,0);
    local_1678.bIsSet = true;
    local_1678.Getter._16_8_ = 0;
    local_1678.Getter._0_8_ = 0;
    local_1678.Getter._8_8_ = 0;
    pFVar15 = SBorder::FArguments::BorderImage(pFVar15,&local_1678);
    uStack_17c0 = 0;
    local_17c8 = (FArguments *)SNotificationExtendable::GetContentColor;
    lStack_15b0 = (ulonglong)uStack_17bc << 0x20;
    local_15b8 = SNotificationExtendable::GetContentColor;
    local_17b8 = pFVar15;
    TAttribute<FSlateColor>::Bind<SNotificationItemExternalImpl>
              (&pFVar15->_BorderBackgroundColor,this,(pmf_b191ebe8 *)&local_15b8);
    uStack_17c0 = 0;
    local_17c8 = (FArguments *)SNotificationExtendable::GetContentColorRaw;
    lStack_15a0 = (ulonglong)uStack_17bc << 0x20;
    local_15a8 = SNotificationExtendable::GetContentColorRaw;
    TAttribute<FLinearColor>::Bind<SNotificationItemExternalImpl>
              (&pFVar15->_ColorAndOpacity,this,(pmf_0923f48a *)&local_15a8);
    uStack_17c0 = 0;
    local_17c8 = (FArguments *)SNotificationExtendable::GetItemScale;
    lStack_1590 = (ulonglong)uStack_17bc << 0x20;
    local_1598 = SNotificationExtendable::GetItemScale;
    TAttribute<UE::Math::TVector2<double>_>::Bind<SNotificationItemExternalImpl>
              (&pFVar15->_DesiredSizeScale,this,(pmf_d434f1fe *)&local_1598);
    pFVar11 = SBox::FArguments::FArguments(&local_b60);
    local_1698.Value.Size = (param_1->_WidthOverride).Size;
    local_1698.bIsSet = true;
    local_1698.Getter._0_8_ = 0;
    local_1698.Getter._8_8_ = 0;
    local_1698.Getter._16_8_ = 0;
    local_17c8 = SBox::FArguments::WidthOverride(pFVar11,&local_1698);
    pFVar18 = SOverlay::FArguments::FArguments(&local_1370);
    pFVar19 = SOverlay::Slot((FSlotArguments *)local_13d0,0);
    if ((this->NotificationWidget).Object == (INotificationWidget *)0x0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar8) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    pIVar2 = (this->NotificationWidget).Object;
    plVar20 = (longlong *)(**(code **)((longlong)*pIVar2 + 8))(pIVar2,local_1538);
    local_1760.ReferenceController = (TReferenceControllerBase<1> *)plVar20[1];
    local_1768 = *plVar20;
    if (local_1760.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_1760.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(local_1760.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (&pFVar19->_padding_ != &local_1768) {
      pFVar19->_padding_ = local_1768;
      local_1768 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                ((FSharedReferencer<1> *)&pFVar19->_padding_,&local_1760);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1760.ReferenceController);
    local_res10 = SOverlay::FArguments::operator+(pFVar18,pFVar19);
    local_res8 = SOverlay::Slot((FSlotArguments *)local_1430,0);
    pFVar15 = SBorder::FArguments::FArguments(&local_820);
    pFVar15 = SBorder::FArguments::Padding(pFVar15,0.0);
    pIVar16 = FAppStyle::Get();
    pcVar6 = *(code **)((longlong)*pIVar16 + 0x50);
    pFVar17 = ::FName::FName(&local_1498,"NotificationList.ItemBackground_Border_Transparent");
    local_1650.Value = (FSlateBrush *)(*pcVar6)(pIVar16,*pFVar17,0);
    local_1650.bIsSet = true;
    local_1650.Getter._16_8_ = 0;
    local_1650.Getter._0_8_ = 0;
    local_1650.Getter._8_8_ = 0;
    pFVar15 = SBorder::FArguments::BorderImage(pFVar15,&local_1650);
    uStack_1770 = (TReferenceControllerBase<1> *)((ulonglong)uStack_1770._4_4_ << 0x20);
    local_1778 = (SBox *)SNotificationExtendable::GetGlowColor;
    local_1588 = SNotificationExtendable::GetGlowColor;
    pTStack_1580 = uStack_1770;
    TAttribute<FSlateColor>::Bind<SNotificationItemExternalImpl>
              (&pFVar15->_BorderBackgroundColor,this,(pmf_b191ebe8 *)&local_1588);
    local_1758 = (uchar)EVisibility::SelfHitTestInvisible.Value.Value;
    local_1757 = 1;
    local_1740 = 0;
    local_1750 = (undefined1  [8])0x0;
    pvStack_1748 = (void *)0x0;
    *(TEnumAsByte<EVisibility::Private> *)&pFVar15->_padding_ =
         EVisibility::SelfHitTestInvisible.Value.Value;
    *(undefined1 *)((longlong)&pFVar15->_padding_ + 1) = 1;
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pFVar15->_padding_,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_1750);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1750);
    if (pvStack_1748 != (void *)0x0) {
      FMemory::Free(pvStack_1748);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_1750);
    FLLMScope::FLLMScope(&local_17a0,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
    local_16d8 = LLMTagDeclaration_UI_Slate.UniqueName;
    FMemScope::FMemScope(&local_16d0,&local_16d8,true);
    TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>::
    TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>
              (&local_14b0,"SBorder",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Notifications\\SNotificationList.cpp"
               ,0x31e,local_res18);
    FMemScope::~FMemScope(&local_16d0);
    FLLMScope::~FLLMScope(&local_17a0);
    pTVar21 = TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>::operator<<=
                        (&local_14b0,&local_1548,pFVar15);
    pFVar19 = local_res8;
    pTVar1 = (pTVar21->SharedReferenceCount).ReferenceController;
    local_1790 = pTVar21->Object;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_1788[0].ReferenceController = pTVar1;
    if ((SBorder **)&local_res8->_padding_ != &local_1790) {
      local_res8->_padding_ = (longlong)local_1790;
      local_1790 = (SBorder *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                ((FSharedReferencer<1> *)&local_res8->_padding_,local_1788);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1788[0].ReferenceController);
    pFVar18 = SOverlay::FArguments::operator+(local_res10,pFVar19);
    FLLMScope::FLLMScope(&local_179c,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
    local_16c8 = LLMTagDeclaration_UI_Slate.UniqueName;
    FMemScope::FMemScope(&local_16c0,&local_16c8,true);
    TSlateDecl<SOverlay,RequiredArgs::T0RequiredArgs>::
    TSlateDecl<SOverlay,RequiredArgs::T0RequiredArgs>
              (&local_14c8,"SOverlay",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Notifications\\SNotificationList.cpp"
               ,0x317,local_res20);
    FMemScope::~FMemScope(&local_16c0);
    FLLMScope::~FLLMScope(&local_179c);
    pTVar22 = TSlateDecl<SOverlay,RequiredArgs::T0RequiredArgs>::operator<<=
                        (&local_14c8,&local_1558,pFVar18);
    pFVar11 = local_17c8;
    pTVar4 = (pTVar22->SharedReferenceCount).ReferenceController;
    local_1738 = pTVar22->Object;
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar5 = (local_17c8->_Content).Widget.SharedReferenceCount.ReferenceController;
    (local_17c8->_Content).Widget.Object = (SWidget *)local_1738;
    (local_17c8->_Content).Widget.SharedReferenceCount.ReferenceController = pTVar4;
    pTStack_1730 = pTVar4;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
    FLLMScope::FLLMScope(&local_1798,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
    local_1710 = LLMTagDeclaration_UI_Slate.UniqueName;
    FMemScope::FMemScope(&local_1708,&local_1710,true);
    TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>::TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>
              (&local_1448,"SBox",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Notifications\\SNotificationList.cpp"
               ,0x314,&local_17d8);
    FMemScope::~FMemScope(&local_1708);
    FLLMScope::~FLLMScope(&local_1798);
    pTVar13 = TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>::operator<<=
                        (&local_1448,&local_1568,pFVar11);
    pFVar15 = local_17b8;
    pTVar5 = (pTVar13->SharedReferenceCount).ReferenceController;
    local_1728 = pTVar13->Object;
    if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar23 = (local_17b8->_Content).Widget.SharedReferenceCount.ReferenceController;
    (local_17b8->_Content).Widget.Object = (SWidget *)local_1728;
    (local_17b8->_Content).Widget.SharedReferenceCount.ReferenceController = pTVar5;
    pTStack_1720 = pTVar5;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar23);
    FLLMScope::FLLMScope(&local_1794,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
    local_16f8 = LLMTagDeclaration_UI_Slate.UniqueName;
    FMemScope::FMemScope(&local_16f0,&local_16f8,true);
    TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>::
    TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>
              (&local_14e8,"SBorder",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Notifications\\SNotificationList.cpp"
               ,0x30d,local_17d7);
    FMemScope::~FMemScope(&local_16f0);
    FLLMScope::~FLLMScope(&local_1794);
    pTVar21 = TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>::operator<<=
                        (&local_14e8,&local_1578,pFVar15);
    pTVar23 = (pTVar21->SharedReferenceCount).ReferenceController;
    pSVar24 = (SNotificationBackground *)pTVar21->Object;
    if (pTVar23 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar23->SharedReferenceCount = (atomic<int>)((int)pTVar23->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar7.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1578.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_14e8._Widget.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1568.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1448._Widget.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1558.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_14c8._Widget.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1548.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_14b0._Widget.SharedReferenceCount.ReferenceController);
    SBorder::FArguments::~FArguments(&local_820);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)(local_1430 + 0x30));
    if (local_13f8 != (void *)0x0) {
      FMemory::Free(local_13f8);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)(local_1430 + 0x30));
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_1430._16_8_);
    if ((undefined8 *)local_1430._0_8_ != (undefined8 *)0x0) {
      (*(code *)**(undefined8 **)local_1430._0_8_)(local_1430._0_8_,1);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_1530);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)(local_13d0 + 0x30));
    if (local_1398 != (void *)0x0) {
      FMemory::Free(local_1398);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)(local_13d0 + 0x30));
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_13d0._16_8_);
    if ((undefined8 *)local_13d0._0_8_ != (undefined8 *)0x0) {
      (*(code *)**(undefined8 **)local_13d0._0_8_)(local_13d0._0_8_,1);
    }
    DestructItems<SOverlay::FOverlaySlot::FSlotArguments,int>
              ((FSlotArguments *)local_1370._Slots.AllocatorInstance.Data,local_1370._Slots.ArrayNum
              );
    if ((FSlotArguments *)local_1370._Slots.AllocatorInstance.Data != (FSlotArguments *)0x0) {
      FMemory::Free(local_1370._Slots.AllocatorInstance.Data);
    }
    FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_1370);
    SBox::FArguments::~FArguments(&local_b60);
    SBorder::FArguments::~FArguments(&local_440);
  }
  else {
    pFVar10 = SNotificationBackground::FArguments::FArguments(&local_1168);
    local_1628.bIsSet = true;
    local_1628.Value.Left = ___xmm_41000000418000004100000041800000;
    local_1628.Value.Top = _UNK_150978bf4;
    local_1628.Value.Right = _UNK_150978bf8;
    local_1628.Value.Bottom = _UNK_150978bfc;
    local_1628.Getter._16_8_ = 0;
    local_1628.Getter._0_8_ = 0;
    local_1628.Getter._8_8_ = 0;
    pFVar10 = SNotificationBackground::FArguments::Padding(pFVar10,&local_1628);
    uStack_17b0 = 0;
    local_17b8 = (FArguments *)SNotificationExtendable::GetContentColor;
    lStack_1470 = (ulonglong)uStack_17ac << 0x20;
    local_1478 = SNotificationExtendable::GetContentColor;
    TAttribute<FSlateColor>::Bind<SNotificationItemExternalImpl>
              (&pFVar10->_BorderBackgroundColor,this,(pmf_b191ebe8 *)&local_1478);
    uStack_17b0 = 0;
    local_17b8 = (FArguments *)SNotificationExtendable::GetContentColorRaw;
    lStack_1460 = (ulonglong)uStack_17ac << 0x20;
    local_1468 = SNotificationExtendable::GetContentColorRaw;
    TAttribute<FLinearColor>::Bind<SNotificationItemExternalImpl>
              (&pFVar10->_ColorAndOpacity,this,(pmf_0923f48a *)&local_1468);
    uStack_17b0 = 0;
    local_17b8 = (FArguments *)SNotificationExtendable::GetItemScale;
    lStack_1450 = (ulonglong)uStack_17ac << 0x20;
    local_1458 = SNotificationExtendable::GetItemScale;
    TAttribute<UE::Math::TVector2<double>_>::Bind<SNotificationItemExternalImpl>
              (&pFVar10->_DesiredSizeScale,this,(pmf_d434f1fe *)&local_1458);
    pFVar11 = SBox::FArguments::FArguments(&local_ea0);
    local_16b8.Value.Size = (param_1->_WidthOverride).Size;
    local_16b8.bIsSet = true;
    local_16b8.Getter._0_8_ = 0;
    local_16b8.Getter._8_8_ = 0;
    local_16b8.Getter._16_8_ = 0;
    pFVar11 = SBox::FArguments::WidthOverride(pFVar11,&local_16b8);
    if ((this->NotificationWidget).Object == (INotificationWidget *)0x0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar8) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    pIVar2 = (this->NotificationWidget).Object;
    puVar12 = (undefined8 *)(**(code **)((longlong)*pIVar2 + 8))(pIVar2,local_15c8);
    pTVar1 = (TReferenceControllerBase<1> *)puVar12[1];
    pSVar3 = (SWidget *)*puVar12;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_15f8 = (pFVar11->_Content).Widget.Object;
    pTStack_15f0 = (pFVar11->_Content).Widget.SharedReferenceCount.ReferenceController;
    (pFVar11->_Content).Widget.Object = pSVar3;
    (pFVar11->_Content).Widget.SharedReferenceCount.ReferenceController = pTVar1;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (pTStack_15f0);
    FLLMScope::FLLMScope(&local_17a8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
    local_1718 = LLMTagDeclaration_UI_Slate.UniqueName;
    FMemScope::FMemScope(&local_1700,&local_1718,true);
    TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>::TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>
              (&local_1500,"SBox",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Notifications\\SNotificationList.cpp"
               ,0x303,(T0RequiredArgs *)&local_res8);
    FMemScope::~FMemScope(&local_1700);
    FLLMScope::~FLLMScope(&local_17a8);
    pTVar13 = TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>::operator<<=
                        (&local_1500,&local_15d8,pFVar11);
    pTVar1 = (pTVar13->SharedReferenceCount).ReferenceController;
    local_1778 = pTVar13->Object;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar4 = (pFVar10->_Content).Widget.SharedReferenceCount.ReferenceController;
    (pFVar10->_Content).Widget.Object = (SWidget *)local_1778;
    (pFVar10->_Content).Widget.SharedReferenceCount.ReferenceController = pTVar1;
    uStack_1770 = pTVar1;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
    FLLMScope::FLLMScope(&local_17a4,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
    local_16e8 = LLMTagDeclaration_UI_Slate.UniqueName;
    FMemScope::FMemScope(&local_16e0,&local_16e8,true);
    TSlateDecl<SNotificationBackground,RequiredArgs::T0RequiredArgs>::
    TSlateDecl<SNotificationBackground,RequiredArgs::T0RequiredArgs>
              (&local_1518,"SNotificationBackground",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Notifications\\SNotificationList.cpp"
               ,0x2fd,(T0RequiredArgs *)&local_res10);
    FMemScope::~FMemScope(&local_16e0);
    FLLMScope::~FLLMScope(&local_17a4);
    pTVar14 = TSlateDecl<SNotificationBackground,RequiredArgs::T0RequiredArgs>::operator<<=
                        (&local_1518,&local_15e8,pFVar10);
    pTVar23 = (pTVar14->SharedReferenceCount).ReferenceController;
    pSVar24 = pTVar14->Object;
    if (pTVar23 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar23->SharedReferenceCount = (atomic<int>)((int)pTVar23->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar7.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_15e8.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1518._Widget.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_15d8.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1500._Widget.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_15c0);
    SBox::FArguments::~FArguments(&local_ea0);
    SNotificationBackground::FArguments::~FArguments(&local_1168);
  }
  FSlotBase::DetatchParentFromContent((FSlotBase *)&this->_padding_);
  if (pTVar23 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar23->SharedReferenceCount = (atomic<int>)((int)pTVar23->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_1528 = this->_padding_;
  pTStack_1520 = (TReferenceControllerBase<1> *)this->_padding_;
  this->_padding_ = (longlong)pSVar24;
  this->_padding_ = (longlong)pTVar23;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_1520);
  FSlotBase::AfterContentOrOwnerAssigned((FSlotBase *)&this->_padding_);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar23);
  return;
}

// SetCompletionState @ 142a07990

void __thiscall
SNotificationItemExternalImpl::SetCompletionState
          (SNotificationItemExternalImpl *this,ECompletionState param_1)

{
  INotificationWidget *pIVar1;
  code *pcVar2;
  longlong lVar3;
  bool bVar4;
  FCurveSequence *pFVar5;
  FCurveHandle *pFVar6;
  TSharedRef<SWidget,1> *pTVar7;
  TSharedRef<SWidget,1> local_98;
  FCurveHandle local_88;
  FCurveSequence local_78;
  
  *(ECompletionState *)&this->_padding_ = param_1;
  if (param_1 - CS_Success < 2) {
    pFVar5 = FCurveSequence::FCurveSequence(&local_78);
    FCurveSequence::operator=((FCurveSequence *)&this->_padding_,pFVar5);
    FCurveSequence::~FCurveSequence(&local_78);
    pFVar6 = FCurveSequence::AddCurve
                       ((FCurveSequence *)&this->_padding_,&local_88,0.0,__real_3f400000,Linear);
    lVar3 = *(longlong *)&pFVar6->CurveIndex;
    this->_padding_ = (longlong)pFVar6->OwnerSequence;
    this->_padding_ = lVar3;
    pTVar7 = TSharedFromThis<SWidget,1>::AsShared
                       ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_98);
    FCurveSequence::Play((FCurveSequence *)&this->_padding_,pTVar7,false,0.0,true);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_98.SharedReferenceCount.ReferenceController);
  }
  if ((this->NotificationWidget).Object == (INotificationWidget *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pIVar1 = (this->NotificationWidget).Object;
                    /* WARNING: Could not recover jumptable at 0x000142a07a90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*pIVar1)(pIVar1,param_1);
  return;
}

