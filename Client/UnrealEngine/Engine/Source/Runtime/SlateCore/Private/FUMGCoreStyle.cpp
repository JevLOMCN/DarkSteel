// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 20

// operator() @ 14254ecb0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall `FUMGCoreStyle::Create'::__l2::<lambda_10>::operator()(void *this)

{
  FSlateStyleSet *pFVar1;
  longlong lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  void *pvVar8;
  TReferenceControllerBase<1> *pTVar9;
  undefined8 uVar10;
  FString *pFVar11;
  FSlateBrush *pFVar12;
  FName *pFVar13;
  FSlateBrush *pFVar14;
  FWindowStyle *pFVar15;
  FSlateBoxBrush *pFVar16;
  FSlateBoxBrush *pFVar17;
  FLegacySlateFontInfoCache *pFVar18;
  FSlateImageBrush *pFVar19;
  FSlateImageBrush *pFVar20;
  FCheckBoxStyle *pFVar21;
  FSlateImageBrush *pFVar22;
  FTextBlockStyle *pFVar23;
  FSlateFontInfo *pFVar24;
  FButtonStyle *pFVar25;
  char cVar26;
  TVector2<float>_u_0 local_res8;
  FName local_res10;
  FName local_res18;
  undefined1 local_27b8 [8];
  float fStack_27b0;
  undefined4 uStack_27ac;
  FLinearColor_u_0 local_27a8;
  FLinearColor_u_0 local_2798;
  uint local_2788;
  void *local_2778;
  TObjectPtr<UObject>_u_0 TStack_2770;
  FLinearColor_u_0 local_2768;
  void *local_2758 [2];
  FLinearColor_u_0 local_2748;
  void *local_2738 [2];
  void *local_2728 [2];
  FLinearColor_u_0 local_2718;
  void *local_2708 [2];
  undefined1 local_26f8 [8];
  undefined1 local_26f0 [56];
  FSharedReferencer<1> local_26b8;
  undefined1 local_2690 [8];
  float fStack_2688;
  undefined4 uStack_2684;
  undefined4 local_2680;
  TVector2<float>_u_0 local_267c;
  FLinearColor_u_0 local_2674;
  FLinearColor_u_0 local_2664;
  ESlateColorStylingMode EStack_2654;
  EStyleColor EStack_2653;
  undefined2 uStack_2652;
  FLinearColor_u_0 local_2650;
  FNameEntryId local_2640;
  FSlateBrush local_2638;
  FSlateBrush local_2588;
  FSlateBrush local_24d8;
  FLinearColor_u_0 local_2428;
  FMargin local_2418 [11];
  undefined **local_2368 [20];
  TReferenceControllerBase<1> *local_22c8;
  undefined **local_22b8 [20];
  TReferenceControllerBase<1> *local_2218;
  undefined **local_2208 [20];
  TReferenceControllerBase<1> *local_2168;
  undefined1 local_2158 [160];
  TReferenceControllerBase<1> *local_20b8;
  undefined **local_20a8 [20];
  TReferenceControllerBase<1> *local_2008;
  undefined **local_1ff8 [20];
  TReferenceControllerBase<1> *local_1f58;
  undefined **local_1f48 [20];
  TReferenceControllerBase<1> *local_1ea8;
  undefined **local_1e98 [20];
  TReferenceControllerBase<1> *local_1df8;
  FWindowStyle local_1de8;
  
  pFVar14 = (FSlateBrush *)(local_26f0 + 8);
  pFVar22 = (FSlateImageBrush *)0x0;
  local_res8._s_0 = local_res8._s_0 & 0xffffffff00000000;
  pFVar1 = (FSlateStyleSet *)**(undefined8 **)this;
  FSlateWidgetStyle::FSlateWidgetStyle((FSlateWidgetStyle *)local_26f8);
  local_26f0._0_4_ = 9.0;
  local_26f8 = (undefined1  [8])&___7FScrollBoxStyle__6B_;
  FSlateBrush::FSlateBrush(pFVar14);
  FSlateBrush::FSlateBrush(&local_2638);
  FSlateBrush::FSlateBrush(&local_2588);
  FSlateBrush::FSlateBrush(&local_24d8);
  pTVar9 = _UNK_15076b1f8;
  pvVar8 = ___xmm_3f8000003f8000003f8000003f800000;
  local_2428._s_0.R = ___xmm_000000003f8000000000000000000000;
  local_2428._s_0.G = _UNK_150689534;
  local_2428._s_0.B = _UNK_150689538;
  local_2428._s_0.A = _UNK_15068953c;
  local_2418[0].Left = ___xmm_3f800000000000000000000000000000;
  local_2418[0].Top = _UNK_150689644;
  local_2418[0].Right = _UNK_150689648;
  local_2418[0].Bottom = _UNK_15068964c;
  local_res8 = (TVector2<float>_u_0)0x4100000041800000;
  local_2748._0_8_ = ___xmm_3f8000003f8000003f8000003f800000;
  local_2748._8_8_ = _UNK_15076b1f8;
  local_2718._0_8_ = ___xmm_000000003f0000003f8000003f000000;
  local_2718._s_0.B = _UNK_150925068;
  local_2718._s_0.A = _UNK_15092506c;
  pFVar11 = (FString *)
            (**(code **)(*(longlong *)**(undefined8 **)this + 0xf0))
                      ((longlong *)**(undefined8 **)this,&local_2798,"Common/ScrollBoxShadowTop",
                       L".png");
  pFVar12 = (FSlateBrush *)
            FSlateBoxBrush::FSlateBoxBrush
                      ((FSlateBoxBrush *)local_22b8,pFVar11,
                       (FDeprecateVector2DParameter *)&local_res8._s_0,(FMargin *)&local_2718._s_0,
                       (FLinearColor *)&local_2748._s_0,FullColor);
  FSlateBrush::operator=(pFVar14,pFVar12);
  local_res8 = (TVector2<float>_u_0)0x4100000041800000;
  local_2718._0_8_ = pvVar8;
  local_2718._8_8_ = pTVar9;
  local_2748._0_8_ = ___xmm_3f8000003f000000000000003f000000;
  local_2748._s_0.B = _UNK_1509252e8;
  local_2748._s_0.A = _UNK_1509252ec;
  pFVar11 = (FString *)
            (**(code **)(*(longlong *)**(undefined8 **)this + 0xf0))
                      ((longlong *)**(undefined8 **)this,local_2758,"Common/ScrollBoxShadowBottom",
                       L".png");
  pFVar12 = (FSlateBrush *)
            FSlateBoxBrush::FSlateBoxBrush
                      ((FSlateBoxBrush *)local_2368,pFVar11,
                       (FDeprecateVector2DParameter *)&local_res8._s_0,(FMargin *)&local_2748._s_0,
                       (FLinearColor *)&local_2718._s_0,FullColor);
  FSlateBrush::operator=(&local_2638,pFVar12);
  local_res8 = (TVector2<float>_u_0)0x4180000041000000;
  local_2748._0_8_ = ___xmm_3f000000000000003f0000003f800000;
  local_2748._8_8_ = _UNK_150925208;
  local_2718._0_8_ = pvVar8;
  local_2718._8_8_ = pTVar9;
  pFVar11 = (FString *)
            (**(code **)(*(longlong *)**(undefined8 **)this + 0xf0))
                      ((longlong *)**(undefined8 **)this,local_2728,"Common/ScrollBoxShadowLeft",
                       L".png");
  pFVar12 = (FSlateBrush *)
            FSlateBoxBrush::FSlateBoxBrush
                      ((FSlateBoxBrush *)local_2208,pFVar11,
                       (FDeprecateVector2DParameter *)&local_res8._s_0,(FMargin *)&local_2748._s_0,
                       (FLinearColor *)&local_2718._s_0,FullColor);
  FSlateBrush::operator=(&local_2588,pFVar12);
  local_res8 = (TVector2<float>_u_0)0x4180000041000000;
  local_2718._0_8_ = pvVar8;
  local_2718._8_8_ = pTVar9;
  local_2748._0_8_ = ___xmm_3f0000003f8000003f00000000000000;
  local_2748._8_8_ = _UNK_150925218;
  pFVar11 = (FString *)
            (**(code **)(*(longlong *)**(undefined8 **)this + 0xf0))
                      ((longlong *)**(undefined8 **)this,local_2738,"Common/ScrollBoxShadowRight",
                       L".png");
  pFVar12 = (FSlateBrush *)
            FSlateBoxBrush::FSlateBoxBrush
                      ((FSlateBoxBrush *)local_2158,pFVar11,
                       (FDeprecateVector2DParameter *)&local_res8._s_0,(FMargin *)&local_2748._s_0,
                       (FLinearColor *)&local_2718._s_0,FullColor);
  FSlateBrush::operator=(&local_24d8,pFVar12);
  pFVar13 = ::FName::FName(&local_res10,"ScrollBox");
  FSlateStyleSet::Set<FScrollBoxStyle>(pFVar1,*pFVar13,(FScrollBoxStyle *)local_26f8);
  local_2158._0_8_ = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_20b8);
  if (local_2738[0] != (void *)0x0) {
    FMemory::Free(local_2738[0]);
  }
  local_2208[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_2168);
  if (local_2728[0] != (void *)0x0) {
    FMemory::Free(local_2728[0]);
  }
  local_2368[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_22c8);
  if (local_2758[0] != (void *)0x0) {
    FMemory::Free(local_2758[0]);
  }
  local_22b8[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_2218);
  if ((void *)local_2798._0_8_ != (void *)0x0) {
    FMemory::Free((void *)local_2798._0_8_);
  }
  local_26f8 = (undefined1  [8])&___7FScrollBoxStyle__6B_;
  local_24d8._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_24d8.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  local_2588._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2588.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  local_2638._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2638.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  local_26f0._8_8_ = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_2650._8_8_);
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)local_26f8);
  pFVar1 = (FSlateStyleSet *)**(undefined8 **)this;
  FSlateWidgetStyle::FSlateWidgetStyle((FSlateWidgetStyle *)local_26f8);
  local_26f8 = (undefined1  [8])&___7FScrollBorderStyle__6B_;
  FSlateBrush::FSlateBrush(pFVar14);
  FSlateBrush::FSlateBrush(&local_2638);
  local_res8 = (TVector2<float>_u_0)0x4100000041800000;
  local_2798._0_8_ = pvVar8;
  local_2798._8_8_ = pTVar9;
  local_2758[0] = ___xmm_000000003f0000003f8000003f000000;
  local_2758[1] = (void *)_UNK_150925068;
  pFVar11 = (FString *)
            (**(code **)(*(longlong *)**(undefined8 **)this + 0xf0))
                      ((longlong *)**(undefined8 **)this,local_2738,"Common/ScrollBorderShadowTop",
                       L".png");
  pFVar12 = (FSlateBrush *)
            FSlateBoxBrush::FSlateBoxBrush
                      ((FSlateBoxBrush *)local_2368,pFVar11,
                       (FDeprecateVector2DParameter *)&local_res8._s_0,(FMargin *)local_2758,
                       (FLinearColor *)&local_2798._s_0,FullColor);
  FSlateBrush::operator=(pFVar14,pFVar12);
  local_res8 = (TVector2<float>_u_0)0x4100000041800000;
  local_2798._0_8_ = pvVar8;
  local_2798._8_8_ = pTVar9;
  local_2758[0] = ___xmm_3f8000003f000000000000003f000000;
  local_2758[1] = (void *)_UNK_1509252e8;
  pFVar11 = (FString *)
            (**(code **)(*(longlong *)**(undefined8 **)this + 0xf0))
                      ((longlong *)**(undefined8 **)this,local_2728,
                       "Common/ScrollBorderShadowBottom",L".png");
  pFVar14 = (FSlateBrush *)
            FSlateBoxBrush::FSlateBoxBrush
                      ((FSlateBoxBrush *)local_22b8,pFVar11,
                       (FDeprecateVector2DParameter *)&local_res8._s_0,(FMargin *)local_2758,
                       (FLinearColor *)&local_2798._s_0,FullColor);
  FSlateBrush::operator=(&local_2638,pFVar14);
  pFVar13 = ::FName::FName(&local_res10,"ScrollBorder");
  FSlateStyleSet::Set<FScrollBorderStyle>(pFVar1,*pFVar13,(FScrollBorderStyle *)local_26f8);
  local_22b8[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_2218);
  if (local_2728[0] != (void *)0x0) {
    FMemory::Free(local_2728[0]);
  }
  local_2368[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_22c8);
  if (local_2738[0] != (void *)0x0) {
    FMemory::Free(local_2738[0]);
  }
  local_26f8 = (undefined1  [8])&___7FScrollBorderStyle__6B_;
  local_2638._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2638.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  local_26f0._8_8_ = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_2650._8_8_);
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)local_26f8);
  lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if ((*(int *)(lVar2 + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    pFVar25 = FButtonStyle::FButtonStyle((FButtonStyle *)local_26f8,&Button);
    local_res8 = (TVector2<float>_u_0)0x4190000041d80000;
    local_2798._0_8_ = pvVar8;
    local_2798._8_8_ = pTVar9;
    pFVar11 = (FString *)
              (**(code **)(*(longlong *)**(undefined8 **)this + 0xf0))
                        ((longlong *)**(undefined8 **)this,local_2738,
                         "Common/Window/WindowButton_Minimize_Normal",L".png");
    pFVar14 = (FSlateBrush *)
              FSlateImageBrush::FSlateImageBrush
                        ((FSlateImageBrush *)local_2208,pFVar11,
                         (FDeprecateVector2DParameter *)&local_res8._s_0,
                         (FLinearColor *)&local_2798._s_0,NoTile,FullColor);
    FSlateBrush::operator=(&pFVar25->Normal,pFVar14);
    local_res8 = (TVector2<float>_u_0)0x4190000041d80000;
    local_2798._0_8_ = pvVar8;
    local_2798._8_8_ = pTVar9;
    pFVar11 = (FString *)
              (**(code **)(*(longlong *)**(undefined8 **)this + 0xf0))
                        ((longlong *)**(undefined8 **)this,local_2728,
                         "Common/Window/WindowButton_Minimize_Hovered",L".png");
    pFVar14 = (FSlateBrush *)
              FSlateImageBrush::FSlateImageBrush
                        ((FSlateImageBrush *)local_2368,pFVar11,
                         (FDeprecateVector2DParameter *)&local_res8._s_0,
                         (FLinearColor *)&local_2798._s_0,NoTile,FullColor);
    FSlateBrush::operator=(&pFVar25->Hovered,pFVar14);
    local_res8 = (TVector2<float>_u_0)0x4190000041d80000;
    local_2798._0_8_ = pvVar8;
    local_2798._8_8_ = pTVar9;
    pFVar11 = (FString *)
              (**(code **)(*(longlong *)**(undefined8 **)this + 0xf0))
                        ((longlong *)**(undefined8 **)this,local_2758,
                         "Common/Window/WindowButton_Minimize_Pressed",L".png");
    pFVar14 = (FSlateBrush *)
              FSlateImageBrush::FSlateImageBrush
                        ((FSlateImageBrush *)local_22b8,pFVar11,
                         (FDeprecateVector2DParameter *)&local_res8._s_0,
                         (FLinearColor *)&local_2798._s_0,NoTile,FullColor);
    FSlateBrush::operator=(&pFVar25->Pressed,pFVar14);
    FButtonStyle::FButtonStyle(&MinimizeButtonStyle,pFVar25);
    local_22b8[0] = &___7FSlateBrush__6B_;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_2218);
    if (local_2758[0] != (void *)0x0) {
      FMemory::Free(local_2758[0]);
    }
    local_2368[0] = &___7FSlateBrush__6B_;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_22c8);
    if (local_2728[0] != (void *)0x0) {
      FMemory::Free(local_2728[0]);
    }
    local_2208[0] = &___7FSlateBrush__6B_;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_2168);
    if (local_2738[0] != (void *)0x0) {
      FMemory::Free(local_2738[0]);
    }
    local_26f8 = (undefined1  [8])&___7FButtonStyle__6B_;
    local_24d8._padding_ = (longlong)&___7FSlateBrush__6B_;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_24d8.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
    local_2588._padding_ = (longlong)&___7FSlateBrush__6B_;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_2588.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
    local_2638._padding_ = (longlong)&___7FSlateBrush__6B_;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_2638.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
    local_26f0._8_8_ = &___7FSlateBrush__6B_;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_2650._8_8_);
    FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)local_26f8);
    atexit(``FUMGCoreStyle::Create'::__l2::<lambda_10>::operator()'::__l5::
           _dynamic_atexit_destructor_for__MinimizeButtonStyle__);
    _Init_thread_footer(&::_TSS0);
  }
  if ((*(int *)(lVar2 + 0x9d4c) < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
    pFVar25 = FButtonStyle::FButtonStyle((FButtonStyle *)local_26f8,&Button);
    local_res8 = (TVector2<float>_u_0)0x4190000041b80000;
    local_2798._0_8_ = pvVar8;
    local_2798._8_8_ = pTVar9;
    pFVar11 = (FString *)
              (**(code **)(*(longlong *)**(undefined8 **)this + 0xf0))
                        ((longlong *)**(undefined8 **)this,local_2738,
                         "Common/Window/WindowButton_Maximize_Normal",L".png");
    pFVar14 = (FSlateBrush *)
              FSlateImageBrush::FSlateImageBrush
                        ((FSlateImageBrush *)local_2208,pFVar11,
                         (FDeprecateVector2DParameter *)&local_res8._s_0,
                         (FLinearColor *)&local_2798._s_0,NoTile,FullColor);
    FSlateBrush::operator=(&pFVar25->Normal,pFVar14);
    local_res8 = (TVector2<float>_u_0)0x4190000041b80000;
    local_2798._0_8_ = pvVar8;
    local_2798._8_8_ = pTVar9;
    pFVar11 = (FString *)
              (**(code **)(*(longlong *)**(undefined8 **)this + 0xf0))
                        ((longlong *)**(undefined8 **)this,local_2728,
                         "Common/Window/WindowButton_Maximize_Hovered",L".png");
    pFVar14 = (FSlateBrush *)
              FSlateImageBrush::FSlateImageBrush
                        ((FSlateImageBrush *)local_2368,pFVar11,
                         (FDeprecateVector2DParameter *)&local_res8._s_0,
                         (FLinearColor *)&local_2798._s_0,NoTile,FullColor);
    FSlateBrush::operator=(&pFVar25->Hovered,pFVar14);
    local_res8 = (TVector2<float>_u_0)0x4190000041b80000;
    local_2798._0_8_ = pvVar8;
    local_2798._8_8_ = pTVar9;
    pFVar11 = (FString *)
              (**(code **)(*(longlong *)**(undefined8 **)this + 0xf0))
                        ((longlong *)**(undefined8 **)this,local_2758,
                         "Common/Window/WindowButton_Maximize_Pressed",L".png");
    pFVar14 = (FSlateBrush *)
              FSlateImageBrush::FSlateImageBrush
                        ((FSlateImageBrush *)local_22b8,pFVar11,
                         (FDeprecateVector2DParameter *)&local_res8._s_0,
                         (FLinearColor *)&local_2798._s_0,NoTile,FullColor);
    FSlateBrush::operator=(&pFVar25->Pressed,pFVar14);
    FButtonStyle::FButtonStyle(&MaximizeButtonStyle,pFVar25);
    local_22b8[0] = &___7FSlateBrush__6B_;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_2218);
    if (local_2758[0] != (void *)0x0) {
      FMemory::Free(local_2758[0]);
    }
    local_2368[0] = &___7FSlateBrush__6B_;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_22c8);
    if (local_2728[0] != (void *)0x0) {
      FMemory::Free(local_2728[0]);
    }
    local_2208[0] = &___7FSlateBrush__6B_;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_2168);
    if (local_2738[0] != (void *)0x0) {
      FMemory::Free(local_2738[0]);
    }
    local_26f8 = (undefined1  [8])&___7FButtonStyle__6B_;
    local_24d8._padding_ = (longlong)&___7FSlateBrush__6B_;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_24d8.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
    local_2588._padding_ = (longlong)&___7FSlateBrush__6B_;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_2588.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
    local_2638._padding_ = (longlong)&___7FSlateBrush__6B_;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_2638.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
    local_26f0._8_8_ = &___7FSlateBrush__6B_;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_2650._8_8_);
    FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)local_26f8);
    atexit(``FUMGCoreStyle::Create'::__l2::<lambda_10>::operator()'::__l5::
           _dynamic_atexit_destructor_for__MaximizeButtonStyle__);
    _Init_thread_footer(&::_TSS1);
  }
  if ((*(int *)(lVar2 + 0x9d4c) < ::_TSS2) && (_Init_thread_header(&::_TSS2), ::_TSS2 == -1)) {
    pFVar25 = FButtonStyle::FButtonStyle((FButtonStyle *)local_26f8,&Button);
    local_res8 = (TVector2<float>_u_0)0x4190000041b80000;
    local_2798._0_8_ = pvVar8;
    local_2798._8_8_ = pTVar9;
    pFVar11 = (FString *)
              (**(code **)(*(longlong *)**(undefined8 **)this + 0xf0))
                        ((longlong *)**(undefined8 **)this,local_2738,
                         "Common/Window/WindowButton_Restore_Normal",L".png");
    pFVar14 = (FSlateBrush *)
              FSlateImageBrush::FSlateImageBrush
                        ((FSlateImageBrush *)local_2208,pFVar11,
                         (FDeprecateVector2DParameter *)&local_res8._s_0,
                         (FLinearColor *)&local_2798._s_0,NoTile,FullColor);
    FSlateBrush::operator=(&pFVar25->Normal,pFVar14);
    local_res8 = (TVector2<float>_u_0)0x4190000041b80000;
    local_2798._0_8_ = pvVar8;
    local_2798._8_8_ = pTVar9;
    pFVar11 = (FString *)
              (**(code **)(*(longlong *)**(undefined8 **)this + 0xf0))
                        ((longlong *)**(undefined8 **)this,local_2728,
                         "Common/Window/WindowButton_Restore_Hovered",L".png");
    pFVar14 = (FSlateBrush *)
              FSlateImageBrush::FSlateImageBrush
                        ((FSlateImageBrush *)local_2368,pFVar11,
                         (FDeprecateVector2DParameter *)&local_res8._s_0,
                         (FLinearColor *)&local_2798._s_0,NoTile,FullColor);
    FSlateBrush::operator=(&pFVar25->Hovered,pFVar14);
    local_res8 = (TVector2<float>_u_0)0x4190000041b80000;
    local_2798._0_8_ = pvVar8;
    local_2798._8_8_ = pTVar9;
    pFVar11 = (FString *)
              (**(code **)(*(longlong *)**(undefined8 **)this + 0xf0))
                        ((longlong *)**(undefined8 **)this,local_2758,
                         "Common/Window/WindowButton_Restore_Pressed",L".png");
    pFVar14 = (FSlateBrush *)
              FSlateImageBrush::FSlateImageBrush
                        ((FSlateImageBrush *)local_22b8,pFVar11,
                         (FDeprecateVector2DParameter *)&local_res8._s_0,
                         (FLinearColor *)&local_2798._s_0,NoTile,FullColor);
    FSlateBrush::operator=(&pFVar25->Pressed,pFVar14);
    FButtonStyle::FButtonStyle(&RestoreButtonStyle,pFVar25);
    local_22b8[0] = &___7FSlateBrush__6B_;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_2218);
    if (local_2758[0] != (void *)0x0) {
      FMemory::Free(local_2758[0]);
    }
    local_2368[0] = &___7FSlateBrush__6B_;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_22c8);
    if (local_2728[0] != (void *)0x0) {
      FMemory::Free(local_2728[0]);
    }
    local_2208[0] = &___7FSlateBrush__6B_;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_2168);
    if (local_2738[0] != (void *)0x0) {
      FMemory::Free(local_2738[0]);
    }
    local_26f8 = (undefined1  [8])&___7FButtonStyle__6B_;
    local_24d8._padding_ = (longlong)&___7FSlateBrush__6B_;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_24d8.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
    local_2588._padding_ = (longlong)&___7FSlateBrush__6B_;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_2588.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
    local_2638._padding_ = (longlong)&___7FSlateBrush__6B_;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_2638.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
    local_26f0._8_8_ = &___7FSlateBrush__6B_;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_2650._8_8_);
    FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)local_26f8);
    atexit(``FUMGCoreStyle::Create'::__l2::<lambda_10>::operator()'::__l5::
           _dynamic_atexit_destructor_for__RestoreButtonStyle__);
    _Init_thread_footer(&::_TSS2);
  }
  if ((*(int *)(lVar2 + 0x9d4c) < ::_TSS3) && (_Init_thread_header(&::_TSS3), ::_TSS3 == -1)) {
    pFVar25 = FButtonStyle::FButtonStyle((FButtonStyle *)local_26f8,&Button);
    local_res8 = (TVector2<float>_u_0)0x4190000042300000;
    local_2798._0_8_ = pvVar8;
    local_2798._8_8_ = pTVar9;
    pFVar11 = (FString *)
              (**(code **)(*(longlong *)**(undefined8 **)this + 0xf0))
                        ((longlong *)**(undefined8 **)this,local_2738,
                         "Common/Window/WindowButton_Close_Normal",L".png");
    pFVar14 = (FSlateBrush *)
              FSlateImageBrush::FSlateImageBrush
                        ((FSlateImageBrush *)local_2208,pFVar11,
                         (FDeprecateVector2DParameter *)&local_res8._s_0,
                         (FLinearColor *)&local_2798._s_0,NoTile,FullColor);
    FSlateBrush::operator=(&pFVar25->Normal,pFVar14);
    local_res8 = (TVector2<float>_u_0)0x4190000042300000;
    local_2798._0_8_ = pvVar8;
    local_2798._8_8_ = pTVar9;
    pFVar11 = (FString *)
              (**(code **)(*(longlong *)**(undefined8 **)this + 0xf0))
                        ((longlong *)**(undefined8 **)this,local_2728,
                         "Common/Window/WindowButton_Close_Hovered",L".png");
    pFVar14 = (FSlateBrush *)
              FSlateImageBrush::FSlateImageBrush
                        ((FSlateImageBrush *)local_2368,pFVar11,
                         (FDeprecateVector2DParameter *)&local_res8._s_0,
                         (FLinearColor *)&local_2798._s_0,NoTile,FullColor);
    FSlateBrush::operator=(&pFVar25->Hovered,pFVar14);
    local_res8 = (TVector2<float>_u_0)0x4190000042300000;
    local_2798._0_8_ = pvVar8;
    local_2798._8_8_ = pTVar9;
    pFVar11 = (FString *)
              (**(code **)(*(longlong *)**(undefined8 **)this + 0xf0))
                        ((longlong *)**(undefined8 **)this,local_2758,
                         "Common/Window/WindowButton_Close_Pressed",L".png");
    pFVar14 = (FSlateBrush *)
              FSlateImageBrush::FSlateImageBrush
                        ((FSlateImageBrush *)local_22b8,pFVar11,
                         (FDeprecateVector2DParameter *)&local_res8._s_0,
                         (FLinearColor *)&local_2798._s_0,NoTile,FullColor);
    FSlateBrush::operator=(&pFVar25->Pressed,pFVar14);
    FButtonStyle::FButtonStyle(&CloseButtonStyle,pFVar25);
    local_22b8[0] = &___7FSlateBrush__6B_;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_2218);
    if (local_2758[0] != (void *)0x0) {
      FMemory::Free(local_2758[0]);
    }
    local_2368[0] = &___7FSlateBrush__6B_;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_22c8);
    if (local_2728[0] != (void *)0x0) {
      FMemory::Free(local_2728[0]);
    }
    local_2208[0] = &___7FSlateBrush__6B_;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_2168);
    if (local_2738[0] != (void *)0x0) {
      FMemory::Free(local_2738[0]);
    }
    local_26f8 = (undefined1  [8])&___7FButtonStyle__6B_;
    local_24d8._padding_ = (longlong)&___7FSlateBrush__6B_;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_24d8.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
    local_2588._padding_ = (longlong)&___7FSlateBrush__6B_;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_2588.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
    local_2638._padding_ = (longlong)&___7FSlateBrush__6B_;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_2638.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
    local_26f0._8_8_ = &___7FSlateBrush__6B_;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_2650._8_8_);
    FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)local_26f8);
    atexit(``FUMGCoreStyle::Create'::__l2::<lambda_10>::operator()'::__l5::
           _dynamic_atexit_destructor_for__CloseButtonStyle__);
    _Init_thread_footer(&::_TSS3);
  }
  if ((*(int *)(lVar2 + 0x9d4c) < ::_TSS4) && (_Init_thread_header(&::_TSS4), ::_TSS4 == -1)) {
    pFVar23 = FTextBlockStyle::FTextBlockStyle((FTextBlockStyle *)local_26f8,&NormalText);
    local_2768 = FLinearColor::Black.field0_0x0;
    local_2778 = (void *)((ulonglong)local_2778 & 0xff00000000000000);
    TStack_2770.DebugPtr = (UObject *)0x0;
    pFVar13 = ::FName::FName(&local_res10,"Regular");
    local_res8._0_4_ = *(float *)&pFVar13->ComparisonIndex;
    local_res8._4_4_ = (float)pFVar13->Number;
    pFVar18 = FLegacySlateFontInfoCache::Get();
    FLegacySlateFontInfoCache::GetDefaultFont
              (pFVar18,(TSharedRef<FCompositeFont_const_,1> *)&local_2748._s_0);
    local_2798._0_8_ = local_2748._0_8_;
    local_2798._8_8_ = local_2748._8_8_;
    if ((TReferenceControllerBase<1> *)local_2748._8_8_ != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      *(atomic<int> *)(local_2748._8_8_ + 8) =
           (atomic<int>)((int)*(atomic<int> *)(local_2748._8_8_ + 8) + 1);
      UNLOCK();
    }
    FSlateFontInfo::FSlateFontInfo
              ((FSlateFontInfo *)local_2158,(TSharedPtr<FCompositeFont_const_,1> *)&local_2798._s_0,
               __real_41100000,(FName *)&local_res8._s_0,(FFontOutlineSettings *)&local_2778);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_2748._8_8_);
    FSlateFontInfo::operator=(&pFVar23->Font,(FSlateFontInfo *)local_2158);
    auVar7[0xf] = 0;
    auVar7._0_15_ = local_27a8._1_15_;
    local_27a8 = (FLinearColor_u_0)(auVar7 << 8);
    (pFVar23->ColorAndOpacity).SpecifiedColor.field0_0x0._s_0 =
         (FLinearColor_u_0_s_0)FLinearColor::White.field0_0x0;
    *(float *)&(pFVar23->ColorAndOpacity).ColorUseRule = local_27a8._s_0.R;
    *(undefined4 *)&pFVar23->ShadowOffset = 0x3f800000;
    *(undefined4 *)&(pFVar23->ShadowOffset).field_0x4 = 0x3f800000;
    (pFVar23->ShadowColorAndOpacity).field0_0x0._s_0 =
         (FLinearColor_u_0_s_0)FLinearColor::Black.field0_0x0;
    FTextBlockStyle::FTextBlockStyle(&TitleTextStyle,pFVar23);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_2158._56_8_);
    FTextBlockStyle::~FTextBlockStyle((FTextBlockStyle *)local_26f8);
    atexit(``FUMGCoreStyle::Create'::__l2::<lambda_10>::operator()'::__l5::
           _dynamic_atexit_destructor_for__TitleTextStyle__);
    _Init_thread_footer(&::_TSS4);
  }
  pFVar1 = (FSlateStyleSet *)**(undefined8 **)this;
  pFVar15 = FWindowStyle::FWindowStyle(&local_1de8);
  FButtonStyle::operator=(&pFVar15->MinimizeButtonStyle,&MinimizeButtonStyle);
  FButtonStyle::operator=(&pFVar15->MaximizeButtonStyle,&MaximizeButtonStyle);
  FButtonStyle::operator=(&pFVar15->RestoreButtonStyle,&RestoreButtonStyle);
  FButtonStyle::operator=(&pFVar15->CloseButtonStyle,&CloseButtonStyle);
  FTextBlockStyle::operator=(&pFVar15->TitleTextStyle,&TitleTextStyle);
  local_res8._s_0 = (TVector2<float>_u_0_s_0)CoreStyleConstants::Icon32x32;
  local_2798._0_8_ = pvVar8;
  local_2798._8_8_ = pTVar9;
  pFVar11 = (FString *)
            (**(code **)(*(longlong *)**(undefined8 **)this + 0xf0))
                      ((longlong *)**(undefined8 **)this,local_27b8,"Common/Window/WindowTitle",
                       L".png");
  pFVar14 = (FSlateBrush *)
            FSlateImageBrush::FSlateImageBrush
                      ((FSlateImageBrush *)local_1f48,pFVar11,
                       (FDeprecateVector2DParameter *)&local_res8._s_0,
                       (FLinearColor *)&local_2798._s_0,Horizontal,FullColor);
  FSlateBrush::operator=(&pFVar15->ActiveTitleBrush,pFVar14);
  local_res8._s_0 = (TVector2<float>_u_0_s_0)CoreStyleConstants::Icon32x32;
  local_2798._0_8_ = pvVar8;
  local_2798._8_8_ = pTVar9;
  pFVar11 = (FString *)
            (**(code **)(*(longlong *)**(undefined8 **)this + 0xf0))
                      ((longlong *)**(undefined8 **)this,&local_2778,
                       "Common/Window/WindowTitle_Inactive",L".png");
  pFVar14 = (FSlateBrush *)
            FSlateImageBrush::FSlateImageBrush
                      ((FSlateImageBrush *)local_1ff8,pFVar11,
                       (FDeprecateVector2DParameter *)&local_res8._s_0,
                       (FLinearColor *)&local_2798._s_0,Horizontal,FullColor);
  FSlateBrush::operator=(&pFVar15->InactiveTitleBrush,pFVar14);
  local_res8._s_0 = (TVector2<float>_u_0_s_0)CoreStyleConstants::Icon24x24;
  local_2798._0_8_ = pvVar8;
  local_2798._8_8_ = pTVar9;
  pFVar11 = (FString *)
            (**(code **)(*(longlong *)**(undefined8 **)this + 0xf0))
                      ((longlong *)**(undefined8 **)this,local_2708,
                       "Common/Window/WindowTitle_Flashing",L".png");
  pFVar14 = (FSlateBrush *)
            FSlateImageBrush::FSlateImageBrush
                      ((FSlateImageBrush *)local_20a8,pFVar11,
                       (FDeprecateVector2DParameter *)&local_res8._s_0,
                       (FLinearColor *)&local_2798._s_0,Horizontal,FullColor);
  FSlateBrush::operator=(&pFVar15->FlashTitleBrush,pFVar14);
  local_2798._0_8_ = pvVar8;
  local_2798._8_8_ = pTVar9;
  local_2758[0] = ___xmm_3dc000003dc000003dc000003dc00000;
  local_2758[1] = (void *)_UNK_1509250d8;
  pFVar11 = (FString *)
            (**(code **)(*(longlong *)**(undefined8 **)this + 0xf0))
                      ((longlong *)**(undefined8 **)this,&local_2748,"Common/Window/WindowOutline",
                       L".png");
  pFVar14 = (FSlateBrush *)
            FSlateBorderBrush::FSlateBorderBrush
                      ((FSlateBorderBrush *)local_2158,pFVar11,(FMargin *)local_2758,
                       (FLinearColor *)&local_2798._s_0,FullColor);
  FSlateBrush::operator=(&pFVar15->OutlineBrush,pFVar14);
  uVar10 = _UNK_1509252c8;
  *(undefined8 *)&(pFVar15->OutlineColor).SpecifiedColor.field0_0x0 =
       ___xmm_3f8000003dcccccd3dcccccd3dcccccd;
  *(undefined8 *)((longlong)&(pFVar15->OutlineColor).SpecifiedColor.field0_0x0 + 8) = uVar10;
  local_2758[1] = (void *)_UNK_1509251f8;
  local_2758[0] = ___xmm_3ef5c28f3ef5c28f3ef5c28f3ef5c28f;
  local_2788 = local_2788 & 0xffffff00;
  (pFVar15->OutlineColor).ColorUseRule = (undefined1)local_2788;
  (pFVar15->OutlineColor).ColorTableId = local_2788._1_1_;
  *(undefined2 *)&(pFVar15->OutlineColor).field_0x12 = local_2788._2_2_;
  local_2798._0_8_ = pvVar8;
  local_2798._8_8_ = pTVar9;
  pFVar11 = (FString *)
            (**(code **)(*(longlong *)**(undefined8 **)this + 0xf0))
                      ((longlong *)**(undefined8 **)this,&local_2718,"Common/Window/WindowBorder",
                       L".png");
  pFVar14 = (FSlateBrush *)
            FSlateBoxBrush::FSlateBoxBrush
                      ((FSlateBoxBrush *)local_2208,pFVar11,(FMargin *)local_2758,
                       (FLinearColor *)&local_2798._s_0,FullColor);
  FSlateBrush::operator=(&pFVar15->BorderBrush,pFVar14);
  local_res8 = (TVector2<float>_u_0)0x4294000042940000;
  pFVar11 = (FString *)
            (**(code **)(*(longlong *)**(undefined8 **)this + 0xf0))
                      ((longlong *)**(undefined8 **)this,local_2738,"Common/Window/WindowBackground"
                       ,L".png");
  pFVar14 = (FSlateBrush *)
            FSlateImageBrush::FSlateImageBrush
                      ((FSlateImageBrush *)local_2368,pFVar11,
                       (FDeprecateVector2DParameter *)&local_res8._s_0,&FLinearColor::White,Both,
                       FullColor);
  FSlateBrush::operator=(&pFVar15->BackgroundBrush,pFVar14);
  local_res8 = (TVector2<float>_u_0)0x4280000042800000;
  pFVar11 = (FString *)
            (**(code **)(*(longlong *)**(undefined8 **)this + 0xf0))
                      ((longlong *)**(undefined8 **)this,local_2728,"Common/NoiseBackground",L".png"
                      );
  pFVar14 = (FSlateBrush *)
            FSlateImageBrush::FSlateImageBrush
                      ((FSlateImageBrush *)local_22b8,pFVar11,
                       (FDeprecateVector2DParameter *)&local_res8._s_0,&FLinearColor::White,Both,
                       FullColor);
  FSlateBrush::operator=(&pFVar15->ChildBackgroundBrush,pFVar14);
  pFVar13 = ::FName::FName(&local_res10,"Window");
  FSlateStyleSet::Set<FWindowStyle>(pFVar1,*pFVar13,pFVar15);
  local_22b8[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_2218);
  if (local_2728[0] != (void *)0x0) {
    FMemory::Free(local_2728[0]);
  }
  local_2368[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_22c8);
  if (local_2738[0] != (void *)0x0) {
    FMemory::Free(local_2738[0]);
  }
  local_2208[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_2168);
  if ((void *)local_2718._0_8_ != (void *)0x0) {
    FMemory::Free((void *)local_2718._0_8_);
  }
  local_2158._0_8_ = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_20b8);
  if ((void *)local_2748._0_8_ != (void *)0x0) {
    FMemory::Free((void *)local_2748._0_8_);
  }
  local_20a8[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_2008);
  if (local_2708[0] != (void *)0x0) {
    FMemory::Free(local_2708[0]);
  }
  local_1ff8[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_1f58);
  if (local_2778 != (void *)0x0) {
    FMemory::Free(local_2778);
  }
  local_1f48[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_1ea8);
  if (local_27b8 != (undefined1  [8])0x0) {
    FMemory::Free((void *)local_27b8);
  }
  FWindowStyle::~FWindowStyle(&local_1de8);
  pFVar1 = (FSlateStyleSet *)**(undefined8 **)this;
  pFVar16 = ::operator_new(0xb0);
  pFVar17 = (FSlateBoxBrush *)pFVar22;
  if (pFVar16 != (FSlateBoxBrush *)0x0) {
    local_res8 = (TVector2<float>_u_0)0x4280000042800000;
    local_27b8 = (undefined1  [8])pvVar8;
    _fStack_27b0 = pTVar9;
    local_2778 = ___xmm_3ec800003ec800003ec800003ec80000;
    TStack_2770 = _UNK_1509251b8;
    pFVar11 = (FString *)
              (**(code **)(*(longlong *)**(undefined8 **)this + 0xf0))
                        ((longlong *)**(undefined8 **)this,local_2708,"Tutorials/TutorialBorder",
                         L".png");
    pFVar17 = FSlateBoxBrush::FSlateBoxBrush
                        (pFVar16,pFVar11,(FDeprecateVector2DParameter *)&local_res8._s_0,
                         (FMargin *)&local_2778,(FLinearColor *)local_27b8,FullColor);
  }
  pFVar13 = ::FName::FName(&local_res10,"Tutorials.Border");
  FSlateStyleSet::Set<FSlateBoxBrush>(pFVar1,*pFVar13,pFVar17);
  if ((pFVar16 != (FSlateBoxBrush *)0x0) && (local_2708[0] != (void *)0x0)) {
    FMemory::Free(local_2708[0]);
  }
  pFVar1 = (FSlateStyleSet *)**(undefined8 **)this;
  pFVar16 = ::operator_new(0xb0);
  pFVar17 = (FSlateBoxBrush *)pFVar22;
  if (pFVar16 != (FSlateBoxBrush *)0x0) {
    local_res8 = (TVector2<float>_u_0)0x4380000043800000;
    local_27b8 = (undefined1  [8])pvVar8;
    _fStack_27b0 = pTVar9;
    local_2778 = ___xmm_3ee400003ee400003ee400003ee40000;
    TStack_2770 = _UNK_1509251e8;
    pFVar11 = (FString *)
              (**(code **)(*(longlong *)**(undefined8 **)this + 0xf0))
                        ((longlong *)**(undefined8 **)this,local_2708,"Tutorials/TutorialShadow",
                         L".png");
    pFVar17 = FSlateBoxBrush::FSlateBoxBrush
                        (pFVar16,pFVar11,(FDeprecateVector2DParameter *)&local_res8._s_0,
                         (FMargin *)&local_2778,(FLinearColor *)local_27b8,FullColor);
  }
  pFVar13 = ::FName::FName(&local_res10,"Tutorials.Shadow");
  FSlateStyleSet::Set<FSlateBoxBrush>(pFVar1,*pFVar13,pFVar17);
  if ((pFVar16 != (FSlateBoxBrush *)0x0) && (local_2708[0] != (void *)0x0)) {
    FMemory::Free(local_2708[0]);
  }
  pFVar1 = (FSlateStyleSet *)**(undefined8 **)this;
  local_27b8 = (undefined1  [8])___xmm_40400000418000004040000041800000;
  _fStack_27b0 = _UNK_1509253c8;
  pFVar13 = ::FName::FName((FName *)&local_res8._s_0,"StandardDialog.ContentPadding");
  FSlateStyleSet::Set(pFVar1,*pFVar13,(FMargin *)local_27b8);
  pFVar1 = (FSlateStyleSet *)**(undefined8 **)this;
  local_27b8 = (undefined1  [8])___xmm_00000000000000000000000041000000;
  _fStack_27b0 = _UNK_150924fe8;
  pFVar13 = ::FName::FName((FName *)&local_res8._s_0,"StandardDialog.SlotPadding");
  FSlateStyleSet::Set(pFVar1,*pFVar13,(FMargin *)local_27b8);
  pFVar1 = (FSlateStyleSet *)**(undefined8 **)this;
  pFVar13 = ::FName::FName((FName *)&local_res8._s_0,"StandardDialog.MinDesiredSlotWidth");
  FSlateStyleSet::Set(pFVar1,*pFVar13,__real_42a00000);
  pFVar1 = (FSlateStyleSet *)**(undefined8 **)this;
  pFVar13 = ::FName::FName((FName *)&local_res8._s_0,"StandardDialog.MinDesiredSlotHeight");
  FSlateStyleSet::Set(pFVar1,*pFVar13,0.0);
  pFVar1 = (FSlateStyleSet *)**(undefined8 **)this;
  local_2778 = (void *)((ulonglong)local_2778 & 0xff00000000000000);
  TStack_2770.DebugPtr = (UObject *)0x0;
  local_2768 = FLinearColor::Black.field0_0x0;
  pFVar13 = ::FName::FName(&local_res10,"Regular");
  local_res8._0_4_ = *(float *)&pFVar13->ComparisonIndex;
  local_res8._4_4_ = (float)pFVar13->Number;
  pFVar18 = FLegacySlateFontInfoCache::Get();
  FLegacySlateFontInfoCache::GetDefaultFont
            (pFVar18,(TSharedRef<FCompositeFont_const_,1> *)&local_2748._s_0);
  local_27b8 = (undefined1  [8])local_2748._0_8_;
  _fStack_27b0 = local_2748._8_8_;
  if ((TReferenceControllerBase<1> *)local_2748._8_8_ != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    *(atomic<int> *)(local_2748._8_8_ + 8) =
         (atomic<int>)((int)*(atomic<int> *)(local_2748._8_8_ + 8) + 1);
    UNLOCK();
  }
  FSlateFontInfo::FSlateFontInfo
            ((FSlateFontInfo *)local_2158,(TSharedPtr<FCompositeFont_const_,1> *)local_27b8,
             __real_41300000,(FName *)&local_res8._s_0,(FFontOutlineSettings *)&local_2778);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_2748._8_8_);
  pFVar13 = ::FName::FName(&local_res18,"StandardDialog.LargeFont");
  FSlateStyleSet::Set(pFVar1,*pFVar13,(FSlateFontInfo *)local_2158);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_2158._56_8_);
  pFVar1 = (FSlateStyleSet *)**(undefined8 **)this;
  pFVar19 = ::operator_new(0xb0);
  pFVar20 = pFVar22;
  if (pFVar19 != (FSlateImageBrush *)0x0) {
    local_res8._s_0 = (TVector2<float>_u_0_s_0)CoreStyleConstants::Icon16x16;
    local_27b8 = (undefined1  [8])pvVar8;
    _fStack_27b0 = pTVar9;
    pFVar11 = (FString *)
              (**(code **)(*(longlong *)**(undefined8 **)this + 0xf0))
                        ((longlong *)**(undefined8 **)this,&local_2778,
                         "Icons/Icon_tab_WidgetReflector_16x",L".png");
    pFVar20 = FSlateImageBrush::FSlateImageBrush
                        (pFVar19,pFVar11,(FDeprecateVector2DParameter *)&local_res8._s_0,
                         (FLinearColor *)local_27b8,NoTile,FullColor);
  }
  pFVar13 = ::FName::FName(&local_res10,"WidgetReflector.TabIcon");
  FSlateStyleSet::Set<FSlateImageBrush>(pFVar1,*pFVar13,pFVar20);
  if ((pFVar19 != (FSlateImageBrush *)0x0) && (local_2778 != (void *)0x0)) {
    FMemory::Free(local_2778);
  }
  pFVar1 = (FSlateStyleSet *)**(undefined8 **)this;
  pFVar19 = ::operator_new(0xb0);
  pFVar20 = pFVar22;
  if (pFVar19 != (FSlateImageBrush *)0x0) {
    local_res8._s_0 = (TVector2<float>_u_0_s_0)CoreStyleConstants::Icon40x40;
    local_27b8 = (undefined1  [8])pvVar8;
    _fStack_27b0 = pTVar9;
    pFVar11 = (FString *)
              (**(code **)(*(longlong *)**(undefined8 **)this + 0xf0))
                        ((longlong *)**(undefined8 **)this,&local_2778,
                         "Icons/Icon_tab_WidgetReflector_40x",L".png");
    pFVar20 = FSlateImageBrush::FSlateImageBrush
                        (pFVar19,pFVar11,(FDeprecateVector2DParameter *)&local_res8._s_0,
                         (FLinearColor *)local_27b8,NoTile,FullColor);
  }
  pFVar13 = ::FName::FName(&local_res10,"WidgetReflector.Icon");
  FSlateStyleSet::Set<FSlateImageBrush>(pFVar1,*pFVar13,pFVar20);
  if ((pFVar19 != (FSlateImageBrush *)0x0) && (local_2778 != (void *)0x0)) {
    FMemory::Free(local_2778);
  }
  pFVar1 = (FSlateStyleSet *)**(undefined8 **)this;
  pFVar19 = ::operator_new(0xb0);
  pFVar20 = pFVar22;
  if (pFVar19 != (FSlateImageBrush *)0x0) {
    local_res8._s_0 = (TVector2<float>_u_0_s_0)CoreStyleConstants::Icon20x20;
    local_27b8 = (undefined1  [8])pvVar8;
    _fStack_27b0 = pTVar9;
    pFVar11 = (FString *)
              (**(code **)(*(longlong *)**(undefined8 **)this + 0xf0))
                        ((longlong *)**(undefined8 **)this,&local_2778,
                         "Icons/Icon_tab_WidgetReflector_40x",L".png");
    pFVar20 = FSlateImageBrush::FSlateImageBrush
                        (pFVar19,pFVar11,(FDeprecateVector2DParameter *)&local_res8._s_0,
                         (FLinearColor *)local_27b8,NoTile,FullColor);
  }
  pFVar13 = ::FName::FName(&local_res10,"WidgetReflector.Icon.Small");
  FSlateStyleSet::Set<FSlateImageBrush>(pFVar1,*pFVar13,pFVar20);
  if ((pFVar19 != (FSlateImageBrush *)0x0) && (local_2778 != (void *)0x0)) {
    FMemory::Free(local_2778);
  }
  pFVar1 = (FSlateStyleSet *)**(undefined8 **)this;
  pFVar21 = FCheckBoxStyle::FCheckBoxStyle((FCheckBoxStyle *)&local_1de8);
  local_res8._s_0 = (TVector2<float>_u_0_s_0)CoreStyleConstants::Icon14x14;
  local_27b8 = (undefined1  [8])pvVar8;
  _fStack_27b0 = pTVar9;
  pFVar11 = (FString *)
            (**(code **)(*(longlong *)**(undefined8 **)this + 0xf0))
                      ((longlong *)**(undefined8 **)this,&local_2718,"Icons/Empty_14x",L".png");
  pFVar14 = (FSlateBrush *)
            FSlateImageBrush::FSlateImageBrush
                      ((FSlateImageBrush *)local_26f8,pFVar11,
                       (FDeprecateVector2DParameter *)&local_res8._s_0,(FLinearColor *)local_27b8,
                       NoTile,FullColor);
  FSlateBrush::operator=(&pFVar21->UncheckedImage,pFVar14);
  local_res8._s_0 = (TVector2<float>_u_0_s_0)CoreStyleConstants::Icon14x14;
  local_27b8 = (undefined1  [8])pvVar8;
  _fStack_27b0 = pTVar9;
  pFVar11 = (FString *)
            (**(code **)(*(longlong *)**(undefined8 **)this + 0xf0))
                      ((longlong *)**(undefined8 **)this,local_2738,"Icons/Empty_14x",L".png");
  pFVar14 = (FSlateBrush *)
            FSlateImageBrush::FSlateImageBrush
                      ((FSlateImageBrush *)local_1e98,pFVar11,
                       (FDeprecateVector2DParameter *)&local_res8._s_0,(FLinearColor *)local_27b8,
                       NoTile,FullColor);
  FSlateBrush::operator=(&pFVar21->UncheckedHoveredImage,pFVar14);
  local_res8._s_0 = (TVector2<float>_u_0_s_0)CoreStyleConstants::Icon14x14;
  local_27b8 = (undefined1  [8])pvVar8;
  _fStack_27b0 = pTVar9;
  pFVar11 = (FString *)
            (**(code **)(*(longlong *)**(undefined8 **)this + 0xf0))
                      ((longlong *)**(undefined8 **)this,local_2728,"Common/SmallCheckBox_Hovered",
                       L".png");
  pFVar14 = (FSlateBrush *)
            FSlateImageBrush::FSlateImageBrush
                      ((FSlateImageBrush *)local_2158,pFVar11,
                       (FDeprecateVector2DParameter *)&local_res8._s_0,(FLinearColor *)local_27b8,
                       NoTile,FullColor);
  FSlateBrush::operator=(&pFVar21->UncheckedPressedImage,pFVar14);
  local_res8._s_0 = (TVector2<float>_u_0_s_0)CoreStyleConstants::Icon14x14;
  local_27b8 = (undefined1  [8])pvVar8;
  _fStack_27b0 = pTVar9;
  pFVar11 = (FString *)
            (**(code **)(*(longlong *)**(undefined8 **)this + 0xf0))
                      ((longlong *)**(undefined8 **)this,local_2758,"Common/SmallCheck",L".png");
  pFVar14 = (FSlateBrush *)
            FSlateImageBrush::FSlateImageBrush
                      ((FSlateImageBrush *)local_2208,pFVar11,
                       (FDeprecateVector2DParameter *)&local_res8._s_0,(FLinearColor *)local_27b8,
                       NoTile,FullColor);
  FSlateBrush::operator=(&pFVar21->CheckedImage,pFVar14);
  local_res8._s_0 = (TVector2<float>_u_0_s_0)CoreStyleConstants::Icon14x14;
  local_27b8 = (undefined1  [8])pvVar8;
  _fStack_27b0 = pTVar9;
  pFVar11 = (FString *)
            (**(code **)(*(longlong *)**(undefined8 **)this + 0xf0))
                      ((longlong *)**(undefined8 **)this,&local_2798,"Common/SmallCheck",L".png");
  pFVar14 = (FSlateBrush *)
            FSlateImageBrush::FSlateImageBrush
                      ((FSlateImageBrush *)local_2368,pFVar11,
                       (FDeprecateVector2DParameter *)&local_res8._s_0,(FLinearColor *)local_27b8,
                       NoTile,FullColor);
  FSlateBrush::operator=(&pFVar21->CheckedHoveredImage,pFVar14);
  local_res8._s_0 = (TVector2<float>_u_0_s_0)CoreStyleConstants::Icon14x14;
  local_27b8 = (undefined1  [8])pvVar8;
  _fStack_27b0 = pTVar9;
  pFVar11 = (FString *)
            (**(code **)(*(longlong *)**(undefined8 **)this + 0xf0))
                      ((longlong *)**(undefined8 **)this,local_2708,"Common/SmallCheck",L".png");
  pFVar14 = (FSlateBrush *)
            FSlateImageBrush::FSlateImageBrush
                      ((FSlateImageBrush *)local_22b8,pFVar11,
                       (FDeprecateVector2DParameter *)&local_res8._s_0,(FLinearColor *)local_27b8,
                       NoTile,FullColor);
  FSlateBrush::operator=(&pFVar21->CheckedPressedImage,pFVar14);
  local_res8._s_0 = (TVector2<float>_u_0_s_0)CoreStyleConstants::Icon14x14;
  local_27b8 = (undefined1  [8])pvVar8;
  _fStack_27b0 = pTVar9;
  pFVar11 = (FString *)
            (**(code **)(*(longlong *)**(undefined8 **)this + 0xf0))
                      ((longlong *)**(undefined8 **)this,&local_2778,"Icons/Empty_14x",L".png");
  pFVar14 = (FSlateBrush *)
            FSlateImageBrush::FSlateImageBrush
                      ((FSlateImageBrush *)local_20a8,pFVar11,
                       (FDeprecateVector2DParameter *)&local_res8._s_0,(FLinearColor *)local_27b8,
                       NoTile,FullColor);
  FSlateBrush::operator=(&pFVar21->UndeterminedImage,pFVar14);
  local_res8 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  pFVar14 = (FSlateBrush *)
            FSlateNoResource::FSlateNoResource
                      ((FSlateNoResource *)local_1ff8,
                       (FDeprecateVector2DParameter *)&local_res8._s_0);
  FSlateBrush::operator=(&pFVar21->UndeterminedHoveredImage,pFVar14);
  local_res8 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  pFVar14 = (FSlateBrush *)
            FSlateNoResource::FSlateNoResource
                      ((FSlateNoResource *)local_1f48,
                       (FDeprecateVector2DParameter *)&local_res8._s_0);
  FSlateBrush::operator=(&pFVar21->UndeterminedPressedImage,pFVar14);
  pFVar13 = ::FName::FName(&local_res10,"WidgetReflector.FocusableCheck");
  FSlateStyleSet::Set<FCheckBoxStyle>(pFVar1,*pFVar13,pFVar21);
  local_1f48[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_1ea8);
  local_1ff8[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_1f58);
  local_20a8[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_2008);
  if (local_2778 != (void *)0x0) {
    FMemory::Free(local_2778);
  }
  local_22b8[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_2218);
  if (local_2708[0] != (void *)0x0) {
    FMemory::Free(local_2708[0]);
  }
  local_2368[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_22c8);
  if ((void *)local_2798._0_8_ != (void *)0x0) {
    FMemory::Free((void *)local_2798._0_8_);
  }
  local_2208[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_2168);
  if (local_2758[0] != (void *)0x0) {
    FMemory::Free(local_2758[0]);
  }
  local_2158._0_8_ = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_20b8);
  if (local_2728[0] != (void *)0x0) {
    FMemory::Free(local_2728[0]);
  }
  local_1e98[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_1df8);
  if (local_2738[0] != (void *)0x0) {
    FMemory::Free(local_2738[0]);
  }
  local_26f8 = (undefined1  [8])&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)CONCAT44(_EStack_2654,local_2664._s_0.A));
  if ((void *)local_2718._0_8_ != (void *)0x0) {
    FMemory::Free((void *)local_2718._0_8_);
  }
  FCheckBoxStyle::~FCheckBoxStyle((FCheckBoxStyle *)&local_1de8);
  pFVar1 = (FSlateStyleSet *)**(undefined8 **)this;
  local_26f8 = (undefined1  [8])&___7FTextBlockStyle__6B_;
  FSlateFontInfo::FSlateFontInfo((FSlateFontInfo *)local_26f0,&NormalText.Font);
  local_2680 = NormalText.ColorAndOpacity._16_4_;
  _local_2690 = NormalText.ColorAndOpacity.SpecifiedColor.field0_0x0;
  local_267c = (TVector2<float>_u_0)NormalText.ShadowOffset;
  EStack_2654 = NormalText.SelectedBackgroundColor.ColorUseRule;
  EStack_2653 = NormalText.SelectedBackgroundColor.ColorTableId;
  uStack_2652 = NormalText.SelectedBackgroundColor._18_2_;
  local_2674 = NormalText.ShadowColorAndOpacity.field0_0x0;
  local_2640.Value._0_1_ = NormalText.HighlightColor.ColorUseRule;
  local_2640.Value._1_1_ = NormalText.HighlightColor.ColorTableId;
  local_2640.Value._2_2_ = NormalText.HighlightColor._18_2_;
  local_2664._0_12_ = NormalText.SelectedBackgroundColor.SpecifiedColor.field0_0x0._0_12_;
  local_2664._s_0.A = NormalText.SelectedBackgroundColor.SpecifiedColor.field0_0x0._12_4_;
  local_2650 = NormalText.HighlightColor.SpecifiedColor.field0_0x0;
  FSlateBrush::FSlateBrush(&local_2638,&NormalText.HighlightShape);
  FSlateBrush::FSlateBrush(&local_2588,&NormalText.StrikeBrush);
  FSlateBrush::FSlateBrush(&local_24d8,&NormalText.UnderlineBrush);
  local_2428._1_1_ = NormalText.OverflowPolicy;
  local_2428._0_1_ = NormalText.TransformPolicy;
  local_2778 = (void *)((ulonglong)local_2778 & 0xff00000000000000);
  TStack_2770.DebugPtr = (UObject *)0x0;
  local_2768 = FLinearColor::Black.field0_0x0;
  pFVar13 = ::FName::FName(&local_res10,"Regular");
  local_res8._0_4_ = *(float *)&pFVar13->ComparisonIndex;
  local_res8._4_4_ = (float)pFVar13->Number;
  pFVar18 = FLegacySlateFontInfoCache::Get();
  FLegacySlateFontInfoCache::GetDefaultFont
            (pFVar18,(TSharedRef<FCompositeFont_const_,1> *)&local_2748._s_0);
  local_27b8 = (undefined1  [8])local_2748._0_8_;
  _fStack_27b0 = local_2748._8_8_;
  if ((TReferenceControllerBase<1> *)local_2748._8_8_ != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    *(atomic<int> *)(local_2748._8_8_ + 8) =
         (atomic<int>)((int)*(atomic<int> *)(local_2748._8_8_ + 8) + 1);
    UNLOCK();
  }
  FSlateFontInfo::FSlateFontInfo
            ((FSlateFontInfo *)local_2158,(TSharedPtr<FCompositeFont_const_,1> *)local_27b8,
             __real_41000000,(FName *)&local_res8._s_0,(FFontOutlineSettings *)&local_2778);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_2748._8_8_);
  FSlateFontInfo::operator=((FSlateFontInfo *)local_26f0,(FSlateFontInfo *)local_2158);
  local_res8 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  local_267c = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  pFVar13 = ::FName::FName(&local_res18,"MessageLog");
  FSlateStyleSet::Set<FTextBlockStyle>(pFVar1,*pFVar13,(FTextBlockStyle *)local_26f8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_2158._56_8_);
  local_26f8 = (undefined1  [8])&___7FTextBlockStyle__6B_;
  local_24d8._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_24d8.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  local_2588._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2588.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  local_2638._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2638.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_26b8.ReferenceController);
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)local_26f8);
  pFVar1 = (FSlateStyleSet *)**(undefined8 **)this;
  pFVar19 = ::operator_new(0xb0);
  pFVar20 = pFVar22;
  if (pFVar19 != (FSlateImageBrush *)0x0) {
    local_res8._s_0 = (TVector2<float>_u_0_s_0)CoreStyleConstants::Icon16x16;
    local_27b8 = (undefined1  [8])pvVar8;
    _fStack_27b0 = pTVar9;
    pFVar11 = (FString *)
              (**(code **)(*(longlong *)**(undefined8 **)this + 0xf0))
                        ((longlong *)**(undefined8 **)this,&local_2778,"MessageLog/Log_Error",
                         L".png");
    pFVar20 = FSlateImageBrush::FSlateImageBrush
                        (pFVar19,pFVar11,(FDeprecateVector2DParameter *)&local_res8._s_0,
                         (FLinearColor *)local_27b8,NoTile,FullColor);
  }
  pFVar13 = ::FName::FName(&local_res10,"MessageLog.Error");
  FSlateStyleSet::Set<FSlateImageBrush>(pFVar1,*pFVar13,pFVar20);
  if ((pFVar19 != (FSlateImageBrush *)0x0) && (local_2778 != (void *)0x0)) {
    FMemory::Free(local_2778);
  }
  pFVar1 = (FSlateStyleSet *)**(undefined8 **)this;
  pFVar19 = ::operator_new(0xb0);
  pFVar20 = pFVar22;
  if (pFVar19 != (FSlateImageBrush *)0x0) {
    local_res8._s_0 = (TVector2<float>_u_0_s_0)CoreStyleConstants::Icon16x16;
    local_27b8 = (undefined1  [8])pvVar8;
    _fStack_27b0 = pTVar9;
    pFVar11 = (FString *)
              (**(code **)(*(longlong *)**(undefined8 **)this + 0xf0))
                        ((longlong *)**(undefined8 **)this,&local_2778,"MessageLog/Log_Warning",
                         L".png");
    pFVar20 = FSlateImageBrush::FSlateImageBrush
                        (pFVar19,pFVar11,(FDeprecateVector2DParameter *)&local_res8._s_0,
                         (FLinearColor *)local_27b8,NoTile,FullColor);
  }
  pFVar13 = ::FName::FName(&local_res10,"MessageLog.Warning");
  FSlateStyleSet::Set<FSlateImageBrush>(pFVar1,*pFVar13,pFVar20);
  if ((pFVar19 != (FSlateImageBrush *)0x0) && (local_2778 != (void *)0x0)) {
    FMemory::Free(local_2778);
  }
  cVar26 = '\0';
  pFVar1 = (FSlateStyleSet *)**(undefined8 **)this;
  pFVar19 = ::operator_new(0xb0);
  pFVar20 = pFVar22;
  if (pFVar19 != (FSlateImageBrush *)0x0) {
    local_res8._s_0 = (TVector2<float>_u_0_s_0)CoreStyleConstants::Icon16x16;
    cVar26 = -0x80;
    local_27b8 = (undefined1  [8])pvVar8;
    _fStack_27b0 = pTVar9;
    pFVar11 = (FString *)
              (**(code **)(*(longlong *)**(undefined8 **)this + 0xf0))
                        ((longlong *)**(undefined8 **)this,&local_2778,"MessageLog/Log_Note",L".png"
                        );
    pFVar20 = FSlateImageBrush::FSlateImageBrush
                        (pFVar19,pFVar11,(FDeprecateVector2DParameter *)&local_res8._s_0,
                         (FLinearColor *)local_27b8,NoTile,FullColor);
  }
  pFVar13 = ::FName::FName(&local_res10,"MessageLog.Note");
  FSlateStyleSet::Set<FSlateImageBrush>(pFVar1,*pFVar13,pFVar20);
  if ((cVar26 < '\0') && (local_2778 != (void *)0x0)) {
    FMemory::Free(local_2778);
  }
  pFVar1 = (FSlateStyleSet *)**(undefined8 **)this;
  pFVar19 = ::operator_new(0xb0);
  pFVar20 = pFVar22;
  if (pFVar19 != (FSlateImageBrush *)0x0) {
    local_res8._s_0 = (TVector2<float>_u_0_s_0)CoreStyleConstants::Icon8x8;
    local_27b8 = (undefined1  [8])pvVar8;
    _fStack_27b0 = pTVar9;
    pFVar11 = (FString *)
              (**(code **)(*(longlong *)**(undefined8 **)this + 0xf0))
                        ((longlong *)**(undefined8 **)this,&local_2778,"Icons/BackIcon",L".png");
    pFVar20 = FSlateImageBrush::FSlateImageBrush
                        (pFVar19,pFVar11,(FDeprecateVector2DParameter *)&local_res8._s_0,
                         (FLinearColor *)local_27b8,NoTile,FullColor);
  }
  pFVar13 = ::FName::FName(&local_res10,"Wizard.BackIcon");
  FSlateStyleSet::Set<FSlateImageBrush>(pFVar1,*pFVar13,pFVar20);
  if ((pFVar19 != (FSlateImageBrush *)0x0) && (local_2778 != (void *)0x0)) {
    FMemory::Free(local_2778);
  }
  pFVar1 = (FSlateStyleSet *)**(undefined8 **)this;
  pFVar20 = ::operator_new(0xb0);
  if (pFVar20 != (FSlateImageBrush *)0x0) {
    local_res8._s_0 = (TVector2<float>_u_0_s_0)CoreStyleConstants::Icon8x8;
    local_27b8 = (undefined1  [8])pvVar8;
    _fStack_27b0 = pTVar9;
    pFVar11 = (FString *)
              (**(code **)(*(longlong *)**(undefined8 **)this + 0xf0))
                        ((longlong *)**(undefined8 **)this,&local_2778,"Icons/NextIcon",L".png");
    pFVar22 = FSlateImageBrush::FSlateImageBrush
                        (pFVar20,pFVar11,(FDeprecateVector2DParameter *)&local_res8._s_0,
                         (FLinearColor *)local_27b8,NoTile,FullColor);
  }
  pFVar13 = ::FName::FName(&local_res10,"Wizard.NextIcon");
  FSlateStyleSet::Set<FSlateImageBrush>(pFVar1,*pFVar13,pFVar22);
  if ((pFVar20 != (FSlateImageBrush *)0x0) && (local_2778 != (void *)0x0)) {
    FMemory::Free(local_2778);
  }
  if ((*(int *)(lVar2 + 0x9d4c) < ::_TSS5) && (_Init_thread_header(&::_TSS5), ::_TSS5 == -1)) {
    pFVar23 = FTextBlockStyle::FTextBlockStyle((FTextBlockStyle *)local_26f8,&MonospacedText);
    local_27a8 = FLinearColor::Black.field0_0x0;
    local_27b8 = (undefined1  [8])((ulonglong)local_27b8 & 0xff00000000000000);
    _fStack_27b0 = (TReferenceControllerBase<1> *)0x0;
    pFVar13 = ::FName::FName((FName *)&local_res8._s_0,"Mono");
    pFVar24 = FCoreStyle::GetDefaultFontStyle
                        ((FSlateFontInfo *)local_2158,*pFVar13,__real_41100000,
                         (FFontOutlineSettings *)local_27b8);
    FSlateFontInfo::operator=(&pFVar23->Font,pFVar24);
    FTextBlockStyle::FTextBlockStyle(&SmallMonospacedText,pFVar23);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_2158._56_8_);
    FTextBlockStyle::~FTextBlockStyle((FTextBlockStyle *)local_26f8);
    atexit(``FUMGCoreStyle::Create'::__l2::<lambda_10>::operator()'::__l11::
           _dynamic_atexit_destructor_for__SmallMonospacedText__);
    _Init_thread_footer(&::_TSS5);
  }
  pFVar1 = (FSlateStyleSet *)**(undefined8 **)this;
  pFVar13 = ::FName::FName((FName *)&local_res8._s_0,"SyntaxHighlight.Normal");
  FSlateStyleSet::Set<FTextBlockStyle>(pFVar1,*pFVar13,&SmallMonospacedText);
  pFVar1 = (FSlateStyleSet *)**(undefined8 **)this;
  local_26f8 = (undefined1  [8])&___7FTextBlockStyle__6B_;
  FSlateFontInfo::FSlateFontInfo((FSlateFontInfo *)local_26f0,&SmallMonospacedText.Font);
  local_2680 = SmallMonospacedText.ColorAndOpacity._16_4_;
  _local_2690 = SmallMonospacedText.ColorAndOpacity.SpecifiedColor.field0_0x0;
  local_267c = (TVector2<float>_u_0)SmallMonospacedText.ShadowOffset;
  EStack_2654 = SmallMonospacedText.SelectedBackgroundColor.ColorUseRule;
  EStack_2653 = SmallMonospacedText.SelectedBackgroundColor.ColorTableId;
  uStack_2652 = SmallMonospacedText.SelectedBackgroundColor._18_2_;
  local_2674 = SmallMonospacedText.ShadowColorAndOpacity.field0_0x0;
  local_2640.Value._0_1_ = SmallMonospacedText.HighlightColor.ColorUseRule;
  local_2640.Value._1_1_ = SmallMonospacedText.HighlightColor.ColorTableId;
  local_2640.Value._2_2_ = SmallMonospacedText.HighlightColor._18_2_;
  local_2664._0_12_ = SmallMonospacedText.SelectedBackgroundColor.SpecifiedColor.field0_0x0._0_12_;
  local_2664._s_0.A = SmallMonospacedText.SelectedBackgroundColor.SpecifiedColor.field0_0x0._12_4_;
  local_2650 = SmallMonospacedText.HighlightColor.SpecifiedColor.field0_0x0;
  FSlateBrush::FSlateBrush(&local_2638,&SmallMonospacedText.HighlightShape);
  FSlateBrush::FSlateBrush(&local_2588,&SmallMonospacedText.StrikeBrush);
  FSlateBrush::FSlateBrush(&local_24d8,&SmallMonospacedText.UnderlineBrush);
  local_2428._1_1_ = SmallMonospacedText.OverflowPolicy;
  local_2428._0_1_ = SmallMonospacedText.TransformPolicy;
  auVar3[0xf] = 0;
  auVar3._0_15_ = local_27a8._1_15_;
  local_27a8 = (FLinearColor_u_0)(auVar3 << 8);
  local_2680 = local_27a8._s_0.R;
  local_27b8._4_4_ = FLinearColor::sRGBToLinearTable[0x6a];
  local_27b8._0_4_ = FLinearColor::sRGBToLinearTable[0];
  uStack_27ac = 0x3f800000;
  fStack_27b0 = FLinearColor::sRGBToLinearTable[0xb4];
  local_2690._4_4_ = FLinearColor::sRGBToLinearTable[0x6a];
  local_2690._0_4_ = FLinearColor::sRGBToLinearTable[0];
  fStack_2688 = FLinearColor::sRGBToLinearTable[0xb4];
  uStack_2684 = 0x3f800000;
  pFVar13 = ::FName::FName((FName *)&local_res8._s_0,"SyntaxHighlight.Node");
  FSlateStyleSet::Set<FTextBlockStyle>(pFVar1,*pFVar13,(FTextBlockStyle *)local_26f8);
  local_26f8 = (undefined1  [8])&___7FTextBlockStyle__6B_;
  local_24d8._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_24d8.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  local_2588._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2588.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  local_2638._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2638.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_26b8.ReferenceController);
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)local_26f8);
  pFVar1 = (FSlateStyleSet *)**(undefined8 **)this;
  local_26f8 = (undefined1  [8])&___7FTextBlockStyle__6B_;
  FSlateFontInfo::FSlateFontInfo((FSlateFontInfo *)local_26f0,&SmallMonospacedText.Font);
  local_2680 = SmallMonospacedText.ColorAndOpacity._16_4_;
  _local_2690 = SmallMonospacedText.ColorAndOpacity.SpecifiedColor.field0_0x0;
  local_267c = (TVector2<float>_u_0)SmallMonospacedText.ShadowOffset;
  EStack_2654 = SmallMonospacedText.SelectedBackgroundColor.ColorUseRule;
  EStack_2653 = SmallMonospacedText.SelectedBackgroundColor.ColorTableId;
  uStack_2652 = SmallMonospacedText.SelectedBackgroundColor._18_2_;
  local_2674 = SmallMonospacedText.ShadowColorAndOpacity.field0_0x0;
  local_2640.Value._0_1_ = SmallMonospacedText.HighlightColor.ColorUseRule;
  local_2640.Value._1_1_ = SmallMonospacedText.HighlightColor.ColorTableId;
  local_2640.Value._2_2_ = SmallMonospacedText.HighlightColor._18_2_;
  local_2664._0_12_ = SmallMonospacedText.SelectedBackgroundColor.SpecifiedColor.field0_0x0._0_12_;
  local_2664._s_0.A = SmallMonospacedText.SelectedBackgroundColor.SpecifiedColor.field0_0x0._12_4_;
  local_2650 = SmallMonospacedText.HighlightColor.SpecifiedColor.field0_0x0;
  FSlateBrush::FSlateBrush(&local_2638,&SmallMonospacedText.HighlightShape);
  FSlateBrush::FSlateBrush(&local_2588,&SmallMonospacedText.StrikeBrush);
  FSlateBrush::FSlateBrush(&local_24d8,&SmallMonospacedText.UnderlineBrush);
  local_2428._1_1_ = SmallMonospacedText.OverflowPolicy;
  local_2428._0_1_ = SmallMonospacedText.TransformPolicy;
  auVar4[0xf] = 0;
  auVar4._0_15_ = local_27a8._1_15_;
  local_27a8 = (FLinearColor_u_0)(auVar4 << 8);
  local_2680 = local_27a8._s_0.R;
  local_27b8._4_4_ = FLinearColor::sRGBToLinearTable[0];
  local_27b8._0_4_ = FLinearColor::sRGBToLinearTable[0xb4];
  uStack_27ac = 0x3f800000;
  fStack_27b0 = FLinearColor::sRGBToLinearTable[0];
  local_2690._4_4_ = FLinearColor::sRGBToLinearTable[0];
  local_2690._0_4_ = FLinearColor::sRGBToLinearTable[0xb4];
  fStack_2688 = FLinearColor::sRGBToLinearTable[0];
  uStack_2684 = 0x3f800000;
  pFVar13 = ::FName::FName((FName *)&local_res8._s_0,"SyntaxHighlight.NodeAttributeKey");
  FSlateStyleSet::Set<FTextBlockStyle>(pFVar1,*pFVar13,(FTextBlockStyle *)local_26f8);
  local_26f8 = (undefined1  [8])&___7FTextBlockStyle__6B_;
  local_24d8._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_24d8.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  local_2588._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2588.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  local_2638._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2638.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_26b8.ReferenceController);
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)local_26f8);
  pFVar1 = (FSlateStyleSet *)**(undefined8 **)this;
  local_26f8 = (undefined1  [8])&___7FTextBlockStyle__6B_;
  FSlateFontInfo::FSlateFontInfo((FSlateFontInfo *)local_26f0,&SmallMonospacedText.Font);
  _local_2690 = SmallMonospacedText.ColorAndOpacity.SpecifiedColor.field0_0x0;
  local_2680 = SmallMonospacedText.ColorAndOpacity._16_4_;
  local_267c = (TVector2<float>_u_0)SmallMonospacedText.ShadowOffset;
  local_2674 = SmallMonospacedText.ShadowColorAndOpacity.field0_0x0;
  EStack_2654 = SmallMonospacedText.SelectedBackgroundColor.ColorUseRule;
  EStack_2653 = SmallMonospacedText.SelectedBackgroundColor.ColorTableId;
  uStack_2652 = SmallMonospacedText.SelectedBackgroundColor._18_2_;
  local_2664._0_12_ = SmallMonospacedText.SelectedBackgroundColor.SpecifiedColor.field0_0x0._0_12_;
  local_2664._s_0.A = SmallMonospacedText.SelectedBackgroundColor.SpecifiedColor.field0_0x0._12_4_;
  local_2640.Value._0_1_ = SmallMonospacedText.HighlightColor.ColorUseRule;
  local_2640.Value._1_1_ = SmallMonospacedText.HighlightColor.ColorTableId;
  local_2640.Value._2_2_ = SmallMonospacedText.HighlightColor._18_2_;
  local_2650 = SmallMonospacedText.HighlightColor.SpecifiedColor.field0_0x0;
  FSlateBrush::FSlateBrush(&local_2638,&SmallMonospacedText.HighlightShape);
  FSlateBrush::FSlateBrush(&local_2588,&SmallMonospacedText.StrikeBrush);
  FSlateBrush::FSlateBrush(&local_24d8,&SmallMonospacedText.UnderlineBrush);
  local_2428._1_1_ = SmallMonospacedText.OverflowPolicy;
  local_2428._0_1_ = SmallMonospacedText.TransformPolicy;
  auVar5[0xf] = 0;
  auVar5._0_15_ = local_27a8._1_15_;
  local_27a8 = (FLinearColor_u_0)(auVar5 << 8);
  local_2680 = local_27a8._s_0.R;
  local_27b8._4_4_ = FLinearColor::sRGBToLinearTable[0xb4];
  local_27b8._0_4_ = FLinearColor::sRGBToLinearTable[0xb2];
  uStack_27ac = 0x3f800000;
  fStack_27b0 = FLinearColor::sRGBToLinearTable[0];
  local_2690._4_4_ = FLinearColor::sRGBToLinearTable[0xb4];
  local_2690._0_4_ = FLinearColor::sRGBToLinearTable[0xb2];
  fStack_2688 = FLinearColor::sRGBToLinearTable[0];
  uStack_2684 = 0x3f800000;
  pFVar13 = ::FName::FName((FName *)&local_res8._s_0,"SyntaxHighlight.NodeAttribueAssignment");
  FSlateStyleSet::Set<FTextBlockStyle>(pFVar1,*pFVar13,(FTextBlockStyle *)local_26f8);
  local_26f8 = (undefined1  [8])&___7FTextBlockStyle__6B_;
  local_24d8._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_24d8.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  local_2588._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2588.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  local_2638._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2638.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_26b8.ReferenceController);
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)local_26f8);
  pFVar1 = (FSlateStyleSet *)**(undefined8 **)this;
  local_26f8 = (undefined1  [8])&___7FTextBlockStyle__6B_;
  FSlateFontInfo::FSlateFontInfo((FSlateFontInfo *)local_26f0,&SmallMonospacedText.Font);
  local_2680 = SmallMonospacedText.ColorAndOpacity._16_4_;
  _local_2690 = SmallMonospacedText.ColorAndOpacity.SpecifiedColor.field0_0x0;
  local_267c = (TVector2<float>_u_0)SmallMonospacedText.ShadowOffset;
  local_2664._0_12_ = SmallMonospacedText.SelectedBackgroundColor.SpecifiedColor.field0_0x0._0_12_;
  local_2664._s_0.A = SmallMonospacedText.SelectedBackgroundColor.SpecifiedColor.field0_0x0._12_4_;
  EStack_2654 = SmallMonospacedText.SelectedBackgroundColor.ColorUseRule;
  EStack_2653 = SmallMonospacedText.SelectedBackgroundColor.ColorTableId;
  uStack_2652 = SmallMonospacedText.SelectedBackgroundColor._18_2_;
  local_2674 = SmallMonospacedText.ShadowColorAndOpacity.field0_0x0;
  local_2640.Value._0_1_ = SmallMonospacedText.HighlightColor.ColorUseRule;
  local_2640.Value._1_1_ = SmallMonospacedText.HighlightColor.ColorTableId;
  local_2640.Value._2_2_ = SmallMonospacedText.HighlightColor._18_2_;
  local_2650 = SmallMonospacedText.HighlightColor.SpecifiedColor.field0_0x0;
  FSlateBrush::FSlateBrush(&local_2638,&SmallMonospacedText.HighlightShape);
  FSlateBrush::FSlateBrush(&local_2588,&SmallMonospacedText.StrikeBrush);
  FSlateBrush::FSlateBrush(&local_24d8,&SmallMonospacedText.UnderlineBrush);
  local_2428._1_1_ = SmallMonospacedText.OverflowPolicy;
  local_2428._0_1_ = SmallMonospacedText.TransformPolicy;
  uStack_27ac = 0x3f800000;
  auVar6[0xf] = 0;
  auVar6._0_15_ = local_27a8._1_15_;
  local_27a8 = (FLinearColor_u_0)(auVar6 << 8);
  local_2680 = local_27a8._s_0.R;
  local_2690._4_4_ = FLinearColor::sRGBToLinearTable[0x61];
  local_2690._0_4_ = FLinearColor::sRGBToLinearTable[0xb4];
  fStack_2688 = FLinearColor::sRGBToLinearTable[0];
  uStack_2684 = 0x3f800000;
  pFVar13 = ::FName::FName((FName *)&local_res8._s_0,"SyntaxHighlight.NodeAttributeValue");
  FSlateStyleSet::Set<FTextBlockStyle>(pFVar1,*pFVar13,(FTextBlockStyle *)local_26f8);
  local_26f8 = (undefined1  [8])&___7FTextBlockStyle__6B_;
  local_24d8._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_24d8.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  local_2588._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2588.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  local_2638._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2638.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_26b8.ReferenceController);
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)local_26f8);
  return;
}

// operator() @ 142551a80

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall `FUMGCoreStyle::Create'::__l2::<lambda_1>::operator()(void *this)

{
  FSlateStyleSet *pFVar1;
  void *pvVar2;
  undefined8 uVar3;
  FSlateNoResource *pFVar4;
  FSlateNoResource *pFVar5;
  FName *pFVar6;
  FSlateImageBrush *pFVar7;
  FString *pFVar8;
  FSlateImageBrush *pFVar9;
  FSlateBoxBrush *pFVar10;
  FSlateBoxBrush *pFVar11;
  FSlateImageBrush *pFVar12;
  char cVar13;
  TVector2<float>_u_0 local_res8;
  FName local_res10;
  FLinearColor_u_0 local_68;
  FLinearColor_u_0 local_58;
  FLinearColor_u_0 local_48 [2];
  
  pFVar12 = (FSlateImageBrush *)0x0;
  local_res8._s_0 = local_res8._s_0 & 0xffffffff00000000;
  pFVar1 = (FSlateStyleSet *)**(undefined8 **)this;
  pFVar4 = ::operator_new(0xb0);
  pFVar5 = (FSlateNoResource *)pFVar12;
  if (pFVar4 != (FSlateNoResource *)0x0) {
    local_res8 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
    pFVar5 = FSlateNoResource::FSlateNoResource
                       (pFVar4,(FDeprecateVector2DParameter *)&local_res8._s_0);
  }
  pFVar6 = ::FName::FName(&local_res10,"NoBrush");
  FSlateStyleSet::Set<FSlateNoResource>(pFVar1,*pFVar6,pFVar5);
  pFVar1 = (FSlateStyleSet *)**(undefined8 **)this;
  pFVar4 = ::operator_new(0xb0);
  pFVar5 = (FSlateNoResource *)pFVar12;
  if (pFVar4 != (FSlateNoResource *)0x0) {
    local_res8 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
    pFVar5 = FSlateNoResource::FSlateNoResource
                       (pFVar4,(FDeprecateVector2DParameter *)&local_res8._s_0);
  }
  pFVar6 = ::FName::FName(&local_res10,"NoBorder");
  FSlateStyleSet::Set<FSlateNoResource>(pFVar1,*pFVar6,pFVar5);
  pFVar1 = (FSlateStyleSet *)**(undefined8 **)this;
  pFVar4 = ::operator_new(0xb0);
  pFVar5 = (FSlateNoResource *)pFVar12;
  if (pFVar4 != (FSlateNoResource *)0x0) {
    local_res8 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
    pFVar5 = FSlateNoResource::FSlateNoResource
                       (pFVar4,(FDeprecateVector2DParameter *)&local_res8._s_0);
  }
  pFVar6 = ::FName::FName(&local_res10,"NoBorder.Normal");
  FSlateStyleSet::Set<FSlateNoResource>(pFVar1,*pFVar6,pFVar5);
  pFVar1 = (FSlateStyleSet *)**(undefined8 **)this;
  pFVar4 = ::operator_new(0xb0);
  pFVar5 = (FSlateNoResource *)pFVar12;
  if (pFVar4 != (FSlateNoResource *)0x0) {
    local_res8 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
    pFVar5 = FSlateNoResource::FSlateNoResource
                       (pFVar4,(FDeprecateVector2DParameter *)&local_res8._s_0);
  }
  pFVar6 = ::FName::FName(&local_res10,"NoBorder.Hovered");
  FSlateStyleSet::Set<FSlateNoResource>(pFVar1,*pFVar6,pFVar5);
  pFVar1 = (FSlateStyleSet *)**(undefined8 **)this;
  pFVar4 = ::operator_new(0xb0);
  pFVar5 = (FSlateNoResource *)pFVar12;
  if (pFVar4 != (FSlateNoResource *)0x0) {
    local_res8 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
    pFVar5 = FSlateNoResource::FSlateNoResource
                       (pFVar4,(FDeprecateVector2DParameter *)&local_res8._s_0);
  }
  pFVar6 = ::FName::FName(&local_res10,"NoBorder.Pressed");
  FSlateStyleSet::Set<FSlateNoResource>(pFVar1,*pFVar6,pFVar5);
  pFVar1 = (FSlateStyleSet *)**(undefined8 **)this;
  pFVar6 = ::FName::FName((FName *)&local_res8._s_0,"NoBorder");
  FSlateStyleSet::Set<FButtonStyle>(pFVar1,*pFVar6,&NoBorder);
  pFVar1 = (FSlateStyleSet *)**(undefined8 **)this;
  pFVar7 = ::operator_new(0xb0);
  uVar3 = _UNK_15076b1f8;
  pvVar2 = ___xmm_3f8000003f8000003f8000003f800000;
  pFVar9 = pFVar12;
  if (pFVar7 != (FSlateImageBrush *)0x0) {
    local_res8 = (TVector2<float>_u_0)0x41f8000041f80000;
    local_68._0_8_ = ___xmm_3f8000003f8000003f8000003f800000;
    local_68._8_8_ = _UNK_15076b1f8;
    pFVar8 = (FString *)
             (**(code **)(*(longlong *)**(undefined8 **)this + 0xf0))
                       ((longlong *)**(undefined8 **)this,&local_58,"Common/CursorPing",L".png");
    pFVar9 = FSlateImageBrush::FSlateImageBrush
                       (pFVar7,pFVar8,(FDeprecateVector2DParameter *)&local_res8._s_0,
                        (FLinearColor *)&local_68._s_0,NoTile,FullColor);
  }
  pFVar6 = ::FName::FName(&local_res10,"DemoRecording.CursorPing");
  FSlateStyleSet::Set<FSlateImageBrush>(pFVar1,*pFVar6,pFVar9);
  if ((pFVar7 != (FSlateImageBrush *)0x0) && ((void *)local_58._0_8_ != (void *)0x0)) {
    FMemory::Free((void *)local_58._0_8_);
  }
  pFVar1 = (FSlateStyleSet *)**(undefined8 **)this;
  pFVar10 = ::operator_new(0xb0);
  pFVar11 = (FSlateBoxBrush *)pFVar12;
  if (pFVar10 != (FSlateBoxBrush *)0x0) {
    local_58._0_8_ = pvVar2;
    local_58._8_8_ = uVar3;
    local_68._0_8_ = ___xmm_3ec000003ec000003ec000003ec00000;
    local_68._8_8_ = _UNK_1509251a8;
    pFVar8 = (FString *)
             (**(code **)(*(longlong *)**(undefined8 **)this + 0xf0))
                       ((longlong *)**(undefined8 **)this,local_48,"Common/TextBlockHighlightShape",
                        L".png");
    pFVar11 = FSlateBoxBrush::FSlateBoxBrush
                        (pFVar10,pFVar8,(FMargin *)&local_68._s_0,(FLinearColor *)&local_58._s_0,
                         FullColor);
  }
  pFVar6 = ::FName::FName((FName *)&local_res8._s_0,"ErrorReporting.Box");
  FSlateStyleSet::Set<FSlateBoxBrush>(pFVar1,*pFVar6,pFVar11);
  if ((pFVar10 != (FSlateBoxBrush *)0x0) && ((void *)local_48[0]._0_8_ != (void *)0x0)) {
    FMemory::Free((void *)local_48[0]._0_8_);
  }
  pFVar1 = (FSlateStyleSet *)**(undefined8 **)this;
  pFVar10 = ::operator_new(0xb0);
  pFVar11 = (FSlateBoxBrush *)pFVar12;
  if (pFVar10 != (FSlateBoxBrush *)0x0) {
    local_48[0]._0_8_ = pvVar2;
    local_48[0]._8_8_ = uVar3;
    local_58._0_8_ = ___xmm_3ec000003ec000003ec000003ec00000;
    local_58._8_8_ = _UNK_1509251a8;
    pFVar8 = (FString *)
             (**(code **)(*(longlong *)**(undefined8 **)this + 0xf0))
                       ((longlong *)**(undefined8 **)this,&local_68,
                        "Common/TextBlockHighlightShape_Empty",L".png");
    pFVar11 = FSlateBoxBrush::FSlateBoxBrush
                        (pFVar10,pFVar8,(FMargin *)&local_58._s_0,(FLinearColor *)&local_48[0]._s_0,
                         FullColor);
  }
  pFVar6 = ::FName::FName((FName *)&local_res8._s_0,"ErrorReporting.EmptyBox");
  FSlateStyleSet::Set<FSlateBoxBrush>(pFVar1,*pFVar6,pFVar11);
  if ((pFVar10 != (FSlateBoxBrush *)0x0) && ((void *)local_68._0_8_ != (void *)0x0)) {
    FMemory::Free((void *)local_68._0_8_);
  }
  pFVar1 = (FSlateStyleSet *)**(undefined8 **)this;
  local_48[0]._0_8_ = ___xmm_3f80000000000000000000003eb33333;
  local_48[0]._8_8_ = _UNK_150925278;
  pFVar6 = ::FName::FName((FName *)&local_res8._s_0,"ErrorReporting.BackgroundColor");
  FSlateStyleSet::Set(pFVar1,*pFVar6,(FLinearColor *)&local_48[0]._s_0);
  pFVar1 = (FSlateStyleSet *)**(undefined8 **)this;
  local_48[0]._0_8_ = ___xmm_3f8000003b449ba63eba5e353f53f7cf;
  local_48[0]._8_8_ = _UNK_1509252b8;
  pFVar6 = ::FName::FName((FName *)&local_res8._s_0,"ErrorReporting.WarningBackgroundColor");
  FSlateStyleSet::Set(pFVar1,*pFVar6,(FLinearColor *)&local_48[0]._s_0);
  pFVar1 = (FSlateStyleSet *)**(undefined8 **)this;
  pFVar6 = ::FName::FName((FName *)&local_res8._s_0,"ErrorReporting.ForegroundColor");
  FSlateStyleSet::Set(pFVar1,*pFVar6,&FLinearColor::White);
  pFVar1 = (FSlateStyleSet *)**(undefined8 **)this;
  pFVar7 = ::operator_new(0xb0);
  pFVar9 = pFVar12;
  if (pFVar7 != (FSlateImageBrush *)0x0) {
    local_res8._s_0 = (TVector2<float>_u_0_s_0)CoreStyleConstants::Icon24x24;
    local_48[0]._0_8_ = pvVar2;
    local_48[0]._8_8_ = uVar3;
    pFVar8 = (FString *)
             (**(code **)(*(longlong *)**(undefined8 **)this + 0xf0))
                       ((longlong *)**(undefined8 **)this,&local_58,"Icons/cursor_grab",L".png");
    pFVar9 = FSlateImageBrush::FSlateImageBrush
                       (pFVar7,pFVar8,(FDeprecateVector2DParameter *)&local_res8._s_0,
                        (FLinearColor *)&local_48[0]._s_0,NoTile,FullColor);
  }
  pFVar6 = ::FName::FName(&local_res10,"SoftwareCursor_Grab");
  FSlateStyleSet::Set<FSlateImageBrush>(pFVar1,*pFVar6,pFVar9);
  if ((pFVar7 != (FSlateImageBrush *)0x0) && ((void *)local_58._0_8_ != (void *)0x0)) {
    FMemory::Free((void *)local_58._0_8_);
  }
  pFVar1 = (FSlateStyleSet *)**(undefined8 **)this;
  pFVar7 = ::operator_new(0xb0);
  pFVar9 = pFVar12;
  if (pFVar7 != (FSlateImageBrush *)0x0) {
    local_res8._s_0 = (TVector2<float>_u_0_s_0)CoreStyleConstants::Icon24x24;
    local_48[0]._0_8_ = pvVar2;
    local_48[0]._8_8_ = uVar3;
    pFVar8 = (FString *)
             (**(code **)(*(longlong *)**(undefined8 **)this + 0xf0))
                       ((longlong *)**(undefined8 **)this,&local_58,"Icons/cursor_cardinal_cross",
                        L".png");
    pFVar9 = FSlateImageBrush::FSlateImageBrush
                       (pFVar7,pFVar8,(FDeprecateVector2DParameter *)&local_res8._s_0,
                        (FLinearColor *)&local_48[0]._s_0,NoTile,FullColor);
  }
  pFVar6 = ::FName::FName(&local_res10,"SoftwareCursor_CardinalCross");
  FSlateStyleSet::Set<FSlateImageBrush>(pFVar1,*pFVar6,pFVar9);
  if ((pFVar7 != (FSlateImageBrush *)0x0) && ((void *)local_58._0_8_ != (void *)0x0)) {
    FMemory::Free((void *)local_58._0_8_);
  }
  pFVar1 = (FSlateStyleSet *)**(undefined8 **)this;
  pFVar7 = ::operator_new(0xb0);
  pFVar9 = pFVar12;
  if (pFVar7 != (FSlateImageBrush *)0x0) {
    local_res8 = (TVector2<float>_u_0)0x4280000042800000;
    local_48[0]._0_8_ = pvVar2;
    local_48[0]._8_8_ = uVar3;
    pFVar8 = (FString *)
             (**(code **)(*(longlong *)**(undefined8 **)this + 0xf0))
                       ((longlong *)**(undefined8 **)this,&local_58,"Icons/TrashCan",L".png");
    pFVar9 = FSlateImageBrush::FSlateImageBrush
                       (pFVar7,pFVar8,(FDeprecateVector2DParameter *)&local_res8._s_0,
                        (FLinearColor *)&local_48[0]._s_0,NoTile,FullColor);
  }
  pFVar6 = ::FName::FName(&local_res10,"TrashCan");
  FSlateStyleSet::Set<FSlateImageBrush>(pFVar1,*pFVar6,pFVar9);
  if ((pFVar7 != (FSlateImageBrush *)0x0) && ((void *)local_58._0_8_ != (void *)0x0)) {
    FMemory::Free((void *)local_58._0_8_);
  }
  pFVar1 = (FSlateStyleSet *)**(undefined8 **)this;
  pFVar7 = ::operator_new(0xb0);
  pFVar9 = pFVar12;
  if (pFVar7 != (FSlateImageBrush *)0x0) {
    local_res8 = (TVector2<float>_u_0)0x4190000041900000;
    local_48[0]._0_8_ = pvVar2;
    local_48[0]._8_8_ = uVar3;
    pFVar8 = (FString *)
             (**(code **)(*(longlong *)**(undefined8 **)this + 0xf0))
                       ((longlong *)**(undefined8 **)this,&local_58,"Icons/TrashCan_Small",L".png");
    pFVar9 = FSlateImageBrush::FSlateImageBrush
                       (pFVar7,pFVar8,(FDeprecateVector2DParameter *)&local_res8._s_0,
                        (FLinearColor *)&local_48[0]._s_0,NoTile,FullColor);
  }
  pFVar6 = ::FName::FName(&local_res10,"TrashCan_Small");
  FSlateStyleSet::Set<FSlateImageBrush>(pFVar1,*pFVar6,pFVar9);
  if ((pFVar7 != (FSlateImageBrush *)0x0) && ((void *)local_58._0_8_ != (void *)0x0)) {
    FMemory::Free((void *)local_58._0_8_);
  }
  cVar13 = '\0';
  pFVar1 = (FSlateStyleSet *)**(undefined8 **)this;
  pFVar7 = ::operator_new(0xb0);
  pFVar9 = pFVar12;
  if (pFVar7 != (FSlateImageBrush *)0x0) {
    local_res8._s_0 = (TVector2<float>_u_0_s_0)CoreStyleConstants::Icon12x12;
    cVar13 = -0x80;
    local_48[0]._0_8_ = pvVar2;
    local_48[0]._8_8_ = uVar3;
    pFVar8 = (FString *)
             (**(code **)(*(longlong *)**(undefined8 **)this + 0xf0))
                       ((longlong *)**(undefined8 **)this,&local_58,"Icons/Cross_12x",L".png");
    pFVar9 = FSlateImageBrush::FSlateImageBrush
                       (pFVar7,pFVar8,(FDeprecateVector2DParameter *)&local_res8._s_0,
                        (FLinearColor *)&local_48[0]._s_0,NoTile,FullColor);
  }
  pFVar6 = ::FName::FName(&local_res10,"Icons.Cross");
  FSlateStyleSet::Set<FSlateImageBrush>(pFVar1,*pFVar6,pFVar9);
  if ((cVar13 < '\0') && ((void *)local_58._0_8_ != (void *)0x0)) {
    FMemory::Free((void *)local_58._0_8_);
  }
  pFVar1 = (FSlateStyleSet *)**(undefined8 **)this;
  pFVar7 = ::operator_new(0xb0);
  pFVar9 = pFVar12;
  if (pFVar7 != (FSlateImageBrush *)0x0) {
    local_res8._s_0 = (TVector2<float>_u_0_s_0)CoreStyleConstants::Icon16x16;
    local_48[0]._0_8_ = pvVar2;
    local_48[0]._8_8_ = uVar3;
    pFVar8 = (FString *)
             (**(code **)(*(longlong *)**(undefined8 **)this + 0xf0))
                       ((longlong *)**(undefined8 **)this,&local_58,"Icons/denied_16x",L".png");
    pFVar9 = FSlateImageBrush::FSlateImageBrush
                       (pFVar7,pFVar8,(FDeprecateVector2DParameter *)&local_res8._s_0,
                        (FLinearColor *)&local_48[0]._s_0,NoTile,FullColor);
  }
  pFVar6 = ::FName::FName(&local_res10,"Icons.Denied");
  FSlateStyleSet::Set<FSlateImageBrush>(pFVar1,*pFVar6,pFVar9);
  if ((pFVar7 != (FSlateImageBrush *)0x0) && ((void *)local_58._0_8_ != (void *)0x0)) {
    FMemory::Free((void *)local_58._0_8_);
  }
  pFVar1 = (FSlateStyleSet *)**(undefined8 **)this;
  pFVar7 = ::operator_new(0xb0);
  pFVar9 = pFVar12;
  if (pFVar7 != (FSlateImageBrush *)0x0) {
    local_res8._s_0 = (TVector2<float>_u_0_s_0)CoreStyleConstants::Icon16x16;
    local_48[0]._0_8_ = pvVar2;
    local_48[0]._8_8_ = uVar3;
    pFVar8 = (FString *)
             (**(code **)(*(longlong *)**(undefined8 **)this + 0xf0))
                       ((longlong *)**(undefined8 **)this,&local_58,"Icons/Icon_error_16x",L".png");
    pFVar9 = FSlateImageBrush::FSlateImageBrush
                       (pFVar7,pFVar8,(FDeprecateVector2DParameter *)&local_res8._s_0,
                        (FLinearColor *)&local_48[0]._s_0,NoTile,FullColor);
  }
  pFVar6 = ::FName::FName(&local_res10,"Icons.Error");
  FSlateStyleSet::Set<FSlateImageBrush>(pFVar1,*pFVar6,pFVar9);
  if ((pFVar7 != (FSlateImageBrush *)0x0) && ((void *)local_58._0_8_ != (void *)0x0)) {
    FMemory::Free((void *)local_58._0_8_);
  }
  pFVar1 = (FSlateStyleSet *)**(undefined8 **)this;
  pFVar7 = ::operator_new(0xb0);
  pFVar9 = pFVar12;
  if (pFVar7 != (FSlateImageBrush *)0x0) {
    local_res8._s_0 = (TVector2<float>_u_0_s_0)CoreStyleConstants::Icon16x16;
    local_48[0]._0_8_ = pvVar2;
    local_48[0]._8_8_ = uVar3;
    pFVar8 = (FString *)
             (**(code **)(*(longlong *)**(undefined8 **)this + 0xf0))
                       ((longlong *)**(undefined8 **)this,&local_58,"Icons/Icon_help_16x",L".png");
    pFVar9 = FSlateImageBrush::FSlateImageBrush
                       (pFVar7,pFVar8,(FDeprecateVector2DParameter *)&local_res8._s_0,
                        (FLinearColor *)&local_48[0]._s_0,NoTile,FullColor);
  }
  pFVar6 = ::FName::FName(&local_res10,"Icons.Help");
  FSlateStyleSet::Set<FSlateImageBrush>(pFVar1,*pFVar6,pFVar9);
  if ((pFVar7 != (FSlateImageBrush *)0x0) && ((void *)local_58._0_8_ != (void *)0x0)) {
    FMemory::Free((void *)local_58._0_8_);
  }
  pFVar1 = (FSlateStyleSet *)**(undefined8 **)this;
  pFVar7 = ::operator_new(0xb0);
  pFVar9 = pFVar12;
  if (pFVar7 != (FSlateImageBrush *)0x0) {
    local_res8._s_0 = (TVector2<float>_u_0_s_0)CoreStyleConstants::Icon16x16;
    local_48[0]._0_8_ = pvVar2;
    local_48[0]._8_8_ = uVar3;
    pFVar8 = (FString *)
             (**(code **)(*(longlong *)**(undefined8 **)this + 0xf0))
                       ((longlong *)**(undefined8 **)this,&local_58,"Icons/Icon_info_16x",L".png");
    pFVar9 = FSlateImageBrush::FSlateImageBrush
                       (pFVar7,pFVar8,(FDeprecateVector2DParameter *)&local_res8._s_0,
                        (FLinearColor *)&local_48[0]._s_0,NoTile,FullColor);
  }
  pFVar6 = ::FName::FName(&local_res10,"Icons.Info");
  FSlateStyleSet::Set<FSlateImageBrush>(pFVar1,*pFVar6,pFVar9);
  if ((pFVar7 != (FSlateImageBrush *)0x0) && ((void *)local_58._0_8_ != (void *)0x0)) {
    FMemory::Free((void *)local_58._0_8_);
  }
  pFVar1 = (FSlateStyleSet *)**(undefined8 **)this;
  pFVar7 = ::operator_new(0xb0);
  pFVar9 = pFVar12;
  if (pFVar7 != (FSlateImageBrush *)0x0) {
    local_res8._s_0 = (TVector2<float>_u_0_s_0)CoreStyleConstants::Icon16x16;
    local_48[0]._0_8_ = pvVar2;
    local_48[0]._8_8_ = uVar3;
    pFVar8 = (FString *)
             (**(code **)(*(longlong *)**(undefined8 **)this + 0xf0))
                       ((longlong *)**(undefined8 **)this,&local_58,"Icons/Icon_warning_16x",L".png"
                       );
    pFVar9 = FSlateImageBrush::FSlateImageBrush
                       (pFVar7,pFVar8,(FDeprecateVector2DParameter *)&local_res8._s_0,
                        (FLinearColor *)&local_48[0]._s_0,NoTile,FullColor);
  }
  pFVar6 = ::FName::FName(&local_res10,"Icons.Warning");
  FSlateStyleSet::Set<FSlateImageBrush>(pFVar1,*pFVar6,pFVar9);
  if ((pFVar7 != (FSlateImageBrush *)0x0) && ((void *)local_58._0_8_ != (void *)0x0)) {
    FMemory::Free((void *)local_58._0_8_);
  }
  pFVar1 = (FSlateStyleSet *)**(undefined8 **)this;
  pFVar7 = ::operator_new(0xb0);
  pFVar9 = pFVar12;
  if (pFVar7 != (FSlateImageBrush *)0x0) {
    local_res8._s_0 = (TVector2<float>_u_0_s_0)CoreStyleConstants::Icon16x16;
    local_48[0]._0_8_ = pvVar2;
    local_48[0]._8_8_ = uVar3;
    pFVar8 = (FString *)
             (**(code **)(*(longlong *)**(undefined8 **)this + 0xf0))
                       ((longlong *)**(undefined8 **)this,&local_58,"Icons/Icon_Downloads_16x",
                        L".png");
    pFVar9 = FSlateImageBrush::FSlateImageBrush
                       (pFVar7,pFVar8,(FDeprecateVector2DParameter *)&local_res8._s_0,
                        (FLinearColor *)&local_48[0]._s_0,NoTile,FullColor);
  }
  pFVar6 = ::FName::FName(&local_res10,"Icons.Download");
  FSlateStyleSet::Set<FSlateImageBrush>(pFVar1,*pFVar6,pFVar9);
  if ((pFVar7 != (FSlateImageBrush *)0x0) && ((void *)local_58._0_8_ != (void *)0x0)) {
    FMemory::Free((void *)local_58._0_8_);
  }
  pFVar1 = (FSlateStyleSet *)**(undefined8 **)this;
  pFVar10 = ::operator_new(0xb0);
  pFVar11 = (FSlateBoxBrush *)pFVar12;
  if (pFVar10 != (FSlateBoxBrush *)0x0) {
    local_48[0]._0_8_ = pvVar2;
    local_48[0]._8_8_ = uVar3;
    local_58._0_8_ = ___xmm_3e8000003e8000003e8000003e800000;
    local_58._8_8_ = _UNK_15076b0c8;
    pFVar8 = (FString *)
             (**(code **)(*(longlong *)**(undefined8 **)this + 0xf0))
                       ((longlong *)**(undefined8 **)this,&local_68,"Common/GroupBorder",L".png");
    pFVar11 = FSlateBoxBrush::FSlateBoxBrush
                        (pFVar10,pFVar8,(FMargin *)&local_58._s_0,(FLinearColor *)&local_48[0]._s_0,
                         FullColor);
  }
  pFVar6 = ::FName::FName((FName *)&local_res8._s_0,"ToolPanel.GroupBorder");
  FSlateStyleSet::Set<FSlateBoxBrush>(pFVar1,*pFVar6,pFVar11);
  if ((pFVar10 != (FSlateBoxBrush *)0x0) && ((void *)local_68._0_8_ != (void *)0x0)) {
    FMemory::Free((void *)local_68._0_8_);
  }
  pFVar1 = (FSlateStyleSet *)**(undefined8 **)this;
  pFVar10 = ::operator_new(0xb0);
  pFVar11 = (FSlateBoxBrush *)pFVar12;
  if (pFVar10 != (FSlateBoxBrush *)0x0) {
    local_48[0]._0_8_ = pvVar2;
    local_48[0]._8_8_ = uVar3;
    local_58._0_8_ = ___xmm_3e8000003e8000003e8000003e800000;
    local_58._8_8_ = _UNK_15076b0c8;
    pFVar8 = (FString *)
             (**(code **)(*(longlong *)**(undefined8 **)this + 0xf0))
                       ((longlong *)**(undefined8 **)this,&local_68,"Common/DebugBorder",L".png");
    pFVar11 = FSlateBoxBrush::FSlateBoxBrush
                        (pFVar10,pFVar8,(FMargin *)&local_58._s_0,(FLinearColor *)&local_48[0]._s_0,
                         FullColor);
  }
  pFVar6 = ::FName::FName((FName *)&local_res8._s_0,"Debug.Border");
  FSlateStyleSet::Set<FSlateBoxBrush>(pFVar1,*pFVar6,pFVar11);
  if ((pFVar10 != (FSlateBoxBrush *)0x0) && ((void *)local_68._0_8_ != (void *)0x0)) {
    FMemory::Free((void *)local_68._0_8_);
  }
  pFVar1 = (FSlateStyleSet *)**(undefined8 **)this;
  pFVar10 = ::operator_new(0xb0);
  pFVar11 = (FSlateBoxBrush *)pFVar12;
  if (pFVar10 != (FSlateBoxBrush *)0x0) {
    local_48[0]._0_8_ = pvVar2;
    local_48[0]._8_8_ = uVar3;
    local_58._0_8_ = ___xmm_3e0000003e0000003e0000003e000000;
    local_58._8_8_ = _UNK_150925108;
    pFVar8 = (FString *)
             (**(code **)(*(longlong *)**(undefined8 **)this + 0xf0))
                       ((longlong *)**(undefined8 **)this,&local_68,"Old/Menu_Background",L".png");
    pFVar11 = FSlateBoxBrush::FSlateBoxBrush
                        (pFVar10,pFVar8,(FMargin *)&local_58._s_0,(FLinearColor *)&local_48[0]._s_0,
                         FullColor);
  }
  pFVar6 = ::FName::FName((FName *)&local_res8._s_0,"PopupText.Background");
  FSlateStyleSet::Set<FSlateBoxBrush>(pFVar1,*pFVar6,pFVar11);
  if ((pFVar10 != (FSlateBoxBrush *)0x0) && ((void *)local_68._0_8_ != (void *)0x0)) {
    FMemory::Free((void *)local_68._0_8_);
  }
  pFVar1 = (FSlateStyleSet *)**(undefined8 **)this;
  pFVar7 = ::operator_new(0xb0);
  pFVar9 = pFVar12;
  if (pFVar7 != (FSlateImageBrush *)0x0) {
    local_res8._s_0 = (TVector2<float>_u_0_s_0)CoreStyleConstants::Icon16x16;
    local_48[0]._0_8_ = pvVar2;
    local_48[0]._8_8_ = uVar3;
    pFVar8 = (FString *)
             (**(code **)(*(longlong *)**(undefined8 **)this + 0xf0))
                       ((longlong *)**(undefined8 **)this,&local_58,"Icons/Icon_undo_16px",L".png");
    pFVar9 = FSlateImageBrush::FSlateImageBrush
                       (pFVar7,pFVar8,(FDeprecateVector2DParameter *)&local_res8._s_0,
                        (FLinearColor *)&local_48[0]._s_0,NoTile,FullColor);
  }
  pFVar6 = ::FName::FName(&local_res10,"GenericCommands.Undo");
  FSlateStyleSet::Set<FSlateImageBrush>(pFVar1,*pFVar6,pFVar9);
  if ((pFVar7 != (FSlateImageBrush *)0x0) && ((void *)local_58._0_8_ != (void *)0x0)) {
    FMemory::Free((void *)local_58._0_8_);
  }
  pFVar1 = (FSlateStyleSet *)**(undefined8 **)this;
  pFVar7 = ::operator_new(0xb0);
  pFVar9 = pFVar12;
  if (pFVar7 != (FSlateImageBrush *)0x0) {
    local_res8._s_0 = (TVector2<float>_u_0_s_0)CoreStyleConstants::Icon16x16;
    local_48[0]._0_8_ = pvVar2;
    local_48[0]._8_8_ = uVar3;
    pFVar8 = (FString *)
             (**(code **)(*(longlong *)**(undefined8 **)this + 0xf0))
                       ((longlong *)**(undefined8 **)this,&local_58,"Icons/Icon_redo_16px",L".png");
    pFVar9 = FSlateImageBrush::FSlateImageBrush
                       (pFVar7,pFVar8,(FDeprecateVector2DParameter *)&local_res8._s_0,
                        (FLinearColor *)&local_48[0]._s_0,NoTile,FullColor);
  }
  pFVar6 = ::FName::FName(&local_res10,"GenericCommands.Redo");
  FSlateStyleSet::Set<FSlateImageBrush>(pFVar1,*pFVar6,pFVar9);
  if ((pFVar7 != (FSlateImageBrush *)0x0) && ((void *)local_58._0_8_ != (void *)0x0)) {
    FMemory::Free((void *)local_58._0_8_);
  }
  pFVar1 = (FSlateStyleSet *)**(undefined8 **)this;
  pFVar7 = ::operator_new(0xb0);
  pFVar9 = pFVar12;
  if (pFVar7 != (FSlateImageBrush *)0x0) {
    local_res8._s_0 = (TVector2<float>_u_0_s_0)CoreStyleConstants::Icon16x16;
    local_48[0]._0_8_ = pvVar2;
    local_48[0]._8_8_ = uVar3;
    pFVar8 = (FString *)
             (**(code **)(*(longlong *)**(undefined8 **)this + 0xf0))
                       ((longlong *)**(undefined8 **)this,&local_58,"Icons/Edit/Icon_Edit_Copy_16x",
                        L".png");
    pFVar9 = FSlateImageBrush::FSlateImageBrush
                       (pFVar7,pFVar8,(FDeprecateVector2DParameter *)&local_res8._s_0,
                        (FLinearColor *)&local_48[0]._s_0,NoTile,FullColor);
  }
  pFVar6 = ::FName::FName(&local_res10,"GenericCommands.Copy");
  FSlateStyleSet::Set<FSlateImageBrush>(pFVar1,*pFVar6,pFVar9);
  if ((pFVar7 != (FSlateImageBrush *)0x0) && ((void *)local_58._0_8_ != (void *)0x0)) {
    FMemory::Free((void *)local_58._0_8_);
  }
  pFVar1 = (FSlateStyleSet *)**(undefined8 **)this;
  pFVar7 = ::operator_new(0xb0);
  pFVar9 = pFVar12;
  if (pFVar7 != (FSlateImageBrush *)0x0) {
    local_res8._s_0 = (TVector2<float>_u_0_s_0)CoreStyleConstants::Icon16x16;
    local_48[0]._0_8_ = pvVar2;
    local_48[0]._8_8_ = uVar3;
    pFVar8 = (FString *)
             (**(code **)(*(longlong *)**(undefined8 **)this + 0xf0))
                       ((longlong *)**(undefined8 **)this,&local_58,"Icons/Edit/Icon_Edit_Cut_16x",
                        L".png");
    pFVar9 = FSlateImageBrush::FSlateImageBrush
                       (pFVar7,pFVar8,(FDeprecateVector2DParameter *)&local_res8._s_0,
                        (FLinearColor *)&local_48[0]._s_0,NoTile,FullColor);
  }
  pFVar6 = ::FName::FName(&local_res10,"GenericCommands.Cut");
  FSlateStyleSet::Set<FSlateImageBrush>(pFVar1,*pFVar6,pFVar9);
  if ((pFVar7 != (FSlateImageBrush *)0x0) && ((void *)local_58._0_8_ != (void *)0x0)) {
    FMemory::Free((void *)local_58._0_8_);
  }
  pFVar1 = (FSlateStyleSet *)**(undefined8 **)this;
  pFVar7 = ::operator_new(0xb0);
  pFVar9 = pFVar12;
  if (pFVar7 != (FSlateImageBrush *)0x0) {
    local_res8._s_0 = (TVector2<float>_u_0_s_0)CoreStyleConstants::Icon16x16;
    local_48[0]._0_8_ = pvVar2;
    local_48[0]._8_8_ = uVar3;
    pFVar8 = (FString *)
             (**(code **)(*(longlong *)**(undefined8 **)this + 0xf0))
                       ((longlong *)**(undefined8 **)this,&local_58,
                        "Icons/Edit/Icon_Edit_Delete_16x",L".png");
    pFVar9 = FSlateImageBrush::FSlateImageBrush
                       (pFVar7,pFVar8,(FDeprecateVector2DParameter *)&local_res8._s_0,
                        (FLinearColor *)&local_48[0]._s_0,NoTile,FullColor);
  }
  pFVar6 = ::FName::FName(&local_res10,"GenericCommands.Delete");
  FSlateStyleSet::Set<FSlateImageBrush>(pFVar1,*pFVar6,pFVar9);
  if ((pFVar7 != (FSlateImageBrush *)0x0) && ((void *)local_58._0_8_ != (void *)0x0)) {
    FMemory::Free((void *)local_58._0_8_);
  }
  pFVar1 = (FSlateStyleSet *)**(undefined8 **)this;
  pFVar7 = ::operator_new(0xb0);
  pFVar9 = pFVar12;
  if (pFVar7 != (FSlateImageBrush *)0x0) {
    local_res8._s_0 = (TVector2<float>_u_0_s_0)CoreStyleConstants::Icon16x16;
    local_48[0]._0_8_ = pvVar2;
    local_48[0]._8_8_ = uVar3;
    pFVar8 = (FString *)
             (**(code **)(*(longlong *)**(undefined8 **)this + 0xf0))
                       ((longlong *)**(undefined8 **)this,&local_58,"Icons/Edit/Icon_Edit_Paste_16x"
                        ,L".png");
    pFVar9 = FSlateImageBrush::FSlateImageBrush
                       (pFVar7,pFVar8,(FDeprecateVector2DParameter *)&local_res8._s_0,
                        (FLinearColor *)&local_48[0]._s_0,NoTile,FullColor);
  }
  pFVar6 = ::FName::FName(&local_res10,"GenericCommands.Paste");
  FSlateStyleSet::Set<FSlateImageBrush>(pFVar1,*pFVar6,pFVar9);
  if ((pFVar7 != (FSlateImageBrush *)0x0) && ((void *)local_58._0_8_ != (void *)0x0)) {
    FMemory::Free((void *)local_58._0_8_);
  }
  pFVar1 = (FSlateStyleSet *)**(undefined8 **)this;
  pFVar7 = ::operator_new(0xb0);
  pFVar9 = pFVar12;
  if (pFVar7 != (FSlateImageBrush *)0x0) {
    local_res8._s_0 = (TVector2<float>_u_0_s_0)CoreStyleConstants::Icon16x16;
    local_48[0]._0_8_ = pvVar2;
    local_48[0]._8_8_ = uVar3;
    pFVar8 = (FString *)
             (**(code **)(*(longlong *)**(undefined8 **)this + 0xf0))
                       ((longlong *)**(undefined8 **)this,&local_58,
                        "Icons/Edit/Icon_Edit_Duplicate_16x",L".png");
    pFVar9 = FSlateImageBrush::FSlateImageBrush
                       (pFVar7,pFVar8,(FDeprecateVector2DParameter *)&local_res8._s_0,
                        (FLinearColor *)&local_48[0]._s_0,NoTile,FullColor);
  }
  pFVar6 = ::FName::FName(&local_res10,"GenericCommands.Duplicate");
  FSlateStyleSet::Set<FSlateImageBrush>(pFVar1,*pFVar6,pFVar9);
  if ((pFVar7 != (FSlateImageBrush *)0x0) && ((void *)local_58._0_8_ != (void *)0x0)) {
    FMemory::Free((void *)local_58._0_8_);
  }
  pFVar1 = (FSlateStyleSet *)**(undefined8 **)this;
  pFVar9 = ::operator_new(0xb0);
  if (pFVar9 != (FSlateImageBrush *)0x0) {
    local_res8._s_0 = (TVector2<float>_u_0_s_0)CoreStyleConstants::Icon16x16;
    local_48[0]._0_8_ = pvVar2;
    local_48[0]._8_8_ = uVar3;
    pFVar8 = (FString *)
             (**(code **)(*(longlong *)**(undefined8 **)this + 0xf0))
                       ((longlong *)**(undefined8 **)this,&local_58,
                        "Icons/Edit/Icon_Edit_Rename_16x",L".png");
    pFVar12 = FSlateImageBrush::FSlateImageBrush
                        (pFVar9,pFVar8,(FDeprecateVector2DParameter *)&local_res8._s_0,
                         (FLinearColor *)&local_48[0]._s_0,NoTile,FullColor);
  }
  pFVar6 = ::FName::FName(&local_res10,"GenericCommands.Rename");
  FSlateStyleSet::Set<FSlateImageBrush>(pFVar1,*pFVar6,pFVar12);
  if ((pFVar9 != (FSlateImageBrush *)0x0) && ((void *)local_58._0_8_ != (void *)0x0)) {
    FMemory::Free((void *)local_58._0_8_);
  }
  return;
}

// operator() @ 142552f90

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall `FUMGCoreStyle::Create'::__l2::<lambda_2>::operator()(void *this)

{
  FSlateStyleSet *pFVar1;
  longlong lVar2;
  void *pvVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  void *pvVar6;
  undefined8 uVar7;
  FComboButtonStyle *pFVar8;
  FString *pFVar9;
  FSlateBrush *pFVar10;
  FName *pFVar11;
  FSlateImageBrush *pFVar12;
  FSlateImageBrush *pFVar13;
  FSlateImageBrush *pFVar14;
  FCheckBoxStyle *pFVar15;
  TVector2<float>_u_0 local_res8;
  FName local_res10;
  FLinearColor_u_0 local_1f48;
  FLinearColor_u_0 local_1f38;
  void *local_1f28 [2];
  FLinearColor_u_0 local_1f18;
  void *local_1f08 [2];
  void *local_1ef8 [2];
  void *local_1ee8 [2];
  void *local_1ed8 [2];
  void *local_1ec8 [2];
  void *local_1eb8 [2];
  undefined **local_1ea8 [20];
  TReferenceControllerBase<1> *local_1e08;
  undefined **local_1df8 [20];
  TReferenceControllerBase<1> *local_1d58;
  undefined **local_1d48 [20];
  TReferenceControllerBase<1> *local_1ca8;
  undefined **local_1c98 [20];
  TReferenceControllerBase<1> *local_1bf8;
  undefined **local_1be8 [20];
  TReferenceControllerBase<1> *local_1b48;
  undefined **local_1b38 [20];
  TReferenceControllerBase<1> *local_1a98;
  undefined1 local_1a88 [16];
  undefined1 local_1a78 [912];
  undefined **local_16e8;
  undefined1 local_16d8 [160];
  FSharedReferencer<1> local_1638;
  undefined8 local_1628;
  undefined1 local_1620 [24];
  undefined1 local_1608 [160];
  FSharedReferencer<1> local_1568;
  void *local_1558;
  float fStack_1550;
  float fStack_154c;
  FMargin local_1548;
  FMargin local_1538;
  TEnumAsByte<EVerticalAlignment> local_1528;
  TObjectPtr<UObject>_u_0 local_1518;
  FName local_1510;
  FWeakObjectPtr local_1508;
  TObjectPtr<UObject>_u_0 local_1500;
  FName local_14f8;
  FWeakObjectPtr local_14f0;
  FMargin local_14e8;
  FMargin local_14d8;
  undefined1 local_14c8 [1328];
  FMargin local_f98;
  FMargin local_f88;
  TEnumAsByte<EVerticalAlignment> local_f78;
  undefined1 local_f68 [16];
  FSlateWidgetStyle local_f58 [2];
  undefined1 local_f48 [912];
  undefined **local_bb8;
  FSharedReferencer<1> local_b18;
  undefined **local_ae8;
  FSharedReferencer<1> local_a48;
  FCheckBoxStyle local_9a8;
  
  pFVar14 = (FSlateImageBrush *)0x0;
  local_res8._s_0 = local_res8._s_0 & 0xffffffff00000000;
  pFVar8 = FComboButtonStyle::FComboButtonStyle((FComboButtonStyle *)local_1a88);
  FButtonStyle::operator=(&pFVar8->ButtonStyle,&Button);
  uVar7 = _UNK_15076b1f8;
  pvVar6 = ___xmm_3f8000003f8000003f8000003f800000;
  local_res8._s_0 = (TVector2<float>_u_0_s_0)CoreStyleConstants::Icon8x8;
  local_1f18._0_8_ = ___xmm_3f8000003f8000003f8000003f800000;
  local_1f18._s_0.B = _UNK_15076b1f8;
  local_1f18._s_0.A = _UNK_15076b1fc;
  pFVar9 = (FString *)
           (**(code **)(*(longlong *)**(undefined8 **)this + 0xf0))
                     ((longlong *)**(undefined8 **)this,&local_1f48,"Common/ComboArrow",L".png");
  pFVar10 = (FSlateBrush *)
            FSlateImageBrush::FSlateImageBrush
                      ((FSlateImageBrush *)local_1df8,pFVar9,
                       (FDeprecateVector2DParameter *)&local_res8._s_0,
                       (FLinearColor *)&local_1f18._s_0,NoTile,FullColor);
  FSlateBrush::operator=(&pFVar8->DownArrowImage,pFVar10);
  uVar4 = _UNK_15076b1f8;
  local_1f18._0_8_ = pvVar6;
  _UNK_15076b1f8 = (float)uVar7;
  _UNK_15076b1fc = SUB84(uVar7,4);
  local_1f18._s_0.B = _UNK_15076b1f8;
  local_1f18._s_0.A = _UNK_15076b1fc;
  local_1eb8[0] = ___xmm_3e0000003e0000003e0000003e000000;
  local_1eb8[1] = (void *)_UNK_150925108;
  _UNK_15076b1f8 = uVar4;
  pFVar9 = (FString *)
           (**(code **)(*(longlong *)**(undefined8 **)this + 0xf0))
                     ((longlong *)**(undefined8 **)this,local_1f28,"Old/Menu_Background",L".png");
  pFVar10 = (FSlateBrush *)
            FSlateBoxBrush::FSlateBoxBrush
                      ((FSlateBoxBrush *)local_1ea8,pFVar9,(FMargin *)local_1eb8,
                       (FLinearColor *)&local_1f18._s_0,FullColor);
  FSlateBrush::operator=(&pFVar8->MenuBorderBrush,pFVar10);
  (pFVar8->MenuBorderPadding).Left = 0.0;
  (pFVar8->MenuBorderPadding).Top = 0.0;
  (pFVar8->MenuBorderPadding).Right = 0.0;
  (pFVar8->MenuBorderPadding).Bottom = 0.0;
  FComboButtonStyle::FComboButtonStyle((FComboButtonStyle *)local_14c8,pFVar8);
  local_1ea8[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_1e08);
  if (local_1f28[0] != (void *)0x0) {
    FMemory::Free(local_1f28[0]);
  }
  local_1df8[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_1d58);
  if ((void *)local_1f48._0_8_ != (void *)0x0) {
    FMemory::Free((void *)local_1f48._0_8_);
  }
  local_1a88._0_8_ = &___7FComboButtonStyle__6B_;
  local_1620._8_8_ = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_1608._144_8_);
  local_16e8 = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_16d8._144_8_);
  FButtonStyle::~FButtonStyle((FButtonStyle *)local_1a78);
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)local_1a88);
  pFVar1 = (FSlateStyleSet *)**(undefined8 **)this;
  pFVar11 = ::FName::FName((FName *)&local_res8._s_0,"ComboButton");
  FSlateStyleSet::Set<FComboButtonStyle>(pFVar1,*pFVar11,(FComboButtonStyle *)local_14c8);
  uVar4 = _UNK_15076b1f8;
  local_14c8._1312_8_ = pvVar6;
  _UNK_15076b1f8 = (float)uVar7;
  _UNK_15076b1fc = SUB84(uVar7,4);
  local_14c8._1320_4_ = _UNK_15076b1f8;
  local_14c8._1324_4_ = _UNK_15076b1fc;
  _UNK_15076b1f8 = uVar4;
  FSlateWidgetStyle::FSlateWidgetStyle((FSlateWidgetStyle *)local_1a88);
  local_1a88._0_8_ = &___7FComboBoxStyle__6B_;
  FComboButtonStyle::FComboButtonStyle((FComboButtonStyle *)local_1a78);
  uVar4 = _UNK_15076b1f8;
  local_14e8.Left = ___xmm_40000000408000004000000040800000;
  local_14e8.Top = _UNK_150925354;
  local_14e8.Right = _UNK_150925358;
  local_14e8.Bottom = _UNK_15092535c;
  local_1518.DebugPtr = (UObject *)0x0;
  local_14d8.Left = 0.0;
  local_14d8.Top = 0.0;
  local_14d8.Right = 0.0;
  local_14d8.Bottom = 0.0;
  local_1510.ComparisonIndex.Value = 0;
  local_1510.Number = 0;
  local_1508.ObjectIndex = 0;
  local_1508.ObjectSerialNumber = 0;
  local_1500.DebugPtr = (UObject *)0x0;
  local_14f8.ComparisonIndex.Value = 0;
  local_14f8.Number = 0;
  local_14f0.ObjectIndex = 0;
  local_14f0.ObjectSerialNumber = 0;
  local_1558 = pvVar6;
  _UNK_15076b1f8 = (float)uVar7;
  _UNK_15076b1fc = SUB84(uVar7,4);
  fStack_1550 = _UNK_15076b1f8;
  fStack_154c = _UNK_15076b1fc;
  _UNK_15076b1f8 = uVar4;
  FButtonStyle::operator=((FButtonStyle *)(local_1a78 + 0x10),(FButtonStyle *)(local_14c8 + 0x10));
  FSlateBrush::operator=((FSlateBrush *)local_16d8,(FSlateBrush *)(local_14c8 + 0x3a0));
  local_1628 = local_14c8._1104_8_;
  local_1620._0_8_ = local_14c8._1112_8_;
  local_1620._8_8_ = local_14c8._1120_8_;
  FSlateBrush::operator=((FSlateBrush *)local_1608,(FSlateBrush *)(local_14c8 + 0x470));
  local_1558 = (void *)local_14c8._1312_8_;
  fStack_1550 = (float)local_14c8._1320_4_;
  fStack_154c = (float)local_14c8._1324_4_;
  local_1538.Left = local_f88.Left;
  local_1538.Top = local_f88.Top;
  local_1538.Right = local_f88.Right;
  local_1538.Bottom = local_f88.Bottom;
  local_1548.Left = local_f98.Left;
  local_1548.Top = local_f98.Top;
  local_1548.Right = local_f98.Right;
  local_1548.Bottom = local_f98.Bottom;
  local_1528.Value = local_f78.Value;
  FComboBoxStyle::FComboBoxStyle((FComboBoxStyle *)local_f68,(FComboBoxStyle *)local_1a88);
  local_1a88._0_8_ = &___7FComboBoxStyle__6B_;
  local_1a78._0_8_ = &___7FComboButtonStyle__6B_;
  local_1608._0_8_ = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1568.ReferenceController);
  local_16d8._0_8_ = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1638.ReferenceController);
  FButtonStyle::~FButtonStyle((FButtonStyle *)(local_1a78 + 0x10));
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)local_1a78);
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)local_1a88);
  pFVar1 = (FSlateStyleSet *)**(undefined8 **)this;
  pFVar11 = ::FName::FName((FName *)&local_res8._s_0,"ComboBox");
  FSlateStyleSet::Set<FComboBoxStyle>(pFVar1,*pFVar11,(FComboBoxStyle *)local_f68);
  local_f68._0_8_ = &___7FComboBoxStyle__6B_;
  local_f58[0] = (FSlateWidgetStyle)&___7FComboButtonStyle__6B_;
  local_ae8 = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_a48.ReferenceController);
  local_bb8 = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_b18.ReferenceController);
  FButtonStyle::~FButtonStyle((FButtonStyle *)local_f48);
  FSlateWidgetStyle::~FSlateWidgetStyle(local_f58);
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)local_f68);
  local_14c8._0_8_ = &___7FComboButtonStyle__6B_;
  local_14c8._1136_8_ = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_14c8._1296_8_);
  local_14c8._928_8_ = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_14c8._1088_8_);
  FButtonStyle::~FButtonStyle((FButtonStyle *)(local_14c8 + 0x10));
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)local_14c8);
  pFVar8 = FComboButtonStyle::FComboButtonStyle((FComboButtonStyle *)local_1a88);
  FButtonStyle::operator=(&pFVar8->ButtonStyle,&NoBorder);
  uVar4 = _UNK_15076b1f8;
  local_res8._s_0 = (TVector2<float>_u_0_s_0)CoreStyleConstants::Icon8x8;
  local_1f48._0_8_ = pvVar6;
  _UNK_15076b1f8 = (float)uVar7;
  _UNK_15076b1fc = SUB84(uVar7,4);
  local_1f48._s_0.B = _UNK_15076b1f8;
  local_1f48._s_0.A = _UNK_15076b1fc;
  _UNK_15076b1f8 = uVar4;
  pFVar9 = (FString *)
           (**(code **)(*(longlong *)**(undefined8 **)this + 0xf0))
                     ((longlong *)**(undefined8 **)this,local_1f28,"Common/ComboArrow",L".png");
  pFVar10 = (FSlateBrush *)
            FSlateImageBrush::FSlateImageBrush
                      ((FSlateImageBrush *)local_1ea8,pFVar9,
                       (FDeprecateVector2DParameter *)&local_res8._s_0,
                       (FLinearColor *)&local_1f48._s_0,NoTile,FullColor);
  FSlateBrush::operator=(&pFVar8->DownArrowImage,pFVar10);
  local_res8 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  pFVar10 = (FSlateBrush *)
            FSlateNoResource::FSlateNoResource
                      ((FSlateNoResource *)local_1df8,
                       (FDeprecateVector2DParameter *)&local_res8._s_0);
  FSlateBrush::operator=(&pFVar8->MenuBorderBrush,pFVar10);
  (pFVar8->MenuBorderPadding).Left = 0.0;
  (pFVar8->MenuBorderPadding).Top = 0.0;
  (pFVar8->MenuBorderPadding).Right = 0.0;
  (pFVar8->MenuBorderPadding).Bottom = 0.0;
  FComboButtonStyle::FComboButtonStyle((FComboButtonStyle *)local_14c8,pFVar8);
  local_1df8[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_1d58);
  local_1ea8[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_1e08);
  if (local_1f28[0] != (void *)0x0) {
    FMemory::Free(local_1f28[0]);
  }
  local_1a88._0_8_ = &___7FComboButtonStyle__6B_;
  local_1620._8_8_ = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_1608._144_8_);
  local_16e8 = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_16d8._144_8_);
  FButtonStyle::~FButtonStyle((FButtonStyle *)local_1a78);
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)local_1a88);
  pFVar1 = (FSlateStyleSet *)**(undefined8 **)this;
  pFVar11 = ::FName::FName((FName *)&local_res8._s_0,"MessageLogListingComboButton");
  FSlateStyleSet::Set<FComboButtonStyle>(pFVar1,*pFVar11,(FComboButtonStyle *)local_14c8);
  local_14c8._0_8_ = &___7FComboButtonStyle__6B_;
  local_14c8._1136_8_ = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_14c8._1296_8_);
  local_14c8._928_8_ = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_14c8._1088_8_);
  FButtonStyle::~FButtonStyle((FButtonStyle *)(local_14c8 + 0x10));
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)local_14c8);
  pFVar1 = (FSlateStyleSet *)**(undefined8 **)this;
  pFVar12 = ::operator_new(0xb0);
  uVar4 = _UNK_15076b1f8;
  pFVar13 = pFVar14;
  if (pFVar12 != (FSlateImageBrush *)0x0) {
    local_res8._s_0 = (TVector2<float>_u_0_s_0)CoreStyleConstants::Icon12x12;
    local_1f48._0_8_ = pvVar6;
    _UNK_15076b1f8 = (float)uVar7;
    _UNK_15076b1fc = SUB84(uVar7,4);
    local_1f48._s_0.B = _UNK_15076b1f8;
    local_1f48._s_0.A = _UNK_15076b1fc;
    _UNK_15076b1f8 = uVar4;
    pFVar9 = (FString *)
             (**(code **)(*(longlong *)**(undefined8 **)this + 0xf0))
                       ((longlong *)**(undefined8 **)this,local_1f28,"Icons/PlusSymbol_12x",L".png")
    ;
    pFVar13 = FSlateImageBrush::FSlateImageBrush
                        (pFVar12,pFVar9,(FDeprecateVector2DParameter *)&local_res8._s_0,
                         (FLinearColor *)&local_1f48._s_0,NoTile,FullColor);
  }
  pFVar11 = ::FName::FName(&local_res10,"EditableComboBox.Add");
  FSlateStyleSet::Set<FSlateImageBrush>(pFVar1,*pFVar11,pFVar13);
  if ((pFVar12 != (FSlateImageBrush *)0x0) && (local_1f28[0] != (void *)0x0)) {
    FMemory::Free(local_1f28[0]);
  }
  pFVar1 = (FSlateStyleSet *)**(undefined8 **)this;
  pFVar12 = ::operator_new(0xb0);
  uVar4 = _UNK_15076b1f8;
  pFVar13 = pFVar14;
  if (pFVar12 != (FSlateImageBrush *)0x0) {
    local_res8._s_0 = (TVector2<float>_u_0_s_0)CoreStyleConstants::Icon12x12;
    local_1f48._0_8_ = pvVar6;
    _UNK_15076b1f8 = (float)uVar7;
    _UNK_15076b1fc = SUB84(uVar7,4);
    local_1f48._s_0.B = _UNK_15076b1f8;
    local_1f48._s_0.A = _UNK_15076b1fc;
    _UNK_15076b1f8 = uVar4;
    pFVar9 = (FString *)
             (**(code **)(*(longlong *)**(undefined8 **)this + 0xf0))
                       ((longlong *)**(undefined8 **)this,local_1f28,"Icons/Cross_12x",L".png");
    pFVar13 = FSlateImageBrush::FSlateImageBrush
                        (pFVar12,pFVar9,(FDeprecateVector2DParameter *)&local_res8._s_0,
                         (FLinearColor *)&local_1f48._s_0,NoTile,FullColor);
  }
  pFVar11 = ::FName::FName(&local_res10,"EditableComboBox.Delete");
  FSlateStyleSet::Set<FSlateImageBrush>(pFVar1,*pFVar11,pFVar13);
  if ((pFVar12 != (FSlateImageBrush *)0x0) && (local_1f28[0] != (void *)0x0)) {
    FMemory::Free(local_1f28[0]);
  }
  pFVar1 = (FSlateStyleSet *)**(undefined8 **)this;
  pFVar12 = ::operator_new(0xb0);
  uVar4 = _UNK_15076b1f8;
  pFVar13 = pFVar14;
  if (pFVar12 != (FSlateImageBrush *)0x0) {
    local_res8._s_0 = (TVector2<float>_u_0_s_0)CoreStyleConstants::Icon12x12;
    local_1f48._0_8_ = pvVar6;
    _UNK_15076b1f8 = (float)uVar7;
    _UNK_15076b1fc = SUB84(uVar7,4);
    local_1f48._s_0.B = _UNK_15076b1f8;
    local_1f48._s_0.A = _UNK_15076b1fc;
    _UNK_15076b1f8 = uVar4;
    pFVar9 = (FString *)
             (**(code **)(*(longlong *)**(undefined8 **)this + 0xf0))
                       ((longlong *)**(undefined8 **)this,local_1f28,"Icons/ellipsis_12x",L".png");
    pFVar13 = FSlateImageBrush::FSlateImageBrush
                        (pFVar12,pFVar9,(FDeprecateVector2DParameter *)&local_res8._s_0,
                         (FLinearColor *)&local_1f48._s_0,NoTile,FullColor);
  }
  pFVar11 = ::FName::FName(&local_res10,"EditableComboBox.Rename");
  FSlateStyleSet::Set<FSlateImageBrush>(pFVar1,*pFVar11,pFVar13);
  if ((pFVar12 != (FSlateImageBrush *)0x0) && (local_1f28[0] != (void *)0x0)) {
    FMemory::Free(local_1f28[0]);
  }
  pFVar1 = (FSlateStyleSet *)**(undefined8 **)this;
  pFVar13 = ::operator_new(0xb0);
  uVar4 = _UNK_15076b1f8;
  if (pFVar13 != (FSlateImageBrush *)0x0) {
    local_res8._s_0 = (TVector2<float>_u_0_s_0)CoreStyleConstants::Icon16x16;
    local_1f48._0_8_ = pvVar6;
    _UNK_15076b1f8 = (float)uVar7;
    _UNK_15076b1fc = SUB84(uVar7,4);
    local_1f48._s_0.B = _UNK_15076b1f8;
    local_1f48._s_0.A = _UNK_15076b1fc;
    _UNK_15076b1f8 = uVar4;
    pFVar9 = (FString *)
             (**(code **)(*(longlong *)**(undefined8 **)this + 0xf0))
                       ((longlong *)**(undefined8 **)this,local_1f28,"Common/Check",L".png");
    pFVar14 = FSlateImageBrush::FSlateImageBrush
                        (pFVar13,pFVar9,(FDeprecateVector2DParameter *)&local_res8._s_0,
                         (FLinearColor *)&local_1f48._s_0,NoTile,FullColor);
  }
  pFVar11 = ::FName::FName(&local_res10,"EditableComboBox.Accept");
  FSlateStyleSet::Set<FSlateImageBrush>(pFVar1,*pFVar11,pFVar14);
  if ((pFVar13 != (FSlateImageBrush *)0x0) && (local_1f28[0] != (void *)0x0)) {
    FMemory::Free(local_1f28[0]);
  }
  lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if ((*(int *)(lVar2 + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    pFVar15 = FCheckBoxStyle::FCheckBoxStyle(&local_9a8);
    uVar4 = _UNK_15076b1f8;
    local_1f48._0_8_ = pvVar6;
    _UNK_15076b1f8 = (float)uVar7;
    _UNK_15076b1fc = SUB84(uVar7,4);
    local_1f48._s_0.B = _UNK_15076b1f8;
    local_1f48._s_0.A = _UNK_15076b1fc;
    _UNK_15076b1f8 = uVar4;
    (pFVar15->CheckBoxType).Value = '\0';
    local_res8._s_0 = (TVector2<float>_u_0_s_0)CoreStyleConstants::Icon16x16;
    pFVar9 = (FString *)
             (**(code **)(*(longlong *)**(undefined8 **)this + 0xf0))
                       ((longlong *)**(undefined8 **)this,&local_1f38,"Common/CheckBox",L".png");
    pFVar10 = (FSlateBrush *)
              FSlateImageBrush::FSlateImageBrush
                        ((FSlateImageBrush *)local_14c8,pFVar9,
                         (FDeprecateVector2DParameter *)&local_res8._s_0,
                         (FLinearColor *)&local_1f48._s_0,NoTile,FullColor);
    FSlateBrush::operator=(&pFVar15->UncheckedImage,pFVar10);
    uVar4 = _UNK_15076b1f8;
    local_res8._s_0 = (TVector2<float>_u_0_s_0)CoreStyleConstants::Icon16x16;
    local_1f48._0_8_ = pvVar6;
    _UNK_15076b1f8 = (float)uVar7;
    _UNK_15076b1fc = SUB84(uVar7,4);
    local_1f48._s_0.B = _UNK_15076b1f8;
    local_1f48._s_0.A = _UNK_15076b1fc;
    _UNK_15076b1f8 = uVar4;
    pFVar9 = (FString *)
             (**(code **)(*(longlong *)**(undefined8 **)this + 0xf0))
                       ((longlong *)**(undefined8 **)this,local_1ec8,"Common/CheckBox",L".png");
    pFVar10 = (FSlateBrush *)
              FSlateImageBrush::FSlateImageBrush
                        ((FSlateImageBrush *)local_1a88,pFVar9,
                         (FDeprecateVector2DParameter *)&local_res8._s_0,
                         (FLinearColor *)&local_1f48._s_0,NoTile,FullColor);
    FSlateBrush::operator=(&pFVar15->UncheckedHoveredImage,pFVar10);
    local_res8._s_0 = (TVector2<float>_u_0_s_0)CoreStyleConstants::Icon16x16;
    local_1f48._0_8_ = ___xmm_3f8000003f0000003f0000003f000000;
    local_1f48._s_0.B = _UNK_1509252f8;
    local_1f48._s_0.A = _UNK_1509252fc;
    pFVar9 = (FString *)
             (**(code **)(*(longlong *)**(undefined8 **)this + 0xf0))
                       ((longlong *)**(undefined8 **)this,local_1ed8,"Common/CheckBox_Hovered",
                        L".png");
    pFVar10 = (FSlateBrush *)
              FSlateImageBrush::FSlateImageBrush
                        ((FSlateImageBrush *)local_f68,pFVar9,
                         (FDeprecateVector2DParameter *)&local_res8._s_0,
                         (FLinearColor *)&local_1f48._s_0,NoTile,FullColor);
    FSlateBrush::operator=(&pFVar15->UncheckedPressedImage,pFVar10);
    uVar4 = _UNK_15076b1f8;
    local_res8._s_0 = (TVector2<float>_u_0_s_0)CoreStyleConstants::Icon16x16;
    local_1f48._0_8_ = pvVar6;
    _UNK_15076b1f8 = (float)uVar7;
    _UNK_15076b1fc = SUB84(uVar7,4);
    local_1f48._s_0.B = _UNK_15076b1f8;
    local_1f48._s_0.A = _UNK_15076b1fc;
    _UNK_15076b1f8 = uVar4;
    pFVar9 = (FString *)
             (**(code **)(*(longlong *)**(undefined8 **)this + 0xf0))
                       ((longlong *)**(undefined8 **)this,local_1ee8,
                        "Common/CheckBox_Checked_Hovered",L".png");
    pFVar10 = (FSlateBrush *)
              FSlateImageBrush::FSlateImageBrush
                        ((FSlateImageBrush *)local_1be8,pFVar9,
                         (FDeprecateVector2DParameter *)&local_res8._s_0,
                         (FLinearColor *)&local_1f48._s_0,NoTile,FullColor);
    FSlateBrush::operator=(&pFVar15->CheckedImage,pFVar10);
    local_res8._s_0 = (TVector2<float>_u_0_s_0)CoreStyleConstants::Icon16x16;
    local_1f48._0_8_ = ___xmm_3f8000003f0000003f0000003f000000;
    local_1f48._s_0.B = _UNK_1509252f8;
    local_1f48._s_0.A = _UNK_1509252fc;
    pFVar9 = (FString *)
             (**(code **)(*(longlong *)**(undefined8 **)this + 0xf0))
                       ((longlong *)**(undefined8 **)this,local_1ef8,
                        "Common/CheckBox_Checked_Hovered",L".png");
    pFVar10 = (FSlateBrush *)
              FSlateImageBrush::FSlateImageBrush
                        ((FSlateImageBrush *)local_1c98,pFVar9,
                         (FDeprecateVector2DParameter *)&local_res8._s_0,
                         (FLinearColor *)&local_1f48._s_0,NoTile,FullColor);
    FSlateBrush::operator=(&pFVar15->CheckedHoveredImage,pFVar10);
    uVar4 = _UNK_15076b1f8;
    local_res8._s_0 = (TVector2<float>_u_0_s_0)CoreStyleConstants::Icon16x16;
    local_1f48._0_8_ = pvVar6;
    _UNK_15076b1f8 = (float)uVar7;
    _UNK_15076b1fc = SUB84(uVar7,4);
    local_1f48._s_0.B = _UNK_15076b1f8;
    local_1f48._s_0.A = _UNK_15076b1fc;
    _UNK_15076b1f8 = uVar4;
    pFVar9 = (FString *)
             (**(code **)(*(longlong *)**(undefined8 **)this + 0xf0))
                       ((longlong *)**(undefined8 **)this,local_1f08,"Common/CheckBox_Checked",
                        L".png");
    pFVar10 = (FSlateBrush *)
              FSlateImageBrush::FSlateImageBrush
                        ((FSlateImageBrush *)local_1d48,pFVar9,
                         (FDeprecateVector2DParameter *)&local_res8._s_0,
                         (FLinearColor *)&local_1f48._s_0,NoTile,FullColor);
    FSlateBrush::operator=(&pFVar15->CheckedPressedImage,pFVar10);
    uVar4 = _UNK_15076b1f8;
    local_res8._s_0 = (TVector2<float>_u_0_s_0)CoreStyleConstants::Icon16x16;
    local_1f48._0_8_ = pvVar6;
    _UNK_15076b1f8 = (float)uVar7;
    _UNK_15076b1fc = SUB84(uVar7,4);
    local_1f48._s_0.B = _UNK_15076b1f8;
    local_1f48._s_0.A = _UNK_15076b1fc;
    _UNK_15076b1f8 = uVar4;
    pFVar9 = (FString *)
             (**(code **)(*(longlong *)**(undefined8 **)this + 0xf0))
                       ((longlong *)**(undefined8 **)this,&local_1f18,"Common/CheckBox_Undetermined"
                        ,L".png");
    pFVar10 = (FSlateBrush *)
              FSlateImageBrush::FSlateImageBrush
                        ((FSlateImageBrush *)local_1b38,pFVar9,
                         (FDeprecateVector2DParameter *)&local_res8._s_0,
                         (FLinearColor *)&local_1f48._s_0,NoTile,FullColor);
    FSlateBrush::operator=(&pFVar15->UndeterminedImage,pFVar10);
    uVar4 = _UNK_15076b1f8;
    local_res8._s_0 = (TVector2<float>_u_0_s_0)CoreStyleConstants::Icon16x16;
    local_1f48._0_8_ = pvVar6;
    _UNK_15076b1f8 = (float)uVar7;
    _UNK_15076b1fc = SUB84(uVar7,4);
    local_1f48._s_0.B = _UNK_15076b1f8;
    local_1f48._s_0.A = _UNK_15076b1fc;
    _UNK_15076b1f8 = uVar4;
    pFVar9 = (FString *)
             (**(code **)(*(longlong *)**(undefined8 **)this + 0xf0))
                       ((longlong *)**(undefined8 **)this,local_1eb8,
                        "Common/CheckBox_Undetermined_Hovered",L".png");
    pFVar10 = (FSlateBrush *)
              FSlateImageBrush::FSlateImageBrush
                        ((FSlateImageBrush *)local_1ea8,pFVar9,
                         (FDeprecateVector2DParameter *)&local_res8._s_0,
                         (FLinearColor *)&local_1f48._s_0,NoTile,FullColor);
    FSlateBrush::operator=(&pFVar15->UndeterminedHoveredImage,pFVar10);
    local_res8._s_0 = (TVector2<float>_u_0_s_0)CoreStyleConstants::Icon16x16;
    local_1f48._0_8_ = ___xmm_3f8000003f0000003f0000003f000000;
    local_1f48._s_0.B = _UNK_1509252f8;
    local_1f48._s_0.A = _UNK_1509252fc;
    pFVar9 = (FString *)
             (**(code **)(*(longlong *)**(undefined8 **)this + 0xf0))
                       ((longlong *)**(undefined8 **)this,local_1f28,
                        "Common/CheckBox_Undetermined_Hovered",L".png");
    pFVar10 = (FSlateBrush *)
              FSlateImageBrush::FSlateImageBrush
                        ((FSlateImageBrush *)local_1df8,pFVar9,
                         (FDeprecateVector2DParameter *)&local_res8._s_0,
                         (FLinearColor *)&local_1f48._s_0,NoTile,FullColor);
    FSlateBrush::operator=(&pFVar15->UndeterminedPressedImage,pFVar10);
    FCheckBoxStyle::FCheckBoxStyle(&BasicCheckBoxStyle,pFVar15);
    local_1df8[0] = &___7FSlateBrush__6B_;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_1d58);
    if (local_1f28[0] != (void *)0x0) {
      FMemory::Free(local_1f28[0]);
    }
    local_1ea8[0] = &___7FSlateBrush__6B_;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_1e08);
    if (local_1eb8[0] != (void *)0x0) {
      FMemory::Free(local_1eb8[0]);
    }
    local_1b38[0] = &___7FSlateBrush__6B_;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_1a98);
    if ((void *)local_1f18._0_8_ != (void *)0x0) {
      FMemory::Free((void *)local_1f18._0_8_);
    }
    local_1d48[0] = &___7FSlateBrush__6B_;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_1ca8);
    if (local_1f08[0] != (void *)0x0) {
      FMemory::Free(local_1f08[0]);
    }
    local_1c98[0] = &___7FSlateBrush__6B_;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_1bf8);
    if (local_1ef8[0] != (void *)0x0) {
      FMemory::Free(local_1ef8[0]);
    }
    local_1be8[0] = &___7FSlateBrush__6B_;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_1b48);
    if (local_1ee8[0] != (void *)0x0) {
      FMemory::Free(local_1ee8[0]);
    }
    local_f68._0_8_ = &___7FSlateBrush__6B_;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_f48._128_8_);
    if (local_1ed8[0] != (void *)0x0) {
      FMemory::Free(local_1ed8[0]);
    }
    local_1a88._0_8_ = &___7FSlateBrush__6B_;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_1a78._144_8_);
    if (local_1ec8[0] != (void *)0x0) {
      FMemory::Free(local_1ec8[0]);
    }
    local_14c8._0_8_ = &___7FSlateBrush__6B_;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_14c8._160_8_);
    if ((void *)local_1f38._0_8_ != (void *)0x0) {
      FMemory::Free((void *)local_1f38._0_8_);
    }
    FCheckBoxStyle::~FCheckBoxStyle(&local_9a8);
    atexit(``FUMGCoreStyle::Create'::__l2::<lambda_2>::operator()'::__l6::
           _dynamic_atexit_destructor_for__BasicCheckBoxStyle__);
    _Init_thread_footer(&::_TSS0);
  }
  pFVar1 = (FSlateStyleSet *)**(undefined8 **)this;
  pFVar11 = ::FName::FName((FName *)&local_res8._s_0,"Checkbox");
  FSlateStyleSet::Set<FCheckBoxStyle>(pFVar1,*pFVar11,&BasicCheckBoxStyle);
  if ((*(int *)(lVar2 + 0x9d4c) < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
    pFVar15 = FCheckBoxStyle::FCheckBoxStyle(&local_9a8);
    (pFVar15->CheckBoxType).Value = '\x01';
    local_res8 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
    pFVar10 = (FSlateBrush *)
              FSlateNoResource::FSlateNoResource
                        ((FSlateNoResource *)local_1ea8,
                         (FDeprecateVector2DParameter *)&local_res8._s_0);
    FSlateBrush::operator=(&pFVar15->UncheckedImage,pFVar10);
    local_res8 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
    pFVar10 = (FSlateBrush *)
              FSlateNoResource::FSlateNoResource
                        ((FSlateNoResource *)local_1df8,
                         (FDeprecateVector2DParameter *)&local_res8._s_0);
    FSlateBrush::operator=(&pFVar15->UncheckedHoveredImage,pFVar10);
    local_res8 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
    pFVar10 = (FSlateBrush *)
              FSlateNoResource::FSlateNoResource
                        ((FSlateNoResource *)local_1b38,
                         (FDeprecateVector2DParameter *)&local_res8._s_0);
    FSlateBrush::operator=(&pFVar15->UncheckedPressedImage,pFVar10);
    local_res8 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
    pFVar10 = (FSlateBrush *)
              FSlateNoResource::FSlateNoResource
                        ((FSlateNoResource *)local_1d48,
                         (FDeprecateVector2DParameter *)&local_res8._s_0);
    FSlateBrush::operator=(&pFVar15->CheckedImage,pFVar10);
    local_res8 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
    pFVar10 = (FSlateBrush *)
              FSlateNoResource::FSlateNoResource
                        ((FSlateNoResource *)local_1c98,
                         (FDeprecateVector2DParameter *)&local_res8._s_0);
    FSlateBrush::operator=(&pFVar15->CheckedHoveredImage,pFVar10);
    local_res8 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
    pFVar10 = (FSlateBrush *)
              FSlateNoResource::FSlateNoResource
                        ((FSlateNoResource *)local_1be8,
                         (FDeprecateVector2DParameter *)&local_res8._s_0);
    FSlateBrush::operator=(&pFVar15->CheckedPressedImage,pFVar10);
    local_res8 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
    pFVar10 = (FSlateBrush *)
              FSlateNoResource::FSlateNoResource
                        ((FSlateNoResource *)local_f68,
                         (FDeprecateVector2DParameter *)&local_res8._s_0);
    FSlateBrush::operator=(&pFVar15->UndeterminedImage,pFVar10);
    local_res8 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
    pFVar10 = (FSlateBrush *)
              FSlateNoResource::FSlateNoResource
                        ((FSlateNoResource *)local_1a88,
                         (FDeprecateVector2DParameter *)&local_res8._s_0);
    FSlateBrush::operator=(&pFVar15->UndeterminedHoveredImage,pFVar10);
    local_res8 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
    pFVar10 = (FSlateBrush *)
              FSlateNoResource::FSlateNoResource
                        ((FSlateNoResource *)local_14c8,
                         (FDeprecateVector2DParameter *)&local_res8._s_0);
    FSlateBrush::operator=(&pFVar15->UndeterminedPressedImage,pFVar10);
    FCheckBoxStyle::FCheckBoxStyle(&BasicTransparentCheckBoxStyle,pFVar15);
    local_14c8._0_8_ = &___7FSlateBrush__6B_;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_14c8._160_8_);
    local_1a88._0_8_ = &___7FSlateBrush__6B_;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_1a78._144_8_);
    local_f68._0_8_ = &___7FSlateBrush__6B_;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_f48._128_8_);
    local_1be8[0] = &___7FSlateBrush__6B_;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_1b48);
    local_1c98[0] = &___7FSlateBrush__6B_;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_1bf8);
    local_1d48[0] = &___7FSlateBrush__6B_;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_1ca8);
    local_1b38[0] = &___7FSlateBrush__6B_;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_1a98);
    local_1df8[0] = &___7FSlateBrush__6B_;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_1d58);
    local_1ea8[0] = &___7FSlateBrush__6B_;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_1e08);
    FCheckBoxStyle::~FCheckBoxStyle(&local_9a8);
    atexit(``FUMGCoreStyle::Create'::__l2::<lambda_2>::operator()'::__l6::
           _dynamic_atexit_destructor_for__BasicTransparentCheckBoxStyle__);
    _Init_thread_footer(&::_TSS1);
  }
  pFVar1 = (FSlateStyleSet *)**(undefined8 **)this;
  pFVar11 = ::FName::FName((FName *)&local_res8._s_0,"TransparentCheckBox");
  FSlateStyleSet::Set<FCheckBoxStyle>(pFVar1,*pFVar11,&BasicTransparentCheckBoxStyle);
  uVar4 = _UNK_15076b0c8;
  pvVar3 = ___xmm_3e8000003e8000003e8000003e800000;
  if ((*(int *)(lVar2 + 0x9d4c) < ::_TSS2) && (_Init_thread_header(&::_TSS2), ::_TSS2 == -1)) {
    pFVar15 = FCheckBoxStyle::FCheckBoxStyle(&local_9a8);
    (pFVar15->CheckBoxType).Value = '\x01';
    local_res8 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
    pFVar10 = (FSlateBrush *)
              FSlateNoResource::FSlateNoResource
                        ((FSlateNoResource *)local_1d48,
                         (FDeprecateVector2DParameter *)&local_res8._s_0);
    FSlateBrush::operator=(&pFVar15->UncheckedImage,pFVar10);
    uVar5 = _UNK_15076b0c8;
    local_1f38._0_8_ = pvVar3;
    _UNK_15076b0c8 = (float)uVar4;
    _UNK_15076b0cc = SUB84(uVar4,4);
    local_1f38._s_0.B = _UNK_15076b0c8;
    local_1f38._s_0.A = _UNK_15076b0cc;
    _UNK_15076b0c8 = uVar5;
    pFVar9 = (FString *)
             (**(code **)(*(longlong *)**(undefined8 **)this + 0xf0))
                       ((longlong *)**(undefined8 **)this,local_1f08,"Common/RoundedSelection_16x",
                        L".png");
    pFVar10 = (FSlateBrush *)
              FSlateBoxBrush::FSlateBoxBrush
                        ((FSlateBoxBrush *)local_1c98,pFVar9,(FMargin *)&local_1f38._s_0,
                         &SelectionColor,FullColor);
    FSlateBrush::operator=(&pFVar15->UncheckedHoveredImage,pFVar10);
    uVar5 = _UNK_15076b0c8;
    local_1f38._0_8_ = pvVar3;
    _UNK_15076b0c8 = (float)uVar4;
    _UNK_15076b0cc = SUB84(uVar4,4);
    local_1f38._s_0.B = _UNK_15076b0c8;
    local_1f38._s_0.A = _UNK_15076b0cc;
    _UNK_15076b0c8 = uVar5;
    pFVar9 = (FString *)
             (**(code **)(*(longlong *)**(undefined8 **)this + 0xf0))
                       ((longlong *)**(undefined8 **)this,local_1ef8,"Common/RoundedSelection_16x",
                        L".png");
    pFVar10 = (FSlateBrush *)
              FSlateBoxBrush::FSlateBoxBrush
                        ((FSlateBoxBrush *)local_1be8,pFVar9,(FMargin *)&local_1f38._s_0,
                         &SelectionColor_Pressed,FullColor);
    FSlateBrush::operator=(&pFVar15->UncheckedPressedImage,pFVar10);
    uVar5 = _UNK_15076b0c8;
    local_1f38._0_8_ = pvVar3;
    _UNK_15076b0c8 = (float)uVar4;
    _UNK_15076b0cc = SUB84(uVar4,4);
    local_1f38._s_0.B = _UNK_15076b0c8;
    local_1f38._s_0.A = _UNK_15076b0cc;
    _UNK_15076b0c8 = uVar5;
    pFVar9 = (FString *)
             (**(code **)(*(longlong *)**(undefined8 **)this + 0xf0))
                       ((longlong *)**(undefined8 **)this,local_1ee8,"Common/RoundedSelection_16x",
                        L".png");
    pFVar10 = (FSlateBrush *)
              FSlateBoxBrush::FSlateBoxBrush
                        ((FSlateBoxBrush *)local_f68,pFVar9,(FMargin *)&local_1f38._s_0,
                         &SelectionColor_Pressed,FullColor);
    FSlateBrush::operator=(&pFVar15->CheckedImage,pFVar10);
    uVar5 = _UNK_15076b0c8;
    local_1f38._0_8_ = pvVar3;
    _UNK_15076b0c8 = (float)uVar4;
    _UNK_15076b0cc = SUB84(uVar4,4);
    local_1f38._s_0.B = _UNK_15076b0c8;
    local_1f38._s_0.A = _UNK_15076b0cc;
    _UNK_15076b0c8 = uVar5;
    pFVar9 = (FString *)
             (**(code **)(*(longlong *)**(undefined8 **)this + 0xf0))
                       ((longlong *)**(undefined8 **)this,local_1ed8,"Common/RoundedSelection_16x",
                        L".png");
    pFVar10 = (FSlateBrush *)
              FSlateBoxBrush::FSlateBoxBrush
                        ((FSlateBoxBrush *)local_1a88,pFVar9,(FMargin *)&local_1f38._s_0,
                         &SelectionColor,FullColor);
    FSlateBrush::operator=(&pFVar15->CheckedHoveredImage,pFVar10);
    uVar5 = _UNK_15076b0c8;
    local_1f38._0_8_ = pvVar3;
    _UNK_15076b0c8 = (float)uVar4;
    _UNK_15076b0cc = SUB84(uVar4,4);
    local_1f38._s_0.B = _UNK_15076b0c8;
    local_1f38._s_0.A = _UNK_15076b0cc;
    _UNK_15076b0c8 = uVar5;
    pFVar9 = (FString *)
             (**(code **)(*(longlong *)**(undefined8 **)this + 0xf0))
                       ((longlong *)**(undefined8 **)this,local_1ec8,"Common/RoundedSelection_16x",
                        L".png");
    pFVar10 = (FSlateBrush *)
              FSlateBoxBrush::FSlateBoxBrush
                        ((FSlateBoxBrush *)local_14c8,pFVar9,(FMargin *)&local_1f38._s_0,
                         &SelectionColor_Pressed,FullColor);
    FSlateBrush::operator=(&pFVar15->CheckedPressedImage,pFVar10);
    FCheckBoxStyle::FCheckBoxStyle(&ToggleButtonStyle,pFVar15);
    local_14c8._0_8_ = &___7FSlateBrush__6B_;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_14c8._160_8_);
    if (local_1ec8[0] != (void *)0x0) {
      FMemory::Free(local_1ec8[0]);
    }
    local_1a88._0_8_ = &___7FSlateBrush__6B_;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_1a78._144_8_);
    if (local_1ed8[0] != (void *)0x0) {
      FMemory::Free(local_1ed8[0]);
    }
    local_f68._0_8_ = &___7FSlateBrush__6B_;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_f48._128_8_);
    if (local_1ee8[0] != (void *)0x0) {
      FMemory::Free(local_1ee8[0]);
    }
    local_1be8[0] = &___7FSlateBrush__6B_;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_1b48);
    if (local_1ef8[0] != (void *)0x0) {
      FMemory::Free(local_1ef8[0]);
    }
    local_1c98[0] = &___7FSlateBrush__6B_;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_1bf8);
    if (local_1f08[0] != (void *)0x0) {
      FMemory::Free(local_1f08[0]);
    }
    local_1d48[0] = &___7FSlateBrush__6B_;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_1ca8);
    FCheckBoxStyle::~FCheckBoxStyle(&local_9a8);
    atexit(``FUMGCoreStyle::Create'::__l2::<lambda_2>::operator()'::__l6::
           _dynamic_atexit_destructor_for__ToggleButtonStyle__);
    _Init_thread_footer(&::_TSS2);
  }
  pFVar1 = (FSlateStyleSet *)**(undefined8 **)this;
  pFVar11 = ::FName::FName((FName *)&local_res8._s_0,"ToggleButtonCheckbox");
  FSlateStyleSet::Set<FCheckBoxStyle>(pFVar1,*pFVar11,&ToggleButtonStyle);
  if ((*(int *)(lVar2 + 0x9d4c) < ::_TSS3) && (_Init_thread_header(&::_TSS3), ::_TSS3 == -1)) {
    pFVar15 = FCheckBoxStyle::FCheckBoxStyle(&local_9a8);
    (pFVar15->CheckBoxType).Value = '\x01';
    local_res8 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
    pFVar10 = (FSlateBrush *)
              FSlateNoResource::FSlateNoResource
                        ((FSlateNoResource *)local_1d48,
                         (FDeprecateVector2DParameter *)&local_res8._s_0);
    FSlateBrush::operator=(&pFVar15->UncheckedImage,pFVar10);
    local_res8._s_0 = (TVector2<float>_u_0_s_0)CoreStyleConstants::Icon8x8;
    pFVar9 = (FString *)
             (**(code **)(*(longlong *)**(undefined8 **)this + 0xf0))
                       ((longlong *)**(undefined8 **)this,local_1f08,"Common/Selection",L".png");
    pFVar10 = (FSlateBrush *)
              FSlateImageBrush::FSlateImageBrush
                        ((FSlateImageBrush *)local_1c98,pFVar9,
                         (FDeprecateVector2DParameter *)&local_res8._s_0,&SelectionColor_Inactive,
                         NoTile,FullColor);
    FSlateBrush::operator=(&pFVar15->UncheckedHoveredImage,pFVar10);
    local_res8._s_0 = (TVector2<float>_u_0_s_0)CoreStyleConstants::Icon8x8;
    pFVar9 = (FString *)
             (**(code **)(*(longlong *)**(undefined8 **)this + 0xf0))
                       ((longlong *)**(undefined8 **)this,local_1ef8,"Common/Selection",L".png");
    pFVar10 = (FSlateBrush *)
              FSlateImageBrush::FSlateImageBrush
                        ((FSlateImageBrush *)local_1be8,pFVar9,
                         (FDeprecateVector2DParameter *)&local_res8._s_0,&SelectionColor_Inactive,
                         NoTile,FullColor);
    FSlateBrush::operator=(&pFVar15->UncheckedPressedImage,pFVar10);
    local_res8._s_0 = (TVector2<float>_u_0_s_0)CoreStyleConstants::Icon8x8;
    pFVar9 = (FString *)
             (**(code **)(*(longlong *)**(undefined8 **)this + 0xf0))
                       ((longlong *)**(undefined8 **)this,local_1ee8,"Common/Selection",L".png");
    pFVar10 = (FSlateBrush *)
              FSlateImageBrush::FSlateImageBrush
                        ((FSlateImageBrush *)local_f68,pFVar9,
                         (FDeprecateVector2DParameter *)&local_res8._s_0,&SelectionColor,NoTile,
                         FullColor);
    FSlateBrush::operator=(&pFVar15->CheckedImage,pFVar10);
    local_res8._s_0 = (TVector2<float>_u_0_s_0)CoreStyleConstants::Icon8x8;
    pFVar9 = (FString *)
             (**(code **)(*(longlong *)**(undefined8 **)this + 0xf0))
                       ((longlong *)**(undefined8 **)this,local_1ed8,"Common/Selection",L".png");
    pFVar10 = (FSlateBrush *)
              FSlateImageBrush::FSlateImageBrush
                        ((FSlateImageBrush *)local_1a88,pFVar9,
                         (FDeprecateVector2DParameter *)&local_res8._s_0,&SelectionColor,NoTile,
                         FullColor);
    FSlateBrush::operator=(&pFVar15->CheckedHoveredImage,pFVar10);
    uVar5 = _UNK_15076b0c8;
    local_1f38._0_8_ = pvVar3;
    _UNK_15076b0c8 = (float)uVar4;
    _UNK_15076b0cc = SUB84(uVar4,4);
    local_1f38._s_0.B = _UNK_15076b0c8;
    local_1f38._s_0.A = _UNK_15076b0cc;
    _UNK_15076b0c8 = uVar5;
    pFVar9 = (FString *)
             (**(code **)(*(longlong *)**(undefined8 **)this + 0xf0))
                       ((longlong *)**(undefined8 **)this,local_1ec8,"Common/Selector",L".png");
    pFVar10 = (FSlateBrush *)
              FSlateBoxBrush::FSlateBoxBrush
                        ((FSlateBoxBrush *)local_14c8,pFVar9,(FMargin *)&local_1f38._s_0,
                         &SelectorColor,FullColor);
    FSlateBrush::operator=(&pFVar15->CheckedPressedImage,pFVar10);
    FCheckBoxStyle::FCheckBoxStyle(&ToggleButtonRowStyle,pFVar15);
    local_14c8._0_8_ = &___7FSlateBrush__6B_;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_14c8._160_8_);
    if (local_1ec8[0] != (void *)0x0) {
      FMemory::Free(local_1ec8[0]);
    }
    local_1a88._0_8_ = &___7FSlateBrush__6B_;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_1a78._144_8_);
    if (local_1ed8[0] != (void *)0x0) {
      FMemory::Free(local_1ed8[0]);
    }
    local_f68._0_8_ = &___7FSlateBrush__6B_;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_f48._128_8_);
    if (local_1ee8[0] != (void *)0x0) {
      FMemory::Free(local_1ee8[0]);
    }
    local_1be8[0] = &___7FSlateBrush__6B_;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_1b48);
    if (local_1ef8[0] != (void *)0x0) {
      FMemory::Free(local_1ef8[0]);
    }
    local_1c98[0] = &___7FSlateBrush__6B_;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_1bf8);
    if (local_1f08[0] != (void *)0x0) {
      FMemory::Free(local_1f08[0]);
    }
    local_1d48[0] = &___7FSlateBrush__6B_;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_1ca8);
    FCheckBoxStyle::~FCheckBoxStyle(&local_9a8);
    atexit(``FUMGCoreStyle::Create'::__l2::<lambda_2>::operator()'::__l6::
           _dynamic_atexit_destructor_for__ToggleButtonRowStyle__);
    _Init_thread_footer(&::_TSS3);
  }
  pFVar1 = (FSlateStyleSet *)**(undefined8 **)this;
  pFVar11 = ::FName::FName((FName *)&local_res8._s_0,"ToggleButtonRowStyle");
  FSlateStyleSet::Set<FCheckBoxStyle>(pFVar1,*pFVar11,&ToggleButtonRowStyle);
  if ((*(int *)(lVar2 + 0x9d4c) < ::_TSS4) && (_Init_thread_header(&::_TSS4), ::_TSS4 == -1)) {
    pFVar15 = FCheckBoxStyle::FCheckBoxStyle(&local_9a8);
    uVar4 = _UNK_15076b1f8;
    local_res8._s_0 = (TVector2<float>_u_0_s_0)CoreStyleConstants::Icon16x16;
    local_1f38._0_8_ = pvVar6;
    _UNK_15076b1f8 = (float)uVar7;
    _UNK_15076b1fc = SUB84(uVar7,4);
    local_1f38._s_0.B = _UNK_15076b1f8;
    local_1f38._s_0.A = _UNK_15076b1fc;
    _UNK_15076b1f8 = uVar4;
    pFVar9 = (FString *)
             (**(code **)(*(longlong *)**(undefined8 **)this + 0xf0))
                       ((longlong *)**(undefined8 **)this,&local_1f18,
                        "Common/RadioButton_Unselected_16x",L".png");
    pFVar10 = (FSlateBrush *)
              FSlateImageBrush::FSlateImageBrush
                        ((FSlateImageBrush *)local_1ea8,pFVar9,
                         (FDeprecateVector2DParameter *)&local_res8._s_0,
                         (FLinearColor *)&local_1f38._s_0,NoTile,FullColor);
    FSlateBrush::operator=(&pFVar15->UncheckedImage,pFVar10);
    uVar4 = _UNK_15076b1f8;
    local_res8._s_0 = (TVector2<float>_u_0_s_0)CoreStyleConstants::Icon16x16;
    local_1f38._0_8_ = pvVar6;
    _UNK_15076b1f8 = (float)uVar7;
    _UNK_15076b1fc = SUB84(uVar7,4);
    local_1f38._s_0.B = _UNK_15076b1f8;
    local_1f38._s_0.A = _UNK_15076b1fc;
    _UNK_15076b1f8 = uVar4;
    pFVar9 = (FString *)
             (**(code **)(*(longlong *)**(undefined8 **)this + 0xf0))
                       ((longlong *)**(undefined8 **)this,local_1eb8,
                        "Common/RadioButton_Unselected_16x",L".png");
    pFVar10 = (FSlateBrush *)
              FSlateImageBrush::FSlateImageBrush
                        ((FSlateImageBrush *)local_1df8,pFVar9,
                         (FDeprecateVector2DParameter *)&local_res8._s_0,
                         (FLinearColor *)&local_1f38._s_0,NoTile,FullColor);
    FSlateBrush::operator=(&pFVar15->UncheckedHoveredImage,pFVar10);
    uVar4 = _UNK_15076b1f8;
    local_res8._s_0 = (TVector2<float>_u_0_s_0)CoreStyleConstants::Icon16x16;
    local_1f38._0_8_ = pvVar6;
    _UNK_15076b1f8 = (float)uVar7;
    _UNK_15076b1fc = SUB84(uVar7,4);
    local_1f38._s_0.B = _UNK_15076b1f8;
    local_1f38._s_0.A = _UNK_15076b1fc;
    _UNK_15076b1f8 = uVar4;
    pFVar9 = (FString *)
             (**(code **)(*(longlong *)**(undefined8 **)this + 0xf0))
                       ((longlong *)**(undefined8 **)this,local_1f28,
                        "Common/RadioButton_Unselected_16x",L".png");
    pFVar10 = (FSlateBrush *)
              FSlateImageBrush::FSlateImageBrush
                        ((FSlateImageBrush *)local_1b38,pFVar9,
                         (FDeprecateVector2DParameter *)&local_res8._s_0,
                         (FLinearColor *)&local_1f38._s_0,NoTile,FullColor);
    FSlateBrush::operator=(&pFVar15->UncheckedPressedImage,pFVar10);
    uVar4 = _UNK_15076b1f8;
    local_res8._s_0 = (TVector2<float>_u_0_s_0)CoreStyleConstants::Icon16x16;
    local_1f38._0_8_ = pvVar6;
    _UNK_15076b1f8 = (float)uVar7;
    _UNK_15076b1fc = SUB84(uVar7,4);
    local_1f38._s_0.B = _UNK_15076b1f8;
    local_1f38._s_0.A = _UNK_15076b1fc;
    _UNK_15076b1f8 = uVar4;
    pFVar9 = (FString *)
             (**(code **)(*(longlong *)**(undefined8 **)this + 0xf0))
                       ((longlong *)**(undefined8 **)this,&local_1f48,
                        "Common/RadioButton_Selected_16x",L".png");
    pFVar10 = (FSlateBrush *)
              FSlateImageBrush::FSlateImageBrush
                        ((FSlateImageBrush *)local_1d48,pFVar9,
                         (FDeprecateVector2DParameter *)&local_res8._s_0,
                         (FLinearColor *)&local_1f38._s_0,NoTile,FullColor);
    FSlateBrush::operator=(&pFVar15->CheckedImage,pFVar10);
    local_res8._s_0 = (TVector2<float>_u_0_s_0)CoreStyleConstants::Icon16x16;
    pFVar9 = (FString *)
             (**(code **)(*(longlong *)**(undefined8 **)this + 0xf0))
                       ((longlong *)**(undefined8 **)this,local_1f08,
                        "Common/RadioButton_Selected_16x",L".png");
    pFVar10 = (FSlateBrush *)
              FSlateImageBrush::FSlateImageBrush
                        ((FSlateImageBrush *)local_1c98,pFVar9,
                         (FDeprecateVector2DParameter *)&local_res8._s_0,&SelectionColor,NoTile,
                         FullColor);
    FSlateBrush::operator=(&pFVar15->CheckedHoveredImage,pFVar10);
    local_res8._s_0 = (TVector2<float>_u_0_s_0)CoreStyleConstants::Icon16x16;
    pFVar9 = (FString *)
             (**(code **)(*(longlong *)**(undefined8 **)this + 0xf0))
                       ((longlong *)**(undefined8 **)this,local_1ef8,
                        "Common/RadioButton_Unselected_16x",L".png");
    pFVar10 = (FSlateBrush *)
              FSlateImageBrush::FSlateImageBrush
                        ((FSlateImageBrush *)local_1be8,pFVar9,
                         (FDeprecateVector2DParameter *)&local_res8._s_0,&SelectionColor_Pressed,
                         NoTile,FullColor);
    FSlateBrush::operator=(&pFVar15->CheckedPressedImage,pFVar10);
    uVar4 = _UNK_15076b1f8;
    local_res8._s_0 = (TVector2<float>_u_0_s_0)CoreStyleConstants::Icon16x16;
    local_1f38._0_8_ = pvVar6;
    _UNK_15076b1f8 = (float)uVar7;
    _UNK_15076b1fc = SUB84(uVar7,4);
    local_1f38._s_0.B = _UNK_15076b1f8;
    local_1f38._s_0.A = _UNK_15076b1fc;
    _UNK_15076b1f8 = uVar4;
    pFVar9 = (FString *)
             (**(code **)(*(longlong *)**(undefined8 **)this + 0xf0))
                       ((longlong *)**(undefined8 **)this,local_1ee8,
                        "Common/RadioButton_Unselected_16x",L".png");
    pFVar10 = (FSlateBrush *)
              FSlateImageBrush::FSlateImageBrush
                        ((FSlateImageBrush *)local_f68,pFVar9,
                         (FDeprecateVector2DParameter *)&local_res8._s_0,
                         (FLinearColor *)&local_1f38._s_0,NoTile,FullColor);
    FSlateBrush::operator=(&pFVar15->UndeterminedImage,pFVar10);
    local_res8._s_0 = (TVector2<float>_u_0_s_0)CoreStyleConstants::Icon16x16;
    pFVar9 = (FString *)
             (**(code **)(*(longlong *)**(undefined8 **)this + 0xf0))
                       ((longlong *)**(undefined8 **)this,local_1ed8,
                        "Common/RadioButton_Unselected_16x",L".png");
    pFVar10 = (FSlateBrush *)
              FSlateImageBrush::FSlateImageBrush
                        ((FSlateImageBrush *)local_1a88,pFVar9,
                         (FDeprecateVector2DParameter *)&local_res8._s_0,&SelectionColor,NoTile,
                         FullColor);
    FSlateBrush::operator=(&pFVar15->UndeterminedHoveredImage,pFVar10);
    local_res8._s_0 = (TVector2<float>_u_0_s_0)CoreStyleConstants::Icon16x16;
    pFVar9 = (FString *)
             (**(code **)(*(longlong *)**(undefined8 **)this + 0xf0))
                       ((longlong *)**(undefined8 **)this,local_1ec8,
                        "Common/RadioButton_Unselected_16x",L".png");
    pFVar10 = (FSlateBrush *)
              FSlateImageBrush::FSlateImageBrush
                        ((FSlateImageBrush *)local_14c8,pFVar9,
                         (FDeprecateVector2DParameter *)&local_res8._s_0,&SelectionColor_Pressed,
                         NoTile,FullColor);
    FSlateBrush::operator=(&pFVar15->UndeterminedPressedImage,pFVar10);
    FCheckBoxStyle::FCheckBoxStyle(&BasicRadioButtonStyle,pFVar15);
    local_14c8._0_8_ = &___7FSlateBrush__6B_;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_14c8._160_8_);
    if (local_1ec8[0] != (void *)0x0) {
      FMemory::Free(local_1ec8[0]);
    }
    local_1a88._0_8_ = &___7FSlateBrush__6B_;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_1a78._144_8_);
    if (local_1ed8[0] != (void *)0x0) {
      FMemory::Free(local_1ed8[0]);
    }
    local_f68._0_8_ = &___7FSlateBrush__6B_;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_f48._128_8_);
    if (local_1ee8[0] != (void *)0x0) {
      FMemory::Free(local_1ee8[0]);
    }
    local_1be8[0] = &___7FSlateBrush__6B_;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_1b48);
    if (local_1ef8[0] != (void *)0x0) {
      FMemory::Free(local_1ef8[0]);
    }
    local_1c98[0] = &___7FSlateBrush__6B_;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_1bf8);
    if (local_1f08[0] != (void *)0x0) {
      FMemory::Free(local_1f08[0]);
    }
    local_1d48[0] = &___7FSlateBrush__6B_;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_1ca8);
    if ((void *)local_1f48._0_8_ != (void *)0x0) {
      FMemory::Free((void *)local_1f48._0_8_);
    }
    local_1b38[0] = &___7FSlateBrush__6B_;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_1a98);
    if (local_1f28[0] != (void *)0x0) {
      FMemory::Free(local_1f28[0]);
    }
    local_1df8[0] = &___7FSlateBrush__6B_;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_1d58);
    if (local_1eb8[0] != (void *)0x0) {
      FMemory::Free(local_1eb8[0]);
    }
    local_1ea8[0] = &___7FSlateBrush__6B_;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_1e08);
    if ((void *)local_1f18._0_8_ != (void *)0x0) {
      FMemory::Free((void *)local_1f18._0_8_);
    }
    FCheckBoxStyle::~FCheckBoxStyle(&local_9a8);
    atexit(``FUMGCoreStyle::Create'::__l2::<lambda_2>::operator()'::__l6::
           _dynamic_atexit_destructor_for__BasicRadioButtonStyle__);
    _Init_thread_footer(&::_TSS4);
  }
  pFVar1 = (FSlateStyleSet *)**(undefined8 **)this;
  pFVar11 = ::FName::FName((FName *)&local_res8._s_0,"RadioButton");
  FSlateStyleSet::Set<FCheckBoxStyle>(pFVar1,*pFVar11,&BasicRadioButtonStyle);
  return;
}

// operator() @ 1425550e0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall `FUMGCoreStyle::Create'::__l2::<lambda_3>::operator()(void *this)

{
  FSlateStyleSet *pFVar1;
  void *pvVar2;
  TObjectPtr<UObject>_u_0 TVar3;
  void *pvVar4;
  TReferenceControllerBase<1> *pTVar5;
  FName *pFVar6;
  FEditableTextBoxStyle *pFVar7;
  FString *pFVar8;
  FSlateBrush *pFVar9;
  FSlateBoxBrush *pFVar10;
  FSlateBoxBrush *pFVar11;
  FTextBlockStyle *pFVar12;
  FLegacySlateFontInfoCache *pFVar13;
  FSlateBorderBrush *this_00;
  FSlateBorderBrush *pFVar14;
  FButtonStyle *pFVar15;
  TVector2<float>_u_0 local_res8;
  FName local_res10;
  FName local_res18;
  undefined1 local_5d18 [8];
  float fStack_5d10;
  undefined4 uStack_5d0c;
  uint local_5d08;
  FFontOutlineSettings local_5cf8;
  FLinearColor_u_0 local_5cd8;
  void *local_5cc8 [2];
  FLinearColor_u_0 local_5cb8;
  void *local_5ca8 [2];
  undefined1 local_5c98 [124];
  TVector2<float>_u_0 local_5c1c;
  FLinearColor_u_0 local_5c14;
  FLinearColor_u_0 local_5c04;
  float fStack_5bf4;
  FLinearColor_u_0 local_5bf0;
  uint local_5be0;
  FSlateBrush local_5bd8;
  FSlateBrush local_5b28;
  FSlateBrush local_5a78;
  ETextTransformPolicy local_59c8;
  ETextOverflowPolicy local_59c7;
  undefined **local_59b8 [20];
  TReferenceControllerBase<1> *local_5918;
  undefined **local_5908 [20];
  TReferenceControllerBase<1> *local_5868;
  undefined1 local_5858 [192];
  undefined **local_5798;
  FSharedReferencer<1> local_56f8;
  undefined **local_56e8;
  FSharedReferencer<1> local_5648;
  undefined **local_5638;
  FSharedReferencer<1> local_5598;
  undefined1 local_54c8 [16];
  undefined **local_54b8 [6];
  FSharedReferencer<1> local_5488;
  undefined4 local_5450;
  FDeprecateSlateVector2D local_544c;
  FLinearColor_u_0 local_5434 [2];
  FNameEntryId local_5410;
  FSlateBrush local_5408;
  FSlateBrush local_5358;
  FSlateBrush local_52a8;
  FLinearColor_u_0 local_51f8 [13];
  FTextBlockStyle local_5128;
  FMargin local_4e48;
  undefined1 local_4e38 [160];
  TVector2<float>_u_0 local_4d98;
  FTextBlockStyle local_4a98;
  FMargin local_47b8;
  undefined1 local_47a8 [176];
  FSharedReferencer<1> local_46f8;
  undefined **local_46e8;
  FSharedReferencer<1> local_4648;
  undefined **local_4638;
  FSharedReferencer<1> local_4598;
  undefined **local_4588;
  FSharedReferencer<1> local_44e8;
  FTextBlockStyle local_44c8;
  FScrollBarStyle local_4178;
  FTextBlockStyle local_3b18;
  FEditableTextBoxStyle local_3838;
  FEditableTextBoxStyle local_2bb8;
  FInlineEditableTextBlockStyle local_1f38;
  FInlineEditableTextBlockStyle local_fc8;
  
  pTVar5 = _UNK_15076b1f8;
  pvVar4 = ___xmm_3f8000003f8000003f8000003f800000;
  TVar3 = _UNK_15076b0c8;
  pvVar2 = ___xmm_3e8000003e8000003e8000003e800000;
  pFVar14 = (FSlateBorderBrush *)0x0;
  local_res8._s_0 = local_res8._s_0 & 0xffffffff00000000;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    pFVar7 = FEditableTextBoxStyle::FEditableTextBoxStyle((FEditableTextBoxStyle *)local_47a8);
    FTextBlockStyle::operator=(&pFVar7->TextStyle,&NormalText);
    local_5cd8._0_8_ = pvVar4;
    local_5cd8._8_8_ = pTVar5;
    local_5cb8._0_8_ = pvVar2;
    local_5cb8._8_8_ = TVar3;
    pFVar8 = (FString *)
             (**(code **)(*(longlong *)**(undefined8 **)this + 0xf0))
                       ((longlong *)**(undefined8 **)this,local_5d18,"Common/TextBox_Dark",L".png");
    pFVar9 = (FSlateBrush *)
             FSlateBoxBrush::FSlateBoxBrush
                       ((FSlateBoxBrush *)local_5c98,pFVar8,(FMargin *)&local_5cb8._s_0,
                        (FLinearColor *)&local_5cd8._s_0,FullColor);
    FSlateBrush::operator=(&pFVar7->BackgroundImageNormal,pFVar9);
    local_5cb8._0_8_ = pvVar4;
    local_5cb8._8_8_ = pTVar5;
    local_5cd8._0_8_ = pvVar2;
    local_5cd8._8_8_ = TVar3;
    pFVar8 = (FString *)
             (**(code **)(*(longlong *)**(undefined8 **)this + 0xf0))
                       ((longlong *)**(undefined8 **)this,&local_5cf8,"Common/TextBox_Hovered_Dark",
                        L".png");
    pFVar9 = (FSlateBrush *)
             FSlateBoxBrush::FSlateBoxBrush
                       ((FSlateBoxBrush *)local_5908,pFVar8,(FMargin *)&local_5cd8._s_0,
                        (FLinearColor *)&local_5cb8._s_0,FullColor);
    FSlateBrush::operator=(&pFVar7->BackgroundImageHovered,pFVar9);
    local_5cb8._0_8_ = pvVar4;
    local_5cb8._8_8_ = pTVar5;
    local_5cd8._0_8_ = pvVar2;
    local_5cd8._8_8_ = TVar3;
    pFVar8 = (FString *)
             (**(code **)(*(longlong *)**(undefined8 **)this + 0xf0))
                       ((longlong *)**(undefined8 **)this,local_5cc8,"Common/TextBox_Hovered_Dark",
                        L".png");
    pFVar9 = (FSlateBrush *)
             FSlateBoxBrush::FSlateBoxBrush
                       ((FSlateBoxBrush *)local_59b8,pFVar8,(FMargin *)&local_5cd8._s_0,
                        (FLinearColor *)&local_5cb8._s_0,FullColor);
    FSlateBrush::operator=(&pFVar7->BackgroundImageFocused,pFVar9);
    local_5cb8._0_8_ = pvVar4;
    local_5cb8._8_8_ = pTVar5;
    local_5cd8._0_8_ = pvVar2;
    local_5cd8._8_8_ = TVar3;
    pFVar8 = (FString *)
             (**(code **)(*(longlong *)**(undefined8 **)this + 0xf0))
                       ((longlong *)**(undefined8 **)this,local_5ca8,"Common/TextBox_ReadOnly",
                        L".png");
    pFVar9 = (FSlateBrush *)
             FSlateBoxBrush::FSlateBoxBrush
                       ((FSlateBoxBrush *)local_4e38,pFVar8,(FMargin *)&local_5cd8._s_0,
                        (FLinearColor *)&local_5cb8._s_0,FullColor);
    FSlateBrush::operator=(&pFVar7->BackgroundImageReadOnly,pFVar9);
    FScrollBarStyle::operator=(&pFVar7->ScrollBarStyle,&ScrollBar);
    FEditableTextBoxStyle::FEditableTextBoxStyle(&DarkEditableTextBoxStyle,pFVar7);
    local_4e38._0_8_ = &___7FSlateBrush__6B_;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_4d98);
    if (local_5ca8[0] != (void *)0x0) {
      FMemory::Free(local_5ca8[0]);
    }
    local_59b8[0] = &___7FSlateBrush__6B_;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_5918);
    if (local_5cc8[0] != (void *)0x0) {
      FMemory::Free(local_5cc8[0]);
    }
    local_5908[0] = &___7FSlateBrush__6B_;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_5868);
    if ((void *)local_5cf8._0_8_ != (void *)0x0) {
      FMemory::Free((void *)local_5cf8._0_8_);
    }
    local_5c98._0_8_ = &___7FSlateBrush__6B_;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)CONCAT44(fStack_5bf4,local_5c04._s_0.A));
    if (local_5d18 != (undefined1  [8])0x0) {
      FMemory::Free((void *)local_5d18);
    }
    FEditableTextBoxStyle::~FEditableTextBoxStyle((FEditableTextBoxStyle *)local_47a8);
    atexit(``FUMGCoreStyle::Create'::__l2::<lambda_3>::operator()'::__l2::
           _dynamic_atexit_destructor_for__DarkEditableTextBoxStyle__);
    _Init_thread_footer(&::_TSS0);
  }
  pFVar1 = (FSlateStyleSet *)**(undefined8 **)this;
  pFVar6 = ::FName::FName((FName *)&local_res8._s_0,"DarkEditableTextBox");
  FSlateStyleSet::Set<FEditableTextBoxStyle>(pFVar1,*pFVar6,&DarkEditableTextBoxStyle);
  pFVar1 = (FSlateStyleSet *)**(undefined8 **)this;
  pFVar6 = ::FName::FName((FName *)&local_res8._s_0,"NormalText");
  FSlateStyleSet::Set<FTextBlockStyle>(pFVar1,*pFVar6,&NormalText);
  pFVar1 = (FSlateStyleSet *)**(undefined8 **)this;
  pFVar6 = ::FName::FName((FName *)&local_res8._s_0,"NormalUnderlinedText");
  FSlateStyleSet::Set<FTextBlockStyle>(pFVar1,*pFVar6,&NormalUnderlinedText);
  pFVar1 = (FSlateStyleSet *)**(undefined8 **)this;
  pFVar6 = ::FName::FName((FName *)&local_res8._s_0,"SmallText");
  FSlateStyleSet::Set<FTextBlockStyle>(pFVar1,*pFVar6,&SmallText);
  pFVar1 = (FSlateStyleSet *)**(undefined8 **)this;
  pFVar6 = ::FName::FName((FName *)&local_res8._s_0,"SmallUnderlinedText");
  FSlateStyleSet::Set<FTextBlockStyle>(pFVar1,*pFVar6,&SmallUnderlinedText);
  local_5c98._0_8_ = &___7FTextBlockStyle__6B_;
  FSlateFontInfo::FSlateFontInfo((FSlateFontInfo *)(local_5c98 + 8),&NormalText.Font);
  local_5c98[0x78] = NormalText.ColorAndOpacity.ColorUseRule;
  local_5c98[0x79] = NormalText.ColorAndOpacity.ColorTableId;
  local_5c98._122_2_ = NormalText.ColorAndOpacity._18_2_;
  local_5c98._104_16_ = (undefined1  [16])NormalText.ColorAndOpacity.SpecifiedColor.field0_0x0;
  local_5c1c = (TVector2<float>_u_0)NormalText.ShadowOffset;
  fStack_5bf4 = (float)NormalText.SelectedBackgroundColor._16_4_;
  local_5c14 = NormalText.ShadowColorAndOpacity.field0_0x0;
  local_5be0._0_1_ = NormalText.HighlightColor.ColorUseRule;
  local_5be0._1_1_ = NormalText.HighlightColor.ColorTableId;
  local_5be0._2_2_ = NormalText.HighlightColor._18_2_;
  local_5c04._0_8_ = NormalText.SelectedBackgroundColor.SpecifiedColor.field0_0x0._0_8_;
  local_5c04._s_0.B = NormalText.SelectedBackgroundColor.SpecifiedColor.field0_0x0._8_4_;
  local_5c04._s_0.A = NormalText.SelectedBackgroundColor.SpecifiedColor.field0_0x0._12_4_;
  local_5bf0 = NormalText.HighlightColor.SpecifiedColor.field0_0x0;
  FSlateBrush::FSlateBrush(&local_5bd8,&NormalText.HighlightShape);
  FSlateBrush::FSlateBrush(&local_5b28,&NormalText.StrikeBrush);
  FSlateBrush::FSlateBrush(&local_5a78,&NormalText.UnderlineBrush);
  local_59c8 = NormalText.TransformPolicy;
  local_59c7 = NormalText.OverflowPolicy;
  local_5d08 = CONCAT22(local_5d08._2_2_,2);
  local_5c98._104_8_ = ___xmm_3f8000003f800000000000003f800000;
  local_5c98._112_8_ = _UNK_15090c6d8;
  local_5c98._120_4_ = local_5d08;
  local_res8 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  local_5c1c = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  local_5c14 = FLinearColor::Black.field0_0x0;
  FTextBlockStyle::FTextBlockStyle((FTextBlockStyle *)local_54c8,(FTextBlockStyle *)local_5c98);
  local_5c98._0_8_ = &___7FTextBlockStyle__6B_;
  local_5a78._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_5a78.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  local_5b28._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_5b28.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  local_5bd8._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_5bd8.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_5c98._64_8_);
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)local_5c98);
  local_5c98._0_8_ = &___7FTextBlockStyle__6B_;
  FSlateFontInfo::FSlateFontInfo
            ((FSlateFontInfo *)(local_5c98 + 8),(FSlateFontInfo *)(local_54c8 + 8));
  local_5c98._120_4_ = local_5450;
  local_5c1c = (TVector2<float>_u_0)local_544c;
  fStack_5bf4 = (float)local_5434[1]._0_4_;
  local_5be0 = local_5410.Value;
  local_5c04._0_8_ = local_5434[0]._0_8_;
  local_5c04._s_0.B = (float)local_5434[0]._8_8_;
  local_5c04._s_0.A = (float)((ulonglong)local_5434[0]._8_8_ >> 0x20);
  FSlateBrush::FSlateBrush(&local_5bd8,&local_5408);
  FSlateBrush::FSlateBrush(&local_5b28,&local_5358);
  FSlateBrush::FSlateBrush(&local_5a78,&local_52a8);
  local_59c8 = local_51f8[0]._0_1_;
  local_59c7 = local_51f8[0]._1_1_;
  FSlateFontInfo::operator=((FSlateFontInfo *)(local_5c98 + 8),&SmallText.Font);
  FTextBlockStyle::FTextBlockStyle((FTextBlockStyle *)local_5858,(FTextBlockStyle *)local_5c98);
  local_5c98._0_8_ = &___7FTextBlockStyle__6B_;
  local_5a78._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_5a78.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  local_5b28._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_5b28.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  local_5bd8._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_5bd8.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_5c98._64_8_);
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)local_5c98);
  pFVar7 = FEditableTextBoxStyle::FEditableTextBoxStyle((FEditableTextBoxStyle *)local_47a8);
  FTextBlockStyle::operator=(&pFVar7->TextStyle,&NormalText);
  FSlateFontInfo::operator=(&(pFVar7->TextStyle).Font,&NormalText.Font);
  local_5d18 = (undefined1  [8])pvVar4;
  _fStack_5d10 = pTVar5;
  local_5cf8._0_8_ = pvVar2;
  local_5cf8.OutlineMaterial.field0_0x0 = TVar3;
  pFVar8 = (FString *)
           (**(code **)(*(longlong *)**(undefined8 **)this + 0xf0))
                     ((longlong *)**(undefined8 **)this,&local_5cd8,"Common/TextBox",L".png");
  pFVar9 = (FSlateBrush *)
           FSlateBoxBrush::FSlateBoxBrush
                     ((FSlateBoxBrush *)local_4e38,pFVar8,(FMargin *)&local_5cf8,
                      (FLinearColor *)local_5d18,FullColor);
  FSlateBrush::operator=(&pFVar7->BackgroundImageNormal,pFVar9);
  local_5d18 = (undefined1  [8])pvVar4;
  _fStack_5d10 = pTVar5;
  local_5cf8._0_8_ = pvVar2;
  local_5cf8.OutlineMaterial.field0_0x0 = TVar3;
  pFVar8 = (FString *)
           (**(code **)(*(longlong *)**(undefined8 **)this + 0xf0))
                     ((longlong *)**(undefined8 **)this,&local_5cb8,"Common/TextBox_Hovered",L".png"
                     );
  pFVar9 = (FSlateBrush *)
           FSlateBoxBrush::FSlateBoxBrush
                     ((FSlateBoxBrush *)local_59b8,pFVar8,(FMargin *)&local_5cf8,
                      (FLinearColor *)local_5d18,FullColor);
  FSlateBrush::operator=(&pFVar7->BackgroundImageHovered,pFVar9);
  local_5d18 = (undefined1  [8])pvVar4;
  _fStack_5d10 = pTVar5;
  local_5cf8._0_8_ = pvVar2;
  local_5cf8.OutlineMaterial.field0_0x0 = TVar3;
  pFVar8 = (FString *)
           (**(code **)(*(longlong *)**(undefined8 **)this + 0xf0))
                     ((longlong *)**(undefined8 **)this,local_5ca8,"Common/TextBox_Hovered",L".png")
  ;
  pFVar9 = (FSlateBrush *)
           FSlateBoxBrush::FSlateBoxBrush
                     ((FSlateBoxBrush *)local_5908,pFVar8,(FMargin *)&local_5cf8,
                      (FLinearColor *)local_5d18,FullColor);
  FSlateBrush::operator=(&pFVar7->BackgroundImageFocused,pFVar9);
  local_5d18 = (undefined1  [8])pvVar4;
  _fStack_5d10 = pTVar5;
  local_5cf8._0_8_ = pvVar2;
  local_5cf8.OutlineMaterial.field0_0x0 = TVar3;
  pFVar8 = (FString *)
           (**(code **)(*(longlong *)**(undefined8 **)this + 0xf0))
                     ((longlong *)**(undefined8 **)this,local_5cc8,"Common/TextBox_ReadOnly",L".png"
                     );
  pFVar9 = (FSlateBrush *)
           FSlateBoxBrush::FSlateBoxBrush
                     ((FSlateBoxBrush *)local_5c98,pFVar8,(FMargin *)&local_5cf8,
                      (FLinearColor *)local_5d18,FullColor);
  FSlateBrush::operator=(&pFVar7->BackgroundImageReadOnly,pFVar9);
  FScrollBarStyle::operator=(&pFVar7->ScrollBarStyle,&ScrollBar);
  FEditableTextBoxStyle::FEditableTextBoxStyle(&local_3838,pFVar7);
  local_5c98._0_8_ = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)CONCAT44(fStack_5bf4,local_5c04._s_0.A));
  if (local_5cc8[0] != (void *)0x0) {
    FMemory::Free(local_5cc8[0]);
  }
  local_5908[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_5868);
  if (local_5ca8[0] != (void *)0x0) {
    FMemory::Free(local_5ca8[0]);
  }
  local_59b8[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_5918);
  if ((void *)local_5cb8._0_8_ != (void *)0x0) {
    FMemory::Free((void *)local_5cb8._0_8_);
  }
  local_4e38._0_8_ = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_4d98);
  if ((void *)local_5cd8._0_8_ != (void *)0x0) {
    FMemory::Free((void *)local_5cd8._0_8_);
  }
  local_47a8._0_8_ = &___7FEditableTextBoxStyle__6B_;
  FScrollBarStyle::~FScrollBarStyle(&local_4178);
  FTextBlockStyle::~FTextBlockStyle(&local_44c8);
  local_4588 = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_44e8.ReferenceController);
  local_4638 = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_4598.ReferenceController);
  local_46e8 = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_4648.ReferenceController);
  local_47a8._16_8_ = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_46f8.ReferenceController);
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)local_47a8);
  pFVar7 = FEditableTextBoxStyle::FEditableTextBoxStyle
                     ((FEditableTextBoxStyle *)local_47a8,&local_3838);
  FSlateFontInfo::operator=(&(pFVar7->TextStyle).Font,&SmallText.Font);
  FEditableTextBoxStyle::FEditableTextBoxStyle(&local_2bb8,pFVar7);
  local_47a8._0_8_ = &___7FEditableTextBoxStyle__6B_;
  FScrollBarStyle::~FScrollBarStyle(&local_4178);
  FTextBlockStyle::~FTextBlockStyle(&local_44c8);
  local_4588 = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_44e8.ReferenceController);
  local_4638 = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_4598.ReferenceController);
  local_46e8 = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_4648.ReferenceController);
  local_47a8._16_8_ = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_46f8.ReferenceController);
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)local_47a8);
  FSlateWidgetStyle::FSlateWidgetStyle((FSlateWidgetStyle *)local_47a8);
  local_47a8._0_8_ = &___7FInlineEditableTextBlockStyle__6B_;
  FEditableTextBoxStyle::FEditableTextBoxStyle((FEditableTextBoxStyle *)(local_47a8 + 0x10));
  FTextBlockStyle::FTextBlockStyle(&local_3b18);
  FTextBlockStyle::operator=(&local_3b18,(FTextBlockStyle *)local_54c8);
  FEditableTextBoxStyle::operator=((FEditableTextBoxStyle *)(local_47a8 + 0x10),&local_3838);
  local_fc8._padding_ = (longlong)&___7FInlineEditableTextBlockStyle__6B_;
  FEditableTextBoxStyle::FEditableTextBoxStyle
            (&local_fc8.EditableTextBoxStyle,(FEditableTextBoxStyle *)(local_47a8 + 0x10));
  FTextBlockStyle::FTextBlockStyle(&local_fc8.TextStyle,&local_3b18);
  local_47a8._0_8_ = &___7FInlineEditableTextBlockStyle__6B_;
  FTextBlockStyle::~FTextBlockStyle(&local_3b18);
  FEditableTextBoxStyle::~FEditableTextBoxStyle((FEditableTextBoxStyle *)(local_47a8 + 0x10));
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)local_47a8);
  pFVar1 = (FSlateStyleSet *)**(undefined8 **)this;
  pFVar6 = ::FName::FName((FName *)&local_res8._s_0,"InlineEditableTextBlockStyle");
  FSlateStyleSet::Set<FInlineEditableTextBlockStyle>(pFVar1,*pFVar6,&local_fc8);
  FSlateWidgetStyle::FSlateWidgetStyle((FSlateWidgetStyle *)local_47a8);
  local_47a8._0_8_ = &___7FInlineEditableTextBlockStyle__6B_;
  FEditableTextBoxStyle::FEditableTextBoxStyle((FEditableTextBoxStyle *)(local_47a8 + 0x10));
  FTextBlockStyle::FTextBlockStyle(&local_3b18);
  FTextBlockStyle::operator=(&local_3b18,(FTextBlockStyle *)local_5858);
  FEditableTextBoxStyle::operator=((FEditableTextBoxStyle *)(local_47a8 + 0x10),&local_2bb8);
  local_1f38._padding_ = (longlong)&___7FInlineEditableTextBlockStyle__6B_;
  FEditableTextBoxStyle::FEditableTextBoxStyle
            (&local_1f38.EditableTextBoxStyle,(FEditableTextBoxStyle *)(local_47a8 + 0x10));
  FTextBlockStyle::FTextBlockStyle(&local_1f38.TextStyle,&local_3b18);
  local_47a8._0_8_ = &___7FInlineEditableTextBlockStyle__6B_;
  FTextBlockStyle::~FTextBlockStyle(&local_3b18);
  FEditableTextBoxStyle::~FEditableTextBoxStyle((FEditableTextBoxStyle *)(local_47a8 + 0x10));
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)local_47a8);
  pFVar1 = (FSlateStyleSet *)**(undefined8 **)this;
  pFVar6 = ::FName::FName((FName *)&local_res8._s_0,"InlineEditableTextBlockSmallStyle");
  FSlateStyleSet::Set<FInlineEditableTextBlockStyle>(pFVar1,*pFVar6,&local_1f38);
  local_1f38._padding_ = (longlong)&___7FInlineEditableTextBlockStyle__6B_;
  FTextBlockStyle::~FTextBlockStyle(&local_1f38.TextStyle);
  FEditableTextBoxStyle::~FEditableTextBoxStyle(&local_1f38.EditableTextBoxStyle);
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)&local_1f38);
  local_fc8._padding_ = (longlong)&___7FInlineEditableTextBlockStyle__6B_;
  FTextBlockStyle::~FTextBlockStyle(&local_fc8.TextStyle);
  FEditableTextBoxStyle::~FEditableTextBoxStyle(&local_fc8.EditableTextBoxStyle);
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)&local_fc8);
  local_2bb8._padding_ = (longlong)&___7FEditableTextBoxStyle__6B_;
  FScrollBarStyle::~FScrollBarStyle(&local_2bb8.ScrollBarStyle);
  FTextBlockStyle::~FTextBlockStyle(&local_2bb8.TextStyle);
  local_2bb8.BackgroundImageReadOnly._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2bb8.BackgroundImageReadOnly.ResourceHandle.Data.SharedReferenceCount.
             ReferenceController);
  local_2bb8.BackgroundImageFocused._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2bb8.BackgroundImageFocused.ResourceHandle.Data.SharedReferenceCount.
             ReferenceController);
  local_2bb8.BackgroundImageHovered._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2bb8.BackgroundImageHovered.ResourceHandle.Data.SharedReferenceCount.
             ReferenceController);
  local_2bb8.BackgroundImageNormal._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2bb8.BackgroundImageNormal.ResourceHandle.Data.SharedReferenceCount.
             ReferenceController);
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)&local_2bb8);
  local_3838._padding_ = (longlong)&___7FEditableTextBoxStyle__6B_;
  FScrollBarStyle::~FScrollBarStyle(&local_3838.ScrollBarStyle);
  FTextBlockStyle::~FTextBlockStyle(&local_3838.TextStyle);
  local_3838.BackgroundImageReadOnly._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3838.BackgroundImageReadOnly.ResourceHandle.Data.SharedReferenceCount.
             ReferenceController);
  local_3838.BackgroundImageFocused._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3838.BackgroundImageFocused.ResourceHandle.Data.SharedReferenceCount.
             ReferenceController);
  local_3838.BackgroundImageHovered._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3838.BackgroundImageHovered.ResourceHandle.Data.SharedReferenceCount.
             ReferenceController);
  local_3838.BackgroundImageNormal._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3838.BackgroundImageNormal.ResourceHandle.Data.SharedReferenceCount.
             ReferenceController);
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)&local_3838);
  local_5858._0_8_ = &___7FTextBlockStyle__6B_;
  local_5638 = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_5598.ReferenceController);
  local_56e8 = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_5648.ReferenceController);
  local_5798 = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_56f8.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_5858._64_8_);
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)local_5858);
  local_54c8._0_8_ = &___7FTextBlockStyle__6B_;
  local_52a8._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_52a8.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  local_5358._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_5358.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  local_5408._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_5408.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_5488.ReferenceController);
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)local_54c8);
  pFVar1 = (FSlateStyleSet *)**(undefined8 **)this;
  pFVar10 = ::operator_new(0xb0);
  pFVar11 = (FSlateBoxBrush *)pFVar14;
  if (pFVar10 != (FSlateBoxBrush *)0x0) {
    local_5d18 = (undefined1  [8])pvVar4;
    _fStack_5d10 = pTVar5;
    local_5cf8._0_8_ = ___xmm_3e0000003e0000003e0000003e000000;
    local_5cf8.OutlineMaterial.field0_0x0 = _UNK_150925108;
    pFVar8 = (FString *)
             (**(code **)(*(longlong *)**(undefined8 **)this + 0xf0))
                       ((longlong *)**(undefined8 **)this,local_5cc8,"Old/Menu_Background",L".png");
    pFVar11 = FSlateBoxBrush::FSlateBoxBrush
                        (pFVar10,pFVar8,(FMargin *)&local_5cf8,(FLinearColor *)local_5d18,FullColor)
    ;
  }
  pFVar6 = ::FName::FName((FName *)&local_res8._s_0,"SuggestionTextBox.Background");
  FSlateStyleSet::Set<FSlateBoxBrush>(pFVar1,*pFVar6,pFVar11);
  if ((pFVar10 != (FSlateBoxBrush *)0x0) && (local_5cc8[0] != (void *)0x0)) {
    FMemory::Free(local_5cc8[0]);
  }
  pFVar1 = (FSlateStyleSet *)**(undefined8 **)this;
  pFVar12 = FTextBlockStyle::FTextBlockStyle((FTextBlockStyle *)local_5858);
  local_5cf8.OutlineColor.field0_0x0._s_0 = FLinearColor::Black.field0_0x0;
  local_5cf8._0_8_ = local_5cf8._0_8_ & 0xff00000000000000;
  local_5cf8.OutlineMaterial.field0_0x0.DebugPtr = (TObjectPtr<UObject>_u_0)0x0;
  pFVar6 = ::FName::FName(&local_res10,"Regular");
  local_res8._0_4_ = *(float *)&pFVar6->ComparisonIndex;
  local_res8._4_4_ = (float)pFVar6->Number;
  pFVar13 = FLegacySlateFontInfoCache::Get();
  FLegacySlateFontInfoCache::GetDefaultFont
            (pFVar13,(TSharedRef<FCompositeFont_const_,1> *)&local_5cd8._s_0);
  local_5d18 = (undefined1  [8])local_5cd8._0_8_;
  _fStack_5d10 = local_5cd8._8_8_;
  if ((TReferenceControllerBase<1> *)local_5cd8._8_8_ != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    *(atomic<int> *)(local_5cd8._8_8_ + 8) =
         (atomic<int>)((int)*(atomic<int> *)(local_5cd8._8_8_ + 8) + 1);
    UNLOCK();
  }
  FSlateFontInfo::FSlateFontInfo
            ((FSlateFontInfo *)local_4e38,(TSharedPtr<FCompositeFont_const_,1> *)local_5d18,
             __real_41100000,(FName *)&local_res8._s_0,&local_5cf8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_5cd8._8_8_);
  FSlateFontInfo::operator=(&pFVar12->Font,(FSlateFontInfo *)local_4e38);
  local_5d18._4_4_ = FLinearColor::sRGBToLinearTable[0xaa];
  local_5d08 = local_5d08 & 0xffffff00;
  (pFVar12->ColorAndOpacity).SpecifiedColor.field0_0x0._s_0.R =
       FLinearColor::sRGBToLinearTable[0xaa];
  (pFVar12->ColorAndOpacity).SpecifiedColor.field0_0x0._s_0.G = (float)local_5d18._4_4_;
  (pFVar12->ColorAndOpacity).SpecifiedColor.field0_0x0._s_0.B = (float)local_5d18._4_4_;
  (pFVar12->ColorAndOpacity).SpecifiedColor.field0_0x0._s_0.A = 1.0;
  (pFVar12->ColorAndOpacity).ColorUseRule = (undefined1)local_5d08;
  (pFVar12->ColorAndOpacity).ColorTableId = local_5d08._1_1_;
  *(undefined2 *)&(pFVar12->ColorAndOpacity).field_0x12 = local_5d08._2_2_;
  local_5d18._0_4_ = local_5d18._4_4_;
  uStack_5d0c = 0x3f800000;
  fStack_5d10 = (float)local_5d18._4_4_;
  pFVar6 = ::FName::FName(&local_res18,"SuggestionTextBox.Text");
  FSlateStyleSet::Set<FTextBlockStyle>(pFVar1,*pFVar6,pFVar12);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_4e38._56_8_);
  local_5858._0_8_ = &___7FTextBlockStyle__6B_;
  local_5638 = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_5598.ReferenceController);
  local_56e8 = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_5648.ReferenceController);
  local_5798 = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_56f8.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_5858._64_8_);
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)local_5858);
  pFVar1 = (FSlateStyleSet *)**(undefined8 **)this;
  local_5cf8._0_8_ = local_5cf8._0_8_ & 0xff00000000000000;
  local_5cf8.OutlineMaterial.field0_0x0.DebugPtr = (TObjectPtr<UObject>_u_0)0x0;
  local_5cf8.OutlineColor.field0_0x0._s_0 = FLinearColor::Black.field0_0x0;
  pFVar6 = ::FName::FName(&local_res10,"Regular");
  local_res8._0_4_ = *(float *)&pFVar6->ComparisonIndex;
  local_res8._4_4_ = (float)pFVar6->Number;
  pFVar13 = FLegacySlateFontInfoCache::Get();
  FLegacySlateFontInfoCache::GetDefaultFont
            (pFVar13,(TSharedRef<FCompositeFont_const_,1> *)&local_5cd8._s_0);
  local_5d18 = (undefined1  [8])local_5cd8._0_8_;
  _fStack_5d10 = local_5cd8._8_8_;
  if ((TReferenceControllerBase<1> *)local_5cd8._8_8_ != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    *(atomic<int> *)(local_5cd8._8_8_ + 8) =
         (atomic<int>)((int)*(atomic<int> *)(local_5cd8._8_8_ + 8) + 1);
    UNLOCK();
  }
  FSlateFontInfo::FSlateFontInfo
            ((FSlateFontInfo *)local_4e38,(TSharedPtr<FCompositeFont_const_,1> *)local_5d18,
             __real_41000000,(FName *)&local_res8._s_0,&local_5cf8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_5cd8._8_8_);
  pFVar6 = ::FName::FName(&local_res18,"ToolTip.Font");
  FSlateStyleSet::Set(pFVar1,*pFVar6,(FSlateFontInfo *)local_4e38);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_4e38._56_8_);
  pFVar1 = (FSlateStyleSet *)**(undefined8 **)this;
  pFVar10 = ::operator_new(0xb0);
  pFVar11 = (FSlateBoxBrush *)pFVar14;
  if (pFVar10 != (FSlateBoxBrush *)0x0) {
    local_5d18 = (undefined1  [8])pvVar4;
    _fStack_5d10 = pTVar5;
    local_5cf8._0_8_ = ___xmm_3e0000003e0000003e0000003e000000;
    local_5cf8.OutlineMaterial.field0_0x0 = _UNK_150925108;
    pFVar8 = (FString *)
             (**(code **)(*(longlong *)**(undefined8 **)this + 0xf0))
                       ((longlong *)**(undefined8 **)this,local_5cc8,"Old/ToolTip_Background",
                        L".png");
    pFVar11 = FSlateBoxBrush::FSlateBoxBrush
                        (pFVar10,pFVar8,(FMargin *)&local_5cf8,(FLinearColor *)local_5d18,FullColor)
    ;
  }
  pFVar6 = ::FName::FName((FName *)&local_res8._s_0,"ToolTip.Background");
  FSlateStyleSet::Set<FSlateBoxBrush>(pFVar1,*pFVar6,pFVar11);
  if ((pFVar10 != (FSlateBoxBrush *)0x0) && (local_5cc8[0] != (void *)0x0)) {
    FMemory::Free(local_5cc8[0]);
  }
  pFVar1 = (FSlateStyleSet *)**(undefined8 **)this;
  local_5cf8._0_8_ = local_5cf8._0_8_ & 0xff00000000000000;
  local_5cf8.OutlineMaterial.field0_0x0.DebugPtr = (TObjectPtr<UObject>_u_0)0x0;
  local_5cf8.OutlineColor.field0_0x0._s_0 = FLinearColor::Black.field0_0x0;
  pFVar6 = ::FName::FName(&local_res10,"Regular");
  local_res8._0_4_ = *(float *)&pFVar6->ComparisonIndex;
  local_res8._4_4_ = (float)pFVar6->Number;
  pFVar13 = FLegacySlateFontInfoCache::Get();
  FLegacySlateFontInfoCache::GetDefaultFont
            (pFVar13,(TSharedRef<FCompositeFont_const_,1> *)&local_5cd8._s_0);
  local_5d18 = (undefined1  [8])local_5cd8._0_8_;
  _fStack_5d10 = local_5cd8._8_8_;
  if ((TReferenceControllerBase<1> *)local_5cd8._8_8_ != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    *(atomic<int> *)(local_5cd8._8_8_ + 8) =
         (atomic<int>)((int)*(atomic<int> *)(local_5cd8._8_8_ + 8) + 1);
    UNLOCK();
  }
  FSlateFontInfo::FSlateFontInfo
            ((FSlateFontInfo *)local_4e38,(TSharedPtr<FCompositeFont_const_,1> *)local_5d18,
             __real_41100000,(FName *)&local_res8._s_0,&local_5cf8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_5cd8._8_8_);
  pFVar6 = ::FName::FName(&local_res18,"ToolTip.LargerFont");
  FSlateStyleSet::Set(pFVar1,*pFVar6,(FSlateFontInfo *)local_4e38);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_4e38._56_8_);
  pFVar1 = (FSlateStyleSet *)**(undefined8 **)this;
  pFVar10 = ::operator_new(0xb0);
  pFVar11 = (FSlateBoxBrush *)pFVar14;
  if (pFVar10 != (FSlateBoxBrush *)0x0) {
    local_5d18 = (undefined1  [8])pvVar4;
    _fStack_5d10 = pTVar5;
    local_5cf8._0_8_ = ___xmm_3e0000003e0000003e0000003e000000;
    local_5cf8.OutlineMaterial.field0_0x0 = _UNK_150925108;
    pFVar8 = (FString *)
             (**(code **)(*(longlong *)**(undefined8 **)this + 0xf0))
                       ((longlong *)**(undefined8 **)this,local_5cc8,"Old/ToolTip_BrightBackground",
                        L".png");
    pFVar11 = FSlateBoxBrush::FSlateBoxBrush
                        (pFVar10,pFVar8,(FMargin *)&local_5cf8,(FLinearColor *)local_5d18,FullColor)
    ;
  }
  pFVar6 = ::FName::FName((FName *)&local_res8._s_0,"ToolTip.BrightBackground");
  FSlateStyleSet::Set<FSlateBoxBrush>(pFVar1,*pFVar6,pFVar11);
  if ((pFVar10 != (FSlateBoxBrush *)0x0) && (local_5cc8[0] != (void *)0x0)) {
    FMemory::Free(local_5cc8[0]);
  }
  pFVar1 = (FSlateStyleSet *)**(undefined8 **)this;
  this_00 = ::operator_new(0xb0);
  if (this_00 != (FSlateBorderBrush *)0x0) {
    local_5d18 = (undefined1  [8])pvVar4;
    _fStack_5d10 = pTVar5;
    local_5cf8._0_8_ = pvVar2;
    local_5cf8.OutlineMaterial.field0_0x0 = TVar3;
    pFVar8 = (FString *)
             (**(code **)(*(longlong *)**(undefined8 **)this + 0xf0))
                       ((longlong *)**(undefined8 **)this,local_5cc8,"Old/Border",L".png");
    pFVar14 = FSlateBorderBrush::FSlateBorderBrush
                        (this_00,pFVar8,(FMargin *)&local_5cf8,(FLinearColor *)local_5d18,FullColor)
    ;
  }
  pFVar6 = ::FName::FName((FName *)&local_res8._s_0,"Border");
  FSlateStyleSet::Set<FSlateBorderBrush>(pFVar1,*pFVar6,pFVar14);
  if ((this_00 != (FSlateBorderBrush *)0x0) && (local_5cc8[0] != (void *)0x0)) {
    FMemory::Free(local_5cc8[0]);
  }
  pFVar15 = FButtonStyle::FButtonStyle((FButtonStyle *)local_54c8);
  local_5d18 = (undefined1  [8])pvVar4;
  _fStack_5d10 = pTVar5;
  local_5cf8.OutlineSize = ___xmm_3e400000000000000000000000000000;
  local_5cf8.bMiteredCorners = UNK_150925124;
  local_5cf8.bSeparateFillAlpha = UNK_150925125;
  local_5cf8.bApplyOutlineToDropShadows = UNK_150925126;
  local_5cf8._padding_ = UNK_150925127;
  local_5cf8.OutlineMaterial.field0_0x0 = _UNK_150925128;
  pFVar8 = (FString *)
           (**(code **)(*(longlong *)**(undefined8 **)this + 0xf0))
                     ((longlong *)**(undefined8 **)this,local_5ca8,"Old/HyperlinkDotted",L".png");
  pFVar9 = (FSlateBrush *)
           FSlateBorderBrush::FSlateBorderBrush
                     ((FSlateBorderBrush *)local_59b8,pFVar8,(FMargin *)&local_5cf8,
                      (FLinearColor *)local_5d18,FullColor);
  FSlateBrush::operator=(&pFVar15->Normal,pFVar9);
  local_res8 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  pFVar9 = (FSlateBrush *)
           FSlateNoResource::FSlateNoResource
                     ((FSlateNoResource *)local_5908,(FDeprecateVector2DParameter *)&local_res8._s_0
                     );
  FSlateBrush::operator=(&pFVar15->Pressed,pFVar9);
  local_5d18 = (undefined1  [8])pvVar4;
  _fStack_5d10 = pTVar5;
  local_5cf8.OutlineSize = ___xmm_3e400000000000000000000000000000;
  local_5cf8.bMiteredCorners = UNK_150925124;
  local_5cf8.bSeparateFillAlpha = UNK_150925125;
  local_5cf8.bApplyOutlineToDropShadows = UNK_150925126;
  local_5cf8._padding_ = UNK_150925127;
  local_5cf8.OutlineMaterial.field0_0x0 = _UNK_150925128;
  pFVar8 = (FString *)
           (**(code **)(*(longlong *)**(undefined8 **)this + 0xf0))
                     ((longlong *)**(undefined8 **)this,local_5cc8,"Old/HyperlinkUnderline",L".png")
  ;
  pFVar9 = (FSlateBrush *)
           FSlateBorderBrush::FSlateBorderBrush
                     ((FSlateBorderBrush *)local_5c98,pFVar8,(FMargin *)&local_5cf8,
                      (FLinearColor *)local_5d18,FullColor);
  FSlateBrush::operator=(&pFVar15->Hovered,pFVar9);
  FButtonStyle::FButtonStyle((FButtonStyle *)local_5858,pFVar15);
  local_5c98._0_8_ = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)CONCAT44(fStack_5bf4,local_5c04._s_0.A));
  if (local_5cc8[0] != (void *)0x0) {
    FMemory::Free(local_5cc8[0]);
  }
  local_5908[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_5868);
  local_59b8[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_5918);
  if (local_5ca8[0] != (void *)0x0) {
    FMemory::Free(local_5ca8[0]);
  }
  local_54c8._0_8_ = &___7FButtonStyle__6B_;
  local_52a8._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_52a8.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  local_5358._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_5358.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  local_5408._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_5408.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  local_54b8[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)stack0xffffffffffffabe8);
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)local_54c8);
  FSlateWidgetStyle::FSlateWidgetStyle((FSlateWidgetStyle *)local_54c8);
  local_54c8._0_8_ = &___7FHyperlinkStyle__6B_;
  FButtonStyle::FButtonStyle((FButtonStyle *)local_54b8);
  FTextBlockStyle::FTextBlockStyle(&local_5128);
  local_4e48.Left = 0.0;
  local_4e48.Top = 0.0;
  local_4e48.Right = 0.0;
  local_4e48.Bottom = 0.0;
  FButtonStyle::operator=((FButtonStyle *)local_54b8,(FButtonStyle *)local_5858);
  FTextBlockStyle::operator=(&local_5128,&NormalText);
  local_4e38._0_8_ = &___7FHyperlinkStyle__6B_;
  local_4e48.Left = 0.0;
  local_4e48.Top = 0.0;
  local_4e48.Right = 0.0;
  local_4e48.Bottom = 0.0;
  FButtonStyle::FButtonStyle((FButtonStyle *)(local_4e38 + 0x10),(FButtonStyle *)local_54b8);
  FTextBlockStyle::FTextBlockStyle(&local_4a98,&local_5128);
  local_47b8.Left = local_4e48.Left;
  local_47b8.Top = local_4e48.Top;
  local_47b8.Right = local_4e48.Right;
  local_47b8.Bottom = local_4e48.Bottom;
  local_54c8._0_8_ = &___7FHyperlinkStyle__6B_;
  FTextBlockStyle::~FTextBlockStyle(&local_5128);
  FButtonStyle::~FButtonStyle((FButtonStyle *)local_54b8);
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)local_54c8);
  pFVar1 = (FSlateStyleSet *)**(undefined8 **)this;
  pFVar6 = ::FName::FName((FName *)&local_res8._s_0,"Hyperlink");
  FSlateStyleSet::Set<FHyperlinkStyle>(pFVar1,*pFVar6,(FHyperlinkStyle *)local_4e38);
  local_4e38._0_8_ = &___7FHyperlinkStyle__6B_;
  FTextBlockStyle::~FTextBlockStyle(&local_4a98);
  FButtonStyle::~FButtonStyle((FButtonStyle *)(local_4e38 + 0x10));
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)local_4e38);
  local_5858._0_8_ = &___7FButtonStyle__6B_;
  local_5638 = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_5598.ReferenceController);
  local_56e8 = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_5648.ReferenceController);
  local_5798 = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_56f8.ReferenceController);
  local_5858._16_8_ = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_5858._176_8_);
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)local_5858);
  return;
}

// operator() @ 1425569b0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall `FUMGCoreStyle::Create'::__l2::<lambda_4>::operator()(void *this)

{
  FSlateStyleSet *pFVar1;
  void *pvVar2;
  float fVar3;
  void *pvVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  TReferenceControllerBase<1> *pTVar7;
  EStyleColor EVar8;
  undefined2 uVar9;
  bool bVar10;
  FString *pFVar11;
  FSlateBrush *pFVar12;
  FName *pFVar13;
  FSlateImageBrush *pFVar14;
  FSlateImageBrush *pFVar15;
  FLegacySlateFontInfoCache *this_00;
  FSlateBoxBrush *this_01;
  FSlateBoxBrush *pFVar16;
  FSpinBoxStyle *pFVar17;
  FEditableTextBoxStyle *pFVar18;
  FName local_res8;
  TVector2<float>_u_0 local_res10;
  FName local_res18 [2];
  undefined1 local_1e28 [16];
  FLinearColor_u_0 local_1e18;
  void *local_1e08 [2];
  undefined1 local_1df8 [8];
  float fStack_1df0;
  float fStack_1dec;
  void *local_1de8 [2];
  FLinearColor_u_0 local_1dd8;
  FFontOutlineSettings local_1dc8;
  FSlateBrush local_1da8;
  FSlateBrush local_1cf8;
  FSlateBrush local_1c48;
  undefined **local_1b98 [20];
  TReferenceControllerBase<1> *local_1af8;
  undefined1 local_1ae8 [176];
  FSharedReferencer<1> local_1a38;
  FSlateBrush local_1a28;
  FSlateBrush local_1978;
  bool local_18c8;
  undefined **local_18b8 [20];
  TReferenceControllerBase<1> *local_1818;
  undefined1 local_1808 [16];
  undefined1 local_17f8 [176];
  undefined1 local_1748 [160];
  FSharedReferencer<1> local_16a8;
  undefined1 local_1698 [160];
  FSharedReferencer<1> local_15f8;
  undefined1 local_15e8 [160];
  FSharedReferencer<1> local_1548;
  undefined1 local_1538 [160];
  FSharedReferencer<1> local_1498;
  undefined1 local_1488 [160];
  FSharedReferencer<1> local_13e8;
  float local_13d8;
  float local_13c8;
  FSlateBrush local_13b8;
  FSlateBrush local_1308;
  FSlateBrush local_1258;
  FSlateBrush local_11a8;
  FSlateBrush local_10f8;
  undefined1 local_1048 [16];
  undefined1 local_1038 [176];
  FSlateBrush local_f88;
  FSlateBrush local_ed8;
  FSlateBrush local_e28;
  undefined1 local_d78 [160];
  FSharedReferencer<1> local_cd8;
  FSlateBrush local_cc8;
  TVector2<float>_u_0 local_c18 [268];
  FSlateFontInfo local_3b8;
  FSlateBrush local_358;
  FSlateBrush local_2a8;
  FSlateBrush local_1f8;
  FSlateBrush local_148;
  FMargin local_98 [2];
  bool local_78;
  undefined2 local_70;
  bool local_6e;
  
  pFVar16 = (FSlateBoxBrush *)0x0;
  local_res8 = (FName)((ulonglong)local_res8 & 0xffffffff00000000);
  pFVar1 = (FSlateStyleSet *)**(undefined8 **)this;
  FSlateWidgetStyle::FSlateWidgetStyle((FSlateWidgetStyle *)local_1ae8);
  local_1ae8._0_8_ = &___7FProgressBarStyle__6B_;
  FSlateBrush::FSlateBrush((FSlateBrush *)(local_1ae8 + 0x10));
  FSlateBrush::FSlateBrush(&local_1a28);
  FSlateBrush::FSlateBrush(&local_1978);
  pTVar7 = _UNK_15076b1f8;
  pvVar2 = ___xmm_3f8000003f8000003f8000003f800000;
  local_18c8 = false;
  local_1df8 = (undefined1  [8])___xmm_3f8000003f8000003f8000003f800000;
  _fStack_1df0 = _UNK_15076b1f8;
  local_1dd8._0_8_ = ___xmm_3ed555553ed555553ed555553ed55555;
  local_1dd8._8_8_ = _UNK_1509251d8;
  pFVar11 = (FString *)
            (**(code **)(*(longlong *)**(undefined8 **)this + 0xf0))
                      ((longlong *)**(undefined8 **)this,&local_1e18,"Common/ProgressBar_Background"
                       ,L".png");
  pFVar12 = (FSlateBrush *)
            FSlateBoxBrush::FSlateBoxBrush
                      ((FSlateBoxBrush *)&local_1c48,pFVar11,(FMargin *)&local_1dd8._s_0,
                       (FLinearColor *)local_1df8,FullColor);
  FSlateBrush::operator=((FSlateBrush *)(local_1ae8 + 0x10),pFVar12);
  local_1dd8._0_8_ = ___xmm_3f800000000000003e6147ae3f800000;
  local_1dd8._8_8_ = _UNK_150925288;
  local_1df8 = (undefined1  [8])___xmm_3ed555553ed555553ed555553ed55555;
  _fStack_1df0 = _UNK_1509251d8;
  pFVar11 = (FString *)
            (**(code **)(*(longlong *)**(undefined8 **)this + 0xf0))
                      ((longlong *)**(undefined8 **)this,local_1e08,"Common/ProgressBar_Fill",
                       L".png");
  pFVar12 = (FSlateBrush *)
            FSlateBoxBrush::FSlateBoxBrush
                      ((FSlateBoxBrush *)&local_1da8,pFVar11,(FMargin *)local_1df8,
                       (FLinearColor *)&local_1dd8._s_0,FullColor);
  FSlateBrush::operator=(&local_1a28,pFVar12);
  local_res8.ComparisonIndex.Value = 0x41a00000;
  local_res8.Number = 0x41400000;
  pFVar11 = (FString *)
            (**(code **)(*(longlong *)**(undefined8 **)this + 0xf0))
                      ((longlong *)**(undefined8 **)this,local_1de8,"Common/ProgressBar_Marquee",
                       L".png");
  pFVar12 = (FSlateBrush *)
            FSlateImageBrush::FSlateImageBrush
                      ((FSlateImageBrush *)&local_1cf8,pFVar11,
                       (FDeprecateVector2DParameter *)&local_res8,&FLinearColor::White,Horizontal,
                       FullColor);
  FSlateBrush::operator=(&local_1978,pFVar12);
  pFVar13 = ::FName::FName((FName *)&local_res10._s_0,"ProgressBar");
  FSlateStyleSet::Set<FProgressBarStyle>(pFVar1,*pFVar13,(FProgressBarStyle *)local_1ae8);
  local_1cf8._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1cf8.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  if (local_1de8[0] != (void *)0x0) {
    FMemory::Free(local_1de8[0]);
  }
  local_1da8._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1da8.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  if (local_1e08[0] != (void *)0x0) {
    FMemory::Free(local_1e08[0]);
  }
  local_1c48._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1c48.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  if ((void *)local_1e18._0_8_ != (void *)0x0) {
    FMemory::Free((void *)local_1e18._0_8_);
  }
  local_1ae8._0_8_ = &___7FProgressBarStyle__6B_;
  local_1978._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1978.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  local_1a28._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1a28.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  local_1ae8._16_8_ = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1a38.ReferenceController);
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)local_1ae8);
  pFVar1 = (FSlateStyleSet *)**(undefined8 **)this;
  pFVar14 = ::operator_new(0xb0);
  pFVar15 = (FSlateImageBrush *)pFVar16;
  if (pFVar14 != (FSlateImageBrush *)0x0) {
    local_res8.ComparisonIndex.Value = 0x41800000;
    local_res8.Number = 0x41800000;
    local_1e18._0_8_ = pvVar2;
    local_1e18._8_8_ = pTVar7;
    pFVar11 = (FString *)
              (**(code **)(*(longlong *)**(undefined8 **)this + 0xf0))
                        ((longlong *)**(undefined8 **)this,local_1e08,"Common/Throbber_Piece",
                         L".png");
    pFVar15 = FSlateImageBrush::FSlateImageBrush
                        (pFVar14,pFVar11,(FDeprecateVector2DParameter *)&local_res8,
                         (FLinearColor *)&local_1e18._s_0,NoTile,FullColor);
  }
  pFVar13 = ::FName::FName((FName *)&local_res10._s_0,"Throbber.Chunk");
  FSlateStyleSet::Set<FSlateImageBrush>(pFVar1,*pFVar13,pFVar15);
  if ((pFVar14 != (FSlateImageBrush *)0x0) && (local_1e08[0] != (void *)0x0)) {
    FMemory::Free(local_1e08[0]);
  }
  pFVar1 = (FSlateStyleSet *)**(undefined8 **)this;
  pFVar14 = ::operator_new(0xb0);
  pFVar15 = (FSlateImageBrush *)pFVar16;
  if (pFVar14 != (FSlateImageBrush *)0x0) {
    local_res8.ComparisonIndex.Value = 0x41000000;
    local_res8.Number = 0x41000000;
    local_1e18._0_8_ = pvVar2;
    local_1e18._8_8_ = pTVar7;
    pFVar11 = (FString *)
              (**(code **)(*(longlong *)**(undefined8 **)this + 0xf0))
                        ((longlong *)**(undefined8 **)this,local_1e08,"Common/Throbber_Piece",
                         L".png");
    pFVar15 = FSlateImageBrush::FSlateImageBrush
                        (pFVar14,pFVar11,(FDeprecateVector2DParameter *)&local_res8,
                         (FLinearColor *)&local_1e18._s_0,NoTile,FullColor);
  }
  pFVar13 = ::FName::FName((FName *)&local_res10._s_0,"Throbber.CircleChunk");
  FSlateStyleSet::Set<FSlateImageBrush>(pFVar1,*pFVar13,pFVar15);
  if ((pFVar14 != (FSlateImageBrush *)0x0) && (local_1e08[0] != (void *)0x0)) {
    FMemory::Free(local_1e08[0]);
  }
  pFVar1 = (FSlateStyleSet *)**(undefined8 **)this;
  FSlateWidgetStyle::FSlateWidgetStyle((FSlateWidgetStyle *)local_1ae8);
  local_1ae8._0_8_ = &___7FExpandableAreaStyle__6B_;
  FSlateBrush::FSlateBrush((FSlateBrush *)(local_1ae8 + 0x10));
  FSlateBrush::FSlateBrush(&local_1a28);
  local_res8 = (FName)CoreStyleConstants::Icon10x10;
  local_1978._padding_ = CONCAT44(local_1978._padding_._4_4_,0x3dcccccd);
  pFVar11 = (FString *)
            (**(code **)(*(longlong *)**(undefined8 **)this + 0xf0))
                      ((longlong *)**(undefined8 **)this,local_1e08,"Common/TreeArrow_Collapsed",
                       L".png");
  pFVar12 = (FSlateBrush *)
            FSlateImageBrush::FSlateImageBrush
                      ((FSlateImageBrush *)&local_1da8,pFVar11,
                       (FDeprecateVector2DParameter *)&local_res8,&DefaultForeground,NoTile,
                       FullColor);
  FSlateBrush::operator=((FSlateBrush *)(local_1ae8 + 0x10),pFVar12);
  local_res8 = (FName)CoreStyleConstants::Icon10x10;
  pFVar11 = (FString *)
            (**(code **)(*(longlong *)**(undefined8 **)this + 0xf0))
                      ((longlong *)**(undefined8 **)this,&local_1e18,"Common/TreeArrow_Expanded",
                       L".png");
  pFVar12 = (FSlateBrush *)
            FSlateImageBrush::FSlateImageBrush
                      ((FSlateImageBrush *)&local_1cf8,pFVar11,
                       (FDeprecateVector2DParameter *)&local_res8,&DefaultForeground,NoTile,
                       FullColor);
  FSlateBrush::operator=(&local_1a28,pFVar12);
  pFVar13 = ::FName::FName((FName *)&local_res10._s_0,"ExpandableArea");
  FSlateStyleSet::Set<FExpandableAreaStyle>(pFVar1,*pFVar13,(FExpandableAreaStyle *)local_1ae8);
  local_1cf8._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1cf8.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  if ((void *)local_1e18._0_8_ != (void *)0x0) {
    FMemory::Free((void *)local_1e18._0_8_);
  }
  local_1da8._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1da8.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  if (local_1e08[0] != (void *)0x0) {
    FMemory::Free(local_1e08[0]);
  }
  local_1ae8._0_8_ = &___7FExpandableAreaStyle__6B_;
  local_1a28._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1a28.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  local_1ae8._16_8_ = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1a38.ReferenceController);
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)local_1ae8);
  pFVar1 = (FSlateStyleSet *)**(undefined8 **)this;
  local_1dc8.OutlineSize = 0;
  local_1dc8.bMiteredCorners = false;
  local_1dc8.bSeparateFillAlpha = false;
  local_1dc8.bApplyOutlineToDropShadows = false;
  local_1dc8.OutlineMaterial.field0_0x0.DebugPtr = (TObjectPtr<UObject>_u_0)0x0;
  local_1dc8.OutlineColor.field0_0x0._s_0 = FLinearColor::Black.field0_0x0;
  pFVar13 = ::FName::FName((FName *)&local_res10._s_0,"Bold");
  local_res8 = *pFVar13;
  this_00 = FLegacySlateFontInfoCache::Get();
  FLegacySlateFontInfoCache::GetDefaultFont
            (this_00,(TSharedRef<FCompositeFont_const_,1> *)local_1df8);
  local_1e18._0_8_ = local_1df8;
  local_1e18._8_8_ = _fStack_1df0;
  if ((TReferenceControllerBase<1> *)_fStack_1df0 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    *(atomic<int> *)(_fStack_1df0 + 8) = (atomic<int>)((int)*(atomic<int> *)(_fStack_1df0 + 8) + 1);
    UNLOCK();
  }
  FSlateFontInfo::FSlateFontInfo
            ((FSlateFontInfo *)&local_1c48,(TSharedPtr<FCompositeFont_const_,1> *)&local_1e18._s_0,
             __real_41000000,&local_res8,&local_1dc8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)_fStack_1df0);
  pFVar13 = ::FName::FName(local_res18,"ExpandableArea.TitleFont");
  FSlateStyleSet::Set(pFVar1,*pFVar13,(FSlateFontInfo *)&local_1c48);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_1c48.ResourceObject.field0_0x0);
  pFVar1 = (FSlateStyleSet *)**(undefined8 **)this;
  this_01 = ::operator_new(0xb0);
  uVar5 = _UNK_15076b0c8;
  pvVar4 = ___xmm_3e8000003e8000003e8000003e800000;
  if (this_01 != (FSlateBoxBrush *)0x0) {
    local_1e18._0_8_ = pvVar2;
    local_1e18._8_8_ = pTVar7;
    local_1e08[0] = ___xmm_3e8000003e8000003e8000003e800000;
    local_1e08[1] = (void *)_UNK_15076b0c8;
    pFVar11 = (FString *)
              (**(code **)(*(longlong *)**(undefined8 **)this + 0xf0))
                        ((longlong *)**(undefined8 **)this,local_1de8,"Common/GroupBorder",L".png");
    pFVar16 = FSlateBoxBrush::FSlateBoxBrush
                        (this_01,pFVar11,(FMargin *)local_1e08,(FLinearColor *)&local_1e18._s_0,
                         FullColor);
  }
  pFVar13 = ::FName::FName(&local_res8,"ExpandableArea.Border");
  FSlateStyleSet::Set<FSlateBoxBrush>(pFVar1,*pFVar13,pFVar16);
  if ((this_01 != (FSlateBoxBrush *)0x0) && (local_1de8[0] != (void *)0x0)) {
    FMemory::Free(local_1de8[0]);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    pFVar18 = FEditableTextBoxStyle::FEditableTextBoxStyle((FEditableTextBoxStyle *)local_1048);
    FTextBlockStyle::operator=(&pFVar18->TextStyle,&NormalText);
    local_1e18._0_8_ = pvVar2;
    local_1e18._8_8_ = pTVar7;
    local_1e08[0] = pvVar4;
    local_1e08[1] = (void *)uVar5;
    pFVar11 = (FString *)
              (**(code **)(*(longlong *)**(undefined8 **)this + 0xf0))
                        ((longlong *)**(undefined8 **)this,local_1e28,"Common/TextBox_Special",
                         L".png");
    pFVar12 = (FSlateBrush *)
              FSlateBoxBrush::FSlateBoxBrush
                        ((FSlateBoxBrush *)local_1b98,pFVar11,(FMargin *)local_1e08,
                         (FLinearColor *)&local_1e18._s_0,FullColor);
    FSlateBrush::operator=(&pFVar18->BackgroundImageNormal,pFVar12);
    local_1e18._0_8_ = pvVar2;
    local_1e18._8_8_ = pTVar7;
    local_1e08[0] = pvVar4;
    local_1e08[1] = (void *)uVar5;
    pFVar11 = (FString *)
              (**(code **)(*(longlong *)**(undefined8 **)this + 0xf0))
                        ((longlong *)**(undefined8 **)this,local_1df8,
                         "Common/TextBox_Special_Hovered",L".png");
    pFVar12 = (FSlateBrush *)
              FSlateBoxBrush::FSlateBoxBrush
                        ((FSlateBoxBrush *)&local_1c48,pFVar11,(FMargin *)local_1e08,
                         (FLinearColor *)&local_1e18._s_0,FullColor);
    FSlateBrush::operator=(&pFVar18->BackgroundImageHovered,pFVar12);
    local_1e18._0_8_ = pvVar2;
    local_1e18._8_8_ = pTVar7;
    local_1e08[0] = pvVar4;
    local_1e08[1] = (void *)uVar5;
    pFVar11 = (FString *)
              (**(code **)(*(longlong *)**(undefined8 **)this + 0xf0))
                        ((longlong *)**(undefined8 **)this,&local_1dd8,
                         "Common/TextBox_Special_Hovered",L".png");
    pFVar12 = (FSlateBrush *)
              FSlateBoxBrush::FSlateBoxBrush
                        ((FSlateBoxBrush *)&local_1da8,pFVar11,(FMargin *)local_1e08,
                         (FLinearColor *)&local_1e18._s_0,FullColor);
    FSlateBrush::operator=(&pFVar18->BackgroundImageFocused,pFVar12);
    local_1e18._0_8_ = pvVar2;
    local_1e18._8_8_ = pTVar7;
    local_1e08[0] = pvVar4;
    local_1e08[1] = (void *)uVar5;
    pFVar11 = (FString *)
              (**(code **)(*(longlong *)**(undefined8 **)this + 0xf0))
                        ((longlong *)**(undefined8 **)this,local_1de8,"Common/TextBox_ReadOnly",
                         L".png");
    pFVar12 = (FSlateBrush *)
              FSlateBoxBrush::FSlateBoxBrush
                        ((FSlateBoxBrush *)&local_1cf8,pFVar11,(FMargin *)local_1e08,
                         (FLinearColor *)&local_1e18._s_0,FullColor);
    FSlateBrush::operator=(&pFVar18->BackgroundImageReadOnly,pFVar12);
    FScrollBarStyle::operator=(&pFVar18->ScrollBarStyle,&ScrollBar);
    FEditableTextBoxStyle::FEditableTextBoxStyle(&SpecialEditableTextBoxStyle,pFVar18);
    local_1cf8._padding_ = (longlong)&___7FSlateBrush__6B_;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1cf8.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
    if (local_1de8[0] != (void *)0x0) {
      FMemory::Free(local_1de8[0]);
    }
    local_1da8._padding_ = (longlong)&___7FSlateBrush__6B_;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1da8.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
    if ((void *)local_1dd8._0_8_ != (void *)0x0) {
      FMemory::Free((void *)local_1dd8._0_8_);
    }
    local_1c48._padding_ = (longlong)&___7FSlateBrush__6B_;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1c48.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
    if (local_1df8 != (undefined1  [8])0x0) {
      FMemory::Free((void *)local_1df8);
    }
    local_1b98[0] = &___7FSlateBrush__6B_;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_1af8);
    if ((void *)local_1e28._0_8_ != (void *)0x0) {
      FMemory::Free((void *)local_1e28._0_8_);
    }
    FEditableTextBoxStyle::~FEditableTextBoxStyle((FEditableTextBoxStyle *)local_1048);
    atexit(``FUMGCoreStyle::Create'::__l2::<lambda_4>::operator()'::__l6::
           _dynamic_atexit_destructor_for__SpecialEditableTextBoxStyle__);
    _Init_thread_footer(&::_TSS0);
  }
  pFVar1 = (FSlateStyleSet *)**(undefined8 **)this;
  FSlateWidgetStyle::FSlateWidgetStyle((FSlateWidgetStyle *)local_1048);
  local_1048._0_8_ = &___7FSearchBoxStyle__6B_;
  FEditableTextBoxStyle::FEditableTextBoxStyle((FEditableTextBoxStyle *)local_1038);
  FSlateFontInfo::FSlateFontInfo(&local_3b8);
  FSlateBrush::FSlateBrush(&local_358);
  FSlateBrush::FSlateBrush(&local_2a8);
  FSlateBrush::FSlateBrush(&local_1f8);
  FSlateBrush::FSlateBrush(&local_148);
  local_78 = false;
  local_98[0].Left = 0.0;
  local_98[0].Top = 0.0;
  local_98[0].Right = 0.0;
  local_98[0].Bottom = 0.0;
  local_70._0_1_ = false;
  local_70._1_1_ = false;
  local_6e = false;
  FEditableTextBoxStyle::operator=((FEditableTextBoxStyle *)local_1038,&SpecialEditableTextBoxStyle)
  ;
  bVar10 = FSlateFontInfo::HasValidFont(&local_3b8);
  if (!bVar10) {
    FSlateFontInfo::operator=(&local_3b8,(FSlateFontInfo *)(local_d78 + 0x28));
  }
  local_res8 = (FName)CoreStyleConstants::Icon8x8;
  local_1e28._0_8_ = pvVar2;
  local_1e28._8_8_ = pTVar7;
  pFVar11 = (FString *)
            (**(code **)(*(longlong *)**(undefined8 **)this + 0xf0))
                      ((longlong *)**(undefined8 **)this,&local_1dd8,"Common/UpArrow",L".png");
  pFVar12 = (FSlateBrush *)
            FSlateImageBrush::FSlateImageBrush
                      ((FSlateImageBrush *)&local_1c48,pFVar11,
                       (FDeprecateVector2DParameter *)&local_res8,(FLinearColor *)local_1e28,NoTile,
                       FullColor);
  FSlateBrush::operator=(&local_358,pFVar12);
  local_res8 = (FName)CoreStyleConstants::Icon8x8;
  local_1e28._0_8_ = pvVar2;
  local_1e28._8_8_ = pTVar7;
  pFVar11 = (FString *)
            (**(code **)(*(longlong *)**(undefined8 **)this + 0xf0))
                      ((longlong *)**(undefined8 **)this,local_1de8,"Common/DownArrow",L".png");
  pFVar12 = (FSlateBrush *)
            FSlateImageBrush::FSlateImageBrush
                      ((FSlateImageBrush *)&local_1da8,pFVar11,
                       (FDeprecateVector2DParameter *)&local_res8,(FLinearColor *)local_1e28,NoTile,
                       FullColor);
  FSlateBrush::operator=(&local_2a8,pFVar12);
  local_res8 = (FName)CoreStyleConstants::Icon16x16;
  local_1e28._0_8_ = pvVar2;
  local_1e28._8_8_ = pTVar7;
  pFVar11 = (FString *)
            (**(code **)(*(longlong *)**(undefined8 **)this + 0xf0))
                      ((longlong *)**(undefined8 **)this,local_1e08,"Common/SearchGlass",L".png");
  pFVar12 = (FSlateBrush *)
            FSlateImageBrush::FSlateImageBrush
                      ((FSlateImageBrush *)&local_1cf8,pFVar11,
                       (FDeprecateVector2DParameter *)&local_res8,(FLinearColor *)local_1e28,NoTile,
                       FullColor);
  FSlateBrush::operator=(&local_1f8,pFVar12);
  local_res8 = (FName)CoreStyleConstants::Icon16x16;
  local_1e28._8_8_ = pTVar7;
  local_1e28._0_8_ = pvVar2;
  pFVar11 = (FString *)
            (**(code **)(*(longlong *)**(undefined8 **)this + 0xf0))
                      ((longlong *)**(undefined8 **)this,&local_1e18,"Common/X",L".png");
  pFVar12 = (FSlateBrush *)
            FSlateImageBrush::FSlateImageBrush
                      ((FSlateImageBrush *)local_1b98,pFVar11,
                       (FDeprecateVector2DParameter *)&local_res8,(FLinearColor *)local_1e28,NoTile,
                       FullColor);
  FSlateBrush::operator=(&local_148,pFVar12);
  pFVar13 = ::FName::FName((FName *)&local_res10._s_0,"SearchBox");
  FSlateStyleSet::Set<FSearchBoxStyle>(pFVar1,*pFVar13,(FSearchBoxStyle *)local_1048);
  local_1b98[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_1af8);
  if ((void *)local_1e18._0_8_ != (void *)0x0) {
    FMemory::Free((void *)local_1e18._0_8_);
  }
  local_1cf8._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1cf8.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  if (local_1e08[0] != (void *)0x0) {
    FMemory::Free(local_1e08[0]);
  }
  local_1da8._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1da8.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  if (local_1de8[0] != (void *)0x0) {
    FMemory::Free(local_1de8[0]);
  }
  local_1c48._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1c48.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  if ((void *)local_1dd8._0_8_ != (void *)0x0) {
    FMemory::Free((void *)local_1dd8._0_8_);
  }
  local_1048._0_8_ = &___7FSearchBoxStyle__6B_;
  local_148._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_148.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  local_1f8._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1f8.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  local_2a8._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2a8.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  local_358._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_358.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3b8.CompositeFont.SharedReferenceCount.ReferenceController);
  FEditableTextBoxStyle::~FEditableTextBoxStyle((FEditableTextBoxStyle *)local_1038);
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)local_1048);
  FSlateWidgetStyle::FSlateWidgetStyle((FSlateWidgetStyle *)local_1808);
  local_1808._0_8_ = &___7FSliderStyle__6B_;
  FSlateBrush::FSlateBrush((FSlateBrush *)local_17f8);
  FSlateBrush::FSlateBrush((FSlateBrush *)local_1748);
  FSlateBrush::FSlateBrush((FSlateBrush *)local_1698);
  FSlateBrush::FSlateBrush((FSlateBrush *)local_15e8);
  FSlateBrush::FSlateBrush((FSlateBrush *)local_1538);
  FSlateBrush::FSlateBrush((FSlateBrush *)local_1488);
  fVar3 = __real_3b808081;
  local_13d8 = 2.0;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_1df8._4_4_ = (float)FColor::White.field0_0x0._1_1_ * __real_3b808081;
  local_1df8._0_4_ = (float)FColor::White.field0_0x0._2_1_ * __real_3b808081;
  local_res10 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  fStack_1dec = (float)FColor::White.field0_0x0._3_1_ * __real_3b808081;
  fStack_1df0 = (float)FColor::White.field0_0x0._0_1_ * __real_3b808081;
  local_1e28 = ZEXT416(0);
  FSlateBrush::FSlateBrush
            (&local_1cf8,Image,(FName)0x0,(FMargin *)local_1e28,NoTile,NoImage,
             (FDeprecateVector2DParameter *)&local_res10._s_0,(FLinearColor *)local_1df8,
             (UObject *)0x0,false);
  local_1cf8._padding_ = (longlong)&___7FSlateColorBrush__6B_;
  FSlateBrush::operator=((FSlateBrush *)local_17f8,&local_1cf8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_1df8._4_4_ = (float)FColor::White.field0_0x0._1_1_ * fVar3;
  local_1df8._0_4_ = (float)FColor::White.field0_0x0._2_1_ * fVar3;
  local_res10 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  fStack_1dec = (float)FColor::White.field0_0x0._3_1_ * fVar3;
  fStack_1df0 = (float)FColor::White.field0_0x0._0_1_ * fVar3;
  local_1e28 = ZEXT416(0);
  FSlateBrush::FSlateBrush
            (&local_1da8,Image,(FName)0x0,(FMargin *)local_1e28,NoTile,NoImage,
             (FDeprecateVector2DParameter *)&local_res10._s_0,(FLinearColor *)local_1df8,
             (UObject *)0x0,false);
  local_1da8._padding_ = (longlong)&___7FSlateColorBrush__6B_;
  FSlateBrush::operator=((FSlateBrush *)local_1748,&local_1da8);
  local_res10 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_1e28 = ZEXT816(0);
  FSlateBrush::FSlateBrush
            (&local_1c48,Image,(FName)0x0,(FMargin *)local_1e28,NoTile,NoImage,
             (FDeprecateVector2DParameter *)&local_res10._s_0,&FLinearColor::Gray,(UObject *)0x0,
             false);
  local_1c48._padding_ = (longlong)&___7FSlateColorBrush__6B_;
  FSlateBrush::operator=((FSlateBrush *)local_1698,&local_1c48);
  local_res8.ComparisonIndex.Value = 0x41000000;
  local_res8.Number = 0x41600000;
  pFVar11 = (FString *)
            (**(code **)(*(longlong *)**(undefined8 **)this + 0xf0))
                      ((longlong *)**(undefined8 **)this,local_1de8,"Common/Button",L".png");
  pFVar12 = (FSlateBrush *)
            FSlateImageBrush::FSlateImageBrush
                      ((FSlateImageBrush *)local_1ae8,pFVar11,
                       (FDeprecateVector2DParameter *)&local_res8,(FLinearColor *)local_1e28,NoTile,
                       FullColor);
  FSlateBrush::operator=((FSlateBrush *)local_15e8,pFVar12);
  local_res8.ComparisonIndex.Value = 0x41000000;
  local_res8.Number = 0x41600000;
  local_1e28._0_8_ = pvVar2;
  local_1e28._8_8_ = pTVar7;
  pFVar11 = (FString *)
            (**(code **)(*(longlong *)**(undefined8 **)this + 0xf0))
                      ((longlong *)**(undefined8 **)this,local_1e08,"Common/Button",L".png");
  pFVar12 = (FSlateBrush *)
            FSlateImageBrush::FSlateImageBrush
                      ((FSlateImageBrush *)local_18b8,pFVar11,
                       (FDeprecateVector2DParameter *)&local_res8,(FLinearColor *)local_1e28,NoTile,
                       FullColor);
  FSlateBrush::operator=((FSlateBrush *)local_1538,pFVar12);
  local_res8.ComparisonIndex.Value = 0x41000000;
  local_res8.Number = 0x41600000;
  local_1e28._8_8_ = pTVar7;
  local_1e28._0_8_ = pvVar2;
  pFVar11 = (FString *)
            (**(code **)(*(longlong *)**(undefined8 **)this + 0xf0))
                      ((longlong *)**(undefined8 **)this,&local_1e18,"Common/Button_Disabled",
                       L".png");
  pFVar12 = (FSlateBrush *)
            FSlateImageBrush::FSlateImageBrush
                      ((FSlateImageBrush *)local_1b98,pFVar11,
                       (FDeprecateVector2DParameter *)&local_res8,(FLinearColor *)local_1e28,NoTile,
                       FullColor);
  FSlateBrush::operator=((FSlateBrush *)local_1488,pFVar12);
  local_13d8 = 2.0;
  local_1048._0_8_ = &___7FSliderStyle__6B_;
  FSlateBrush::FSlateBrush((FSlateBrush *)local_1038,(FSlateBrush *)local_17f8);
  FSlateBrush::FSlateBrush(&local_f88,(FSlateBrush *)local_1748);
  FSlateBrush::FSlateBrush(&local_ed8,(FSlateBrush *)local_1698);
  FSlateBrush::FSlateBrush(&local_e28,(FSlateBrush *)local_15e8);
  FSlateBrush::FSlateBrush((FSlateBrush *)local_d78,(FSlateBrush *)local_1538);
  FSlateBrush::FSlateBrush(&local_cc8,(FSlateBrush *)local_1488);
  local_c18[0]._s_0.X = local_13d8;
  local_1b98[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_1af8);
  if ((void *)local_1e18._0_8_ != (void *)0x0) {
    FMemory::Free((void *)local_1e18._0_8_);
  }
  local_18b8[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_1818);
  if (local_1e08[0] != (void *)0x0) {
    FMemory::Free(local_1e08[0]);
  }
  local_1ae8._0_8_ = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_1ae8._160_8_);
  if (local_1de8[0] != (void *)0x0) {
    FMemory::Free(local_1de8[0]);
  }
  local_1c48._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1c48.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  local_1da8._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1da8.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  local_1cf8._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1cf8.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  local_1808._0_8_ = &___7FSliderStyle__6B_;
  local_1488._0_8_ = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_13e8.ReferenceController);
  local_1538._0_8_ = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1498.ReferenceController);
  local_15e8._0_8_ = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1548.ReferenceController);
  local_1698._0_8_ = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_15f8.ReferenceController);
  local_1748._0_8_ = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_16a8.ReferenceController);
  local_17f8._0_8_ = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_17f8._160_8_);
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)local_1808);
  pFVar1 = (FSlateStyleSet *)**(undefined8 **)this;
  pFVar13 = ::FName::FName(&local_res8,"Slider");
  FSlateStyleSet::Set<FSliderStyle>(pFVar1,*pFVar13,(FSliderStyle *)local_1048);
  pFVar1 = (FSlateStyleSet *)**(undefined8 **)this;
  FSlateWidgetStyle::FSlateWidgetStyle((FSlateWidgetStyle *)local_1808);
  local_1808._0_8_ = &___7FVolumeControlStyle__6B_;
  FSliderStyle::FSliderStyle((FSliderStyle *)local_17f8);
  FSlateBrush::FSlateBrush(&local_13b8);
  FSlateBrush::FSlateBrush(&local_1308);
  FSlateBrush::FSlateBrush(&local_1258);
  FSlateBrush::FSlateBrush(&local_11a8);
  FSlateBrush::FSlateBrush(&local_10f8);
  FSlateBrush::operator=((FSlateBrush *)(local_17f8 + 0x10),(FSlateBrush *)local_1038);
  FSlateBrush::operator=((FSlateBrush *)(local_1748 + 0x10),&local_f88);
  FSlateBrush::operator=((FSlateBrush *)(local_1698 + 0x10),&local_ed8);
  FSlateBrush::operator=((FSlateBrush *)(local_15e8 + 0x10),&local_e28);
  FSlateBrush::operator=((FSlateBrush *)(local_1538 + 0x10),(FSlateBrush *)local_d78);
  FSlateBrush::operator=((FSlateBrush *)(local_1488 + 0x10),&local_cc8);
  local_res8 = (FName)CoreStyleConstants::Icon16x16;
  local_13c8 = (float)local_c18[0]._0_4_;
  pFVar11 = (FString *)
            (**(code **)(*(longlong *)**(undefined8 **)this + 0xf0))
                      ((longlong *)**(undefined8 **)this,local_1df8,"Common/VolumeControl_High",
                       L".png");
  pFVar12 = (FSlateBrush *)
            FSlateImageBrush::FSlateImageBrush
                      ((FSlateImageBrush *)&local_1da8,pFVar11,
                       (FDeprecateVector2DParameter *)&local_res8,(FLinearColor *)local_1e28,NoTile,
                       FullColor);
  FSlateBrush::operator=(&local_13b8,pFVar12);
  local_res8 = (FName)CoreStyleConstants::Icon16x16;
  local_1e28._0_8_ = pvVar2;
  local_1e28._8_8_ = pTVar7;
  pFVar11 = (FString *)
            (**(code **)(*(longlong *)**(undefined8 **)this + 0xf0))
                      ((longlong *)**(undefined8 **)this,&local_1dd8,"Common/VolumeControl_Mid",
                       L".png");
  pFVar12 = (FSlateBrush *)
            FSlateImageBrush::FSlateImageBrush
                      ((FSlateImageBrush *)&local_1cf8,pFVar11,
                       (FDeprecateVector2DParameter *)&local_res8,(FLinearColor *)local_1e28,NoTile,
                       FullColor);
  FSlateBrush::operator=(&local_1308,pFVar12);
  local_res8 = (FName)CoreStyleConstants::Icon16x16;
  local_1e28._0_8_ = pvVar2;
  local_1e28._8_8_ = pTVar7;
  pFVar11 = (FString *)
            (**(code **)(*(longlong *)**(undefined8 **)this + 0xf0))
                      ((longlong *)**(undefined8 **)this,local_1de8,"Common/VolumeControl_Low",
                       L".png");
  pFVar12 = (FSlateBrush *)
            FSlateImageBrush::FSlateImageBrush
                      ((FSlateImageBrush *)local_1b98,pFVar11,
                       (FDeprecateVector2DParameter *)&local_res8,(FLinearColor *)local_1e28,NoTile,
                       FullColor);
  FSlateBrush::operator=(&local_1258,pFVar12);
  local_res8 = (FName)CoreStyleConstants::Icon16x16;
  local_1e28._0_8_ = pvVar2;
  local_1e28._8_8_ = pTVar7;
  pFVar11 = (FString *)
            (**(code **)(*(longlong *)**(undefined8 **)this + 0xf0))
                      ((longlong *)**(undefined8 **)this,local_1e08,"Common/VolumeControl_Off",
                       L".png");
  pFVar12 = (FSlateBrush *)
            FSlateImageBrush::FSlateImageBrush
                      ((FSlateImageBrush *)local_18b8,pFVar11,
                       (FDeprecateVector2DParameter *)&local_res8,(FLinearColor *)local_1e28,NoTile,
                       FullColor);
  FSlateBrush::operator=(&local_11a8,pFVar12);
  local_res8 = (FName)CoreStyleConstants::Icon16x16;
  local_1e28._8_8_ = pTVar7;
  local_1e28._0_8_ = pvVar2;
  pFVar11 = (FString *)
            (**(code **)(*(longlong *)**(undefined8 **)this + 0xf0))
                      ((longlong *)**(undefined8 **)this,&local_1e18,"Common/VolumeControl_Muted",
                       L".png");
  pFVar12 = (FSlateBrush *)
            FSlateImageBrush::FSlateImageBrush
                      ((FSlateImageBrush *)local_1ae8,pFVar11,
                       (FDeprecateVector2DParameter *)&local_res8,(FLinearColor *)local_1e28,NoTile,
                       FullColor);
  FSlateBrush::operator=(&local_10f8,pFVar12);
  pFVar13 = ::FName::FName((FName *)&local_res10._s_0,"VolumeControl");
  FSlateStyleSet::Set<FVolumeControlStyle>(pFVar1,*pFVar13,(FVolumeControlStyle *)local_1808);
  local_1ae8._0_8_ = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_1ae8._160_8_);
  if ((void *)local_1e18._0_8_ != (void *)0x0) {
    FMemory::Free((void *)local_1e18._0_8_);
  }
  local_18b8[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_1818);
  if (local_1e08[0] != (void *)0x0) {
    FMemory::Free(local_1e08[0]);
  }
  local_1b98[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_1af8);
  if (local_1de8[0] != (void *)0x0) {
    FMemory::Free(local_1de8[0]);
  }
  local_1cf8._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1cf8.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  if ((void *)local_1dd8._0_8_ != (void *)0x0) {
    FMemory::Free((void *)local_1dd8._0_8_);
  }
  local_1da8._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1da8.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  if (local_1df8 != (undefined1  [8])0x0) {
    FMemory::Free((void *)local_1df8);
  }
  local_1808._0_8_ = &___7FVolumeControlStyle__6B_;
  local_10f8._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_10f8.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  local_11a8._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_11a8.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  local_1258._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1258.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  local_1308._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1308.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  local_13b8._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_13b8.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  FSliderStyle::~FSliderStyle((FSliderStyle *)local_17f8);
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)local_1808);
  local_1048._0_8_ = &___7FSliderStyle__6B_;
  local_cc8._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_cc8.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  local_d78._0_8_ = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_cd8.ReferenceController);
  local_e28._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_e28.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  local_ed8._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_ed8.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  local_f88._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_f88.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  local_1038._0_8_ = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_1038._160_8_);
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)local_1048);
  pFVar1 = (FSlateStyleSet *)**(undefined8 **)this;
  pFVar17 = FSpinBoxStyle::FSpinBoxStyle((FSpinBoxStyle *)local_1048);
  uVar6 = _UNK_15076b0c8;
  local_1e18._0_8_ = pvVar4;
  _UNK_15076b0c8 = (float)uVar5;
  _UNK_15076b0cc = SUB84(uVar5,4);
  local_1e18._s_0.B = _UNK_15076b0c8;
  local_1e18._s_0.A = _UNK_15076b0cc;
  _UNK_15076b0c8 = uVar6;
  pFVar11 = (FString *)
            (**(code **)(*(longlong *)**(undefined8 **)this + 0xf0))
                      ((longlong *)**(undefined8 **)this,&local_1dc8,"Common/Spinbox",L".png");
  pFVar12 = (FSlateBrush *)
            FSlateBoxBrush::FSlateBoxBrush
                      ((FSlateBoxBrush *)&local_1da8,pFVar11,(FMargin *)&local_1e18._s_0,
                       (FLinearColor *)local_1e28,FullColor);
  FSlateBrush::operator=(&pFVar17->BackgroundBrush,pFVar12);
  uVar6 = _UNK_15076b0c8;
  local_1e28._0_8_ = pvVar2;
  local_1e28._8_8_ = pTVar7;
  local_1e18._0_8_ = pvVar4;
  _UNK_15076b0c8 = (float)uVar5;
  _UNK_15076b0cc = SUB84(uVar5,4);
  local_1e18._s_0.B = _UNK_15076b0c8;
  local_1e18._s_0.A = _UNK_15076b0cc;
  _UNK_15076b0c8 = uVar6;
  pFVar11 = (FString *)
            (**(code **)(*(longlong *)**(undefined8 **)this + 0xf0))
                      ((longlong *)**(undefined8 **)this,local_1df8,"Common/Spinbox_Hovered",L".png"
                      );
  pFVar12 = (FSlateBrush *)
            FSlateBoxBrush::FSlateBoxBrush
                      ((FSlateBoxBrush *)&local_1cf8,pFVar11,(FMargin *)&local_1e18._s_0,
                       (FLinearColor *)local_1e28,FullColor);
  FSlateBrush::operator=(&pFVar17->HoveredBackgroundBrush,pFVar12);
  local_1e28._0_8_ = pvVar2;
  local_1e28._8_8_ = pTVar7;
  local_1e18._0_8_ = ___xmm_3e8000003f0000003e8000003e800000;
  local_1e18._8_8_ = _UNK_150925188;
  pFVar11 = (FString *)
            (**(code **)(*(longlong *)**(undefined8 **)this + 0xf0))
                      ((longlong *)**(undefined8 **)this,&local_1dd8,"Common/Spinbox_Fill",L".png");
  pFVar12 = (FSlateBrush *)
            FSlateBoxBrush::FSlateBoxBrush
                      ((FSlateBoxBrush *)local_1b98,pFVar11,(FMargin *)&local_1e18._s_0,
                       (FLinearColor *)local_1e28,FullColor);
  FSlateBrush::operator=(&pFVar17->ActiveFillBrush,pFVar12);
  uVar6 = _UNK_15076b0c8;
  local_1e28._0_8_ = pvVar2;
  local_1e28._8_8_ = pTVar7;
  local_1e18._0_8_ = pvVar4;
  _UNK_15076b0c8 = (float)uVar5;
  _UNK_15076b0cc = SUB84(uVar5,4);
  local_1e18._s_0.B = _UNK_15076b0c8;
  local_1e18._s_0.A = _UNK_15076b0cc;
  _UNK_15076b0c8 = uVar6;
  pFVar11 = (FString *)
            (**(code **)(*(longlong *)**(undefined8 **)this + 0xf0))
                      ((longlong *)**(undefined8 **)this,local_1de8,"Common/Spinbox_Fill_Hovered",
                       L".png");
  pFVar12 = (FSlateBrush *)
            FSlateBoxBrush::FSlateBoxBrush
                      ((FSlateBoxBrush *)local_18b8,pFVar11,(FMargin *)&local_1e18._s_0,
                       (FLinearColor *)local_1e28,FullColor);
  FSlateBrush::operator=(&pFVar17->InactiveFillBrush,pFVar12);
  local_res8 = (FName)CoreStyleConstants::Icon12x12;
  local_1e28._8_8_ = pTVar7;
  local_1e28._0_8_ = pvVar2;
  pFVar11 = (FString *)
            (**(code **)(*(longlong *)**(undefined8 **)this + 0xf0))
                      ((longlong *)**(undefined8 **)this,local_1e08,"Common/SpinArrows",L".png");
  pFVar12 = (FSlateBrush *)
            FSlateImageBrush::FSlateImageBrush
                      ((FSlateImageBrush *)local_1ae8,pFVar11,
                       (FDeprecateVector2DParameter *)&local_res8,(FLinearColor *)local_1e28,NoTile,
                       FullColor);
  FSlateBrush::operator=(&pFVar17->ArrowsImage,pFVar12);
  (pFVar17->ForegroundColor).SpecifiedColor.field0_0x0._s_0 =
       (FLinearColor_u_0_s_0)InvertedForeground.SpecifiedColor.field0_0x0;
  EVar8 = InvertedForeground.ColorTableId;
  uVar9 = InvertedForeground._18_2_;
  (pFVar17->ForegroundColor).ColorUseRule = InvertedForeground.ColorUseRule;
  (pFVar17->ForegroundColor).ColorTableId = EVar8;
  *(undefined2 *)&(pFVar17->ForegroundColor).field_0x12 = uVar9;
  pFVar13 = ::FName::FName((FName *)&local_res10._s_0,"SpinBox");
  FSlateStyleSet::Set<FSpinBoxStyle>(pFVar1,*pFVar13,pFVar17);
  local_1ae8._0_8_ = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_1ae8._160_8_);
  if (local_1e08[0] != (void *)0x0) {
    FMemory::Free(local_1e08[0]);
  }
  local_18b8[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_1818);
  if (local_1de8[0] != (void *)0x0) {
    FMemory::Free(local_1de8[0]);
  }
  local_1b98[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_1af8);
  if ((void *)local_1dd8._0_8_ != (void *)0x0) {
    FMemory::Free((void *)local_1dd8._0_8_);
  }
  local_1cf8._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1cf8.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  if (local_1df8 != (undefined1  [8])0x0) {
    FMemory::Free((void *)local_1df8);
  }
  local_1da8._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1da8.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  pvVar2 = (void *)CONCAT17(local_1dc8._padding_,
                            CONCAT16(local_1dc8.bApplyOutlineToDropShadows,
                                     CONCAT24(local_1dc8._4_2_,local_1dc8.OutlineSize)));
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FSpinBoxStyle::~FSpinBoxStyle((FSpinBoxStyle *)local_1048);
  return;
}

// operator() @ 142558520

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall `FUMGCoreStyle::Create'::__l2::<lambda_5>::operator()(void *this)

{
  FSlateStyleSet *pFVar1;
  void *pvVar2;
  TReferenceControllerBase<1> *pTVar3;
  EStyleColor EVar4;
  undefined2 uVar5;
  FSpinBoxStyle *pFVar6;
  FSlateBrush *pFVar7;
  FString *pFVar8;
  FName *pFVar9;
  FSlateBoxBrush *pFVar10;
  FSlateBoxBrush *pFVar11;
  FSlateImageBrush *pFVar12;
  FSlateImageBrush *pFVar13;
  FLegacySlateFontInfoCache *this_00;
  FSlateImageBrush *pFVar14;
  char cVar15;
  TVector2<float>_u_0 local_res8;
  FName local_res10;
  FName local_res18 [2];
  FLinearColor_u_0 local_1588;
  void *local_1578;
  TObjectPtr<UObject>_u_0 TStack_1570;
  FLinearColor_u_0 local_1568;
  FLinearColor_u_0 local_1558;
  FLinearColor_u_0 local_1548;
  void *local_1538 [2];
  void *local_1528 [2];
  void *local_1518 [2];
  void *local_1508 [2];
  undefined1 local_14f8 [160];
  TReferenceControllerBase<1> *local_1458;
  undefined **local_1448 [20];
  TReferenceControllerBase<1> *local_13a8;
  undefined **local_1398 [20];
  TReferenceControllerBase<1> *local_12f8;
  undefined **local_12e8 [20];
  TReferenceControllerBase<1> *local_1248;
  undefined1 local_1238 [176];
  FSharedReferencer<1> local_1188;
  FSlateBrush local_1178;
  FSlateBrush local_10c8;
  FSlateBrush local_1018;
  FSlateBrush local_f68;
  FSlateBrush local_eb8;
  float local_e08;
  undefined **local_df8 [20];
  TReferenceControllerBase<1> *local_d58;
  undefined **local_d48 [20];
  TReferenceControllerBase<1> *local_ca8;
  undefined **local_c98 [20];
  TReferenceControllerBase<1> *local_bf8;
  undefined **local_be8 [20];
  TReferenceControllerBase<1> *local_b48;
  undefined **local_b38 [20];
  TReferenceControllerBase<1> *local_a98;
  FSpinBoxStyle local_a88;
  FSpinBoxStyle local_568;
  
  pFVar14 = (FSlateImageBrush *)0x0;
  local_res8._s_0 = local_res8._s_0 & 0xffffffff00000000;
  pFVar1 = (FSlateStyleSet *)**(undefined8 **)this;
  pFVar6 = FSpinBoxStyle::FSpinBoxStyle(&local_a88);
  local_res8 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  pFVar7 = (FSlateBrush *)
           FSlateNoResource::FSlateNoResource
                     ((FSlateNoResource *)local_be8,(FDeprecateVector2DParameter *)&local_res8._s_0)
  ;
  FSlateBrush::operator=(&pFVar6->BackgroundBrush,pFVar7);
  local_res8 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  pFVar7 = (FSlateBrush *)
           FSlateNoResource::FSlateNoResource
                     ((FSlateNoResource *)local_c98,(FDeprecateVector2DParameter *)&local_res8._s_0)
  ;
  FSlateBrush::operator=(&pFVar6->HoveredBackgroundBrush,pFVar7);
  pTVar3 = _UNK_15076b1f8;
  pvVar2 = ___xmm_3f8000003f8000003f8000003f800000;
  local_1548._0_8_ = ___xmm_3f8000003f8000003f8000003f800000;
  local_1548._8_8_ = _UNK_15076b1f8;
  local_1558._0_8_ = ___xmm_3e8000003e8000003e8000003e800000;
  local_1558._8_8_ = _UNK_15076b0c8;
  pFVar8 = (FString *)
           (**(code **)(*(longlong *)**(undefined8 **)this + 0xf0))
                     ((longlong *)**(undefined8 **)this,local_1528,"Common/Spinbox_Fill_Hovered",
                      L".png");
  pFVar7 = (FSlateBrush *)
           FSlateBoxBrush::FSlateBoxBrush
                     ((FSlateBoxBrush *)local_d48,pFVar8,(FMargin *)&local_1558._s_0,
                      (FLinearColor *)&local_1548._s_0,FullColor);
  FSlateBrush::operator=(&pFVar6->ActiveFillBrush,pFVar7);
  local_1558._0_8_ = pvVar2;
  local_1558._8_8_ = pTVar3;
  local_1548._0_8_ = ___xmm_3e8000003f0000003e8000003e800000;
  local_1548._8_8_ = _UNK_150925188;
  pFVar8 = (FString *)
           (**(code **)(*(longlong *)**(undefined8 **)this + 0xf0))
                     ((longlong *)**(undefined8 **)this,local_1508,"Common/Spinbox_Fill",L".png");
  pFVar7 = (FSlateBrush *)
           FSlateBoxBrush::FSlateBoxBrush
                     ((FSlateBoxBrush *)local_df8,pFVar8,(FMargin *)&local_1548._s_0,
                      (FLinearColor *)&local_1558._s_0,FullColor);
  FSlateBrush::operator=(&pFVar6->InactiveFillBrush,pFVar7);
  local_res8._s_0 = (TVector2<float>_u_0_s_0)CoreStyleConstants::Icon12x12;
  local_1558._0_8_ = pvVar2;
  local_1558._8_8_ = pTVar3;
  pFVar8 = (FString *)
           (**(code **)(*(longlong *)**(undefined8 **)this + 0xf0))
                     ((longlong *)**(undefined8 **)this,local_1518,"Common/SpinArrows",L".png");
  pFVar7 = (FSlateBrush *)
           FSlateImageBrush::FSlateImageBrush
                     ((FSlateImageBrush *)local_14f8,pFVar8,
                      (FDeprecateVector2DParameter *)&local_res8._s_0,
                      (FLinearColor *)&local_1558._s_0,NoTile,FullColor);
  FSlateBrush::operator=(&pFVar6->ArrowsImage,pFVar7);
  (pFVar6->TextPadding).Left = 0.0;
  (pFVar6->TextPadding).Top = 0.0;
  (pFVar6->TextPadding).Right = 0.0;
  (pFVar6->TextPadding).Bottom = 0.0;
  (pFVar6->ForegroundColor).SpecifiedColor.field0_0x0._s_0 =
       (FLinearColor_u_0_s_0)InvertedForeground.SpecifiedColor.field0_0x0;
  EVar4 = InvertedForeground.ColorTableId;
  uVar5 = InvertedForeground._18_2_;
  (pFVar6->ForegroundColor).ColorUseRule = InvertedForeground.ColorUseRule;
  (pFVar6->ForegroundColor).ColorTableId = EVar4;
  *(undefined2 *)&(pFVar6->ForegroundColor).field_0x12 = uVar5;
  pFVar9 = ::FName::FName(&local_res10,"NumericEntrySpinBox");
  FSlateStyleSet::Set<FSpinBoxStyle>(pFVar1,*pFVar9,pFVar6);
  local_14f8._0_8_ = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_1458);
  if (local_1518[0] != (void *)0x0) {
    FMemory::Free(local_1518[0]);
  }
  local_df8[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_d58);
  if (local_1508[0] != (void *)0x0) {
    FMemory::Free(local_1508[0]);
  }
  local_d48[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_ca8);
  if (local_1528[0] != (void *)0x0) {
    FMemory::Free(local_1528[0]);
  }
  local_c98[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_bf8);
  local_be8[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_b48);
  FSpinBoxStyle::~FSpinBoxStyle(&local_a88);
  pFVar1 = (FSlateStyleSet *)**(undefined8 **)this;
  pFVar6 = FSpinBoxStyle::FSpinBoxStyle(&local_568);
  local_res8 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  pFVar7 = (FSlateBrush *)
           FSlateNoResource::FSlateNoResource
                     ((FSlateNoResource *)local_12e8,(FDeprecateVector2DParameter *)&local_res8._s_0
                     );
  FSlateBrush::operator=(&pFVar6->BackgroundBrush,pFVar7);
  local_res8 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  pFVar7 = (FSlateBrush *)
           FSlateNoResource::FSlateNoResource
                     ((FSlateNoResource *)local_1398,(FDeprecateVector2DParameter *)&local_res8._s_0
                     );
  FSlateBrush::operator=(&pFVar6->HoveredBackgroundBrush,pFVar7);
  local_1558._0_8_ = pvVar2;
  local_1558._8_8_ = pTVar3;
  local_1548._0_8_ = ___xmm_3e8000003e8000003e8000003e800000;
  local_1548._8_8_ = _UNK_15076b0c8;
  pFVar8 = (FString *)
           (**(code **)(*(longlong *)**(undefined8 **)this + 0xf0))
                     ((longlong *)**(undefined8 **)this,&local_1588,
                      "Common/Spinbox_Fill_Hovered_Dark",L".png");
  pFVar7 = (FSlateBrush *)
           FSlateBoxBrush::FSlateBoxBrush
                     ((FSlateBoxBrush *)local_1448,pFVar8,(FMargin *)&local_1548._s_0,
                      (FLinearColor *)&local_1558._s_0,FullColor);
  FSlateBrush::operator=(&pFVar6->ActiveFillBrush,pFVar7);
  local_1558._0_8_ = pvVar2;
  local_1558._8_8_ = pTVar3;
  local_1548._0_8_ = ___xmm_3e8000003f0000003e8000003e800000;
  local_1548._8_8_ = _UNK_150925188;
  pFVar8 = (FString *)
           (**(code **)(*(longlong *)**(undefined8 **)this + 0xf0))
                     ((longlong *)**(undefined8 **)this,&local_1578,"Common/Spinbox_Fill_Dark",
                      L".png");
  pFVar7 = (FSlateBrush *)
           FSlateBoxBrush::FSlateBoxBrush
                     ((FSlateBoxBrush *)local_1238,pFVar8,(FMargin *)&local_1548._s_0,
                      (FLinearColor *)&local_1558._s_0,FullColor);
  FSlateBrush::operator=(&pFVar6->InactiveFillBrush,pFVar7);
  local_res8._s_0 = (TVector2<float>_u_0_s_0)CoreStyleConstants::Icon12x12;
  local_1558._0_8_ = pvVar2;
  local_1558._8_8_ = pTVar3;
  pFVar8 = (FString *)
           (**(code **)(*(longlong *)**(undefined8 **)this + 0xf0))
                     ((longlong *)**(undefined8 **)this,local_1538,"Common/SpinArrows",L".png");
  pFVar7 = (FSlateBrush *)
           FSlateImageBrush::FSlateImageBrush
                     ((FSlateImageBrush *)local_b38,pFVar8,
                      (FDeprecateVector2DParameter *)&local_res8._s_0,
                      (FLinearColor *)&local_1558._s_0,NoTile,FullColor);
  FSlateBrush::operator=(&pFVar6->ArrowsImage,pFVar7);
  (pFVar6->TextPadding).Left = 0.0;
  (pFVar6->TextPadding).Top = 0.0;
  (pFVar6->TextPadding).Right = 0.0;
  (pFVar6->TextPadding).Bottom = 0.0;
  (pFVar6->ForegroundColor).SpecifiedColor.field0_0x0._s_0 =
       (FLinearColor_u_0_s_0)InvertedForeground.SpecifiedColor.field0_0x0;
  EVar4 = InvertedForeground.ColorTableId;
  uVar5 = InvertedForeground._18_2_;
  (pFVar6->ForegroundColor).ColorUseRule = InvertedForeground.ColorUseRule;
  (pFVar6->ForegroundColor).ColorTableId = EVar4;
  *(undefined2 *)&(pFVar6->ForegroundColor).field_0x12 = uVar5;
  pFVar9 = ::FName::FName(local_res18,"NumericEntrySpinBox_Dark");
  FSlateStyleSet::Set<FSpinBoxStyle>(pFVar1,*pFVar9,pFVar6);
  local_b38[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_a98);
  if (local_1538[0] != (void *)0x0) {
    FMemory::Free(local_1538[0]);
  }
  local_1238._0_8_ = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_1238._160_8_);
  if (local_1578 != (void *)0x0) {
    FMemory::Free(local_1578);
  }
  local_1448[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_13a8);
  if ((void *)local_1588._0_8_ != (void *)0x0) {
    FMemory::Free((void *)local_1588._0_8_);
  }
  local_1398[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_12f8);
  local_12e8[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_1248);
  FSpinBoxStyle::~FSpinBoxStyle(&local_568);
  pFVar1 = (FSlateStyleSet *)**(undefined8 **)this;
  pFVar10 = ::operator_new(0xb0);
  pFVar11 = (FSlateBoxBrush *)pFVar14;
  if (pFVar10 != (FSlateBoxBrush *)0x0) {
    local_1588._0_8_ = pvVar2;
    local_1588._8_8_ = pTVar3;
    local_1578 = ___xmm_3ea000003ea000003ea000003ea00000;
    TStack_1570 = _UNK_150925198;
    pFVar8 = (FString *)
             (**(code **)(*(longlong *)**(undefined8 **)this + 0xf0))
                       ((longlong *)**(undefined8 **)this,local_1538,"Common/TextBoxLabelBorder",
                        L".png");
    pFVar11 = FSlateBoxBrush::FSlateBoxBrush
                        (pFVar10,pFVar8,(FMargin *)&local_1578,(FLinearColor *)&local_1588._s_0,
                         FullColor);
  }
  pFVar9 = ::FName::FName((FName *)&local_res8._s_0,"NumericEntrySpinBox.Decorator");
  FSlateStyleSet::Set<FSlateBoxBrush>(pFVar1,*pFVar9,pFVar11);
  if ((pFVar10 != (FSlateBoxBrush *)0x0) && (local_1538[0] != (void *)0x0)) {
    FMemory::Free(local_1538[0]);
  }
  pFVar1 = (FSlateStyleSet *)**(undefined8 **)this;
  pFVar10 = ::operator_new(0xb0);
  pFVar11 = (FSlateBoxBrush *)pFVar14;
  if (pFVar10 != (FSlateBoxBrush *)0x0) {
    local_1588._0_8_ = pvVar2;
    local_1588._8_8_ = pTVar3;
    local_1578 = ___xmm_3e8000003e0000003e8000003e000000;
    TStack_1570 = _UNK_150925178;
    pFVar8 = (FString *)
             (**(code **)(*(longlong *)**(undefined8 **)this + 0xf0))
                       ((longlong *)**(undefined8 **)this,local_1538,"Common/TextBoxLabelBorder",
                        L".png");
    pFVar11 = FSlateBoxBrush::FSlateBoxBrush
                        (pFVar10,pFVar8,(FMargin *)&local_1578,(FLinearColor *)&local_1588._s_0,
                         FullColor);
  }
  pFVar9 = ::FName::FName((FName *)&local_res8._s_0,"NumericEntrySpinBox.NarrowDecorator");
  FSlateStyleSet::Set<FSlateBoxBrush>(pFVar1,*pFVar9,pFVar11);
  if ((pFVar10 != (FSlateBoxBrush *)0x0) && (local_1538[0] != (void *)0x0)) {
    FMemory::Free(local_1538[0]);
  }
  pFVar1 = (FSlateStyleSet *)**(undefined8 **)this;
  pFVar10 = ::operator_new(0xb0);
  pFVar11 = (FSlateBoxBrush *)pFVar14;
  if (pFVar10 != (FSlateBoxBrush *)0x0) {
    local_1588._0_8_ = pvVar2;
    local_1588._8_8_ = pTVar3;
    local_1578 = ___xmm_3e8000003e8000003e8000003e800000;
    TStack_1570 = _UNK_15076b0c8;
    pFVar8 = (FString *)
             (**(code **)(*(longlong *)**(undefined8 **)this + 0xf0))
                       ((longlong *)**(undefined8 **)this,local_1538,"Common/GroupBorder",L".png");
    pFVar11 = FSlateBoxBrush::FSlateBoxBrush
                        (pFVar10,pFVar8,(FMargin *)&local_1578,(FLinearColor *)&local_1588._s_0,
                         FullColor);
  }
  pFVar9 = ::FName::FName((FName *)&local_res8._s_0,"ColorPicker.Border");
  FSlateStyleSet::Set<FSlateBoxBrush>(pFVar1,*pFVar9,pFVar11);
  if ((pFVar10 != (FSlateBoxBrush *)0x0) && (local_1538[0] != (void *)0x0)) {
    FMemory::Free(local_1538[0]);
  }
  pFVar1 = (FSlateStyleSet *)**(undefined8 **)this;
  pFVar12 = ::operator_new(0xb0);
  pFVar13 = pFVar14;
  if (pFVar12 != (FSlateImageBrush *)0x0) {
    local_res8._s_0 = (TVector2<float>_u_0_s_0)CoreStyleConstants::Icon16x16;
    pFVar8 = (FString *)
             (**(code **)(*(longlong *)**(undefined8 **)this + 0xf0))
                       ((longlong *)**(undefined8 **)this,&local_1588,"Common/Checker",L".png");
    pFVar13 = FSlateImageBrush::FSlateImageBrush
                        (pFVar12,pFVar8,(FDeprecateVector2DParameter *)&local_res8._s_0,
                         &FLinearColor::White,Both,FullColor);
  }
  pFVar9 = ::FName::FName(&local_res10,"ColorPicker.AlphaBackground");
  FSlateStyleSet::Set<FSlateImageBrush>(pFVar1,*pFVar9,pFVar13);
  if ((pFVar12 != (FSlateImageBrush *)0x0) && ((void *)local_1588._0_8_ != (void *)0x0)) {
    FMemory::Free((void *)local_1588._0_8_);
  }
  pFVar1 = (FSlateStyleSet *)**(undefined8 **)this;
  pFVar12 = ::operator_new(0xb0);
  pFVar13 = pFVar14;
  if (pFVar12 != (FSlateImageBrush *)0x0) {
    local_res8._s_0 = (TVector2<float>_u_0_s_0)CoreStyleConstants::Icon16x16;
    local_1588._0_8_ = pvVar2;
    local_1588._8_8_ = pTVar3;
    pFVar8 = (FString *)
             (**(code **)(*(longlong *)**(undefined8 **)this + 0xf0))
                       ((longlong *)**(undefined8 **)this,&local_1578,"Icons/eyedropper_16px",
                        L".png");
    pFVar13 = FSlateImageBrush::FSlateImageBrush
                        (pFVar12,pFVar8,(FDeprecateVector2DParameter *)&local_res8._s_0,
                         (FLinearColor *)&local_1588._s_0,NoTile,FullColor);
  }
  pFVar9 = ::FName::FName(&local_res10,"ColorPicker.EyeDropper");
  FSlateStyleSet::Set<FSlateImageBrush>(pFVar1,*pFVar9,pFVar13);
  if ((pFVar12 != (FSlateImageBrush *)0x0) && (local_1578 != (void *)0x0)) {
    FMemory::Free(local_1578);
  }
  pFVar1 = (FSlateStyleSet *)**(undefined8 **)this;
  local_1578 = (void *)((ulonglong)local_1578 & 0xff00000000000000);
  TStack_1570.DebugPtr = (UObject *)0x0;
  local_1568 = FLinearColor::Black.field0_0x0;
  pFVar9 = ::FName::FName(&local_res10,"Regular");
  local_res8._0_4_ = *(float *)&pFVar9->ComparisonIndex;
  local_res8._4_4_ = (float)pFVar9->Number;
  this_00 = FLegacySlateFontInfoCache::Get();
  FLegacySlateFontInfoCache::GetDefaultFont
            (this_00,(TSharedRef<FCompositeFont_const_,1> *)&local_1548._s_0);
  local_1588._0_8_ = local_1548._0_8_;
  local_1588._8_8_ = local_1548._8_8_;
  if ((TReferenceControllerBase<1> *)local_1548._8_8_ != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    *(atomic<int> *)(local_1548._8_8_ + 8) =
         (atomic<int>)((int)*(atomic<int> *)(local_1548._8_8_ + 8) + 1);
    UNLOCK();
  }
  FSlateFontInfo::FSlateFontInfo
            ((FSlateFontInfo *)local_14f8,(TSharedPtr<FCompositeFont_const_,1> *)&local_1588._s_0,
             __real_41200000,(FName *)&local_res8._s_0,(FFontOutlineSettings *)&local_1578);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_1548._8_8_);
  pFVar9 = ::FName::FName(local_res18,"ColorPicker.Font");
  FSlateStyleSet::Set(pFVar1,*pFVar9,(FSlateFontInfo *)local_14f8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_14f8._56_8_);
  pFVar1 = (FSlateStyleSet *)**(undefined8 **)this;
  pFVar12 = ::operator_new(0xb0);
  pFVar13 = pFVar14;
  if (pFVar12 != (FSlateImageBrush *)0x0) {
    local_res8._s_0 = (TVector2<float>_u_0_s_0)CoreStyleConstants::Icon16x16;
    local_1588._0_8_ = pvVar2;
    local_1588._8_8_ = pTVar3;
    pFVar8 = (FString *)
             (**(code **)(*(longlong *)**(undefined8 **)this + 0xf0))
                       ((longlong *)**(undefined8 **)this,&local_1578,"Common/ColorPicker_Mode_16x",
                        L".png");
    pFVar13 = FSlateImageBrush::FSlateImageBrush
                        (pFVar12,pFVar8,(FDeprecateVector2DParameter *)&local_res8._s_0,
                         (FLinearColor *)&local_1588._s_0,NoTile,FullColor);
  }
  pFVar9 = ::FName::FName(&local_res10,"ColorPicker.Mode");
  FSlateStyleSet::Set<FSlateImageBrush>(pFVar1,*pFVar9,pFVar13);
  if ((pFVar12 != (FSlateImageBrush *)0x0) && (local_1578 != (void *)0x0)) {
    FMemory::Free(local_1578);
  }
  pFVar1 = (FSlateStyleSet *)**(undefined8 **)this;
  pFVar12 = ::operator_new(0xb0);
  pFVar13 = pFVar14;
  if (pFVar12 != (FSlateImageBrush *)0x0) {
    local_res8 = (TVector2<float>_u_0)0x4000000040000000;
    local_1588._0_8_ = pvVar2;
    local_1588._8_8_ = pTVar3;
    pFVar8 = (FString *)
             (**(code **)(*(longlong *)**(undefined8 **)this + 0xf0))
                       ((longlong *)**(undefined8 **)this,&local_1578,"Common/ColorPicker_Separator"
                        ,L".png");
    pFVar13 = FSlateImageBrush::FSlateImageBrush
                        (pFVar12,pFVar8,(FDeprecateVector2DParameter *)&local_res8._s_0,
                         (FLinearColor *)&local_1588._s_0,NoTile,FullColor);
  }
  pFVar9 = ::FName::FName(&local_res10,"ColorPicker.Separator");
  FSlateStyleSet::Set<FSlateImageBrush>(pFVar1,*pFVar9,pFVar13);
  if ((pFVar12 != (FSlateImageBrush *)0x0) && (local_1578 != (void *)0x0)) {
    FMemory::Free(local_1578);
  }
  cVar15 = '\0';
  pFVar1 = (FSlateStyleSet *)**(undefined8 **)this;
  pFVar12 = ::operator_new(0xb0);
  pFVar13 = pFVar14;
  if (pFVar12 != (FSlateImageBrush *)0x0) {
    local_res8 = (TVector2<float>_u_0)0x4100000041000000;
    cVar15 = -0x80;
    local_1588._0_8_ = pvVar2;
    local_1588._8_8_ = pTVar3;
    pFVar8 = (FString *)
             (**(code **)(*(longlong *)**(undefined8 **)this + 0xf0))
                       ((longlong *)**(undefined8 **)this,&local_1578,"Common/Circle",L".png");
    pFVar13 = FSlateImageBrush::FSlateImageBrush
                        (pFVar12,pFVar8,(FDeprecateVector2DParameter *)&local_res8._s_0,
                         (FLinearColor *)&local_1588._s_0,NoTile,FullColor);
  }
  pFVar9 = ::FName::FName(&local_res10,"ColorPicker.Selector");
  FSlateStyleSet::Set<FSlateImageBrush>(pFVar1,*pFVar9,pFVar13);
  if ((cVar15 < '\0') && (local_1578 != (void *)0x0)) {
    FMemory::Free(local_1578);
  }
  pFVar1 = (FSlateStyleSet *)**(undefined8 **)this;
  FSlateWidgetStyle::FSlateWidgetStyle((FSlateWidgetStyle *)local_1238);
  local_1238._0_8_ = &___7FSliderStyle__6B_;
  FSlateBrush::FSlateBrush((FSlateBrush *)(local_1238 + 0x10));
  FSlateBrush::FSlateBrush(&local_1178);
  FSlateBrush::FSlateBrush(&local_10c8);
  FSlateBrush::FSlateBrush(&local_1018);
  FSlateBrush::FSlateBrush(&local_f68);
  FSlateBrush::FSlateBrush(&local_eb8);
  local_e08 = 2.0;
  local_res8 = (TVector2<float>_u_0)0x4200000041000000;
  local_1588._0_8_ = pvVar2;
  local_1588._8_8_ = pTVar3;
  pFVar8 = (FString *)
           (**(code **)(*(longlong *)**(undefined8 **)this + 0xf0))
                     ((longlong *)**(undefined8 **)this,local_1528,"Common/ColorPicker_SliderHandle"
                      ,L".png");
  pFVar7 = (FSlateBrush *)
           FSlateImageBrush::FSlateImageBrush
                     ((FSlateImageBrush *)local_1448,pFVar8,
                      (FDeprecateVector2DParameter *)&local_res8._s_0,
                      (FLinearColor *)&local_1588._s_0,NoTile,FullColor);
  FSlateBrush::operator=(&local_eb8,pFVar7);
  local_res8 = (TVector2<float>_u_0)0x4200000041000000;
  local_1588._0_8_ = pvVar2;
  local_1588._8_8_ = pTVar3;
  pFVar8 = (FString *)
           (**(code **)(*(longlong *)**(undefined8 **)this + 0xf0))
                     ((longlong *)**(undefined8 **)this,local_1538,"Common/ColorPicker_SliderHandle"
                      ,L".png");
  pFVar7 = (FSlateBrush *)
           FSlateImageBrush::FSlateImageBrush
                     ((FSlateImageBrush *)local_1398,pFVar8,
                      (FDeprecateVector2DParameter *)&local_res8._s_0,
                      (FLinearColor *)&local_1588._s_0,NoTile,FullColor);
  FSlateBrush::operator=(&local_1018,pFVar7);
  local_res8 = (TVector2<float>_u_0)0x4200000041000000;
  local_1588._0_8_ = pvVar2;
  local_1588._8_8_ = pTVar3;
  pFVar8 = (FString *)
           (**(code **)(*(longlong *)**(undefined8 **)this + 0xf0))
                     ((longlong *)**(undefined8 **)this,&local_1578,
                      "Common/ColorPicker_SliderHandle",L".png");
  pFVar7 = (FSlateBrush *)
           FSlateImageBrush::FSlateImageBrush
                     ((FSlateImageBrush *)local_12e8,pFVar8,
                      (FDeprecateVector2DParameter *)&local_res8._s_0,
                      (FLinearColor *)&local_1588._s_0,NoTile,FullColor);
  FSlateBrush::operator=(&local_f68,pFVar7);
  pFVar9 = ::FName::FName(&local_res10,"ColorPicker.Slider");
  FSlateStyleSet::Set<FSliderStyle>(pFVar1,*pFVar9,(FSliderStyle *)local_1238);
  local_12e8[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_1248);
  if (local_1578 != (void *)0x0) {
    FMemory::Free(local_1578);
  }
  local_1398[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_12f8);
  if (local_1538[0] != (void *)0x0) {
    FMemory::Free(local_1538[0]);
  }
  local_1448[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_13a8);
  if (local_1528[0] != (void *)0x0) {
    FMemory::Free(local_1528[0]);
  }
  local_1238._0_8_ = &___7FSliderStyle__6B_;
  local_eb8._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_eb8.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  local_f68._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_f68.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  local_1018._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1018.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  local_10c8._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_10c8.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  local_1178._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1178.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  local_1238._16_8_ = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1188.ReferenceController);
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)local_1238);
  pFVar1 = (FSlateStyleSet *)**(undefined8 **)this;
  pFVar12 = ::operator_new(0xb0);
  pFVar13 = pFVar14;
  if (pFVar12 != (FSlateImageBrush *)0x0) {
    local_res8 = (TVector2<float>_u_0)0x4380000043800000;
    local_1588._0_8_ = pvVar2;
    local_1588._8_8_ = pTVar3;
    pFVar8 = (FString *)
             (**(code **)(*(longlong *)**(undefined8 **)this + 0xf0))
                       ((longlong *)**(undefined8 **)this,&local_1578,"Common/ColorSpectrum",L".png"
                       );
    pFVar13 = FSlateImageBrush::FSlateImageBrush
                        (pFVar12,pFVar8,(FDeprecateVector2DParameter *)&local_res8._s_0,
                         (FLinearColor *)&local_1588._s_0,NoTile,FullColor);
  }
  pFVar9 = ::FName::FName(&local_res10,"ColorSpectrum.Spectrum");
  FSlateStyleSet::Set<FSlateImageBrush>(pFVar1,*pFVar9,pFVar13);
  if ((pFVar12 != (FSlateImageBrush *)0x0) && (local_1578 != (void *)0x0)) {
    FMemory::Free(local_1578);
  }
  pFVar1 = (FSlateStyleSet *)**(undefined8 **)this;
  pFVar12 = ::operator_new(0xb0);
  pFVar13 = pFVar14;
  if (pFVar12 != (FSlateImageBrush *)0x0) {
    local_res8 = (TVector2<float>_u_0)0x4100000041000000;
    local_1588._0_8_ = pvVar2;
    local_1588._8_8_ = pTVar3;
    pFVar8 = (FString *)
             (**(code **)(*(longlong *)**(undefined8 **)this + 0xf0))
                       ((longlong *)**(undefined8 **)this,&local_1578,"Common/Circle",L".png");
    pFVar13 = FSlateImageBrush::FSlateImageBrush
                        (pFVar12,pFVar8,(FDeprecateVector2DParameter *)&local_res8._s_0,
                         (FLinearColor *)&local_1588._s_0,NoTile,FullColor);
  }
  pFVar9 = ::FName::FName(&local_res10,"ColorSpectrum.Selector");
  FSlateStyleSet::Set<FSlateImageBrush>(pFVar1,*pFVar9,pFVar13);
  if ((pFVar12 != (FSlateImageBrush *)0x0) && (local_1578 != (void *)0x0)) {
    FMemory::Free(local_1578);
  }
  pFVar1 = (FSlateStyleSet *)**(undefined8 **)this;
  pFVar12 = ::operator_new(0xb0);
  pFVar13 = pFVar14;
  if (pFVar12 != (FSlateImageBrush *)0x0) {
    local_res8._s_0 = (TVector2<float>_u_0_s_0)CoreStyleConstants::Icon16x16;
    local_1588._0_8_ = pvVar2;
    local_1588._8_8_ = pTVar3;
    pFVar8 = (FString *)
             (**(code **)(*(longlong *)**(undefined8 **)this + 0xf0))
                       ((longlong *)**(undefined8 **)this,&local_1578,"Common/X",L".png");
    pFVar13 = FSlateImageBrush::FSlateImageBrush
                        (pFVar12,pFVar8,(FDeprecateVector2DParameter *)&local_res8._s_0,
                         (FLinearColor *)&local_1588._s_0,NoTile,FullColor);
  }
  pFVar9 = ::FName::FName(&local_res10,"ColorThemes.DeleteButton");
  FSlateStyleSet::Set<FSlateImageBrush>(pFVar1,*pFVar9,pFVar13);
  if ((pFVar12 != (FSlateImageBrush *)0x0) && (local_1578 != (void *)0x0)) {
    FMemory::Free(local_1578);
  }
  pFVar1 = (FSlateStyleSet *)**(undefined8 **)this;
  pFVar12 = ::operator_new(0xb0);
  pFVar13 = pFVar14;
  if (pFVar12 != (FSlateImageBrush *)0x0) {
    local_res8 = (TVector2<float>_u_0)0x4340000043400000;
    local_1588._0_8_ = pvVar2;
    local_1588._8_8_ = pTVar3;
    pFVar8 = (FString *)
             (**(code **)(*(longlong *)**(undefined8 **)this + 0xf0))
                       ((longlong *)**(undefined8 **)this,&local_1578,"Common/ColorWheel",L".png");
    pFVar13 = FSlateImageBrush::FSlateImageBrush
                        (pFVar12,pFVar8,(FDeprecateVector2DParameter *)&local_res8._s_0,
                         (FLinearColor *)&local_1588._s_0,NoTile,FullColor);
  }
  pFVar9 = ::FName::FName(&local_res10,"ColorWheel.HueValueCircle");
  FSlateStyleSet::Set<FSlateImageBrush>(pFVar1,*pFVar9,pFVar13);
  if ((pFVar12 != (FSlateImageBrush *)0x0) && (local_1578 != (void *)0x0)) {
    FMemory::Free(local_1578);
  }
  pFVar1 = (FSlateStyleSet *)**(undefined8 **)this;
  pFVar12 = ::operator_new(0xb0);
  pFVar13 = pFVar14;
  if (pFVar12 != (FSlateImageBrush *)0x0) {
    local_res8 = (TVector2<float>_u_0)0x4100000041000000;
    local_1588._0_8_ = pvVar2;
    local_1588._8_8_ = pTVar3;
    pFVar8 = (FString *)
             (**(code **)(*(longlong *)**(undefined8 **)this + 0xf0))
                       ((longlong *)**(undefined8 **)this,&local_1578,"Common/Circle",L".png");
    pFVar13 = FSlateImageBrush::FSlateImageBrush
                        (pFVar12,pFVar8,(FDeprecateVector2DParameter *)&local_res8._s_0,
                         (FLinearColor *)&local_1588._s_0,NoTile,FullColor);
  }
  pFVar9 = ::FName::FName(&local_res10,"ColorWheel.Selector");
  FSlateStyleSet::Set<FSlateImageBrush>(pFVar1,*pFVar9,pFVar13);
  if ((pFVar12 != (FSlateImageBrush *)0x0) && (local_1578 != (void *)0x0)) {
    FMemory::Free(local_1578);
  }
  pFVar1 = (FSlateStyleSet *)**(undefined8 **)this;
  pFVar12 = ::operator_new(0xb0);
  pFVar13 = pFVar14;
  if (pFVar12 != (FSlateImageBrush *)0x0) {
    local_res8 = (TVector2<float>_u_0)0x4340000043400000;
    local_1588._0_8_ = pvVar2;
    local_1588._8_8_ = pTVar3;
    pFVar8 = (FString *)
             (**(code **)(*(longlong *)**(undefined8 **)this + 0xf0))
                       ((longlong *)**(undefined8 **)this,&local_1578,"Common/ColorGradingWheel",
                        L".png");
    pFVar13 = FSlateImageBrush::FSlateImageBrush
                        (pFVar12,pFVar8,(FDeprecateVector2DParameter *)&local_res8._s_0,
                         (FLinearColor *)&local_1588._s_0,NoTile,FullColor);
  }
  pFVar9 = ::FName::FName(&local_res10,"ColorGradingWheel.HueValueCircle");
  FSlateStyleSet::Set<FSlateImageBrush>(pFVar1,*pFVar9,pFVar13);
  if ((pFVar12 != (FSlateImageBrush *)0x0) && (local_1578 != (void *)0x0)) {
    FMemory::Free(local_1578);
  }
  pFVar1 = (FSlateStyleSet *)**(undefined8 **)this;
  pFVar13 = ::operator_new(0xb0);
  if (pFVar13 != (FSlateImageBrush *)0x0) {
    local_res8 = (TVector2<float>_u_0)0x4100000041000000;
    local_1588._0_8_ = pvVar2;
    local_1588._8_8_ = pTVar3;
    pFVar8 = (FString *)
             (**(code **)(*(longlong *)**(undefined8 **)this + 0xf0))
                       ((longlong *)**(undefined8 **)this,&local_1578,"Common/Circle",L".png");
    pFVar14 = FSlateImageBrush::FSlateImageBrush
                        (pFVar13,pFVar8,(FDeprecateVector2DParameter *)&local_res8._s_0,
                         (FLinearColor *)&local_1588._s_0,NoTile,FullColor);
  }
  pFVar9 = ::FName::FName(&local_res10,"ColorGradingWheel.Selector");
  FSlateStyleSet::Set<FSlateImageBrush>(pFVar1,*pFVar9,pFVar14);
  if ((pFVar13 != (FSlateImageBrush *)0x0) && (local_1578 != (void *)0x0)) {
    FMemory::Free(local_1578);
  }
  return;
}

// operator() @ 142559990

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall `FUMGCoreStyle::Create'::__l2::<lambda_6>::operator()(void *this)

{
  FSlateStyleSet *pFVar1;
  longlong lVar2;
  void *pvVar3;
  undefined8 uVar4;
  void *pvVar5;
  undefined8 uVar6;
  EStyleColor EVar7;
  undefined2 uVar8;
  FSlateBrush *pFVar9;
  FString *pFVar10;
  FName *pFVar11;
  FSlateImageBrush *pFVar12;
  FSlateImageBrush *pFVar13;
  FSlateImageBrush *pFVar14;
  FHeaderRowStyle *pFVar15;
  FTableRowStyle *pFVar16;
  TVector2<float>_u_0 local_res8;
  FName local_res10;
  FLinearColor_u_0 local_2188;
  void *local_2178 [2];
  FLinearColor_u_0 local_2168;
  undefined1 local_2158;
  void *local_2150 [2];
  void *local_2140 [2];
  void *local_2130 [2];
  void *local_2120 [2];
  void *local_2110 [2];
  void *local_2100 [2];
  void *local_20f0 [2];
  void *local_20e0 [2];
  void *local_20d0 [3];
  undefined1 local_20b8 [176];
  FSharedReferencer<1> local_2008;
  FSlateBrush local_1ff8;
  void *local_1f48 [2];
  undefined **local_1f38 [20];
  TReferenceControllerBase<1> *local_1e98;
  undefined **local_1e88 [20];
  TReferenceControllerBase<1> *local_1de8;
  undefined **local_1dd8 [20];
  TReferenceControllerBase<1> *local_1d38;
  undefined1 local_1d28 [16];
  undefined1 local_1d18 [160];
  FSharedReferencer<1> local_1c78;
  FSlateBrush local_1c68;
  undefined **local_1bb8 [20];
  TReferenceControllerBase<1> *local_1b18;
  undefined **local_1b08 [20];
  TReferenceControllerBase<1> *local_1a68;
  undefined **local_1a58 [20];
  TReferenceControllerBase<1> *local_19b8;
  undefined **local_19a8 [20];
  TReferenceControllerBase<1> *local_1908;
  undefined **local_18f8 [20];
  TReferenceControllerBase<1> *local_1858;
  undefined **local_1848 [20];
  TReferenceControllerBase<1> *local_17a8;
  undefined1 local_1798 [192];
  FSlateBrush local_16d8;
  FSlateBrush local_1628;
  FSlateBrush local_1578;
  FSlateBrush local_14c8;
  FSlateBrush local_1418;
  FSlateBrush local_1368;
  FSlateBrush local_12b8;
  FSlateBrush local_1208;
  undefined **local_1158 [20];
  TReferenceControllerBase<1> *local_10b8;
  undefined **local_10a8 [20];
  TReferenceControllerBase<1> *local_1008;
  FHeaderRowStyle local_ff8;
  
  pFVar14 = (FSlateImageBrush *)0x0;
  local_res8._s_0 = local_res8._s_0 & 0xffffffff00000000;
  pFVar1 = (FSlateStyleSet *)**(undefined8 **)this;
  FSlateWidgetStyle::FSlateWidgetStyle((FSlateWidgetStyle *)local_20b8);
  local_20b8._0_8_ = &___7FSplitterStyle__6B_;
  FSlateBrush::FSlateBrush((FSlateBrush *)(local_20b8 + 0x10));
  FSlateBrush::FSlateBrush(&local_1ff8);
  local_res8 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  pFVar9 = (FSlateBrush *)
           FSlateNoResource::FSlateNoResource
                     ((FSlateNoResource *)local_1dd8,(FDeprecateVector2DParameter *)&local_res8._s_0
                     );
  FSlateBrush::operator=((FSlateBrush *)(local_20b8 + 0x10),pFVar9);
  local_res8._s_0 = (TVector2<float>_u_0_s_0)CoreStyleConstants::Icon8x8;
  pFVar10 = (FString *)
            (**(code **)(*(longlong *)**(undefined8 **)this + 0xf0))
                      ((longlong *)**(undefined8 **)this,&local_2168,
                       "Common/SplitterHandleHighlight",L".png");
  pFVar9 = (FSlateBrush *)
           FSlateImageBrush::FSlateImageBrush
                     ((FSlateImageBrush *)local_1e88,pFVar10,
                      (FDeprecateVector2DParameter *)&local_res8._s_0,&FLinearColor::White,NoTile,
                      FullColor);
  FSlateBrush::operator=(&local_1ff8,pFVar9);
  pFVar11 = ::FName::FName(&local_res10,"Splitter");
  FSlateStyleSet::Set<FSplitterStyle>(pFVar1,*pFVar11,(FSplitterStyle *)local_20b8);
  local_1e88[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_1de8);
  if ((void *)local_2168._0_8_ != (void *)0x0) {
    FMemory::Free((void *)local_2168._0_8_);
  }
  local_1dd8[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_1d38);
  local_20b8._0_8_ = &___7FSplitterStyle__6B_;
  local_1ff8._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1ff8.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  local_20b8._16_8_ = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2008.ReferenceController);
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)local_20b8);
  lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if ((*(int *)(lVar2 + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    FSlateWidgetStyle::FSlateWidgetStyle((FSlateWidgetStyle *)local_20b8);
    local_res8 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
    local_20b8._0_8_ = &___7FTableViewStyle__6B_;
    pFVar9 = (FSlateBrush *)
             FSlateNoResource::FSlateNoResource
                       ((FSlateNoResource *)local_1dd8,
                        (FDeprecateVector2DParameter *)&local_res8._s_0);
    FSlateBrush::FSlateBrush((FSlateBrush *)(local_20b8 + 0x10),pFVar9);
    local_1dd8[0] = &___7FSlateBrush__6B_;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_1d38);
    local_res8 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
    pFVar9 = (FSlateBrush *)
             FSlateNoResource::FSlateNoResource
                       ((FSlateNoResource *)local_1e88,
                        (FDeprecateVector2DParameter *)&local_res8._s_0);
    FSlateBrush::operator=((FSlateBrush *)(local_20b8 + 0x10),pFVar9);
    DefaultTreeViewStyle._padding_ = (longlong)&___7FTableViewStyle__6B_;
    FSlateBrush::FSlateBrush
              (&DefaultTreeViewStyle.BackgroundBrush,(FSlateBrush *)(local_20b8 + 0x10));
    local_1e88[0] = &___7FSlateBrush__6B_;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_1de8);
    local_20b8._0_8_ = &___7FTableViewStyle__6B_;
    local_20b8._16_8_ = &___7FSlateBrush__6B_;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_2008.ReferenceController);
    FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)local_20b8);
    atexit(``FUMGCoreStyle::Create'::__l2::<lambda_6>::operator()'::__l4::
           _dynamic_atexit_destructor_for__DefaultTreeViewStyle__);
    _Init_thread_footer(&::_TSS0);
  }
  pFVar1 = (FSlateStyleSet *)**(undefined8 **)this;
  pFVar11 = ::FName::FName((FName *)&local_res8._s_0,"ListView");
  FSlateStyleSet::Set<FTableViewStyle>(pFVar1,*pFVar11,&DefaultTreeViewStyle);
  if ((*(int *)(lVar2 + 0x9d4c) < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
    FSlateWidgetStyle::FSlateWidgetStyle((FSlateWidgetStyle *)local_20b8);
    local_res8 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
    local_20b8._0_8_ = &___7FTableViewStyle__6B_;
    pFVar9 = (FSlateBrush *)
             FSlateNoResource::FSlateNoResource
                       ((FSlateNoResource *)local_1dd8,
                        (FDeprecateVector2DParameter *)&local_res8._s_0);
    FSlateBrush::FSlateBrush((FSlateBrush *)(local_20b8 + 0x10),pFVar9);
    local_1dd8[0] = &___7FSlateBrush__6B_;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_1d38);
    local_res8 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
    pFVar9 = (FSlateBrush *)
             FSlateNoResource::FSlateNoResource
                       ((FSlateNoResource *)local_1e88,
                        (FDeprecateVector2DParameter *)&local_res8._s_0);
    FSlateBrush::operator=((FSlateBrush *)(local_20b8 + 0x10),pFVar9);
    DefaultTableViewStyle._padding_ = (longlong)&___7FTableViewStyle__6B_;
    FSlateBrush::FSlateBrush
              (&DefaultTableViewStyle.BackgroundBrush,(FSlateBrush *)(local_20b8 + 0x10));
    local_1e88[0] = &___7FSlateBrush__6B_;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_1de8);
    local_20b8._0_8_ = &___7FTableViewStyle__6B_;
    local_20b8._16_8_ = &___7FSlateBrush__6B_;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_2008.ReferenceController);
    FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)local_20b8);
    atexit(``FUMGCoreStyle::Create'::__l2::<lambda_6>::operator()'::__l4::
           _dynamic_atexit_destructor_for__DefaultTableViewStyle__);
    _Init_thread_footer(&::_TSS1);
  }
  pFVar1 = (FSlateStyleSet *)**(undefined8 **)this;
  pFVar11 = ::FName::FName((FName *)&local_res8._s_0,"TreeView");
  FSlateStyleSet::Set<FTableViewStyle>(pFVar1,*pFVar11,&DefaultTableViewStyle);
  if ((*(int *)(lVar2 + 0x9d4c) < ::_TSS2) && (_Init_thread_header(&::_TSS2), ::_TSS2 == -1)) {
    pFVar16 = FTableRowStyle::FTableRowStyle((FTableRowStyle *)&local_ff8);
    local_res8 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
    pFVar9 = (FSlateBrush *)
             FSlateNoResource::FSlateNoResource
                       ((FSlateNoResource *)local_20b8,
                        (FDeprecateVector2DParameter *)&local_res8._s_0);
    FSlateBrush::operator=(&pFVar16->EvenRowBackgroundBrush,pFVar9);
    local_res8._s_0 = (TVector2<float>_u_0_s_0)CoreStyleConstants::Icon8x8;
    local_2168._0_8_ = ___xmm_3dcccccd3f8000003f8000003f800000;
    local_2168._8_8_ = _UNK_1509250f8;
    pFVar10 = (FString *)
              (**(code **)(*(longlong *)**(undefined8 **)this + 0xf0))
                        ((longlong *)**(undefined8 **)this,&local_2188,"Common/Selection",L".png");
    pFVar9 = (FSlateBrush *)
             FSlateImageBrush::FSlateImageBrush
                       ((FSlateImageBrush *)local_1f38,pFVar10,
                        (FDeprecateVector2DParameter *)&local_res8._s_0,
                        (FLinearColor *)&local_2168._s_0,NoTile,FullColor);
    FSlateBrush::operator=(&pFVar16->EvenRowBackgroundHoveredBrush,pFVar9);
    local_res8 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
    pFVar9 = (FSlateBrush *)
             FSlateNoResource::FSlateNoResource
                       ((FSlateNoResource *)local_1d28,
                        (FDeprecateVector2DParameter *)&local_res8._s_0);
    FSlateBrush::operator=(&pFVar16->OddRowBackgroundBrush,pFVar9);
    local_res8._s_0 = (TVector2<float>_u_0_s_0)CoreStyleConstants::Icon8x8;
    local_2168._0_8_ = ___xmm_3dcccccd3f8000003f8000003f800000;
    local_2168._8_8_ = _UNK_1509250f8;
    pFVar10 = (FString *)
              (**(code **)(*(longlong *)**(undefined8 **)this + 0xf0))
                        ((longlong *)**(undefined8 **)this,local_2178,"Common/Selection",L".png");
    pFVar9 = (FSlateBrush *)
             FSlateImageBrush::FSlateImageBrush
                       ((FSlateImageBrush *)local_1848,pFVar10,
                        (FDeprecateVector2DParameter *)&local_res8._s_0,
                        (FLinearColor *)&local_2168._s_0,NoTile,FullColor);
    FSlateBrush::operator=(&pFVar16->OddRowBackgroundHoveredBrush,pFVar9);
    local_2168._0_8_ = ___xmm_3e8000003e8000003e8000003e800000;
    local_2168._8_8_ = _UNK_15076b0c8;
    pFVar10 = (FString *)
              (**(code **)(*(longlong *)**(undefined8 **)this + 0xf0))
                        ((longlong *)**(undefined8 **)this,local_2150,"Common/Selector",L".png");
    pFVar9 = (FSlateBrush *)
             FSlateBorderBrush::FSlateBorderBrush
                       ((FSlateBorderBrush *)local_18f8,pFVar10,(FMargin *)&local_2168._s_0,
                        &SelectorColor,FullColor);
    FSlateBrush::operator=(&pFVar16->SelectorFocusedBrush,pFVar9);
    local_res8._s_0 = (TVector2<float>_u_0_s_0)CoreStyleConstants::Icon8x8;
    pFVar10 = (FString *)
              (**(code **)(*(longlong *)**(undefined8 **)this + 0xf0))
                        ((longlong *)**(undefined8 **)this,local_20e0,"Common/Selection",L".png");
    pFVar9 = (FSlateBrush *)
             FSlateImageBrush::FSlateImageBrush
                       ((FSlateImageBrush *)local_19a8,pFVar10,
                        (FDeprecateVector2DParameter *)&local_res8._s_0,&SelectionColor,NoTile,
                        FullColor);
    FSlateBrush::operator=(&pFVar16->ActiveBrush,pFVar9);
    local_res8._s_0 = (TVector2<float>_u_0_s_0)CoreStyleConstants::Icon8x8;
    pFVar10 = (FString *)
              (**(code **)(*(longlong *)**(undefined8 **)this + 0xf0))
                        ((longlong *)**(undefined8 **)this,local_20f0,"Common/Selection",L".png");
    pFVar9 = (FSlateBrush *)
             FSlateImageBrush::FSlateImageBrush
                       ((FSlateImageBrush *)local_1a58,pFVar10,
                        (FDeprecateVector2DParameter *)&local_res8._s_0,&SelectionColor,NoTile,
                        FullColor);
    FSlateBrush::operator=(&pFVar16->ActiveHoveredBrush,pFVar9);
    local_res8._s_0 = (TVector2<float>_u_0_s_0)CoreStyleConstants::Icon8x8;
    pFVar10 = (FString *)
              (**(code **)(*(longlong *)**(undefined8 **)this + 0xf0))
                        ((longlong *)**(undefined8 **)this,local_2100,"Common/Selection",L".png");
    pFVar9 = (FSlateBrush *)
             FSlateImageBrush::FSlateImageBrush
                       ((FSlateImageBrush *)local_1b08,pFVar10,
                        (FDeprecateVector2DParameter *)&local_res8._s_0,&SelectionColor_Inactive,
                        NoTile,FullColor);
    FSlateBrush::operator=(&pFVar16->InactiveBrush,pFVar9);
    local_res8._s_0 = (TVector2<float>_u_0_s_0)CoreStyleConstants::Icon8x8;
    pFVar10 = (FString *)
              (**(code **)(*(longlong *)**(undefined8 **)this + 0xf0))
                        ((longlong *)**(undefined8 **)this,local_2110,"Common/Selection",L".png");
    pFVar9 = (FSlateBrush *)
             FSlateImageBrush::FSlateImageBrush
                       ((FSlateImageBrush *)local_1bb8,pFVar10,
                        (FDeprecateVector2DParameter *)&local_res8._s_0,&SelectionColor_Inactive,
                        NoTile,FullColor);
    FSlateBrush::operator=(&pFVar16->InactiveHoveredBrush,pFVar9);
    local_res8._s_0 = (TVector2<float>_u_0_s_0)CoreStyleConstants::Icon8x8;
    pFVar10 = (FString *)
              (**(code **)(*(longlong *)**(undefined8 **)this + 0xf0))
                        ((longlong *)**(undefined8 **)this,local_2120,"Common/Selection",L".png");
    pFVar9 = (FSlateBrush *)
             FSlateImageBrush::FSlateImageBrush
                       ((FSlateImageBrush *)local_1798,pFVar10,
                        (FDeprecateVector2DParameter *)&local_res8._s_0,&HighlightColor,NoTile,
                        FullColor);
    FSlateBrush::operator=(&pFVar16->ActiveHighlightedBrush,pFVar9);
    local_res8._s_0 = (TVector2<float>_u_0_s_0)CoreStyleConstants::Icon8x8;
    local_2168._0_8_ = ___xmm_3f8000003dcccccd3dcccccd3dcccccd;
    local_2168._8_8_ = _UNK_1509252c8;
    local_2158 = 0;
    pFVar10 = (FString *)
              (**(code **)(*(longlong *)**(undefined8 **)this + 0xf0))
                        ((longlong *)**(undefined8 **)this,local_2130,"Common/Selection",L".png");
    pFVar9 = (FSlateBrush *)
             FSlateImageBrush::FSlateImageBrush
                       ((FSlateImageBrush *)local_10a8,pFVar10,
                        (FDeprecateVector2DParameter *)&local_res8._s_0,
                        (FSlateColor *)&local_2168._s_0,NoTile,FullColor);
    FSlateBrush::operator=(&pFVar16->InactiveHighlightedBrush,pFVar9);
    (pFVar16->TextColor).SpecifiedColor.field0_0x0._s_0 =
         (FLinearColor_u_0_s_0)DefaultForeground.SpecifiedColor.field0_0x0;
    EVar7 = DefaultForeground.ColorTableId;
    uVar8 = DefaultForeground._18_2_;
    (pFVar16->TextColor).ColorUseRule = DefaultForeground.ColorUseRule;
    (pFVar16->TextColor).ColorTableId = EVar7;
    *(undefined2 *)&(pFVar16->TextColor).field_0x12 = uVar8;
    (pFVar16->SelectedTextColor).SpecifiedColor.field0_0x0._s_0 =
         (FLinearColor_u_0_s_0)InvertedForeground.SpecifiedColor.field0_0x0;
    local_2168._8_8_ = _UNK_150924ff8;
    local_2168._0_8_ = ___xmm_00000000000000003f2000003f200000;
    EVar7 = InvertedForeground.ColorTableId;
    uVar8 = InvertedForeground._18_2_;
    (pFVar16->SelectedTextColor).ColorUseRule = InvertedForeground.ColorUseRule;
    (pFVar16->SelectedTextColor).ColorTableId = EVar7;
    *(undefined2 *)&(pFVar16->SelectedTextColor).field_0x12 = uVar8;
    pFVar10 = (FString *)
              (**(code **)(*(longlong *)**(undefined8 **)this + 0xf0))
                        ((longlong *)**(undefined8 **)this,local_2140,
                         "Common/DropZoneIndicator_Above",L".png");
    pFVar9 = (FSlateBrush *)
             FSlateBoxBrush::FSlateBoxBrush
                       ((FSlateBoxBrush *)local_1158,pFVar10,(FMargin *)&local_2168._s_0,
                        &SelectionColor,FullColor);
    FSlateBrush::operator=(&pFVar16->DropIndicator_Above,pFVar9);
    local_2168._0_8_ = ___xmm_3e8000003e8000003e8000003e800000;
    local_2168._8_8_ = _UNK_15076b0c8;
    pFVar10 = (FString *)
              (**(code **)(*(longlong *)**(undefined8 **)this + 0xf0))
                        ((longlong *)**(undefined8 **)this,local_20d0,
                         "Common/DropZoneIndicator_Onto",L".png");
    pFVar9 = (FSlateBrush *)
             FSlateBoxBrush::FSlateBoxBrush
                       ((FSlateBoxBrush *)local_1e88,pFVar10,(FMargin *)&local_2168._s_0,
                        &SelectionColor,FullColor);
    FSlateBrush::operator=(&pFVar16->DropIndicator_Onto,pFVar9);
    local_2168._0_8_ = ___xmm_3f20000000000000000000003f200000;
    local_2168._8_8_ = _UNK_150925248;
    pFVar10 = (FString *)
              (**(code **)(*(longlong *)**(undefined8 **)this + 0xf0))
                        ((longlong *)**(undefined8 **)this,local_1f48,
                         "Common/DropZoneIndicator_Below",L".png");
    pFVar9 = (FSlateBrush *)
             FSlateBoxBrush::FSlateBoxBrush
                       ((FSlateBoxBrush *)local_1dd8,pFVar10,(FMargin *)&local_2168._s_0,
                        &SelectionColor,FullColor);
    FSlateBrush::operator=(&pFVar16->DropIndicator_Below,pFVar9);
    FTableRowStyle::FTableRowStyle(&DefaultTableRowStyle,pFVar16);
    local_1dd8[0] = &___7FSlateBrush__6B_;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_1d38);
    if (local_1f48[0] != (void *)0x0) {
      FMemory::Free(local_1f48[0]);
    }
    local_1e88[0] = &___7FSlateBrush__6B_;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_1de8);
    if (local_20d0[0] != (void *)0x0) {
      FMemory::Free(local_20d0[0]);
    }
    local_1158[0] = &___7FSlateBrush__6B_;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_10b8);
    if (local_2140[0] != (void *)0x0) {
      FMemory::Free(local_2140[0]);
    }
    local_10a8[0] = &___7FSlateBrush__6B_;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_1008);
    if (local_2130[0] != (void *)0x0) {
      FMemory::Free(local_2130[0]);
    }
    local_1798._0_8_ = &___7FSlateBrush__6B_;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_1798._160_8_);
    if (local_2120[0] != (void *)0x0) {
      FMemory::Free(local_2120[0]);
    }
    local_1bb8[0] = &___7FSlateBrush__6B_;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_1b18);
    if (local_2110[0] != (void *)0x0) {
      FMemory::Free(local_2110[0]);
    }
    local_1b08[0] = &___7FSlateBrush__6B_;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_1a68);
    if (local_2100[0] != (void *)0x0) {
      FMemory::Free(local_2100[0]);
    }
    local_1a58[0] = &___7FSlateBrush__6B_;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_19b8);
    if (local_20f0[0] != (void *)0x0) {
      FMemory::Free(local_20f0[0]);
    }
    local_19a8[0] = &___7FSlateBrush__6B_;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_1908);
    if (local_20e0[0] != (void *)0x0) {
      FMemory::Free(local_20e0[0]);
    }
    local_18f8[0] = &___7FSlateBrush__6B_;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_1858);
    if (local_2150[0] != (void *)0x0) {
      FMemory::Free(local_2150[0]);
    }
    local_1848[0] = &___7FSlateBrush__6B_;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_17a8);
    if (local_2178[0] != (void *)0x0) {
      FMemory::Free(local_2178[0]);
    }
    local_1d28._0_8_ = &___7FSlateBrush__6B_;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_1d18._144_8_);
    local_1f38[0] = &___7FSlateBrush__6B_;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_1e98);
    if ((void *)local_2188._0_8_ != (void *)0x0) {
      FMemory::Free((void *)local_2188._0_8_);
    }
    local_20b8._0_8_ = &___7FSlateBrush__6B_;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_20b8._160_8_);
    FTableRowStyle::~FTableRowStyle((FTableRowStyle *)&local_ff8);
    atexit(``FUMGCoreStyle::Create'::__l2::<lambda_6>::operator()'::__l5::
           _dynamic_atexit_destructor_for__DefaultTableRowStyle__);
    _Init_thread_footer(&::_TSS2);
  }
  pFVar1 = (FSlateStyleSet *)**(undefined8 **)this;
  pFVar11 = ::FName::FName((FName *)&local_res8._s_0,"TableView.Row");
  FSlateStyleSet::Set<FTableRowStyle>(pFVar1,*pFVar11,&DefaultTableRowStyle);
  pFVar1 = (FSlateStyleSet *)**(undefined8 **)this;
  pFVar11 = ::FName::FName((FName *)&local_res8._s_0,"ComboBox.Row");
  FSlateStyleSet::Set<FTableRowStyle>(pFVar1,*pFVar11,&DefaultTableRowStyle);
  if ((*(int *)(lVar2 + 0x9d4c) < ::_TSS3) && (_Init_thread_header(&::_TSS3), ::_TSS3 == -1)) {
    pFVar16 = FTableRowStyle::FTableRowStyle((FTableRowStyle *)&local_ff8,&DefaultTableRowStyle);
    local_res8._s_0 = (TVector2<float>_u_0_s_0)CoreStyleConstants::Icon8x8;
    local_2188._0_8_ = ___xmm_3dcccccd000000000000000000000000;
    local_2188._8_8_ = _UNK_1509250e8;
    pFVar10 = (FString *)
              (**(code **)(*(longlong *)**(undefined8 **)this + 0xf0))
                        ((longlong *)**(undefined8 **)this,local_2150,"Common/Selection",L".png");
    pFVar9 = (FSlateBrush *)
             FSlateImageBrush::FSlateImageBrush
                       ((FSlateImageBrush *)local_1f38,pFVar10,
                        (FDeprecateVector2DParameter *)&local_res8._s_0,
                        (FLinearColor *)&local_2188._s_0,NoTile,FullColor);
    FSlateBrush::operator=(&pFVar16->EvenRowBackgroundBrush,pFVar9);
    local_res8._s_0 = (TVector2<float>_u_0_s_0)CoreStyleConstants::Icon8x8;
    local_2188._0_8_ = ___xmm_3dcccccd000000000000000000000000;
    local_2188._8_8_ = _UNK_1509250e8;
    pFVar10 = (FString *)
              (**(code **)(*(longlong *)**(undefined8 **)this + 0xf0))
                        ((longlong *)**(undefined8 **)this,local_2178,"Common/Selection",L".png");
    pFVar9 = (FSlateBrush *)
             FSlateImageBrush::FSlateImageBrush
                       ((FSlateImageBrush *)local_20b8,pFVar10,
                        (FDeprecateVector2DParameter *)&local_res8._s_0,
                        (FLinearColor *)&local_2188._s_0,NoTile,FullColor);
    FSlateBrush::operator=(&pFVar16->OddRowBackgroundBrush,pFVar9);
    FTableRowStyle::FTableRowStyle(&DarkTableRowStyle,pFVar16);
    local_20b8._0_8_ = &___7FSlateBrush__6B_;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_20b8._160_8_);
    if (local_2178[0] != (void *)0x0) {
      FMemory::Free(local_2178[0]);
    }
    local_1f38[0] = &___7FSlateBrush__6B_;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_1e98);
    if (local_2150[0] != (void *)0x0) {
      FMemory::Free(local_2150[0]);
    }
    FTableRowStyle::~FTableRowStyle((FTableRowStyle *)&local_ff8);
    atexit(``FUMGCoreStyle::Create'::__l2::<lambda_6>::operator()'::__l5::
           _dynamic_atexit_destructor_for__DarkTableRowStyle__);
    _Init_thread_footer(&::_TSS3);
  }
  pFVar1 = (FSlateStyleSet *)**(undefined8 **)this;
  pFVar11 = ::FName::FName((FName *)&local_res8._s_0,"TableView.DarkRow");
  FSlateStyleSet::Set<FTableRowStyle>(pFVar1,*pFVar11,&DarkTableRowStyle);
  pFVar1 = (FSlateStyleSet *)**(undefined8 **)this;
  pFVar12 = ::operator_new(0xb0);
  pFVar13 = pFVar14;
  if (pFVar12 != (FSlateImageBrush *)0x0) {
    local_res8._s_0 = (TVector2<float>_u_0_s_0)CoreStyleConstants::Icon10x10;
    pFVar10 = (FString *)
              (**(code **)(*(longlong *)**(undefined8 **)this + 0xf0))
                        ((longlong *)**(undefined8 **)this,&local_2188,"Common/TreeArrow_Collapsed",
                         L".png");
    pFVar13 = FSlateImageBrush::FSlateImageBrush
                        (pFVar12,pFVar10,(FDeprecateVector2DParameter *)&local_res8._s_0,
                         &DefaultForeground,NoTile,FullColor);
  }
  pFVar11 = ::FName::FName(&local_res10,"TreeArrow_Collapsed");
  FSlateStyleSet::Set<FSlateImageBrush>(pFVar1,*pFVar11,pFVar13);
  if ((pFVar12 != (FSlateImageBrush *)0x0) && ((void *)local_2188._0_8_ != (void *)0x0)) {
    FMemory::Free((void *)local_2188._0_8_);
  }
  pFVar1 = (FSlateStyleSet *)**(undefined8 **)this;
  pFVar12 = ::operator_new(0xb0);
  pFVar13 = pFVar14;
  if (pFVar12 != (FSlateImageBrush *)0x0) {
    local_res8._s_0 = (TVector2<float>_u_0_s_0)CoreStyleConstants::Icon10x10;
    pFVar10 = (FString *)
              (**(code **)(*(longlong *)**(undefined8 **)this + 0xf0))
                        ((longlong *)**(undefined8 **)this,&local_2188,
                         "Common/TreeArrow_Collapsed_Hovered",L".png");
    pFVar13 = FSlateImageBrush::FSlateImageBrush
                        (pFVar12,pFVar10,(FDeprecateVector2DParameter *)&local_res8._s_0,
                         &DefaultForeground,NoTile,FullColor);
  }
  pFVar11 = ::FName::FName(&local_res10,"TreeArrow_Collapsed_Hovered");
  FSlateStyleSet::Set<FSlateImageBrush>(pFVar1,*pFVar11,pFVar13);
  if ((pFVar12 != (FSlateImageBrush *)0x0) && ((void *)local_2188._0_8_ != (void *)0x0)) {
    FMemory::Free((void *)local_2188._0_8_);
  }
  pFVar1 = (FSlateStyleSet *)**(undefined8 **)this;
  pFVar12 = ::operator_new(0xb0);
  pFVar13 = pFVar14;
  if (pFVar12 != (FSlateImageBrush *)0x0) {
    local_res8._s_0 = (TVector2<float>_u_0_s_0)CoreStyleConstants::Icon10x10;
    pFVar10 = (FString *)
              (**(code **)(*(longlong *)**(undefined8 **)this + 0xf0))
                        ((longlong *)**(undefined8 **)this,&local_2188,"Common/TreeArrow_Expanded",
                         L".png");
    pFVar13 = FSlateImageBrush::FSlateImageBrush
                        (pFVar12,pFVar10,(FDeprecateVector2DParameter *)&local_res8._s_0,
                         &DefaultForeground,NoTile,FullColor);
  }
  pFVar11 = ::FName::FName(&local_res10,"TreeArrow_Expanded");
  FSlateStyleSet::Set<FSlateImageBrush>(pFVar1,*pFVar11,pFVar13);
  if ((pFVar12 != (FSlateImageBrush *)0x0) && ((void *)local_2188._0_8_ != (void *)0x0)) {
    FMemory::Free((void *)local_2188._0_8_);
  }
  pFVar1 = (FSlateStyleSet *)**(undefined8 **)this;
  pFVar13 = ::operator_new(0xb0);
  if (pFVar13 != (FSlateImageBrush *)0x0) {
    local_res8._s_0 = (TVector2<float>_u_0_s_0)CoreStyleConstants::Icon10x10;
    pFVar10 = (FString *)
              (**(code **)(*(longlong *)**(undefined8 **)this + 0xf0))
                        ((longlong *)**(undefined8 **)this,&local_2188,
                         "Common/TreeArrow_Expanded_Hovered",L".png");
    pFVar14 = FSlateImageBrush::FSlateImageBrush
                        (pFVar13,pFVar10,(FDeprecateVector2DParameter *)&local_res8._s_0,
                         &DefaultForeground,NoTile,FullColor);
  }
  pFVar11 = ::FName::FName(&local_res10,"TreeArrow_Expanded_Hovered");
  FSlateStyleSet::Set<FSlateImageBrush>(pFVar1,*pFVar11,pFVar14);
  if ((pFVar13 != (FSlateImageBrush *)0x0) && ((void *)local_2188._0_8_ != (void *)0x0)) {
    FMemory::Free((void *)local_2188._0_8_);
  }
  uVar6 = _UNK_150925108;
  pvVar5 = ___xmm_3e0000003e0000003e0000003e000000;
  uVar4 = _UNK_15076b1f8;
  pvVar3 = ___xmm_3f8000003f8000003f8000003f800000;
  if ((*(int *)(lVar2 + 0x9d4c) < ::_TSS4) && (_Init_thread_header(&::_TSS4), ::_TSS4 == -1)) {
    FSlateWidgetStyle::FSlateWidgetStyle((FSlateWidgetStyle *)local_1798);
    local_1798._0_8_ = &___7FTableColumnHeaderStyle__6B_;
    FSlateBrush::FSlateBrush((FSlateBrush *)(local_1798 + 0x10));
    FSlateBrush::FSlateBrush(&local_16d8);
    FSlateBrush::FSlateBrush(&local_1628);
    FSlateBrush::FSlateBrush(&local_1578);
    FSlateBrush::FSlateBrush(&local_14c8);
    FSlateBrush::FSlateBrush(&local_1418);
    FSlateBrush::FSlateBrush(&local_1368);
    FSlateBrush::FSlateBrush(&local_12b8);
    FSlateBrush::FSlateBrush(&local_1208);
    local_res8._s_0 = (TVector2<float>_u_0_s_0)CoreStyleConstants::Icon8x4;
    local_2188._0_8_ = pvVar3;
    local_2188._8_8_ = uVar4;
    pFVar10 = (FString *)
              (**(code **)(*(longlong *)**(undefined8 **)this + 0xf0))
                        ((longlong *)**(undefined8 **)this,local_20d0,"Common/SortUpArrow",L".png");
    pFVar9 = (FSlateBrush *)
             FSlateImageBrush::FSlateImageBrush
                       ((FSlateImageBrush *)local_1bb8,pFVar10,
                        (FDeprecateVector2DParameter *)&local_res8._s_0,
                        (FLinearColor *)&local_2188._s_0,NoTile,FullColor);
    FSlateBrush::operator=((FSlateBrush *)(local_1798 + 0x10),pFVar9);
    local_res8._s_0 = (TVector2<float>_u_0_s_0)CoreStyleConstants::Icon8x4;
    local_2188._0_8_ = pvVar3;
    local_2188._8_8_ = uVar4;
    pFVar10 = (FString *)
              (**(code **)(*(longlong *)**(undefined8 **)this + 0xf0))
                        ((longlong *)**(undefined8 **)this,local_2140,"Common/SortDownArrow",L".png"
                        );
    pFVar9 = (FSlateBrush *)
             FSlateImageBrush::FSlateImageBrush
                       ((FSlateImageBrush *)local_1b08,pFVar10,
                        (FDeprecateVector2DParameter *)&local_res8._s_0,
                        (FLinearColor *)&local_2188._s_0,NoTile,FullColor);
    FSlateBrush::operator=(&local_16d8,pFVar9);
    local_res8._s_0 = (TVector2<float>_u_0_s_0)CoreStyleConstants::Icon16x4;
    local_2188._0_8_ = pvVar3;
    local_2188._8_8_ = uVar4;
    pFVar10 = (FString *)
              (**(code **)(*(longlong *)**(undefined8 **)this + 0xf0))
                        ((longlong *)**(undefined8 **)this,local_2130,"Common/SortUpArrows",L".png")
    ;
    pFVar9 = (FSlateBrush *)
             FSlateImageBrush::FSlateImageBrush
                       ((FSlateImageBrush *)local_1a58,pFVar10,
                        (FDeprecateVector2DParameter *)&local_res8._s_0,
                        (FLinearColor *)&local_2188._s_0,NoTile,FullColor);
    FSlateBrush::operator=(&local_1628,pFVar9);
    local_res8._s_0 = (TVector2<float>_u_0_s_0)CoreStyleConstants::Icon16x4;
    local_2188._0_8_ = pvVar3;
    local_2188._8_8_ = uVar4;
    pFVar10 = (FString *)
              (**(code **)(*(longlong *)**(undefined8 **)this + 0xf0))
                        ((longlong *)**(undefined8 **)this,local_2120,"Common/SortDownArrows",
                         L".png");
    pFVar9 = (FSlateBrush *)
             FSlateImageBrush::FSlateImageBrush
                       ((FSlateImageBrush *)local_19a8,pFVar10,
                        (FDeprecateVector2DParameter *)&local_res8._s_0,
                        (FLinearColor *)&local_2188._s_0,NoTile,FullColor);
    FSlateBrush::operator=(&local_1578,pFVar9);
    local_2188._0_8_ = pvVar3;
    local_2188._8_8_ = uVar4;
    local_2178[0] = pvVar5;
    local_2178[1] = (void *)uVar6;
    pFVar10 = (FString *)
              (**(code **)(*(longlong *)**(undefined8 **)this + 0xf0))
                        ((longlong *)**(undefined8 **)this,local_2110,"Common/ColumnHeader",L".png")
    ;
    pFVar9 = (FSlateBrush *)
             FSlateBoxBrush::FSlateBoxBrush
                       ((FSlateBoxBrush *)local_18f8,pFVar10,(FMargin *)local_2178,
                        (FLinearColor *)&local_2188._s_0,FullColor);
    FSlateBrush::operator=(&local_14c8,pFVar9);
    local_2188._0_8_ = pvVar3;
    local_2188._8_8_ = uVar4;
    local_2178[0] = pvVar5;
    local_2178[1] = (void *)uVar6;
    pFVar10 = (FString *)
              (**(code **)(*(longlong *)**(undefined8 **)this + 0xf0))
                        ((longlong *)**(undefined8 **)this,local_2100,"Common/ColumnHeader_Hovered",
                         L".png");
    pFVar9 = (FSlateBrush *)
             FSlateBoxBrush::FSlateBoxBrush
                       ((FSlateBoxBrush *)local_1848,pFVar10,(FMargin *)local_2178,
                        (FLinearColor *)&local_2188._s_0,FullColor);
    FSlateBrush::operator=(&local_1418,pFVar9);
    local_res8._s_0 = (TVector2<float>_u_0_s_0)CoreStyleConstants::Icon8x8;
    local_2188._0_8_ = pvVar3;
    local_2188._8_8_ = uVar4;
    pFVar10 = (FString *)
              (**(code **)(*(longlong *)**(undefined8 **)this + 0xf0))
                        ((longlong *)**(undefined8 **)this,local_20f0,"Common/ColumnHeader_Arrow",
                         L".png");
    pFVar9 = (FSlateBrush *)
             FSlateImageBrush::FSlateImageBrush
                       ((FSlateImageBrush *)local_1d28,pFVar10,
                        (FDeprecateVector2DParameter *)&local_res8._s_0,
                        (FLinearColor *)&local_2188._s_0,NoTile,FullColor);
    FSlateBrush::operator=(&local_1368,pFVar9);
    local_2188._0_8_ = pvVar3;
    local_2188._8_8_ = uVar4;
    local_2178[0] = pvVar5;
    local_2178[1] = (void *)uVar6;
    pFVar10 = (FString *)
              (**(code **)(*(longlong *)**(undefined8 **)this + 0xf0))
                        ((longlong *)**(undefined8 **)this,local_20e0,
                         "Common/ColumnHeaderMenuButton_Normal",L".png");
    pFVar9 = (FSlateBrush *)
             FSlateBoxBrush::FSlateBoxBrush
                       ((FSlateBoxBrush *)local_1f38,pFVar10,(FMargin *)local_2178,
                        (FLinearColor *)&local_2188._s_0,FullColor);
    FSlateBrush::operator=(&local_12b8,pFVar9);
    local_2188._0_8_ = pvVar3;
    local_2188._8_8_ = uVar4;
    local_2178[0] = pvVar5;
    local_2178[1] = (void *)uVar6;
    pFVar10 = (FString *)
              (**(code **)(*(longlong *)**(undefined8 **)this + 0xf0))
                        ((longlong *)**(undefined8 **)this,local_2150,
                         "Common/ColumnHeaderMenuButton_Hovered",L".png");
    pFVar9 = (FSlateBrush *)
             FSlateBoxBrush::FSlateBoxBrush
                       ((FSlateBoxBrush *)local_20b8,pFVar10,(FMargin *)local_2178,
                        (FLinearColor *)&local_2188._s_0,FullColor);
    FSlateBrush::operator=(&local_1208,pFVar9);
    FTableColumnHeaderStyle::FTableColumnHeaderStyle
              (&TableColumnHeaderStyle,(FTableColumnHeaderStyle *)local_1798);
    local_20b8._0_8_ = &___7FSlateBrush__6B_;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_20b8._160_8_);
    if (local_2150[0] != (void *)0x0) {
      FMemory::Free(local_2150[0]);
    }
    local_1f38[0] = &___7FSlateBrush__6B_;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_1e98);
    if (local_20e0[0] != (void *)0x0) {
      FMemory::Free(local_20e0[0]);
    }
    local_1d28._0_8_ = &___7FSlateBrush__6B_;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_1d18._144_8_);
    if (local_20f0[0] != (void *)0x0) {
      FMemory::Free(local_20f0[0]);
    }
    local_1848[0] = &___7FSlateBrush__6B_;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_17a8);
    if (local_2100[0] != (void *)0x0) {
      FMemory::Free(local_2100[0]);
    }
    local_18f8[0] = &___7FSlateBrush__6B_;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_1858);
    if (local_2110[0] != (void *)0x0) {
      FMemory::Free(local_2110[0]);
    }
    local_19a8[0] = &___7FSlateBrush__6B_;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_1908);
    if (local_2120[0] != (void *)0x0) {
      FMemory::Free(local_2120[0]);
    }
    local_1a58[0] = &___7FSlateBrush__6B_;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_19b8);
    if (local_2130[0] != (void *)0x0) {
      FMemory::Free(local_2130[0]);
    }
    local_1b08[0] = &___7FSlateBrush__6B_;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_1a68);
    if (local_2140[0] != (void *)0x0) {
      FMemory::Free(local_2140[0]);
    }
    local_1bb8[0] = &___7FSlateBrush__6B_;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_1b18);
    if (local_20d0[0] != (void *)0x0) {
      FMemory::Free(local_20d0[0]);
    }
    FTableColumnHeaderStyle::~FTableColumnHeaderStyle((FTableColumnHeaderStyle *)local_1798);
    atexit(``FUMGCoreStyle::Create'::__l2::<lambda_6>::operator()'::__l5::
           _dynamic_atexit_destructor_for__TableColumnHeaderStyle__);
    _Init_thread_footer(&::_TSS4);
  }
  pFVar1 = (FSlateStyleSet *)**(undefined8 **)this;
  pFVar11 = ::FName::FName((FName *)&local_res8._s_0,"TableView.Header.Column");
  FSlateStyleSet::Set<FTableColumnHeaderStyle>(pFVar1,*pFVar11,&TableColumnHeaderStyle);
  if ((*(int *)(lVar2 + 0x9d4c) < ::_TSS5) && (_Init_thread_header(&::_TSS5), ::_TSS5 == -1)) {
    FSlateWidgetStyle::FSlateWidgetStyle((FSlateWidgetStyle *)local_1798);
    local_1798._0_8_ = &___7FTableColumnHeaderStyle__6B_;
    FSlateBrush::FSlateBrush((FSlateBrush *)(local_1798 + 0x10));
    FSlateBrush::FSlateBrush(&local_16d8);
    FSlateBrush::FSlateBrush(&local_1628);
    FSlateBrush::FSlateBrush(&local_1578);
    FSlateBrush::FSlateBrush(&local_14c8);
    FSlateBrush::FSlateBrush(&local_1418);
    FSlateBrush::FSlateBrush(&local_1368);
    FSlateBrush::FSlateBrush(&local_12b8);
    FSlateBrush::FSlateBrush(&local_1208);
    local_res8._s_0 = (TVector2<float>_u_0_s_0)CoreStyleConstants::Icon8x4;
    local_2188._0_8_ = pvVar3;
    local_2188._8_8_ = uVar4;
    pFVar10 = (FString *)
              (**(code **)(*(longlong *)**(undefined8 **)this + 0xf0))
                        ((longlong *)**(undefined8 **)this,local_2140,"Common/SortUpArrow",L".png");
    pFVar9 = (FSlateBrush *)
             FSlateImageBrush::FSlateImageBrush
                       ((FSlateImageBrush *)local_1bb8,pFVar10,
                        (FDeprecateVector2DParameter *)&local_res8._s_0,
                        (FLinearColor *)&local_2188._s_0,NoTile,FullColor);
    FSlateBrush::operator=((FSlateBrush *)(local_1798 + 0x10),pFVar9);
    local_res8._s_0 = (TVector2<float>_u_0_s_0)CoreStyleConstants::Icon8x4;
    local_2188._0_8_ = pvVar3;
    local_2188._8_8_ = uVar4;
    pFVar10 = (FString *)
              (**(code **)(*(longlong *)**(undefined8 **)this + 0xf0))
                        ((longlong *)**(undefined8 **)this,local_2130,"Common/SortDownArrow",L".png"
                        );
    pFVar9 = (FSlateBrush *)
             FSlateImageBrush::FSlateImageBrush
                       ((FSlateImageBrush *)local_1b08,pFVar10,
                        (FDeprecateVector2DParameter *)&local_res8._s_0,
                        (FLinearColor *)&local_2188._s_0,NoTile,FullColor);
    FSlateBrush::operator=(&local_16d8,pFVar9);
    local_res8._s_0 = (TVector2<float>_u_0_s_0)CoreStyleConstants::Icon16x4;
    local_2188._0_8_ = pvVar3;
    local_2188._8_8_ = uVar4;
    pFVar10 = (FString *)
              (**(code **)(*(longlong *)**(undefined8 **)this + 0xf0))
                        ((longlong *)**(undefined8 **)this,local_2120,"Common/SortUpArrows",L".png")
    ;
    pFVar9 = (FSlateBrush *)
             FSlateImageBrush::FSlateImageBrush
                       ((FSlateImageBrush *)local_1a58,pFVar10,
                        (FDeprecateVector2DParameter *)&local_res8._s_0,
                        (FLinearColor *)&local_2188._s_0,NoTile,FullColor);
    FSlateBrush::operator=(&local_1628,pFVar9);
    local_res8._s_0 = (TVector2<float>_u_0_s_0)CoreStyleConstants::Icon16x4;
    local_2188._0_8_ = pvVar3;
    local_2188._8_8_ = uVar4;
    pFVar10 = (FString *)
              (**(code **)(*(longlong *)**(undefined8 **)this + 0xf0))
                        ((longlong *)**(undefined8 **)this,local_2110,"Common/SortDownArrows",
                         L".png");
    pFVar9 = (FSlateBrush *)
             FSlateImageBrush::FSlateImageBrush
                       ((FSlateImageBrush *)local_19a8,pFVar10,
                        (FDeprecateVector2DParameter *)&local_res8._s_0,
                        (FLinearColor *)&local_2188._s_0,NoTile,FullColor);
    FSlateBrush::operator=(&local_1578,pFVar9);
    local_res8 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
    pFVar9 = (FSlateBrush *)
             FSlateNoResource::FSlateNoResource
                       ((FSlateNoResource *)local_18f8,
                        (FDeprecateVector2DParameter *)&local_res8._s_0);
    FSlateBrush::operator=(&local_14c8,pFVar9);
    local_2188._0_8_ = pvVar3;
    local_2188._8_8_ = uVar4;
    local_2178[0] = pvVar5;
    local_2178[1] = (void *)uVar6;
    pFVar10 = (FString *)
              (**(code **)(*(longlong *)**(undefined8 **)this + 0xf0))
                        ((longlong *)**(undefined8 **)this,local_2100,
                         "Common/LastColumnHeader_Hovered",L".png");
    pFVar9 = (FSlateBrush *)
             FSlateBoxBrush::FSlateBoxBrush
                       ((FSlateBoxBrush *)local_1848,pFVar10,(FMargin *)local_2178,
                        (FLinearColor *)&local_2188._s_0,FullColor);
    FSlateBrush::operator=(&local_1418,pFVar9);
    local_res8._s_0 = (TVector2<float>_u_0_s_0)CoreStyleConstants::Icon8x8;
    local_2188._0_8_ = pvVar3;
    local_2188._8_8_ = uVar4;
    pFVar10 = (FString *)
              (**(code **)(*(longlong *)**(undefined8 **)this + 0xf0))
                        ((longlong *)**(undefined8 **)this,local_20f0,"Common/ColumnHeader_Arrow",
                         L".png");
    pFVar9 = (FSlateBrush *)
             FSlateImageBrush::FSlateImageBrush
                       ((FSlateImageBrush *)local_1d28,pFVar10,
                        (FDeprecateVector2DParameter *)&local_res8._s_0,
                        (FLinearColor *)&local_2188._s_0,NoTile,FullColor);
    FSlateBrush::operator=(&local_1368,pFVar9);
    local_2188._0_8_ = pvVar3;
    local_2188._8_8_ = uVar4;
    local_2178[0] = pvVar5;
    local_2178[1] = (void *)uVar6;
    pFVar10 = (FString *)
              (**(code **)(*(longlong *)**(undefined8 **)this + 0xf0))
                        ((longlong *)**(undefined8 **)this,local_20e0,
                         "Common/ColumnHeaderMenuButton_Normal",L".png");
    pFVar9 = (FSlateBrush *)
             FSlateBoxBrush::FSlateBoxBrush
                       ((FSlateBoxBrush *)local_1f38,pFVar10,(FMargin *)local_2178,
                        (FLinearColor *)&local_2188._s_0,FullColor);
    FSlateBrush::operator=(&local_12b8,pFVar9);
    local_2188._0_8_ = pvVar3;
    local_2188._8_8_ = uVar4;
    local_2178[0] = pvVar5;
    local_2178[1] = (void *)uVar6;
    pFVar10 = (FString *)
              (**(code **)(*(longlong *)**(undefined8 **)this + 0xf0))
                        ((longlong *)**(undefined8 **)this,local_2150,
                         "Common/ColumnHeaderMenuButton_Hovered",L".png");
    pFVar9 = (FSlateBrush *)
             FSlateBoxBrush::FSlateBoxBrush
                       ((FSlateBoxBrush *)local_20b8,pFVar10,(FMargin *)local_2178,
                        (FLinearColor *)&local_2188._s_0,FullColor);
    FSlateBrush::operator=(&local_1208,pFVar9);
    FTableColumnHeaderStyle::FTableColumnHeaderStyle
              (&TableLastColumnHeaderStyle,(FTableColumnHeaderStyle *)local_1798);
    local_20b8._0_8_ = &___7FSlateBrush__6B_;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_20b8._160_8_);
    if (local_2150[0] != (void *)0x0) {
      FMemory::Free(local_2150[0]);
    }
    local_1f38[0] = &___7FSlateBrush__6B_;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_1e98);
    if (local_20e0[0] != (void *)0x0) {
      FMemory::Free(local_20e0[0]);
    }
    local_1d28._0_8_ = &___7FSlateBrush__6B_;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_1d18._144_8_);
    if (local_20f0[0] != (void *)0x0) {
      FMemory::Free(local_20f0[0]);
    }
    local_1848[0] = &___7FSlateBrush__6B_;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_17a8);
    if (local_2100[0] != (void *)0x0) {
      FMemory::Free(local_2100[0]);
    }
    local_18f8[0] = &___7FSlateBrush__6B_;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_1858);
    local_19a8[0] = &___7FSlateBrush__6B_;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_1908);
    if (local_2110[0] != (void *)0x0) {
      FMemory::Free(local_2110[0]);
    }
    local_1a58[0] = &___7FSlateBrush__6B_;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_19b8);
    if (local_2120[0] != (void *)0x0) {
      FMemory::Free(local_2120[0]);
    }
    local_1b08[0] = &___7FSlateBrush__6B_;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_1a68);
    if (local_2130[0] != (void *)0x0) {
      FMemory::Free(local_2130[0]);
    }
    local_1bb8[0] = &___7FSlateBrush__6B_;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_1b18);
    if (local_2140[0] != (void *)0x0) {
      FMemory::Free(local_2140[0]);
    }
    FTableColumnHeaderStyle::~FTableColumnHeaderStyle((FTableColumnHeaderStyle *)local_1798);
    atexit(``FUMGCoreStyle::Create'::__l2::<lambda_6>::operator()'::__l5::
           _dynamic_atexit_destructor_for__TableLastColumnHeaderStyle__);
    _Init_thread_footer(&::_TSS5);
  }
  if ((*(int *)(lVar2 + 0x9d4c) < ::_TSS6) && (_Init_thread_header(&::_TSS6), ::_TSS6 == -1)) {
    FSlateWidgetStyle::FSlateWidgetStyle((FSlateWidgetStyle *)local_1d28);
    local_1d28._0_8_ = &___7FSplitterStyle__6B_;
    FSlateBrush::FSlateBrush((FSlateBrush *)local_1d18);
    FSlateBrush::FSlateBrush(&local_1c68);
    local_res8 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
    pFVar9 = (FSlateBrush *)
             FSlateNoResource::FSlateNoResource
                       ((FSlateNoResource *)local_1f38,
                        (FDeprecateVector2DParameter *)&local_res8._s_0);
    FSlateBrush::operator=((FSlateBrush *)local_1d18,pFVar9);
    local_res8._s_0 = (TVector2<float>_u_0_s_0)CoreStyleConstants::Icon8x8;
    local_2188._0_8_ = pvVar3;
    local_2188._8_8_ = uVar4;
    pFVar10 = (FString *)
              (**(code **)(*(longlong *)**(undefined8 **)this + 0xf0))
                        ((longlong *)**(undefined8 **)this,local_2178,"Common/HeaderSplitterGrip",
                         L".png");
    pFVar9 = (FSlateBrush *)
             FSlateImageBrush::FSlateImageBrush
                       ((FSlateImageBrush *)local_20b8,pFVar10,
                        (FDeprecateVector2DParameter *)&local_res8._s_0,
                        (FLinearColor *)&local_2188._s_0,NoTile,FullColor);
    FSlateBrush::operator=(&local_1c68,pFVar9);
    TableHeaderSplitterStyle._padding_ = (longlong)&___7FSplitterStyle__6B_;
    FSlateBrush::FSlateBrush(&TableHeaderSplitterStyle.HandleNormalBrush,(FSlateBrush *)local_1d18);
    FSlateBrush::FSlateBrush(&TableHeaderSplitterStyle.HandleHighlightBrush,&local_1c68);
    local_20b8._0_8_ = &___7FSlateBrush__6B_;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_20b8._160_8_);
    if (local_2178[0] != (void *)0x0) {
      FMemory::Free(local_2178[0]);
    }
    local_1f38[0] = &___7FSlateBrush__6B_;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_1e98);
    local_1d28._0_8_ = &___7FSplitterStyle__6B_;
    local_1c68._padding_ = (longlong)&___7FSlateBrush__6B_;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1c68.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
    local_1d18._0_8_ = &___7FSlateBrush__6B_;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1c78.ReferenceController);
    FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)local_1d28);
    atexit(``FUMGCoreStyle::Create'::__l2::<lambda_6>::operator()'::__l5::
           _dynamic_atexit_destructor_for__TableHeaderSplitterStyle__);
    _Init_thread_footer(&::_TSS6);
  }
  pFVar1 = (FSlateStyleSet *)**(undefined8 **)this;
  pFVar15 = FHeaderRowStyle::FHeaderRowStyle(&local_ff8);
  FTableColumnHeaderStyle::operator=(&pFVar15->ColumnStyle,&TableColumnHeaderStyle);
  FTableColumnHeaderStyle::operator=(&pFVar15->LastColumnStyle,&TableLastColumnHeaderStyle);
  FSlateBrush::operator=
            (&(pFVar15->ColumnSplitterStyle).HandleNormalBrush,
             &TableHeaderSplitterStyle.HandleNormalBrush);
  FSlateBrush::operator=
            (&(pFVar15->ColumnSplitterStyle).HandleHighlightBrush,
             &TableHeaderSplitterStyle.HandleHighlightBrush);
  local_2188._0_8_ = pvVar3;
  local_2188._8_8_ = uVar4;
  local_2178[0] = pvVar5;
  local_2178[1] = (void *)uVar6;
  pFVar10 = (FString *)
            (**(code **)(*(longlong *)**(undefined8 **)this + 0xf0))
                      ((longlong *)**(undefined8 **)this,local_2150,"Common/TableViewHeader",L".png"
                      );
  pFVar9 = (FSlateBrush *)
           FSlateBoxBrush::FSlateBoxBrush
                     ((FSlateBoxBrush *)local_20b8,pFVar10,(FMargin *)local_2178,
                      (FLinearColor *)&local_2188._s_0,FullColor);
  FSlateBrush::operator=(&pFVar15->BackgroundBrush,pFVar9);
  (pFVar15->ForegroundColor).SpecifiedColor.field0_0x0._s_0 =
       (FLinearColor_u_0_s_0)DefaultForeground.SpecifiedColor.field0_0x0;
  EVar7 = DefaultForeground.ColorTableId;
  uVar8 = DefaultForeground._18_2_;
  (pFVar15->ForegroundColor).ColorUseRule = DefaultForeground.ColorUseRule;
  (pFVar15->ForegroundColor).ColorTableId = EVar7;
  *(undefined2 *)&(pFVar15->ForegroundColor).field_0x12 = uVar8;
  pFVar11 = ::FName::FName((FName *)&local_res8._s_0,"TableView.Header");
  FSlateStyleSet::Set<FHeaderRowStyle>(pFVar1,*pFVar11,pFVar15);
  local_20b8._0_8_ = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_20b8._160_8_);
  if (local_2150[0] != (void *)0x0) {
    FMemory::Free(local_2150[0]);
  }
  FHeaderRowStyle::~FHeaderRowStyle(&local_ff8);
  return;
}

// operator() @ 14255b880

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall `FUMGCoreStyle::Create'::__l2::<lambda_7>::operator()(void *this)

{
  FSlateStyleSet *pFVar1;
  longlong lVar2;
  void *pvVar3;
  void *pvVar4;
  undefined1 auVar5 [16];
  void *pvVar6;
  TReferenceControllerBase<1> *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined1 auVar11 [14];
  FSlateBrush *pFVar12;
  FString *pFVar13;
  FName *pFVar14;
  FButtonStyle *pFVar15;
  FSlateBrush *pFVar16;
  FSlateBoxBrush *pFVar17;
  FSlateImageBrush *pFVar18;
  FLegacySlateFontInfoCache *pFVar19;
  FEditableTextBoxStyle *pFVar20;
  FSlateBrush *pFVar21;
  FComboButtonStyle *pFVar22;
  FCheckBoxStyle *pFVar23;
  char cVar24;
  TVector2<float>_u_0 local_res8;
  TVector2<float>_u_0 local_res10;
  FName local_res18;
  FLinearColor_u_0 local_1988;
  FLinearColor_u_0 local_1978;
  undefined1 local_1968 [16];
  undefined1 local_1958 [8];
  float fStack_1950;
  undefined4 uStack_194c;
  FLinearColor_u_0 local_1948;
  undefined1 local_1938 [16];
  FFontOutlineSettings local_1928;
  void *local_1908 [2];
  void *local_18f8 [2];
  void *local_18e8 [2];
  void *local_18d8 [2];
  undefined1 local_18c8 [160];
  TReferenceControllerBase<1> *local_1828;
  undefined1 local_1818 [16];
  undefined **local_1808;
  FSharedReferencer<1> local_17d8;
  FLinearColor_u_0 local_17b0;
  undefined4 local_17a0;
  FDeprecateSlateVector2D local_179c;
  FLinearColor_u_0 local_1794;
  FLinearColor_u_0 local_1784;
  ESlateColorStylingMode EStack_1774;
  EStyleColor EStack_1773;
  undefined2 uStack_1772;
  FLinearColor_u_0 local_1770;
  FNameEntryId local_1760;
  FSlateBrush local_1758;
  FSlateBrush local_16a8;
  FSlateBrush local_15f8;
  FLinearColor_u_0 local_1548 [12];
  undefined **local_1488 [20];
  TReferenceControllerBase<1> *local_13e8;
  undefined **local_13d8 [20];
  TReferenceControllerBase<1> *local_1338;
  undefined **local_1328 [20];
  TReferenceControllerBase<1> *local_1288;
  undefined **local_1278 [20];
  TReferenceControllerBase<1> *local_11d8;
  undefined **local_11c8 [20];
  TReferenceControllerBase<1> *local_1128;
  undefined **local_1118 [20];
  TReferenceControllerBase<1> *local_1078;
  undefined1 local_1068 [176];
  FSharedReferencer<1> local_fb8;
  undefined **local_fa8;
  FSharedReferencer<1> local_f08;
  undefined **local_ef8;
  FSharedReferencer<1> local_e58;
  undefined **local_e48;
  FSharedReferencer<1> local_da8;
  FEditableTextBoxStyle local_cd8;
  
  pFVar21 = (FSlateBrush *)0x0;
  local_res8._s_0 = local_res8._s_0 & 0xffffffff00000000;
  pFVar1 = (FSlateStyleSet *)**(undefined8 **)this;
  pFVar12 = ::operator_new(0xb0);
  pTVar8 = _UNK_15076b1f8;
  pvVar3 = ___xmm_3f8000003f8000003f8000003f800000;
  pFVar16 = pFVar21;
  if (pFVar12 != (FSlateBrush *)0x0) {
    local_res8._s_0 = (TVector2<float>_u_0_s_0)CoreStyleConstants::Icon40x40;
    local_1958 = (undefined1  [8])___xmm_3f8000003f8000003f8000003f800000;
    _fStack_1950 = _UNK_15076b1f8;
    pFVar13 = (FString *)
              (**(code **)(*(longlong *)**(undefined8 **)this + 0xf0))
                        ((longlong *)**(undefined8 **)this,&local_1948,"Starship/Common/EditToolbar"
                         ,L".svg");
    FSlateImageBrush::FSlateImageBrush
              ((FSlateImageBrush *)pFVar12,pFVar13,(FDeprecateVector2DParameter *)&local_res8._s_0,
               (FLinearColor *)local_1958,NoTile,Vector);
    pFVar12->_padding_ = (longlong)&___7FSlateVectorImageBrush__6B_;
    pFVar16 = pFVar12;
  }
  pFVar14 = ::FName::FName((FName *)&local_res10._s_0,"MultiBox.GenericToolBarIcon");
  FSlateStyleSet::Set<FSlateVectorImageBrush>(pFVar1,*pFVar14,(FSlateVectorImageBrush *)pFVar16);
  if ((pFVar12 != (FSlateBrush *)0x0) && ((void *)local_1948._0_8_ != (void *)0x0)) {
    FMemory::Free((void *)local_1948._0_8_);
  }
  pFVar1 = (FSlateStyleSet *)**(undefined8 **)this;
  pFVar12 = ::operator_new(0xb0);
  pFVar16 = pFVar21;
  if (pFVar12 != (FSlateBrush *)0x0) {
    local_res8._s_0 = (TVector2<float>_u_0_s_0)CoreStyleConstants::Icon16x16;
    local_1948._0_8_ = pvVar3;
    local_1948._8_8_ = pTVar8;
    pFVar13 = (FString *)
              (**(code **)(*(longlong *)**(undefined8 **)this + 0xf0))
                        ((longlong *)**(undefined8 **)this,local_1958,"Starship/Common/EditToolbar",
                         L".svg");
    FSlateImageBrush::FSlateImageBrush
              ((FSlateImageBrush *)pFVar12,pFVar13,(FDeprecateVector2DParameter *)&local_res8._s_0,
               (FLinearColor *)&local_1948._s_0,NoTile,Vector);
    pFVar12->_padding_ = (longlong)&___7FSlateVectorImageBrush__6B_;
    pFVar16 = pFVar12;
  }
  pFVar14 = ::FName::FName((FName *)&local_res10._s_0,"MultiBox.GenericToolBarIcon.Small");
  FSlateStyleSet::Set<FSlateVectorImageBrush>(pFVar1,*pFVar14,(FSlateVectorImageBrush *)pFVar16);
  if ((pFVar12 != (FSlateBrush *)0x0) && (local_1958 != (undefined1  [8])0x0)) {
    FMemory::Free((void *)local_1958);
  }
  pFVar1 = (FSlateStyleSet *)**(undefined8 **)this;
  pFVar15 = FButtonStyle::FButtonStyle((FButtonStyle *)local_1818);
  local_res8._s_0 = (TVector2<float>_u_0_s_0)CoreStyleConstants::Icon16x16;
  local_1948._0_8_ = pvVar3;
  local_1948._8_8_ = pTVar8;
  pFVar13 = (FString *)
            (**(code **)(*(longlong *)**(undefined8 **)this + 0xf0))
                      ((longlong *)**(undefined8 **)this,&local_1988,"/Docking/CloseApp_Hovered",
                       L".png");
  pFVar16 = (FSlateBrush *)
            FSlateImageBrush::FSlateImageBrush
                      ((FSlateImageBrush *)local_1118,pFVar13,
                       (FDeprecateVector2DParameter *)&local_res8._s_0,
                       (FLinearColor *)&local_1948._s_0,NoTile,FullColor);
  FSlateBrush::operator=(&pFVar15->Normal,pFVar16);
  local_res8._s_0 = (TVector2<float>_u_0_s_0)CoreStyleConstants::Icon16x16;
  local_1948._0_8_ = pvVar3;
  local_1948._8_8_ = pTVar8;
  pFVar13 = (FString *)
            (**(code **)(*(longlong *)**(undefined8 **)this + 0xf0))
                      ((longlong *)**(undefined8 **)this,local_1938,"/Docking/CloseApp_Pressed",
                       L".png");
  pFVar16 = (FSlateBrush *)
            FSlateImageBrush::FSlateImageBrush
                      ((FSlateImageBrush *)local_11c8,pFVar13,
                       (FDeprecateVector2DParameter *)&local_res8._s_0,
                       (FLinearColor *)&local_1948._s_0,NoTile,FullColor);
  FSlateBrush::operator=(&pFVar15->Pressed,pFVar16);
  local_res8._s_0 = (TVector2<float>_u_0_s_0)CoreStyleConstants::Icon16x16;
  local_1948._0_8_ = pvVar3;
  local_1948._8_8_ = pTVar8;
  pFVar13 = (FString *)
            (**(code **)(*(longlong *)**(undefined8 **)this + 0xf0))
                      ((longlong *)**(undefined8 **)this,local_1958,"/Docking/CloseApp_Hovered",
                       L".png");
  pFVar16 = (FSlateBrush *)
            FSlateImageBrush::FSlateImageBrush
                      ((FSlateImageBrush *)local_18c8,pFVar13,
                       (FDeprecateVector2DParameter *)&local_res8._s_0,
                       (FLinearColor *)&local_1948._s_0,NoTile,FullColor);
  FSlateBrush::operator=(&pFVar15->Hovered,pFVar16);
  pFVar14 = ::FName::FName((FName *)&local_res10._s_0,"MultiBox.DeleteButton");
  FSlateStyleSet::Set<FButtonStyle>(pFVar1,*pFVar14,pFVar15);
  local_18c8._0_8_ = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_1828);
  if (local_1958 != (undefined1  [8])0x0) {
    FMemory::Free((void *)local_1958);
  }
  local_11c8[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_1128);
  if ((void *)local_1938._0_8_ != (void *)0x0) {
    FMemory::Free((void *)local_1938._0_8_);
  }
  local_1118[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_1078);
  if ((void *)local_1988._0_8_ != (void *)0x0) {
    FMemory::Free((void *)local_1988._0_8_);
  }
  local_1818._0_8_ = &___7FButtonStyle__6B_;
  local_15f8._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_15f8.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  local_16a8._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_16a8.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  local_1758._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1758.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  local_1808 = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_1770._8_8_);
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)local_1818);
  pFVar1 = (FSlateStyleSet *)**(undefined8 **)this;
  local_1988._0_8_ = ___xmm_3f800000000000003f80000000000000;
  local_1988._8_8_ = _UNK_15076b198;
  pFVar14 = ::FName::FName((FName *)&local_res8._s_0,"MultiboxHookColor");
  FSlateStyleSet::Set(pFVar1,*pFVar14,(FLinearColor *)&local_1988._s_0);
  pFVar1 = (FSlateStyleSet *)**(undefined8 **)this;
  pFVar17 = ::operator_new(0xb0);
  pTVar7 = _UNK_15076b0c8;
  pvVar6 = ___xmm_3e8000003e8000003e8000003e800000;
  pFVar16 = pFVar21;
  if (pFVar17 != (FSlateBoxBrush *)0x0) {
    local_1988._0_8_ = pvVar3;
    local_1988._8_8_ = pTVar8;
    local_1938._0_8_ = ___xmm_3e8000003e8000003e8000003e800000;
    local_1938._8_8_ = _UNK_15076b0c8;
    pFVar13 = (FString *)
              (**(code **)(*(longlong *)**(undefined8 **)this + 0xf0))
                        ((longlong *)**(undefined8 **)this,&local_1948,"Common/GroupBorder",L".png")
    ;
    pFVar16 = (FSlateBrush *)
              FSlateBoxBrush::FSlateBoxBrush
                        (pFVar17,pFVar13,(FMargin *)local_1938,(FLinearColor *)&local_1988._s_0,
                         FullColor);
  }
  pFVar14 = ::FName::FName((FName *)&local_res8._s_0,"ToolBar.Background");
  FSlateStyleSet::Set<FSlateBoxBrush>(pFVar1,*pFVar14,(FSlateBoxBrush *)pFVar16);
  if ((pFVar17 != (FSlateBoxBrush *)0x0) && ((void *)local_1948._0_8_ != (void *)0x0)) {
    FMemory::Free((void *)local_1948._0_8_);
  }
  pFVar1 = (FSlateStyleSet *)**(undefined8 **)this;
  pFVar18 = ::operator_new(0xb0);
  pFVar16 = pFVar21;
  if (pFVar18 != (FSlateImageBrush *)0x0) {
    local_res8._s_0 = (TVector2<float>_u_0_s_0)CoreStyleConstants::Icon16x16;
    local_1988._0_8_ = pvVar3;
    local_1988._8_8_ = pTVar8;
    pFVar13 = (FString *)
              (**(code **)(*(longlong *)**(undefined8 **)this + 0xf0))
                        ((longlong *)**(undefined8 **)this,local_1938,"Icons/Icon_tab_toolbar_16px",
                         L".png");
    pFVar16 = (FSlateBrush *)
              FSlateImageBrush::FSlateImageBrush
                        (pFVar18,pFVar13,(FDeprecateVector2DParameter *)&local_res8._s_0,
                         (FLinearColor *)&local_1988._s_0,NoTile,FullColor);
  }
  pFVar14 = ::FName::FName((FName *)&local_res10._s_0,"ToolBar.Icon");
  FSlateStyleSet::Set<FSlateImageBrush>(pFVar1,*pFVar14,(FSlateImageBrush *)pFVar16);
  if ((pFVar18 != (FSlateImageBrush *)0x0) && ((void *)local_1938._0_8_ != (void *)0x0)) {
    FMemory::Free((void *)local_1938._0_8_);
  }
  pFVar1 = (FSlateStyleSet *)**(undefined8 **)this;
  pFVar18 = ::operator_new(0xb0);
  pFVar16 = pFVar21;
  if (pFVar18 != (FSlateImageBrush *)0x0) {
    local_res8._s_0 = (TVector2<float>_u_0_s_0)CoreStyleConstants::Icon16x16;
    local_1988._0_8_ = pvVar3;
    local_1988._8_8_ = pTVar8;
    pFVar13 = (FString *)
              (**(code **)(*(longlong *)**(undefined8 **)this + 0xf0))
                        ((longlong *)**(undefined8 **)this,local_1938,"Icons/toolbar_expand_16x",
                         L".png");
    pFVar16 = (FSlateBrush *)
              FSlateImageBrush::FSlateImageBrush
                        (pFVar18,pFVar13,(FDeprecateVector2DParameter *)&local_res8._s_0,
                         (FLinearColor *)&local_1988._s_0,NoTile,FullColor);
  }
  pFVar14 = ::FName::FName((FName *)&local_res10._s_0,"ToolBar.Expand");
  FSlateStyleSet::Set<FSlateImageBrush>(pFVar1,*pFVar14,(FSlateImageBrush *)pFVar16);
  if ((pFVar18 != (FSlateImageBrush *)0x0) && ((void *)local_1938._0_8_ != (void *)0x0)) {
    FMemory::Free((void *)local_1938._0_8_);
  }
  pFVar1 = (FSlateStyleSet *)**(undefined8 **)this;
  pFVar18 = ::operator_new(0xb0);
  pFVar16 = pFVar21;
  if (pFVar18 != (FSlateImageBrush *)0x0) {
    local_res8._s_0 = (TVector2<float>_u_0_s_0)CoreStyleConstants::Icon8x8;
    local_1988._0_8_ = pvVar3;
    local_1988._8_8_ = pTVar8;
    pFVar13 = (FString *)
              (**(code **)(*(longlong *)**(undefined8 **)this + 0xf0))
                        ((longlong *)**(undefined8 **)this,local_1938,"Common/SubmenuArrow",L".png")
    ;
    pFVar16 = (FSlateBrush *)
              FSlateImageBrush::FSlateImageBrush
                        (pFVar18,pFVar13,(FDeprecateVector2DParameter *)&local_res8._s_0,
                         (FLinearColor *)&local_1988._s_0,NoTile,FullColor);
  }
  pFVar14 = ::FName::FName((FName *)&local_res10._s_0,"ToolBar.SubMenuIndicator");
  FSlateStyleSet::Set<FSlateImageBrush>(pFVar1,*pFVar14,(FSlateImageBrush *)pFVar16);
  if ((pFVar18 != (FSlateImageBrush *)0x0) && ((void *)local_1938._0_8_ != (void *)0x0)) {
    FMemory::Free((void *)local_1938._0_8_);
  }
  pFVar1 = (FSlateStyleSet *)**(undefined8 **)this;
  local_1988._0_8_ = ___xmm_00000000408000000000000040800000;
  local_1988._8_8_ = _UNK_150925088;
  pFVar14 = ::FName::FName((FName *)&local_res8._s_0,"ToolBar.SToolBarComboButtonBlock.Padding");
  FSlateStyleSet::Set(pFVar1,*pFVar14,(FMargin *)&local_1988._s_0);
  pFVar1 = (FSlateStyleSet *)**(undefined8 **)this;
  local_1988._0_8_ = ___xmm_00000000408000000000000040800000;
  local_1988._8_8_ = _UNK_150925088;
  pFVar14 = ::FName::FName((FName *)&local_res8._s_0,"ToolBar.SToolBarButtonBlock.Padding");
  FSlateStyleSet::Set(pFVar1,*pFVar14,(FMargin *)&local_1988._s_0);
  pFVar1 = (FSlateStyleSet *)**(undefined8 **)this;
  local_1988._0_8_ = ___xmm_00000000408000000000000040800000;
  local_1988._8_8_ = _UNK_150925088;
  pFVar14 = ::FName::FName((FName *)&local_res8._s_0,"ToolBar.SToolBarCheckComboButtonBlock.Padding"
                          );
  FSlateStyleSet::Set(pFVar1,*pFVar14,(FMargin *)&local_1988._s_0);
  pFVar1 = (FSlateStyleSet *)**(undefined8 **)this;
  local_1988._0_8_ = ___xmm_00000000408000000000000040800000;
  local_1988._8_8_ = _UNK_150925088;
  pFVar14 = ::FName::FName((FName *)&local_res8._s_0,"ToolBar.SToolBarButtonBlock.CheckBox.Padding")
  ;
  FSlateStyleSet::Set(pFVar1,*pFVar14,(FMargin *)&local_1988._s_0);
  pFVar1 = (FSlateStyleSet *)**(undefined8 **)this;
  pFVar14 = ::FName::FName((FName *)&local_res8._s_0,
                           "ToolBar.SToolBarComboButtonBlock.ComboButton.Color");
  FSlateStyleSet::Set(pFVar1,*pFVar14,&DefaultForeground);
  pFVar1 = (FSlateStyleSet *)**(undefined8 **)this;
  local_1988._0_8_ = ___xmm_40800000408000004000000041900000;
  local_1988._8_8_ = _UNK_1509253e8;
  pFVar14 = ::FName::FName((FName *)&local_res8._s_0,"ToolBar.Block.IndentedPadding");
  FSlateStyleSet::Set(pFVar1,*pFVar14,(FMargin *)&local_1988._s_0);
  pFVar1 = (FSlateStyleSet *)**(undefined8 **)this;
  local_1988._0_8_ = ___xmm_40800000408000004000000040000000;
  local_1988._8_8_ = _UNK_1509253d8;
  pFVar14 = ::FName::FName((FName *)&local_res8._s_0,"ToolBar.Block.Padding");
  FSlateStyleSet::Set(pFVar1,*pFVar14,(FMargin *)&local_1988._s_0);
  pFVar1 = (FSlateStyleSet *)**(undefined8 **)this;
  pFVar12 = ::operator_new(0xb0);
  pFVar16 = pFVar21;
  if (pFVar12 != (FSlateBrush *)0x0) {
    local_1958._4_4_ = FLinearColor::sRGBToLinearTable[0x30];
    local_1958._0_4_ = FLinearColor::sRGBToLinearTable[0x30];
    local_res10 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
    uStack_194c = 0x3f800000;
    fStack_1950 = FLinearColor::sRGBToLinearTable[0x30];
    local_1988._0_8_ = 0;
    local_1988._8_8_ = 0;
    local_res8 = (TVector2<float>_u_0)0x0;
    FSlateBrush::FSlateBrush
              (pFVar12,Image,(FName)0x0,(FMargin *)&local_1988._s_0,NoTile,NoImage,
               (FDeprecateVector2DParameter *)&local_res10._s_0,(FLinearColor *)local_1958,
               (UObject *)0x0,false);
    pFVar12->_padding_ = (longlong)&___7FSlateColorBrush__6B_;
    pFVar16 = pFVar12;
  }
  pFVar14 = ::FName::FName(&local_res18,"ToolBar.Separator");
  FSlateStyleSet::Set<FSlateColorBrush>(pFVar1,*pFVar14,(FSlateColorBrush *)pFVar16);
  pFVar1 = (FSlateStyleSet *)**(undefined8 **)this;
  local_1988._0_8_ = ___xmm_00000000410000000000000041000000;
  local_1988._8_8_ = _UNK_150925098;
  pFVar14 = ::FName::FName((FName *)&local_res8._s_0,"ToolBar.Separator.Padding");
  FSlateStyleSet::Set(pFVar1,*pFVar14,(FMargin *)&local_1988._s_0);
  pFVar1 = (FSlateStyleSet *)**(undefined8 **)this;
  local_1818._0_8_ = &___7FTextBlockStyle__6B_;
  FSlateFontInfo::FSlateFontInfo((FSlateFontInfo *)(local_1818 + 8),&NormalText.Font);
  local_17a0 = NormalText.ColorAndOpacity._16_4_;
  local_17b0 = NormalText.ColorAndOpacity.SpecifiedColor.field0_0x0;
  local_179c = NormalText.ShadowOffset;
  EStack_1774 = NormalText.SelectedBackgroundColor.ColorUseRule;
  EStack_1773 = NormalText.SelectedBackgroundColor.ColorTableId;
  uStack_1772 = NormalText.SelectedBackgroundColor._18_2_;
  local_1794 = NormalText.ShadowColorAndOpacity.field0_0x0;
  local_1760.Value._0_1_ = NormalText.HighlightColor.ColorUseRule;
  local_1760.Value._1_1_ = NormalText.HighlightColor.ColorTableId;
  local_1760.Value._2_2_ = NormalText.HighlightColor._18_2_;
  local_1784._0_12_ = NormalText.SelectedBackgroundColor.SpecifiedColor.field0_0x0._0_12_;
  local_1784._s_0.A = NormalText.SelectedBackgroundColor.SpecifiedColor.field0_0x0._12_4_;
  local_1770 = NormalText.HighlightColor.SpecifiedColor.field0_0x0;
  FSlateBrush::FSlateBrush(&local_1758,&NormalText.HighlightShape);
  FSlateBrush::FSlateBrush(&local_16a8,&NormalText.StrikeBrush);
  FSlateBrush::FSlateBrush(&local_15f8,&NormalText.UnderlineBrush);
  local_1548[0]._0_1_ = NormalText.TransformPolicy;
  local_1548[0]._1_1_ = NormalText.OverflowPolicy;
  local_1978._0_8_ = (ulonglong)(byte)local_1978._7_1_ << 0x38;
  local_1978._8_8_ = 0;
  local_1968 = (undefined1  [16])FLinearColor::Black.field0_0x0;
  pFVar14 = ::FName::FName((FName *)&local_res10._s_0,"Regular");
  local_res8._0_4_ = *(float *)&pFVar14->ComparisonIndex;
  local_res8._4_4_ = (float)pFVar14->Number;
  pFVar19 = FLegacySlateFontInfoCache::Get();
  FLegacySlateFontInfoCache::GetDefaultFont
            (pFVar19,(TSharedRef<FCompositeFont_const_,1> *)local_1958);
  local_1988._0_8_ = local_1958;
  local_1988._8_8_ = _fStack_1950;
  if ((TReferenceControllerBase<1> *)_fStack_1950 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    *(atomic<int> *)(_fStack_1950 + 8) = (atomic<int>)((int)*(atomic<int> *)(_fStack_1950 + 8) + 1);
    UNLOCK();
  }
  FSlateFontInfo::FSlateFontInfo
            ((FSlateFontInfo *)local_18c8,(TSharedPtr<FCompositeFont_const_,1> *)&local_1988._s_0,
             __real_41100000,(FName *)&local_res8._s_0,(FFontOutlineSettings *)&local_1978._s_0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)_fStack_1950);
  FSlateFontInfo::operator=((FSlateFontInfo *)(local_1818 + 8),(FSlateFontInfo *)local_18c8);
  pFVar14 = ::FName::FName(&local_res18,"ToolBar.Label");
  FSlateStyleSet::Set<FTextBlockStyle>(pFVar1,*pFVar14,(FTextBlockStyle *)local_1818);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_18c8._56_8_);
  local_1818._0_8_ = &___7FTextBlockStyle__6B_;
  local_15f8._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_15f8.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  local_16a8._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_16a8.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  local_1758._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1758.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_17d8.ReferenceController);
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)local_1818);
  pFVar1 = (FSlateStyleSet *)**(undefined8 **)this;
  pFVar20 = FEditableTextBoxStyle::FEditableTextBoxStyle(&local_cd8,&NormalEditableTextBoxStyle);
  local_1968 = (undefined1  [16])FLinearColor::Black.field0_0x0;
  local_1978._0_8_ = local_1978._0_8_ & 0xff00000000000000;
  local_1978._8_8_ = 0;
  pFVar14 = ::FName::FName((FName *)&local_res10._s_0,"Regular");
  local_res8._0_4_ = *(float *)&pFVar14->ComparisonIndex;
  local_res8._4_4_ = (float)pFVar14->Number;
  pFVar19 = FLegacySlateFontInfoCache::Get();
  FLegacySlateFontInfoCache::GetDefaultFont
            (pFVar19,(TSharedRef<FCompositeFont_const_,1> *)local_1958);
  local_1988._0_8_ = local_1958;
  local_1988._8_8_ = _fStack_1950;
  if ((TReferenceControllerBase<1> *)_fStack_1950 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    *(atomic<int> *)(_fStack_1950 + 8) = (atomic<int>)((int)*(atomic<int> *)(_fStack_1950 + 8) + 1);
    UNLOCK();
  }
  FSlateFontInfo::FSlateFontInfo
            ((FSlateFontInfo *)local_18c8,(TSharedPtr<FCompositeFont_const_,1> *)&local_1988._s_0,
             __real_41100000,(FName *)&local_res8._s_0,(FFontOutlineSettings *)&local_1978._s_0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)_fStack_1950);
  FSlateFontInfo::operator=(&(pFVar20->TextStyle).Font,(FSlateFontInfo *)local_18c8);
  pFVar14 = ::FName::FName(&local_res18,"ToolBar.EditableText");
  FSlateStyleSet::Set<FEditableTextBoxStyle>(pFVar1,*pFVar14,pFVar20);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_18c8._56_8_);
  local_cd8._padding_ = (longlong)&___7FEditableTextBoxStyle__6B_;
  FScrollBarStyle::~FScrollBarStyle(&local_cd8.ScrollBarStyle);
  FTextBlockStyle::~FTextBlockStyle(&local_cd8.TextStyle);
  local_cd8.BackgroundImageReadOnly._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_cd8.BackgroundImageReadOnly.ResourceHandle.Data.SharedReferenceCount.
             ReferenceController);
  local_cd8.BackgroundImageFocused._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_cd8.BackgroundImageFocused.ResourceHandle.Data.SharedReferenceCount.
             ReferenceController);
  local_cd8.BackgroundImageHovered._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_cd8.BackgroundImageHovered.ResourceHandle.Data.SharedReferenceCount.
             ReferenceController);
  local_cd8.BackgroundImageNormal._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_cd8.BackgroundImageNormal.ResourceHandle.Data.SharedReferenceCount.
             ReferenceController);
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)&local_cd8);
  pFVar1 = (FSlateStyleSet *)**(undefined8 **)this;
  local_1818._0_8_ = &___7FTextBlockStyle__6B_;
  FSlateFontInfo::FSlateFontInfo((FSlateFontInfo *)(local_1818 + 8),&NormalText.Font);
  local_17a0 = NormalText.ColorAndOpacity._16_4_;
  local_17b0 = NormalText.ColorAndOpacity.SpecifiedColor.field0_0x0;
  local_179c = NormalText.ShadowOffset;
  EStack_1774 = NormalText.SelectedBackgroundColor.ColorUseRule;
  EStack_1773 = NormalText.SelectedBackgroundColor.ColorTableId;
  uStack_1772 = NormalText.SelectedBackgroundColor._18_2_;
  local_1794 = NormalText.ShadowColorAndOpacity.field0_0x0;
  local_1760.Value._0_1_ = NormalText.HighlightColor.ColorUseRule;
  local_1760.Value._1_1_ = NormalText.HighlightColor.ColorTableId;
  local_1760.Value._2_2_ = NormalText.HighlightColor._18_2_;
  local_1784._0_12_ = NormalText.SelectedBackgroundColor.SpecifiedColor.field0_0x0._0_12_;
  local_1784._s_0.A = NormalText.SelectedBackgroundColor.SpecifiedColor.field0_0x0._12_4_;
  local_1770 = NormalText.HighlightColor.SpecifiedColor.field0_0x0;
  FSlateBrush::FSlateBrush(&local_1758,&NormalText.HighlightShape);
  FSlateBrush::FSlateBrush(&local_16a8,&NormalText.StrikeBrush);
  FSlateBrush::FSlateBrush(&local_15f8,&NormalText.UnderlineBrush);
  local_1548[0]._0_1_ = NormalText.TransformPolicy;
  local_1548[0]._1_1_ = NormalText.OverflowPolicy;
  local_1978._0_8_ = local_1978._0_8_ & 0xff00000000000000;
  local_1978._8_8_ = (TReferenceControllerBase<1> *)0x0;
  local_1968 = (undefined1  [16])FLinearColor::Black.field0_0x0;
  pFVar14 = ::FName::FName((FName *)&local_res10._s_0,"Regular");
  local_res8._0_4_ = *(float *)&pFVar14->ComparisonIndex;
  local_res8._4_4_ = (float)pFVar14->Number;
  pFVar19 = FLegacySlateFontInfoCache::Get();
  FLegacySlateFontInfoCache::GetDefaultFont
            (pFVar19,(TSharedRef<FCompositeFont_const_,1> *)local_1958);
  local_1988._0_8_ = local_1958;
  local_1988._8_8_ = _fStack_1950;
  if ((TReferenceControllerBase<1> *)_fStack_1950 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    *(atomic<int> *)(_fStack_1950 + 8) = (atomic<int>)((int)*(atomic<int> *)(_fStack_1950 + 8) + 1);
    UNLOCK();
  }
  FSlateFontInfo::FSlateFontInfo
            ((FSlateFontInfo *)local_18c8,(TSharedPtr<FCompositeFont_const_,1> *)&local_1988._s_0,
             __real_41000000,(FName *)&local_res8._s_0,(FFontOutlineSettings *)&local_1978._s_0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)_fStack_1950);
  FSlateFontInfo::operator=((FSlateFontInfo *)(local_1818 + 8),(FSlateFontInfo *)local_18c8);
  pFVar14 = ::FName::FName(&local_res18,"ToolBar.Keybinding");
  FSlateStyleSet::Set<FTextBlockStyle>(pFVar1,*pFVar14,(FTextBlockStyle *)local_1818);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_18c8._56_8_);
  local_1818._0_8_ = &___7FTextBlockStyle__6B_;
  local_15f8._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_15f8.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  local_16a8._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_16a8.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  local_1758._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1758.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_17d8.ReferenceController);
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)local_1818);
  pFVar1 = (FSlateStyleSet *)**(undefined8 **)this;
  local_1818._0_8_ = &___7FTextBlockStyle__6B_;
  FSlateFontInfo::FSlateFontInfo((FSlateFontInfo *)(local_1818 + 8),&NormalText.Font);
  local_17a0 = NormalText.ColorAndOpacity._16_4_;
  local_17b0 = NormalText.ColorAndOpacity.SpecifiedColor.field0_0x0;
  local_179c = NormalText.ShadowOffset;
  EStack_1774 = NormalText.SelectedBackgroundColor.ColorUseRule;
  EStack_1773 = NormalText.SelectedBackgroundColor.ColorTableId;
  uStack_1772 = NormalText.SelectedBackgroundColor._18_2_;
  local_1794 = NormalText.ShadowColorAndOpacity.field0_0x0;
  local_1760.Value._0_1_ = NormalText.HighlightColor.ColorUseRule;
  local_1760.Value._1_1_ = NormalText.HighlightColor.ColorTableId;
  local_1760.Value._2_2_ = NormalText.HighlightColor._18_2_;
  local_1784._0_12_ = NormalText.SelectedBackgroundColor.SpecifiedColor.field0_0x0._0_12_;
  local_1784._s_0.A = NormalText.SelectedBackgroundColor.SpecifiedColor.field0_0x0._12_4_;
  local_1770 = NormalText.HighlightColor.SpecifiedColor.field0_0x0;
  FSlateBrush::FSlateBrush(&local_1758,&NormalText.HighlightShape);
  FSlateBrush::FSlateBrush(&local_16a8,&NormalText.StrikeBrush);
  FSlateBrush::FSlateBrush(&local_15f8,&NormalText.UnderlineBrush);
  local_1548[0]._0_1_ = NormalText.TransformPolicy;
  local_1548[0]._1_1_ = NormalText.OverflowPolicy;
  local_1928.OutlineSize = 0;
  local_1928.bMiteredCorners = false;
  local_1928.bSeparateFillAlpha = false;
  local_1928.bApplyOutlineToDropShadows = false;
  local_1928.OutlineMaterial.field0_0x0.DebugPtr = (TObjectPtr<UObject>_u_0)0x0;
  local_1928.OutlineColor.field0_0x0._s_0 = FLinearColor::Black.field0_0x0;
  pFVar14 = ::FName::FName((FName *)&local_res10._s_0,"Regular");
  local_res8._0_4_ = *(float *)&pFVar14->ComparisonIndex;
  local_res8._4_4_ = (float)pFVar14->Number;
  pFVar19 = FLegacySlateFontInfoCache::Get();
  FLegacySlateFontInfoCache::GetDefaultFont
            (pFVar19,(TSharedRef<FCompositeFont_const_,1> *)local_1958);
  local_1988._0_8_ = local_1958;
  local_1988._8_8_ = _fStack_1950;
  if ((TReferenceControllerBase<1> *)_fStack_1950 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    *(atomic<int> *)(_fStack_1950 + 8) = (atomic<int>)((int)*(atomic<int> *)(_fStack_1950 + 8) + 1);
    UNLOCK();
  }
  FSlateFontInfo::FSlateFontInfo
            ((FSlateFontInfo *)local_18c8,(TSharedPtr<FCompositeFont_const_,1> *)&local_1988._s_0,
             __real_41000000,(FName *)&local_res8._s_0,&local_1928);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)_fStack_1950);
  FSlateFontInfo::operator=((FSlateFontInfo *)(local_1818 + 8),(FSlateFontInfo *)local_18c8);
  auVar5[0xf] = 0;
  auVar5._0_15_ = local_1968._1_15_;
  local_1968 = auVar5 << 8;
  local_17b0._8_8_ = _UNK_1509252d8;
  local_17b0._0_8_ = ___xmm_3f8000003ecccccd3ecccccd3ecccccd;
  local_17a0 = local_1968._0_4_;
  pFVar14 = ::FName::FName(&local_res18,"ToolBar.Heading");
  FSlateStyleSet::Set<FTextBlockStyle>(pFVar1,*pFVar14,(FTextBlockStyle *)local_1818);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_18c8._56_8_);
  local_1818._0_8_ = &___7FTextBlockStyle__6B_;
  local_15f8._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_15f8.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  local_16a8._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_16a8.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  local_1758._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1758.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_17d8.ReferenceController);
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)local_1818);
  lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if ((*(int *)(lVar2 + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    pFVar23 = FCheckBoxStyle::FCheckBoxStyle((FCheckBoxStyle *)&local_cd8);
    local_res8._s_0 = (TVector2<float>_u_0_s_0)CoreStyleConstants::Icon14x14;
    local_1988._0_8_ = pvVar3;
    local_1988._8_8_ = pTVar8;
    pFVar13 = (FString *)
              (**(code **)(*(longlong *)**(undefined8 **)this + 0xf0))
                        ((longlong *)**(undefined8 **)this,&local_1978,"Common/SmallCheckBox",
                         L".png");
    pFVar16 = (FSlateBrush *)
              FSlateImageBrush::FSlateImageBrush
                        ((FSlateImageBrush *)local_1818,pFVar13,
                         (FDeprecateVector2DParameter *)&local_res8._s_0,
                         (FLinearColor *)&local_1988._s_0,NoTile,FullColor);
    FSlateBrush::operator=(&pFVar23->UncheckedImage,pFVar16);
    local_res8._s_0 = (TVector2<float>_u_0_s_0)CoreStyleConstants::Icon14x14;
    local_1988._0_8_ = pvVar3;
    local_1988._8_8_ = pTVar8;
    pFVar13 = (FString *)
              (**(code **)(*(longlong *)**(undefined8 **)this + 0xf0))
                        ((longlong *)**(undefined8 **)this,&local_1928,
                         "Common/SmallCheckBox_Checked",L".png");
    pFVar16 = (FSlateBrush *)
              FSlateImageBrush::FSlateImageBrush
                        ((FSlateImageBrush *)local_13d8,pFVar13,
                         (FDeprecateVector2DParameter *)&local_res8._s_0,
                         (FLinearColor *)&local_1988._s_0,NoTile,FullColor);
    FSlateBrush::operator=(&pFVar23->CheckedImage,pFVar16);
    local_res8._s_0 = (TVector2<float>_u_0_s_0)CoreStyleConstants::Icon14x14;
    local_1988._0_8_ = pvVar3;
    local_1988._8_8_ = pTVar8;
    pFVar13 = (FString *)
              (**(code **)(*(longlong *)**(undefined8 **)this + 0xf0))
                        ((longlong *)**(undefined8 **)this,local_1908,"Common/SmallCheckBox_Hovered"
                         ,L".png");
    pFVar16 = (FSlateBrush *)
              FSlateImageBrush::FSlateImageBrush
                        ((FSlateImageBrush *)local_1488,pFVar13,
                         (FDeprecateVector2DParameter *)&local_res8._s_0,
                         (FLinearColor *)&local_1988._s_0,NoTile,FullColor);
    FSlateBrush::operator=(&pFVar23->UncheckedHoveredImage,pFVar16);
    local_res8._s_0 = (TVector2<float>_u_0_s_0)CoreStyleConstants::Icon14x14;
    local_1988._0_8_ = pvVar3;
    local_1988._8_8_ = pTVar8;
    pFVar13 = (FString *)
              (**(code **)(*(longlong *)**(undefined8 **)this + 0xf0))
                        ((longlong *)**(undefined8 **)this,local_18d8,
                         "Common/SmallCheckBox_Checked_Hovered",L".png");
    pFVar16 = (FSlateBrush *)
              FSlateImageBrush::FSlateImageBrush
                        ((FSlateImageBrush *)local_1068,pFVar13,
                         (FDeprecateVector2DParameter *)&local_res8._s_0,
                         (FLinearColor *)&local_1988._s_0,NoTile,FullColor);
    FSlateBrush::operator=(&pFVar23->CheckedImage,pFVar16);
    local_res8._s_0 = (TVector2<float>_u_0_s_0)CoreStyleConstants::Icon14x14;
    local_1988._0_8_ = ___xmm_3f8000003f0000003f0000003f000000;
    local_1988._8_8_ = _UNK_1509252f8;
    pFVar13 = (FString *)
              (**(code **)(*(longlong *)**(undefined8 **)this + 0xf0))
                        ((longlong *)**(undefined8 **)this,local_18e8,"Common/SmallCheckBox_Hovered"
                         ,L".png");
    pFVar16 = (FSlateBrush *)
              FSlateImageBrush::FSlateImageBrush
                        ((FSlateImageBrush *)local_1278,pFVar13,
                         (FDeprecateVector2DParameter *)&local_res8._s_0,
                         (FLinearColor *)&local_1988._s_0,NoTile,FullColor);
    FSlateBrush::operator=(&pFVar23->UncheckedPressedImage,pFVar16);
    local_res8._s_0 = (TVector2<float>_u_0_s_0)CoreStyleConstants::Icon14x14;
    local_1988._0_8_ = ___xmm_3f8000003f0000003f0000003f000000;
    local_1988._8_8_ = _UNK_1509252f8;
    pFVar13 = (FString *)
              (**(code **)(*(longlong *)**(undefined8 **)this + 0xf0))
                        ((longlong *)**(undefined8 **)this,local_18f8,
                         "Common/SmallCheckBox_Checked_Hovered",L".png");
    pFVar16 = (FSlateBrush *)
              FSlateImageBrush::FSlateImageBrush
                        ((FSlateImageBrush *)local_1328,pFVar13,
                         (FDeprecateVector2DParameter *)&local_res8._s_0,
                         (FLinearColor *)&local_1988._s_0,NoTile,FullColor);
    FSlateBrush::operator=(&pFVar23->CheckedPressedImage,pFVar16);
    local_res8._s_0 = (TVector2<float>_u_0_s_0)CoreStyleConstants::Icon14x14;
    local_1988._0_8_ = pvVar3;
    local_1988._8_8_ = pTVar8;
    pFVar13 = (FString *)
              (**(code **)(*(longlong *)**(undefined8 **)this + 0xf0))
                        ((longlong *)**(undefined8 **)this,local_1958,"Common/CheckBox_Undetermined"
                         ,L".png");
    pFVar16 = (FSlateBrush *)
              FSlateImageBrush::FSlateImageBrush
                        ((FSlateImageBrush *)local_18c8,pFVar13,
                         (FDeprecateVector2DParameter *)&local_res8._s_0,
                         (FLinearColor *)&local_1988._s_0,NoTile,FullColor);
    FSlateBrush::operator=(&pFVar23->UndeterminedImage,pFVar16);
    local_res8._s_0 = (TVector2<float>_u_0_s_0)CoreStyleConstants::Icon14x14;
    local_1988._0_8_ = pvVar3;
    local_1988._8_8_ = pTVar8;
    pFVar13 = (FString *)
              (**(code **)(*(longlong *)**(undefined8 **)this + 0xf0))
                        ((longlong *)**(undefined8 **)this,&local_1948,
                         "Common/CheckBox_Undetermined_Hovered",L".png");
    pFVar16 = (FSlateBrush *)
              FSlateImageBrush::FSlateImageBrush
                        ((FSlateImageBrush *)local_11c8,pFVar13,
                         (FDeprecateVector2DParameter *)&local_res8._s_0,
                         (FLinearColor *)&local_1988._s_0,NoTile,FullColor);
    FSlateBrush::operator=(&pFVar23->UndeterminedHoveredImage,pFVar16);
    local_res8._s_0 = (TVector2<float>_u_0_s_0)CoreStyleConstants::Icon14x14;
    local_1988._0_8_ = ___xmm_3f8000003f0000003f0000003f000000;
    local_1988._8_8_ = _UNK_1509252f8;
    pFVar13 = (FString *)
              (**(code **)(*(longlong *)**(undefined8 **)this + 0xf0))
                        ((longlong *)**(undefined8 **)this,local_1938,
                         "Common/CheckBox_Undetermined_Hovered",L".png");
    pFVar16 = (FSlateBrush *)
              FSlateImageBrush::FSlateImageBrush
                        ((FSlateImageBrush *)local_1118,pFVar13,
                         (FDeprecateVector2DParameter *)&local_res8._s_0,
                         (FLinearColor *)&local_1988._s_0,NoTile,FullColor);
    FSlateBrush::operator=(&pFVar23->UndeterminedPressedImage,pFVar16);
    FCheckBoxStyle::FCheckBoxStyle(&ToolBarCheckBoxStyle,pFVar23);
    local_1118[0] = &___7FSlateBrush__6B_;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_1078);
    if ((void *)local_1938._0_8_ != (void *)0x0) {
      FMemory::Free((void *)local_1938._0_8_);
    }
    local_11c8[0] = &___7FSlateBrush__6B_;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_1128);
    if ((void *)local_1948._0_8_ != (void *)0x0) {
      FMemory::Free((void *)local_1948._0_8_);
    }
    local_18c8._0_8_ = &___7FSlateBrush__6B_;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_1828);
    if (local_1958 != (undefined1  [8])0x0) {
      FMemory::Free((void *)local_1958);
    }
    local_1328[0] = &___7FSlateBrush__6B_;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_1288);
    if (local_18f8[0] != (void *)0x0) {
      FMemory::Free(local_18f8[0]);
    }
    local_1278[0] = &___7FSlateBrush__6B_;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_11d8);
    if (local_18e8[0] != (void *)0x0) {
      FMemory::Free(local_18e8[0]);
    }
    local_1068._0_8_ = &___7FSlateBrush__6B_;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_1068._160_8_);
    if (local_18d8[0] != (void *)0x0) {
      FMemory::Free(local_18d8[0]);
    }
    local_1488[0] = &___7FSlateBrush__6B_;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_13e8);
    if (local_1908[0] != (void *)0x0) {
      FMemory::Free(local_1908[0]);
    }
    local_13d8[0] = &___7FSlateBrush__6B_;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_1338);
    pvVar4 = (void *)CONCAT17(local_1928._padding_,
                              CONCAT16(local_1928.bApplyOutlineToDropShadows,
                                       CONCAT24(local_1928._4_2_,local_1928.OutlineSize)));
    if (pvVar4 != (void *)0x0) {
      FMemory::Free(pvVar4);
    }
    local_1818._0_8_ = &___7FSlateBrush__6B_;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)CONCAT44(_EStack_1774,local_1784._s_0.A));
    if ((void *)local_1978._0_8_ != (void *)0x0) {
      FMemory::Free((void *)local_1978._0_8_);
    }
    FCheckBoxStyle::~FCheckBoxStyle((FCheckBoxStyle *)&local_cd8);
    atexit(``FUMGCoreStyle::Create'::__l2::<lambda_7>::operator()'::__l4::
           _dynamic_atexit_destructor_for__ToolBarCheckBoxStyle__);
    _Init_thread_footer(&::_TSS0);
  }
  pFVar1 = (FSlateStyleSet *)**(undefined8 **)this;
  pFVar14 = ::FName::FName((FName *)&local_res8._s_0,"ToolBar.CheckBox");
  FSlateStyleSet::Set<FCheckBoxStyle>(pFVar1,*pFVar14,&ToolBarCheckBoxStyle);
  if ((*(int *)(lVar2 + 0x9d4c) < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
    pFVar23 = FCheckBoxStyle::FCheckBoxStyle((FCheckBoxStyle *)&local_cd8);
    local_res8._s_0 = (TVector2<float>_u_0_s_0)CoreStyleConstants::Icon14x14;
    local_1978._0_8_ = pvVar3;
    local_1978._8_8_ = pTVar8;
    pFVar13 = (FString *)
              (**(code **)(*(longlong *)**(undefined8 **)this + 0xf0))
                        ((longlong *)**(undefined8 **)this,local_1938,"Icons/Empty_14x",L".png");
    pFVar16 = (FSlateBrush *)
              FSlateImageBrush::FSlateImageBrush
                        ((FSlateImageBrush *)local_18c8,pFVar13,
                         (FDeprecateVector2DParameter *)&local_res8._s_0,
                         (FLinearColor *)&local_1978._s_0,NoTile,FullColor);
    FSlateBrush::operator=(&pFVar23->UncheckedImage,pFVar16);
    local_res8._s_0 = (TVector2<float>_u_0_s_0)CoreStyleConstants::Icon14x14;
    local_1978._0_8_ = pvVar3;
    local_1978._8_8_ = pTVar8;
    pFVar13 = (FString *)
              (**(code **)(*(longlong *)**(undefined8 **)this + 0xf0))
                        ((longlong *)**(undefined8 **)this,&local_1988,"Icons/Empty_14x",L".png");
    pFVar16 = (FSlateBrush *)
              FSlateImageBrush::FSlateImageBrush
                        ((FSlateImageBrush *)local_11c8,pFVar13,
                         (FDeprecateVector2DParameter *)&local_res8._s_0,
                         (FLinearColor *)&local_1978._s_0,NoTile,FullColor);
    FSlateBrush::operator=(&pFVar23->UncheckedHoveredImage,pFVar16);
    local_res8._s_0 = (TVector2<float>_u_0_s_0)CoreStyleConstants::Icon14x14;
    local_1978._0_8_ = pvVar3;
    local_1978._8_8_ = pTVar8;
    pFVar13 = (FString *)
              (**(code **)(*(longlong *)**(undefined8 **)this + 0xf0))
                        ((longlong *)**(undefined8 **)this,local_18f8,"Common/SmallCheckBox_Hovered"
                         ,L".png");
    pFVar16 = (FSlateBrush *)
              FSlateImageBrush::FSlateImageBrush
                        ((FSlateImageBrush *)local_1118,pFVar13,
                         (FDeprecateVector2DParameter *)&local_res8._s_0,
                         (FLinearColor *)&local_1978._s_0,NoTile,FullColor);
    FSlateBrush::operator=(&pFVar23->UncheckedPressedImage,pFVar16);
    local_res8._s_0 = (TVector2<float>_u_0_s_0)CoreStyleConstants::Icon14x14;
    local_1978._0_8_ = pvVar3;
    local_1978._8_8_ = pTVar8;
    pFVar13 = (FString *)
              (**(code **)(*(longlong *)**(undefined8 **)this + 0xf0))
                        ((longlong *)**(undefined8 **)this,local_18e8,"Common/SmallCheck",L".png");
    pFVar16 = (FSlateBrush *)
              FSlateImageBrush::FSlateImageBrush
                        ((FSlateImageBrush *)local_1328,pFVar13,
                         (FDeprecateVector2DParameter *)&local_res8._s_0,
                         (FLinearColor *)&local_1978._s_0,NoTile,FullColor);
    FSlateBrush::operator=(&pFVar23->CheckedImage,pFVar16);
    local_res8._s_0 = (TVector2<float>_u_0_s_0)CoreStyleConstants::Icon14x14;
    local_1978._0_8_ = pvVar3;
    local_1978._8_8_ = pTVar8;
    pFVar13 = (FString *)
              (**(code **)(*(longlong *)**(undefined8 **)this + 0xf0))
                        ((longlong *)**(undefined8 **)this,local_18d8,"Common/SmallCheck",L".png");
    pFVar16 = (FSlateBrush *)
              FSlateImageBrush::FSlateImageBrush
                        ((FSlateImageBrush *)local_1278,pFVar13,
                         (FDeprecateVector2DParameter *)&local_res8._s_0,
                         (FLinearColor *)&local_1978._s_0,NoTile,FullColor);
    FSlateBrush::operator=(&pFVar23->CheckedHoveredImage,pFVar16);
    local_res8._s_0 = (TVector2<float>_u_0_s_0)CoreStyleConstants::Icon14x14;
    local_1978._0_8_ = pvVar3;
    local_1978._8_8_ = pTVar8;
    pFVar13 = (FString *)
              (**(code **)(*(longlong *)**(undefined8 **)this + 0xf0))
                        ((longlong *)**(undefined8 **)this,local_1908,"Common/SmallCheck",L".png");
    pFVar16 = (FSlateBrush *)
              FSlateImageBrush::FSlateImageBrush
                        ((FSlateImageBrush *)local_1068,pFVar13,
                         (FDeprecateVector2DParameter *)&local_res8._s_0,
                         (FLinearColor *)&local_1978._s_0,NoTile,FullColor);
    FSlateBrush::operator=(&pFVar23->CheckedPressedImage,pFVar16);
    local_res8._s_0 = (TVector2<float>_u_0_s_0)CoreStyleConstants::Icon14x14;
    local_1978._0_8_ = pvVar3;
    local_1978._8_8_ = pTVar8;
    pFVar13 = (FString *)
              (**(code **)(*(longlong *)**(undefined8 **)this + 0xf0))
                        ((longlong *)**(undefined8 **)this,&local_1928,"Icons/Empty_14x",L".png");
    pFVar16 = (FSlateBrush *)
              FSlateImageBrush::FSlateImageBrush
                        ((FSlateImageBrush *)local_1488,pFVar13,
                         (FDeprecateVector2DParameter *)&local_res8._s_0,
                         (FLinearColor *)&local_1978._s_0,NoTile,FullColor);
    FSlateBrush::operator=(&pFVar23->UndeterminedImage,pFVar16);
    local_res8 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
    pFVar16 = (FSlateBrush *)
              FSlateNoResource::FSlateNoResource
                        ((FSlateNoResource *)local_13d8,
                         (FDeprecateVector2DParameter *)&local_res8._s_0);
    FSlateBrush::operator=(&pFVar23->UndeterminedHoveredImage,pFVar16);
    local_res8 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
    pFVar16 = (FSlateBrush *)
              FSlateNoResource::FSlateNoResource
                        ((FSlateNoResource *)local_1818,
                         (FDeprecateVector2DParameter *)&local_res8._s_0);
    FSlateBrush::operator=(&pFVar23->UndeterminedPressedImage,pFVar16);
    FCheckBoxStyle::FCheckBoxStyle(&BasicToolBarCheckStyle,pFVar23);
    local_1818._0_8_ = &___7FSlateBrush__6B_;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)CONCAT44(_EStack_1774,local_1784._s_0.A));
    local_13d8[0] = &___7FSlateBrush__6B_;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_1338);
    local_1488[0] = &___7FSlateBrush__6B_;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_13e8);
    pvVar4 = (void *)CONCAT17(local_1928._padding_,
                              CONCAT16(local_1928.bApplyOutlineToDropShadows,
                                       CONCAT24(local_1928._4_2_,local_1928.OutlineSize)));
    if (pvVar4 != (void *)0x0) {
      FMemory::Free(pvVar4);
    }
    local_1068._0_8_ = &___7FSlateBrush__6B_;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_1068._160_8_);
    if (local_1908[0] != (void *)0x0) {
      FMemory::Free(local_1908[0]);
    }
    local_1278[0] = &___7FSlateBrush__6B_;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_11d8);
    if (local_18d8[0] != (void *)0x0) {
      FMemory::Free(local_18d8[0]);
    }
    local_1328[0] = &___7FSlateBrush__6B_;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_1288);
    if (local_18e8[0] != (void *)0x0) {
      FMemory::Free(local_18e8[0]);
    }
    local_1118[0] = &___7FSlateBrush__6B_;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_1078);
    if (local_18f8[0] != (void *)0x0) {
      FMemory::Free(local_18f8[0]);
    }
    local_11c8[0] = &___7FSlateBrush__6B_;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_1128);
    if ((void *)local_1988._0_8_ != (void *)0x0) {
      FMemory::Free((void *)local_1988._0_8_);
    }
    local_18c8._0_8_ = &___7FSlateBrush__6B_;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_1828);
    if ((void *)local_1938._0_8_ != (void *)0x0) {
      FMemory::Free((void *)local_1938._0_8_);
    }
    FCheckBoxStyle::~FCheckBoxStyle((FCheckBoxStyle *)&local_cd8);
    atexit(``FUMGCoreStyle::Create'::__l2::<lambda_7>::operator()'::__l4::
           _dynamic_atexit_destructor_for__BasicToolBarCheckStyle__);
    _Init_thread_footer(&::_TSS1);
  }
  pFVar1 = (FSlateStyleSet *)**(undefined8 **)this;
  pFVar14 = ::FName::FName((FName *)&local_res8._s_0,"ToolBar.Check");
  FSlateStyleSet::Set<FCheckBoxStyle>(pFVar1,*pFVar14,&BasicToolBarCheckStyle);
  if ((*(int *)(lVar2 + 0x9d4c) < ::_TSS2) && (_Init_thread_header(&::_TSS2), ::_TSS2 == -1)) {
    pFVar23 = FCheckBoxStyle::FCheckBoxStyle((FCheckBoxStyle *)&local_cd8);
    local_res8._s_0 = (TVector2<float>_u_0_s_0)CoreStyleConstants::Icon16x16;
    local_1978._0_8_ = pvVar3;
    local_1978._8_8_ = pTVar8;
    pFVar13 = (FString *)
              (**(code **)(*(longlong *)**(undefined8 **)this + 0xf0))
                        ((longlong *)**(undefined8 **)this,&local_1988,
                         "Common/RadioButton_Unselected_16x",L".png");
    pFVar16 = (FSlateBrush *)
              FSlateImageBrush::FSlateImageBrush
                        ((FSlateImageBrush *)local_1328,pFVar13,
                         (FDeprecateVector2DParameter *)&local_res8._s_0,
                         (FLinearColor *)&local_1978._s_0,NoTile,FullColor);
    FSlateBrush::operator=(&pFVar23->UncheckedImage,pFVar16);
    local_res8._s_0 = (TVector2<float>_u_0_s_0)CoreStyleConstants::Icon16x16;
    local_1978._0_8_ = pvVar3;
    local_1978._8_8_ = pTVar8;
    pFVar13 = (FString *)
              (**(code **)(*(longlong *)**(undefined8 **)this + 0xf0))
                        ((longlong *)**(undefined8 **)this,local_18f8,
                         "Common/RadioButton_Selected_16x",L".png");
    pFVar16 = (FSlateBrush *)
              FSlateImageBrush::FSlateImageBrush
                        ((FSlateImageBrush *)local_1278,pFVar13,
                         (FDeprecateVector2DParameter *)&local_res8._s_0,
                         (FLinearColor *)&local_1978._s_0,NoTile,FullColor);
    FSlateBrush::operator=(&pFVar23->CheckedImage,pFVar16);
    local_res8._s_0 = (TVector2<float>_u_0_s_0)CoreStyleConstants::Icon16x16;
    pFVar13 = (FString *)
              (**(code **)(*(longlong *)**(undefined8 **)this + 0xf0))
                        ((longlong *)**(undefined8 **)this,local_18e8,
                         "Common/RadioButton_Unselected_16x",L".png");
    pFVar16 = (FSlateBrush *)
              FSlateImageBrush::FSlateImageBrush
                        ((FSlateImageBrush *)local_1068,pFVar13,
                         (FDeprecateVector2DParameter *)&local_res8._s_0,&SelectionColor,NoTile,
                         FullColor);
    FSlateBrush::operator=(&pFVar23->UncheckedHoveredImage,pFVar16);
    local_res8._s_0 = (TVector2<float>_u_0_s_0)CoreStyleConstants::Icon16x16;
    pFVar13 = (FString *)
              (**(code **)(*(longlong *)**(undefined8 **)this + 0xf0))
                        ((longlong *)**(undefined8 **)this,local_18d8,
                         "Common/RadioButton_Unselected_16x",L".png");
    pFVar16 = (FSlateBrush *)
              FSlateImageBrush::FSlateImageBrush
                        ((FSlateImageBrush *)local_1488,pFVar13,
                         (FDeprecateVector2DParameter *)&local_res8._s_0,&SelectionColor,NoTile,
                         FullColor);
    FSlateBrush::operator=(&pFVar23->CheckedHoveredImage,pFVar16);
    local_res8._s_0 = (TVector2<float>_u_0_s_0)CoreStyleConstants::Icon16x16;
    pFVar13 = (FString *)
              (**(code **)(*(longlong *)**(undefined8 **)this + 0xf0))
                        ((longlong *)**(undefined8 **)this,local_1908,
                         "Common/RadioButton_Unselected_16x",L".png");
    pFVar16 = (FSlateBrush *)
              FSlateImageBrush::FSlateImageBrush
                        ((FSlateImageBrush *)local_13d8,pFVar13,
                         (FDeprecateVector2DParameter *)&local_res8._s_0,&SelectionColor_Pressed,
                         NoTile,FullColor);
    FSlateBrush::operator=(&pFVar23->UncheckedPressedImage,pFVar16);
    local_res8._s_0 = (TVector2<float>_u_0_s_0)CoreStyleConstants::Icon16x16;
    pFVar13 = (FString *)
              (**(code **)(*(longlong *)**(undefined8 **)this + 0xf0))
                        ((longlong *)**(undefined8 **)this,&local_1928,
                         "Common/RadioButton_Selected_16x",L".png");
    pFVar16 = (FSlateBrush *)
              FSlateImageBrush::FSlateImageBrush
                        ((FSlateImageBrush *)local_1818,pFVar13,
                         (FDeprecateVector2DParameter *)&local_res8._s_0,&SelectionColor_Pressed,
                         NoTile,FullColor);
    FSlateBrush::operator=(&pFVar23->CheckedPressedImage,pFVar16);
    FCheckBoxStyle::FCheckBoxStyle(&ToolbarRadioButtonCheckBoxStyle,pFVar23);
    local_1818._0_8_ = &___7FSlateBrush__6B_;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)CONCAT44(_EStack_1774,local_1784._s_0.A));
    pvVar3 = (void *)CONCAT17(local_1928._padding_,
                              CONCAT16(local_1928.bApplyOutlineToDropShadows,
                                       CONCAT24(local_1928._4_2_,local_1928.OutlineSize)));
    if (pvVar3 != (void *)0x0) {
      FMemory::Free(pvVar3);
    }
    local_13d8[0] = &___7FSlateBrush__6B_;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_1338);
    if (local_1908[0] != (void *)0x0) {
      FMemory::Free(local_1908[0]);
    }
    local_1488[0] = &___7FSlateBrush__6B_;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_13e8);
    if (local_18d8[0] != (void *)0x0) {
      FMemory::Free(local_18d8[0]);
    }
    local_1068._0_8_ = &___7FSlateBrush__6B_;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_1068._160_8_);
    if (local_18e8[0] != (void *)0x0) {
      FMemory::Free(local_18e8[0]);
    }
    local_1278[0] = &___7FSlateBrush__6B_;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_11d8);
    if (local_18f8[0] != (void *)0x0) {
      FMemory::Free(local_18f8[0]);
    }
    local_1328[0] = &___7FSlateBrush__6B_;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_1288);
    if ((void *)local_1988._0_8_ != (void *)0x0) {
      FMemory::Free((void *)local_1988._0_8_);
    }
    FCheckBoxStyle::~FCheckBoxStyle((FCheckBoxStyle *)&local_cd8);
    atexit(``FUMGCoreStyle::Create'::__l2::<lambda_7>::operator()'::__l4::
           _dynamic_atexit_destructor_for__ToolbarRadioButtonCheckBoxStyle__);
    _Init_thread_footer(&::_TSS2);
  }
  pFVar1 = (FSlateStyleSet *)**(undefined8 **)this;
  pFVar14 = ::FName::FName((FName *)&local_res8._s_0,"ToolBar.RadioButton");
  FSlateStyleSet::Set<FCheckBoxStyle>(pFVar1,*pFVar14,&ToolbarRadioButtonCheckBoxStyle);
  if ((*(int *)(lVar2 + 0x9d4c) < ::_TSS3) && (_Init_thread_header(&::_TSS3), ::_TSS3 == -1)) {
    pFVar23 = FCheckBoxStyle::FCheckBoxStyle((FCheckBoxStyle *)&local_cd8);
    (pFVar23->CheckBoxType).Value = '\x01';
    local_res8 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
    pFVar16 = (FSlateBrush *)
              FSlateNoResource::FSlateNoResource
                        ((FSlateNoResource *)local_1328,
                         (FDeprecateVector2DParameter *)&local_res8._s_0);
    FSlateBrush::operator=(&pFVar23->UncheckedImage,pFVar16);
    local_1978._0_8_ = pvVar6;
    local_1978._8_8_ = pTVar7;
    pFVar13 = (FString *)
              (**(code **)(*(longlong *)**(undefined8 **)this + 0xf0))
                        ((longlong *)**(undefined8 **)this,local_18f8,"Common/RoundedSelection_16x",
                         L".png");
    pFVar16 = (FSlateBrush *)
              FSlateBoxBrush::FSlateBoxBrush
                        ((FSlateBoxBrush *)local_1278,pFVar13,(FMargin *)&local_1978._s_0,
                         &SelectionColor_Pressed,FullColor);
    FSlateBrush::operator=(&pFVar23->UncheckedPressedImage,pFVar16);
    local_1978._0_8_ = pvVar6;
    local_1978._8_8_ = pTVar7;
    pFVar13 = (FString *)
              (**(code **)(*(longlong *)**(undefined8 **)this + 0xf0))
                        ((longlong *)**(undefined8 **)this,local_18e8,"Common/RoundedSelection_16x",
                         L".png");
    pFVar16 = (FSlateBrush *)
              FSlateBoxBrush::FSlateBoxBrush
                        ((FSlateBoxBrush *)local_1068,pFVar13,(FMargin *)&local_1978._s_0,
                         &SelectionColor,FullColor);
    FSlateBrush::operator=(&pFVar23->UncheckedHoveredImage,pFVar16);
    local_1978._0_8_ = pvVar6;
    local_1978._8_8_ = pTVar7;
    pFVar13 = (FString *)
              (**(code **)(*(longlong *)**(undefined8 **)this + 0xf0))
                        ((longlong *)**(undefined8 **)this,local_18d8,"Common/RoundedSelection_16x",
                         L".png");
    pFVar16 = (FSlateBrush *)
              FSlateBoxBrush::FSlateBoxBrush
                        ((FSlateBoxBrush *)local_1488,pFVar13,(FMargin *)&local_1978._s_0,
                         &SelectionColor_Pressed,FullColor);
    FSlateBrush::operator=(&pFVar23->CheckedImage,pFVar16);
    local_1978._0_8_ = pvVar6;
    local_1978._8_8_ = pTVar7;
    pFVar13 = (FString *)
              (**(code **)(*(longlong *)**(undefined8 **)this + 0xf0))
                        ((longlong *)**(undefined8 **)this,local_1908,"Common/RoundedSelection_16x",
                         L".png");
    pFVar16 = (FSlateBrush *)
              FSlateBoxBrush::FSlateBoxBrush
                        ((FSlateBoxBrush *)local_13d8,pFVar13,(FMargin *)&local_1978._s_0,
                         &SelectionColor_Pressed,FullColor);
    FSlateBrush::operator=(&pFVar23->CheckedHoveredImage,pFVar16);
    local_1978._0_8_ = pvVar6;
    local_1978._8_8_ = pTVar7;
    pFVar13 = (FString *)
              (**(code **)(*(longlong *)**(undefined8 **)this + 0xf0))
                        ((longlong *)**(undefined8 **)this,&local_1928,"Common/RoundedSelection_16x"
                         ,L".png");
    pFVar16 = (FSlateBrush *)
              FSlateBoxBrush::FSlateBoxBrush
                        ((FSlateBoxBrush *)local_1818,pFVar13,(FMargin *)&local_1978._s_0,
                         &SelectionColor,FullColor);
    FSlateBrush::operator=(&pFVar23->CheckedPressedImage,pFVar16);
    FCheckBoxStyle::FCheckBoxStyle(&ToolBarToggleButtonCheckBoxStyle,pFVar23);
    local_1818._0_8_ = &___7FSlateBrush__6B_;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)CONCAT44(_EStack_1774,local_1784._s_0.A));
    pvVar3 = (void *)CONCAT17(local_1928._padding_,
                              CONCAT16(local_1928.bApplyOutlineToDropShadows,
                                       CONCAT24(local_1928._4_2_,local_1928.OutlineSize)));
    if (pvVar3 != (void *)0x0) {
      FMemory::Free(pvVar3);
    }
    local_13d8[0] = &___7FSlateBrush__6B_;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_1338);
    if (local_1908[0] != (void *)0x0) {
      FMemory::Free(local_1908[0]);
    }
    local_1488[0] = &___7FSlateBrush__6B_;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_13e8);
    if (local_18d8[0] != (void *)0x0) {
      FMemory::Free(local_18d8[0]);
    }
    local_1068._0_8_ = &___7FSlateBrush__6B_;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_1068._160_8_);
    if (local_18e8[0] != (void *)0x0) {
      FMemory::Free(local_18e8[0]);
    }
    local_1278[0] = &___7FSlateBrush__6B_;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_11d8);
    if (local_18f8[0] != (void *)0x0) {
      FMemory::Free(local_18f8[0]);
    }
    local_1328[0] = &___7FSlateBrush__6B_;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_1288);
    FCheckBoxStyle::~FCheckBoxStyle((FCheckBoxStyle *)&local_cd8);
    atexit(``FUMGCoreStyle::Create'::__l2::<lambda_7>::operator()'::__l4::
           _dynamic_atexit_destructor_for__ToolBarToggleButtonCheckBoxStyle__);
    _Init_thread_footer(&::_TSS3);
  }
  pFVar1 = (FSlateStyleSet *)**(undefined8 **)this;
  pFVar14 = ::FName::FName((FName *)&local_res8._s_0,"ToolBar.ToggleButton");
  FSlateStyleSet::Set<FCheckBoxStyle>(pFVar1,*pFVar14,&ToolBarToggleButtonCheckBoxStyle);
  pFVar1 = (FSlateStyleSet *)**(undefined8 **)this;
  pFVar15 = FButtonStyle::FButtonStyle((FButtonStyle *)local_1068,&Button);
  local_res8 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  pFVar16 = (FSlateBrush *)
            FSlateNoResource::FSlateNoResource
                      ((FSlateNoResource *)local_1488,
                       (FDeprecateVector2DParameter *)&local_res8._s_0);
  FSlateBrush::operator=(&pFVar15->Normal,pFVar16);
  local_1978._0_8_ = pvVar6;
  local_1978._8_8_ = pTVar7;
  pFVar13 = (FString *)
            (**(code **)(*(longlong *)**(undefined8 **)this + 0xf0))
                      ((longlong *)**(undefined8 **)this,local_1908,"Common/RoundedSelection_16x",
                       L".png");
  pFVar16 = (FSlateBrush *)
            FSlateBoxBrush::FSlateBoxBrush
                      ((FSlateBoxBrush *)local_13d8,pFVar13,(FMargin *)&local_1978._s_0,
                       &SelectionColor_Pressed,FullColor);
  FSlateBrush::operator=(&pFVar15->Pressed,pFVar16);
  local_1978._0_8_ = pvVar6;
  local_1978._8_8_ = pTVar7;
  pFVar13 = (FString *)
            (**(code **)(*(longlong *)**(undefined8 **)this + 0xf0))
                      ((longlong *)**(undefined8 **)this,&local_1928,"Common/RoundedSelection_16x",
                       L".png");
  pFVar16 = (FSlateBrush *)
            FSlateBoxBrush::FSlateBoxBrush
                      ((FSlateBoxBrush *)local_1818,pFVar13,(FMargin *)&local_1978._s_0,
                       &SelectionColor,FullColor);
  FSlateBrush::operator=(&pFVar15->Hovered,pFVar16);
  uVar10 = _UNK_15090c6d8;
  uVar9 = ___xmm_3f8000003f800000000000003f800000;
  *(undefined8 *)&(pFVar15->NormalForeground).SpecifiedColor.field0_0x0 =
       ___xmm_3f8000003f800000000000003f800000;
  *(undefined8 *)((longlong)&(pFVar15->NormalForeground).SpecifiedColor.field0_0x0 + 8) = uVar10;
  auVar11 = local_1968._2_14_;
  local_1968._0_2_ = 2;
  (pFVar15->NormalForeground).ColorUseRule = local_1968[0];
  (pFVar15->NormalForeground).ColorTableId = local_1968[1];
  *(undefined2 *)&(pFVar15->NormalForeground).field_0x12 = local_1968._2_2_;
  *(undefined8 *)&(pFVar15->PressedForeground).SpecifiedColor.field0_0x0 = uVar9;
  *(undefined8 *)((longlong)&(pFVar15->PressedForeground).SpecifiedColor.field0_0x0 + 8) = uVar10;
  local_1968._0_2_ = 2;
  local_1968 = CONCAT142(auVar11,local_1968._0_2_);
  (pFVar15->PressedForeground).ColorUseRule = local_1968[0];
  (pFVar15->PressedForeground).ColorTableId = local_1968[1];
  *(undefined2 *)&(pFVar15->PressedForeground).field_0x12 = local_1968._2_2_;
  *(undefined8 *)&(pFVar15->HoveredForeground).SpecifiedColor.field0_0x0 = uVar9;
  *(undefined8 *)((longlong)&(pFVar15->HoveredForeground).SpecifiedColor.field0_0x0 + 8) = uVar10;
  local_1968._0_2_ = 2;
  local_1968 = CONCAT142(auVar11,local_1968._0_2_);
  (pFVar15->HoveredForeground).ColorUseRule = local_1968[0];
  (pFVar15->HoveredForeground).ColorTableId = local_1968[1];
  *(undefined2 *)&(pFVar15->HoveredForeground).field_0x12 = local_1968._2_2_;
  *(undefined8 *)&(pFVar15->DisabledForeground).SpecifiedColor.field0_0x0 = uVar9;
  *(undefined8 *)((longlong)&(pFVar15->DisabledForeground).SpecifiedColor.field0_0x0 + 8) = uVar10;
  local_1968._0_2_ = 2;
  local_1968 = CONCAT142(auVar11,local_1968._0_2_);
  auVar5 = local_1968;
  (pFVar15->DisabledForeground).ColorUseRule = local_1968[0];
  (pFVar15->DisabledForeground).ColorTableId = local_1968[1];
  *(undefined2 *)&(pFVar15->DisabledForeground).field_0x12 = local_1968._2_2_;
  local_1968 = auVar5;
  pFVar14 = ::FName::FName((FName *)&local_res10._s_0,"ToolBar.Button");
  FSlateStyleSet::Set<FButtonStyle>(pFVar1,*pFVar14,pFVar15);
  local_1818._0_8_ = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)CONCAT44(_EStack_1774,local_1784._s_0.A));
  pvVar3 = (void *)CONCAT17(local_1928._padding_,
                            CONCAT16(local_1928.bApplyOutlineToDropShadows,
                                     CONCAT24(local_1928._4_2_,local_1928.OutlineSize)));
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  local_13d8[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_1338);
  if (local_1908[0] != (void *)0x0) {
    FMemory::Free(local_1908[0]);
  }
  local_1488[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_13e8);
  local_1068._0_8_ = &___7FButtonStyle__6B_;
  local_e48 = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_da8.ReferenceController);
  local_ef8 = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_e58.ReferenceController);
  local_fa8 = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_f08.ReferenceController);
  local_1068._16_8_ = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_fb8.ReferenceController);
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)local_1068);
  pFVar1 = (FSlateStyleSet *)**(undefined8 **)this;
  pFVar17 = ::operator_new(0xb0);
  pFVar16 = pFVar21;
  if (pFVar17 != (FSlateBoxBrush *)0x0) {
    local_1978._0_8_ = pvVar6;
    local_1978._8_8_ = pTVar7;
    pFVar13 = (FString *)
              (**(code **)(*(longlong *)**(undefined8 **)this + 0xf0))
                        ((longlong *)**(undefined8 **)this,&local_1928,"Common/RoundedSelection_16x"
                         ,L".png");
    pFVar16 = (FSlateBrush *)
              FSlateBoxBrush::FSlateBoxBrush
                        (pFVar17,pFVar13,(FMargin *)&local_1978._s_0,&SelectionColor_Pressed,
                         FullColor);
  }
  pFVar14 = ::FName::FName((FName *)&local_res8._s_0,"ToolBar.Button.Checked");
  FSlateStyleSet::Set<FSlateBoxBrush>(pFVar1,*pFVar14,(FSlateBoxBrush *)pFVar16);
  if ((pFVar17 != (FSlateBoxBrush *)0x0) &&
     (pvVar3 = (void *)CONCAT17(local_1928._padding_,
                                CONCAT16(local_1928.bApplyOutlineToDropShadows,
                                         CONCAT24(local_1928._4_2_,local_1928.OutlineSize))),
     pvVar3 != (void *)0x0)) {
    FMemory::Free(pvVar3);
  }
  cVar24 = '\0';
  pFVar1 = (FSlateStyleSet *)**(undefined8 **)this;
  pFVar17 = ::operator_new(0xb0);
  pFVar16 = pFVar21;
  if (pFVar17 != (FSlateBoxBrush *)0x0) {
    cVar24 = -0x80;
    local_1978._0_8_ = pvVar6;
    local_1978._8_8_ = pTVar7;
    pFVar13 = (FString *)
              (**(code **)(*(longlong *)**(undefined8 **)this + 0xf0))
                        ((longlong *)**(undefined8 **)this,&local_1928,"Common/RoundedSelection_16x"
                         ,L".png");
    pFVar16 = (FSlateBrush *)
              FSlateBoxBrush::FSlateBoxBrush
                        (pFVar17,pFVar13,(FMargin *)&local_1978._s_0,&SelectionColor_Pressed,
                         FullColor);
  }
  pFVar14 = ::FName::FName((FName *)&local_res8._s_0,"ToolBar.Button.Checked_Hovered");
  FSlateStyleSet::Set<FSlateBoxBrush>(pFVar1,*pFVar14,(FSlateBoxBrush *)pFVar16);
  if ((cVar24 < '\0') &&
     (pvVar3 = (void *)CONCAT17(local_1928._padding_,
                                CONCAT16(local_1928.bApplyOutlineToDropShadows,
                                         CONCAT24(local_1928._4_2_,local_1928.OutlineSize))),
     pvVar3 != (void *)0x0)) {
    FMemory::Free(pvVar3);
  }
  pFVar1 = (FSlateStyleSet *)**(undefined8 **)this;
  pFVar17 = ::operator_new(0xb0);
  if (pFVar17 != (FSlateBoxBrush *)0x0) {
    local_1978._0_8_ = pvVar6;
    local_1978._8_8_ = pTVar7;
    pFVar13 = (FString *)
              (**(code **)(*(longlong *)**(undefined8 **)this + 0xf0))
                        ((longlong *)**(undefined8 **)this,&local_1928,"Common/RoundedSelection_16x"
                         ,L".png");
    pFVar21 = (FSlateBrush *)
              FSlateBoxBrush::FSlateBoxBrush
                        (pFVar17,pFVar13,(FMargin *)&local_1978._s_0,&SelectionColor,FullColor);
  }
  pFVar14 = ::FName::FName((FName *)&local_res8._s_0,"ToolBar.Button.Checked_Pressed");
  FSlateStyleSet::Set<FSlateBoxBrush>(pFVar1,*pFVar14,(FSlateBoxBrush *)pFVar21);
  if ((pFVar17 != (FSlateBoxBrush *)0x0) &&
     (pvVar3 = (void *)CONCAT17(local_1928._padding_,
                                CONCAT16(local_1928.bApplyOutlineToDropShadows,
                                         CONCAT24(local_1928._4_2_,local_1928.OutlineSize))),
     pvVar3 != (void *)0x0)) {
    FMemory::Free(pvVar3);
  }
  pFVar1 = (FSlateStyleSet *)**(undefined8 **)this;
  pFVar14 = ::FName::FName((FName *)&local_res8._s_0,"ComboButton");
  pFVar22 = (FComboButtonStyle *)
            (**(code **)(pFVar1->_padding_ + 0xa0))(pFVar1,FComboButtonStyle::TypeName,*pFVar14,0,1)
  ;
  if (((pFVar22 == (FComboButtonStyle *)0x0) &&
      (pFVar22 = &::Default, *(int *)(lVar2 + 0x9d4c) < ::_TSS0)) &&
     (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    FComboButtonStyle::FComboButtonStyle(&::Default);
    atexit(`FComboButtonStyle::GetDefault'::__l2::_dynamic_atexit_destructor_for__Default__);
    _Init_thread_footer(&::_TSS0);
  }
  pFVar14 = ::FName::FName((FName *)&local_res10._s_0,"ToolBar.SimpleComboButton");
  FSlateStyleSet::Set<FComboButtonStyle>(pFVar1,*pFVar14,pFVar22);
  pFVar1 = (FSlateStyleSet *)**(undefined8 **)this;
  pFVar14 = ::FName::FName(&local_res18,"ToolBar.IconSize");
  FSlateStyleSet::Set(pFVar1,*pFVar14,&CoreStyleConstants::Icon20x20);
  return;
}

// operator() @ 14255e0b0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall `FUMGCoreStyle::Create'::__l2::<lambda_8>::operator()(void *this)

{
  FSlateStyleSet *pFVar1;
  longlong lVar2;
  undefined1 auVar3 [16];
  float fVar4;
  float fVar5;
  void *pvVar6;
  TObjectPtr<UObject>_u_0 TVar7;
  void *pvVar8;
  TReferenceControllerBase<1> *pTVar9;
  FSlateBoxBrush *pFVar10;
  FString *pFVar11;
  FSlateBoxBrush *pFVar12;
  FName *pFVar13;
  FSlateImageBrush *pFVar14;
  FSlateImageBrush *pFVar15;
  FLegacySlateFontInfoCache *pFVar16;
  FEditableTextBoxStyle *pFVar17;
  FButtonStyle *pFVar18;
  FSlateBrush *pFVar19;
  FSlateBorderBrush *this_00;
  FSlateBorderBrush *pFVar20;
  FSlateBorderBrush *pFVar21;
  FCheckBoxStyle *pFVar22;
  char cVar23;
  TVector2<float>_u_0 local_res8;
  FName local_res10;
  FName local_res18;
  FLinearColor_u_0 local_1c78;
  FLinearColor_u_0 local_1c68;
  undefined1 local_1c58 [16];
  undefined1 local_1c48 [8];
  float fStack_1c40;
  float fStack_1c3c;
  FFontOutlineSettings local_1c38;
  void *local_1c18 [2];
  undefined1 local_1c08 [16];
  void *local_1bf8 [2];
  void *local_1be8 [2];
  void *local_1bd8 [2];
  void *local_1bc8 [2];
  undefined **local_1bb8;
  undefined1 local_1bb0 [56];
  FSharedReferencer<1> local_1b78;
  FLinearColor_u_0 local_1b50;
  ESlateColorStylingMode local_1b40;
  EStyleColor EStack_1b3f;
  undefined2 uStack_1b3e;
  FDeprecateSlateVector2D local_1b3c;
  FLinearColor_u_0 local_1b34;
  FLinearColor_u_0 local_1b24;
  ESlateColorStylingMode EStack_1b14;
  EStyleColor EStack_1b13;
  undefined2 uStack_1b12;
  FLinearColor_u_0 local_1b10;
  ESlateColorStylingMode local_1b00;
  EStyleColor EStack_1aff;
  undefined2 uStack_1afe;
  undefined **local_1af8 [20];
  FSharedReferencer<1> local_1a58;
  undefined **local_1a48 [20];
  FSharedReferencer<1> local_19a8;
  undefined **local_1998 [20];
  FSharedReferencer<1> local_18f8;
  ETextTransformPolicy local_18e8;
  ETextOverflowPolicy local_18e7;
  undefined1 local_18d8 [160];
  TReferenceControllerBase<1> *local_1838;
  undefined **local_1828 [20];
  TReferenceControllerBase<1> *local_1788;
  undefined **local_1778 [20];
  TReferenceControllerBase<1> *local_16d8;
  undefined **local_16c8 [20];
  TReferenceControllerBase<1> *local_1628;
  undefined **local_1618 [20];
  TReferenceControllerBase<1> *local_1578;
  undefined **local_1568 [20];
  TReferenceControllerBase<1> *local_14c8;
  undefined **local_14b8 [20];
  TReferenceControllerBase<1> *local_1418;
  undefined1 local_1408 [176];
  FSharedReferencer<1> local_1358;
  undefined **local_1348;
  FSharedReferencer<1> local_12a8;
  undefined **local_1298;
  FSharedReferencer<1> local_11f8;
  undefined **local_11e8;
  FSharedReferencer<1> local_1148;
  FButtonStyle local_1078;
  FEditableTextBoxStyle local_ce8;
  
  pFVar21 = (FSlateBorderBrush *)0x0;
  local_res8._s_0 = local_res8._s_0 & 0xffffffff00000000;
  pFVar1 = (FSlateStyleSet *)**(undefined8 **)this;
  pFVar10 = ::operator_new(0xb0);
  pTVar9 = _UNK_15076b1f8;
  pvVar8 = ___xmm_3f8000003f8000003f8000003f800000;
  pFVar12 = (FSlateBoxBrush *)pFVar21;
  if (pFVar10 != (FSlateBoxBrush *)0x0) {
    local_1c48 = (undefined1  [8])___xmm_3f8000003f8000003f8000003f800000;
    _fStack_1c40 = _UNK_15076b1f8;
    local_1c08._0_8_ = ___xmm_3e0000003e0000003e0000003e000000;
    local_1c08._8_8_ = _UNK_150925108;
    pFVar11 = (FString *)
              (**(code **)(*(longlong *)**(undefined8 **)this + 0xf0))
                        ((longlong *)**(undefined8 **)this,&local_1c78,"Old/Menu_Background",L".png"
                        );
    pFVar12 = FSlateBoxBrush::FSlateBoxBrush
                        (pFVar10,pFVar11,(FMargin *)local_1c08,(FLinearColor *)local_1c48,FullColor)
    ;
  }
  pFVar13 = ::FName::FName((FName *)&local_res8._s_0,"Menu.Background");
  FSlateStyleSet::Set<FSlateBoxBrush>(pFVar1,*pFVar13,pFVar12);
  if ((pFVar10 != (FSlateBoxBrush *)0x0) && ((void *)local_1c78._0_8_ != (void *)0x0)) {
    FMemory::Free((void *)local_1c78._0_8_);
  }
  pFVar1 = (FSlateStyleSet *)**(undefined8 **)this;
  pFVar14 = ::operator_new(0xb0);
  pFVar15 = (FSlateImageBrush *)pFVar21;
  if (pFVar14 != (FSlateImageBrush *)0x0) {
    local_res8._s_0 = (TVector2<float>_u_0_s_0)CoreStyleConstants::Icon16x16;
    local_1c78._0_8_ = pvVar8;
    local_1c78._8_8_ = pTVar9;
    pFVar11 = (FString *)
              (**(code **)(*(longlong *)**(undefined8 **)this + 0xf0))
                        ((longlong *)**(undefined8 **)this,local_1c08,"Icons/Icon_tab_toolbar_16px",
                         L".png");
    pFVar15 = FSlateImageBrush::FSlateImageBrush
                        (pFVar14,pFVar11,(FDeprecateVector2DParameter *)&local_res8._s_0,
                         (FLinearColor *)&local_1c78._s_0,NoTile,FullColor);
  }
  pFVar13 = ::FName::FName(&local_res10,"Menu.Icon");
  FSlateStyleSet::Set<FSlateImageBrush>(pFVar1,*pFVar13,pFVar15);
  if ((pFVar14 != (FSlateImageBrush *)0x0) && ((void *)local_1c08._0_8_ != (void *)0x0)) {
    FMemory::Free((void *)local_1c08._0_8_);
  }
  pFVar1 = (FSlateStyleSet *)**(undefined8 **)this;
  pFVar14 = ::operator_new(0xb0);
  pFVar15 = (FSlateImageBrush *)pFVar21;
  if (pFVar14 != (FSlateImageBrush *)0x0) {
    local_res8._s_0 = (TVector2<float>_u_0_s_0)CoreStyleConstants::Icon16x16;
    local_1c78._0_8_ = pvVar8;
    local_1c78._8_8_ = pTVar9;
    pFVar11 = (FString *)
              (**(code **)(*(longlong *)**(undefined8 **)this + 0xf0))
                        ((longlong *)**(undefined8 **)this,local_1c08,"Icons/toolbar_expand_16x",
                         L".png");
    pFVar15 = FSlateImageBrush::FSlateImageBrush
                        (pFVar14,pFVar11,(FDeprecateVector2DParameter *)&local_res8._s_0,
                         (FLinearColor *)&local_1c78._s_0,NoTile,FullColor);
  }
  pFVar13 = ::FName::FName(&local_res10,"Menu.Expand");
  FSlateStyleSet::Set<FSlateImageBrush>(pFVar1,*pFVar13,pFVar15);
  if ((pFVar14 != (FSlateImageBrush *)0x0) && ((void *)local_1c08._0_8_ != (void *)0x0)) {
    FMemory::Free((void *)local_1c08._0_8_);
  }
  pFVar1 = (FSlateStyleSet *)**(undefined8 **)this;
  pFVar14 = ::operator_new(0xb0);
  pFVar15 = (FSlateImageBrush *)pFVar21;
  if (pFVar14 != (FSlateImageBrush *)0x0) {
    local_res8._s_0 = (TVector2<float>_u_0_s_0)CoreStyleConstants::Icon8x8;
    local_1c78._0_8_ = pvVar8;
    local_1c78._8_8_ = pTVar9;
    pFVar11 = (FString *)
              (**(code **)(*(longlong *)**(undefined8 **)this + 0xf0))
                        ((longlong *)**(undefined8 **)this,local_1c08,"Common/SubmenuArrow",L".png")
    ;
    pFVar15 = FSlateImageBrush::FSlateImageBrush
                        (pFVar14,pFVar11,(FDeprecateVector2DParameter *)&local_res8._s_0,
                         (FLinearColor *)&local_1c78._s_0,NoTile,FullColor);
  }
  pFVar13 = ::FName::FName(&local_res10,"Menu.SubMenuIndicator");
  FSlateStyleSet::Set<FSlateImageBrush>(pFVar1,*pFVar13,pFVar15);
  if ((pFVar14 != (FSlateImageBrush *)0x0) && ((void *)local_1c08._0_8_ != (void *)0x0)) {
    FMemory::Free((void *)local_1c08._0_8_);
  }
  pFVar1 = (FSlateStyleSet *)**(undefined8 **)this;
  local_1c78._0_8_ = ___xmm_40800000408000004080000040800000;
  local_1c78._8_8_ = _UNK_1509253f8;
  pFVar13 = ::FName::FName((FName *)&local_res8._s_0,"Menu.SToolBarComboButtonBlock.Padding");
  FSlateStyleSet::Set(pFVar1,*pFVar13,(FMargin *)&local_1c78._s_0);
  pFVar1 = (FSlateStyleSet *)**(undefined8 **)this;
  local_1c78._0_8_ = ___xmm_40800000408000004080000040800000;
  local_1c78._8_8_ = _UNK_1509253f8;
  pFVar13 = ::FName::FName((FName *)&local_res8._s_0,"Menu.SToolBarButtonBlock.Padding");
  FSlateStyleSet::Set(pFVar1,*pFVar13,(FMargin *)&local_1c78._s_0);
  pFVar1 = (FSlateStyleSet *)**(undefined8 **)this;
  local_1c78._0_8_ = ___xmm_40800000408000004080000040800000;
  local_1c78._8_8_ = _UNK_1509253f8;
  pFVar13 = ::FName::FName((FName *)&local_res8._s_0,"Menu.SToolBarCheckComboButtonBlock.Padding");
  FSlateStyleSet::Set(pFVar1,*pFVar13,(FMargin *)&local_1c78._s_0);
  pFVar1 = (FSlateStyleSet *)**(undefined8 **)this;
  local_1c78._0_8_ = 0;
  local_1c78._8_8_ = 0;
  pFVar13 = ::FName::FName((FName *)&local_res8._s_0,"Menu.SToolBarButtonBlock.CheckBox.Padding");
  FSlateStyleSet::Set(pFVar1,*pFVar13,(FMargin *)&local_1c78._s_0);
  pFVar1 = (FSlateStyleSet *)**(undefined8 **)this;
  pFVar13 = ::FName::FName((FName *)&local_res8._s_0,
                           "Menu.SToolBarComboButtonBlock.ComboButton.Color");
  FSlateStyleSet::Set(pFVar1,*pFVar13,&DefaultForeground);
  pFVar1 = (FSlateStyleSet *)**(undefined8 **)this;
  local_1c78._0_8_ = ___xmm_40800000408000004000000041900000;
  local_1c78._8_8_ = _UNK_1509253e8;
  pFVar13 = ::FName::FName((FName *)&local_res8._s_0,"Menu.Block.IndentedPadding");
  FSlateStyleSet::Set(pFVar1,*pFVar13,(FMargin *)&local_1c78._s_0);
  pFVar1 = (FSlateStyleSet *)**(undefined8 **)this;
  local_1c78._0_8_ = ___xmm_40800000408000004000000040000000;
  local_1c78._8_8_ = _UNK_1509253d8;
  pFVar13 = ::FName::FName((FName *)&local_res8._s_0,"Menu.Block.Padding");
  FSlateStyleSet::Set(pFVar1,*pFVar13,(FMargin *)&local_1c78._s_0);
  pFVar1 = (FSlateStyleSet *)**(undefined8 **)this;
  pFVar10 = ::operator_new(0xb0);
  pFVar12 = (FSlateBoxBrush *)pFVar21;
  if (pFVar10 != (FSlateBoxBrush *)0x0) {
    local_1c78._0_8_ = pvVar8;
    local_1c78._8_8_ = pTVar9;
    local_1c08._0_8_ = ___xmm_3e0000003e0000003e0000003e000000;
    local_1c08._8_8_ = _UNK_150925108;
    pFVar11 = (FString *)
              (**(code **)(*(longlong *)**(undefined8 **)this + 0xf0))
                        ((longlong *)**(undefined8 **)this,local_1c48,"Old/Button",L".png");
    pFVar12 = FSlateBoxBrush::FSlateBoxBrush
                        (pFVar10,pFVar11,(FMargin *)local_1c08,(FLinearColor *)&local_1c78._s_0,
                         FullColor);
  }
  pFVar13 = ::FName::FName((FName *)&local_res8._s_0,"Menu.Separator");
  FSlateStyleSet::Set<FSlateBoxBrush>(pFVar1,*pFVar13,pFVar12);
  if ((pFVar10 != (FSlateBoxBrush *)0x0) && (local_1c48 != (undefined1  [8])0x0)) {
    FMemory::Free((void *)local_1c48);
  }
  pFVar1 = (FSlateStyleSet *)**(undefined8 **)this;
  local_1c78._0_8_ = ___xmm_3f0000003f0000003f0000003f000000;
  local_1c78._8_8_ = _UNK_150689628;
  pFVar13 = ::FName::FName((FName *)&local_res8._s_0,"Menu.Separator.Padding");
  FSlateStyleSet::Set(pFVar1,*pFVar13,(FMargin *)&local_1c78._s_0);
  pFVar1 = (FSlateStyleSet *)**(undefined8 **)this;
  local_1bb8 = &___7FTextBlockStyle__6B_;
  FSlateFontInfo::FSlateFontInfo((FSlateFontInfo *)local_1bb0,&NormalText.Font);
  local_1b40 = NormalText.ColorAndOpacity.ColorUseRule;
  EStack_1b3f = NormalText.ColorAndOpacity.ColorTableId;
  uStack_1b3e = NormalText.ColorAndOpacity._18_2_;
  local_1b50 = NormalText.ColorAndOpacity.SpecifiedColor.field0_0x0;
  local_1b3c = NormalText.ShadowOffset;
  EStack_1b14 = NormalText.SelectedBackgroundColor.ColorUseRule;
  EStack_1b13 = NormalText.SelectedBackgroundColor.ColorTableId;
  uStack_1b12 = NormalText.SelectedBackgroundColor._18_2_;
  local_1b34 = NormalText.ShadowColorAndOpacity.field0_0x0;
  local_1b00 = NormalText.HighlightColor.ColorUseRule;
  EStack_1aff = NormalText.HighlightColor.ColorTableId;
  uStack_1afe = NormalText.HighlightColor._18_2_;
  local_1b24._0_12_ = NormalText.SelectedBackgroundColor.SpecifiedColor.field0_0x0._0_12_;
  local_1b24._s_0.A = NormalText.SelectedBackgroundColor.SpecifiedColor.field0_0x0._12_4_;
  local_1b10 = NormalText.HighlightColor.SpecifiedColor.field0_0x0;
  FSlateBrush::FSlateBrush((FSlateBrush *)local_1af8,&NormalText.HighlightShape);
  FSlateBrush::FSlateBrush((FSlateBrush *)local_1a48,&NormalText.StrikeBrush);
  FSlateBrush::FSlateBrush((FSlateBrush *)local_1998,&NormalText.UnderlineBrush);
  local_18e8 = NormalText.TransformPolicy;
  local_18e7 = NormalText.OverflowPolicy;
  local_1c68._0_8_ = (ulonglong)(byte)local_1c68._7_1_ << 0x38;
  local_1c68._8_8_ = 0;
  local_1c58 = (undefined1  [16])FLinearColor::Black.field0_0x0;
  pFVar13 = ::FName::FName(&local_res10,"Regular");
  local_res8._0_4_ = *(float *)&pFVar13->ComparisonIndex;
  local_res8._4_4_ = (float)pFVar13->Number;
  pFVar16 = FLegacySlateFontInfoCache::Get();
  FLegacySlateFontInfoCache::GetDefaultFont
            (pFVar16,(TSharedRef<FCompositeFont_const_,1> *)local_1c48);
  local_1c78._0_8_ = local_1c48;
  local_1c78._8_8_ = _fStack_1c40;
  if ((TReferenceControllerBase<1> *)_fStack_1c40 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    *(atomic<int> *)(_fStack_1c40 + 8) = (atomic<int>)((int)*(atomic<int> *)(_fStack_1c40 + 8) + 1);
    UNLOCK();
  }
  fVar5 = __real_41100000;
  FSlateFontInfo::FSlateFontInfo
            ((FSlateFontInfo *)local_18d8,(TSharedPtr<FCompositeFont_const_,1> *)&local_1c78._s_0,
             __real_41100000,(FName *)&local_res8._s_0,(FFontOutlineSettings *)&local_1c68._s_0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)_fStack_1c40);
  FSlateFontInfo::operator=((FSlateFontInfo *)local_1bb0,(FSlateFontInfo *)local_18d8);
  pFVar13 = ::FName::FName(&local_res18,"Menu.Label");
  FSlateStyleSet::Set<FTextBlockStyle>(pFVar1,*pFVar13,(FTextBlockStyle *)&local_1bb8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_18d8._56_8_);
  local_1998[0] = &___7FSlateBrush__6B_;
  local_1bb8 = &___7FTextBlockStyle__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18f8.ReferenceController);
  local_1a48[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_19a8.ReferenceController);
  local_1af8[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1a58.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1b78.ReferenceController);
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)&local_1bb8);
  pFVar1 = (FSlateStyleSet *)**(undefined8 **)this;
  pFVar17 = FEditableTextBoxStyle::FEditableTextBoxStyle(&local_ce8,&NormalEditableTextBoxStyle);
  local_1c58 = (undefined1  [16])FLinearColor::Black.field0_0x0;
  local_1c68._0_8_ = local_1c68._0_8_ & 0xff00000000000000;
  local_1c68._8_8_ = 0;
  pFVar13 = ::FName::FName(&local_res10,"Regular");
  local_res8._0_4_ = *(float *)&pFVar13->ComparisonIndex;
  local_res8._4_4_ = (float)pFVar13->Number;
  pFVar16 = FLegacySlateFontInfoCache::Get();
  FLegacySlateFontInfoCache::GetDefaultFont
            (pFVar16,(TSharedRef<FCompositeFont_const_,1> *)local_1c48);
  local_1c78._0_8_ = local_1c48;
  local_1c78._8_8_ = _fStack_1c40;
  if ((TReferenceControllerBase<1> *)_fStack_1c40 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    *(atomic<int> *)(_fStack_1c40 + 8) = (atomic<int>)((int)*(atomic<int> *)(_fStack_1c40 + 8) + 1);
    UNLOCK();
  }
  FSlateFontInfo::FSlateFontInfo
            ((FSlateFontInfo *)local_18d8,(TSharedPtr<FCompositeFont_const_,1> *)&local_1c78._s_0,
             fVar5,(FName *)&local_res8._s_0,(FFontOutlineSettings *)&local_1c68._s_0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)_fStack_1c40);
  FSlateFontInfo::operator=(&(pFVar17->TextStyle).Font,(FSlateFontInfo *)local_18d8);
  pFVar13 = ::FName::FName(&local_res18,"Menu.EditableText");
  FSlateStyleSet::Set<FEditableTextBoxStyle>(pFVar1,*pFVar13,pFVar17);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_18d8._56_8_);
  local_ce8._padding_ = (longlong)&___7FEditableTextBoxStyle__6B_;
  FScrollBarStyle::~FScrollBarStyle(&local_ce8.ScrollBarStyle);
  FTextBlockStyle::~FTextBlockStyle(&local_ce8.TextStyle);
  local_ce8.BackgroundImageReadOnly._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_ce8.BackgroundImageReadOnly.ResourceHandle.Data.SharedReferenceCount.
             ReferenceController);
  local_ce8.BackgroundImageFocused._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_ce8.BackgroundImageFocused.ResourceHandle.Data.SharedReferenceCount.
             ReferenceController);
  local_ce8.BackgroundImageHovered._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_ce8.BackgroundImageHovered.ResourceHandle.Data.SharedReferenceCount.
             ReferenceController);
  local_ce8.BackgroundImageNormal._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_ce8.BackgroundImageNormal.ResourceHandle.Data.SharedReferenceCount.
             ReferenceController);
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)&local_ce8);
  pFVar1 = (FSlateStyleSet *)**(undefined8 **)this;
  local_1bb8 = &___7FTextBlockStyle__6B_;
  FSlateFontInfo::FSlateFontInfo((FSlateFontInfo *)local_1bb0,&NormalText.Font);
  local_1b40 = NormalText.ColorAndOpacity.ColorUseRule;
  EStack_1b3f = NormalText.ColorAndOpacity.ColorTableId;
  uStack_1b3e = NormalText.ColorAndOpacity._18_2_;
  local_1b50 = NormalText.ColorAndOpacity.SpecifiedColor.field0_0x0;
  local_1b3c = NormalText.ShadowOffset;
  EStack_1b14 = NormalText.SelectedBackgroundColor.ColorUseRule;
  EStack_1b13 = NormalText.SelectedBackgroundColor.ColorTableId;
  uStack_1b12 = NormalText.SelectedBackgroundColor._18_2_;
  local_1b34 = NormalText.ShadowColorAndOpacity.field0_0x0;
  local_1b00 = NormalText.HighlightColor.ColorUseRule;
  EStack_1aff = NormalText.HighlightColor.ColorTableId;
  uStack_1afe = NormalText.HighlightColor._18_2_;
  local_1b24._0_12_ = NormalText.SelectedBackgroundColor.SpecifiedColor.field0_0x0._0_12_;
  local_1b24._s_0.A = NormalText.SelectedBackgroundColor.SpecifiedColor.field0_0x0._12_4_;
  local_1b10 = NormalText.HighlightColor.SpecifiedColor.field0_0x0;
  FSlateBrush::FSlateBrush((FSlateBrush *)local_1af8,&NormalText.HighlightShape);
  FSlateBrush::FSlateBrush((FSlateBrush *)local_1a48,&NormalText.StrikeBrush);
  FSlateBrush::FSlateBrush((FSlateBrush *)local_1998,&NormalText.UnderlineBrush);
  local_18e8 = NormalText.TransformPolicy;
  local_18e7 = NormalText.OverflowPolicy;
  local_1c68._0_8_ = local_1c68._0_8_ & 0xff00000000000000;
  local_1c68._8_8_ = (TReferenceControllerBase<1> *)0x0;
  local_1c58 = (undefined1  [16])FLinearColor::Black.field0_0x0;
  pFVar13 = ::FName::FName(&local_res10,"Regular");
  local_res8._0_4_ = *(float *)&pFVar13->ComparisonIndex;
  local_res8._4_4_ = (float)pFVar13->Number;
  pFVar16 = FLegacySlateFontInfoCache::Get();
  FLegacySlateFontInfoCache::GetDefaultFont
            (pFVar16,(TSharedRef<FCompositeFont_const_,1> *)local_1c48);
  local_1c78._0_8_ = local_1c48;
  local_1c78._8_8_ = _fStack_1c40;
  if ((TReferenceControllerBase<1> *)_fStack_1c40 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    *(atomic<int> *)(_fStack_1c40 + 8) = (atomic<int>)((int)*(atomic<int> *)(_fStack_1c40 + 8) + 1);
    UNLOCK();
  }
  fVar4 = __real_41000000;
  FSlateFontInfo::FSlateFontInfo
            ((FSlateFontInfo *)local_18d8,(TSharedPtr<FCompositeFont_const_,1> *)&local_1c78._s_0,
             __real_41000000,(FName *)&local_res8._s_0,(FFontOutlineSettings *)&local_1c68._s_0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)_fStack_1c40);
  FSlateFontInfo::operator=((FSlateFontInfo *)local_1bb0,(FSlateFontInfo *)local_18d8);
  pFVar13 = ::FName::FName(&local_res18,"Menu.Keybinding");
  FSlateStyleSet::Set<FTextBlockStyle>(pFVar1,*pFVar13,(FTextBlockStyle *)&local_1bb8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_18d8._56_8_);
  local_1bb8 = &___7FTextBlockStyle__6B_;
  local_1998[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18f8.ReferenceController);
  local_1a48[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_19a8.ReferenceController);
  local_1af8[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1a58.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1b78.ReferenceController);
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)&local_1bb8);
  pFVar1 = (FSlateStyleSet *)**(undefined8 **)this;
  local_1bb8 = &___7FTextBlockStyle__6B_;
  FSlateFontInfo::FSlateFontInfo((FSlateFontInfo *)local_1bb0,&NormalText.Font);
  local_1b40 = NormalText.ColorAndOpacity.ColorUseRule;
  EStack_1b3f = NormalText.ColorAndOpacity.ColorTableId;
  uStack_1b3e = NormalText.ColorAndOpacity._18_2_;
  local_1b50 = NormalText.ColorAndOpacity.SpecifiedColor.field0_0x0;
  local_1b3c = NormalText.ShadowOffset;
  EStack_1b14 = NormalText.SelectedBackgroundColor.ColorUseRule;
  EStack_1b13 = NormalText.SelectedBackgroundColor.ColorTableId;
  uStack_1b12 = NormalText.SelectedBackgroundColor._18_2_;
  local_1b34 = NormalText.ShadowColorAndOpacity.field0_0x0;
  local_1b00 = NormalText.HighlightColor.ColorUseRule;
  EStack_1aff = NormalText.HighlightColor.ColorTableId;
  uStack_1afe = NormalText.HighlightColor._18_2_;
  local_1b24._0_12_ = NormalText.SelectedBackgroundColor.SpecifiedColor.field0_0x0._0_12_;
  local_1b24._s_0.A = NormalText.SelectedBackgroundColor.SpecifiedColor.field0_0x0._12_4_;
  local_1b10 = NormalText.HighlightColor.SpecifiedColor.field0_0x0;
  FSlateBrush::FSlateBrush((FSlateBrush *)local_1af8,&NormalText.HighlightShape);
  FSlateBrush::FSlateBrush((FSlateBrush *)local_1a48,&NormalText.StrikeBrush);
  FSlateBrush::FSlateBrush((FSlateBrush *)local_1998,&NormalText.UnderlineBrush);
  local_18e8 = NormalText.TransformPolicy;
  local_18e7 = NormalText.OverflowPolicy;
  local_1c38._0_8_ = (ulonglong)(byte)local_1c38._padding_ << 0x38;
  local_1c38.OutlineMaterial.field0_0x0.DebugPtr = (TObjectPtr<UObject>_u_0)0x0;
  local_1c38.OutlineColor.field0_0x0._s_0 = FLinearColor::Black.field0_0x0;
  pFVar13 = ::FName::FName(&local_res10,"Regular");
  local_res8._0_4_ = *(float *)&pFVar13->ComparisonIndex;
  local_res8._4_4_ = (float)pFVar13->Number;
  pFVar16 = FLegacySlateFontInfoCache::Get();
  FLegacySlateFontInfoCache::GetDefaultFont
            (pFVar16,(TSharedRef<FCompositeFont_const_,1> *)local_1c48);
  local_1c78._0_8_ = local_1c48;
  local_1c78._8_8_ = _fStack_1c40;
  if ((TReferenceControllerBase<1> *)_fStack_1c40 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    *(atomic<int> *)(_fStack_1c40 + 8) = (atomic<int>)((int)*(atomic<int> *)(_fStack_1c40 + 8) + 1);
    UNLOCK();
  }
  FSlateFontInfo::FSlateFontInfo
            ((FSlateFontInfo *)local_18d8,(TSharedPtr<FCompositeFont_const_,1> *)&local_1c78._s_0,
             fVar4,(FName *)&local_res8._s_0,&local_1c38);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)_fStack_1c40);
  FSlateFontInfo::operator=((FSlateFontInfo *)local_1bb0,(FSlateFontInfo *)local_18d8);
  auVar3[0xf] = 0;
  auVar3._0_15_ = local_1c58._1_15_;
  local_1c58 = auVar3 << 8;
  auVar3 = local_1c58;
  local_1b50._8_8_ = _UNK_1509252d8;
  local_1b50._0_8_ = ___xmm_3f8000003ecccccd3ecccccd3ecccccd;
  local_1b40 = local_1c58[0];
  EStack_1b3f = local_1c58[1];
  uStack_1b3e = local_1c58._2_2_;
  local_1c58 = auVar3;
  pFVar13 = ::FName::FName(&local_res18,"Menu.Heading");
  FSlateStyleSet::Set<FTextBlockStyle>(pFVar1,*pFVar13,(FTextBlockStyle *)&local_1bb8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_18d8._56_8_);
  local_1bb8 = &___7FTextBlockStyle__6B_;
  local_1998[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18f8.ReferenceController);
  local_1a48[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_19a8.ReferenceController);
  local_1af8[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1a58.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1b78.ReferenceController);
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)&local_1bb8);
  lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  pFVar1 = (FSlateStyleSet *)**(undefined8 **)this;
  local_1c48._4_4_ = MenuBlockPadding.Top + __real_41200000;
  local_1c48._0_4_ = MenuBlockPadding.Left;
  fStack_1c3c = MenuBlockPadding.Bottom;
  fStack_1c40 = MenuBlockPadding.Right;
  pFVar13 = ::FName::FName((FName *)&local_res8._s_0,"Menu.Heading.Padding");
  FSlateStyleSet::Set(pFVar1,*pFVar13,(FMargin *)local_1c48);
  if ((*(int *)(lVar2 + 0x9d4c) < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
    pFVar22 = FCheckBoxStyle::FCheckBoxStyle((FCheckBoxStyle *)&local_ce8);
    local_res8._s_0 = (TVector2<float>_u_0_s_0)CoreStyleConstants::Icon14x14;
    local_1c78._0_8_ = pvVar8;
    local_1c78._8_8_ = pTVar9;
    pFVar11 = (FString *)
              (**(code **)(*(longlong *)**(undefined8 **)this + 0xf0))
                        ((longlong *)**(undefined8 **)this,&local_1c68,"Common/SmallCheckBox",
                         L".png");
    pFVar19 = (FSlateBrush *)
              FSlateImageBrush::FSlateImageBrush
                        ((FSlateImageBrush *)&local_1bb8,pFVar11,
                         (FDeprecateVector2DParameter *)&local_res8._s_0,
                         (FLinearColor *)&local_1c78._s_0,NoTile,FullColor);
    FSlateBrush::operator=(&pFVar22->UncheckedImage,pFVar19);
    local_res8._s_0 = (TVector2<float>_u_0_s_0)CoreStyleConstants::Icon14x14;
    local_1c78._0_8_ = pvVar8;
    local_1c78._8_8_ = pTVar9;
    pFVar11 = (FString *)
              (**(code **)(*(longlong *)**(undefined8 **)this + 0xf0))
                        ((longlong *)**(undefined8 **)this,&local_1c38,
                         "Common/SmallCheckBox_Hovered",L".png");
    pFVar19 = (FSlateBrush *)
              FSlateImageBrush::FSlateImageBrush
                        ((FSlateImageBrush *)local_1778,pFVar11,
                         (FDeprecateVector2DParameter *)&local_res8._s_0,
                         (FLinearColor *)&local_1c78._s_0,NoTile,FullColor);
    FSlateBrush::operator=(&pFVar22->UncheckedHoveredImage,pFVar19);
    local_res8._s_0 = (TVector2<float>_u_0_s_0)CoreStyleConstants::Icon14x14;
    local_1c78._0_8_ = ___xmm_3f8000003f0000003f0000003f000000;
    local_1c78._8_8_ = _UNK_1509252f8;
    pFVar11 = (FString *)
              (**(code **)(*(longlong *)**(undefined8 **)this + 0xf0))
                        ((longlong *)**(undefined8 **)this,local_1c18,"Common/SmallCheckBox_Hovered"
                         ,L".png");
    pFVar19 = (FSlateBrush *)
              FSlateImageBrush::FSlateImageBrush
                        ((FSlateImageBrush *)local_1828,pFVar11,
                         (FDeprecateVector2DParameter *)&local_res8._s_0,
                         (FLinearColor *)&local_1c78._s_0,NoTile,FullColor);
    FSlateBrush::operator=(&pFVar22->UncheckedPressedImage,pFVar19);
    local_res8._s_0 = (TVector2<float>_u_0_s_0)CoreStyleConstants::Icon14x14;
    local_1c78._0_8_ = pvVar8;
    local_1c78._8_8_ = pTVar9;
    pFVar11 = (FString *)
              (**(code **)(*(longlong *)**(undefined8 **)this + 0xf0))
                        ((longlong *)**(undefined8 **)this,local_1bd8,"Common/SmallCheckBox_Checked"
                         ,L".png");
    pFVar19 = (FSlateBrush *)
              FSlateImageBrush::FSlateImageBrush
                        ((FSlateImageBrush *)local_1408,pFVar11,
                         (FDeprecateVector2DParameter *)&local_res8._s_0,
                         (FLinearColor *)&local_1c78._s_0,NoTile,FullColor);
    FSlateBrush::operator=(&pFVar22->CheckedImage,pFVar19);
    local_res8._s_0 = (TVector2<float>_u_0_s_0)CoreStyleConstants::Icon14x14;
    local_1c78._0_8_ = pvVar8;
    local_1c78._8_8_ = pTVar9;
    pFVar11 = (FString *)
              (**(code **)(*(longlong *)**(undefined8 **)this + 0xf0))
                        ((longlong *)**(undefined8 **)this,local_1be8,
                         "Common/SmallCheckBox_Checked_Hovered",L".png");
    pFVar19 = (FSlateBrush *)
              FSlateImageBrush::FSlateImageBrush
                        ((FSlateImageBrush *)local_1618,pFVar11,
                         (FDeprecateVector2DParameter *)&local_res8._s_0,
                         (FLinearColor *)&local_1c78._s_0,NoTile,FullColor);
    FSlateBrush::operator=(&pFVar22->CheckedHoveredImage,pFVar19);
    local_res8._s_0 = (TVector2<float>_u_0_s_0)CoreStyleConstants::Icon14x14;
    local_1c78._0_8_ = ___xmm_3f8000003f0000003f0000003f000000;
    local_1c78._8_8_ = _UNK_1509252f8;
    pFVar11 = (FString *)
              (**(code **)(*(longlong *)**(undefined8 **)this + 0xf0))
                        ((longlong *)**(undefined8 **)this,local_1bf8,
                         "Common/SmallCheckBox_Checked_Hovered",L".png");
    pFVar19 = (FSlateBrush *)
              FSlateImageBrush::FSlateImageBrush
                        ((FSlateImageBrush *)local_16c8,pFVar11,
                         (FDeprecateVector2DParameter *)&local_res8._s_0,
                         (FLinearColor *)&local_1c78._s_0,NoTile,FullColor);
    FSlateBrush::operator=(&pFVar22->CheckedPressedImage,pFVar19);
    local_res8._s_0 = (TVector2<float>_u_0_s_0)CoreStyleConstants::Icon14x14;
    local_1c78._0_8_ = pvVar8;
    local_1c78._8_8_ = pTVar9;
    pFVar11 = (FString *)
              (**(code **)(*(longlong *)**(undefined8 **)this + 0xf0))
                        ((longlong *)**(undefined8 **)this,local_1bc8,"Common/CheckBox_Undetermined"
                         ,L".png");
    pFVar19 = (FSlateBrush *)
              FSlateImageBrush::FSlateImageBrush
                        ((FSlateImageBrush *)local_14b8,pFVar11,
                         (FDeprecateVector2DParameter *)&local_res8._s_0,
                         (FLinearColor *)&local_1c78._s_0,NoTile,FullColor);
    FSlateBrush::operator=(&pFVar22->UndeterminedImage,pFVar19);
    local_res8._s_0 = (TVector2<float>_u_0_s_0)CoreStyleConstants::Icon14x14;
    local_1c78._0_8_ = pvVar8;
    local_1c78._8_8_ = pTVar9;
    pFVar11 = (FString *)
              (**(code **)(*(longlong *)**(undefined8 **)this + 0xf0))
                        ((longlong *)**(undefined8 **)this,local_1c48,
                         "Common/CheckBox_Undetermined_Hovered",L".png");
    pFVar19 = (FSlateBrush *)
              FSlateImageBrush::FSlateImageBrush
                        ((FSlateImageBrush *)local_1568,pFVar11,
                         (FDeprecateVector2DParameter *)&local_res8._s_0,
                         (FLinearColor *)&local_1c78._s_0,NoTile,FullColor);
    FSlateBrush::operator=(&pFVar22->UndeterminedHoveredImage,pFVar19);
    local_res8._s_0 = (TVector2<float>_u_0_s_0)CoreStyleConstants::Icon14x14;
    local_1c78._0_8_ = ___xmm_3f8000003f0000003f0000003f000000;
    local_1c78._8_8_ = _UNK_1509252f8;
    pFVar11 = (FString *)
              (**(code **)(*(longlong *)**(undefined8 **)this + 0xf0))
                        ((longlong *)**(undefined8 **)this,local_1c08,
                         "Common/CheckBox_Undetermined_Hovered",L".png");
    pFVar19 = (FSlateBrush *)
              FSlateImageBrush::FSlateImageBrush
                        ((FSlateImageBrush *)local_18d8,pFVar11,
                         (FDeprecateVector2DParameter *)&local_res8._s_0,
                         (FLinearColor *)&local_1c78._s_0,NoTile,FullColor);
    FSlateBrush::operator=(&pFVar22->UndeterminedPressedImage,pFVar19);
    FCheckBoxStyle::FCheckBoxStyle(&BasicMenuCheckBoxStyle,pFVar22);
    local_18d8._0_8_ = &___7FSlateBrush__6B_;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_1838);
    if ((void *)local_1c08._0_8_ != (void *)0x0) {
      FMemory::Free((void *)local_1c08._0_8_);
    }
    local_1568[0] = &___7FSlateBrush__6B_;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_14c8);
    if (local_1c48 != (undefined1  [8])0x0) {
      FMemory::Free((void *)local_1c48);
    }
    local_14b8[0] = &___7FSlateBrush__6B_;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_1418);
    if (local_1bc8[0] != (void *)0x0) {
      FMemory::Free(local_1bc8[0]);
    }
    local_16c8[0] = &___7FSlateBrush__6B_;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_1628);
    if (local_1bf8[0] != (void *)0x0) {
      FMemory::Free(local_1bf8[0]);
    }
    local_1618[0] = &___7FSlateBrush__6B_;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_1578);
    if (local_1be8[0] != (void *)0x0) {
      FMemory::Free(local_1be8[0]);
    }
    local_1408._0_8_ = &___7FSlateBrush__6B_;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_1408._160_8_);
    if (local_1bd8[0] != (void *)0x0) {
      FMemory::Free(local_1bd8[0]);
    }
    local_1828[0] = &___7FSlateBrush__6B_;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_1788);
    if (local_1c18[0] != (void *)0x0) {
      FMemory::Free(local_1c18[0]);
    }
    local_1778[0] = &___7FSlateBrush__6B_;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_16d8);
    if ((void *)local_1c38._0_8_ != (void *)0x0) {
      FMemory::Free((void *)local_1c38._0_8_);
    }
    local_1bb8 = &___7FSlateBrush__6B_;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)CONCAT44(_EStack_1b14,local_1b24._s_0.A));
    if ((void *)local_1c68._0_8_ != (void *)0x0) {
      FMemory::Free((void *)local_1c68._0_8_);
    }
    FCheckBoxStyle::~FCheckBoxStyle((FCheckBoxStyle *)&local_ce8);
    atexit(``FUMGCoreStyle::Create'::__l2::<lambda_8>::operator()'::__l3::
           _dynamic_atexit_destructor_for__BasicMenuCheckBoxStyle__);
    _Init_thread_footer(&::_TSS1);
  }
  pFVar1 = (FSlateStyleSet *)**(undefined8 **)this;
  pFVar13 = ::FName::FName((FName *)&local_res8._s_0,"Menu.CheckBox");
  FSlateStyleSet::Set<FCheckBoxStyle>(pFVar1,*pFVar13,&BasicMenuCheckBoxStyle);
  if ((*(int *)(lVar2 + 0x9d4c) < ::_TSS2) && (_Init_thread_header(&::_TSS2), ::_TSS2 == -1)) {
    pFVar22 = FCheckBoxStyle::FCheckBoxStyle((FCheckBoxStyle *)&local_ce8);
    local_res8._s_0 = (TVector2<float>_u_0_s_0)CoreStyleConstants::Icon14x14;
    local_1c68._0_8_ = pvVar8;
    local_1c68._8_8_ = pTVar9;
    pFVar11 = (FString *)
              (**(code **)(*(longlong *)**(undefined8 **)this + 0xf0))
                        ((longlong *)**(undefined8 **)this,&local_1c78,"Icons/Empty_14x",L".png");
    pFVar19 = (FSlateBrush *)
              FSlateImageBrush::FSlateImageBrush
                        ((FSlateImageBrush *)local_18d8,pFVar11,
                         (FDeprecateVector2DParameter *)&local_res8._s_0,
                         (FLinearColor *)&local_1c68._s_0,NoTile,FullColor);
    FSlateBrush::operator=(&pFVar22->UncheckedImage,pFVar19);
    local_res8._s_0 = (TVector2<float>_u_0_s_0)CoreStyleConstants::Icon14x14;
    local_1c68._0_8_ = pvVar8;
    local_1c68._8_8_ = pTVar9;
    pFVar11 = (FString *)
              (**(code **)(*(longlong *)**(undefined8 **)this + 0xf0))
                        ((longlong *)**(undefined8 **)this,local_1bc8,"Icons/Empty_14x",L".png");
    pFVar19 = (FSlateBrush *)
              FSlateImageBrush::FSlateImageBrush
                        ((FSlateImageBrush *)local_1568,pFVar11,
                         (FDeprecateVector2DParameter *)&local_res8._s_0,
                         (FLinearColor *)&local_1c68._s_0,NoTile,FullColor);
    FSlateBrush::operator=(&pFVar22->UncheckedHoveredImage,pFVar19);
    local_res8._s_0 = (TVector2<float>_u_0_s_0)CoreStyleConstants::Icon14x14;
    local_1c68._0_8_ = pvVar8;
    local_1c68._8_8_ = pTVar9;
    pFVar11 = (FString *)
              (**(code **)(*(longlong *)**(undefined8 **)this + 0xf0))
                        ((longlong *)**(undefined8 **)this,local_1bf8,"Common/SmallCheckBox_Hovered"
                         ,L".png");
    pFVar19 = (FSlateBrush *)
              FSlateImageBrush::FSlateImageBrush
                        ((FSlateImageBrush *)local_14b8,pFVar11,
                         (FDeprecateVector2DParameter *)&local_res8._s_0,
                         (FLinearColor *)&local_1c68._s_0,NoTile,FullColor);
    FSlateBrush::operator=(&pFVar22->UncheckedPressedImage,pFVar19);
    local_res8._s_0 = (TVector2<float>_u_0_s_0)CoreStyleConstants::Icon14x14;
    local_1c68._0_8_ = pvVar8;
    local_1c68._8_8_ = pTVar9;
    pFVar11 = (FString *)
              (**(code **)(*(longlong *)**(undefined8 **)this + 0xf0))
                        ((longlong *)**(undefined8 **)this,local_1be8,"Common/SmallCheck",L".png");
    pFVar19 = (FSlateBrush *)
              FSlateImageBrush::FSlateImageBrush
                        ((FSlateImageBrush *)local_16c8,pFVar11,
                         (FDeprecateVector2DParameter *)&local_res8._s_0,
                         (FLinearColor *)&local_1c68._s_0,NoTile,FullColor);
    FSlateBrush::operator=(&pFVar22->CheckedImage,pFVar19);
    local_res8._s_0 = (TVector2<float>_u_0_s_0)CoreStyleConstants::Icon14x14;
    local_1c68._0_8_ = pvVar8;
    local_1c68._8_8_ = pTVar9;
    pFVar11 = (FString *)
              (**(code **)(*(longlong *)**(undefined8 **)this + 0xf0))
                        ((longlong *)**(undefined8 **)this,local_1bd8,"Common/SmallCheck",L".png");
    pFVar19 = (FSlateBrush *)
              FSlateImageBrush::FSlateImageBrush
                        ((FSlateImageBrush *)local_1618,pFVar11,
                         (FDeprecateVector2DParameter *)&local_res8._s_0,
                         (FLinearColor *)&local_1c68._s_0,NoTile,FullColor);
    FSlateBrush::operator=(&pFVar22->CheckedHoveredImage,pFVar19);
    local_res8._s_0 = (TVector2<float>_u_0_s_0)CoreStyleConstants::Icon14x14;
    local_1c68._0_8_ = pvVar8;
    local_1c68._8_8_ = pTVar9;
    pFVar11 = (FString *)
              (**(code **)(*(longlong *)**(undefined8 **)this + 0xf0))
                        ((longlong *)**(undefined8 **)this,local_1c18,"Common/SmallCheck",L".png");
    pFVar19 = (FSlateBrush *)
              FSlateImageBrush::FSlateImageBrush
                        ((FSlateImageBrush *)local_1408,pFVar11,
                         (FDeprecateVector2DParameter *)&local_res8._s_0,
                         (FLinearColor *)&local_1c68._s_0,NoTile,FullColor);
    FSlateBrush::operator=(&pFVar22->CheckedPressedImage,pFVar19);
    local_res8._s_0 = (TVector2<float>_u_0_s_0)CoreStyleConstants::Icon14x14;
    local_1c68._0_8_ = pvVar8;
    local_1c68._8_8_ = pTVar9;
    pFVar11 = (FString *)
              (**(code **)(*(longlong *)**(undefined8 **)this + 0xf0))
                        ((longlong *)**(undefined8 **)this,&local_1c38,"Icons/Empty_14x",L".png");
    pFVar19 = (FSlateBrush *)
              FSlateImageBrush::FSlateImageBrush
                        ((FSlateImageBrush *)local_1828,pFVar11,
                         (FDeprecateVector2DParameter *)&local_res8._s_0,
                         (FLinearColor *)&local_1c68._s_0,NoTile,FullColor);
    FSlateBrush::operator=(&pFVar22->UndeterminedImage,pFVar19);
    local_res8 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
    pFVar19 = (FSlateBrush *)
              FSlateNoResource::FSlateNoResource
                        ((FSlateNoResource *)local_1778,
                         (FDeprecateVector2DParameter *)&local_res8._s_0);
    FSlateBrush::operator=(&pFVar22->UndeterminedHoveredImage,pFVar19);
    local_res8 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
    pFVar19 = (FSlateBrush *)
              FSlateNoResource::FSlateNoResource
                        ((FSlateNoResource *)&local_1bb8,
                         (FDeprecateVector2DParameter *)&local_res8._s_0);
    FSlateBrush::operator=(&pFVar22->UndeterminedPressedImage,pFVar19);
    FCheckBoxStyle::FCheckBoxStyle(&BasicMenuCheckStyle,pFVar22);
    local_1bb8 = &___7FSlateBrush__6B_;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)CONCAT44(_EStack_1b14,local_1b24._s_0.A));
    local_1778[0] = &___7FSlateBrush__6B_;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_16d8);
    local_1828[0] = &___7FSlateBrush__6B_;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_1788);
    if ((void *)local_1c38._0_8_ != (void *)0x0) {
      FMemory::Free((void *)local_1c38._0_8_);
    }
    local_1408._0_8_ = &___7FSlateBrush__6B_;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_1408._160_8_);
    if (local_1c18[0] != (void *)0x0) {
      FMemory::Free(local_1c18[0]);
    }
    local_1618[0] = &___7FSlateBrush__6B_;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_1578);
    if (local_1bd8[0] != (void *)0x0) {
      FMemory::Free(local_1bd8[0]);
    }
    local_16c8[0] = &___7FSlateBrush__6B_;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_1628);
    if (local_1be8[0] != (void *)0x0) {
      FMemory::Free(local_1be8[0]);
    }
    local_14b8[0] = &___7FSlateBrush__6B_;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_1418);
    if (local_1bf8[0] != (void *)0x0) {
      FMemory::Free(local_1bf8[0]);
    }
    local_1568[0] = &___7FSlateBrush__6B_;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_14c8);
    if (local_1bc8[0] != (void *)0x0) {
      FMemory::Free(local_1bc8[0]);
    }
    local_18d8._0_8_ = &___7FSlateBrush__6B_;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_1838);
    if ((void *)local_1c78._0_8_ != (void *)0x0) {
      FMemory::Free((void *)local_1c78._0_8_);
    }
    FCheckBoxStyle::~FCheckBoxStyle((FCheckBoxStyle *)&local_ce8);
    atexit(``FUMGCoreStyle::Create'::__l2::<lambda_8>::operator()'::__l3::
           _dynamic_atexit_destructor_for__BasicMenuCheckStyle__);
    _Init_thread_footer(&::_TSS2);
  }
  pFVar1 = (FSlateStyleSet *)**(undefined8 **)this;
  pFVar13 = ::FName::FName((FName *)&local_res8._s_0,"Menu.Check");
  FSlateStyleSet::Set<FCheckBoxStyle>(pFVar1,*pFVar13,&BasicMenuCheckStyle);
  if ((*(int *)(lVar2 + 0x9d4c) < ::_TSS3) && (_Init_thread_header(&::_TSS3), ::_TSS3 == -1)) {
    pFVar22 = FCheckBoxStyle::FCheckBoxStyle((FCheckBoxStyle *)&local_ce8);
    local_res8._s_0 = (TVector2<float>_u_0_s_0)CoreStyleConstants::Icon16x16;
    local_1c68._0_8_ = pvVar8;
    local_1c68._8_8_ = pTVar9;
    pFVar11 = (FString *)
              (**(code **)(*(longlong *)**(undefined8 **)this + 0xf0))
                        ((longlong *)**(undefined8 **)this,local_1c48,
                         "Common/RadioButton_Unselected_16x",L".png");
    pFVar19 = (FSlateBrush *)
              FSlateImageBrush::FSlateImageBrush
                        ((FSlateImageBrush *)local_18d8,pFVar11,
                         (FDeprecateVector2DParameter *)&local_res8._s_0,
                         (FLinearColor *)&local_1c68._s_0,NoTile,FullColor);
    FSlateBrush::operator=(&pFVar22->UncheckedImage,pFVar19);
    local_res8._s_0 = (TVector2<float>_u_0_s_0)CoreStyleConstants::Icon16x16;
    local_1c68._0_8_ = pvVar8;
    local_1c68._8_8_ = pTVar9;
    pFVar11 = (FString *)
              (**(code **)(*(longlong *)**(undefined8 **)this + 0xf0))
                        ((longlong *)**(undefined8 **)this,local_1c08,
                         "Common/RadioButton_Unselected_16x",L".png");
    pFVar19 = (FSlateBrush *)
              FSlateImageBrush::FSlateImageBrush
                        ((FSlateImageBrush *)local_1568,pFVar11,
                         (FDeprecateVector2DParameter *)&local_res8._s_0,
                         (FLinearColor *)&local_1c68._s_0,NoTile,FullColor);
    FSlateBrush::operator=(&pFVar22->UncheckedHoveredImage,pFVar19);
    local_res8._s_0 = (TVector2<float>_u_0_s_0)CoreStyleConstants::Icon16x16;
    local_1c68._0_8_ = pvVar8;
    local_1c68._8_8_ = pTVar9;
    pFVar11 = (FString *)
              (**(code **)(*(longlong *)**(undefined8 **)this + 0xf0))
                        ((longlong *)**(undefined8 **)this,&local_1c78,
                         "Common/RadioButton_Unselected_16x",L".png");
    pFVar19 = (FSlateBrush *)
              FSlateImageBrush::FSlateImageBrush
                        ((FSlateImageBrush *)local_14b8,pFVar11,
                         (FDeprecateVector2DParameter *)&local_res8._s_0,
                         (FLinearColor *)&local_1c68._s_0,NoTile,FullColor);
    FSlateBrush::operator=(&pFVar22->UncheckedPressedImage,pFVar19);
    local_res8._s_0 = (TVector2<float>_u_0_s_0)CoreStyleConstants::Icon16x16;
    local_1c68._0_8_ = pvVar8;
    local_1c68._8_8_ = pTVar9;
    pFVar11 = (FString *)
              (**(code **)(*(longlong *)**(undefined8 **)this + 0xf0))
                        ((longlong *)**(undefined8 **)this,local_1bc8,
                         "Common/RadioButton_Selected_16x",L".png");
    pFVar19 = (FSlateBrush *)
              FSlateImageBrush::FSlateImageBrush
                        ((FSlateImageBrush *)local_16c8,pFVar11,
                         (FDeprecateVector2DParameter *)&local_res8._s_0,
                         (FLinearColor *)&local_1c68._s_0,NoTile,FullColor);
    FSlateBrush::operator=(&pFVar22->CheckedImage,pFVar19);
    local_res8._s_0 = (TVector2<float>_u_0_s_0)CoreStyleConstants::Icon16x16;
    pFVar11 = (FString *)
              (**(code **)(*(longlong *)**(undefined8 **)this + 0xf0))
                        ((longlong *)**(undefined8 **)this,local_1bf8,
                         "Common/RadioButton_Selected_16x",L".png");
    pFVar19 = (FSlateBrush *)
              FSlateImageBrush::FSlateImageBrush
                        ((FSlateImageBrush *)local_1618,pFVar11,
                         (FDeprecateVector2DParameter *)&local_res8._s_0,&SelectionColor,NoTile,
                         FullColor);
    FSlateBrush::operator=(&pFVar22->CheckedHoveredImage,pFVar19);
    local_res8._s_0 = (TVector2<float>_u_0_s_0)CoreStyleConstants::Icon16x16;
    pFVar11 = (FString *)
              (**(code **)(*(longlong *)**(undefined8 **)this + 0xf0))
                        ((longlong *)**(undefined8 **)this,local_1be8,
                         "Common/RadioButton_Unselected_16x",L".png");
    pFVar19 = (FSlateBrush *)
              FSlateImageBrush::FSlateImageBrush
                        ((FSlateImageBrush *)local_1408,pFVar11,
                         (FDeprecateVector2DParameter *)&local_res8._s_0,&SelectionColor_Pressed,
                         NoTile,FullColor);
    FSlateBrush::operator=(&pFVar22->CheckedPressedImage,pFVar19);
    local_res8._s_0 = (TVector2<float>_u_0_s_0)CoreStyleConstants::Icon16x16;
    local_1c68._0_8_ = pvVar8;
    local_1c68._8_8_ = pTVar9;
    pFVar11 = (FString *)
              (**(code **)(*(longlong *)**(undefined8 **)this + 0xf0))
                        ((longlong *)**(undefined8 **)this,local_1bd8,
                         "Common/RadioButton_Unselected_16x",L".png");
    pFVar19 = (FSlateBrush *)
              FSlateImageBrush::FSlateImageBrush
                        ((FSlateImageBrush *)local_1828,pFVar11,
                         (FDeprecateVector2DParameter *)&local_res8._s_0,
                         (FLinearColor *)&local_1c68._s_0,NoTile,FullColor);
    FSlateBrush::operator=(&pFVar22->UndeterminedImage,pFVar19);
    local_res8._s_0 = (TVector2<float>_u_0_s_0)CoreStyleConstants::Icon16x16;
    pFVar11 = (FString *)
              (**(code **)(*(longlong *)**(undefined8 **)this + 0xf0))
                        ((longlong *)**(undefined8 **)this,local_1c18,
                         "Common/RadioButton_Unselected_16x",L".png");
    pFVar19 = (FSlateBrush *)
              FSlateImageBrush::FSlateImageBrush
                        ((FSlateImageBrush *)local_1778,pFVar11,
                         (FDeprecateVector2DParameter *)&local_res8._s_0,&SelectionColor,NoTile,
                         FullColor);
    FSlateBrush::operator=(&pFVar22->UndeterminedHoveredImage,pFVar19);
    local_res8._s_0 = (TVector2<float>_u_0_s_0)CoreStyleConstants::Icon16x16;
    pFVar11 = (FString *)
              (**(code **)(*(longlong *)**(undefined8 **)this + 0xf0))
                        ((longlong *)**(undefined8 **)this,&local_1c38,
                         "Common/RadioButton_Unselected_16x",L".png");
    pFVar19 = (FSlateBrush *)
              FSlateImageBrush::FSlateImageBrush
                        ((FSlateImageBrush *)&local_1bb8,pFVar11,
                         (FDeprecateVector2DParameter *)&local_res8._s_0,&SelectionColor_Pressed,
                         NoTile,FullColor);
    FSlateBrush::operator=(&pFVar22->UndeterminedPressedImage,pFVar19);
    FCheckBoxStyle::FCheckBoxStyle(&BasicMenuRadioButtonStyle,pFVar22);
    local_1bb8 = &___7FSlateBrush__6B_;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)CONCAT44(_EStack_1b14,local_1b24._s_0.A));
    if ((void *)local_1c38._0_8_ != (void *)0x0) {
      FMemory::Free((void *)local_1c38._0_8_);
    }
    local_1778[0] = &___7FSlateBrush__6B_;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_16d8);
    if (local_1c18[0] != (void *)0x0) {
      FMemory::Free(local_1c18[0]);
    }
    local_1828[0] = &___7FSlateBrush__6B_;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_1788);
    if (local_1bd8[0] != (void *)0x0) {
      FMemory::Free(local_1bd8[0]);
    }
    local_1408._0_8_ = &___7FSlateBrush__6B_;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_1408._160_8_);
    if (local_1be8[0] != (void *)0x0) {
      FMemory::Free(local_1be8[0]);
    }
    local_1618[0] = &___7FSlateBrush__6B_;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_1578);
    if (local_1bf8[0] != (void *)0x0) {
      FMemory::Free(local_1bf8[0]);
    }
    local_16c8[0] = &___7FSlateBrush__6B_;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_1628);
    if (local_1bc8[0] != (void *)0x0) {
      FMemory::Free(local_1bc8[0]);
    }
    local_14b8[0] = &___7FSlateBrush__6B_;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_1418);
    if ((void *)local_1c78._0_8_ != (void *)0x0) {
      FMemory::Free((void *)local_1c78._0_8_);
    }
    local_1568[0] = &___7FSlateBrush__6B_;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_14c8);
    if ((void *)local_1c08._0_8_ != (void *)0x0) {
      FMemory::Free((void *)local_1c08._0_8_);
    }
    local_18d8._0_8_ = &___7FSlateBrush__6B_;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_1838);
    if (local_1c48 != (undefined1  [8])0x0) {
      FMemory::Free((void *)local_1c48);
    }
    FCheckBoxStyle::~FCheckBoxStyle((FCheckBoxStyle *)&local_ce8);
    atexit(``FUMGCoreStyle::Create'::__l2::<lambda_8>::operator()'::__l3::
           _dynamic_atexit_destructor_for__BasicMenuRadioButtonStyle__);
    _Init_thread_footer(&::_TSS3);
  }
  pFVar1 = (FSlateStyleSet *)**(undefined8 **)this;
  pFVar13 = ::FName::FName((FName *)&local_res8._s_0,"Menu.RadioButton");
  FSlateStyleSet::Set<FCheckBoxStyle>(pFVar1,*pFVar13,&BasicMenuRadioButtonStyle);
  TVar7 = _UNK_15076b0c8;
  pvVar6 = ___xmm_3e8000003e8000003e8000003e800000;
  if ((*(int *)(lVar2 + 0x9d4c) < ::_TSS4) && (_Init_thread_header(&::_TSS4), ::_TSS4 == -1)) {
    pFVar22 = FCheckBoxStyle::FCheckBoxStyle((FCheckBoxStyle *)&local_ce8);
    (pFVar22->CheckBoxType).Value = '\x01';
    local_res8 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
    pFVar19 = (FSlateBrush *)
              FSlateNoResource::FSlateNoResource
                        ((FSlateNoResource *)local_16c8,
                         (FDeprecateVector2DParameter *)&local_res8._s_0);
    FSlateBrush::operator=(&pFVar22->UncheckedImage,pFVar19);
    local_1c68._0_8_ = pvVar6;
    local_1c68._8_8_ = TVar7;
    pFVar11 = (FString *)
              (**(code **)(*(longlong *)**(undefined8 **)this + 0xf0))
                        ((longlong *)**(undefined8 **)this,local_1bf8,"Common/RoundedSelection_16x",
                         L".png");
    pFVar19 = (FSlateBrush *)
              FSlateBoxBrush::FSlateBoxBrush
                        ((FSlateBoxBrush *)local_1618,pFVar11,(FMargin *)&local_1c68._s_0,
                         &SelectionColor_Pressed,FullColor);
    FSlateBrush::operator=(&pFVar22->UncheckedPressedImage,pFVar19);
    local_1c68._0_8_ = pvVar6;
    local_1c68._8_8_ = TVar7;
    pFVar11 = (FString *)
              (**(code **)(*(longlong *)**(undefined8 **)this + 0xf0))
                        ((longlong *)**(undefined8 **)this,local_1be8,"Common/RoundedSelection_16x",
                         L".png");
    pFVar19 = (FSlateBrush *)
              FSlateBoxBrush::FSlateBoxBrush
                        ((FSlateBoxBrush *)local_1408,pFVar11,(FMargin *)&local_1c68._s_0,
                         &SelectionColor,FullColor);
    FSlateBrush::operator=(&pFVar22->UncheckedHoveredImage,pFVar19);
    local_1c68._0_8_ = pvVar6;
    local_1c68._8_8_ = TVar7;
    pFVar11 = (FString *)
              (**(code **)(*(longlong *)**(undefined8 **)this + 0xf0))
                        ((longlong *)**(undefined8 **)this,local_1bd8,"Common/RoundedSelection_16x",
                         L".png");
    pFVar19 = (FSlateBrush *)
              FSlateBoxBrush::FSlateBoxBrush
                        ((FSlateBoxBrush *)local_1828,pFVar11,(FMargin *)&local_1c68._s_0,
                         &SelectionColor_Pressed,FullColor);
    FSlateBrush::operator=(&pFVar22->CheckedImage,pFVar19);
    local_1c68._0_8_ = pvVar6;
    local_1c68._8_8_ = TVar7;
    pFVar11 = (FString *)
              (**(code **)(*(longlong *)**(undefined8 **)this + 0xf0))
                        ((longlong *)**(undefined8 **)this,local_1c18,"Common/RoundedSelection_16x",
                         L".png");
    pFVar19 = (FSlateBrush *)
              FSlateBoxBrush::FSlateBoxBrush
                        ((FSlateBoxBrush *)local_1778,pFVar11,(FMargin *)&local_1c68._s_0,
                         &SelectionColor_Pressed,FullColor);
    FSlateBrush::operator=(&pFVar22->CheckedHoveredImage,pFVar19);
    local_1c68._0_8_ = pvVar6;
    local_1c68._8_8_ = TVar7;
    pFVar11 = (FString *)
              (**(code **)(*(longlong *)**(undefined8 **)this + 0xf0))
                        ((longlong *)**(undefined8 **)this,&local_1c38,"Common/RoundedSelection_16x"
                         ,L".png");
    pFVar19 = (FSlateBrush *)
              FSlateBoxBrush::FSlateBoxBrush
                        ((FSlateBoxBrush *)&local_1bb8,pFVar11,(FMargin *)&local_1c68._s_0,
                         &SelectionColor,FullColor);
    FSlateBrush::operator=(&pFVar22->CheckedPressedImage,pFVar19);
    FCheckBoxStyle::FCheckBoxStyle(&MenuToggleButtonCheckBoxStyle,pFVar22);
    local_1bb8 = &___7FSlateBrush__6B_;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)CONCAT44(_EStack_1b14,local_1b24._s_0.A));
    if ((void *)local_1c38._0_8_ != (void *)0x0) {
      FMemory::Free((void *)local_1c38._0_8_);
    }
    local_1778[0] = &___7FSlateBrush__6B_;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_16d8);
    if (local_1c18[0] != (void *)0x0) {
      FMemory::Free(local_1c18[0]);
    }
    local_1828[0] = &___7FSlateBrush__6B_;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_1788);
    if (local_1bd8[0] != (void *)0x0) {
      FMemory::Free(local_1bd8[0]);
    }
    local_1408._0_8_ = &___7FSlateBrush__6B_;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_1408._160_8_);
    if (local_1be8[0] != (void *)0x0) {
      FMemory::Free(local_1be8[0]);
    }
    local_1618[0] = &___7FSlateBrush__6B_;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_1578);
    if (local_1bf8[0] != (void *)0x0) {
      FMemory::Free(local_1bf8[0]);
    }
    local_16c8[0] = &___7FSlateBrush__6B_;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_1628);
    FCheckBoxStyle::~FCheckBoxStyle((FCheckBoxStyle *)&local_ce8);
    atexit(``FUMGCoreStyle::Create'::__l2::<lambda_8>::operator()'::__l3::
           _dynamic_atexit_destructor_for__MenuToggleButtonCheckBoxStyle__);
    _Init_thread_footer(&::_TSS4);
  }
  pFVar1 = (FSlateStyleSet *)**(undefined8 **)this;
  pFVar13 = ::FName::FName((FName *)&local_res8._s_0,"Menu.ToggleButton");
  FSlateStyleSet::Set<FCheckBoxStyle>(pFVar1,*pFVar13,&MenuToggleButtonCheckBoxStyle);
  pFVar18 = FButtonStyle::FButtonStyle((FButtonStyle *)local_1408,&NoBorder);
  local_res8 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  pFVar19 = (FSlateBrush *)
            FSlateNoResource::FSlateNoResource
                      ((FSlateNoResource *)local_1828,
                       (FDeprecateVector2DParameter *)&local_res8._s_0);
  FSlateBrush::operator=(&pFVar18->Normal,pFVar19);
  local_1c68._0_8_ = pvVar6;
  local_1c68._8_8_ = TVar7;
  pFVar11 = (FString *)
            (**(code **)(*(longlong *)**(undefined8 **)this + 0xf0))
                      ((longlong *)**(undefined8 **)this,local_1c18,"Common/RoundedSelection_16x",
                       L".png");
  pFVar19 = (FSlateBrush *)
            FSlateBoxBrush::FSlateBoxBrush
                      ((FSlateBoxBrush *)local_1778,pFVar11,(FMargin *)&local_1c68._s_0,
                       &SelectionColor_Pressed,FullColor);
  FSlateBrush::operator=(&pFVar18->Pressed,pFVar19);
  local_1c68._0_8_ = pvVar6;
  local_1c68._8_8_ = TVar7;
  pFVar11 = (FString *)
            (**(code **)(*(longlong *)**(undefined8 **)this + 0xf0))
                      ((longlong *)**(undefined8 **)this,&local_1c38,"Common/RoundedSelection_16x",
                       L".png");
  pFVar19 = (FSlateBrush *)
            FSlateBoxBrush::FSlateBoxBrush
                      ((FSlateBoxBrush *)&local_1bb8,pFVar11,(FMargin *)&local_1c68._s_0,
                       &SelectionColor,FullColor);
  FSlateBrush::operator=(&pFVar18->Hovered,pFVar19);
  (pFVar18->NormalPadding).Left = 0.0;
  (pFVar18->NormalPadding).Top = 1.0;
  (pFVar18->NormalPadding).Right = 0.0;
  *(undefined8 *)&(pFVar18->NormalPadding).Bottom = 0x3f800000;
  (pFVar18->PressedPadding).Top = 2.0;
  (pFVar18->PressedPadding).Right = 0.0;
  (pFVar18->PressedPadding).Bottom = 0.0;
  FButtonStyle::FButtonStyle(&local_1078,pFVar18);
  local_1bb8 = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)CONCAT44(_EStack_1b14,local_1b24._s_0.A));
  if ((void *)local_1c38._0_8_ != (void *)0x0) {
    FMemory::Free((void *)local_1c38._0_8_);
  }
  local_1778[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_16d8);
  if (local_1c18[0] != (void *)0x0) {
    FMemory::Free(local_1c18[0]);
  }
  local_1828[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_1788);
  local_1408._0_8_ = &___7FButtonStyle__6B_;
  local_11e8 = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1148.ReferenceController);
  local_1298 = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_11f8.ReferenceController);
  local_1348 = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_12a8.ReferenceController);
  local_1408._16_8_ = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1358.ReferenceController);
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)local_1408);
  pFVar1 = (FSlateStyleSet *)**(undefined8 **)this;
  pFVar13 = ::FName::FName((FName *)&local_res8._s_0,"Menu.Button");
  FSlateStyleSet::Set<FButtonStyle>(pFVar1,*pFVar13,&local_1078);
  pFVar1 = (FSlateStyleSet *)**(undefined8 **)this;
  pFVar10 = ::operator_new(0xb0);
  pFVar12 = (FSlateBoxBrush *)pFVar21;
  if (pFVar10 != (FSlateBoxBrush *)0x0) {
    local_1c68._0_8_ = pvVar6;
    local_1c68._8_8_ = TVar7;
    pFVar11 = (FString *)
              (**(code **)(*(longlong *)**(undefined8 **)this + 0xf0))
                        ((longlong *)**(undefined8 **)this,&local_1c38,"Common/RoundedSelection_16x"
                         ,L".png");
    pFVar12 = FSlateBoxBrush::FSlateBoxBrush
                        (pFVar10,pFVar11,(FMargin *)&local_1c68._s_0,&SelectionColor_Pressed,
                         FullColor);
  }
  pFVar13 = ::FName::FName((FName *)&local_res8._s_0,"Menu.Button.Checked");
  FSlateStyleSet::Set<FSlateBoxBrush>(pFVar1,*pFVar13,pFVar12);
  if ((pFVar10 != (FSlateBoxBrush *)0x0) && ((void *)local_1c38._0_8_ != (void *)0x0)) {
    FMemory::Free((void *)local_1c38._0_8_);
  }
  pFVar1 = (FSlateStyleSet *)**(undefined8 **)this;
  pFVar10 = ::operator_new(0xb0);
  pFVar12 = (FSlateBoxBrush *)pFVar21;
  if (pFVar10 != (FSlateBoxBrush *)0x0) {
    local_1c68._0_8_ = pvVar6;
    local_1c68._8_8_ = TVar7;
    pFVar11 = (FString *)
              (**(code **)(*(longlong *)**(undefined8 **)this + 0xf0))
                        ((longlong *)**(undefined8 **)this,&local_1c38,"Common/RoundedSelection_16x"
                         ,L".png");
    pFVar12 = FSlateBoxBrush::FSlateBoxBrush
                        (pFVar10,pFVar11,(FMargin *)&local_1c68._s_0,&SelectionColor_Pressed,
                         FullColor);
  }
  pFVar13 = ::FName::FName((FName *)&local_res8._s_0,"Menu.Button.Checked_Hovered");
  FSlateStyleSet::Set<FSlateBoxBrush>(pFVar1,*pFVar13,pFVar12);
  if ((pFVar10 != (FSlateBoxBrush *)0x0) && ((void *)local_1c38._0_8_ != (void *)0x0)) {
    FMemory::Free((void *)local_1c38._0_8_);
  }
  cVar23 = '\0';
  pFVar1 = (FSlateStyleSet *)**(undefined8 **)this;
  pFVar10 = ::operator_new(0xb0);
  pFVar12 = (FSlateBoxBrush *)pFVar21;
  if (pFVar10 != (FSlateBoxBrush *)0x0) {
    cVar23 = -0x80;
    local_1c68._0_8_ = pvVar6;
    local_1c68._8_8_ = TVar7;
    pFVar11 = (FString *)
              (**(code **)(*(longlong *)**(undefined8 **)this + 0xf0))
                        ((longlong *)**(undefined8 **)this,&local_1c38,"Common/RoundedSelection_16x"
                         ,L".png");
    pFVar12 = FSlateBoxBrush::FSlateBoxBrush
                        (pFVar10,pFVar11,(FMargin *)&local_1c68._s_0,&SelectionColor,FullColor);
  }
  pFVar13 = ::FName::FName((FName *)&local_res8._s_0,"Menu.Button.Checked_Pressed");
  FSlateStyleSet::Set<FSlateBoxBrush>(pFVar1,*pFVar13,pFVar12);
  if ((cVar23 < '\0') && ((void *)local_1c38._0_8_ != (void *)0x0)) {
    FMemory::Free((void *)local_1c38._0_8_);
  }
  pFVar1 = (FSlateStyleSet *)**(undefined8 **)this;
  this_00 = ::operator_new(0xb0);
  pFVar20 = pFVar21;
  if (this_00 != (FSlateBorderBrush *)0x0) {
    local_1c68._0_8_ = ___xmm_3f8000003dcccccd3dcccccd3dcccccd;
    local_1c68._8_8_ = _UNK_1509252c8;
    local_1c38._0_8_ = pvVar6;
    local_1c38.OutlineMaterial.field0_0x0 = TVar7;
    pFVar11 = (FString *)
              (**(code **)(*(longlong *)**(undefined8 **)this + 0xf0))
                        ((longlong *)**(undefined8 **)this,local_1c18,"Common/Selection",L".png");
    pFVar20 = FSlateBorderBrush::FSlateBorderBrush
                        (this_00,pFVar11,(FMargin *)&local_1c38,(FLinearColor *)&local_1c68._s_0,
                         FullColor);
  }
  pFVar13 = ::FName::FName((FName *)&local_res8._s_0,"Menu.Button.SubMenuOpen");
  FSlateStyleSet::Set<FSlateBorderBrush>(pFVar1,*pFVar13,pFVar20);
  if ((this_00 != (FSlateBorderBrush *)0x0) && (local_1c18[0] != (void *)0x0)) {
    FMemory::Free(local_1c18[0]);
  }
  pFVar1 = (FSlateStyleSet *)**(undefined8 **)this;
  pFVar10 = ::operator_new(0xb0);
  pFVar12 = (FSlateBoxBrush *)pFVar21;
  if (pFVar10 != (FSlateBoxBrush *)0x0) {
    local_1c68._0_8_ = pvVar8;
    local_1c68._8_8_ = pTVar9;
    local_1c38._0_8_ = ___xmm_3e0000003e0000003e0000003e000000;
    local_1c38.OutlineMaterial.field0_0x0 = _UNK_150925108;
    pFVar11 = (FString *)
              (**(code **)(*(longlong *)**(undefined8 **)this + 0xf0))
                        ((longlong *)**(undefined8 **)this,local_1c18,"Old/Menu_Background",L".png")
    ;
    pFVar12 = FSlateBoxBrush::FSlateBoxBrush
                        (pFVar10,pFVar11,(FMargin *)&local_1c38,(FLinearColor *)&local_1c68._s_0,
                         FullColor);
  }
  pFVar13 = ::FName::FName((FName *)&local_res8._s_0,"WindowMenuBar.Background");
  FSlateStyleSet::Set<FSlateBoxBrush>(pFVar1,*pFVar13,pFVar12);
  if ((pFVar10 != (FSlateBoxBrush *)0x0) && (local_1c18[0] != (void *)0x0)) {
    FMemory::Free(local_1c18[0]);
  }
  pFVar1 = (FSlateStyleSet *)**(undefined8 **)this;
  local_1bb8 = &___7FTextBlockStyle__6B_;
  FSlateFontInfo::FSlateFontInfo((FSlateFontInfo *)local_1bb0,&NormalText.Font);
  local_1b40 = NormalText.ColorAndOpacity.ColorUseRule;
  EStack_1b3f = NormalText.ColorAndOpacity.ColorTableId;
  uStack_1b3e = NormalText.ColorAndOpacity._18_2_;
  local_1b50 = NormalText.ColorAndOpacity.SpecifiedColor.field0_0x0;
  local_1b3c = NormalText.ShadowOffset;
  EStack_1b14 = NormalText.SelectedBackgroundColor.ColorUseRule;
  EStack_1b13 = NormalText.SelectedBackgroundColor.ColorTableId;
  uStack_1b12 = NormalText.SelectedBackgroundColor._18_2_;
  local_1b34 = NormalText.ShadowColorAndOpacity.field0_0x0;
  local_1b00 = NormalText.HighlightColor.ColorUseRule;
  EStack_1aff = NormalText.HighlightColor.ColorTableId;
  uStack_1afe = NormalText.HighlightColor._18_2_;
  local_1b24._0_12_ = NormalText.SelectedBackgroundColor.SpecifiedColor.field0_0x0._0_12_;
  local_1b24._s_0.A = NormalText.SelectedBackgroundColor.SpecifiedColor.field0_0x0._12_4_;
  local_1b10 = NormalText.HighlightColor.SpecifiedColor.field0_0x0;
  FSlateBrush::FSlateBrush((FSlateBrush *)local_1af8,&NormalText.HighlightShape);
  FSlateBrush::FSlateBrush((FSlateBrush *)local_1a48,&NormalText.StrikeBrush);
  FSlateBrush::FSlateBrush((FSlateBrush *)local_1998,&NormalText.UnderlineBrush);
  local_18e8 = NormalText.TransformPolicy;
  local_18e7 = NormalText.OverflowPolicy;
  local_1c38._0_8_ = local_1c38._0_8_ & 0xff00000000000000;
  local_1c38.OutlineMaterial.field0_0x0.DebugPtr = (TObjectPtr<UObject>_u_0)0x0;
  local_1c38.OutlineColor.field0_0x0._s_0 = FLinearColor::Black.field0_0x0;
  pFVar13 = ::FName::FName(&local_res10,"Regular");
  local_res8._0_4_ = *(float *)&pFVar13->ComparisonIndex;
  local_res8._4_4_ = (float)pFVar13->Number;
  pFVar16 = FLegacySlateFontInfoCache::Get();
  FLegacySlateFontInfoCache::GetDefaultFont
            (pFVar16,(TSharedRef<FCompositeFont_const_,1> *)local_1c48);
  local_1c68._0_8_ = local_1c48;
  local_1c68._8_8_ = _fStack_1c40;
  if ((TReferenceControllerBase<1> *)_fStack_1c40 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    *(atomic<int> *)(_fStack_1c40 + 8) = (atomic<int>)((int)*(atomic<int> *)(_fStack_1c40 + 8) + 1);
    UNLOCK();
  }
  FSlateFontInfo::FSlateFontInfo
            ((FSlateFontInfo *)local_18d8,(TSharedPtr<FCompositeFont_const_,1> *)&local_1c68._s_0,
             fVar5,(FName *)&local_res8._s_0,&local_1c38);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)_fStack_1c40);
  FSlateFontInfo::operator=((FSlateFontInfo *)local_1bb0,(FSlateFontInfo *)local_18d8);
  pFVar13 = ::FName::FName(&local_res18,"WindowMenuBar.Label");
  FSlateStyleSet::Set<FTextBlockStyle>(pFVar1,*pFVar13,(FTextBlockStyle *)&local_1bb8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_18d8._56_8_);
  local_1bb8 = &___7FTextBlockStyle__6B_;
  local_1998[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18f8.ReferenceController);
  local_1a48[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_19a8.ReferenceController);
  local_1af8[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1a58.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1b78.ReferenceController);
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)&local_1bb8);
  pFVar1 = (FSlateStyleSet *)**(undefined8 **)this;
  pFVar14 = ::operator_new(0xb0);
  pFVar15 = (FSlateImageBrush *)pFVar21;
  if (pFVar14 != (FSlateImageBrush *)0x0) {
    local_res8._s_0 = (TVector2<float>_u_0_s_0)CoreStyleConstants::Icon16x16;
    local_1c68._0_8_ = pvVar8;
    local_1c68._8_8_ = pTVar9;
    pFVar11 = (FString *)
              (**(code **)(*(longlong *)**(undefined8 **)this + 0xf0))
                        ((longlong *)**(undefined8 **)this,&local_1c38,"Icons/toolbar_expand_16x",
                         L".png");
    pFVar15 = FSlateImageBrush::FSlateImageBrush
                        (pFVar14,pFVar11,(FDeprecateVector2DParameter *)&local_res8._s_0,
                         (FLinearColor *)&local_1c68._s_0,NoTile,FullColor);
  }
  pFVar13 = ::FName::FName(&local_res10,"WindowMenuBar.Expand");
  FSlateStyleSet::Set<FSlateImageBrush>(pFVar1,*pFVar13,pFVar15);
  if ((pFVar14 != (FSlateImageBrush *)0x0) && ((void *)local_1c38._0_8_ != (void *)0x0)) {
    FMemory::Free((void *)local_1c38._0_8_);
  }
  pFVar1 = (FSlateStyleSet *)**(undefined8 **)this;
  pFVar13 = ::FName::FName((FName *)&local_res8._s_0,"WindowMenuBar.Button");
  FSlateStyleSet::Set<FButtonStyle>(pFVar1,*pFVar13,&local_1078);
  pFVar1 = (FSlateStyleSet *)**(undefined8 **)this;
  pFVar20 = ::operator_new(0xb0);
  if (pFVar20 != (FSlateBorderBrush *)0x0) {
    local_1c68._0_8_ = ___xmm_3f8000003dcccccd3dcccccd3dcccccd;
    local_1c68._8_8_ = _UNK_1509252c8;
    local_1c38._0_8_ = pvVar6;
    local_1c38.OutlineMaterial.field0_0x0 = TVar7;
    pFVar11 = (FString *)
              (**(code **)(*(longlong *)**(undefined8 **)this + 0xf0))
                        ((longlong *)**(undefined8 **)this,local_1c18,"Common/Selection",L".png");
    pFVar21 = FSlateBorderBrush::FSlateBorderBrush
                        (pFVar20,pFVar11,(FMargin *)&local_1c38,(FLinearColor *)&local_1c68._s_0,
                         FullColor);
  }
  pFVar13 = ::FName::FName((FName *)&local_res8._s_0,"WindowMenuBar.Button.SubMenuOpen");
  FSlateStyleSet::Set<FSlateBorderBrush>(pFVar1,*pFVar13,pFVar21);
  if ((pFVar20 != (FSlateBorderBrush *)0x0) && (local_1c18[0] != (void *)0x0)) {
    FMemory::Free(local_1c18[0]);
  }
  pFVar1 = (FSlateStyleSet *)**(undefined8 **)this;
  local_1c68._0_8_ = ___xmm_40000000414000004000000041400000;
  local_1c68._8_8_ = _UNK_150925378;
  pFVar13 = ::FName::FName((FName *)&local_res8._s_0,"WindowMenuBar.MenuBar.Padding");
  FSlateStyleSet::Set(pFVar1,*pFVar13,(FMargin *)&local_1c68._s_0);
  local_1078._0_8_ = &___7FButtonStyle__6B_;
  local_1078.Disabled._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1078.Disabled.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  local_1078.Pressed._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1078.Pressed.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  local_1078.Hovered._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1078.Hovered.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  local_1078.Normal._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1078.Normal.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)&local_1078);
  return;
}

// operator() @ 142560b50

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall `FUMGCoreStyle::Create'::__l2::<lambda_9>::operator()(void *this)

{
  FSlateStyleSet *pFVar1;
  undefined8 uVar2;
  void *pvVar3;
  undefined1 auVar4 [16];
  EStyleColor EVar5;
  undefined2 uVar6;
  FCompositeFont *pFVar7;
  TReferenceControllerBase<1> *pTVar8;
  void *pvVar9;
  TReferenceControllerBase<1> *pTVar10;
  FSlateColor *pFVar11;
  FSlateBoxBrush *pFVar12;
  FString *pFVar13;
  FSlateBoxBrush *pFVar14;
  FName *pFVar15;
  FSlateImageBrush *pFVar16;
  FSlateImageBrush *pFVar17;
  FButtonStyle *pFVar18;
  FSlateBrush *pFVar19;
  FLegacySlateFontInfoCache *pFVar20;
  FDockTabStyle *pFVar21;
  FSlateNoResource *pFVar22;
  FSlateNoResource *pFVar23;
  FSlateNoResource *pFVar24;
  char cVar25;
  TVector2<float>_u_0 local_res8;
  TVector2<float>_u_0 local_res10;
  FName local_res18;
  FName local_res20;
  undefined1 local_3438 [8];
  float fStack_3430;
  undefined4 uStack_342c;
  FLinearColor_u_0 local_3428;
  undefined1 local_3418 [16];
  FLinearColor_u_0 local_3408;
  void *local_33f8 [2];
  FLinearColor_u_0 local_33e8;
  undefined1 local_33d8 [16];
  undefined1 local_33c8 [8];
  float fStack_33c0;
  float fStack_33bc;
  FLinearColor_u_0 local_33b8;
  undefined1 local_33a8 [12];
  undefined4 uStack_339c;
  FLinearColor_u_0 local_3398;
  void *local_3388 [2];
  void *local_3378 [2];
  FName local_3368;
  FName local_3360;
  void *local_3358 [2];
  void *local_3348 [2];
  void *local_3338 [2];
  void *local_3328 [2];
  void *local_3318 [2];
  void *local_3308 [2];
  void *local_32f8 [2];
  undefined1 local_32e8 [160];
  TReferenceControllerBase<1> *local_3248;
  undefined **local_3238;
  undefined1 local_3230 [56];
  FSharedReferencer<1> local_31f8;
  FLinearColor_u_0 local_31d0;
  ESlateColorStylingMode local_31c0;
  EStyleColor EStack_31bf;
  undefined2 uStack_31be;
  FDeprecateSlateVector2D local_31bc;
  FLinearColor_u_0 local_31b4;
  FLinearColor_u_0 local_31a4;
  ESlateColorStylingMode EStack_3194;
  EStyleColor EStack_3193;
  undefined2 uStack_3192;
  FLinearColor_u_0 local_3190;
  ESlateColorStylingMode local_3180;
  EStyleColor EStack_317f;
  undefined2 uStack_317e;
  undefined **local_3178 [20];
  FSharedReferencer<1> local_30d8;
  undefined **local_30c8 [20];
  FSharedReferencer<1> local_3028;
  undefined **local_3018 [20];
  FSharedReferencer<1> local_2f78;
  ETextTransformPolicy local_2f68;
  ETextOverflowPolicy local_2f67;
  FTextBlockStyle local_2f58;
  undefined **local_2c78 [20];
  TReferenceControllerBase<1> *local_2bd8;
  undefined **local_2bc8 [20];
  TReferenceControllerBase<1> *local_2b28;
  FSlateBrush local_2b18;
  FButtonStyle local_2a68;
  undefined **local_26d8 [20];
  TReferenceControllerBase<1> *local_2638;
  undefined **local_2628 [20];
  TReferenceControllerBase<1> *local_2588;
  undefined **local_2578 [20];
  TReferenceControllerBase<1> *local_24d8;
  undefined **local_24c8 [20];
  TReferenceControllerBase<1> *local_2428;
  undefined **local_2418 [20];
  TReferenceControllerBase<1> *local_2378;
  undefined **local_2368 [20];
  TReferenceControllerBase<1> *local_22c8;
  undefined **local_22b8 [20];
  TReferenceControllerBase<1> *local_2218;
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
  FTextBlockStyle local_1e98;
  FButtonStyle local_1bb8;
  FDockTabStyle local_1828;
  FDockTabStyle local_c48;
  undefined8 uStack_48;
  
  uStack_48 = 0x142560b6f;
  pFVar24 = (FSlateNoResource *)0x0;
  local_res8._s_0 = local_res8._s_0 & 0xffffffff00000000;
  pFVar1 = (FSlateStyleSet *)**(undefined8 **)this;
  pFVar12 = ::operator_new(0xb0);
  pTVar10 = _UNK_15076b1f8;
  pvVar9 = ___xmm_3f8000003f8000003f8000003f800000;
  pTVar8 = _UNK_15076b0c8;
  pFVar7 = ___xmm_3e8000003e8000003e8000003e800000;
  pFVar14 = (FSlateBoxBrush *)pFVar24;
  if (pFVar12 != (FSlateBoxBrush *)0x0) {
    local_3438 = (undefined1  [8])___xmm_3f8000003f8000003f8000003f800000;
    _fStack_3430 = _UNK_15076b1f8;
    local_33c8 = (undefined1  [8])___xmm_3e8000003e8000003e8000003e800000;
    _fStack_33c0 = _UNK_15076b0c8;
    pFVar13 = (FString *)
              (**(code **)(*(longlong *)**(undefined8 **)this + 0xf0))
                        ((longlong *)**(undefined8 **)this,local_33a8,"Common/Button",L".png");
    pFVar14 = FSlateBoxBrush::FSlateBoxBrush
                        (pFVar12,pFVar13,(FMargin *)local_33c8,(FLinearColor *)local_3438,FullColor)
    ;
  }
  pFVar15 = ::FName::FName((FName *)&local_res8._s_0,"ExpandableButton.Background");
  FSlateStyleSet::Set<FSlateBoxBrush>(pFVar1,*pFVar15,pFVar14);
  if ((pFVar12 != (FSlateBoxBrush *)0x0) &&
     (pvVar3 = (void *)CONCAT17(local_33a8[7],
                                CONCAT16(local_33a8[6],CONCAT24(local_33a8._4_2_,local_33a8._0_4_)))
     , pvVar3 != (void *)0x0)) {
    FMemory::Free(pvVar3);
  }
  pFVar1 = (FSlateStyleSet *)**(undefined8 **)this;
  local_3438 = (undefined1  [8])___xmm_40c0000040c000004040000040400000;
  _fStack_3430 = _UNK_150925438;
  pFVar15 = ::FName::FName((FName *)&local_res8._s_0,"ExpandableButton.Padding");
  FSlateStyleSet::Set(pFVar1,*pFVar15,(FMargin *)local_3438);
  pFVar1 = (FSlateStyleSet *)**(undefined8 **)this;
  pFVar16 = ::operator_new(0xb0);
  pFVar17 = (FSlateImageBrush *)pFVar24;
  if (pFVar16 != (FSlateImageBrush *)0x0) {
    local_res8._s_0 = (TVector2<float>_u_0_s_0)CoreStyleConstants::Icon16x16;
    local_3438 = (undefined1  [8])pvVar9;
    _fStack_3430 = pTVar10;
    pFVar13 = (FString *)
              (**(code **)(*(longlong *)**(undefined8 **)this + 0xf0))
                        ((longlong *)**(undefined8 **)this,local_33c8,
                         "Common/ExpansionButton_CloseOverlay",L".png");
    pFVar17 = FSlateImageBrush::FSlateImageBrush
                        (pFVar16,pFVar13,(FDeprecateVector2DParameter *)&local_res8._s_0,
                         (FLinearColor *)local_3438,NoTile,FullColor);
  }
  pFVar15 = ::FName::FName((FName *)&local_res10._s_0,"ExpandableButton.CloseButton");
  FSlateStyleSet::Set<FSlateImageBrush>(pFVar1,*pFVar15,pFVar17);
  if ((pFVar16 != (FSlateImageBrush *)0x0) && (local_33c8 != (undefined1  [8])0x0)) {
    FMemory::Free((void *)local_33c8);
  }
  pFVar1 = (FSlateStyleSet *)**(undefined8 **)this;
  pFVar16 = ::operator_new(0xb0);
  pFVar17 = (FSlateImageBrush *)pFVar24;
  if (pFVar16 != (FSlateImageBrush *)0x0) {
    local_res8._s_0 = (TVector2<float>_u_0_s_0)CoreStyleConstants::Icon16x16;
    local_3438 = (undefined1  [8])pvVar9;
    _fStack_3430 = pTVar10;
    pFVar13 = (FString *)
              (**(code **)(*(longlong *)**(undefined8 **)this + 0xf0))
                        ((longlong *)**(undefined8 **)this,local_33c8,"Common/Delimiter",L".png");
    pFVar17 = FSlateImageBrush::FSlateImageBrush
                        (pFVar16,pFVar13,(FDeprecateVector2DParameter *)&local_res8._s_0,
                         (FLinearColor *)local_3438,NoTile,FullColor);
  }
  pFVar15 = ::FName::FName((FName *)&local_res10._s_0,"BreadcrumbTrail.Delimiter");
  FSlateStyleSet::Set<FSlateImageBrush>(pFVar1,*pFVar15,pFVar17);
  if ((pFVar16 != (FSlateImageBrush *)0x0) && (local_33c8 != (undefined1  [8])0x0)) {
    FMemory::Free((void *)local_33c8);
  }
  pFVar1 = (FSlateStyleSet *)**(undefined8 **)this;
  pFVar18 = FButtonStyle::FButtonStyle(&local_1bb8);
  local_res8 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  pFVar19 = (FSlateBrush *)
            FSlateNoResource::FSlateNoResource
                      ((FSlateNoResource *)local_2c78,
                       (FDeprecateVector2DParameter *)&local_res8._s_0);
  FSlateBrush::operator=(&pFVar18->Normal,pFVar19);
  local_3438 = (undefined1  [8])pFVar7;
  _fStack_3430 = pTVar8;
  pFVar13 = (FString *)
            (**(code **)(*(longlong *)**(undefined8 **)this + 0xf0))
                      ((longlong *)**(undefined8 **)this,&local_3428,"Common/RoundedSelection_16x",
                       L".png");
  pFVar19 = (FSlateBrush *)
            FSlateBoxBrush::FSlateBoxBrush
                      ((FSlateBoxBrush *)local_2628,pFVar13,(FMargin *)local_3438,
                       &SelectionColor_Pressed,FullColor);
  FSlateBrush::operator=(&pFVar18->Pressed,pFVar19);
  local_3438 = (undefined1  [8])pFVar7;
  _fStack_3430 = pTVar8;
  pFVar13 = (FString *)
            (**(code **)(*(longlong *)**(undefined8 **)this + 0xf0))
                      ((longlong *)**(undefined8 **)this,local_3418,"Common/RoundedSelection_16x",
                       L".png");
  pFVar19 = (FSlateBrush *)
            FSlateBoxBrush::FSlateBoxBrush
                      ((FSlateBoxBrush *)local_26d8,pFVar13,(FMargin *)local_3438,&SelectionColor,
                       FullColor);
  FSlateBrush::operator=(&pFVar18->Hovered,pFVar19);
  (pFVar18->NormalPadding).Left = 0.0;
  (pFVar18->NormalPadding).Top = 0.0;
  (pFVar18->NormalPadding).Right = 0.0;
  (pFVar18->NormalPadding).Bottom = 0.0;
  (pFVar18->PressedPadding).Left = 0.0;
  (pFVar18->PressedPadding).Top = 0.0;
  (pFVar18->PressedPadding).Right = 0.0;
  (pFVar18->PressedPadding).Bottom = 0.0;
  pFVar15 = ::FName::FName(&local_res18,"BreadcrumbButton");
  FSlateStyleSet::Set<FButtonStyle>(pFVar1,*pFVar15,pFVar18);
  local_26d8[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_2638);
  if ((FCompositeFont *)local_3418._0_8_ != (FCompositeFont *)0x0) {
    FMemory::Free((void *)local_3418._0_8_);
  }
  local_2628[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_2588);
  if ((void *)local_3428._0_8_ != (void *)0x0) {
    FMemory::Free((void *)local_3428._0_8_);
  }
  local_2c78[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_2bd8);
  local_1bb8._0_8_ = &___7FButtonStyle__6B_;
  local_1bb8.Disabled._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1bb8.Disabled.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  local_1bb8.Pressed._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1bb8.Pressed.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  local_1bb8.Hovered._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1bb8.Hovered.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  local_1bb8.Normal._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1bb8.Normal.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)&local_1bb8);
  pFVar1 = (FSlateStyleSet *)**(undefined8 **)this;
  local_2f58._0_8_ = &___7FTextBlockStyle__6B_;
  FSlateFontInfo::FSlateFontInfo(&local_2f58.Font,&NormalText.Font);
  local_2f58.ColorAndOpacity.ColorUseRule = NormalText.ColorAndOpacity.ColorUseRule;
  local_2f58.ColorAndOpacity.ColorTableId = NormalText.ColorAndOpacity.ColorTableId;
  local_2f58.ColorAndOpacity._18_2_ = NormalText.ColorAndOpacity._18_2_;
  local_2f58.ColorAndOpacity.SpecifiedColor.field0_0x0._s_0 =
       NormalText.ColorAndOpacity.SpecifiedColor.field0_0x0;
  local_2f58.ShadowOffset._0_4_ = NormalText.ShadowOffset._0_4_;
  local_2f58.ShadowOffset._4_4_ = NormalText.ShadowOffset._4_4_;
  local_2f58.SelectedBackgroundColor.ColorUseRule = NormalText.SelectedBackgroundColor.ColorUseRule;
  local_2f58.SelectedBackgroundColor.ColorTableId = NormalText.SelectedBackgroundColor.ColorTableId;
  local_2f58.SelectedBackgroundColor._18_2_ = NormalText.SelectedBackgroundColor._18_2_;
  local_2f58.ShadowColorAndOpacity.field0_0x0._s_0.R =
       NormalText.ShadowColorAndOpacity.field0_0x0._0_4_;
  local_2f58.ShadowColorAndOpacity.field0_0x0._4_8_ =
       NormalText.ShadowColorAndOpacity.field0_0x0._4_8_;
  local_2f58.ShadowColorAndOpacity.field0_0x0._s_0.A =
       NormalText.ShadowColorAndOpacity.field0_0x0._12_4_;
  local_2f58.HighlightColor.ColorUseRule = NormalText.HighlightColor.ColorUseRule;
  local_2f58.HighlightColor.ColorTableId = NormalText.HighlightColor.ColorTableId;
  local_2f58.HighlightColor._18_2_ = NormalText.HighlightColor._18_2_;
  local_2f58.SelectedBackgroundColor.SpecifiedColor.field0_0x0._0_12_ =
       NormalText.SelectedBackgroundColor.SpecifiedColor.field0_0x0._0_12_;
  local_2f58.SelectedBackgroundColor.SpecifiedColor.field0_0x0._s_0.A =
       NormalText.SelectedBackgroundColor.SpecifiedColor.field0_0x0._12_4_;
  local_2f58.HighlightColor.SpecifiedColor.field0_0x0._s_0 =
       NormalText.HighlightColor.SpecifiedColor.field0_0x0;
  FSlateBrush::FSlateBrush(&local_2f58.HighlightShape,&NormalText.HighlightShape);
  FSlateBrush::FSlateBrush(&local_2f58.StrikeBrush,&NormalText.StrikeBrush);
  FSlateBrush::FSlateBrush(&local_2f58.UnderlineBrush,&NormalText.UnderlineBrush);
  local_2f58.TransformPolicy = NormalText.TransformPolicy;
  local_2f58.OverflowPolicy = NormalText.OverflowPolicy;
  local_33e8._0_8_ = (ulonglong)(byte)local_33e8._7_1_ << 0x38;
  local_33e8._8_8_ = 0;
  local_33d8 = (undefined1  [16])FLinearColor::Black.field0_0x0;
  pFVar15 = ::FName::FName((FName *)&local_res10._s_0,"BoldCondensed");
  local_res8._0_4_ = *(float *)&pFVar15->ComparisonIndex;
  local_res8._4_4_ = (float)pFVar15->Number;
  pFVar20 = FLegacySlateFontInfoCache::Get();
  FLegacySlateFontInfoCache::GetDefaultFont
            (pFVar20,(TSharedRef<FCompositeFont_const_,1> *)local_3438);
  local_3428._0_8_ = local_3438;
  local_3428._8_8_ = _fStack_3430;
  if ((TReferenceControllerBase<1> *)_fStack_3430 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    *(atomic<int> *)(_fStack_3430 + 8) = (atomic<int>)((int)*(atomic<int> *)(_fStack_3430 + 8) + 1);
    UNLOCK();
  }
  FSlateFontInfo::FSlateFontInfo
            ((FSlateFontInfo *)local_32e8,(TSharedPtr<FCompositeFont_const_,1> *)&local_3428._s_0,
             __real_41e00000,(FName *)&local_res8._s_0,(FFontOutlineSettings *)&local_33e8._s_0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)_fStack_3430);
  FSlateFontInfo::operator=(&local_2f58.Font,(FSlateFontInfo *)local_32e8);
  local_2f58.ShadowOffset._4_4_ = SUB84(___xmm_0000000000000000000000003f800000,0);
  local_2f58.ShadowColorAndOpacity.field0_0x0._s_0.R =
       (float)((ulonglong)___xmm_0000000000000000000000003f800000 >> 0x20);
  local_2f58.ShadowColorAndOpacity.field0_0x0._4_8_ = _UNK_1506894f8;
  local_2f58.ShadowOffset._0_4_ = 0x3f800000;
  local_2f58.ShadowColorAndOpacity.field0_0x0._s_0.A = 0.9;
  pFVar15 = ::FName::FName(&local_res18,"Wizard.PageTitle");
  FSlateStyleSet::Set<FTextBlockStyle>(pFVar1,*pFVar15,&local_2f58);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_32e8._56_8_);
  local_2f58._0_8_ = &___7FTextBlockStyle__6B_;
  local_2f58.UnderlineBrush._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2f58.UnderlineBrush.ResourceHandle.Data.SharedReferenceCount.ReferenceController)
  ;
  local_2f58.StrikeBrush._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2f58.StrikeBrush.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  local_2f58.HighlightShape._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2f58.HighlightShape.ResourceHandle.Data.SharedReferenceCount.ReferenceController)
  ;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2f58.Font.CompositeFont.SharedReferenceCount.ReferenceController);
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)&local_2f58);
  pFVar1 = (FSlateStyleSet *)**(undefined8 **)this;
  local_33e8._0_8_ = local_33e8._0_8_ & 0xff00000000000000;
  local_33e8._8_8_ = 0;
  local_33d8 = (undefined1  [16])FLinearColor::Black.field0_0x0;
  pFVar15 = ::FName::FName((FName *)&local_res10._s_0,"Bold");
  local_res8._0_4_ = *(float *)&pFVar15->ComparisonIndex;
  local_res8._4_4_ = (float)pFVar15->Number;
  pFVar20 = FLegacySlateFontInfoCache::Get();
  FLegacySlateFontInfoCache::GetDefaultFont
            (pFVar20,(TSharedRef<FCompositeFont_const_,1> *)local_3438);
  local_3428._0_8_ = local_3438;
  local_3428._8_8_ = _fStack_3430;
  if ((TReferenceControllerBase<1> *)_fStack_3430 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    *(atomic<int> *)(_fStack_3430 + 8) = (atomic<int>)((int)*(atomic<int> *)(_fStack_3430 + 8) + 1);
    UNLOCK();
  }
  FSlateFontInfo::FSlateFontInfo
            ((FSlateFontInfo *)local_32e8,(TSharedPtr<FCompositeFont_const_,1> *)&local_3428._s_0,
             __real_41800000,(FName *)&local_res8._s_0,(FFontOutlineSettings *)&local_33e8._s_0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)_fStack_3430);
  pFVar15 = ::FName::FName(&local_res18,"NotificationList.FontBold");
  FSlateStyleSet::Set(pFVar1,*pFVar15,(FSlateFontInfo *)local_32e8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_32e8._56_8_);
  pFVar1 = (FSlateStyleSet *)**(undefined8 **)this;
  local_33e8._0_8_ = local_33e8._0_8_ & 0xff00000000000000;
  local_33e8._8_8_ = 0;
  local_33d8 = (undefined1  [16])FLinearColor::Black.field0_0x0;
  pFVar15 = ::FName::FName((FName *)&local_res10._s_0,"Light");
  local_res8._0_4_ = *(float *)&pFVar15->ComparisonIndex;
  local_res8._4_4_ = (float)pFVar15->Number;
  pFVar20 = FLegacySlateFontInfoCache::Get();
  FLegacySlateFontInfoCache::GetDefaultFont
            (pFVar20,(TSharedRef<FCompositeFont_const_,1> *)local_3438);
  local_3428._0_8_ = local_3438;
  local_3428._8_8_ = _fStack_3430;
  if ((TReferenceControllerBase<1> *)_fStack_3430 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    *(atomic<int> *)(_fStack_3430 + 8) = (atomic<int>)((int)*(atomic<int> *)(_fStack_3430 + 8) + 1);
    UNLOCK();
  }
  FSlateFontInfo::FSlateFontInfo
            ((FSlateFontInfo *)local_32e8,(TSharedPtr<FCompositeFont_const_,1> *)&local_3428._s_0,
             __real_41400000,(FName *)&local_res8._s_0,(FFontOutlineSettings *)&local_33e8._s_0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)_fStack_3430);
  pFVar15 = ::FName::FName(&local_res18,"NotificationList.FontLight");
  FSlateStyleSet::Set(pFVar1,*pFVar15,(FSlateFontInfo *)local_32e8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_32e8._56_8_);
  pFVar1 = (FSlateStyleSet *)**(undefined8 **)this;
  pFVar12 = ::operator_new(0xb0);
  pFVar14 = (FSlateBoxBrush *)pFVar24;
  if (pFVar12 != (FSlateBoxBrush *)0x0) {
    local_3428._0_8_ = pvVar9;
    local_3428._8_8_ = pTVar10;
    local_3418._0_8_ = ___xmm_3e0000003e0000003e0000003e000000;
    local_3418._8_8_ = _UNK_150925108;
    pFVar13 = (FString *)
              (**(code **)(*(longlong *)**(undefined8 **)this + 0xf0))
                        ((longlong *)**(undefined8 **)this,local_3438,"Old/Menu_Background",L".png")
    ;
    pFVar14 = FSlateBoxBrush::FSlateBoxBrush
                        (pFVar12,pFVar13,(FMargin *)local_3418,(FLinearColor *)&local_3428._s_0,
                         FullColor);
  }
  pFVar15 = ::FName::FName((FName *)&local_res8._s_0,"NotificationList.ItemBackground");
  FSlateStyleSet::Set<FSlateBoxBrush>(pFVar1,*pFVar15,pFVar14);
  if ((pFVar12 != (FSlateBoxBrush *)0x0) && (local_3438 != (undefined1  [8])0x0)) {
    FMemory::Free((void *)local_3438);
  }
  pFVar1 = (FSlateStyleSet *)**(undefined8 **)this;
  pFVar12 = ::operator_new(0xb0);
  pFVar14 = (FSlateBoxBrush *)pFVar24;
  if (pFVar12 != (FSlateBoxBrush *)0x0) {
    local_3428._0_8_ = pvVar9;
    local_3428._8_8_ = pTVar10;
    local_3418._0_8_ = ___xmm_3e0000003e0000003e0000003e000000;
    local_3418._8_8_ = _UNK_150925108;
    pFVar13 = (FString *)
              (**(code **)(*(longlong *)**(undefined8 **)this + 0xf0))
                        ((longlong *)**(undefined8 **)this,local_3438,
                         "Old/Menu_Background_Inverted_Border_Bold",L".png");
    pFVar14 = FSlateBoxBrush::FSlateBoxBrush
                        (pFVar12,pFVar13,(FMargin *)local_3418,(FLinearColor *)&local_3428._s_0,
                         FullColor);
  }
  pFVar15 = ::FName::FName((FName *)&local_res8._s_0,"NotificationList.ItemBackground_Border");
  FSlateStyleSet::Set<FSlateBoxBrush>(pFVar1,*pFVar15,pFVar14);
  if ((pFVar12 != (FSlateBoxBrush *)0x0) && (local_3438 != (undefined1  [8])0x0)) {
    FMemory::Free((void *)local_3438);
  }
  pFVar1 = (FSlateStyleSet *)**(undefined8 **)this;
  pFVar12 = ::operator_new(0xb0);
  pFVar14 = (FSlateBoxBrush *)pFVar24;
  if (pFVar12 != (FSlateBoxBrush *)0x0) {
    local_3428._0_8_ = pvVar9;
    local_3428._8_8_ = pTVar10;
    local_3418._0_8_ = ___xmm_3e0000003e0000003e0000003e000000;
    local_3418._8_8_ = _UNK_150925108;
    pFVar13 = (FString *)
              (**(code **)(*(longlong *)**(undefined8 **)this + 0xf0))
                        ((longlong *)**(undefined8 **)this,local_3438,
                         "Old/Notification_Border_Flash",L".png");
    pFVar14 = FSlateBoxBrush::FSlateBoxBrush
                        (pFVar12,pFVar13,(FMargin *)local_3418,(FLinearColor *)&local_3428._s_0,
                         FullColor);
  }
  pFVar15 = ::FName::FName((FName *)&local_res8._s_0,
                           "NotificationList.ItemBackground_Border_Transparent");
  FSlateStyleSet::Set<FSlateBoxBrush>(pFVar1,*pFVar15,pFVar14);
  if ((pFVar12 != (FSlateBoxBrush *)0x0) && (local_3438 != (undefined1  [8])0x0)) {
    FMemory::Free((void *)local_3438);
  }
  pFVar1 = (FSlateStyleSet *)**(undefined8 **)this;
  pFVar16 = ::operator_new(0xb0);
  pFVar17 = (FSlateImageBrush *)pFVar24;
  if (pFVar16 != (FSlateImageBrush *)0x0) {
    local_res8._s_0 = (TVector2<float>_u_0_s_0)CoreStyleConstants::Icon16x16;
    local_3428._0_8_ = pvVar9;
    local_3428._8_8_ = pTVar10;
    pFVar13 = (FString *)
              (**(code **)(*(longlong *)**(undefined8 **)this + 0xf0))
                        ((longlong *)**(undefined8 **)this,local_3418,
                         "Icons/notificationlist_success",L".png");
    pFVar17 = FSlateImageBrush::FSlateImageBrush
                        (pFVar16,pFVar13,(FDeprecateVector2DParameter *)&local_res8._s_0,
                         (FLinearColor *)&local_3428._s_0,NoTile,FullColor);
  }
  pFVar15 = ::FName::FName((FName *)&local_res10._s_0,"NotificationList.SuccessImage");
  FSlateStyleSet::Set<FSlateImageBrush>(pFVar1,*pFVar15,pFVar17);
  if ((pFVar16 != (FSlateImageBrush *)0x0) &&
     ((FCompositeFont *)local_3418._0_8_ != (FCompositeFont *)0x0)) {
    FMemory::Free((void *)local_3418._0_8_);
  }
  cVar25 = '\0';
  pFVar1 = (FSlateStyleSet *)**(undefined8 **)this;
  pFVar16 = ::operator_new(0xb0);
  pFVar17 = (FSlateImageBrush *)pFVar24;
  if (pFVar16 != (FSlateImageBrush *)0x0) {
    local_res8._s_0 = (TVector2<float>_u_0_s_0)CoreStyleConstants::Icon16x16;
    cVar25 = -0x80;
    local_3428._0_8_ = pvVar9;
    local_3428._8_8_ = pTVar10;
    pFVar13 = (FString *)
              (**(code **)(*(longlong *)**(undefined8 **)this + 0xf0))
                        ((longlong *)**(undefined8 **)this,local_3418,"Icons/notificationlist_fail",
                         L".png");
    pFVar17 = FSlateImageBrush::FSlateImageBrush
                        (pFVar16,pFVar13,(FDeprecateVector2DParameter *)&local_res8._s_0,
                         (FLinearColor *)&local_3428._s_0,NoTile,FullColor);
  }
  pFVar15 = ::FName::FName((FName *)&local_res10._s_0,"NotificationList.FailImage");
  FSlateStyleSet::Set<FSlateImageBrush>(pFVar1,*pFVar15,pFVar17);
  if ((cVar25 < '\0') && ((FCompositeFont *)local_3418._0_8_ != (FCompositeFont *)0x0)) {
    FMemory::Free((void *)local_3418._0_8_);
  }
  pFVar1 = (FSlateStyleSet *)**(undefined8 **)this;
  pFVar16 = ::operator_new(0xb0);
  pFVar17 = (FSlateImageBrush *)pFVar24;
  if (pFVar16 != (FSlateImageBrush *)0x0) {
    local_res8._s_0 = (TVector2<float>_u_0_s_0)CoreStyleConstants::Icon40x40;
    local_3428._0_8_ = pvVar9;
    local_3428._8_8_ = pTVar10;
    pFVar13 = (FString *)
              (**(code **)(*(longlong *)**(undefined8 **)this + 0xf0))
                        ((longlong *)**(undefined8 **)this,local_3418,"Common/EventMessage_Default",
                         L".png");
    pFVar17 = FSlateImageBrush::FSlateImageBrush
                        (pFVar16,pFVar13,(FDeprecateVector2DParameter *)&local_res8._s_0,
                         (FLinearColor *)&local_3428._s_0,NoTile,FullColor);
  }
  pFVar15 = ::FName::FName((FName *)&local_res10._s_0,"NotificationList.DefaultMessage");
  FSlateStyleSet::Set<FSlateImageBrush>(pFVar1,*pFVar15,pFVar17);
  if ((pFVar16 != (FSlateImageBrush *)0x0) &&
     ((FCompositeFont *)local_3418._0_8_ != (FCompositeFont *)0x0)) {
    FMemory::Free((void *)local_3418._0_8_);
  }
  pFVar1 = (FSlateStyleSet *)**(undefined8 **)this;
  pFVar12 = ::operator_new(0xb0);
  pFVar14 = (FSlateBoxBrush *)pFVar24;
  if (pFVar12 != (FSlateBoxBrush *)0x0) {
    local_3428._0_8_ = ___xmm_3f0000003f8000003f8000003f800000;
    local_3428._8_8_ = _UNK_150925228;
    local_3418._0_8_ = pFVar7;
    local_3418._8_8_ = pTVar8;
    pFVar13 = (FString *)
              (**(code **)(*(longlong *)**(undefined8 **)this + 0xf0))
                        ((longlong *)**(undefined8 **)this,local_3438,"Common/Separator",L".png");
    pFVar14 = FSlateBoxBrush::FSlateBoxBrush
                        (pFVar12,pFVar13,(FMargin *)local_3418,(FLinearColor *)&local_3428._s_0,
                         FullColor);
  }
  pFVar15 = ::FName::FName((FName *)&local_res8._s_0,"Separator");
  FSlateStyleSet::Set<FSlateBoxBrush>(pFVar1,*pFVar15,pFVar14);
  if ((pFVar12 != (FSlateBoxBrush *)0x0) && (local_3438 != (undefined1  [8])0x0)) {
    FMemory::Free((void *)local_3438);
  }
  pFVar1 = (FSlateStyleSet *)**(undefined8 **)this;
  pFVar12 = ::operator_new(0xb0);
  pFVar14 = (FSlateBoxBrush *)pFVar24;
  if (pFVar12 != (FSlateBoxBrush *)0x0) {
    local_3428._0_8_ = ___xmm_3f0000003f8000003f8000003f800000;
    local_3428._8_8_ = _UNK_150925228;
    local_3418._0_8_ = ___xmm_000000003f000000000000003e800000;
    local_3418._8_8_ = _UNK_150925058;
    pFVar13 = (FString *)
              (**(code **)(*(longlong *)**(undefined8 **)this + 0xf0))
                        ((longlong *)**(undefined8 **)this,local_3438,"Common/Separator",L".png");
    pFVar14 = FSlateBoxBrush::FSlateBoxBrush
                        (pFVar12,pFVar13,(FMargin *)local_3418,(FLinearColor *)&local_3428._s_0,
                         FullColor);
  }
  pFVar15 = ::FName::FName((FName *)&local_res8._s_0,"Header.Pre");
  FSlateStyleSet::Set<FSlateBoxBrush>(pFVar1,*pFVar15,pFVar14);
  if ((pFVar12 != (FSlateBoxBrush *)0x0) && (local_3438 != (undefined1  [8])0x0)) {
    FMemory::Free((void *)local_3438);
  }
  pFVar1 = (FSlateStyleSet *)**(undefined8 **)this;
  pFVar12 = ::operator_new(0xb0);
  pFVar14 = (FSlateBoxBrush *)pFVar24;
  if (pFVar12 != (FSlateBoxBrush *)0x0) {
    local_3428._0_8_ = ___xmm_3f0000003f8000003f8000003f800000;
    local_3428._8_8_ = _UNK_150925228;
    local_3418._0_8_ = ___xmm_000000003e800000000000003f000000;
    local_3418._8_8_ = _UNK_150925048;
    pFVar13 = (FString *)
              (**(code **)(*(longlong *)**(undefined8 **)this + 0xf0))
                        ((longlong *)**(undefined8 **)this,local_3438,"Common/Separator",L".png");
    pFVar14 = FSlateBoxBrush::FSlateBoxBrush
                        (pFVar12,pFVar13,(FMargin *)local_3418,(FLinearColor *)&local_3428._s_0,
                         FullColor);
  }
  pFVar15 = ::FName::FName((FName *)&local_res8._s_0,"Header.Post");
  FSlateStyleSet::Set<FSlateBoxBrush>(pFVar1,*pFVar15,pFVar14);
  if ((pFVar12 != (FSlateBoxBrush *)0x0) && (local_3438 != (undefined1  [8])0x0)) {
    FMemory::Free((void *)local_3438);
  }
  pFVar1 = (FSlateStyleSet *)**(undefined8 **)this;
  pFVar12 = ::operator_new(0xb0);
  pFVar14 = (FSlateBoxBrush *)pFVar24;
  if (pFVar12 != (FSlateBoxBrush *)0x0) {
    local_3428._0_8_ = pvVar9;
    local_3428._8_8_ = pTVar10;
    local_3418._0_8_ = ___xmm_3e0000003e0000003e0000003e000000;
    local_3418._8_8_ = _UNK_150925108;
    pFVar13 = (FString *)
              (**(code **)(*(longlong *)**(undefined8 **)this + 0xf0))
                        ((longlong *)**(undefined8 **)this,local_3438,"Old/Menu_Background",L".png")
    ;
    pFVar14 = FSlateBoxBrush::FSlateBoxBrush
                        (pFVar12,pFVar13,(FMargin *)local_3418,(FLinearColor *)&local_3428._s_0,
                         FullColor);
  }
  pFVar15 = ::FName::FName((FName *)&local_res8._s_0,"Docking.Background");
  FSlateStyleSet::Set<FSlateBoxBrush>(pFVar1,*pFVar15,pFVar14);
  if ((pFVar12 != (FSlateBoxBrush *)0x0) && (local_3438 != (undefined1  [8])0x0)) {
    FMemory::Free((void *)local_3438);
  }
  pFVar1 = (FSlateStyleSet *)**(undefined8 **)this;
  pFVar12 = ::operator_new(0xb0);
  pFVar14 = (FSlateBoxBrush *)pFVar24;
  if (pFVar12 != (FSlateBoxBrush *)0x0) {
    local_3428._0_8_ = pvVar9;
    local_3428._8_8_ = pTVar10;
    local_3418._0_8_ = pFVar7;
    local_3418._8_8_ = pTVar8;
    pFVar13 = (FString *)
              (**(code **)(*(longlong *)**(undefined8 **)this + 0xf0))
                        ((longlong *)**(undefined8 **)this,local_3438,"Common/GroupBorder",L".png");
    pFVar14 = FSlateBoxBrush::FSlateBoxBrush
                        (pFVar12,pFVar13,(FMargin *)local_3418,(FLinearColor *)&local_3428._s_0,
                         FullColor);
  }
  pFVar15 = ::FName::FName((FName *)&local_res8._s_0,"Docking.Border");
  FSlateStyleSet::Set<FSlateBoxBrush>(pFVar1,*pFVar15,pFVar14);
  if ((pFVar12 != (FSlateBoxBrush *)0x0) && (local_3438 != (undefined1  [8])0x0)) {
    FMemory::Free((void *)local_3438);
  }
  local_3238 = &___7FTextBlockStyle__6B_;
  FSlateFontInfo::FSlateFontInfo((FSlateFontInfo *)local_3230,&NormalText.Font);
  local_31c0 = NormalText.ColorAndOpacity.ColorUseRule;
  EStack_31bf = NormalText.ColorAndOpacity.ColorTableId;
  uStack_31be = NormalText.ColorAndOpacity._18_2_;
  local_31d0 = NormalText.ColorAndOpacity.SpecifiedColor.field0_0x0;
  local_31bc = NormalText.ShadowOffset;
  EStack_3194 = NormalText.SelectedBackgroundColor.ColorUseRule;
  EStack_3193 = NormalText.SelectedBackgroundColor.ColorTableId;
  uStack_3192 = NormalText.SelectedBackgroundColor._18_2_;
  local_31b4 = NormalText.ShadowColorAndOpacity.field0_0x0;
  local_3180 = NormalText.HighlightColor.ColorUseRule;
  EStack_317f = NormalText.HighlightColor.ColorTableId;
  uStack_317e = NormalText.HighlightColor._18_2_;
  local_31a4._0_12_ = NormalText.SelectedBackgroundColor.SpecifiedColor.field0_0x0._0_12_;
  local_31a4._s_0.A = NormalText.SelectedBackgroundColor.SpecifiedColor.field0_0x0._12_4_;
  local_3190 = NormalText.HighlightColor.SpecifiedColor.field0_0x0;
  FSlateBrush::FSlateBrush((FSlateBrush *)local_3178,&NormalText.HighlightShape);
  FSlateBrush::FSlateBrush((FSlateBrush *)local_30c8,&NormalText.StrikeBrush);
  FSlateBrush::FSlateBrush((FSlateBrush *)local_3018,&NormalText.UnderlineBrush);
  local_2f68 = NormalText.TransformPolicy;
  local_2f67 = NormalText.OverflowPolicy;
  local_33a8._0_4_ = 0.0;
  local_33a8[4] = false;
  local_33a8[5] = false;
  local_33a8[6] = false;
  stack0xffffffffffffcc60 = (UObject *)0x0;
  local_3398 = FLinearColor::Black.field0_0x0;
  pFVar15 = ::FName::FName((FName *)&local_res10._s_0,"Regular");
  local_res8._0_4_ = *(float *)&pFVar15->ComparisonIndex;
  local_res8._4_4_ = (float)pFVar15->Number;
  pFVar20 = FLegacySlateFontInfoCache::Get();
  FLegacySlateFontInfoCache::GetDefaultFont
            (pFVar20,(TSharedRef<FCompositeFont_const_,1> *)local_3438);
  local_33c8 = local_3438;
  _fStack_33c0 = _fStack_3430;
  if ((TReferenceControllerBase<1> *)_fStack_3430 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    *(atomic<int> *)(_fStack_3430 + 8) = (atomic<int>)((int)*(atomic<int> *)(_fStack_3430 + 8) + 1);
    UNLOCK();
  }
  FSlateFontInfo::FSlateFontInfo
            ((FSlateFontInfo *)local_32e8,(TSharedPtr<FCompositeFont_const_,1> *)local_33c8,
             __real_41100000,(FName *)&local_res8._s_0,(FFontOutlineSettings *)local_33a8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)_fStack_3430);
  FSlateFontInfo::operator=((FSlateFontInfo *)local_3230,(FSlateFontInfo *)local_32e8);
  local_31d0._8_8_ = _UNK_150925318;
  local_31d0._0_8_ = ___xmm_3f8000003f3851ec3f3851ec3f3851ec;
  auVar4[0xf] = 0;
  auVar4._0_15_ = local_33d8._1_15_;
  local_33d8 = auVar4 << 8;
  auVar4 = local_33d8;
  local_31c0 = local_33d8[0];
  EStack_31bf = local_33d8[1];
  uStack_31be = local_33d8._2_2_;
  local_31b4 = FLinearColor::Black.field0_0x0;
  local_31bc = (FDeprecateSlateVector2D)0x3f8000003f800000;
  local_33d8 = auVar4;
  FTextBlockStyle::FTextBlockStyle(&local_1e98,(FTextBlockStyle *)&local_3238);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_32e8._56_8_);
  local_3238 = &___7FTextBlockStyle__6B_;
  local_3018[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2f78.ReferenceController);
  local_30c8[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3028.ReferenceController);
  local_3178[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_30d8.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_31f8.ReferenceController);
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)&local_3238);
  pFVar1 = (FSlateStyleSet *)**(undefined8 **)this;
  pFVar18 = FButtonStyle::FButtonStyle(&local_2a68,&Button);
  local_res8 = (TVector2<float>_u_0)0x4120000041200000;
  local_3438 = (undefined1  [8])pvVar9;
  _fStack_3430 = pTVar10;
  pFVar13 = (FString *)
            (**(code **)(*(longlong *)**(undefined8 **)this + 0xf0))
                      ((longlong *)**(undefined8 **)this,&local_33b8,
                       "/Docking/ShowTabwellButton_Normal",L".png");
  pFVar19 = (FSlateBrush *)
            FSlateImageBrush::FSlateImageBrush
                      ((FSlateImageBrush *)&local_3238,pFVar13,
                       (FDeprecateVector2DParameter *)&local_res8._s_0,(FLinearColor *)local_3438,
                       NoTile,FullColor);
  FSlateBrush::operator=(&pFVar18->Normal,pFVar19);
  local_res8 = (TVector2<float>_u_0)0x4120000041200000;
  local_3438 = (undefined1  [8])pvVar9;
  _fStack_3430 = pTVar10;
  pFVar13 = (FString *)
            (**(code **)(*(longlong *)**(undefined8 **)this + 0xf0))
                      ((longlong *)**(undefined8 **)this,local_3378,
                       "/Docking/ShowTabwellButton_Pressed",L".png");
  pFVar19 = (FSlateBrush *)
            FSlateImageBrush::FSlateImageBrush
                      ((FSlateImageBrush *)local_2bc8,pFVar13,
                       (FDeprecateVector2DParameter *)&local_res8._s_0,(FLinearColor *)local_3438,
                       NoTile,FullColor);
  FSlateBrush::operator=(&pFVar18->Pressed,pFVar19);
  local_res8 = (TVector2<float>_u_0)0x4120000041200000;
  local_3438 = (undefined1  [8])pvVar9;
  _fStack_3430 = pTVar10;
  pFVar13 = (FString *)
            (**(code **)(*(longlong *)**(undefined8 **)this + 0xf0))
                      ((longlong *)**(undefined8 **)this,local_3388,
                       "/Docking/ShowTabwellButton_Hovered",L".png");
  pFVar19 = (FSlateBrush *)
            FSlateImageBrush::FSlateImageBrush
                      ((FSlateImageBrush *)local_32e8,pFVar13,
                       (FDeprecateVector2DParameter *)&local_res8._s_0,(FLinearColor *)local_3438,
                       NoTile,FullColor);
  FSlateBrush::operator=(&pFVar18->Hovered,pFVar19);
  (pFVar18->NormalPadding).Left = 0.0;
  (pFVar18->NormalPadding).Top = 0.0;
  (pFVar18->NormalPadding).Right = 0.0;
  (pFVar18->NormalPadding).Bottom = 0.0;
  (pFVar18->PressedPadding).Left = 0.0;
  (pFVar18->PressedPadding).Top = 0.0;
  (pFVar18->PressedPadding).Right = 0.0;
  (pFVar18->PressedPadding).Bottom = 0.0;
  pFVar15 = ::FName::FName(&local_res20,"Docking.UnhideTabwellButton");
  FSlateStyleSet::Set<FButtonStyle>(pFVar1,*pFVar15,pFVar18);
  local_32e8._0_8_ = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_3248);
  if (local_3388[0] != (void *)0x0) {
    FMemory::Free(local_3388[0]);
  }
  local_2bc8[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_2b28);
  if (local_3378[0] != (void *)0x0) {
    FMemory::Free(local_3378[0]);
  }
  local_3238 = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)CONCAT44(_EStack_3194,local_31a4._s_0.A));
  if ((void *)local_33b8._0_8_ != (void *)0x0) {
    FMemory::Free((void *)local_33b8._0_8_);
  }
  local_2a68._0_8_ = &___7FButtonStyle__6B_;
  local_2a68.Disabled._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2a68.Disabled.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  local_2a68.Pressed._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2a68.Pressed.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  local_2a68.Hovered._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2a68.Hovered.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  local_2a68.Normal._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2a68.Normal.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)&local_2a68);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    pFVar18 = FButtonStyle::FButtonStyle(&local_2a68);
    local_res8._s_0 = (TVector2<float>_u_0_s_0)CoreStyleConstants::Icon16x16;
    local_33b8._0_8_ = pvVar9;
    local_33b8._8_8_ = pTVar10;
    pFVar13 = (FString *)
              (**(code **)(*(longlong *)**(undefined8 **)this + 0xf0))
                        ((longlong *)**(undefined8 **)this,&local_3428,"/Docking/CloseApp_Normal",
                         L".png");
    pFVar19 = (FSlateBrush *)
              FSlateImageBrush::FSlateImageBrush
                        ((FSlateImageBrush *)local_2c78,pFVar13,
                         (FDeprecateVector2DParameter *)&local_res8._s_0,
                         (FLinearColor *)&local_33b8._s_0,NoTile,FullColor);
    FSlateBrush::operator=(&pFVar18->Normal,pFVar19);
    local_res8._s_0 = (TVector2<float>_u_0_s_0)CoreStyleConstants::Icon16x16;
    local_33b8._0_8_ = pvVar9;
    local_33b8._8_8_ = pTVar10;
    pFVar13 = (FString *)
              (**(code **)(*(longlong *)**(undefined8 **)this + 0xf0))
                        ((longlong *)**(undefined8 **)this,local_3388,"/Docking/CloseApp_Pressed",
                         L".png");
    pFVar19 = (FSlateBrush *)
              FSlateImageBrush::FSlateImageBrush
                        ((FSlateImageBrush *)local_2bc8,pFVar13,
                         (FDeprecateVector2DParameter *)&local_res8._s_0,
                         (FLinearColor *)&local_33b8._s_0,NoTile,FullColor);
    FSlateBrush::operator=(&pFVar18->Pressed,pFVar19);
    local_res8._s_0 = (TVector2<float>_u_0_s_0)CoreStyleConstants::Icon16x16;
    local_33b8._0_8_ = pvVar9;
    local_33b8._8_8_ = pTVar10;
    pFVar13 = (FString *)
              (**(code **)(*(longlong *)**(undefined8 **)this + 0xf0))
                        ((longlong *)**(undefined8 **)this,local_3378,"/Docking/CloseApp_Hovered",
                         L".png");
    pFVar19 = (FSlateBrush *)
              FSlateImageBrush::FSlateImageBrush
                        ((FSlateImageBrush *)&local_3238,pFVar13,
                         (FDeprecateVector2DParameter *)&local_res8._s_0,
                         (FLinearColor *)&local_33b8._s_0,NoTile,FullColor);
    FSlateBrush::operator=(&pFVar18->Hovered,pFVar19);
    FButtonStyle::FButtonStyle(&CloseButton,pFVar18);
    local_3238 = &___7FSlateBrush__6B_;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)CONCAT44(_EStack_3194,local_31a4._s_0.A));
    if (local_3378[0] != (void *)0x0) {
      FMemory::Free(local_3378[0]);
    }
    local_2bc8[0] = &___7FSlateBrush__6B_;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_2b28);
    if (local_3388[0] != (void *)0x0) {
      FMemory::Free(local_3388[0]);
    }
    local_2c78[0] = &___7FSlateBrush__6B_;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_2bd8);
    if ((void *)local_3428._0_8_ != (void *)0x0) {
      FMemory::Free((void *)local_3428._0_8_);
    }
    local_2a68._0_8_ = &___7FButtonStyle__6B_;
    local_2a68.Disabled._padding_ = (longlong)&___7FSlateBrush__6B_;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_2a68.Disabled.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
    local_2a68.Pressed._padding_ = (longlong)&___7FSlateBrush__6B_;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_2a68.Pressed.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
    local_2a68.Hovered._padding_ = (longlong)&___7FSlateBrush__6B_;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_2a68.Hovered.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
    local_2a68.Normal._padding_ = (longlong)&___7FSlateBrush__6B_;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_2a68.Normal.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
    FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)&local_2a68);
    atexit(``FUMGCoreStyle::Create'::__l2::<lambda_9>::operator()'::__l9::
           _dynamic_atexit_destructor_for__CloseButton__);
    _Init_thread_footer(&::_TSS0);
  }
  local_33c8._4_4_ = FLinearColor::sRGBToLinearTable[0x2d];
  local_33c8._0_4_ = FLinearColor::sRGBToLinearTable[0x2d];
  pFVar1 = (FSlateStyleSet *)**(undefined8 **)this;
  local_33a8._0_4_ = FLinearColor::sRGBToLinearTable[0x3e];
  local_33a8._4_2_ = SUB42(FLinearColor::sRGBToLinearTable[0x3e],0);
  local_33a8[6] = (undefined1)((uint)FLinearColor::sRGBToLinearTable[0x3e] >> 0x10);
  local_33a8[7] = (undefined1)((uint)FLinearColor::sRGBToLinearTable[0x3e] >> 0x18);
  local_3438._4_4_ = FLinearColor::sRGBToLinearTable[0x36];
  local_3438._0_4_ = FLinearColor::sRGBToLinearTable[0x36];
  fStack_33bc = 1.0;
  fStack_33c0 = FLinearColor::sRGBToLinearTable[0x2d];
  uStack_342c = 0x3f800000;
  fStack_3430 = FLinearColor::sRGBToLinearTable[0x36];
  uStack_339c = 0x3f800000;
  local_33a8._8_4_ = FLinearColor::sRGBToLinearTable[0x3e];
  pFVar21 = FDockTabStyle::FDockTabStyle(&local_1828);
  FButtonStyle::operator=(&pFVar21->CloseButtonStyle,&CloseButton);
  local_33e8._0_8_ = pFVar7;
  local_33e8._8_8_ = pTVar8;
  pFVar13 = (FString *)
            (**(code **)(*(longlong *)**(undefined8 **)this + 0xf0))
                      ((longlong *)**(undefined8 **)this,local_3328,"/Docking/Tab_Shape",L".png");
  pFVar19 = (FSlateBrush *)
            FSlateBoxBrush::FSlateBoxBrush
                      ((FSlateBoxBrush *)local_22b8,pFVar13,(FMargin *)&local_33e8._s_0,
                       (FLinearColor *)local_33c8,FullColor);
  FSlateBrush::operator=(&pFVar21->NormalBrush,pFVar19);
  local_33e8._0_8_ = pFVar7;
  local_33e8._8_8_ = pTVar8;
  pFVar13 = (FString *)
            (**(code **)(*(longlong *)**(undefined8 **)this + 0xf0))
                      ((longlong *)**(undefined8 **)this,local_3338,"/Docking/Tab_Shape",L".png");
  pFVar19 = (FSlateBrush *)
            FSlateBoxBrush::FSlateBoxBrush
                      ((FSlateBoxBrush *)local_2368,pFVar13,(FMargin *)&local_33e8._s_0,
                       (FLinearColor *)local_3438,FullColor);
  FSlateBrush::operator=(&pFVar21->HoveredBrush,pFVar19);
  local_33e8._0_8_ = pFVar7;
  local_33e8._8_8_ = pTVar8;
  pFVar13 = (FString *)
            (**(code **)(*(longlong *)**(undefined8 **)this + 0xf0))
                      ((longlong *)**(undefined8 **)this,local_3348,"/Docking/Tab_Shape",L".png");
  pFVar19 = (FSlateBrush *)
            FSlateBoxBrush::FSlateBoxBrush
                      ((FSlateBoxBrush *)local_2418,pFVar13,(FMargin *)&local_33e8._s_0,
                       (FLinearColor *)local_33a8,FullColor);
  FSlateBrush::operator=(&pFVar21->ForegroundBrush,pFVar19);
  local_33e8._0_8_ = pvVar9;
  local_33e8._8_8_ = pTVar10;
  local_3438 = (undefined1  [8])pFVar7;
  _fStack_3430 = pTVar8;
  pFVar13 = (FString *)
            (**(code **)(*(longlong *)**(undefined8 **)this + 0xf0))
                      ((longlong *)**(undefined8 **)this,local_3358,"/Docking/Tab_ColorOverlay",
                       L".png");
  pFVar19 = (FSlateBrush *)
            FSlateBoxBrush::FSlateBoxBrush
                      ((FSlateBoxBrush *)local_24c8,pFVar13,(FMargin *)local_3438,
                       (FLinearColor *)&local_33e8._s_0,FullColor);
  FSlateBrush::operator=(&pFVar21->ColorOverlayTabBrush,pFVar19);
  local_res10 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  local_res8 = (TVector2<float>_u_0)0x0;
  local_33e8._0_8_ = 0;
  local_33e8._8_8_ = 0;
  FSlateBrush::FSlateBrush
            (&local_2b18,Image,(FName)0x0,(FMargin *)&local_33e8._s_0,NoTile,NoImage,
             (FDeprecateVector2DParameter *)&local_res10._s_0,(FLinearColor *)local_33a8,
             (UObject *)0x0,false);
  local_2b18._padding_ = (longlong)&___7FSlateColorBrush__6B_;
  FSlateBrush::operator=(&pFVar21->ContentAreaBrush,&local_2b18);
  local_res8 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  pFVar19 = (FSlateBrush *)
            FSlateNoResource::FSlateNoResource
                      ((FSlateNoResource *)local_2578,
                       (FDeprecateVector2DParameter *)&local_res8._s_0);
  FSlateBrush::operator=(&pFVar21->TabWellBrush,pFVar19);
  (pFVar21->TabPadding).Left = 5.0;
  (pFVar21->TabPadding).Top = 2.0;
  (pFVar21->TabPadding).Right = 5.0;
  (pFVar21->TabPadding).Bottom = 2.0;
  pFVar11 = TabFlashColor;
  pFVar21->OverlapWidth = -1.0;
  uVar2 = *(undefined8 *)((longlong)&(pFVar11->SpecifiedColor).field0_0x0 + 8);
  *(undefined8 *)&(pFVar21->FlashColor).SpecifiedColor.field0_0x0 =
       *(undefined8 *)&(pFVar11->SpecifiedColor).field0_0x0;
  *(undefined8 *)((longlong)&(pFVar21->FlashColor).SpecifiedColor.field0_0x0 + 8) = uVar2;
  EVar5 = pFVar11->ColorTableId;
  uVar6 = *(undefined2 *)&pFVar11->field_0x12;
  (pFVar21->FlashColor).ColorUseRule = pFVar11->ColorUseRule;
  (pFVar21->FlashColor).ColorTableId = EVar5;
  *(undefined2 *)&(pFVar21->FlashColor).field_0x12 = uVar6;
  FTextBlockStyle::operator=(&pFVar21->TabTextStyle,&local_1e98);
  pFVar15 = ::FName::FName(&local_3360,"Docking.Tab");
  FSlateStyleSet::Set<FDockTabStyle>(pFVar1,*pFVar15,pFVar21);
  local_2578[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_24d8);
  local_2b18._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2b18.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  local_24c8[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_2428);
  if (local_3358[0] != (void *)0x0) {
    FMemory::Free(local_3358[0]);
  }
  local_2418[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_2378);
  if (local_3348[0] != (void *)0x0) {
    FMemory::Free(local_3348[0]);
  }
  local_2368[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_22c8);
  if (local_3338[0] != (void *)0x0) {
    FMemory::Free(local_3338[0]);
  }
  local_22b8[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_2218);
  if (local_3328[0] != (void *)0x0) {
    FMemory::Free(local_3328[0]);
  }
  FDockTabStyle::~FDockTabStyle(&local_1828);
  pFVar1 = (FSlateStyleSet *)**(undefined8 **)this;
  pFVar21 = FDockTabStyle::FDockTabStyle(&local_c48);
  FButtonStyle::operator=(&pFVar21->CloseButtonStyle,&CloseButton);
  local_33e8._0_8_ = pvVar9;
  local_33e8._8_8_ = pTVar10;
  local_3438 = (undefined1  [8])___xmm_3e0000003ec000003e0000003ec00000;
  _fStack_3430 = _UNK_150925118;
  pFVar13 = (FString *)
            (**(code **)(*(longlong *)**(undefined8 **)this + 0xf0))
                      ((longlong *)**(undefined8 **)this,&local_3408,"/Docking/AppTab_Inactive",
                       L".png");
  pFVar19 = (FSlateBrush *)
            FSlateBoxBrush::FSlateBoxBrush
                      ((FSlateBoxBrush *)&local_2f58,pFVar13,(FMargin *)local_3438,
                       (FLinearColor *)&local_33e8._s_0,FullColor);
  FSlateBrush::operator=(&pFVar21->NormalBrush,pFVar19);
  local_33e8._0_8_ = pvVar9;
  local_33e8._8_8_ = pTVar10;
  local_3438 = (undefined1  [8])___xmm_3e0000003ec000003e0000003ec00000;
  _fStack_3430 = _UNK_150925118;
  pFVar13 = (FString *)
            (**(code **)(*(longlong *)**(undefined8 **)this + 0xf0))
                      ((longlong *)**(undefined8 **)this,local_33f8,"/Docking/AppTab_ColorOverlay",
                       L".png");
  pFVar19 = (FSlateBrush *)
            FSlateBoxBrush::FSlateBoxBrush
                      ((FSlateBoxBrush *)local_1ff8,pFVar13,(FMargin *)local_3438,
                       (FLinearColor *)&local_33e8._s_0,FullColor);
  FSlateBrush::operator=(&pFVar21->ColorOverlayTabBrush,pFVar19);
  local_33e8._0_8_ = pvVar9;
  local_33e8._8_8_ = pTVar10;
  local_3438 = (undefined1  [8])___xmm_3e0000003ec000003e0000003ec00000;
  _fStack_3430 = _UNK_150925118;
  pFVar13 = (FString *)
            (**(code **)(*(longlong *)**(undefined8 **)this + 0xf0))
                      ((longlong *)**(undefined8 **)this,local_32f8,"/Docking/AppTab_Foreground",
                       L".png");
  pFVar19 = (FSlateBrush *)
            FSlateBoxBrush::FSlateBoxBrush
                      ((FSlateBoxBrush *)local_20a8,pFVar13,(FMargin *)local_3438,
                       (FLinearColor *)&local_33e8._s_0,FullColor);
  FSlateBrush::operator=(&pFVar21->ForegroundBrush,pFVar19);
  local_33e8._0_8_ = pvVar9;
  local_33e8._8_8_ = pTVar10;
  local_3438 = (undefined1  [8])___xmm_3e0000003ec000003e0000003ec00000;
  _fStack_3430 = _UNK_150925118;
  pFVar13 = (FString *)
            (**(code **)(*(longlong *)**(undefined8 **)this + 0xf0))
                      ((longlong *)**(undefined8 **)this,local_3308,"/Docking/AppTab_Hovered",
                       L".png");
  pFVar19 = (FSlateBrush *)
            FSlateBoxBrush::FSlateBoxBrush
                      ((FSlateBoxBrush *)local_2158,pFVar13,(FMargin *)local_3438,
                       (FLinearColor *)&local_33e8._s_0,FullColor);
  FSlateBrush::operator=(&pFVar21->HoveredBrush,pFVar19);
  local_33e8._0_8_ = pvVar9;
  local_33e8._8_8_ = pTVar10;
  local_3438 = (undefined1  [8])pFVar7;
  _fStack_3430 = pTVar8;
  pFVar13 = (FString *)
            (**(code **)(*(longlong *)**(undefined8 **)this + 0xf0))
                      ((longlong *)**(undefined8 **)this,local_3318,"/Docking/AppTabContentArea",
                       L".png");
  pFVar19 = (FSlateBrush *)
            FSlateBoxBrush::FSlateBoxBrush
                      ((FSlateBoxBrush *)local_2208,pFVar13,(FMargin *)local_3438,
                       (FLinearColor *)&local_33e8._s_0,FullColor);
  FSlateBrush::operator=(&pFVar21->ContentAreaBrush,pFVar19);
  local_res8 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  pFVar19 = (FSlateBrush *)
            FSlateNoResource::FSlateNoResource
                      ((FSlateNoResource *)local_1f48,
                       (FDeprecateVector2DParameter *)&local_res8._s_0);
  FSlateBrush::operator=(&pFVar21->TabWellBrush,pFVar19);
  (pFVar21->TabPadding).Left = 17.0;
  (pFVar21->TabPadding).Top = 4.0;
  (pFVar21->TabPadding).Right = 15.0;
  (pFVar21->TabPadding).Bottom = 4.0;
  pFVar11 = TabFlashColor;
  pFVar21->OverlapWidth = 21.0;
  uVar2 = *(undefined8 *)((longlong)&(pFVar11->SpecifiedColor).field0_0x0 + 8);
  *(undefined8 *)&(pFVar21->FlashColor).SpecifiedColor.field0_0x0 =
       *(undefined8 *)&(pFVar11->SpecifiedColor).field0_0x0;
  *(undefined8 *)((longlong)&(pFVar21->FlashColor).SpecifiedColor.field0_0x0 + 8) = uVar2;
  EVar5 = pFVar11->ColorTableId;
  uVar6 = *(undefined2 *)&pFVar11->field_0x12;
  (pFVar21->FlashColor).ColorUseRule = pFVar11->ColorUseRule;
  (pFVar21->FlashColor).ColorTableId = EVar5;
  *(undefined2 *)&(pFVar21->FlashColor).field_0x12 = uVar6;
  FTextBlockStyle::operator=(&pFVar21->TabTextStyle,&local_1e98);
  pFVar15 = ::FName::FName(&local_3368,"Docking.MajorTab");
  FSlateStyleSet::Set<FDockTabStyle>(pFVar1,*pFVar15,pFVar21);
  local_1f48[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_1ea8);
  local_2208[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_2168);
  if (local_3318[0] != (void *)0x0) {
    FMemory::Free(local_3318[0]);
  }
  local_2158[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_20b8);
  if (local_3308[0] != (void *)0x0) {
    FMemory::Free(local_3308[0]);
  }
  local_20a8[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_2008);
  if (local_32f8[0] != (void *)0x0) {
    FMemory::Free(local_32f8[0]);
  }
  local_1ff8[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_1f58);
  if (local_33f8[0] != (void *)0x0) {
    FMemory::Free(local_33f8[0]);
  }
  local_2f58._0_8_ = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)
             CONCAT44(local_2f58.SelectedBackgroundColor._16_4_,
                      local_2f58.SelectedBackgroundColor.SpecifiedColor.field0_0x0._s_0.A));
  if ((void *)local_3408._0_8_ != (void *)0x0) {
    FMemory::Free((void *)local_3408._0_8_);
  }
  FDockTabStyle::~FDockTabStyle(&local_c48);
  pFVar1 = (FSlateStyleSet *)**(undefined8 **)this;
  pFVar16 = ::operator_new(0xb0);
  pFVar17 = (FSlateImageBrush *)pFVar24;
  if (pFVar16 != (FSlateImageBrush *)0x0) {
    local_res8 = (TVector2<float>_u_0)0x40c0000040c00000;
    local_3408._0_8_ = ___xmm_3e800000000000003eb333333f800000;
    local_3408._8_8_ = _UNK_150925168;
    pFVar13 = (FString *)
              (**(code **)(*(longlong *)**(undefined8 **)this + 0xf0))
                        ((longlong *)**(undefined8 **)this,local_33f8,
                         "/Docking/OuterDockingIndicator",L".png");
    pFVar17 = FSlateImageBrush::FSlateImageBrush
                        (pFVar16,pFVar13,(FDeprecateVector2DParameter *)&local_res8._s_0,
                         (FLinearColor *)&local_3408._s_0,NoTile,FullColor);
  }
  pFVar15 = ::FName::FName((FName *)&local_res10._s_0,"Docking.Cross.DockLeft");
  FSlateStyleSet::Set<FSlateImageBrush>(pFVar1,*pFVar15,pFVar17);
  if ((pFVar16 != (FSlateImageBrush *)0x0) && (local_33f8[0] != (void *)0x0)) {
    FMemory::Free(local_33f8[0]);
  }
  pFVar1 = (FSlateStyleSet *)**(undefined8 **)this;
  pFVar16 = ::operator_new(0xb0);
  pFVar17 = (FSlateImageBrush *)pFVar24;
  if (pFVar16 != (FSlateImageBrush *)0x0) {
    local_res8 = (TVector2<float>_u_0)0x40c0000040c00000;
    local_3408._0_8_ = ___xmm_3f800000000000003eb333333f800000;
    local_3408._8_8_ = _UNK_1509252a8;
    pFVar13 = (FString *)
              (**(code **)(*(longlong *)**(undefined8 **)this + 0xf0))
                        ((longlong *)**(undefined8 **)this,local_33f8,
                         "/Docking/OuterDockingIndicator",L".png");
    pFVar17 = FSlateImageBrush::FSlateImageBrush
                        (pFVar16,pFVar13,(FDeprecateVector2DParameter *)&local_res8._s_0,
                         (FLinearColor *)&local_3408._s_0,NoTile,FullColor);
  }
  pFVar15 = ::FName::FName((FName *)&local_res10._s_0,"Docking.Cross.DockLeft_Hovered");
  FSlateStyleSet::Set<FSlateImageBrush>(pFVar1,*pFVar15,pFVar17);
  if ((pFVar16 != (FSlateImageBrush *)0x0) && (local_33f8[0] != (void *)0x0)) {
    FMemory::Free(local_33f8[0]);
  }
  pFVar1 = (FSlateStyleSet *)**(undefined8 **)this;
  pFVar16 = ::operator_new(0xb0);
  pFVar17 = (FSlateImageBrush *)pFVar24;
  if (pFVar16 != (FSlateImageBrush *)0x0) {
    local_res8 = (TVector2<float>_u_0)0x40c0000040c00000;
    local_3408._0_8_ = ___xmm_3e800000000000003eb333333f800000;
    local_3408._8_8_ = _UNK_150925168;
    pFVar13 = (FString *)
              (**(code **)(*(longlong *)**(undefined8 **)this + 0xf0))
                        ((longlong *)**(undefined8 **)this,local_33f8,
                         "/Docking/OuterDockingIndicator",L".png");
    pFVar17 = FSlateImageBrush::FSlateImageBrush
                        (pFVar16,pFVar13,(FDeprecateVector2DParameter *)&local_res8._s_0,
                         (FLinearColor *)&local_3408._s_0,NoTile,FullColor);
  }
  pFVar15 = ::FName::FName((FName *)&local_res10._s_0,"Docking.Cross.DockTop");
  FSlateStyleSet::Set<FSlateImageBrush>(pFVar1,*pFVar15,pFVar17);
  if ((pFVar16 != (FSlateImageBrush *)0x0) && (local_33f8[0] != (void *)0x0)) {
    FMemory::Free(local_33f8[0]);
  }
  pFVar1 = (FSlateStyleSet *)**(undefined8 **)this;
  pFVar16 = ::operator_new(0xb0);
  pFVar17 = (FSlateImageBrush *)pFVar24;
  if (pFVar16 != (FSlateImageBrush *)0x0) {
    local_res8 = (TVector2<float>_u_0)0x40c0000040c00000;
    local_3408._0_8_ = ___xmm_3f800000000000003eb333333f800000;
    local_3408._8_8_ = _UNK_1509252a8;
    pFVar13 = (FString *)
              (**(code **)(*(longlong *)**(undefined8 **)this + 0xf0))
                        ((longlong *)**(undefined8 **)this,local_33f8,
                         "/Docking/OuterDockingIndicator",L".png");
    pFVar17 = FSlateImageBrush::FSlateImageBrush
                        (pFVar16,pFVar13,(FDeprecateVector2DParameter *)&local_res8._s_0,
                         (FLinearColor *)&local_3408._s_0,NoTile,FullColor);
  }
  pFVar15 = ::FName::FName((FName *)&local_res10._s_0,"Docking.Cross.DockTop_Hovered");
  FSlateStyleSet::Set<FSlateImageBrush>(pFVar1,*pFVar15,pFVar17);
  if ((pFVar16 != (FSlateImageBrush *)0x0) && (local_33f8[0] != (void *)0x0)) {
    FMemory::Free(local_33f8[0]);
  }
  pFVar1 = (FSlateStyleSet *)**(undefined8 **)this;
  pFVar16 = ::operator_new(0xb0);
  pFVar17 = (FSlateImageBrush *)pFVar24;
  if (pFVar16 != (FSlateImageBrush *)0x0) {
    local_res8 = (TVector2<float>_u_0)0x40c0000040c00000;
    local_3408._0_8_ = ___xmm_3e800000000000003eb333333f800000;
    local_3408._8_8_ = _UNK_150925168;
    pFVar13 = (FString *)
              (**(code **)(*(longlong *)**(undefined8 **)this + 0xf0))
                        ((longlong *)**(undefined8 **)this,local_33f8,
                         "/Docking/OuterDockingIndicator",L".png");
    pFVar17 = FSlateImageBrush::FSlateImageBrush
                        (pFVar16,pFVar13,(FDeprecateVector2DParameter *)&local_res8._s_0,
                         (FLinearColor *)&local_3408._s_0,NoTile,FullColor);
  }
  pFVar15 = ::FName::FName((FName *)&local_res10._s_0,"Docking.Cross.DockRight");
  FSlateStyleSet::Set<FSlateImageBrush>(pFVar1,*pFVar15,pFVar17);
  if ((pFVar16 != (FSlateImageBrush *)0x0) && (local_33f8[0] != (void *)0x0)) {
    FMemory::Free(local_33f8[0]);
  }
  pFVar1 = (FSlateStyleSet *)**(undefined8 **)this;
  pFVar16 = ::operator_new(0xb0);
  pFVar17 = (FSlateImageBrush *)pFVar24;
  if (pFVar16 != (FSlateImageBrush *)0x0) {
    local_res8 = (TVector2<float>_u_0)0x40c0000040c00000;
    local_3408._0_8_ = ___xmm_3f800000000000003eb333333f800000;
    local_3408._8_8_ = _UNK_1509252a8;
    pFVar13 = (FString *)
              (**(code **)(*(longlong *)**(undefined8 **)this + 0xf0))
                        ((longlong *)**(undefined8 **)this,local_33f8,
                         "/Docking/OuterDockingIndicator",L".png");
    pFVar17 = FSlateImageBrush::FSlateImageBrush
                        (pFVar16,pFVar13,(FDeprecateVector2DParameter *)&local_res8._s_0,
                         (FLinearColor *)&local_3408._s_0,NoTile,FullColor);
  }
  pFVar15 = ::FName::FName((FName *)&local_res10._s_0,"Docking.Cross.DockRight_Hovered");
  FSlateStyleSet::Set<FSlateImageBrush>(pFVar1,*pFVar15,pFVar17);
  if ((pFVar16 != (FSlateImageBrush *)0x0) && (local_33f8[0] != (void *)0x0)) {
    FMemory::Free(local_33f8[0]);
  }
  pFVar1 = (FSlateStyleSet *)**(undefined8 **)this;
  pFVar16 = ::operator_new(0xb0);
  pFVar17 = (FSlateImageBrush *)pFVar24;
  if (pFVar16 != (FSlateImageBrush *)0x0) {
    local_res8 = (TVector2<float>_u_0)0x40c0000040c00000;
    local_3408._0_8_ = ___xmm_3e800000000000003eb333333f800000;
    local_3408._8_8_ = _UNK_150925168;
    pFVar13 = (FString *)
              (**(code **)(*(longlong *)**(undefined8 **)this + 0xf0))
                        ((longlong *)**(undefined8 **)this,local_33f8,
                         "/Docking/OuterDockingIndicator",L".png");
    pFVar17 = FSlateImageBrush::FSlateImageBrush
                        (pFVar16,pFVar13,(FDeprecateVector2DParameter *)&local_res8._s_0,
                         (FLinearColor *)&local_3408._s_0,NoTile,FullColor);
  }
  pFVar15 = ::FName::FName((FName *)&local_res10._s_0,"Docking.Cross.DockBottom");
  FSlateStyleSet::Set<FSlateImageBrush>(pFVar1,*pFVar15,pFVar17);
  if ((pFVar16 != (FSlateImageBrush *)0x0) && (local_33f8[0] != (void *)0x0)) {
    FMemory::Free(local_33f8[0]);
  }
  pFVar1 = (FSlateStyleSet *)**(undefined8 **)this;
  pFVar16 = ::operator_new(0xb0);
  pFVar17 = (FSlateImageBrush *)pFVar24;
  if (pFVar16 != (FSlateImageBrush *)0x0) {
    local_res8 = (TVector2<float>_u_0)0x40c0000040c00000;
    local_3408._0_8_ = ___xmm_3f800000000000003eb333333f800000;
    local_3408._8_8_ = _UNK_1509252a8;
    pFVar13 = (FString *)
              (**(code **)(*(longlong *)**(undefined8 **)this + 0xf0))
                        ((longlong *)**(undefined8 **)this,local_33f8,
                         "/Docking/OuterDockingIndicator",L".png");
    pFVar17 = FSlateImageBrush::FSlateImageBrush
                        (pFVar16,pFVar13,(FDeprecateVector2DParameter *)&local_res8._s_0,
                         (FLinearColor *)&local_3408._s_0,NoTile,FullColor);
  }
  pFVar15 = ::FName::FName((FName *)&local_res10._s_0,"Docking.Cross.DockBottom_Hovered");
  FSlateStyleSet::Set<FSlateImageBrush>(pFVar1,*pFVar15,pFVar17);
  if ((pFVar16 != (FSlateImageBrush *)0x0) && (local_33f8[0] != (void *)0x0)) {
    FMemory::Free(local_33f8[0]);
  }
  pFVar1 = (FSlateStyleSet *)**(undefined8 **)this;
  pFVar16 = ::operator_new(0xb0);
  pFVar17 = (FSlateImageBrush *)pFVar24;
  if (pFVar16 != (FSlateImageBrush *)0x0) {
    local_res8._s_0 = (TVector2<float>_u_0_s_0)CoreStyleConstants::Icon64x64;
    local_3408._0_8_ = ___xmm_3e800000000000003eb333333f800000;
    local_3408._8_8_ = _UNK_150925168;
    pFVar13 = (FString *)
              (**(code **)(*(longlong *)**(undefined8 **)this + 0xf0))
                        ((longlong *)**(undefined8 **)this,local_33f8,
                         "/Docking/DockingIndicator_Center",L".png");
    pFVar17 = FSlateImageBrush::FSlateImageBrush
                        (pFVar16,pFVar13,(FDeprecateVector2DParameter *)&local_res8._s_0,
                         (FLinearColor *)&local_3408._s_0,NoTile,FullColor);
  }
  pFVar15 = ::FName::FName((FName *)&local_res10._s_0,"Docking.Cross.DockCenter");
  FSlateStyleSet::Set<FSlateImageBrush>(pFVar1,*pFVar15,pFVar17);
  if ((pFVar16 != (FSlateImageBrush *)0x0) && (local_33f8[0] != (void *)0x0)) {
    FMemory::Free(local_33f8[0]);
  }
  pFVar1 = (FSlateStyleSet *)**(undefined8 **)this;
  pFVar16 = ::operator_new(0xb0);
  pFVar17 = (FSlateImageBrush *)pFVar24;
  if (pFVar16 != (FSlateImageBrush *)0x0) {
    local_res8._s_0 = (TVector2<float>_u_0_s_0)CoreStyleConstants::Icon64x64;
    local_3408._0_8_ = ___xmm_3f800000000000003eb333333f800000;
    local_3408._8_8_ = _UNK_1509252a8;
    pFVar13 = (FString *)
              (**(code **)(*(longlong *)**(undefined8 **)this + 0xf0))
                        ((longlong *)**(undefined8 **)this,local_33f8,
                         "/Docking/DockingIndicator_Center",L".png");
    pFVar17 = FSlateImageBrush::FSlateImageBrush
                        (pFVar16,pFVar13,(FDeprecateVector2DParameter *)&local_res8._s_0,
                         (FLinearColor *)&local_3408._s_0,NoTile,FullColor);
  }
  pFVar15 = ::FName::FName((FName *)&local_res10._s_0,"Docking.Cross.DockCenter_Hovered");
  FSlateStyleSet::Set<FSlateImageBrush>(pFVar1,*pFVar15,pFVar17);
  if ((pFVar16 != (FSlateImageBrush *)0x0) && (local_33f8[0] != (void *)0x0)) {
    FMemory::Free(local_33f8[0]);
  }
  pFVar1 = (FSlateStyleSet *)**(undefined8 **)this;
  pFVar22 = ::operator_new(0xb0);
  pFVar23 = pFVar24;
  if (pFVar22 != (FSlateNoResource *)0x0) {
    local_res8 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
    pFVar23 = FSlateNoResource::FSlateNoResource
                        (pFVar22,(FDeprecateVector2DParameter *)&local_res8._s_0);
  }
  pFVar15 = ::FName::FName((FName *)&local_res10._s_0,"Docking.Cross.BorderLeft");
  FSlateStyleSet::Set<FSlateNoResource>(pFVar1,*pFVar15,pFVar23);
  pFVar1 = (FSlateStyleSet *)**(undefined8 **)this;
  pFVar22 = ::operator_new(0xb0);
  pFVar23 = pFVar24;
  if (pFVar22 != (FSlateNoResource *)0x0) {
    local_res8 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
    pFVar23 = FSlateNoResource::FSlateNoResource
                        (pFVar22,(FDeprecateVector2DParameter *)&local_res8._s_0);
  }
  pFVar15 = ::FName::FName((FName *)&local_res10._s_0,"Docking.Cross.BorderTop");
  FSlateStyleSet::Set<FSlateNoResource>(pFVar1,*pFVar15,pFVar23);
  pFVar1 = (FSlateStyleSet *)**(undefined8 **)this;
  pFVar22 = ::operator_new(0xb0);
  pFVar23 = pFVar24;
  if (pFVar22 != (FSlateNoResource *)0x0) {
    local_res8 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
    pFVar23 = FSlateNoResource::FSlateNoResource
                        (pFVar22,(FDeprecateVector2DParameter *)&local_res8._s_0);
  }
  pFVar15 = ::FName::FName((FName *)&local_res10._s_0,"Docking.Cross.BorderRight");
  FSlateStyleSet::Set<FSlateNoResource>(pFVar1,*pFVar15,pFVar23);
  pFVar1 = (FSlateStyleSet *)**(undefined8 **)this;
  pFVar22 = ::operator_new(0xb0);
  pFVar23 = pFVar24;
  if (pFVar22 != (FSlateNoResource *)0x0) {
    local_res8 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
    pFVar23 = FSlateNoResource::FSlateNoResource
                        (pFVar22,(FDeprecateVector2DParameter *)&local_res8._s_0);
  }
  pFVar15 = ::FName::FName((FName *)&local_res10._s_0,"Docking.Cross.BorderBottom");
  FSlateStyleSet::Set<FSlateNoResource>(pFVar1,*pFVar15,pFVar23);
  pFVar1 = (FSlateStyleSet *)**(undefined8 **)this;
  pFVar23 = ::operator_new(0xb0);
  if (pFVar23 != (FSlateNoResource *)0x0) {
    local_res8 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
    pFVar24 = FSlateNoResource::FSlateNoResource
                        (pFVar23,(FDeprecateVector2DParameter *)&local_res8._s_0);
  }
  pFVar15 = ::FName::FName((FName *)&local_res10._s_0,"Docking.Cross.BorderCenter");
  FSlateStyleSet::Set<FSlateNoResource>(pFVar1,*pFVar15,pFVar24);
  pFVar1 = (FSlateStyleSet *)**(undefined8 **)this;
  local_3408._0_8_ = ___xmm_3f8000003f0000003f4000003f800000;
  local_3408._8_8_ = _UNK_150925308;
  pFVar15 = ::FName::FName((FName *)&local_res8._s_0,"Docking.Cross.PreviewWindowTint");
  FSlateStyleSet::Set(pFVar1,*pFVar15,(FLinearColor *)&local_3408._s_0);
  pFVar1 = (FSlateStyleSet *)**(undefined8 **)this;
  pFVar15 = ::FName::FName(&local_res18,"Docking.Cross.Tint");
  FSlateStyleSet::Set(pFVar1,*pFVar15,&FLinearColor::White);
  pFVar1 = (FSlateStyleSet *)**(undefined8 **)this;
  pFVar15 = ::FName::FName(&local_res20,"Docking.Cross.HoveredTint");
  FSlateStyleSet::Set(pFVar1,*pFVar15,&FLinearColor::White);
  local_1e98._0_8_ = &___7FTextBlockStyle__6B_;
  local_1e98.UnderlineBrush._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1e98.UnderlineBrush.ResourceHandle.Data.SharedReferenceCount.ReferenceController)
  ;
  local_1e98.StrikeBrush._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1e98.StrikeBrush.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  local_1e98.HighlightShape._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1e98.HighlightShape.ResourceHandle.Data.SharedReferenceCount.ReferenceController)
  ;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1e98.Font.CompositeFont.SharedReferenceCount.ReferenceController);
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)&local_1e98);
  return;
}

// Create @ 1425771f0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<ISlateStyle,1> * __cdecl
FUMGCoreStyle::Create(TSharedRef<ISlateStyle,1> *__return_storage_ptr__)

{
  code *pcVar1;
  longlong lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  float fVar6;
  float fVar7;
  TObjectPtr<UObject>_u_0 TVar8;
  FName FVar9;
  TObjectPtr<UObject>_u_0 TVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  EStyleColor EVar13;
  undefined2 uVar14;
  TVector2<float>_u_0 TVar15;
  bool bVar16;
  FUMGStyleSet *pFVar17;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> *pTVar18;
  FName FVar19;
  FString *pFVar20;
  FName *pFVar21;
  FLegacySlateFontInfoCache *pFVar22;
  FSlateImageBrush *pFVar23;
  FName FVar24;
  FTextBlockStyle *pFVar25;
  FName FVar26;
  FSlateBoxBrush *pFVar27;
  FSlateBorderBrush *pFVar28;
  FName FVar29;
  FName FVar30;
  FScrollBarStyle *pFVar31;
  FButtonStyle *pFVar32;
  FEditableTextStyle *pFVar33;
  FEditableTextBoxStyle *pFVar34;
  FSlateBrush *pFVar35;
  char cVar36;
  TVector2<float>_u_0 local_res10;
  FName local_res18;
  TVector2<float>_u_0 local_res20;
  TSharedRef<FUMGStyleSet,1> local_1a68;
  FLinearColor_u_0 local_1a58;
  undefined1 local_1a48 [16];
  FName local_1a38;
  TObjectPtr<UObject>_u_0 TStack_1a30;
  FLinearColor_u_0 local_1a28;
  undefined1 local_1a18 [16];
  FLinearColor_u_0 local_1a08;
  FName local_19f8;
  TObjectPtr<UObject>_u_0 TStack_19f0;
  FLinearColor_u_0 local_19e8;
  FLinearColor_u_0 local_19d8;
  void *local_19c8 [2];
  void *local_19b8 [2];
  void *local_19a8 [2];
  undefined1 local_1998 [160];
  TReferenceControllerBase<1> *local_18f8;
  undefined1 local_18e8 [160];
  FDeprecateSlateVector2D local_1848;
  undefined **local_1828;
  FSharedReferencer<1> local_1788;
  undefined **local_1778;
  FSharedReferencer<1> local_16d8;
  undefined **local_16c8;
  FSharedReferencer<1> local_1628;
  undefined **local_1558 [20];
  TReferenceControllerBase<1> *local_14b8;
  undefined **local_14a8 [20];
  TReferenceControllerBase<1> *local_1408;
  undefined **local_13f8 [20];
  TReferenceControllerBase<1> *local_1358;
  undefined **local_1348 [20];
  TReferenceControllerBase<1> *local_12a8;
  FSlateBrush local_1298;
  FSlateBrush local_11e8;
  FSlateBrush local_1138;
  undefined1 local_1088 [912];
  FEditableTextBoxStyle local_cf8;
  
  FVar30.ComparisonIndex.Value = 0;
  FVar30.Number = 0;
  local_res10._s_0 = local_res10._s_0 & 0xffffffff00000000;
  pFVar17 = ::operator_new(0x450);
  local_res18 = FVar30;
  if (pFVar17 != (FUMGStyleSet *)0x0) {
    ::FName::FName((FName *)&local_res10._s_0,"UMGCoreStyle");
    local_res18 = (FName)FUMGStyleSet::FUMGStyleSet(pFVar17,(FName *)&local_res10._s_0);
  }
  TSharedRef<FUMGStyleSet,1>::TSharedRef<FUMGStyleSet,1><FUMGStyleSet>
            (&local_1a68,(TRawPtrProxy<FUMGStyleSet> *)&local_res18);
  pFVar17 = local_1a68.Object;
  pcVar1 = *(code **)((local_1a68.Object)->_padding_ + 0xc0);
  pTVar18 = &FPaths::EngineContentDir((FString *)&local_1a38)->Data;
  TArray<wchar_t,TSizedDefaultAllocator<32>_>::TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>
            ((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)local_1a48,pTVar18,
             7 - (uint)(pTVar18->ArrayNum != 0));
  ::FString::PathAppend((FString *)local_1a48,L"Slate",5);
  (*pcVar1)(pFVar17,local_1a48);
  if ((FName)local_1a48._0_8_ != (FName)0x0) {
    FMemory::Free((void *)local_1a48._0_8_);
  }
  if (local_1a38 != (FName)0x0) {
    FMemory::Free((void *)local_1a38);
  }
  lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if ((*(int *)(lVar2 + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    (**(code **)((local_1a68.Object)->_padding_ + 0xe8))
              (local_1a68.Object,&CanaryPath,L"Checkerboard",L".png");
    atexit(`FUMGCoreStyle::Create'::__l2::_dynamic_atexit_destructor_for__CanaryPath__);
    _Init_thread_footer(&::_TSS0);
  }
  bVar16 = FPaths::FileExists(&CanaryPath);
  if (bVar16) {
    if ((*(int *)(lVar2 + 0x9d4c) < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
      DefaultForeground.ColorUseRule = FUMGColor::Black.ColorUseRule;
      DefaultForeground.ColorTableId = FUMGColor::Black.ColorTableId;
      DefaultForeground._18_2_ = FUMGColor::Black._18_2_;
      DefaultForeground.SpecifiedColor = FUMGColor::Black.SpecifiedColor;
      _Init_thread_footer(&::_TSS1);
    }
    if ((*(int *)(lVar2 + 0x9d4c) < ::_TSS2) && (_Init_thread_header(&::_TSS2), ::_TSS2 == -1)) {
      InvertedForeground.ColorUseRule = FUMGColor::ForegroundInverted.ColorUseRule;
      InvertedForeground.ColorTableId = FUMGColor::ForegroundInverted.ColorTableId;
      InvertedForeground._18_2_ = FUMGColor::ForegroundInverted._18_2_;
      InvertedForeground.SpecifiedColor = FUMGColor::ForegroundInverted.SpecifiedColor;
      _Init_thread_footer(&::_TSS2);
    }
    if ((*(int *)(lVar2 + 0x9d4c) < ::_TSS3) && (_Init_thread_header(&::_TSS3), ::_TSS3 == -1)) {
      SelectorColor.SpecifiedColor.field0_0x0 =
           (FLinearColor_u_0)
           *(FLinearColor_u_0 *)
            &((((local_1a68.Object)->SelectorColor_LinearRef).Object)->field0_0x0)._s_0;
      SelectorColor.ColorUseRule = UseColor_Specified;
      _Init_thread_footer(&::_TSS3);
    }
    if ((*(int *)(lVar2 + 0x9d4c) < ::_TSS4) && (_Init_thread_header(&::_TSS4), ::_TSS4 == -1)) {
      SelectionColor.SpecifiedColor.field0_0x0 =
           (FLinearColor_u_0)
           *(FLinearColor_u_0 *)
            &((((local_1a68.Object)->SelectionColor_LinearRef).Object)->field0_0x0)._s_0;
      SelectionColor.ColorUseRule = UseColor_Specified;
      _Init_thread_footer(&::_TSS4);
    }
    if ((*(int *)(lVar2 + 0x9d4c) < ::_TSS5) && (_Init_thread_header(&::_TSS5), ::_TSS5 == -1)) {
      SelectionColor_Inactive.SpecifiedColor.field0_0x0 =
           (FLinearColor_u_0)
           *(FLinearColor_u_0 *)
            &((((local_1a68.Object)->SelectionColor_Inactive_LinearRef).Object)->field0_0x0)._s_0;
      SelectionColor_Inactive.ColorUseRule = UseColor_Specified;
      _Init_thread_footer(&::_TSS5);
    }
    if ((*(int *)(lVar2 + 0x9d4c) < ::_TSS6) && (_Init_thread_header(&::_TSS6), ::_TSS6 == -1)) {
      SelectionColor_Pressed.SpecifiedColor.field0_0x0 =
           (FLinearColor_u_0)
           *(FLinearColor_u_0 *)
            &((((local_1a68.Object)->SelectionColor_Pressed_LinearRef).Object)->field0_0x0)._s_0;
      SelectionColor_Pressed.ColorUseRule = UseColor_Specified;
      _Init_thread_footer(&::_TSS6);
    }
    if ((*(int *)(lVar2 + 0x9d4c) < ::_TSS7) && (_Init_thread_header(&::_TSS7), ::_TSS7 == -1)) {
      HighlightColor.ColorUseRule = FUMGColor::Highlight.ColorUseRule;
      HighlightColor.ColorTableId = FUMGColor::Highlight.ColorTableId;
      HighlightColor._18_2_ = FUMGColor::Highlight._18_2_;
      HighlightColor.SpecifiedColor = FUMGColor::Highlight.SpecifiedColor;
      _Init_thread_footer(&::_TSS7);
    }
    pFVar17 = local_1a68.Object;
    FVar19 = (FName)::operator_new(0xb0);
    FVar24 = FVar30;
    if (FVar19 != (FName)0x0) {
      local_res10._s_0 = (TVector2<float>_u_0_s_0)CoreStyleConstants::Icon24x24;
      pFVar20 = (FString *)
                (**(code **)((local_1a68.Object)->_padding_ + 0xf0))
                          (local_1a68.Object,&local_1a38,"Starship/Common/UELogo",L".svg");
      FSlateImageBrush::FSlateImageBrush
                ((FSlateImageBrush *)FVar19,pFVar20,(FDeprecateVector2DParameter *)&local_res10._s_0
                 ,&FStyleColors::White,NoTile,Vector);
      *(undefined ***)FVar19 = &___7FSlateVectorImageBrush__6B_;
      FVar24 = FVar19;
    }
    pFVar21 = ::FName::FName(&local_res18,"AppIcon");
    FSlateStyleSet::Set<FSlateVectorImageBrush>
              ((FSlateStyleSet *)pFVar17,*pFVar21,(FSlateVectorImageBrush *)FVar24);
    if ((FVar19 != (FName)0x0) && (local_1a38 != (FName)0x0)) {
      FMemory::Free((void *)local_1a38);
    }
    pFVar17 = local_1a68.Object;
    FVar19 = (FName)::operator_new(0xb0);
    FVar24 = FVar30;
    if (FVar19 != (FName)0x0) {
      local_res10._s_0 = (TVector2<float>_u_0_s_0)CoreStyleConstants::Icon24x24;
      pFVar20 = (FString *)
                (**(code **)((local_1a68.Object)->_padding_ + 0xf0))
                          (local_1a68.Object,&local_1a38,"Starship/Common/unreal-small",L".svg");
      FSlateImageBrush::FSlateImageBrush
                ((FSlateImageBrush *)FVar19,pFVar20,(FDeprecateVector2DParameter *)&local_res10._s_0
                 ,&FStyleColors::Foreground,NoTile,Vector);
      *(undefined ***)FVar19 = &___7FSlateVectorImageBrush__6B_;
      FVar24 = FVar19;
    }
    pFVar21 = ::FName::FName(&local_res18,"AppIcon.Small");
    FSlateStyleSet::Set<FSlateVectorImageBrush>
              ((FSlateStyleSet *)pFVar17,*pFVar21,(FSlateVectorImageBrush *)FVar24);
    if ((FVar19 != (FName)0x0) && (local_1a38 != (FName)0x0)) {
      FMemory::Free((void *)local_1a38);
    }
    pFVar17 = local_1a68.Object;
    local_1a38 = ___xmm_00000000000000004080000040800000;
    TStack_1a30 = (TObjectPtr<UObject>_u_0)_UNK_150925028;
    pFVar21 = ::FName::FName((FName *)&local_res10._s_0,"AppIconPadding");
    FSlateStyleSet::Set((FSlateStyleSet *)pFVar17,*pFVar21,(FMargin *)&local_1a38);
    pFVar17 = local_1a68.Object;
    local_1a38 = ___xmm_00000000000000004080000040800000;
    TStack_1a30 = (TObjectPtr<UObject>_u_0)_UNK_150925028;
    pFVar21 = ::FName::FName((FName *)&local_res10._s_0,"AppIconPadding.Small");
    FSlateStyleSet::Set((FSlateStyleSet *)pFVar17,*pFVar21,(FMargin *)&local_1a38);
    pFVar17 = local_1a68.Object;
    local_1a18 = (undefined1  [16])FLinearColor::Black.field0_0x0;
    local_1a28._0_8_ = (ulonglong)(byte)local_1a28._7_1_ << 0x38;
    local_1a28._8_8_ = 0;
    pFVar21 = ::FName::FName(&local_res18,"Regular");
    local_res10._s_0.X = (float)pFVar21->ComparisonIndex;
    local_res10._s_0.Y = (float)pFVar21->Number;
    pFVar22 = FLegacySlateFontInfoCache::Get();
    FLegacySlateFontInfoCache::GetDefaultFont
              (pFVar22,(TSharedRef<FCompositeFont_const_,1> *)local_1a48);
    local_1a38.ComparisonIndex.Value = local_1a48._0_4_;
    local_1a38.Number = local_1a48._4_4_;
    TStack_1a30.DebugPtr = (UObject *)local_1a48._8_8_;
    if ((UObject *)local_1a48._8_8_ != (UObject *)0x0) {
      LOCK();
      *(atomic<int> *)(local_1a48._8_8_ + 8) =
           (atomic<int>)((int)*(atomic<int> *)(local_1a48._8_8_ + 8) + 1);
      UNLOCK();
    }
    fVar6 = __real_41200000;
    FSlateFontInfo::FSlateFontInfo
              ((FSlateFontInfo *)local_1998,(TSharedPtr<FCompositeFont_const_,1> *)&local_1a38,
               __real_41200000,(FName *)&local_res10._s_0,(FFontOutlineSettings *)&local_1a28._s_0);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_1a48._8_8_);
    pFVar21 = ::FName::FName((FName *)&local_res20._s_0,"NormalFont");
    FSlateStyleSet::Set((FSlateStyleSet *)pFVar17,*pFVar21,(FSlateFontInfo *)local_1998);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_1998._56_8_);
    pFVar17 = local_1a68.Object;
    local_1a18 = (undefined1  [16])FLinearColor::Black.field0_0x0;
    local_1a28._0_8_ = local_1a28._0_8_ & 0xff00000000000000;
    local_1a28._8_8_ = (TReferenceControllerBase<1> *)0x0;
    pFVar21 = ::FName::FName(&local_res18,"Regular");
    local_res10._s_0.X = (float)pFVar21->ComparisonIndex;
    local_res10._s_0.Y = (float)pFVar21->Number;
    pFVar22 = FLegacySlateFontInfoCache::Get();
    FLegacySlateFontInfoCache::GetDefaultFont
              (pFVar22,(TSharedRef<FCompositeFont_const_,1> *)local_1a48);
    local_1a38.ComparisonIndex.Value = local_1a48._0_4_;
    local_1a38.Number = local_1a48._4_4_;
    TStack_1a30.DebugPtr = (UObject *)local_1a48._8_8_;
    if ((UObject *)local_1a48._8_8_ != (UObject *)0x0) {
      LOCK();
      *(atomic<int> *)(local_1a48._8_8_ + 8) =
           (atomic<int>)((int)*(atomic<int> *)(local_1a48._8_8_ + 8) + 1);
      UNLOCK();
    }
    fVar7 = __real_41000000;
    FSlateFontInfo::FSlateFontInfo
              ((FSlateFontInfo *)local_1998,(TSharedPtr<FCompositeFont_const_,1> *)&local_1a38,
               __real_41000000,(FName *)&local_res10._s_0,(FFontOutlineSettings *)&local_1a28._s_0);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_1a48._8_8_);
    pFVar21 = ::FName::FName((FName *)&local_res20._s_0,"SmallFont");
    FSlateStyleSet::Set((FSlateStyleSet *)pFVar17,*pFVar21,(FSlateFontInfo *)local_1998);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_1998._56_8_);
    pFVar23 = ::operator_new(0xb0);
    FVar24 = FVar30;
    if (pFVar23 != (FSlateImageBrush *)0x0) {
      local_res10._s_0 = (TVector2<float>_u_0_s_0)CoreStyleConstants::Icon8x8;
      pFVar20 = (FString *)
                (**(code **)((local_1a68.Object)->_padding_ + 0xf0))
                          (local_1a68.Object,&local_1a38,"Old/White",L".png");
      FVar24 = (FName)FSlateImageBrush::FSlateImageBrush
                                (pFVar23,pFVar20,(FDeprecateVector2DParameter *)&local_res10._s_0,
                                 &FLinearColor::White,Both,FullColor);
      if (local_1a38 != (FName)0x0) {
        FMemory::Free((void *)local_1a38);
      }
    }
    pFVar17 = local_1a68.Object;
    pFVar21 = ::FName::FName((FName *)&local_res10._s_0,"DefaultTextUnderline");
    FSlateStyleSet::Set<FSlateBrush>((FSlateStyleSet *)pFVar17,*pFVar21,(FSlateBrush *)FVar24);
    TVar10 = _UNK_15076b1f8;
    FVar19 = ___xmm_3f8000003f8000003f8000003f800000;
    if ((*(int *)(lVar2 + 0x9d4c) < ::_TSS8) && (_Init_thread_header(&::_TSS8), ::_TSS8 == -1)) {
      pFVar25 = FTextBlockStyle::FTextBlockStyle((FTextBlockStyle *)local_18e8);
      local_19e8 = FLinearColor::Black.field0_0x0;
      local_19f8 = (FName)((ulonglong)local_19f8 & 0xff00000000000000);
      TStack_19f0.DebugPtr = (UObject *)0x0;
      pFVar21 = ::FName::FName(&local_res18,"Regular");
      local_res10._s_0.X = (float)pFVar21->ComparisonIndex;
      local_res10._s_0.Y = (float)pFVar21->Number;
      pFVar22 = FLegacySlateFontInfoCache::Get();
      FLegacySlateFontInfoCache::GetDefaultFont
                (pFVar22,(TSharedRef<FCompositeFont_const_,1> *)local_1a48);
      local_1a08._0_8_ = local_1a48._0_8_;
      local_1a08._8_8_ = local_1a48._8_8_;
      if ((UObject *)local_1a48._8_8_ != (UObject *)0x0) {
        LOCK();
        *(atomic<int> *)(local_1a48._8_8_ + 8) =
             (atomic<int>)((int)*(atomic<int> *)(local_1a48._8_8_ + 8) + 1);
        UNLOCK();
      }
      FSlateFontInfo::FSlateFontInfo
                ((FSlateFontInfo *)local_1998,
                 (TSharedPtr<FCompositeFont_const_,1> *)&local_1a08._s_0,fVar6,
                 (FName *)&local_res10._s_0,(FFontOutlineSettings *)&local_19f8);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)local_1a48._8_8_);
      FSlateFontInfo::operator=(&pFVar25->Font,(FSlateFontInfo *)local_1998);
      uVar11 = _UNK_15090c6d8;
      *(undefined8 *)&(pFVar25->ColorAndOpacity).SpecifiedColor.field0_0x0 =
           ___xmm_3f8000003f800000000000003f800000;
      *(undefined8 *)((longlong)&(pFVar25->ColorAndOpacity).SpecifiedColor.field0_0x0 + 8) = uVar11;
      local_1a18._0_2_ = 2;
      auVar4 = local_1a18;
      (pFVar25->ColorAndOpacity).ColorUseRule = local_1a18[0];
      (pFVar25->ColorAndOpacity).ColorTableId = local_1a18[1];
      *(undefined2 *)&(pFVar25->ColorAndOpacity).field_0x12 = local_1a18._2_2_;
      local_res10 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
      TVar15._s_0 = local_res10._s_0;
      local_res10._s_0.X = UE::Math::TVector2<float>::ZeroVector.field0_0x0._0_4_;
      local_res10._s_0.Y = UE::Math::TVector2<float>::ZeroVector.field0_0x0._4_4_;
      *(float *)&pFVar25->ShadowOffset = local_res10._s_0.X;
      *(float *)&(pFVar25->ShadowOffset).field_0x4 = local_res10._s_0.Y;
      uVar12 = _UNK_150925298;
      uVar11 = ___xmm_3f800000000000003e99999a3ca3d70a;
      local_1a18._1_15_ = auVar4._1_15_;
      auVar4[0xf] = 0;
      auVar4._0_15_ = local_1a18._1_15_;
      local_1a18 = auVar4 << 8;
      auVar4 = local_1a18;
      (pFVar25->ShadowColorAndOpacity).field0_0x0._s_0 =
           (FLinearColor_u_0_s_0)FLinearColor::Black.field0_0x0;
      local_1a48._8_8_ = _UNK_1509251a8;
      FVar29 = ___xmm_3ec000003ec000003ec000003ec00000;
      *(undefined8 *)&(pFVar25->HighlightColor).SpecifiedColor.field0_0x0 = uVar11;
      *(undefined8 *)((longlong)&(pFVar25->HighlightColor).SpecifiedColor.field0_0x0 + 8) = uVar12;
      (pFVar25->HighlightColor).ColorUseRule = local_1a18[0];
      FVar9 = ___xmm_3ec000003ec000003ec000003ec00000;
      FVar26 = ___xmm_3f8000003f8000003f8000003f800000;
      (pFVar25->HighlightColor).ColorTableId = local_1a18[1];
      *(undefined2 *)&(pFVar25->HighlightColor).field_0x12 = local_1a18._2_2_;
      ___xmm_3f8000003f8000003f8000003f800000 = FVar19.ComparisonIndex.Value;
      _UNK_15076b1f4 = FVar19.Number;
      local_1a08._s_0.R = (float)___xmm_3f8000003f8000003f8000003f800000;
      local_1a08._s_0.G = (float)_UNK_15076b1f4;
      local_1a08._8_8_ = TVar10;
      ___xmm_3ec000003ec000003ec000003ec00000 = FVar29.ComparisonIndex.Value;
      _UNK_1509251a4 = FVar29.Number;
      local_1a48._0_4_ = ___xmm_3ec000003ec000003ec000003ec00000;
      local_1a48._4_4_ = _UNK_1509251a4;
      ___xmm_3f8000003f8000003f8000003f800000 = FVar26;
      ___xmm_3ec000003ec000003ec000003ec00000 = FVar9;
      local_res10._s_0 = TVar15._s_0;
      local_1a18 = auVar4;
      pFVar20 = (FString *)
                (**(code **)((local_1a68.Object)->_padding_ + 0xf0))
                          (local_1a68.Object,&local_19d8,"Common/TextBlockHighlightShape",L".png");
      pFVar35 = (FSlateBrush *)
                FSlateBoxBrush::FSlateBoxBrush
                          ((FSlateBoxBrush *)local_1558,pFVar20,(FMargin *)local_1a48,
                           (FLinearColor *)&local_1a08._s_0,FullColor);
      FSlateBrush::operator=(&pFVar25->HighlightShape,pFVar35);
      FTextBlockStyle::FTextBlockStyle(&NormalText,pFVar25);
      local_1558[0] = &___7FSlateBrush__6B_;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_14b8);
      if ((FName)local_19d8._0_8_ != (FName)0x0) {
        FMemory::Free((void *)local_19d8._0_8_);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)local_1998._56_8_);
      local_18e8._0_8_ = &___7FTextBlockStyle__6B_;
      local_16c8 = &___7FSlateBrush__6B_;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_1628.ReferenceController);
      local_1778 = &___7FSlateBrush__6B_;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_16d8.ReferenceController);
      local_1828 = &___7FSlateBrush__6B_;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_1788.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)local_18e8._64_8_);
      FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)local_18e8);
      atexit(`FUMGCoreStyle::Create'::__l2::_dynamic_atexit_destructor_for__NormalText__);
      _Init_thread_footer(&::_TSS8);
    }
    if ((*(int *)(lVar2 + 0x9d4c) < ::_TSS9) && (_Init_thread_header(&::_TSS9), ::_TSS9 == -1)) {
      pFVar25 = FTextBlockStyle::FTextBlockStyle((FTextBlockStyle *)local_18e8,&NormalText);
      FSlateBrush::operator=(&pFVar25->UnderlineBrush,(FSlateBrush *)FVar24);
      FTextBlockStyle::FTextBlockStyle(&NormalUnderlinedText,pFVar25);
      local_18e8._0_8_ = &___7FTextBlockStyle__6B_;
      local_16c8 = &___7FSlateBrush__6B_;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_1628.ReferenceController);
      local_1778 = &___7FSlateBrush__6B_;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_16d8.ReferenceController);
      local_1828 = &___7FSlateBrush__6B_;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_1788.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)local_18e8._64_8_);
      FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)local_18e8);
      atexit(`FUMGCoreStyle::Create'::__l2::_dynamic_atexit_destructor_for__NormalUnderlinedText__);
      _Init_thread_footer(&::_TSS9);
    }
    if ((*(int *)(lVar2 + 0x9d4c) < ::_TSS10) && (_Init_thread_header(&::_TSS10), ::_TSS10 == -1)) {
      pFVar25 = FTextBlockStyle::FTextBlockStyle((FTextBlockStyle *)local_18e8);
      local_19e8 = FLinearColor::Black.field0_0x0;
      local_19f8 = (FName)((ulonglong)local_19f8 & 0xff00000000000000);
      TStack_19f0.DebugPtr = (UObject *)0x0;
      pFVar21 = ::FName::FName(&local_res18,"Mono");
      local_res10._s_0.X = (float)pFVar21->ComparisonIndex;
      local_res10._s_0.Y = (float)pFVar21->Number;
      pFVar22 = FLegacySlateFontInfoCache::Get();
      FLegacySlateFontInfoCache::GetDefaultFont
                (pFVar22,(TSharedRef<FCompositeFont_const_,1> *)local_1a48);
      local_19d8._0_8_ = local_1a48._0_8_;
      local_19d8._8_8_ = local_1a48._8_8_;
      if ((UObject *)local_1a48._8_8_ != (UObject *)0x0) {
        LOCK();
        *(atomic<int> *)(local_1a48._8_8_ + 8) =
             (atomic<int>)((int)*(atomic<int> *)(local_1a48._8_8_ + 8) + 1);
        UNLOCK();
      }
      FSlateFontInfo::FSlateFontInfo
                ((FSlateFontInfo *)local_1998,
                 (TSharedPtr<FCompositeFont_const_,1> *)&local_19d8._s_0,fVar6,
                 (FName *)&local_res10._s_0,(FFontOutlineSettings *)&local_19f8);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)local_1a48._8_8_);
      FSlateFontInfo::operator=(&pFVar25->Font,(FSlateFontInfo *)local_1998);
      uVar11 = _UNK_15090c6d8;
      *(undefined8 *)&(pFVar25->ColorAndOpacity).SpecifiedColor.field0_0x0 =
           ___xmm_3f8000003f800000000000003f800000;
      *(undefined8 *)((longlong)&(pFVar25->ColorAndOpacity).SpecifiedColor.field0_0x0 + 8) = uVar11;
      local_1a18._0_2_ = 2;
      auVar4 = local_1a18;
      (pFVar25->ColorAndOpacity).ColorUseRule = local_1a18[0];
      (pFVar25->ColorAndOpacity).ColorTableId = local_1a18[1];
      *(undefined2 *)&(pFVar25->ColorAndOpacity).field_0x12 = local_1a18._2_2_;
      local_res10 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
      TVar15._s_0 = local_res10._s_0;
      local_res10._s_0.X = UE::Math::TVector2<float>::ZeroVector.field0_0x0._0_4_;
      local_res10._s_0.Y = UE::Math::TVector2<float>::ZeroVector.field0_0x0._4_4_;
      *(float *)&pFVar25->ShadowOffset = local_res10._s_0.X;
      *(float *)&(pFVar25->ShadowOffset).field_0x4 = local_res10._s_0.Y;
      uVar12 = _UNK_150925298;
      uVar11 = ___xmm_3f800000000000003e99999a3ca3d70a;
      local_1a18._1_15_ = auVar4._1_15_;
      auVar5[0xf] = 0;
      auVar5._0_15_ = local_1a18._1_15_;
      local_1a18 = auVar5 << 8;
      auVar4 = local_1a18;
      (pFVar25->ShadowColorAndOpacity).field0_0x0._s_0 =
           (FLinearColor_u_0_s_0)FLinearColor::Black.field0_0x0;
      local_1a08._8_8_ = _UNK_1509251a8;
      FVar29 = ___xmm_3ec000003ec000003ec000003ec00000;
      *(undefined8 *)&(pFVar25->HighlightColor).SpecifiedColor.field0_0x0 = uVar11;
      *(undefined8 *)((longlong)&(pFVar25->HighlightColor).SpecifiedColor.field0_0x0 + 8) = uVar12;
      (pFVar25->HighlightColor).ColorUseRule = local_1a18[0];
      FVar9 = ___xmm_3ec000003ec000003ec000003ec00000;
      FVar26 = ___xmm_3f8000003f8000003f8000003f800000;
      (pFVar25->HighlightColor).ColorTableId = local_1a18[1];
      *(undefined2 *)&(pFVar25->HighlightColor).field_0x12 = local_1a18._2_2_;
      ___xmm_3f8000003f8000003f8000003f800000 = FVar19.ComparisonIndex.Value;
      _UNK_15076b1f4 = FVar19.Number;
      local_19d8._s_0.R = (float)___xmm_3f8000003f8000003f8000003f800000;
      local_19d8._s_0.G = (float)_UNK_15076b1f4;
      local_19d8._8_8_ = TVar10;
      ___xmm_3ec000003ec000003ec000003ec00000 = FVar29.ComparisonIndex.Value;
      _UNK_1509251a4 = FVar29.Number;
      local_1a08._s_0.R = (float)___xmm_3ec000003ec000003ec000003ec00000;
      local_1a08._s_0.G = (float)_UNK_1509251a4;
      ___xmm_3f8000003f8000003f8000003f800000 = FVar26;
      ___xmm_3ec000003ec000003ec000003ec00000 = FVar9;
      local_res10._s_0 = TVar15._s_0;
      local_1a18 = auVar4;
      pFVar20 = (FString *)
                (**(code **)((local_1a68.Object)->_padding_ + 0xf0))
                          (local_1a68.Object,&local_1a58,"Common/TextBlockHighlightShape",L".png");
      pFVar35 = (FSlateBrush *)
                FSlateBoxBrush::FSlateBoxBrush
                          ((FSlateBoxBrush *)local_1558,pFVar20,(FMargin *)&local_1a08._s_0,
                           (FLinearColor *)&local_19d8._s_0,FullColor);
      FSlateBrush::operator=(&pFVar25->HighlightShape,pFVar35);
      FTextBlockStyle::FTextBlockStyle(&MonospacedText,pFVar25);
      local_1558[0] = &___7FSlateBrush__6B_;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_14b8);
      if ((FName)local_1a58._0_8_ != (FName)0x0) {
        FMemory::Free((void *)local_1a58._0_8_);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)local_1998._56_8_);
      FTextBlockStyle::~FTextBlockStyle((FTextBlockStyle *)local_18e8);
      atexit(`FUMGCoreStyle::Create'::__l2::_dynamic_atexit_destructor_for__MonospacedText__);
      _Init_thread_footer(&::_TSS10);
    }
    if ((*(int *)(lVar2 + 0x9d4c) < ::_TSS11) && (_Init_thread_header(&::_TSS11), ::_TSS11 == -1)) {
      pFVar25 = FTextBlockStyle::FTextBlockStyle((FTextBlockStyle *)local_18e8,&MonospacedText);
      FSlateBrush::operator=(&pFVar25->UnderlineBrush,(FSlateBrush *)FVar24);
      FTextBlockStyle::FTextBlockStyle(&MonospacedUnderlinedText,pFVar25);
      FTextBlockStyle::~FTextBlockStyle((FTextBlockStyle *)local_18e8);
      atexit(`FUMGCoreStyle::Create'::__l2::
             _dynamic_atexit_destructor_for__MonospacedUnderlinedText__);
      _Init_thread_footer(&::_TSS11);
    }
    pFVar17 = local_1a68.Object;
    pFVar21 = ::FName::FName((FName *)&local_res10._s_0,"MonospacedText");
    FSlateStyleSet::Set<FTextBlockStyle>((FSlateStyleSet *)pFVar17,*pFVar21,&MonospacedText);
    pFVar17 = local_1a68.Object;
    pFVar21 = ::FName::FName((FName *)&local_res10._s_0,"MonospacedUnderlinedText");
    FSlateStyleSet::Set<FTextBlockStyle>
              ((FSlateStyleSet *)pFVar17,*pFVar21,&MonospacedUnderlinedText);
    if ((*(int *)(lVar2 + 0x9d4c) < ::_TSS12) && (_Init_thread_header(&::_TSS12), ::_TSS12 == -1)) {
      pFVar25 = FTextBlockStyle::FTextBlockStyle((FTextBlockStyle *)local_18e8,&NormalText);
      local_1a18 = (undefined1  [16])FLinearColor::Black.field0_0x0;
      local_1a28._0_8_ = local_1a28._0_8_ & 0xff00000000000000;
      local_1a28._8_8_ = (TReferenceControllerBase<1> *)0x0;
      pFVar21 = ::FName::FName(&local_res18,"Regular");
      local_res10._s_0.X = (float)pFVar21->ComparisonIndex;
      local_res10._s_0.Y = (float)pFVar21->Number;
      pFVar22 = FLegacySlateFontInfoCache::Get();
      FLegacySlateFontInfoCache::GetDefaultFont
                (pFVar22,(TSharedRef<FCompositeFont_const_,1> *)local_1a48);
      local_1a58._0_8_ = local_1a48._0_8_;
      local_1a58._8_8_ = local_1a48._8_8_;
      if ((UObject *)local_1a48._8_8_ != (UObject *)0x0) {
        LOCK();
        *(atomic<int> *)(local_1a48._8_8_ + 8) =
             (atomic<int>)((int)*(atomic<int> *)(local_1a48._8_8_ + 8) + 1);
        UNLOCK();
      }
      FSlateFontInfo::FSlateFontInfo
                ((FSlateFontInfo *)local_1998,
                 (TSharedPtr<FCompositeFont_const_,1> *)&local_1a58._s_0,fVar7,
                 (FName *)&local_res10._s_0,(FFontOutlineSettings *)&local_1a28._s_0);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)local_1a48._8_8_);
      FSlateFontInfo::operator=(&pFVar25->Font,(FSlateFontInfo *)local_1998);
      FTextBlockStyle::FTextBlockStyle(&SmallText,pFVar25);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)local_1998._56_8_);
      local_18e8._0_8_ = &___7FTextBlockStyle__6B_;
      local_16c8 = &___7FSlateBrush__6B_;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_1628.ReferenceController);
      local_1778 = &___7FSlateBrush__6B_;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_16d8.ReferenceController);
      local_1828 = &___7FSlateBrush__6B_;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_1788.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)local_18e8._64_8_);
      FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)local_18e8);
      atexit(`FUMGCoreStyle::Create'::__l2::_dynamic_atexit_destructor_for__SmallText__);
      _Init_thread_footer(&::_TSS12);
    }
    if ((*(int *)(lVar2 + 0x9d4c) < ::_TSS13) && (_Init_thread_header(&::_TSS13), ::_TSS13 == -1)) {
      pFVar25 = FTextBlockStyle::FTextBlockStyle((FTextBlockStyle *)local_18e8,&SmallText);
      FSlateBrush::operator=(&pFVar25->UnderlineBrush,(FSlateBrush *)FVar24);
      FTextBlockStyle::FTextBlockStyle(&SmallUnderlinedText,pFVar25);
      local_18e8._0_8_ = &___7FTextBlockStyle__6B_;
      local_16c8 = &___7FSlateBrush__6B_;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_1628.ReferenceController);
      local_1778 = &___7FSlateBrush__6B_;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_16d8.ReferenceController);
      local_1828 = &___7FSlateBrush__6B_;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_1788.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)local_18e8._64_8_);
      FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)local_18e8);
      atexit(`FUMGCoreStyle::Create'::__l2::_dynamic_atexit_destructor_for__SmallUnderlinedText__);
      _Init_thread_footer(&::_TSS13);
    }
    pFVar17 = local_1a68.Object;
    pFVar25 = FTextBlockStyle::FTextBlockStyle((FTextBlockStyle *)local_18e8,&NormalText);
    local_19e8 = FLinearColor::Black.field0_0x0;
    local_19f8 = (FName)((ulonglong)local_19f8 & 0xff00000000000000);
    TStack_19f0.DebugPtr = (UObject *)0x0;
    pFVar21 = ::FName::FName((FName *)&local_res20._s_0,"Regular");
    local_res10._s_0.X = (float)pFVar21->ComparisonIndex;
    local_res10._s_0.Y = (float)pFVar21->Number;
    pFVar22 = FLegacySlateFontInfoCache::Get();
    FLegacySlateFontInfoCache::GetDefaultFont
              (pFVar22,(TSharedRef<FCompositeFont_const_,1> *)&local_1a38);
    local_1a58._s_0.R = (float)local_1a38.ComparisonIndex.Value;
    local_1a58._s_0.G = (float)local_1a38.Number;
    local_1a58._8_8_ = TStack_1a30;
    if (TStack_1a30.DebugPtr != (UObject *)0x0) {
      LOCK();
      *(atomic<int> *)&(TStack_1a30.DebugPtr)->field_0x8 =
           (atomic<int>)((int)*(atomic<int> *)&(TStack_1a30.DebugPtr)->field_0x8 + 1);
      UNLOCK();
    }
    FSlateFontInfo::FSlateFontInfo
              ((FSlateFontInfo *)local_1998,(TSharedPtr<FCompositeFont_const_,1> *)&local_1a58._s_0,
               __real_41c00000,(FName *)&local_res10._s_0,(FFontOutlineSettings *)&local_19f8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)TStack_1a30.DebugPtr);
    FSlateFontInfo::operator=(&pFVar25->Font,(FSlateFontInfo *)local_1998);
    auVar3[0xf] = 0;
    auVar3._0_15_ = local_1a18._1_15_;
    local_1a18 = auVar3 << 8;
    auVar4 = local_1a18;
    (pFVar25->ColorAndOpacity).SpecifiedColor.field0_0x0._s_0 =
         (FLinearColor_u_0_s_0)FLinearColor::Black.field0_0x0;
    (pFVar25->ColorAndOpacity).ColorUseRule = local_1a18[0];
    (pFVar25->ColorAndOpacity).ColorTableId = local_1a18[1];
    *(undefined2 *)&(pFVar25->ColorAndOpacity).field_0x12 = local_1a18._2_2_;
    *(undefined4 *)&pFVar25->ShadowOffset = 0;
    *(undefined4 *)&(pFVar25->ShadowOffset).field_0x4 = 0x3f800000;
    (pFVar25->ShadowColorAndOpacity).field0_0x0._s_0.R = 0.8;
    (pFVar25->ShadowColorAndOpacity).field0_0x0._s_0.G = 0.8;
    (pFVar25->ShadowColorAndOpacity).field0_0x0._s_0.B = 0.8;
    (pFVar25->ShadowColorAndOpacity).field0_0x0._s_0.A = 0.5;
    local_1a18 = auVar4;
    pFVar21 = ::FName::FName((FName *)local_1a48,"EmbossedText");
    FSlateStyleSet::Set<FTextBlockStyle>((FSlateStyleSet *)pFVar17,*pFVar21,pFVar25);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_1998._56_8_);
    local_18e8._0_8_ = &___7FTextBlockStyle__6B_;
    local_16c8 = &___7FSlateBrush__6B_;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1628.ReferenceController);
    local_1778 = &___7FSlateBrush__6B_;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_16d8.ReferenceController);
    local_1828 = &___7FSlateBrush__6B_;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1788.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_18e8._64_8_);
    FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)local_18e8);
    pFVar23 = ::operator_new(0xb0);
    FVar26 = ___xmm_3f8000003f8000003f8000003f800000;
    FVar29 = FVar30;
    FVar24 = FVar30;
    if (pFVar23 != (FSlateImageBrush *)0x0) {
      local_res10._s_0 = (TVector2<float>_u_0_s_0)CoreStyleConstants::Icon16x16;
      ___xmm_3f8000003f8000003f8000003f800000 = FVar19.ComparisonIndex.Value;
      _UNK_15076b1f4 = FVar19.Number;
      local_1a58._s_0.R = (float)___xmm_3f8000003f8000003f8000003f800000;
      local_1a58._s_0.G = (float)_UNK_15076b1f4;
      local_1a58._8_8_ = TVar10;
      ___xmm_3f8000003f8000003f8000003f800000 = FVar26;
      pFVar20 = (FString *)
                (**(code **)((local_1a68.Object)->_padding_ + 0xf0))
                          (local_1a68.Object,&local_19d8,"Old/White",L".png");
      FVar24 = (FName)FSlateImageBrush::FSlateImageBrush
                                (pFVar23,pFVar20,(FDeprecateVector2DParameter *)&local_res10._s_0,
                                 (FLinearColor *)&local_1a58._s_0,NoTile,FullColor);
      FVar29 = FVar24;
      if ((FName)local_19d8._0_8_ != (FName)0x0) {
        local_res18 = FVar24;
        FMemory::Free((void *)local_19d8._0_8_);
        FVar29 = local_res18;
      }
    }
    local_res18 = FVar29;
    pFVar17 = local_1a68.Object;
    pFVar23 = ::operator_new(0xb0);
    FVar26 = FVar30;
    if (pFVar23 != (FSlateImageBrush *)0x0) {
      local_res10._s_0 = (TVector2<float>_u_0_s_0)CoreStyleConstants::Icon16x16;
      pFVar20 = (FString *)
                (**(code **)((local_1a68.Object)->_padding_ + 0xf0))
                          (local_1a68.Object,&local_1a58,"Checkerboard",L".png");
      FVar26 = (FName)FSlateImageBrush::FSlateImageBrush
                                (pFVar23,pFVar20,(FDeprecateVector2DParameter *)&local_res10._s_0,
                                 &FLinearColor::White,Both,FullColor);
    }
    pFVar21 = ::FName::FName((FName *)&local_res20._s_0,"Checkerboard");
    FSlateStyleSet::Set<FSlateImageBrush>
              ((FSlateStyleSet *)pFVar17,*pFVar21,(FSlateImageBrush *)FVar26);
    if ((pFVar23 != (FSlateImageBrush *)0x0) && ((FName)local_1a58._0_8_ != (FName)0x0)) {
      FMemory::Free((void *)local_1a58._0_8_);
    }
    pFVar17 = local_1a68.Object;
    pFVar21 = ::FName::FName((FName *)&local_res10._s_0,"GenericWhiteBox");
    FSlateStyleSet::Set<FSlateBrush>((FSlateStyleSet *)pFVar17,*pFVar21,(FSlateBrush *)FVar24);
    pFVar17 = local_1a68.Object;
    FVar26 = (FName)::operator_new(0xb0);
    FVar24 = FVar30;
    if (FVar26 != (FName)0x0) {
      local_res20 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
      local_1a58._s_0.R = (float)0;
      local_1a58._s_0.G = (float)0;
      local_1a58._8_8_ = (UObject *)0x0;
      local_res10 = (TVector2<float>_u_0)0x0;
      FSlateBrush::FSlateBrush
                ((FSlateBrush *)FVar26,Image,(FName)0x0,(FMargin *)&local_1a58._s_0,NoTile,NoImage,
                 (FDeprecateVector2DParameter *)&local_res20._s_0,&FLinearColor::Black,
                 (UObject *)0x0,false);
      *(undefined ***)FVar26 = &___7FSlateColorBrush__6B_;
      FVar24 = FVar26;
    }
    pFVar21 = ::FName::FName((FName *)local_1a48,"BlackBrush");
    FSlateStyleSet::Set<FSlateColorBrush>
              ((FSlateStyleSet *)pFVar17,*pFVar21,(FSlateColorBrush *)FVar24);
    pFVar17 = local_1a68.Object;
    FVar26 = (FName)::operator_new(0xb0);
    FVar24 = FVar30;
    if (FVar26 != (FName)0x0) {
      local_res20 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
      local_1a58._s_0.R = (float)0;
      local_1a58._s_0.G = (float)0;
      local_1a58._8_8_ = (UObject *)0x0;
      local_res10 = (TVector2<float>_u_0)0x0;
      FSlateBrush::FSlateBrush
                ((FSlateBrush *)FVar26,Image,(FName)0x0,(FMargin *)&local_1a58._s_0,NoTile,NoImage,
                 (FDeprecateVector2DParameter *)&local_res20._s_0,&FLinearColor::White,
                 (UObject *)0x0,false);
      *(undefined ***)FVar26 = &___7FSlateColorBrush__6B_;
      FVar24 = FVar26;
    }
    pFVar21 = ::FName::FName((FName *)local_1a48,"WhiteBrush");
    FSlateStyleSet::Set<FSlateColorBrush>
              ((FSlateStyleSet *)pFVar17,*pFVar21,(FSlateColorBrush *)FVar24);
    pFVar17 = local_1a68.Object;
    pFVar27 = ::operator_new(0xb0);
    FVar24 = ___xmm_3f8000003f8000003f8000003f800000;
    FVar26 = FVar30;
    if (pFVar27 != (FSlateBoxBrush *)0x0) {
      ___xmm_3f8000003f8000003f8000003f800000 = FVar19.ComparisonIndex.Value;
      _UNK_15076b1f4 = FVar19.Number;
      local_1a58._s_0.R = (float)___xmm_3f8000003f8000003f8000003f800000;
      local_1a58._s_0.G = (float)_UNK_15076b1f4;
      local_1a58._8_8_ = TVar10;
      local_1a08._s_0.R = (float)___xmm_3da000003da000003da000003da00000;
      local_1a08._s_0.G = (float)_UNK_1509250c4;
      local_1a08._8_8_ = _UNK_1509250c8;
      ___xmm_3f8000003f8000003f8000003f800000 = FVar24;
      pFVar20 = (FString *)
                (**(code **)((local_1a68.Object)->_padding_ + 0xf0))
                          (local_1a68.Object,&local_1a38,"Common/BoxShadow",L".png");
      FVar26 = (FName)FSlateBoxBrush::FSlateBoxBrush
                                (pFVar27,pFVar20,(FMargin *)&local_1a08._s_0,
                                 (FLinearColor *)&local_1a58._s_0,FullColor);
    }
    pFVar21 = ::FName::FName((FName *)&local_res10._s_0,"BoxShadow");
    FSlateStyleSet::Set<FSlateBoxBrush>((FSlateStyleSet *)pFVar17,*pFVar21,(FSlateBoxBrush *)FVar26)
    ;
    if ((pFVar27 != (FSlateBoxBrush *)0x0) && (local_1a38 != (FName)0x0)) {
      FMemory::Free((void *)local_1a38);
    }
    pFVar17 = local_1a68.Object;
    pFVar28 = ::operator_new(0xb0);
    FVar24 = FVar30;
    if (pFVar28 != (FSlateBorderBrush *)0x0) {
      local_1a58._s_0.R = (float)___xmm_3f0000003f8000003f8000003f800000;
      local_1a58._s_0.G = (float)_UNK_150925224;
      local_1a58._8_8_ = _UNK_150925228;
      local_1a08._s_0.R = (float)___xmm_3e4000003e4000003e4000003e400000;
      local_1a08._s_0.G = (float)_UNK_150925134;
      local_1a08._8_8_ = _UNK_150925138;
      pFVar20 = (FString *)
                (**(code **)((local_1a68.Object)->_padding_ + 0xf0))
                          (local_1a68.Object,&local_1a38,"Old/DashedBorder",L".png");
      FVar24 = (FName)FSlateBorderBrush::FSlateBorderBrush
                                (pFVar28,pFVar20,(FMargin *)&local_1a08._s_0,
                                 (FLinearColor *)&local_1a58._s_0,FullColor);
    }
    pFVar21 = ::FName::FName((FName *)&local_res10._s_0,"FocusRectangle");
    FSlateStyleSet::Set<FSlateBorderBrush>
              ((FSlateStyleSet *)pFVar17,*pFVar21,(FSlateBorderBrush *)FVar24);
    if ((pFVar28 != (FSlateBorderBrush *)0x0) && (local_1a38 != (FName)0x0)) {
      FMemory::Free((void *)local_1a38);
    }
    pFVar17 = local_1a68.Object;
    cVar36 = '\0';
    pFVar21 = ::FName::FName((FName *)&local_res10._s_0,"DefaultForeground");
    FSlateStyleSet::Set((FSlateStyleSet *)pFVar17,*pFVar21,&DefaultForeground);
    pFVar17 = local_1a68.Object;
    pFVar21 = ::FName::FName((FName *)&local_res10._s_0,"InvertedForeground");
    FSlateStyleSet::Set((FSlateStyleSet *)pFVar17,*pFVar21,&InvertedForeground);
    pFVar17 = local_1a68.Object;
    pFVar21 = ::FName::FName((FName *)&local_res10._s_0,"SelectorColor");
    FSlateStyleSet::Set((FSlateStyleSet *)pFVar17,*pFVar21,&SelectorColor);
    pFVar17 = local_1a68.Object;
    pFVar21 = ::FName::FName((FName *)&local_res10._s_0,"SelectionColor");
    FSlateStyleSet::Set((FSlateStyleSet *)pFVar17,*pFVar21,&SelectionColor);
    pFVar17 = local_1a68.Object;
    pFVar21 = ::FName::FName((FName *)&local_res10._s_0,"SelectionColor_Inactive");
    FSlateStyleSet::Set((FSlateStyleSet *)pFVar17,*pFVar21,&SelectionColor_Inactive);
    pFVar17 = local_1a68.Object;
    pFVar21 = ::FName::FName((FName *)&local_res10._s_0,"SelectionColor_Pressed");
    FSlateStyleSet::Set((FSlateStyleSet *)pFVar17,*pFVar21,&SelectionColor_Pressed);
    if ((*(int *)(lVar2 + 0x9d4c) < ::_TSS14) && (_Init_thread_header(&::_TSS14), ::_TSS14 == -1)) {
      pFVar32 = FButtonStyle::FButtonStyle((FButtonStyle *)local_1088);
      local_res10 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
      pFVar35 = (FSlateBrush *)
                FSlateNoResource::FSlateNoResource
                          ((FSlateNoResource *)local_14a8,
                           (FDeprecateVector2DParameter *)&local_res10._s_0);
      FSlateBrush::operator=(&pFVar32->Normal,pFVar35);
      local_res10 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
      pFVar35 = (FSlateBrush *)
                FSlateNoResource::FSlateNoResource
                          ((FSlateNoResource *)local_13f8,
                           (FDeprecateVector2DParameter *)&local_res10._s_0);
      FSlateBrush::operator=(&pFVar32->Hovered,pFVar35);
      local_res10 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
      pFVar35 = (FSlateBrush *)
                FSlateNoResource::FSlateNoResource
                          ((FSlateNoResource *)local_1558,
                           (FDeprecateVector2DParameter *)&local_res10._s_0);
      FSlateBrush::operator=(&pFVar32->Pressed,pFVar35);
      (pFVar32->NormalPadding).Left = 0.0;
      (pFVar32->NormalPadding).Top = 0.0;
      (pFVar32->NormalPadding).Right = 0.0;
      *(undefined8 *)&(pFVar32->NormalPadding).Bottom = 0x3f800000;
      (pFVar32->PressedPadding).Top = 1.0;
      (pFVar32->PressedPadding).Right = 0.0;
      (pFVar32->PressedPadding).Bottom = 0.0;
      FButtonStyle::FButtonStyle(&NoBorder,pFVar32);
      local_1558[0] = &___7FSlateBrush__6B_;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_14b8);
      local_13f8[0] = &___7FSlateBrush__6B_;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_1358);
      local_14a8[0] = &___7FSlateBrush__6B_;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_1408);
      FButtonStyle::~FButtonStyle((FButtonStyle *)local_1088);
      atexit(`FUMGCoreStyle::Create'::__l2::_dynamic_atexit_destructor_for__NoBorder__);
      _Init_thread_footer(&::_TSS14);
    }
    local_res10 = (TVector2<float>_u_0)&local_1a68;
    `FUMGCoreStyle::Create'::__l2::<lambda_1>::operator()(&local_res10);
    pFVar17 = local_1a68.Object;
    pFVar23 = ::operator_new(0xb0);
    FVar24 = ___xmm_3f8000003f8000003f8000003f800000;
    FVar26 = FVar30;
    if (pFVar23 != (FSlateImageBrush *)0x0) {
      local_res10 = (TVector2<float>_u_0)0x4234000040c00000;
      cVar36 = -0x80;
      ___xmm_3f8000003f8000003f8000003f800000 = FVar19.ComparisonIndex.Value;
      _UNK_15076b1f4 = FVar19.Number;
      local_1a58._s_0.R = (float)___xmm_3f8000003f8000003f8000003f800000;
      local_1a58._s_0.G = (float)_UNK_15076b1f4;
      local_1a58._8_8_ = TVar10;
      ___xmm_3f8000003f8000003f8000003f800000 = FVar24;
      pFVar20 = (FString *)
                (**(code **)((local_1a68.Object)->_padding_ + 0xf0))
                          (local_1a68.Object,&local_1a08,"Common/VerticalBoxDragIndicator",L".png");
      FVar26 = (FName)FSlateImageBrush::FSlateImageBrush
                                (pFVar23,pFVar20,(FDeprecateVector2DParameter *)&local_res10._s_0,
                                 (FLinearColor *)&local_1a58._s_0,NoTile,FullColor);
    }
    pFVar21 = ::FName::FName((FName *)&local_res20._s_0,"VerticalBoxDragIndicator");
    FSlateStyleSet::Set<FSlateImageBrush>
              ((FSlateStyleSet *)pFVar17,*pFVar21,(FSlateImageBrush *)FVar26);
    if ((cVar36 < '\0') && ((FName)local_1a08._0_8_ != (FName)0x0)) {
      FMemory::Free((void *)local_1a08._0_8_);
    }
    pFVar17 = local_1a68.Object;
    pFVar23 = ::operator_new(0xb0);
    FVar24 = ___xmm_3f8000003f8000003f8000003f800000;
    FVar26 = FVar30;
    if (pFVar23 != (FSlateImageBrush *)0x0) {
      local_res10 = (TVector2<float>_u_0)0x4170000040c00000;
      ___xmm_3f8000003f8000003f8000003f800000 = FVar19.ComparisonIndex.Value;
      _UNK_15076b1f4 = FVar19.Number;
      local_1a58._s_0.R = (float)___xmm_3f8000003f8000003f8000003f800000;
      local_1a58._s_0.G = (float)_UNK_15076b1f4;
      local_1a58._8_8_ = TVar10;
      ___xmm_3f8000003f8000003f8000003f800000 = FVar24;
      pFVar20 = (FString *)
                (**(code **)((local_1a68.Object)->_padding_ + 0xf0))
                          (local_1a68.Object,&local_1a08,"Common/VerticalBoxDragIndicatorShort",
                           L".png");
      FVar26 = (FName)FSlateImageBrush::FSlateImageBrush
                                (pFVar23,pFVar20,(FDeprecateVector2DParameter *)&local_res10._s_0,
                                 (FLinearColor *)&local_1a58._s_0,NoTile,FullColor);
    }
    pFVar21 = ::FName::FName((FName *)&local_res20._s_0,"VerticalBoxDragIndicatorShort");
    FSlateStyleSet::Set<FSlateImageBrush>
              ((FSlateStyleSet *)pFVar17,*pFVar21,(FSlateImageBrush *)FVar26);
    if ((pFVar23 != (FSlateImageBrush *)0x0) && ((FName)local_1a08._0_8_ != (FName)0x0)) {
      FMemory::Free((void *)local_1a08._0_8_);
    }
    TVar8 = _UNK_15076b0c8;
    FVar24 = ___xmm_3e8000003e8000003e8000003e800000;
    if ((*(int *)(lVar2 + 0x9d4c) < ::_TSS15) && (_Init_thread_header(&::_TSS15), ::_TSS15 == -1)) {
      pFVar31 = FScrollBarStyle::FScrollBarStyle((FScrollBarStyle *)&local_cf8);
      FVar26 = ___xmm_3f8000003f8000003f8000003f800000;
      local_res10 = (TVector2<float>_u_0)0x4100000041000000;
      ___xmm_3f8000003f8000003f8000003f800000 = FVar19.ComparisonIndex.Value;
      _UNK_15076b1f4 = FVar19.Number;
      local_1a58._s_0.R = (float)___xmm_3f8000003f8000003f8000003f800000;
      local_1a58._s_0.G = (float)_UNK_15076b1f4;
      local_1a58._8_8_ = TVar10;
      ___xmm_3f8000003f8000003f8000003f800000 = FVar26;
      pFVar20 = (FString *)
                (**(code **)((local_1a68.Object)->_padding_ + 0xf0))
                          (local_1a68.Object,&local_1a28,"Common/Scrollbar_Background_Vertical",
                           L".png");
      pFVar35 = (FSlateBrush *)
                FSlateImageBrush::FSlateImageBrush
                          ((FSlateImageBrush *)local_18e8,pFVar20,
                           (FDeprecateVector2DParameter *)&local_res10._s_0,
                           (FLinearColor *)&local_1a58._s_0,NoTile,FullColor);
      FSlateBrush::operator=(&pFVar31->VerticalTopSlotImage,pFVar35);
      FVar26 = ___xmm_3f8000003f8000003f8000003f800000;
      local_res10 = (TVector2<float>_u_0)0x4100000041000000;
      ___xmm_3f8000003f8000003f8000003f800000 = FVar19.ComparisonIndex.Value;
      _UNK_15076b1f4 = FVar19.Number;
      local_1a58._s_0.R = (float)___xmm_3f8000003f8000003f8000003f800000;
      local_1a58._s_0.G = (float)_UNK_15076b1f4;
      local_1a58._8_8_ = TVar10;
      ___xmm_3f8000003f8000003f8000003f800000 = FVar26;
      pFVar20 = (FString *)
                (**(code **)((local_1a68.Object)->_padding_ + 0xf0))
                          (local_1a68.Object,&local_19f8,"Common/Scrollbar_Background_Vertical",
                           L".png");
      pFVar35 = (FSlateBrush *)
                FSlateImageBrush::FSlateImageBrush
                          ((FSlateImageBrush *)local_1088,pFVar20,
                           (FDeprecateVector2DParameter *)&local_res10._s_0,
                           (FLinearColor *)&local_1a58._s_0,NoTile,FullColor);
      FSlateBrush::operator=(&pFVar31->VerticalBottomSlotImage,pFVar35);
      FVar26 = ___xmm_3f8000003f8000003f8000003f800000;
      local_res10 = (TVector2<float>_u_0)0x4100000041000000;
      ___xmm_3f8000003f8000003f8000003f800000 = FVar19.ComparisonIndex.Value;
      _UNK_15076b1f4 = FVar19.Number;
      local_1a58._s_0.R = (float)___xmm_3f8000003f8000003f8000003f800000;
      local_1a58._s_0.G = (float)_UNK_15076b1f4;
      local_1a58._8_8_ = TVar10;
      ___xmm_3f8000003f8000003f8000003f800000 = FVar26;
      pFVar20 = (FString *)
                (**(code **)((local_1a68.Object)->_padding_ + 0xf0))
                          (local_1a68.Object,local_19a8,"Common/Scrollbar_Background_Horizontal",
                           L".png");
      pFVar35 = (FSlateBrush *)
                FSlateImageBrush::FSlateImageBrush
                          ((FSlateImageBrush *)local_1348,pFVar20,
                           (FDeprecateVector2DParameter *)&local_res10._s_0,
                           (FLinearColor *)&local_1a58._s_0,NoTile,FullColor);
      FSlateBrush::operator=(&pFVar31->HorizontalTopSlotImage,pFVar35);
      FVar26 = ___xmm_3f8000003f8000003f8000003f800000;
      local_res10 = (TVector2<float>_u_0)0x4100000041000000;
      ___xmm_3f8000003f8000003f8000003f800000 = FVar19.ComparisonIndex.Value;
      _UNK_15076b1f4 = FVar19.Number;
      local_1a58._s_0.R = (float)___xmm_3f8000003f8000003f8000003f800000;
      local_1a58._s_0.G = (float)_UNK_15076b1f4;
      local_1a58._8_8_ = TVar10;
      ___xmm_3f8000003f8000003f8000003f800000 = FVar26;
      pFVar20 = (FString *)
                (**(code **)((local_1a68.Object)->_padding_ + 0xf0))
                          (local_1a68.Object,local_19b8,"Common/Scrollbar_Background_Horizontal",
                           L".png");
      pFVar35 = (FSlateBrush *)
                FSlateImageBrush::FSlateImageBrush
                          ((FSlateImageBrush *)local_1998,pFVar20,
                           (FDeprecateVector2DParameter *)&local_res10._s_0,
                           (FLinearColor *)&local_1a58._s_0,NoTile,FullColor);
      FSlateBrush::operator=(&pFVar31->HorizontalBottomSlotImage,pFVar35);
      FVar29 = ___xmm_3f8000003f8000003f8000003f800000;
      FVar26 = ___xmm_3e8000003e8000003e8000003e800000;
      ___xmm_3f8000003f8000003f8000003f800000 = FVar19.ComparisonIndex.Value;
      _UNK_15076b1f4 = FVar19.Number;
      local_1a58._s_0.R = (float)___xmm_3f8000003f8000003f8000003f800000;
      local_1a58._s_0.G = (float)_UNK_15076b1f4;
      local_1a58._8_8_ = TVar10;
      ___xmm_3e8000003e8000003e8000003e800000 = FVar24.ComparisonIndex.Value;
      _UNK_15076b0c4 = FVar24.Number;
      local_1a08._s_0.R = (float)___xmm_3e8000003e8000003e8000003e800000;
      local_1a08._s_0.G = (float)_UNK_15076b0c4;
      local_1a08._8_8_ = TVar8;
      ___xmm_3e8000003e8000003e8000003e800000 = FVar26;
      ___xmm_3f8000003f8000003f8000003f800000 = FVar29;
      pFVar20 = (FString *)
                (**(code **)((local_1a68.Object)->_padding_ + 0xf0))
                          (local_1a68.Object,local_19c8,"Common/Scrollbar_Thumb",L".png");
      pFVar35 = (FSlateBrush *)
                FSlateBoxBrush::FSlateBoxBrush
                          ((FSlateBoxBrush *)local_1558,pFVar20,(FMargin *)&local_1a08._s_0,
                           (FLinearColor *)&local_1a58._s_0,FullColor);
      FSlateBrush::operator=(&pFVar31->NormalThumbImage,pFVar35);
      FVar29 = ___xmm_3f8000003f8000003f8000003f800000;
      FVar26 = ___xmm_3e8000003e8000003e8000003e800000;
      ___xmm_3f8000003f8000003f8000003f800000 = FVar19.ComparisonIndex.Value;
      _UNK_15076b1f4 = FVar19.Number;
      local_1a58._s_0.R = (float)___xmm_3f8000003f8000003f8000003f800000;
      local_1a58._s_0.G = (float)_UNK_15076b1f4;
      local_1a58._8_8_ = TVar10;
      ___xmm_3e8000003e8000003e8000003e800000 = FVar24.ComparisonIndex.Value;
      _UNK_15076b0c4 = FVar24.Number;
      local_1a08._s_0.R = (float)___xmm_3e8000003e8000003e8000003e800000;
      local_1a08._s_0.G = (float)_UNK_15076b0c4;
      local_1a08._8_8_ = TVar8;
      ___xmm_3e8000003e8000003e8000003e800000 = FVar26;
      ___xmm_3f8000003f8000003f8000003f800000 = FVar29;
      pFVar20 = (FString *)
                (**(code **)((local_1a68.Object)->_padding_ + 0xf0))
                          (local_1a68.Object,local_1a48,"Common/Scrollbar_Thumb",L".png");
      pFVar35 = (FSlateBrush *)
                FSlateBoxBrush::FSlateBoxBrush
                          ((FSlateBoxBrush *)local_13f8,pFVar20,(FMargin *)&local_1a08._s_0,
                           (FLinearColor *)&local_1a58._s_0,FullColor);
      FSlateBrush::operator=(&pFVar31->DraggedThumbImage,pFVar35);
      FVar29 = ___xmm_3f8000003f8000003f8000003f800000;
      FVar26 = ___xmm_3e8000003e8000003e8000003e800000;
      ___xmm_3f8000003f8000003f8000003f800000 = FVar19.ComparisonIndex.Value;
      _UNK_15076b1f4 = FVar19.Number;
      local_1a58._s_0.R = (float)___xmm_3f8000003f8000003f8000003f800000;
      local_1a58._s_0.G = (float)_UNK_15076b1f4;
      local_1a58._8_8_ = TVar10;
      ___xmm_3e8000003e8000003e8000003e800000 = FVar24.ComparisonIndex.Value;
      _UNK_15076b0c4 = FVar24.Number;
      local_1a08._s_0.R = (float)___xmm_3e8000003e8000003e8000003e800000;
      local_1a08._s_0.G = (float)_UNK_15076b0c4;
      local_1a08._8_8_ = TVar8;
      ___xmm_3e8000003e8000003e8000003e800000 = FVar26;
      ___xmm_3f8000003f8000003f8000003f800000 = FVar29;
      pFVar20 = (FString *)
                (**(code **)((local_1a68.Object)->_padding_ + 0xf0))
                          (local_1a68.Object,&local_1a38,"Common/Scrollbar_Thumb",L".png");
      pFVar35 = (FSlateBrush *)
                FSlateBoxBrush::FSlateBoxBrush
                          ((FSlateBoxBrush *)local_14a8,pFVar20,(FMargin *)&local_1a08._s_0,
                           (FLinearColor *)&local_1a58._s_0,FullColor);
      FSlateBrush::operator=(&pFVar31->HoveredThumbImage,pFVar35);
      FScrollBarStyle::FScrollBarStyle(&ScrollBar,pFVar31);
      local_14a8[0] = &___7FSlateBrush__6B_;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_1408);
      if (local_1a38 != (FName)0x0) {
        FMemory::Free((void *)local_1a38);
      }
      local_13f8[0] = &___7FSlateBrush__6B_;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_1358);
      if ((FName)local_1a48._0_8_ != (FName)0x0) {
        FMemory::Free((void *)local_1a48._0_8_);
      }
      local_1558[0] = &___7FSlateBrush__6B_;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_14b8);
      if (local_19c8[0] != (void *)0x0) {
        FMemory::Free(local_19c8[0]);
      }
      local_1998._0_8_ = &___7FSlateBrush__6B_;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_18f8);
      if (local_19b8[0] != (void *)0x0) {
        FMemory::Free(local_19b8[0]);
      }
      local_1348[0] = &___7FSlateBrush__6B_;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_12a8);
      if (local_19a8[0] != (void *)0x0) {
        FMemory::Free(local_19a8[0]);
      }
      local_1088._0_8_ = &___7FSlateBrush__6B_;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)local_1088._160_8_);
      if (local_19f8 != (FName)0x0) {
        FMemory::Free((void *)local_19f8);
      }
      local_18e8._0_8_ = &___7FSlateBrush__6B_;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)local_1848);
      if ((FName)local_1a28._0_8_ != (FName)0x0) {
        FMemory::Free((void *)local_1a28._0_8_);
      }
      FScrollBarStyle::~FScrollBarStyle((FScrollBarStyle *)&local_cf8);
      atexit(`FUMGCoreStyle::Create'::__l2::_dynamic_atexit_destructor_for__ScrollBar__);
      _Init_thread_footer(&::_TSS15);
    }
    pFVar17 = local_1a68.Object;
    pFVar21 = ::FName::FName((FName *)&local_res10._s_0,"Scrollbar");
    FSlateStyleSet::Set<FScrollBarStyle>((FSlateStyleSet *)pFVar17,*pFVar21,&ScrollBar);
    fVar7 = __real_40800000;
    fVar6 = __real_3f800000;
    local_res10._s_0 = (TVector2<float>_u_0_s_0)CoreStyleConstants::Icon32x32;
    FSlateRoundedBoxBrush::FSlateRoundedBoxBrush<FSlateColor,FSlateColor,float>
              ((FSlateRoundedBoxBrush *)&local_1138,&FUMGColor::Secondary,__real_40800000,
               &FUMGColor::InputOutline,__real_3f800000,
               (FDeprecateVector2DParameter *)&local_res10._s_0);
    local_res10._s_0 = (TVector2<float>_u_0_s_0)CoreStyleConstants::Icon32x32;
    FSlateRoundedBoxBrush::FSlateRoundedBoxBrush<FSlateColor,FSlateColor,float>
              ((FSlateRoundedBoxBrush *)&local_11e8,&FUMGColor::Hover,fVar7,&FUMGColor::Hover,fVar6,
               (FDeprecateVector2DParameter *)&local_res10._s_0);
    local_res10._s_0 = (TVector2<float>_u_0_s_0)CoreStyleConstants::Icon32x32;
    FSlateRoundedBoxBrush::FSlateRoundedBoxBrush<FSlateColor,FSlateColor,float>
              ((FSlateRoundedBoxBrush *)&local_1298,&FUMGColor::Header,fVar7,&FUMGColor::Hover,fVar6
               ,(FDeprecateVector2DParameter *)&local_res10._s_0);
    local_1138.OutlineSettings.bUseBrushTransparency = true;
    local_11e8.OutlineSettings.bUseBrushTransparency = true;
    local_1298.OutlineSettings.bUseBrushTransparency = true;
    if ((*(int *)(lVar2 + 0x9d4c) < _TSS16) && (_Init_thread_header(&_TSS16), _TSS16 == -1)) {
      pFVar32 = FButtonStyle::FButtonStyle((FButtonStyle *)local_18e8);
      FSlateBrush::operator=(&pFVar32->Normal,&local_1138);
      FSlateBrush::operator=(&pFVar32->Hovered,&local_11e8);
      FSlateBrush::operator=(&pFVar32->Pressed,&local_1298);
      (pFVar32->NormalForeground).SpecifiedColor.field0_0x0._s_0 =
           (FLinearColor_u_0_s_0)FUMGColor::ForegroundHover.SpecifiedColor.field0_0x0;
      EVar13 = FUMGColor::ForegroundHover.ColorTableId;
      uVar14 = FUMGColor::ForegroundHover._18_2_;
      (pFVar32->NormalForeground).ColorUseRule = FUMGColor::ForegroundHover.ColorUseRule;
      (pFVar32->NormalForeground).ColorTableId = EVar13;
      *(undefined2 *)&(pFVar32->NormalForeground).field_0x12 = uVar14;
      (pFVar32->HoveredForeground).SpecifiedColor.field0_0x0._s_0 =
           (FLinearColor_u_0_s_0)FUMGColor::ForegroundHover.SpecifiedColor.field0_0x0;
      EVar13 = FUMGColor::ForegroundHover.ColorTableId;
      uVar14 = FUMGColor::ForegroundHover._18_2_;
      (pFVar32->HoveredForeground).ColorUseRule = FUMGColor::ForegroundHover.ColorUseRule;
      (pFVar32->HoveredForeground).ColorTableId = EVar13;
      *(undefined2 *)&(pFVar32->HoveredForeground).field_0x12 = uVar14;
      (pFVar32->PressedForeground).SpecifiedColor.field0_0x0._s_0 =
           (FLinearColor_u_0_s_0)FUMGColor::ForegroundHover.SpecifiedColor.field0_0x0;
      EVar13 = FUMGColor::ForegroundHover.ColorTableId;
      uVar14 = FUMGColor::ForegroundHover._18_2_;
      (pFVar32->PressedForeground).ColorUseRule = FUMGColor::ForegroundHover.ColorUseRule;
      (pFVar32->PressedForeground).ColorTableId = EVar13;
      *(undefined2 *)&(pFVar32->PressedForeground).field_0x12 = uVar14;
      (pFVar32->DisabledForeground).SpecifiedColor.field0_0x0._s_0 =
           (FLinearColor_u_0_s_0)FUMGColor::Foreground.SpecifiedColor.field0_0x0;
      EVar13 = FUMGColor::Foreground.ColorTableId;
      uVar14 = FUMGColor::Foreground._18_2_;
      (pFVar32->DisabledForeground).ColorUseRule = FUMGColor::Foreground.ColorUseRule;
      (pFVar32->DisabledForeground).ColorTableId = EVar13;
      *(undefined2 *)&(pFVar32->DisabledForeground).field_0x12 = uVar14;
      pFVar32->NormalPadding = CoreStyleConstants::ButtonMargins;
      pFVar32->PressedPadding = CoreStyleConstants::ButtonMargins;
      FButtonStyle::FButtonStyle(&Button,pFVar32);
      FButtonStyle::~FButtonStyle((FButtonStyle *)local_18e8);
      atexit(`FUMGCoreStyle::Create'::__l2::_dynamic_atexit_destructor_for__Button__);
      _Init_thread_footer(&_TSS16);
    }
    pFVar17 = local_1a68.Object;
    pFVar21 = ::FName::FName((FName *)&local_res10._s_0,"Button");
    FSlateStyleSet::Set<FButtonStyle>((FSlateStyleSet *)pFVar17,*pFVar21,&Button);
    pFVar17 = local_1a68.Object;
    pFVar21 = ::FName::FName((FName *)&local_res20._s_0,"InvertedForeground");
    FSlateStyleSet::Set((FSlateStyleSet *)pFVar17,*pFVar21,&InvertedForeground);
    local_res10 = (TVector2<float>_u_0)&local_1a68;
    `FUMGCoreStyle::Create'::__l2::<lambda_2>::operator()(&local_res10);
    pFVar27 = ::operator_new(0xb0);
    FVar29 = ___xmm_3f8000003f8000003f8000003f800000;
    FVar26 = FVar30;
    if (pFVar27 != (FSlateBoxBrush *)0x0) {
      ___xmm_3f8000003f8000003f8000003f800000 = FVar19.ComparisonIndex.Value;
      _UNK_15076b1f4 = FVar19.Number;
      local_1a28._s_0.R = (float)___xmm_3f8000003f8000003f8000003f800000;
      local_1a28._s_0.G = (float)_UNK_15076b1f4;
      local_1a28._8_8_ = TVar10;
      local_19f8 = FVar24;
      TStack_19f0 = TVar8;
      ___xmm_3f8000003f8000003f8000003f800000 = FVar29;
      pFVar20 = (FString *)
                (**(code **)((local_1a68.Object)->_padding_ + 0xf0))
                          (local_1a68.Object,local_19a8,"Common/EditableTextSelectionBackground",
                           L".png");
      FVar26 = (FName)FSlateBoxBrush::FSlateBoxBrush
                                (pFVar27,pFVar20,(FMargin *)&local_19f8,
                                 (FLinearColor *)&local_1a28._s_0,FullColor);
      if (local_19a8[0] != (void *)0x0) {
        FMemory::Free(local_19a8[0]);
      }
    }
    pFVar27 = ::operator_new(0xb0);
    FVar29 = FVar30;
    if (pFVar27 != (FSlateBoxBrush *)0x0) {
      local_1a28._s_0.R = (float)___xmm_3f400000000000000000000000000000;
      local_1a28._s_0.G = (float)_UNK_150925254;
      local_1a28._8_8_ = _UNK_150925258;
      local_19f8 = ___xmm_3e4000003e4000003e4000003e400000;
      TStack_19f0 = _UNK_150925138;
      pFVar20 = (FString *)
                (**(code **)((local_1a68.Object)->_padding_ + 0xf0))
                          (local_1a68.Object,local_19b8,"Old/DashedBorder",L".png");
      FVar29 = (FName)FSlateBoxBrush::FSlateBoxBrush
                                (pFVar27,pFVar20,(FMargin *)&local_19f8,
                                 (FLinearColor *)&local_1a28._s_0,FullColor);
      if (local_19b8[0] != (void *)0x0) {
        FMemory::Free(local_19b8[0]);
      }
    }
    pFVar28 = ::operator_new(0xb0);
    FVar9 = ___xmm_3f8000003f8000003f8000003f800000;
    if (pFVar28 != (FSlateBorderBrush *)0x0) {
      ___xmm_3f8000003f8000003f8000003f800000 = FVar19.ComparisonIndex.Value;
      _UNK_15076b1f4 = FVar19.Number;
      local_1a28._s_0.R = (float)___xmm_3f8000003f8000003f8000003f800000;
      local_1a28._s_0.G = (float)_UNK_15076b1f4;
      local_1a28._8_8_ = TVar10;
      local_19f8 = ___xmm_3e400000000000000000000000000000;
      TStack_19f0 = _UNK_150925128;
      ___xmm_3f8000003f8000003f8000003f800000 = FVar9;
      pFVar20 = (FString *)
                (**(code **)((local_1a68.Object)->_padding_ + 0xf0))
                          (local_1a68.Object,local_19c8,"Old/HyperlinkDotted",L".png");
      FVar30 = (FName)FSlateBorderBrush::FSlateBorderBrush
                                (pFVar28,pFVar20,(FMargin *)&local_19f8,
                                 (FLinearColor *)&local_1a28._s_0,FullColor);
      if (local_19c8[0] != (void *)0x0) {
        FMemory::Free(local_19c8[0]);
      }
    }
    if ((*(int *)(lVar2 + 0x9d4c) < _TSS17) && (_Init_thread_header(&_TSS17), _TSS17 == -1)) {
      pFVar33 = FEditableTextStyle::FEditableTextStyle((FEditableTextStyle *)local_18e8);
      FSlateBrush::operator=(&pFVar33->BackgroundImageSelected,(FSlateBrush *)FVar26);
      FSlateBrush::operator=(&pFVar33->BackgroundImageComposing,(FSlateBrush *)FVar30);
      FSlateBrush::operator=(&pFVar33->CaretImage,(FSlateBrush *)local_res18);
      FEditableTextStyle::FEditableTextStyle(&NormalEditableTextStyle,pFVar33);
      FEditableTextStyle::~FEditableTextStyle((FEditableTextStyle *)local_18e8);
      atexit(`FUMGCoreStyle::Create'::__l28::
             _dynamic_atexit_destructor_for__NormalEditableTextStyle__);
      _Init_thread_footer(&_TSS17);
    }
    pFVar17 = local_1a68.Object;
    pFVar21 = ::FName::FName((FName *)&local_res10._s_0,"NormalEditableText");
    FSlateStyleSet::Set<FEditableTextStyle>
              ((FSlateStyleSet *)pFVar17,*pFVar21,&NormalEditableTextStyle);
    pFVar17 = local_1a68.Object;
    pFVar21 = ::FName::FName(&local_res18,"EditableText.SelectionBackground");
    FSlateStyleSet::Set<FSlateBrush>((FSlateStyleSet *)pFVar17,*pFVar21,(FSlateBrush *)FVar26);
    pFVar17 = local_1a68.Object;
    pFVar21 = ::FName::FName((FName *)&local_res20._s_0,"EditableText.SelectionTarget");
    FSlateStyleSet::Set<FSlateBrush>((FSlateStyleSet *)pFVar17,*pFVar21,(FSlateBrush *)FVar29);
    pFVar17 = local_1a68.Object;
    pFVar21 = ::FName::FName((FName *)local_1a48,"EditableText.CompositionBackground");
    FSlateStyleSet::Set<FSlateBrush>((FSlateStyleSet *)pFVar17,*pFVar21,(FSlateBrush *)FVar30);
    if ((*(int *)(lVar2 + 0x9d4c) < _TSS18) && (_Init_thread_header(&_TSS18), _TSS18 == -1)) {
      pFVar34 = FEditableTextBoxStyle::FEditableTextBoxStyle(&local_cf8);
      FTextBlockStyle::operator=(&pFVar34->TextStyle,&NormalText);
      FVar30 = ___xmm_3f8000003f8000003f8000003f800000;
      ___xmm_3f8000003f8000003f8000003f800000 = FVar19.ComparisonIndex.Value;
      _UNK_15076b1f4 = FVar19.Number;
      local_1a28._s_0.R = (float)___xmm_3f8000003f8000003f8000003f800000;
      local_1a28._s_0.G = (float)_UNK_15076b1f4;
      local_1a28._8_8_ = TVar10;
      local_19f8 = FVar24;
      TStack_19f0 = TVar8;
      ___xmm_3f8000003f8000003f8000003f800000 = FVar30;
      pFVar20 = (FString *)
                (**(code **)((local_1a68.Object)->_padding_ + 0xf0))
                          (local_1a68.Object,&local_1a58,"Common/TextBox",L".png");
      pFVar35 = (FSlateBrush *)
                FSlateBoxBrush::FSlateBoxBrush
                          ((FSlateBoxBrush *)local_14a8,pFVar20,(FMargin *)&local_19f8,
                           (FLinearColor *)&local_1a28._s_0,FullColor);
      FSlateBrush::operator=(&pFVar34->BackgroundImageNormal,pFVar35);
      FVar30 = ___xmm_3f8000003f8000003f8000003f800000;
      ___xmm_3f8000003f8000003f8000003f800000 = FVar19.ComparisonIndex.Value;
      _UNK_15076b1f4 = FVar19.Number;
      local_1a28._s_0.R = (float)___xmm_3f8000003f8000003f8000003f800000;
      local_1a28._s_0.G = (float)_UNK_15076b1f4;
      local_1a28._8_8_ = TVar10;
      local_19f8 = FVar24;
      TStack_19f0 = TVar8;
      ___xmm_3f8000003f8000003f8000003f800000 = FVar30;
      pFVar20 = (FString *)
                (**(code **)((local_1a68.Object)->_padding_ + 0xf0))
                          (local_1a68.Object,local_19c8,"Common/TextBox_Hovered",L".png");
      pFVar35 = (FSlateBrush *)
                FSlateBoxBrush::FSlateBoxBrush
                          ((FSlateBoxBrush *)local_1348,pFVar20,(FMargin *)&local_19f8,
                           (FLinearColor *)&local_1a28._s_0,FullColor);
      FSlateBrush::operator=(&pFVar34->BackgroundImageHovered,pFVar35);
      FVar30 = ___xmm_3f8000003f8000003f8000003f800000;
      ___xmm_3f8000003f8000003f8000003f800000 = FVar19.ComparisonIndex.Value;
      _UNK_15076b1f4 = FVar19.Number;
      local_1a28._s_0.R = (float)___xmm_3f8000003f8000003f8000003f800000;
      local_1a28._s_0.G = (float)_UNK_15076b1f4;
      local_1a28._8_8_ = TVar10;
      local_19f8 = FVar24;
      TStack_19f0 = TVar8;
      ___xmm_3f8000003f8000003f8000003f800000 = FVar30;
      pFVar20 = (FString *)
                (**(code **)((local_1a68.Object)->_padding_ + 0xf0))
                          (local_1a68.Object,local_19b8,"Common/TextBox_Hovered",L".png");
      pFVar35 = (FSlateBrush *)
                FSlateBoxBrush::FSlateBoxBrush
                          ((FSlateBoxBrush *)local_1088,pFVar20,(FMargin *)&local_19f8,
                           (FLinearColor *)&local_1a28._s_0,FullColor);
      FSlateBrush::operator=(&pFVar34->BackgroundImageFocused,pFVar35);
      FVar30 = ___xmm_3f8000003f8000003f8000003f800000;
      ___xmm_3f8000003f8000003f8000003f800000 = FVar19.ComparisonIndex.Value;
      _UNK_15076b1f4 = FVar19.Number;
      local_1a28._s_0.R = (float)___xmm_3f8000003f8000003f8000003f800000;
      local_1a28._s_0.G = (float)_UNK_15076b1f4;
      local_1a28._8_8_ = TVar10;
      local_19f8 = FVar24;
      TStack_19f0 = TVar8;
      ___xmm_3f8000003f8000003f8000003f800000 = FVar30;
      pFVar20 = (FString *)
                (**(code **)((local_1a68.Object)->_padding_ + 0xf0))
                          (local_1a68.Object,local_19a8,"Common/TextBox_ReadOnly",L".png");
      pFVar35 = (FSlateBrush *)
                FSlateBoxBrush::FSlateBoxBrush
                          ((FSlateBoxBrush *)local_18e8,pFVar20,(FMargin *)&local_19f8,
                           (FLinearColor *)&local_1a28._s_0,FullColor);
      FSlateBrush::operator=(&pFVar34->BackgroundImageReadOnly,pFVar35);
      FScrollBarStyle::operator=(&pFVar34->ScrollBarStyle,&ScrollBar);
      FEditableTextBoxStyle::FEditableTextBoxStyle(&NormalEditableTextBoxStyle,pFVar34);
      local_18e8._0_8_ = &___7FSlateBrush__6B_;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)local_1848);
      if (local_19a8[0] != (void *)0x0) {
        FMemory::Free(local_19a8[0]);
      }
      local_1088._0_8_ = &___7FSlateBrush__6B_;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)local_1088._160_8_);
      if (local_19b8[0] != (void *)0x0) {
        FMemory::Free(local_19b8[0]);
      }
      local_1348[0] = &___7FSlateBrush__6B_;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_12a8);
      if (local_19c8[0] != (void *)0x0) {
        FMemory::Free(local_19c8[0]);
      }
      local_14a8[0] = &___7FSlateBrush__6B_;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_1408);
      if ((FName)local_1a58._0_8_ != (FName)0x0) {
        FMemory::Free((void *)local_1a58._0_8_);
      }
      FEditableTextBoxStyle::~FEditableTextBoxStyle(&local_cf8);
      atexit(`FUMGCoreStyle::Create'::__l2::
             _dynamic_atexit_destructor_for__NormalEditableTextBoxStyle__);
      _Init_thread_footer(&_TSS18);
    }
    pFVar17 = local_1a68.Object;
    pFVar21 = ::FName::FName((FName *)&local_res10._s_0,"NormalEditableTextBox");
    FSlateStyleSet::Set<FEditableTextBoxStyle>
              ((FSlateStyleSet *)pFVar17,*pFVar21,&NormalEditableTextBoxStyle);
    local_res10 = (TVector2<float>_u_0)&local_1a68;
    `FUMGCoreStyle::Create'::__l2::<lambda_3>::operator()(&local_res10);
    local_res10 = (TVector2<float>_u_0)&local_1a68;
    `FUMGCoreStyle::Create'::__l2::<lambda_4>::operator()(&local_res10);
    local_res10 = (TVector2<float>_u_0)&local_1a68;
    `FUMGCoreStyle::Create'::__l2::<lambda_5>::operator()(&local_res10);
    local_res10 = (TVector2<float>_u_0)&local_1a68;
    `FUMGCoreStyle::Create'::__l2::<lambda_6>::operator()(&local_res10);
    local_res10 = (TVector2<float>_u_0)&local_1a68;
    `FUMGCoreStyle::Create'::__l2::<lambda_7>::operator()(&local_res10);
    local_res10 = (TVector2<float>_u_0)&local_1a68;
    `FUMGCoreStyle::Create'::__l2::<lambda_8>::operator()(&local_res10);
    local_res10 = (TVector2<float>_u_0)&local_1a68;
    `FUMGCoreStyle::Create'::__l2::<lambda_9>::operator()(&local_res10);
    local_res10 = (TVector2<float>_u_0)&local_1a68;
    `FUMGCoreStyle::Create'::__l2::<lambda_10>::operator()(&local_res10);
    __return_storage_ptr__->Object = (ISlateStyle *)local_1a68.Object;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         local_1a68.SharedReferenceCount.ReferenceController;
    if (local_1a68.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_1a68.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_1a68.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_1298._padding_ = (longlong)&___7FSlateBrush__6B_;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1298.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
    local_11e8._padding_ = (longlong)&___7FSlateBrush__6B_;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_11e8.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
    local_1138._padding_ = (longlong)&___7FSlateBrush__6B_;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1138.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  }
  else {
    if (2 < (byte)LogSlate._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogSlate);
    }
    __return_storage_ptr__->Object = (ISlateStyle *)local_1a68.Object;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         local_1a68.SharedReferenceCount.ReferenceController;
    if (local_1a68.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_1a68.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_1a68.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1a68.SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// GetDefaultFont @ 142580860

TSharedRef<FCompositeFont_const_,1> * __cdecl
FUMGCoreStyle::GetDefaultFont(TSharedRef<FCompositeFont_const_,1> *__return_storage_ptr__)

{
  FLegacySlateFontInfoCache *this;
  
  this = FLegacySlateFontInfoCache::Get();
  FLegacySlateFontInfoCache::GetDefaultFont(this,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetDefaultFontStyle @ 1425809b0

FSlateFontInfo * __cdecl
FUMGCoreStyle::GetDefaultFontStyle
          (FSlateFontInfo *__return_storage_ptr__,FName param_1,float param_2,
          FFontOutlineSettings *param_3)

{
  FLegacySlateFontInfoCache *this;
  FName local_res10 [3];
  TSharedRef<FCompositeFont_const_,1> local_38;
  TSharedPtr<FCompositeFont_const_,1> local_28 [2];
  
  local_res10[0] = param_1;
  this = FLegacySlateFontInfoCache::Get();
  FLegacySlateFontInfoCache::GetDefaultFont(this,&local_38);
  local_28[0].Object = local_38.Object;
  local_28[0].SharedReferenceCount.ReferenceController =
       local_38.SharedReferenceCount.ReferenceController;
  if (local_38.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  FSlateFontInfo::FSlateFontInfo(__return_storage_ptr__,local_28,param_2,local_res10,param_3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_38.SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// ResetToDefault @ 14258f770

void __cdecl FUMGCoreStyle::ResetToDefault(void)

{
  TSharedRef<ISlateStyle,1> *pTVar1;
  FSharedReferencer<1> local_20;
  TSharedRef<ISlateStyle,1> local_18;
  
  pTVar1 = Create(&local_18);
  if (Instance.Object != (ISlateStyle *)0x0) {
    FSlateStyleRegistry::UnRegisterSlateStyle(Instance.Object);
  }
  local_20.ReferenceController = (pTVar1->SharedReferenceCount).ReferenceController;
  Instance.Object = pTVar1->Object;
  if (local_20.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_20.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_20.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::FSharedReferencer<1>::operator=(&Instance.SharedReferenceCount,&local_20);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_20.ReferenceController);
  if (Instance.Object != (ISlateStyle *)0x0) {
    FSlateStyleRegistry::RegisterSlateStyle(Instance.Object);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
    return;
  }
  ResetToDefault();
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return;
}

// SetFocusBrush @ 142590e20

void __cdecl FUMGCoreStyle::SetFocusBrush(FSlateBrush *param_1)

{
  code *pcVar1;
  ISlateStyle *this;
  FSharedReferencer<1> FVar2;
  bool bVar3;
  FName *pFVar4;
  FName local_res10;
  
  if (Instance.Object == (ISlateStyle *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x408,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FVar2.ReferenceController = Instance.SharedReferenceCount.ReferenceController;
  this = Instance.Object;
  if (Instance.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (Instance.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(Instance.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (this == (ISlateStyle *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x25d,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (FVar2.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar2.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar2.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar2.ReferenceController);
  FSlateStyleRegistry::UnRegisterSlateStyle(this);
  pFVar4 = ::FName::FName(&local_res10,"FocusRectangle");
  FSlateStyleSet::Set<FSlateBrush>((FSlateStyleSet *)this,*pFVar4,param_1);
  FSlateStyleRegistry::RegisterSlateStyle(this);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar2.ReferenceController);
  return;
}

// SetInactiveSelectionColor @ 142591860

void __cdecl FUMGCoreStyle::SetInactiveSelectionColor(FLinearColor *param_1)

{
  code *pcVar1;
  ISlateStyle *pIVar2;
  FSharedReferencer<1> FVar3;
  bool bVar4;
  
  FVar3.ReferenceController = Instance.SharedReferenceCount.ReferenceController;
  pIVar2 = Instance.Object;
  if (Instance.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (Instance.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(Instance.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pIVar2 == (ISlateStyle *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Style.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Styling\\UMGCoreStyle.cpp"
                       ,0xae,L"");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  *(float *)pIVar2[0x84] = (param_1->field0_0x0)._s_0.R;
  *(float *)((longlong)pIVar2[0x84] + 4) = (param_1->field0_0x0)._s_0.G;
  *(float *)((longlong)pIVar2[0x84] + 8) = (param_1->field0_0x0)._s_0.B;
  *(float *)((longlong)pIVar2[0x84] + 0xc) = (param_1->field0_0x0)._s_0.A;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar3.ReferenceController);
  return;
}

// SetPressedSelectionColor @ 142591cb0

void __cdecl FUMGCoreStyle::SetPressedSelectionColor(FLinearColor *param_1)

{
  code *pcVar1;
  ISlateStyle *pIVar2;
  FSharedReferencer<1> FVar3;
  bool bVar4;
  
  FVar3.ReferenceController = Instance.SharedReferenceCount.ReferenceController;
  pIVar2 = Instance.Object;
  if (Instance.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (Instance.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(Instance.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pIVar2 == (ISlateStyle *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Style.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Styling\\UMGCoreStyle.cpp"
                       ,0xb7,L"");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  *(float *)pIVar2[0x86] = (param_1->field0_0x0)._s_0.R;
  *(float *)((longlong)pIVar2[0x86] + 4) = (param_1->field0_0x0)._s_0.G;
  *(float *)((longlong)pIVar2[0x86] + 8) = (param_1->field0_0x0)._s_0.B;
  *(float *)((longlong)pIVar2[0x86] + 0xc) = (param_1->field0_0x0)._s_0.A;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar3.ReferenceController);
  return;
}

// SetSelectionColor @ 1425920f0

void __cdecl FUMGCoreStyle::SetSelectionColor(FLinearColor *param_1)

{
  code *pcVar1;
  ISlateStyle *pIVar2;
  FSharedReferencer<1> FVar3;
  bool bVar4;
  
  FVar3.ReferenceController = Instance.SharedReferenceCount.ReferenceController;
  pIVar2 = Instance.Object;
  if (Instance.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (Instance.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(Instance.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pIVar2 == (ISlateStyle *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Style.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Styling\\UMGCoreStyle.cpp"
                       ,0xa5,L"");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  *(float *)pIVar2[0x82] = (param_1->field0_0x0)._s_0.R;
  *(float *)((longlong)pIVar2[0x82] + 4) = (param_1->field0_0x0)._s_0.G;
  *(float *)((longlong)pIVar2[0x82] + 8) = (param_1->field0_0x0)._s_0.B;
  *(float *)((longlong)pIVar2[0x82] + 0xc) = (param_1->field0_0x0)._s_0.A;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar3.ReferenceController);
  return;
}

// SetSelectorColor @ 142592360

void __cdecl FUMGCoreStyle::SetSelectorColor(FLinearColor *param_1)

{
  code *pcVar1;
  ISlateStyle *pIVar2;
  FSharedReferencer<1> FVar3;
  bool bVar4;
  
  FVar3.ReferenceController = Instance.SharedReferenceCount.ReferenceController;
  pIVar2 = Instance.Object;
  if (Instance.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (Instance.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(Instance.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pIVar2 == (ISlateStyle *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Style.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Styling\\UMGCoreStyle.cpp"
                       ,0x9c,L"");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  *(float *)pIVar2[0x80] = (param_1->field0_0x0)._s_0.R;
  *(float *)((longlong)pIVar2[0x80] + 4) = (param_1->field0_0x0)._s_0.G;
  *(float *)((longlong)pIVar2[0x80] + 8) = (param_1->field0_0x0)._s_0.B;
  *(float *)((longlong)pIVar2[0x80] + 0xc) = (param_1->field0_0x0)._s_0.A;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar3.ReferenceController);
  return;
}

// SetStyle @ 142592530

void __cdecl FUMGCoreStyle::SetStyle(TSharedRef<ISlateStyle,1> *param_1)

{
  FSharedReferencer<1> local_10;
  
  if (Instance.Object != (ISlateStyle *)0x0) {
    FSlateStyleRegistry::UnRegisterSlateStyle(Instance.Object);
  }
  local_10.ReferenceController = (param_1->SharedReferenceCount).ReferenceController;
  Instance.Object = param_1->Object;
  if (local_10.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_10.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_10.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::FSharedReferencer<1>::operator=(&Instance.SharedReferenceCount,&local_10);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_10.ReferenceController);
  if (Instance.Object != (ISlateStyle *)0x0) {
    FSlateStyleRegistry::RegisterSlateStyle(Instance.Object);
    return;
  }
  ResetToDefault();
  return;
}

