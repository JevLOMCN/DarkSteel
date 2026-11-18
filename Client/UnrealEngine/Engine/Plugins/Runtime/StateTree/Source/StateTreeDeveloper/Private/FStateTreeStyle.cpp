// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StateTreeDeveloper
// Functions: 6

// FStateTreeStyle @ 14d70d170

FStateTreeStyle * __thiscall FStateTreeStyle::FStateTreeStyle(FStateTreeStyle *this)

{
  FName local_res8 [4];
  
  ::FName::FName(local_res8,L"StateTreeStyle");
  FStateTreeStyle(this,local_res8);
  *(undefined ***)this = &___7FStateTreeStyle__6B_;
  return this;
}

// FStateTreeStyle @ 14d70d1b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FStateTreeStyle * __thiscall FStateTreeStyle::FStateTreeStyle(FStateTreeStyle *this,FName *param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  float fVar4;
  undefined8 uVar5;
  ISlateStyle *pIVar6;
  FName *pFVar7;
  FTextBlockStyle *pFVar8;
  FTextBlockStyle *pFVar9;
  FSlateFontInfo *pFVar10;
  FSlateRoundedBoxBrush *pFVar11;
  FSlateRoundedBoxBrush *pFVar12;
  FSlateImageBrush *pFVar13;
  FString *pFVar14;
  FSlateImageBrush *pFVar15;
  FSlateImageBrush *pFVar16;
  char cVar17;
  TVector2<float>_u_0 local_res8;
  FName local_res18;
  FName local_res20;
  undefined1 local_698 [8];
  float fStack_690;
  float fStack_68c;
  FLinearColor_u_0 local_688;
  undefined1 local_678 [16];
  FLinearColor_u_0 local_668;
  FSlateFontInfo local_658;
  FTextBlockStyle local_5f8;
  FTextBlockStyle local_318;
  
  pFVar16 = (FSlateImageBrush *)0x0;
  local_res8._s_0 = local_res8._s_0 & 0xffffffff00000000;
  FSlateStyleSet::FSlateStyleSet((FSlateStyleSet *)this,param_1);
  *(undefined ***)this = &___7FStateTreeStyle__6B_;
  FSlateStyleSet::SetCoreContentRoot((FSlateStyleSet *)this,&EngineSlateContentDir);
  FSlateStyleSet::SetContentRoot((FSlateStyleSet *)this,&StateTreePluginContentDir);
  pIVar6 = FAppStyle::Get();
  pFVar7 = ::FName::FName(&local_res18,"NormalText");
  pFVar8 = (FTextBlockStyle *)
           (**(code **)((longlong)*pIVar6 + 0xa0))(pIVar6,FTextBlockStyle::TypeName,*pFVar7,0,1);
  if (pFVar8 == (FTextBlockStyle *)0x0) {
    pFVar8 = FTextBlockStyle::GetDefault();
  }
  pFVar9 = FTextBlockStyle::FTextBlockStyle(&local_318,pFVar8);
  local_688 = FLinearColor::Black.field0_0x0;
  local_698 = (undefined1  [8])((ulonglong)(byte)local_698[7] << 0x38);
  _fStack_690 = (UObject *)0x0;
  pFVar7 = ::FName::FName((FName *)&local_res8._s_0,"Regular");
  fVar4 = __real_41200000;
  pFVar10 = FCoreStyle::GetDefaultFontStyle
                      (&local_658,*pFVar7,__real_41200000,(FFontOutlineSettings *)local_698);
  pFVar9 = FTextBlockStyle::SetFont(pFVar9,pFVar10);
  pFVar7 = ::FName::FName(&local_res20,"StateTreeDebugger.Element.Normal");
  FSlateStyleSet::Set<FTextBlockStyle>((FSlateStyleSet *)this,*pFVar7,pFVar9);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_658.CompositeFont.SharedReferenceCount.ReferenceController);
  FTextBlockStyle::~FTextBlockStyle(&local_318);
  pFVar9 = FTextBlockStyle::FTextBlockStyle(&local_318,pFVar8);
  local_688 = FLinearColor::Black.field0_0x0;
  local_698 = (undefined1  [8])((ulonglong)local_698 & 0xff00000000000000);
  _fStack_690 = (UObject *)0x0;
  pFVar7 = ::FName::FName((FName *)&local_res8._s_0,"Bold");
  pFVar10 = FCoreStyle::GetDefaultFontStyle
                      (&local_658,*pFVar7,fVar4,(FFontOutlineSettings *)local_698);
  pFVar9 = FTextBlockStyle::SetFont(pFVar9,pFVar10);
  pFVar7 = ::FName::FName(&local_res20,"StateTreeDebugger.Element.Bold");
  FSlateStyleSet::Set<FTextBlockStyle>((FSlateStyleSet *)this,*pFVar7,pFVar9);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_658.CompositeFont.SharedReferenceCount.ReferenceController);
  FTextBlockStyle::~FTextBlockStyle(&local_318);
  pFVar9 = FTextBlockStyle::FTextBlockStyle(&local_318,pFVar8);
  local_668 = FLinearColor::Black.field0_0x0;
  local_678._0_8_ = (ulonglong)(byte)local_678[7] << 0x38;
  local_678._8_8_ = (UObject *)0x0;
  pFVar7 = ::FName::FName((FName *)&local_res8._s_0,"Regular");
  pFVar10 = FCoreStyle::GetDefaultFontStyle
                      (&local_658,*pFVar7,fVar4,(FFontOutlineSettings *)local_678);
  pFVar9 = FTextBlockStyle::SetFont(pFVar9,pFVar10);
  uVar5 = _UNK_15090c6d8;
  local_688._0_2_ = 3;
  *(undefined8 *)&(pFVar9->ColorAndOpacity).SpecifiedColor.field0_0x0 =
       ___xmm_3f8000003f800000000000003f800000;
  *(undefined8 *)((longlong)&(pFVar9->ColorAndOpacity).SpecifiedColor.field0_0x0 + 8) = uVar5;
  *(float *)&(pFVar9->ColorAndOpacity).ColorUseRule = local_688._s_0.R;
  pFVar7 = ::FName::FName(&local_res20,"StateTreeDebugger.Element.Subdued");
  FSlateStyleSet::Set<FTextBlockStyle>((FSlateStyleSet *)this,*pFVar7,pFVar9);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_658.CompositeFont.SharedReferenceCount.ReferenceController);
  FTextBlockStyle::~FTextBlockStyle(&local_318);
  pFVar9 = FTextBlockStyle::FTextBlockStyle(&local_5f8,pFVar8);
  local_668 = FLinearColor::Black.field0_0x0;
  local_678._0_8_ = local_678._0_8_ & 0xff00000000000000;
  local_678._8_8_ = (UObject *)0x0;
  pFVar7 = ::FName::FName((FName *)&local_res8._s_0,"Bold");
  pFVar10 = FCoreStyle::GetDefaultFontStyle
                      (&local_658,*pFVar7,__real_41400000,(FFontOutlineSettings *)local_678);
  pFVar9 = FTextBlockStyle::SetFont(pFVar9,pFVar10);
  uVar5 = _UNK_152bc6608;
  auVar1[0xf] = 0;
  auVar1._0_15_ = local_688._1_15_;
  local_688 = (FLinearColor_u_0)(auVar1 << 8);
  *(undefined8 *)&(pFVar9->ColorAndOpacity).SpecifiedColor.field0_0x0 =
       ___xmm_3f6666663f66e6e73f66e6e73f66e6e7;
  *(undefined8 *)((longlong)&(pFVar9->ColorAndOpacity).SpecifiedColor.field0_0x0 + 8) = uVar5;
  *(float *)&(pFVar9->ColorAndOpacity).ColorUseRule = local_688._s_0.R;
  FTextBlockStyle::FTextBlockStyle(&local_318,pFVar9);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_658.CompositeFont.SharedReferenceCount.ReferenceController);
  FTextBlockStyle::~FTextBlockStyle(&local_5f8);
  FLazyName::Resolve(&StateTitleTextStyleName);
  FSlateStyleSet::Set<FTextBlockStyle>((FSlateStyleSet *)this,(FName)local_res8._s_0,&local_318);
  pFVar11 = ::operator_new(0xb0);
  pFVar12 = (FSlateRoundedBoxBrush *)pFVar16;
  if (pFVar11 != (FSlateRoundedBoxBrush *)0x0) {
    local_res8 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
    pFVar12 = FSlateRoundedBoxBrush::FSlateRoundedBoxBrush<FLinearColor,float>
                        (pFVar11,&FLinearColor::White,__real_40000000,
                         (FDeprecateVector2DParameter *)&local_res8._s_0);
  }
  pFVar7 = ::FName::FName(&local_res20,"StateTree.State");
  FSlateStyleSet::Set<FSlateRoundedBoxBrush>((FSlateStyleSet *)this,*pFVar7,pFVar12);
  pFVar11 = ::operator_new(0xb0);
  pFVar12 = (FSlateRoundedBoxBrush *)pFVar16;
  if (pFVar11 != (FSlateRoundedBoxBrush *)0x0) {
    local_res8 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
    pFVar12 = FSlateRoundedBoxBrush::FSlateRoundedBoxBrush<FLinearColor,float>
                        (pFVar11,&FLinearColor::White,__real_40000000,
                         (FDeprecateVector2DParameter *)&local_res8._s_0);
  }
  pFVar7 = ::FName::FName(&local_res20,"StateTree.State.Border");
  FSlateStyleSet::Set<FSlateRoundedBoxBrush>((FSlateStyleSet *)this,*pFVar7,pFVar12);
  auVar2[0xf] = 0;
  auVar2._0_15_ = local_688._1_15_;
  local_688 = (FLinearColor_u_0)(auVar2 << 8);
  local_698._4_4_ = (float)((uint)FColor::Yellow.field0_0x0 >> 8 & 0xff) * __real_3b808081;
  local_698._0_4_ = (float)((uint)FColor::Yellow.field0_0x0 >> 0x10 & 0xff) * __real_3b808081;
  fStack_68c = (float)((uint)FColor::Yellow.field0_0x0 >> 0x18) * __real_3b808081;
  fStack_690 = (float)((uint)FColor::Yellow.field0_0x0 & 0xff) * __real_3b808081;
  pFVar7 = ::FName::FName((FName *)&local_res8._s_0,"StateTree.Debugger.State.Active");
  FSlateStyleSet::Set((FSlateStyleSet *)this,*pFVar7,(FSlateColor *)local_698);
  local_698._4_4_ = FLinearColor::sRGBToLinearTable[100];
  local_698._0_4_ = FLinearColor::sRGBToLinearTable[10];
  fStack_68c = 1.0;
  fStack_690 = FLinearColor::sRGBToLinearTable[0x78];
  auVar3[0xf] = 0;
  auVar3._0_15_ = local_688._1_15_;
  local_688 = (FLinearColor_u_0)(auVar3 << 8);
  pFVar7 = ::FName::FName((FName *)&local_res8._s_0,"StateTree.CompactView.State");
  FSlateStyleSet::Set((FSlateStyleSet *)this,*pFVar7,(FSlateColor *)local_698);
  FTextBlockStyle::~FTextBlockStyle(&local_318);
  pFVar9 = FTextBlockStyle::FTextBlockStyle(&local_5f8,pFVar8);
  uVar5 = _UNK_15090c6d8;
  local_688._0_2_ = 2;
  *(undefined8 *)&(pFVar9->ColorAndOpacity).SpecifiedColor.field0_0x0 =
       ___xmm_3f8000003f800000000000003f800000;
  *(undefined8 *)((longlong)&(pFVar9->ColorAndOpacity).SpecifiedColor.field0_0x0 + 8) = uVar5;
  *(float *)&(pFVar9->ColorAndOpacity).ColorUseRule = local_688._s_0.R;
  local_668 = FLinearColor::Black.field0_0x0;
  local_678._0_8_ = local_678._0_8_ & 0xff00000000000000;
  local_678._8_8_ = (UObject *)0x0;
  pFVar7 = ::FName::FName((FName *)&local_res8._s_0,"Regular");
  pFVar10 = FCoreStyle::GetDefaultFontStyle
                      (&local_658,*pFVar7,fVar4,(FFontOutlineSettings *)local_678);
  pFVar9 = FTextBlockStyle::SetFont(pFVar9,pFVar10);
  pFVar7 = ::FName::FName(&local_res20,"Normal.Normal");
  FSlateStyleSet::Set<FTextBlockStyle>((FSlateStyleSet *)this,*pFVar7,pFVar9);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_658.CompositeFont.SharedReferenceCount.ReferenceController);
  FTextBlockStyle::~FTextBlockStyle(&local_5f8);
  pFVar9 = FTextBlockStyle::FTextBlockStyle(&local_5f8,pFVar8);
  uVar5 = _UNK_15090c6d8;
  local_688._0_2_ = 2;
  *(undefined8 *)&(pFVar9->ColorAndOpacity).SpecifiedColor.field0_0x0 =
       ___xmm_3f8000003f800000000000003f800000;
  *(undefined8 *)((longlong)&(pFVar9->ColorAndOpacity).SpecifiedColor.field0_0x0 + 8) = uVar5;
  *(float *)&(pFVar9->ColorAndOpacity).ColorUseRule = local_688._s_0.R;
  local_668 = FLinearColor::Black.field0_0x0;
  local_678._0_8_ = local_678._0_8_ & 0xff00000000000000;
  local_678._8_8_ = (UObject *)0x0;
  pFVar7 = ::FName::FName((FName *)&local_res8._s_0,"Bold");
  pFVar10 = FCoreStyle::GetDefaultFontStyle
                      (&local_658,*pFVar7,fVar4,(FFontOutlineSettings *)local_678);
  pFVar9 = FTextBlockStyle::SetFont(pFVar9,pFVar10);
  pFVar7 = ::FName::FName(&local_res20,"Normal.Bold");
  FSlateStyleSet::Set<FTextBlockStyle>((FSlateStyleSet *)this,*pFVar7,pFVar9);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_658.CompositeFont.SharedReferenceCount.ReferenceController);
  FTextBlockStyle::~FTextBlockStyle(&local_5f8);
  pFVar9 = FTextBlockStyle::FTextBlockStyle(&local_5f8,pFVar8);
  uVar5 = _UNK_15090c6d8;
  local_688._0_2_ = 2;
  *(undefined8 *)&(pFVar9->ColorAndOpacity).SpecifiedColor.field0_0x0 =
       ___xmm_3f8000003f800000000000003f800000;
  *(undefined8 *)((longlong)&(pFVar9->ColorAndOpacity).SpecifiedColor.field0_0x0 + 8) = uVar5;
  *(float *)&(pFVar9->ColorAndOpacity).ColorUseRule = local_688._s_0.R;
  local_668 = FLinearColor::Black.field0_0x0;
  local_678._0_8_ = local_678._0_8_ & 0xff00000000000000;
  local_678._8_8_ = (UObject *)0x0;
  pFVar7 = ::FName::FName((FName *)&local_res8._s_0,"Italic");
  pFVar10 = FCoreStyle::GetDefaultFontStyle
                      (&local_658,*pFVar7,fVar4,(FFontOutlineSettings *)local_678);
  pFVar9 = FTextBlockStyle::SetFont(pFVar9,pFVar10);
  pFVar7 = ::FName::FName(&local_res20,"Normal.Italic");
  FSlateStyleSet::Set<FTextBlockStyle>((FSlateStyleSet *)this,*pFVar7,pFVar9);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_658.CompositeFont.SharedReferenceCount.ReferenceController);
  FTextBlockStyle::~FTextBlockStyle(&local_5f8);
  pFVar8 = FTextBlockStyle::FTextBlockStyle(&local_5f8,pFVar8);
  uVar5 = _UNK_15090c6d8;
  local_688._0_2_ = 3;
  *(undefined8 *)&(pFVar8->ColorAndOpacity).SpecifiedColor.field0_0x0 =
       ___xmm_3f8000003f800000000000003f800000;
  *(undefined8 *)((longlong)&(pFVar8->ColorAndOpacity).SpecifiedColor.field0_0x0 + 8) = uVar5;
  *(float *)&(pFVar8->ColorAndOpacity).ColorUseRule = local_688._s_0.R;
  local_668 = FLinearColor::Black.field0_0x0;
  local_678._0_8_ = local_678._0_8_ & 0xff00000000000000;
  local_678._8_8_ = (UObject *)0x0;
  pFVar7 = ::FName::FName((FName *)&local_res8._s_0,"Regular");
  pFVar10 = FCoreStyle::GetDefaultFontStyle
                      (&local_658,*pFVar7,fVar4,(FFontOutlineSettings *)local_678);
  pFVar8 = FTextBlockStyle::SetFont(pFVar8,pFVar10);
  pFVar7 = ::FName::FName(&local_res20,"Normal.Subdued");
  FSlateStyleSet::Set<FTextBlockStyle>((FSlateStyleSet *)this,*pFVar7,pFVar8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_658.CompositeFont.SharedReferenceCount.ReferenceController);
  FTextBlockStyle::~FTextBlockStyle(&local_5f8);
  pFVar13 = ::operator_new(0xb0);
  pFVar15 = pFVar16;
  if (pFVar13 != (FSlateImageBrush *)0x0) {
    local_res8._s_0 = (TVector2<float>_u_0_s_0)CoreStyleConstants::Icon16x16;
    local_678._0_8_ = ___xmm_3f8000003f8000003f8000003f800000;
    local_678._8_8_ = _UNK_15076b1f8;
    pFVar14 = FSlateStyleSet::RootToContentDir
                        ((FSlateStyleSet *)this,(FString *)local_698,"Icons/Select_None",L".svg");
    FSlateImageBrush::FSlateImageBrush
              (pFVar13,pFVar14,(FDeprecateVector2DParameter *)&local_res8._s_0,
               (FLinearColor *)local_678,NoTile,Vector);
    *(undefined ***)pFVar13 = &___7FSlateVectorImageBrush__6B_;
    pFVar15 = pFVar13;
  }
  pFVar7 = ::FName::FName(&local_res18,"StateTreeEditor.SelectNone");
  FSlateStyleSet::Set<FSlateVectorImageBrush>
            ((FSlateStyleSet *)this,*pFVar7,(FSlateVectorImageBrush *)pFVar15);
  if ((pFVar13 != (FSlateImageBrush *)0x0) && (local_698 != (undefined1  [8])0x0)) {
    FMemory::Free((void *)local_698);
  }
  pFVar13 = ::operator_new(0xb0);
  pFVar15 = pFVar16;
  if (pFVar13 != (FSlateImageBrush *)0x0) {
    local_res8._s_0 = (TVector2<float>_u_0_s_0)CoreStyleConstants::Icon16x16;
    local_698 = (undefined1  [8])___xmm_3f8000003f8000003f8000003f800000;
    _fStack_690 = _UNK_15076b1f8;
    pFVar14 = FSlateStyleSet::RootToContentDir
                        ((FSlateStyleSet *)this,(FString *)local_678,"Icons/Try_Enter_State",L".svg"
                        );
    FSlateImageBrush::FSlateImageBrush
              (pFVar13,pFVar14,(FDeprecateVector2DParameter *)&local_res8._s_0,
               (FLinearColor *)local_698,NoTile,Vector);
    *(undefined ***)pFVar13 = &___7FSlateVectorImageBrush__6B_;
    pFVar15 = pFVar13;
  }
  pFVar7 = ::FName::FName(&local_res18,"StateTreeEditor.TryEnterState");
  FSlateStyleSet::Set<FSlateVectorImageBrush>
            ((FSlateStyleSet *)this,*pFVar7,(FSlateVectorImageBrush *)pFVar15);
  if ((pFVar13 != (FSlateImageBrush *)0x0) && ((void *)local_678._0_8_ != (void *)0x0)) {
    FMemory::Free((void *)local_678._0_8_);
  }
  pFVar13 = ::operator_new(0xb0);
  pFVar15 = pFVar16;
  if (pFVar13 != (FSlateImageBrush *)0x0) {
    local_res8._s_0 = (TVector2<float>_u_0_s_0)CoreStyleConstants::Icon16x16;
    local_698 = (undefined1  [8])___xmm_3f8000003f8000003f8000003f800000;
    _fStack_690 = _UNK_15076b1f8;
    pFVar14 = FSlateStyleSet::RootToContentDir
                        ((FSlateStyleSet *)this,(FString *)local_678,
                         "Icons/Try_Select_Children_In_Order",L".svg");
    FSlateImageBrush::FSlateImageBrush
              (pFVar13,pFVar14,(FDeprecateVector2DParameter *)&local_res8._s_0,
               (FLinearColor *)local_698,NoTile,Vector);
    *(undefined ***)pFVar13 = &___7FSlateVectorImageBrush__6B_;
    pFVar15 = pFVar13;
  }
  pFVar7 = ::FName::FName(&local_res18,"StateTreeEditor.TrySelectChildrenInOrder");
  FSlateStyleSet::Set<FSlateVectorImageBrush>
            ((FSlateStyleSet *)this,*pFVar7,(FSlateVectorImageBrush *)pFVar15);
  if ((pFVar13 != (FSlateImageBrush *)0x0) && ((void *)local_678._0_8_ != (void *)0x0)) {
    FMemory::Free((void *)local_678._0_8_);
  }
  pFVar13 = ::operator_new(0xb0);
  pFVar15 = pFVar16;
  if (pFVar13 != (FSlateImageBrush *)0x0) {
    local_res8._s_0 = (TVector2<float>_u_0_s_0)CoreStyleConstants::Icon16x16;
    local_698 = (undefined1  [8])___xmm_3f8000003f8000003f8000003f800000;
    _fStack_690 = _UNK_15076b1f8;
    pFVar14 = FSlateStyleSet::RootToContentDir
                        ((FSlateStyleSet *)this,(FString *)local_678,
                         "Icons/Try_Select_Children_At_Random",L".svg");
    FSlateImageBrush::FSlateImageBrush
              (pFVar13,pFVar14,(FDeprecateVector2DParameter *)&local_res8._s_0,
               (FLinearColor *)local_698,NoTile,Vector);
    *(undefined ***)pFVar13 = &___7FSlateVectorImageBrush__6B_;
    pFVar15 = pFVar13;
  }
  pFVar7 = ::FName::FName(&local_res18,"StateTreeEditor.TrySelectChildrenAtRandom");
  FSlateStyleSet::Set<FSlateVectorImageBrush>
            ((FSlateStyleSet *)this,*pFVar7,(FSlateVectorImageBrush *)pFVar15);
  if ((pFVar13 != (FSlateImageBrush *)0x0) && ((void *)local_678._0_8_ != (void *)0x0)) {
    FMemory::Free((void *)local_678._0_8_);
  }
  pFVar13 = ::operator_new(0xb0);
  pFVar15 = pFVar16;
  if (pFVar13 != (FSlateImageBrush *)0x0) {
    local_res8._s_0 = (TVector2<float>_u_0_s_0)CoreStyleConstants::Icon16x16;
    local_698 = (undefined1  [8])___xmm_3f8000003f8000003f8000003f800000;
    _fStack_690 = _UNK_15076b1f8;
    pFVar14 = FSlateStyleSet::RootToContentDir
                        ((FSlateStyleSet *)this,(FString *)local_678,"Icons/Try_Follow_Transitions",
                         L".svg");
    FSlateImageBrush::FSlateImageBrush
              (pFVar13,pFVar14,(FDeprecateVector2DParameter *)&local_res8._s_0,
               (FLinearColor *)local_698,NoTile,Vector);
    *(undefined ***)pFVar13 = &___7FSlateVectorImageBrush__6B_;
    pFVar15 = pFVar13;
  }
  pFVar7 = ::FName::FName(&local_res18,"StateTreeEditor.TryFollowTransitions");
  FSlateStyleSet::Set<FSlateVectorImageBrush>
            ((FSlateStyleSet *)this,*pFVar7,(FSlateVectorImageBrush *)pFVar15);
  if ((pFVar13 != (FSlateImageBrush *)0x0) && ((void *)local_678._0_8_ != (void *)0x0)) {
    FMemory::Free((void *)local_678._0_8_);
  }
  pFVar13 = ::operator_new(0xb0);
  pFVar15 = pFVar16;
  if (pFVar13 != (FSlateImageBrush *)0x0) {
    local_res8._s_0 = (TVector2<float>_u_0_s_0)CoreStyleConstants::Icon16x16;
    pFVar14 = FSlateStyleSet::RootToContentDir
                        ((FSlateStyleSet *)this,(FString *)local_698,"Icons/State_Conditions",
                         L".svg");
    FSlateImageBrush::FSlateImageBrush
              (pFVar13,pFVar14,(FDeprecateVector2DParameter *)&local_res8._s_0,
               &FStyleColors::AccentGray,NoTile,Vector);
    *(undefined ***)pFVar13 = &___7FSlateVectorImageBrush__6B_;
    pFVar15 = pFVar13;
  }
  pFVar7 = ::FName::FName(&local_res18,"StateTreeEditor.Debugger.Condition.OnTransition");
  FSlateStyleSet::Set<FSlateVectorImageBrush>
            ((FSlateStyleSet *)this,*pFVar7,(FSlateVectorImageBrush *)pFVar15);
  if ((pFVar13 != (FSlateImageBrush *)0x0) && (local_698 != (undefined1  [8])0x0)) {
    FMemory::Free((void *)local_698);
  }
  local_678._0_8_ = this;
  if (*(code **)(*(longlong *)this + 0x18) == FSlateStyleSet::GetContentRootDir) {
    ::FString::FString((FString *)(local_678 + 8),(FString *)&this->field_0x10);
  }
  else {
    (**(code **)(*(longlong *)this + 0x18))(this,local_678 + 8);
  }
  (**(code **)(*(longlong *)local_678._0_8_ + 0xc0))(local_678._0_8_,&EngineSlateContentDir);
  pFVar13 = ::operator_new(0xb0);
  pFVar15 = pFVar16;
  if (pFVar13 != (FSlateImageBrush *)0x0) {
    local_res8._s_0 = (TVector2<float>_u_0_s_0)CoreStyleConstants::Icon16x16;
    pFVar14 = FSlateStyleSet::RootToCoreContentDir
                        ((FSlateStyleSet *)this,(FString *)local_698,"Starship/Common/arrow-right",
                         L".svg");
    FSlateImageBrush::FSlateImageBrush
              (pFVar13,pFVar14,(FDeprecateVector2DParameter *)&local_res8._s_0,
               &FStyleColors::Foreground,NoTile,Vector);
    *(undefined ***)pFVar13 = &___7FSlateVectorImageBrush__6B_;
    pFVar15 = pFVar13;
  }
  pFVar7 = ::FName::FName(&local_res18,"StateTreeEditor.Debugger.State.Enter");
  FSlateStyleSet::Set<FSlateVectorImageBrush>
            ((FSlateStyleSet *)this,*pFVar7,(FSlateVectorImageBrush *)pFVar15);
  if ((pFVar13 != (FSlateImageBrush *)0x0) && (local_698 != (undefined1  [8])0x0)) {
    FMemory::Free((void *)local_698);
  }
  cVar17 = '\0';
  pFVar13 = ::operator_new(0xb0);
  pFVar15 = pFVar16;
  if (pFVar13 != (FSlateImageBrush *)0x0) {
    local_res8._s_0 = (TVector2<float>_u_0_s_0)CoreStyleConstants::Icon16x16;
    cVar17 = -0x80;
    pFVar14 = FSlateStyleSet::RootToCoreContentDir
                        ((FSlateStyleSet *)this,(FString *)local_698,"Starship/Common/arrow-left",
                         L".svg");
    FSlateImageBrush::FSlateImageBrush
              (pFVar13,pFVar14,(FDeprecateVector2DParameter *)&local_res8._s_0,
               &FStyleColors::Foreground,NoTile,Vector);
    *(undefined ***)pFVar13 = &___7FSlateVectorImageBrush__6B_;
    pFVar15 = pFVar13;
  }
  pFVar7 = ::FName::FName(&local_res18,"StateTreeEditor.Debugger.State.Exit");
  FSlateStyleSet::Set<FSlateVectorImageBrush>
            ((FSlateStyleSet *)this,*pFVar7,(FSlateVectorImageBrush *)pFVar15);
  if ((cVar17 < '\0') && (local_698 != (undefined1  [8])0x0)) {
    FMemory::Free((void *)local_698);
  }
  pFVar13 = ::operator_new(0xb0);
  pFVar15 = pFVar16;
  if (pFVar13 != (FSlateImageBrush *)0x0) {
    local_res8._s_0 = (TVector2<float>_u_0_s_0)CoreStyleConstants::Icon16x16;
    pFVar14 = FSlateStyleSet::RootToCoreContentDir
                        ((FSlateStyleSet *)this,(FString *)local_698,"Starship/Common/check",L".svg"
                        );
    FSlateImageBrush::FSlateImageBrush
              (pFVar13,pFVar14,(FDeprecateVector2DParameter *)&local_res8._s_0,
               &FStyleColors::AccentGreen,NoTile,Vector);
    *(undefined ***)pFVar13 = &___7FSlateVectorImageBrush__6B_;
    pFVar15 = pFVar13;
  }
  pFVar7 = ::FName::FName(&local_res18,"StateTreeEditor.Debugger.State.Completed");
  FSlateStyleSet::Set<FSlateVectorImageBrush>
            ((FSlateStyleSet *)this,*pFVar7,(FSlateVectorImageBrush *)pFVar15);
  if ((pFVar13 != (FSlateImageBrush *)0x0) && (local_698 != (undefined1  [8])0x0)) {
    FMemory::Free((void *)local_698);
  }
  pFVar13 = ::operator_new(0xb0);
  pFVar15 = pFVar16;
  if (pFVar13 != (FSlateImageBrush *)0x0) {
    local_res8._s_0 = (TVector2<float>_u_0_s_0)CoreStyleConstants::Icon16x16;
    pFVar14 = FSlateStyleSet::RootToCoreContentDir
                        ((FSlateStyleSet *)this,(FString *)local_698,"Starship/Common/arrow-right",
                         L".svg");
    FSlateImageBrush::FSlateImageBrush
              (pFVar13,pFVar14,(FDeprecateVector2DParameter *)&local_res8._s_0,
               &FStyleColors::AccentYellow,NoTile,Vector);
    *(undefined ***)pFVar13 = &___7FSlateVectorImageBrush__6B_;
    pFVar15 = pFVar13;
  }
  pFVar7 = ::FName::FName(&local_res18,"StateTreeEditor.Debugger.State.Selected");
  FSlateStyleSet::Set<FSlateVectorImageBrush>
            ((FSlateStyleSet *)this,*pFVar7,(FSlateVectorImageBrush *)pFVar15);
  if ((pFVar13 != (FSlateImageBrush *)0x0) && (local_698 != (undefined1  [8])0x0)) {
    FMemory::Free((void *)local_698);
  }
  pFVar13 = ::operator_new(0xb0);
  pFVar15 = pFVar16;
  if (pFVar13 != (FSlateImageBrush *)0x0) {
    local_res8._s_0 = (TVector2<float>_u_0_s_0)CoreStyleConstants::Icon16x16;
    pFVar14 = FSlateStyleSet::RootToCoreContentDir
                        ((FSlateStyleSet *)this,(FString *)local_698,"Starship/Common/alert-circle",
                         L".svg");
    FSlateImageBrush::FSlateImageBrush
              (pFVar13,pFVar14,(FDeprecateVector2DParameter *)&local_res8._s_0,
               &FStyleColors::AccentYellow,NoTile,Vector);
    *(undefined ***)pFVar13 = &___7FSlateVectorImageBrush__6B_;
    pFVar15 = pFVar13;
  }
  pFVar7 = ::FName::FName(&local_res18,"StateTreeEditor.Debugger.Log.Warning");
  FSlateStyleSet::Set<FSlateVectorImageBrush>
            ((FSlateStyleSet *)this,*pFVar7,(FSlateVectorImageBrush *)pFVar15);
  if ((pFVar13 != (FSlateImageBrush *)0x0) && (local_698 != (undefined1  [8])0x0)) {
    FMemory::Free((void *)local_698);
  }
  pFVar13 = ::operator_new(0xb0);
  pFVar15 = pFVar16;
  if (pFVar13 != (FSlateImageBrush *)0x0) {
    local_res8._s_0 = (TVector2<float>_u_0_s_0)CoreStyleConstants::Icon16x16;
    pFVar14 = FSlateStyleSet::RootToCoreContentDir
                        ((FSlateStyleSet *)this,(FString *)local_698,"Starship/Common/x-circle",
                         L".svg");
    FSlateImageBrush::FSlateImageBrush
              (pFVar13,pFVar14,(FDeprecateVector2DParameter *)&local_res8._s_0,
               &FStyleColors::AccentRed,NoTile,Vector);
    *(undefined ***)pFVar13 = &___7FSlateVectorImageBrush__6B_;
    pFVar15 = pFVar13;
  }
  pFVar7 = ::FName::FName(&local_res18,"StateTreeEditor.Debugger.Log.Error");
  FSlateStyleSet::Set<FSlateVectorImageBrush>
            ((FSlateStyleSet *)this,*pFVar7,(FSlateVectorImageBrush *)pFVar15);
  if ((pFVar13 != (FSlateImageBrush *)0x0) && (local_698 != (undefined1  [8])0x0)) {
    FMemory::Free((void *)local_698);
  }
  pFVar13 = ::operator_new(0xb0);
  pFVar15 = pFVar16;
  if (pFVar13 != (FSlateImageBrush *)0x0) {
    local_res8._s_0 = (TVector2<float>_u_0_s_0)CoreStyleConstants::Icon16x16;
    pFVar14 = FSlateStyleSet::RootToCoreContentDir
                        ((FSlateStyleSet *)this,(FString *)local_698,"Starship/Common/close-small",
                         L".svg");
    FSlateImageBrush::FSlateImageBrush
              (pFVar13,pFVar14,(FDeprecateVector2DParameter *)&local_res8._s_0,
               &FStyleColors::AccentRed,NoTile,Vector);
    *(undefined ***)pFVar13 = &___7FSlateVectorImageBrush__6B_;
    pFVar15 = pFVar13;
  }
  pFVar7 = ::FName::FName(&local_res18,"StateTreeEditor.Debugger.Task.Failed");
  FSlateStyleSet::Set<FSlateVectorImageBrush>
            ((FSlateStyleSet *)this,*pFVar7,(FSlateVectorImageBrush *)pFVar15);
  if ((pFVar13 != (FSlateImageBrush *)0x0) && (local_698 != (undefined1  [8])0x0)) {
    FMemory::Free((void *)local_698);
  }
  pFVar13 = ::operator_new(0xb0);
  pFVar15 = pFVar16;
  if (pFVar13 != (FSlateImageBrush *)0x0) {
    local_res8._s_0 = (TVector2<float>_u_0_s_0)CoreStyleConstants::Icon16x16;
    pFVar14 = FSlateStyleSet::RootToCoreContentDir
                        ((FSlateStyleSet *)this,(FString *)local_698,"Starship/Common/check",L".svg"
                        );
    FSlateImageBrush::FSlateImageBrush
              (pFVar13,pFVar14,(FDeprecateVector2DParameter *)&local_res8._s_0,
               &FStyleColors::AccentGreen,NoTile,Vector);
    *(undefined ***)pFVar13 = &___7FSlateVectorImageBrush__6B_;
    pFVar15 = pFVar13;
  }
  pFVar7 = ::FName::FName(&local_res18,"StateTreeEditor.Debugger.Task.Succeeded");
  FSlateStyleSet::Set<FSlateVectorImageBrush>
            ((FSlateStyleSet *)this,*pFVar7,(FSlateVectorImageBrush *)pFVar15);
  if ((pFVar13 != (FSlateImageBrush *)0x0) && (local_698 != (undefined1  [8])0x0)) {
    FMemory::Free((void *)local_698);
  }
  pFVar13 = ::operator_new(0xb0);
  pFVar15 = pFVar16;
  if (pFVar13 != (FSlateImageBrush *)0x0) {
    local_res8._s_0 = (TVector2<float>_u_0_s_0)CoreStyleConstants::Icon16x16;
    pFVar14 = FSlateStyleSet::RootToCoreContentDir
                        ((FSlateStyleSet *)this,(FString *)local_698,"Starship/Common/close-small",
                         L".svg");
    FSlateImageBrush::FSlateImageBrush
              (pFVar13,pFVar14,(FDeprecateVector2DParameter *)&local_res8._s_0,
               &FStyleColors::AccentRed,NoTile,Vector);
    *(undefined ***)pFVar13 = &___7FSlateVectorImageBrush__6B_;
    pFVar15 = pFVar13;
  }
  pFVar7 = ::FName::FName(&local_res18,"StateTreeEditor.Debugger.Task.Stopped");
  FSlateStyleSet::Set<FSlateVectorImageBrush>
            ((FSlateStyleSet *)this,*pFVar7,(FSlateVectorImageBrush *)pFVar15);
  if ((pFVar13 != (FSlateImageBrush *)0x0) && (local_698 != (undefined1  [8])0x0)) {
    FMemory::Free((void *)local_698);
  }
  pFVar13 = ::operator_new(0xb0);
  pFVar15 = pFVar16;
  if (pFVar13 != (FSlateImageBrush *)0x0) {
    local_res8._s_0 = (TVector2<float>_u_0_s_0)CoreStyleConstants::Icon16x16;
    pFVar14 = FSlateStyleSet::RootToCoreContentDir
                        ((FSlateStyleSet *)this,(FString *)local_698,"Starship/Common/check",L".svg"
                        );
    FSlateImageBrush::FSlateImageBrush
              (pFVar13,pFVar14,(FDeprecateVector2DParameter *)&local_res8._s_0,
               &FStyleColors::AccentGreen,NoTile,Vector);
    *(undefined ***)pFVar13 = &___7FSlateVectorImageBrush__6B_;
    pFVar15 = pFVar13;
  }
  pFVar7 = ::FName::FName(&local_res18,"StateTreeEditor.Debugger.Condition.Passed");
  FSlateStyleSet::Set<FSlateVectorImageBrush>
            ((FSlateStyleSet *)this,*pFVar7,(FSlateVectorImageBrush *)pFVar15);
  if ((pFVar13 != (FSlateImageBrush *)0x0) && (local_698 != (undefined1  [8])0x0)) {
    FMemory::Free((void *)local_698);
  }
  pFVar13 = ::operator_new(0xb0);
  pFVar15 = pFVar16;
  if (pFVar13 != (FSlateImageBrush *)0x0) {
    local_res8._s_0 = (TVector2<float>_u_0_s_0)CoreStyleConstants::Icon16x16;
    pFVar14 = FSlateStyleSet::RootToCoreContentDir
                        ((FSlateStyleSet *)this,(FString *)local_698,"Starship/Common/close-small",
                         L".svg");
    FSlateImageBrush::FSlateImageBrush
              (pFVar13,pFVar14,(FDeprecateVector2DParameter *)&local_res8._s_0,
               &FStyleColors::AccentRed,NoTile,Vector);
    *(undefined ***)pFVar13 = &___7FSlateVectorImageBrush__6B_;
    pFVar15 = pFVar13;
  }
  pFVar7 = ::FName::FName(&local_res18,"StateTreeEditor.Debugger.Condition.Failed");
  FSlateStyleSet::Set<FSlateVectorImageBrush>
            ((FSlateStyleSet *)this,*pFVar7,(FSlateVectorImageBrush *)pFVar15);
  if ((pFVar13 != (FSlateImageBrush *)0x0) && (local_698 != (undefined1  [8])0x0)) {
    FMemory::Free((void *)local_698);
  }
  pFVar15 = ::operator_new(0xb0);
  if (pFVar15 != (FSlateImageBrush *)0x0) {
    local_res8._s_0 = (TVector2<float>_u_0_s_0)CoreStyleConstants::Icon16x16;
    pFVar14 = FSlateStyleSet::RootToCoreContentDir
                        ((FSlateStyleSet *)this,(FString *)local_698,"Starship/Common/Update",
                         L".svg");
    FSlateImageBrush::FSlateImageBrush
              (pFVar15,pFVar14,(FDeprecateVector2DParameter *)&local_res8._s_0,
               &FStyleColors::AccentYellow,NoTile,Vector);
    *(undefined ***)pFVar15 = &___7FSlateVectorImageBrush__6B_;
    pFVar16 = pFVar15;
  }
  pFVar7 = ::FName::FName(&local_res18,"StateTreeEditor.Debugger.Condition.OnEvaluating");
  FSlateStyleSet::Set<FSlateVectorImageBrush>
            ((FSlateStyleSet *)this,*pFVar7,(FSlateVectorImageBrush *)pFVar16);
  if ((pFVar15 != (FSlateImageBrush *)0x0) && (local_698 != (undefined1  [8])0x0)) {
    FMemory::Free((void *)local_698);
  }
  (**(code **)(*(longlong *)local_678._0_8_ + 0xc0))(local_678._0_8_,local_678 + 8);
  if ((UObject *)local_678._8_8_ != (UObject *)0x0) {
    FMemory::Free((void *)local_678._8_8_);
  }
  return this;
}

// Get @ 14d72db10

FStateTreeStyle * __cdecl FStateTreeStyle::Get(void)

{
  FName local_res8 [4];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(local_res8,L"StateTreeStyle");
      FStateTreeStyle(&::Instance,local_res8);
      ::Instance._0_8_ = &___7FStateTreeStyle__6B_;
      atexit(`FStateTreeStyle::Get'::__l2::_dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
      return &::Instance;
    }
  }
  return &::Instance;
}

// GetBrushForSelectionBehaviorType @ 14d72e500

/* WARNING: Enum "EStateTreeStateSelectionBehavior": Some values do not have unique names */

FSlateBrush * __cdecl
FStateTreeStyle::GetBrushForSelectionBehaviorType
          (EStateTreeStateSelectionBehavior param_1,bool param_2,EStateTreeStateType param_3)

{
  code *pcVar1;
  FStateTreeStyle *pFVar2;
  FName *pFVar3;
  FSlateBrush *pFVar4;
  char *pcVar5;
  FName local_res20;
  
  if (param_1 == None) {
    pFVar2 = Get();
    pcVar5 = "StateTreeEditor.SelectNone";
    goto LAB_14d72e51a;
  }
  if (param_1 == TryEnterState) {
LAB_14d72e54c:
    pFVar2 = Get();
    pcVar5 = "StateTreeEditor.TryEnterState";
  }
  else {
    if ((param_1 - TrySelectChildrenInOrder & 0xfc) == 0) {
      if (param_1 != TrySelectChildrenAtRandom) {
        if ((param_2) && (1 < (byte)(param_3 - Linked))) {
          pFVar2 = Get();
          pcVar5 = "StateTreeEditor.TrySelectChildrenInOrder";
          goto LAB_14d72e51a;
        }
        goto LAB_14d72e54c;
      }
    }
    else if (param_1 != TrySelectChildrenAtRandom) {
      if (param_1 != TryFollowTransitions) {
        return (FSlateBrush *)0x0;
      }
      pFVar2 = Get();
      pcVar5 = "StateTreeEditor.TryFollowTransitions";
      goto LAB_14d72e51a;
    }
    pFVar2 = Get();
    pcVar5 = "StateTreeEditor.TrySelectChildrenAtRandom";
  }
LAB_14d72e51a:
  pcVar1 = *(code **)(*(longlong *)pFVar2 + 0x50);
  pFVar3 = ::FName::FName(&local_res20,pcVar5);
  pFVar4 = (FSlateBrush *)(*pcVar1)(pFVar2,*pFVar3,0,0);
  return pFVar4;
}

// Register @ 14d7423d0

void __cdecl FStateTreeStyle::Register(void)

{
  FStateTreeStyle *pFVar1;
  
  pFVar1 = Get();
  FSlateStyleRegistry::RegisterSlateStyle((ISlateStyle *)pFVar1);
  return;
}

// Unregister @ 14d749c90

void __cdecl FStateTreeStyle::Unregister(void)

{
  FStateTreeStyle *pFVar1;
  
  pFVar1 = Get();
  FSlateStyleRegistry::UnRegisterSlateStyle((ISlateStyle *)pFVar1);
  return;
}

