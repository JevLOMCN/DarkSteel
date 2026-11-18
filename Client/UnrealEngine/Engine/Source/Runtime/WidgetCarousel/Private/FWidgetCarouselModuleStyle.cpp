// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WidgetCarousel
// Functions: 6

// Create @ 14a77ce70

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TSharedRef<FSlateStyleSet,1> * __cdecl
FWidgetCarouselModuleStyle::Create(TSharedRef<FSlateStyleSet,1> *__return_storage_ptr__)

{
  code *pcVar1;
  FSlateStyleSet *pFVar2;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> *pTVar3;
  FButtonStyle *pFVar4;
  FString *pFVar5;
  FSlateBrush *pFVar6;
  FName *pFVar7;
  TVector2<float>_u_0 this;
  TVector2<float>_u_0 TVar8;
  FName local_res8;
  TVector2<float>_u_0 local_res10;
  FName local_res18;
  FDeprecateVector2DParameter local_res20;
  FDeprecateVector2DParameter local_2658;
  FName local_2650;
  float fStack_2648;
  float fStack_2644;
  FString local_2640;
  FLinearColor_u_0 local_2630;
  FLinearColor_u_0 local_2620;
  FLinearColor_u_0 local_2610;
  FMargin local_2600;
  FMargin local_25f0;
  FLinearColor_u_0 local_25e0;
  void *local_25d0 [2];
  void *local_25c0 [2];
  void *local_25b0 [2];
  void *local_25a0 [2];
  void *local_2590 [2];
  void *local_2580;
  undefined8 uStack_2578;
  FLinearColor_u_0 local_2570;
  void *local_2560 [2];
  void *local_2550 [2];
  FLinearColor_u_0 local_2540;
  void *local_2530 [3];
  undefined **local_2518 [20];
  TReferenceControllerBase<1> *local_2478;
  undefined **local_2468 [20];
  TReferenceControllerBase<1> *local_23c8;
  undefined **local_23b8 [20];
  TReferenceControllerBase<1> *local_2318;
  undefined **local_2308 [20];
  TReferenceControllerBase<1> *local_2268;
  undefined **local_2258 [20];
  TReferenceControllerBase<1> *local_21b8;
  undefined **local_21a8 [20];
  TReferenceControllerBase<1> *local_2108;
  undefined **local_20f8 [20];
  TReferenceControllerBase<1> *local_2058;
  undefined **local_2048 [20];
  TReferenceControllerBase<1> *local_1fa8;
  undefined **local_1f98 [20];
  TReferenceControllerBase<1> *local_1ef8;
  FWidgetCarouselNavigationButtonStyle local_1ee8;
  undefined1 local_19e8 [912];
  FWidgetCarouselNavigationBarStyle local_1658;
  FButtonStyle local_ae8;
  FButtonStyle local_758;
  FButtonStyle local_3c8;
  
  local_3c8._904_8_ = 0x14a77ce8d;
  pFVar2 = ::operator_new(0x400);
  TVar8 = (TVector2<float>_u_0)0x0;
  local_res10 = TVar8;
  if (pFVar2 != (FSlateStyleSet *)0x0) {
    ::FName::FName(&local_res8,"WidgetCarouselStyle");
    local_res10 = (TVector2<float>_u_0)FSlateStyleSet::FSlateStyleSet(pFVar2,&local_res8);
  }
  TSharedRef<FSlateStyleSet,1>::TSharedRef<FSlateStyleSet,1><FSlateStyleSet>
            (__return_storage_ptr__,(TRawPtrProxy<FSlateStyleSet> *)&local_res10._s_0);
  pFVar2 = __return_storage_ptr__->Object;
  pcVar1 = *(code **)(pFVar2->_padding_ + 0xc0);
  pTVar3 = &FPaths::EngineContentDir(&local_2640)->Data;
  TArray<wchar_t,TSizedDefaultAllocator<32>_>::TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>
            ((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&local_2650,pTVar3,
             0x1d - (uint)(pTVar3->ArrayNum != 0));
  ::FString::PathAppend((FString *)&local_2650,L"Editor/Slate/WidgetCarousel",0x1b);
  (*pcVar1)(pFVar2,&local_2650);
  if (local_2650 != (FName)0x0) {
    FMemory::Free((void *)local_2650);
  }
  if ((void *)CONCAT44(local_2640.Data.AllocatorInstance.Data._4_4_,
                       local_2640.Data.AllocatorInstance.Data._0_4_) != (void *)0x0) {
    FMemory::Free((void *)CONCAT44(local_2640.Data.AllocatorInstance.Data._4_4_,
                                   local_2640.Data.AllocatorInstance.Data._0_4_));
  }
  pFVar4 = FButtonStyle::FButtonStyle((FButtonStyle *)local_19e8);
  (pFVar4->NormalPadding).Left = 0.0;
  (pFVar4->NormalPadding).Top = 0.0;
  (pFVar4->NormalPadding).Right = 0.0;
  (pFVar4->NormalPadding).Bottom = 0.0;
  (pFVar4->PressedPadding).Left = 0.0;
  (pFVar4->PressedPadding).Top = 0.0;
  (pFVar4->PressedPadding).Right = 0.0;
  (pFVar4->PressedPadding).Bottom = 0.0;
  FButtonStyle::FButtonStyle(&local_ae8,pFVar4);
  FButtonStyle::~FButtonStyle((FButtonStyle *)local_19e8);
  pFVar2 = __return_storage_ptr__->Object;
  local_2630._0_8_ = ___xmm_3f8000003d66e43b3f3cb9243f800000;
  local_2630._8_8_ = _UNK_1522046f8;
  local_25e0._0_8_ = ___xmm_3f8000003a9d49523f2a86d73f800000;
  local_25e0._8_8_ = _UNK_1522046e8;
  local_2540._0_8_ = ___xmm_3f8000003e91a36e3f55e54b3f800000;
  local_2540._8_8_ = _UNK_152204708;
  FSlateWidgetStyle::FSlateWidgetStyle((FSlateWidgetStyle *)&local_1ee8);
  local_1ee8._padding_ = (longlong)&___7FWidgetCarouselNavigationButtonStyle__6B_;
  FButtonStyle::FButtonStyle(&local_1ee8.InnerButtonStyle);
  FSlateBrush::FSlateBrush(&local_1ee8.NavigationButtonLeftImage);
  FSlateBrush::FSlateBrush(&local_1ee8.NavigationButtonRightImage);
  pFVar4 = FButtonStyle::FButtonStyle((FButtonStyle *)local_19e8,&local_ae8);
  local_2650 = ___xmm_3f0000003f0000003f0000003f000000;
  fStack_2648 = _UNK_150689628;
  fStack_2644 = _UNK_15068962c;
  local_res8.ComparisonIndex.Value = 0x41880000;
  local_res8.Number = 0x41880000;
  pFVar5 = (FString *)
           (**(code **)(__return_storage_ptr__->Object->_padding_ + 0xf0))
                     (__return_storage_ptr__->Object,local_25d0,"WhiteBox_7px_CornerRadius",L".png")
  ;
  pFVar6 = (FSlateBrush *)
           FSlateBoxBrush::FSlateBoxBrush
                     ((FSlateBoxBrush *)local_2258,pFVar5,(FDeprecateVector2DParameter *)&local_res8
                      ,(FMargin *)&local_2650,(FLinearColor *)&local_2630._s_0,FullColor);
  FSlateBrush::operator=(&pFVar4->Normal,pFVar6);
  local_25f0.Left = (float)___xmm_3f0000003f0000003f0000003f000000;
  local_25f0.Top = (float)_UNK_150689624;
  local_25f0.Right = _UNK_150689628;
  local_25f0.Bottom = _UNK_15068962c;
  local_res10 = (TVector2<float>_u_0)0x4188000041880000;
  pFVar5 = (FString *)
           (**(code **)(__return_storage_ptr__->Object->_padding_ + 0xf0))
                     (__return_storage_ptr__->Object,local_2590,"WhiteBox_7px_CornerRadius",L".png")
  ;
  pFVar6 = (FSlateBrush *)
           FSlateBoxBrush::FSlateBoxBrush
                     ((FSlateBoxBrush *)local_2308,pFVar5,
                      (FDeprecateVector2DParameter *)&local_res10._s_0,&local_25f0,
                      (FLinearColor *)&local_25e0._s_0,FullColor);
  FSlateBrush::operator=(&pFVar4->Pressed,pFVar6);
  local_2600.Left = (float)___xmm_3f0000003f0000003f0000003f000000;
  local_2600.Top = (float)_UNK_150689624;
  local_2600.Right = _UNK_150689628;
  local_2600.Bottom = _UNK_15068962c;
  local_res18.ComparisonIndex.Value = 0x41880000;
  local_res18.Number = 0x41880000;
  pFVar5 = (FString *)
           (**(code **)(__return_storage_ptr__->Object->_padding_ + 0xf0))
                     (__return_storage_ptr__->Object,local_25a0,"WhiteBox_7px_CornerRadius",L".png")
  ;
  pFVar6 = (FSlateBrush *)
           FSlateBoxBrush::FSlateBoxBrush
                     ((FSlateBoxBrush *)local_23b8,pFVar5,
                      (FDeprecateVector2DParameter *)&local_res18,&local_2600,
                      (FLinearColor *)&local_2540._s_0,FullColor);
  FSlateBrush::operator=(&pFVar4->Hovered,pFVar6);
  FButtonStyle::operator=(&local_1ee8.InnerButtonStyle,pFVar4);
  local_2610._0_8_ = ___xmm_3f8000003f8000003f8000003f800000;
  local_2610._8_8_ = _UNK_15076b1f8;
  local_res20._0_4_ = 0x41c80000;
  local_res20._4_4_ = 0x42280000;
  pFVar5 = (FString *)
           (**(code **)(__return_storage_ptr__->Object->_padding_ + 0xf0))
                     (__return_storage_ptr__->Object,local_25b0,"Arrow-Left",L".png");
  pFVar6 = (FSlateBrush *)
           FSlateImageBrush::FSlateImageBrush
                     ((FSlateImageBrush *)local_2468,pFVar5,&local_res20,
                      (FLinearColor *)&local_2610._s_0,NoTile,FullColor);
  FSlateBrush::operator=(&local_1ee8.NavigationButtonLeftImage,pFVar6);
  local_2620._0_8_ = ___xmm_3f8000003f8000003f8000003f800000;
  local_2620._8_8_ = _UNK_15076b1f8;
  local_2658._0_4_ = 0x41c80000;
  local_2658._4_4_ = 0x42280000;
  pFVar5 = (FString *)
           (**(code **)(__return_storage_ptr__->Object->_padding_ + 0xf0))
                     (__return_storage_ptr__->Object,local_25c0,"Arrow-Right",L".png");
  pFVar6 = (FSlateBrush *)
           FSlateImageBrush::FSlateImageBrush
                     ((FSlateImageBrush *)local_2518,pFVar5,&local_2658,
                      (FLinearColor *)&local_2620._s_0,NoTile,FullColor);
  FSlateBrush::operator=(&local_1ee8.NavigationButtonRightImage,pFVar6);
  pFVar7 = ::FName::FName((FName *)&local_2640,"CarouselNavigationButton");
  FSlateStyleSet::Set<FWidgetCarouselNavigationButtonStyle>(pFVar2,*pFVar7,&local_1ee8);
  local_2518[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_2478);
  if (local_25c0[0] != (void *)0x0) {
    FMemory::Free(local_25c0[0]);
  }
  local_2468[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_23c8);
  if (local_25b0[0] != (void *)0x0) {
    FMemory::Free(local_25b0[0]);
  }
  local_23b8[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_2318);
  if (local_25a0[0] != (void *)0x0) {
    FMemory::Free(local_25a0[0]);
  }
  local_2308[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_2268);
  if (local_2590[0] != (void *)0x0) {
    FMemory::Free(local_2590[0]);
  }
  local_2258[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_21b8);
  if (local_25d0[0] != (void *)0x0) {
    FMemory::Free(local_25d0[0]);
  }
  FButtonStyle::~FButtonStyle((FButtonStyle *)local_19e8);
  local_1ee8._padding_ = (longlong)&___7FWidgetCarouselNavigationButtonStyle__6B_;
  local_1ee8.NavigationButtonRightImage._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1ee8.NavigationButtonRightImage.ResourceHandle.Data.SharedReferenceCount.
             ReferenceController);
  local_1ee8.NavigationButtonLeftImage._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1ee8.NavigationButtonLeftImage.ResourceHandle.Data.SharedReferenceCount.
             ReferenceController);
  FButtonStyle::~FButtonStyle(&local_1ee8.InnerButtonStyle);
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)&local_1ee8);
  pFVar2 = __return_storage_ptr__->Object;
  FSlateWidgetStyle::FSlateWidgetStyle((FSlateWidgetStyle *)&local_1658);
  local_1658._padding_ = (longlong)&___7FWidgetCarouselNavigationBarStyle__6B_;
  FSlateBrush::FSlateBrush(&local_1658.HighlightBrush);
  FButtonStyle::FButtonStyle(&local_1658.LeftButtonStyle);
  FButtonStyle::FButtonStyle(&local_1658.CenterButtonStyle);
  FButtonStyle::FButtonStyle(&local_1658.RightButtonStyle);
  local_res8.ComparisonIndex.Value = 0x42a00000;
  local_res8.Number = 0x41a00000;
  pFVar5 = (FString *)
           (**(code **)(__return_storage_ptr__->Object->_padding_ + 0xf0))
                     (__return_storage_ptr__->Object,&local_2570,"CarouselNavMarker",L".png");
  pFVar6 = (FSlateBrush *)
           FSlateImageBrush::FSlateImageBrush
                     ((FSlateImageBrush *)local_19e8,pFVar5,
                      (FDeprecateVector2DParameter *)&local_res8,(FLinearColor *)&local_2630._s_0,
                      NoTile,FullColor);
  FSlateBrush::operator=(&local_1658.HighlightBrush,pFVar6);
  pFVar4 = FButtonStyle::FButtonStyle((FButtonStyle *)&local_1ee8,&local_ae8);
  local_res10 = (TVector2<float>_u_0)0x41a0000042a00000;
  pFVar5 = (FString *)
           (**(code **)(__return_storage_ptr__->Object->_padding_ + 0xf0))
                     (__return_storage_ptr__->Object,&local_2580,"CarouselNavLeft",L".png");
  pFVar6 = (FSlateBrush *)
           FSlateImageBrush::FSlateImageBrush
                     ((FSlateImageBrush *)local_1f98,pFVar5,
                      (FDeprecateVector2DParameter *)&local_res10._s_0,&FLinearColor::White,NoTile,
                      FullColor);
  FSlateBrush::operator=(&pFVar4->Normal,pFVar6);
  local_res18.ComparisonIndex.Value = 0x42a00000;
  local_res18.Number = 0x41a00000;
  pFVar5 = (FString *)
           (**(code **)(__return_storage_ptr__->Object->_padding_ + 0xf0))
                     (__return_storage_ptr__->Object,local_2550,"CarouselNavLeft",L".png");
  pFVar6 = (FSlateBrush *)
           FSlateImageBrush::FSlateImageBrush
                     ((FSlateImageBrush *)local_2048,pFVar5,
                      (FDeprecateVector2DParameter *)&local_res18,(FLinearColor *)&local_2630._s_0,
                      NoTile,FullColor);
  FSlateBrush::operator=(&pFVar4->Hovered,pFVar6);
  local_res20._0_4_ = 0x42a00000;
  local_res20._4_4_ = 0x41a00000;
  pFVar5 = (FString *)
           (**(code **)(__return_storage_ptr__->Object->_padding_ + 0xf0))
                     (__return_storage_ptr__->Object,local_2560,"CarouselNavLeft",L".png");
  pFVar6 = (FSlateBrush *)
           FSlateImageBrush::FSlateImageBrush
                     ((FSlateImageBrush *)local_20f8,pFVar5,&local_res20,
                      (FLinearColor *)&local_25e0._s_0,NoTile,FullColor);
  FSlateBrush::operator=(&pFVar4->Pressed,pFVar6);
  FButtonStyle::operator=(&local_1658.LeftButtonStyle,pFVar4);
  pFVar4 = FButtonStyle::FButtonStyle(&local_3c8);
  local_2658._0_4_ = 0x42a00000;
  local_2658._4_4_ = 0x41a00000;
  pFVar5 = (FString *)
           (**(code **)(__return_storage_ptr__->Object->_padding_ + 0xf0))
                     (__return_storage_ptr__->Object,local_2530,"CarouselNavCenter",L".png");
  pFVar6 = (FSlateBrush *)
           FSlateImageBrush::FSlateImageBrush
                     ((FSlateImageBrush *)local_21a8,pFVar5,&local_2658,&FLinearColor::White,NoTile,
                      FullColor);
  FSlateBrush::operator=(&pFVar4->Normal,pFVar6);
  local_2620._0_8_ = 0x41a0000042a00000;
  pFVar5 = (FString *)
           (**(code **)(__return_storage_ptr__->Object->_padding_ + 0xf0))
                     (__return_storage_ptr__->Object,local_25c0,"CarouselNavCenter",L".png");
  pFVar6 = (FSlateBrush *)
           FSlateImageBrush::FSlateImageBrush
                     ((FSlateImageBrush *)local_2518,pFVar5,
                      (FDeprecateVector2DParameter *)&local_2620._s_0,
                      (FLinearColor *)&local_2630._s_0,NoTile,FullColor);
  FSlateBrush::operator=(&pFVar4->Hovered,pFVar6);
  local_2610._0_8_ = 0x41a0000042a00000;
  pFVar5 = (FString *)
           (**(code **)(__return_storage_ptr__->Object->_padding_ + 0xf0))
                     (__return_storage_ptr__->Object,local_25b0,"CarouselNavCenter",L".png");
  pFVar6 = (FSlateBrush *)
           FSlateImageBrush::FSlateImageBrush
                     ((FSlateImageBrush *)local_2468,pFVar5,
                      (FDeprecateVector2DParameter *)&local_2610._s_0,
                      (FLinearColor *)&local_25e0._s_0,NoTile,FullColor);
  FSlateBrush::operator=(&pFVar4->Pressed,pFVar6);
  FButtonStyle::operator=(&local_1658.CenterButtonStyle,pFVar4);
  pFVar4 = FButtonStyle::FButtonStyle(&local_758);
  local_2600.Left = 80.0;
  local_2600.Top = 20.0;
  pFVar5 = (FString *)
           (**(code **)(__return_storage_ptr__->Object->_padding_ + 0xf0))
                     (__return_storage_ptr__->Object,local_25a0,"CarouselNavRight",L".png");
  pFVar6 = (FSlateBrush *)
           FSlateImageBrush::FSlateImageBrush
                     ((FSlateImageBrush *)local_23b8,pFVar5,
                      (FDeprecateVector2DParameter *)&local_2600,&FLinearColor::White,NoTile,
                      FullColor);
  FSlateBrush::operator=(&pFVar4->Normal,pFVar6);
  local_25f0.Left = 80.0;
  local_25f0.Top = 20.0;
  pFVar5 = (FString *)
           (**(code **)(__return_storage_ptr__->Object->_padding_ + 0xf0))
                     (__return_storage_ptr__->Object,local_2590,"CarouselNavRight",L".png");
  pFVar6 = (FSlateBrush *)
           FSlateImageBrush::FSlateImageBrush
                     ((FSlateImageBrush *)local_2308,pFVar5,
                      (FDeprecateVector2DParameter *)&local_25f0,(FLinearColor *)&local_2630._s_0,
                      NoTile,FullColor);
  FSlateBrush::operator=(&pFVar4->Hovered,pFVar6);
  local_2640.Data.AllocatorInstance.Data._0_4_ = 0x42a00000;
  local_2640.Data.AllocatorInstance.Data._4_4_ = 0x41a00000;
  pFVar5 = (FString *)
           (**(code **)(__return_storage_ptr__->Object->_padding_ + 0xf0))
                     (__return_storage_ptr__->Object,local_25d0,"CarouselNavRight",L".png");
  pFVar6 = (FSlateBrush *)
           FSlateImageBrush::FSlateImageBrush
                     ((FSlateImageBrush *)local_2258,pFVar5,
                      (FDeprecateVector2DParameter *)&local_2640,(FLinearColor *)&local_25e0._s_0,
                      NoTile,FullColor);
  FSlateBrush::operator=(&pFVar4->Pressed,pFVar6);
  FButtonStyle::operator=(&local_1658.RightButtonStyle,pFVar4);
  pFVar7 = ::FName::FName(&local_2650,"CarouselNavigationBar");
  FSlateStyleSet::Set<FWidgetCarouselNavigationBarStyle>(pFVar2,*pFVar7,&local_1658);
  local_2258[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_21b8);
  if (local_25d0[0] != (void *)0x0) {
    FMemory::Free(local_25d0[0]);
  }
  local_2308[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_2268);
  if (local_2590[0] != (void *)0x0) {
    FMemory::Free(local_2590[0]);
  }
  local_23b8[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_2318);
  if (local_25a0[0] != (void *)0x0) {
    FMemory::Free(local_25a0[0]);
  }
  FButtonStyle::~FButtonStyle(&local_758);
  local_2468[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_23c8);
  if (local_25b0[0] != (void *)0x0) {
    FMemory::Free(local_25b0[0]);
  }
  local_2518[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_2478);
  if (local_25c0[0] != (void *)0x0) {
    FMemory::Free(local_25c0[0]);
  }
  local_21a8[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_2108);
  if (local_2530[0] != (void *)0x0) {
    FMemory::Free(local_2530[0]);
  }
  FButtonStyle::~FButtonStyle(&local_3c8);
  local_20f8[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_2058);
  if (local_2560[0] != (void *)0x0) {
    FMemory::Free(local_2560[0]);
  }
  local_2048[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_1fa8);
  if (local_2550[0] != (void *)0x0) {
    FMemory::Free(local_2550[0]);
  }
  local_1f98[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_1ef8);
  if (local_2580 != (void *)0x0) {
    FMemory::Free(local_2580);
  }
  FButtonStyle::~FButtonStyle((FButtonStyle *)&local_1ee8);
  local_19e8._0_8_ = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_19e8._160_8_);
  if ((void *)local_2570._0_8_ != (void *)0x0) {
    FMemory::Free((void *)local_2570._0_8_);
  }
  local_1658._padding_ = (longlong)&___7FWidgetCarouselNavigationBarStyle__6B_;
  FButtonStyle::~FButtonStyle(&local_1658.RightButtonStyle);
  FButtonStyle::~FButtonStyle(&local_1658.CenterButtonStyle);
  FButtonStyle::~FButtonStyle(&local_1658.LeftButtonStyle);
  local_1658.HighlightBrush._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1658.HighlightBrush.ResourceHandle.Data.SharedReferenceCount.ReferenceController)
  ;
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)&local_1658);
  pFVar2 = __return_storage_ptr__->Object;
  this = (TVector2<float>_u_0)::operator_new(0xb0);
  if (this != (TVector2<float>_u_0)0x0) {
    local_2570._0_8_ = ___xmm_3f19999a000000000000000000000000;
    local_2570._8_8_ = _UNK_150fba348;
    local_res10 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
    local_2580 = (void *)0x0;
    uStack_2578._0_4_ = 0.0;
    uStack_2578._4_4_ = 0.0;
    local_res8.ComparisonIndex.Value = 0;
    local_res8.Number = 0;
    FSlateBrush::FSlateBrush
              ((FSlateBrush *)this,Image,(FName)0x0,(FMargin *)&local_2580,NoTile,NoImage,
               (FDeprecateVector2DParameter *)&local_res10._s_0,(FLinearColor *)&local_2570._s_0,
               (UObject *)0x0,false);
    *(undefined ***)this = &___7FSlateColorBrush__6B_;
    TVar8 = this;
  }
  pFVar7 = ::FName::FName(&local_res18,"WidgetBackground");
  FSlateStyleSet::Set<FSlateColorBrush>(pFVar2,*pFVar7,(FSlateColorBrush *)TVar8);
  FButtonStyle::~FButtonStyle(&local_ae8);
  return __return_storage_ptr__;
}

// Get @ 14a77e1f0

ISlateStyle * __cdecl FWidgetCarouselModuleStyle::Get(void)

{
  code *pcVar1;
  bool bVar2;
  ISlateStyle *pIVar3;
  
  if ((WidgetCarouselStyleInstance.Object == (FSlateStyleSet *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x44d,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pIVar3 = (ISlateStyle *)(*pcVar1)();
    return pIVar3;
  }
  return (ISlateStyle *)WidgetCarouselStyleInstance.Object;
}

// GetStyleSetName @ 14a77e830

FName __cdecl FWidgetCarouselModuleStyle::GetStyleSetName(void)

{
  FName in_RCX;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&StyleSetName,L"WidgetCarousel");
      _Init_thread_footer(&::_TSS0);
    }
  }
  *(FName *)in_RCX = StyleSetName;
  return in_RCX;
}

// Initialize @ 14a77ea60

void __cdecl FWidgetCarouselModuleStyle::Initialize(void)

{
  code *pcVar1;
  bool bVar2;
  TSharedRef<FSlateStyleSet,1> *pTVar3;
  FSharedReferencer<1> local_20;
  TSharedRef<FSlateStyleSet,1> local_18;
  
  if (WidgetCarouselStyleInstance.Object != (FSlateStyleSet *)0x0) {
    return;
  }
  pTVar3 = Create(&local_18);
  local_20.ReferenceController = (pTVar3->SharedReferenceCount).ReferenceController;
  WidgetCarouselStyleInstance.Object = pTVar3->Object;
  if (local_20.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_20.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_20.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::FSharedReferencer<1>::operator=
            (&WidgetCarouselStyleInstance.SharedReferenceCount,&local_20);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_20.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  if (WidgetCarouselStyleInstance.Object == (FSlateStyleSet *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FSlateStyleRegistry::RegisterSlateStyle((ISlateStyle *)WidgetCarouselStyleInstance.Object);
  return;
}

// ReloadTextures @ 14a77ebb0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl FWidgetCarouselModuleStyle::ReloadTextures(void)

{
  code *pcVar1;
  bool bVar2;
  
  if (FSlateApplication::CurrentApplication.Object == (FSlateApplication *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("CurrentApplication.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Framework\\Application\\SlateApplication.h"
                       ,0x141,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  bVar2 = IsInGameThread();
  if (!bVar2) {
    bVar2 = IsInSlateThread();
    if (!bVar2) {
      bVar2 = (*IsInAsyncLoadingThread)();
      if (!bVar2) {
        bVar2 = IsInParallelLoadingThread();
        if (!bVar2) {
          bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsInGameThread() || IsInSlateThread() || IsInAsyncLoadingThread() || IsInParallelLoadingThread()"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Framework\\Application\\SlateApplication.h"
                             ,0x142,L"");
          if (bVar2) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
        }
      }
    }
  }
  if (FSlateApplication::CurrentApplication.Object == (FSlateApplication *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00014a77ec71. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)&(FSlateApplication::CurrentApplication.Object)->field_0x60 + 0xe0))()
  ;
  return;
}

// Shutdown @ 14a77eca0

void __cdecl FWidgetCarouselModuleStyle::Shutdown(void)

{
  code *pcVar1;
  bool bVar2;
  FSharedReferencer<1> local_10 [2];
  
  if (WidgetCarouselStyleInstance.Object == (FSlateStyleSet *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FSlateStyleRegistry::UnRegisterSlateStyle((ISlateStyle *)WidgetCarouselStyleInstance.Object);
  if ((WidgetCarouselStyleInstance.SharedReferenceCount.ReferenceController ==
       (TReferenceControllerBase<1> *)0x0) ||
     ((WidgetCarouselStyleInstance.SharedReferenceCount.ReferenceController)->SharedReferenceCount
      != (atomic<int>)0x1)) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_4390730111624675254>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\WidgetCarousel\\Private\\WidgetCarouselStyle.cpp"
                       ,0x4a,"WidgetCarouselStyleInstance.IsUnique()");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_10[0].ReferenceController = (TReferenceControllerBase<1> *)0x0;
  WidgetCarouselStyleInstance.Object = (FSlateStyleSet *)0x0;
  SharedPointerInternals::FSharedReferencer<1>::operator=
            (&WidgetCarouselStyleInstance.SharedReferenceCount,local_10);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_10[0].ReferenceController);
  return;
}

