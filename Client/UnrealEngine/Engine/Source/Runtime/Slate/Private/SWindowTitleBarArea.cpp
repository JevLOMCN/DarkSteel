// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 19

// SWindowTitleBarArea @ 1429bbd70

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

SWindowTitleBarArea * __thiscall SWindowTitleBarArea::SWindowTitleBarArea(SWindowTitleBarArea *this)

{
  undefined1 *puVar1;
  FSingleWidgetChildrenWithBasicLayoutSlot *pFVar2;
  EWidgetUpdateFlags EVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  SWindowTitleBarArea *pSVar10;
  FButtonStyle *pFVar11;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> *pTVar12;
  FSlateBrush *pFVar13;
  int iVar14;
  EWidgetUpdateFlags EVar15;
  int iVar16;
  int iVar17;
  FDeprecateVector2DParameter local_res8;
  FDeprecateVector2DParameter local_res10;
  FDeprecateVector2DParameter local_res18;
  FDeprecateVector2DParameter local_res20;
  FDeprecateVector2DParameter local_2968;
  FDeprecateVector2DParameter local_2960;
  FDeprecateVector2DParameter local_2958;
  FDeprecateVector2DParameter local_2950;
  FDeprecateVector2DParameter local_2948;
  FDeprecateVector2DParameter local_2940;
  FDeprecateVector2DParameter local_2938;
  FDeprecateVector2DParameter local_2930;
  FDeprecateVector2DParameter local_2928;
  FDeprecateVector2DParameter local_2920;
  FDeprecateVector2DParameter local_2918;
  FDeprecateVector2DParameter local_2910;
  FDeprecateVector2DParameter local_2908;
  FDeprecateVector2DParameter local_2900;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_28f8;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_28e8;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_28d8;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_28c8;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_28b8;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_28a8;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_2898;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_2888;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_2878;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_2868;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_2858;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_2848;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_2838;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_2828;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_2818;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_2808;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_27f8;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_27e8;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_27d8;
  FString local_27c8;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_27b8;
  FString local_27a8;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_2798;
  FString local_2788;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_2778;
  FString local_2768;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_2758;
  FString local_2748;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_2738;
  FString local_2728;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_2718;
  FString local_2708;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_26f8;
  FString local_26e8;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_26d8;
  FString local_26c8;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_26b8;
  FString local_26a8;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_2698;
  FString local_2688;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_2678;
  FString local_2668;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_2658;
  FString local_2648;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_2638;
  FString local_2628;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_2618;
  FString local_2608;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_25f8;
  FString local_25e8;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_25d8;
  FString local_25c8;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_25b8;
  FString local_25a8;
  FString local_2598;
  FString local_2588;
  FString local_2578;
  FString local_2568;
  FString local_2558;
  FString local_2548;
  FString local_2538;
  FString local_2528;
  FString local_2518;
  FString local_2508;
  FString local_24f8;
  FString local_24e8;
  FString local_24d8;
  FString local_24c8;
  FString local_24b8;
  FString local_24a8;
  FString local_2498;
  FString local_2488;
  FLinearColor_u_0 local_2478;
  FMargin local_2468;
  FLinearColor_u_0 local_2458;
  FMargin local_2448;
  FLinearColor_u_0 local_2438;
  FMargin local_2428;
  FString local_2418;
  FString local_2408;
  FString local_23f8;
  FLinearColor_u_0 local_23e8;
  FLinearColor_u_0 local_23d8;
  FLinearColor_u_0 local_23c8;
  FLinearColor_u_0 local_23b8;
  FString local_23a8;
  FString local_2398;
  FString local_2388;
  FString local_2378;
  FLinearColor_u_0 local_2368;
  FLinearColor_u_0 local_2358;
  FLinearColor_u_0 local_2348;
  FLinearColor_u_0 local_2338;
  FString local_2328;
  FString local_2318;
  FString local_2308;
  FString local_22f8;
  FLinearColor_u_0 local_22e8;
  FLinearColor_u_0 local_22d8;
  FLinearColor_u_0 local_22c8;
  FLinearColor_u_0 local_22b8;
  FString local_22a8;
  FString local_2298;
  FString local_2288;
  FString local_2278;
  FLinearColor_u_0 local_2268;
  FLinearColor_u_0 local_2258;
  FLinearColor_u_0 local_2248;
  FString local_2238;
  FString local_2228;
  FString local_2218;
  undefined **local_2208 [20];
  TReferenceControllerBase<1> *local_2168;
  undefined **local_2158 [20];
  TReferenceControllerBase<1> *local_20b8;
  undefined **local_20a8 [20];
  TReferenceControllerBase<1> *local_2008;
  undefined **local_1ff8 [20];
  TReferenceControllerBase<1> *local_1f58;
  undefined **local_1f48 [20];
  TReferenceControllerBase<1> *local_1ea8;
  undefined **local_1e98 [20];
  TReferenceControllerBase<1> *local_1df8;
  undefined **local_1de8 [20];
  TReferenceControllerBase<1> *local_1d48;
  undefined **local_1d38 [20];
  TReferenceControllerBase<1> *local_1c98;
  undefined **local_1c88 [20];
  TReferenceControllerBase<1> *local_1be8;
  undefined **local_1bd8 [20];
  TReferenceControllerBase<1> *local_1b38;
  undefined **local_1b28 [20];
  TReferenceControllerBase<1> *local_1a88;
  undefined **local_1a78 [20];
  TReferenceControllerBase<1> *local_19d8;
  undefined **local_19c8 [20];
  TReferenceControllerBase<1> *local_1928;
  undefined **local_1918 [20];
  TReferenceControllerBase<1> *local_1878;
  undefined **local_1868 [20];
  TReferenceControllerBase<1> *local_17c8;
  undefined **local_17b8 [20];
  TReferenceControllerBase<1> *local_1718;
  undefined **local_1708 [20];
  TReferenceControllerBase<1> *local_1668;
  undefined **local_1658 [20];
  TReferenceControllerBase<1> *local_15b8;
  FButtonStyle local_15a8;
  FButtonStyle local_1218;
  FButtonStyle local_e88;
  FButtonStyle local_af8;
  FButtonStyle local_768;
  FButtonStyle local_3d8;
  
  SPanel::SPanel((SPanel *)this);
  pFVar2 = &this->ChildSlot;
  this->_padding_ = (longlong)&___7SWindowTitleBarArea__6B_;
  *(SWindowTitleBarArea **)&(this->ChildSlot).field_0x8 = this;
  *(undefined ***)&pFVar2->field_0x0 = &___7FChildren__6B_;
  ::FName::FName((FName *)&(this->ChildSlot).field_0x10,"Children");
  *(undefined2 *)&(this->ChildSlot).field_0x18 = 0xdc00;
  FSlotBase::FSlotBase((FSlotBase *)&(this->ChildSlot).field_0x20,(FChildren *)pFVar2);
  puVar1 = &(this->ChildSlot).field_0x40;
  iVar9 = 0;
  iVar17 = 0;
  *(undefined ***)&pFVar2->field_0x0 =
       &TSingleWidgetChildrenWithSlot<TSingleWidgetChildrenWithBasicLayoutSlot<1>_>::
        _vftable__for__FChildren__;
  *(undefined ***)&(this->ChildSlot).field_0x20 =
       &TSingleWidgetChildrenWithSlot<TSingleWidgetChildrenWithBasicLayoutSlot<1>_>::
        _vftable__for__TSlotBase<TSingleWidgetChildrenWithBasicLayoutSlot<1>_>__;
  *(undefined8 *)puVar1 = 0;
  *(undefined8 *)&(this->ChildSlot).field_0x48 = 0;
  if ((puVar1 < this) || (this + 1 <= puVar1)) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(UPTRINT)&Self >= (UPTRINT)&Widget && (UPTRINT)&Self < (UPTRINT)&Widget + sizeof(WidgetType)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Types\\Attributes\\SlateAttributeMember.inl"
                       ,0x15,
                       L"Use TAttribute or TSlateManagedAttribute instead. See SlateAttribute.h for more info."
                      );
    if (bVar7) {
      pcVar4 = (code *)swi(3);
      pSVar10 = (SWindowTitleBarArea *)(*pcVar4)();
      return pSVar10;
    }
  }
  *(undefined8 *)&(this->ChildSlot).field_0x50 = 0;
  *(undefined ***)&pFVar2->field_0x0 =
       &FSingleWidgetChildrenWithBasicLayoutSlot::_vftable__for__FChildren__;
  *(undefined ***)&(this->ChildSlot).field_0x20 =
       &FSingleWidgetChildrenWithBasicLayoutSlot::
        _vftable__for__TSlotBase<TSingleWidgetChildrenWithBasicLayoutSlot<1>_>__;
  (this->GameWindow).Object = (SWindow *)0x0;
  (this->GameWindow).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  *(undefined8 *)&this->RequestToggleFullscreen = 0;
  *(undefined8 *)&(this->RequestToggleFullscreen).field_0x8 = 0;
  *(undefined4 *)&(this->RequestToggleFullscreen).field_0x10 = 0;
  (this->MinimizeButton).Object = (SButton *)0x0;
  (this->MinimizeButton).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->MaximizeRestoreButton).Object = (SButton *)0x0;
  (this->MaximizeRestoreButton).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->CloseButton).Object = (SButton *)0x0;
  (this->CloseButton).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->WindowButtonsBox).Object = (SVerticalBox *)0x0;
  (this->WindowButtonsBox).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  EVar3 = (EWidgetUpdateFlags)this->_padding_;
  this->bIsMinimizeButtonEnabled = true;
  this->bIsMaximizeRestoreButtonEnabled = true;
  EVar15 = EVar3 & ~NeedsTick;
  this->bIsCloseButtonEnabled = true;
  *(EWidgetUpdateFlags *)&this->_padding_ = EVar15;
  FWidgetProxyHandle::UpdateWidgetFlags
            ((FWidgetProxyHandle *)&this->_padding_,(SWidget *)this,EVar3,EVar15);
  *(byte *)&this->_padding_ = (byte)this->_padding_ & 0xfe;
  if (bButtonsStyleInitialized == false) {
    pFVar11 = FButtonStyle::FButtonStyle(&local_1218);
    uVar6 = _UNK_15076b1f8;
    uVar5 = ___xmm_3f8000003f8000003f8000003f800000;
    local_2468.Left = ___xmm_3e8000003e8000003e8000003e800000;
    local_2468.Top = _UNK_15076b0c4;
    local_2468.Right = _UNK_15076b0c8;
    local_2468.Bottom = _UNK_15076b0cc;
    local_res8._0_4_ = 0x42000000;
    local_2478._0_8_ = ___xmm_3f8000003f8000003f8000003f800000;
    local_2478._8_8_ = _UNK_15076b1f8;
    local_res8._4_4_ = 0x42000000;
    ::FString::FString(&local_2788,"Common/Button");
    pTVar12 = &FPaths::EngineContentDir(&local_23f8)->Data;
    TArray<wchar_t,TSizedDefaultAllocator<32>_>::
    TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>
              (&local_28d8,pTVar12,7 - (uint)(pTVar12->ArrayNum != 0));
    ::FString::PathAppend((FString *)&local_28d8,L"Slate",5);
    iVar14 = 2;
    iVar16 = local_2788.Data.ArrayNum + -1;
    if (local_2788.Data.ArrayNum == 0) {
      iVar16 = iVar9;
    }
    if ((local_28d8.ArrayNum != 0) || (iVar8 = 2, iVar16 == -1)) {
      iVar8 = 1;
    }
    TArray<wchar_t,TSizedDefaultAllocator<32>_>::
    TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>(&local_2798,&local_28d8,iVar8 + iVar16);
    ::FString::PathAppend
              ((FString *)&local_2798,(wchar_t *)local_2788.Data.AllocatorInstance.Data,iVar16);
    ::FString::ConcatFC(&local_2578,(FString *)&local_2798,L".png");
    pFVar13 = (FSlateBrush *)
              FSlateBoxBrush::FSlateBoxBrush
                        ((FSlateBoxBrush *)local_20a8,&local_2578,&local_res8,&local_2468,
                         (FLinearColor *)&local_2478._s_0,FullColor);
    FSlateBrush::operator=(&pFVar11->Normal,pFVar13);
    local_res10._0_4_ = 0x42000000;
    local_2448.Left = ___xmm_3e8000003e8000003e8000003e800000;
    local_2448.Top = _UNK_15076b0c4;
    local_2448.Right = _UNK_15076b0c8;
    local_2448.Bottom = _UNK_15076b0cc;
    local_res10._4_4_ = 0x42000000;
    local_2458._0_8_ = uVar5;
    local_2458._8_8_ = uVar6;
    ::FString::FString(&local_27a8,"Common/Button_Hovered");
    pTVar12 = &FPaths::EngineContentDir(&local_2408)->Data;
    TArray<wchar_t,TSizedDefaultAllocator<32>_>::
    TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>
              (&local_28e8,pTVar12,7 - (uint)(pTVar12->ArrayNum != 0));
    ::FString::PathAppend((FString *)&local_28e8,L"Slate",5);
    iVar16 = local_27a8.Data.ArrayNum + -1;
    if (local_27a8.Data.ArrayNum == 0) {
      iVar16 = iVar9;
    }
    if ((local_28e8.ArrayNum != 0) || (iVar8 = 2, iVar16 == -1)) {
      iVar8 = 1;
    }
    TArray<wchar_t,TSizedDefaultAllocator<32>_>::
    TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>(&local_27b8,&local_28e8,iVar8 + iVar16);
    ::FString::PathAppend
              ((FString *)&local_27b8,(wchar_t *)local_27a8.Data.AllocatorInstance.Data,iVar16);
    ::FString::ConcatFC(&local_2588,(FString *)&local_27b8,L".png");
    pFVar13 = (FSlateBrush *)
              FSlateBoxBrush::FSlateBoxBrush
                        ((FSlateBoxBrush *)local_2158,&local_2588,&local_res10,&local_2448,
                         (FLinearColor *)&local_2458._s_0,FullColor);
    FSlateBrush::operator=(&pFVar11->Hovered,pFVar13);
    local_res18._0_4_ = 0x42000000;
    local_2428.Left = ___xmm_3e8000003e8000003e8000003e800000;
    local_2428.Top = _UNK_15076b0c4;
    local_2428.Right = _UNK_15076b0c8;
    local_2428.Bottom = _UNK_15076b0cc;
    local_res18._4_4_ = 0x42000000;
    local_2438._0_8_ = uVar5;
    local_2438._8_8_ = uVar6;
    ::FString::FString(&local_27c8,"Common/Button_Pressed");
    pTVar12 = &FPaths::EngineContentDir(&local_2418)->Data;
    TArray<wchar_t,TSizedDefaultAllocator<32>_>::
    TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>
              (&local_28f8,pTVar12,7 - (uint)(pTVar12->ArrayNum != 0));
    ::FString::PathAppend((FString *)&local_28f8,L"Slate",5);
    iVar16 = local_27c8.Data.ArrayNum + -1;
    if (local_27c8.Data.ArrayNum == 0) {
      iVar16 = iVar17;
    }
    if ((local_28f8.ArrayNum != 0) || (iVar8 = 2, iVar16 == -1)) {
      iVar8 = 1;
    }
    TArray<wchar_t,TSizedDefaultAllocator<32>_>::
    TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>(&local_27d8,&local_28f8,iVar16 + iVar8);
    ::FString::PathAppend
              ((FString *)&local_27d8,(wchar_t *)local_27c8.Data.AllocatorInstance.Data,iVar16);
    ::FString::ConcatFC(&local_2598,(FString *)&local_27d8,L".png");
    pFVar13 = (FSlateBrush *)
              FSlateBoxBrush::FSlateBoxBrush
                        ((FSlateBoxBrush *)local_2208,&local_2598,&local_res18,&local_2428,
                         (FLinearColor *)&local_2438._s_0,FullColor);
    FSlateBrush::operator=(&pFVar11->Pressed,pFVar13);
    (pFVar11->NormalPadding).Left = 2.0;
    (pFVar11->NormalPadding).Top = 2.0;
    (pFVar11->NormalPadding).Right = 2.0;
    (pFVar11->NormalPadding).Bottom = 2.0;
    (pFVar11->PressedPadding).Left = 2.0;
    (pFVar11->PressedPadding).Top = 3.0;
    (pFVar11->PressedPadding).Right = 2.0;
    (pFVar11->PressedPadding).Bottom = 1.0;
    FButtonStyle::FButtonStyle(&local_15a8,pFVar11);
    local_2208[0] = &___7FSlateBrush__6B_;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_2168);
    if (local_2598.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2598.Data.AllocatorInstance.Data);
    }
    if (local_27d8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_27d8.AllocatorInstance.Data);
    }
    if (local_28f8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28f8.AllocatorInstance.Data);
    }
    if (local_2418.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2418.Data.AllocatorInstance.Data);
    }
    if (local_27c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_27c8.Data.AllocatorInstance.Data);
    }
    local_2158[0] = &___7FSlateBrush__6B_;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_20b8);
    if (local_2588.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2588.Data.AllocatorInstance.Data);
    }
    if (local_27b8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_27b8.AllocatorInstance.Data);
    }
    if (local_28e8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28e8.AllocatorInstance.Data);
    }
    if (local_2408.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2408.Data.AllocatorInstance.Data);
    }
    if (local_27a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_27a8.Data.AllocatorInstance.Data);
    }
    local_20a8[0] = &___7FSlateBrush__6B_;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_2008);
    if (local_2578.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2578.Data.AllocatorInstance.Data);
    }
    if (local_2798.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2798.AllocatorInstance.Data);
    }
    if (local_28d8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28d8.AllocatorInstance.Data);
    }
    if (local_23f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_23f8.Data.AllocatorInstance.Data);
    }
    if (local_2788.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2788.Data.AllocatorInstance.Data);
    }
    FButtonStyle::~FButtonStyle(&local_1218);
    pFVar11 = FButtonStyle::FButtonStyle(&local_e88,&local_15a8);
    local_res20._0_4_ = 0x41d80000;
    local_res20._4_4_ = 0x41900000;
    local_23e8._0_8_ = uVar5;
    local_23e8._8_8_ = uVar6;
    ::FString::FString(&local_2708,"Common/Window/WindowButton_Minimize_Normal");
    pTVar12 = &FPaths::EngineContentDir(&local_2378)->Data;
    TArray<wchar_t,TSizedDefaultAllocator<32>_>::
    TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>
              (&local_2898,pTVar12,7 - (uint)(pTVar12->ArrayNum != 0));
    ::FString::PathAppend((FString *)&local_2898,L"Slate",5);
    iVar16 = local_2708.Data.ArrayNum + -1;
    if (local_2708.Data.ArrayNum == 0) {
      iVar16 = iVar17;
    }
    if ((local_2898.ArrayNum != 0) || (iVar8 = 2, iVar16 == -1)) {
      iVar8 = 1;
    }
    TArray<wchar_t,TSizedDefaultAllocator<32>_>::
    TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>(&local_2718,&local_2898,iVar16 + iVar8);
    ::FString::PathAppend
              ((FString *)&local_2718,(wchar_t *)local_2708.Data.AllocatorInstance.Data,iVar16);
    ::FString::ConcatFC(&local_2538,(FString *)&local_2718,L".png");
    pFVar13 = (FSlateBrush *)
              FSlateImageBrush::FSlateImageBrush
                        ((FSlateImageBrush *)local_1de8,&local_2538,&local_res20,
                         (FLinearColor *)&local_23e8._s_0,NoTile,FullColor);
    FSlateBrush::operator=(&pFVar11->Normal,pFVar13);
    local_2968._0_4_ = 0x41d80000;
    local_2968._4_4_ = 0x41900000;
    local_23d8._0_8_ = uVar5;
    local_23d8._8_8_ = uVar6;
    ::FString::FString(&local_2728,"Common/Window/WindowButton_Minimize_Hovered");
    pTVar12 = &FPaths::EngineContentDir(&local_2388)->Data;
    TArray<wchar_t,TSizedDefaultAllocator<32>_>::
    TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>
              (&local_28a8,pTVar12,7 - (uint)(pTVar12->ArrayNum != 0));
    ::FString::PathAppend((FString *)&local_28a8,L"Slate",5);
    iVar16 = local_2728.Data.ArrayNum + -1;
    if (local_2728.Data.ArrayNum == 0) {
      iVar16 = iVar17;
    }
    if ((local_28a8.ArrayNum != 0) || (iVar8 = 2, iVar16 == -1)) {
      iVar8 = 1;
    }
    TArray<wchar_t,TSizedDefaultAllocator<32>_>::
    TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>(&local_2738,&local_28a8,iVar16 + iVar8);
    ::FString::PathAppend
              ((FString *)&local_2738,(wchar_t *)local_2728.Data.AllocatorInstance.Data,iVar16);
    ::FString::ConcatFC(&local_2548,(FString *)&local_2738,L".png");
    pFVar13 = (FSlateBrush *)
              FSlateImageBrush::FSlateImageBrush
                        ((FSlateImageBrush *)local_1e98,&local_2548,&local_2968,
                         (FLinearColor *)&local_23d8._s_0,NoTile,FullColor);
    FSlateBrush::operator=(&pFVar11->Hovered,pFVar13);
    local_2960._0_4_ = 0x41d80000;
    local_2960._4_4_ = 0x41900000;
    local_23c8._0_8_ = uVar5;
    local_23c8._8_8_ = uVar6;
    ::FString::FString(&local_2748,"Common/Window/WindowButton_Minimize_Pressed");
    pTVar12 = &FPaths::EngineContentDir(&local_2398)->Data;
    TArray<wchar_t,TSizedDefaultAllocator<32>_>::
    TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>
              (&local_28b8,pTVar12,7 - (uint)(pTVar12->ArrayNum != 0));
    ::FString::PathAppend((FString *)&local_28b8,L"Slate",5);
    iVar16 = local_2748.Data.ArrayNum + -1;
    if (local_2748.Data.ArrayNum == 0) {
      iVar16 = iVar17;
    }
    if ((local_28b8.ArrayNum != 0) || (iVar8 = 2, iVar16 == -1)) {
      iVar8 = 1;
    }
    TArray<wchar_t,TSizedDefaultAllocator<32>_>::
    TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>(&local_2758,&local_28b8,iVar16 + iVar8);
    ::FString::PathAppend
              ((FString *)&local_2758,(wchar_t *)local_2748.Data.AllocatorInstance.Data,iVar16);
    ::FString::ConcatFC(&local_2558,(FString *)&local_2758,L".png");
    pFVar13 = (FSlateBrush *)
              FSlateImageBrush::FSlateImageBrush
                        ((FSlateImageBrush *)local_1f48,&local_2558,&local_2960,
                         (FLinearColor *)&local_23c8._s_0,NoTile,FullColor);
    FSlateBrush::operator=(&pFVar11->Pressed,pFVar13);
    local_2958._0_4_ = 0x41d80000;
    local_2958._4_4_ = 0x41900000;
    local_23b8._0_8_ = uVar5;
    local_23b8._8_8_ = uVar6;
    ::FString::FString(&local_2768,"Common/Window/WindowButton_Minimize_Disabled");
    pTVar12 = &FPaths::EngineContentDir(&local_23a8)->Data;
    TArray<wchar_t,TSizedDefaultAllocator<32>_>::
    TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>
              (&local_28c8,pTVar12,7 - (uint)(pTVar12->ArrayNum != 0));
    ::FString::PathAppend((FString *)&local_28c8,L"Slate",5);
    iVar16 = local_2768.Data.ArrayNum + -1;
    if (local_2768.Data.ArrayNum == 0) {
      iVar16 = iVar17;
    }
    if ((local_28c8.ArrayNum != 0) || (iVar8 = 2, iVar16 == -1)) {
      iVar8 = 1;
    }
    TArray<wchar_t,TSizedDefaultAllocator<32>_>::
    TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>(&local_2778,&local_28c8,iVar16 + iVar8);
    ::FString::PathAppend
              ((FString *)&local_2778,(wchar_t *)local_2768.Data.AllocatorInstance.Data,iVar16);
    ::FString::ConcatFC(&local_2568,(FString *)&local_2778,L".png");
    pFVar13 = (FSlateBrush *)
              FSlateImageBrush::FSlateImageBrush
                        ((FSlateImageBrush *)local_1ff8,&local_2568,&local_2958,
                         (FLinearColor *)&local_23b8._s_0,NoTile,FullColor);
    FSlateBrush::operator=(&pFVar11->Disabled,pFVar13);
    FButtonStyle::operator=(&MinimizeButtonStyle,pFVar11);
    local_1ff8[0] = &___7FSlateBrush__6B_;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_1f58);
    if (local_2568.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2568.Data.AllocatorInstance.Data);
    }
    if (local_2778.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2778.AllocatorInstance.Data);
    }
    if (local_28c8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28c8.AllocatorInstance.Data);
    }
    if (local_23a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_23a8.Data.AllocatorInstance.Data);
    }
    if (local_2768.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2768.Data.AllocatorInstance.Data);
    }
    local_1f48[0] = &___7FSlateBrush__6B_;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_1ea8);
    if (local_2558.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2558.Data.AllocatorInstance.Data);
    }
    if (local_2758.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2758.AllocatorInstance.Data);
    }
    if (local_28b8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28b8.AllocatorInstance.Data);
    }
    if (local_2398.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2398.Data.AllocatorInstance.Data);
    }
    if (local_2748.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2748.Data.AllocatorInstance.Data);
    }
    local_1e98[0] = &___7FSlateBrush__6B_;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_1df8);
    if (local_2548.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2548.Data.AllocatorInstance.Data);
    }
    if (local_2738.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2738.AllocatorInstance.Data);
    }
    if (local_28a8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28a8.AllocatorInstance.Data);
    }
    if (local_2388.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2388.Data.AllocatorInstance.Data);
    }
    if (local_2728.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2728.Data.AllocatorInstance.Data);
    }
    local_1de8[0] = &___7FSlateBrush__6B_;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_1d48);
    if (local_2538.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2538.Data.AllocatorInstance.Data);
    }
    if (local_2718.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2718.AllocatorInstance.Data);
    }
    if (local_2898.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2898.AllocatorInstance.Data);
    }
    if (local_2378.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2378.Data.AllocatorInstance.Data);
    }
    if (local_2708.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2708.Data.AllocatorInstance.Data);
    }
    FButtonStyle::~FButtonStyle(&local_e88);
    pFVar11 = FButtonStyle::FButtonStyle(&local_af8,&local_15a8);
    local_2950._0_4_ = 0x41b80000;
    local_2950._4_4_ = 0x41900000;
    local_2368._0_8_ = uVar5;
    local_2368._8_8_ = uVar6;
    ::FString::FString(&local_2688,"Common/Window/WindowButton_Maximize_Normal");
    pTVar12 = &FPaths::EngineContentDir(&local_22f8)->Data;
    TArray<wchar_t,TSizedDefaultAllocator<32>_>::
    TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>
              (&local_2858,pTVar12,7 - (uint)(pTVar12->ArrayNum != 0));
    ::FString::PathAppend((FString *)&local_2858,L"Slate",5);
    iVar16 = local_2688.Data.ArrayNum + -1;
    if (local_2688.Data.ArrayNum == 0) {
      iVar16 = iVar17;
    }
    if ((local_2858.ArrayNum != 0) || (iVar8 = 2, iVar16 == -1)) {
      iVar8 = 1;
    }
    TArray<wchar_t,TSizedDefaultAllocator<32>_>::
    TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>(&local_2698,&local_2858,iVar16 + iVar8);
    ::FString::PathAppend
              ((FString *)&local_2698,(wchar_t *)local_2688.Data.AllocatorInstance.Data,iVar16);
    ::FString::ConcatFC(&local_24f8,(FString *)&local_2698,L".png");
    pFVar13 = (FSlateBrush *)
              FSlateImageBrush::FSlateImageBrush
                        ((FSlateImageBrush *)local_1b28,&local_24f8,&local_2950,
                         (FLinearColor *)&local_2368._s_0,NoTile,FullColor);
    FSlateBrush::operator=(&pFVar11->Normal,pFVar13);
    local_2948._0_4_ = 0x41b80000;
    local_2948._4_4_ = 0x41900000;
    local_2358._0_8_ = uVar5;
    local_2358._8_8_ = uVar6;
    ::FString::FString(&local_26a8,"Common/Window/WindowButton_Maximize_Hovered");
    pTVar12 = &FPaths::EngineContentDir(&local_2308)->Data;
    TArray<wchar_t,TSizedDefaultAllocator<32>_>::
    TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>
              (&local_2868,pTVar12,7 - (uint)(pTVar12->ArrayNum != 0));
    ::FString::PathAppend((FString *)&local_2868,L"Slate",5);
    iVar16 = local_26a8.Data.ArrayNum + -1;
    if (local_26a8.Data.ArrayNum == 0) {
      iVar16 = iVar17;
    }
    if ((local_2868.ArrayNum != 0) || (iVar8 = 2, iVar16 == -1)) {
      iVar8 = 1;
    }
    TArray<wchar_t,TSizedDefaultAllocator<32>_>::
    TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>(&local_26b8,&local_2868,iVar16 + iVar8);
    ::FString::PathAppend
              ((FString *)&local_26b8,(wchar_t *)local_26a8.Data.AllocatorInstance.Data,iVar16);
    ::FString::ConcatFC(&local_2508,(FString *)&local_26b8,L".png");
    pFVar13 = (FSlateBrush *)
              FSlateImageBrush::FSlateImageBrush
                        ((FSlateImageBrush *)local_1bd8,&local_2508,&local_2948,
                         (FLinearColor *)&local_2358._s_0,NoTile,FullColor);
    FSlateBrush::operator=(&pFVar11->Hovered,pFVar13);
    local_2940._0_4_ = 0x41b80000;
    local_2940._4_4_ = 0x41900000;
    local_2348._0_8_ = uVar5;
    local_2348._8_8_ = uVar6;
    ::FString::FString(&local_26c8,"Common/Window/WindowButton_Maximize_Pressed");
    pTVar12 = &FPaths::EngineContentDir(&local_2318)->Data;
    TArray<wchar_t,TSizedDefaultAllocator<32>_>::
    TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>
              (&local_2878,pTVar12,7 - (uint)(pTVar12->ArrayNum != 0));
    ::FString::PathAppend((FString *)&local_2878,L"Slate",5);
    iVar16 = local_26c8.Data.ArrayNum + -1;
    if (local_26c8.Data.ArrayNum == 0) {
      iVar16 = iVar17;
    }
    if ((local_2878.ArrayNum != 0) || (iVar8 = 2, iVar16 == -1)) {
      iVar8 = 1;
    }
    TArray<wchar_t,TSizedDefaultAllocator<32>_>::
    TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>(&local_26d8,&local_2878,iVar16 + iVar8);
    ::FString::PathAppend
              ((FString *)&local_26d8,(wchar_t *)local_26c8.Data.AllocatorInstance.Data,iVar16);
    ::FString::ConcatFC(&local_2518,(FString *)&local_26d8,L".png");
    pFVar13 = (FSlateBrush *)
              FSlateImageBrush::FSlateImageBrush
                        ((FSlateImageBrush *)local_1c88,&local_2518,&local_2940,
                         (FLinearColor *)&local_2348._s_0,NoTile,FullColor);
    FSlateBrush::operator=(&pFVar11->Pressed,pFVar13);
    local_2938._0_4_ = 0x41d80000;
    local_2938._4_4_ = 0x41900000;
    local_2338._0_8_ = uVar5;
    local_2338._8_8_ = uVar6;
    ::FString::FString(&local_26e8,"Common/Window/WindowButton_Maximize_Disabled");
    pTVar12 = &FPaths::EngineContentDir(&local_2328)->Data;
    TArray<wchar_t,TSizedDefaultAllocator<32>_>::
    TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>
              (&local_2888,pTVar12,7 - (uint)(pTVar12->ArrayNum != 0));
    ::FString::PathAppend((FString *)&local_2888,L"Slate",5);
    iVar16 = local_26e8.Data.ArrayNum + -1;
    if (local_26e8.Data.ArrayNum == 0) {
      iVar16 = iVar17;
    }
    if ((local_2888.ArrayNum != 0) || (iVar8 = 2, iVar16 == -1)) {
      iVar8 = 1;
    }
    TArray<wchar_t,TSizedDefaultAllocator<32>_>::
    TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>(&local_26f8,&local_2888,iVar16 + iVar8);
    ::FString::PathAppend
              ((FString *)&local_26f8,(wchar_t *)local_26e8.Data.AllocatorInstance.Data,iVar16);
    ::FString::ConcatFC(&local_2528,(FString *)&local_26f8,L".png");
    pFVar13 = (FSlateBrush *)
              FSlateImageBrush::FSlateImageBrush
                        ((FSlateImageBrush *)local_1d38,&local_2528,&local_2938,
                         (FLinearColor *)&local_2338._s_0,NoTile,FullColor);
    FSlateBrush::operator=(&pFVar11->Disabled,pFVar13);
    FButtonStyle::operator=(&MaximizeButtonStyle,pFVar11);
    local_1d38[0] = &___7FSlateBrush__6B_;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_1c98);
    if (local_2528.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2528.Data.AllocatorInstance.Data);
    }
    if (local_26f8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_26f8.AllocatorInstance.Data);
    }
    if (local_2888.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2888.AllocatorInstance.Data);
    }
    if (local_2328.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2328.Data.AllocatorInstance.Data);
    }
    if (local_26e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_26e8.Data.AllocatorInstance.Data);
    }
    local_1c88[0] = &___7FSlateBrush__6B_;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_1be8);
    if (local_2518.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2518.Data.AllocatorInstance.Data);
    }
    if (local_26d8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_26d8.AllocatorInstance.Data);
    }
    if (local_2878.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2878.AllocatorInstance.Data);
    }
    if (local_2318.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2318.Data.AllocatorInstance.Data);
    }
    if (local_26c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_26c8.Data.AllocatorInstance.Data);
    }
    local_1bd8[0] = &___7FSlateBrush__6B_;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_1b38);
    if (local_2508.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2508.Data.AllocatorInstance.Data);
    }
    if (local_26b8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_26b8.AllocatorInstance.Data);
    }
    if (local_2868.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2868.AllocatorInstance.Data);
    }
    if (local_2308.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2308.Data.AllocatorInstance.Data);
    }
    if (local_26a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_26a8.Data.AllocatorInstance.Data);
    }
    local_1b28[0] = &___7FSlateBrush__6B_;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_1a88);
    if (local_24f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_24f8.Data.AllocatorInstance.Data);
    }
    if (local_2698.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2698.AllocatorInstance.Data);
    }
    if (local_2858.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2858.AllocatorInstance.Data);
    }
    if (local_22f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_22f8.Data.AllocatorInstance.Data);
    }
    if (local_2688.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2688.Data.AllocatorInstance.Data);
    }
    FButtonStyle::~FButtonStyle(&local_af8);
    pFVar11 = FButtonStyle::FButtonStyle(&local_768,&local_15a8);
    local_2930._0_4_ = 0x41b80000;
    local_2930._4_4_ = 0x41900000;
    local_22e8._0_8_ = uVar5;
    local_22e8._8_8_ = uVar6;
    ::FString::FString(&local_2608,"Common/Window/WindowButton_Restore_Normal");
    pTVar12 = &FPaths::EngineContentDir(&local_2278)->Data;
    TArray<wchar_t,TSizedDefaultAllocator<32>_>::
    TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>
              (&local_2818,pTVar12,7 - (uint)(pTVar12->ArrayNum != 0));
    ::FString::PathAppend((FString *)&local_2818,L"Slate",5);
    iVar16 = local_2608.Data.ArrayNum + -1;
    if (local_2608.Data.ArrayNum == 0) {
      iVar16 = iVar9;
    }
    if ((local_2818.ArrayNum != 0) || (iVar8 = 2, iVar16 == -1)) {
      iVar8 = 1;
    }
    TArray<wchar_t,TSizedDefaultAllocator<32>_>::
    TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>(&local_2618,&local_2818,iVar8 + iVar16);
    ::FString::PathAppend
              ((FString *)&local_2618,(wchar_t *)local_2608.Data.AllocatorInstance.Data,iVar16);
    ::FString::ConcatFC(&local_24b8,(FString *)&local_2618,L".png");
    pFVar13 = (FSlateBrush *)
              FSlateImageBrush::FSlateImageBrush
                        ((FSlateImageBrush *)local_1868,&local_24b8,&local_2930,
                         (FLinearColor *)&local_22e8._s_0,NoTile,FullColor);
    FSlateBrush::operator=(&pFVar11->Normal,pFVar13);
    local_2928._0_4_ = 0x41b80000;
    local_2928._4_4_ = 0x41900000;
    local_22d8._0_8_ = uVar5;
    local_22d8._8_8_ = uVar6;
    ::FString::FString(&local_2628,"Common/Window/WindowButton_Restore_Hovered");
    pTVar12 = &FPaths::EngineContentDir(&local_2288)->Data;
    TArray<wchar_t,TSizedDefaultAllocator<32>_>::
    TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>
              (&local_2828,pTVar12,7 - (uint)(pTVar12->ArrayNum != 0));
    ::FString::PathAppend((FString *)&local_2828,L"Slate",5);
    iVar16 = local_2628.Data.ArrayNum + -1;
    if (local_2628.Data.ArrayNum == 0) {
      iVar16 = iVar9;
    }
    if ((local_2828.ArrayNum != 0) || (iVar8 = 2, iVar16 == -1)) {
      iVar8 = 1;
    }
    TArray<wchar_t,TSizedDefaultAllocator<32>_>::
    TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>(&local_2638,&local_2828,iVar8 + iVar16);
    ::FString::PathAppend
              ((FString *)&local_2638,(wchar_t *)local_2628.Data.AllocatorInstance.Data,iVar16);
    ::FString::ConcatFC(&local_24c8,(FString *)&local_2638,L".png");
    pFVar13 = (FSlateBrush *)
              FSlateImageBrush::FSlateImageBrush
                        ((FSlateImageBrush *)local_1918,&local_24c8,&local_2928,
                         (FLinearColor *)&local_22d8._s_0,NoTile,FullColor);
    FSlateBrush::operator=(&pFVar11->Hovered,pFVar13);
    local_2920._0_4_ = 0x41b80000;
    local_2920._4_4_ = 0x41900000;
    local_22c8._0_8_ = uVar5;
    local_22c8._8_8_ = uVar6;
    ::FString::FString(&local_2648,"Common/Window/WindowButton_Restore_Pressed");
    pTVar12 = &FPaths::EngineContentDir(&local_2298)->Data;
    TArray<wchar_t,TSizedDefaultAllocator<32>_>::
    TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>
              (&local_2838,pTVar12,7 - (uint)(pTVar12->ArrayNum != 0));
    ::FString::PathAppend((FString *)&local_2838,L"Slate",5);
    iVar16 = local_2648.Data.ArrayNum + -1;
    if (local_2648.Data.ArrayNum == 0) {
      iVar16 = iVar9;
    }
    if ((local_2838.ArrayNum != 0) || (iVar8 = 2, iVar16 == -1)) {
      iVar8 = 1;
    }
    TArray<wchar_t,TSizedDefaultAllocator<32>_>::
    TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>(&local_2658,&local_2838,iVar8 + iVar16);
    ::FString::PathAppend
              ((FString *)&local_2658,(wchar_t *)local_2648.Data.AllocatorInstance.Data,iVar16);
    ::FString::ConcatFC(&local_24d8,(FString *)&local_2658,L".png");
    pFVar13 = (FSlateBrush *)
              FSlateImageBrush::FSlateImageBrush
                        ((FSlateImageBrush *)local_19c8,&local_24d8,&local_2920,
                         (FLinearColor *)&local_22c8._s_0,NoTile,FullColor);
    FSlateBrush::operator=(&pFVar11->Pressed,pFVar13);
    local_2918._0_4_ = 0x41d80000;
    local_2918._4_4_ = 0x41900000;
    local_22b8._0_8_ = uVar5;
    local_22b8._8_8_ = uVar6;
    ::FString::FString(&local_2668,"Common/Window/WindowButton_Maximize_Disabled");
    pTVar12 = &FPaths::EngineContentDir(&local_22a8)->Data;
    TArray<wchar_t,TSizedDefaultAllocator<32>_>::
    TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>
              (&local_2848,pTVar12,7 - (uint)(pTVar12->ArrayNum != 0));
    ::FString::PathAppend((FString *)&local_2848,L"Slate",5);
    iVar16 = local_2668.Data.ArrayNum + -1;
    if (local_2668.Data.ArrayNum == 0) {
      iVar16 = iVar9;
    }
    if ((local_2848.ArrayNum != 0) || (iVar8 = 2, iVar16 == -1)) {
      iVar8 = 1;
    }
    TArray<wchar_t,TSizedDefaultAllocator<32>_>::
    TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>(&local_2678,&local_2848,iVar8 + iVar16);
    ::FString::PathAppend
              ((FString *)&local_2678,(wchar_t *)local_2668.Data.AllocatorInstance.Data,iVar16);
    ::FString::ConcatFC(&local_24e8,(FString *)&local_2678,L".png");
    pFVar13 = (FSlateBrush *)
              FSlateImageBrush::FSlateImageBrush
                        ((FSlateImageBrush *)local_1a78,&local_24e8,&local_2918,
                         (FLinearColor *)&local_22b8._s_0,NoTile,FullColor);
    FSlateBrush::operator=(&pFVar11->Disabled,pFVar13);
    FButtonStyle::operator=(&RestoreButtonStyle,pFVar11);
    local_1a78[0] = &___7FSlateBrush__6B_;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_19d8);
    if (local_24e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_24e8.Data.AllocatorInstance.Data);
    }
    if (local_2678.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2678.AllocatorInstance.Data);
    }
    if (local_2848.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2848.AllocatorInstance.Data);
    }
    if (local_22a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_22a8.Data.AllocatorInstance.Data);
    }
    if (local_2668.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2668.Data.AllocatorInstance.Data);
    }
    local_19c8[0] = &___7FSlateBrush__6B_;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_1928);
    if (local_24d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_24d8.Data.AllocatorInstance.Data);
    }
    if (local_2658.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2658.AllocatorInstance.Data);
    }
    if (local_2838.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2838.AllocatorInstance.Data);
    }
    if (local_2298.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2298.Data.AllocatorInstance.Data);
    }
    if (local_2648.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2648.Data.AllocatorInstance.Data);
    }
    local_1918[0] = &___7FSlateBrush__6B_;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_1878);
    if (local_24c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_24c8.Data.AllocatorInstance.Data);
    }
    if (local_2638.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2638.AllocatorInstance.Data);
    }
    if (local_2828.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2828.AllocatorInstance.Data);
    }
    if (local_2288.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2288.Data.AllocatorInstance.Data);
    }
    if (local_2628.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2628.Data.AllocatorInstance.Data);
    }
    local_1868[0] = &___7FSlateBrush__6B_;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_17c8);
    if (local_24b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_24b8.Data.AllocatorInstance.Data);
    }
    if (local_2618.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2618.AllocatorInstance.Data);
    }
    if (local_2818.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2818.AllocatorInstance.Data);
    }
    if (local_2278.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2278.Data.AllocatorInstance.Data);
    }
    if (local_2608.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2608.Data.AllocatorInstance.Data);
    }
    FButtonStyle::~FButtonStyle(&local_768);
    pFVar11 = FButtonStyle::FButtonStyle(&local_3d8,&local_15a8);
    local_2910._0_4_ = 0x42300000;
    local_2910._4_4_ = 0x41900000;
    local_2268._0_8_ = uVar5;
    local_2268._8_8_ = uVar6;
    ::FString::FString(&local_25a8,"Common/Window/WindowButton_Close_Normal");
    pTVar12 = &FPaths::EngineContentDir(&local_2218)->Data;
    TArray<wchar_t,TSizedDefaultAllocator<32>_>::
    TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>
              (&local_27e8,pTVar12,7 - (uint)(pTVar12->ArrayNum != 0));
    ::FString::PathAppend((FString *)&local_27e8,L"Slate",5);
    iVar16 = local_25a8.Data.ArrayNum + -1;
    if (local_25a8.Data.ArrayNum == 0) {
      iVar16 = iVar9;
    }
    if ((local_27e8.ArrayNum != 0) || (iVar8 = 2, iVar16 == -1)) {
      iVar8 = 1;
    }
    TArray<wchar_t,TSizedDefaultAllocator<32>_>::
    TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>(&local_25b8,&local_27e8,iVar8 + iVar16);
    ::FString::PathAppend
              ((FString *)&local_25b8,(wchar_t *)local_25a8.Data.AllocatorInstance.Data,iVar16);
    ::FString::ConcatFC(&local_2488,(FString *)&local_25b8,L".png");
    pFVar13 = (FSlateBrush *)
              FSlateImageBrush::FSlateImageBrush
                        ((FSlateImageBrush *)local_1658,&local_2488,&local_2910,
                         (FLinearColor *)&local_2268._s_0,NoTile,FullColor);
    FSlateBrush::operator=(&pFVar11->Normal,pFVar13);
    local_2908._0_4_ = 0x42300000;
    local_2908._4_4_ = 0x41900000;
    local_2258._0_8_ = uVar5;
    local_2258._8_8_ = uVar6;
    ::FString::FString(&local_25c8,"Common/Window/WindowButton_Close_Hovered");
    pTVar12 = &FPaths::EngineContentDir(&local_2228)->Data;
    TArray<wchar_t,TSizedDefaultAllocator<32>_>::
    TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>
              (&local_27f8,pTVar12,7 - (uint)(pTVar12->ArrayNum != 0));
    ::FString::PathAppend((FString *)&local_27f8,L"Slate",5);
    iVar16 = local_25c8.Data.ArrayNum + -1;
    if (local_25c8.Data.ArrayNum == 0) {
      iVar16 = iVar9;
    }
    if ((local_27f8.ArrayNum != 0) || (iVar9 = 2, iVar16 == -1)) {
      iVar9 = 1;
    }
    TArray<wchar_t,TSizedDefaultAllocator<32>_>::
    TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>(&local_25d8,&local_27f8,iVar9 + iVar16);
    ::FString::PathAppend
              ((FString *)&local_25d8,(wchar_t *)local_25c8.Data.AllocatorInstance.Data,iVar16);
    ::FString::ConcatFC(&local_2498,(FString *)&local_25d8,L".png");
    pFVar13 = (FSlateBrush *)
              FSlateImageBrush::FSlateImageBrush
                        ((FSlateImageBrush *)local_1708,&local_2498,&local_2908,
                         (FLinearColor *)&local_2258._s_0,NoTile,FullColor);
    FSlateBrush::operator=(&pFVar11->Hovered,pFVar13);
    local_2900._0_4_ = 0x42300000;
    local_2900._4_4_ = 0x41900000;
    local_2248._0_8_ = uVar5;
    local_2248._8_8_ = uVar6;
    ::FString::FString(&local_25e8,"Common/Window/WindowButton_Close_Pressed");
    pTVar12 = &FPaths::EngineContentDir(&local_2238)->Data;
    TArray<wchar_t,TSizedDefaultAllocator<32>_>::
    TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>
              (&local_2808,pTVar12,7 - (uint)(pTVar12->ArrayNum != 0));
    ::FString::PathAppend((FString *)&local_2808,L"Slate",5);
    iVar9 = local_25e8.Data.ArrayNum + -1;
    if (local_25e8.Data.ArrayNum == 0) {
      iVar9 = iVar17;
    }
    if ((local_2808.ArrayNum != 0) || (iVar9 == -1)) {
      iVar14 = 1;
    }
    TArray<wchar_t,TSizedDefaultAllocator<32>_>::
    TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>(&local_25f8,&local_2808,iVar9 + iVar14);
    ::FString::PathAppend
              ((FString *)&local_25f8,(wchar_t *)local_25e8.Data.AllocatorInstance.Data,iVar9);
    ::FString::ConcatFC(&local_24a8,(FString *)&local_25f8,L".png");
    pFVar13 = (FSlateBrush *)
              FSlateImageBrush::FSlateImageBrush
                        ((FSlateImageBrush *)local_17b8,&local_24a8,&local_2900,
                         (FLinearColor *)&local_2248._s_0,NoTile,FullColor);
    FSlateBrush::operator=(&pFVar11->Pressed,pFVar13);
    FButtonStyle::operator=(&CloseButtonStyle,pFVar11);
    local_17b8[0] = &___7FSlateBrush__6B_;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_1718);
    if (local_24a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_24a8.Data.AllocatorInstance.Data);
    }
    if (local_25f8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_25f8.AllocatorInstance.Data);
    }
    if (local_2808.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2808.AllocatorInstance.Data);
    }
    if (local_2238.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2238.Data.AllocatorInstance.Data);
    }
    if (local_25e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_25e8.Data.AllocatorInstance.Data);
    }
    local_1708[0] = &___7FSlateBrush__6B_;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_1668);
    if (local_2498.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2498.Data.AllocatorInstance.Data);
    }
    if (local_25d8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_25d8.AllocatorInstance.Data);
    }
    if (local_27f8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_27f8.AllocatorInstance.Data);
    }
    if (local_2228.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2228.Data.AllocatorInstance.Data);
    }
    if (local_25c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_25c8.Data.AllocatorInstance.Data);
    }
    local_1658[0] = &___7FSlateBrush__6B_;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_15b8);
    if (local_2488.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2488.Data.AllocatorInstance.Data);
    }
    if (local_25b8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_25b8.AllocatorInstance.Data);
    }
    if (local_27e8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_27e8.AllocatorInstance.Data);
    }
    if (local_2218.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2218.Data.AllocatorInstance.Data);
    }
    if (local_25a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_25a8.Data.AllocatorInstance.Data);
    }
    FButtonStyle::~FButtonStyle(&local_3d8);
    bButtonsStyleInitialized = true;
    FButtonStyle::~FButtonStyle(&local_15a8);
  }
  return this;
}

// ~SWindowTitleBarArea @ 1429c0580

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SWindowTitleBarArea::~SWindowTitleBarArea(SWindowTitleBarArea *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7SWindowTitleBarArea__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->WindowButtonsBox).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->CloseButton).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->MaximizeRestoreButton).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->MinimizeButton).SharedReferenceCount.ReferenceController);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->RequestToggleFullscreen);
  pvVar1 = *(void **)&(this->RequestToggleFullscreen).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->RequestToggleFullscreen);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->GameWindow).SharedReferenceCount.ReferenceController);
  FSlotBase::~FSlotBase((FSlotBase *)&(this->ChildSlot).field_0x20);
  FChildren::~FChildren((FChildren *)&this->ChildSlot);
  SPanel::~SPanel((SPanel *)this);
  return;
}

// CloseButton_OnClicked @ 1429cd6b0

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SWindowTitleBarArea::CloseButton_OnClicked(SWindowTitleBarArea *this,FReply *__return_storage_ptr__)

{
  SWindow *this_00;
  bool bVar1;
  char cVar2;
  longlong *plVar3;
  FReadAccessScope local_28;
  
  if (!bIsCloseButtonActive) goto LAB_1429cd75f;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&OnCloseButtonClicked,
             &local_28);
  if ((OnCloseButtonClicked._16_4_ == 0) || (OnCloseButtonClicked._8_8_ == 0)) {
LAB_1429cd706:
    bVar1 = false;
  }
  else {
    cVar2 = (**(code **)(*(longlong *)OnCloseButtonClicked._8_8_ + 0x38))();
    if (cVar2 == '\0') goto LAB_1429cd706;
    bVar1 = true;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  if (bVar1) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&OnCloseButtonClicked,
               &local_28);
    plVar3 = (longlong *)0x0;
    if (OnCloseButtonClicked._16_4_ != 0) {
      plVar3 = (longlong *)OnCloseButtonClicked._8_8_;
    }
    (**(code **)(*plVar3 + 0x60))();
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_28);
  }
  else {
    this_00 = (this->GameWindow).Object;
    if (this_00 != (SWindow *)0x0) {
      SWindow::RequestDestroyWindow(this_00);
    }
  }
LAB_1429cd75f:
  FReply::FReply(__return_storage_ptr__,true);
  return __return_storage_ptr__;
}

// ComputeDesiredSize @ 1429cf890

/* WARNING: Enum "Type": Some values do not have unique names */

TVector2<double> * __thiscall
SWindowTitleBarArea::ComputeDesiredSize
          (SWindowTitleBarArea *this,TVector2<double> *__return_storage_ptr__,float param_1)

{
  float fVar1;
  SWidget *this_00;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  FDeprecateSlateVector2D FVar6;
  
  this_00 = *(SWidget **)&(this->ChildSlot).field_0x30;
  if ((TEnumAsByte<EVisibility::Private>)*(uchar *)&this_00->VisibilityAttribute !=
      EVisibility::Collapsed.Value.Value) {
    fVar2 = *(float *)&(this->ChildSlot).field_0x40;
    fVar3 = *(float *)&(this->ChildSlot).field_0x44;
    fVar4 = *(float *)&(this->ChildSlot).field_0x48;
    fVar5 = *(float *)&(this->ChildSlot).field_0x4c;
    FVar6 = SWidget::GetDesiredSize(this_00);
    fVar1 = *(float *)((longlong)FVar6 + 4);
    (__return_storage_ptr__->field0_0x0)._s_0.X = (double)(fVar4 + fVar2 + *(float *)FVar6);
    (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)(fVar5 + fVar3 + fVar1);
    return __return_storage_ptr__;
  }
  (__return_storage_ptr__->field0_0x0)._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector;
  return __return_storage_ptr__;
}

// Construct @ 1429d9910

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SWindowTitleBarArea::Construct(SWindowTitleBarArea *this,FArguments *param_1)

{
  undefined1 *puVar1;
  longlong *plVar2;
  int *piVar3;
  TSharedPtr<SButton,1> *this_00;
  TSharedPtr<SButton,1> *this_01;
  TSharedPtr<SButton,1> *this_02;
  TReferenceControllerBase<1> *pTVar4;
  SImage *pSVar5;
  TReferenceControllerBase<1> *pTVar6;
  TReferenceControllerBase<1> *pTVar7;
  SHorizontalBox *pSVar8;
  TReferenceControllerBase<1> *pTVar9;
  TReferenceControllerBase<1> *pTVar10;
  FSlotArguments *pFVar11;
  TReferenceControllerBase<1> *pTVar12;
  code *pcVar13;
  FArguments *pFVar14;
  FArguments *pFVar15;
  bool bVar16;
  int iVar17;
  FArguments *pFVar18;
  ISlateStyle *pIVar19;
  FButtonStyle *pFVar20;
  FArguments *pFVar21;
  FText *pFVar22;
  TSharedRef<SImage,1> *pTVar23;
  TSharedRef<SButton,1> *pTVar24;
  FArguments *pFVar25;
  FSlotArguments *pFVar26;
  FSlot *this_03;
  FSlot *this_04;
  FSlotArguments *pFVar27;
  FArguments *pFVar28;
  FArguments *pFVar29;
  FSlotArguments *pFVar30;
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs> *pTVar31;
  TSharedRef<SHorizontalBox,1> *pTVar32;
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs> *this_05;
  TSharedRef<SBox,1> *pTVar33;
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs> *pTVar34;
  TSharedRef<SVerticalBox,1> *pTVar35;
  TSlateDecl<SOverlay,RequiredArgs::T0RequiredArgs> *this_06;
  TSharedRef<SOverlay,1> *pTVar36;
  SVerticalBox *this_07;
  FSlotArguments *pFVar37;
  TArray<SVerticalBox::FSlot::FSlotArguments,TSizedDefaultAllocator<32>_> *pTVar38;
  TReferenceControllerBase<1> *local_res8;
  FArguments *local_res10;
  T0RequiredArgs local_res18 [8];
  T0RequiredArgs local_res20 [8];
  TSharedRef<SWidget,1> local_3138;
  T0RequiredArgs local_3128;
  T0RequiredArgs local_3127;
  T0RequiredArgs local_3126;
  T0RequiredArgs local_3125;
  T0RequiredArgs local_3124;
  T0RequiredArgs local_3123;
  T0RequiredArgs local_3122;
  T0RequiredArgs local_3121;
  FLLMScope local_3120;
  FLLMScope local_311c;
  FLLMScope local_3118;
  FLLMScope local_3114;
  FLLMScope local_3110;
  FLLMScope local_310c;
  undefined1 local_3108;
  undefined1 local_3107;
  undefined1 local_3100 [8];
  ForAnyElementType FStack_30f8;
  ulonglong local_30f0;
  undefined1 local_30e8;
  undefined1 local_30e7;
  undefined1 local_30e0 [8];
  ForAnyElementType FStack_30d8;
  ulonglong local_30d0;
  undefined1 local_30c8;
  undefined1 local_30c7;
  undefined1 local_30c0 [8];
  ForAnyElementType FStack_30b8;
  ulonglong local_30b0;
  uchar local_30a8;
  undefined1 local_30a7;
  undefined1 local_30a0 [8];
  ForAnyElementType FStack_3098;
  ulonglong local_3090;
  FSlotArguments *local_3088;
  undefined4 local_3080;
  undefined1 local_307c;
  undefined1 local_3078;
  undefined1 local_3070 [8];
  ForAnyElementType FStack_3068;
  ulonglong local_3060;
  undefined4 local_3058;
  undefined1 local_3054;
  undefined1 local_3050;
  undefined1 local_3048 [8];
  ForAnyElementType FStack_3040;
  ulonglong local_3038;
  undefined4 local_3030;
  undefined1 local_302c;
  undefined1 local_3028;
  undefined1 local_3020 [8];
  ForAnyElementType FStack_3018;
  ulonglong local_3010;
  FText local_3008;
  undefined1 local_2ff8;
  undefined1 local_2ff0 [8];
  ForAnyElementType FStack_2fe8;
  ulonglong local_2fe0;
  FText local_2fd8;
  undefined1 local_2fc8;
  undefined1 local_2fc0 [8];
  ForAnyElementType FStack_2fb8;
  ulonglong local_2fb0;
  FArguments *local_2fa8;
  TReferenceControllerBase<1> *local_2fa0;
  SWidget *local_2f98;
  TReferenceControllerBase<1> *pTStack_2f90;
  SWidget *local_2f88;
  FSharedReferencer<1> local_2f80;
  SWidget *local_2f78;
  TReferenceControllerBase<1> *pTStack_2f70;
  TSharedPtr<SButton,1> local_2f68;
  SWidget *local_2f58;
  TReferenceControllerBase<1> *pTStack_2f50;
  TSharedPtr<SButton,1> local_2f48;
  TSharedPtr<SButton,1> local_2f38;
  SWidget *local_2f28;
  TReferenceControllerBase<1> *pTStack_2f20;
  TSharedRef<SWidget,1> local_2f18;
  FMargin local_2f08;
  undefined1 local_2ef8;
  undefined1 local_2ef0 [8];
  ForAnyElementType FStack_2ee8;
  int local_2ee0;
  undefined8 local_2ed8;
  undefined8 uStack_2ed0;
  undefined1 local_2ec8;
  undefined1 local_2ec0 [8];
  ForAnyElementType FStack_2eb8;
  ulonglong local_2eb0;
  undefined8 local_2ea8;
  undefined8 uStack_2ea0;
  undefined1 local_2e98;
  undefined1 local_2e90 [8];
  ForAnyElementType FStack_2e88;
  ulonglong local_2e80;
  undefined8 local_2e78;
  undefined8 uStack_2e70;
  undefined1 local_2e68;
  undefined1 local_2e60 [8];
  ForAnyElementType FStack_2e58;
  ulonglong local_2e50;
  undefined8 local_2e48;
  undefined8 uStack_2e40;
  undefined1 local_2e38;
  undefined1 local_2e30 [8];
  ForAnyElementType FStack_2e28;
  ulonglong local_2e20;
  uchar local_2e18;
  undefined1 local_2e17;
  undefined1 local_2e10 [8];
  void *pvStack_2e08;
  undefined8 local_2e00;
  TSharedRef<SWidget,1> local_2df8;
  FMemScope local_2de8;
  FName local_2de0;
  FMemScope local_2dd8;
  FMemScope local_2dd0;
  FName local_2dc8;
  FName local_2dc0;
  FName local_2db8;
  FMemScope local_2db0;
  TSharedRef<SWidget,1> local_2da8;
  TSharedRef<SWidget,1> local_2d98;
  TSharedRef<SWidget,1> local_2d88;
  FName local_2d78;
  FName local_2d70;
  FSlotArguments *local_2d68;
  FSlotArguments *local_2d60;
  FSlotArguments *local_2d58;
  FArguments *local_2d50;
  FMemScope local_2d48;
  FName local_2d40;
  FMemScope local_2d38;
  FName local_2d30;
  FName local_2d28;
  undefined4 local_2d20 [2];
  undefined4 local_2d18 [2];
  TSingleWidgetChildrenWithSlot<TSingleWidgetChildrenWithBasicLayoutSlot<1>_> *local_2d10;
  TAttribute<EVisibility> local_2d08;
  TSharedRef<SWidget,1> local_2ce8;
  FDestructionSentinel local_2cd8;
  FDestructionSentinel local_2cc0;
  FDestructionSentinel local_2ca8;
  FDestructionSentinel local_2c90;
  FDestructionSentinel local_2c78;
  FDestructionSentinel local_2c60;
  FDestructionSentinel local_2c48;
  FDestructionSentinel local_2c30;
  FDestructionSentinel local_2c18;
  FDestructionSentinel local_2c00;
  FDestructionSentinel local_2be8;
  FDestructionSentinel local_2bd0;
  FDestructionSentinel local_2bb8;
  FDestructionSentinel local_2ba0;
  TAttribute<FText> local_2b88;
  TSharedRef<SVerticalBox,1> local_2b58;
  TSharedRef<SHorizontalBox,1> local_2b48;
  TSharedRef<SOverlay,1> local_2b38;
  TSharedRef<SBox,1> local_2b28;
  TSharedRef<SHorizontalBox,1> local_2b18;
  TSharedRef<SButton,1> local_2b08;
  TSharedRef<SButton,1> local_2af8;
  TSlateDecl<SButton,RequiredArgs::T0RequiredArgs> local_2ae8;
  TSlateDecl<SImage,RequiredArgs::T0RequiredArgs> local_2ad0;
  TSlateDecl<SButton,RequiredArgs::T0RequiredArgs> local_2ab8;
  TSlateDecl<SImage,RequiredArgs::T0RequiredArgs> local_2aa0;
  TSlateDecl<SButton,RequiredArgs::T0RequiredArgs> local_2a88;
  TSlateDecl<SImage,RequiredArgs::T0RequiredArgs> local_2a70;
  TSharedRef<SButton,1> local_2a58;
  code *local_2a48;
  TReferenceControllerBase<1> *pTStack_2a40;
  code *local_2a38;
  TReferenceControllerBase<1> *pTStack_2a30;
  TSharedRef<SButton,1> local_2a28;
  FText local_2a18;
  TSharedRef<SImage,1> local_2a08;
  TSharedRef<SButton,1> local_29f8;
  code *local_29e8;
  TReferenceControllerBase<1> *pTStack_29e0;
  code *local_29d8;
  TReferenceControllerBase<1> *pTStack_29d0;
  FText local_29c8;
  TSharedRef<SImage,1> local_29b8;
  TSharedRef<SButton,1> local_29a8;
  code *local_2998;
  TReferenceControllerBase<1> *pTStack_2990;
  code *local_2988;
  TReferenceControllerBase<1> *pTStack_2980;
  FText local_2978;
  TSharedRef<SImage,1> local_2968;
  TSlateDecl<SOverlay,RequiredArgs::T0RequiredArgs> local_2958;
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs> local_2940;
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs> local_2928;
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs> local_2910;
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs> local_28f8;
  TAttribute<FMargin> local_28e0;
  FSlotArguments local_28b0;
  FSlotArguments local_27c8;
  FSlotArguments local_2768;
  FSlotArguments local_2708;
  FArguments local_2620;
  FArguments local_2418;
  FArguments local_2210;
  FArguments local_2008;
  FSlotArguments local_1e00;
  FSlotArguments local_1d18;
  FSlotArguments local_1c30;
  FArguments local_1b48;
  FArguments local_18a0;
  FArguments local_15f8;
  FArguments local_1350;
  FArguments local_1010;
  FArguments local_ad0;
  FArguments local_590;
  undefined8 uStack_48;
  
  uStack_48 = 0x1429d9933;
  local_res10 = param_1;
  pFVar18 = SButton::FArguments::FArguments(&local_1010);
  pFVar18->_IsFocusable = false;
  local_30c8 = this->bIsMinimizeButtonEnabled;
  local_30c7 = 1;
  local_30b0 = 0;
  local_30c0 = (undefined1  [8])0x0;
  FStack_30b8.Data = (FScriptContainerElement *)0x0;
  *(undefined1 *)&pFVar18->_padding_ = local_30c8;
  *(undefined1 *)((longlong)&pFVar18->_padding_ + 1) = 1;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pFVar18->_padding_,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_30c0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_30c0,
             (FWriteAccessScope *)&local_2cd8);
  if (((int)local_30b0 != 0) && (FStack_30b8.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_30b8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_30b8,0,0,0x10);
    local_30b0 = local_30b0 & 0xffffffff00000000;
  }
  if (local_2cd8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_2cd8.Accessor,&local_2cd8);
  }
  if (FStack_30b8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_30b8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_30c0);
  local_2e68 = 1;
  local_2e50 = 0;
  local_2e78 = 0;
  uStack_2e70 = 0;
  local_2e60 = (undefined1  [8])0x0;
  FStack_2e58.Data = (FScriptContainerElement *)0x0;
  (pFVar18->_ContentPadding).Value.Left = 0.0;
  (pFVar18->_ContentPadding).Value.Top = 0.0;
  (pFVar18->_ContentPadding).Value.Right = 0.0;
  (pFVar18->_ContentPadding).Value.Bottom = 0.0;
  (pFVar18->_ContentPadding).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar18->_ContentPadding).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_2e60);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_2e60,
             (FWriteAccessScope *)&local_2cc0);
  if (((int)local_2e50 != 0) && (FStack_2e58.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_2e58.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_2e58,0,0,0x10);
    local_2e50 = local_2e50 & 0xffffffff00000000;
  }
  if (local_2cc0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_2cc0.Accessor,&local_2cc0);
  }
  if (FStack_2e58.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_2e58.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_2e60);
  local_3138.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)
       ((ulonglong)local_3138.SharedReferenceCount.ReferenceController._4_4_ << 0x20);
  local_3138.Object = (SWidget *)MinimizeButton_OnClicked;
  local_2a38 = MinimizeButton_OnClicked;
  pTStack_2a30 = local_3138.SharedReferenceCount.ReferenceController;
  pFVar18 = SButton::FArguments::OnClicked<SWindowTitleBarArea>
                      (pFVar18,this,(pmf_0afdb26f *)&local_2a38);
  local_3030 = 1;
  local_302c = 1;
  local_3028 = 1;
  local_3010 = 0;
  local_3020 = (undefined1  [8])0x0;
  FStack_3018.Data = (FScriptContainerElement *)0x0;
  if ((longlong *)&local_3030 != &pFVar18->_padding_) {
    *(undefined4 *)&pFVar18->_padding_ = 1;
    *(undefined1 *)((longlong)&pFVar18->_padding_ + 4) = 1;
  }
  *(undefined1 *)&pFVar18->_padding_ = 1;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pFVar18->_padding_,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_3020);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_3020,
             (FWriteAccessScope *)&local_2ca8);
  if (((int)local_3010 != 0) && (FStack_3018.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_3018.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_3018,0,0,0x10);
    local_3010 = local_3010 & 0xffffffff00000000;
  }
  if (local_2ca8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_2ca8.Accessor,&local_2ca8);
  }
  if (FStack_3018.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_3018.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_3020);
  ::FName::FName(&local_2d28,"NoBorder");
  pIVar19 = FAppStyle::Get();
  pFVar20 = (FButtonStyle *)
            (**(code **)((longlong)*pIVar19 + 0xa0))(pIVar19,FButtonStyle::TypeName,local_2d28,0,1);
  if (pFVar20 == (FButtonStyle *)0x0) {
    pFVar20 = FButtonStyle::GetDefault();
  }
  pFVar18->_ButtonStyle = pFVar20;
  pFVar21 = SImage::FArguments::FArguments(&local_1b48);
  local_3138.SharedReferenceCount.ReferenceController =
       local_3138.SharedReferenceCount.ReferenceController & 0xffffffff00000000;
  local_3138.Object = (SWidget *)GetMinimizeImage;
  local_2a48 = GetMinimizeImage;
  pTStack_2a40 = local_3138.SharedReferenceCount.ReferenceController;
  pFVar21 = SImage::FArguments::Image<SWindowTitleBarArea>(pFVar21,this,(pmf_3db1285e *)&local_2a48)
  ;
  pFVar22 = FText::AsLocalizable_Advanced_LocText
                      (&local_2978,L"WindowTitleBar",L"Minimize",L"Minimize");
  FText::FText(&local_3008,pFVar22);
  local_2ff8 = 1;
  local_2fe0 = 0;
  local_2ff0 = (undefined1  [8])0x0;
  FStack_2fe8.Data = (FScriptContainerElement *)0x0;
  FText::operator=((FText *)&pFVar21->_padding_,&local_3008);
  *(undefined1 *)&pFVar21->_padding_ = local_2ff8;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pFVar21->_padding_,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_2ff0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_2ff0,
             (FWriteAccessScope *)&local_2c90);
  if (((int)local_2fe0 != 0) && (FStack_2fe8.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_2fe8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_2fe8,0,0,0x10);
    local_2fe0 = local_2fe0 & 0xffffffff00000000;
  }
  if (local_2c90.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_2c90.Accessor,&local_2c90);
  }
  if (FStack_2fe8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_2fe8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_2ff0);
  if (local_3008.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_3008.TextData.Reference + 0x10))();
  }
  FLLMScope::FLLMScope(&local_3120,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_2d30 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_2d38,&local_2d30,true);
  TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>::TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>
            (&local_2ad0,"SImage",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Layout\\SWindowTitleBarArea.cpp"
             ,0x52,(T0RequiredArgs *)&local_res8);
  FMemScope::~FMemScope(&local_2d38);
  FLLMScope::~FLLMScope(&local_3120);
  pTVar23 = TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_2ad0,&local_2968,pFVar21);
  pTVar4 = (pTVar23->SharedReferenceCount).ReferenceController;
  pSVar5 = pTVar23->Object;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_2f28 = (pFVar18->_Content).Widget.Object;
  pTStack_2f20 = (pFVar18->_Content).Widget.SharedReferenceCount.ReferenceController;
  (pFVar18->_Content).Widget.Object = (SWidget *)pSVar5;
  (pFVar18->_Content).Widget.SharedReferenceCount.ReferenceController = pTVar4;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_2f20);
  FLLMScope::FLLMScope(&local_311c,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_2d40 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_2d48,&local_2d40,true);
  TSlateDecl<SButton,RequiredArgs::T0RequiredArgs>::TSlateDecl<SButton,RequiredArgs::T0RequiredArgs>
            (&local_2ae8,"SButton",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Layout\\SWindowTitleBarArea.cpp"
             ,0x4a,local_res18);
  FMemScope::~FMemScope(&local_2d48);
  FLLMScope::~FLLMScope(&local_311c);
  pTVar24 = TSlateDecl<SButton,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_2ae8,&local_2a58,pFVar18);
  local_2f38.SharedReferenceCount.ReferenceController =
       (pTVar24->SharedReferenceCount).ReferenceController;
  local_2f38.Object = pTVar24->Object;
  if (local_2f38.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_2f38.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_2f38.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  this_00 = &this->MinimizeButton;
  if (this_00 != &local_2f38) {
    this_00->Object = local_2f38.Object;
    local_2f38.Object = (SButton *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->MinimizeButton).SharedReferenceCount,&local_2f38.SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2f38.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2a58.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2ae8._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2968.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2ad0._Widget.SharedReferenceCount.ReferenceController);
  if (local_2978.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_2978.TextData.Reference + 0x10))();
  }
  SImage::FArguments::~FArguments(&local_1b48);
  SButton::FArguments::~FArguments(&local_1010);
  pFVar18 = SButton::FArguments::FArguments(&local_ad0);
  pFVar18->_IsFocusable = false;
  local_3108 = this->bIsMaximizeRestoreButtonEnabled;
  local_3107 = 1;
  local_30f0 = 0;
  local_3100 = (undefined1  [8])0x0;
  FStack_30f8.Data = (FScriptContainerElement *)0x0;
  *(undefined1 *)&pFVar18->_padding_ = local_3108;
  *(undefined1 *)((longlong)&pFVar18->_padding_ + 1) = 1;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pFVar18->_padding_,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_3100);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_3100,
             (FWriteAccessScope *)&local_2c78);
  if (((int)local_30f0 != 0) && (FStack_30f8.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_30f8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_30f8,0,0,0x10);
    local_30f0 = local_30f0 & 0xffffffff00000000;
  }
  if (local_2c78.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_2c78.Accessor,&local_2c78);
  }
  if (FStack_30f8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_30f8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_3100);
  local_2e98 = 1;
  local_2e80 = 0;
  local_2ea8 = 0;
  uStack_2ea0 = 0;
  local_2e90 = (undefined1  [8])0x0;
  FStack_2e88.Data = (FScriptContainerElement *)0x0;
  (pFVar18->_ContentPadding).Value.Left = 0.0;
  (pFVar18->_ContentPadding).Value.Top = 0.0;
  (pFVar18->_ContentPadding).Value.Right = 0.0;
  (pFVar18->_ContentPadding).Value.Bottom = 0.0;
  (pFVar18->_ContentPadding).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar18->_ContentPadding).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_2e90);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_2e90,
             (FWriteAccessScope *)&local_2c60);
  if (((int)local_2e80 != 0) && (FStack_2e88.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_2e88.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_2e88,0,0,0x10);
    local_2e80 = local_2e80 & 0xffffffff00000000;
  }
  if (local_2c60.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_2c60.Accessor,&local_2c60);
  }
  if (FStack_2e88.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_2e88.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_2e90);
  local_3138.SharedReferenceCount.ReferenceController =
       local_3138.SharedReferenceCount.ReferenceController & 0xffffffff00000000;
  local_3138.Object = (SWidget *)MaximizeRestoreButton_OnClicked;
  local_2988 = MaximizeRestoreButton_OnClicked;
  pTStack_2980 = local_3138.SharedReferenceCount.ReferenceController;
  pFVar18 = SButton::FArguments::OnClicked<SWindowTitleBarArea>
                      (pFVar18,this,(pmf_0afdb26f *)&local_2988);
  local_3058 = 1;
  local_3054 = 1;
  local_3050 = 1;
  local_3038 = 0;
  local_3048 = (undefined1  [8])0x0;
  FStack_3040.Data = (FScriptContainerElement *)0x0;
  if ((longlong *)&local_3058 != &pFVar18->_padding_) {
    *(undefined4 *)&pFVar18->_padding_ = 1;
    *(undefined1 *)((longlong)&pFVar18->_padding_ + 4) = 1;
  }
  *(undefined1 *)&pFVar18->_padding_ = 1;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pFVar18->_padding_,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_3048);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_3048,
             (FWriteAccessScope *)&local_2c48);
  if (((int)local_3038 != 0) && (FStack_3040.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_3040.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_3040,0,0,0x10);
    local_3038 = local_3038 & 0xffffffff00000000;
  }
  if (local_2c48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_2c48.Accessor,&local_2c48);
  }
  if (FStack_3040.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_3040.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_3048);
  ::FName::FName(&local_2d70,"NoBorder");
  pIVar19 = FAppStyle::Get();
  pFVar20 = (FButtonStyle *)
            (**(code **)((longlong)*pIVar19 + 0xa0))(pIVar19,FButtonStyle::TypeName,local_2d70,0,1);
  if (pFVar20 == (FButtonStyle *)0x0) {
    pFVar20 = FButtonStyle::GetDefault();
  }
  pFVar18->_ButtonStyle = pFVar20;
  pFVar21 = SImage::FArguments::FArguments(&local_18a0);
  local_3138.SharedReferenceCount.ReferenceController =
       local_3138.SharedReferenceCount.ReferenceController & 0xffffffff00000000;
  local_3138.Object = (SWidget *)GetMaximizeRestoreImage;
  local_2998 = GetMaximizeRestoreImage;
  pTStack_2990 = local_3138.SharedReferenceCount.ReferenceController;
  pFVar21 = SImage::FArguments::Image<SWindowTitleBarArea>(pFVar21,this,(pmf_3db1285e *)&local_2998)
  ;
  pFVar22 = FText::AsLocalizable_Advanced_LocText
                      (&local_29c8,L"WindowTitleBar",L"Maximize",L"Maximize");
  FText::FText(&local_2fd8,pFVar22);
  local_2fc8 = 1;
  local_2fb0 = 0;
  local_2fc0 = (undefined1  [8])0x0;
  FStack_2fb8.Data = (FScriptContainerElement *)0x0;
  FText::operator=((FText *)&pFVar21->_padding_,&local_2fd8);
  *(undefined1 *)&pFVar21->_padding_ = local_2fc8;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pFVar21->_padding_,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_2fc0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_2fc0,
             (FWriteAccessScope *)&local_2c30);
  if (((int)local_2fb0 != 0) && (FStack_2fb8.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_2fb8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_2fb8,0,0,0x10);
    local_2fb0 = local_2fb0 & 0xffffffff00000000;
  }
  if (local_2c30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_2c30.Accessor,&local_2c30);
  }
  if (FStack_2fb8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_2fb8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_2fc0);
  if (local_2fd8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_2fd8.TextData.Reference + 0x10))();
  }
  FLLMScope::FLLMScope(&local_3118,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_2d78 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_2db0,&local_2d78,true);
  TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>::TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>
            (&local_2aa0,"SImage",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Layout\\SWindowTitleBarArea.cpp"
             ,0x5f,local_res20);
  FMemScope::~FMemScope(&local_2db0);
  FLLMScope::~FLLMScope(&local_3118);
  pTVar23 = TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_2aa0,&local_29b8,pFVar21);
  pTVar4 = (pTVar23->SharedReferenceCount).ReferenceController;
  pSVar5 = pTVar23->Object;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_2f78 = (pFVar18->_Content).Widget.Object;
  pTStack_2f70 = (pFVar18->_Content).Widget.SharedReferenceCount.ReferenceController;
  (pFVar18->_Content).Widget.Object = (SWidget *)pSVar5;
  (pFVar18->_Content).Widget.SharedReferenceCount.ReferenceController = pTVar4;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_2f70);
  FLLMScope::FLLMScope(&local_3114,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_2db8 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_2dd8,&local_2db8,true);
  TSlateDecl<SButton,RequiredArgs::T0RequiredArgs>::TSlateDecl<SButton,RequiredArgs::T0RequiredArgs>
            (&local_2ab8,"SButton",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Layout\\SWindowTitleBarArea.cpp"
             ,0x57,&local_3128);
  FMemScope::~FMemScope(&local_2dd8);
  FLLMScope::~FLLMScope(&local_3114);
  pTVar24 = TSlateDecl<SButton,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_2ab8,&local_29a8,pFVar18);
  local_2f48.SharedReferenceCount.ReferenceController =
       (pTVar24->SharedReferenceCount).ReferenceController;
  local_2f48.Object = pTVar24->Object;
  if (local_2f48.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_2f48.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_2f48.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  this_01 = &this->MaximizeRestoreButton;
  if (this_01 != &local_2f48) {
    this_01->Object = local_2f48.Object;
    local_2f48.Object = (SButton *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->MaximizeRestoreButton).SharedReferenceCount,&local_2f48.SharedReferenceCount)
    ;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2f48.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_29a8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2ab8._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_29b8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2aa0._Widget.SharedReferenceCount.ReferenceController);
  if (local_29c8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_29c8.TextData.Reference + 0x10))();
  }
  SImage::FArguments::~FArguments(&local_18a0);
  SButton::FArguments::~FArguments(&local_ad0);
  pFVar18 = SButton::FArguments::FArguments(&local_590);
  pFVar18->_IsFocusable = false;
  local_30e8 = this->bIsCloseButtonEnabled;
  local_30e7 = 1;
  local_30d0 = 0;
  local_30e0 = (undefined1  [8])0x0;
  FStack_30d8.Data = (FScriptContainerElement *)0x0;
  *(undefined1 *)&pFVar18->_padding_ = local_30e8;
  *(undefined1 *)((longlong)&pFVar18->_padding_ + 1) = 1;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pFVar18->_padding_,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_30e0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_30e0,
             (FWriteAccessScope *)&local_2c18);
  if (((int)local_30d0 != 0) && (FStack_30d8.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_30d8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_30d8,0,0,0x10);
    local_30d0 = local_30d0 & 0xffffffff00000000;
  }
  if (local_2c18.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_2c18.Accessor,&local_2c18);
  }
  if (FStack_30d8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_30d8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_30e0);
  local_2ec8 = 1;
  local_2eb0 = 0;
  local_2ed8 = 0;
  uStack_2ed0 = 0;
  local_2ec0 = (undefined1  [8])0x0;
  FStack_2eb8.Data = (FScriptContainerElement *)0x0;
  (pFVar18->_ContentPadding).Value.Left = 0.0;
  (pFVar18->_ContentPadding).Value.Top = 0.0;
  (pFVar18->_ContentPadding).Value.Right = 0.0;
  (pFVar18->_ContentPadding).Value.Bottom = 0.0;
  (pFVar18->_ContentPadding).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar18->_ContentPadding).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_2ec0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_2ec0,
             (FWriteAccessScope *)&local_2ba0);
  if (((int)local_2eb0 != 0) && (FStack_2eb8.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_2eb8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_2eb8,0,0,0x10);
    local_2eb0 = local_2eb0 & 0xffffffff00000000;
  }
  if (local_2ba0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_2ba0.Accessor,&local_2ba0);
  }
  if (FStack_2eb8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_2eb8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_2ec0);
  local_3138.SharedReferenceCount.ReferenceController =
       local_3138.SharedReferenceCount.ReferenceController & 0xffffffff00000000;
  local_3138.Object = (SWidget *)CloseButton_OnClicked;
  local_29d8 = CloseButton_OnClicked;
  pTStack_29d0 = local_3138.SharedReferenceCount.ReferenceController;
  pFVar18 = SButton::FArguments::OnClicked<SWindowTitleBarArea>
                      (pFVar18,this,(pmf_0afdb26f *)&local_29d8);
  local_3080 = 1;
  local_307c = 1;
  local_3078 = 1;
  local_3060 = 0;
  local_3070 = (undefined1  [8])0x0;
  FStack_3068.Data = (FScriptContainerElement *)0x0;
  if ((longlong *)&local_3080 != &pFVar18->_padding_) {
    *(undefined4 *)&pFVar18->_padding_ = 1;
    *(undefined1 *)((longlong)&pFVar18->_padding_ + 4) = 1;
  }
  *(undefined1 *)&pFVar18->_padding_ = 1;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pFVar18->_padding_,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_3070);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_3070,
             (FWriteAccessScope *)&local_2c00);
  if (((int)local_3060 != 0) && (FStack_3068.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_3068.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_3068,0,0,0x10);
    local_3060 = local_3060 & 0xffffffff00000000;
  }
  if (local_2c00.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_2c00.Accessor,&local_2c00);
  }
  if (FStack_3068.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_3068.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_3070);
  ::FName::FName(&local_2dc0,"NoBorder");
  pIVar19 = FAppStyle::Get();
  pFVar18 = SButton::FArguments::ButtonStyle(pFVar18,pIVar19,&local_2dc0,(char *)0x0);
  pFVar21 = SImage::FArguments::FArguments(&local_15f8);
  local_3138.SharedReferenceCount.ReferenceController =
       local_3138.SharedReferenceCount.ReferenceController & 0xffffffff00000000;
  local_3138.Object = (SWidget *)GetCloseImage;
  local_29e8 = GetCloseImage;
  pTStack_29e0 = local_3138.SharedReferenceCount.ReferenceController;
  pFVar21 = SImage::FArguments::Image<SWindowTitleBarArea>(pFVar21,this,(pmf_3db1285e *)&local_29e8)
  ;
  pFVar22 = FText::AsLocalizable_Advanced_LocText(&local_2a18,L"WindowTitleBar",L"Close",L"Close");
  FText::FText(&local_2b88.Value,pFVar22);
  local_2b88.bIsSet = true;
  local_2b88.Getter._16_8_ = 0;
  local_2b88.Getter._0_8_ = 0;
  local_2b88.Getter._8_8_ = 0;
  pFVar21 = TSlateBaseNamedArgs<SImage>::AccessibleText
                      ((TSlateBaseNamedArgs<SImage> *)pFVar21,&local_2b88);
  FLLMScope::FLLMScope(&local_3110,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_2dc8 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_2dd0,&local_2dc8,true);
  TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>::TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>
            (&local_2a70,"SImage",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Layout\\SWindowTitleBarArea.cpp"
             ,0x6c,&local_3127);
  FMemScope::~FMemScope(&local_2dd0);
  FLLMScope::~FLLMScope(&local_3110);
  pTVar23 = TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_2a70,&local_2a08,pFVar21);
  pTVar4 = (pTVar23->SharedReferenceCount).ReferenceController;
  pSVar5 = pTVar23->Object;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_2f58 = (pFVar18->_Content).Widget.Object;
  pTStack_2f50 = (pFVar18->_Content).Widget.SharedReferenceCount.ReferenceController;
  (pFVar18->_Content).Widget.Object = (SWidget *)pSVar5;
  (pFVar18->_Content).Widget.SharedReferenceCount.ReferenceController = pTVar4;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_2f50);
  FLLMScope::FLLMScope(&local_310c,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_2de0 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_2de8,&local_2de0,true);
  TSlateDecl<SButton,RequiredArgs::T0RequiredArgs>::TSlateDecl<SButton,RequiredArgs::T0RequiredArgs>
            (&local_2a88,"SButton",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Layout\\SWindowTitleBarArea.cpp"
             ,100,&local_3126);
  FMemScope::~FMemScope(&local_2de8);
  FLLMScope::~FLLMScope(&local_310c);
  pTVar24 = TSlateDecl<SButton,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_2a88,&local_29f8,pFVar18);
  local_2f68.SharedReferenceCount.ReferenceController =
       (pTVar24->SharedReferenceCount).ReferenceController;
  local_2f68.Object = pTVar24->Object;
  if (local_2f68.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_2f68.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_2f68.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  this_02 = &this->CloseButton;
  if (this_02 != &local_2f68) {
    this_02->Object = local_2f68.Object;
    local_2f68.Object = (SButton *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->CloseButton).SharedReferenceCount,&local_2f68.SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2f68.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_29f8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2a88._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2a08.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2a70._Widget.SharedReferenceCount.ReferenceController);
  if (local_2a18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_2a18.TextData.Reference + 0x10))();
  }
  SImage::FArguments::~FArguments(&local_15f8);
  SButton::FArguments::~FArguments(&local_590);
  pFVar14 = local_res10;
  local_2d10 = (TSingleWidgetChildrenWithSlot<TSingleWidgetChildrenWithBasicLayoutSlot<1>_> *)
               &this->ChildSlot;
  puVar1 = &(this->ChildSlot).field_0x50;
  *(EHorizontalAlignment *)puVar1 = local_res10->_HAlign;
  if (puVar1 == (undefined1 *)0x0) {
    local_2d10 = (TSingleWidgetChildrenWithSlot<TSingleWidgetChildrenWithBasicLayoutSlot<1>_> *)0x0;
  }
  local_2ee0 = 0;
  *(EVerticalAlignment *)&local_2d10[1].field_0x14 = local_res10->_VAlign;
  local_2f08.Left = (local_res10->_Padding).Value.Left;
  local_2f08.Top = (local_res10->_Padding).Value.Top;
  local_2f08.Right = (local_res10->_Padding).Value.Right;
  local_2f08.Bottom = (local_res10->_Padding).Value.Bottom;
  local_2ef8 = (local_res10->_Padding).bIsSet;
  local_2ef0 = (undefined1  [8])0x0;
  FStack_2ee8.Data = (FScriptContainerElement *)0x0;
  TDelegate<FMargin___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<FMargin___cdecl(void),FDefaultDelegateUserPolicy> *)local_2ef0,
             &(local_res10->_Padding).Getter);
  local_28e0.bIsSet = (bool)local_2ef8;
  local_28e0.Value.Left = local_2f08.Left;
  local_28e0.Value.Top = local_2f08.Top;
  local_28e0.Value.Right = local_2f08.Right;
  local_28e0.Value.Bottom = local_2f08.Bottom;
  TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_28e0.Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_2ef0);
  TPaddingSingleWidgetSlotMixin<TSingleWidgetChildrenWithBasicLayoutSlot<1>,1>::SetPadding
            ((TPaddingSingleWidgetSlotMixin<TSingleWidgetChildrenWithBasicLayoutSlot<1>,1> *)
             (local_2d10 + 1),&local_28e0);
  if (local_2d10 + 1 ==
      (TSingleWidgetChildrenWithSlot<TSingleWidgetChildrenWithBasicLayoutSlot<1>_> *)0x0) {
    local_2d10 = (TSingleWidgetChildrenWithSlot<TSingleWidgetChildrenWithBasicLayoutSlot<1>_> *)0x0;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_2ef0,
             (FWriteAccessScope *)&local_2be8);
  if ((local_2ee0 != 0) && (FStack_2ee8.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_2ee8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_2ee8,0,0,0x10);
    local_2ee0 = 0;
  }
  if (local_2be8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_2be8.Accessor,&local_2be8);
  }
  if (FStack_2ee8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_2ee8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_2ef0);
  pFVar25 = SOverlay::FArguments::FArguments(&local_2008);
  pFVar26 = SOverlay::Slot(&local_2768,0);
  local_2f80.ReferenceController =
       (pFVar14->_Content).Widget.SharedReferenceCount.ReferenceController;
  local_2f88 = (pFVar14->_Content).Widget.Object;
  if (local_2f80.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_2f80.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_2f80.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((SWidget **)&pFVar26->_padding_ != &local_2f88) {
    pFVar26->_padding_ = (longlong)local_2f88;
    local_2f88 = (SWidget *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&pFVar26->_padding_,&local_2f80);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2f80.ReferenceController);
  local_2d50 = SOverlay::FArguments::operator+(pFVar25,pFVar26);
  pFVar26 = SOverlay::Slot(&local_27c8,0);
  if ((longlong *)local_2d18 != &pFVar26->_padding_) {
    *(undefined4 *)&pFVar26->_padding_ = 1;
    *(undefined1 *)((longlong)&pFVar26->_padding_ + 4) = 1;
  }
  pFVar27 = (FSlotArguments *)0x0;
  pFVar37 = pFVar27;
  if (pFVar26 != (FSlotArguments *)0xffffffffffffffb8) {
    pFVar37 = pFVar26;
  }
  plVar2 = &pFVar37->_padding_;
  if ((longlong *)local_2d20 != plVar2) {
    *(undefined4 *)plVar2 = 3;
    *(undefined1 *)((longlong)&pFVar37->_padding_ + 4) = 1;
  }
  local_2d58 = pFVar27;
  if (plVar2 != (longlong *)0x0) {
    local_2d58 = pFVar37;
  }
  local_2fa8 = SVerticalBox::FArguments::FArguments(&local_2210);
  this_03 = ::operator_new(0x58);
  local_2d60 = pFVar27;
  if (this_03 != (FSlot *)0x0) {
    *(undefined8 *)this_03 = 0;
    *(undefined8 *)&this_03->field_0x8 = 0;
    *(undefined8 *)&this_03->field_0x10 = 0;
    *(undefined8 *)&this_03->field_0x18 = 0;
    *(undefined8 *)&this_03->field_0x20 = 0;
    *(undefined8 *)&this_03->field_0x28 = 0;
    *(undefined8 *)&this_03->field_0x30 = 0;
    *(undefined8 *)&this_03->field_0x38 = 0;
    *(undefined8 *)&this_03->field_0x40 = 0;
    *(undefined8 *)&this_03->field_0x48 = 0;
    *(undefined8 *)&this_03->field_0x50 = 0;
    local_2d60 = (FSlotArguments *)SVerticalBox::FSlot::FSlot(this_03);
  }
  SVerticalBox::FSlot::FSlotArguments::FSlotArguments(&local_2708,(FSlot *)&local_2d60);
  local_3088 = SVerticalBox::FSlot::FSlotArguments::AutoHeight(&local_2708);
  local_2f18.Object = (SWidget *)SHorizontalBox::FArguments::FArguments(&local_2418);
  this_04 = ::operator_new(0x58);
  if (this_04 != (FSlot *)0x0) {
    *(undefined8 *)this_04 = 0;
    *(undefined8 *)&this_04->field_0x8 = 0;
    *(undefined8 *)&this_04->field_0x10 = 0;
    *(undefined8 *)&this_04->field_0x18 = 0;
    *(undefined8 *)&this_04->field_0x20 = 0;
    *(undefined8 *)&this_04->field_0x28 = 0;
    *(undefined8 *)&this_04->field_0x30 = 0;
    *(undefined8 *)&this_04->field_0x38 = 0;
    *(undefined8 *)&this_04->field_0x40 = 0;
    *(undefined8 *)&this_04->field_0x48 = 0;
    *(undefined8 *)&this_04->field_0x50 = 0;
    pFVar27 = (FSlotArguments *)SHorizontalBox::FSlot::FSlot(this_04);
  }
  local_2d68 = pFVar27;
  SHorizontalBox::FSlot::FSlotArguments::FSlotArguments(&local_28b0,(FSlot *)&local_2d68);
  local_28b0._80_4_ = 1;
  local_28b0._84_1_ = 1;
  local_28b0._72_4_ = 3;
  local_28b0._76_1_ = 1;
  local_2df8.Object = (SWidget *)SHorizontalBox::FSlot::FSlotArguments::AutoWidth(&local_28b0);
  pFVar28 = SBox::FArguments::FArguments(&local_1350);
  local_30a8 = (uchar)EVisibility::SelfHitTestInvisible.Value.Value;
  local_30a7 = 1;
  local_3090 = 0;
  local_30a0 = (undefined1  [8])0x0;
  FStack_3098.Data = (FScriptContainerElement *)0x0;
  *(TEnumAsByte<EVisibility::Private> *)&pFVar28->_padding_ =
       EVisibility::SelfHitTestInvisible.Value.Value;
  *(undefined1 *)((longlong)&pFVar28->_padding_ + 1) = 1;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pFVar28->_padding_,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_30a0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_30a0,
             (FWriteAccessScope *)&local_2bd0);
  if (((int)local_3090 != 0) && (FStack_3098.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_3098.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_3098,0,0,0x10);
    local_3090 = local_3090 & 0xffffffff00000000;
  }
  if (local_2bd0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_2bd0.Accessor,&local_2bd0);
  }
  if (FStack_3098.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_3098.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_30a0);
  local_2e38 = 1;
  local_2e20 = 0;
  local_2e48 = 0;
  uStack_2e40 = 0;
  local_2e30 = (undefined1  [8])0x0;
  FStack_2e28.Data = (FScriptContainerElement *)0x0;
  (pFVar28->_Padding).Value.Left = 0.0;
  (pFVar28->_Padding).Value.Top = 0.0;
  (pFVar28->_Padding).Value.Right = 0.0;
  (pFVar28->_Padding).Value.Bottom = 0.0;
  (pFVar28->_Padding).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar28->_Padding).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_2e30);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_2e30,
             (FWriteAccessScope *)&local_2bb8);
  if (((int)local_2e20 != 0) && (FStack_2e28.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_2e28.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_2e28,0,0,0x10);
    local_2e20 = local_2e20 & 0xffffffff00000000;
  }
  if (local_2bb8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_2bb8.Accessor,&local_2bb8);
  }
  if (FStack_2e28.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_2e28.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_2e30);
  pFVar29 = SHorizontalBox::FArguments::FArguments(&local_2620);
  local_2e18 = (uchar)EVisibility::SelfHitTestInvisible.Value.Value;
  local_2e17 = 1;
  local_2e00 = 0;
  local_2e10 = (undefined1  [8])0x0;
  pvStack_2e08 = (void *)0x0;
  *(TEnumAsByte<EVisibility::Private> *)&pFVar29->_padding_ =
       EVisibility::SelfHitTestInvisible.Value.Value;
  *(undefined1 *)((longlong)&pFVar29->_padding_ + 1) = 1;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pFVar29->_padding_,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_2e10);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_2e10);
  if (pvStack_2e08 != (void *)0x0) {
    FMemory::Free(pvStack_2e08);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_2e10);
  pFVar30 = SHorizontalBox::Slot(&local_1c30);
  pFVar30 = SHorizontalBox::FSlot::FSlotArguments::AutoWidth(pFVar30);
  pTVar24 = TSharedPtr<SButton,1>::ToSharedRef(this_00,&local_2a28);
  pTVar4 = (pTVar24->SharedReferenceCount).ReferenceController;
  local_2d98.Object = (SWidget *)pTVar24->Object;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_2d98.SharedReferenceCount.ReferenceController = pTVar4;
  pFVar30 = TSlotBase<SHorizontalBox::FSlot>::FSlotArguments::operator[]
                      ((FSlotArguments *)pFVar30,&local_2d98);
  pFVar29 = SHorizontalBox::FArguments::operator+(pFVar29,pFVar30);
  pFVar30 = SHorizontalBox::Slot(&local_1d18);
  pFVar30 = SHorizontalBox::FSlot::FSlotArguments::AutoWidth(pFVar30);
  pTVar24 = TSharedPtr<SButton,1>::ToSharedRef(this_01,&local_2af8);
  local_2d88.Object = (SWidget *)pTVar24->Object;
  local_2fa0 = (pTVar24->SharedReferenceCount).ReferenceController;
  if (local_2fa0 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_2fa0->SharedReferenceCount = (atomic<int>)((int)local_2fa0->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_2d88.SharedReferenceCount.ReferenceController = local_2fa0;
  pFVar30 = TSlotBase<SHorizontalBox::FSlot>::FSlotArguments::operator[]
                      ((FSlotArguments *)pFVar30,&local_2d88);
  pFVar29 = SHorizontalBox::FArguments::operator+(pFVar29,pFVar30);
  pFVar30 = SHorizontalBox::Slot(&local_1e00);
  pFVar30 = SHorizontalBox::FSlot::FSlotArguments::AutoWidth(pFVar30);
  pTVar24 = TSharedPtr<SButton,1>::ToSharedRef(this_02,&local_2b08);
  pTVar6 = (pTVar24->SharedReferenceCount).ReferenceController;
  local_3138.Object = (SWidget *)pTVar24->Object;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_3138.SharedReferenceCount.ReferenceController = pTVar6;
  pFVar30 = TSlotBase<SHorizontalBox::FSlot>::FSlotArguments::operator[]
                      ((FSlotArguments *)pFVar30,&local_3138);
  pFVar29 = SHorizontalBox::FArguments::operator+(pFVar29,pFVar30);
  pTVar31 = MakeTDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>
                      (&local_28f8,"SHorizontalBox",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Layout\\SWindowTitleBarArea.cpp"
                       ,0x8f,&local_3125);
  pTVar32 = TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (pTVar31,&local_2b18,pFVar29);
  pTVar7 = (pTVar32->SharedReferenceCount).ReferenceController;
  pSVar8 = pTVar32->Object;
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_2f98 = (pFVar28->_Content).Widget.Object;
  pTStack_2f90 = (pFVar28->_Content).Widget.SharedReferenceCount.ReferenceController;
  (pFVar28->_Content).Widget.Object = (SWidget *)pSVar8;
  (pFVar28->_Content).Widget.SharedReferenceCount.ReferenceController = pTVar7;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_2f90);
  this_05 = MakeTDecl<SBox,RequiredArgs::T0RequiredArgs>
                      (&local_2910,"SBox",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Layout\\SWindowTitleBarArea.cpp"
                       ,0x8a,&local_3124);
  pTVar33 = TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>::operator<<=(this_05,&local_2b28,pFVar28);
  pTVar9 = (pTVar33->SharedReferenceCount).ReferenceController;
  local_2da8.Object = (SWidget *)pTVar33->Object;
  if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_2da8.SharedReferenceCount.ReferenceController = pTVar9;
  pFVar30 = TSlotBase<SHorizontalBox::FSlot>::FSlotArguments::operator[]
                      ((FSlotArguments *)local_2df8.Object,&local_2da8);
  pFVar29 = SHorizontalBox::FArguments::operator+((FArguments *)local_2f18.Object,pFVar30);
  pTVar31 = MakeTDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>
                      (&local_2928,"SHorizontalBox",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Layout\\SWindowTitleBarArea.cpp"
                       ,0x84,&local_3123);
  pTVar32 = TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (pTVar31,&local_2b48,pFVar29);
  pTVar10 = (pTVar32->SharedReferenceCount).ReferenceController;
  local_2f18.Object = (SWidget *)pTVar32->Object;
  if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_2f18.SharedReferenceCount.ReferenceController = pTVar10;
  local_3088 = TSlotBase<SVerticalBox::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_3088,&local_2f18);
  pFVar15 = local_2fa8;
  pTVar38 = &local_2fa8->_Slots;
  pFVar11 = (FSlotArguments *)(pTVar38->AllocatorInstance).Data;
  if (((pFVar11 <= local_3088) && (local_3088 < pFVar11 + (local_2fa8->_Slots).ArrayMax)) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar16)) {
    pcVar13 = (code *)swi(3);
    (*pcVar13)();
    return;
  }
  iVar17 = (pFVar15->_Slots).ArrayNum;
  piVar3 = &(pFVar15->_Slots).ArrayMax;
  if (iVar17 == *piVar3) {
    iVar17 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x8e8,&pTVar38->AllocatorInstance,piVar3);
  }
  (pFVar15->_Slots).ArrayNum = iVar17 + 1;
  SVerticalBox::FSlot::FSlotArguments::FSlotArguments
            ((FSlotArguments *)((pTVar38->AllocatorInstance).Data + (longlong)iVar17 * 0xe8),
             local_3088);
  pTVar34 = MakeTDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>
                      (&local_2940,"SVerticalBox",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Layout\\SWindowTitleBarArea.cpp"
                       ,0x80,&local_3122);
  pTVar34 = TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>::Expose<SVerticalBox>
                      (pTVar34,&this->WindowButtonsBox);
  pTVar35 = TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (pTVar34,&local_2b58,local_2fa8);
  local_2df8.Object = (SWidget *)pTVar35->Object;
  local_res8 = (pTVar35->SharedReferenceCount).ReferenceController;
  if (local_res8 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_res8->SharedReferenceCount = (atomic<int>)((int)local_res8->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_2df8.SharedReferenceCount.ReferenceController = local_res8;
  pFVar26 = TSlotBase<SOverlay::FOverlaySlot>::FSlotArguments::operator[]
                      ((FSlotArguments *)local_2d58,&local_2df8);
  pFVar25 = SOverlay::FArguments::operator+(local_2d50,pFVar26);
  this_06 = MakeTDecl<SOverlay,RequiredArgs::T0RequiredArgs>
                      (&local_2958,"SOverlay",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Layout\\SWindowTitleBarArea.cpp"
                       ,0x76,&local_3121);
  pTVar36 = TSlateDecl<SOverlay,RequiredArgs::T0RequiredArgs>::operator<<=
                      (this_06,&local_2b38,pFVar25);
  pTVar12 = (pTVar36->SharedReferenceCount).ReferenceController;
  local_2ce8.Object = (SWidget *)pTVar36->Object;
  if (pTVar12 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar12->SharedReferenceCount = (atomic<int>)((int)pTVar12->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_2ce8.SharedReferenceCount.ReferenceController = pTVar12;
  TSingleWidgetChildrenWithSlot<TSingleWidgetChildrenWithBasicLayoutSlot<1>_>::operator[]
            (local_2d10,&local_2ce8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar12);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2b38.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2958._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_res8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2b58.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2940._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2b48.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2928._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2b28.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2910._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2b18.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28f8._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2b08.SharedReferenceCount.ReferenceController);
  SHorizontalBox::FSlot::FSlotArguments::~FSlotArguments(&local_1e00);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_2fa0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2af8.SharedReferenceCount.ReferenceController);
  SHorizontalBox::FSlot::FSlotArguments::~FSlotArguments(&local_1d18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2a28.SharedReferenceCount.ReferenceController);
  SHorizontalBox::FSlot::FSlotArguments::~FSlotArguments(&local_1c30);
  DestructItems<SHorizontalBox::FSlot::FSlotArguments,int>
            ((FSlotArguments *)local_2620._Slots.AllocatorInstance.Data,local_2620._Slots.ArrayNum);
  if ((FSlotArguments *)local_2620._Slots.AllocatorInstance.Data != (FSlotArguments *)0x0) {
    FMemory::Free(local_2620._Slots.AllocatorInstance.Data);
  }
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_2620);
  SBox::FArguments::~FArguments(&local_1350);
  SHorizontalBox::FSlot::FSlotArguments::~FSlotArguments(&local_28b0);
  DestructItems<SHorizontalBox::FSlot::FSlotArguments,int>
            ((FSlotArguments *)local_2418._Slots.AllocatorInstance.Data,local_2418._Slots.ArrayNum);
  if ((FSlotArguments *)local_2418._Slots.AllocatorInstance.Data != (FSlotArguments *)0x0) {
    FMemory::Free(local_2418._Slots.AllocatorInstance.Data);
  }
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_2418);
  SVerticalBox::FSlot::FSlotArguments::~FSlotArguments(&local_2708);
  DestructItems<SVerticalBox::FSlot::FSlotArguments,int>
            ((FSlotArguments *)local_2210._Slots.AllocatorInstance.Data,local_2210._Slots.ArrayNum);
  if ((FSlotArguments *)local_2210._Slots.AllocatorInstance.Data != (FSlotArguments *)0x0) {
    FMemory::Free(local_2210._Slots.AllocatorInstance.Data);
  }
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_2210);
  SOverlay::FOverlaySlot::FSlotArguments::~FSlotArguments(&local_27c8);
  SOverlay::FOverlaySlot::FSlotArguments::~FSlotArguments(&local_2768);
  DestructItems<SOverlay::FOverlaySlot::FSlotArguments,int>
            ((FSlotArguments *)local_2008._Slots.AllocatorInstance.Data,local_2008._Slots.ArrayNum);
  if ((FSlotArguments *)local_2008._Slots.AllocatorInstance.Data != (FSlotArguments *)0x0) {
    FMemory::Free(local_2008._Slots.AllocatorInstance.Data);
  }
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_2008);
  this_07 = TSharedPtr<SVerticalBox,1>::operator->(&this->WindowButtonsBox);
  local_2d08.Value = (EVisibility)EVisibility::Collapsed.Value.Value;
  local_2d08.bIsSet = true;
  local_2d08.Getter._16_8_ = 0;
  local_2d08.Getter._0_8_ = 0;
  local_2d08.Getter._8_8_ = 0;
  SPanel::SetVisibility((SPanel *)this_07,&local_2d08);
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&this->RequestToggleFullscreen,&local_res10->_RequestToggleFullscreen);
  return;
}

// GetChildren @ 1429ea770

/* WARNING: Enum "Type": Some values do not have unique names */

FChildren * __thiscall SWindowTitleBarArea::GetChildren(SWindowTitleBarArea *this)

{
  return (FChildren *)&this->ChildSlot;
}

// GetCloseImage @ 1429ea790

/* WARNING: Enum "Type": Some values do not have unique names */

FSlateBrush * __thiscall SWindowTitleBarArea::GetCloseImage(SWindowTitleBarArea *this)

{
  SWindow *this_00;
  code *pcVar1;
  bool bVar2;
  FSlateBrush *pFVar3;
  SButton *pSVar4;
  TSharedPtr<FGenericWindow,1> local_18;
  
  this_00 = (this->GameWindow).Object;
  if (this_00 == (SWindow *)0x0) {
    return &CloseButtonStyle.Normal;
  }
  SWindow::GetNativeWindow(this_00,&local_18);
  if (this->bIsCloseButtonEnabled == false) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
    return &CloseButtonStyle.Disabled;
  }
  if ((this->CloseButton).Object == (SButton *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FSlateBrush *)(*pcVar1)();
      return pFVar3;
    }
  }
  pSVar4 = (this->CloseButton).Object;
  if ((pSVar4->bIsPressed == '\0') &&
     (pSVar4->AppearPressedAttribute ==
      (TSlateAttribute<bool,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_>)0x0)) {
    pSVar4 = TSharedPtr<SButton,1>::operator->(&this->CloseButton);
    if (*(char *)((longlong)&pSVar4->_padding_ + 3) != '\0') {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_18.SharedReferenceCount.ReferenceController);
      return &CloseButtonStyle.Hovered;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
    return &CloseButtonStyle.Normal;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return &CloseButtonStyle.Pressed;
}

// GetMaximizeRestoreImage @ 1429ebd80

/* WARNING: Enum "Type": Some values do not have unique names */

FSlateBrush * __thiscall SWindowTitleBarArea::GetMaximizeRestoreImage(SWindowTitleBarArea *this)

{
  code *pcVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  FSlateBrush *pFVar5;
  SWindow *pSVar6;
  SButton *pSVar7;
  TSharedPtr<FGenericWindow,1> local_18;
  
  pSVar6 = (this->GameWindow).Object;
  if (pSVar6 == (SWindow *)0x0) {
    return &MaximizeButtonStyle.Normal;
  }
  SWindow::GetNativeWindow(pSVar6,&local_18);
  if (local_18.Object == (FGenericWindow *)0x0) {
LAB_1429ebeb9:
    if (this->bIsMaximizeRestoreButtonEnabled != false) {
      pSVar6 = TSharedPtr<SWindow,1>::operator->(&this->GameWindow);
      bVar2 = SWindow::HasMaximizeBox(pSVar6);
      if (bVar2) {
        pSVar7 = TSharedPtr<SButton,1>::operator->(&this->MaximizeRestoreButton);
        if ((pSVar7->bIsPressed == '\0') &&
           (pSVar7->AppearPressedAttribute ==
            (TSlateAttribute<bool,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_>)0x0)) {
          pSVar7 = TSharedPtr<SButton,1>::operator->(&this->MaximizeRestoreButton);
          if (*(char *)((longlong)&pSVar7->_padding_ + 3) == '\0') {
            pFVar5 = &MaximizeButtonStyle.Normal;
          }
          else {
            pFVar5 = &MaximizeButtonStyle.Hovered;
          }
        }
        else {
          pFVar5 = &MaximizeButtonStyle.Pressed;
        }
        goto LAB_1429ebf2c;
      }
    }
  }
  else {
    if ((local_18.Object == (FGenericWindow *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar5 = (FSlateBrush *)(*pcVar1)();
      return pFVar5;
    }
    cVar3 = (**(code **)((local_18.Object)->_padding_ + 0x70))();
    if (cVar3 == '\0') {
      if ((local_18.Object == (FGenericWindow *)0x0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        pFVar5 = (FSlateBrush *)(*pcVar1)();
        return pFVar5;
      }
      iVar4 = (**(code **)((local_18.Object)->_padding_ + 0x68))();
      if (iVar4 == 2) goto LAB_1429ebeb9;
    }
    if (this->bIsMaximizeRestoreButtonEnabled != false) {
      pSVar6 = TSharedPtr<SWindow,1>::operator->(&this->GameWindow);
      bVar2 = SWindow::HasMaximizeBox(pSVar6);
      if (bVar2) {
        pSVar7 = TSharedPtr<SButton,1>::operator->(&this->MaximizeRestoreButton);
        if ((pSVar7->bIsPressed == '\0') &&
           (pSVar7->AppearPressedAttribute ==
            (TSlateAttribute<bool,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_>)0x0)) {
          pSVar7 = TSharedPtr<SButton,1>::operator->(&this->MaximizeRestoreButton);
          if (*(char *)((longlong)&pSVar7->_padding_ + 3) == '\0') {
            pFVar5 = &RestoreButtonStyle.Normal;
          }
          else {
            pFVar5 = &RestoreButtonStyle.Hovered;
          }
        }
        else {
          pFVar5 = &RestoreButtonStyle.Pressed;
        }
        goto LAB_1429ebf2c;
      }
    }
  }
  pFVar5 = &MaximizeButtonStyle.Disabled;
LAB_1429ebf2c:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return pFVar5;
}

// GetMinimizeImage @ 1429ebf60

/* WARNING: Enum "Type": Some values do not have unique names */

FSlateBrush * __thiscall SWindowTitleBarArea::GetMinimizeImage(SWindowTitleBarArea *this)

{
  SWindow *this_00;
  code *pcVar1;
  bool bVar2;
  FSlateBrush *pFVar3;
  SButton *pSVar4;
  TSharedPtr<FGenericWindow,1> local_18;
  
  this_00 = (this->GameWindow).Object;
  if (this_00 == (SWindow *)0x0) {
    return &MinimizeButtonStyle.Normal;
  }
  SWindow::GetNativeWindow(this_00,&local_18);
  if (this->bIsMinimizeButtonEnabled != false) {
    if ((this->GameWindow).Object == (SWindow *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar3 = (FSlateBrush *)(*pcVar1)();
        return pFVar3;
      }
    }
    bVar2 = SWindow::HasMinimizeBox((this->GameWindow).Object);
    if (bVar2) {
      pSVar4 = TSharedPtr<SButton,1>::operator->(&this->MinimizeButton);
      if ((pSVar4->bIsPressed == '\0') &&
         (pSVar4->AppearPressedAttribute ==
          (TSlateAttribute<bool,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_>)0x0)) {
        pSVar4 = TSharedPtr<SButton,1>::operator->(&this->MinimizeButton);
        if (*(char *)((longlong)&pSVar4->_padding_ + 3) != '\0') {
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_18.SharedReferenceCount.ReferenceController);
          return &MinimizeButtonStyle.Hovered;
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_18.SharedReferenceCount.ReferenceController);
        return &MinimizeButtonStyle.Normal;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_18.SharedReferenceCount.ReferenceController);
      return &MinimizeButtonStyle.Pressed;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return &MinimizeButtonStyle.Disabled;
}

// GetWindowZoneOverride @ 1429f0080

/* WARNING: Enum "Type": Some values do not have unique names */

Type __thiscall SWindowTitleBarArea::GetWindowZoneOverride(SWindowTitleBarArea *this)

{
  SWindow *pSVar1;
  code *pcVar2;
  bool bVar3;
  Type TVar4;
  int iVar5;
  
  pSVar1 = (this->GameWindow).Object;
  TVar4 = TitleBar;
  if (pSVar1 != (SWindow *)0x0) {
    if ((pSVar1->NativeWindow).Object == (FGenericWindow *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        TVar4 = (*pcVar2)();
        return TVar4;
      }
    }
    iVar5 = (**(code **)(((pSVar1->NativeWindow).Object)->_padding_ + 0x68))();
    TVar4 = TitleBar;
    if (iVar5 != 2) {
      TVar4 = ClientArea;
    }
  }
  return TVar4;
}

// MaximizeRestoreButton_OnClicked @ 1429f7500

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SWindowTitleBarArea::MaximizeRestoreButton_OnClicked
          (SWindowTitleBarArea *this,FReply *__return_storage_ptr__)

{
  SWindow *this_00;
  code *pcVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  FReply *pFVar5;
  TSharedPtr<FGenericWindow,1> local_18;
  
  this_00 = (this->GameWindow).Object;
  if (this_00 != (SWindow *)0x0) {
    SWindow::GetNativeWindow(this_00,&local_18);
    if (local_18.Object != (FGenericWindow *)0x0) {
      if ((local_18.Object == (FGenericWindow *)0x0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        pFVar5 = (FReply *)(*pcVar1)();
        return pFVar5;
      }
      iVar4 = (**(code **)((local_18.Object)->_padding_ + 0x68))();
      if ((iVar4 == 2) ||
         (bVar2 = TDelegateBase<FNotThreadSafeDelegateMode>::IsBound
                            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
                             &this->RequestToggleFullscreen), !bVar2)) {
        if ((local_18.Object == (FGenericWindow *)0x0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar2)) {
          pcVar1 = (code *)swi(3);
          pFVar5 = (FReply *)(*pcVar1)();
          return pFVar5;
        }
        cVar3 = (**(code **)((local_18.Object)->_padding_ + 0x70))();
        if (cVar3 == '\0') {
          if ((local_18.Object == (FGenericWindow *)0x0) &&
             (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar2)) {
            pcVar1 = (code *)swi(3);
            pFVar5 = (FReply *)(*pcVar1)();
            return pFVar5;
          }
          (**(code **)((local_18.Object)->_padding_ + 0x40))();
        }
        else {
          if ((local_18.Object == (FGenericWindow *)0x0) &&
             (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar2)) {
            pcVar1 = (code *)swi(3);
            pFVar5 = (FReply *)(*pcVar1)();
            return pFVar5;
          }
          (**(code **)((local_18.Object)->_padding_ + 0x48))();
        }
      }
      else {
        TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Execute
                  (&this->RequestToggleFullscreen);
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
  }
  FReply::FReply(__return_storage_ptr__,true);
  return __return_storage_ptr__;
}

// MinimizeButton_OnClicked @ 1429f7680

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SWindowTitleBarArea::MinimizeButton_OnClicked
          (SWindowTitleBarArea *this,FReply *__return_storage_ptr__)

{
  SWindow *this_00;
  code *pcVar1;
  bool bVar2;
  FReply *pFVar3;
  TSharedPtr<FGenericWindow,1> local_18;
  
  this_00 = (this->GameWindow).Object;
  if (this_00 != (SWindow *)0x0) {
    SWindow::GetNativeWindow(this_00,&local_18);
    if (local_18.Object != (FGenericWindow *)0x0) {
      if ((local_18.Object == (FGenericWindow *)0x0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        pFVar3 = (FReply *)(*pcVar1)();
        return pFVar3;
      }
      (**(code **)((local_18.Object)->_padding_ + 0x38))();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
  }
  FReply::FReply(__return_storage_ptr__,true);
  return __return_storage_ptr__;
}

// OnArrangeChildren @ 1429f9460

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SWindowTitleBarArea::OnArrangeChildren
          (SWindowTitleBarArea *this,FGeometry *param_1,FArrangedChildren *param_2)

{
  int iVar1;
  float fVar2;
  float fVar3;
  FDeprecateSlateVector2D FVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined1 auStackY_148 [32];
  undefined8 local_118;
  FSlateLayoutTransform local_110 [2];
  FArrangedWidget local_f8;
  ulonglong local_a8;
  
  local_a8 = __security_cookie.value ^ (ulonglong)auStackY_148;
  if (((param_2->VisibilityFilter).Value.Value & *(byte *)((longlong)&this->_padding_ + 1)) == 0) {
    return;
  }
  local_118 = param_1->Size;
  iVar1 = *(int *)&(this->ChildSlot).field_0x50;
  fVar8 = (float)local_118;
  fVar7 = *(float *)&(this->ChildSlot).field_0x40;
  fVar6 = *(float *)&(this->ChildSlot).field_0x44;
  fVar2 = *(float *)&(this->ChildSlot).field_0x48;
  fVar3 = *(float *)&(this->ChildSlot).field_0x4c;
  fVar9 = (float)local_118 - (fVar2 + fVar7);
  if (iVar1 == 0) {
LAB_1429f9566:
    fVar5 = fVar9;
    if (fVar9 <= 0.0) {
      fVar5 = 0.0;
    }
  }
  else {
    FVar4 = SWidget::GetDesiredSize(*(SWidget **)&(this->ChildSlot).field_0x30);
    fVar5 = fVar9;
    if (*(float *)FVar4 <= fVar9) {
      fVar5 = *(float *)FVar4;
    }
    if (fVar5 <= 0.0) {
      fVar5 = 0.0;
    }
    if (iVar1 != 1) {
      if (iVar1 == 2) {
        fVar7 = ((fVar8 - fVar5) * __real_3f000000 + fVar7) - fVar2;
      }
      else {
        if (iVar1 != 3) goto LAB_1429f9566;
        fVar7 = (fVar8 - fVar5) - fVar2;
      }
    }
  }
  local_118 = param_1->Size;
  iVar1 = *(int *)&(this->ChildSlot).field_0x54;
  fVar2 = local_118._4_4_;
  fVar8 = local_118._4_4_ - (fVar3 + fVar6);
  if (iVar1 != 0) {
    FVar4 = SWidget::GetDesiredSize(*(SWidget **)&(this->ChildSlot).field_0x30);
    local_118._4_4_ = *(float *)((longlong)FVar4 + 4);
    if (fVar8 <= *(float *)((longlong)FVar4 + 4)) {
      local_118._4_4_ = fVar8;
    }
    if (local_118._4_4_ <= 0.0) {
      local_118._4_4_ = 0.0;
    }
    if (iVar1 == 1) goto LAB_1429f9609;
    if (iVar1 == 2) {
      fVar6 = ((fVar2 - local_118._4_4_) * __real_3f000000 + fVar6) - fVar3;
      goto LAB_1429f9609;
    }
    if (iVar1 == 3) {
      fVar6 = (fVar2 - local_118._4_4_) - fVar3;
      goto LAB_1429f9609;
    }
  }
  local_118._4_4_ = fVar8;
  if (fVar8 <= 0.0) {
    local_118._4_4_ = 0.0;
  }
LAB_1429f9609:
  local_118._0_4_ = fVar5;
  local_110[0].Scale = 1.0;
  local_110[0].Translation.field0_0x0._0_4_ = fVar7;
  local_110[0].Translation.field0_0x0._4_4_ = fVar6;
  FGeometry::MakeChild
            (param_1,&local_f8,(TSharedRef<SWidget,1> *)&(this->ChildSlot).field_0x30,
             (FDeprecateVector2DParameter *)&local_118,local_110);
  FArrangedChildren::AddWidget(param_2,&local_f8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_f8.Widget.SharedReferenceCount.ReferenceController);
  return;
}

// OnMouseButtonDoubleClick @ 1429faff0

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SWindowTitleBarArea::OnMouseButtonDoubleClick
          (SWindowTitleBarArea *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FPointerEvent *param_2)

{
  SWindow *pSVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FReply *pFVar5;
  longlong *plVar6;
  FReadAccessScope local_28;
  
  pSVar1 = (this->GameWindow).Object;
  if (pSVar1 != (SWindow *)0x0) {
    if ((pSVar1->NativeWindow).Object == (FGenericWindow *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar5 = (FReply *)(*pcVar2)();
        return pFVar5;
      }
    }
    iVar4 = (**(code **)(((pSVar1->NativeWindow).Object)->_padding_ + 0x68))();
    if (iVar4 != 2) {
      bVar3 = TDelegateBase<FNotThreadSafeDelegateMode>::IsBound
                        ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->RequestToggleFullscreen
                        );
      if (bVar3) {
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                   &this->RequestToggleFullscreen,&local_28);
        if (*(int *)&(this->RequestToggleFullscreen).field_0x10 == 0) {
          plVar6 = (longlong *)0x0;
        }
        else {
          plVar6 = *(longlong **)&(this->RequestToggleFullscreen).field_0x8;
        }
        (**(code **)(*plVar6 + 0x60))();
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  (&local_28);
        bVar3 = true;
        goto LAB_1429fb0a2;
      }
    }
  }
  bVar3 = false;
LAB_1429fb0a2:
  FReply::FReply(__return_storage_ptr__,bVar3);
  return __return_storage_ptr__;
}

// OnPaint @ 142a013d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
SWindowTitleBarArea::OnPaint
          (SWindowTitleBarArea *this,FPaintArgs *param_1,FGeometry *param_2,FSlateRect *param_3,
          FSlateWindowElementList *param_4,int param_5,FWidgetStyle *param_6,bool param_7)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  ForElementType<FArrangedWidget> FVar4;
  undefined1 auStackY_1e8 [32];
  FPaintArgs local_1a8;
  FArrangedChildren local_178;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1e8;
  local_178.VisibilityFilter = (EVisibility)EVisibility::Visible.Value.Value;
  local_178.Array.AllocatorInstance.SecondaryData = (ForElementType<FArrangedWidget>)0x0;
  local_178.Array.ArrayNum = 0;
  local_178.Array.ArrayMax = 4;
  local_178.bAllow3DWidgets = false;
  SWidget::ArrangeChildren((SWidget *)this,param_2,&local_178,false);
  if (0 < local_178.Array.ArrayNum) {
    if ((local_178.Array.ArrayNum != 1) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("ArrangedChildren.Num() == 1",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Layout\\SWindowTitleBarArea.cpp"
                           ,0xf4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
    if ((local_178.Array.ArrayNum < 1) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
    FVar4 = (ForElementType<FArrangedWidget>)&local_178.Array;
    if (local_178.Array.AllocatorInstance.SecondaryData != (ForElementType<FArrangedWidget>)0x0) {
      FVar4 = local_178.Array.AllocatorInstance.SecondaryData;
    }
    if ((param_7) && (*(char *)((longlong)&this->_padding_ + 2) != '\0')) {
      bVar2 = true;
    }
    else {
      bVar2 = false;
    }
    local_1a8.RootGrid = param_1->RootGrid;
    local_1a8.CurrentGrid = param_1->CurrentGrid;
    local_1a8.WindowOffset.field0_0x0 = (param_1->WindowOffset).field0_0x0;
    local_1a8.CurrentTime = param_1->CurrentTime;
    local_1a8.DeltaTime = param_1->DeltaTime;
    local_1a8._44_4_ = *(undefined4 *)&param_1->field_0x2c;
    local_1a8.PaintParentPtr = (SWidget *)this;
    param_5 = SWidget::Paint(((TSharedRef<SWidget,1> *)((longlong)FVar4 + 0x38))->Object,&local_1a8,
                             (FGeometry *)FVar4,param_3,param_4,param_5,param_6,bVar2);
  }
  FVar4 = (ForElementType<FArrangedWidget>)&local_178.Array;
  if (local_178.Array.AllocatorInstance.SecondaryData != (ForElementType<FArrangedWidget>)0x0) {
    FVar4 = local_178.Array.AllocatorInstance.SecondaryData;
  }
  DestructItems<FArrangedWidget,int>((FArrangedWidget *)FVar4,local_178.Array.ArrayNum);
  if (local_178.Array.AllocatorInstance.SecondaryData != (ForElementType<FArrangedWidget>)0x0) {
    FMemory::Free((void *)local_178.Array.AllocatorInstance.SecondaryData);
  }
  return param_5;
}

// SetContent @ 142a07d20

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SWindowTitleBarArea::SetContent(SWindowTitleBarArea *this,TSharedRef<SWidget,1> *param_1)

{
  undefined1 *this_00;
  TReferenceControllerBase<1> *pTVar1;
  SWidget *pSVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  this_00 = &(this->ChildSlot).field_0x20;
  FSlotBase::DetatchParentFromContent((FSlotBase *)this_00);
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  pSVar2 = param_1->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar3 = *(TReferenceControllerBase<1> **)&(this->ChildSlot).field_0x38;
  *(SWidget **)&(this->ChildSlot).field_0x30 = pSVar2;
  *(TReferenceControllerBase<1> **)&(this->ChildSlot).field_0x38 = pTVar1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  FSlotBase::AfterContentOrOwnerAssigned((FSlotBase *)this_00);
  return;
}

// SetHAlign @ 142a09d80

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SWindowTitleBarArea::SetHAlign(SWindowTitleBarArea *this,EHorizontalAlignment param_1)

{
  undefined1 *puVar1;
  FSingleWidgetChildrenWithBasicLayoutSlot *pFVar2;
  
  puVar1 = &(this->ChildSlot).field_0x50;
  if (*(EHorizontalAlignment *)&(this->ChildSlot).field_0x50 != param_1) {
    *(EHorizontalAlignment *)puVar1 = param_1;
    pFVar2 = &this->ChildSlot;
    if (puVar1 == (undefined1 *)0x0) {
      pFVar2 = (FSingleWidgetChildrenWithBasicLayoutSlot *)0x0;
    }
    FSlotBase::Invalidate((FSlotBase *)&pFVar2->field_0x20,Layout);
    return;
  }
  return;
}

// SetPadding @ 142a0b5a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SWindowTitleBarArea::SetPadding(SWindowTitleBarArea *this,TAttribute<FMargin> *param_1)

{
  TDelegate<FMargin___cdecl(void),FDefaultDelegateUserPolicy> *this_00;
  undefined1 *this_01;
  void *pvVar1;
  code *pcVar2;
  bool bVar3;
  SWidget *pSVar4;
  FSingleWidgetChildrenWithBasicLayoutSlot *pFVar5;
  undefined1 local_38 [24];
  undefined1 local_20 [24];
  
  local_38._0_4_ = (param_1->Value).Left;
  local_38._4_4_ = (param_1->Value).Top;
  local_38._8_4_ = (param_1->Value).Right;
  local_38._12_4_ = (param_1->Value).Bottom;
  local_38[0x10] = param_1->bIsSet;
  this_00 = &param_1->Getter;
  this_01 = &(this->ChildSlot).field_0x40;
  TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_20,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)this_00);
  pFVar5 = &this->ChildSlot;
  if (this_01 == (undefined1 *)0x0) {
    pFVar5 = (FSingleWidgetChildrenWithBasicLayoutSlot *)0x0;
  }
  pSVar4 = FSlotBase::GetOwnerWidget((FSlotBase *)&pFVar5->field_0x20);
  if (pSVar4 == (SWidget *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("OwnerWidget",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Layout\\BasicLayoutWidgetSlot.h"
                       ,0x170,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  SlateAttributePrivate::
  TSlateAttributeBase<SWidget,FMargin,TSlateAttributeInvalidationReason<1>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
  ::Assign((TSlateAttributeBase<SWidget,FMargin,TSlateAttributeInvalidationReason<1>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
            *)this_01,pSVar4,(TAttribute<FMargin> *)local_38,None);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_20);
  if ((void *)local_20._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_20._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_20);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)this_00);
  pvVar1 = *(void **)&(param_1->Getter).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)this_00);
  return;
}

// SetVAlign @ 142a0d8e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SWindowTitleBarArea::SetVAlign(SWindowTitleBarArea *this,EVerticalAlignment param_1)

{
  FSingleWidgetChildrenWithBasicLayoutSlot *pFVar1;
  
  if (*(EVerticalAlignment *)&(this->ChildSlot).field_0x54 != param_1) {
    *(EVerticalAlignment *)&(this->ChildSlot).field_0x54 = param_1;
    pFVar1 = &this->ChildSlot;
    if (this == (SWindowTitleBarArea *)0xfffffffffffffd98) {
      pFVar1 = (FSingleWidgetChildrenWithBasicLayoutSlot *)0x0;
    }
    FSlotBase::Invalidate((FSlotBase *)&pFVar1->field_0x20,Layout);
    return;
  }
  return;
}

