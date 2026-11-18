// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AppFramework
// Functions: 4

// Create @ 142f9e2d0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TSharedRef<ISlateStyle,1> * __cdecl
FTestStyle::Create(TSharedRef<ISlateStyle,1> *__return_storage_ptr__)

{
  code *pcVar1;
  void *pvVar2;
  float fVar3;
  FDeprecateVector2DParameter FVar4;
  TObjectPtr<UObject>_u_0 TVar5;
  undefined8 uVar6;
  FDeprecateVector2DParameter FVar7;
  TObjectPtr<UObject>_u_0 TVar8;
  undefined8 uVar9;
  uint uVar10;
  FSlateStyleSet *this;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> *pTVar11;
  FTextBlockStyle *pFVar12;
  FName *pFVar13;
  FSlateFontInfo *pFVar14;
  FString *pFVar15;
  FSlateBrush *pFVar16;
  FSlateImageBrush *pFVar17;
  FName FVar18;
  FName this_00;
  FSlateBoxBrush *pFVar19;
  FButtonStyle *pFVar20;
  FHyperlinkStyle *pFVar21;
  FInlineTextImageStyle *pFVar22;
  FCheckBoxStyle *pFVar23;
  FName FVar24;
  FComboButtonStyle *pFVar25;
  FComboBoxStyle *pFVar26;
  char cVar27;
  float fVar28;
  float fVar29;
  TVector2<float>_u_0 local_res8;
  FName local_res10;
  FDeprecateVector2DParameter local_res18;
  FDeprecateVector2DParameter local_res20;
  float local_9408;
  float fStack_9404;
  float fStack_9400;
  undefined4 uStack_93fc;
  uint local_93f8;
  undefined1 local_93f0 [8];
  float fStack_93e8;
  undefined4 uStack_93e4;
  uint local_93e0;
  undefined1 local_93d8 [8];
  float fStack_93d0;
  int iStack_93cc;
  FFontOutlineSettings local_93c8;
  undefined1 local_93a8 [8];
  float fStack_93a0;
  float fStack_939c;
  FFontOutlineSettings local_9398;
  undefined1 local_9378 [8];
  float fStack_9370;
  int iStack_936c;
  undefined1 local_9368 [8];
  float fStack_9360;
  float fStack_935c;
  undefined1 local_9358 [16];
  undefined1 local_9348 [8];
  float fStack_9340;
  float fStack_933c;
  undefined8 local_9338;
  undefined8 uStack_9330;
  FDeprecateVector2DParameter local_9328;
  TObjectPtr<UObject>_u_0 TStack_9320;
  uint local_9318;
  FDeprecateVector2DParameter local_9310 [2];
  undefined1 local_9300 [16];
  FDeprecateVector2DParameter local_92f0;
  TObjectPtr<UObject>_u_0 TStack_92e8;
  FDeprecateVector2DParameter local_92e0 [2];
  FLinearColor_u_0 local_92d0;
  FLinearColor_u_0 local_92c0;
  FLinearColor_u_0 local_92b0;
  undefined2 local_92a0;
  FDeprecateVector2DParameter local_9298;
  FDeprecateVector2DParameter local_9290;
  FDeprecateVector2DParameter local_9288;
  FDeprecateVector2DParameter local_9280;
  FDeprecateVector2DParameter local_9278;
  void *local_9270 [2];
  void *local_9260 [2];
  void *local_9250 [2];
  FDeprecateVector2DParameter local_9240;
  FDeprecateVector2DParameter local_9238 [2];
  undefined1 local_9228 [160];
  TReferenceControllerBase<1> *local_9188;
  FDeprecateVector2DParameter local_9178 [2];
  FLinearColor_u_0 local_9168;
  FLinearColor_u_0 local_9158;
  FLinearColor_u_0 local_9148;
  TSharedRef<FSlateStyleSet,1> local_9138;
  FLinearColor_u_0 local_9128;
  FLinearColor_u_0 local_9118;
  FLinearColor_u_0 local_9108;
  FDeprecateVector2DParameter local_90f8;
  TObjectPtr<UObject>_u_0 TStack_90f0;
  FDeprecateVector2DParameter local_90e8;
  TObjectPtr<UObject>_u_0 TStack_90e0;
  FDeprecateVector2DParameter local_90d8;
  TObjectPtr<UObject>_u_0 TStack_90d0;
  void *local_90c8 [2];
  void *local_90b8 [2];
  void *local_90a8 [2];
  FLinearColor_u_0 local_9098;
  FDeprecateVector2DParameter local_9088;
  TObjectPtr<UObject>_u_0 TStack_9080;
  void *local_9078 [2];
  void *local_9068 [2];
  FDeprecateVector2DParameter local_9058;
  TObjectPtr<UObject>_u_0 TStack_9050;
  FDeprecateVector2DParameter local_9048;
  TObjectPtr<UObject>_u_0 TStack_9040;
  FDeprecateVector2DParameter local_9038;
  TObjectPtr<UObject>_u_0 TStack_9030;
  void *local_9028 [2];
  FLinearColor_u_0 local_9018;
  FLinearColor_u_0 local_9008;
  FLinearColor_u_0 local_8ff8;
  undefined **local_8fe8 [20];
  TReferenceControllerBase<1> *local_8f48;
  FTextBlockStyle local_8f38;
  undefined **local_8c58 [20];
  TReferenceControllerBase<1> *local_8bb8;
  undefined **local_8ba8 [20];
  TReferenceControllerBase<1> *local_8b08;
  undefined **local_8af8 [20];
  TReferenceControllerBase<1> *local_8a58;
  undefined **local_8a48 [20];
  TReferenceControllerBase<1> *local_89a8;
  undefined **local_8998 [20];
  TReferenceControllerBase<1> *local_88f8;
  FTextBlockStyle local_88e8;
  undefined1 local_8608 [208];
  undefined1 local_8538 [912];
  undefined1 local_81a8 [912];
  undefined **local_7e18 [20];
  TReferenceControllerBase<1> *local_7d78;
  undefined **local_7d68 [20];
  TReferenceControllerBase<1> *local_7cc8;
  undefined **local_7cb8 [20];
  TReferenceControllerBase<1> *local_7c18;
  undefined **local_7c08 [20];
  TReferenceControllerBase<1> *local_7b68;
  FTextBlockStyle local_7b58;
  FTextBlockStyle local_7878;
  FComboButtonStyle local_7598;
  FTextBlockStyle local_7038;
  FButtonStyle local_6d58;
  FButtonStyle local_69c8;
  FButtonStyle local_6638;
  FButtonStyle local_62a8;
  FButtonStyle local_5f18;
  FButtonStyle local_5b88;
  FButtonStyle local_57f8;
  FComboButtonStyle local_5468;
  FComboBoxStyle local_4f08;
  FCheckBoxStyle local_4948;
  FCheckBoxStyle local_3ff8;
  FComboButtonStyle local_36a8;
  FHyperlinkStyle local_3148;
  FHyperlinkStyle local_2ab8;
  FHyperlinkStyle local_2428;
  FHyperlinkStyle local_1d98;
  FHyperlinkStyle local_1708;
  FHyperlinkStyle local_1078;
  FCheckBoxStyle local_9e8;
  undefined8 uStack_48;
  
  uStack_48 = 0x142f9e2ef;
  FVar24.ComparisonIndex.Value = 0;
  FVar24.Number = 0;
  local_res8._s_0 = local_res8._s_0 & 0xffffffff00000000;
  this = ::operator_new(0x400);
  local_res10 = FVar24;
  if (this != (FSlateStyleSet *)0x0) {
    ::FName::FName((FName *)&local_res8._s_0,"TestStyle");
    local_res10 = (FName)FSlateStyleSet::FSlateStyleSet(this,(FName *)&local_res8._s_0);
  }
  TSharedRef<FSlateStyleSet,1>::TSharedRef<FSlateStyleSet,1><FSlateStyleSet>
            (&local_9138,(TRawPtrProxy<FSlateStyleSet> *)&local_res10);
  pcVar1 = *(code **)((local_9138.Object)->_padding_ + 0xc0);
  pTVar11 = &FPaths::EngineContentDir((FString *)local_93a8)->Data;
  TArray<wchar_t,TSizedDefaultAllocator<32>_>::TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>
            ((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)local_93d8,pTVar11,
             7 - (uint)(pTVar11->ArrayNum != 0));
  ::FString::PathAppend((FString *)local_93d8,L"Slate",5);
  (*pcVar1)(local_9138.Object,local_93d8);
  if (local_93d8 != (undefined1  [8])0x0) {
    FMemory::Free((void *)local_93d8);
  }
  if (local_93a8 != (undefined1  [8])0x0) {
    FMemory::Free((void *)local_93a8);
  }
  pFVar12 = FTextBlockStyle::FTextBlockStyle(&local_8f38);
  local_9398.OutlineSize = 0;
  local_9398.bMiteredCorners = false;
  local_9398.bSeparateFillAlpha = false;
  local_9398.OutlineColor.field0_0x0._s_0 = FLinearColor::Black.field0_0x0;
  local_9398.bApplyOutlineToDropShadows = false;
  local_9398.OutlineMaterial.field0_0x0.DebugPtr = (TObjectPtr<UObject>_u_0)0x0;
  pFVar13 = ::FName::FName((FName *)&local_res8._s_0,"Regular");
  pFVar14 = FCoreStyle::GetDefaultFontStyle
                      ((FSlateFontInfo *)local_9228,*pFVar13,__real_41100000,&local_9398);
  FSlateFontInfo::operator=(&pFVar12->Font,pFVar14);
  uVar6 = _UNK_15090c6d8;
  TVar5 = _UNK_15076b1f8;
  FVar4 = ___xmm_3f8000003f8000003f8000003f800000;
  *(void **)&(pFVar12->ColorAndOpacity).SpecifiedColor.field0_0x0 =
       ___xmm_3f8000003f800000000000003f800000;
  *(undefined8 *)((longlong)&(pFVar12->ColorAndOpacity).SpecifiedColor.field0_0x0 + 8) = uVar6;
  local_93f8 = CONCAT22(local_93f8._2_2_,2);
  uVar10 = local_93f8;
  local_93f8._0_1_ = (undefined1)2;
  local_93f8._1_1_ = (undefined1)(2 >> 8);
  (pFVar12->ColorAndOpacity).ColorUseRule = (undefined1)local_93f8;
  (pFVar12->ColorAndOpacity).ColorTableId = local_93f8._1_1_;
  *(undefined2 *)&(pFVar12->ColorAndOpacity).field_0x12 = local_93f8._2_2_;
  local_93f8 = uVar10 & 0xffffff00;
  fVar28 = (float)UE::Math::TVector2<double>::ZeroVector.field0_0x0._s_0.Y;
  *(float *)&pFVar12->ShadowOffset = (float)UE::Math::TVector2<double>::ZeroVector.field0_0x0._s_0.X
  ;
  *(float *)&(pFVar12->ShadowOffset).field_0x4 = fVar28;
  uVar9 = _UNK_150925298;
  uVar6 = ___xmm_3f800000000000003e99999a3ca3d70a;
  (pFVar12->ShadowColorAndOpacity).field0_0x0._s_0 =
       (FLinearColor_u_0_s_0)FLinearColor::Black.field0_0x0;
  _fStack_93a0 = _UNK_1509251a8;
  local_93a8 = (undefined1  [8])___xmm_3ec000003ec000003ec000003ec00000;
  *(undefined8 *)&(pFVar12->HighlightColor).SpecifiedColor.field0_0x0 = uVar6;
  *(undefined8 *)((longlong)&(pFVar12->HighlightColor).SpecifiedColor.field0_0x0 + 8) = uVar9;
  (pFVar12->HighlightColor).ColorUseRule = (undefined1)local_93f8;
  (pFVar12->HighlightColor).ColorTableId = local_93f8._1_1_;
  *(undefined2 *)&(pFVar12->HighlightColor).field_0x12 = local_93f8._2_2_;
  local_93d8 = (undefined1  [8])FVar4;
  _fStack_93d0 = TVar5;
  pFVar15 = (FString *)
            (**(code **)((local_9138.Object)->_padding_ + 0xf0))
                      (local_9138.Object,local_9348,"Common/TextBlockHighlightShape",L".png");
  pFVar16 = (FSlateBrush *)
            FSlateBoxBrush::FSlateBoxBrush
                      ((FSlateBoxBrush *)local_8fe8,pFVar15,(FMargin *)local_93a8,
                       (FLinearColor *)local_93d8,FullColor);
  FSlateBrush::operator=(&pFVar12->HighlightShape,pFVar16);
  FTextBlockStyle::FTextBlockStyle(&local_88e8,pFVar12);
  local_8fe8[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_8f48);
  if (local_9348 != (undefined1  [8])0x0) {
    FMemory::Free((void *)local_9348);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_9228._56_8_);
  FTextBlockStyle::~FTextBlockStyle(&local_8f38);
  pFVar17 = ::operator_new(0xb0);
  FVar18 = FVar24;
  if (pFVar17 != (FSlateImageBrush *)0x0) {
    local_93d8 = (undefined1  [8])FVar4;
    _fStack_93d0 = TVar5;
    local_res8 = (TVector2<float>_u_0)0x4220000042200000;
    pFVar15 = (FString *)
              (**(code **)((local_9138.Object)->_padding_ + 0xf0))
                        (local_9138.Object,local_93a8,"Testing/TestRotation",L".png");
    FVar18 = (FName)FSlateImageBrush::FSlateImageBrush
                              (pFVar17,pFVar15,(FDeprecateVector2DParameter *)&local_res8._s_0,
                               (FLinearColor *)local_93d8,NoTile,FullColor);
  }
  pFVar13 = ::FName::FName(&local_res10,"TestRotation40px");
  FSlateStyleSet::Set<FSlateImageBrush>(local_9138.Object,*pFVar13,(FSlateImageBrush *)FVar18);
  if ((pFVar17 != (FSlateImageBrush *)0x0) && (local_93a8 != (undefined1  [8])0x0)) {
    FMemory::Free((void *)local_93a8);
  }
  pFVar17 = ::operator_new(0xb0);
  FVar18 = FVar24;
  if (pFVar17 != (FSlateImageBrush *)0x0) {
    local_93d8 = (undefined1  [8])FVar4;
    _fStack_93d0 = TVar5;
    local_res8 = (TVector2<float>_u_0)0x41a0000041a00000;
    pFVar15 = (FString *)
              (**(code **)((local_9138.Object)->_padding_ + 0xf0))
                        (local_9138.Object,local_93a8,"Testing/TestRotation",L".png");
    FVar18 = (FName)FSlateImageBrush::FSlateImageBrush
                              (pFVar17,pFVar15,(FDeprecateVector2DParameter *)&local_res8._s_0,
                               (FLinearColor *)local_93d8,NoTile,FullColor);
  }
  pFVar13 = ::FName::FName(&local_res10,"TestRotation20px");
  FSlateStyleSet::Set<FSlateImageBrush>(local_9138.Object,*pFVar13,(FSlateImageBrush *)FVar18);
  if ((pFVar17 != (FSlateImageBrush *)0x0) && (local_93a8 != (undefined1  [8])0x0)) {
    FMemory::Free((void *)local_93a8);
  }
  pFVar17 = ::operator_new(0xb0);
  fVar28 = __real_41800000;
  FVar18 = FVar24;
  if (pFVar17 != (FSlateImageBrush *)0x0) {
    local_93d8 = (undefined1  [8])FVar4;
    _fStack_93d0 = TVar5;
    local_res8 = (TVector2<float>_u_0)0x4180000041800000;
    pFVar15 = (FString *)
              (**(code **)((local_9138.Object)->_padding_ + 0xf0))
                        (local_9138.Object,local_93a8,"Testing/TestRotation",L".png");
    FVar18 = (FName)FSlateImageBrush::FSlateImageBrush
                              (pFVar17,pFVar15,(FDeprecateVector2DParameter *)&local_res8._s_0,
                               (FLinearColor *)local_93d8,NoTile,FullColor);
  }
  pFVar13 = ::FName::FName(&local_res10,"TestRotation16px");
  FSlateStyleSet::Set<FSlateImageBrush>(local_9138.Object,*pFVar13,(FSlateImageBrush *)FVar18);
  if ((pFVar17 != (FSlateImageBrush *)0x0) && (local_93a8 != (undefined1  [8])0x0)) {
    FMemory::Free((void *)local_93a8);
  }
  pFVar17 = ::operator_new(0xb0);
  FVar18 = FVar24;
  if (pFVar17 != (FSlateImageBrush *)0x0) {
    local_93d8 = (undefined1  [8])FVar4;
    _fStack_93d0 = TVar5;
    local_res8 = (TVector2<float>_u_0)0x4300000043800000;
    pFVar15 = (FString *)
              (**(code **)((local_9138.Object)->_padding_ + 0xf0))
                        (local_9138.Object,local_93a8,"Testing/GammaReference",L".png");
    FVar18 = (FName)FSlateImageBrush::FSlateImageBrush
                              (pFVar17,pFVar15,(FDeprecateVector2DParameter *)&local_res8._s_0,
                               (FLinearColor *)local_93d8,NoTile,FullColor);
  }
  pFVar13 = ::FName::FName(&local_res10,"GammaReference");
  FSlateStyleSet::Set<FSlateImageBrush>(local_9138.Object,*pFVar13,(FSlateImageBrush *)FVar18);
  if ((pFVar17 != (FSlateImageBrush *)0x0) && (local_93a8 != (undefined1  [8])0x0)) {
    FMemory::Free((void *)local_93a8);
  }
  this_00 = (FName)::operator_new(0xb0);
  FVar18 = FVar24;
  if (this_00 != (FName)0x0) {
    local_93d8 = (undefined1  [8])FVar4;
    _fStack_93d0 = TVar5;
    local_res8 = (TVector2<float>_u_0)0x4248000042480000;
    pFVar15 = (FString *)
              (**(code **)((local_9138.Object)->_padding_ + 0xf0))
                        (local_9138.Object,local_93a8,"Starship/Common/unreal",L".svg");
    FSlateImageBrush::FSlateImageBrush
              ((FSlateImageBrush *)this_00,pFVar15,(FDeprecateVector2DParameter *)&local_res8._s_0,
               (FLinearColor *)local_93d8,NoTile,Vector);
    *(undefined ***)this_00 = &___7FSlateVectorImageBrush__6B_;
    FVar18 = this_00;
  }
  pFVar13 = ::FName::FName(&local_res10,"UEIcon");
  FSlateStyleSet::Set<FSlateVectorImageBrush>
            (local_9138.Object,*pFVar13,(FSlateVectorImageBrush *)FVar18);
  if ((this_00 != (FName)0x0) && (local_93a8 != (undefined1  [8])0x0)) {
    FMemory::Free((void *)local_93a8);
  }
  pFVar17 = ::operator_new(0xb0);
  FVar18 = FVar24;
  if (pFVar17 != (FSlateImageBrush *)0x0) {
    local_93d8 = (undefined1  [8])FVar4;
    _fStack_93d0 = TVar5;
    local_res8 = (TVector2<float>_u_0)0x4380000043800000;
    pFVar15 = (FString *)
              (**(code **)((local_9138.Object)->_padding_ + 0xf0))
                        (local_9138.Object,local_93a8,"Testing/NewLevelBlank",L".png");
    FVar18 = (FName)FSlateImageBrush::FSlateImageBrush
                              (pFVar17,pFVar15,(FDeprecateVector2DParameter *)&local_res8._s_0,
                               (FLinearColor *)local_93d8,NoTile,FullColor);
  }
  pFVar13 = ::FName::FName(&local_res10,"NewLevelBlank");
  FSlateStyleSet::Set<FSlateImageBrush>(local_9138.Object,*pFVar13,(FSlateImageBrush *)FVar18);
  if ((pFVar17 != (FSlateImageBrush *)0x0) && (local_93a8 != (undefined1  [8])0x0)) {
    FMemory::Free((void *)local_93a8);
  }
  pFVar19 = ::operator_new(0xb0);
  FVar18 = FVar24;
  if (pFVar19 != (FSlateBoxBrush *)0x0) {
    local_93d8 = (undefined1  [8])FVar4;
    _fStack_93d0 = TVar5;
    local_res8 = (TVector2<float>_u_0)0x3f8000003f800000;
    pFVar15 = (FString *)
              (**(code **)((local_9138.Object)->_padding_ + 0xf0))
                        (local_9138.Object,local_93a8,"Testing/FlatColorSquare",L".png");
    FVar18 = (FName)FSlateBoxBrush::FSlateBoxBrush
                              (pFVar19,pFVar15,(FDeprecateVector2DParameter *)&local_res8._s_0,
                               (FMargin *)local_93d8,&FLinearColor::White,FullColor);
  }
  pFVar13 = ::FName::FName(&local_res10,"White");
  FSlateStyleSet::Set<FSlateBoxBrush>(local_9138.Object,*pFVar13,(FSlateBoxBrush *)FVar18);
  if ((pFVar19 != (FSlateBoxBrush *)0x0) && (local_93a8 != (undefined1  [8])0x0)) {
    FMemory::Free((void *)local_93a8);
  }
  cVar27 = '\0';
  pFVar19 = ::operator_new(0xb0);
  FVar18 = FVar24;
  if (pFVar19 != (FSlateBoxBrush *)0x0) {
    local_93d8 = (undefined1  [8])FVar4;
    _fStack_93d0 = TVar5;
    local_res8 = (TVector2<float>_u_0)0x3f8000003f800000;
    cVar27 = -0x80;
    pFVar15 = (FString *)
              (**(code **)((local_9138.Object)->_padding_ + 0xf0))
                        (local_9138.Object,local_93a8,"Testing/FlatColorSquare",L".png");
    FVar18 = (FName)FSlateBoxBrush::FSlateBoxBrush
                              (pFVar19,pFVar15,(FDeprecateVector2DParameter *)&local_res8._s_0,
                               (FMargin *)local_93d8,&FLinearColor::Gray,FullColor);
  }
  pFVar13 = ::FName::FName(&local_res10,"Gray");
  FSlateStyleSet::Set<FSlateBoxBrush>(local_9138.Object,*pFVar13,(FSlateBoxBrush *)FVar18);
  if ((cVar27 < '\0') && (local_93a8 != (undefined1  [8])0x0)) {
    FMemory::Free((void *)local_93a8);
  }
  pFVar19 = ::operator_new(0xb0);
  FVar18 = FVar24;
  if (pFVar19 != (FSlateBoxBrush *)0x0) {
    local_93d8 = (undefined1  [8])FVar4;
    _fStack_93d0 = TVar5;
    local_res8 = (TVector2<float>_u_0)0x3f8000003f800000;
    pFVar15 = (FString *)
              (**(code **)((local_9138.Object)->_padding_ + 0xf0))
                        (local_9138.Object,local_93a8,"Testing/FlatColorSquare",L".png");
    FVar18 = (FName)FSlateBoxBrush::FSlateBoxBrush
                              (pFVar19,pFVar15,(FDeprecateVector2DParameter *)&local_res8._s_0,
                               (FMargin *)local_93d8,&FLinearColor::Black,FullColor);
  }
  pFVar13 = ::FName::FName(&local_res10,"Black");
  FSlateStyleSet::Set<FSlateBoxBrush>(local_9138.Object,*pFVar13,(FSlateBoxBrush *)FVar18);
  if ((pFVar19 != (FSlateBoxBrush *)0x0) && (local_93a8 != (undefined1  [8])0x0)) {
    FMemory::Free((void *)local_93a8);
  }
  pFVar17 = ::operator_new(0xb0);
  FVar18 = FVar24;
  if (pFVar17 != (FSlateImageBrush *)0x0) {
    local_93d8 = (undefined1  [8])FVar4;
    _fStack_93d0 = TVar5;
    local_res8 = (TVector2<float>_u_0)0x4180000041800000;
    pFVar15 = (FString *)
              (**(code **)((local_9138.Object)->_padding_ + 0xf0))
                        (local_9138.Object,local_93a8,"Testing/BrushWireframe",L".png");
    FVar18 = (FName)FSlateImageBrush::FSlateImageBrush
                              (pFVar17,pFVar15,(FDeprecateVector2DParameter *)&local_res8._s_0,
                               (FLinearColor *)local_93d8,NoTile,FullColor);
  }
  pFVar13 = ::FName::FName(&local_res10,"MultiBoxTest.FirstCommandInfo");
  FSlateStyleSet::Set<FSlateImageBrush>(local_9138.Object,*pFVar13,(FSlateImageBrush *)FVar18);
  if ((pFVar17 != (FSlateImageBrush *)0x0) && (local_93a8 != (undefined1  [8])0x0)) {
    FMemory::Free((void *)local_93a8);
  }
  pFVar17 = ::operator_new(0xb0);
  FVar18 = FVar24;
  if (pFVar17 != (FSlateImageBrush *)0x0) {
    local_93d8 = (undefined1  [8])FVar4;
    _fStack_93d0 = TVar5;
    local_res8 = (TVector2<float>_u_0)0x4180000041800000;
    pFVar15 = (FString *)
              (**(code **)((local_9138.Object)->_padding_ + 0xf0))
                        (local_9138.Object,local_93a8,"Testing/Wireframe",L".png");
    FVar18 = (FName)FSlateImageBrush::FSlateImageBrush
                              (pFVar17,pFVar15,(FDeprecateVector2DParameter *)&local_res8._s_0,
                               (FLinearColor *)local_93d8,NoTile,FullColor);
  }
  pFVar13 = ::FName::FName(&local_res10,"MultiBoxTest.SecondCommandInfo");
  FSlateStyleSet::Set<FSlateImageBrush>(local_9138.Object,*pFVar13,(FSlateImageBrush *)FVar18);
  if ((pFVar17 != (FSlateImageBrush *)0x0) && (local_93a8 != (undefined1  [8])0x0)) {
    FMemory::Free((void *)local_93a8);
  }
  pFVar17 = ::operator_new(0xb0);
  FVar18 = FVar24;
  if (pFVar17 != (FSlateImageBrush *)0x0) {
    local_93d8 = (undefined1  [8])FVar4;
    _fStack_93d0 = TVar5;
    local_res8 = (TVector2<float>_u_0)0x4180000041800000;
    pFVar15 = (FString *)
              (**(code **)((local_9138.Object)->_padding_ + 0xf0))
                        (local_9138.Object,local_93a8,"Testing/Unlit",L".png");
    FVar18 = (FName)FSlateImageBrush::FSlateImageBrush
                              (pFVar17,pFVar15,(FDeprecateVector2DParameter *)&local_res8._s_0,
                               (FLinearColor *)local_93d8,NoTile,FullColor);
  }
  pFVar13 = ::FName::FName(&local_res10,"MultiBoxTest.ThirdCommandInfo");
  FSlateStyleSet::Set<FSlateImageBrush>(local_9138.Object,*pFVar13,(FSlateImageBrush *)FVar18);
  if ((pFVar17 != (FSlateImageBrush *)0x0) && (local_93a8 != (undefined1  [8])0x0)) {
    FMemory::Free((void *)local_93a8);
  }
  pFVar17 = ::operator_new(0xb0);
  FVar18 = FVar24;
  if (pFVar17 != (FSlateImageBrush *)0x0) {
    local_93d8 = (undefined1  [8])FVar4;
    _fStack_93d0 = TVar5;
    local_res8 = (TVector2<float>_u_0)0x4180000041800000;
    pFVar15 = (FString *)
              (**(code **)((local_9138.Object)->_padding_ + 0xf0))
                        (local_9138.Object,local_93a8,"Testing/Lit",L".png");
    FVar18 = (FName)FSlateImageBrush::FSlateImageBrush
                              (pFVar17,pFVar15,(FDeprecateVector2DParameter *)&local_res8._s_0,
                               (FLinearColor *)local_93d8,NoTile,FullColor);
  }
  pFVar13 = ::FName::FName(&local_res10,"MultiBoxTest.FourthCommandInfo");
  FSlateStyleSet::Set<FSlateImageBrush>(local_9138.Object,*pFVar13,(FSlateImageBrush *)FVar18);
  if ((pFVar17 != (FSlateImageBrush *)0x0) && (local_93a8 != (undefined1  [8])0x0)) {
    FMemory::Free((void *)local_93a8);
  }
  pFVar19 = ::operator_new(0xb0);
  FVar18 = FVar24;
  if (pFVar19 != (FSlateBoxBrush *)0x0) {
    local_93d8._4_4_ = FLinearColor::sRGBToLinearTable[0xf3];
    local_93d8._0_4_ = FLinearColor::sRGBToLinearTable[0xef];
    local_93a8 = (undefined1  [8])0x0;
    fStack_93a0 = 0.0;
    fStack_939c = 0.0;
    iStack_93cc = 0x3f800000;
    fStack_93d0 = FLinearColor::sRGBToLinearTable[0xf3];
    local_res8 = (TVector2<float>_u_0)0x3f8000003f800000;
    pFVar15 = (FString *)
              (**(code **)((local_9138.Object)->_padding_ + 0xf0))
                        (local_9138.Object,local_9348,"Testing/FlatColorSquare",L".png");
    FVar18 = (FName)FSlateBoxBrush::FSlateBoxBrush
                              (pFVar19,pFVar15,(FDeprecateVector2DParameter *)&local_res8._s_0,
                               (FMargin *)local_93a8,(FLinearColor *)local_93d8,FullColor);
  }
  pFVar13 = ::FName::FName(&local_res10,"RichText.Background");
  FSlateStyleSet::Set<FSlateBoxBrush>(local_9138.Object,*pFVar13,(FSlateBoxBrush *)FVar18);
  if ((pFVar19 != (FSlateBoxBrush *)0x0) && (local_9348 != (undefined1  [8])0x0)) {
    FMemory::Free((void *)local_9348);
  }
  pFVar19 = ::operator_new(0xb0);
  FVar18 = FVar24;
  if (pFVar19 != (FSlateBoxBrush *)0x0) {
    local_93a8 = (undefined1  [8])___xmm_3e8000003e8000003e8000003e800000;
    fStack_93a0 = _UNK_15076b0c8;
    fStack_939c = _UNK_15076b0cc;
    local_93d8._4_4_ = FLinearColor::sRGBToLinearTable[0xf3];
    local_93d8._0_4_ = FLinearColor::sRGBToLinearTable[0xef];
    iStack_93cc = 0x3f800000;
    fStack_93d0 = FLinearColor::sRGBToLinearTable[0xf3];
    pFVar15 = (FString *)
              (**(code **)((local_9138.Object)->_padding_ + 0xf0))
                        (local_9138.Object,local_9348,"Common/RoundedSelection_16x",L".png");
    FVar18 = (FName)FSlateBoxBrush::FSlateBoxBrush
                              (pFVar19,pFVar15,(FMargin *)local_93a8,(FLinearColor *)local_93d8,
                               FullColor);
  }
  pFVar13 = ::FName::FName((FName *)&local_res8._s_0,"RichText.RoundedBackground");
  FSlateStyleSet::Set<FSlateBoxBrush>(local_9138.Object,*pFVar13,(FSlateBoxBrush *)FVar18);
  if ((pFVar19 != (FSlateBoxBrush *)0x0) && (local_9348 != (undefined1  [8])0x0)) {
    FMemory::Free((void *)local_9348);
  }
  pFVar12 = FTextBlockStyle::FTextBlockStyle(&local_8f38,&local_88e8);
  local_9398.OutlineSize = 0;
  local_9398.bMiteredCorners = false;
  local_9398.bSeparateFillAlpha = false;
  local_9398.OutlineColor.field0_0x0._s_0 = FLinearColor::Black.field0_0x0;
  local_9398.bApplyOutlineToDropShadows = false;
  local_9398.OutlineMaterial.field0_0x0.DebugPtr = (TObjectPtr<UObject>_u_0)0x0;
  pFVar13 = ::FName::FName((FName *)&local_res8._s_0,"Regular");
  fVar3 = __real_41600000;
  pFVar14 = FCoreStyle::GetDefaultFontStyle
                      ((FSlateFontInfo *)local_9228,*pFVar13,__real_41600000,&local_9398);
  FSlateFontInfo::operator=(&pFVar12->Font,pFVar14);
  fStack_9400 = FLinearColor::sRGBToLinearTable[0x50];
  fStack_9404 = FLinearColor::sRGBToLinearTable[0x3e];
  local_9408 = FLinearColor::sRGBToLinearTable[0x2c];
  local_93f8 = local_93f8 & 0xffffff00;
  (pFVar12->ColorAndOpacity).SpecifiedColor.field0_0x0._s_0.R =
       FLinearColor::sRGBToLinearTable[0x2c];
  (pFVar12->ColorAndOpacity).SpecifiedColor.field0_0x0._s_0.G = fStack_9404;
  (pFVar12->ColorAndOpacity).SpecifiedColor.field0_0x0._s_0.B = fStack_9400;
  (pFVar12->ColorAndOpacity).SpecifiedColor.field0_0x0._s_0.A = 1.0;
  (pFVar12->ColorAndOpacity).ColorUseRule = (undefined1)local_93f8;
  (pFVar12->ColorAndOpacity).ColorTableId = local_93f8._1_1_;
  *(undefined2 *)&(pFVar12->ColorAndOpacity).field_0x12 = local_93f8._2_2_;
  uStack_93fc = 0x3f800000;
  FTextBlockStyle::FTextBlockStyle(&local_7b58,pFVar12);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_9228._56_8_);
  FTextBlockStyle::~FTextBlockStyle(&local_8f38);
  pFVar13 = ::FName::FName((FName *)&local_res8._s_0,"RichText.Text");
  FSlateStyleSet::Set<FTextBlockStyle>(local_9138.Object,*pFVar13,&local_7b58);
  pFVar12 = FTextBlockStyle::FTextBlockStyle(&local_8f38,&local_7b58);
  fStack_9404 = FLinearColor::sRGBToLinearTable[0xbc];
  fStack_9400 = FLinearColor::sRGBToLinearTable[0x9c];
  local_9408 = FLinearColor::sRGBToLinearTable[0x19];
  local_93f8 = local_93f8 & 0xffffff00;
  (pFVar12->ColorAndOpacity).SpecifiedColor.field0_0x0._s_0.R =
       FLinearColor::sRGBToLinearTable[0x19];
  (pFVar12->ColorAndOpacity).SpecifiedColor.field0_0x0._s_0.G = fStack_9404;
  (pFVar12->ColorAndOpacity).SpecifiedColor.field0_0x0._s_0.B = fStack_9400;
  (pFVar12->ColorAndOpacity).SpecifiedColor.field0_0x0._s_0.A = 1.0;
  (pFVar12->ColorAndOpacity).ColorUseRule = (undefined1)local_93f8;
  (pFVar12->ColorAndOpacity).ColorTableId = local_93f8._1_1_;
  *(undefined2 *)&(pFVar12->ColorAndOpacity).field_0x12 = local_93f8._2_2_;
  uStack_93fc = 0x3f800000;
  pFVar13 = ::FName::FName((FName *)&local_res8._s_0,"RichText.TextHighlight");
  FSlateStyleSet::Set<FTextBlockStyle>(local_9138.Object,*pFVar13,pFVar12);
  FTextBlockStyle::~FTextBlockStyle(&local_8f38);
  pFVar12 = FTextBlockStyle::FTextBlockStyle(&local_8f38,&local_7b58);
  local_9398.OutlineSize = 0;
  local_9398.bMiteredCorners = false;
  local_9398.bSeparateFillAlpha = false;
  local_9398.OutlineColor.field0_0x0._s_0 = FLinearColor::Black.field0_0x0;
  local_9398.bApplyOutlineToDropShadows = false;
  local_9398.OutlineMaterial.field0_0x0.DebugPtr = (TObjectPtr<UObject>_u_0)0x0;
  pFVar13 = ::FName::FName((FName *)&local_res8._s_0,"BlackItalic");
  pFVar14 = FCoreStyle::GetDefaultFontStyle((FSlateFontInfo *)local_9228,*pFVar13,fVar3,&local_9398)
  ;
  FSlateFontInfo::operator=(&pFVar12->Font,pFVar14);
  fStack_9404 = FLinearColor::sRGBToLinearTable[0xbc];
  fStack_9400 = FLinearColor::sRGBToLinearTable[0x9c];
  local_9408 = FLinearColor::sRGBToLinearTable[0x19];
  local_93f8 = local_93f8 & 0xffffff00;
  (pFVar12->ColorAndOpacity).SpecifiedColor.field0_0x0._s_0.R =
       FLinearColor::sRGBToLinearTable[0x19];
  (pFVar12->ColorAndOpacity).SpecifiedColor.field0_0x0._s_0.G = fStack_9404;
  (pFVar12->ColorAndOpacity).SpecifiedColor.field0_0x0._s_0.B = fStack_9400;
  (pFVar12->ColorAndOpacity).SpecifiedColor.field0_0x0._s_0.A = 1.0;
  (pFVar12->ColorAndOpacity).ColorUseRule = (undefined1)local_93f8;
  (pFVar12->ColorAndOpacity).ColorTableId = local_93f8._1_1_;
  *(undefined2 *)&(pFVar12->ColorAndOpacity).field_0x12 = local_93f8._2_2_;
  uStack_93fc = 0x3f800000;
  pFVar13 = ::FName::FName(&local_res10,"RichText.Text.Fancy");
  FSlateStyleSet::Set<FTextBlockStyle>(local_9138.Object,*pFVar13,pFVar12);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_9228._56_8_);
  FTextBlockStyle::~FTextBlockStyle(&local_8f38);
  pFVar12 = FTextBlockStyle::FTextBlockStyle(&local_8f38,&local_88e8);
  local_9398.OutlineSize = 0;
  local_9398.bMiteredCorners = false;
  local_9398.bSeparateFillAlpha = false;
  local_9398.OutlineColor.field0_0x0._s_0 = FLinearColor::Black.field0_0x0;
  local_9398.bApplyOutlineToDropShadows = false;
  local_9398.OutlineMaterial.field0_0x0.DebugPtr = (TObjectPtr<UObject>_u_0)0x0;
  pFVar13 = ::FName::FName((FName *)&local_res8._s_0,"Bold");
  pFVar14 = FCoreStyle::GetDefaultFontStyle
                      ((FSlateFontInfo *)local_9228,*pFVar13,__real_41a00000,&local_9398);
  FSlateFontInfo::operator=(&pFVar12->Font,pFVar14);
  fStack_9400 = FLinearColor::sRGBToLinearTable[0x50];
  fStack_9404 = FLinearColor::sRGBToLinearTable[0x3e];
  local_9408 = FLinearColor::sRGBToLinearTable[0x2c];
  local_93f8 = local_93f8 & 0xffffff00;
  (pFVar12->ColorAndOpacity).SpecifiedColor.field0_0x0._s_0.R =
       FLinearColor::sRGBToLinearTable[0x2c];
  (pFVar12->ColorAndOpacity).SpecifiedColor.field0_0x0._s_0.G = fStack_9404;
  (pFVar12->ColorAndOpacity).SpecifiedColor.field0_0x0._s_0.B = fStack_9400;
  (pFVar12->ColorAndOpacity).SpecifiedColor.field0_0x0._s_0.A = 1.0;
  (pFVar12->ColorAndOpacity).ColorUseRule = (undefined1)local_93f8;
  (pFVar12->ColorAndOpacity).ColorTableId = local_93f8._1_1_;
  *(undefined2 *)&(pFVar12->ColorAndOpacity).field_0x12 = local_93f8._2_2_;
  uStack_93fc = 0x3f800000;
  pFVar13 = ::FName::FName(&local_res10,"RichText.Header");
  FSlateStyleSet::Set<FTextBlockStyle>(local_9138.Object,*pFVar13,pFVar12);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_9228._56_8_);
  FTextBlockStyle::~FTextBlockStyle(&local_8f38);
  pFVar20 = FButtonStyle::FButtonStyle(&local_6d58);
  TVar8 = _UNK_150925128;
  FVar7 = ___xmm_3e400000000000000000000000000000;
  local_93d8._4_4_ = FLinearColor::sRGBToLinearTable[0x3e];
  local_93d8._0_4_ = FLinearColor::sRGBToLinearTable[0x2c];
  iStack_93cc = 0x3f800000;
  fStack_93d0 = FLinearColor::sRGBToLinearTable[0x50];
  local_9348 = (undefined1  [8])___xmm_3e400000000000000000000000000000;
  _fStack_9340 = _UNK_150925128;
  pFVar15 = (FString *)
            (**(code **)((local_9138.Object)->_padding_ + 0xf0))
                      (local_9138.Object,local_9178,"Old/HyperlinkDotted",L".png");
  pFVar16 = (FSlateBrush *)
            FSlateBorderBrush::FSlateBorderBrush
                      ((FSlateBorderBrush *)local_8538,pFVar15,(FMargin *)local_9348,
                       (FLinearColor *)local_93d8,FullColor);
  FSlateBrush::operator=(&pFVar20->Normal,pFVar16);
  local_res8 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  pFVar16 = (FSlateBrush *)
            FSlateNoResource::FSlateNoResource
                      ((FSlateNoResource *)local_9228,
                       (FDeprecateVector2DParameter *)&local_res8._s_0);
  FSlateBrush::operator=(&pFVar20->Pressed,pFVar16);
  local_93a8._4_4_ = FLinearColor::sRGBToLinearTable[0x3e];
  local_93a8._0_4_ = FLinearColor::sRGBToLinearTable[0x2c];
  fStack_939c = 1.0;
  fStack_93a0 = FLinearColor::sRGBToLinearTable[0x50];
  local_9338 = FVar7;
  uStack_9330 = TVar8;
  pFVar15 = (FString *)
            (**(code **)((local_9138.Object)->_padding_ + 0xf0))
                      (local_9138.Object,local_9378,"Old/HyperlinkUnderline",L".png");
  pFVar16 = (FSlateBrush *)
            FSlateBorderBrush::FSlateBorderBrush
                      ((FSlateBorderBrush *)local_8fe8,pFVar15,(FMargin *)&local_9338,
                       (FLinearColor *)local_93a8,FullColor);
  FSlateBrush::operator=(&pFVar20->Hovered,pFVar16);
  FButtonStyle::FButtonStyle(&local_5f18,pFVar20);
  local_8fe8[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_8f48);
  if (local_9378 != (undefined1  [8])0x0) {
    FMemory::Free((void *)local_9378);
  }
  local_9228._0_8_ = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_9188);
  local_8538._0_8_ = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_8538._160_8_);
  if ((void *)CONCAT44(local_9178[0]._4_4_,local_9178[0]._0_4_) != (void *)0x0) {
    FMemory::Free((void *)CONCAT44(local_9178[0]._4_4_,local_9178[0]._0_4_));
  }
  FButtonStyle::~FButtonStyle(&local_6d58);
  pFVar21 = FHyperlinkStyle::FHyperlinkStyle(&local_1708);
  FButtonStyle::operator=(&pFVar21->UnderlineStyle,&local_5f18);
  pFVar21 = FHyperlinkStyle::SetTextStyle(pFVar21,&local_7b58);
  (pFVar21->Padding).Left = 0.0;
  (pFVar21->Padding).Top = 0.0;
  (pFVar21->Padding).Right = 0.0;
  (pFVar21->Padding).Bottom = 0.0;
  FHyperlinkStyle::FHyperlinkStyle(&local_1d98,pFVar21);
  FHyperlinkStyle::~FHyperlinkStyle(&local_1708);
  pFVar13 = ::FName::FName((FName *)&local_res8._s_0,"RichText.Hyperlink");
  FSlateStyleSet::Set<FHyperlinkStyle>(local_9138.Object,*pFVar13,&local_1d98);
  pFVar22 = FInlineTextImageStyle::FInlineTextImageStyle((FInlineTextImageStyle *)local_8608);
  local_9378 = (undefined1  [8])FVar4;
  _fStack_9370 = TVar5;
  local_res8 = (TVector2<float>_u_0)0x4180000041800000;
  pFVar15 = (FString *)
            (**(code **)((local_9138.Object)->_padding_ + 0xf0))
                      (local_9138.Object,local_9368,"Testing/DefaultPawn_16px",L".png");
  pFVar16 = (FSlateBrush *)
            FSlateImageBrush::FSlateImageBrush
                      ((FSlateImageBrush *)local_8538,pFVar15,
                       (FDeprecateVector2DParameter *)&local_res8._s_0,(FLinearColor *)local_9378,
                       NoTile,FullColor);
  FSlateBrush::operator=(&pFVar22->Image,pFVar16);
  pFVar22->Baseline = 0;
  pFVar13 = ::FName::FName(&local_res10,"RichText.ImageDecorator");
  FSlateStyleSet::Set<FInlineTextImageStyle>(local_9138.Object,*pFVar13,pFVar22);
  local_8538._0_8_ = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_8538._160_8_);
  if (local_9368 != (undefined1  [8])0x0) {
    FMemory::Free((void *)local_9368);
  }
  FInlineTextImageStyle::~FInlineTextImageStyle((FInlineTextImageStyle *)local_8608);
  pFVar19 = ::operator_new(0xb0);
  FVar18 = FVar24;
  if (pFVar19 != (FSlateBoxBrush *)0x0) {
    local_9378._4_4_ = FLinearColor::sRGBToLinearTable[0xe4];
    local_9378._0_4_ = FLinearColor::sRGBToLinearTable[0xdb];
    iStack_936c = 0x3f800000;
    fStack_9370 = FLinearColor::sRGBToLinearTable[0xe4];
    local_9368 = (undefined1  [8])FVar4;
    _fStack_9360 = TVar5;
    local_res8 = (TVector2<float>_u_0)0x3f8000003f800000;
    pFVar15 = (FString *)
              (**(code **)((local_9138.Object)->_padding_ + 0xf0))
                        (local_9138.Object,local_9358,"Testing/FlatColorSquare",L".png");
    FVar18 = (FName)FSlateBoxBrush::FSlateBoxBrush
                              (pFVar19,pFVar15,(FDeprecateVector2DParameter *)&local_res8._s_0,
                               (FMargin *)local_9368,(FLinearColor *)local_9378,FullColor);
  }
  pFVar13 = ::FName::FName(&local_res10,"RichText.Tagline.Background");
  FSlateStyleSet::Set<FSlateBoxBrush>(local_9138.Object,*pFVar13,(FSlateBoxBrush *)FVar18);
  if ((pFVar19 != (FSlateBoxBrush *)0x0) &&
     ((FDeprecateVector2DParameter)local_9358._0_8_ != (FDeprecateVector2DParameter)0x0)) {
    FMemory::Free((void *)local_9358._0_8_);
  }
  pFVar19 = ::operator_new(0xb0);
  FVar18 = FVar24;
  if (pFVar19 != (FSlateBoxBrush *)0x0) {
    local_9378 = (undefined1  [8])___xmm_3f8000003f1b00bd3f1b00bd3f0de204;
    fStack_9370 = (float)_UNK_150a1c8a8;
    iStack_936c = _UNK_150a1c8ac;
    local_9368 = (undefined1  [8])FVar4;
    _fStack_9360 = TVar5;
    local_res8 = (TVector2<float>_u_0)0x3f8000003f800000;
    pFVar15 = (FString *)
              (**(code **)((local_9138.Object)->_padding_ + 0xf0))
                        (local_9138.Object,local_9358,"Testing/FlatColorSquare",L".png");
    FVar18 = (FName)FSlateBoxBrush::FSlateBoxBrush
                              (pFVar19,pFVar15,(FDeprecateVector2DParameter *)&local_res8._s_0,
                               (FMargin *)local_9368,(FLinearColor *)local_9378,FullColor);
  }
  pFVar13 = ::FName::FName(&local_res10,"RichText.Tagline.DarkBackground");
  FSlateStyleSet::Set<FSlateBoxBrush>(local_9138.Object,*pFVar13,(FSlateBoxBrush *)FVar18);
  if ((pFVar19 != (FSlateBoxBrush *)0x0) &&
     ((FDeprecateVector2DParameter)local_9358._0_8_ != (FDeprecateVector2DParameter)0x0)) {
    FMemory::Free((void *)local_9358._0_8_);
  }
  pFVar12 = FTextBlockStyle::FTextBlockStyle(&local_8f38,&local_88e8);
  local_93c8.OutlineColor.field0_0x0._s_0 = FLinearColor::Black.field0_0x0;
  local_93c8._0_8_ = (ulonglong)(byte)local_93c8._padding_ << 0x38;
  local_93c8.OutlineMaterial.field0_0x0.DebugPtr = (TObjectPtr<UObject>_u_0)0x0;
  pFVar13 = ::FName::FName((FName *)&local_res8._s_0,"Bold");
  fVar3 = __real_41c00000;
  pFVar14 = FCoreStyle::GetDefaultFontStyle
                      ((FSlateFontInfo *)local_9228,*pFVar13,__real_41c00000,&local_93c8);
  FSlateFontInfo::operator=(&pFVar12->Font,pFVar14);
  fStack_93e8 = FLinearColor::sRGBToLinearTable[0x50];
  local_93f0._4_4_ = FLinearColor::sRGBToLinearTable[0x3e];
  local_93f0._0_4_ = FLinearColor::sRGBToLinearTable[0x2c];
  local_93e0 = local_93e0 & 0xffffff00;
  (pFVar12->ColorAndOpacity).SpecifiedColor.field0_0x0._s_0.R =
       FLinearColor::sRGBToLinearTable[0x2c];
  (pFVar12->ColorAndOpacity).SpecifiedColor.field0_0x0._s_0.G = (float)local_93f0._4_4_;
  (pFVar12->ColorAndOpacity).SpecifiedColor.field0_0x0._s_0.B = fStack_93e8;
  (pFVar12->ColorAndOpacity).SpecifiedColor.field0_0x0._s_0.A = 1.0;
  (pFVar12->ColorAndOpacity).ColorUseRule = (undefined1)local_93e0;
  (pFVar12->ColorAndOpacity).ColorTableId = local_93e0._1_1_;
  *(undefined2 *)&(pFVar12->ColorAndOpacity).field_0x12 = local_93e0._2_2_;
  uStack_93e4 = 0x3f800000;
  pFVar13 = ::FName::FName(&local_res10,"RichText.Tagline.Text");
  FSlateStyleSet::Set<FTextBlockStyle>(local_9138.Object,*pFVar13,pFVar12);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_9228._56_8_);
  FTextBlockStyle::~FTextBlockStyle(&local_8f38);
  pFVar12 = FTextBlockStyle::FTextBlockStyle(&local_8f38,&local_88e8);
  local_93c8.OutlineColor.field0_0x0._s_0 = FLinearColor::Black.field0_0x0;
  local_93c8._0_8_ = local_93c8._0_8_ & 0xff00000000000000;
  local_93c8.OutlineMaterial.field0_0x0.DebugPtr = (TObjectPtr<UObject>_u_0)0x0;
  pFVar13 = ::FName::FName((FName *)&local_res8._s_0,"Bold");
  pFVar14 = FCoreStyle::GetDefaultFontStyle((FSlateFontInfo *)local_9228,*pFVar13,fVar3,&local_93c8)
  ;
  FSlateFontInfo::operator=(&pFVar12->Font,pFVar14);
  local_93f0._4_4_ = FLinearColor::sRGBToLinearTable[0xbc];
  fStack_93e8 = FLinearColor::sRGBToLinearTable[0x9c];
  local_93f0._0_4_ = FLinearColor::sRGBToLinearTable[0x19];
  local_93e0 = local_93e0 & 0xffffff00;
  (pFVar12->ColorAndOpacity).SpecifiedColor.field0_0x0._s_0.R =
       FLinearColor::sRGBToLinearTable[0x19];
  (pFVar12->ColorAndOpacity).SpecifiedColor.field0_0x0._s_0.G = (float)local_93f0._4_4_;
  (pFVar12->ColorAndOpacity).SpecifiedColor.field0_0x0._s_0.B = fStack_93e8;
  (pFVar12->ColorAndOpacity).SpecifiedColor.field0_0x0._s_0.A = 1.0;
  (pFVar12->ColorAndOpacity).ColorUseRule = (undefined1)local_93e0;
  (pFVar12->ColorAndOpacity).ColorTableId = local_93e0._1_1_;
  *(undefined2 *)&(pFVar12->ColorAndOpacity).field_0x12 = local_93e0._2_2_;
  uStack_93e4 = 0x3f800000;
  pFVar13 = ::FName::FName(&local_res10,"RichText.Tagline.TextHighlight");
  FSlateStyleSet::Set<FTextBlockStyle>(local_9138.Object,*pFVar13,pFVar12);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_9228._56_8_);
  FTextBlockStyle::~FTextBlockStyle(&local_8f38);
  pFVar12 = FTextBlockStyle::FTextBlockStyle(&local_8f38,&local_88e8);
  local_93c8.OutlineColor.field0_0x0._s_0 = FLinearColor::Black.field0_0x0;
  local_93c8._0_8_ = local_93c8._0_8_ & 0xff00000000000000;
  local_93c8.OutlineMaterial.field0_0x0.DebugPtr = (TObjectPtr<UObject>_u_0)0x0;
  pFVar13 = ::FName::FName((FName *)&local_res8._s_0,"Regular");
  pFVar14 = FCoreStyle::GetDefaultFontStyle
                      ((FSlateFontInfo *)local_9228,*pFVar13,fVar28,&local_93c8);
  FSlateFontInfo::operator=(&pFVar12->Font,pFVar14);
  fStack_93e8 = FLinearColor::sRGBToLinearTable[0x50];
  local_93f0._4_4_ = FLinearColor::sRGBToLinearTable[0x3e];
  local_93f0._0_4_ = FLinearColor::sRGBToLinearTable[0x2c];
  local_93e0 = local_93e0 & 0xffffff00;
  (pFVar12->ColorAndOpacity).SpecifiedColor.field0_0x0._s_0.R =
       FLinearColor::sRGBToLinearTable[0x2c];
  (pFVar12->ColorAndOpacity).SpecifiedColor.field0_0x0._s_0.G = (float)local_93f0._4_4_;
  (pFVar12->ColorAndOpacity).SpecifiedColor.field0_0x0._s_0.B = fStack_93e8;
  (pFVar12->ColorAndOpacity).SpecifiedColor.field0_0x0._s_0.A = 1.0;
  (pFVar12->ColorAndOpacity).ColorUseRule = (undefined1)local_93e0;
  (pFVar12->ColorAndOpacity).ColorTableId = local_93e0._1_1_;
  *(undefined2 *)&(pFVar12->ColorAndOpacity).field_0x12 = local_93e0._2_2_;
  uStack_93e4 = 0x3f800000;
  pFVar13 = ::FName::FName(&local_res10,"RichText.Tagline.SubtleText");
  FSlateStyleSet::Set<FTextBlockStyle>(local_9138.Object,*pFVar13,pFVar12);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_9228._56_8_);
  FTextBlockStyle::~FTextBlockStyle(&local_8f38);
  pFVar12 = FTextBlockStyle::FTextBlockStyle(&local_8f38,&local_88e8);
  local_93c8.OutlineColor.field0_0x0._s_0 = FLinearColor::Black.field0_0x0;
  local_93c8._0_8_ = local_93c8._0_8_ & 0xff00000000000000;
  local_93c8.OutlineMaterial.field0_0x0.DebugPtr = (TObjectPtr<UObject>_u_0)0x0;
  pFVar13 = ::FName::FName((FName *)&local_res8._s_0,"Regular");
  pFVar14 = FCoreStyle::GetDefaultFontStyle
                      ((FSlateFontInfo *)local_9228,*pFVar13,fVar28,&local_93c8);
  FSlateFontInfo::operator=(&pFVar12->Font,pFVar14);
  local_93f0._4_4_ = FLinearColor::sRGBToLinearTable[0xbc];
  fStack_93e8 = FLinearColor::sRGBToLinearTable[0x9c];
  local_93f0._0_4_ = FLinearColor::sRGBToLinearTable[0x19];
  local_93e0 = local_93e0 & 0xffffff00;
  (pFVar12->ColorAndOpacity).SpecifiedColor.field0_0x0._s_0.R =
       FLinearColor::sRGBToLinearTable[0x19];
  (pFVar12->ColorAndOpacity).SpecifiedColor.field0_0x0._s_0.G = (float)local_93f0._4_4_;
  (pFVar12->ColorAndOpacity).SpecifiedColor.field0_0x0._s_0.B = fStack_93e8;
  (pFVar12->ColorAndOpacity).SpecifiedColor.field0_0x0._s_0.A = 1.0;
  (pFVar12->ColorAndOpacity).ColorUseRule = (undefined1)local_93e0;
  (pFVar12->ColorAndOpacity).ColorTableId = local_93e0._1_1_;
  *(undefined2 *)&(pFVar12->ColorAndOpacity).field_0x12 = local_93e0._2_2_;
  uStack_93e4 = 0x3f800000;
  pFVar13 = ::FName::FName(&local_res10,"RichText.Tagline.SubtleTextHighlight");
  FSlateStyleSet::Set<FTextBlockStyle>(local_9138.Object,*pFVar13,pFVar12);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_9228._56_8_);
  FTextBlockStyle::~FTextBlockStyle(&local_8f38);
  pFVar19 = ::operator_new(0xb0);
  FVar18 = FVar24;
  if (pFVar19 != (FSlateBoxBrush *)0x0) {
    local_9378._4_4_ = FLinearColor::sRGBToLinearTable[0xe4];
    local_9378._0_4_ = FLinearColor::sRGBToLinearTable[0xdb];
    local_9368 = (undefined1  [8])0x0;
    _fStack_9360 = (UObject *)0x0;
    iStack_936c = 0x3f800000;
    fStack_9370 = FLinearColor::sRGBToLinearTable[0xe4];
    local_res8 = (TVector2<float>_u_0)0x3f8000003f800000;
    pFVar15 = (FString *)
              (**(code **)((local_9138.Object)->_padding_ + 0xf0))
                        (local_9138.Object,local_9358,"Testing/FlatColorSquare",L".png");
    FVar18 = (FName)FSlateBoxBrush::FSlateBoxBrush
                              (pFVar19,pFVar15,(FDeprecateVector2DParameter *)&local_res8._s_0,
                               (FMargin *)local_9368,(FLinearColor *)local_9378,FullColor);
  }
  pFVar13 = ::FName::FName(&local_res10,"RichText.Interactive.Details.Background");
  FSlateStyleSet::Set<FSlateBoxBrush>(local_9138.Object,*pFVar13,(FSlateBoxBrush *)FVar18);
  if ((pFVar19 != (FSlateBoxBrush *)0x0) &&
     ((FDeprecateVector2DParameter)local_9358._0_8_ != (FDeprecateVector2DParameter)0x0)) {
    FMemory::Free((void *)local_9358._0_8_);
  }
  pFVar12 = FTextBlockStyle::FTextBlockStyle(&local_8f38,&local_88e8);
  local_93c8.OutlineColor.field0_0x0._s_0 = FLinearColor::Black.field0_0x0;
  local_93c8._0_8_ = local_93c8._0_8_ & 0xff00000000000000;
  local_93c8.OutlineMaterial.field0_0x0.DebugPtr = (TObjectPtr<UObject>_u_0)0x0;
  pFVar13 = ::FName::FName((FName *)&local_res8._s_0,"Regular");
  fVar28 = __real_41400000;
  pFVar14 = FCoreStyle::GetDefaultFontStyle
                      ((FSlateFontInfo *)local_9228,*pFVar13,__real_41400000,&local_93c8);
  FSlateFontInfo::operator=(&pFVar12->Font,pFVar14);
  fStack_93e8 = FLinearColor::sRGBToLinearTable[0x50];
  local_93f0._4_4_ = FLinearColor::sRGBToLinearTable[0x3e];
  local_93f0._0_4_ = FLinearColor::sRGBToLinearTable[0x2c];
  local_93e0 = local_93e0 & 0xffffff00;
  (pFVar12->ColorAndOpacity).SpecifiedColor.field0_0x0._s_0.R =
       FLinearColor::sRGBToLinearTable[0x2c];
  (pFVar12->ColorAndOpacity).SpecifiedColor.field0_0x0._s_0.G = (float)local_93f0._4_4_;
  (pFVar12->ColorAndOpacity).SpecifiedColor.field0_0x0._s_0.B = fStack_93e8;
  (pFVar12->ColorAndOpacity).SpecifiedColor.field0_0x0._s_0.A = 1.0;
  (pFVar12->ColorAndOpacity).ColorUseRule = (undefined1)local_93e0;
  (pFVar12->ColorAndOpacity).ColorTableId = local_93e0._1_1_;
  *(undefined2 *)&(pFVar12->ColorAndOpacity).field_0x12 = local_93e0._2_2_;
  uStack_93e4 = 0x3f800000;
  FTextBlockStyle::FTextBlockStyle(&local_7878,pFVar12);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_9228._56_8_);
  FTextBlockStyle::~FTextBlockStyle(&local_8f38);
  pFVar13 = ::FName::FName((FName *)&local_res8._s_0,"RichText.Interactive.Text");
  FSlateStyleSet::Set<FTextBlockStyle>(local_9138.Object,*pFVar13,&local_7878);
  pFVar20 = FButtonStyle::FButtonStyle((FButtonStyle *)local_81a8);
  local_9378._4_4_ = FLinearColor::sRGBToLinearTable[0x3e];
  local_9378._0_4_ = FLinearColor::sRGBToLinearTable[0x2c];
  iStack_936c = 0x3f800000;
  fStack_9370 = FLinearColor::sRGBToLinearTable[0x50];
  local_9358._0_8_ = FVar7;
  local_9358._8_8_ = TVar8;
  pFVar15 = (FString *)
            (**(code **)((local_9138.Object)->_padding_ + 0xf0))
                      (local_9138.Object,local_92e0,"Old/HyperlinkDotted",L".png");
  pFVar16 = (FSlateBrush *)
            FSlateBorderBrush::FSlateBorderBrush
                      ((FSlateBorderBrush *)local_9228,pFVar15,(FMargin *)local_9358,
                       (FLinearColor *)local_9378,FullColor);
  FSlateBrush::operator=(&pFVar20->Normal,pFVar16);
  local_res8 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  pFVar16 = (FSlateBrush *)
            FSlateNoResource::FSlateNoResource
                      ((FSlateNoResource *)local_8fe8,
                       (FDeprecateVector2DParameter *)&local_res8._s_0);
  FSlateBrush::operator=(&pFVar20->Pressed,pFVar16);
  local_9368._4_4_ = FLinearColor::sRGBToLinearTable[0x3e];
  local_9368._0_4_ = FLinearColor::sRGBToLinearTable[0x2c];
  fStack_935c = 1.0;
  fStack_9360 = FLinearColor::sRGBToLinearTable[0x50];
  local_9300._0_8_ = FVar7;
  local_9300._8_8_ = TVar8;
  pFVar15 = (FString *)
            (**(code **)((local_9138.Object)->_padding_ + 0xf0))
                      (local_9138.Object,local_9310,"Old/HyperlinkUnderline",L".png");
  pFVar16 = (FSlateBrush *)
            FSlateBorderBrush::FSlateBorderBrush
                      ((FSlateBorderBrush *)local_8538,pFVar15,(FMargin *)local_9300,
                       (FLinearColor *)local_9368,FullColor);
  FSlateBrush::operator=(&pFVar20->Hovered,pFVar16);
  FButtonStyle::FButtonStyle(&local_5b88,pFVar20);
  local_8538._0_8_ = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_8538._160_8_);
  if ((void *)CONCAT44(local_9310[0]._4_4_,local_9310[0]._0_4_) != (void *)0x0) {
    FMemory::Free((void *)CONCAT44(local_9310[0]._4_4_,local_9310[0]._0_4_));
  }
  local_8fe8[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_8f48);
  local_9228._0_8_ = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_9188);
  if ((void *)CONCAT44(local_92e0[0]._4_4_,local_92e0[0]._0_4_) != (void *)0x0) {
    FMemory::Free((void *)CONCAT44(local_92e0[0]._4_4_,local_92e0[0]._0_4_));
  }
  FButtonStyle::~FButtonStyle((FButtonStyle *)local_81a8);
  pFVar21 = FHyperlinkStyle::FHyperlinkStyle(&local_1078);
  FButtonStyle::operator=(&pFVar21->UnderlineStyle,&local_5b88);
  pFVar21 = FHyperlinkStyle::SetTextStyle(pFVar21,&local_7878);
  (pFVar21->Padding).Left = 0.0;
  (pFVar21->Padding).Top = 0.0;
  (pFVar21->Padding).Right = 0.0;
  (pFVar21->Padding).Bottom = 0.0;
  FHyperlinkStyle::FHyperlinkStyle(&local_2ab8,pFVar21);
  FHyperlinkStyle::~FHyperlinkStyle(&local_1078);
  pFVar13 = ::FName::FName((FName *)&local_res8._s_0,"RichText.Interactive.Text.Hyperlink");
  FSlateStyleSet::Set<FHyperlinkStyle>(local_9138.Object,*pFVar13,&local_2ab8);
  pFVar12 = FTextBlockStyle::FTextBlockStyle(&local_8f38,&local_88e8);
  local_93c8.OutlineColor.field0_0x0._s_0 = FLinearColor::Black.field0_0x0;
  local_93c8._0_8_ = local_93c8._0_8_ & 0xff00000000000000;
  local_93c8.OutlineMaterial.field0_0x0.DebugPtr = (TObjectPtr<UObject>_u_0)0x0;
  pFVar13 = ::FName::FName((FName *)&local_res8._s_0,"Italic");
  pFVar14 = FCoreStyle::GetDefaultFontStyle
                      ((FSlateFontInfo *)local_9228,*pFVar13,fVar28,&local_93c8);
  FSlateFontInfo::operator=(&pFVar12->Font,pFVar14);
  fStack_93e8 = FLinearColor::sRGBToLinearTable[0x50];
  local_93f0._4_4_ = FLinearColor::sRGBToLinearTable[0x3e];
  local_93f0._0_4_ = FLinearColor::sRGBToLinearTable[0x2c];
  local_93e0 = local_93e0 & 0xffffff00;
  (pFVar12->ColorAndOpacity).SpecifiedColor.field0_0x0._s_0.R =
       FLinearColor::sRGBToLinearTable[0x2c];
  (pFVar12->ColorAndOpacity).SpecifiedColor.field0_0x0._s_0.G = (float)local_93f0._4_4_;
  (pFVar12->ColorAndOpacity).SpecifiedColor.field0_0x0._s_0.B = fStack_93e8;
  (pFVar12->ColorAndOpacity).SpecifiedColor.field0_0x0._s_0.A = 1.0;
  (pFVar12->ColorAndOpacity).ColorUseRule = (undefined1)local_93e0;
  (pFVar12->ColorAndOpacity).ColorTableId = local_93e0._1_1_;
  *(undefined2 *)&(pFVar12->ColorAndOpacity).field_0x12 = local_93e0._2_2_;
  uStack_93e4 = 0x3f800000;
  FTextBlockStyle::FTextBlockStyle(&local_7038,pFVar12);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_9228._56_8_);
  FTextBlockStyle::~FTextBlockStyle(&local_8f38);
  pFVar13 = ::FName::FName((FName *)&local_res8._s_0,"RichText.Interactive.Text.Dialogue");
  FSlateStyleSet::Set<FTextBlockStyle>(local_9138.Object,*pFVar13,&local_7038);
  pFVar12 = FTextBlockStyle::FTextBlockStyle(&local_8f38,&local_7038);
  local_93c8._0_8_ = local_93c8._0_8_ & 0xff00000000000000;
  local_93c8.OutlineColor.field0_0x0._s_0 = FLinearColor::Black.field0_0x0;
  local_93c8.OutlineMaterial.field0_0x0.DebugPtr = (TObjectPtr<UObject>_u_0)0x0;
  pFVar13 = ::FName::FName((FName *)&local_res8._s_0,"BoldItalic");
  pFVar14 = FCoreStyle::GetDefaultFontStyle
                      ((FSlateFontInfo *)local_9228,*pFVar13,fVar28,&local_93c8);
  FSlateFontInfo::operator=(&pFVar12->Font,pFVar14);
  fStack_93e8 = FLinearColor::sRGBToLinearTable[0x50];
  local_93f0._4_4_ = FLinearColor::sRGBToLinearTable[0x3e];
  local_93f0._0_4_ = FLinearColor::sRGBToLinearTable[0x2c];
  local_93e0 = local_93e0 & 0xffffff00;
  (pFVar12->ColorAndOpacity).SpecifiedColor.field0_0x0._s_0.R =
       FLinearColor::sRGBToLinearTable[0x2c];
  (pFVar12->ColorAndOpacity).SpecifiedColor.field0_0x0._s_0.G = (float)local_93f0._4_4_;
  (pFVar12->ColorAndOpacity).SpecifiedColor.field0_0x0._s_0.B = fStack_93e8;
  (pFVar12->ColorAndOpacity).SpecifiedColor.field0_0x0._s_0.A = 1.0;
  (pFVar12->ColorAndOpacity).ColorUseRule = (undefined1)local_93e0;
  (pFVar12->ColorAndOpacity).ColorTableId = local_93e0._1_1_;
  *(undefined2 *)&(pFVar12->ColorAndOpacity).field_0x12 = local_93e0._2_2_;
  uStack_93e4 = 0x3f800000;
  pFVar13 = ::FName::FName(&local_res10,"RichText.Interactive.Text.StrongDialogue");
  FSlateStyleSet::Set<FTextBlockStyle>(local_9138.Object,*pFVar13,pFVar12);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_9228._56_8_);
  FTextBlockStyle::~FTextBlockStyle(&local_8f38);
  pFVar20 = FButtonStyle::FButtonStyle((FButtonStyle *)local_81a8);
  local_9378._4_4_ = FLinearColor::sRGBToLinearTable[0x3e];
  local_9378._0_4_ = FLinearColor::sRGBToLinearTable[0x2c];
  iStack_936c = 0x3f800000;
  fStack_9370 = FLinearColor::sRGBToLinearTable[0x50];
  local_9358._0_8_ = FVar7;
  local_9358._8_8_ = TVar8;
  pFVar15 = (FString *)
            (**(code **)((local_9138.Object)->_padding_ + 0xf0))
                      (local_9138.Object,local_92e0,"Old/HyperlinkDotted",L".png");
  pFVar16 = (FSlateBrush *)
            FSlateBorderBrush::FSlateBorderBrush
                      ((FSlateBorderBrush *)local_9228,pFVar15,(FMargin *)local_9358,
                       (FLinearColor *)local_9378,FullColor);
  FSlateBrush::operator=(&pFVar20->Normal,pFVar16);
  local_res8 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  pFVar16 = (FSlateBrush *)
            FSlateNoResource::FSlateNoResource
                      ((FSlateNoResource *)local_8fe8,
                       (FDeprecateVector2DParameter *)&local_res8._s_0);
  FSlateBrush::operator=(&pFVar20->Pressed,pFVar16);
  local_9368._4_4_ = FLinearColor::sRGBToLinearTable[0x3e];
  local_9368._0_4_ = FLinearColor::sRGBToLinearTable[0x2c];
  fStack_935c = 1.0;
  fStack_9360 = FLinearColor::sRGBToLinearTable[0x50];
  local_9300._0_8_ = FVar7;
  local_9300._8_8_ = TVar8;
  pFVar15 = (FString *)
            (**(code **)((local_9138.Object)->_padding_ + 0xf0))
                      (local_9138.Object,local_9310,"Old/HyperlinkUnderline",L".png");
  pFVar16 = (FSlateBrush *)
            FSlateBorderBrush::FSlateBorderBrush
                      ((FSlateBorderBrush *)local_8538,pFVar15,(FMargin *)local_9300,
                       (FLinearColor *)local_9368,FullColor);
  FSlateBrush::operator=(&pFVar20->Hovered,pFVar16);
  FButtonStyle::FButtonStyle(&local_62a8,pFVar20);
  local_8538._0_8_ = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_8538._160_8_);
  if ((void *)CONCAT44(local_9310[0]._4_4_,local_9310[0]._0_4_) != (void *)0x0) {
    FMemory::Free((void *)CONCAT44(local_9310[0]._4_4_,local_9310[0]._0_4_));
  }
  local_8fe8[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_8f48);
  local_9228._0_8_ = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_9188);
  if ((void *)CONCAT44(local_92e0[0]._4_4_,local_92e0[0]._0_4_) != (void *)0x0) {
    FMemory::Free((void *)CONCAT44(local_92e0[0]._4_4_,local_92e0[0]._0_4_));
  }
  FButtonStyle::~FButtonStyle((FButtonStyle *)local_81a8);
  pFVar21 = FHyperlinkStyle::FHyperlinkStyle((FHyperlinkStyle *)&local_9e8);
  FButtonStyle::operator=(&pFVar21->UnderlineStyle,&local_62a8);
  pFVar21 = FHyperlinkStyle::SetTextStyle(pFVar21,&local_7038);
  (pFVar21->Padding).Left = 0.0;
  (pFVar21->Padding).Top = 0.0;
  (pFVar21->Padding).Right = 0.0;
  (pFVar21->Padding).Bottom = 0.0;
  FHyperlinkStyle::FHyperlinkStyle(&local_3148,pFVar21);
  FHyperlinkStyle::~FHyperlinkStyle((FHyperlinkStyle *)&local_9e8);
  pFVar13 = ::FName::FName(&local_res10,"RichText.Interactive.Text.DialogueHyperlink");
  FSlateStyleSet::Set<FHyperlinkStyle>(local_9138.Object,*pFVar13,&local_3148);
  FHyperlinkStyle::~FHyperlinkStyle(&local_3148);
  FButtonStyle::~FButtonStyle(&local_62a8);
  FTextBlockStyle::~FTextBlockStyle(&local_7038);
  pFVar12 = FTextBlockStyle::FTextBlockStyle(&local_8f38,&local_88e8);
  local_93c8.OutlineColor.field0_0x0._s_0 = FLinearColor::Black.field0_0x0;
  local_93c8._0_8_ = local_93c8._0_8_ & 0xff00000000000000;
  local_93c8.OutlineMaterial.field0_0x0.DebugPtr = (TObjectPtr<UObject>_u_0)0x0;
  pFVar13 = ::FName::FName((FName *)&local_res8._s_0,"Bold");
  fVar3 = __real_41200000;
  pFVar14 = FCoreStyle::GetDefaultFontStyle
                      ((FSlateFontInfo *)local_9228,*pFVar13,__real_41200000,&local_93c8);
  FSlateFontInfo::operator=(&pFVar12->Font,pFVar14);
  fStack_93e8 = FLinearColor::sRGBToLinearTable[0x50];
  local_93f0._4_4_ = FLinearColor::sRGBToLinearTable[0x3e];
  local_93f0._0_4_ = FLinearColor::sRGBToLinearTable[0x2c];
  local_93e0 = local_93e0 & 0xffffff00;
  (pFVar12->ColorAndOpacity).SpecifiedColor.field0_0x0._s_0.R =
       FLinearColor::sRGBToLinearTable[0x2c];
  (pFVar12->ColorAndOpacity).SpecifiedColor.field0_0x0._s_0.G = (float)local_93f0._4_4_;
  (pFVar12->ColorAndOpacity).SpecifiedColor.field0_0x0._s_0.B = fStack_93e8;
  (pFVar12->ColorAndOpacity).SpecifiedColor.field0_0x0._s_0.A = 1.0;
  (pFVar12->ColorAndOpacity).ColorUseRule = (undefined1)local_93e0;
  (pFVar12->ColorAndOpacity).ColorTableId = local_93e0._1_1_;
  *(undefined2 *)&(pFVar12->ColorAndOpacity).field_0x12 = local_93e0._2_2_;
  uStack_93e4 = 0x3f800000;
  pFVar13 = ::FName::FName(&local_res10,"RichText.Interactive.Details.Name.Text");
  FSlateStyleSet::Set<FTextBlockStyle>(local_9138.Object,*pFVar13,pFVar12);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_9228._56_8_);
  FTextBlockStyle::~FTextBlockStyle(&local_8f38);
  pFVar12 = FTextBlockStyle::FTextBlockStyle(&local_8f38,&local_88e8);
  local_93c8.OutlineColor.field0_0x0._s_0 = FLinearColor::Black.field0_0x0;
  local_93c8._0_8_ = local_93c8._0_8_ & 0xff00000000000000;
  local_93c8.OutlineMaterial.field0_0x0.DebugPtr = (TObjectPtr<UObject>_u_0)0x0;
  pFVar13 = ::FName::FName((FName *)&local_res8._s_0,"Regular");
  pFVar14 = FCoreStyle::GetDefaultFontStyle((FSlateFontInfo *)local_9228,*pFVar13,fVar3,&local_93c8)
  ;
  FSlateFontInfo::operator=(&pFVar12->Font,pFVar14);
  fStack_93e8 = FLinearColor::sRGBToLinearTable[0x50];
  local_93f0._4_4_ = FLinearColor::sRGBToLinearTable[0x3e];
  local_93f0._0_4_ = FLinearColor::sRGBToLinearTable[0x2c];
  local_93e0 = local_93e0 & 0xffffff00;
  (pFVar12->ColorAndOpacity).SpecifiedColor.field0_0x0._s_0.R =
       FLinearColor::sRGBToLinearTable[0x2c];
  (pFVar12->ColorAndOpacity).SpecifiedColor.field0_0x0._s_0.G = (float)local_93f0._4_4_;
  (pFVar12->ColorAndOpacity).SpecifiedColor.field0_0x0._s_0.B = fStack_93e8;
  (pFVar12->ColorAndOpacity).SpecifiedColor.field0_0x0._s_0.A = 1.0;
  (pFVar12->ColorAndOpacity).ColorUseRule = (undefined1)local_93e0;
  (pFVar12->ColorAndOpacity).ColorTableId = local_93e0._1_1_;
  *(undefined2 *)&(pFVar12->ColorAndOpacity).field_0x12 = local_93e0._2_2_;
  uStack_93e4 = 0x3f800000;
  pFVar13 = ::FName::FName(&local_res10,"RichText.Interactive.Details.Value.Text");
  FSlateStyleSet::Set<FTextBlockStyle>(local_9138.Object,*pFVar13,pFVar12);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_9228._56_8_);
  FTextBlockStyle::~FTextBlockStyle(&local_8f38);
  pFVar23 = FCheckBoxStyle::FCheckBoxStyle(&local_9e8);
  uVar6 = _UNK_1509252f8;
  pvVar2 = ___xmm_3f8000003f0000003f0000003f000000;
  (pFVar23->CheckBoxType).Value = '\0';
  local_9018._0_8_ = pvVar2;
  local_9018._8_8_ = uVar6;
  local_res8 = (TVector2<float>_u_0)0x4180000041800000;
  pFVar15 = (FString *)
            (**(code **)((local_9138.Object)->_padding_ + 0xf0))
                      (local_9138.Object,local_93f0,"Common/Checkbox",L".png");
  pFVar16 = (FSlateBrush *)
            FSlateImageBrush::FSlateImageBrush
                      ((FSlateImageBrush *)local_81a8,pFVar15,
                       (FDeprecateVector2DParameter *)&local_res8._s_0,
                       (FLinearColor *)&local_9018._s_0,NoTile,FullColor);
  FSlateBrush::operator=(&pFVar23->UncheckedImage,pFVar16);
  local_9008._0_8_ = pvVar2;
  local_9008._8_8_ = uVar6;
  local_res10.ComparisonIndex.Value = 0x41800000;
  local_res10.Number = 0x41800000;
  pFVar15 = (FString *)
            (**(code **)((local_9138.Object)->_padding_ + 0xf0))
                      (local_9138.Object,&local_93c8,"Common/Checkbox",L".png");
  pFVar16 = (FSlateBrush *)
            FSlateImageBrush::FSlateImageBrush
                      ((FSlateImageBrush *)local_8998,pFVar15,
                       (FDeprecateVector2DParameter *)&local_res10,(FLinearColor *)&local_9008._s_0,
                       NoTile,FullColor);
  FSlateBrush::operator=(&pFVar23->UncheckedHoveredImage,pFVar16);
  local_8ff8._0_8_ = ___xmm_3f8000003f4000003f4000003f400000;
  local_8ff8._8_8_ = _UNK_150a1c8b8;
  local_res18._0_4_ = 0x41800000;
  local_res18._4_4_ = 0x41800000;
  pFVar15 = (FString *)
            (**(code **)((local_9138.Object)->_padding_ + 0xf0))
                      (local_9138.Object,&local_92f0,"Common/Checkbox_Hovered",L".png");
  pFVar16 = (FSlateBrush *)
            FSlateImageBrush::FSlateImageBrush
                      ((FSlateImageBrush *)local_8a48,pFVar15,&local_res18,
                       (FLinearColor *)&local_8ff8._s_0,NoTile,FullColor);
  FSlateBrush::operator=(&pFVar23->UncheckedPressedImage,pFVar16);
  local_9128._0_8_ = pvVar2;
  local_9128._8_8_ = uVar6;
  local_res20._0_4_ = 0x41800000;
  local_res20._4_4_ = 0x41800000;
  pFVar15 = (FString *)
            (**(code **)((local_9138.Object)->_padding_ + 0xf0))
                      (local_9138.Object,&local_9328,"Common/Checkbox_Checked_Hovered",L".png");
  pFVar16 = (FSlateBrush *)
            FSlateImageBrush::FSlateImageBrush
                      ((FSlateImageBrush *)local_8af8,pFVar15,&local_res20,
                       (FLinearColor *)&local_9128._s_0,NoTile,FullColor);
  FSlateBrush::operator=(&pFVar23->CheckedImage,pFVar16);
  local_9118._0_8_ = pvVar2;
  local_9118._8_8_ = uVar6;
  local_92e0[0]._0_4_ = 0x41800000;
  local_92e0[0]._4_4_ = 0x41800000;
  pFVar15 = (FString *)
            (**(code **)((local_9138.Object)->_padding_ + 0xf0))
                      (local_9138.Object,&local_92d0,"Common/Checkbox_Checked_Hovered",L".png");
  pFVar16 = (FSlateBrush *)
            FSlateImageBrush::FSlateImageBrush
                      ((FSlateImageBrush *)local_8ba8,pFVar15,local_92e0,
                       (FLinearColor *)&local_9118._s_0,NoTile,FullColor);
  FSlateBrush::operator=(&pFVar23->CheckedHoveredImage,pFVar16);
  local_9108._0_8_ = ___xmm_3f8000003f4000003f4000003f400000;
  local_9108._8_8_ = _UNK_150a1c8b8;
  local_9310[0]._0_4_ = 0x41800000;
  local_9310[0]._4_4_ = 0x41800000;
  pFVar15 = (FString *)
            (**(code **)((local_9138.Object)->_padding_ + 0xf0))
                      (local_9138.Object,&local_92b0,"Common/Checkbox_Checked",L".png");
  pFVar16 = (FSlateBrush *)
            FSlateImageBrush::FSlateImageBrush
                      ((FSlateImageBrush *)local_8c58,pFVar15,local_9310,
                       (FLinearColor *)&local_9108._s_0,NoTile,FullColor);
  FSlateBrush::operator=(&pFVar23->CheckedPressedImage,pFVar16);
  local_9168._0_8_ = pvVar2;
  local_9168._8_8_ = uVar6;
  local_9300._0_8_ = (FDeprecateVector2DParameter)0x4180000041800000;
  pFVar15 = (FString *)
            (**(code **)((local_9138.Object)->_padding_ + 0xf0))
                      (local_9138.Object,local_9250,"Common/Checkbox_Undetermined",L".png");
  pFVar16 = (FSlateBrush *)
            FSlateImageBrush::FSlateImageBrush
                      ((FSlateImageBrush *)local_9228,pFVar15,
                       (FDeprecateVector2DParameter *)local_9300,(FLinearColor *)&local_9168._s_0,
                       NoTile,FullColor);
  FSlateBrush::operator=(&pFVar23->UndeterminedImage,pFVar16);
  local_9158._0_8_ = pvVar2;
  local_9158._8_8_ = uVar6;
  local_9358._0_8_ = (FDeprecateVector2DParameter)0x4180000041800000;
  pFVar15 = (FString *)
            (**(code **)((local_9138.Object)->_padding_ + 0xf0))
                      (local_9138.Object,local_9260,"Common/Checkbox_Undetermined_Hovered",L".png");
  pFVar16 = (FSlateBrush *)
            FSlateImageBrush::FSlateImageBrush
                      ((FSlateImageBrush *)local_8fe8,pFVar15,
                       (FDeprecateVector2DParameter *)local_9358,(FLinearColor *)&local_9158._s_0,
                       NoTile,FullColor);
  FSlateBrush::operator=(&pFVar23->UndeterminedHoveredImage,pFVar16);
  local_9148._0_8_ = ___xmm_3f8000003f4000003f4000003f400000;
  local_9148._8_8_ = _UNK_150a1c8b8;
  local_9368._0_4_ = 16.0;
  local_9368._4_4_ = 16.0;
  pFVar15 = (FString *)
            (**(code **)((local_9138.Object)->_padding_ + 0xf0))
                      (local_9138.Object,local_9270,"Common/Checkbox_Undetermined_Hovered",L".png");
  pFVar16 = (FSlateBrush *)
            FSlateImageBrush::FSlateImageBrush
                      ((FSlateImageBrush *)local_8538,pFVar15,
                       (FDeprecateVector2DParameter *)local_9368,(FLinearColor *)&local_9148._s_0,
                       NoTile,FullColor);
  FSlateBrush::operator=(&pFVar23->UndeterminedPressedImage,pFVar16);
  FCheckBoxStyle::FCheckBoxStyle(&local_4948,pFVar23);
  local_8538._0_8_ = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_8538._160_8_);
  if (local_9270[0] != (void *)0x0) {
    FMemory::Free(local_9270[0]);
  }
  local_8fe8[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_8f48);
  if (local_9260[0] != (void *)0x0) {
    FMemory::Free(local_9260[0]);
  }
  local_9228._0_8_ = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_9188);
  if (local_9250[0] != (void *)0x0) {
    FMemory::Free(local_9250[0]);
  }
  local_8c58[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_8bb8);
  if ((void *)local_92b0._0_8_ != (void *)0x0) {
    FMemory::Free((void *)local_92b0._0_8_);
  }
  local_8ba8[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_8b08);
  if ((void *)local_92d0._0_8_ != (void *)0x0) {
    FMemory::Free((void *)local_92d0._0_8_);
  }
  local_8af8[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_8a58);
  if (local_9328 != (FDeprecateVector2DParameter)0x0) {
    FMemory::Free((void *)local_9328);
  }
  local_8a48[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_89a8);
  if (local_92f0 != (FDeprecateVector2DParameter)0x0) {
    FMemory::Free((void *)local_92f0);
  }
  local_8998[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_88f8);
  if ((void *)local_93c8._0_8_ != (void *)0x0) {
    FMemory::Free((void *)local_93c8._0_8_);
  }
  local_81a8._0_8_ = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_81a8._160_8_);
  if (local_93f0 != (undefined1  [8])0x0) {
    FMemory::Free((void *)local_93f0);
  }
  FCheckBoxStyle::~FCheckBoxStyle(&local_9e8);
  pFVar13 = ::FName::FName((FName *)local_9378,"RichText.Interactive.Details.Checkbox");
  FSlateStyleSet::Set<FCheckBoxStyle>(local_9138.Object,*pFVar13,&local_4948);
  FCheckBoxStyle::~FCheckBoxStyle(&local_4948);
  FHyperlinkStyle::~FHyperlinkStyle(&local_2ab8);
  FButtonStyle::~FButtonStyle(&local_5b88);
  FTextBlockStyle::~FTextBlockStyle(&local_7878);
  pFVar12 = FTextBlockStyle::FTextBlockStyle(&local_7878);
  local_92c0 = FLinearColor::Black.field0_0x0;
  local_92d0._0_8_ = (ulonglong)(byte)local_92d0._7_1_ << 0x38;
  local_92d0._8_8_ = 0;
  pFVar13 = ::FName::FName((FName *)&local_res8._s_0,"Regular");
  pFVar14 = FCoreStyle::GetDefaultFontStyle
                      ((FSlateFontInfo *)local_9228,*pFVar13,__real_41300000,
                       (FFontOutlineSettings *)&local_92d0._s_0);
  FSlateFontInfo::operator=(&pFVar12->Font,pFVar14);
  uVar6 = _UNK_15090c6d8;
  *(void **)&(pFVar12->ColorAndOpacity).SpecifiedColor.field0_0x0 =
       ___xmm_3f8000003f800000000000003f800000;
  *(undefined8 *)((longlong)&(pFVar12->ColorAndOpacity).SpecifiedColor.field0_0x0 + 8) = uVar6;
  local_9318 = CONCAT22(local_9318._2_2_,2);
  uVar10 = local_9318;
  local_9318._0_1_ = (undefined1)2;
  local_9318._1_1_ = (undefined1)(2 >> 8);
  (pFVar12->ColorAndOpacity).ColorUseRule = (undefined1)local_9318;
  (pFVar12->ColorAndOpacity).ColorTableId = local_9318._1_1_;
  *(undefined2 *)&(pFVar12->ColorAndOpacity).field_0x12 = local_9318._2_2_;
  local_9318 = uVar10 & 0xffffff00;
  fVar29 = (float)UE::Math::TVector2<double>::ZeroVector.field0_0x0._s_0.Y;
  *(float *)&pFVar12->ShadowOffset = (float)UE::Math::TVector2<double>::ZeroVector.field0_0x0._s_0.X
  ;
  *(float *)&(pFVar12->ShadowOffset).field_0x4 = fVar29;
  uVar9 = _UNK_150925298;
  uVar6 = ___xmm_3f800000000000003e99999a3ca3d70a;
  (pFVar12->ShadowColorAndOpacity).field0_0x0._s_0 =
       (FLinearColor_u_0_s_0)FLinearColor::Black.field0_0x0;
  local_93c8.OutlineMaterial.field0_0x0 = _UNK_1509251a8;
  local_93c8._0_8_ = ___xmm_3ec000003ec000003ec000003ec00000;
  *(undefined8 *)&(pFVar12->HighlightColor).SpecifiedColor.field0_0x0 = uVar6;
  *(undefined8 *)((longlong)&(pFVar12->HighlightColor).SpecifiedColor.field0_0x0 + 8) = uVar9;
  (pFVar12->HighlightColor).ColorUseRule = (undefined1)local_9318;
  (pFVar12->HighlightColor).ColorTableId = local_9318._1_1_;
  *(undefined2 *)&(pFVar12->HighlightColor).field_0x12 = local_9318._2_2_;
  local_93f0 = (undefined1  [8])FVar4;
  _fStack_93e8 = TVar5;
  pFVar15 = (FString *)
            (**(code **)((local_9138.Object)->_padding_ + 0xf0))
                      (local_9138.Object,&local_92f0,"Common/TextBlockHighlightShape",L".png");
  pFVar16 = (FSlateBrush *)
            FSlateBoxBrush::FSlateBoxBrush
                      ((FSlateBoxBrush *)local_81a8,pFVar15,(FMargin *)&local_93c8,
                       (FLinearColor *)local_93f0,FullColor);
  FSlateBrush::operator=(&pFVar12->HighlightShape,pFVar16);
  FTextBlockStyle::FTextBlockStyle(&local_8f38,pFVar12);
  local_81a8._0_8_ = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_81a8._160_8_);
  if (local_92f0 != (FDeprecateVector2DParameter)0x0) {
    FMemory::Free((void *)local_92f0);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_9228._56_8_);
  FTextBlockStyle::~FTextBlockStyle(&local_7878);
  pFVar13 = ::FName::FName(&local_res10,"RichText.Editor.Text");
  FSlateStyleSet::Set<FTextBlockStyle>(local_9138.Object,*pFVar13,&local_8f38);
  pFVar20 = FButtonStyle::FButtonStyle((FButtonStyle *)local_8538);
  local_92d0._0_8_ = ___xmm_3f8000003f800000000000003f800000;
  local_92d0._8_8_ = _UNK_15090c6d8;
  local_92c0._0_2_ = 2;
  local_93f0 = (undefined1  [8])FVar7;
  _fStack_93e8 = TVar8;
  pFVar15 = (FString *)
            (**(code **)((local_9138.Object)->_padding_ + 0xf0))
                      (local_9138.Object,&local_9328,"Old/HyperlinkDotted",L".png");
  pFVar16 = (FSlateBrush *)
            FSlateBorderBrush::FSlateBorderBrush
                      ((FSlateBorderBrush *)local_8a48,pFVar15,(FMargin *)local_93f0,
                       (FSlateColor *)&local_92d0._s_0,FullColor);
  FSlateBrush::operator=(&pFVar20->Normal,pFVar16);
  local_res8 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  pFVar16 = (FSlateBrush *)
            FSlateNoResource::FSlateNoResource
                      ((FSlateNoResource *)local_8998,
                       (FDeprecateVector2DParameter *)&local_res8._s_0);
  FSlateBrush::operator=(&pFVar20->Pressed,pFVar16);
  local_92b0._0_8_ = ___xmm_3f8000003f800000000000003f800000;
  local_92b0._8_8_ = _UNK_15090c6d8;
  local_92a0 = 2;
  local_93c8._0_8_ = FVar7;
  local_93c8.OutlineMaterial.field0_0x0 = TVar8;
  pFVar15 = (FString *)
            (**(code **)((local_9138.Object)->_padding_ + 0xf0))
                      (local_9138.Object,&local_92f0,"Old/HyperlinkUnderline",L".png");
  pFVar16 = (FSlateBrush *)
            FSlateBorderBrush::FSlateBorderBrush
                      ((FSlateBorderBrush *)local_81a8,pFVar15,(FMargin *)&local_93c8,
                       (FSlateColor *)&local_92b0._s_0,FullColor);
  FSlateBrush::operator=(&pFVar20->Hovered,pFVar16);
  FButtonStyle::FButtonStyle(&local_6638,pFVar20);
  local_81a8._0_8_ = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_81a8._160_8_);
  if (local_92f0 != (FDeprecateVector2DParameter)0x0) {
    FMemory::Free((void *)local_92f0);
  }
  local_8998[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_88f8);
  local_8a48[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_89a8);
  if (local_9328 != (FDeprecateVector2DParameter)0x0) {
    FMemory::Free((void *)local_9328);
  }
  FButtonStyle::~FButtonStyle((FButtonStyle *)local_8538);
  pFVar21 = FHyperlinkStyle::FHyperlinkStyle((FHyperlinkStyle *)&local_4948);
  FButtonStyle::operator=(&pFVar21->UnderlineStyle,&local_6638);
  pFVar21 = FHyperlinkStyle::SetTextStyle(pFVar21,&local_8f38);
  (pFVar21->Padding).Left = 0.0;
  (pFVar21->Padding).Top = 0.0;
  (pFVar21->Padding).Right = 0.0;
  (pFVar21->Padding).Bottom = 0.0;
  FHyperlinkStyle::FHyperlinkStyle(&local_2428,pFVar21);
  FHyperlinkStyle::~FHyperlinkStyle((FHyperlinkStyle *)&local_4948);
  pFVar13 = ::FName::FName(&local_res10,"RichText.Editor.Hyperlink");
  FSlateStyleSet::Set<FHyperlinkStyle>(local_9138.Object,*pFVar13,&local_2428);
  FHyperlinkStyle::~FHyperlinkStyle(&local_2428);
  FButtonStyle::~FButtonStyle(&local_6638);
  FTextBlockStyle::~FTextBlockStyle(&local_8f38);
  local_93a8._4_4_ = FLinearColor::sRGBToLinearTable[0xf3];
  local_93a8._0_4_ = FLinearColor::sRGBToLinearTable[0xef];
  local_93d8._4_4_ = FLinearColor::sRGBToLinearTable[0xe4];
  local_93d8._0_4_ = FLinearColor::sRGBToLinearTable[0xdb];
  local_9338._4_4_ = FLinearColor::sRGBToLinearTable[0xe4];
  local_9338._0_4_ = FLinearColor::sRGBToLinearTable[0xdb];
  local_9348._4_4_ = FLinearColor::sRGBToLinearTable[0x3e];
  local_9348._0_4_ = FLinearColor::sRGBToLinearTable[0x2c];
  fStack_939c = 1.0;
  fStack_93a0 = FLinearColor::sRGBToLinearTable[0xf3];
  iStack_93cc = 0x3f800000;
  fStack_93d0 = FLinearColor::sRGBToLinearTable[0xd5];
  uStack_9330._4_4_ = 1.0;
  uStack_9330._0_4_ = FLinearColor::sRGBToLinearTable[0xe4];
  fStack_933c = 1.0;
  fStack_9340 = FLinearColor::sRGBToLinearTable[0x50];
  pFVar17 = ::operator_new(0xb0);
  if (pFVar17 != (FSlateImageBrush *)0x0) {
    local_res8 = (TVector2<float>_u_0)0x4180000041800000;
    pFVar15 = (FString *)
              (**(code **)((local_9138.Object)->_padding_ + 0xf0))
                        (local_9138.Object,local_93f0,"Testing/hyperlink",L".png");
    FVar24 = (FName)FSlateImageBrush::FSlateImageBrush
                              (pFVar17,pFVar15,(FDeprecateVector2DParameter *)&local_res8._s_0,
                               (FLinearColor *)local_9348,NoTile,FullColor);
  }
  pFVar13 = ::FName::FName(&local_res10,"RichText.Toolbar.HyperlinkImage");
  FSlateStyleSet::Set<FSlateImageBrush>(local_9138.Object,*pFVar13,(FSlateImageBrush *)FVar24);
  if ((pFVar17 != (FSlateImageBrush *)0x0) &&
     ((FDeprecateVector2DParameter)local_93f0 != (FDeprecateVector2DParameter)0x0)) {
    FMemory::Free((void *)local_93f0);
  }
  pFVar13 = ::FName::FName((FName *)&local_res8._s_0,"RichText.Toolbar.TextColor");
  FSlateStyleSet::Set(local_9138.Object,*pFVar13,(FLinearColor *)local_9348);
  pFVar12 = FTextBlockStyle::FTextBlockStyle(&local_8f38,&local_88e8);
  local_93c8.OutlineColor.field0_0x0._s_0 = FLinearColor::Black.field0_0x0;
  local_93c8._0_8_ = local_93c8._0_8_ & 0xff00000000000000;
  local_93c8.OutlineMaterial.field0_0x0.DebugPtr = (TObjectPtr<UObject>_u_0)0x0;
  pFVar13 = ::FName::FName((FName *)&local_res8._s_0,"Regular");
  pFVar14 = FCoreStyle::GetDefaultFontStyle((FSlateFontInfo *)local_9228,*pFVar13,fVar3,&local_93c8)
  ;
  FSlateFontInfo::operator=(&pFVar12->Font,pFVar14);
  local_93e0 = local_93e0 & 0xffffff00;
  *(undefined1 (*) [8])&(pFVar12->ColorAndOpacity).SpecifiedColor.field0_0x0 = local_9348;
  *(undefined8 *)((longlong)&(pFVar12->ColorAndOpacity).SpecifiedColor.field0_0x0 + 8) =
       _fStack_9340;
  (pFVar12->ColorAndOpacity).ColorUseRule = (undefined1)local_93e0;
  (pFVar12->ColorAndOpacity).ColorTableId = local_93e0._1_1_;
  *(undefined2 *)&(pFVar12->ColorAndOpacity).field_0x12 = local_93e0._2_2_;
  pFVar13 = ::FName::FName(&local_res10,"RichText.Toolbar.Text");
  FSlateStyleSet::Set<FTextBlockStyle>(local_9138.Object,*pFVar13,pFVar12);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_9228._56_8_);
  FTextBlockStyle::~FTextBlockStyle(&local_8f38);
  pFVar12 = FTextBlockStyle::FTextBlockStyle(&local_8f38,&local_88e8);
  local_93c8.OutlineColor.field0_0x0._s_0 = FLinearColor::Black.field0_0x0;
  local_93c8._0_8_ = local_93c8._0_8_ & 0xff00000000000000;
  local_93c8.OutlineMaterial.field0_0x0.DebugPtr = (TObjectPtr<UObject>_u_0)0x0;
  pFVar13 = ::FName::FName((FName *)&local_res8._s_0,"Bold");
  pFVar14 = FCoreStyle::GetDefaultFontStyle((FSlateFontInfo *)local_9228,*pFVar13,fVar3,&local_93c8)
  ;
  FSlateFontInfo::operator=(&pFVar12->Font,pFVar14);
  local_93e0 = local_93e0 & 0xffffff00;
  *(undefined1 (*) [8])&(pFVar12->ColorAndOpacity).SpecifiedColor.field0_0x0 = local_9348;
  *(undefined8 *)((longlong)&(pFVar12->ColorAndOpacity).SpecifiedColor.field0_0x0 + 8) =
       _fStack_9340;
  (pFVar12->ColorAndOpacity).ColorUseRule = (undefined1)local_93e0;
  (pFVar12->ColorAndOpacity).ColorTableId = local_93e0._1_1_;
  *(undefined2 *)&(pFVar12->ColorAndOpacity).field_0x12 = local_93e0._2_2_;
  pFVar13 = ::FName::FName(&local_res10,"RichText.Toolbar.BoldText");
  FSlateStyleSet::Set<FTextBlockStyle>(local_9138.Object,*pFVar13,pFVar12);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_9228._56_8_);
  FTextBlockStyle::~FTextBlockStyle(&local_8f38);
  pFVar12 = FTextBlockStyle::FTextBlockStyle(&local_8f38,&local_88e8);
  local_93c8.OutlineColor.field0_0x0._s_0 = FLinearColor::Black.field0_0x0;
  local_93c8._0_8_ = local_93c8._0_8_ & 0xff00000000000000;
  local_93c8.OutlineMaterial.field0_0x0.DebugPtr = (TObjectPtr<UObject>_u_0)0x0;
  pFVar13 = ::FName::FName((FName *)&local_res8._s_0,"Italic");
  pFVar14 = FCoreStyle::GetDefaultFontStyle((FSlateFontInfo *)local_9228,*pFVar13,fVar3,&local_93c8)
  ;
  FSlateFontInfo::operator=(&pFVar12->Font,pFVar14);
  local_93e0 = local_93e0 & 0xffffff00;
  *(undefined1 (*) [8])&(pFVar12->ColorAndOpacity).SpecifiedColor.field0_0x0 = local_9348;
  *(undefined8 *)((longlong)&(pFVar12->ColorAndOpacity).SpecifiedColor.field0_0x0 + 8) =
       _fStack_9340;
  (pFVar12->ColorAndOpacity).ColorUseRule = (undefined1)local_93e0;
  (pFVar12->ColorAndOpacity).ColorTableId = local_93e0._1_1_;
  *(undefined2 *)&(pFVar12->ColorAndOpacity).field_0x12 = local_93e0._2_2_;
  pFVar13 = ::FName::FName(&local_res10,"RichText.Toolbar.ItalicText");
  FSlateStyleSet::Set<FTextBlockStyle>(local_9138.Object,*pFVar13,pFVar12);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_9228._56_8_);
  FTextBlockStyle::~FTextBlockStyle(&local_8f38);
  pFVar23 = FCheckBoxStyle::FCheckBoxStyle(&local_4948);
  (pFVar23->CheckBoxType).Value = '\0';
  local_res8 = (TVector2<float>_u_0)0x4180000041800000;
  pFVar15 = (FString *)
            (**(code **)((local_9138.Object)->_padding_ + 0xf0))
                      (local_9138.Object,local_9270,"Common/CheckBox",L".png");
  pFVar16 = (FSlateBrush *)
            FSlateImageBrush::FSlateImageBrush
                      ((FSlateImageBrush *)local_9228,pFVar15,
                       (FDeprecateVector2DParameter *)&local_res8._s_0,&FLinearColor::White,NoTile,
                       FullColor);
  FSlateBrush::operator=(&pFVar23->UncheckedImage,pFVar16);
  local_res10.ComparisonIndex.Value = 0x41800000;
  local_res10.Number = 0x41800000;
  pFVar15 = (FString *)
            (**(code **)((local_9138.Object)->_padding_ + 0xf0))
                      (local_9138.Object,local_9260,"Common/CheckBox",L".png");
  pFVar16 = (FSlateBrush *)
            FSlateImageBrush::FSlateImageBrush
                      ((FSlateImageBrush *)local_8fe8,pFVar15,
                       (FDeprecateVector2DParameter *)&local_res10,(FLinearColor *)&local_9338,
                       NoTile,FullColor);
  FSlateBrush::operator=(&pFVar23->UncheckedHoveredImage,pFVar16);
  local_res18._0_4_ = 0x41800000;
  local_res18._4_4_ = 0x41800000;
  pFVar15 = (FString *)
            (**(code **)((local_9138.Object)->_padding_ + 0xf0))
                      (local_9138.Object,local_9250,"Common/CheckBox_Hovered",L".png");
  pFVar16 = (FSlateBrush *)
            FSlateImageBrush::FSlateImageBrush
                      ((FSlateImageBrush *)local_8538,pFVar15,&local_res18,
                       (FLinearColor *)&local_9338,NoTile,FullColor);
  FSlateBrush::operator=(&pFVar23->UncheckedPressedImage,pFVar16);
  local_res20._0_4_ = 0x41800000;
  local_res20._4_4_ = 0x41800000;
  pFVar15 = (FString *)
            (**(code **)((local_9138.Object)->_padding_ + 0xf0))
                      (local_9138.Object,&local_92b0,"Common/CheckBox_Checked_Hovered",L".png");
  pFVar16 = (FSlateBrush *)
            FSlateImageBrush::FSlateImageBrush
                      ((FSlateImageBrush *)local_8c58,pFVar15,&local_res20,&FLinearColor::White,
                       NoTile,FullColor);
  FSlateBrush::operator=(&pFVar23->CheckedImage,pFVar16);
  local_9368._0_4_ = 16.0;
  local_9368._4_4_ = 16.0;
  pFVar15 = (FString *)
            (**(code **)((local_9138.Object)->_padding_ + 0xf0))
                      (local_9138.Object,&local_92d0,"Common/CheckBox_Checked_Hovered",L".png");
  pFVar16 = (FSlateBrush *)
            FSlateImageBrush::FSlateImageBrush
                      ((FSlateImageBrush *)local_8ba8,pFVar15,
                       (FDeprecateVector2DParameter *)local_9368,(FLinearColor *)&local_9338,NoTile,
                       FullColor);
  FSlateBrush::operator=(&pFVar23->CheckedHoveredImage,pFVar16);
  local_9358._0_8_ = (FDeprecateVector2DParameter)0x4180000041800000;
  pFVar15 = (FString *)
            (**(code **)((local_9138.Object)->_padding_ + 0xf0))
                      (local_9138.Object,&local_9328,"Common/CheckBox_Checked",L".png");
  pFVar16 = (FSlateBrush *)
            FSlateImageBrush::FSlateImageBrush
                      ((FSlateImageBrush *)local_8af8,pFVar15,
                       (FDeprecateVector2DParameter *)local_9358,(FLinearColor *)&local_9338,NoTile,
                       FullColor);
  FSlateBrush::operator=(&pFVar23->CheckedPressedImage,pFVar16);
  local_9300._0_8_ = (FDeprecateVector2DParameter)0x4180000041800000;
  pFVar15 = (FString *)
            (**(code **)((local_9138.Object)->_padding_ + 0xf0))
                      (local_9138.Object,&local_92f0,"Common/CheckBox_Undetermined",L".png");
  pFVar16 = (FSlateBrush *)
            FSlateImageBrush::FSlateImageBrush
                      ((FSlateImageBrush *)local_8a48,pFVar15,
                       (FDeprecateVector2DParameter *)local_9300,&FLinearColor::White,NoTile,
                       FullColor);
  FSlateBrush::operator=(&pFVar23->UndeterminedImage,pFVar16);
  local_9310[0]._0_4_ = 0x41800000;
  local_9310[0]._4_4_ = 0x41800000;
  pFVar15 = (FString *)
            (**(code **)((local_9138.Object)->_padding_ + 0xf0))
                      (local_9138.Object,&local_93c8,"Common/CheckBox_Undetermined_Hovered",L".png")
  ;
  pFVar16 = (FSlateBrush *)
            FSlateImageBrush::FSlateImageBrush
                      ((FSlateImageBrush *)local_8998,pFVar15,local_9310,(FLinearColor *)&local_9338
                       ,NoTile,FullColor);
  FSlateBrush::operator=(&pFVar23->UndeterminedHoveredImage,pFVar16);
  local_92e0[0]._0_4_ = 0x41800000;
  local_92e0[0]._4_4_ = 0x41800000;
  pFVar15 = (FString *)
            (**(code **)((local_9138.Object)->_padding_ + 0xf0))
                      (local_9138.Object,local_93f0,"Common/CheckBox_Undetermined_Hovered",L".png");
  pFVar16 = (FSlateBrush *)
            FSlateImageBrush::FSlateImageBrush
                      ((FSlateImageBrush *)local_81a8,pFVar15,local_92e0,&FLinearColor::White,NoTile
                       ,FullColor);
  FSlateBrush::operator=(&pFVar23->UndeterminedPressedImage,pFVar16);
  pFVar13 = ::FName::FName((FName *)local_9378,"RichText.Toolbar.Checkbox");
  FSlateStyleSet::Set<FCheckBoxStyle>(local_9138.Object,*pFVar13,pFVar23);
  local_81a8._0_8_ = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_81a8._160_8_);
  if ((FDeprecateVector2DParameter)local_93f0 != (FDeprecateVector2DParameter)0x0) {
    FMemory::Free((void *)local_93f0);
  }
  local_8998[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_88f8);
  if ((void *)local_93c8._0_8_ != (void *)0x0) {
    FMemory::Free((void *)local_93c8._0_8_);
  }
  local_8a48[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_89a8);
  if (local_92f0 != (FDeprecateVector2DParameter)0x0) {
    FMemory::Free((void *)local_92f0);
  }
  local_8af8[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_8a58);
  if (local_9328 != (FDeprecateVector2DParameter)0x0) {
    FMemory::Free((void *)local_9328);
  }
  local_8ba8[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_8b08);
  if ((void *)local_92d0._0_8_ != (void *)0x0) {
    FMemory::Free((void *)local_92d0._0_8_);
  }
  local_8c58[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_8bb8);
  if ((void *)local_92b0._0_8_ != (void *)0x0) {
    FMemory::Free((void *)local_92b0._0_8_);
  }
  local_8538._0_8_ = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_8538._160_8_);
  if (local_9250[0] != (void *)0x0) {
    FMemory::Free(local_9250[0]);
  }
  local_8fe8[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_8f48);
  if (local_9260[0] != (void *)0x0) {
    FMemory::Free(local_9260[0]);
  }
  local_9228._0_8_ = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_9188);
  if (local_9270[0] != (void *)0x0) {
    FMemory::Free(local_9270[0]);
  }
  FCheckBoxStyle::~FCheckBoxStyle(&local_4948);
  pFVar23 = FCheckBoxStyle::FCheckBoxStyle(&local_3ff8);
  (pFVar23->CheckBoxType).Value = '\x01';
  local_93f0 = (undefined1  [8])FVar4;
  _fStack_93e8 = TVar5;
  local_res8 = (TVector2<float>_u_0)0x3f8000003f800000;
  pFVar15 = (FString *)
            (**(code **)((local_9138.Object)->_padding_ + 0xf0))
                      (local_9138.Object,&local_9168,"Testing/FlatColorSquare",L".png");
  pFVar16 = (FSlateBrush *)
            FSlateBoxBrush::FSlateBoxBrush
                      ((FSlateBoxBrush *)local_8c58,pFVar15,
                       (FDeprecateVector2DParameter *)&local_res8._s_0,(FMargin *)local_93f0,
                       (FLinearColor *)local_93a8,FullColor);
  FSlateBrush::operator=(&pFVar23->UncheckedImage,pFVar16);
  local_93c8._0_8_ = FVar4;
  local_93c8.OutlineMaterial.field0_0x0 = TVar5;
  local_res10.ComparisonIndex.Value = 0x3f800000;
  local_res10.Number = 0x3f800000;
  pFVar15 = (FString *)
            (**(code **)((local_9138.Object)->_padding_ + 0xf0))
                      (local_9138.Object,&local_9158,"Testing/FlatColorSquare",L".png");
  pFVar16 = (FSlateBrush *)
            FSlateBoxBrush::FSlateBoxBrush
                      ((FSlateBoxBrush *)local_8ba8,pFVar15,
                       (FDeprecateVector2DParameter *)&local_res10,(FMargin *)&local_93c8,
                       (FLinearColor *)&local_9338,FullColor);
  FSlateBrush::operator=(&pFVar23->UncheckedHoveredImage,pFVar16);
  local_92f0 = FVar4;
  TStack_92e8 = TVar5;
  local_res18._0_4_ = 0x3f800000;
  local_res18._4_4_ = 0x3f800000;
  pFVar15 = (FString *)
            (**(code **)((local_9138.Object)->_padding_ + 0xf0))
                      (local_9138.Object,&local_9148,"Testing/FlatColorSquare",L".png");
  pFVar16 = (FSlateBrush *)
            FSlateBoxBrush::FSlateBoxBrush
                      ((FSlateBoxBrush *)local_8af8,pFVar15,&local_res18,(FMargin *)&local_92f0,
                       (FLinearColor *)&local_9338,FullColor);
  FSlateBrush::operator=(&pFVar23->UncheckedPressedImage,pFVar16);
  local_9328 = FVar4;
  TStack_9320 = TVar5;
  local_res20._0_4_ = 0x3f800000;
  local_res20._4_4_ = 0x3f800000;
  pFVar15 = (FString *)
            (**(code **)((local_9138.Object)->_padding_ + 0xf0))
                      (local_9138.Object,local_9270,"Testing/FlatColorSquare",L".png");
  pFVar16 = (FSlateBrush *)
            FSlateBoxBrush::FSlateBoxBrush
                      ((FSlateBoxBrush *)local_8a48,pFVar15,&local_res20,(FMargin *)&local_9328,
                       (FLinearColor *)local_93d8,FullColor);
  FSlateBrush::operator=(&pFVar23->CheckedImage,pFVar16);
  local_92d0._0_8_ = FVar4;
  local_92d0._8_8_ = TVar5;
  local_9368._0_4_ = 1.0;
  local_9368._4_4_ = 1.0;
  pFVar15 = (FString *)
            (**(code **)((local_9138.Object)->_padding_ + 0xf0))
                      (local_9138.Object,local_9260,"Testing/FlatColorSquare",L".png");
  pFVar16 = (FSlateBrush *)
            FSlateBoxBrush::FSlateBoxBrush
                      ((FSlateBoxBrush *)local_8998,pFVar15,
                       (FDeprecateVector2DParameter *)local_9368,(FMargin *)&local_92d0._s_0,
                       (FLinearColor *)&local_9338,FullColor);
  FSlateBrush::operator=(&pFVar23->CheckedHoveredImage,pFVar16);
  local_92b0._0_8_ = FVar4;
  local_92b0._8_8_ = TVar5;
  local_9358._0_8_ = (FDeprecateVector2DParameter)0x3f8000003f800000;
  pFVar15 = (FString *)
            (**(code **)((local_9138.Object)->_padding_ + 0xf0))
                      (local_9138.Object,local_9250,"Testing/FlatColorSquare",L".png");
  pFVar16 = (FSlateBrush *)
            FSlateBoxBrush::FSlateBoxBrush
                      ((FSlateBoxBrush *)local_81a8,pFVar15,
                       (FDeprecateVector2DParameter *)local_9358,(FMargin *)&local_92b0._s_0,
                       (FLinearColor *)&local_9338,FullColor);
  FSlateBrush::operator=(&pFVar23->CheckedPressedImage,pFVar16);
  pFVar13 = ::FName::FName((FName *)local_9378,"RichText.Toolbar.ToggleButtonCheckbox");
  FSlateStyleSet::Set<FCheckBoxStyle>(local_9138.Object,*pFVar13,pFVar23);
  local_81a8._0_8_ = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_81a8._160_8_);
  if (local_9250[0] != (void *)0x0) {
    FMemory::Free(local_9250[0]);
  }
  local_8998[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_88f8);
  if (local_9260[0] != (void *)0x0) {
    FMemory::Free(local_9260[0]);
  }
  local_8a48[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_89a8);
  if (local_9270[0] != (void *)0x0) {
    FMemory::Free(local_9270[0]);
  }
  local_8af8[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_8a58);
  if ((void *)local_9148._0_8_ != (void *)0x0) {
    FMemory::Free((void *)local_9148._0_8_);
  }
  local_8ba8[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_8b08);
  if ((void *)local_9158._0_8_ != (void *)0x0) {
    FMemory::Free((void *)local_9158._0_8_);
  }
  local_8c58[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_8bb8);
  if ((void *)local_9168._0_8_ != (void *)0x0) {
    FMemory::Free((void *)local_9168._0_8_);
  }
  FCheckBoxStyle::~FCheckBoxStyle(&local_3ff8);
  pFVar20 = FButtonStyle::FButtonStyle((FButtonStyle *)&local_3ff8);
  local_90f8 = FVar4;
  TStack_90f0 = TVar5;
  local_9298._0_4_ = 0x3f800000;
  local_9298._4_4_ = 0x3f800000;
  pFVar15 = (FString *)
            (**(code **)((local_9138.Object)->_padding_ + 0xf0))
                      (local_9138.Object,local_90a8,"Testing/FlatColorSquare",L".png");
  pFVar16 = (FSlateBrush *)
            FSlateBoxBrush::FSlateBoxBrush
                      ((FSlateBoxBrush *)local_8c58,pFVar15,&local_9298,(FMargin *)&local_90f8,
                       (FLinearColor *)local_93a8,FullColor);
  FSlateBrush::operator=(&pFVar20->Normal,pFVar16);
  local_90e8 = FVar4;
  TStack_90e0 = TVar5;
  local_9290._0_4_ = 0x3f800000;
  local_9290._4_4_ = 0x3f800000;
  pFVar15 = (FString *)
            (**(code **)((local_9138.Object)->_padding_ + 0xf0))
                      (local_9138.Object,local_90b8,"Testing/FlatColorSquare",L".png");
  pFVar16 = (FSlateBrush *)
            FSlateBoxBrush::FSlateBoxBrush
                      ((FSlateBoxBrush *)local_8ba8,pFVar15,&local_9290,(FMargin *)&local_90e8,
                       (FLinearColor *)&local_9338,FullColor);
  FSlateBrush::operator=(&pFVar20->Hovered,pFVar16);
  local_90d8 = FVar4;
  TStack_90d0 = TVar5;
  local_9288._0_4_ = 0x3f800000;
  local_9288._4_4_ = 0x3f800000;
  pFVar15 = (FString *)
            (**(code **)((local_9138.Object)->_padding_ + 0xf0))
                      (local_9138.Object,local_90c8,"Testing/FlatColorSquare",L".png");
  pFVar16 = (FSlateBrush *)
            FSlateBoxBrush::FSlateBoxBrush
                      ((FSlateBoxBrush *)local_8af8,pFVar15,&local_9288,(FMargin *)&local_90d8,
                       (FLinearColor *)local_93d8,FullColor);
  FSlateBrush::operator=(&pFVar20->Pressed,pFVar16);
  (pFVar20->NormalPadding).Left = 2.0;
  (pFVar20->NormalPadding).Top = 2.0;
  (pFVar20->NormalPadding).Right = 2.0;
  (pFVar20->NormalPadding).Bottom = 2.0;
  (pFVar20->PressedPadding).Left = 2.0;
  (pFVar20->PressedPadding).Top = 3.0;
  (pFVar20->PressedPadding).Right = 2.0;
  (pFVar20->PressedPadding).Bottom = 1.0;
  FButtonStyle::FButtonStyle(&local_69c8,pFVar20);
  local_8af8[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_8a58);
  if (local_90c8[0] != (void *)0x0) {
    FMemory::Free(local_90c8[0]);
  }
  local_8ba8[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_8b08);
  if (local_90b8[0] != (void *)0x0) {
    FMemory::Free(local_90b8[0]);
  }
  local_8c58[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_8bb8);
  if (local_90a8[0] != (void *)0x0) {
    FMemory::Free(local_90a8[0]);
  }
  FButtonStyle::~FButtonStyle((FButtonStyle *)&local_3ff8);
  pFVar13 = ::FName::FName((FName *)&local_res8._s_0,"RichText.Toolbar.Button");
  FSlateStyleSet::Set<FButtonStyle>(local_9138.Object,*pFVar13,&local_69c8);
  pFVar25 = FComboButtonStyle::FComboButtonStyle(&local_36a8);
  FButtonStyle::operator=(&pFVar25->ButtonStyle,&local_69c8);
  local_9098._0_8_ = FVar4;
  local_9098._8_8_ = TVar5;
  local_9238[0]._0_4_ = 0x41000000;
  local_9238[0]._4_4_ = 0x41000000;
  pFVar15 = (FString *)
            (**(code **)((local_9138.Object)->_padding_ + 0xf0))
                      (local_9138.Object,local_9068,"Common/ComboArrow",L".png");
  pFVar16 = (FSlateBrush *)
            FSlateImageBrush::FSlateImageBrush
                      ((FSlateImageBrush *)local_7d68,pFVar15,local_9238,
                       (FLinearColor *)&local_9098._s_0,NoTile,FullColor);
  FSlateBrush::operator=(&pFVar25->DownArrowImage,pFVar16);
  local_9088 = FVar4;
  TStack_9080 = TVar5;
  local_9240._0_4_ = 0x3f800000;
  local_9240._4_4_ = 0x3f800000;
  pFVar15 = (FString *)
            (**(code **)((local_9138.Object)->_padding_ + 0xf0))
                      (local_9138.Object,local_9078,"Testing/FlatColorSquare",L".png");
  pFVar16 = (FSlateBrush *)
            FSlateBoxBrush::FSlateBoxBrush
                      ((FSlateBoxBrush *)local_7e18,pFVar15,&local_9240,(FMargin *)&local_9088,
                       (FLinearColor *)local_93a8,FullColor);
  FSlateBrush::operator=(&pFVar25->MenuBorderBrush,pFVar16);
  (pFVar25->MenuBorderPadding).Left = 0.0;
  (pFVar25->MenuBorderPadding).Top = 0.0;
  (pFVar25->MenuBorderPadding).Right = 0.0;
  (pFVar25->MenuBorderPadding).Bottom = 0.0;
  FComboButtonStyle::FComboButtonStyle(&local_5468,pFVar25);
  local_7e18[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_7d78);
  if (local_9078[0] != (void *)0x0) {
    FMemory::Free(local_9078[0]);
  }
  local_7d68[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_7cc8);
  if (local_9068[0] != (void *)0x0) {
    FMemory::Free(local_9068[0]);
  }
  FComboButtonStyle::~FComboButtonStyle(&local_36a8);
  pFVar13 = ::FName::FName((FName *)&local_res8._s_0,"RichText.Toolbar.ComboButton");
  FSlateStyleSet::Set<FComboButtonStyle>(local_9138.Object,*pFVar13,&local_5468);
  pFVar20 = FButtonStyle::FButtonStyle(&local_57f8);
  local_9058 = FVar4;
  TStack_9050 = TVar5;
  local_9278._0_4_ = 0x3f800000;
  local_9278._4_4_ = 0x3f800000;
  pFVar15 = (FString *)
            (**(code **)((local_9138.Object)->_padding_ + 0xf0))
                      (local_9138.Object,&local_9408,"Testing/FlatColorSquare",L".png");
  pFVar16 = (FSlateBrush *)
            FSlateBoxBrush::FSlateBoxBrush
                      ((FSlateBoxBrush *)local_8608,pFVar15,&local_9278,(FMargin *)&local_9058,
                       &FLinearColor::White,FullColor);
  FSlateBrush::operator=(&pFVar20->Normal,pFVar16);
  local_9048 = FVar4;
  TStack_9040 = TVar5;
  local_9280._0_4_ = 0x3f800000;
  local_9280._4_4_ = 0x3f800000;
  pFVar15 = (FString *)
            (**(code **)((local_9138.Object)->_padding_ + 0xf0))
                      (local_9138.Object,&local_9398,"Testing/FlatColorSquare",L".png");
  pFVar16 = (FSlateBrush *)
            FSlateBoxBrush::FSlateBoxBrush
                      ((FSlateBoxBrush *)local_7c08,pFVar15,&local_9280,(FMargin *)&local_9048,
                       &FLinearColor::White,FullColor);
  FSlateBrush::operator=(&pFVar20->Hovered,pFVar16);
  local_9038 = FVar4;
  TStack_9030 = TVar5;
  local_9178[0]._0_4_ = 0x3f800000;
  local_9178[0]._4_4_ = 0x3f800000;
  pFVar15 = (FString *)
            (**(code **)((local_9138.Object)->_padding_ + 0xf0))
                      (local_9138.Object,local_9028,"Testing/FlatColorSquare",L".png");
  pFVar16 = (FSlateBrush *)
            FSlateBoxBrush::FSlateBoxBrush
                      ((FSlateBoxBrush *)local_7cb8,pFVar15,local_9178,(FMargin *)&local_9038,
                       &FLinearColor::White,FullColor);
  FSlateBrush::operator=(&pFVar20->Pressed,pFVar16);
  (pFVar20->NormalPadding).Left = 2.0;
  (pFVar20->NormalPadding).Top = 2.0;
  (pFVar20->NormalPadding).Right = 2.0;
  (pFVar20->NormalPadding).Bottom = 2.0;
  (pFVar20->PressedPadding).Left = 2.0;
  (pFVar20->PressedPadding).Top = 3.0;
  (pFVar20->PressedPadding).Right = 2.0;
  (pFVar20->PressedPadding).Bottom = 1.0;
  FButtonStyle::FButtonStyle(&local_6d58,pFVar20);
  local_7cb8[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_7c18);
  if (local_9028[0] != (void *)0x0) {
    FMemory::Free(local_9028[0]);
  }
  local_7c08[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_7b68);
  pvVar2 = (void *)CONCAT17(local_9398._padding_,
                            CONCAT16(local_9398.bApplyOutlineToDropShadows,
                                     CONCAT24(local_9398._4_2_,local_9398.OutlineSize)));
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  local_8608._0_8_ = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_8608._160_8_);
  if ((void *)CONCAT44(fStack_9404,local_9408) != (void *)0x0) {
    FMemory::Free((void *)CONCAT44(fStack_9404,local_9408));
  }
  FButtonStyle::~FButtonStyle(&local_57f8);
  pFVar25 = FComboButtonStyle::FComboButtonStyle((FComboButtonStyle *)&local_4f08,&local_5468);
  FButtonStyle::operator=(&pFVar25->ButtonStyle,&local_6d58);
  (pFVar25->MenuBorderPadding).Left = 1.0;
  (pFVar25->MenuBorderPadding).Top = 1.0;
  (pFVar25->MenuBorderPadding).Right = 1.0;
  (pFVar25->MenuBorderPadding).Bottom = 1.0;
  FComboButtonStyle::FComboButtonStyle(&local_7598,pFVar25);
  FComboButtonStyle::~FComboButtonStyle((FComboButtonStyle *)&local_4f08);
  pFVar26 = FComboBoxStyle::FComboBoxStyle(&local_4f08);
  FButtonStyle::operator=(&(pFVar26->ComboButtonStyle).ButtonStyle,&local_7598.ButtonStyle);
  FSlateBrush::operator=(&(pFVar26->ComboButtonStyle).DownArrowImage,&local_7598.DownArrowImage);
  (pFVar26->ComboButtonStyle).ShadowOffset = local_7598.ShadowOffset;
  *(undefined8 *)&(pFVar26->ComboButtonStyle).ShadowColorAndOpacity.field0_0x0 =
       local_7598.ShadowColorAndOpacity.field0_0x0._0_8_;
  *(undefined8 *)((longlong)&(pFVar26->ComboButtonStyle).ShadowColorAndOpacity.field0_0x0 + 8) =
       local_7598.ShadowColorAndOpacity.field0_0x0._8_8_;
  FSlateBrush::operator=(&(pFVar26->ComboButtonStyle).MenuBorderBrush,&local_7598.MenuBorderBrush);
  (pFVar26->ComboButtonStyle).MenuBorderPadding.Left = local_7598.MenuBorderPadding.Left;
  (pFVar26->ComboButtonStyle).MenuBorderPadding.Top = local_7598.MenuBorderPadding.Top;
  (pFVar26->ComboButtonStyle).MenuBorderPadding.Right = local_7598.MenuBorderPadding.Right;
  (pFVar26->ComboButtonStyle).MenuBorderPadding.Bottom = local_7598.MenuBorderPadding.Bottom;
  (pFVar26->ComboButtonStyle).ContentPadding.Left = local_7598.ContentPadding.Left;
  (pFVar26->ComboButtonStyle).ContentPadding.Top = local_7598.ContentPadding.Top;
  (pFVar26->ComboButtonStyle).ContentPadding.Right = local_7598.ContentPadding.Right;
  (pFVar26->ComboButtonStyle).ContentPadding.Bottom = local_7598.ContentPadding.Bottom;
  (pFVar26->ComboButtonStyle).DownArrowPadding.Left = local_7598.DownArrowPadding.Left;
  (pFVar26->ComboButtonStyle).DownArrowPadding.Top = local_7598.DownArrowPadding.Top;
  (pFVar26->ComboButtonStyle).DownArrowPadding.Right = local_7598.DownArrowPadding.Right;
  (pFVar26->ComboButtonStyle).DownArrowPadding.Bottom = local_7598.DownArrowPadding.Bottom;
  (pFVar26->ComboButtonStyle).DownArrowAlign.Value = local_7598.DownArrowAlign.Value;
  pFVar13 = ::FName::FName((FName *)&local_res8._s_0,"RichText.Toolbar.ComboBox");
  FSlateStyleSet::Set<FComboBoxStyle>(local_9138.Object,*pFVar13,pFVar26);
  FComboBoxStyle::~FComboBoxStyle(&local_4f08);
  FComboButtonStyle::~FComboButtonStyle(&local_7598);
  FButtonStyle::~FButtonStyle(&local_6d58);
  FComboButtonStyle::~FComboButtonStyle(&local_5468);
  FButtonStyle::~FButtonStyle(&local_69c8);
  pFVar12 = FTextBlockStyle::FTextBlockStyle(&local_8f38,&local_88e8);
  local_9398.OutlineSize = 0;
  local_9398.bMiteredCorners = false;
  local_9398.bSeparateFillAlpha = false;
  local_9398.OutlineColor.field0_0x0._s_0 = FLinearColor::Black.field0_0x0;
  local_9398.bApplyOutlineToDropShadows = false;
  local_9398.OutlineMaterial.field0_0x0.DebugPtr = (TObjectPtr<UObject>_u_0)0x0;
  pFVar13 = ::FName::FName((FName *)&local_res8._s_0,"Regular");
  pFVar14 = FCoreStyle::GetDefaultFontStyle((FSlateFontInfo *)local_9228,*pFVar13,fVar3,&local_9398)
  ;
  FSlateFontInfo::operator=(&pFVar12->Font,pFVar14);
  fStack_9400 = FLinearColor::sRGBToLinearTable[0x50];
  fStack_9404 = FLinearColor::sRGBToLinearTable[0x3e];
  local_9408 = FLinearColor::sRGBToLinearTable[0x2c];
  local_93f8 = local_93f8 & 0xffffff00;
  (pFVar12->ColorAndOpacity).SpecifiedColor.field0_0x0._s_0.R =
       FLinearColor::sRGBToLinearTable[0x2c];
  (pFVar12->ColorAndOpacity).SpecifiedColor.field0_0x0._s_0.G = fStack_9404;
  (pFVar12->ColorAndOpacity).SpecifiedColor.field0_0x0._s_0.B = fStack_9400;
  (pFVar12->ColorAndOpacity).SpecifiedColor.field0_0x0._s_0.A = 1.0;
  (pFVar12->ColorAndOpacity).ColorUseRule = (undefined1)local_93f8;
  (pFVar12->ColorAndOpacity).ColorTableId = local_93f8._1_1_;
  *(undefined2 *)&(pFVar12->ColorAndOpacity).field_0x12 = local_93f8._2_2_;
  uStack_93fc = 0x3f800000;
  pFVar13 = ::FName::FName(&local_res10,"TheWarOfTheWorlds.Text");
  FSlateStyleSet::Set<FTextBlockStyle>(local_9138.Object,*pFVar13,pFVar12);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_9228._56_8_);
  FTextBlockStyle::~FTextBlockStyle(&local_8f38);
  pFVar12 = FTextBlockStyle::FTextBlockStyle(&local_8f38,&local_88e8);
  local_9398.OutlineSize = 0;
  local_9398.bMiteredCorners = false;
  local_9398.bSeparateFillAlpha = false;
  local_9398.OutlineColor.field0_0x0._s_0 = FLinearColor::Black.field0_0x0;
  local_9398.bApplyOutlineToDropShadows = false;
  local_9398.OutlineMaterial.field0_0x0.DebugPtr = (TObjectPtr<UObject>_u_0)0x0;
  pFVar13 = ::FName::FName((FName *)&local_res8._s_0,"Regular");
  pFVar14 = FCoreStyle::GetDefaultFontStyle
                      ((FSlateFontInfo *)local_9228,*pFVar13,fVar28,&local_9398);
  FSlateFontInfo::operator=(&pFVar12->Font,pFVar14);
  fStack_9400 = FLinearColor::sRGBToLinearTable[0x50];
  fStack_9404 = FLinearColor::sRGBToLinearTable[0x3e];
  local_9408 = FLinearColor::sRGBToLinearTable[0x2c];
  local_93f8 = local_93f8 & 0xffffff00;
  (pFVar12->ColorAndOpacity).SpecifiedColor.field0_0x0._s_0.R =
       FLinearColor::sRGBToLinearTable[0x2c];
  (pFVar12->ColorAndOpacity).SpecifiedColor.field0_0x0._s_0.G = fStack_9404;
  (pFVar12->ColorAndOpacity).SpecifiedColor.field0_0x0._s_0.B = fStack_9400;
  (pFVar12->ColorAndOpacity).SpecifiedColor.field0_0x0._s_0.A = 1.0;
  (pFVar12->ColorAndOpacity).ColorUseRule = (undefined1)local_93f8;
  (pFVar12->ColorAndOpacity).ColorTableId = local_93f8._1_1_;
  *(undefined2 *)&(pFVar12->ColorAndOpacity).field_0x12 = local_93f8._2_2_;
  uStack_93fc = 0x3f800000;
  pFVar13 = ::FName::FName(&local_res10,"Rainbow.Text");
  FSlateStyleSet::Set<FTextBlockStyle>(local_9138.Object,*pFVar13,pFVar12);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_9228._56_8_);
  FTextBlockStyle::~FTextBlockStyle(&local_8f38);
  pFVar12 = FTextBlockStyle::FTextBlockStyle(&local_8f38,&local_88e8);
  local_9398.OutlineSize = 0;
  local_9398.bMiteredCorners = false;
  local_9398.bSeparateFillAlpha = false;
  local_9398.bApplyOutlineToDropShadows = false;
  local_9398.OutlineMaterial.field0_0x0.DebugPtr = (TObjectPtr<UObject>_u_0)0x0;
  local_9398.OutlineColor.field0_0x0._s_0 = FLinearColor::Black.field0_0x0;
  pFVar13 = ::FName::FName((FName *)&local_res8._s_0,"Regular");
  pFVar14 = FCoreStyle::GetDefaultFontStyle
                      ((FSlateFontInfo *)local_9228,*pFVar13,fVar28,&local_9398);
  FSlateFontInfo::operator=(&pFVar12->Font,pFVar14);
  local_9408 = FLinearColor::sRGBToLinearTable[0xb4];
  fStack_9404 = FLinearColor::sRGBToLinearTable[0];
  local_93f8 = local_93f8 & 0xffffff00;
  (pFVar12->ColorAndOpacity).SpecifiedColor.field0_0x0._s_0.R =
       FLinearColor::sRGBToLinearTable[0xb4];
  (pFVar12->ColorAndOpacity).SpecifiedColor.field0_0x0._s_0.G = fStack_9404;
  (pFVar12->ColorAndOpacity).SpecifiedColor.field0_0x0._s_0.B = fStack_9404;
  (pFVar12->ColorAndOpacity).SpecifiedColor.field0_0x0._s_0.A = 1.0;
  (pFVar12->ColorAndOpacity).ColorUseRule = (undefined1)local_93f8;
  (pFVar12->ColorAndOpacity).ColorTableId = local_93f8._1_1_;
  *(undefined2 *)&(pFVar12->ColorAndOpacity).field_0x12 = local_93f8._2_2_;
  fStack_9400 = fStack_9404;
  uStack_93fc = 0x3f800000;
  pFVar13 = ::FName::FName(&local_res10,"Rainbow.Text.Red");
  FSlateStyleSet::Set<FTextBlockStyle>(local_9138.Object,*pFVar13,pFVar12);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_9228._56_8_);
  FTextBlockStyle::~FTextBlockStyle(&local_8f38);
  pFVar12 = FTextBlockStyle::FTextBlockStyle(&local_8f38,&local_88e8);
  local_9398.OutlineSize = 0;
  local_9398.bMiteredCorners = false;
  local_9398.bSeparateFillAlpha = false;
  local_9398.OutlineColor.field0_0x0._s_0 = FLinearColor::Black.field0_0x0;
  local_9398.bApplyOutlineToDropShadows = false;
  local_9398.OutlineMaterial.field0_0x0.DebugPtr = (TObjectPtr<UObject>_u_0)0x0;
  pFVar13 = ::FName::FName((FName *)&local_res8._s_0,"Regular");
  pFVar14 = FCoreStyle::GetDefaultFontStyle
                      ((FSlateFontInfo *)local_9228,*pFVar13,fVar28,&local_9398);
  FSlateFontInfo::operator=(&pFVar12->Font,pFVar14);
  local_9408 = FLinearColor::sRGBToLinearTable[0xb4];
  fStack_9404 = FLinearColor::sRGBToLinearTable[0x61];
  fStack_9400 = FLinearColor::sRGBToLinearTable[0];
  local_93f8 = local_93f8 & 0xffffff00;
  (pFVar12->ColorAndOpacity).SpecifiedColor.field0_0x0._s_0.R =
       FLinearColor::sRGBToLinearTable[0xb4];
  (pFVar12->ColorAndOpacity).SpecifiedColor.field0_0x0._s_0.G = fStack_9404;
  (pFVar12->ColorAndOpacity).SpecifiedColor.field0_0x0._s_0.B = fStack_9400;
  (pFVar12->ColorAndOpacity).SpecifiedColor.field0_0x0._s_0.A = 1.0;
  (pFVar12->ColorAndOpacity).ColorUseRule = (undefined1)local_93f8;
  (pFVar12->ColorAndOpacity).ColorTableId = local_93f8._1_1_;
  *(undefined2 *)&(pFVar12->ColorAndOpacity).field_0x12 = local_93f8._2_2_;
  uStack_93fc = 0x3f800000;
  pFVar13 = ::FName::FName(&local_res10,"Rainbow.Text.Orange");
  FSlateStyleSet::Set<FTextBlockStyle>(local_9138.Object,*pFVar13,pFVar12);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_9228._56_8_);
  FTextBlockStyle::~FTextBlockStyle(&local_8f38);
  pFVar12 = FTextBlockStyle::FTextBlockStyle(&local_8f38,&local_88e8);
  local_9398.OutlineSize = 0;
  local_9398.bMiteredCorners = false;
  local_9398.bSeparateFillAlpha = false;
  local_9398.OutlineColor.field0_0x0._s_0 = FLinearColor::Black.field0_0x0;
  local_9398.bApplyOutlineToDropShadows = false;
  local_9398.OutlineMaterial.field0_0x0.DebugPtr = (TObjectPtr<UObject>_u_0)0x0;
  pFVar13 = ::FName::FName((FName *)&local_res8._s_0,"Regular");
  pFVar14 = FCoreStyle::GetDefaultFontStyle
                      ((FSlateFontInfo *)local_9228,*pFVar13,fVar28,&local_9398);
  FSlateFontInfo::operator=(&pFVar12->Font,pFVar14);
  fStack_9404 = FLinearColor::sRGBToLinearTable[0xb4];
  local_9408 = FLinearColor::sRGBToLinearTable[0xb2];
  fStack_9400 = FLinearColor::sRGBToLinearTable[0];
  local_93f8 = local_93f8 & 0xffffff00;
  (pFVar12->ColorAndOpacity).SpecifiedColor.field0_0x0._s_0.R =
       FLinearColor::sRGBToLinearTable[0xb2];
  (pFVar12->ColorAndOpacity).SpecifiedColor.field0_0x0._s_0.G = fStack_9404;
  (pFVar12->ColorAndOpacity).SpecifiedColor.field0_0x0._s_0.B = fStack_9400;
  (pFVar12->ColorAndOpacity).SpecifiedColor.field0_0x0._s_0.A = 1.0;
  (pFVar12->ColorAndOpacity).ColorUseRule = (undefined1)local_93f8;
  (pFVar12->ColorAndOpacity).ColorTableId = local_93f8._1_1_;
  *(undefined2 *)&(pFVar12->ColorAndOpacity).field_0x12 = local_93f8._2_2_;
  uStack_93fc = 0x3f800000;
  pFVar13 = ::FName::FName(&local_res10,"Rainbow.Text.Yellow");
  FSlateStyleSet::Set<FTextBlockStyle>(local_9138.Object,*pFVar13,pFVar12);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_9228._56_8_);
  FTextBlockStyle::~FTextBlockStyle(&local_8f38);
  pFVar12 = FTextBlockStyle::FTextBlockStyle(&local_8f38,&local_88e8);
  local_9398.OutlineSize = 0;
  local_9398.bMiteredCorners = false;
  local_9398.bSeparateFillAlpha = false;
  local_9398.OutlineColor.field0_0x0._s_0 = FLinearColor::Black.field0_0x0;
  local_9398.bApplyOutlineToDropShadows = false;
  local_9398.OutlineMaterial.field0_0x0.DebugPtr = (TObjectPtr<UObject>_u_0)0x0;
  pFVar13 = ::FName::FName((FName *)&local_res8._s_0,"Regular");
  pFVar14 = FCoreStyle::GetDefaultFontStyle
                      ((FSlateFontInfo *)local_9228,*pFVar13,fVar28,&local_9398);
  FSlateFontInfo::operator=(&pFVar12->Font,pFVar14);
  fStack_9404 = FLinearColor::sRGBToLinearTable[0xb4];
  local_9408 = FLinearColor::sRGBToLinearTable[0x22];
  fStack_9400 = FLinearColor::sRGBToLinearTable[0];
  local_93f8 = local_93f8 & 0xffffff00;
  (pFVar12->ColorAndOpacity).SpecifiedColor.field0_0x0._s_0.R =
       FLinearColor::sRGBToLinearTable[0x22];
  (pFVar12->ColorAndOpacity).SpecifiedColor.field0_0x0._s_0.G = fStack_9404;
  (pFVar12->ColorAndOpacity).SpecifiedColor.field0_0x0._s_0.B = fStack_9400;
  (pFVar12->ColorAndOpacity).SpecifiedColor.field0_0x0._s_0.A = 1.0;
  (pFVar12->ColorAndOpacity).ColorUseRule = (undefined1)local_93f8;
  (pFVar12->ColorAndOpacity).ColorTableId = local_93f8._1_1_;
  *(undefined2 *)&(pFVar12->ColorAndOpacity).field_0x12 = local_93f8._2_2_;
  uStack_93fc = 0x3f800000;
  pFVar13 = ::FName::FName(&local_res10,"Rainbow.Text.Green");
  FSlateStyleSet::Set<FTextBlockStyle>(local_9138.Object,*pFVar13,pFVar12);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_9228._56_8_);
  FTextBlockStyle::~FTextBlockStyle(&local_8f38);
  pFVar12 = FTextBlockStyle::FTextBlockStyle(&local_8f38,&local_88e8);
  local_9398.OutlineSize = 0;
  local_9398.bMiteredCorners = false;
  local_9398.bSeparateFillAlpha = false;
  local_9398.OutlineColor.field0_0x0._s_0 = FLinearColor::Black.field0_0x0;
  local_9398.bApplyOutlineToDropShadows = false;
  local_9398.OutlineMaterial.field0_0x0.DebugPtr = (TObjectPtr<UObject>_u_0)0x0;
  pFVar13 = ::FName::FName((FName *)&local_res8._s_0,"Regular");
  pFVar14 = FCoreStyle::GetDefaultFontStyle
                      ((FSlateFontInfo *)local_9228,*pFVar13,fVar28,&local_9398);
  FSlateFontInfo::operator=(&pFVar12->Font,pFVar14);
  fStack_9400 = FLinearColor::sRGBToLinearTable[0xb4];
  fStack_9404 = FLinearColor::sRGBToLinearTable[0x6a];
  local_9408 = FLinearColor::sRGBToLinearTable[0];
  local_93f8 = local_93f8 & 0xffffff00;
  (pFVar12->ColorAndOpacity).SpecifiedColor.field0_0x0._s_0.R = FLinearColor::sRGBToLinearTable[0];
  (pFVar12->ColorAndOpacity).SpecifiedColor.field0_0x0._s_0.G = fStack_9404;
  (pFVar12->ColorAndOpacity).SpecifiedColor.field0_0x0._s_0.B = fStack_9400;
  (pFVar12->ColorAndOpacity).SpecifiedColor.field0_0x0._s_0.A = 1.0;
  (pFVar12->ColorAndOpacity).ColorUseRule = (undefined1)local_93f8;
  (pFVar12->ColorAndOpacity).ColorTableId = local_93f8._1_1_;
  *(undefined2 *)&(pFVar12->ColorAndOpacity).field_0x12 = local_93f8._2_2_;
  uStack_93fc = 0x3f800000;
  pFVar13 = ::FName::FName(&local_res10,"Rainbow.Text.Blue");
  FSlateStyleSet::Set<FTextBlockStyle>(local_9138.Object,*pFVar13,pFVar12);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_9228._56_8_);
  FTextBlockStyle::~FTextBlockStyle(&local_8f38);
  FHyperlinkStyle::~FHyperlinkStyle(&local_1d98);
  FButtonStyle::~FButtonStyle(&local_5f18);
  FTextBlockStyle::~FTextBlockStyle(&local_7b58);
  __return_storage_ptr__->Object = (ISlateStyle *)local_9138.Object;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       local_9138.SharedReferenceCount.ReferenceController;
  if (local_9138.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_9138.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_9138.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  FTextBlockStyle::~FTextBlockStyle(&local_88e8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_9138.SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// Get @ 142fcfb60

ISlateStyle * __cdecl FTestStyle::Get(void)

{
  return Instance.Object;
}

// ResetToDefault @ 143008a10

void __cdecl FTestStyle::ResetToDefault(void)

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

// SetStyle @ 14300de40

void __cdecl FTestStyle::SetStyle(TSharedRef<ISlateStyle,1> *param_1)

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

