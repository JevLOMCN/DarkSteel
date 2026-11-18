// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 21

// GetDefaultFont @ 142580830

TSharedRef<FCompositeFont_const_,1> * __cdecl
FStarshipCoreStyle::GetDefaultFont(TSharedRef<FCompositeFont_const_,1> *__return_storage_ptr__)

{
  FLegacySlateFontInfoCache *this;
  
  this = FLegacySlateFontInfoCache::Get();
  FLegacySlateFontInfoCache::GetDefaultFont(this,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetDefaultFontStyle @ 142580920

FSlateFontInfo * __cdecl
FStarshipCoreStyle::GetDefaultFontStyle
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

// GetDynamicImageBrush @ 1425811f0

TSharedPtr<FSlateDynamicImageBrush,1> * __cdecl
FStarshipCoreStyle::GetDynamicImageBrush
          (TSharedPtr<FSlateDynamicImageBrush,1> *__return_storage_ptr__,FName param_1,FName param_2
          ,char *param_3)

{
  code *pcVar1;
  bool bVar2;
  TSharedPtr<FSlateDynamicImageBrush,1> *pTVar3;
  
  if (Instance.Object == (ISlateStyle *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TSharedPtr<FSlateDynamicImageBrush,1> *)(*pcVar1)();
      return pTVar3;
    }
  }
  (**(code **)((longlong)*Instance.Object + 0x70))
            (Instance.Object,__return_storage_ptr__,param_1,param_2,param_3,0);
  return __return_storage_ptr__;
}

// GetDynamicImageBrush @ 142581290

TSharedPtr<FSlateDynamicImageBrush,1> * __cdecl
FStarshipCoreStyle::GetDynamicImageBrush
          (TSharedPtr<FSlateDynamicImageBrush,1> *__return_storage_ptr__,FName param_1,
          UTexture2D *param_2,FName param_3)

{
  code *pcVar1;
  bool bVar2;
  TSharedPtr<FSlateDynamicImageBrush,1> *pTVar3;
  
  if (Instance.Object == (ISlateStyle *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TSharedPtr<FSlateDynamicImageBrush,1> *)(*pcVar1)();
      return pTVar3;
    }
  }
  (**(code **)((longlong)*Instance.Object + 0x60))
            (Instance.Object,__return_storage_ptr__,param_1,param_2,param_3,0);
  return __return_storage_ptr__;
}

// GetDynamicImageBrush @ 142581330

TSharedPtr<FSlateDynamicImageBrush,1> * __cdecl
FStarshipCoreStyle::GetDynamicImageBrush
          (TSharedPtr<FSlateDynamicImageBrush,1> *__return_storage_ptr__,FName param_1,char *param_2
          ,UTexture2D *param_3,FName param_4)

{
  code *pcVar1;
  bool bVar2;
  TSharedPtr<FSlateDynamicImageBrush,1> *pTVar3;
  
  if (Instance.Object == (ISlateStyle *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TSharedPtr<FSlateDynamicImageBrush,1> *)(*pcVar1)();
      return pTVar3;
    }
  }
  (**(code **)((longlong)*Instance.Object + 0x68))
            (Instance.Object,__return_storage_ptr__,param_1,param_2,param_3,param_4,0);
  return __return_storage_ptr__;
}

// ResetToDefault @ 14258f6d0

void __cdecl FStarshipCoreStyle::ResetToDefault(void)

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

// SetFocusBrush @ 142590d30

void __cdecl FStarshipCoreStyle::SetFocusBrush(FSlateBrush *param_1)

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

// SetInactiveSelectionColor @ 142591790

void __cdecl FStarshipCoreStyle::SetInactiveSelectionColor(FLinearColor *param_1)

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
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Styling\\StarshipCoreStyle.cpp"
                       ,0x80,L"");
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

// SetPressedSelectionColor @ 142591be0

void __cdecl FStarshipCoreStyle::SetPressedSelectionColor(FLinearColor *param_1)

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
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Styling\\StarshipCoreStyle.cpp"
                       ,0x89,L"");
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

// SetSelectionColor @ 142592020

void __cdecl FStarshipCoreStyle::SetSelectionColor(FLinearColor *param_1)

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
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Styling\\StarshipCoreStyle.cpp"
                       ,0x77,L"");
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

// SetSelectorColor @ 142592290

void __cdecl FStarshipCoreStyle::SetSelectorColor(FLinearColor *param_1)

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
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Styling\\StarshipCoreStyle.cpp"
                       ,0x6e,L"");
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

// SetStyle @ 1425924b0

void __cdecl FStarshipCoreStyle::SetStyle(TSharedRef<ISlateStyle,1> *param_1)

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

// SetupButtonStyles @ 1425927e0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
FStarshipCoreStyle::SetupButtonStyles(TSharedRef<FStarshipCoreStyle::FStyle,1> *param_1)

{
  FStyle *pFVar1;
  uint uVar2;
  float fVar3;
  float fVar4;
  EStyleColor EVar5;
  undefined2 uVar6;
  FButtonStyle *pFVar7;
  FSlateBrush *pFVar8;
  FName *pFVar9;
  FTextBlockStyle *pFVar10;
  FStyleFonts *pFVar11;
  TVector2<float>_u_0 local_res8;
  uint local_2618;
  FMargin local_2610;
  FMargin local_2600;
  undefined **local_25e8 [20];
  TReferenceControllerBase<1> *local_2548;
  undefined1 local_2538 [124];
  FDeprecateSlateVector2D local_24bc;
  FLinearColor_u_0 local_24b4;
  FLinearColor_u_0 local_24a4;
  ESlateColorStylingMode EStack_2494;
  EStyleColor EStack_2493;
  undefined2 uStack_2492;
  FLinearColor_u_0 local_2490;
  uint local_2480;
  FSlateBrush local_2478;
  FSlateBrush local_23c8;
  FSlateBrush local_2318;
  ETextTransformPolicy local_2268;
  ETextOverflowPolicy local_2267;
  undefined **local_2258 [20];
  TReferenceControllerBase<1> *local_21b8;
  undefined **local_21a8 [20];
  TReferenceControllerBase<1> *local_2108;
  FButtonStyle local_20f8;
  undefined1 local_1d68 [160];
  TReferenceControllerBase<1> *local_1cc8;
  undefined1 local_1cb8 [16];
  undefined **local_1ca8;
  FSharedReferencer<1> local_1c78;
  undefined1 local_1c50 [20];
  FDeprecateSlateVector2D local_1c3c;
  FLinearColor_u_0 local_1c34;
  FLinearColor_u_0 local_1c24;
  ESlateColorStylingMode local_1c14;
  EStyleColor EStack_1c13;
  undefined2 uStack_1c12;
  FLinearColor_u_0 local_1c10;
  FNameEntryId local_1c00;
  FSlateBrush local_1bf8;
  FSlateBrush local_1b48;
  FSlateBrush local_1a98;
  FLinearColor_u_0 local_19e8 [12];
  FButtonStyle local_1928;
  FButtonStyle local_1598;
  FButtonStyle local_1208;
  FButtonStyle local_e78;
  FButtonStyle local_ae8;
  FButtonStyle local_758;
  FButtonStyle local_3c8;
  
  pFVar7 = FButtonStyle::FButtonStyle(&local_20f8);
  fVar4 = __real_40800000;
  fVar3 = __real_3f800000;
  local_res8 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  pFVar8 = (FSlateBrush *)
           FSlateRoundedBoxBrush::FSlateRoundedBoxBrush<FSlateColor,FSlateColor,float>
                     ((FSlateRoundedBoxBrush *)local_25e8,&FStyleColors::Primary,__real_40800000,
                      &FStyleColors::Input,__real_3f800000,
                      (FDeprecateVector2DParameter *)&local_res8._s_0);
  FSlateBrush::operator=(&pFVar7->Normal,pFVar8);
  local_res8 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  pFVar8 = (FSlateBrush *)
           FSlateRoundedBoxBrush::FSlateRoundedBoxBrush<FSlateColor,FSlateColor,float>
                     ((FSlateRoundedBoxBrush *)local_21a8,&FStyleColors::PrimaryHover,fVar4,
                      &FStyleColors::Input,fVar3,(FDeprecateVector2DParameter *)&local_res8._s_0);
  FSlateBrush::operator=(&pFVar7->Hovered,pFVar8);
  local_res8 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  pFVar8 = (FSlateBrush *)
           FSlateRoundedBoxBrush::FSlateRoundedBoxBrush<FSlateColor,FSlateColor,float>
                     ((FSlateRoundedBoxBrush *)local_2258,&FStyleColors::PrimaryPress,fVar4,
                      &FStyleColors::Input,fVar3,(FDeprecateVector2DParameter *)&local_res8._s_0);
  FSlateBrush::operator=(&pFVar7->Pressed,pFVar8);
  local_res8 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  pFVar8 = (FSlateBrush *)
           FSlateRoundedBoxBrush::FSlateRoundedBoxBrush<FSlateColor,FSlateColor,float>
                     ((FSlateRoundedBoxBrush *)local_1d68,&FStyleColors::Dropdown,fVar4,
                      &FStyleColors::Recessed,fVar3,(FDeprecateVector2DParameter *)&local_res8._s_0)
  ;
  FSlateBrush::operator=(&pFVar7->Disabled,pFVar8);
  (pFVar7->NormalForeground).SpecifiedColor.field0_0x0._s_0 =
       (FLinearColor_u_0_s_0)FStyleColors::ForegroundHover.SpecifiedColor.field0_0x0;
  EVar5 = FStyleColors::ForegroundHover.ColorTableId;
  uVar6 = FStyleColors::ForegroundHover._18_2_;
  (pFVar7->NormalForeground).ColorUseRule = FStyleColors::ForegroundHover.ColorUseRule;
  (pFVar7->NormalForeground).ColorTableId = EVar5;
  *(undefined2 *)&(pFVar7->NormalForeground).field_0x12 = uVar6;
  (pFVar7->HoveredForeground).SpecifiedColor.field0_0x0._s_0 =
       (FLinearColor_u_0_s_0)FStyleColors::ForegroundHover.SpecifiedColor.field0_0x0;
  EVar5 = FStyleColors::ForegroundHover.ColorTableId;
  uVar6 = FStyleColors::ForegroundHover._18_2_;
  (pFVar7->HoveredForeground).ColorUseRule = FStyleColors::ForegroundHover.ColorUseRule;
  (pFVar7->HoveredForeground).ColorTableId = EVar5;
  *(undefined2 *)&(pFVar7->HoveredForeground).field_0x12 = uVar6;
  (pFVar7->PressedForeground).SpecifiedColor.field0_0x0._s_0 =
       (FLinearColor_u_0_s_0)FStyleColors::ForegroundHover.SpecifiedColor.field0_0x0;
  EVar5 = FStyleColors::ForegroundHover.ColorTableId;
  uVar6 = FStyleColors::ForegroundHover._18_2_;
  (pFVar7->PressedForeground).ColorUseRule = FStyleColors::ForegroundHover.ColorUseRule;
  (pFVar7->PressedForeground).ColorTableId = EVar5;
  *(undefined2 *)&(pFVar7->PressedForeground).field_0x12 = uVar6;
  (pFVar7->DisabledForeground).SpecifiedColor.field0_0x0._s_0 =
       (FLinearColor_u_0_s_0)FStyleColors::Foreground.SpecifiedColor.field0_0x0;
  EVar5 = FStyleColors::Foreground.ColorTableId;
  uVar6 = FStyleColors::Foreground._18_2_;
  (pFVar7->DisabledForeground).ColorUseRule = FStyleColors::Foreground.ColorUseRule;
  (pFVar7->DisabledForeground).ColorTableId = EVar5;
  *(undefined2 *)&(pFVar7->DisabledForeground).field_0x12 = uVar6;
  pFVar7->NormalPadding = CoreStyleConstants::ButtonMargins;
  pFVar7->PressedPadding = CoreStyleConstants::PressedButtonMargins;
  FButtonStyle::FButtonStyle(&local_758,pFVar7);
  local_1d68._0_8_ = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_1cc8);
  local_2258[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_21b8);
  local_21a8[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_2108);
  local_25e8[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_2548);
  local_20f8._0_8_ = &___7FButtonStyle__6B_;
  local_20f8.Disabled._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_20f8.Disabled.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  local_20f8.Pressed._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_20f8.Pressed.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  local_20f8.Hovered._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_20f8.Hovered.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  local_20f8.Normal._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_20f8.Normal.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)&local_20f8);
  local_2610.Left = ___xmm_3fc00000408000003fc0000040800000;
  local_2610.Top = _UNK_150925344;
  local_2610.Right = _UNK_150925348;
  local_2610.Bottom = _UNK_15092534c;
  local_2600.Left = ___xmm_3f000000408000004020000040800000;
  local_2600.Top = _UNK_150925234;
  local_2600.Right = _UNK_150925238;
  local_2600.Bottom = _UNK_15092523c;
  pFVar7 = FButtonStyle::FButtonStyle(&local_20f8);
  local_res8 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  pFVar8 = (FSlateBrush *)
           FSlateRoundedBoxBrush::FSlateRoundedBoxBrush<FSlateColor,FSlateColor,float>
                     ((FSlateRoundedBoxBrush *)local_1d68,&FStyleColors::Secondary,fVar4,
                      &FStyleColors::Input,fVar3,(FDeprecateVector2DParameter *)&local_res8._s_0);
  FSlateBrush::operator=(&pFVar7->Normal,pFVar8);
  local_res8 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  pFVar8 = (FSlateBrush *)
           FSlateRoundedBoxBrush::FSlateRoundedBoxBrush<FSlateColor,FSlateColor,float>
                     ((FSlateRoundedBoxBrush *)local_2258,&FStyleColors::Hover,fVar4,
                      &FStyleColors::Input,fVar3,(FDeprecateVector2DParameter *)&local_res8._s_0);
  FSlateBrush::operator=(&pFVar7->Hovered,pFVar8);
  local_res8 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  pFVar8 = (FSlateBrush *)
           FSlateRoundedBoxBrush::FSlateRoundedBoxBrush<FSlateColor,FSlateColor,float>
                     ((FSlateRoundedBoxBrush *)local_21a8,&FStyleColors::Header,fVar4,
                      &FStyleColors::Input,fVar3,(FDeprecateVector2DParameter *)&local_res8._s_0);
  FSlateBrush::operator=(&pFVar7->Pressed,pFVar8);
  local_res8 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  pFVar8 = (FSlateBrush *)
           FSlateRoundedBoxBrush::FSlateRoundedBoxBrush<FSlateColor,FSlateColor,float>
                     ((FSlateRoundedBoxBrush *)local_25e8,&FStyleColors::Dropdown,fVar4,
                      &FStyleColors::Recessed,fVar3,(FDeprecateVector2DParameter *)&local_res8._s_0)
  ;
  FSlateBrush::operator=(&pFVar7->Disabled,pFVar8);
  (pFVar7->NormalForeground).SpecifiedColor.field0_0x0._s_0 =
       (FLinearColor_u_0_s_0)FStyleColors::ForegroundHover.SpecifiedColor.field0_0x0;
  EVar5 = FStyleColors::ForegroundHover.ColorTableId;
  uVar6 = FStyleColors::ForegroundHover._18_2_;
  (pFVar7->NormalForeground).ColorUseRule = FStyleColors::ForegroundHover.ColorUseRule;
  (pFVar7->NormalForeground).ColorTableId = EVar5;
  *(undefined2 *)&(pFVar7->NormalForeground).field_0x12 = uVar6;
  (pFVar7->HoveredForeground).SpecifiedColor.field0_0x0._s_0 =
       (FLinearColor_u_0_s_0)FStyleColors::ForegroundHover.SpecifiedColor.field0_0x0;
  EVar5 = FStyleColors::ForegroundHover.ColorTableId;
  uVar6 = FStyleColors::ForegroundHover._18_2_;
  (pFVar7->HoveredForeground).ColorUseRule = FStyleColors::ForegroundHover.ColorUseRule;
  (pFVar7->HoveredForeground).ColorTableId = EVar5;
  *(undefined2 *)&(pFVar7->HoveredForeground).field_0x12 = uVar6;
  (pFVar7->PressedForeground).SpecifiedColor.field0_0x0._s_0 =
       (FLinearColor_u_0_s_0)FStyleColors::ForegroundHover.SpecifiedColor.field0_0x0;
  EVar5 = FStyleColors::ForegroundHover.ColorTableId;
  uVar6 = FStyleColors::ForegroundHover._18_2_;
  (pFVar7->PressedForeground).ColorUseRule = FStyleColors::ForegroundHover.ColorUseRule;
  (pFVar7->PressedForeground).ColorTableId = EVar5;
  *(undefined2 *)&(pFVar7->PressedForeground).field_0x12 = uVar6;
  (pFVar7->DisabledForeground).SpecifiedColor.field0_0x0._s_0 =
       (FLinearColor_u_0_s_0)FStyleColors::Foreground.SpecifiedColor.field0_0x0;
  EVar5 = FStyleColors::Foreground.ColorTableId;
  uVar6 = FStyleColors::Foreground._18_2_;
  (pFVar7->DisabledForeground).ColorUseRule = FStyleColors::Foreground.ColorUseRule;
  (pFVar7->DisabledForeground).ColorTableId = EVar5;
  *(undefined2 *)&(pFVar7->DisabledForeground).field_0x12 = uVar6;
  pFVar7->NormalPadding = CoreStyleConstants::ButtonMargins;
  pFVar7->PressedPadding = CoreStyleConstants::PressedButtonMargins;
  FButtonStyle::FButtonStyle(&local_1598,pFVar7);
  local_25e8[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_2548);
  local_21a8[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_2108);
  local_2258[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_21b8);
  local_1d68._0_8_ = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_1cc8);
  local_20f8._0_8_ = &___7FButtonStyle__6B_;
  local_20f8.Disabled._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_20f8.Disabled.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  local_20f8.Pressed._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_20f8.Pressed.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  local_20f8.Hovered._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_20f8.Hovered.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  local_20f8.Normal._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_20f8.Normal.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)&local_20f8);
  pFVar7 = FButtonStyle::FButtonStyle(&local_20f8,&local_1598);
  local_res8._s_0 = (TVector2<float>_u_0_s_0)CoreStyleConstants::Icon32x32;
  pFVar8 = (FSlateBrush *)
           FSlateRoundedBoxBrush::FSlateRoundedBoxBrush<FSlateColor,FSlateColor,float>
                     ((FSlateRoundedBoxBrush *)local_2258,&FStyleColors::Secondary,fVar4,
                      &FStyleColors::Input,fVar3,(FDeprecateVector2DParameter *)&local_res8._s_0);
  FSlateBrush::operator=(&pFVar7->Normal,pFVar8);
  local_res8._s_0 = (TVector2<float>_u_0_s_0)CoreStyleConstants::Icon32x32;
  pFVar8 = (FSlateBrush *)
           FSlateRoundedBoxBrush::FSlateRoundedBoxBrush<FSlateColor,FSlateColor,float>
                     ((FSlateRoundedBoxBrush *)local_21a8,&FStyleColors::Hover,fVar4,
                      &FStyleColors::Input,fVar3,(FDeprecateVector2DParameter *)&local_res8._s_0);
  FSlateBrush::operator=(&pFVar7->Hovered,pFVar8);
  local_res8._s_0 = (TVector2<float>_u_0_s_0)CoreStyleConstants::Icon32x32;
  pFVar8 = (FSlateBrush *)
           FSlateRoundedBoxBrush::FSlateRoundedBoxBrush<FSlateColor,FSlateColor,float>
                     ((FSlateRoundedBoxBrush *)local_25e8,&FStyleColors::Header,fVar4,
                      &FStyleColors::Input,fVar3,(FDeprecateVector2DParameter *)&local_res8._s_0);
  FSlateBrush::operator=(&pFVar7->Pressed,pFVar8);
  FButtonStyle::FButtonStyle(&local_ae8,pFVar7);
  local_25e8[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_2548);
  local_21a8[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_2108);
  local_2258[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_21b8);
  local_20f8._0_8_ = &___7FButtonStyle__6B_;
  local_20f8.Disabled._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_20f8.Disabled.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  local_20f8.Pressed._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_20f8.Pressed.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  local_20f8.Hovered._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_20f8.Hovered.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  local_20f8.Normal._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_20f8.Normal.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)&local_20f8);
  pFVar7 = FButtonStyle::FButtonStyle(&local_20f8);
  local_res8 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  pFVar8 = (FSlateBrush *)
           FSlateNoResource::FSlateNoResource
                     ((FSlateNoResource *)local_1d68,(FDeprecateVector2DParameter *)&local_res8._s_0
                     );
  FSlateBrush::operator=(&pFVar7->Normal,pFVar8);
  local_res8 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  pFVar8 = (FSlateBrush *)
           FSlateRoundedBoxBrush::FSlateRoundedBoxBrush<FSlateColor,float>
                     ((FSlateRoundedBoxBrush *)local_2258,&FStyleColors::Dropdown,fVar4,
                      (FDeprecateVector2DParameter *)&local_res8._s_0);
  FSlateBrush::operator=(&pFVar7->Hovered,pFVar8);
  local_res8 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  pFVar8 = (FSlateBrush *)
           FSlateRoundedBoxBrush::FSlateRoundedBoxBrush<FSlateColor,float>
                     ((FSlateRoundedBoxBrush *)local_21a8,&FStyleColors::Dropdown,fVar4,
                      (FDeprecateVector2DParameter *)&local_res8._s_0);
  FSlateBrush::operator=(&pFVar7->Pressed,pFVar8);
  local_res8 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  pFVar8 = (FSlateBrush *)
           FSlateNoResource::FSlateNoResource
                     ((FSlateNoResource *)local_25e8,(FDeprecateVector2DParameter *)&local_res8._s_0
                     );
  FSlateBrush::operator=(&pFVar7->Disabled,pFVar8);
  (pFVar7->NormalForeground).SpecifiedColor.field0_0x0._s_0 =
       (FLinearColor_u_0_s_0)FStyleColors::Foreground.SpecifiedColor.field0_0x0;
  EVar5 = FStyleColors::Foreground.ColorTableId;
  uVar6 = FStyleColors::Foreground._18_2_;
  (pFVar7->NormalForeground).ColorUseRule = FStyleColors::Foreground.ColorUseRule;
  (pFVar7->NormalForeground).ColorTableId = EVar5;
  *(undefined2 *)&(pFVar7->NormalForeground).field_0x12 = uVar6;
  (pFVar7->HoveredForeground).SpecifiedColor.field0_0x0._s_0 =
       (FLinearColor_u_0_s_0)FStyleColors::ForegroundHover.SpecifiedColor.field0_0x0;
  EVar5 = FStyleColors::ForegroundHover.ColorTableId;
  uVar6 = FStyleColors::ForegroundHover._18_2_;
  (pFVar7->HoveredForeground).ColorUseRule = FStyleColors::ForegroundHover.ColorUseRule;
  (pFVar7->HoveredForeground).ColorTableId = EVar5;
  *(undefined2 *)&(pFVar7->HoveredForeground).field_0x12 = uVar6;
  (pFVar7->PressedForeground).SpecifiedColor.field0_0x0._s_0 =
       (FLinearColor_u_0_s_0)FStyleColors::ForegroundHover.SpecifiedColor.field0_0x0;
  EVar5 = FStyleColors::ForegroundHover.ColorTableId;
  uVar6 = FStyleColors::ForegroundHover._18_2_;
  (pFVar7->PressedForeground).ColorUseRule = FStyleColors::ForegroundHover.ColorUseRule;
  (pFVar7->PressedForeground).ColorTableId = EVar5;
  *(undefined2 *)&(pFVar7->PressedForeground).field_0x12 = uVar6;
  (pFVar7->DisabledForeground).SpecifiedColor.field0_0x0._s_0 =
       (FLinearColor_u_0_s_0)FStyleColors::Foreground.SpecifiedColor.field0_0x0;
  EVar5 = FStyleColors::Foreground.ColorTableId;
  uVar6 = FStyleColors::Foreground._18_2_;
  (pFVar7->DisabledForeground).ColorUseRule = FStyleColors::Foreground.ColorUseRule;
  (pFVar7->DisabledForeground).ColorTableId = EVar5;
  *(undefined2 *)&(pFVar7->DisabledForeground).field_0x12 = uVar6;
  pFVar7->NormalPadding = CoreStyleConstants::ButtonMargins;
  pFVar7->PressedPadding = CoreStyleConstants::PressedButtonMargins;
  FButtonStyle::FButtonStyle(&local_1208,pFVar7);
  local_25e8[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_2548);
  local_21a8[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_2108);
  local_2258[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_21b8);
  local_1d68._0_8_ = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_1cc8);
  local_20f8._0_8_ = &___7FButtonStyle__6B_;
  local_20f8.Disabled._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_20f8.Disabled.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  local_20f8.Pressed._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_20f8.Pressed.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  local_20f8.Hovered._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_20f8.Hovered.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  local_20f8.Normal._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_20f8.Normal.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)&local_20f8);
  pFVar7 = FButtonStyle::FButtonStyle(&local_20f8,&local_1208);
  (pFVar7->NormalPadding).Left = 4.0;
  (pFVar7->NormalPadding).Top = 1.0;
  (pFVar7->NormalPadding).Right = 4.0;
  (pFVar7->NormalPadding).Bottom = 1.0;
  (pFVar7->PressedPadding).Left = 4.0;
  (pFVar7->PressedPadding).Top = 2.0;
  (pFVar7->PressedPadding).Right = 4.0;
  (pFVar7->PressedPadding).Bottom = 0.0;
  FButtonStyle::FButtonStyle(&local_e78,pFVar7);
  local_20f8._0_8_ = &___7FButtonStyle__6B_;
  local_20f8.Disabled._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_20f8.Disabled.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  local_20f8.Pressed._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_20f8.Pressed.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  local_20f8.Hovered._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_20f8.Hovered.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  local_20f8.Normal._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_20f8.Normal.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)&local_20f8);
  pFVar7 = FButtonStyle::FButtonStyle((FButtonStyle *)local_1cb8,&local_1208);
  (pFVar7->NormalPadding).Left = 2.0;
  (pFVar7->NormalPadding).Top = 1.0;
  (pFVar7->NormalPadding).Right = 2.0;
  (pFVar7->NormalPadding).Bottom = 1.0;
  (pFVar7->PressedPadding).Left = 2.0;
  (pFVar7->PressedPadding).Top = 2.0;
  (pFVar7->PressedPadding).Right = 2.0;
  (pFVar7->PressedPadding).Bottom = 0.0;
  FButtonStyle::FButtonStyle(&local_1928,pFVar7);
  local_1cb8._0_8_ = &___7FButtonStyle__6B_;
  local_1a98._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1a98.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  local_1b48._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1b48.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  local_1bf8._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1bf8.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  local_1ca8 = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_1c10._8_8_);
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)local_1cb8);
  pFVar1 = param_1->Object;
  pFVar9 = ::FName::FName((FName *)&local_res8._s_0,"NormalText");
  pFVar10 = (FTextBlockStyle *)
            (**(code **)(pFVar1->_padding_ + 0xa0))(pFVar1,FTextBlockStyle::TypeName,*pFVar9,0,1);
  if (pFVar10 == (FTextBlockStyle *)0x0) {
    pFVar10 = FTextBlockStyle::GetDefault();
  }
  pFVar10 = FTextBlockStyle::FTextBlockStyle((FTextBlockStyle *)local_2538,pFVar10);
  pFVar10->OverflowPolicy = Ellipsis;
  FTextBlockStyle::FTextBlockStyle((FTextBlockStyle *)local_1cb8,pFVar10);
  local_2538._0_8_ = &___7FTextBlockStyle__6B_;
  local_2318._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2318.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  local_23c8._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_23c8.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  local_2478._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2478.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_2538._64_8_);
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)local_2538);
  pFVar1 = param_1->Object;
  pFVar9 = ::FName::FName((FName *)&local_res8._s_0,"ButtonText");
  FSlateStyleSet::Set<FTextBlockStyle>
            ((FSlateStyleSet *)pFVar1,*pFVar9,(FTextBlockStyle *)local_1cb8);
  pFVar1 = param_1->Object;
  pFVar9 = ::FName::FName((FName *)&local_res8._s_0,"PrimaryButton");
  FSlateStyleSet::Set<FButtonStyle>((FSlateStyleSet *)pFVar1,*pFVar9,&local_758);
  pFVar1 = param_1->Object;
  pFVar9 = ::FName::FName((FName *)&local_res8._s_0,"PrimaryButtonLabelAndIconNormalPadding");
  FSlateStyleSet::Set((FSlateStyleSet *)pFVar1,*pFVar9,&local_2610);
  pFVar1 = param_1->Object;
  pFVar9 = ::FName::FName((FName *)&local_res8._s_0,"PrimaryButtonLabelAndIconPressedPadding");
  FSlateStyleSet::Set((FSlateStyleSet *)pFVar1,*pFVar9,&local_2600);
  pFVar1 = param_1->Object;
  pFVar9 = ::FName::FName((FName *)&local_res8._s_0,"Button");
  FSlateStyleSet::Set<FButtonStyle>((FSlateStyleSet *)pFVar1,*pFVar9,&local_1598);
  pFVar1 = param_1->Object;
  pFVar9 = ::FName::FName((FName *)&local_res8._s_0,"EditorUtilityButton");
  FSlateStyleSet::Set<FButtonStyle>((FSlateStyleSet *)pFVar1,*pFVar9,&local_ae8);
  pFVar1 = param_1->Object;
  pFVar9 = ::FName::FName((FName *)&local_res8._s_0,"SimpleButton");
  FSlateStyleSet::Set<FButtonStyle>((FSlateStyleSet *)pFVar1,*pFVar9,&local_1928);
  pFVar1 = param_1->Object;
  pFVar9 = ::FName::FName((FName *)&local_res8._s_0,"SimpleButtonLabelAndIcon");
  FSlateStyleSet::Set<FButtonStyle>((FSlateStyleSet *)pFVar1,*pFVar9,&local_e78);
  pFVar1 = param_1->Object;
  local_2538._0_8_ = &___7FTextBlockStyle__6B_;
  FSlateFontInfo::FSlateFontInfo
            ((FSlateFontInfo *)(local_2538 + 8),(FSlateFontInfo *)(local_1cb8 + 8));
  local_2538._120_4_ = local_1c50._16_4_;
  local_2538._104_8_ = local_1c50._0_8_;
  local_2538._112_8_ = local_1c50._8_8_;
  local_24bc = local_1c3c;
  EStack_2494 = local_1c14;
  EStack_2493 = EStack_1c13;
  uStack_2492 = uStack_1c12;
  local_24b4._0_8_ = local_1c34._0_8_;
  local_24b4._8_8_ = local_1c34._8_8_;
  local_2480 = local_1c00.Value;
  local_24a4._0_8_ = local_1c24._0_8_;
  local_24a4._s_0.B = (float)local_1c24._8_8_;
  local_24a4._s_0.A = (float)((ulonglong)local_1c24._8_8_ >> 0x20);
  local_2490._0_8_ = local_1c10._0_8_;
  local_2490._8_8_ = local_1c10._8_8_;
  FSlateBrush::FSlateBrush(&local_2478,&local_1bf8);
  FSlateBrush::FSlateBrush(&local_23c8,&local_1b48);
  FSlateBrush::FSlateBrush(&local_2318,&local_1a98);
  local_2268 = local_19e8[0]._0_1_;
  local_2267 = local_19e8[0]._1_1_;
  pFVar11 = FStyleFonts::Get();
  FSlateFontInfo::operator=((FSlateFontInfo *)(local_2538 + 8),&pFVar11->NormalBold);
  pFVar9 = ::FName::FName((FName *)&local_res8._s_0,"PrimaryButtonText");
  FSlateStyleSet::Set<FTextBlockStyle>
            ((FSlateStyleSet *)pFVar1,*pFVar9,(FTextBlockStyle *)local_2538);
  local_2538._0_8_ = &___7FTextBlockStyle__6B_;
  local_2318._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2318.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  local_23c8._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_23c8.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  local_2478._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2478.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_2538._64_8_);
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)local_2538);
  pFVar11 = FStyleFonts::Get();
  FSlateFontInfo::FSlateFontInfo((FSlateFontInfo *)local_1d68,&pFVar11->SmallBold);
  pFVar1 = param_1->Object;
  pFVar9 = ::FName::FName((FName *)&local_res8._s_0,"SecondaryButton");
  FSlateStyleSet::Set<FButtonStyle>((FSlateStyleSet *)pFVar1,*pFVar9,&local_1598);
  pFVar1 = param_1->Object;
  pFVar9 = ::FName::FName((FName *)&local_res8._s_0,"DialogButtonText");
  FSlateStyleSet::Set<FTextBlockStyle>
            ((FSlateStyleSet *)pFVar1,*pFVar9,(FTextBlockStyle *)local_1cb8);
  pFVar1 = param_1->Object;
  local_2538._0_8_ = &___7FTextBlockStyle__6B_;
  FSlateFontInfo::FSlateFontInfo
            ((FSlateFontInfo *)(local_2538 + 8),(FSlateFontInfo *)(local_1cb8 + 8));
  local_2538._120_4_ = local_1c50._16_4_;
  local_2538._104_8_ = local_1c50._0_8_;
  local_2538._112_8_ = local_1c50._8_8_;
  local_24bc = local_1c3c;
  EStack_2494 = local_1c14;
  EStack_2493 = EStack_1c13;
  uStack_2492 = uStack_1c12;
  local_24b4._0_8_ = local_1c34._0_8_;
  local_24b4._8_8_ = local_1c34._8_8_;
  local_2480 = local_1c00.Value;
  local_24a4._0_8_ = local_1c24._0_8_;
  local_24a4._s_0.B = (float)local_1c24._8_8_;
  local_24a4._s_0.A = (float)((ulonglong)local_1c24._8_8_ >> 0x20);
  local_2490._0_8_ = local_1c10._0_8_;
  local_2490._8_8_ = local_1c10._8_8_;
  FSlateBrush::FSlateBrush(&local_2478,&local_1bf8);
  FSlateBrush::FSlateBrush(&local_23c8,&local_1b48);
  FSlateBrush::FSlateBrush(&local_2318,&local_1a98);
  local_2268 = local_19e8[0]._0_1_;
  local_2267 = local_19e8[0]._1_1_;
  pFVar9 = ::FName::FName((FName *)&local_res8._s_0,"SmallButtonText");
  FSlateStyleSet::Set<FTextBlockStyle>
            ((FSlateStyleSet *)pFVar1,*pFVar9,(FTextBlockStyle *)local_2538);
  local_2538._0_8_ = &___7FTextBlockStyle__6B_;
  local_2318._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2318.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  local_23c8._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_23c8.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  local_2478._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2478.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_2538._64_8_);
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)local_2538);
  pFVar7 = FButtonStyle::FButtonStyle(&local_3c8);
  local_res8 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  pFVar8 = (FSlateBrush *)
           FSlateNoResource::FSlateNoResource
                     ((FSlateNoResource *)local_2538,(FDeprecateVector2DParameter *)&local_res8._s_0
                     );
  FSlateBrush::operator=(&pFVar7->Normal,pFVar8);
  local_res8 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  pFVar8 = (FSlateBrush *)
           FSlateNoResource::FSlateNoResource
                     ((FSlateNoResource *)local_2258,(FDeprecateVector2DParameter *)&local_res8._s_0
                     );
  FSlateBrush::operator=(&pFVar7->Hovered,pFVar8);
  local_res8 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  pFVar8 = (FSlateBrush *)
           FSlateNoResource::FSlateNoResource
                     ((FSlateNoResource *)local_21a8,(FDeprecateVector2DParameter *)&local_res8._s_0
                     );
  FSlateBrush::operator=(&pFVar7->Pressed,pFVar8);
  local_res8 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  pFVar8 = (FSlateBrush *)
           FSlateNoResource::FSlateNoResource
                     ((FSlateNoResource *)local_25e8,(FDeprecateVector2DParameter *)&local_res8._s_0
                     );
  FSlateBrush::operator=(&pFVar7->Disabled,pFVar8);
  uVar2 = local_2618 >> 8;
  local_2618 = uVar2 << 8;
  (pFVar7->NormalForeground).SpecifiedColor.field0_0x0._s_0 =
       (FLinearColor_u_0_s_0)FLinearColor::White.field0_0x0;
  (pFVar7->NormalForeground).ColorUseRule = (undefined1)local_2618;
  (pFVar7->NormalForeground).ColorTableId = local_2618._1_1_;
  *(undefined2 *)&(pFVar7->NormalForeground).field_0x12 = local_2618._2_2_;
  local_2618 = uVar2 << 8;
  (pFVar7->HoveredForeground).SpecifiedColor.field0_0x0._s_0 =
       (FLinearColor_u_0_s_0)FLinearColor::White.field0_0x0;
  (pFVar7->HoveredForeground).ColorUseRule = (undefined1)local_2618;
  (pFVar7->HoveredForeground).ColorTableId = local_2618._1_1_;
  *(undefined2 *)&(pFVar7->HoveredForeground).field_0x12 = local_2618._2_2_;
  local_2618 = uVar2 << 8;
  (pFVar7->PressedForeground).SpecifiedColor.field0_0x0._s_0 =
       (FLinearColor_u_0_s_0)FLinearColor::White.field0_0x0;
  (pFVar7->PressedForeground).ColorUseRule = (undefined1)local_2618;
  (pFVar7->PressedForeground).ColorTableId = local_2618._1_1_;
  *(undefined2 *)&(pFVar7->PressedForeground).field_0x12 = local_2618._2_2_;
  local_2618 = uVar2 << 8;
  (pFVar7->DisabledForeground).SpecifiedColor.field0_0x0._s_0 =
       (FLinearColor_u_0_s_0)FLinearColor::White.field0_0x0;
  (pFVar7->DisabledForeground).ColorUseRule = (undefined1)local_2618;
  (pFVar7->DisabledForeground).ColorTableId = local_2618._1_1_;
  *(undefined2 *)&(pFVar7->DisabledForeground).field_0x12 = local_2618._2_2_;
  (pFVar7->NormalPadding).Left = 0.0;
  (pFVar7->NormalPadding).Top = 0.0;
  (pFVar7->NormalPadding).Right = 0.0;
  (pFVar7->NormalPadding).Bottom = 0.0;
  (pFVar7->PressedPadding).Left = 0.0;
  (pFVar7->PressedPadding).Top = 0.0;
  (pFVar7->PressedPadding).Right = 0.0;
  (pFVar7->PressedPadding).Bottom = 0.0;
  FButtonStyle::FButtonStyle(&local_20f8,pFVar7);
  local_25e8[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_2548);
  local_21a8[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_2108);
  local_2258[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_21b8);
  local_2538._0_8_ = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)CONCAT44(_EStack_2494,local_24a4._s_0.A));
  local_3c8._0_8_ = &___7FButtonStyle__6B_;
  local_3c8.Disabled._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3c8.Disabled.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  local_3c8.Pressed._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3c8.Pressed.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  local_3c8.Hovered._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3c8.Hovered.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  local_3c8.Normal._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3c8.Normal.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)&local_3c8);
  pFVar1 = param_1->Object;
  pFVar9 = ::FName::FName((FName *)&local_res8._s_0,"InvisibleButton");
  FSlateStyleSet::Set<FButtonStyle>((FSlateStyleSet *)pFVar1,*pFVar9,&local_20f8);
  local_res8 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  pFVar8 = (FSlateBrush *)
           FSlateNoResource::FSlateNoResource
                     ((FSlateNoResource *)local_25e8,(FDeprecateVector2DParameter *)&local_res8._s_0
                     );
  FSlateBrush::operator=((FSlateBrush *)((longlong)&local_1928 + 0xc0),pFVar8);
  local_res8 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  pFVar8 = (FSlateBrush *)
           FSlateNoResource::FSlateNoResource
                     ((FSlateNoResource *)local_2538,(FDeprecateVector2DParameter *)&local_res8._s_0
                     );
  FSlateBrush::operator=((FSlateBrush *)((longlong)&local_1928 + 0x170),pFVar8);
  local_1928.NormalPadding.Left = ___xmm_00000000400000000000000040000000;
  local_1928.NormalPadding.Top = _UNK_150925074;
  local_1928.NormalPadding.Right = _UNK_150925078;
  local_1928.NormalPadding.Bottom = _UNK_15092507c;
  local_1928.PressedPadding.Left = ___xmm_00000000400000000000000040000000;
  local_1928.PressedPadding.Top = _UNK_150925074;
  local_1928.PressedPadding.Right = _UNK_150925078;
  local_1928.PressedPadding.Bottom = _UNK_15092507c;
  local_2538._0_8_ = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)CONCAT44(_EStack_2494,local_24a4._s_0.A));
  local_25e8[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_2548);
  pFVar1 = param_1->Object;
  pFVar9 = ::FName::FName((FName *)&local_res8._s_0,"HoverOnlyButton");
  FSlateStyleSet::Set<FButtonStyle>((FSlateStyleSet *)pFVar1,*pFVar9,&local_1928);
  pFVar1 = param_1->Object;
  local_1928.NormalPadding.Left = 0.0;
  local_1928.NormalPadding.Top = 0.0;
  local_1928.NormalPadding.Right = 0.0;
  local_1928.NormalPadding.Bottom = 0.0;
  local_1928.PressedPadding.Left = 0.0;
  local_1928.PressedPadding.Top = 0.0;
  local_1928.PressedPadding.Right = 0.0;
  local_1928.PressedPadding.Bottom = 0.0;
  pFVar9 = ::FName::FName((FName *)&local_res8._s_0,"ThinHoverOnlyButton");
  FSlateStyleSet::Set<FButtonStyle>((FSlateStyleSet *)pFVar1,*pFVar9,&local_1928);
  local_20f8._0_8_ = &___7FButtonStyle__6B_;
  local_20f8.Disabled._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_20f8.Disabled.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  local_20f8.Pressed._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_20f8.Pressed.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  local_20f8.Hovered._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_20f8.Hovered.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  local_20f8.Normal._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_20f8.Normal.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)&local_20f8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_1d68._56_8_);
  local_1cb8._0_8_ = &___7FTextBlockStyle__6B_;
  local_1a98._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1a98.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  local_1b48._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1b48.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  local_1bf8._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1bf8.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1c78.ReferenceController);
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)local_1cb8);
  local_1928._0_8_ = &___7FButtonStyle__6B_;
  local_1928.Disabled._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1928.Disabled.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  local_1928.Pressed._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1928.Pressed.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  local_1928.Hovered._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1928.Hovered.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  local_1928.Normal._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1928.Normal.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)&local_1928);
  local_e78._0_8_ = &___7FButtonStyle__6B_;
  local_e78.Disabled._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_e78.Disabled.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  local_e78.Pressed._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_e78.Pressed.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  local_e78.Hovered._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_e78.Hovered.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  local_e78.Normal._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_e78.Normal.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)&local_e78);
  local_1208._0_8_ = &___7FButtonStyle__6B_;
  local_1208.Disabled._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1208.Disabled.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  local_1208.Pressed._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1208.Pressed.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  local_1208.Hovered._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1208.Hovered.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  local_1208.Normal._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1208.Normal.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)&local_1208);
  local_ae8._0_8_ = &___7FButtonStyle__6B_;
  local_ae8.Disabled._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_ae8.Disabled.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  local_ae8.Pressed._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_ae8.Pressed.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  local_ae8.Hovered._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_ae8.Hovered.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  local_ae8.Normal._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_ae8.Normal.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)&local_ae8);
  local_1598._0_8_ = &___7FButtonStyle__6B_;
  local_1598.Disabled._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1598.Disabled.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  local_1598.Pressed._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1598.Pressed.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  local_1598.Hovered._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1598.Hovered.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  local_1598.Normal._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1598.Normal.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)&local_1598);
  local_758._0_8_ = &___7FButtonStyle__6B_;
  local_758.Disabled._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_758.Disabled.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  local_758.Pressed._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_758.Pressed.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  local_758.Hovered._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_758.Hovered.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  local_758.Normal._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_758.Normal.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)&local_758);
  return;
}

// SetupCheckboxStyles @ 142593dc0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
FStarshipCoreStyle::SetupCheckboxStyles(TSharedRef<FStarshipCoreStyle::FStyle,1> *param_1)

{
  FStyle *pFVar1;
  uint uVar2;
  float fVar3;
  float fVar4;
  void *pvVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  EStyleColor EVar8;
  undefined2 uVar9;
  undefined8 uVar10;
  FCheckBoxStyle *pFVar11;
  FSlateBrush *pFVar12;
  FString *pFVar13;
  FName *pFVar14;
  FSegmentedControlStyle *pFVar15;
  FButtonStyle *pFVar16;
  FComboButtonStyle *pFVar17;
  TVector2<float>_u_0 local_res8;
  FName local_res10;
  FName local_res18;
  FMargin local_77c8;
  void *local_77b8 [2];
  uint local_77a8;
  FMargin local_77a0;
  void *local_7790 [2];
  void *local_7780 [2];
  void *local_7770 [2];
  FLinearColor_u_0 local_7760;
  void *local_7750 [2];
  void *local_7740 [2];
  void *local_7730 [2];
  void *local_7720 [3];
  undefined **local_7708 [20];
  TReferenceControllerBase<1> *local_7668;
  FSlateBrush local_7658;
  FSlateBrush local_75a8;
  FSlateBrush local_74f8;
  undefined **local_7448 [20];
  TReferenceControllerBase<1> *local_73a8;
  undefined **local_7398 [20];
  TReferenceControllerBase<1> *local_72f8;
  FSlateBrush local_72e8;
  FSlateBrush local_7238;
  FSlateBrush local_7188;
  FSlateBrush local_70d8;
  undefined1 local_7028 [176];
  FSharedReferencer<1> local_6f78;
  undefined **local_6f68;
  FSharedReferencer<1> local_6ec8;
  undefined **local_6eb8;
  FSharedReferencer<1> local_6e18;
  undefined **local_6e08;
  FSharedReferencer<1> local_6d68;
  FComboButtonStyle local_6c98;
  FButtonStyle local_6738;
  FComboButtonStyle local_63a8;
  FCheckBoxStyle local_5e48;
  FSegmentedControlStyle local_54f8;
  FCheckBoxStyle local_3838;
  FCheckBoxStyle local_2ee8;
  FCheckBoxStyle local_2598;
  FCheckBoxStyle local_1c48;
  FCheckBoxStyle local_12f8;
  FCheckBoxStyle local_9a8;
  
  pFVar11 = FCheckBoxStyle::FCheckBoxStyle((FCheckBoxStyle *)&local_54f8);
  (pFVar11->CheckBoxType).Value = '\0';
  (pFVar11->ForegroundColor).SpecifiedColor.field0_0x0._s_0 =
       (FLinearColor_u_0_s_0)FStyleColors::ForegroundHover.SpecifiedColor.field0_0x0;
  EVar8 = FStyleColors::ForegroundHover.ColorTableId;
  uVar9 = FStyleColors::ForegroundHover._18_2_;
  (pFVar11->ForegroundColor).ColorUseRule = FStyleColors::ForegroundHover.ColorUseRule;
  (pFVar11->ForegroundColor).ColorTableId = EVar8;
  *(undefined2 *)&(pFVar11->ForegroundColor).field_0x12 = uVar9;
  (pFVar11->HoveredForeground).SpecifiedColor.field0_0x0._s_0 =
       (FLinearColor_u_0_s_0)FStyleColors::ForegroundHover.SpecifiedColor.field0_0x0;
  EVar8 = FStyleColors::ForegroundHover.ColorTableId;
  uVar9 = FStyleColors::ForegroundHover._18_2_;
  (pFVar11->HoveredForeground).ColorUseRule = FStyleColors::ForegroundHover.ColorUseRule;
  (pFVar11->HoveredForeground).ColorTableId = EVar8;
  *(undefined2 *)&(pFVar11->HoveredForeground).field_0x12 = uVar9;
  (pFVar11->PressedForeground).SpecifiedColor.field0_0x0._s_0 =
       (FLinearColor_u_0_s_0)FStyleColors::ForegroundHover.SpecifiedColor.field0_0x0;
  EVar8 = FStyleColors::ForegroundHover.ColorTableId;
  uVar9 = FStyleColors::ForegroundHover._18_2_;
  (pFVar11->PressedForeground).ColorUseRule = FStyleColors::ForegroundHover.ColorUseRule;
  (pFVar11->PressedForeground).ColorTableId = EVar8;
  *(undefined2 *)&(pFVar11->PressedForeground).field_0x12 = uVar9;
  (pFVar11->CheckedForeground).SpecifiedColor.field0_0x0._s_0 =
       (FLinearColor_u_0_s_0)FStyleColors::ForegroundHover.SpecifiedColor.field0_0x0;
  EVar8 = FStyleColors::ForegroundHover.ColorTableId;
  uVar9 = FStyleColors::ForegroundHover._18_2_;
  (pFVar11->CheckedForeground).ColorUseRule = FStyleColors::ForegroundHover.ColorUseRule;
  (pFVar11->CheckedForeground).ColorTableId = EVar8;
  *(undefined2 *)&(pFVar11->CheckedForeground).field_0x12 = uVar9;
  (pFVar11->CheckedHoveredForeground).SpecifiedColor.field0_0x0._s_0 =
       (FLinearColor_u_0_s_0)FStyleColors::ForegroundHover.SpecifiedColor.field0_0x0;
  EVar8 = FStyleColors::ForegroundHover.ColorTableId;
  uVar9 = FStyleColors::ForegroundHover._18_2_;
  (pFVar11->CheckedHoveredForeground).ColorUseRule = FStyleColors::ForegroundHover.ColorUseRule;
  (pFVar11->CheckedHoveredForeground).ColorTableId = EVar8;
  *(undefined2 *)&(pFVar11->CheckedHoveredForeground).field_0x12 = uVar9;
  (pFVar11->CheckedPressedForeground).SpecifiedColor.field0_0x0._s_0 =
       (FLinearColor_u_0_s_0)FStyleColors::ForegroundHover.SpecifiedColor.field0_0x0;
  EVar8 = FStyleColors::ForegroundHover.ColorTableId;
  uVar9 = FStyleColors::ForegroundHover._18_2_;
  (pFVar11->CheckedPressedForeground).ColorUseRule = FStyleColors::ForegroundHover.ColorUseRule;
  (pFVar11->CheckedPressedForeground).ColorTableId = EVar8;
  *(undefined2 *)&(pFVar11->CheckedPressedForeground).field_0x12 = uVar9;
  (pFVar11->UndeterminedForeground).SpecifiedColor.field0_0x0._s_0 =
       (FLinearColor_u_0_s_0)FStyleColors::ForegroundHover.SpecifiedColor.field0_0x0;
  EVar8 = FStyleColors::ForegroundHover.ColorTableId;
  uVar9 = FStyleColors::ForegroundHover._18_2_;
  (pFVar11->UndeterminedForeground).ColorUseRule = FStyleColors::ForegroundHover.ColorUseRule;
  (pFVar11->UndeterminedForeground).ColorTableId = EVar8;
  *(undefined2 *)&(pFVar11->UndeterminedForeground).field_0x12 = uVar9;
  local_res8 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  pFVar12 = (FSlateBrush *)
            FSlateNoResource::FSlateNoResource
                      ((FSlateNoResource *)local_7708,
                       (FDeprecateVector2DParameter *)&local_res8._s_0);
  FSlateBrush::operator=(&pFVar11->UncheckedImage,pFVar12);
  local_res8 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  pFVar12 = (FSlateBrush *)
            FSlateNoResource::FSlateNoResource
                      ((FSlateNoResource *)local_7448,
                       (FDeprecateVector2DParameter *)&local_res8._s_0);
  FSlateBrush::operator=(&pFVar11->UncheckedHoveredImage,pFVar12);
  local_res8 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  pFVar12 = (FSlateBrush *)
            FSlateNoResource::FSlateNoResource
                      ((FSlateNoResource *)local_7398,
                       (FDeprecateVector2DParameter *)&local_res8._s_0);
  FSlateBrush::operator=(&pFVar11->UncheckedPressedImage,pFVar12);
  local_res8._s_0 = (TVector2<float>_u_0_s_0)CoreStyleConstants::Icon16x16;
  pFVar13 = (FString *)
            (**(code **)(param_1->Object->_padding_ + 0xf0))
                      (param_1->Object,&local_77c8,"Starship/CoreWidgets/CheckBox/check",L".svg");
  FSlateImageBrush::FSlateImageBrush
            ((FSlateImageBrush *)&local_72e8,pFVar13,(FDeprecateVector2DParameter *)&local_res8._s_0
             ,&FStyleColors::Primary,NoTile,Vector);
  local_72e8._padding_ = (longlong)&___7FSlateVectorImageBrush__6B_;
  FSlateBrush::operator=(&pFVar11->CheckedImage,&local_72e8);
  local_res8._s_0 = (TVector2<float>_u_0_s_0)CoreStyleConstants::Icon16x16;
  pFVar13 = (FString *)
            (**(code **)(param_1->Object->_padding_ + 0xf0))
                      (param_1->Object,local_7770,"Starship/CoreWidgets/CheckBox/check",L".svg");
  FSlateImageBrush::FSlateImageBrush
            ((FSlateImageBrush *)&local_7188,pFVar13,(FDeprecateVector2DParameter *)&local_res8._s_0
             ,&FStyleColors::PrimaryHover,NoTile,Vector);
  local_7188._padding_ = (longlong)&___7FSlateVectorImageBrush__6B_;
  FSlateBrush::operator=(&pFVar11->CheckedHoveredImage,&local_7188);
  local_res8._s_0 = (TVector2<float>_u_0_s_0)CoreStyleConstants::Icon16x16;
  pFVar13 = (FString *)
            (**(code **)(param_1->Object->_padding_ + 0xf0))
                      (param_1->Object,local_7780,"Starship/CoreWidgets/CheckBox/check",L".svg");
  FSlateImageBrush::FSlateImageBrush
            ((FSlateImageBrush *)&local_7238,pFVar13,(FDeprecateVector2DParameter *)&local_res8._s_0
             ,&FStyleColors::PrimaryPress,NoTile,Vector);
  local_7238._padding_ = (longlong)&___7FSlateVectorImageBrush__6B_;
  FSlateBrush::operator=(&pFVar11->CheckedPressedImage,&local_7238);
  local_res8._s_0 = (TVector2<float>_u_0_s_0)CoreStyleConstants::Icon16x16;
  pFVar13 = (FString *)
            (**(code **)(param_1->Object->_padding_ + 0xf0))
                      (param_1->Object,local_7790,"Starship/CoreWidgets/CheckBox/indeterminate",
                       L".svg");
  FSlateImageBrush::FSlateImageBrush
            ((FSlateImageBrush *)&local_70d8,pFVar13,(FDeprecateVector2DParameter *)&local_res8._s_0
             ,&FStyleColors::Primary,NoTile,Vector);
  local_70d8._padding_ = (longlong)&___7FSlateVectorImageBrush__6B_;
  FSlateBrush::operator=(&pFVar11->UndeterminedImage,&local_70d8);
  local_res8._s_0 = (TVector2<float>_u_0_s_0)CoreStyleConstants::Icon16x16;
  pFVar13 = (FString *)
            (**(code **)(param_1->Object->_padding_ + 0xf0))
                      (param_1->Object,local_77b8,"Starship/CoreWidgets/CheckBox/indeterminate",
                       L".svg");
  FSlateImageBrush::FSlateImageBrush
            ((FSlateImageBrush *)local_7028,pFVar13,(FDeprecateVector2DParameter *)&local_res8._s_0,
             &FStyleColors::PrimaryHover,NoTile,Vector);
  local_7028._0_8_ = &___7FSlateVectorImageBrush__6B_;
  FSlateBrush::operator=(&pFVar11->UndeterminedHoveredImage,(FSlateBrush *)local_7028);
  local_res8._s_0 = (TVector2<float>_u_0_s_0)CoreStyleConstants::Icon16x16;
  pFVar13 = (FString *)
            (**(code **)(param_1->Object->_padding_ + 0xf0))
                      (param_1->Object,local_7750,"Starship/CoreWidgets/CheckBox/indeterminate",
                       L".svg");
  FSlateImageBrush::FSlateImageBrush
            ((FSlateImageBrush *)&local_6c98,pFVar13,(FDeprecateVector2DParameter *)&local_res8._s_0
             ,&FStyleColors::PrimaryPress,NoTile,Vector);
  local_6c98._0_8_ = &___7FSlateVectorImageBrush__6B_;
  FSlateBrush::operator=(&pFVar11->UndeterminedPressedImage,(FSlateBrush *)&local_6c98);
  fVar4 = __real_40400000;
  fVar3 = __real_3f800000;
  local_res8._s_0 = (TVector2<float>_u_0_s_0)CoreStyleConstants::Icon18x18;
  pFVar12 = (FSlateBrush *)
            FSlateRoundedBoxBrush::FSlateRoundedBoxBrush<FSlateColor,FSlateColor,float>
                      ((FSlateRoundedBoxBrush *)&local_74f8,&FStyleColors::Input,__real_40400000,
                       &FStyleColors::Secondary,__real_3f800000,
                       (FDeprecateVector2DParameter *)&local_res8._s_0);
  FSlateBrush::operator=(&pFVar11->BackgroundImage,pFVar12);
  local_res8._s_0 = (TVector2<float>_u_0_s_0)CoreStyleConstants::Icon18x18;
  pFVar12 = (FSlateBrush *)
            FSlateRoundedBoxBrush::FSlateRoundedBoxBrush<FSlateColor,FSlateColor,float>
                      ((FSlateRoundedBoxBrush *)&local_75a8,&FStyleColors::Input,fVar4,
                       &FStyleColors::Hover,fVar3,(FDeprecateVector2DParameter *)&local_res8._s_0);
  FSlateBrush::operator=(&pFVar11->BackgroundHoveredImage,pFVar12);
  local_res8._s_0 = (TVector2<float>_u_0_s_0)CoreStyleConstants::Icon18x18;
  pFVar12 = (FSlateBrush *)
            FSlateRoundedBoxBrush::FSlateRoundedBoxBrush<FSlateColor,FSlateColor,float>
                      ((FSlateRoundedBoxBrush *)&local_7658,&FStyleColors::Input,fVar4,
                       &FStyleColors::Hover,fVar3,(FDeprecateVector2DParameter *)&local_res8._s_0);
  FSlateBrush::operator=(&pFVar11->BackgroundPressedImage,pFVar12);
  FCheckBoxStyle::FCheckBoxStyle(&local_9a8,pFVar11);
  local_7658._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_7658.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  local_75a8._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_75a8.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  local_74f8._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_74f8.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  local_6c98._0_8_ = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_6c98.ButtonStyle.Normal.UVRegion.Min.field0_0x0);
  if (local_7750[0] != (void *)0x0) {
    FMemory::Free(local_7750[0]);
  }
  local_7028._0_8_ = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_7028._160_8_);
  if (local_77b8[0] != (void *)0x0) {
    FMemory::Free(local_77b8[0]);
  }
  local_70d8._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_70d8.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  if (local_7790[0] != (void *)0x0) {
    FMemory::Free(local_7790[0]);
  }
  local_7238._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_7238.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  if (local_7780[0] != (void *)0x0) {
    FMemory::Free(local_7780[0]);
  }
  local_7188._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_7188.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  if (local_7770[0] != (void *)0x0) {
    FMemory::Free(local_7770[0]);
  }
  local_72e8._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_72e8.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  if ((void *)local_77c8._0_8_ != (void *)0x0) {
    FMemory::Free((void *)local_77c8._0_8_);
  }
  local_7398[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_72f8);
  local_7448[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_73a8);
  local_7708[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_7668);
  FCheckBoxStyle::~FCheckBoxStyle((FCheckBoxStyle *)&local_54f8);
  pFVar1 = param_1->Object;
  pFVar14 = ::FName::FName((FName *)&local_res8._s_0,"Checkbox");
  FSlateStyleSet::Set<FCheckBoxStyle>((FSlateStyleSet *)pFVar1,*pFVar14,&local_9a8);
  pFVar11 = FCheckBoxStyle::FCheckBoxStyle((FCheckBoxStyle *)&local_54f8);
  (pFVar11->CheckBoxType).Value = '\x01';
  local_res8 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  pFVar12 = (FSlateBrush *)
            FSlateNoResource::FSlateNoResource
                      ((FSlateNoResource *)&local_7238,
                       (FDeprecateVector2DParameter *)&local_res8._s_0);
  FSlateBrush::operator=(&pFVar11->UncheckedImage,pFVar12);
  local_res8 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  pFVar12 = (FSlateBrush *)
            FSlateNoResource::FSlateNoResource
                      ((FSlateNoResource *)&local_7188,
                       (FDeprecateVector2DParameter *)&local_res8._s_0);
  FSlateBrush::operator=(&pFVar11->UncheckedHoveredImage,pFVar12);
  local_res8 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  pFVar12 = (FSlateBrush *)
            FSlateNoResource::FSlateNoResource
                      ((FSlateNoResource *)&local_72e8,
                       (FDeprecateVector2DParameter *)&local_res8._s_0);
  FSlateBrush::operator=(&pFVar11->UncheckedPressedImage,pFVar12);
  local_res8 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  pFVar12 = (FSlateBrush *)
            FSlateNoResource::FSlateNoResource
                      ((FSlateNoResource *)&local_74f8,
                       (FDeprecateVector2DParameter *)&local_res8._s_0);
  FSlateBrush::operator=(&pFVar11->CheckedImage,pFVar12);
  local_res8 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  pFVar12 = (FSlateBrush *)
            FSlateNoResource::FSlateNoResource
                      ((FSlateNoResource *)&local_75a8,
                       (FDeprecateVector2DParameter *)&local_res8._s_0);
  FSlateBrush::operator=(&pFVar11->CheckedHoveredImage,pFVar12);
  local_res8 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  pFVar12 = (FSlateBrush *)
            FSlateNoResource::FSlateNoResource
                      ((FSlateNoResource *)&local_7658,
                       (FDeprecateVector2DParameter *)&local_res8._s_0);
  FSlateBrush::operator=(&pFVar11->CheckedPressedImage,pFVar12);
  local_res8 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  pFVar12 = (FSlateBrush *)
            FSlateNoResource::FSlateNoResource
                      ((FSlateNoResource *)local_7398,
                       (FDeprecateVector2DParameter *)&local_res8._s_0);
  FSlateBrush::operator=(&pFVar11->UndeterminedImage,pFVar12);
  local_res8 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  pFVar12 = (FSlateBrush *)
            FSlateNoResource::FSlateNoResource
                      ((FSlateNoResource *)local_7448,
                       (FDeprecateVector2DParameter *)&local_res8._s_0);
  FSlateBrush::operator=(&pFVar11->UndeterminedHoveredImage,pFVar12);
  local_res8 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  pFVar12 = (FSlateBrush *)
            FSlateNoResource::FSlateNoResource
                      ((FSlateNoResource *)local_7708,
                       (FDeprecateVector2DParameter *)&local_res8._s_0);
  FSlateBrush::operator=(&pFVar11->UndeterminedPressedImage,pFVar12);
  (pFVar11->ForegroundColor).SpecifiedColor.field0_0x0._s_0 =
       (FLinearColor_u_0_s_0)FStyleColors::Foreground.SpecifiedColor.field0_0x0;
  EVar8 = FStyleColors::Foreground.ColorTableId;
  uVar9 = FStyleColors::Foreground._18_2_;
  (pFVar11->ForegroundColor).ColorUseRule = FStyleColors::Foreground.ColorUseRule;
  (pFVar11->ForegroundColor).ColorTableId = EVar8;
  *(undefined2 *)&(pFVar11->ForegroundColor).field_0x12 = uVar9;
  (pFVar11->HoveredForeground).SpecifiedColor.field0_0x0._s_0 =
       (FLinearColor_u_0_s_0)FStyleColors::ForegroundHover.SpecifiedColor.field0_0x0;
  EVar8 = FStyleColors::ForegroundHover.ColorTableId;
  uVar9 = FStyleColors::ForegroundHover._18_2_;
  (pFVar11->HoveredForeground).ColorUseRule = FStyleColors::ForegroundHover.ColorUseRule;
  (pFVar11->HoveredForeground).ColorTableId = EVar8;
  *(undefined2 *)&(pFVar11->HoveredForeground).field_0x12 = uVar9;
  (pFVar11->PressedForeground).SpecifiedColor.field0_0x0._s_0 =
       (FLinearColor_u_0_s_0)FStyleColors::ForegroundHover.SpecifiedColor.field0_0x0;
  EVar8 = FStyleColors::ForegroundHover.ColorTableId;
  uVar9 = FStyleColors::ForegroundHover._18_2_;
  (pFVar11->PressedForeground).ColorUseRule = FStyleColors::ForegroundHover.ColorUseRule;
  (pFVar11->PressedForeground).ColorTableId = EVar8;
  *(undefined2 *)&(pFVar11->PressedForeground).field_0x12 = uVar9;
  (pFVar11->CheckedForeground).SpecifiedColor.field0_0x0._s_0 =
       (FLinearColor_u_0_s_0)FStyleColors::ForegroundHover.SpecifiedColor.field0_0x0;
  EVar8 = FStyleColors::ForegroundHover.ColorTableId;
  uVar9 = FStyleColors::ForegroundHover._18_2_;
  (pFVar11->CheckedForeground).ColorUseRule = FStyleColors::ForegroundHover.ColorUseRule;
  (pFVar11->CheckedForeground).ColorTableId = EVar8;
  *(undefined2 *)&(pFVar11->CheckedForeground).field_0x12 = uVar9;
  (pFVar11->CheckedHoveredForeground).SpecifiedColor.field0_0x0._s_0 =
       (FLinearColor_u_0_s_0)FStyleColors::ForegroundHover.SpecifiedColor.field0_0x0;
  EVar8 = FStyleColors::ForegroundHover.ColorTableId;
  uVar9 = FStyleColors::ForegroundHover._18_2_;
  (pFVar11->CheckedHoveredForeground).ColorUseRule = FStyleColors::ForegroundHover.ColorUseRule;
  (pFVar11->CheckedHoveredForeground).ColorTableId = EVar8;
  *(undefined2 *)&(pFVar11->CheckedHoveredForeground).field_0x12 = uVar9;
  (pFVar11->CheckedPressedForeground).SpecifiedColor.field0_0x0._s_0 =
       (FLinearColor_u_0_s_0)FStyleColors::ForegroundHover.SpecifiedColor.field0_0x0;
  EVar8 = FStyleColors::ForegroundHover.ColorTableId;
  uVar9 = FStyleColors::ForegroundHover._18_2_;
  (pFVar11->CheckedPressedForeground).ColorUseRule = FStyleColors::ForegroundHover.ColorUseRule;
  (pFVar11->CheckedPressedForeground).ColorTableId = EVar8;
  *(undefined2 *)&(pFVar11->CheckedPressedForeground).field_0x12 = uVar9;
  FCheckBoxStyle::FCheckBoxStyle(&local_12f8,pFVar11);
  local_7708[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_7668);
  local_7448[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_73a8);
  local_7398[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_72f8);
  local_7658._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_7658.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  local_75a8._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_75a8.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  local_74f8._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_74f8.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  local_72e8._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_72e8.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  local_7188._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_7188.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  local_7238._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_7238.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  FCheckBoxStyle::~FCheckBoxStyle((FCheckBoxStyle *)&local_54f8);
  pFVar1 = param_1->Object;
  pFVar14 = ::FName::FName((FName *)&local_res8._s_0,"TransparentCheckBox");
  FSlateStyleSet::Set<FCheckBoxStyle>((FSlateStyleSet *)pFVar1,*pFVar14,&local_12f8);
  pFVar11 = FCheckBoxStyle::FCheckBoxStyle((FCheckBoxStyle *)&local_54f8);
  fVar3 = __real_40800000;
  (pFVar11->CheckBoxType).Value = '\x01';
  local_res8 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  pFVar12 = (FSlateBrush *)
            FSlateRoundedBoxBrush::FSlateRoundedBoxBrush<FSlateColor,float>
                      ((FSlateRoundedBoxBrush *)&local_74f8,&FStyleColors::Primary,fVar3,
                       (FDeprecateVector2DParameter *)&local_res8._s_0);
  FSlateBrush::operator=(&pFVar11->CheckedImage,pFVar12);
  local_res8 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  pFVar12 = (FSlateBrush *)
            FSlateRoundedBoxBrush::FSlateRoundedBoxBrush<FSlateColor,float>
                      ((FSlateRoundedBoxBrush *)&local_75a8,&FStyleColors::PrimaryHover,fVar3,
                       (FDeprecateVector2DParameter *)&local_res8._s_0);
  FSlateBrush::operator=(&pFVar11->CheckedHoveredImage,pFVar12);
  local_res8 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  pFVar12 = (FSlateBrush *)
            FSlateRoundedBoxBrush::FSlateRoundedBoxBrush<FSlateColor,float>
                      ((FSlateRoundedBoxBrush *)&local_7658,&FStyleColors::Dropdown,fVar3,
                       (FDeprecateVector2DParameter *)&local_res8._s_0);
  FSlateBrush::operator=(&pFVar11->CheckedPressedImage,pFVar12);
  local_res8 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  pFVar12 = (FSlateBrush *)
            FSlateNoResource::FSlateNoResource
                      ((FSlateNoResource *)local_7398,
                       (FDeprecateVector2DParameter *)&local_res8._s_0);
  FSlateBrush::operator=(&pFVar11->UncheckedImage,pFVar12);
  local_res8 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  pFVar12 = (FSlateBrush *)
            FSlateRoundedBoxBrush::FSlateRoundedBoxBrush<FSlateColor,float>
                      ((FSlateRoundedBoxBrush *)local_7448,&FStyleColors::Dropdown,fVar3,
                       (FDeprecateVector2DParameter *)&local_res8._s_0);
  FSlateBrush::operator=(&pFVar11->UncheckedHoveredImage,pFVar12);
  local_res8 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  pFVar12 = (FSlateBrush *)
            FSlateRoundedBoxBrush::FSlateRoundedBoxBrush<FSlateColor,float>
                      ((FSlateRoundedBoxBrush *)local_7708,&FStyleColors::Dropdown,fVar3,
                       (FDeprecateVector2DParameter *)&local_res8._s_0);
  FSlateBrush::operator=(&pFVar11->UncheckedPressedImage,pFVar12);
  (pFVar11->ForegroundColor).SpecifiedColor.field0_0x0._s_0 =
       (FLinearColor_u_0_s_0)FStyleColors::Foreground.SpecifiedColor.field0_0x0;
  EVar8 = FStyleColors::Foreground.ColorTableId;
  uVar9 = FStyleColors::Foreground._18_2_;
  (pFVar11->ForegroundColor).ColorUseRule = FStyleColors::Foreground.ColorUseRule;
  (pFVar11->ForegroundColor).ColorTableId = EVar8;
  *(undefined2 *)&(pFVar11->ForegroundColor).field_0x12 = uVar9;
  (pFVar11->HoveredForeground).SpecifiedColor.field0_0x0._s_0 =
       (FLinearColor_u_0_s_0)FStyleColors::ForegroundHover.SpecifiedColor.field0_0x0;
  EVar8 = FStyleColors::ForegroundHover.ColorTableId;
  uVar9 = FStyleColors::ForegroundHover._18_2_;
  (pFVar11->HoveredForeground).ColorUseRule = FStyleColors::ForegroundHover.ColorUseRule;
  (pFVar11->HoveredForeground).ColorTableId = EVar8;
  *(undefined2 *)&(pFVar11->HoveredForeground).field_0x12 = uVar9;
  (pFVar11->PressedForeground).SpecifiedColor.field0_0x0._s_0 =
       (FLinearColor_u_0_s_0)FStyleColors::ForegroundHover.SpecifiedColor.field0_0x0;
  EVar8 = FStyleColors::ForegroundHover.ColorTableId;
  uVar9 = FStyleColors::ForegroundHover._18_2_;
  (pFVar11->PressedForeground).ColorUseRule = FStyleColors::ForegroundHover.ColorUseRule;
  (pFVar11->PressedForeground).ColorTableId = EVar8;
  *(undefined2 *)&(pFVar11->PressedForeground).field_0x12 = uVar9;
  (pFVar11->CheckedForeground).SpecifiedColor.field0_0x0._s_0 =
       (FLinearColor_u_0_s_0)FStyleColors::ForegroundHover.SpecifiedColor.field0_0x0;
  EVar8 = FStyleColors::ForegroundHover.ColorTableId;
  uVar9 = FStyleColors::ForegroundHover._18_2_;
  (pFVar11->CheckedForeground).ColorUseRule = FStyleColors::ForegroundHover.ColorUseRule;
  (pFVar11->CheckedForeground).ColorTableId = EVar8;
  *(undefined2 *)&(pFVar11->CheckedForeground).field_0x12 = uVar9;
  (pFVar11->CheckedHoveredForeground).SpecifiedColor.field0_0x0._s_0 =
       (FLinearColor_u_0_s_0)FStyleColors::ForegroundHover.SpecifiedColor.field0_0x0;
  EVar8 = FStyleColors::ForegroundHover.ColorTableId;
  uVar9 = FStyleColors::ForegroundHover._18_2_;
  (pFVar11->CheckedHoveredForeground).ColorUseRule = FStyleColors::ForegroundHover.ColorUseRule;
  (pFVar11->CheckedHoveredForeground).ColorTableId = EVar8;
  *(undefined2 *)&(pFVar11->CheckedHoveredForeground).field_0x12 = uVar9;
  (pFVar11->CheckedPressedForeground).SpecifiedColor.field0_0x0._s_0 =
       (FLinearColor_u_0_s_0)FStyleColors::ForegroundHover.SpecifiedColor.field0_0x0;
  EVar8 = FStyleColors::ForegroundHover.ColorTableId;
  uVar9 = FStyleColors::ForegroundHover._18_2_;
  (pFVar11->CheckedPressedForeground).ColorUseRule = FStyleColors::ForegroundHover.ColorUseRule;
  (pFVar11->CheckedPressedForeground).ColorTableId = EVar8;
  *(undefined2 *)&(pFVar11->CheckedPressedForeground).field_0x12 = uVar9;
  pFVar11->Padding = CoreStyleConstants::ToggleButtonMargins;
  FCheckBoxStyle::FCheckBoxStyle(&local_3838,pFVar11);
  local_7708[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_7668);
  local_7448[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_73a8);
  local_7398[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_72f8);
  local_7658._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_7658.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  local_75a8._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_75a8.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  local_74f8._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_74f8.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  FCheckBoxStyle::~FCheckBoxStyle((FCheckBoxStyle *)&local_54f8);
  pFVar1 = param_1->Object;
  pFVar14 = ::FName::FName((FName *)&local_res8._s_0,"ToggleButtonCheckbox");
  FSlateStyleSet::Set<FCheckBoxStyle>((FSlateStyleSet *)pFVar1,*pFVar14,&local_3838);
  pFVar11 = FCheckBoxStyle::FCheckBoxStyle((FCheckBoxStyle *)&local_54f8);
  (pFVar11->CheckBoxType).Value = '\x01';
  local_res8 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  pFVar12 = (FSlateBrush *)
            FSlateRoundedBoxBrush::FSlateRoundedBoxBrush<FSlateColor,float>
                      ((FSlateRoundedBoxBrush *)&local_74f8,&FStyleColors::Input,fVar3,
                       (FDeprecateVector2DParameter *)&local_res8._s_0);
  FSlateBrush::operator=(&pFVar11->CheckedImage,pFVar12);
  local_res8 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  pFVar12 = (FSlateBrush *)
            FSlateRoundedBoxBrush::FSlateRoundedBoxBrush<FSlateColor,float>
                      ((FSlateRoundedBoxBrush *)&local_75a8,&FStyleColors::Hover,fVar3,
                       (FDeprecateVector2DParameter *)&local_res8._s_0);
  FSlateBrush::operator=(&pFVar11->CheckedHoveredImage,pFVar12);
  local_res8 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  pFVar12 = (FSlateBrush *)
            FSlateRoundedBoxBrush::FSlateRoundedBoxBrush<FSlateColor,float>
                      ((FSlateRoundedBoxBrush *)&local_7658,&FStyleColors::Input,fVar3,
                       (FDeprecateVector2DParameter *)&local_res8._s_0);
  FSlateBrush::operator=(&pFVar11->CheckedPressedImage,pFVar12);
  local_res8 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  pFVar12 = (FSlateBrush *)
            FSlateNoResource::FSlateNoResource
                      ((FSlateNoResource *)local_7398,
                       (FDeprecateVector2DParameter *)&local_res8._s_0);
  FSlateBrush::operator=(&pFVar11->UncheckedImage,pFVar12);
  local_res8 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  pFVar12 = (FSlateBrush *)
            FSlateRoundedBoxBrush::FSlateRoundedBoxBrush<FSlateColor,float>
                      ((FSlateRoundedBoxBrush *)local_7448,&FStyleColors::Hover,fVar3,
                       (FDeprecateVector2DParameter *)&local_res8._s_0);
  FSlateBrush::operator=(&pFVar11->UncheckedHoveredImage,pFVar12);
  local_res8 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  pFVar12 = (FSlateBrush *)
            FSlateRoundedBoxBrush::FSlateRoundedBoxBrush<FSlateColor,float>
                      ((FSlateRoundedBoxBrush *)local_7708,&FStyleColors::Input,fVar3,
                       (FDeprecateVector2DParameter *)&local_res8._s_0);
  FSlateBrush::operator=(&pFVar11->UncheckedPressedImage,pFVar12);
  (pFVar11->ForegroundColor).SpecifiedColor.field0_0x0._s_0 =
       (FLinearColor_u_0_s_0)FStyleColors::Foreground.SpecifiedColor.field0_0x0;
  EVar8 = FStyleColors::Foreground.ColorTableId;
  uVar9 = FStyleColors::Foreground._18_2_;
  (pFVar11->ForegroundColor).ColorUseRule = FStyleColors::Foreground.ColorUseRule;
  (pFVar11->ForegroundColor).ColorTableId = EVar8;
  *(undefined2 *)&(pFVar11->ForegroundColor).field_0x12 = uVar9;
  (pFVar11->HoveredForeground).SpecifiedColor.field0_0x0._s_0 =
       (FLinearColor_u_0_s_0)FStyleColors::ForegroundHover.SpecifiedColor.field0_0x0;
  EVar8 = FStyleColors::ForegroundHover.ColorTableId;
  uVar9 = FStyleColors::ForegroundHover._18_2_;
  (pFVar11->HoveredForeground).ColorUseRule = FStyleColors::ForegroundHover.ColorUseRule;
  (pFVar11->HoveredForeground).ColorTableId = EVar8;
  *(undefined2 *)&(pFVar11->HoveredForeground).field_0x12 = uVar9;
  (pFVar11->PressedForeground).SpecifiedColor.field0_0x0._s_0 =
       (FLinearColor_u_0_s_0)FStyleColors::ForegroundHover.SpecifiedColor.field0_0x0;
  EVar8 = FStyleColors::ForegroundHover.ColorTableId;
  uVar9 = FStyleColors::ForegroundHover._18_2_;
  (pFVar11->PressedForeground).ColorUseRule = FStyleColors::ForegroundHover.ColorUseRule;
  (pFVar11->PressedForeground).ColorTableId = EVar8;
  *(undefined2 *)&(pFVar11->PressedForeground).field_0x12 = uVar9;
  (pFVar11->CheckedForeground).SpecifiedColor.field0_0x0._s_0 =
       (FLinearColor_u_0_s_0)FStyleColors::White.SpecifiedColor.field0_0x0;
  EVar8 = FStyleColors::White.ColorTableId;
  uVar9 = FStyleColors::White._18_2_;
  (pFVar11->CheckedForeground).ColorUseRule = FStyleColors::White.ColorUseRule;
  (pFVar11->CheckedForeground).ColorTableId = EVar8;
  *(undefined2 *)&(pFVar11->CheckedForeground).field_0x12 = uVar9;
  (pFVar11->CheckedHoveredForeground).SpecifiedColor.field0_0x0._s_0 =
       (FLinearColor_u_0_s_0)FStyleColors::White.SpecifiedColor.field0_0x0;
  EVar8 = FStyleColors::White.ColorTableId;
  uVar9 = FStyleColors::White._18_2_;
  (pFVar11->CheckedHoveredForeground).ColorUseRule = FStyleColors::White.ColorUseRule;
  (pFVar11->CheckedHoveredForeground).ColorTableId = EVar8;
  *(undefined2 *)&(pFVar11->CheckedHoveredForeground).field_0x12 = uVar9;
  pFVar11->Padding = CoreStyleConstants::ToggleButtonMargins;
  FCheckBoxStyle::FCheckBoxStyle(&local_1c48,pFVar11);
  local_7708[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_7668);
  local_7448[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_73a8);
  local_7398[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_72f8);
  local_7658._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_7658.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  local_75a8._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_75a8.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  local_74f8._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_74f8.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  FCheckBoxStyle::~FCheckBoxStyle((FCheckBoxStyle *)&local_54f8);
  pFVar1 = param_1->Object;
  pFVar14 = ::FName::FName((FName *)&local_res8._s_0,"ToggleButtonCheckboxAlt");
  FSlateStyleSet::Set<FCheckBoxStyle>((FSlateStyleSet *)pFVar1,*pFVar14,&local_1c48);
  pFVar11 = FCheckBoxStyle::FCheckBoxStyle((FCheckBoxStyle *)&local_54f8);
  (pFVar11->CheckBoxType).Value = '\x01';
  local_res8 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  pFVar12 = (FSlateBrush *)
            FSlateNoResource::FSlateNoResource
                      ((FSlateNoResource *)&local_74f8,
                       (FDeprecateVector2DParameter *)&local_res8._s_0);
  FSlateBrush::operator=(&pFVar11->UncheckedImage,pFVar12);
  local_res8 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  pFVar12 = (FSlateBrush *)
            FSlateRoundedBoxBrush::FSlateRoundedBoxBrush<FSlateColor,float>
                      ((FSlateRoundedBoxBrush *)&local_75a8,&FStyleColors::Hover,fVar3,
                       (FDeprecateVector2DParameter *)&local_res8._s_0);
  FSlateBrush::operator=(&pFVar11->UncheckedHoveredImage,pFVar12);
  local_res8 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  pFVar12 = (FSlateBrush *)
            FSlateRoundedBoxBrush::FSlateRoundedBoxBrush<FSlateColor,float>
                      ((FSlateRoundedBoxBrush *)&local_7658,&FStyleColors::Header,fVar3,
                       (FDeprecateVector2DParameter *)&local_res8._s_0);
  FSlateBrush::operator=(&pFVar11->UncheckedPressedImage,pFVar12);
  local_res8 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  pFVar12 = (FSlateBrush *)
            FSlateRoundedBoxBrush::FSlateRoundedBoxBrush<FSlateColor,float>
                      ((FSlateRoundedBoxBrush *)local_7398,&FStyleColors::Dropdown,fVar3,
                       (FDeprecateVector2DParameter *)&local_res8._s_0);
  FSlateBrush::operator=(&pFVar11->CheckedImage,pFVar12);
  local_res8 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  pFVar12 = (FSlateBrush *)
            FSlateRoundedBoxBrush::FSlateRoundedBoxBrush<FSlateColor,float>
                      ((FSlateRoundedBoxBrush *)local_7448,&FStyleColors::Hover,fVar3,
                       (FDeprecateVector2DParameter *)&local_res8._s_0);
  FSlateBrush::operator=(&pFVar11->CheckedHoveredImage,pFVar12);
  local_res8 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  pFVar12 = (FSlateBrush *)
            FSlateRoundedBoxBrush::FSlateRoundedBoxBrush<FSlateColor,float>
                      ((FSlateRoundedBoxBrush *)local_7708,&FStyleColors::Header,fVar3,
                       (FDeprecateVector2DParameter *)&local_res8._s_0);
  FSlateBrush::operator=(&pFVar11->CheckedPressedImage,pFVar12);
  (pFVar11->ForegroundColor).SpecifiedColor.field0_0x0._s_0 =
       (FLinearColor_u_0_s_0)FStyleColors::Foreground.SpecifiedColor.field0_0x0;
  EVar8 = FStyleColors::Foreground.ColorTableId;
  uVar9 = FStyleColors::Foreground._18_2_;
  (pFVar11->ForegroundColor).ColorUseRule = FStyleColors::Foreground.ColorUseRule;
  (pFVar11->ForegroundColor).ColorTableId = EVar8;
  *(undefined2 *)&(pFVar11->ForegroundColor).field_0x12 = uVar9;
  (pFVar11->HoveredForeground).SpecifiedColor.field0_0x0._s_0 =
       (FLinearColor_u_0_s_0)FStyleColors::ForegroundHover.SpecifiedColor.field0_0x0;
  EVar8 = FStyleColors::ForegroundHover.ColorTableId;
  uVar9 = FStyleColors::ForegroundHover._18_2_;
  (pFVar11->HoveredForeground).ColorUseRule = FStyleColors::ForegroundHover.ColorUseRule;
  (pFVar11->HoveredForeground).ColorTableId = EVar8;
  *(undefined2 *)&(pFVar11->HoveredForeground).field_0x12 = uVar9;
  (pFVar11->PressedForeground).SpecifiedColor.field0_0x0._s_0 =
       (FLinearColor_u_0_s_0)FStyleColors::ForegroundHover.SpecifiedColor.field0_0x0;
  EVar8 = FStyleColors::ForegroundHover.ColorTableId;
  uVar9 = FStyleColors::ForegroundHover._18_2_;
  (pFVar11->PressedForeground).ColorUseRule = FStyleColors::ForegroundHover.ColorUseRule;
  (pFVar11->PressedForeground).ColorTableId = EVar8;
  *(undefined2 *)&(pFVar11->PressedForeground).field_0x12 = uVar9;
  (pFVar11->CheckedForeground).SpecifiedColor.field0_0x0._s_0 =
       (FLinearColor_u_0_s_0)FStyleColors::ForegroundHover.SpecifiedColor.field0_0x0;
  EVar8 = FStyleColors::ForegroundHover.ColorTableId;
  uVar9 = FStyleColors::ForegroundHover._18_2_;
  (pFVar11->CheckedForeground).ColorUseRule = FStyleColors::ForegroundHover.ColorUseRule;
  (pFVar11->CheckedForeground).ColorTableId = EVar8;
  *(undefined2 *)&(pFVar11->CheckedForeground).field_0x12 = uVar9;
  (pFVar11->CheckedHoveredForeground).SpecifiedColor.field0_0x0._s_0 =
       (FLinearColor_u_0_s_0)FStyleColors::ForegroundHover.SpecifiedColor.field0_0x0;
  EVar8 = FStyleColors::ForegroundHover.ColorTableId;
  uVar9 = FStyleColors::ForegroundHover._18_2_;
  (pFVar11->CheckedHoveredForeground).ColorUseRule = FStyleColors::ForegroundHover.ColorUseRule;
  (pFVar11->CheckedHoveredForeground).ColorTableId = EVar8;
  *(undefined2 *)&(pFVar11->CheckedHoveredForeground).field_0x12 = uVar9;
  (pFVar11->CheckedPressedForeground).SpecifiedColor.field0_0x0._s_0 =
       (FLinearColor_u_0_s_0)FStyleColors::ForegroundHover.SpecifiedColor.field0_0x0;
  EVar8 = FStyleColors::ForegroundHover.ColorTableId;
  uVar9 = FStyleColors::ForegroundHover._18_2_;
  (pFVar11->CheckedPressedForeground).ColorUseRule = FStyleColors::ForegroundHover.ColorUseRule;
  (pFVar11->CheckedPressedForeground).ColorTableId = EVar8;
  *(undefined2 *)&(pFVar11->CheckedPressedForeground).field_0x12 = uVar9;
  (pFVar11->Padding).Left = 8.0;
  (pFVar11->Padding).Top = 3.0;
  (pFVar11->Padding).Right = 8.0;
  (pFVar11->Padding).Bottom = 3.0;
  FCheckBoxStyle::FCheckBoxStyle(&local_5e48,pFVar11);
  local_7708[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_7668);
  local_7448[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_73a8);
  local_7398[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_72f8);
  local_7658._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_7658.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  local_75a8._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_75a8.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  local_74f8._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_74f8.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  FCheckBoxStyle::~FCheckBoxStyle((FCheckBoxStyle *)&local_54f8);
  pFVar1 = param_1->Object;
  pFVar15 = FSegmentedControlStyle::FSegmentedControlStyle(&local_54f8);
  FCheckBoxStyle::operator=(&pFVar15->ControlStyle,&local_5e48);
  FCheckBoxStyle::operator=(&pFVar15->FirstControlStyle,&local_5e48);
  FCheckBoxStyle::operator=(&pFVar15->LastControlStyle,&local_5e48);
  local_res8 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  pFVar12 = (FSlateBrush *)
            FSlateRoundedBoxBrush::FSlateRoundedBoxBrush<FSlateColor,float>
                      ((FSlateRoundedBoxBrush *)local_7708,&FStyleColors::Input,fVar3,
                       (FDeprecateVector2DParameter *)&local_res8._s_0);
  FSlateBrush::operator=(&pFVar15->BackgroundBrush,pFVar12);
  uVar6 = _UNK_15076b1f8;
  *(void **)&pFVar15->UniformPadding = ___xmm_3f8000003f8000003f8000003f800000;
  uVar10 = _UNK_15076b1f8;
  _UNK_15076b1f8 = (undefined4)uVar6;
  _UNK_15076b1fc = SUB84(uVar6,4);
  uVar7 = _UNK_15076b1fc;
  (pFVar15->UniformPadding).Right = (float)_UNK_15076b1f8;
  _UNK_15076b1f8 = uVar10;
  (pFVar15->UniformPadding).Bottom = (float)uVar7;
  pFVar14 = ::FName::FName(&local_res10,"SegmentedControl");
  FSlateStyleSet::Set<FSegmentedControlStyle>((FSlateStyleSet *)pFVar1,*pFVar14,pFVar15);
  local_7708[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_7668);
  local_54f8._padding_ = (longlong)&___7FSegmentedControlStyle__6B_;
  local_54f8.BackgroundBrush._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_54f8.BackgroundBrush.ResourceHandle.Data.SharedReferenceCount.ReferenceController
            );
  FCheckBoxStyle::~FCheckBoxStyle(&local_54f8.LastControlStyle);
  FCheckBoxStyle::~FCheckBoxStyle(&local_54f8.FirstControlStyle);
  FCheckBoxStyle::~FCheckBoxStyle(&local_54f8.ControlStyle);
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)&local_54f8);
  uVar6 = _UNK_15076b0c8;
  pvVar5 = ___xmm_3e8000003e8000003e8000003e800000;
  local_res8 = (TVector2<float>_u_0)0x4180000041800000;
  local_77c8._0_8_ = ___xmm_3e8000003e8000003e8000003e800000;
  local_77c8.Right = _UNK_15076b0c8;
  local_77c8.Bottom = _UNK_15076b0cc;
  pFVar13 = (FString *)
            (**(code **)(param_1->Object->_padding_ + 0xf0))
                      (param_1->Object,&local_77a0,"/Starship/CoreWidgets/SegmentedBox/left",L".png"
                      );
  pFVar12 = (FSlateBrush *)
            FSlateBoxBrush::FSlateBoxBrush
                      ((FSlateBoxBrush *)&local_74f8,pFVar13,
                       (FDeprecateVector2DParameter *)&local_res8._s_0,&local_77c8,
                       &FStyleColors::Dropdown,FullColor);
  FSlateBrush::operator=(&local_5e48.UncheckedImage,pFVar12);
  uVar10 = _UNK_15076b0c8;
  local_res8 = (TVector2<float>_u_0)0x4180000041800000;
  local_77c8._0_8_ = pvVar5;
  _UNK_15076b0c8 = (float)uVar6;
  _UNK_15076b0cc = SUB84(uVar6,4);
  local_77c8.Right = _UNK_15076b0c8;
  local_77c8.Bottom = _UNK_15076b0cc;
  _UNK_15076b0c8 = uVar10;
  pFVar13 = (FString *)
            (**(code **)(param_1->Object->_padding_ + 0xf0))
                      (param_1->Object,local_7750,"/Starship/CoreWidgets/SegmentedBox/left",L".png")
  ;
  pFVar12 = (FSlateBrush *)
            FSlateBoxBrush::FSlateBoxBrush
                      ((FSlateBoxBrush *)&local_75a8,pFVar13,
                       (FDeprecateVector2DParameter *)&local_res8._s_0,&local_77c8,
                       &FStyleColors::Hover,FullColor);
  FSlateBrush::operator=(&local_5e48.UncheckedHoveredImage,pFVar12);
  uVar10 = _UNK_15076b0c8;
  local_res8 = (TVector2<float>_u_0)0x4180000041800000;
  local_77c8._0_8_ = pvVar5;
  _UNK_15076b0c8 = (float)uVar6;
  _UNK_15076b0cc = SUB84(uVar6,4);
  local_77c8.Right = _UNK_15076b0c8;
  local_77c8.Bottom = _UNK_15076b0cc;
  _UNK_15076b0c8 = uVar10;
  pFVar13 = (FString *)
            (**(code **)(param_1->Object->_padding_ + 0xf0))
                      (param_1->Object,local_77b8,"/Starship/CoreWidgets/SegmentedBox/left",L".png")
  ;
  pFVar12 = (FSlateBrush *)
            FSlateBoxBrush::FSlateBoxBrush
                      ((FSlateBoxBrush *)&local_7658,pFVar13,
                       (FDeprecateVector2DParameter *)&local_res8._s_0,&local_77c8,
                       &FStyleColors::Secondary,FullColor);
  FSlateBrush::operator=(&local_5e48.UncheckedPressedImage,pFVar12);
  uVar10 = _UNK_15076b0c8;
  local_res8 = (TVector2<float>_u_0)0x4180000041800000;
  local_77c8._0_8_ = pvVar5;
  _UNK_15076b0c8 = (float)uVar6;
  _UNK_15076b0cc = SUB84(uVar6,4);
  local_77c8.Right = _UNK_15076b0c8;
  local_77c8.Bottom = _UNK_15076b0cc;
  _UNK_15076b0c8 = uVar10;
  pFVar13 = (FString *)
            (**(code **)(param_1->Object->_padding_ + 0xf0))
                      (param_1->Object,local_7790,"/Starship/CoreWidgets/SegmentedBox/left",L".png")
  ;
  pFVar12 = (FSlateBrush *)
            FSlateBoxBrush::FSlateBoxBrush
                      ((FSlateBoxBrush *)local_7398,pFVar13,
                       (FDeprecateVector2DParameter *)&local_res8._s_0,&local_77c8,
                       &FStyleColors::Primary,FullColor);
  FSlateBrush::operator=(&local_5e48.CheckedImage,pFVar12);
  uVar10 = _UNK_15076b0c8;
  local_res8 = (TVector2<float>_u_0)0x4180000041800000;
  local_77c8._0_8_ = pvVar5;
  _UNK_15076b0c8 = (float)uVar6;
  _UNK_15076b0cc = SUB84(uVar6,4);
  local_77c8.Right = _UNK_15076b0c8;
  local_77c8.Bottom = _UNK_15076b0cc;
  _UNK_15076b0c8 = uVar10;
  pFVar13 = (FString *)
            (**(code **)(param_1->Object->_padding_ + 0xf0))
                      (param_1->Object,local_7780,"/Starship/CoreWidgets/SegmentedBox/left",L".png")
  ;
  pFVar12 = (FSlateBrush *)
            FSlateBoxBrush::FSlateBoxBrush
                      ((FSlateBoxBrush *)local_7448,pFVar13,
                       (FDeprecateVector2DParameter *)&local_res8._s_0,&local_77c8,
                       &FStyleColors::PrimaryHover,FullColor);
  FSlateBrush::operator=(&local_5e48.CheckedHoveredImage,pFVar12);
  uVar10 = _UNK_15076b0c8;
  local_res8 = (TVector2<float>_u_0)0x4180000041800000;
  local_77c8._0_8_ = pvVar5;
  _UNK_15076b0c8 = (float)uVar6;
  _UNK_15076b0cc = SUB84(uVar6,4);
  local_77c8.Right = _UNK_15076b0c8;
  local_77c8.Bottom = _UNK_15076b0cc;
  _UNK_15076b0c8 = uVar10;
  pFVar13 = (FString *)
            (**(code **)(param_1->Object->_padding_ + 0xf0))
                      (param_1->Object,local_7770,"/Starship/CoreWidgets/SegmentedBox/left",L".png")
  ;
  pFVar12 = (FSlateBrush *)
            FSlateBoxBrush::FSlateBoxBrush
                      ((FSlateBoxBrush *)local_7708,pFVar13,
                       (FDeprecateVector2DParameter *)&local_res8._s_0,&local_77c8,
                       &FStyleColors::PrimaryPress,FullColor);
  FSlateBrush::operator=(&local_5e48.CheckedPressedImage,pFVar12);
  local_7708[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_7668);
  if (local_7770[0] != (void *)0x0) {
    FMemory::Free(local_7770[0]);
  }
  local_7448[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_73a8);
  if (local_7780[0] != (void *)0x0) {
    FMemory::Free(local_7780[0]);
  }
  local_7398[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_72f8);
  if (local_7790[0] != (void *)0x0) {
    FMemory::Free(local_7790[0]);
  }
  local_7658._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_7658.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  if (local_77b8[0] != (void *)0x0) {
    FMemory::Free(local_77b8[0]);
  }
  local_75a8._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_75a8.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  if (local_7750[0] != (void *)0x0) {
    FMemory::Free(local_7750[0]);
  }
  local_74f8._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_74f8.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  if ((void *)local_77a0._0_8_ != (void *)0x0) {
    FMemory::Free((void *)local_77a0._0_8_);
  }
  pFVar1 = param_1->Object;
  pFVar14 = ::FName::FName((FName *)&local_res8._s_0,"SegmentedCombo.Left");
  FSlateStyleSet::Set<FCheckBoxStyle>((FSlateStyleSet *)pFVar1,*pFVar14,&local_5e48);
  pFVar16 = FButtonStyle::FButtonStyle((FButtonStyle *)local_7028);
  uVar10 = _UNK_15076b0c8;
  local_res8 = (TVector2<float>_u_0)0x4180000041800000;
  local_77a0._0_8_ = pvVar5;
  _UNK_15076b0c8 = (float)uVar6;
  _UNK_15076b0cc = SUB84(uVar6,4);
  local_77a0.Right = _UNK_15076b0c8;
  local_77a0.Bottom = _UNK_15076b0cc;
  _UNK_15076b0c8 = uVar10;
  pFVar13 = (FString *)
            (**(code **)(param_1->Object->_padding_ + 0xf0))
                      (param_1->Object,&local_7760,"/Starship/CoreWidgets/SegmentedBox/right",
                       L".png");
  pFVar12 = (FSlateBrush *)
            FSlateBoxBrush::FSlateBoxBrush
                      ((FSlateBoxBrush *)&local_70d8,pFVar13,
                       (FDeprecateVector2DParameter *)&local_res8._s_0,&local_77a0,
                       &FStyleColors::Secondary,FullColor);
  FSlateBrush::operator=(&pFVar16->Normal,pFVar12);
  uVar10 = _UNK_15076b0c8;
  local_res8 = (TVector2<float>_u_0)0x4180000041800000;
  local_77a0._0_8_ = pvVar5;
  _UNK_15076b0c8 = (float)uVar6;
  _UNK_15076b0cc = SUB84(uVar6,4);
  local_77a0.Right = _UNK_15076b0c8;
  local_77a0.Bottom = _UNK_15076b0cc;
  _UNK_15076b0c8 = uVar10;
  pFVar13 = (FString *)
            (**(code **)(param_1->Object->_padding_ + 0xf0))
                      (param_1->Object,local_7730,"/Starship/CoreWidgets/SegmentedBox/right",L".png"
                      );
  pFVar12 = (FSlateBrush *)
            FSlateBoxBrush::FSlateBoxBrush
                      ((FSlateBoxBrush *)&local_7238,pFVar13,
                       (FDeprecateVector2DParameter *)&local_res8._s_0,&local_77a0,
                       &FStyleColors::Hover,FullColor);
  FSlateBrush::operator=(&pFVar16->Hovered,pFVar12);
  uVar10 = _UNK_15076b0c8;
  local_res8 = (TVector2<float>_u_0)0x4180000041800000;
  local_77a0._0_8_ = pvVar5;
  _UNK_15076b0c8 = (float)uVar6;
  _UNK_15076b0cc = SUB84(uVar6,4);
  local_77a0.Right = _UNK_15076b0c8;
  local_77a0.Bottom = _UNK_15076b0cc;
  _UNK_15076b0c8 = uVar10;
  pFVar13 = (FString *)
            (**(code **)(param_1->Object->_padding_ + 0xf0))
                      (param_1->Object,local_7740,"/Starship/CoreWidgets/SegmentedBox/right",L".png"
                      );
  pFVar12 = (FSlateBrush *)
            FSlateBoxBrush::FSlateBoxBrush
                      ((FSlateBoxBrush *)&local_7188,pFVar13,
                       (FDeprecateVector2DParameter *)&local_res8._s_0,&local_77a0,
                       &FStyleColors::Secondary,FullColor);
  FSlateBrush::operator=(&pFVar16->Pressed,pFVar12);
  (pFVar16->NormalForeground).SpecifiedColor.field0_0x0._s_0 =
       (FLinearColor_u_0_s_0)FStyleColors::Foreground.SpecifiedColor.field0_0x0;
  EVar8 = FStyleColors::Foreground.ColorTableId;
  uVar9 = FStyleColors::Foreground._18_2_;
  (pFVar16->NormalForeground).ColorUseRule = FStyleColors::Foreground.ColorUseRule;
  (pFVar16->NormalForeground).ColorTableId = EVar8;
  *(undefined2 *)&(pFVar16->NormalForeground).field_0x12 = uVar9;
  (pFVar16->HoveredForeground).SpecifiedColor.field0_0x0._s_0 =
       (FLinearColor_u_0_s_0)FStyleColors::ForegroundHover.SpecifiedColor.field0_0x0;
  EVar8 = FStyleColors::ForegroundHover.ColorTableId;
  uVar9 = FStyleColors::ForegroundHover._18_2_;
  (pFVar16->HoveredForeground).ColorUseRule = FStyleColors::ForegroundHover.ColorUseRule;
  (pFVar16->HoveredForeground).ColorTableId = EVar8;
  *(undefined2 *)&(pFVar16->HoveredForeground).field_0x12 = uVar9;
  (pFVar16->PressedForeground).SpecifiedColor.field0_0x0._s_0 =
       (FLinearColor_u_0_s_0)FStyleColors::Primary.SpecifiedColor.field0_0x0;
  EVar8 = FStyleColors::Primary.ColorTableId;
  uVar9 = FStyleColors::Primary._18_2_;
  (pFVar16->PressedForeground).ColorUseRule = FStyleColors::Primary.ColorUseRule;
  (pFVar16->PressedForeground).ColorTableId = EVar8;
  *(undefined2 *)&(pFVar16->PressedForeground).field_0x12 = uVar9;
  (pFVar16->DisabledForeground).SpecifiedColor.field0_0x0._s_0 =
       (FLinearColor_u_0_s_0)FStyleColors::Foreground.SpecifiedColor.field0_0x0;
  EVar8 = FStyleColors::Foreground.ColorTableId;
  uVar9 = FStyleColors::Foreground._18_2_;
  (pFVar16->DisabledForeground).ColorUseRule = FStyleColors::Foreground.ColorUseRule;
  (pFVar16->DisabledForeground).ColorTableId = EVar8;
  *(undefined2 *)&(pFVar16->DisabledForeground).field_0x12 = uVar9;
  (pFVar16->NormalPadding).Left = 0.0;
  (pFVar16->NormalPadding).Top = 0.0;
  (pFVar16->NormalPadding).Right = 0.0;
  (pFVar16->NormalPadding).Bottom = 0.0;
  (pFVar16->PressedPadding).Left = 0.0;
  (pFVar16->PressedPadding).Top = 0.0;
  (pFVar16->PressedPadding).Right = 0.0;
  (pFVar16->PressedPadding).Bottom = 0.0;
  FButtonStyle::FButtonStyle(&local_6738,pFVar16);
  local_7188._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_7188.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  if (local_7740[0] != (void *)0x0) {
    FMemory::Free(local_7740[0]);
  }
  local_7238._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_7238.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  if (local_7730[0] != (void *)0x0) {
    FMemory::Free(local_7730[0]);
  }
  local_70d8._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_70d8.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  if ((void *)local_7760._0_8_ != (void *)0x0) {
    FMemory::Free((void *)local_7760._0_8_);
  }
  local_7028._0_8_ = &___7FButtonStyle__6B_;
  local_6e08 = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_6d68.ReferenceController);
  local_6eb8 = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_6e18.ReferenceController);
  local_6f68 = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_6ec8.ReferenceController);
  local_7028._16_8_ = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_6f78.ReferenceController);
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)local_7028);
  pFVar1 = param_1->Object;
  pFVar14 = ::FName::FName(&local_res18,"ComboButton");
  pFVar17 = (FComboButtonStyle *)
            (**(code **)(pFVar1->_padding_ + 0xa0))(pFVar1,FComboButtonStyle::TypeName,*pFVar14,0,1)
  ;
  if ((pFVar17 == (FComboButtonStyle *)0x0) &&
     (pFVar17 = &::Default,
     *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
             0x9d4c) < ::_TSS0)) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      FComboButtonStyle::FComboButtonStyle(&::Default);
      atexit(`FComboButtonStyle::GetDefault'::__l2::_dynamic_atexit_destructor_for__Default__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  pFVar17 = FComboButtonStyle::FComboButtonStyle(&local_6c98,pFVar17);
  (pFVar17->ContentPadding).Left = 6.0;
  (pFVar17->ContentPadding).Top = 2.0;
  (pFVar17->ContentPadding).Right = 6.0;
  (pFVar17->ContentPadding).Bottom = 2.0;
  FButtonStyle::operator=(&pFVar17->ButtonStyle,&local_6738);
  local_res8 = (TVector2<float>_u_0)0x41c0000040c00000;
  local_7760._0_8_ = ___xmm_3f8000003f8000003f8000003f800000;
  local_7760._8_8_ = _UNK_15076b1f8;
  pFVar13 = (FString *)
            (**(code **)(param_1->Object->_padding_ + 0xf0))
                      (param_1->Object,local_7720,"Starship/Common/ellipsis-vertical-narrow",L".svg"
                      );
  FSlateImageBrush::FSlateImageBrush
            ((FSlateImageBrush *)&local_72e8,pFVar13,(FDeprecateVector2DParameter *)&local_res8._s_0
             ,(FLinearColor *)&local_7760._s_0,NoTile,Vector);
  local_72e8._padding_ = (longlong)&___7FSlateVectorImageBrush__6B_;
  FSlateBrush::operator=(&pFVar17->DownArrowImage,&local_72e8);
  FComboButtonStyle::FComboButtonStyle(&local_63a8,pFVar17);
  local_72e8._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_72e8.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  if (local_7720[0] != (void *)0x0) {
    FMemory::Free(local_7720[0]);
  }
  local_6c98._0_8_ = &___7FComboButtonStyle__6B_;
  local_6c98.MenuBorderBrush._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_6c98.MenuBorderBrush.ResourceHandle.Data.SharedReferenceCount.ReferenceController
            );
  local_6c98.DownArrowImage._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_6c98.DownArrowImage.ResourceHandle.Data.SharedReferenceCount.ReferenceController)
  ;
  FButtonStyle::~FButtonStyle((FButtonStyle *)((longlong)&local_6c98 + 0x10));
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)&local_6c98);
  pFVar1 = param_1->Object;
  pFVar14 = ::FName::FName((FName *)&local_res8._s_0,"SegmentedCombo.Right");
  FSlateStyleSet::Set<FComboButtonStyle>((FSlateStyleSet *)pFVar1,*pFVar14,&local_63a8);
  pFVar11 = FCheckBoxStyle::FCheckBoxStyle((FCheckBoxStyle *)&local_54f8,&local_3838);
  local_res8 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  pFVar12 = (FSlateBrush *)
            FSlateRoundedBoxBrush::FSlateRoundedBoxBrush<FSlateColor,float>
                      ((FSlateRoundedBoxBrush *)local_7398,&FStyleColors::Dropdown,fVar3,
                       (FDeprecateVector2DParameter *)&local_res8._s_0);
  FSlateBrush::operator=(&pFVar11->UncheckedImage,pFVar12);
  local_res8 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  pFVar12 = (FSlateBrush *)
            FSlateRoundedBoxBrush::FSlateRoundedBoxBrush<FSlateColor,float>
                      ((FSlateRoundedBoxBrush *)local_7448,&FStyleColors::Hover,fVar3,
                       (FDeprecateVector2DParameter *)&local_res8._s_0);
  FSlateBrush::operator=(&pFVar11->UncheckedHoveredImage,pFVar12);
  local_res8 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  pFVar12 = (FSlateBrush *)
            FSlateRoundedBoxBrush::FSlateRoundedBoxBrush<FSlateColor,float>
                      ((FSlateRoundedBoxBrush *)local_7708,&FStyleColors::Header,fVar3,
                       (FDeprecateVector2DParameter *)&local_res8._s_0);
  FSlateBrush::operator=(&pFVar11->UncheckedPressedImage,pFVar12);
  FCheckBoxStyle::FCheckBoxStyle(&local_2598,pFVar11);
  local_7708[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_7668);
  local_7448[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_73a8);
  local_7398[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_72f8);
  FCheckBoxStyle::~FCheckBoxStyle((FCheckBoxStyle *)&local_54f8);
  pFVar1 = param_1->Object;
  pFVar14 = ::FName::FName((FName *)&local_res8._s_0,"SegmentedCombo.ButtonOnly");
  FSlateStyleSet::Set<FCheckBoxStyle>((FSlateStyleSet *)pFVar1,*pFVar14,&local_2598);
  pFVar11 = FCheckBoxStyle::FCheckBoxStyle((FCheckBoxStyle *)&local_54f8);
  (pFVar11->CheckBoxType).Value = '\0';
  (pFVar11->ForegroundColor).SpecifiedColor.field0_0x0._s_0 =
       (FLinearColor_u_0_s_0)FLinearColor::White.field0_0x0;
  uVar2 = local_77a8 >> 8;
  local_77a8 = uVar2 << 8;
  (pFVar11->ForegroundColor).ColorUseRule = (undefined1)local_77a8;
  (pFVar11->ForegroundColor).ColorTableId = local_77a8._1_1_;
  *(undefined2 *)&(pFVar11->ForegroundColor).field_0x12 = local_77a8._2_2_;
  local_77a8 = uVar2 << 8;
  (pFVar11->HoveredForeground).SpecifiedColor.field0_0x0._s_0 =
       (FLinearColor_u_0_s_0)FLinearColor::White.field0_0x0;
  (pFVar11->HoveredForeground).ColorUseRule = (undefined1)local_77a8;
  (pFVar11->HoveredForeground).ColorTableId = local_77a8._1_1_;
  *(undefined2 *)&(pFVar11->HoveredForeground).field_0x12 = local_77a8._2_2_;
  local_77a8 = uVar2 << 8;
  (pFVar11->PressedForeground).SpecifiedColor.field0_0x0._s_0 =
       (FLinearColor_u_0_s_0)FLinearColor::White.field0_0x0;
  (pFVar11->PressedForeground).ColorUseRule = (undefined1)local_77a8;
  (pFVar11->PressedForeground).ColorTableId = local_77a8._1_1_;
  *(undefined2 *)&(pFVar11->PressedForeground).field_0x12 = local_77a8._2_2_;
  local_77a8 = uVar2 << 8;
  (pFVar11->CheckedForeground).SpecifiedColor.field0_0x0._s_0 =
       (FLinearColor_u_0_s_0)FLinearColor::White.field0_0x0;
  (pFVar11->CheckedForeground).ColorUseRule = (undefined1)local_77a8;
  (pFVar11->CheckedForeground).ColorTableId = local_77a8._1_1_;
  *(undefined2 *)&(pFVar11->CheckedForeground).field_0x12 = local_77a8._2_2_;
  local_77a8 = uVar2 << 8;
  (pFVar11->CheckedHoveredForeground).SpecifiedColor.field0_0x0._s_0 =
       (FLinearColor_u_0_s_0)FLinearColor::White.field0_0x0;
  (pFVar11->CheckedHoveredForeground).ColorUseRule = (undefined1)local_77a8;
  (pFVar11->CheckedHoveredForeground).ColorTableId = local_77a8._1_1_;
  *(undefined2 *)&(pFVar11->CheckedHoveredForeground).field_0x12 = local_77a8._2_2_;
  local_77a8 = uVar2 << 8;
  (pFVar11->CheckedPressedForeground).SpecifiedColor.field0_0x0._s_0 =
       (FLinearColor_u_0_s_0)FLinearColor::White.field0_0x0;
  (pFVar11->CheckedPressedForeground).ColorUseRule = (undefined1)local_77a8;
  (pFVar11->CheckedPressedForeground).ColorTableId = local_77a8._1_1_;
  *(undefined2 *)&(pFVar11->CheckedPressedForeground).field_0x12 = local_77a8._2_2_;
  local_77a8 = uVar2 << 8;
  (pFVar11->UndeterminedForeground).SpecifiedColor.field0_0x0._s_0 =
       (FLinearColor_u_0_s_0)FLinearColor::White.field0_0x0;
  (pFVar11->UndeterminedForeground).ColorUseRule = (undefined1)local_77a8;
  (pFVar11->UndeterminedForeground).ColorTableId = local_77a8._1_1_;
  *(undefined2 *)&(pFVar11->UndeterminedForeground).field_0x12 = local_77a8._2_2_;
  local_res8._s_0 = (TVector2<float>_u_0_s_0)CoreStyleConstants::Icon16x16;
  pFVar13 = (FString *)
            (**(code **)(param_1->Object->_padding_ + 0xf0))
                      (param_1->Object,local_7790,"/Starship/CoreWidgets/CheckBox/radio-off",L".svg"
                      );
  FSlateImageBrush::FSlateImageBrush
            ((FSlateImageBrush *)&local_7658,pFVar13,(FDeprecateVector2DParameter *)&local_res8._s_0
             ,&FStyleColors::Dropdown,NoTile,Vector);
  local_7658._padding_ = (longlong)&___7FSlateVectorImageBrush__6B_;
  FSlateBrush::operator=(&pFVar11->UncheckedImage,&local_7658);
  local_res8._s_0 = (TVector2<float>_u_0_s_0)CoreStyleConstants::Icon16x16;
  pFVar13 = (FString *)
            (**(code **)(param_1->Object->_padding_ + 0xf0))
                      (param_1->Object,local_7780,"/Starship/CoreWidgets/CheckBox/radio-off",L".svg"
                      );
  FSlateImageBrush::FSlateImageBrush
            ((FSlateImageBrush *)&local_75a8,pFVar13,(FDeprecateVector2DParameter *)&local_res8._s_0
             ,&FStyleColors::Hover,NoTile,Vector);
  local_75a8._padding_ = (longlong)&___7FSlateVectorImageBrush__6B_;
  FSlateBrush::operator=(&pFVar11->UncheckedHoveredImage,&local_75a8);
  local_res8._s_0 = (TVector2<float>_u_0_s_0)CoreStyleConstants::Icon16x16;
  pFVar13 = (FString *)
            (**(code **)(param_1->Object->_padding_ + 0xf0))
                      (param_1->Object,local_7770,"/Starship/CoreWidgets/CheckBox/radio-off",L".svg"
                      );
  FSlateImageBrush::FSlateImageBrush
            ((FSlateImageBrush *)&local_74f8,pFVar13,(FDeprecateVector2DParameter *)&local_res8._s_0
             ,&FStyleColors::Dropdown,NoTile,Vector);
  local_74f8._padding_ = (longlong)&___7FSlateVectorImageBrush__6B_;
  FSlateBrush::operator=(&pFVar11->UncheckedPressedImage,&local_74f8);
  local_res8._s_0 = (TVector2<float>_u_0_s_0)CoreStyleConstants::Icon16x16;
  pFVar13 = (FString *)
            (**(code **)(param_1->Object->_padding_ + 0xf0))
                      (param_1->Object,&local_77c8,"/Starship/CoreWidgets/CheckBox/radio-on",L".svg"
                      );
  FSlateImageBrush::FSlateImageBrush
            ((FSlateImageBrush *)&local_6c98,pFVar13,(FDeprecateVector2DParameter *)&local_res8._s_0
             ,&FStyleColors::Primary,NoTile,Vector);
  local_6c98._0_8_ = &___7FSlateVectorImageBrush__6B_;
  FSlateBrush::operator=(&pFVar11->CheckedImage,(FSlateBrush *)&local_6c98);
  local_res8._s_0 = (TVector2<float>_u_0_s_0)CoreStyleConstants::Icon16x16;
  pFVar13 = (FString *)
            (**(code **)(param_1->Object->_padding_ + 0xf0))
                      (param_1->Object,&local_77a0,"/Starship/CoreWidgets/CheckBox/radio-on",L".svg"
                      );
  FSlateImageBrush::FSlateImageBrush
            ((FSlateImageBrush *)local_7028,pFVar13,(FDeprecateVector2DParameter *)&local_res8._s_0,
             &FStyleColors::PrimaryHover,NoTile,Vector);
  local_7028._0_8_ = &___7FSlateVectorImageBrush__6B_;
  FSlateBrush::operator=(&pFVar11->CheckedHoveredImage,(FSlateBrush *)local_7028);
  local_res8._s_0 = (TVector2<float>_u_0_s_0)CoreStyleConstants::Icon16x16;
  pFVar13 = (FString *)
            (**(code **)(param_1->Object->_padding_ + 0xf0))
                      (param_1->Object,local_7740,"/Starship/CoreWidgets/CheckBox/radio-on",L".svg")
  ;
  FSlateImageBrush::FSlateImageBrush
            ((FSlateImageBrush *)&local_70d8,pFVar13,(FDeprecateVector2DParameter *)&local_res8._s_0
             ,&FStyleColors::Primary,NoTile,Vector);
  local_70d8._padding_ = (longlong)&___7FSlateVectorImageBrush__6B_;
  FSlateBrush::operator=(&pFVar11->CheckedPressedImage,&local_70d8);
  local_res8._s_0 = (TVector2<float>_u_0_s_0)CoreStyleConstants::Icon16x16;
  pFVar13 = (FString *)
            (**(code **)(param_1->Object->_padding_ + 0xf0))
                      (param_1->Object,local_7730,"/Starship/CoreWidgets/CheckBox/radio-off",L".svg"
                      );
  FSlateImageBrush::FSlateImageBrush
            ((FSlateImageBrush *)&local_7238,pFVar13,(FDeprecateVector2DParameter *)&local_res8._s_0
             ,&FStyleColors::White25,NoTile,Vector);
  local_7238._padding_ = (longlong)&___7FSlateVectorImageBrush__6B_;
  FSlateBrush::operator=(&pFVar11->UndeterminedImage,&local_7238);
  local_res8._s_0 = (TVector2<float>_u_0_s_0)CoreStyleConstants::Icon16x16;
  pFVar13 = (FString *)
            (**(code **)(param_1->Object->_padding_ + 0xf0))
                      (param_1->Object,&local_7760,"/Starship/CoreWidgets/CheckBox/radio-off",
                       L".svg");
  FSlateImageBrush::FSlateImageBrush
            ((FSlateImageBrush *)&local_7188,pFVar13,(FDeprecateVector2DParameter *)&local_res8._s_0
             ,&FStyleColors::ForegroundHover,NoTile,Vector);
  local_7188._padding_ = (longlong)&___7FSlateVectorImageBrush__6B_;
  FSlateBrush::operator=(&pFVar11->UndeterminedHoveredImage,&local_7188);
  local_res8._s_0 = (TVector2<float>_u_0_s_0)CoreStyleConstants::Icon16x16;
  pFVar13 = (FString *)
            (**(code **)(param_1->Object->_padding_ + 0xf0))
                      (param_1->Object,local_7720,"/Starship/CoreWidgets/CheckBox/radio-off",L".svg"
                      );
  FSlateImageBrush::FSlateImageBrush
            ((FSlateImageBrush *)&local_72e8,pFVar13,(FDeprecateVector2DParameter *)&local_res8._s_0
             ,&FStyleColors::ForegroundHover,NoTile,Vector);
  local_72e8._padding_ = (longlong)&___7FSlateVectorImageBrush__6B_;
  FSlateBrush::operator=(&pFVar11->UndeterminedPressedImage,&local_72e8);
  uVar6 = _UNK_1509253f8;
  uVar7 = _UNK_1509253f4;
  (pFVar11->Padding).Left = (float)___xmm_40800000408000004080000040800000;
  uVar10 = _UNK_1509253f8;
  (pFVar11->Padding).Top = (float)uVar7;
  _UNK_1509253f8 = (undefined4)uVar6;
  _UNK_1509253fc = SUB84(uVar6,4);
  uVar7 = _UNK_1509253fc;
  (pFVar11->Padding).Right = (float)_UNK_1509253f8;
  _UNK_1509253f8 = uVar10;
  (pFVar11->Padding).Bottom = (float)uVar7;
  FCheckBoxStyle::FCheckBoxStyle(&local_2ee8,pFVar11);
  local_72e8._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_72e8.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  if (local_7720[0] != (void *)0x0) {
    FMemory::Free(local_7720[0]);
  }
  local_7188._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_7188.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  if ((void *)local_7760._0_8_ != (void *)0x0) {
    FMemory::Free((void *)local_7760._0_8_);
  }
  local_7238._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_7238.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  if (local_7730[0] != (void *)0x0) {
    FMemory::Free(local_7730[0]);
  }
  local_70d8._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_70d8.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  if (local_7740[0] != (void *)0x0) {
    FMemory::Free(local_7740[0]);
  }
  local_7028._0_8_ = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_7028._160_8_);
  if ((void *)local_77a0._0_8_ != (void *)0x0) {
    FMemory::Free((void *)local_77a0._0_8_);
  }
  local_6c98._0_8_ = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_6c98.ButtonStyle.Normal.UVRegion.Min.field0_0x0);
  if ((void *)local_77c8._0_8_ != (void *)0x0) {
    FMemory::Free((void *)local_77c8._0_8_);
  }
  local_74f8._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_74f8.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  if (local_7770[0] != (void *)0x0) {
    FMemory::Free(local_7770[0]);
  }
  local_75a8._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_75a8.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  if (local_7780[0] != (void *)0x0) {
    FMemory::Free(local_7780[0]);
  }
  local_7658._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_7658.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  if (local_7790[0] != (void *)0x0) {
    FMemory::Free(local_7790[0]);
  }
  FCheckBoxStyle::~FCheckBoxStyle((FCheckBoxStyle *)&local_54f8);
  pFVar1 = param_1->Object;
  pFVar14 = ::FName::FName((FName *)&local_res8._s_0,"RadioButton");
  FSlateStyleSet::Set<FCheckBoxStyle>((FSlateStyleSet *)pFVar1,*pFVar14,&local_2ee8);
  FCheckBoxStyle::~FCheckBoxStyle(&local_2ee8);
  FCheckBoxStyle::~FCheckBoxStyle(&local_2598);
  local_63a8._0_8_ = &___7FComboButtonStyle__6B_;
  local_63a8.MenuBorderBrush._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_63a8.MenuBorderBrush.ResourceHandle.Data.SharedReferenceCount.ReferenceController
            );
  local_63a8.DownArrowImage._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_63a8.DownArrowImage.ResourceHandle.Data.SharedReferenceCount.ReferenceController)
  ;
  FButtonStyle::~FButtonStyle((FButtonStyle *)((longlong)&local_63a8 + 0x10));
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)&local_63a8);
  local_6738._0_8_ = &___7FButtonStyle__6B_;
  local_6738.Disabled._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_6738.Disabled.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  local_6738.Pressed._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_6738.Pressed.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  local_6738.Hovered._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_6738.Hovered.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  local_6738.Normal._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_6738.Normal.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)&local_6738);
  FCheckBoxStyle::~FCheckBoxStyle(&local_5e48);
  FCheckBoxStyle::~FCheckBoxStyle(&local_1c48);
  FCheckBoxStyle::~FCheckBoxStyle(&local_3838);
  FCheckBoxStyle::~FCheckBoxStyle(&local_12f8);
  FCheckBoxStyle::~FCheckBoxStyle(&local_9a8);
  return;
}

// SetupColorPickerStyles @ 142596280

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
FStarshipCoreStyle::SetupColorPickerStyles(TSharedRef<FStarshipCoreStyle::FStyle,1> *param_1)

{
  FStyle *pFVar1;
  float fVar2;
  float fVar3;
  void *pvVar4;
  undefined8 uVar5;
  FSlateRoundedBoxBrush *pFVar6;
  FSlateRoundedBoxBrush *pFVar7;
  FName *pFVar8;
  FSlateRoundedBoxBrush *this;
  undefined8 *puVar9;
  FStyleFonts *pFVar10;
  FSlateImageBrush *pFVar11;
  FString *pFVar12;
  FSlateImageBrush *pFVar13;
  FSlateBrush *pFVar14;
  FButtonStyle *pFVar15;
  FComboButtonStyle *pFVar16;
  FSpinBoxStyle *pFVar17;
  FSlateImageBrush *pFVar18;
  wchar_t *pwVar19;
  char cVar20;
  ulonglong uVar21;
  TVector2<float>_u_0 local_res8;
  FName local_res10;
  FName local_res18;
  FLinearColor_u_0 local_2fc8;
  FLinearColor_u_0 local_2fb8;
  FLinearColor_u_0 local_2fa8;
  void *local_2f98 [2];
  undefined **local_2f88 [20];
  TReferenceControllerBase<1> *local_2ee8;
  undefined **local_2ed8 [20];
  TReferenceControllerBase<1> *local_2e38;
  FSliderStyle local_2e28;
  undefined **local_29e8 [20];
  TReferenceControllerBase<1> *local_2948;
  undefined **local_2938 [20];
  TReferenceControllerBase<1> *local_2898;
  FSpinBoxStyle local_2888;
  FComboButtonStyle local_2368;
  FWindowStyle local_1e08;
  
  pFVar18 = (FSlateImageBrush *)0x0;
  local_res8._s_0 = local_res8._s_0 & 0xffffffff00000000;
  pFVar1 = param_1->Object;
  pFVar6 = ::operator_new(0xb0);
  fVar3 = __real_40800000;
  pFVar7 = (FSlateRoundedBoxBrush *)pFVar18;
  if (pFVar6 != (FSlateRoundedBoxBrush *)0x0) {
    local_res8 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
    pFVar7 = FSlateRoundedBoxBrush::FSlateRoundedBoxBrush<FSlateColor,float>
                       (pFVar6,&FStyleColors::White,__real_40800000,
                        (FDeprecateVector2DParameter *)&local_res8._s_0);
  }
  pFVar8 = ::FName::FName(&local_res10,"ColorPicker.RoundedSolidBackground");
  FSlateStyleSet::Set<FSlateRoundedBoxBrush>((FSlateStyleSet *)pFVar1,*pFVar8,pFVar7);
  pFVar1 = param_1->Object;
  this = ::operator_new(0xb0);
  pFVar7 = (FSlateRoundedBoxBrush *)pFVar18;
  pFVar6 = (FSlateRoundedBoxBrush *)pFVar18;
  if (this != (FSlateRoundedBoxBrush *)0x0) {
    local_res8._s_0 = (TVector2<float>_u_0_s_0)CoreStyleConstants::Icon16x16;
    puVar9 = (undefined8 *)
             (**(code **)(param_1->Object->_padding_ + 0xf0))
                       (param_1->Object,&local_2fc8,"Starship/Common/Checker",L".png");
    if (*(int *)(puVar9 + 1) == 0) {
      pwVar19 = L"";
    }
    else {
      pwVar19 = (wchar_t *)*puVar9;
    }
    pFVar8 = ::FName::FName(&local_res10,pwVar19);
    pFVar7 = FSlateRoundedBoxBrush::FSlateRoundedBoxBrush<FLinearColor,FLinearColor,float>
                       (this,*pFVar8,&FLinearColor::Transparent,fVar3,&FLinearColor::Transparent,0.0
                        ,(FDeprecateVector2DParameter *)&local_res8._s_0,Both);
    pFVar6 = (FSlateRoundedBoxBrush *)&DAT_00000001;
  }
  pFVar8 = ::FName::FName(&local_res18,"ColorPicker.RoundedAlphaBackground");
  FSlateStyleSet::Set<FSlateRoundedBoxBrush>((FSlateStyleSet *)pFVar1,*pFVar8,pFVar7);
  if ((pFVar6 != (FSlateRoundedBoxBrush *)0x0) && ((void *)local_2fc8._0_8_ != (void *)0x0)) {
    FMemory::Free((void *)local_2fc8._0_8_);
  }
  pFVar1 = param_1->Object;
  pFVar6 = ::operator_new(0xb0);
  fVar2 = __real_3f800000;
  pFVar7 = (FSlateRoundedBoxBrush *)pFVar18;
  if (pFVar6 != (FSlateRoundedBoxBrush *)0x0) {
    local_res8 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
    pFVar7 = FSlateRoundedBoxBrush::FSlateRoundedBoxBrush<FSlateColor,FSlateColor,float>
                       (pFVar6,&FStyleColors::Transparent,fVar3,&FStyleColors::InputOutline,
                        __real_3f800000,(FDeprecateVector2DParameter *)&local_res8._s_0);
  }
  pFVar8 = ::FName::FName(&local_res10,"ColorPicker.RoundedInputBorder");
  FSlateStyleSet::Set<FSlateRoundedBoxBrush>((FSlateStyleSet *)pFVar1,*pFVar8,pFVar7);
  pFVar1 = param_1->Object;
  pFVar6 = ::operator_new(0xb0);
  pFVar7 = (FSlateRoundedBoxBrush *)pFVar18;
  if (pFVar6 != (FSlateRoundedBoxBrush *)0x0) {
    local_res8 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
    pFVar7 = FSlateRoundedBoxBrush::FSlateRoundedBoxBrush<FSlateColor,FSlateColor,float>
                       (pFVar6,&FStyleColors::Transparent,fVar3,&FStyleColors::Primary,fVar2,
                        (FDeprecateVector2DParameter *)&local_res8._s_0);
  }
  pFVar8 = ::FName::FName(&local_res10,"ColorPicker.RoundedInputBorderActive");
  FSlateStyleSet::Set<FSlateRoundedBoxBrush>((FSlateStyleSet *)pFVar1,*pFVar8,pFVar7);
  pFVar1 = param_1->Object;
  pFVar6 = ::operator_new(0xb0);
  pFVar7 = (FSlateRoundedBoxBrush *)pFVar18;
  if (pFVar6 != (FSlateRoundedBoxBrush *)0x0) {
    local_res8 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
    pFVar7 = FSlateRoundedBoxBrush::FSlateRoundedBoxBrush<FSlateColor,FSlateColor,float>
                       (pFVar6,&FStyleColors::Transparent,fVar3,&FStyleColors::Hover,fVar2,
                        (FDeprecateVector2DParameter *)&local_res8._s_0);
  }
  pFVar8 = ::FName::FName(&local_res10,"ColorPicker.RoundedInputBorderHovered");
  FSlateStyleSet::Set<FSlateRoundedBoxBrush>((FSlateStyleSet *)pFVar1,*pFVar8,pFVar7);
  pFVar1 = param_1->Object;
  pFVar6 = ::operator_new(0xb0);
  pFVar7 = (FSlateRoundedBoxBrush *)pFVar18;
  if (pFVar6 != (FSlateRoundedBoxBrush *)0x0) {
    local_res8 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
    pFVar7 = FSlateRoundedBoxBrush::FSlateRoundedBoxBrush<FSlateColor,float>
                       (pFVar6,&FStyleColors::Input,fVar3,
                        (FDeprecateVector2DParameter *)&local_res8._s_0);
  }
  pFVar8 = ::FName::FName(&local_res10,"ColorPicker.MultipleValuesBackground");
  FSlateStyleSet::Set<FSlateRoundedBoxBrush>((FSlateStyleSet *)pFVar1,*pFVar8,pFVar7);
  pFVar1 = param_1->Object;
  pFVar6 = ::operator_new(0xb0);
  pFVar7 = (FSlateRoundedBoxBrush *)pFVar18;
  if (pFVar6 != (FSlateRoundedBoxBrush *)0x0) {
    local_res8 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
    pFVar7 = FSlateRoundedBoxBrush::FSlateRoundedBoxBrush<FSlateColor,float>
                       (pFVar6,&FStyleColors::Recessed,__real_41000000,
                        (FDeprecateVector2DParameter *)&local_res8._s_0);
  }
  pFVar8 = ::FName::FName(&local_res10,"ColorPicker.RecessedBackground");
  FSlateStyleSet::Set<FSlateRoundedBoxBrush>((FSlateStyleSet *)pFVar1,*pFVar8,pFVar7);
  pFVar1 = param_1->Object;
  pFVar10 = FStyleFonts::Get();
  pFVar8 = ::FName::FName((FName *)&local_res8._s_0,"ColorPicker.Font");
  FSlateStyleSet::Set((FSlateStyleSet *)pFVar1,*pFVar8,&pFVar10->Normal);
  pFVar1 = param_1->Object;
  pFVar10 = FStyleFonts::Get();
  pFVar8 = ::FName::FName((FName *)&local_res8._s_0,"ColorPicker.SmallFont");
  FSlateStyleSet::Set((FSlateStyleSet *)pFVar1,*pFVar8,&pFVar10->Small);
  pFVar1 = param_1->Object;
  pFVar11 = ::operator_new(0xb0);
  pFVar13 = pFVar18;
  if (pFVar11 != (FSlateImageBrush *)0x0) {
    local_res8._s_0 = (TVector2<float>_u_0_s_0)CoreStyleConstants::Icon16x16;
    pFVar12 = (FString *)
              (**(code **)(param_1->Object->_padding_ + 0xf0))
                        (param_1->Object,&local_2fc8,"Starship/Common/Checker",L".png");
    pFVar13 = FSlateImageBrush::FSlateImageBrush
                        (pFVar11,pFVar12,(FDeprecateVector2DParameter *)&local_res8._s_0,
                         &FLinearColor::White,Both,FullColor);
  }
  pFVar8 = ::FName::FName(&local_res10,"ColorPicker.AlphaBackground");
  FSlateStyleSet::Set<FSlateImageBrush>((FSlateStyleSet *)pFVar1,*pFVar8,pFVar13);
  if ((pFVar11 != (FSlateImageBrush *)0x0) && ((void *)local_2fc8._0_8_ != (void *)0x0)) {
    FMemory::Free((void *)local_2fc8._0_8_);
  }
  pFVar1 = param_1->Object;
  pFVar11 = ::operator_new(0xb0);
  uVar5 = _UNK_15076b1f8;
  pvVar4 = ___xmm_3f8000003f8000003f8000003f800000;
  pFVar13 = pFVar18;
  if (pFVar11 != (FSlateImageBrush *)0x0) {
    local_res8._s_0 = (TVector2<float>_u_0_s_0)CoreStyleConstants::Icon16x16;
    local_2fc8._0_8_ = ___xmm_3f8000003f8000003f8000003f800000;
    local_2fc8._8_8_ = _UNK_15076b1f8;
    pFVar12 = (FString *)
              (**(code **)(param_1->Object->_padding_ + 0xf0))
                        (param_1->Object,&local_2fb8,"Icons/eyedropper_16px",L".png");
    pFVar13 = FSlateImageBrush::FSlateImageBrush
                        (pFVar11,pFVar12,(FDeprecateVector2DParameter *)&local_res8._s_0,
                         (FLinearColor *)&local_2fc8._s_0,NoTile,FullColor);
  }
  pFVar8 = ::FName::FName(&local_res10,"ColorPicker.EyeDropper");
  FSlateStyleSet::Set<FSlateImageBrush>((FSlateStyleSet *)pFVar1,*pFVar8,pFVar13);
  if ((pFVar11 != (FSlateImageBrush *)0x0) && ((void *)local_2fb8._0_8_ != (void *)0x0)) {
    FMemory::Free((void *)local_2fb8._0_8_);
  }
  pFVar1 = param_1->Object;
  pFVar11 = ::operator_new(0xb0);
  pFVar13 = pFVar18;
  if (pFVar11 != (FSlateImageBrush *)0x0) {
    local_res8._s_0 = (TVector2<float>_u_0_s_0)CoreStyleConstants::Icon20x20;
    local_2fb8._0_8_ = pvVar4;
    local_2fb8._8_8_ = uVar5;
    pFVar12 = (FString *)
              (**(code **)(param_1->Object->_padding_ + 0xf0))
                        (param_1->Object,&local_2fc8,"Starship/Common/EyeDropper_20",L".svg");
    FSlateImageBrush::FSlateImageBrush
              (pFVar11,pFVar12,(FDeprecateVector2DParameter *)&local_res8._s_0,
               (FLinearColor *)&local_2fb8._s_0,NoTile,Vector);
    *(undefined ***)pFVar11 = &___7FSlateVectorImageBrush__6B_;
    pFVar13 = pFVar11;
  }
  pFVar8 = ::FName::FName(&local_res10,"ColorPicker.EyeDropperLarge");
  FSlateStyleSet::Set<FSlateVectorImageBrush>
            ((FSlateStyleSet *)pFVar1,*pFVar8,(FSlateVectorImageBrush *)pFVar13);
  if ((pFVar11 != (FSlateImageBrush *)0x0) && ((void *)local_2fc8._0_8_ != (void *)0x0)) {
    FMemory::Free((void *)local_2fc8._0_8_);
  }
  pFVar1 = param_1->Object;
  pFVar11 = ::operator_new(0xb0);
  pFVar13 = pFVar18;
  if (pFVar11 != (FSlateImageBrush *)0x0) {
    local_res8._s_0 = (TVector2<float>_u_0_s_0)CoreStyleConstants::Icon16x16;
    local_2fb8._0_8_ = pvVar4;
    local_2fb8._8_8_ = uVar5;
    pFVar12 = (FString *)
              (**(code **)(param_1->Object->_padding_ + 0xf0))
                        (param_1->Object,&local_2fc8,"Common/ColorPicker_Mode_16x",L".png");
    pFVar13 = FSlateImageBrush::FSlateImageBrush
                        (pFVar11,pFVar12,(FDeprecateVector2DParameter *)&local_res8._s_0,
                         (FLinearColor *)&local_2fb8._s_0,NoTile,FullColor);
  }
  pFVar8 = ::FName::FName(&local_res10,"ColorPicker.Mode");
  FSlateStyleSet::Set<FSlateImageBrush>((FSlateStyleSet *)pFVar1,*pFVar8,pFVar13);
  if ((pFVar11 != (FSlateImageBrush *)0x0) && ((void *)local_2fc8._0_8_ != (void *)0x0)) {
    FMemory::Free((void *)local_2fc8._0_8_);
  }
  pFVar1 = param_1->Object;
  pFVar11 = ::operator_new(0xb0);
  pFVar13 = pFVar18;
  if (pFVar11 != (FSlateImageBrush *)0x0) {
    local_res8._s_0 = (TVector2<float>_u_0_s_0)CoreStyleConstants::Icon20x20;
    local_2fb8._0_8_ = pvVar4;
    local_2fb8._8_8_ = uVar5;
    pFVar12 = (FString *)
              (**(code **)(param_1->Object->_padding_ + 0xf0))
                        (param_1->Object,&local_2fc8,"Common/ColorWheel_20x",L".png");
    pFVar13 = FSlateImageBrush::FSlateImageBrush
                        (pFVar11,pFVar12,(FDeprecateVector2DParameter *)&local_res8._s_0,
                         (FLinearColor *)&local_2fb8._s_0,NoTile,FullColor);
  }
  pFVar8 = ::FName::FName(&local_res10,"ColorPicker.ModeWheel");
  FSlateStyleSet::Set<FSlateImageBrush>((FSlateStyleSet *)pFVar1,*pFVar8,pFVar13);
  if ((pFVar11 != (FSlateImageBrush *)0x0) && ((void *)local_2fc8._0_8_ != (void *)0x0)) {
    FMemory::Free((void *)local_2fc8._0_8_);
  }
  pFVar1 = param_1->Object;
  pFVar11 = ::operator_new(0xb0);
  pFVar13 = pFVar18;
  if (pFVar11 != (FSlateImageBrush *)0x0) {
    local_res8._s_0 = (TVector2<float>_u_0_s_0)CoreStyleConstants::Icon20x20;
    local_2fb8._0_8_ = pvVar4;
    local_2fb8._8_8_ = uVar5;
    pFVar12 = (FString *)
              (**(code **)(param_1->Object->_padding_ + 0xf0))
                        (param_1->Object,&local_2fc8,"Common/ColorSpectrum_20x",L".png");
    pFVar13 = FSlateImageBrush::FSlateImageBrush
                        (pFVar11,pFVar12,(FDeprecateVector2DParameter *)&local_res8._s_0,
                         (FLinearColor *)&local_2fb8._s_0,NoTile,FullColor);
  }
  pFVar8 = ::FName::FName(&local_res10,"ColorPicker.ModeSpectrum");
  FSlateStyleSet::Set<FSlateImageBrush>((FSlateStyleSet *)pFVar1,*pFVar8,pFVar13);
  if ((pFVar11 != (FSlateImageBrush *)0x0) && ((void *)local_2fc8._0_8_ != (void *)0x0)) {
    FMemory::Free((void *)local_2fc8._0_8_);
  }
  cVar20 = '\0';
  pFVar1 = param_1->Object;
  pFVar11 = ::operator_new(0xb0);
  pFVar13 = pFVar18;
  if (pFVar11 != (FSlateImageBrush *)0x0) {
    local_res8 = (TVector2<float>_u_0)0x4000000040000000;
    cVar20 = -0x80;
    local_2fb8._0_8_ = pvVar4;
    local_2fb8._8_8_ = uVar5;
    pFVar12 = (FString *)
              (**(code **)(param_1->Object->_padding_ + 0xf0))
                        (param_1->Object,&local_2fc8,"Common/ColorPicker_Separator",L".png");
    pFVar13 = FSlateImageBrush::FSlateImageBrush
                        (pFVar11,pFVar12,(FDeprecateVector2DParameter *)&local_res8._s_0,
                         (FLinearColor *)&local_2fb8._s_0,NoTile,FullColor);
  }
  pFVar8 = ::FName::FName(&local_res10,"ColorPicker.Separator");
  FSlateStyleSet::Set<FSlateImageBrush>((FSlateStyleSet *)pFVar1,*pFVar8,pFVar13);
  if ((cVar20 < '\0') && ((void *)local_2fc8._0_8_ != (void *)0x0)) {
    FMemory::Free((void *)local_2fc8._0_8_);
  }
  pFVar1 = param_1->Object;
  pFVar11 = ::operator_new(0xb0);
  pFVar13 = pFVar18;
  if (pFVar11 != (FSlateImageBrush *)0x0) {
    local_res8._s_0 = (TVector2<float>_u_0_s_0)CoreStyleConstants::Icon8x8;
    local_2fb8._0_8_ = pvVar4;
    local_2fb8._8_8_ = uVar5;
    pFVar12 = (FString *)
              (**(code **)(param_1->Object->_padding_ + 0xf0))
                        (param_1->Object,&local_2fc8,"Common/Circle",L".png");
    pFVar13 = FSlateImageBrush::FSlateImageBrush
                        (pFVar11,pFVar12,(FDeprecateVector2DParameter *)&local_res8._s_0,
                         (FLinearColor *)&local_2fb8._s_0,NoTile,FullColor);
  }
  pFVar8 = ::FName::FName(&local_res10,"ColorPicker.Selector");
  FSlateStyleSet::Set<FSlateImageBrush>((FSlateStyleSet *)pFVar1,*pFVar8,pFVar13);
  if ((pFVar11 != (FSlateImageBrush *)0x0) && ((void *)local_2fc8._0_8_ != (void *)0x0)) {
    FMemory::Free((void *)local_2fc8._0_8_);
  }
  pFVar1 = param_1->Object;
  pFVar11 = ::operator_new(0xb0);
  pFVar13 = pFVar18;
  if (pFVar11 != (FSlateImageBrush *)0x0) {
    local_res8 = (TVector2<float>_u_0)0x3f80000040400000;
    local_2fb8._0_8_ = pvVar4;
    local_2fb8._8_8_ = uVar5;
    pFVar12 = (FString *)
              (**(code **)(param_1->Object->_padding_ + 0xf0))
                        (param_1->Object,&local_2fc8,
                         "Starship/Common/color-grading-spinbox-selector",L".png");
    pFVar13 = FSlateImageBrush::FSlateImageBrush
                        (pFVar11,pFVar12,(FDeprecateVector2DParameter *)&local_res8._s_0,
                         (FLinearColor *)&local_2fb8._s_0,NoTile,FullColor);
  }
  pFVar8 = ::FName::FName(&local_res10,"ColorPicker.SpinBoxSelectorVertical");
  FSlateStyleSet::Set<FSlateImageBrush>((FSlateStyleSet *)pFVar1,*pFVar8,pFVar13);
  if ((pFVar11 != (FSlateImageBrush *)0x0) && ((void *)local_2fc8._0_8_ != (void *)0x0)) {
    FMemory::Free((void *)local_2fc8._0_8_);
  }
  pFVar1 = param_1->Object;
  pFVar11 = ::operator_new(0xb0);
  pFVar13 = pFVar18;
  if (pFVar11 != (FSlateImageBrush *)0x0) {
    local_res8 = (TVector2<float>_u_0)0x404000003f800000;
    local_2fb8._0_8_ = pvVar4;
    local_2fb8._8_8_ = uVar5;
    pFVar12 = (FString *)
              (**(code **)(param_1->Object->_padding_ + 0xf0))
                        (param_1->Object,&local_2fc8,
                         "Starship/Common/color-grading-spinbox-selector-v",L".png");
    pFVar13 = FSlateImageBrush::FSlateImageBrush
                        (pFVar11,pFVar12,(FDeprecateVector2DParameter *)&local_res8._s_0,
                         (FLinearColor *)&local_2fb8._s_0,NoTile,FullColor);
  }
  pFVar8 = ::FName::FName(&local_res10,"ColorPicker.SpinBoxSelectorHorizontal");
  FSlateStyleSet::Set<FSlateImageBrush>((FSlateStyleSet *)pFVar1,*pFVar8,pFVar13);
  if ((pFVar11 != (FSlateImageBrush *)0x0) && ((void *)local_2fc8._0_8_ != (void *)0x0)) {
    FMemory::Free((void *)local_2fc8._0_8_);
  }
  pFVar1 = param_1->Object;
  FSlateWidgetStyle::FSlateWidgetStyle((FSlateWidgetStyle *)&local_2e28);
  local_2e28._0_8_ = &___7FSliderStyle__6B_;
  FSlateBrush::FSlateBrush((FSlateBrush *)((longlong)&local_2e28 + 0x10));
  FSlateBrush::FSlateBrush((FSlateBrush *)((longlong)&local_2e28 + 0xc0));
  FSlateBrush::FSlateBrush((FSlateBrush *)((longlong)&local_2e28 + 0x170));
  FSlateBrush::FSlateBrush((FSlateBrush *)((longlong)&local_2e28 + 0x220));
  FSlateBrush::FSlateBrush((FSlateBrush *)((longlong)&local_2e28 + 0x2d0));
  FSlateBrush::FSlateBrush((FSlateBrush *)((longlong)&local_2e28 + 0x380));
  local_res8 = (TVector2<float>_u_0)0x4200000041000000;
  local_2e28.BarThickness = 2.0;
  local_2fb8._0_8_ = pvVar4;
  local_2fb8._8_8_ = uVar5;
  pFVar12 = (FString *)
            (**(code **)(param_1->Object->_padding_ + 0xf0))
                      (param_1->Object,&local_2fa8,"Common/ColorPicker_SliderHandle",L".png");
  pFVar14 = (FSlateBrush *)
            FSlateImageBrush::FSlateImageBrush
                      ((FSlateImageBrush *)local_2ed8,pFVar12,
                       (FDeprecateVector2DParameter *)&local_res8._s_0,
                       (FLinearColor *)&local_2fb8._s_0,NoTile,FullColor);
  FSlateBrush::operator=((FSlateBrush *)((longlong)&local_2e28 + 0x380),pFVar14);
  local_res8 = (TVector2<float>_u_0)0x4200000041000000;
  local_2fb8._0_8_ = pvVar4;
  local_2fb8._8_8_ = uVar5;
  pFVar12 = (FString *)
            (**(code **)(param_1->Object->_padding_ + 0xf0))
                      (param_1->Object,local_2f98,"Common/ColorPicker_SliderHandle",L".png");
  pFVar14 = (FSlateBrush *)
            FSlateImageBrush::FSlateImageBrush
                      ((FSlateImageBrush *)local_2938,pFVar12,
                       (FDeprecateVector2DParameter *)&local_res8._s_0,
                       (FLinearColor *)&local_2fb8._s_0,NoTile,FullColor);
  FSlateBrush::operator=((FSlateBrush *)((longlong)&local_2e28 + 0x220),pFVar14);
  local_res8 = (TVector2<float>_u_0)0x4200000041000000;
  local_2fb8._0_8_ = pvVar4;
  local_2fb8._8_8_ = uVar5;
  pFVar12 = (FString *)
            (**(code **)(param_1->Object->_padding_ + 0xf0))
                      (param_1->Object,&local_2fc8,"Common/ColorPicker_SliderHandle",L".png");
  pFVar14 = (FSlateBrush *)
            FSlateImageBrush::FSlateImageBrush
                      ((FSlateImageBrush *)local_29e8,pFVar12,
                       (FDeprecateVector2DParameter *)&local_res8._s_0,
                       (FLinearColor *)&local_2fb8._s_0,NoTile,FullColor);
  FSlateBrush::operator=((FSlateBrush *)((longlong)&local_2e28 + 0x2d0),pFVar14);
  pFVar8 = ::FName::FName(&local_res10,"ColorPicker.Slider");
  FSlateStyleSet::Set<FSliderStyle>((FSlateStyleSet *)pFVar1,*pFVar8,&local_2e28);
  local_29e8[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_2948);
  if ((void *)local_2fc8._0_8_ != (void *)0x0) {
    FMemory::Free((void *)local_2fc8._0_8_);
  }
  local_2938[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_2898);
  if (local_2f98[0] != (void *)0x0) {
    FMemory::Free(local_2f98[0]);
  }
  local_2ed8[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_2e38);
  if ((void *)local_2fa8._0_8_ != (void *)0x0) {
    FMemory::Free((void *)local_2fa8._0_8_);
  }
  local_2e28._0_8_ = &___7FSliderStyle__6B_;
  local_2e28.DisabledThumbImage._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2e28.DisabledThumbImage.ResourceHandle.Data.SharedReferenceCount.
             ReferenceController);
  local_2e28.HoveredThumbImage._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2e28.HoveredThumbImage.ResourceHandle.Data.SharedReferenceCount.
             ReferenceController);
  local_2e28.NormalThumbImage._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2e28.NormalThumbImage.ResourceHandle.Data.SharedReferenceCount.
             ReferenceController);
  local_2e28.DisabledBarImage._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2e28.DisabledBarImage.ResourceHandle.Data.SharedReferenceCount.
             ReferenceController);
  local_2e28.HoveredBarImage._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2e28.HoveredBarImage.ResourceHandle.Data.SharedReferenceCount.ReferenceController
            );
  local_2e28.NormalBarImage._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2e28.NormalBarImage.ResourceHandle.Data.SharedReferenceCount.ReferenceController)
  ;
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)&local_2e28);
  pFVar15 = FButtonStyle::FButtonStyle((FButtonStyle *)&local_2e28);
  local_res8 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  pFVar14 = (FSlateBrush *)
            FSlateRoundedBoxBrush::FSlateRoundedBoxBrush<FSlateColor,FSlateColor,float>
                      ((FSlateRoundedBoxBrush *)local_29e8,&FStyleColors::Panel,fVar3,
                       &FStyleColors::Panel,fVar2,(FDeprecateVector2DParameter *)&local_res8._s_0);
  FSlateBrush::operator=(&pFVar15->Normal,pFVar14);
  local_res8 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  pFVar14 = (FSlateBrush *)
            FSlateRoundedBoxBrush::FSlateRoundedBoxBrush<FSlateColor,FSlateColor,float>
                      ((FSlateRoundedBoxBrush *)local_2938,&FStyleColors::Panel,fVar3,
                       &FStyleColors::Panel,fVar2,(FDeprecateVector2DParameter *)&local_res8._s_0);
  FSlateBrush::operator=(&pFVar15->Hovered,pFVar14);
  local_res8 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  pFVar14 = (FSlateBrush *)
            FSlateRoundedBoxBrush::FSlateRoundedBoxBrush<FSlateColor,FSlateColor,float>
                      ((FSlateRoundedBoxBrush *)local_2ed8,&FStyleColors::Panel,fVar3,
                       &FStyleColors::Panel,fVar2,(FDeprecateVector2DParameter *)&local_res8._s_0);
  FSlateBrush::operator=(&pFVar15->Pressed,pFVar14);
  FButtonStyle::FButtonStyle((FButtonStyle *)&local_2888,pFVar15);
  local_2ed8[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_2e38);
  local_2938[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_2898);
  local_29e8[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_2948);
  local_2e28._0_8_ = &___7FButtonStyle__6B_;
  local_2e28.NormalThumbImage._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2e28.NormalThumbImage.ResourceHandle.Data.SharedReferenceCount.
             ReferenceController);
  local_2e28.DisabledBarImage._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2e28.DisabledBarImage.ResourceHandle.Data.SharedReferenceCount.
             ReferenceController);
  local_2e28.HoveredBarImage._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2e28.HoveredBarImage.ResourceHandle.Data.SharedReferenceCount.ReferenceController
            );
  local_2e28.NormalBarImage._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2e28.NormalBarImage.ResourceHandle.Data.SharedReferenceCount.ReferenceController)
  ;
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)&local_2e28);
  pFVar1 = param_1->Object;
  pFVar8 = ::FName::FName((FName *)&local_res8._s_0,"ComboButton");
  pFVar16 = (FComboButtonStyle *)
            (**(code **)(pFVar1->_padding_ + 0xa0))(pFVar1,FComboButtonStyle::TypeName,*pFVar8,0,1);
  uVar21 = (ulonglong)_tls_index;
  if (pFVar16 == (FComboButtonStyle *)0x0) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar21 * 8) + 0x9d4c) <
         ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      FComboButtonStyle::FComboButtonStyle(&::Default);
      atexit(`FComboButtonStyle::GetDefault'::__l2::_dynamic_atexit_destructor_for__Default__);
      _Init_thread_footer(&::_TSS0);
    }
    pFVar16 = &::Default;
  }
  FComboButtonStyle::FComboButtonStyle(&local_2368,pFVar16);
  local_2368.ContentPadding.Left = 0.0;
  local_2368.ContentPadding.Top = 0.0;
  local_2368.ContentPadding.Right = 0.0;
  local_2368.ContentPadding.Bottom = 0.0;
  FButtonStyle::operator=
            ((FButtonStyle *)((longlong)&local_2368 + 0x10),(FButtonStyle *)&local_2888);
  pFVar1 = param_1->Object;
  pFVar8 = ::FName::FName((FName *)&local_res8._s_0,"ColorPicker.HexMode");
  FSlateStyleSet::Set<FComboButtonStyle>((FSlateStyleSet *)pFVar1,*pFVar8,&local_2368);
  local_2368._0_8_ = &___7FComboButtonStyle__6B_;
  local_2368.MenuBorderBrush._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2368.MenuBorderBrush.ResourceHandle.Data.SharedReferenceCount.ReferenceController
            );
  local_2368.DownArrowImage._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2368.DownArrowImage.ResourceHandle.Data.SharedReferenceCount.ReferenceController)
  ;
  FButtonStyle::~FButtonStyle((FButtonStyle *)((longlong)&local_2368 + 0x10));
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)&local_2368);
  local_2888._0_8_ = &___7FButtonStyle__6B_;
  local_2888.ActiveFillBrush._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2888.ActiveFillBrush.ResourceHandle.Data.SharedReferenceCount.ReferenceController
            );
  local_2888.HoveredBackgroundBrush._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2888.HoveredBackgroundBrush.ResourceHandle.Data.SharedReferenceCount.
             ReferenceController);
  local_2888.ActiveBackgroundBrush._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2888.ActiveBackgroundBrush.ResourceHandle.Data.SharedReferenceCount.
             ReferenceController);
  local_2888.BackgroundBrush._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2888.BackgroundBrush.ResourceHandle.Data.SharedReferenceCount.ReferenceController
            );
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)&local_2888);
  pFVar1 = param_1->Object;
  pFVar8 = ::FName::FName((FName *)&local_res8._s_0,"SpinBox");
  pFVar17 = (FSpinBoxStyle *)
            (**(code **)(pFVar1->_padding_ + 0xa0))(pFVar1,FSpinBoxStyle::TypeName,*pFVar8,0,1);
  if (((pFVar17 == (FSpinBoxStyle *)0x0) &&
      (pFVar17 = &::Default,
      *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar21 * 8) + 0x9d4c) < ::_TSS0))
     && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    FSpinBoxStyle::FSpinBoxStyle(&::Default);
    atexit(`FSpinBoxStyle::GetDefault'::__l2::_dynamic_atexit_destructor_for__Default__);
    _Init_thread_footer(&::_TSS0);
  }
  FSpinBoxStyle::FSpinBoxStyle(&local_2888,pFVar17);
  local_res8 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  pFVar14 = (FSlateBrush *)
            FSlateRoundedBoxBrush::FSlateRoundedBoxBrush<FSlateColor,FLinearColor,float>
                      ((FSlateRoundedBoxBrush *)local_2ed8,&FStyleColors::Input,fVar3,
                       &FLinearColor::Transparent,fVar2,
                       (FDeprecateVector2DParameter *)&local_res8._s_0);
  FSlateBrush::operator=((FSlateBrush *)((longlong)&local_2888 + 0x220),pFVar14);
  local_2ed8[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_2e38);
  local_res8 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  pFVar14 = (FSlateBrush *)
            FSlateRoundedBoxBrush::FSlateRoundedBoxBrush<FSlateColor,FLinearColor,float>
                      ((FSlateRoundedBoxBrush *)local_2ed8,&FStyleColors::Input,fVar3,
                       &FLinearColor::Transparent,fVar2,
                       (FDeprecateVector2DParameter *)&local_res8._s_0);
  FSlateBrush::operator=((FSlateBrush *)((longlong)&local_2888 + 0x2d0),pFVar14);
  local_2ed8[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_2e38);
  local_res8 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  pFVar14 = (FSlateBrush *)
            FSlateRoundedBoxBrush::FSlateRoundedBoxBrush<FSlateColor,FLinearColor,float>
                      ((FSlateRoundedBoxBrush *)local_2ed8,&FStyleColors::Input,fVar3,
                       &FLinearColor::Transparent,fVar2,
                       (FDeprecateVector2DParameter *)&local_res8._s_0);
  FSlateBrush::operator=((FSlateBrush *)((longlong)&local_2888 + 0x380),pFVar14);
  local_2ed8[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_2e38);
  pFVar1 = param_1->Object;
  pFVar8 = ::FName::FName((FName *)&local_res8._s_0,"ColorSlider.SpinBox");
  FSlateStyleSet::Set<FSpinBoxStyle>((FSlateStyleSet *)pFVar1,*pFVar8,&local_2888);
  FSpinBoxStyle::~FSpinBoxStyle(&local_2888);
  pFVar1 = param_1->Object;
  pFVar11 = ::operator_new(0xb0);
  pFVar13 = pFVar18;
  if (pFVar11 != (FSlateImageBrush *)0x0) {
    local_res8 = (TVector2<float>_u_0)0x4380000043800000;
    local_2fa8._0_8_ = pvVar4;
    local_2fa8._8_8_ = uVar5;
    pFVar12 = (FString *)
              (**(code **)(param_1->Object->_padding_ + 0xf0))
                        (param_1->Object,local_2f98,"Common/ColorSpectrum",L".png");
    pFVar13 = FSlateImageBrush::FSlateImageBrush
                        (pFVar11,pFVar12,(FDeprecateVector2DParameter *)&local_res8._s_0,
                         (FLinearColor *)&local_2fa8._s_0,NoTile,FullColor);
  }
  pFVar8 = ::FName::FName(&local_res10,"ColorSpectrum.Spectrum");
  FSlateStyleSet::Set<FSlateImageBrush>((FSlateStyleSet *)pFVar1,*pFVar8,pFVar13);
  if ((pFVar11 != (FSlateImageBrush *)0x0) && (local_2f98[0] != (void *)0x0)) {
    FMemory::Free(local_2f98[0]);
  }
  pFVar1 = param_1->Object;
  pFVar11 = ::operator_new(0xb0);
  pFVar13 = pFVar18;
  if (pFVar11 != (FSlateImageBrush *)0x0) {
    local_res8 = (TVector2<float>_u_0)0x4100000041000000;
    local_2fa8._0_8_ = pvVar4;
    local_2fa8._8_8_ = uVar5;
    pFVar12 = (FString *)
              (**(code **)(param_1->Object->_padding_ + 0xf0))
                        (param_1->Object,local_2f98,"Common/Circle",L".png");
    pFVar13 = FSlateImageBrush::FSlateImageBrush
                        (pFVar11,pFVar12,(FDeprecateVector2DParameter *)&local_res8._s_0,
                         (FLinearColor *)&local_2fa8._s_0,NoTile,FullColor);
  }
  pFVar8 = ::FName::FName(&local_res10,"ColorSpectrum.Selector");
  FSlateStyleSet::Set<FSlateImageBrush>((FSlateStyleSet *)pFVar1,*pFVar8,pFVar13);
  if ((pFVar11 != (FSlateImageBrush *)0x0) && (local_2f98[0] != (void *)0x0)) {
    FMemory::Free(local_2f98[0]);
  }
  pFVar1 = param_1->Object;
  pFVar11 = ::operator_new(0xb0);
  pFVar13 = pFVar18;
  if (pFVar11 != (FSlateImageBrush *)0x0) {
    local_res8._s_0 = (TVector2<float>_u_0_s_0)CoreStyleConstants::Icon20x20;
    local_2fa8._0_8_ = pvVar4;
    local_2fa8._8_8_ = uVar5;
    pFVar12 = (FString *)
              (**(code **)(param_1->Object->_padding_ + 0xf0))
                        (param_1->Object,local_2f98,"Starship/Common/ColorThemes_20",L".svg");
    FSlateImageBrush::FSlateImageBrush
              (pFVar11,pFVar12,(FDeprecateVector2DParameter *)&local_res8._s_0,
               (FLinearColor *)&local_2fa8._s_0,NoTile,Vector);
    *(undefined ***)pFVar11 = &___7FSlateVectorImageBrush__6B_;
    pFVar13 = pFVar11;
  }
  pFVar8 = ::FName::FName(&local_res10,"ColorPicker.ColorThemes");
  FSlateStyleSet::Set<FSlateVectorImageBrush>
            ((FSlateStyleSet *)pFVar1,*pFVar8,(FSlateVectorImageBrush *)pFVar13);
  if ((pFVar11 != (FSlateImageBrush *)0x0) && (local_2f98[0] != (void *)0x0)) {
    FMemory::Free(local_2f98[0]);
  }
  pFVar1 = param_1->Object;
  pFVar11 = ::operator_new(0xb0);
  pFVar13 = pFVar18;
  if (pFVar11 != (FSlateImageBrush *)0x0) {
    local_res8._s_0 = (TVector2<float>_u_0_s_0)CoreStyleConstants::Icon16x16;
    local_2fa8._0_8_ = pvVar4;
    local_2fa8._8_8_ = uVar5;
    pFVar12 = (FString *)
              (**(code **)(param_1->Object->_padding_ + 0xf0))
                        (param_1->Object,local_2f98,"Starship/Common/ColorThemes_16",L".svg");
    FSlateImageBrush::FSlateImageBrush
              (pFVar11,pFVar12,(FDeprecateVector2DParameter *)&local_res8._s_0,
               (FLinearColor *)&local_2fa8._s_0,NoTile,Vector);
    *(undefined ***)pFVar11 = &___7FSlateVectorImageBrush__6B_;
    pFVar13 = pFVar11;
  }
  pFVar8 = ::FName::FName(&local_res10,"ColorPicker.ColorThemesSmall");
  FSlateStyleSet::Set<FSlateVectorImageBrush>
            ((FSlateStyleSet *)pFVar1,*pFVar8,(FSlateVectorImageBrush *)pFVar13);
  if ((pFVar11 != (FSlateImageBrush *)0x0) && (local_2f98[0] != (void *)0x0)) {
    FMemory::Free(local_2f98[0]);
  }
  pFVar1 = param_1->Object;
  pFVar11 = ::operator_new(0xb0);
  pFVar13 = pFVar18;
  if (pFVar11 != (FSlateImageBrush *)0x0) {
    local_res8._s_0 = (TVector2<float>_u_0_s_0)CoreStyleConstants::Icon20x20;
    local_2fa8._0_8_ = pvVar4;
    local_2fa8._8_8_ = uVar5;
    pFVar12 = (FString *)
              (**(code **)(param_1->Object->_padding_ + 0xf0))
                        (param_1->Object,local_2f98,"Starship/Common/ColorThemesOff_20",L".svg");
    FSlateImageBrush::FSlateImageBrush
              (pFVar11,pFVar12,(FDeprecateVector2DParameter *)&local_res8._s_0,
               (FLinearColor *)&local_2fa8._s_0,NoTile,Vector);
    *(undefined ***)pFVar11 = &___7FSlateVectorImageBrush__6B_;
    pFVar13 = pFVar11;
  }
  pFVar8 = ::FName::FName(&local_res10,"ColorPicker.ColorThemesOff");
  FSlateStyleSet::Set<FSlateVectorImageBrush>
            ((FSlateStyleSet *)pFVar1,*pFVar8,(FSlateVectorImageBrush *)pFVar13);
  if ((pFVar11 != (FSlateImageBrush *)0x0) && (local_2f98[0] != (void *)0x0)) {
    FMemory::Free(local_2f98[0]);
  }
  FWindowStyle::FWindowStyle(&local_1e08);
  pFVar1 = param_1->Object;
  local_1e08.WindowCornerRadius = 4;
  pFVar8 = ::FName::FName((FName *)&local_res8._s_0,"ColorPicker.CursorDecorator");
  FSlateStyleSet::Set<FWindowStyle>((FSlateStyleSet *)pFVar1,*pFVar8,&local_1e08);
  pFVar1 = param_1->Object;
  pFVar8 = ::FName::FName((FName *)&local_res8._s_0,"ComboButton");
  pFVar16 = (FComboButtonStyle *)
            (**(code **)(pFVar1->_padding_ + 0xa0))(pFVar1,FComboButtonStyle::TypeName,*pFVar8,0,1);
  if (((pFVar16 == (FComboButtonStyle *)0x0) &&
      (pFVar16 = &::Default,
      *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar21 * 8) + 0x9d4c) < ::_TSS0))
     && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    FComboButtonStyle::FComboButtonStyle(&::Default);
    atexit(`FComboButtonStyle::GetDefault'::__l2::_dynamic_atexit_destructor_for__Default__);
    _Init_thread_footer(&::_TSS0);
  }
  FComboButtonStyle::FComboButtonStyle(&local_2368,pFVar16);
  local_res8 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  local_2368.DownArrowPadding.Left = 0.0;
  local_2368.DownArrowPadding.Top = 0.0;
  local_2368.DownArrowPadding.Right = 0.0;
  local_2368.DownArrowPadding.Bottom = 0.0;
  pFVar14 = (FSlateBrush *)
            FSlateRoundedBoxBrush::FSlateRoundedBoxBrush<FSlateColor,FSlateColor,float>
                      ((FSlateRoundedBoxBrush *)local_2f88,&FStyleColors::Dropdown,fVar3,
                       &FStyleColors::Input,fVar2,(FDeprecateVector2DParameter *)&local_res8._s_0);
  FSlateBrush::operator=((FSlateBrush *)((longlong)&local_2368 + 0x20),pFVar14);
  local_res8 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  pFVar14 = (FSlateBrush *)
            FSlateRoundedBoxBrush::FSlateRoundedBoxBrush<FSlateColor,FSlateColor,float>
                      ((FSlateRoundedBoxBrush *)local_29e8,&FStyleColors::Dropdown,fVar3,
                       &FStyleColors::Input,fVar2,(FDeprecateVector2DParameter *)&local_res8._s_0);
  FSlateBrush::operator=((FSlateBrush *)((longlong)&local_2368 + 0x230),pFVar14);
  local_res8 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  pFVar14 = (FSlateBrush *)
            FSlateRoundedBoxBrush::FSlateRoundedBoxBrush<FSlateColor,FSlateColor,float>
                      ((FSlateRoundedBoxBrush *)local_2938,&FStyleColors::Dropdown,fVar3,
                       &FStyleColors::Input,fVar2,(FDeprecateVector2DParameter *)&local_res8._s_0);
  FSlateBrush::operator=((FSlateBrush *)((longlong)&local_2368 + 0xd0),pFVar14);
  local_res8 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  pFVar14 = (FSlateBrush *)
            FSlateRoundedBoxBrush::FSlateRoundedBoxBrush<FSlateColor,FSlateColor,float>
                      ((FSlateRoundedBoxBrush *)local_2ed8,&FStyleColors::Dropdown,fVar3,
                       &FStyleColors::Input,fVar2,(FDeprecateVector2DParameter *)&local_res8._s_0);
  FSlateBrush::operator=((FSlateBrush *)((longlong)&local_2368 + 0x180),pFVar14);
  local_2ed8[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_2e38);
  local_2938[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_2898);
  local_29e8[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_2948);
  local_2f88[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_2ee8);
  pFVar1 = param_1->Object;
  pFVar8 = ::FName::FName((FName *)&local_res8._s_0,"ColorPicker.ThemesComboButton");
  FSlateStyleSet::Set<FComboButtonStyle>((FSlateStyleSet *)pFVar1,*pFVar8,&local_2368);
  pFVar1 = param_1->Object;
  pFVar8 = ::FName::FName((FName *)&local_res8._s_0,"Button");
  pFVar15 = (FButtonStyle *)
            (**(code **)(pFVar1->_padding_ + 0xa0))(pFVar1,FButtonStyle::TypeName,*pFVar8,0,1);
  if (pFVar15 == (FButtonStyle *)0x0) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar21 * 8) + 0x9d4c) <
         ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      FButtonStyle::FButtonStyle(&::Default);
      atexit(`FButtonStyle::GetDefault'::__l2::_dynamic_atexit_destructor_for__Default__);
      _Init_thread_footer(&::_TSS0);
    }
    pFVar15 = &::Default;
  }
  FButtonStyle::FButtonStyle((FButtonStyle *)&local_2e28,pFVar15);
  local_res8 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  local_2e28.HoveredThumbImage.OutlineSettings.CornerRadii.field0_0x0._s_0.Z = 0.0;
  local_2e28.HoveredThumbImage.OutlineSettings.CornerRadii.field0_0x0._s_0.W = 0.0;
  local_2e28.HoveredThumbImage.OutlineSettings.Color.SpecifiedColor.field0_0x0._0_8_ = 0;
  local_2e28.HoveredThumbImage.OutlineSettings.Color.SpecifiedColor.field0_0x0._8_8_ = 0;
  pFVar14 = (FSlateBrush *)
            FSlateRoundedBoxBrush::FSlateRoundedBoxBrush<FSlateColor,FSlateColor,float>
                      ((FSlateRoundedBoxBrush *)local_2f88,&FStyleColors::Transparent,fVar3,
                       &FStyleColors::DropdownOutline,fVar2,
                       (FDeprecateVector2DParameter *)&local_res8._s_0);
  FSlateBrush::operator=((FSlateBrush *)((longlong)&local_2e28 + 0x10),pFVar14);
  local_2f88[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_2ee8);
  local_res8 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  pFVar14 = (FSlateBrush *)
            FSlateRoundedBoxBrush::FSlateRoundedBoxBrush<FSlateColor,FSlateColor,float>
                      ((FSlateRoundedBoxBrush *)local_2f88,&FStyleColors::Transparent,fVar3,
                       &FStyleColors::DropdownOutline,fVar2,
                       (FDeprecateVector2DParameter *)&local_res8._s_0);
  FSlateBrush::operator=((FSlateBrush *)((longlong)&local_2e28 + 0x220),pFVar14);
  local_2f88[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_2ee8);
  local_res8 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  pFVar14 = (FSlateBrush *)
            FSlateRoundedBoxBrush::FSlateRoundedBoxBrush<FSlateColor,FSlateColor,float>
                      ((FSlateRoundedBoxBrush *)local_2f88,&FStyleColors::Transparent,fVar3,
                       &FStyleColors::Hover2,fVar2,(FDeprecateVector2DParameter *)&local_res8._s_0);
  FSlateBrush::operator=((FSlateBrush *)((longlong)&local_2e28 + 0xc0),pFVar14);
  local_2f88[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_2ee8);
  local_res8 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  pFVar14 = (FSlateBrush *)
            FSlateRoundedBoxBrush::FSlateRoundedBoxBrush<FSlateColor,FSlateColor,float>
                      ((FSlateRoundedBoxBrush *)local_2f88,&FStyleColors::Transparent,fVar3,
                       &FStyleColors::Hover2,fVar2,(FDeprecateVector2DParameter *)&local_res8._s_0);
  FSlateBrush::operator=((FSlateBrush *)((longlong)&local_2e28 + 0x170),pFVar14);
  local_2f88[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_2ee8);
  pFVar1 = param_1->Object;
  pFVar8 = ::FName::FName((FName *)&local_res8._s_0,"ColorPicker.AddButton");
  FSlateStyleSet::Set<FButtonStyle>((FSlateStyleSet *)pFVar1,*pFVar8,(FButtonStyle *)&local_2e28);
  FButtonStyle::FButtonStyle((FButtonStyle *)&local_2888,(FButtonStyle *)&local_2e28);
  local_res8 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  pFVar14 = (FSlateBrush *)
            FSlateRoundedBoxBrush::FSlateRoundedBoxBrush<FSlateColor,FSlateColor,float>
                      ((FSlateRoundedBoxBrush *)local_2f88,&FStyleColors::Transparent,fVar3,
                       &FStyleColors::Transparent,fVar2,
                       (FDeprecateVector2DParameter *)&local_res8._s_0);
  FSlateBrush::operator=((FSlateBrush *)((longlong)&local_2888 + 0x10),pFVar14);
  local_2f88[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_2ee8);
  local_res8 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  pFVar14 = (FSlateBrush *)
            FSlateRoundedBoxBrush::FSlateRoundedBoxBrush<FSlateColor,FSlateColor,float>
                      ((FSlateRoundedBoxBrush *)local_2f88,&FStyleColors::Transparent,fVar3,
                       &FStyleColors::DropdownOutline,fVar2,
                       (FDeprecateVector2DParameter *)&local_res8._s_0);
  FSlateBrush::operator=((FSlateBrush *)((longlong)&local_2888 + 0xc0),pFVar14);
  local_2f88[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_2ee8);
  pFVar1 = param_1->Object;
  pFVar8 = ::FName::FName((FName *)&local_res8._s_0,"ColorPicker.DeleteButton");
  FSlateStyleSet::Set<FButtonStyle>((FSlateStyleSet *)pFVar1,*pFVar8,(FButtonStyle *)&local_2888);
  local_2888._0_8_ = &___7FButtonStyle__6B_;
  local_2888.ActiveFillBrush._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2888.ActiveFillBrush.ResourceHandle.Data.SharedReferenceCount.ReferenceController
            );
  local_2888.HoveredBackgroundBrush._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2888.HoveredBackgroundBrush.ResourceHandle.Data.SharedReferenceCount.
             ReferenceController);
  local_2888.ActiveBackgroundBrush._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2888.ActiveBackgroundBrush.ResourceHandle.Data.SharedReferenceCount.
             ReferenceController);
  local_2888.BackgroundBrush._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2888.BackgroundBrush.ResourceHandle.Data.SharedReferenceCount.ReferenceController
            );
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)&local_2888);
  local_2e28._0_8_ = &___7FButtonStyle__6B_;
  local_2e28.NormalThumbImage._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2e28.NormalThumbImage.ResourceHandle.Data.SharedReferenceCount.
             ReferenceController);
  local_2e28.DisabledBarImage._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2e28.DisabledBarImage.ResourceHandle.Data.SharedReferenceCount.
             ReferenceController);
  local_2e28.HoveredBarImage._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2e28.HoveredBarImage.ResourceHandle.Data.SharedReferenceCount.ReferenceController
            );
  local_2e28.NormalBarImage._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2e28.NormalBarImage.ResourceHandle.Data.SharedReferenceCount.ReferenceController)
  ;
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)&local_2e28);
  local_2368._0_8_ = &___7FComboButtonStyle__6B_;
  local_2368.MenuBorderBrush._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2368.MenuBorderBrush.ResourceHandle.Data.SharedReferenceCount.ReferenceController
            );
  local_2368.DownArrowImage._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2368.DownArrowImage.ResourceHandle.Data.SharedReferenceCount.ReferenceController)
  ;
  FButtonStyle::~FButtonStyle((FButtonStyle *)((longlong)&local_2368 + 0x10));
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)&local_2368);
  FWindowStyle::~FWindowStyle(&local_1e08);
  pFVar1 = param_1->Object;
  pFVar11 = ::operator_new(0xb0);
  pFVar13 = pFVar18;
  if (pFVar11 != (FSlateImageBrush *)0x0) {
    local_res8 = (TVector2<float>_u_0)0x4340000043400000;
    local_2fa8._0_8_ = pvVar4;
    local_2fa8._8_8_ = uVar5;
    pFVar12 = (FString *)
              (**(code **)(param_1->Object->_padding_ + 0xf0))
                        (param_1->Object,local_2f98,"Common/ColorWheel",L".png");
    pFVar13 = FSlateImageBrush::FSlateImageBrush
                        (pFVar11,pFVar12,(FDeprecateVector2DParameter *)&local_res8._s_0,
                         (FLinearColor *)&local_2fa8._s_0,NoTile,FullColor);
  }
  pFVar8 = ::FName::FName(&local_res10,"ColorWheel.HueValueCircle");
  FSlateStyleSet::Set<FSlateImageBrush>((FSlateStyleSet *)pFVar1,*pFVar8,pFVar13);
  if ((pFVar11 != (FSlateImageBrush *)0x0) && (local_2f98[0] != (void *)0x0)) {
    FMemory::Free(local_2f98[0]);
  }
  pFVar1 = param_1->Object;
  pFVar11 = ::operator_new(0xb0);
  pFVar13 = pFVar18;
  if (pFVar11 != (FSlateImageBrush *)0x0) {
    local_res8 = (TVector2<float>_u_0)0x4100000041000000;
    local_2fa8._0_8_ = pvVar4;
    local_2fa8._8_8_ = uVar5;
    pFVar12 = (FString *)
              (**(code **)(param_1->Object->_padding_ + 0xf0))
                        (param_1->Object,local_2f98,"Common/Circle",L".png");
    pFVar13 = FSlateImageBrush::FSlateImageBrush
                        (pFVar11,pFVar12,(FDeprecateVector2DParameter *)&local_res8._s_0,
                         (FLinearColor *)&local_2fa8._s_0,NoTile,FullColor);
  }
  pFVar8 = ::FName::FName(&local_res10,"ColorWheel.Selector");
  FSlateStyleSet::Set<FSlateImageBrush>((FSlateStyleSet *)pFVar1,*pFVar8,pFVar13);
  if ((pFVar11 != (FSlateImageBrush *)0x0) && (local_2f98[0] != (void *)0x0)) {
    FMemory::Free(local_2f98[0]);
  }
  pFVar1 = param_1->Object;
  pFVar11 = ::operator_new(0xb0);
  pFVar13 = pFVar18;
  if (pFVar11 != (FSlateImageBrush *)0x0) {
    local_res8 = (TVector2<float>_u_0)0x4340000043400000;
    local_2fa8._0_8_ = pvVar4;
    local_2fa8._8_8_ = uVar5;
    pFVar12 = (FString *)
              (**(code **)(param_1->Object->_padding_ + 0xf0))
                        (param_1->Object,local_2f98,"Common/ColorGradingWheel",L".png");
    pFVar13 = FSlateImageBrush::FSlateImageBrush
                        (pFVar11,pFVar12,(FDeprecateVector2DParameter *)&local_res8._s_0,
                         (FLinearColor *)&local_2fa8._s_0,NoTile,FullColor);
  }
  pFVar8 = ::FName::FName(&local_res10,"ColorGradingWheel.HueValueCircle");
  FSlateStyleSet::Set<FSlateImageBrush>((FSlateStyleSet *)pFVar1,*pFVar8,pFVar13);
  if ((pFVar11 != (FSlateImageBrush *)0x0) && (local_2f98[0] != (void *)0x0)) {
    FMemory::Free(local_2f98[0]);
  }
  pFVar1 = param_1->Object;
  pFVar13 = ::operator_new(0xb0);
  if (pFVar13 != (FSlateImageBrush *)0x0) {
    local_res8 = (TVector2<float>_u_0)0x4100000041000000;
    local_2fa8._0_8_ = pvVar4;
    local_2fa8._8_8_ = uVar5;
    pFVar12 = (FString *)
              (**(code **)(param_1->Object->_padding_ + 0xf0))
                        (param_1->Object,local_2f98,"Common/Circle",L".png");
    pFVar18 = FSlateImageBrush::FSlateImageBrush
                        (pFVar13,pFVar12,(FDeprecateVector2DParameter *)&local_res8._s_0,
                         (FLinearColor *)&local_2fa8._s_0,NoTile,FullColor);
  }
  pFVar8 = ::FName::FName(&local_res10,"ColorGradingWheel.Selector");
  FSlateStyleSet::Set<FSlateImageBrush>((FSlateStyleSet *)pFVar1,*pFVar8,pFVar18);
  if ((pFVar13 != (FSlateImageBrush *)0x0) && (local_2f98[0] != (void *)0x0)) {
    FMemory::Free(local_2f98[0]);
  }
  pFVar1 = param_1->Object;
  pFVar8 = ::FName::FName((FName *)&local_res8._s_0,"Button");
  pFVar15 = (FButtonStyle *)
            (**(code **)(pFVar1->_padding_ + 0xa0))(pFVar1,FButtonStyle::TypeName,*pFVar8,0,1);
  if (((pFVar15 == (FButtonStyle *)0x0) &&
      (pFVar15 = &::Default,
      *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar21 * 8) + 0x9d4c) < ::_TSS0))
     && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    FButtonStyle::FButtonStyle(&::Default);
    atexit(`FButtonStyle::GetDefault'::__l2::_dynamic_atexit_destructor_for__Default__);
    _Init_thread_footer(&::_TSS0);
  }
  FButtonStyle::FButtonStyle((FButtonStyle *)&local_2e28,pFVar15);
  local_res8 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  pFVar14 = (FSlateBrush *)
            FSlateRoundedBoxBrush::FSlateRoundedBoxBrush<FSlateColor,FSlateColor,float>
                      ((FSlateRoundedBoxBrush *)local_2f88,&FStyleColors::Transparent,fVar3,
                       &FStyleColors::Transparent,fVar2,
                       (FDeprecateVector2DParameter *)&local_res8._s_0);
  FSlateBrush::operator=((FSlateBrush *)((longlong)&local_2e28 + 0x10),pFVar14);
  local_2f88[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_2ee8);
  local_res8 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  local_2fa8._0_8_ = ___xmm_3ecccccd000000000000000000000000;
  local_2fa8._8_8_ = _UNK_1509251c8;
  pFVar14 = (FSlateBrush *)
            FSlateRoundedBoxBrush::FSlateRoundedBoxBrush<FLinearColor,FSlateColor,float>
                      ((FSlateRoundedBoxBrush *)local_2f88,(FLinearColor *)&local_2fa8._s_0,fVar3,
                       &FStyleColors::Transparent,fVar2,
                       (FDeprecateVector2DParameter *)&local_res8._s_0);
  FSlateBrush::operator=((FSlateBrush *)((longlong)&local_2e28 + 0xc0),pFVar14);
  local_2f88[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_2ee8);
  local_res8 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  local_2fa8._0_8_ = ___xmm_3ecccccd000000000000000000000000;
  local_2fa8._8_8_ = _UNK_1509251c8;
  pFVar14 = (FSlateBrush *)
            FSlateRoundedBoxBrush::FSlateRoundedBoxBrush<FLinearColor,FSlateColor,float>
                      ((FSlateRoundedBoxBrush *)local_2f88,(FLinearColor *)&local_2fa8._s_0,fVar3,
                       &FStyleColors::Transparent,fVar2,
                       (FDeprecateVector2DParameter *)&local_res8._s_0);
  FSlateBrush::operator=((FSlateBrush *)((longlong)&local_2e28 + 0x170),pFVar14);
  local_2f88[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_2ee8);
  local_res8 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  pFVar14 = (FSlateBrush *)
            FSlateRoundedBoxBrush::FSlateRoundedBoxBrush<FSlateColor,FSlateColor,float>
                      ((FSlateRoundedBoxBrush *)local_2f88,&FStyleColors::Transparent,fVar3,
                       &FStyleColors::Transparent,fVar2,
                       (FDeprecateVector2DParameter *)&local_res8._s_0);
  FSlateBrush::operator=((FSlateBrush *)((longlong)&local_2e28 + 0x220),pFVar14);
  local_2f88[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_2ee8);
  pFVar1 = param_1->Object;
  pFVar8 = ::FName::FName(&local_res10,"ColorPicker.ColorPreviewButton");
  FSlateStyleSet::Set<FButtonStyle>((FSlateStyleSet *)pFVar1,*pFVar8,(FButtonStyle *)&local_2e28);
  local_2e28._0_8_ = &___7FButtonStyle__6B_;
  local_2e28.NormalThumbImage._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2e28.NormalThumbImage.ResourceHandle.Data.SharedReferenceCount.
             ReferenceController);
  local_2e28.DisabledBarImage._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2e28.DisabledBarImage.ResourceHandle.Data.SharedReferenceCount.
             ReferenceController);
  local_2e28.HoveredBarImage._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2e28.HoveredBarImage.ResourceHandle.Data.SharedReferenceCount.ReferenceController
            );
  local_2e28.NormalBarImage._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2e28.NormalBarImage.ResourceHandle.Data.SharedReferenceCount.ReferenceController)
  ;
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)&local_2e28);
  return;
}

// SetupColors @ 1425986a0

void __cdecl FStarshipCoreStyle::SetupColors(TSharedRef<FStarshipCoreStyle::FStyle,1> *param_1)

{
  FStyle *pFVar1;
  FName *pFVar2;
  FSlateBrush *pFVar3;
  FSlateBrush *pFVar4;
  FSlateBrush *pFVar5;
  FName local_res8;
  TVector2<float>_u_0 local_res10;
  FName local_res18;
  FMargin local_48;
  
  pFVar1 = param_1->Object;
  pFVar2 = ::FName::FName(&local_res8,"Colors.Black");
  FSlateStyleSet::Set((FSlateStyleSet *)pFVar1,*pFVar2,&FStyleColors::Black);
  pFVar1 = param_1->Object;
  pFVar2 = ::FName::FName(&local_res8,"Colors.Title");
  FSlateStyleSet::Set((FSlateStyleSet *)pFVar1,*pFVar2,&FStyleColors::Title);
  pFVar1 = param_1->Object;
  pFVar2 = ::FName::FName(&local_res8,"Colors.WindowBorder");
  FSlateStyleSet::Set((FSlateStyleSet *)pFVar1,*pFVar2,&FStyleColors::WindowBorder);
  pFVar1 = param_1->Object;
  pFVar2 = ::FName::FName(&local_res8,"Colors.Foldout");
  FSlateStyleSet::Set((FSlateStyleSet *)pFVar1,*pFVar2,&FStyleColors::Foldout);
  pFVar1 = param_1->Object;
  pFVar2 = ::FName::FName(&local_res8,"Colors.Input");
  FSlateStyleSet::Set((FSlateStyleSet *)pFVar1,*pFVar2,&FStyleColors::Input);
  pFVar1 = param_1->Object;
  pFVar2 = ::FName::FName(&local_res8,"Colors.InputOutline");
  FSlateStyleSet::Set((FSlateStyleSet *)pFVar1,*pFVar2,&FStyleColors::InputOutline);
  pFVar1 = param_1->Object;
  pFVar2 = ::FName::FName(&local_res8,"Colors.Recessed");
  FSlateStyleSet::Set((FSlateStyleSet *)pFVar1,*pFVar2,&FStyleColors::Recessed);
  pFVar1 = param_1->Object;
  pFVar2 = ::FName::FName(&local_res8,"Colors.Background");
  FSlateStyleSet::Set((FSlateStyleSet *)pFVar1,*pFVar2,&FStyleColors::Background);
  pFVar1 = param_1->Object;
  pFVar2 = ::FName::FName(&local_res8,"Colors.Panel");
  FSlateStyleSet::Set((FSlateStyleSet *)pFVar1,*pFVar2,&FStyleColors::Panel);
  pFVar1 = param_1->Object;
  pFVar2 = ::FName::FName(&local_res8,"Colors.Header");
  FSlateStyleSet::Set((FSlateStyleSet *)pFVar1,*pFVar2,&FStyleColors::Header);
  pFVar1 = param_1->Object;
  pFVar2 = ::FName::FName(&local_res8,"Colors.Dropdown");
  FSlateStyleSet::Set((FSlateStyleSet *)pFVar1,*pFVar2,&FStyleColors::Dropdown);
  pFVar1 = param_1->Object;
  pFVar2 = ::FName::FName(&local_res8,"Colors.DropdownOutline");
  FSlateStyleSet::Set((FSlateStyleSet *)pFVar1,*pFVar2,&FStyleColors::DropdownOutline);
  pFVar1 = param_1->Object;
  pFVar2 = ::FName::FName(&local_res8,"Colors.Hover");
  FSlateStyleSet::Set((FSlateStyleSet *)pFVar1,*pFVar2,&FStyleColors::Hover);
  pFVar1 = param_1->Object;
  pFVar2 = ::FName::FName(&local_res8,"Colors.Hover2");
  FSlateStyleSet::Set((FSlateStyleSet *)pFVar1,*pFVar2,&FStyleColors::Hover2);
  pFVar1 = param_1->Object;
  pFVar2 = ::FName::FName(&local_res8,"Colors.White");
  FSlateStyleSet::Set((FSlateStyleSet *)pFVar1,*pFVar2,&FStyleColors::White);
  pFVar1 = param_1->Object;
  pFVar2 = ::FName::FName(&local_res8,"Colors.White25");
  FSlateStyleSet::Set((FSlateStyleSet *)pFVar1,*pFVar2,&FStyleColors::White25);
  pFVar1 = param_1->Object;
  pFVar2 = ::FName::FName(&local_res8,"Colors.Highlight");
  FSlateStyleSet::Set((FSlateStyleSet *)pFVar1,*pFVar2,&FStyleColors::Highlight);
  pFVar1 = param_1->Object;
  pFVar2 = ::FName::FName(&local_res8,"Colors.Foreground");
  FSlateStyleSet::Set((FSlateStyleSet *)pFVar1,*pFVar2,&FStyleColors::Foreground);
  pFVar1 = param_1->Object;
  pFVar2 = ::FName::FName(&local_res8,"Colors.ForegroundHover");
  FSlateStyleSet::Set((FSlateStyleSet *)pFVar1,*pFVar2,&FStyleColors::ForegroundHover);
  pFVar1 = param_1->Object;
  pFVar2 = ::FName::FName(&local_res8,"Colors.ForegroundInverted");
  FSlateStyleSet::Set((FSlateStyleSet *)pFVar1,*pFVar2,&FStyleColors::ForegroundInverted);
  pFVar1 = param_1->Object;
  pFVar2 = ::FName::FName(&local_res8,"Colors.ForegroundHeader");
  FSlateStyleSet::Set((FSlateStyleSet *)pFVar1,*pFVar2,&FStyleColors::ForegroundHeader);
  pFVar1 = param_1->Object;
  pFVar2 = ::FName::FName(&local_res8,"Colors.Select");
  FSlateStyleSet::Set((FSlateStyleSet *)pFVar1,*pFVar2,&FStyleColors::Select);
  pFVar1 = param_1->Object;
  pFVar2 = ::FName::FName(&local_res8,"Colors.SelectInactive");
  FSlateStyleSet::Set((FSlateStyleSet *)pFVar1,*pFVar2,&FStyleColors::SelectInactive);
  pFVar1 = param_1->Object;
  pFVar2 = ::FName::FName(&local_res8,"Colors.SelectParent");
  FSlateStyleSet::Set((FSlateStyleSet *)pFVar1,*pFVar2,&FStyleColors::SelectParent);
  pFVar1 = param_1->Object;
  pFVar2 = ::FName::FName(&local_res8,"Colors.SelectHover");
  FSlateStyleSet::Set((FSlateStyleSet *)pFVar1,*pFVar2,&FStyleColors::SelectHover);
  pFVar1 = param_1->Object;
  pFVar2 = ::FName::FName(&local_res8,"Colors.Primary");
  FSlateStyleSet::Set((FSlateStyleSet *)pFVar1,*pFVar2,&FStyleColors::Primary);
  pFVar1 = param_1->Object;
  pFVar2 = ::FName::FName(&local_res8,"Colors.PrimaryHover");
  FSlateStyleSet::Set((FSlateStyleSet *)pFVar1,*pFVar2,&FStyleColors::PrimaryHover);
  pFVar1 = param_1->Object;
  pFVar2 = ::FName::FName(&local_res8,"Colors.PrimaryPress");
  FSlateStyleSet::Set((FSlateStyleSet *)pFVar1,*pFVar2,&FStyleColors::PrimaryPress);
  pFVar1 = param_1->Object;
  pFVar2 = ::FName::FName(&local_res8,"Colors.Secondary");
  FSlateStyleSet::Set((FSlateStyleSet *)pFVar1,*pFVar2,&FStyleColors::Secondary);
  pFVar1 = param_1->Object;
  pFVar2 = ::FName::FName(&local_res8,"Colors.AccentBlue");
  FSlateStyleSet::Set((FSlateStyleSet *)pFVar1,*pFVar2,&FStyleColors::AccentBlue);
  pFVar1 = param_1->Object;
  pFVar2 = ::FName::FName(&local_res8,"Colors.AccentPurple");
  FSlateStyleSet::Set((FSlateStyleSet *)pFVar1,*pFVar2,&FStyleColors::AccentPurple);
  pFVar1 = param_1->Object;
  pFVar2 = ::FName::FName(&local_res8,"Colors.AccentPink");
  FSlateStyleSet::Set((FSlateStyleSet *)pFVar1,*pFVar2,&FStyleColors::AccentPink);
  pFVar1 = param_1->Object;
  pFVar2 = ::FName::FName(&local_res8,"Colors.AccentRed");
  FSlateStyleSet::Set((FSlateStyleSet *)pFVar1,*pFVar2,&FStyleColors::AccentRed);
  pFVar1 = param_1->Object;
  pFVar2 = ::FName::FName(&local_res8,"Colors.AccentOrange");
  FSlateStyleSet::Set((FSlateStyleSet *)pFVar1,*pFVar2,&FStyleColors::AccentOrange);
  pFVar1 = param_1->Object;
  pFVar2 = ::FName::FName(&local_res8,"Colors.AccentYellow");
  FSlateStyleSet::Set((FSlateStyleSet *)pFVar1,*pFVar2,&FStyleColors::AccentYellow);
  pFVar1 = param_1->Object;
  pFVar2 = ::FName::FName(&local_res8,"Colors.AccentGreen");
  FSlateStyleSet::Set((FSlateStyleSet *)pFVar1,*pFVar2,&FStyleColors::AccentGreen);
  pFVar1 = param_1->Object;
  pFVar2 = ::FName::FName(&local_res8,"Colors.AccentBrown");
  FSlateStyleSet::Set((FSlateStyleSet *)pFVar1,*pFVar2,&FStyleColors::AccentBrown);
  pFVar1 = param_1->Object;
  pFVar2 = ::FName::FName(&local_res8,"Colors.AccentBlack");
  FSlateStyleSet::Set((FSlateStyleSet *)pFVar1,*pFVar2,&FStyleColors::AccentBlack);
  pFVar1 = param_1->Object;
  pFVar2 = ::FName::FName(&local_res8,"Colors.AccentGray");
  FSlateStyleSet::Set((FSlateStyleSet *)pFVar1,*pFVar2,&FStyleColors::AccentGray);
  pFVar1 = param_1->Object;
  pFVar2 = ::FName::FName(&local_res8,"Colors.AccentWhite");
  FSlateStyleSet::Set((FSlateStyleSet *)pFVar1,*pFVar2,&FStyleColors::AccentWhite);
  pFVar1 = param_1->Object;
  pFVar2 = ::FName::FName(&local_res8,"Colors.AccentFolder");
  FSlateStyleSet::Set((FSlateStyleSet *)pFVar1,*pFVar2,&FStyleColors::AccentFolder);
  pFVar1 = param_1->Object;
  pFVar2 = ::FName::FName(&local_res8,"Colors.Warning");
  FSlateStyleSet::Set((FSlateStyleSet *)pFVar1,*pFVar2,&FStyleColors::Warning);
  pFVar1 = param_1->Object;
  pFVar2 = ::FName::FName(&local_res8,"Colors.Error");
  FSlateStyleSet::Set((FSlateStyleSet *)pFVar1,*pFVar2,&FStyleColors::Error);
  pFVar1 = param_1->Object;
  pFVar3 = ::operator_new(0xb0);
  pFVar5 = (FSlateBrush *)0x0;
  pFVar4 = pFVar5;
  if (pFVar3 != (FSlateBrush *)0x0) {
    local_res10 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
    local_48.Left = 0.0;
    local_48.Top = 0.0;
    local_48.Right = 0.0;
    local_48.Bottom = 0.0;
    local_res8.ComparisonIndex.Value = 0;
    local_res8.Number = 0;
    FSlateBrush::FSlateBrush
              (pFVar3,Image,(FName)0x0,&local_48,NoTile,NoImage,
               (FDeprecateVector2DParameter *)&local_res10._s_0,&FStyleColors::Black,(UObject *)0x0,
               false);
    pFVar3->_padding_ = (longlong)&___7FSlateColorBrush__6B_;
    pFVar4 = pFVar3;
  }
  pFVar2 = ::FName::FName(&local_res18,"Brushes.Black");
  FSlateStyleSet::Set<FSlateColorBrush>((FSlateStyleSet *)pFVar1,*pFVar2,(FSlateColorBrush *)pFVar4)
  ;
  pFVar1 = param_1->Object;
  pFVar3 = ::operator_new(0xb0);
  pFVar4 = pFVar5;
  if (pFVar3 != (FSlateBrush *)0x0) {
    local_res10 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
    local_res8.ComparisonIndex.Value = 0;
    local_res8.Number = 0;
    local_48.Left = 0.0;
    local_48.Top = 0.0;
    local_48.Right = 0.0;
    local_48.Bottom = 0.0;
    FSlateBrush::FSlateBrush
              (pFVar3,Image,(FName)0x0,&local_48,NoTile,NoImage,
               (FDeprecateVector2DParameter *)&local_res10._s_0,&FStyleColors::Title,(UObject *)0x0,
               false);
    pFVar3->_padding_ = (longlong)&___7FSlateColorBrush__6B_;
    pFVar4 = pFVar3;
  }
  pFVar2 = ::FName::FName(&local_res18,"Brushes.Title");
  FSlateStyleSet::Set<FSlateColorBrush>((FSlateStyleSet *)pFVar1,*pFVar2,(FSlateColorBrush *)pFVar4)
  ;
  pFVar1 = param_1->Object;
  pFVar3 = ::operator_new(0xb0);
  pFVar4 = pFVar5;
  if (pFVar3 != (FSlateBrush *)0x0) {
    local_res10 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
    local_res8.ComparisonIndex.Value = 0;
    local_res8.Number = 0;
    local_48.Left = 0.0;
    local_48.Top = 0.0;
    local_48.Right = 0.0;
    local_48.Bottom = 0.0;
    FSlateBrush::FSlateBrush
              (pFVar3,Image,(FName)0x0,&local_48,NoTile,NoImage,
               (FDeprecateVector2DParameter *)&local_res10._s_0,&FStyleColors::Foldout,
               (UObject *)0x0,false);
    pFVar3->_padding_ = (longlong)&___7FSlateColorBrush__6B_;
    pFVar4 = pFVar3;
  }
  pFVar2 = ::FName::FName(&local_res18,"Brushes.Foldout");
  FSlateStyleSet::Set<FSlateColorBrush>((FSlateStyleSet *)pFVar1,*pFVar2,(FSlateColorBrush *)pFVar4)
  ;
  pFVar1 = param_1->Object;
  pFVar3 = ::operator_new(0xb0);
  pFVar4 = pFVar5;
  if (pFVar3 != (FSlateBrush *)0x0) {
    local_res10 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
    local_res8.ComparisonIndex.Value = 0;
    local_res8.Number = 0;
    local_48.Left = 0.0;
    local_48.Top = 0.0;
    local_48.Right = 0.0;
    local_48.Bottom = 0.0;
    FSlateBrush::FSlateBrush
              (pFVar3,Image,(FName)0x0,&local_48,NoTile,NoImage,
               (FDeprecateVector2DParameter *)&local_res10._s_0,&FStyleColors::Input,(UObject *)0x0,
               false);
    pFVar3->_padding_ = (longlong)&___7FSlateColorBrush__6B_;
    pFVar4 = pFVar3;
  }
  pFVar2 = ::FName::FName(&local_res18,"Brushes.Input");
  FSlateStyleSet::Set<FSlateColorBrush>((FSlateStyleSet *)pFVar1,*pFVar2,(FSlateColorBrush *)pFVar4)
  ;
  pFVar1 = param_1->Object;
  pFVar3 = ::operator_new(0xb0);
  pFVar4 = pFVar5;
  if (pFVar3 != (FSlateBrush *)0x0) {
    local_res10 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
    local_res8.ComparisonIndex.Value = 0;
    local_res8.Number = 0;
    local_48.Left = 0.0;
    local_48.Top = 0.0;
    local_48.Right = 0.0;
    local_48.Bottom = 0.0;
    FSlateBrush::FSlateBrush
              (pFVar3,Image,(FName)0x0,&local_48,NoTile,NoImage,
               (FDeprecateVector2DParameter *)&local_res10._s_0,&FStyleColors::InputOutline,
               (UObject *)0x0,false);
    pFVar3->_padding_ = (longlong)&___7FSlateColorBrush__6B_;
    pFVar4 = pFVar3;
  }
  pFVar2 = ::FName::FName(&local_res18,"Brushes.InputOutline");
  FSlateStyleSet::Set<FSlateColorBrush>((FSlateStyleSet *)pFVar1,*pFVar2,(FSlateColorBrush *)pFVar4)
  ;
  pFVar1 = param_1->Object;
  pFVar3 = ::operator_new(0xb0);
  pFVar4 = pFVar5;
  if (pFVar3 != (FSlateBrush *)0x0) {
    local_res10 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
    local_res8.ComparisonIndex.Value = 0;
    local_res8.Number = 0;
    local_48.Left = 0.0;
    local_48.Top = 0.0;
    local_48.Right = 0.0;
    local_48.Bottom = 0.0;
    FSlateBrush::FSlateBrush
              (pFVar3,Image,(FName)0x0,&local_48,NoTile,NoImage,
               (FDeprecateVector2DParameter *)&local_res10._s_0,&FStyleColors::Recessed,
               (UObject *)0x0,false);
    pFVar3->_padding_ = (longlong)&___7FSlateColorBrush__6B_;
    pFVar4 = pFVar3;
  }
  pFVar2 = ::FName::FName(&local_res18,"Brushes.Recessed");
  FSlateStyleSet::Set<FSlateColorBrush>((FSlateStyleSet *)pFVar1,*pFVar2,(FSlateColorBrush *)pFVar4)
  ;
  pFVar1 = param_1->Object;
  pFVar3 = ::operator_new(0xb0);
  pFVar4 = pFVar5;
  if (pFVar3 != (FSlateBrush *)0x0) {
    local_res10 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
    local_res8.ComparisonIndex.Value = 0;
    local_res8.Number = 0;
    local_48.Left = 0.0;
    local_48.Top = 0.0;
    local_48.Right = 0.0;
    local_48.Bottom = 0.0;
    FSlateBrush::FSlateBrush
              (pFVar3,Image,(FName)0x0,&local_48,NoTile,NoImage,
               (FDeprecateVector2DParameter *)&local_res10._s_0,&FStyleColors::Background,
               (UObject *)0x0,false);
    pFVar3->_padding_ = (longlong)&___7FSlateColorBrush__6B_;
    pFVar4 = pFVar3;
  }
  pFVar2 = ::FName::FName(&local_res18,"Brushes.Background");
  FSlateStyleSet::Set<FSlateColorBrush>((FSlateStyleSet *)pFVar1,*pFVar2,(FSlateColorBrush *)pFVar4)
  ;
  pFVar1 = param_1->Object;
  pFVar3 = ::operator_new(0xb0);
  pFVar4 = pFVar5;
  if (pFVar3 != (FSlateBrush *)0x0) {
    local_res10 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
    local_res8.ComparisonIndex.Value = 0;
    local_res8.Number = 0;
    local_48.Left = 0.0;
    local_48.Top = 0.0;
    local_48.Right = 0.0;
    local_48.Bottom = 0.0;
    FSlateBrush::FSlateBrush
              (pFVar3,Image,(FName)0x0,&local_48,NoTile,NoImage,
               (FDeprecateVector2DParameter *)&local_res10._s_0,&FStyleColors::Panel,(UObject *)0x0,
               false);
    pFVar3->_padding_ = (longlong)&___7FSlateColorBrush__6B_;
    pFVar4 = pFVar3;
  }
  pFVar2 = ::FName::FName(&local_res18,"Brushes.Panel");
  FSlateStyleSet::Set<FSlateColorBrush>((FSlateStyleSet *)pFVar1,*pFVar2,(FSlateColorBrush *)pFVar4)
  ;
  pFVar1 = param_1->Object;
  pFVar3 = ::operator_new(0xb0);
  pFVar4 = pFVar5;
  if (pFVar3 != (FSlateBrush *)0x0) {
    local_res10 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
    local_res8.ComparisonIndex.Value = 0;
    local_res8.Number = 0;
    local_48.Left = 0.0;
    local_48.Top = 0.0;
    local_48.Right = 0.0;
    local_48.Bottom = 0.0;
    FSlateBrush::FSlateBrush
              (pFVar3,Image,(FName)0x0,&local_48,NoTile,NoImage,
               (FDeprecateVector2DParameter *)&local_res10._s_0,&FStyleColors::Header,(UObject *)0x0
               ,false);
    pFVar3->_padding_ = (longlong)&___7FSlateColorBrush__6B_;
    pFVar4 = pFVar3;
  }
  pFVar2 = ::FName::FName(&local_res18,"Brushes.Header");
  FSlateStyleSet::Set<FSlateColorBrush>((FSlateStyleSet *)pFVar1,*pFVar2,(FSlateColorBrush *)pFVar4)
  ;
  pFVar1 = param_1->Object;
  pFVar3 = ::operator_new(0xb0);
  pFVar4 = pFVar5;
  if (pFVar3 != (FSlateBrush *)0x0) {
    local_res10 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
    local_res8.ComparisonIndex.Value = 0;
    local_res8.Number = 0;
    local_48.Left = 0.0;
    local_48.Top = 0.0;
    local_48.Right = 0.0;
    local_48.Bottom = 0.0;
    FSlateBrush::FSlateBrush
              (pFVar3,Image,(FName)0x0,&local_48,NoTile,NoImage,
               (FDeprecateVector2DParameter *)&local_res10._s_0,&FStyleColors::Dropdown,
               (UObject *)0x0,false);
    pFVar3->_padding_ = (longlong)&___7FSlateColorBrush__6B_;
    pFVar4 = pFVar3;
  }
  pFVar2 = ::FName::FName(&local_res18,"Brushes.Dropdown");
  FSlateStyleSet::Set<FSlateColorBrush>((FSlateStyleSet *)pFVar1,*pFVar2,(FSlateColorBrush *)pFVar4)
  ;
  pFVar1 = param_1->Object;
  pFVar3 = ::operator_new(0xb0);
  pFVar4 = pFVar5;
  if (pFVar3 != (FSlateBrush *)0x0) {
    local_res10 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
    local_res8.ComparisonIndex.Value = 0;
    local_res8.Number = 0;
    local_48.Left = 0.0;
    local_48.Top = 0.0;
    local_48.Right = 0.0;
    local_48.Bottom = 0.0;
    FSlateBrush::FSlateBrush
              (pFVar3,Image,(FName)0x0,&local_48,NoTile,NoImage,
               (FDeprecateVector2DParameter *)&local_res10._s_0,&FStyleColors::DropdownOutline,
               (UObject *)0x0,false);
    pFVar3->_padding_ = (longlong)&___7FSlateColorBrush__6B_;
    pFVar4 = pFVar3;
  }
  pFVar2 = ::FName::FName(&local_res18,"Brushes.DropdownOutline");
  FSlateStyleSet::Set<FSlateColorBrush>((FSlateStyleSet *)pFVar1,*pFVar2,(FSlateColorBrush *)pFVar4)
  ;
  pFVar1 = param_1->Object;
  pFVar3 = ::operator_new(0xb0);
  pFVar4 = pFVar5;
  if (pFVar3 != (FSlateBrush *)0x0) {
    local_res10 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
    local_res8.ComparisonIndex.Value = 0;
    local_res8.Number = 0;
    local_48.Left = 0.0;
    local_48.Top = 0.0;
    local_48.Right = 0.0;
    local_48.Bottom = 0.0;
    FSlateBrush::FSlateBrush
              (pFVar3,Image,(FName)0x0,&local_48,NoTile,NoImage,
               (FDeprecateVector2DParameter *)&local_res10._s_0,&FStyleColors::Hover,(UObject *)0x0,
               false);
    pFVar3->_padding_ = (longlong)&___7FSlateColorBrush__6B_;
    pFVar4 = pFVar3;
  }
  pFVar2 = ::FName::FName(&local_res18,"Brushes.Hover");
  FSlateStyleSet::Set<FSlateColorBrush>((FSlateStyleSet *)pFVar1,*pFVar2,(FSlateColorBrush *)pFVar4)
  ;
  pFVar1 = param_1->Object;
  pFVar3 = ::operator_new(0xb0);
  pFVar4 = pFVar5;
  if (pFVar3 != (FSlateBrush *)0x0) {
    local_res10 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
    local_res8.ComparisonIndex.Value = 0;
    local_res8.Number = 0;
    local_48.Left = 0.0;
    local_48.Top = 0.0;
    local_48.Right = 0.0;
    local_48.Bottom = 0.0;
    FSlateBrush::FSlateBrush
              (pFVar3,Image,(FName)0x0,&local_48,NoTile,NoImage,
               (FDeprecateVector2DParameter *)&local_res10._s_0,&FStyleColors::Hover2,(UObject *)0x0
               ,false);
    pFVar3->_padding_ = (longlong)&___7FSlateColorBrush__6B_;
    pFVar4 = pFVar3;
  }
  pFVar2 = ::FName::FName(&local_res18,"Brushes.Hover2");
  FSlateStyleSet::Set<FSlateColorBrush>((FSlateStyleSet *)pFVar1,*pFVar2,(FSlateColorBrush *)pFVar4)
  ;
  pFVar1 = param_1->Object;
  pFVar3 = ::operator_new(0xb0);
  pFVar4 = pFVar5;
  if (pFVar3 != (FSlateBrush *)0x0) {
    local_res10 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
    local_res8.ComparisonIndex.Value = 0;
    local_res8.Number = 0;
    local_48.Left = 0.0;
    local_48.Top = 0.0;
    local_48.Right = 0.0;
    local_48.Bottom = 0.0;
    FSlateBrush::FSlateBrush
              (pFVar3,Image,(FName)0x0,&local_48,NoTile,NoImage,
               (FDeprecateVector2DParameter *)&local_res10._s_0,&FStyleColors::White,(UObject *)0x0,
               false);
    pFVar3->_padding_ = (longlong)&___7FSlateColorBrush__6B_;
    pFVar4 = pFVar3;
  }
  pFVar2 = ::FName::FName(&local_res18,"Brushes.White");
  FSlateStyleSet::Set<FSlateColorBrush>((FSlateStyleSet *)pFVar1,*pFVar2,(FSlateColorBrush *)pFVar4)
  ;
  pFVar1 = param_1->Object;
  pFVar3 = ::operator_new(0xb0);
  pFVar4 = pFVar5;
  if (pFVar3 != (FSlateBrush *)0x0) {
    local_res10 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
    local_res8.ComparisonIndex.Value = 0;
    local_res8.Number = 0;
    local_48.Left = 0.0;
    local_48.Top = 0.0;
    local_48.Right = 0.0;
    local_48.Bottom = 0.0;
    FSlateBrush::FSlateBrush
              (pFVar3,Image,(FName)0x0,&local_48,NoTile,NoImage,
               (FDeprecateVector2DParameter *)&local_res10._s_0,&FStyleColors::White25,
               (UObject *)0x0,false);
    pFVar3->_padding_ = (longlong)&___7FSlateColorBrush__6B_;
    pFVar4 = pFVar3;
  }
  pFVar2 = ::FName::FName(&local_res18,"Brushes.White25");
  FSlateStyleSet::Set<FSlateColorBrush>((FSlateStyleSet *)pFVar1,*pFVar2,(FSlateColorBrush *)pFVar4)
  ;
  pFVar1 = param_1->Object;
  pFVar3 = ::operator_new(0xb0);
  pFVar4 = pFVar5;
  if (pFVar3 != (FSlateBrush *)0x0) {
    local_res10 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
    local_res8.ComparisonIndex.Value = 0;
    local_res8.Number = 0;
    local_48.Left = 0.0;
    local_48.Top = 0.0;
    local_48.Right = 0.0;
    local_48.Bottom = 0.0;
    FSlateBrush::FSlateBrush
              (pFVar3,Image,(FName)0x0,&local_48,NoTile,NoImage,
               (FDeprecateVector2DParameter *)&local_res10._s_0,&FStyleColors::Highlight,
               (UObject *)0x0,false);
    pFVar3->_padding_ = (longlong)&___7FSlateColorBrush__6B_;
    pFVar4 = pFVar3;
  }
  pFVar2 = ::FName::FName(&local_res18,"Brushes.Highlight");
  FSlateStyleSet::Set<FSlateColorBrush>((FSlateStyleSet *)pFVar1,*pFVar2,(FSlateColorBrush *)pFVar4)
  ;
  pFVar1 = param_1->Object;
  pFVar3 = ::operator_new(0xb0);
  pFVar4 = pFVar5;
  if (pFVar3 != (FSlateBrush *)0x0) {
    local_res10 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
    local_res8.ComparisonIndex.Value = 0;
    local_res8.Number = 0;
    local_48.Left = 0.0;
    local_48.Top = 0.0;
    local_48.Right = 0.0;
    local_48.Bottom = 0.0;
    FSlateBrush::FSlateBrush
              (pFVar3,Image,(FName)0x0,&local_48,NoTile,NoImage,
               (FDeprecateVector2DParameter *)&local_res10._s_0,&FStyleColors::Foreground,
               (UObject *)0x0,false);
    pFVar3->_padding_ = (longlong)&___7FSlateColorBrush__6B_;
    pFVar4 = pFVar3;
  }
  pFVar2 = ::FName::FName(&local_res18,"Brushes.Foreground");
  FSlateStyleSet::Set<FSlateColorBrush>((FSlateStyleSet *)pFVar1,*pFVar2,(FSlateColorBrush *)pFVar4)
  ;
  pFVar1 = param_1->Object;
  pFVar3 = ::operator_new(0xb0);
  pFVar4 = pFVar5;
  if (pFVar3 != (FSlateBrush *)0x0) {
    local_res10 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
    local_res8.ComparisonIndex.Value = 0;
    local_res8.Number = 0;
    local_48.Left = 0.0;
    local_48.Top = 0.0;
    local_48.Right = 0.0;
    local_48.Bottom = 0.0;
    FSlateBrush::FSlateBrush
              (pFVar3,Image,(FName)0x0,&local_48,NoTile,NoImage,
               (FDeprecateVector2DParameter *)&local_res10._s_0,&FStyleColors::ForegroundHover,
               (UObject *)0x0,false);
    pFVar3->_padding_ = (longlong)&___7FSlateColorBrush__6B_;
    pFVar4 = pFVar3;
  }
  pFVar2 = ::FName::FName(&local_res18,"Brushes.ForegroundHover");
  FSlateStyleSet::Set<FSlateColorBrush>((FSlateStyleSet *)pFVar1,*pFVar2,(FSlateColorBrush *)pFVar4)
  ;
  pFVar1 = param_1->Object;
  pFVar3 = ::operator_new(0xb0);
  pFVar4 = pFVar5;
  if (pFVar3 != (FSlateBrush *)0x0) {
    local_res10 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
    local_res8.ComparisonIndex.Value = 0;
    local_res8.Number = 0;
    local_48.Left = 0.0;
    local_48.Top = 0.0;
    local_48.Right = 0.0;
    local_48.Bottom = 0.0;
    FSlateBrush::FSlateBrush
              (pFVar3,Image,(FName)0x0,&local_48,NoTile,NoImage,
               (FDeprecateVector2DParameter *)&local_res10._s_0,&FStyleColors::ForegroundInverted,
               (UObject *)0x0,false);
    pFVar3->_padding_ = (longlong)&___7FSlateColorBrush__6B_;
    pFVar4 = pFVar3;
  }
  pFVar2 = ::FName::FName(&local_res18,"Brushes.ForegroundInverted");
  FSlateStyleSet::Set<FSlateColorBrush>((FSlateStyleSet *)pFVar1,*pFVar2,(FSlateColorBrush *)pFVar4)
  ;
  pFVar1 = param_1->Object;
  pFVar3 = ::operator_new(0xb0);
  pFVar4 = pFVar5;
  if (pFVar3 != (FSlateBrush *)0x0) {
    local_res10 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
    local_res8.ComparisonIndex.Value = 0;
    local_res8.Number = 0;
    local_48.Left = 0.0;
    local_48.Top = 0.0;
    local_48.Right = 0.0;
    local_48.Bottom = 0.0;
    FSlateBrush::FSlateBrush
              (pFVar3,Image,(FName)0x0,&local_48,NoTile,NoImage,
               (FDeprecateVector2DParameter *)&local_res10._s_0,&FStyleColors::ForegroundHeader,
               (UObject *)0x0,false);
    pFVar3->_padding_ = (longlong)&___7FSlateColorBrush__6B_;
    pFVar4 = pFVar3;
  }
  pFVar2 = ::FName::FName(&local_res18,"Brushes.ForegroundHeader");
  FSlateStyleSet::Set<FSlateColorBrush>((FSlateStyleSet *)pFVar1,*pFVar2,(FSlateColorBrush *)pFVar4)
  ;
  pFVar1 = param_1->Object;
  pFVar3 = ::operator_new(0xb0);
  pFVar4 = pFVar5;
  if (pFVar3 != (FSlateBrush *)0x0) {
    local_res10 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
    local_res8.ComparisonIndex.Value = 0;
    local_res8.Number = 0;
    local_48.Left = 0.0;
    local_48.Top = 0.0;
    local_48.Right = 0.0;
    local_48.Bottom = 0.0;
    FSlateBrush::FSlateBrush
              (pFVar3,Image,(FName)0x0,&local_48,NoTile,NoImage,
               (FDeprecateVector2DParameter *)&local_res10._s_0,&FStyleColors::Select,(UObject *)0x0
               ,false);
    pFVar3->_padding_ = (longlong)&___7FSlateColorBrush__6B_;
    pFVar4 = pFVar3;
  }
  pFVar2 = ::FName::FName(&local_res18,"Brushes.Select");
  FSlateStyleSet::Set<FSlateColorBrush>((FSlateStyleSet *)pFVar1,*pFVar2,(FSlateColorBrush *)pFVar4)
  ;
  pFVar1 = param_1->Object;
  pFVar3 = ::operator_new(0xb0);
  pFVar4 = pFVar5;
  if (pFVar3 != (FSlateBrush *)0x0) {
    local_res10 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
    local_res8.ComparisonIndex.Value = 0;
    local_res8.Number = 0;
    local_48.Left = 0.0;
    local_48.Top = 0.0;
    local_48.Right = 0.0;
    local_48.Bottom = 0.0;
    FSlateBrush::FSlateBrush
              (pFVar3,Image,(FName)0x0,&local_48,NoTile,NoImage,
               (FDeprecateVector2DParameter *)&local_res10._s_0,&FStyleColors::SelectInactive,
               (UObject *)0x0,false);
    pFVar3->_padding_ = (longlong)&___7FSlateColorBrush__6B_;
    pFVar4 = pFVar3;
  }
  pFVar2 = ::FName::FName(&local_res18,"Brushes.SelectInactive");
  FSlateStyleSet::Set<FSlateColorBrush>((FSlateStyleSet *)pFVar1,*pFVar2,(FSlateColorBrush *)pFVar4)
  ;
  pFVar1 = param_1->Object;
  pFVar3 = ::operator_new(0xb0);
  pFVar4 = pFVar5;
  if (pFVar3 != (FSlateBrush *)0x0) {
    local_res10 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
    local_res8.ComparisonIndex.Value = 0;
    local_res8.Number = 0;
    local_48.Left = 0.0;
    local_48.Top = 0.0;
    local_48.Right = 0.0;
    local_48.Bottom = 0.0;
    FSlateBrush::FSlateBrush
              (pFVar3,Image,(FName)0x0,&local_48,NoTile,NoImage,
               (FDeprecateVector2DParameter *)&local_res10._s_0,&FStyleColors::SelectParent,
               (UObject *)0x0,false);
    pFVar3->_padding_ = (longlong)&___7FSlateColorBrush__6B_;
    pFVar4 = pFVar3;
  }
  pFVar2 = ::FName::FName(&local_res18,"Brushes.SelectParent");
  FSlateStyleSet::Set<FSlateColorBrush>((FSlateStyleSet *)pFVar1,*pFVar2,(FSlateColorBrush *)pFVar4)
  ;
  pFVar1 = param_1->Object;
  pFVar3 = ::operator_new(0xb0);
  pFVar4 = pFVar5;
  if (pFVar3 != (FSlateBrush *)0x0) {
    local_res10 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
    local_res8.ComparisonIndex.Value = 0;
    local_res8.Number = 0;
    local_48.Left = 0.0;
    local_48.Top = 0.0;
    local_48.Right = 0.0;
    local_48.Bottom = 0.0;
    FSlateBrush::FSlateBrush
              (pFVar3,Image,(FName)0x0,&local_48,NoTile,NoImage,
               (FDeprecateVector2DParameter *)&local_res10._s_0,&FStyleColors::SelectHover,
               (UObject *)0x0,false);
    pFVar3->_padding_ = (longlong)&___7FSlateColorBrush__6B_;
    pFVar4 = pFVar3;
  }
  pFVar2 = ::FName::FName(&local_res18,"Brushes.SelectHover");
  FSlateStyleSet::Set<FSlateColorBrush>((FSlateStyleSet *)pFVar1,*pFVar2,(FSlateColorBrush *)pFVar4)
  ;
  pFVar1 = param_1->Object;
  pFVar3 = ::operator_new(0xb0);
  pFVar4 = pFVar5;
  if (pFVar3 != (FSlateBrush *)0x0) {
    local_res10 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
    local_res8.ComparisonIndex.Value = 0;
    local_res8.Number = 0;
    local_48.Left = 0.0;
    local_48.Top = 0.0;
    local_48.Right = 0.0;
    local_48.Bottom = 0.0;
    FSlateBrush::FSlateBrush
              (pFVar3,Image,(FName)0x0,&local_48,NoTile,NoImage,
               (FDeprecateVector2DParameter *)&local_res10._s_0,&FStyleColors::Primary,
               (UObject *)0x0,false);
    pFVar3->_padding_ = (longlong)&___7FSlateColorBrush__6B_;
    pFVar4 = pFVar3;
  }
  pFVar2 = ::FName::FName(&local_res18,"Brushes.Primary");
  FSlateStyleSet::Set<FSlateColorBrush>((FSlateStyleSet *)pFVar1,*pFVar2,(FSlateColorBrush *)pFVar4)
  ;
  pFVar1 = param_1->Object;
  pFVar3 = ::operator_new(0xb0);
  pFVar4 = pFVar5;
  if (pFVar3 != (FSlateBrush *)0x0) {
    local_res10 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
    local_res8.ComparisonIndex.Value = 0;
    local_res8.Number = 0;
    local_48.Left = 0.0;
    local_48.Top = 0.0;
    local_48.Right = 0.0;
    local_48.Bottom = 0.0;
    FSlateBrush::FSlateBrush
              (pFVar3,Image,(FName)0x0,&local_48,NoTile,NoImage,
               (FDeprecateVector2DParameter *)&local_res10._s_0,&FStyleColors::PrimaryHover,
               (UObject *)0x0,false);
    pFVar3->_padding_ = (longlong)&___7FSlateColorBrush__6B_;
    pFVar4 = pFVar3;
  }
  pFVar2 = ::FName::FName(&local_res18,"Brushes.PrimaryHover");
  FSlateStyleSet::Set<FSlateColorBrush>((FSlateStyleSet *)pFVar1,*pFVar2,(FSlateColorBrush *)pFVar4)
  ;
  pFVar1 = param_1->Object;
  pFVar3 = ::operator_new(0xb0);
  pFVar4 = pFVar5;
  if (pFVar3 != (FSlateBrush *)0x0) {
    local_res10 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
    local_res8.ComparisonIndex.Value = 0;
    local_res8.Number = 0;
    local_48.Left = 0.0;
    local_48.Top = 0.0;
    local_48.Right = 0.0;
    local_48.Bottom = 0.0;
    FSlateBrush::FSlateBrush
              (pFVar3,Image,(FName)0x0,&local_48,NoTile,NoImage,
               (FDeprecateVector2DParameter *)&local_res10._s_0,&FStyleColors::PrimaryPress,
               (UObject *)0x0,false);
    pFVar3->_padding_ = (longlong)&___7FSlateColorBrush__6B_;
    pFVar4 = pFVar3;
  }
  pFVar2 = ::FName::FName(&local_res18,"Brushes.PrimaryPress");
  FSlateStyleSet::Set<FSlateColorBrush>((FSlateStyleSet *)pFVar1,*pFVar2,(FSlateColorBrush *)pFVar4)
  ;
  pFVar1 = param_1->Object;
  pFVar3 = ::operator_new(0xb0);
  pFVar4 = pFVar5;
  if (pFVar3 != (FSlateBrush *)0x0) {
    local_res10 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
    local_res8.ComparisonIndex.Value = 0;
    local_res8.Number = 0;
    local_48.Left = 0.0;
    local_48.Top = 0.0;
    local_48.Right = 0.0;
    local_48.Bottom = 0.0;
    FSlateBrush::FSlateBrush
              (pFVar3,Image,(FName)0x0,&local_48,NoTile,NoImage,
               (FDeprecateVector2DParameter *)&local_res10._s_0,&FStyleColors::Secondary,
               (UObject *)0x0,false);
    pFVar3->_padding_ = (longlong)&___7FSlateColorBrush__6B_;
    pFVar4 = pFVar3;
  }
  pFVar2 = ::FName::FName(&local_res18,"Brushes.Secondary");
  FSlateStyleSet::Set<FSlateColorBrush>((FSlateStyleSet *)pFVar1,*pFVar2,(FSlateColorBrush *)pFVar4)
  ;
  pFVar1 = param_1->Object;
  pFVar3 = ::operator_new(0xb0);
  pFVar4 = pFVar5;
  if (pFVar3 != (FSlateBrush *)0x0) {
    local_res10 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
    local_res8.ComparisonIndex.Value = 0;
    local_res8.Number = 0;
    local_48.Left = 0.0;
    local_48.Top = 0.0;
    local_48.Right = 0.0;
    local_48.Bottom = 0.0;
    FSlateBrush::FSlateBrush
              (pFVar3,Image,(FName)0x0,&local_48,NoTile,NoImage,
               (FDeprecateVector2DParameter *)&local_res10._s_0,&FStyleColors::AccentBlue,
               (UObject *)0x0,false);
    pFVar3->_padding_ = (longlong)&___7FSlateColorBrush__6B_;
    pFVar4 = pFVar3;
  }
  pFVar2 = ::FName::FName(&local_res18,"Brushes.AccentBlue");
  FSlateStyleSet::Set<FSlateColorBrush>((FSlateStyleSet *)pFVar1,*pFVar2,(FSlateColorBrush *)pFVar4)
  ;
  pFVar1 = param_1->Object;
  pFVar3 = ::operator_new(0xb0);
  pFVar4 = pFVar5;
  if (pFVar3 != (FSlateBrush *)0x0) {
    local_res10 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
    local_res8.ComparisonIndex.Value = 0;
    local_res8.Number = 0;
    local_48.Left = 0.0;
    local_48.Top = 0.0;
    local_48.Right = 0.0;
    local_48.Bottom = 0.0;
    FSlateBrush::FSlateBrush
              (pFVar3,Image,(FName)0x0,&local_48,NoTile,NoImage,
               (FDeprecateVector2DParameter *)&local_res10._s_0,&FStyleColors::AccentPurple,
               (UObject *)0x0,false);
    pFVar3->_padding_ = (longlong)&___7FSlateColorBrush__6B_;
    pFVar4 = pFVar3;
  }
  pFVar2 = ::FName::FName(&local_res18,"Brushes.AccentPurple");
  FSlateStyleSet::Set<FSlateColorBrush>((FSlateStyleSet *)pFVar1,*pFVar2,(FSlateColorBrush *)pFVar4)
  ;
  pFVar1 = param_1->Object;
  pFVar3 = ::operator_new(0xb0);
  pFVar4 = pFVar5;
  if (pFVar3 != (FSlateBrush *)0x0) {
    local_res10 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
    local_res8.ComparisonIndex.Value = 0;
    local_res8.Number = 0;
    local_48.Left = 0.0;
    local_48.Top = 0.0;
    local_48.Right = 0.0;
    local_48.Bottom = 0.0;
    FSlateBrush::FSlateBrush
              (pFVar3,Image,(FName)0x0,&local_48,NoTile,NoImage,
               (FDeprecateVector2DParameter *)&local_res10._s_0,&FStyleColors::AccentPink,
               (UObject *)0x0,false);
    pFVar3->_padding_ = (longlong)&___7FSlateColorBrush__6B_;
    pFVar4 = pFVar3;
  }
  pFVar2 = ::FName::FName(&local_res18,"Brushes.AccentPink");
  FSlateStyleSet::Set<FSlateColorBrush>((FSlateStyleSet *)pFVar1,*pFVar2,(FSlateColorBrush *)pFVar4)
  ;
  pFVar1 = param_1->Object;
  pFVar3 = ::operator_new(0xb0);
  pFVar4 = pFVar5;
  if (pFVar3 != (FSlateBrush *)0x0) {
    local_res10 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
    local_res8.ComparisonIndex.Value = 0;
    local_res8.Number = 0;
    local_48.Left = 0.0;
    local_48.Top = 0.0;
    local_48.Right = 0.0;
    local_48.Bottom = 0.0;
    FSlateBrush::FSlateBrush
              (pFVar3,Image,(FName)0x0,&local_48,NoTile,NoImage,
               (FDeprecateVector2DParameter *)&local_res10._s_0,&FStyleColors::AccentRed,
               (UObject *)0x0,false);
    pFVar3->_padding_ = (longlong)&___7FSlateColorBrush__6B_;
    pFVar4 = pFVar3;
  }
  pFVar2 = ::FName::FName(&local_res18,"Brushes.AccentRed");
  FSlateStyleSet::Set<FSlateColorBrush>((FSlateStyleSet *)pFVar1,*pFVar2,(FSlateColorBrush *)pFVar4)
  ;
  pFVar1 = param_1->Object;
  pFVar3 = ::operator_new(0xb0);
  pFVar4 = pFVar5;
  if (pFVar3 != (FSlateBrush *)0x0) {
    local_res10 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
    local_res8.ComparisonIndex.Value = 0;
    local_res8.Number = 0;
    local_48.Left = 0.0;
    local_48.Top = 0.0;
    local_48.Right = 0.0;
    local_48.Bottom = 0.0;
    FSlateBrush::FSlateBrush
              (pFVar3,Image,(FName)0x0,&local_48,NoTile,NoImage,
               (FDeprecateVector2DParameter *)&local_res10._s_0,&FStyleColors::AccentOrange,
               (UObject *)0x0,false);
    pFVar3->_padding_ = (longlong)&___7FSlateColorBrush__6B_;
    pFVar4 = pFVar3;
  }
  pFVar2 = ::FName::FName(&local_res18,"Brushes.AccentOrange");
  FSlateStyleSet::Set<FSlateColorBrush>((FSlateStyleSet *)pFVar1,*pFVar2,(FSlateColorBrush *)pFVar4)
  ;
  pFVar1 = param_1->Object;
  pFVar3 = ::operator_new(0xb0);
  pFVar4 = pFVar5;
  if (pFVar3 != (FSlateBrush *)0x0) {
    local_res10 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
    local_res8.ComparisonIndex.Value = 0;
    local_res8.Number = 0;
    local_48.Left = 0.0;
    local_48.Top = 0.0;
    local_48.Right = 0.0;
    local_48.Bottom = 0.0;
    FSlateBrush::FSlateBrush
              (pFVar3,Image,(FName)0x0,&local_48,NoTile,NoImage,
               (FDeprecateVector2DParameter *)&local_res10._s_0,&FStyleColors::AccentYellow,
               (UObject *)0x0,false);
    pFVar3->_padding_ = (longlong)&___7FSlateColorBrush__6B_;
    pFVar4 = pFVar3;
  }
  pFVar2 = ::FName::FName(&local_res18,"Brushes.AccentYellow");
  FSlateStyleSet::Set<FSlateColorBrush>((FSlateStyleSet *)pFVar1,*pFVar2,(FSlateColorBrush *)pFVar4)
  ;
  pFVar1 = param_1->Object;
  pFVar3 = ::operator_new(0xb0);
  pFVar4 = pFVar5;
  if (pFVar3 != (FSlateBrush *)0x0) {
    local_res10 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
    local_res8.ComparisonIndex.Value = 0;
    local_res8.Number = 0;
    local_48.Left = 0.0;
    local_48.Top = 0.0;
    local_48.Right = 0.0;
    local_48.Bottom = 0.0;
    FSlateBrush::FSlateBrush
              (pFVar3,Image,(FName)0x0,&local_48,NoTile,NoImage,
               (FDeprecateVector2DParameter *)&local_res10._s_0,&FStyleColors::AccentGreen,
               (UObject *)0x0,false);
    pFVar3->_padding_ = (longlong)&___7FSlateColorBrush__6B_;
    pFVar4 = pFVar3;
  }
  pFVar2 = ::FName::FName(&local_res18,"Brushes.AccentGreen");
  FSlateStyleSet::Set<FSlateColorBrush>((FSlateStyleSet *)pFVar1,*pFVar2,(FSlateColorBrush *)pFVar4)
  ;
  pFVar1 = param_1->Object;
  pFVar3 = ::operator_new(0xb0);
  pFVar4 = pFVar5;
  if (pFVar3 != (FSlateBrush *)0x0) {
    local_res10 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
    local_res8.ComparisonIndex.Value = 0;
    local_res8.Number = 0;
    local_48.Left = 0.0;
    local_48.Top = 0.0;
    local_48.Right = 0.0;
    local_48.Bottom = 0.0;
    FSlateBrush::FSlateBrush
              (pFVar3,Image,(FName)0x0,&local_48,NoTile,NoImage,
               (FDeprecateVector2DParameter *)&local_res10._s_0,&FStyleColors::AccentBrown,
               (UObject *)0x0,false);
    pFVar3->_padding_ = (longlong)&___7FSlateColorBrush__6B_;
    pFVar4 = pFVar3;
  }
  pFVar2 = ::FName::FName(&local_res18,"Brushes.AccentBrown");
  FSlateStyleSet::Set<FSlateColorBrush>((FSlateStyleSet *)pFVar1,*pFVar2,(FSlateColorBrush *)pFVar4)
  ;
  pFVar1 = param_1->Object;
  pFVar3 = ::operator_new(0xb0);
  pFVar4 = pFVar5;
  if (pFVar3 != (FSlateBrush *)0x0) {
    local_res10 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
    local_res8.ComparisonIndex.Value = 0;
    local_res8.Number = 0;
    local_48.Left = 0.0;
    local_48.Top = 0.0;
    local_48.Right = 0.0;
    local_48.Bottom = 0.0;
    FSlateBrush::FSlateBrush
              (pFVar3,Image,(FName)0x0,&local_48,NoTile,NoImage,
               (FDeprecateVector2DParameter *)&local_res10._s_0,&FStyleColors::AccentBlack,
               (UObject *)0x0,false);
    pFVar3->_padding_ = (longlong)&___7FSlateColorBrush__6B_;
    pFVar4 = pFVar3;
  }
  pFVar2 = ::FName::FName(&local_res18,"Brushes.AccentBlack");
  FSlateStyleSet::Set<FSlateColorBrush>((FSlateStyleSet *)pFVar1,*pFVar2,(FSlateColorBrush *)pFVar4)
  ;
  pFVar1 = param_1->Object;
  pFVar3 = ::operator_new(0xb0);
  pFVar4 = pFVar5;
  if (pFVar3 != (FSlateBrush *)0x0) {
    local_res10 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
    local_res8.ComparisonIndex.Value = 0;
    local_res8.Number = 0;
    local_48.Left = 0.0;
    local_48.Top = 0.0;
    local_48.Right = 0.0;
    local_48.Bottom = 0.0;
    FSlateBrush::FSlateBrush
              (pFVar3,Image,(FName)0x0,&local_48,NoTile,NoImage,
               (FDeprecateVector2DParameter *)&local_res10._s_0,&FStyleColors::AccentGray,
               (UObject *)0x0,false);
    pFVar3->_padding_ = (longlong)&___7FSlateColorBrush__6B_;
    pFVar4 = pFVar3;
  }
  pFVar2 = ::FName::FName(&local_res18,"Brushes.AccentGray");
  FSlateStyleSet::Set<FSlateColorBrush>((FSlateStyleSet *)pFVar1,*pFVar2,(FSlateColorBrush *)pFVar4)
  ;
  pFVar1 = param_1->Object;
  pFVar3 = ::operator_new(0xb0);
  pFVar4 = pFVar5;
  if (pFVar3 != (FSlateBrush *)0x0) {
    local_res10 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
    local_res8.ComparisonIndex.Value = 0;
    local_res8.Number = 0;
    local_48.Left = 0.0;
    local_48.Top = 0.0;
    local_48.Right = 0.0;
    local_48.Bottom = 0.0;
    FSlateBrush::FSlateBrush
              (pFVar3,Image,(FName)0x0,&local_48,NoTile,NoImage,
               (FDeprecateVector2DParameter *)&local_res10._s_0,&FStyleColors::AccentWhite,
               (UObject *)0x0,false);
    pFVar3->_padding_ = (longlong)&___7FSlateColorBrush__6B_;
    pFVar4 = pFVar3;
  }
  pFVar2 = ::FName::FName(&local_res18,"Brushes.AccentWhite");
  FSlateStyleSet::Set<FSlateColorBrush>((FSlateStyleSet *)pFVar1,*pFVar2,(FSlateColorBrush *)pFVar4)
  ;
  pFVar1 = param_1->Object;
  pFVar3 = ::operator_new(0xb0);
  pFVar4 = pFVar5;
  if (pFVar3 != (FSlateBrush *)0x0) {
    local_res10 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
    local_res8.ComparisonIndex.Value = 0;
    local_res8.Number = 0;
    local_48.Left = 0.0;
    local_48.Top = 0.0;
    local_48.Right = 0.0;
    local_48.Bottom = 0.0;
    FSlateBrush::FSlateBrush
              (pFVar3,Image,(FName)0x0,&local_48,NoTile,NoImage,
               (FDeprecateVector2DParameter *)&local_res10._s_0,&FStyleColors::AccentFolder,
               (UObject *)0x0,false);
    pFVar3->_padding_ = (longlong)&___7FSlateColorBrush__6B_;
    pFVar4 = pFVar3;
  }
  pFVar2 = ::FName::FName(&local_res18,"Brushes.AccentFolder");
  FSlateStyleSet::Set<FSlateColorBrush>((FSlateStyleSet *)pFVar1,*pFVar2,(FSlateColorBrush *)pFVar4)
  ;
  pFVar1 = param_1->Object;
  pFVar3 = ::operator_new(0xb0);
  pFVar4 = pFVar5;
  if (pFVar3 != (FSlateBrush *)0x0) {
    local_res10 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
    local_res8.ComparisonIndex.Value = 0;
    local_res8.Number = 0;
    local_48.Left = 0.0;
    local_48.Top = 0.0;
    local_48.Right = 0.0;
    local_48.Bottom = 0.0;
    FSlateBrush::FSlateBrush
              (pFVar3,Image,(FName)0x0,&local_48,NoTile,NoImage,
               (FDeprecateVector2DParameter *)&local_res10._s_0,&FStyleColors::Warning,
               (UObject *)0x0,false);
    pFVar3->_padding_ = (longlong)&___7FSlateColorBrush__6B_;
    pFVar4 = pFVar3;
  }
  pFVar2 = ::FName::FName(&local_res18,"Brushes.Warning");
  FSlateStyleSet::Set<FSlateColorBrush>((FSlateStyleSet *)pFVar1,*pFVar2,(FSlateColorBrush *)pFVar4)
  ;
  pFVar1 = param_1->Object;
  pFVar4 = ::operator_new(0xb0);
  if (pFVar4 != (FSlateBrush *)0x0) {
    local_res10 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
    local_res8.ComparisonIndex.Value = 0;
    local_res8.Number = 0;
    local_48.Left = 0.0;
    local_48.Top = 0.0;
    local_48.Right = 0.0;
    local_48.Bottom = 0.0;
    FSlateBrush::FSlateBrush
              (pFVar4,Image,(FName)0x0,&local_48,NoTile,NoImage,
               (FDeprecateVector2DParameter *)&local_res10._s_0,&FStyleColors::Error,(UObject *)0x0,
               false);
    pFVar4->_padding_ = (longlong)&___7FSlateColorBrush__6B_;
    pFVar5 = pFVar4;
  }
  pFVar2 = ::FName::FName(&local_res18,"Brushes.Error");
  FSlateStyleSet::Set<FSlateColorBrush>((FSlateStyleSet *)pFVar1,*pFVar2,(FSlateColorBrush *)pFVar5)
  ;
  return;
}

// SetupComboButtonStyles @ 14259a4e0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
FStarshipCoreStyle::SetupComboButtonStyles(TSharedRef<FStarshipCoreStyle::FStyle,1> *param_1)

{
  FStyle *pFVar1;
  float fVar2;
  float fVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  EStyleColor EVar8;
  undefined2 uVar9;
  FButtonStyle *pFVar10;
  FSlateBrush *pFVar11;
  FComboButtonStyle *pFVar12;
  FString *pFVar13;
  FName *pFVar14;
  FTableRowStyle *pFVar15;
  FSlateImageBrush *pFVar16;
  FSlateImageBrush *pFVar17;
  FSlateImageBrush *pFVar18;
  ulonglong uVar19;
  TVector2<float>_u_0 local_res8;
  TVector2<float>_u_0 local_res10;
  FLinearColor_u_0 local_5d48;
  void *local_5d38 [2];
  FLinearColor_u_0 local_5d28;
  FSlateBrush local_5d18;
  FSlateBrush local_5c68;
  FSlateBrush local_5bb8;
  FSlateBrush local_5b08;
  FSlateBrush local_5a58;
  undefined1 local_59a8 [16];
  undefined1 local_5998 [160];
  FSharedReferencer<1> local_58f8;
  undefined **local_58e8;
  FSharedReferencer<1> local_5848;
  undefined **local_5838;
  FSharedReferencer<1> local_5798;
  undefined **local_5788;
  FSharedReferencer<1> local_56e8;
  undefined1 local_5608 [16];
  undefined1 local_55f8 [160];
  FSharedReferencer<1> local_5558;
  FLinearColor_u_0 local_5550;
  undefined1 local_5540 [8];
  undefined1 auStack_5538 [16];
  undefined1 local_5528 [160];
  FSharedReferencer<1> local_5488;
  FName FStack_5480;
  FMargin local_5478;
  FMargin local_5468;
  TEnumAsByte<EVerticalAlignment> local_5458;
  undefined7 uStack_5457;
  float fStack_5450;
  float fStack_544c;
  TEnumAsByte<EVerticalAlignment> local_5448;
  TObjectPtr<UObject>_u_0 local_5438;
  FName local_5430;
  FWeakObjectPtr local_5428;
  TObjectPtr<UObject>_u_0 local_5420;
  FName local_5418;
  FWeakObjectPtr local_5410;
  FMargin local_5408;
  FMargin local_53f8;
  FSlateBrush local_53e8;
  undefined1 local_5338 [16];
  undefined1 local_5328 [928];
  FSlateBrush local_4f88;
  FDeprecateSlateVector2D local_4ed8;
  FLinearColor_u_0 local_4ed0;
  FSlateBrush local_4eb8;
  FMargin local_4e08;
  FMargin local_4df8;
  FMargin local_4de8;
  TEnumAsByte<EVerticalAlignment> local_4dd8;
  TObjectPtr<UObject>_u_0 local_4dc8;
  FName local_4dc0;
  FWeakObjectPtr local_4db8;
  TObjectPtr<UObject>_u_0 local_4db0;
  FName local_4da8;
  FWeakObjectPtr local_4da0;
  FMargin local_4d98;
  FMargin local_4d88;
  undefined1 local_4d78 [16];
  undefined1 local_4d68 [928];
  FSlateBrush local_49c8;
  FDeprecateSlateVector2D local_4918;
  FLinearColor_u_0 local_4910;
  FSlateBrush local_48f8;
  TReferenceControllerBase<1> *local_4848;
  FName FStack_4840;
  FMargin local_4838;
  FMargin local_4828;
  TEnumAsByte<EVerticalAlignment> local_4818;
  TObjectPtr<UObject>_u_0 local_4808;
  FName local_4800;
  FWeakObjectPtr local_47f8;
  TObjectPtr<UObject>_u_0 local_47f0;
  FName local_47e8;
  FWeakObjectPtr local_47e0;
  FMargin local_47d8;
  FMargin local_47c8;
  undefined **local_47b8 [20];
  TReferenceControllerBase<1> *local_4718;
  undefined **local_4708 [20];
  TReferenceControllerBase<1> *local_4668;
  undefined **local_4658 [20];
  TReferenceControllerBase<1> *local_45b8;
  undefined **local_45a8 [20];
  TReferenceControllerBase<1> *local_4508;
  undefined1 local_44f8 [1320];
  FName FStack_3fd0;
  FMargin local_3fc8;
  FMargin local_3fb8;
  TEnumAsByte<EVerticalAlignment> local_3fa8;
  FComboButtonStyle local_3f98;
  FComboBoxStyle local_3a38;
  FComboButtonStyle local_3478;
  FComboButtonStyle local_2f18;
  FButtonStyle local_29b8;
  FButtonStyle local_2628;
  FComboBoxStyle local_2298;
  FComboBoxStyle local_1cd8;
  FTableRowStyle local_1718;
  FTableRowStyle local_bc8;
  
  pFVar18 = (FSlateImageBrush *)0x0;
  local_res8._s_0 = local_res8._s_0 & 0xffffffff00000000;
  pFVar10 = FButtonStyle::FButtonStyle((FButtonStyle *)local_59a8);
  fVar3 = __real_40800000;
  fVar2 = __real_3f800000;
  local_res8 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  pFVar11 = (FSlateBrush *)
            FSlateRoundedBoxBrush::FSlateRoundedBoxBrush<FSlateColor,FSlateColor,float>
                      ((FSlateRoundedBoxBrush *)&local_53e8,&FStyleColors::Input,__real_40800000,
                       &FStyleColors::InputOutline,__real_3f800000,
                       (FDeprecateVector2DParameter *)&local_res8._s_0);
  FSlateBrush::operator=(&pFVar10->Normal,pFVar11);
  local_res8 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  pFVar11 = (FSlateBrush *)
            FSlateRoundedBoxBrush::FSlateRoundedBoxBrush<FSlateColor,FSlateColor,float>
                      ((FSlateRoundedBoxBrush *)&local_5bb8,&FStyleColors::Input,fVar3,
                       &FStyleColors::Hover,fVar2,(FDeprecateVector2DParameter *)&local_res8._s_0);
  FSlateBrush::operator=(&pFVar10->Hovered,pFVar11);
  local_res8 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  pFVar11 = (FSlateBrush *)
            FSlateRoundedBoxBrush::FSlateRoundedBoxBrush<FSlateColor,FSlateColor,float>
                      ((FSlateRoundedBoxBrush *)&local_5d18,&FStyleColors::Input,fVar3,
                       &FStyleColors::Hover,fVar2,(FDeprecateVector2DParameter *)&local_res8._s_0);
  FSlateBrush::operator=(&pFVar10->Pressed,pFVar11);
  local_res8 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  pFVar11 = (FSlateBrush *)
            FSlateRoundedBoxBrush::FSlateRoundedBoxBrush<FSlateColor,FSlateColor,float>
                      ((FSlateRoundedBoxBrush *)&local_5c68,&FStyleColors::Dropdown,fVar3,
                       &FStyleColors::DropdownOutline,fVar2,
                       (FDeprecateVector2DParameter *)&local_res8._s_0);
  FSlateBrush::operator=(&pFVar10->Disabled,pFVar11);
  (pFVar10->NormalForeground).SpecifiedColor.field0_0x0._s_0 =
       (FLinearColor_u_0_s_0)FStyleColors::Foreground.SpecifiedColor.field0_0x0;
  EVar8 = FStyleColors::Foreground.ColorTableId;
  uVar9 = FStyleColors::Foreground._18_2_;
  (pFVar10->NormalForeground).ColorUseRule = FStyleColors::Foreground.ColorUseRule;
  (pFVar10->NormalForeground).ColorTableId = EVar8;
  *(undefined2 *)&(pFVar10->NormalForeground).field_0x12 = uVar9;
  (pFVar10->HoveredForeground).SpecifiedColor.field0_0x0._s_0 =
       (FLinearColor_u_0_s_0)FStyleColors::ForegroundHover.SpecifiedColor.field0_0x0;
  EVar8 = FStyleColors::ForegroundHover.ColorTableId;
  uVar9 = FStyleColors::ForegroundHover._18_2_;
  (pFVar10->HoveredForeground).ColorUseRule = FStyleColors::ForegroundHover.ColorUseRule;
  (pFVar10->HoveredForeground).ColorTableId = EVar8;
  *(undefined2 *)&(pFVar10->HoveredForeground).field_0x12 = uVar9;
  (pFVar10->PressedForeground).SpecifiedColor.field0_0x0._s_0 =
       (FLinearColor_u_0_s_0)FStyleColors::ForegroundHover.SpecifiedColor.field0_0x0;
  EVar8 = FStyleColors::ForegroundHover.ColorTableId;
  uVar9 = FStyleColors::ForegroundHover._18_2_;
  (pFVar10->PressedForeground).ColorUseRule = FStyleColors::ForegroundHover.ColorUseRule;
  (pFVar10->PressedForeground).ColorTableId = EVar8;
  *(undefined2 *)&(pFVar10->PressedForeground).field_0x12 = uVar9;
  (pFVar10->DisabledForeground).SpecifiedColor.field0_0x0._s_0 =
       (FLinearColor_u_0_s_0)FStyleColors::ForegroundHover.SpecifiedColor.field0_0x0;
  EVar8 = FStyleColors::ForegroundHover.ColorTableId;
  uVar9 = FStyleColors::ForegroundHover._18_2_;
  (pFVar10->DisabledForeground).ColorUseRule = FStyleColors::ForegroundHover.ColorUseRule;
  (pFVar10->DisabledForeground).ColorTableId = EVar8;
  *(undefined2 *)&(pFVar10->DisabledForeground).field_0x12 = uVar9;
  pFVar10->NormalPadding = CoreStyleConstants::ComboButtonMargin;
  pFVar10->PressedPadding = CoreStyleConstants::PressedComboButtonMargin;
  FButtonStyle::FButtonStyle(&local_29b8,pFVar10);
  local_5c68._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_5c68.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  local_5d18._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_5d18.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  local_5bb8._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_5bb8.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  local_53e8._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_53e8.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  local_59a8._0_8_ = &___7FButtonStyle__6B_;
  local_5788 = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_56e8.ReferenceController);
  local_5838 = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_5798.ReferenceController);
  local_58e8 = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_5848.ReferenceController);
  local_5998._0_8_ = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_58f8.ReferenceController);
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)local_59a8);
  pFVar10 = FButtonStyle::FButtonStyle((FButtonStyle *)local_59a8,&local_29b8);
  local_res8._s_0 = (TVector2<float>_u_0_s_0)CoreStyleConstants::Icon32x32;
  pFVar11 = (FSlateBrush *)
            FSlateRoundedBoxBrush::FSlateRoundedBoxBrush<FSlateColor,FSlateColor,float>
                      ((FSlateRoundedBoxBrush *)&local_5bb8,&FStyleColors::Input,fVar3,
                       &FStyleColors::InputOutline,fVar2,
                       (FDeprecateVector2DParameter *)&local_res8._s_0);
  FSlateBrush::operator=(&pFVar10->Normal,pFVar11);
  local_res8._s_0 = (TVector2<float>_u_0_s_0)CoreStyleConstants::Icon32x32;
  pFVar11 = (FSlateBrush *)
            FSlateRoundedBoxBrush::FSlateRoundedBoxBrush<FSlateColor,FSlateColor,float>
                      ((FSlateRoundedBoxBrush *)&local_5d18,&FStyleColors::Input,fVar3,
                       &FStyleColors::Hover,fVar2,(FDeprecateVector2DParameter *)&local_res8._s_0);
  FSlateBrush::operator=(&pFVar10->Hovered,pFVar11);
  local_res8._s_0 = (TVector2<float>_u_0_s_0)CoreStyleConstants::Icon32x32;
  pFVar11 = (FSlateBrush *)
            FSlateRoundedBoxBrush::FSlateRoundedBoxBrush<FSlateColor,FSlateColor,float>
                      ((FSlateRoundedBoxBrush *)&local_5c68,&FStyleColors::Input,fVar3,
                       &FStyleColors::Hover,fVar2,(FDeprecateVector2DParameter *)&local_res8._s_0);
  FSlateBrush::operator=(&pFVar10->Pressed,pFVar11);
  FButtonStyle::FButtonStyle(&local_2628,pFVar10);
  local_5c68._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_5c68.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  local_5d18._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_5d18.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  local_5bb8._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_5bb8.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  local_59a8._0_8_ = &___7FButtonStyle__6B_;
  local_5788 = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_56e8.ReferenceController);
  local_5838 = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_5798.ReferenceController);
  local_58e8 = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_5848.ReferenceController);
  local_5998._0_8_ = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_58f8.ReferenceController);
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)local_59a8);
  pFVar12 = FComboButtonStyle::FComboButtonStyle((FComboButtonStyle *)local_59a8);
  FButtonStyle::operator=(&pFVar12->ButtonStyle,&local_29b8);
  (pFVar12->ContentPadding).Left = 0.0;
  (pFVar12->ContentPadding).Top = 0.0;
  (pFVar12->ContentPadding).Right = 0.0;
  uVar6 = _UNK_15076b1f8;
  uVar4 = ___xmm_3f8000003f8000003f8000003f800000;
  (pFVar12->ContentPadding).Bottom = 0.0;
  local_res8 = (TVector2<float>_u_0)0x4180000041800000;
  local_5d28._s_0.R = ___xmm_3f8000003f8000003f8000003f800000;
  local_5d28._s_0.G = _UNK_15076b1f4;
  local_5d28._s_0.B = _UNK_15076b1f8;
  local_5d28._s_0.A = _UNK_15076b1fc;
  pFVar13 = (FString *)
            (**(code **)(param_1->Object->_padding_ + 0xf0))
                      (param_1->Object,local_5d38,"Starship/CoreWidgets/ComboBox/wide-chevron-down",
                       L".svg");
  FSlateImageBrush::FSlateImageBrush
            ((FSlateImageBrush *)&local_5b08,pFVar13,(FDeprecateVector2DParameter *)&local_res8._s_0
             ,(FLinearColor *)&local_5d28._s_0,NoTile,Vector);
  local_5b08._padding_ = (longlong)&___7FSlateVectorImageBrush__6B_;
  FSlateBrush::operator=(&pFVar12->DownArrowImage,&local_5b08);
  local_res8 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  pFVar11 = (FSlateBrush *)
            FSlateRoundedBoxBrush::FSlateRoundedBoxBrush<FSlateColor,FSlateColor,float>
                      ((FSlateRoundedBoxBrush *)&local_5c68,&FStyleColors::Dropdown,0.0,
                       &FStyleColors::DropdownOutline,fVar2,
                       (FDeprecateVector2DParameter *)&local_res8._s_0);
  FSlateBrush::operator=(&pFVar12->MenuBorderBrush,pFVar11);
  (pFVar12->MenuBorderPadding).Left = 0.0;
  (pFVar12->MenuBorderPadding).Top = 0.0;
  (pFVar12->MenuBorderPadding).Right = 0.0;
  (pFVar12->MenuBorderPadding).Bottom = 0.0;
  FComboButtonStyle::FComboButtonStyle((FComboButtonStyle *)local_44f8,pFVar12);
  local_5c68._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_5c68.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  local_5b08._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_5b08.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  if (local_5d38[0] != (void *)0x0) {
    FMemory::Free(local_5d38[0]);
  }
  local_59a8._0_8_ = &___7FComboButtonStyle__6B_;
  auStack_5538._0_8_ = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_5528._144_8_);
  local_5608._0_8_ = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_55f8._144_8_);
  FButtonStyle::~FButtonStyle((FButtonStyle *)local_5998);
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)local_59a8);
  pFVar1 = param_1->Object;
  pFVar14 = ::FName::FName((FName *)&local_res8._s_0,"ComboButton");
  FSlateStyleSet::Set<FComboButtonStyle>
            ((FSlateStyleSet *)pFVar1,*pFVar14,(FComboButtonStyle *)local_44f8);
  local_59a8._0_8_ = &___7FComboButtonStyle__6B_;
  FButtonStyle::FButtonStyle((FButtonStyle *)local_5998,(FButtonStyle *)(local_44f8 + 0x10));
  FSlateBrush::FSlateBrush((FSlateBrush *)local_5608,(FSlateBrush *)(local_44f8 + 0x3a0));
  local_5558.ReferenceController = (TReferenceControllerBase<1> *)local_44f8._1104_8_;
  local_5550._0_8_ = local_44f8._1112_8_;
  local_5550._8_8_ = local_44f8._1120_8_;
  FSlateBrush::FSlateBrush((FSlateBrush *)auStack_5538,(FSlateBrush *)(local_44f8 + 0x470));
  local_5488.ReferenceController = (TReferenceControllerBase<1> *)local_44f8._1312_8_;
  FStack_5480 = FStack_3fd0;
  local_5468.Left = local_3fb8.Left;
  local_5468.Top = local_3fb8.Top;
  local_5468.Right = local_3fb8.Right;
  local_5468.Bottom = local_3fb8.Bottom;
  local_5478.Left = local_3fc8.Left;
  local_5478.Top = local_3fc8.Top;
  local_5478.Right = local_3fc8.Right;
  local_5478.Bottom = local_3fc8.Bottom;
  local_5458.Value = local_3fa8.Value;
  FButtonStyle::operator=((FButtonStyle *)local_5998,&local_2628);
  FComboButtonStyle::FComboButtonStyle(&local_2f18,(FComboButtonStyle *)local_59a8);
  local_59a8._0_8_ = &___7FComboButtonStyle__6B_;
  auStack_5538._0_8_ = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_5528._144_8_);
  local_5608._0_8_ = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_55f8._144_8_);
  FButtonStyle::~FButtonStyle((FButtonStyle *)local_5998);
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)local_59a8);
  pFVar1 = param_1->Object;
  pFVar14 = ::FName::FName((FName *)&local_res8._s_0,"EditorUtilityComboButton");
  FSlateStyleSet::Set<FComboButtonStyle>
            ((FSlateStyleSet *)pFVar1,*pFVar14,(FComboButtonStyle *)local_44f8);
  FSlateWidgetStyle::FSlateWidgetStyle((FSlateWidgetStyle *)local_4d78);
  local_4d78._0_8_ = &___7FComboBoxStyle__6B_;
  FComboButtonStyle::FComboButtonStyle((FComboButtonStyle *)local_4d68);
  uVar5 = _UNK_15076b1f8;
  local_4808.DebugPtr = (UObject *)0x0;
  local_4800.ComparisonIndex.Value = 0;
  local_4800.Number = 0;
  local_47f8.ObjectIndex = 0;
  local_47f8.ObjectSerialNumber = 0;
  local_47f0.DebugPtr = (UObject *)0x0;
  local_47e8.ComparisonIndex.Value = 0;
  local_47e8.Number = 0;
  local_47e0.ObjectIndex = 0;
  local_47e0.ObjectSerialNumber = 0;
  local_4848 = (TReferenceControllerBase<1> *)uVar4;
  _UNK_15076b1f8 = (float)uVar6;
  _UNK_15076b1fc = SUB84(uVar6,4);
  FStack_4840.ComparisonIndex.Value = (uint)_UNK_15076b1f8;
  FStack_4840.Number = (uint)_UNK_15076b1fc;
  local_47c8.Left = ___xmm_40400000410000004040000041000000;
  local_47c8.Top = _UNK_1509253b4;
  local_47c8.Right = _UNK_1509253b8;
  local_47c8.Bottom = _UNK_1509253bc;
  local_47d8.Left = 0.0;
  local_47d8.Top = 0.0;
  local_47d8.Right = 0.0;
  local_47d8.Bottom = 0.0;
  _UNK_15076b1f8 = uVar5;
  FButtonStyle::operator=((FButtonStyle *)(local_4d68 + 0x10),(FButtonStyle *)(local_44f8 + 0x10));
  FSlateBrush::operator=(&local_49c8,(FSlateBrush *)(local_44f8 + 0x3a0));
  local_4918 = (FDeprecateSlateVector2D)local_44f8._1104_8_;
  local_4910._0_8_ = local_44f8._1112_8_;
  local_4910._8_8_ = local_44f8._1120_8_;
  FSlateBrush::operator=(&local_48f8,(FSlateBrush *)(local_44f8 + 0x470));
  local_4848 = (TReferenceControllerBase<1> *)local_44f8._1312_8_;
  FStack_4840 = FStack_3fd0;
  local_4828.Left = local_3fb8.Left;
  local_4828.Top = local_3fb8.Top;
  local_4828.Right = local_3fb8.Right;
  local_4828.Bottom = local_3fb8.Bottom;
  local_4838.Left = local_3fc8.Left;
  local_4838.Top = local_3fc8.Top;
  local_4838.Right = local_3fc8.Right;
  local_4838.Bottom = local_3fc8.Bottom;
  local_4818.Value = local_3fa8.Value;
  FComboBoxStyle::FComboBoxStyle(&local_3a38,(FComboBoxStyle *)local_4d78);
  local_4d78._0_8_ = &___7FComboBoxStyle__6B_;
  local_4d68._0_8_ = &___7FComboButtonStyle__6B_;
  local_48f8._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_48f8.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  local_49c8._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_49c8.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  FButtonStyle::~FButtonStyle((FButtonStyle *)(local_4d68 + 0x10));
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)local_4d68);
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)local_4d78);
  pFVar1 = param_1->Object;
  pFVar14 = ::FName::FName((FName *)&local_res8._s_0,"ComboBox");
  FSlateStyleSet::Set<FComboBoxStyle>((FSlateStyleSet *)pFVar1,*pFVar14,&local_3a38);
  local_59a8._0_8_ = &___7FComboBoxStyle__6B_;
  FComboButtonStyle::FComboButtonStyle((FComboButtonStyle *)local_5998,&local_3a38.ComboButtonStyle)
  ;
  local_5438 = local_3a38.PressedSlateSound.ResourceObject.field0_0x0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_3a38.PressedSlateSound.ResourceObject.field0_0x0.DebugPtr !=
      (TObjectPtr<UObject>_u_0)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_3a38.PressedSlateSound.ResourceObject.field0_0x0);
  }
  local_5430 = local_3a38.PressedSlateSound.LegacyResourceName_DEPRECATED;
  local_5428 = local_3a38.PressedSlateSound.LegacyResourceObject_DEPRECATED.WeakPtr;
  local_5420 = local_3a38.SelectionChangeSlateSound.ResourceObject.field0_0x0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_3a38.SelectionChangeSlateSound.ResourceObject.field0_0x0.DebugPtr !=
      (TObjectPtr<UObject>_u_0)0x0)) {
    UE::GC::MarkAsReachable
              ((UObject *)local_3a38.SelectionChangeSlateSound.ResourceObject.field0_0x0);
  }
  local_5418 = local_3a38.SelectionChangeSlateSound.LegacyResourceName_DEPRECATED;
  local_5410 = local_3a38.SelectionChangeSlateSound.LegacyResourceObject_DEPRECATED.WeakPtr;
  local_5408.Left = local_3a38.ContentPadding.Left;
  local_5408.Top = local_3a38.ContentPadding.Top;
  local_5408.Right = local_3a38.ContentPadding.Right;
  local_5408.Bottom = local_3a38.ContentPadding.Bottom;
  local_53f8.Left = local_3a38.MenuRowPadding.Left;
  local_53f8.Top = local_3a38.MenuRowPadding.Top;
  local_53f8.Right = local_3a38.MenuRowPadding.Right;
  local_53f8.Bottom = local_3a38.MenuRowPadding.Bottom;
  FButtonStyle::operator=((FButtonStyle *)(local_5998 + 0x10),&local_2f18.ButtonStyle);
  FSlateBrush::operator=((FSlateBrush *)local_55f8,&local_2f18.DownArrowImage);
  local_5550._8_8_ = local_2f18.ShadowOffset;
  local_5540 = (undefined1  [8])local_2f18.ShadowColorAndOpacity.field0_0x0._0_8_;
  auStack_5538._0_8_ = local_2f18.ShadowColorAndOpacity.field0_0x0._8_8_;
  FSlateBrush::operator=((FSlateBrush *)local_5528,&local_2f18.MenuBorderBrush);
  local_5478.Left = local_2f18.MenuBorderPadding.Left;
  local_5478.Top = local_2f18.MenuBorderPadding.Top;
  local_5478.Right = local_2f18.MenuBorderPadding.Right;
  local_5478.Bottom = local_2f18.MenuBorderPadding.Bottom;
  _local_5458 = local_2f18.DownArrowPadding.Left;
  uStack_5457._3_4_ = local_2f18.DownArrowPadding.Top;
  fStack_5450 = local_2f18.DownArrowPadding.Right;
  fStack_544c = local_2f18.DownArrowPadding.Bottom;
  local_5468.Left = local_2f18.ContentPadding.Left;
  local_5468.Top = local_2f18.ContentPadding.Top;
  local_5468.Right = local_2f18.ContentPadding.Right;
  local_5468.Bottom = local_2f18.ContentPadding.Bottom;
  local_5448.Value = local_2f18.DownArrowAlign.Value;
  FComboBoxStyle::FComboBoxStyle(&local_1cd8,(FComboBoxStyle *)local_59a8);
  local_59a8._0_8_ = &___7FComboBoxStyle__6B_;
  local_5998._0_8_ = &___7FComboButtonStyle__6B_;
  local_5528._0_8_ = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_5488.ReferenceController);
  local_55f8._0_8_ = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_5558.ReferenceController);
  FButtonStyle::~FButtonStyle((FButtonStyle *)(local_5998 + 0x10));
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)local_5998);
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)local_59a8);
  pFVar1 = param_1->Object;
  pFVar14 = ::FName::FName((FName *)&local_res8._s_0,"EditorUtilityComboBox");
  FSlateStyleSet::Set<FComboBoxStyle>((FSlateStyleSet *)pFVar1,*pFVar14,&local_3a38);
  pFVar1 = param_1->Object;
  pFVar14 = ::FName::FName((FName *)&local_res8._s_0,"SimpleButtonLabelAndIcon");
  pFVar10 = (FButtonStyle *)
            (**(code **)(pFVar1->_padding_ + 0xa0))(pFVar1,FButtonStyle::TypeName,*pFVar14,0,1);
  uVar19 = (ulonglong)_tls_index;
  if (pFVar10 == (FButtonStyle *)0x0) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar19 * 8) + 0x9d4c) <
         ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      FButtonStyle::FButtonStyle(&::Default);
      atexit(`FButtonStyle::GetDefault'::__l2::_dynamic_atexit_destructor_for__Default__);
      _Init_thread_footer(&::_TSS0);
    }
    pFVar10 = &::Default;
  }
  pFVar12 = FComboButtonStyle::FComboButtonStyle(&local_3478);
  FButtonStyle::operator=(&pFVar12->ButtonStyle,pFVar10);
  (pFVar12->ContentPadding).Left = 0.0;
  (pFVar12->ContentPadding).Top = 0.0;
  (pFVar12->ContentPadding).Right = 0.0;
  uVar7 = _UNK_15076b1f8;
  uVar5 = ___xmm_3f8000003f8000003f8000003f800000;
  (pFVar12->ContentPadding).Bottom = 0.0;
  local_res8 = (TVector2<float>_u_0)0x4180000041800000;
  ___xmm_3f8000003f8000003f8000003f800000 = (float)uVar4;
  _UNK_15076b1f4 = SUB84(uVar4,4);
  local_5d28._s_0.R = ___xmm_3f8000003f8000003f8000003f800000;
  local_5d28._s_0.G = _UNK_15076b1f4;
  _UNK_15076b1f8 = (float)uVar6;
  _UNK_15076b1fc = SUB84(uVar6,4);
  local_5d28._s_0.B = _UNK_15076b1f8;
  local_5d28._s_0.A = _UNK_15076b1fc;
  ___xmm_3f8000003f8000003f8000003f800000 = uVar5;
  _UNK_15076b1f8 = uVar7;
  pFVar13 = (FString *)
            (**(code **)(param_1->Object->_padding_ + 0xf0))
                      (param_1->Object,&local_5d48,"Starship/CoreWidgets/ComboBox/wide-chevron-down"
                       ,L".svg");
  FSlateImageBrush::FSlateImageBrush
            ((FSlateImageBrush *)&local_5a58,pFVar13,(FDeprecateVector2DParameter *)&local_res8._s_0
             ,(FLinearColor *)&local_5d28._s_0,NoTile,Vector);
  local_5a58._padding_ = (longlong)&___7FSlateVectorImageBrush__6B_;
  FSlateBrush::operator=(&pFVar12->DownArrowImage,&local_5a58);
  pFVar12->ShadowOffset = (FDeprecateSlateVector2D)0x0;
  local_res8 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  pFVar11 = (FSlateBrush *)
            FSlateRoundedBoxBrush::FSlateRoundedBoxBrush<FSlateColor,FSlateColor,float>
                      ((FSlateRoundedBoxBrush *)&local_5d18,&FStyleColors::Dropdown,0.0,
                       &FStyleColors::DropdownOutline,fVar2,
                       (FDeprecateVector2DParameter *)&local_res8._s_0);
  FSlateBrush::operator=(&pFVar12->MenuBorderBrush,pFVar11);
  (pFVar12->MenuBorderPadding).Left = 0.0;
  (pFVar12->MenuBorderPadding).Top = 0.0;
  (pFVar12->MenuBorderPadding).Right = 0.0;
  (pFVar12->MenuBorderPadding).Bottom = 0.0;
  FComboButtonStyle::FComboButtonStyle(&local_3f98,pFVar12);
  local_5d18._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_5d18.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  local_5a58._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_5a58.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  if ((void *)local_5d48._0_8_ != (void *)0x0) {
    FMemory::Free((void *)local_5d48._0_8_);
  }
  local_3478._0_8_ = &___7FComboButtonStyle__6B_;
  local_3478.MenuBorderBrush._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3478.MenuBorderBrush.ResourceHandle.Data.SharedReferenceCount.ReferenceController
            );
  local_3478.DownArrowImage._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3478.DownArrowImage.ResourceHandle.Data.SharedReferenceCount.ReferenceController)
  ;
  FButtonStyle::~FButtonStyle((FButtonStyle *)((longlong)&local_3478 + 0x10));
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)&local_3478);
  pFVar1 = param_1->Object;
  pFVar14 = ::FName::FName((FName *)&local_res8._s_0,"SimpleComboButton");
  FSlateStyleSet::Set<FComboButtonStyle>((FSlateStyleSet *)pFVar1,*pFVar14,&local_3f98);
  pFVar1 = param_1->Object;
  pFVar14 = ::FName::FName((FName *)&local_res8._s_0,"SimpleButton");
  pFVar10 = (FButtonStyle *)
            (**(code **)(pFVar1->_padding_ + 0xa0))(pFVar1,FButtonStyle::TypeName,*pFVar14,0,1);
  if (((pFVar10 == (FButtonStyle *)0x0) &&
      (pFVar10 = &::Default,
      *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar19 * 8) + 0x9d4c) < ::_TSS0))
     && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    FButtonStyle::FButtonStyle(&::Default);
    atexit(`FButtonStyle::GetDefault'::__l2::_dynamic_atexit_destructor_for__Default__);
    _Init_thread_footer(&::_TSS0);
  }
  FButtonStyle::operator=(&local_3f98.ButtonStyle,pFVar10);
  pFVar1 = param_1->Object;
  pFVar14 = ::FName::FName((FName *)&local_res8._s_0,"SimpleComboButtonWithIcon");
  FSlateStyleSet::Set<FComboButtonStyle>((FSlateStyleSet *)pFVar1,*pFVar14,&local_3f98);
  FSlateWidgetStyle::FSlateWidgetStyle((FSlateWidgetStyle *)local_5338);
  local_5338._0_8_ = &___7FComboBoxStyle__6B_;
  FComboButtonStyle::FComboButtonStyle((FComboButtonStyle *)local_5328);
  uVar7 = _UNK_15076b1f8;
  uVar5 = ___xmm_3f8000003f8000003f8000003f800000;
  local_4d88.Left = ___xmm_40000000410000004000000041000000;
  local_4d88.Top = _UNK_150925364;
  local_4d88.Right = _UNK_150925368;
  local_4d88.Bottom = _UNK_15092536c;
  local_4d98.Left = 0.0;
  local_4d98.Top = 0.0;
  local_4d98.Right = 0.0;
  local_4d98.Bottom = 0.0;
  local_4dc8.DebugPtr = (UObject *)0x0;
  local_4dc0.ComparisonIndex.Value = 0;
  local_4dc0.Number = 0;
  local_4db8.ObjectIndex = 0;
  local_4db8.ObjectSerialNumber = 0;
  local_4db0.DebugPtr = (UObject *)0x0;
  local_4da8.ComparisonIndex.Value = 0;
  local_4da8.Number = 0;
  local_4da0.ObjectIndex = 0;
  local_4da0.ObjectSerialNumber = 0;
  ___xmm_3f8000003f8000003f8000003f800000 = (float)uVar4;
  _UNK_15076b1f4 = SUB84(uVar4,4);
  local_4e08.Left = ___xmm_3f8000003f8000003f8000003f800000;
  local_4e08.Top = _UNK_15076b1f4;
  _UNK_15076b1f8 = (float)uVar6;
  _UNK_15076b1fc = SUB84(uVar6,4);
  local_4e08.Right = _UNK_15076b1f8;
  local_4e08.Bottom = _UNK_15076b1fc;
  ___xmm_3f8000003f8000003f8000003f800000 = uVar5;
  _UNK_15076b1f8 = uVar7;
  FButtonStyle::operator=((FButtonStyle *)(local_5328 + 0x10),&local_3f98.ButtonStyle);
  FSlateBrush::operator=(&local_4f88,&local_3f98.DownArrowImage);
  local_4ed8 = local_3f98.ShadowOffset;
  local_4ed0._0_8_ = local_3f98.ShadowColorAndOpacity.field0_0x0._0_8_;
  local_4ed0._8_8_ = local_3f98.ShadowColorAndOpacity.field0_0x0._8_8_;
  FSlateBrush::operator=(&local_4eb8,&local_3f98.MenuBorderBrush);
  local_4e08.Left = local_3f98.MenuBorderPadding.Left;
  local_4e08.Top = local_3f98.MenuBorderPadding.Top;
  local_4e08.Right = local_3f98.MenuBorderPadding.Right;
  local_4e08.Bottom = local_3f98.MenuBorderPadding.Bottom;
  local_4de8.Left = local_3f98.DownArrowPadding.Left;
  local_4de8.Top = local_3f98.DownArrowPadding.Top;
  local_4de8.Right = local_3f98.DownArrowPadding.Right;
  local_4de8.Bottom = local_3f98.DownArrowPadding.Bottom;
  local_4df8.Left = local_3f98.ContentPadding.Left;
  local_4df8.Top = local_3f98.ContentPadding.Top;
  local_4df8.Right = local_3f98.ContentPadding.Right;
  local_4df8.Bottom = local_3f98.ContentPadding.Bottom;
  local_4dd8.Value = local_3f98.DownArrowAlign.Value;
  FComboBoxStyle::FComboBoxStyle(&local_2298,(FComboBoxStyle *)local_5338);
  local_4eb8._padding_ = (longlong)&___7FSlateBrush__6B_;
  local_5338._0_8_ = &___7FComboBoxStyle__6B_;
  local_5328._0_8_ = &___7FComboButtonStyle__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_4eb8.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  local_4f88._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_4f88.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  FButtonStyle::~FButtonStyle((FButtonStyle *)(local_5328 + 0x10));
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)local_5328);
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)local_5338);
  pFVar1 = param_1->Object;
  pFVar14 = ::FName::FName((FName *)&local_res8._s_0,"SimpleComboBox");
  FSlateStyleSet::Set<FComboBoxStyle>((FSlateStyleSet *)pFVar1,*pFVar14,&local_2298);
  pFVar15 = FTableRowStyle::FTableRowStyle(&local_bc8);
  local_res8 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  pFVar11 = (FSlateBrush *)
            FSlateNoResource::FSlateNoResource
                      ((FSlateNoResource *)local_59a8,
                       (FDeprecateVector2DParameter *)&local_res8._s_0);
  FSlateBrush::operator=(&pFVar15->EvenRowBackgroundBrush,pFVar11);
  local_res10 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  local_5d48._0_8_ = 0;
  local_5d48._8_8_ = 0;
  local_res8 = (TVector2<float>_u_0)0x0;
  FSlateBrush::FSlateBrush
            (&local_5c68,Image,(FName)0x0,(FMargin *)&local_5d48._s_0,NoTile,NoImage,
             (FDeprecateVector2DParameter *)&local_res10._s_0,&FStyleColors::Primary,(UObject *)0x0,
             false);
  local_5c68._padding_ = (longlong)&___7FSlateColorBrush__6B_;
  FSlateBrush::operator=(&pFVar15->EvenRowBackgroundHoveredBrush,&local_5c68);
  local_res8 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  pFVar11 = (FSlateBrush *)
            FSlateNoResource::FSlateNoResource
                      ((FSlateNoResource *)&local_3478,
                       (FDeprecateVector2DParameter *)&local_res8._s_0);
  FSlateBrush::operator=(&pFVar15->OddRowBackgroundBrush,pFVar11);
  local_res10 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  local_res8 = (TVector2<float>_u_0)0x0;
  local_5d48._0_8_ = 0;
  local_5d48._8_8_ = 0;
  FSlateBrush::FSlateBrush
            (&local_5d18,Image,(FName)0x0,(FMargin *)&local_5d48._s_0,NoTile,NoImage,
             (FDeprecateVector2DParameter *)&local_res10._s_0,&FStyleColors::Primary,(UObject *)0x0,
             false);
  local_5d18._padding_ = (longlong)&___7FSlateColorBrush__6B_;
  FSlateBrush::operator=(&pFVar15->OddRowBackgroundHoveredBrush,&local_5d18);
  local_res8 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  pFVar11 = (FSlateBrush *)
            FSlateRoundedBoxBrush::FSlateRoundedBoxBrush<FSlateColor,FSlateColor,float>
                      ((FSlateRoundedBoxBrush *)local_4d78,&FStyleColors::Transparent,fVar3,
                       &FStyleColors::Select,fVar2,(FDeprecateVector2DParameter *)&local_res8._s_0);
  FSlateBrush::operator=(&pFVar15->SelectorFocusedBrush,pFVar11);
  local_res8 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  pFVar11 = (FSlateBrush *)
            FSlateNoResource::FSlateNoResource
                      ((FSlateNoResource *)local_5338,
                       (FDeprecateVector2DParameter *)&local_res8._s_0);
  FSlateBrush::operator=(&pFVar15->ActiveBrush,pFVar11);
  local_res10 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  local_5d48._0_8_ = 0;
  local_5d48._8_8_ = 0;
  local_res8 = (TVector2<float>_u_0)0x0;
  FSlateBrush::FSlateBrush
            (&local_5bb8,Image,(FName)0x0,(FMargin *)&local_5d48._s_0,NoTile,NoImage,
             (FDeprecateVector2DParameter *)&local_res10._s_0,&FStyleColors::Primary,(UObject *)0x0,
             false);
  local_5bb8._padding_ = (longlong)&___7FSlateColorBrush__6B_;
  FSlateBrush::operator=(&pFVar15->ActiveHoveredBrush,&local_5bb8);
  local_res10 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  local_res8 = (TVector2<float>_u_0)0x0;
  local_5d48._0_8_ = 0;
  local_5d48._8_8_ = 0;
  FSlateBrush::FSlateBrush
            (&local_53e8,Image,(FName)0x0,(FMargin *)&local_5d48._s_0,NoTile,NoImage,
             (FDeprecateVector2DParameter *)&local_res10._s_0,&FStyleColors::Primary,(UObject *)0x0,
             false);
  local_53e8._padding_ = (longlong)&___7FSlateColorBrush__6B_;
  FSlateBrush::operator=(&pFVar15->ActiveHighlightedBrush,&local_53e8);
  local_res8 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  pFVar11 = (FSlateBrush *)
            FSlateNoResource::FSlateNoResource
                      ((FSlateNoResource *)local_45a8,
                       (FDeprecateVector2DParameter *)&local_res8._s_0);
  FSlateBrush::operator=(&pFVar15->InactiveBrush,pFVar11);
  local_res10 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  local_res8 = (TVector2<float>_u_0)0x0;
  local_5d48._0_8_ = 0;
  local_5d48._8_8_ = 0;
  FSlateBrush::FSlateBrush
            (&local_5b08,Image,(FName)0x0,(FMargin *)&local_5d48._s_0,NoTile,NoImage,
             (FDeprecateVector2DParameter *)&local_res10._s_0,&FStyleColors::Primary,(UObject *)0x0,
             false);
  local_5b08._padding_ = (longlong)&___7FSlateColorBrush__6B_;
  FSlateBrush::operator=(&pFVar15->InactiveHoveredBrush,&local_5b08);
  local_res10 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  local_5d48._s_0.R = 0.0;
  local_5d48._s_0.G = 0.0;
  local_5d48._s_0.B = 0.0;
  local_5d48._s_0.A = 0.0;
  local_res8 = (TVector2<float>_u_0)0x0;
  FSlateBrush::FSlateBrush
            (&local_5a58,Image,(FName)0x0,(FMargin *)&local_5d48._s_0,NoTile,NoImage,
             (FDeprecateVector2DParameter *)&local_res10._s_0,&FStyleColors::Primary,(UObject *)0x0,
             false);
  local_5a58._padding_ = (longlong)&___7FSlateColorBrush__6B_;
  FSlateBrush::operator=(&pFVar15->InactiveHighlightedBrush,&local_5a58);
  (pFVar15->TextColor).SpecifiedColor.field0_0x0._s_0 =
       (FLinearColor_u_0_s_0)FStyleColors::White.SpecifiedColor.field0_0x0;
  EVar8 = FStyleColors::White.ColorTableId;
  uVar9 = FStyleColors::White._18_2_;
  (pFVar15->TextColor).ColorUseRule = FStyleColors::White.ColorUseRule;
  (pFVar15->TextColor).ColorTableId = EVar8;
  *(undefined2 *)&(pFVar15->TextColor).field_0x12 = uVar9;
  (pFVar15->SelectedTextColor).SpecifiedColor.field0_0x0._s_0 =
       (FLinearColor_u_0_s_0)FStyleColors::White.SpecifiedColor.field0_0x0;
  EVar8 = FStyleColors::White.ColorTableId;
  uVar9 = FStyleColors::White._18_2_;
  (pFVar15->SelectedTextColor).ColorUseRule = FStyleColors::White.ColorUseRule;
  (pFVar15->SelectedTextColor).ColorTableId = EVar8;
  *(undefined2 *)&(pFVar15->SelectedTextColor).field_0x12 = uVar9;
  local_res8 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  pFVar11 = (FSlateBrush *)
            FSlateNoResource::FSlateNoResource
                      ((FSlateNoResource *)local_4658,
                       (FDeprecateVector2DParameter *)&local_res8._s_0);
  FSlateBrush::operator=(&pFVar15->DropIndicator_Above,pFVar11);
  local_res8 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  pFVar11 = (FSlateBrush *)
            FSlateNoResource::FSlateNoResource
                      ((FSlateNoResource *)local_4708,
                       (FDeprecateVector2DParameter *)&local_res8._s_0);
  FSlateBrush::operator=(&pFVar15->DropIndicator_Onto,pFVar11);
  local_res8 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  pFVar11 = (FSlateBrush *)
            FSlateNoResource::FSlateNoResource
                      ((FSlateNoResource *)local_47b8,
                       (FDeprecateVector2DParameter *)&local_res8._s_0);
  FSlateBrush::operator=(&pFVar15->DropIndicator_Below,pFVar11);
  FTableRowStyle::FTableRowStyle(&local_1718,pFVar15);
  local_47b8[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_4718);
  local_4708[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_4668);
  local_4658[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_45b8);
  local_5a58._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_5a58.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  local_5b08._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_5b08.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  local_45a8[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_4508);
  local_53e8._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_53e8.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  local_5bb8._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_5bb8.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  local_5338._0_8_ = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_5328._144_8_);
  local_4d78._0_8_ = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_4d68._144_8_);
  local_5d18._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_5d18.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  local_3478._0_8_ = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_3478.ButtonStyle.Normal.UVRegion.Min.field0_0x0);
  local_5c68._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_5c68.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  local_59a8._0_8_ = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_5998._144_8_);
  FTableRowStyle::~FTableRowStyle(&local_bc8);
  pFVar1 = param_1->Object;
  pFVar14 = ::FName::FName((FName *)&local_res8._s_0,"ComboBox.Row");
  FSlateStyleSet::Set<FTableRowStyle>((FSlateStyleSet *)pFVar1,*pFVar14,&local_1718);
  pFVar1 = param_1->Object;
  pFVar16 = ::operator_new(0xb0);
  uVar7 = _UNK_15076b1f8;
  uVar5 = ___xmm_3f8000003f8000003f8000003f800000;
  pFVar17 = pFVar18;
  if (pFVar16 != (FSlateImageBrush *)0x0) {
    local_res8._s_0 = (TVector2<float>_u_0_s_0)CoreStyleConstants::Icon12x12;
    ___xmm_3f8000003f8000003f8000003f800000 = (float)uVar4;
    _UNK_15076b1f4 = SUB84(uVar4,4);
    local_5d48._s_0.R = ___xmm_3f8000003f8000003f8000003f800000;
    local_5d48._s_0.G = _UNK_15076b1f4;
    _UNK_15076b1f8 = (float)uVar6;
    _UNK_15076b1fc = SUB84(uVar6,4);
    local_5d48._s_0.B = _UNK_15076b1f8;
    local_5d48._s_0.A = _UNK_15076b1fc;
    ___xmm_3f8000003f8000003f8000003f800000 = uVar5;
    _UNK_15076b1f8 = uVar7;
    pFVar13 = (FString *)
              (**(code **)(param_1->Object->_padding_ + 0xf0))
                        (param_1->Object,local_5d38,"Icons/PlusSymbol_12x",L".png");
    pFVar17 = FSlateImageBrush::FSlateImageBrush
                        (pFVar16,pFVar13,(FDeprecateVector2DParameter *)&local_res8._s_0,
                         (FLinearColor *)&local_5d48._s_0,NoTile,FullColor);
  }
  pFVar14 = ::FName::FName((FName *)&local_res10._s_0,"EditableComboBox.Add");
  FSlateStyleSet::Set<FSlateImageBrush>((FSlateStyleSet *)pFVar1,*pFVar14,pFVar17);
  if ((pFVar16 != (FSlateImageBrush *)0x0) && (local_5d38[0] != (void *)0x0)) {
    FMemory::Free(local_5d38[0]);
  }
  pFVar1 = param_1->Object;
  pFVar16 = ::operator_new(0xb0);
  uVar7 = _UNK_15076b1f8;
  uVar5 = ___xmm_3f8000003f8000003f8000003f800000;
  pFVar17 = pFVar18;
  if (pFVar16 != (FSlateImageBrush *)0x0) {
    local_res8._s_0 = (TVector2<float>_u_0_s_0)CoreStyleConstants::Icon12x12;
    ___xmm_3f8000003f8000003f8000003f800000 = (float)uVar4;
    _UNK_15076b1f4 = SUB84(uVar4,4);
    local_5d48._s_0.R = ___xmm_3f8000003f8000003f8000003f800000;
    local_5d48._s_0.G = _UNK_15076b1f4;
    _UNK_15076b1f8 = (float)uVar6;
    _UNK_15076b1fc = SUB84(uVar6,4);
    local_5d48._s_0.B = _UNK_15076b1f8;
    local_5d48._s_0.A = _UNK_15076b1fc;
    ___xmm_3f8000003f8000003f8000003f800000 = uVar5;
    _UNK_15076b1f8 = uVar7;
    pFVar13 = (FString *)
              (**(code **)(param_1->Object->_padding_ + 0xf0))
                        (param_1->Object,local_5d38,"Icons/Cross_12x",L".png");
    pFVar17 = FSlateImageBrush::FSlateImageBrush
                        (pFVar16,pFVar13,(FDeprecateVector2DParameter *)&local_res8._s_0,
                         (FLinearColor *)&local_5d48._s_0,NoTile,FullColor);
  }
  pFVar14 = ::FName::FName((FName *)&local_res10._s_0,"EditableComboBox.Delete");
  FSlateStyleSet::Set<FSlateImageBrush>((FSlateStyleSet *)pFVar1,*pFVar14,pFVar17);
  if ((pFVar16 != (FSlateImageBrush *)0x0) && (local_5d38[0] != (void *)0x0)) {
    FMemory::Free(local_5d38[0]);
  }
  pFVar1 = param_1->Object;
  pFVar16 = ::operator_new(0xb0);
  uVar7 = _UNK_15076b1f8;
  uVar5 = ___xmm_3f8000003f8000003f8000003f800000;
  pFVar17 = pFVar18;
  if (pFVar16 != (FSlateImageBrush *)0x0) {
    local_res8._s_0 = (TVector2<float>_u_0_s_0)CoreStyleConstants::Icon12x12;
    ___xmm_3f8000003f8000003f8000003f800000 = (float)uVar4;
    _UNK_15076b1f4 = SUB84(uVar4,4);
    local_5d48._s_0.R = ___xmm_3f8000003f8000003f8000003f800000;
    local_5d48._s_0.G = _UNK_15076b1f4;
    _UNK_15076b1f8 = (float)uVar6;
    _UNK_15076b1fc = SUB84(uVar6,4);
    local_5d48._s_0.B = _UNK_15076b1f8;
    local_5d48._s_0.A = _UNK_15076b1fc;
    ___xmm_3f8000003f8000003f8000003f800000 = uVar5;
    _UNK_15076b1f8 = uVar7;
    pFVar13 = (FString *)
              (**(code **)(param_1->Object->_padding_ + 0xf0))
                        (param_1->Object,local_5d38,"Icons/ellipsis_12x",L".png");
    pFVar17 = FSlateImageBrush::FSlateImageBrush
                        (pFVar16,pFVar13,(FDeprecateVector2DParameter *)&local_res8._s_0,
                         (FLinearColor *)&local_5d48._s_0,NoTile,FullColor);
  }
  pFVar14 = ::FName::FName((FName *)&local_res10._s_0,"EditableComboBox.Rename");
  FSlateStyleSet::Set<FSlateImageBrush>((FSlateStyleSet *)pFVar1,*pFVar14,pFVar17);
  if ((pFVar16 != (FSlateImageBrush *)0x0) && (local_5d38[0] != (void *)0x0)) {
    FMemory::Free(local_5d38[0]);
  }
  pFVar1 = param_1->Object;
  pFVar17 = ::operator_new(0xb0);
  uVar7 = _UNK_15076b1f8;
  uVar5 = ___xmm_3f8000003f8000003f8000003f800000;
  if (pFVar17 != (FSlateImageBrush *)0x0) {
    local_res8._s_0 = (TVector2<float>_u_0_s_0)CoreStyleConstants::Icon16x16;
    ___xmm_3f8000003f8000003f8000003f800000 = (float)uVar4;
    _UNK_15076b1f4 = SUB84(uVar4,4);
    local_5d48._s_0.R = ___xmm_3f8000003f8000003f8000003f800000;
    local_5d48._s_0.G = _UNK_15076b1f4;
    _UNK_15076b1f8 = (float)uVar6;
    _UNK_15076b1fc = SUB84(uVar6,4);
    local_5d48._s_0.B = _UNK_15076b1f8;
    local_5d48._s_0.A = _UNK_15076b1fc;
    ___xmm_3f8000003f8000003f8000003f800000 = uVar5;
    _UNK_15076b1f8 = uVar7;
    pFVar13 = (FString *)
              (**(code **)(param_1->Object->_padding_ + 0xf0))
                        (param_1->Object,local_5d38,"Common/Check",L".png");
    pFVar18 = FSlateImageBrush::FSlateImageBrush
                        (pFVar17,pFVar13,(FDeprecateVector2DParameter *)&local_res8._s_0,
                         (FLinearColor *)&local_5d48._s_0,NoTile,FullColor);
  }
  pFVar14 = ::FName::FName((FName *)&local_res10._s_0,"EditableComboBox.Accept");
  FSlateStyleSet::Set<FSlateImageBrush>((FSlateStyleSet *)pFVar1,*pFVar14,pFVar18);
  if ((pFVar17 != (FSlateImageBrush *)0x0) && (local_5d38[0] != (void *)0x0)) {
    FMemory::Free(local_5d38[0]);
  }
  FTableRowStyle::~FTableRowStyle(&local_1718);
  FComboBoxStyle::~FComboBoxStyle(&local_2298);
  FComboButtonStyle::~FComboButtonStyle(&local_3f98);
  FComboBoxStyle::~FComboBoxStyle(&local_1cd8);
  FComboBoxStyle::~FComboBoxStyle(&local_3a38);
  FComboButtonStyle::~FComboButtonStyle(&local_2f18);
  FComboButtonStyle::~FComboButtonStyle((FComboButtonStyle *)local_44f8);
  FButtonStyle::~FButtonStyle(&local_2628);
  FButtonStyle::~FButtonStyle(&local_29b8);
  return;
}

// SetupDockingStyles @ 14259bdc0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
FStarshipCoreStyle::SetupDockingStyles(TSharedRef<FStarshipCoreStyle::FStyle,1> *param_1)

{
  FStyle *pFVar1;
  code *pcVar2;
  float fVar3;
  EStyleColor EVar4;
  undefined2 uVar5;
  TVector2<float>_u_0 TVar6;
  FName *pFVar7;
  FButtonStyle *pFVar8;
  FButtonStyle *pFVar9;
  FTextBlockStyle *pFVar10;
  FSlateBoxBrush *pFVar11;
  FString *pFVar12;
  FSlateBoxBrush *pFVar13;
  FSlateRoundedBoxBrush *pFVar14;
  FDockTabStyle *pFVar15;
  FSlateBrush *pFVar16;
  UClass *pUVar17;
  FSlateNoResource *this;
  FSlateNoResource *pFVar18;
  FSlateBrush *pFVar19;
  FComboButtonStyle *pFVar20;
  FToolBarStyle *pFVar21;
  FSlateImageBrush *pFVar22;
  FSlateBrush *pFVar23;
  char cVar24;
  ulonglong uVar25;
  undefined1 auVar26 [12];
  TVector2<float>_u_0 local_res8;
  TVector2<float>_u_0 local_res10;
  FName local_res18;
  FName local_res20;
  FLinearColor_u_0 local_9b88;
  FLinearColor_u_0 local_9b78;
  TVector4<double>_u_0 local_9b68;
  FMargin local_9b48;
  undefined1 local_9b38 [12];
  undefined4 uStack_9b2c;
  void *local_9b28 [2];
  FName local_9b18;
  void *local_9b10 [2];
  void *local_9b00 [2];
  void *local_9af0 [2];
  undefined8 local_9ae0;
  undefined8 uStack_9ad8;
  undefined4 local_9ad0;
  FName local_9ac8 [2];
  FMargin local_9ab8;
  void *local_9aa8 [2];
  FSlateBrush local_9a98;
  FSlateBrush local_99e8;
  FSlateBrush local_9938;
  FSlateBrush local_9888;
  FSlateBrush local_97d8;
  FSlateBrush local_9728;
  FButtonStyle local_9678;
  FSlateBrush local_92e8;
  FSlateBrush local_9238;
  FSlateBrush local_9188;
  FSlateBrush local_90d8;
  undefined **local_9028 [20];
  TReferenceControllerBase<1> *local_8f88;
  undefined **local_8f78 [20];
  TReferenceControllerBase<1> *local_8ed8;
  undefined **local_8ec8 [20];
  TReferenceControllerBase<1> *local_8e28;
  undefined **local_8e18 [20];
  TReferenceControllerBase<1> *local_8d78;
  undefined **local_8d68 [20];
  TReferenceControllerBase<1> *local_8cc8;
  undefined **local_8cb8 [20];
  TReferenceControllerBase<1> *local_8c18;
  undefined1 local_8c08 [736];
  undefined **local_8928 [20];
  TReferenceControllerBase<1> *local_8888;
  FButtonStyle local_8878;
  FComboButtonStyle local_84e8;
  FComboButtonStyle local_7f88;
  FComboButtonStyle local_7a28;
  FButtonStyle local_74c8;
  FButtonStyle local_7138;
  FButtonStyle local_6da8;
  FDockTabStyle local_6a18;
  FButtonStyle local_5e38;
  FButtonStyle local_5aa8;
  FDockTabStyle local_5718;
  FDockTabStyle local_4b38;
  undefined1 local_3f58 [16044];
  float local_ac;
  undefined8 uStack_48;
  
  uStack_48 = 0x14259bddf;
  local_res8._s_0 = local_res8._s_0 & 0xffffffff00000000;
  pFVar1 = param_1->Object;
  pFVar7 = ::FName::FName((FName *)&local_res10._s_0,"Button");
  pFVar8 = (FButtonStyle *)
           (**(code **)(pFVar1->_padding_ + 0xa0))(pFVar1,FButtonStyle::TypeName,*pFVar7,0,1);
  uVar25 = (ulonglong)_tls_index;
  if (pFVar8 == (FButtonStyle *)0x0) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar25 * 8) + 0x9d4c) <
         ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      FButtonStyle::FButtonStyle(&::Default);
      atexit(`FButtonStyle::GetDefault'::__l2::_dynamic_atexit_destructor_for__Default__);
      _Init_thread_footer(&::_TSS0);
    }
    pFVar8 = &::Default;
  }
  pFVar1 = param_1->Object;
  pFVar7 = ::FName::FName(&local_res18,"NoBorder");
  pFVar9 = (FButtonStyle *)
           (**(code **)(pFVar1->_padding_ + 0xa0))(pFVar1,FButtonStyle::TypeName,*pFVar7,0,1);
  if (((pFVar9 == (FButtonStyle *)0x0) &&
      (pFVar9 = &::Default,
      *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar25 * 8) + 0x9d4c) < ::_TSS0))
     && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    FButtonStyle::FButtonStyle(&::Default);
    atexit(`FButtonStyle::GetDefault'::__l2::_dynamic_atexit_destructor_for__Default__);
    _Init_thread_footer(&::_TSS0);
  }
  pFVar1 = param_1->Object;
  pFVar7 = ::FName::FName(&local_res20,"NormalText");
  pFVar10 = (FTextBlockStyle *)
            (**(code **)(pFVar1->_padding_ + 0xa0))(pFVar1,FTextBlockStyle::TypeName,*pFVar7,0,1);
  if (pFVar10 == (FTextBlockStyle *)0x0) {
    pFVar10 = FTextBlockStyle::GetDefault();
  }
  pFVar1 = param_1->Object;
  pcVar2 = *(code **)(pFVar1->_padding_ + 0x40);
  pFVar7 = ::FName::FName((FName *)&local_res8._s_0,"SelectionColor");
  (*pcVar2)(pFVar1,&local_9ae0,*pFVar7,0,&FStyleDefaults::DefaultSlateColor,0);
  pFVar1 = param_1->Object;
  pFVar11 = ::operator_new(0xb0);
  if (pFVar11 == (FSlateBoxBrush *)0x0) {
    pFVar13 = (FSlateBoxBrush *)0x0;
  }
  else {
    stack0xffffffffffff64d0 = _UNK_15076b1f8;
    local_9b38._0_8_ = ___xmm_3f8000003f8000003f8000003f800000;
    local_9ab8.Left = (float)___xmm_3e0000003e0000003e0000003e000000;
    local_9ab8.Top = (float)_UNK_150925104;
    local_9ab8.Right = _UNK_150925108;
    local_9ab8.Bottom = _UNK_15092510c;
    pFVar12 = (FString *)
              (**(code **)(param_1->Object->_padding_ + 0xf0))
                        (param_1->Object,local_9ac8,"Old/Menu_Background",L".png");
    pFVar13 = FSlateBoxBrush::FSlateBoxBrush
                        (pFVar11,pFVar12,&local_9ab8,(FLinearColor *)local_9b38,FullColor);
  }
  pFVar7 = ::FName::FName((FName *)&local_res8._s_0,"Docking.Background");
  FSlateStyleSet::Set<FSlateBoxBrush>((FSlateStyleSet *)pFVar1,*pFVar7,pFVar13);
  if ((pFVar11 != (FSlateBoxBrush *)0x0) && (local_9ac8[0] != (FName)0x0)) {
    FMemory::Free((void *)local_9ac8[0]);
  }
  pFVar1 = param_1->Object;
  pFVar14 = ::operator_new(0xb0);
  fVar3 = __real_40800000;
  if (pFVar14 == (FSlateRoundedBoxBrush *)0x0) {
    pFVar14 = (FSlateRoundedBoxBrush *)0x0;
  }
  else {
    local_res8 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
    pFVar14 = FSlateRoundedBoxBrush::FSlateRoundedBoxBrush<FSlateColor,float>
                        (pFVar14,&FStyleColors::Panel,__real_40800000,
                         (FDeprecateVector2DParameter *)&local_res8._s_0);
  }
  pFVar7 = ::FName::FName(&local_9b18,"Docking.Border");
  FSlateStyleSet::Set<FSlateRoundedBoxBrush>((FSlateStyleSet *)pFVar1,*pFVar7,pFVar14);
  pFVar1 = param_1->Object;
  pFVar8 = FButtonStyle::FButtonStyle(&local_9678,pFVar8);
  local_res8._s_0 = (TVector2<float>_u_0_s_0)CoreStyleConstants::Icon8x8;
  pFVar12 = (FString *)
            (**(code **)(param_1->Object->_padding_ + 0xf0))
                      (param_1->Object,local_9b10,"Starship/Docking/show-tab-well",L".svg");
  FSlateImageBrush::FSlateImageBrush
            ((FSlateImageBrush *)&local_97d8,pFVar12,(FDeprecateVector2DParameter *)&local_res8._s_0
             ,&FStyleColors::Primary,NoTile,Vector);
  local_97d8._padding_ = (longlong)&___7FSlateVectorImageBrush__6B_;
  FSlateBrush::operator=(&pFVar8->Normal,&local_97d8);
  local_res8._s_0 = (TVector2<float>_u_0_s_0)CoreStyleConstants::Icon8x8;
  pFVar12 = (FString *)
            (**(code **)(param_1->Object->_padding_ + 0xf0))
                      (param_1->Object,local_9af0,"Starship/Docking/show-tab-well",L".svg");
  FSlateImageBrush::FSlateImageBrush
            ((FSlateImageBrush *)&local_9888,pFVar12,(FDeprecateVector2DParameter *)&local_res8._s_0
             ,&FStyleColors::PrimaryPress,NoTile,Vector);
  local_9888._padding_ = (longlong)&___7FSlateVectorImageBrush__6B_;
  FSlateBrush::operator=(&pFVar8->Pressed,&local_9888);
  local_res8._s_0 = (TVector2<float>_u_0_s_0)CoreStyleConstants::Icon8x8;
  pFVar12 = (FString *)
            (**(code **)(param_1->Object->_padding_ + 0xf0))
                      (param_1->Object,local_9b28,"Starship/Docking/show-tab-well",L".svg");
  FSlateImageBrush::FSlateImageBrush
            ((FSlateImageBrush *)&local_9938,pFVar12,(FDeprecateVector2DParameter *)&local_res8._s_0
             ,&FStyleColors::PrimaryHover,NoTile,Vector);
  local_9938._padding_ = (longlong)&___7FSlateVectorImageBrush__6B_;
  FSlateBrush::operator=(&pFVar8->Hovered,&local_9938);
  (pFVar8->NormalPadding).Left = 0.0;
  (pFVar8->NormalPadding).Top = 0.0;
  (pFVar8->NormalPadding).Right = 0.0;
  (pFVar8->NormalPadding).Bottom = 0.0;
  (pFVar8->PressedPadding).Left = 0.0;
  (pFVar8->PressedPadding).Top = 0.0;
  (pFVar8->PressedPadding).Right = 0.0;
  (pFVar8->PressedPadding).Bottom = 0.0;
  pFVar7 = ::FName::FName(&local_9b18,"Docking.UnhideTabwellButton");
  FSlateStyleSet::Set<FButtonStyle>((FSlateStyleSet *)pFVar1,*pFVar7,pFVar8);
  local_9938._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_9938.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  if (local_9b28[0] != (void *)0x0) {
    FMemory::Free(local_9b28[0]);
  }
  local_9888._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_9888.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  if (local_9af0[0] != (void *)0x0) {
    FMemory::Free(local_9af0[0]);
  }
  local_97d8._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_97d8.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  if (local_9b10[0] != (void *)0x0) {
    FMemory::Free(local_9b10[0]);
  }
  local_9678._0_8_ = &___7FButtonStyle__6B_;
  local_9678.Disabled._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_9678.Disabled.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  local_9678.Pressed._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_9678.Pressed.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  local_9678.Hovered._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_9678.Hovered.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  local_9678.Normal._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_9678.Normal.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)&local_9678);
  pFVar8 = FButtonStyle::FButtonStyle(&local_9678);
  local_res8._s_0 = (TVector2<float>_u_0_s_0)CoreStyleConstants::Icon16x16;
  pFVar12 = (FString *)
            (**(code **)(param_1->Object->_padding_ + 0xf0))
                      (param_1->Object,local_9b28,"Starship/Common/close-small",L".svg");
  FSlateImageBrush::FSlateImageBrush
            ((FSlateImageBrush *)&local_9938,pFVar12,(FDeprecateVector2DParameter *)&local_res8._s_0
             ,&FStyleColors::Foreground,NoTile,Vector);
  local_9938._padding_ = (longlong)&___7FSlateVectorImageBrush__6B_;
  FSlateBrush::operator=(&pFVar8->Normal,&local_9938);
  local_res8._s_0 = (TVector2<float>_u_0_s_0)CoreStyleConstants::Icon16x16;
  pFVar12 = (FString *)
            (**(code **)(param_1->Object->_padding_ + 0xf0))
                      (param_1->Object,local_9af0,"Starship/Common/close-small",L".svg");
  FSlateImageBrush::FSlateImageBrush
            ((FSlateImageBrush *)&local_9888,pFVar12,(FDeprecateVector2DParameter *)&local_res8._s_0
             ,&FStyleColors::Foreground,NoTile,Vector);
  local_9888._padding_ = (longlong)&___7FSlateVectorImageBrush__6B_;
  FSlateBrush::operator=(&pFVar8->Pressed,&local_9888);
  local_res8._s_0 = (TVector2<float>_u_0_s_0)CoreStyleConstants::Icon16x16;
  pFVar12 = (FString *)
            (**(code **)(param_1->Object->_padding_ + 0xf0))
                      (param_1->Object,local_9b10,"Starship/Common/close-small",L".svg");
  FSlateImageBrush::FSlateImageBrush
            ((FSlateImageBrush *)&local_97d8,pFVar12,(FDeprecateVector2DParameter *)&local_res8._s_0
             ,&FStyleColors::ForegroundHover,NoTile,Vector);
  local_97d8._padding_ = (longlong)&___7FSlateVectorImageBrush__6B_;
  FSlateBrush::operator=(&pFVar8->Hovered,&local_97d8);
  FButtonStyle::FButtonStyle(&local_6da8,pFVar8);
  local_97d8._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_97d8.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  if (local_9b10[0] != (void *)0x0) {
    FMemory::Free(local_9b10[0]);
  }
  local_9888._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_9888.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  if (local_9af0[0] != (void *)0x0) {
    FMemory::Free(local_9af0[0]);
  }
  local_9938._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_9938.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  if (local_9b28[0] != (void *)0x0) {
    FMemory::Free(local_9b28[0]);
  }
  local_9678._0_8_ = &___7FButtonStyle__6B_;
  local_9678.Disabled._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_9678.Disabled.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  local_9678.Pressed._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_9678.Pressed.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  local_9678.Hovered._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_9678.Hovered.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  local_9678.Normal._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_9678.Normal.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)&local_9678);
  pFVar15 = FDockTabStyle::FDockTabStyle(&local_5718);
  FButtonStyle::operator=(&pFVar15->CloseButtonStyle,&local_6da8);
  local_res8 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  pFVar16 = (FSlateBrush *)
            FSlateNoResource::FSlateNoResource
                      ((FSlateNoResource *)local_8ec8,
                       (FDeprecateVector2DParameter *)&local_res8._s_0);
  FSlateBrush::operator=(&pFVar15->NormalBrush,pFVar16);
  auVar26 = FStyleColors::Panel.SpecifiedColor.field0_0x0._0_12_;
  if (FStyleColors::Panel.ColorUseRule == UseColor_ColorTable) {
    pUVar17 = USlateThemeManager::StaticClass();
    if ((pUVar17->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
      UClass::InternalCreateDefaultObjectWrapper(pUVar17);
    }
    auVar26 = SUB1612(*(undefined1 (*) [16])
                       (&(pUVar17->ClassDefaultObject).field0_0x0.DebugPtr[1].field_0x10 +
                       (ulonglong)FStyleColors::Panel.ColorTableId * 0x10),0);
  }
  uStack_9b2c = 0x3f4ccccd;
  local_9b38 = auVar26;
  local_9b78._0_8_ = ___xmm_3e4ccccd3e4ccccd3e4ccccd3e4ccccd;
  local_9b78._8_8_ = _UNK_150925148;
  pFVar12 = (FString *)
            (**(code **)(param_1->Object->_padding_ + 0xf0))
                      (param_1->Object,local_9b00,"/Starship/Docking/DockTab_Foreground",L".png");
  pFVar16 = (FSlateBrush *)
            FSlateBoxBrush::FSlateBoxBrush
                      ((FSlateBoxBrush *)local_8f78,pFVar12,(FMargin *)&local_9b78._s_0,
                       (FLinearColor *)local_9b38,FullColor);
  FSlateBrush::operator=(&pFVar15->HoveredBrush,pFVar16);
  local_9b78._0_8_ = ___xmm_3e4ccccd3e4ccccd3e4ccccd3e4ccccd;
  local_9b78._8_8_ = _UNK_150925148;
  pFVar12 = (FString *)
            (**(code **)(param_1->Object->_padding_ + 0xf0))
                      (param_1->Object,local_9aa8,"/Starship/Docking/DockTab_Foreground",L".png");
  pFVar16 = (FSlateBrush *)
            FSlateBoxBrush::FSlateBoxBrush
                      ((FSlateBoxBrush *)local_9028,pFVar12,(FMargin *)&local_9b78._s_0,
                       &FStyleColors::Panel,FullColor);
  FSlateBrush::operator=(&pFVar15->ForegroundBrush,pFVar16);
  local_res10 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  local_res8 = (TVector2<float>_u_0)0x0;
  local_9b78._0_8_ = 0;
  local_9b78._8_8_ = 0;
  FSlateBrush::FSlateBrush
            (&local_92e8,Image,(FName)0x0,(FMargin *)&local_9b78._s_0,NoTile,NoImage,
             (FDeprecateVector2DParameter *)&local_res10._s_0,&FStyleColors::Foreground,
             (UObject *)0x0,false);
  local_92e8._padding_ = (longlong)&___7FSlateColorBrush__6B_;
  FSlateBrush::operator=(&pFVar15->ColorOverlayTabBrush,&local_92e8);
  local_res8 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  pFVar16 = (FSlateBrush *)
            FSlateNoResource::FSlateNoResource
                      ((FSlateNoResource *)local_8928,
                       (FDeprecateVector2DParameter *)&local_res8._s_0);
  FSlateBrush::operator=(&pFVar15->ColorOverlayIconBrush,pFVar16);
  local_res10 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  local_9b78._0_8_ = 0;
  local_9b78._8_8_ = 0;
  local_res8 = (TVector2<float>_u_0)0x0;
  FSlateBrush::FSlateBrush
            (&local_9188,Image,(FName)0x0,(FMargin *)&local_9b78._s_0,NoTile,NoImage,
             (FDeprecateVector2DParameter *)&local_res10._s_0,&FStyleColors::Panel,(UObject *)0x0,
             false);
  local_9188._padding_ = (longlong)&___7FSlateColorBrush__6B_;
  FSlateBrush::operator=(&pFVar15->ContentAreaBrush,&local_9188);
  local_res10 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  local_res8 = (TVector2<float>_u_0)0x0;
  local_9b78._0_8_ = 0;
  local_9b78._8_8_ = 0;
  FSlateBrush::FSlateBrush
            (&local_90d8,Image,(FName)0x0,(FMargin *)&local_9b78._s_0,NoTile,NoImage,
             (FDeprecateVector2DParameter *)&local_res10._s_0,&FStyleColors::Background,
             (UObject *)0x0,false);
  local_90d8._padding_ = (longlong)&___7FSlateColorBrush__6B_;
  FSlateBrush::operator=(&pFVar15->TabWellBrush,&local_90d8);
  *(undefined8 *)&(pFVar15->FlashColor).SpecifiedColor.field0_0x0 = local_9ae0;
  *(undefined8 *)((longlong)&(pFVar15->FlashColor).SpecifiedColor.field0_0x0 + 8) = uStack_9ad8;
  (pFVar15->FlashColor).ColorUseRule = (undefined1)local_9ad0;
  (pFVar15->FlashColor).ColorTableId = local_9ad0._1_1_;
  *(undefined2 *)&(pFVar15->FlashColor).field_0x12 = local_9ad0._2_2_;
  (pFVar15->TabPadding).Left = 4.0;
  (pFVar15->TabPadding).Top = 3.0;
  (pFVar15->TabPadding).Right = 10.0;
  (pFVar15->TabPadding).Bottom = 4.0;
  pFVar15->OverlapWidth = -2.0;
  (pFVar15->NormalForegroundColor).SpecifiedColor.field0_0x0._s_0 =
       (FLinearColor_u_0_s_0)FStyleColors::Foreground.SpecifiedColor.field0_0x0;
  EVar4 = FStyleColors::Foreground.ColorTableId;
  uVar5 = FStyleColors::Foreground._18_2_;
  (pFVar15->NormalForegroundColor).ColorUseRule = FStyleColors::Foreground.ColorUseRule;
  (pFVar15->NormalForegroundColor).ColorTableId = EVar4;
  *(undefined2 *)&(pFVar15->NormalForegroundColor).field_0x12 = uVar5;
  (pFVar15->ActiveForegroundColor).SpecifiedColor.field0_0x0._s_0 =
       (FLinearColor_u_0_s_0)FStyleColors::ForegroundHover.SpecifiedColor.field0_0x0;
  EVar4 = FStyleColors::ForegroundHover.ColorTableId;
  uVar5 = FStyleColors::ForegroundHover._18_2_;
  (pFVar15->ActiveForegroundColor).ColorUseRule = FStyleColors::ForegroundHover.ColorUseRule;
  (pFVar15->ActiveForegroundColor).ColorTableId = EVar4;
  *(undefined2 *)&(pFVar15->ActiveForegroundColor).field_0x12 = uVar5;
  (pFVar15->ForegroundForegroundColor).SpecifiedColor.field0_0x0._s_0 =
       (FLinearColor_u_0_s_0)FStyleColors::Foreground.SpecifiedColor.field0_0x0;
  EVar4 = FStyleColors::Foreground.ColorTableId;
  uVar5 = FStyleColors::Foreground._18_2_;
  (pFVar15->ForegroundForegroundColor).ColorUseRule = FStyleColors::Foreground.ColorUseRule;
  (pFVar15->ForegroundForegroundColor).ColorTableId = EVar4;
  *(undefined2 *)&(pFVar15->ForegroundForegroundColor).field_0x12 = uVar5;
  (pFVar15->HoveredForegroundColor).SpecifiedColor.field0_0x0._s_0 =
       (FLinearColor_u_0_s_0)FStyleColors::ForegroundHover.SpecifiedColor.field0_0x0;
  EVar4 = FStyleColors::ForegroundHover.ColorTableId;
  uVar5 = FStyleColors::ForegroundHover._18_2_;
  (pFVar15->HoveredForegroundColor).ColorUseRule = FStyleColors::ForegroundHover.ColorUseRule;
  (pFVar15->HoveredForegroundColor).ColorTableId = EVar4;
  *(undefined2 *)&(pFVar15->HoveredForegroundColor).field_0x12 = uVar5;
  FTextBlockStyle::operator=(&pFVar15->TabTextStyle,pFVar10);
  FDockTabStyle::FDockTabStyle(&local_6a18,pFVar15);
  local_90d8._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_90d8.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  local_9188._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_9188.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  local_8928[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_8888);
  local_92e8._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_92e8.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  local_9028[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_8f88);
  if (local_9aa8[0] != (void *)0x0) {
    FMemory::Free(local_9aa8[0]);
  }
  local_8f78[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_8ed8);
  if (local_9b00[0] != (void *)0x0) {
    FMemory::Free(local_9b00[0]);
  }
  local_8ec8[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_8e28);
  FDockTabStyle::~FDockTabStyle(&local_5718);
  pFVar1 = param_1->Object;
  pFVar7 = ::FName::FName((FName *)&local_res8._s_0,"Docking.Tab");
  FSlateStyleSet::Set<FDockTabStyle>((FSlateStyleSet *)pFVar1,*pFVar7,&local_6a18);
  pFVar1 = param_1->Object;
  pFVar15 = FDockTabStyle::FDockTabStyle(&local_4b38);
  FButtonStyle::operator=(&pFVar15->CloseButtonStyle,&local_6da8);
  local_res8 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  pFVar16 = (FSlateBrush *)
            FSlateNoResource::FSlateNoResource
                      ((FSlateNoResource *)local_8c08,
                       (FDeprecateVector2DParameter *)&local_res8._s_0);
  FSlateBrush::operator=(&pFVar15->NormalBrush,pFVar16);
  auVar26 = FStyleColors::Panel.SpecifiedColor.field0_0x0._0_12_;
  if (FStyleColors::Panel.ColorUseRule == UseColor_ColorTable) {
    pUVar17 = USlateThemeManager::StaticClass();
    if ((pUVar17->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
      UClass::InternalCreateDefaultObjectWrapper(pUVar17);
    }
    auVar26 = SUB1612(*(undefined1 (*) [16])
                       (&(pUVar17->ClassDefaultObject).field0_0x0.DebugPtr[1].field_0x10 +
                       (ulonglong)FStyleColors::Panel.ColorTableId * 0x10),0);
  }
  uStack_9b2c = 0x3f4ccccd;
  local_9b38 = auVar26;
  local_9b78._0_8_ = ___xmm_3e4ccccd3e4ccccd3e4ccccd3e4ccccd;
  local_9b78._8_8_ = _UNK_150925148;
  pFVar12 = (FString *)
            (**(code **)(param_1->Object->_padding_ + 0xf0))
                      (param_1->Object,&local_9b88,"/Starship/Docking/DockTab_Foreground",L".png");
  pFVar16 = (FSlateBrush *)
            FSlateBoxBrush::FSlateBoxBrush
                      ((FSlateBoxBrush *)local_8cb8,pFVar12,(FMargin *)&local_9b78._s_0,
                       (FLinearColor *)local_9b38,FullColor);
  FSlateBrush::operator=(&pFVar15->HoveredBrush,pFVar16);
  local_9b78._0_8_ = ___xmm_3e4ccccd3e4ccccd3e4ccccd3e4ccccd;
  local_9b78._8_8_ = _UNK_150925148;
  pFVar12 = (FString *)
            (**(code **)(param_1->Object->_padding_ + 0xf0))
                      (param_1->Object,&local_9b48,"/Starship/Docking/DockTab_Foreground",L".png");
  pFVar16 = (FSlateBrush *)
            FSlateBoxBrush::FSlateBoxBrush
                      ((FSlateBoxBrush *)local_8d68,pFVar12,(FMargin *)&local_9b78._s_0,
                       &FStyleColors::Panel,FullColor);
  FSlateBrush::operator=(&pFVar15->ForegroundBrush,pFVar16);
  pFVar18 = (FSlateNoResource *)0x0;
  local_res10 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  local_res8 = (TVector2<float>_u_0)0x0;
  local_9b78._0_8_ = 0;
  local_9b78._8_8_ = 0;
  FSlateBrush::FSlateBrush
            (&local_9a98,Image,(FName)0x0,(FMargin *)&local_9b78._s_0,NoTile,NoImage,
             (FDeprecateVector2DParameter *)&local_res10._s_0,&FStyleColors::Foreground,
             (UObject *)0x0,false);
  local_9a98._padding_ = (longlong)&___7FSlateColorBrush__6B_;
  FSlateBrush::operator=(&pFVar15->ColorOverlayTabBrush,&local_9a98);
  local_res8 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  pFVar16 = (FSlateBrush *)
            FSlateRoundedBoxBrush::FSlateRoundedBoxBrush<FSlateColor,float>
                      ((FSlateRoundedBoxBrush *)local_8e18,&FStyleColors::Foreground,fVar3,
                       (FDeprecateVector2DParameter *)&local_res8._s_0);
  FSlateBrush::operator=(&pFVar15->ColorOverlayIconBrush,pFVar16);
  local_res10 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  local_9b78._0_8_ = 0;
  local_9b78._8_8_ = 0;
  local_res8 = (TVector2<float>_u_0)0x0;
  FSlateBrush::FSlateBrush
            (&local_99e8,Image,(FName)0x0,(FMargin *)&local_9b78._s_0,NoTile,NoImage,
             (FDeprecateVector2DParameter *)&local_res10._s_0,&FStyleColors::Background,
             (UObject *)0x0,false);
  local_99e8._padding_ = (longlong)&___7FSlateColorBrush__6B_;
  FSlateBrush::operator=(&pFVar15->ContentAreaBrush,&local_99e8);
  local_res10 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  local_res8 = (TVector2<float>_u_0)0x0;
  local_9b78._0_8_ = 0;
  local_9b78._8_8_ = 0;
  FSlateBrush::FSlateBrush
            (&local_9238,Image,(FName)0x0,(FMargin *)&local_9b78._s_0,NoTile,NoImage,
             (FDeprecateVector2DParameter *)&local_res10._s_0,&FStyleColors::Background,
             (UObject *)0x0,false);
  local_9238._padding_ = (longlong)&___7FSlateColorBrush__6B_;
  FSlateBrush::operator=(&pFVar15->TabWellBrush,&local_9238);
  (pFVar15->TabPadding).Left = 4.0;
  (pFVar15->TabPadding).Top = 4.0;
  (pFVar15->TabPadding).Right = 10.0;
  (pFVar15->TabPadding).Bottom = 4.0;
  pFVar15->OverlapWidth = -2.0;
  *(undefined8 *)&(pFVar15->FlashColor).SpecifiedColor.field0_0x0 = local_9ae0;
  *(undefined8 *)((longlong)&(pFVar15->FlashColor).SpecifiedColor.field0_0x0 + 8) = uStack_9ad8;
  (pFVar15->FlashColor).ColorUseRule = (undefined1)local_9ad0;
  (pFVar15->FlashColor).ColorTableId = local_9ad0._1_1_;
  *(undefined2 *)&(pFVar15->FlashColor).field_0x12 = local_9ad0._2_2_;
  (pFVar15->NormalForegroundColor).SpecifiedColor.field0_0x0._s_0 =
       (FLinearColor_u_0_s_0)FStyleColors::Foreground.SpecifiedColor.field0_0x0;
  EVar4 = FStyleColors::Foreground.ColorTableId;
  uVar5 = FStyleColors::Foreground._18_2_;
  (pFVar15->NormalForegroundColor).ColorUseRule = FStyleColors::Foreground.ColorUseRule;
  (pFVar15->NormalForegroundColor).ColorTableId = EVar4;
  *(undefined2 *)&(pFVar15->NormalForegroundColor).field_0x12 = uVar5;
  (pFVar15->ActiveForegroundColor).SpecifiedColor.field0_0x0._s_0 =
       (FLinearColor_u_0_s_0)FStyleColors::White.SpecifiedColor.field0_0x0;
  EVar4 = FStyleColors::White.ColorTableId;
  uVar5 = FStyleColors::White._18_2_;
  (pFVar15->ActiveForegroundColor).ColorUseRule = FStyleColors::White.ColorUseRule;
  (pFVar15->ActiveForegroundColor).ColorTableId = EVar4;
  *(undefined2 *)&(pFVar15->ActiveForegroundColor).field_0x12 = uVar5;
  (pFVar15->ForegroundForegroundColor).SpecifiedColor.field0_0x0._s_0 =
       (FLinearColor_u_0_s_0)FStyleColors::White.SpecifiedColor.field0_0x0;
  EVar4 = FStyleColors::White.ColorTableId;
  uVar5 = FStyleColors::White._18_2_;
  (pFVar15->ForegroundForegroundColor).ColorUseRule = FStyleColors::White.ColorUseRule;
  (pFVar15->ForegroundForegroundColor).ColorTableId = EVar4;
  *(undefined2 *)&(pFVar15->ForegroundForegroundColor).field_0x12 = uVar5;
  (pFVar15->HoveredForegroundColor).SpecifiedColor.field0_0x0._s_0 =
       (FLinearColor_u_0_s_0)FStyleColors::White.SpecifiedColor.field0_0x0;
  EVar4 = FStyleColors::White.ColorTableId;
  uVar5 = FStyleColors::White._18_2_;
  (pFVar15->HoveredForegroundColor).ColorUseRule = FStyleColors::White.ColorUseRule;
  (pFVar15->HoveredForegroundColor).ColorTableId = EVar4;
  *(undefined2 *)&(pFVar15->HoveredForegroundColor).field_0x12 = uVar5;
  FTextBlockStyle::operator=(&pFVar15->TabTextStyle,pFVar10);
  pFVar15->IconBorderPadding = 4.0;
  pFVar7 = ::FName::FName(local_9ac8,"Docking.MajorTab");
  FSlateStyleSet::Set<FDockTabStyle>((FSlateStyleSet *)pFVar1,*pFVar7,pFVar15);
  local_9238._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_9238.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  local_99e8._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_99e8.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  local_8e18[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_8d78);
  local_9a98._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_9a98.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  local_8d68[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_8cc8);
  if ((FName)local_9b48._0_8_ != (FName)0x0) {
    FMemory::Free((void *)local_9b48._0_8_);
  }
  local_8cb8[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_8c18);
  if ((void *)local_9b88._0_8_ != (void *)0x0) {
    FMemory::Free((void *)local_9b88._0_8_);
  }
  local_8c08._0_8_ = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_8c08._160_8_);
  FDockTabStyle::~FDockTabStyle(&local_4b38);
  pFVar1 = param_1->Object;
  this = ::operator_new(0xb0);
  if (this != (FSlateNoResource *)0x0) {
    local_res8 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
    pFVar18 = FSlateNoResource::FSlateNoResource
                        (this,(FDeprecateVector2DParameter *)&local_res8._s_0);
  }
  pFVar23 = (FSlateBrush *)0x0;
  pFVar7 = ::FName::FName((FName *)&local_res10._s_0,"Docking.Tab.ContentAreaBrush");
  FSlateStyleSet::Set<FSlateNoResource>((FSlateStyleSet *)pFVar1,*pFVar7,pFVar18);
  pFVar1 = param_1->Object;
  pFVar19 = ::operator_new(0xb0);
  pFVar16 = pFVar23;
  if (pFVar19 != (FSlateBrush *)0x0) {
    local_res10 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
    local_9b88._0_8_ = (void *)0x0;
    local_9b88._8_8_ = 0;
    local_res8 = (TVector2<float>_u_0)0x0;
    FSlateBrush::FSlateBrush
              (pFVar19,Image,(FName)0x0,(FMargin *)&local_9b88._s_0,NoTile,NoImage,
               (FDeprecateVector2DParameter *)&local_res10._s_0,&FStyleColors::Hover,(UObject *)0x0,
               false);
    pFVar19->_padding_ = (longlong)&___7FSlateColorBrush__6B_;
    pFVar16 = pFVar19;
  }
  pFVar7 = ::FName::FName(&local_res20,"Docking.Tab.InactiveTabSeparator");
  FSlateStyleSet::Set<FSlateColorBrush>
            ((FSlateStyleSet *)pFVar1,*pFVar7,(FSlateColorBrush *)pFVar16);
  pFVar1 = param_1->Object;
  pFVar7 = ::FName::FName((FName *)&local_res8._s_0,"Docking.Tab.ActiveTabIndicatorColor");
  FSlateStyleSet::Set((FSlateStyleSet *)pFVar1,*pFVar7,&FStyleColors::Primary);
  pFVar8 = FButtonStyle::FButtonStyle(&local_9678,pFVar9);
  local_res10 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  local_res8 = (TVector2<float>_u_0)0x0;
  local_9b88._0_8_ = 0;
  local_9b88._8_8_ = 0;
  FSlateBrush::FSlateBrush
            (&local_99e8,Image,(FName)0x0,(FMargin *)&local_9b88._s_0,NoTile,NoImage,
             (FDeprecateVector2DParameter *)&local_res10._s_0,&FStyleColors::Panel,(UObject *)0x0,
             false);
  local_99e8._padding_ = (longlong)&___7FSlateColorBrush__6B_;
  FSlateBrush::operator=(&pFVar8->Normal,&local_99e8);
  local_res10 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  local_res8 = (TVector2<float>_u_0)0x0;
  local_9b88._0_8_ = 0;
  local_9b88._8_8_ = 0;
  FSlateBrush::FSlateBrush
            (&local_9a98,Image,(FName)0x0,(FMargin *)&local_9b88._s_0,NoTile,NoImage,
             (FDeprecateVector2DParameter *)&local_res10._s_0,&FStyleColors::Panel,(UObject *)0x0,
             false);
  local_9a98._padding_ = (longlong)&___7FSlateColorBrush__6B_;
  FSlateBrush::operator=(&pFVar8->Hovered,&local_9a98);
  *(undefined8 *)&(pFVar8->NormalForeground).SpecifiedColor.field0_0x0 =
       local_6a18.NormalForegroundColor.SpecifiedColor.field0_0x0._0_8_;
  *(undefined8 *)((longlong)&(pFVar8->NormalForeground).SpecifiedColor.field0_0x0 + 8) =
       local_6a18.NormalForegroundColor.SpecifiedColor.field0_0x0._8_8_;
  (pFVar8->NormalForeground).ColorUseRule = local_6a18.NormalForegroundColor.ColorUseRule;
  (pFVar8->NormalForeground).ColorTableId = local_6a18.NormalForegroundColor.ColorTableId;
  *(undefined2 *)&(pFVar8->NormalForeground).field_0x12 = local_6a18.NormalForegroundColor._18_2_;
  *(undefined8 *)&(pFVar8->PressedForeground).SpecifiedColor.field0_0x0 =
       local_6a18.NormalForegroundColor.SpecifiedColor.field0_0x0._0_8_;
  *(undefined8 *)((longlong)&(pFVar8->PressedForeground).SpecifiedColor.field0_0x0 + 8) =
       local_6a18.NormalForegroundColor.SpecifiedColor.field0_0x0._8_8_;
  (pFVar8->PressedForeground).ColorUseRule = local_6a18.NormalForegroundColor.ColorUseRule;
  (pFVar8->PressedForeground).ColorTableId = local_6a18.NormalForegroundColor.ColorTableId;
  *(undefined2 *)&(pFVar8->PressedForeground).field_0x12 = local_6a18.NormalForegroundColor._18_2_;
  *(undefined8 *)&(pFVar8->HoveredForeground).SpecifiedColor.field0_0x0 =
       local_6a18.HoveredForegroundColor.SpecifiedColor.field0_0x0._0_8_;
  *(undefined8 *)((longlong)&(pFVar8->HoveredForeground).SpecifiedColor.field0_0x0 + 8) =
       local_6a18.HoveredForegroundColor.SpecifiedColor.field0_0x0._8_8_;
  (pFVar8->HoveredForeground).ColorUseRule = local_6a18.HoveredForegroundColor.ColorUseRule;
  (pFVar8->HoveredForeground).ColorTableId = local_6a18.HoveredForegroundColor.ColorTableId;
  *(undefined2 *)&(pFVar8->HoveredForeground).field_0x12 = local_6a18.HoveredForegroundColor._18_2_;
  FButtonStyle::FButtonStyle(&local_8878,pFVar8);
  local_9a98._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_9a98.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  local_99e8._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_99e8.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  local_9678._0_8_ = &___7FButtonStyle__6B_;
  local_9678.Disabled._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_9678.Disabled.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  local_9678.Pressed._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_9678.Pressed.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  local_9678.Hovered._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_9678.Hovered.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  local_9678.Normal._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_9678.Normal.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)&local_9678);
  pFVar8 = FButtonStyle::FButtonStyle(&local_9678,pFVar9);
  local_res8 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  pFVar16 = (FSlateBrush *)
            FSlateNoResource::FSlateNoResource
                      ((FSlateNoResource *)local_8c08,
                       (FDeprecateVector2DParameter *)&local_res8._s_0);
  FSlateBrush::operator=(&pFVar8->Normal,pFVar16);
  local_res10 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  local_res8 = (TVector2<float>_u_0)0x0;
  local_9b88._0_8_ = (void *)0x0;
  local_9b88._8_8_ = 0;
  FSlateBrush::FSlateBrush
            (&local_9a98,Image,(FName)0x0,(FMargin *)&local_9b88._s_0,NoTile,NoImage,
             (FDeprecateVector2DParameter *)&local_res10._s_0,&FStyleColors::Panel,(UObject *)0x0,
             false);
  local_9a98._padding_ = (longlong)&___7FSlateColorBrush__6B_;
  FSlateBrush::operator=(&pFVar8->Hovered,&local_9a98);
  *(undefined8 *)&(pFVar8->NormalForeground).SpecifiedColor.field0_0x0 =
       local_6a18.NormalForegroundColor.SpecifiedColor.field0_0x0._0_8_;
  *(undefined8 *)((longlong)&(pFVar8->NormalForeground).SpecifiedColor.field0_0x0 + 8) =
       local_6a18.NormalForegroundColor.SpecifiedColor.field0_0x0._8_8_;
  (pFVar8->NormalForeground).ColorUseRule = local_6a18.NormalForegroundColor.ColorUseRule;
  (pFVar8->NormalForeground).ColorTableId = local_6a18.NormalForegroundColor.ColorTableId;
  *(undefined2 *)&(pFVar8->NormalForeground).field_0x12 = local_6a18.NormalForegroundColor._18_2_;
  *(undefined8 *)&(pFVar8->PressedForeground).SpecifiedColor.field0_0x0 =
       local_6a18.NormalForegroundColor.SpecifiedColor.field0_0x0._0_8_;
  *(undefined8 *)((longlong)&(pFVar8->PressedForeground).SpecifiedColor.field0_0x0 + 8) =
       local_6a18.NormalForegroundColor.SpecifiedColor.field0_0x0._8_8_;
  (pFVar8->PressedForeground).ColorUseRule = local_6a18.NormalForegroundColor.ColorUseRule;
  (pFVar8->PressedForeground).ColorTableId = local_6a18.NormalForegroundColor.ColorTableId;
  *(undefined2 *)&(pFVar8->PressedForeground).field_0x12 = local_6a18.NormalForegroundColor._18_2_;
  *(undefined8 *)&(pFVar8->HoveredForeground).SpecifiedColor.field0_0x0 =
       local_6a18.HoveredForegroundColor.SpecifiedColor.field0_0x0._0_8_;
  *(undefined8 *)((longlong)&(pFVar8->HoveredForeground).SpecifiedColor.field0_0x0 + 8) =
       local_6a18.HoveredForegroundColor.SpecifiedColor.field0_0x0._8_8_;
  (pFVar8->HoveredForeground).ColorUseRule = local_6a18.HoveredForegroundColor.ColorUseRule;
  (pFVar8->HoveredForeground).ColorTableId = local_6a18.HoveredForegroundColor.ColorTableId;
  *(undefined2 *)&(pFVar8->HoveredForeground).field_0x12 = local_6a18.HoveredForegroundColor._18_2_;
  FButtonStyle::FButtonStyle(&local_5aa8,pFVar8);
  local_9a98._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_9a98.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  local_8c08._0_8_ = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_8c08._160_8_);
  local_9678._0_8_ = &___7FButtonStyle__6B_;
  local_9678.Disabled._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_9678.Disabled.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  local_9678.Pressed._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_9678.Pressed.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  local_9678.Hovered._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_9678.Hovered.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  local_9678.Normal._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_9678.Normal.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)&local_9678);
  pFVar1 = param_1->Object;
  pFVar7 = ::FName::FName((FName *)&local_res8._s_0,"Docking.SidebarButton.Closed");
  FSlateStyleSet::Set<FButtonStyle>((FSlateStyleSet *)pFVar1,*pFVar7,&local_5aa8);
  pFVar1 = param_1->Object;
  pFVar7 = ::FName::FName((FName *)&local_res8._s_0,"Docking.SidebarButton.Opened");
  FSlateStyleSet::Set<FButtonStyle>((FSlateStyleSet *)pFVar1,*pFVar7,&local_8878);
  pFVar1 = param_1->Object;
  pFVar11 = ::operator_new(0xb0);
  pFVar16 = pFVar23;
  if (pFVar11 != (FSlateBoxBrush *)0x0) {
    local_9b88._0_8_ = ___xmm_3f800000000000000000000000000000;
    local_9b88._8_8_ = _UNK_150689648;
    local_9b48.Left = (float)___xmm_3e0000003e0000003e0000003e000000;
    local_9b48.Top = (float)_UNK_150925104;
    local_9b48.Right = _UNK_150925108;
    local_9b48.Bottom = _UNK_15092510c;
    pFVar12 = (FString *)
              (**(code **)(param_1->Object->_padding_ + 0xf0))
                        (param_1->Object,local_9b00,"/Starship/Docking/drawer-shadow",L".png");
    pFVar16 = (FSlateBrush *)
              FSlateBoxBrush::FSlateBoxBrush
                        (pFVar11,pFVar12,&local_9b48,(FLinearColor *)&local_9b88._s_0,FullColor);
  }
  pFVar7 = ::FName::FName((FName *)&local_res8._s_0,"Docking.Sidebar.DrawerShadow");
  FSlateStyleSet::Set<FSlateBoxBrush>((FSlateStyleSet *)pFVar1,*pFVar7,(FSlateBoxBrush *)pFVar16);
  if ((pFVar11 != (FSlateBoxBrush *)0x0) && (local_9b00[0] != (void *)0x0)) {
    FMemory::Free(local_9b00[0]);
  }
  pFVar1 = param_1->Object;
  pFVar19 = ::operator_new(0xb0);
  pFVar16 = pFVar23;
  if (pFVar19 != (FSlateBrush *)0x0) {
    local_res10 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
    local_res8 = (TVector2<float>_u_0)0x0;
    local_9b88._0_8_ = (void *)0x0;
    local_9b88._8_8_ = 0;
    FSlateBrush::FSlateBrush
              (pFVar19,Image,(FName)0x0,(FMargin *)&local_9b88._s_0,NoTile,NoImage,
               (FDeprecateVector2DParameter *)&local_res10._s_0,&FStyleColors::Panel,(UObject *)0x0,
               false);
    pFVar19->_padding_ = (longlong)&___7FSlateColorBrush__6B_;
    pFVar16 = pFVar19;
  }
  pFVar7 = ::FName::FName(&local_res20,"Docking.Sidebar.DrawerBackground");
  FSlateStyleSet::Set<FSlateColorBrush>
            ((FSlateStyleSet *)pFVar1,*pFVar7,(FSlateColorBrush *)pFVar16);
  pFVar1 = param_1->Object;
  pFVar19 = ::operator_new(0xb0);
  pFVar16 = pFVar23;
  if (pFVar19 != (FSlateBrush *)0x0) {
    local_res10 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
    local_res8 = (TVector2<float>_u_0)0x0;
    local_9b88._0_8_ = (void *)0x0;
    local_9b88._8_8_ = 0;
    FSlateBrush::FSlateBrush
              (pFVar19,Image,(FName)0x0,(FMargin *)&local_9b88._s_0,NoTile,NoImage,
               (FDeprecateVector2DParameter *)&local_res10._s_0,&FStyleColors::Background,
               (UObject *)0x0,false);
    pFVar19->_padding_ = (longlong)&___7FSlateColorBrush__6B_;
    pFVar16 = pFVar19;
  }
  pFVar7 = ::FName::FName(&local_res20,"Docking.Sidebar.Background");
  FSlateStyleSet::Set<FSlateColorBrush>
            ((FSlateStyleSet *)pFVar1,*pFVar7,(FSlateColorBrush *)pFVar16);
  pFVar8 = FButtonStyle::FButtonStyle(&local_7138,pFVar9);
  (pFVar8->NormalForeground).SpecifiedColor.field0_0x0._s_0 =
       (FLinearColor_u_0_s_0)FStyleColors::Foreground.SpecifiedColor.field0_0x0;
  EVar4 = FStyleColors::Foreground.ColorTableId;
  uVar5 = FStyleColors::Foreground._18_2_;
  (pFVar8->NormalForeground).ColorUseRule = FStyleColors::Foreground.ColorUseRule;
  (pFVar8->NormalForeground).ColorTableId = EVar4;
  *(undefined2 *)&(pFVar8->NormalForeground).field_0x12 = uVar5;
  (pFVar8->NormalPadding).Left = 2.0;
  (pFVar8->NormalPadding).Top = 2.0;
  (pFVar8->NormalPadding).Right = 2.0;
  (pFVar8->NormalPadding).Bottom = 2.0;
  (pFVar8->PressedPadding).Left = 2.0;
  (pFVar8->PressedPadding).Top = 3.0;
  (pFVar8->PressedPadding).Right = 2.0;
  (pFVar8->PressedPadding).Bottom = 1.0;
  FButtonStyle::FButtonStyle(&local_74c8,pFVar8);
  FButtonStyle::~FButtonStyle(&local_7138);
  pFVar1 = param_1->Object;
  pFVar7 = ::FName::FName((FName *)&local_res8._s_0,"SimpleComboButton");
  pFVar20 = ISlateStyle::GetWidgetStyle<FComboButtonStyle>
                      ((ISlateStyle *)pFVar1,*pFVar7,(char *)0x0,(FComboButtonStyle *)0x0);
  FComboButtonStyle::FComboButtonStyle(&local_84e8,pFVar20);
  pFVar1 = param_1->Object;
  pFVar7 = ::FName::FName((FName *)&local_9ab8,"ComboButton");
  pFVar20 = ISlateStyle::GetWidgetStyle<FComboButtonStyle>
                      ((ISlateStyle *)pFVar1,*pFVar7,(char *)0x0,(FComboButtonStyle *)0x0);
  pFVar20 = FComboButtonStyle::FComboButtonStyle(&local_7a28,pFVar20);
  local_res8 = (TVector2<float>_u_0)0x41c0000040c00000;
  local_9b78._0_8_ = ___xmm_3f8000003f8000003f8000003f800000;
  local_9b78._8_8_ = _UNK_15076b1f8;
  pFVar12 = (FString *)
            (**(code **)(param_1->Object->_padding_ + 0xf0))
                      (param_1->Object,&local_9b68,"Starship/Common/ellipsis-vertical-narrow",
                       L".svg");
  FSlateImageBrush::FSlateImageBrush
            ((FSlateImageBrush *)&local_9728,pFVar12,(FDeprecateVector2DParameter *)&local_res8._s_0
             ,(FLinearColor *)&local_9b78._s_0,NoTile,Vector);
  local_9728._padding_ = (longlong)&___7FSlateVectorImageBrush__6B_;
  FSlateBrush::operator=(&pFVar20->DownArrowImage,&local_9728);
  FButtonStyle::operator=(&pFVar20->ButtonStyle,&local_74c8);
  (pFVar20->DownArrowPadding).Left = 0.0;
  (pFVar20->DownArrowPadding).Top = 0.0;
  (pFVar20->DownArrowPadding).Right = 0.0;
  (pFVar20->DownArrowPadding).Bottom = 0.0;
  (pFVar20->DownArrowAlign).Value = '\x03';
  FComboButtonStyle::FComboButtonStyle(&local_7f88,pFVar20);
  local_9728._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_9728.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  if ((void *)local_9b68._s_0.X != (void *)0x0) {
    FMemory::Free((void *)local_9b68._s_0.X);
  }
  local_7a28._0_8_ = &___7FComboButtonStyle__6B_;
  local_7a28.MenuBorderBrush._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_7a28.MenuBorderBrush.ResourceHandle.Data.SharedReferenceCount.ReferenceController
            );
  local_7a28.DownArrowImage._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_7a28.DownArrowImage.ResourceHandle.Data.SharedReferenceCount.ReferenceController)
  ;
  FButtonStyle::~FButtonStyle((FButtonStyle *)((longlong)&local_7a28 + 0x10));
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)&local_7a28);
  pFVar1 = param_1->Object;
  pFVar7 = ::FName::FName((FName *)&local_res8._s_0,"StatusBar.StatusBarButton");
  FSlateStyleSet::Set<FButtonStyle>((FSlateStyleSet *)pFVar1,*pFVar7,&local_74c8);
  pFVar1 = param_1->Object;
  pFVar7 = ::FName::FName((FName *)&local_res8._s_0,"StatusBar.StatusBarComboButton");
  FSlateStyleSet::Set<FComboButtonStyle>((FSlateStyleSet *)pFVar1,*pFVar7,&local_84e8);
  pFVar1 = param_1->Object;
  pFVar7 = ::FName::FName((FName *)&local_res8._s_0,"StatusBar.StatusBarEllipsisComboButton");
  FSlateStyleSet::Set<FComboButtonStyle>((FSlateStyleSet *)pFVar1,*pFVar7,&local_7f88);
  pFVar1 = param_1->Object;
  pFVar7 = ::FName::FName((FName *)&local_res8._s_0,"StatusBar.Height");
  FSlateStyleSet::Set((FSlateStyleSet *)pFVar1,*pFVar7,__real_42000000);
  pFVar1 = param_1->Object;
  pFVar11 = ::operator_new(0xb0);
  pFVar16 = pFVar23;
  if (pFVar11 != (FSlateBoxBrush *)0x0) {
    local_9b68._s_0.X = (double)___xmm_3f800000000000000000000000000000;
    local_9b68._s_0.Y = _UNK_150689648;
    local_9b88._0_8_ = ___xmm_000000003e2000003ea000003e200000;
    local_9b88._8_8_ = _UNK_150925038;
    pFVar12 = (FString *)
              (**(code **)(param_1->Object->_padding_ + 0xf0))
                        (param_1->Object,&local_9b48,"Starship/StatusBar/drawer-shadow-bottom",
                         L".png");
    pFVar16 = (FSlateBrush *)
              FSlateBoxBrush::FSlateBoxBrush
                        (pFVar11,pFVar12,(FMargin *)&local_9b88._s_0,
                         (FLinearColor *)&local_9b68._s_0,FullColor);
  }
  pFVar7 = ::FName::FName((FName *)&local_res8._s_0,"StatusBar.DrawerShadow");
  FSlateStyleSet::Set<FSlateBoxBrush>((FSlateStyleSet *)pFVar1,*pFVar7,(FSlateBoxBrush *)pFVar16);
  if ((pFVar11 != (FSlateBoxBrush *)0x0) && ((FName)local_9b48._0_8_ != (FName)0x0)) {
    FMemory::Free((void *)local_9b48._0_8_);
  }
  pFVar1 = param_1->Object;
  pFVar14 = ::operator_new(0xb0);
  pFVar16 = pFVar23;
  if (pFVar14 != (FSlateRoundedBoxBrush *)0x0) {
    local_res8 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
    pFVar16 = (FSlateBrush *)
              FSlateRoundedBoxBrush::FSlateRoundedBoxBrush<FSlateColor,float>
                        (pFVar14,&FStyleColors::Panel,__real_40a00000,
                         (FDeprecateVector2DParameter *)&local_res8._s_0);
  }
  pFVar7 = ::FName::FName((FName *)&local_res10._s_0,"StatusBar.DrawerBackground");
  FSlateStyleSet::Set<FSlateRoundedBoxBrush>
            ((FSlateStyleSet *)pFVar1,*pFVar7,(FSlateRoundedBoxBrush *)pFVar16);
  pFVar1 = param_1->Object;
  pFVar19 = ::operator_new(0xb0);
  pFVar16 = pFVar23;
  if (pFVar19 != (FSlateBrush *)0x0) {
    local_res10 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
    local_res8 = (TVector2<float>_u_0)0x0;
    local_9b68._s_0.X = 0.0;
    local_9b68._s_0.Y = 0.0;
    FSlateBrush::FSlateBrush
              (pFVar19,Image,(FName)0x0,(FMargin *)&local_9b68._s_0,NoTile,NoImage,
               (FDeprecateVector2DParameter *)&local_res10._s_0,&FStyleColors::Panel,(UObject *)0x0,
               false);
    pFVar19->_padding_ = (longlong)&___7FSlateColorBrush__6B_;
    pFVar16 = pFVar19;
  }
  pFVar7 = ::FName::FName(&local_res18,"StatusBar.Background");
  FSlateStyleSet::Set<FSlateColorBrush>
            ((FSlateStyleSet *)pFVar1,*pFVar7,(FSlateColorBrush *)pFVar16);
  pFVar1 = param_1->Object;
  pFVar14 = ::operator_new(0xb0);
  fVar3 = __real_3f800000;
  pFVar16 = pFVar23;
  if (pFVar14 != (FSlateRoundedBoxBrush *)0x0) {
    local_res8 = (TVector2<float>_u_0)0x4100000041a00000;
    pFVar16 = (FSlateBrush *)
              FSlateRoundedBoxBrush::FSlateRoundedBoxBrush<FSlateColor,FSlateColor,float>
                        (pFVar14,&FStyleColors::Transparent,__real_40000000,&FStyleColors::Panel,
                         __real_3f800000,(FDeprecateVector2DParameter *)&local_res8._s_0);
  }
  pFVar7 = ::FName::FName((FName *)&local_res10._s_0,"StatusBar.ProgressOverlay");
  FSlateStyleSet::Set<FSlateRoundedBoxBrush>
            ((FSlateStyleSet *)pFVar1,*pFVar7,(FSlateRoundedBoxBrush *)pFVar16);
  pFVar1 = param_1->Object;
  pFVar19 = ::operator_new(0xb0);
  pFVar16 = pFVar23;
  if (pFVar19 != (FSlateBrush *)0x0) {
    local_res8._s_0 = (TVector2<float>_u_0_s_0)CoreStyleConstants::Icon16x16;
    pFVar12 = (FString *)
              (**(code **)(param_1->Object->_padding_ + 0xf0))
                        (param_1->Object,&local_9b68,"Starship/Common/help",L".svg");
    FSlateImageBrush::FSlateImageBrush
              ((FSlateImageBrush *)pFVar19,pFVar12,(FDeprecateVector2DParameter *)&local_res8._s_0,
               &FStyleColors::Foreground,NoTile,Vector);
    pFVar19->_padding_ = (longlong)&___7FSlateVectorImageBrush__6B_;
    pFVar16 = pFVar19;
  }
  pFVar7 = ::FName::FName((FName *)&local_res10._s_0,"StatusBar.HelpIcon");
  FSlateStyleSet::Set<FSlateVectorImageBrush>
            ((FSlateStyleSet *)pFVar1,*pFVar7,(FSlateVectorImageBrush *)pFVar16);
  if ((pFVar19 != (FSlateBrush *)0x0) && ((void *)local_9b68._s_0.X != (void *)0x0)) {
    FMemory::Free((void *)local_9b68._s_0.X);
  }
  pFVar1 = param_1->Object;
  pFVar7 = ::FName::FName((FName *)&local_res8._s_0,"SlimToolBar");
  pFVar21 = ISlateStyle::GetWidgetStyle<FToolBarStyle>
                      ((ISlateStyle *)pFVar1,*pFVar7,(char *)0x0,(FToolBarStyle *)0x0);
  FToolBarStyle::FToolBarStyle((FToolBarStyle *)local_3f58,pFVar21);
  local_res8 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  pFVar16 = (FSlateBrush *)
            FSlateNoResource::FSlateNoResource
                      ((FSlateNoResource *)local_8c08,
                       (FDeprecateVector2DParameter *)&local_res8._s_0);
  FSlateBrush::operator=((FSlateBrush *)(local_3f58 + 0x10),pFVar16);
  local_8c08._0_8_ = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_8c08._160_8_);
  pFVar1 = param_1->Object;
  local_3f58._13824_4_ = ___xmm_40a000000000000040a0000040a00000;
  local_3f58._13828_4_ = _UNK_150925414;
  local_3f58._13832_4_ = _UNK_150925418;
  local_3f58._13836_4_ = _UNK_15092541c;
  local_res8._s_0 = (TVector2<float>_u_0_s_0)CoreStyleConstants::Icon16x16;
  TVar6._s_0 = local_res8._s_0;
  local_res8._s_0.X = CoreStyleConstants::Icon16x16._0_4_;
  local_res8._s_0.Y = CoreStyleConstants::Icon16x16._4_4_;
  local_3f58._16040_4_ = local_res8._s_0.X;
  local_3f58._14144_4_ = ___xmm_40800000408000004080000040800000;
  local_3f58._14148_4_ = _UNK_1509253f4;
  local_3f58._14152_4_ = _UNK_1509253f8;
  local_3f58._14156_4_ = _UNK_1509253fc;
  local_ac = local_res8._s_0.Y;
  local_res8._s_0 = TVar6._s_0;
  pFVar7 = ::FName::FName((FName *)&local_res8._s_0,"StatusBarToolBar");
  FSlateStyleSet::Set<FToolBarStyle>((FSlateStyleSet *)pFVar1,*pFVar7,(FToolBarStyle *)local_3f58);
  pFVar1 = param_1->Object;
  pFVar7 = ::FName::FName((FName *)&local_res8._s_0,"NormalText");
  pFVar10 = ISlateStyle::GetWidgetStyle<FTextBlockStyle>
                      ((ISlateStyle *)pFVar1,*pFVar7,(char *)0x0,(FTextBlockStyle *)0x0);
  pFVar10 = FTextBlockStyle::FTextBlockStyle((FTextBlockStyle *)local_8c08,pFVar10);
  (pFVar10->ColorAndOpacity).SpecifiedColor.field0_0x0._s_0 =
       (FLinearColor_u_0_s_0)FStyleColors::Foreground.SpecifiedColor.field0_0x0;
  EVar4 = FStyleColors::Foreground.ColorTableId;
  uVar5 = FStyleColors::Foreground._18_2_;
  (pFVar10->ColorAndOpacity).ColorUseRule = FStyleColors::Foreground.ColorUseRule;
  (pFVar10->ColorAndOpacity).ColorTableId = EVar4;
  *(undefined2 *)&(pFVar10->ColorAndOpacity).field_0x12 = uVar5;
  pFVar7 = ::FName::FName((FName *)&local_res10._s_0,"StatusBar.Message.MessageText");
  FSlateStyleSet::Set<FTextBlockStyle>((FSlateStyleSet *)pFVar1,*pFVar7,pFVar10);
  FTextBlockStyle::~FTextBlockStyle((FTextBlockStyle *)local_8c08);
  pFVar1 = param_1->Object;
  pFVar7 = ::FName::FName(&local_res18,"NormalText");
  pFVar10 = ISlateStyle::GetWidgetStyle<FTextBlockStyle>
                      ((ISlateStyle *)pFVar1,*pFVar7,(char *)0x0,(FTextBlockStyle *)0x0);
  pFVar10 = FTextBlockStyle::FTextBlockStyle((FTextBlockStyle *)local_8c08,pFVar10);
  (pFVar10->ColorAndOpacity).SpecifiedColor.field0_0x0._s_0 =
       (FLinearColor_u_0_s_0)FStyleColors::Primary.SpecifiedColor.field0_0x0;
  EVar4 = FStyleColors::Primary.ColorTableId;
  uVar5 = FStyleColors::Primary._18_2_;
  (pFVar10->ColorAndOpacity).ColorUseRule = FStyleColors::Primary.ColorUseRule;
  (pFVar10->ColorAndOpacity).ColorTableId = EVar4;
  *(undefined2 *)&(pFVar10->ColorAndOpacity).field_0x12 = uVar5;
  pFVar7 = ::FName::FName((FName *)&local_res8._s_0,"StatusBar.Message.HintText");
  FSlateStyleSet::Set<FTextBlockStyle>((FSlateStyleSet *)pFVar1,*pFVar7,pFVar10);
  FTextBlockStyle::~FTextBlockStyle((FTextBlockStyle *)local_8c08);
  pFVar1 = param_1->Object;
  pFVar14 = ::operator_new(0xb0);
  pFVar16 = pFVar23;
  if (pFVar14 != (FSlateRoundedBoxBrush *)0x0) {
    local_res8 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
    pFVar16 = (FSlateBrush *)
              FSlateRoundedBoxBrush::FSlateRoundedBoxBrush<FSlateColor,FSlateColor,float>
                        (pFVar14,&FStyleColors::Transparent,__real_40a00000,&FStyleColors::Hover,
                         fVar3,(FDeprecateVector2DParameter *)&local_res8._s_0);
  }
  pFVar7 = ::FName::FName((FName *)&local_res10._s_0,"Docking.Sidebar.Border");
  FSlateStyleSet::Set<FSlateRoundedBoxBrush>
            ((FSlateStyleSet *)pFVar1,*pFVar7,(FSlateRoundedBoxBrush *)pFVar16);
  pFVar1 = param_1->Object;
  pFVar14 = ::operator_new(0xb0);
  pFVar16 = pFVar23;
  if (pFVar14 != (FSlateRoundedBoxBrush *)0x0) {
    local_res8 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
    local_9b68._s_0.X = (double)___xmm_40140000000000000000000000000000;
    local_9b68._s_0.Y = _UNK_150925388;
    local_9b68._s_0.Z = (double)___xmm_00000000000000004014000000000000;
    local_9b68._s_0.W = _UNK_150925018;
    pFVar16 = (FSlateBrush *)
              FSlateRoundedBoxBrush::
              FSlateRoundedBoxBrush<FSlateColor,FSlateColor,UE::Math::TVector4<double>_>
                        (pFVar14,&FStyleColors::Transparent,(TVector4<double> *)&local_9b68._s_0,
                         &FStyleColors::Hover,fVar3,(FDeprecateVector2DParameter *)&local_res8._s_0)
    ;
  }
  pFVar7 = ::FName::FName((FName *)&local_res10._s_0,"Docking.Sidebar.Border_SquareLeft");
  FSlateStyleSet::Set<FSlateRoundedBoxBrush>
            ((FSlateStyleSet *)pFVar1,*pFVar7,(FSlateRoundedBoxBrush *)pFVar16);
  pFVar1 = param_1->Object;
  pFVar14 = ::operator_new(0xb0);
  pFVar16 = pFVar23;
  if (pFVar14 != (FSlateRoundedBoxBrush *)0x0) {
    local_res8 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
    local_9b68._s_0.X = (double)___xmm_00000000000000004014000000000000;
    local_9b68._s_0.Y = _UNK_150925018;
    local_9b68._s_0.Z = (double)___xmm_40140000000000000000000000000000;
    local_9b68._s_0.W = _UNK_150925388;
    pFVar16 = (FSlateBrush *)
              FSlateRoundedBoxBrush::
              FSlateRoundedBoxBrush<FSlateColor,FSlateColor,UE::Math::TVector4<double>_>
                        (pFVar14,&FStyleColors::Transparent,(TVector4<double> *)&local_9b68._s_0,
                         &FStyleColors::Hover,fVar3,(FDeprecateVector2DParameter *)&local_res8._s_0)
    ;
  }
  pFVar7 = ::FName::FName((FName *)&local_res10._s_0,"Docking.Sidebar.Border_SquareRight");
  FSlateStyleSet::Set<FSlateRoundedBoxBrush>
            ((FSlateStyleSet *)pFVar1,*pFVar7,(FSlateRoundedBoxBrush *)pFVar16);
  pFVar1 = param_1->Object;
  pFVar19 = ::operator_new(0xb0);
  pFVar16 = pFVar23;
  if (pFVar19 != (FSlateBrush *)0x0) {
    local_res8._s_0 = (TVector2<float>_u_0_s_0)CoreStyleConstants::Icon12x12;
    local_9b68._s_0.X = (double)___xmm_3f8000003f8000003f8000003f800000;
    local_9b68._s_0.Y = _UNK_15076b1f8;
    pFVar12 = (FString *)
              (**(code **)(param_1->Object->_padding_ + 0xf0))
                        (param_1->Object,&local_9b88,"Starship/Docking/pin",L".svg");
    FSlateImageBrush::FSlateImageBrush
              ((FSlateImageBrush *)pFVar19,pFVar12,(FDeprecateVector2DParameter *)&local_res8._s_0,
               (FLinearColor *)&local_9b68._s_0,NoTile,Vector);
    pFVar19->_padding_ = (longlong)&___7FSlateVectorImageBrush__6B_;
    pFVar16 = pFVar19;
  }
  pFVar7 = ::FName::FName((FName *)&local_res10._s_0,"Docking.Sidebar.PinTabIcon");
  FSlateStyleSet::Set<FSlateVectorImageBrush>
            ((FSlateStyleSet *)pFVar1,*pFVar7,(FSlateVectorImageBrush *)pFVar16);
  if ((pFVar19 != (FSlateBrush *)0x0) && ((void *)local_9b88._0_8_ != (void *)0x0)) {
    FMemory::Free((void *)local_9b88._0_8_);
  }
  pFVar1 = param_1->Object;
  pFVar22 = ::operator_new(0xb0);
  pFVar16 = pFVar23;
  if (pFVar22 != (FSlateImageBrush *)0x0) {
    local_res8 = (TVector2<float>_u_0)0x40c0000040c00000;
    local_9b68._s_0.X = (double)___xmm_3e800000000000003eb333333f800000;
    local_9b68._s_0.Y = _UNK_150925168;
    pFVar12 = (FString *)
              (**(code **)(param_1->Object->_padding_ + 0xf0))
                        (param_1->Object,&local_9b88,"/Docking/OuterDockingIndicator",L".png");
    pFVar16 = (FSlateBrush *)
              FSlateImageBrush::FSlateImageBrush
                        (pFVar22,pFVar12,(FDeprecateVector2DParameter *)&local_res8._s_0,
                         (FLinearColor *)&local_9b68._s_0,NoTile,FullColor);
  }
  pFVar7 = ::FName::FName((FName *)&local_res10._s_0,"Docking.Cross.DockLeft");
  FSlateStyleSet::Set<FSlateImageBrush>
            ((FSlateStyleSet *)pFVar1,*pFVar7,(FSlateImageBrush *)pFVar16);
  if ((pFVar22 != (FSlateImageBrush *)0x0) && ((void *)local_9b88._0_8_ != (void *)0x0)) {
    FMemory::Free((void *)local_9b88._0_8_);
  }
  pFVar1 = param_1->Object;
  pFVar22 = ::operator_new(0xb0);
  pFVar16 = pFVar23;
  if (pFVar22 != (FSlateImageBrush *)0x0) {
    local_res8 = (TVector2<float>_u_0)0x40c0000040c00000;
    local_9b68._s_0.X = (double)___xmm_3f800000000000003eb333333f800000;
    local_9b68._s_0.Y = _UNK_1509252a8;
    pFVar12 = (FString *)
              (**(code **)(param_1->Object->_padding_ + 0xf0))
                        (param_1->Object,&local_9b88,"/Docking/OuterDockingIndicator",L".png");
    pFVar16 = (FSlateBrush *)
              FSlateImageBrush::FSlateImageBrush
                        (pFVar22,pFVar12,(FDeprecateVector2DParameter *)&local_res8._s_0,
                         (FLinearColor *)&local_9b68._s_0,NoTile,FullColor);
  }
  pFVar7 = ::FName::FName((FName *)&local_res10._s_0,"Docking.Cross.DockLeft_Hovered");
  FSlateStyleSet::Set<FSlateImageBrush>
            ((FSlateStyleSet *)pFVar1,*pFVar7,(FSlateImageBrush *)pFVar16);
  if ((pFVar22 != (FSlateImageBrush *)0x0) && ((void *)local_9b88._0_8_ != (void *)0x0)) {
    FMemory::Free((void *)local_9b88._0_8_);
  }
  cVar24 = '\0';
  pFVar1 = param_1->Object;
  pFVar22 = ::operator_new(0xb0);
  pFVar16 = pFVar23;
  if (pFVar22 != (FSlateImageBrush *)0x0) {
    local_res8 = (TVector2<float>_u_0)0x40c0000040c00000;
    cVar24 = -0x80;
    local_9b68._s_0.X = (double)___xmm_3e800000000000003eb333333f800000;
    local_9b68._s_0.Y = _UNK_150925168;
    pFVar12 = (FString *)
              (**(code **)(param_1->Object->_padding_ + 0xf0))
                        (param_1->Object,&local_9b88,"/Docking/OuterDockingIndicator",L".png");
    pFVar16 = (FSlateBrush *)
              FSlateImageBrush::FSlateImageBrush
                        (pFVar22,pFVar12,(FDeprecateVector2DParameter *)&local_res8._s_0,
                         (FLinearColor *)&local_9b68._s_0,NoTile,FullColor);
  }
  pFVar7 = ::FName::FName((FName *)&local_res10._s_0,"Docking.Cross.DockTop");
  FSlateStyleSet::Set<FSlateImageBrush>
            ((FSlateStyleSet *)pFVar1,*pFVar7,(FSlateImageBrush *)pFVar16);
  if ((cVar24 < '\0') && ((void *)local_9b88._0_8_ != (void *)0x0)) {
    FMemory::Free((void *)local_9b88._0_8_);
  }
  pFVar1 = param_1->Object;
  pFVar22 = ::operator_new(0xb0);
  pFVar16 = pFVar23;
  if (pFVar22 != (FSlateImageBrush *)0x0) {
    local_res8 = (TVector2<float>_u_0)0x40c0000040c00000;
    local_9b68._s_0.X = (double)___xmm_3f800000000000003eb333333f800000;
    local_9b68._s_0.Y = _UNK_1509252a8;
    pFVar12 = (FString *)
              (**(code **)(param_1->Object->_padding_ + 0xf0))
                        (param_1->Object,&local_9b88,"/Docking/OuterDockingIndicator",L".png");
    pFVar16 = (FSlateBrush *)
              FSlateImageBrush::FSlateImageBrush
                        (pFVar22,pFVar12,(FDeprecateVector2DParameter *)&local_res8._s_0,
                         (FLinearColor *)&local_9b68._s_0,NoTile,FullColor);
  }
  pFVar7 = ::FName::FName((FName *)&local_res10._s_0,"Docking.Cross.DockTop_Hovered");
  FSlateStyleSet::Set<FSlateImageBrush>
            ((FSlateStyleSet *)pFVar1,*pFVar7,(FSlateImageBrush *)pFVar16);
  if ((pFVar22 != (FSlateImageBrush *)0x0) && ((void *)local_9b88._0_8_ != (void *)0x0)) {
    FMemory::Free((void *)local_9b88._0_8_);
  }
  pFVar1 = param_1->Object;
  pFVar22 = ::operator_new(0xb0);
  pFVar16 = pFVar23;
  if (pFVar22 != (FSlateImageBrush *)0x0) {
    local_res8 = (TVector2<float>_u_0)0x40c0000040c00000;
    local_9b68._s_0.X = (double)___xmm_3e800000000000003eb333333f800000;
    local_9b68._s_0.Y = _UNK_150925168;
    pFVar12 = (FString *)
              (**(code **)(param_1->Object->_padding_ + 0xf0))
                        (param_1->Object,&local_9b88,"/Docking/OuterDockingIndicator",L".png");
    pFVar16 = (FSlateBrush *)
              FSlateImageBrush::FSlateImageBrush
                        (pFVar22,pFVar12,(FDeprecateVector2DParameter *)&local_res8._s_0,
                         (FLinearColor *)&local_9b68._s_0,NoTile,FullColor);
  }
  pFVar7 = ::FName::FName((FName *)&local_res10._s_0,"Docking.Cross.DockRight");
  FSlateStyleSet::Set<FSlateImageBrush>
            ((FSlateStyleSet *)pFVar1,*pFVar7,(FSlateImageBrush *)pFVar16);
  if ((pFVar22 != (FSlateImageBrush *)0x0) && ((void *)local_9b88._0_8_ != (void *)0x0)) {
    FMemory::Free((void *)local_9b88._0_8_);
  }
  pFVar1 = param_1->Object;
  pFVar22 = ::operator_new(0xb0);
  pFVar16 = pFVar23;
  if (pFVar22 != (FSlateImageBrush *)0x0) {
    local_res8 = (TVector2<float>_u_0)0x40c0000040c00000;
    local_9b68._s_0.X = (double)___xmm_3f800000000000003eb333333f800000;
    local_9b68._s_0.Y = _UNK_1509252a8;
    pFVar12 = (FString *)
              (**(code **)(param_1->Object->_padding_ + 0xf0))
                        (param_1->Object,&local_9b88,"/Docking/OuterDockingIndicator",L".png");
    pFVar16 = (FSlateBrush *)
              FSlateImageBrush::FSlateImageBrush
                        (pFVar22,pFVar12,(FDeprecateVector2DParameter *)&local_res8._s_0,
                         (FLinearColor *)&local_9b68._s_0,NoTile,FullColor);
  }
  pFVar7 = ::FName::FName((FName *)&local_res10._s_0,"Docking.Cross.DockRight_Hovered");
  FSlateStyleSet::Set<FSlateImageBrush>
            ((FSlateStyleSet *)pFVar1,*pFVar7,(FSlateImageBrush *)pFVar16);
  if ((pFVar22 != (FSlateImageBrush *)0x0) && ((void *)local_9b88._0_8_ != (void *)0x0)) {
    FMemory::Free((void *)local_9b88._0_8_);
  }
  pFVar1 = param_1->Object;
  pFVar22 = ::operator_new(0xb0);
  pFVar16 = pFVar23;
  if (pFVar22 != (FSlateImageBrush *)0x0) {
    local_res8 = (TVector2<float>_u_0)0x40c0000040c00000;
    local_9b68._s_0.X = (double)___xmm_3e800000000000003eb333333f800000;
    local_9b68._s_0.Y = _UNK_150925168;
    pFVar12 = (FString *)
              (**(code **)(param_1->Object->_padding_ + 0xf0))
                        (param_1->Object,&local_9b88,"/Docking/OuterDockingIndicator",L".png");
    pFVar16 = (FSlateBrush *)
              FSlateImageBrush::FSlateImageBrush
                        (pFVar22,pFVar12,(FDeprecateVector2DParameter *)&local_res8._s_0,
                         (FLinearColor *)&local_9b68._s_0,NoTile,FullColor);
  }
  pFVar7 = ::FName::FName((FName *)&local_res10._s_0,"Docking.Cross.DockBottom");
  FSlateStyleSet::Set<FSlateImageBrush>
            ((FSlateStyleSet *)pFVar1,*pFVar7,(FSlateImageBrush *)pFVar16);
  if ((pFVar22 != (FSlateImageBrush *)0x0) && ((void *)local_9b88._0_8_ != (void *)0x0)) {
    FMemory::Free((void *)local_9b88._0_8_);
  }
  pFVar1 = param_1->Object;
  pFVar22 = ::operator_new(0xb0);
  pFVar16 = pFVar23;
  if (pFVar22 != (FSlateImageBrush *)0x0) {
    local_res8 = (TVector2<float>_u_0)0x40c0000040c00000;
    local_9b68._s_0.X = (double)___xmm_3f800000000000003eb333333f800000;
    local_9b68._s_0.Y = _UNK_1509252a8;
    pFVar12 = (FString *)
              (**(code **)(param_1->Object->_padding_ + 0xf0))
                        (param_1->Object,&local_9b88,"/Docking/OuterDockingIndicator",L".png");
    pFVar16 = (FSlateBrush *)
              FSlateImageBrush::FSlateImageBrush
                        (pFVar22,pFVar12,(FDeprecateVector2DParameter *)&local_res8._s_0,
                         (FLinearColor *)&local_9b68._s_0,NoTile,FullColor);
  }
  pFVar7 = ::FName::FName((FName *)&local_res10._s_0,"Docking.Cross.DockBottom_Hovered");
  FSlateStyleSet::Set<FSlateImageBrush>
            ((FSlateStyleSet *)pFVar1,*pFVar7,(FSlateImageBrush *)pFVar16);
  if ((pFVar22 != (FSlateImageBrush *)0x0) && ((void *)local_9b88._0_8_ != (void *)0x0)) {
    FMemory::Free((void *)local_9b88._0_8_);
  }
  pFVar1 = param_1->Object;
  pFVar22 = ::operator_new(0xb0);
  pFVar16 = pFVar23;
  if (pFVar22 != (FSlateImageBrush *)0x0) {
    local_res8._s_0 = (TVector2<float>_u_0_s_0)CoreStyleConstants::Icon64x64;
    local_9b68._s_0.X = (double)___xmm_3e800000000000003eb333333f800000;
    local_9b68._s_0.Y = _UNK_150925168;
    pFVar12 = (FString *)
              (**(code **)(param_1->Object->_padding_ + 0xf0))
                        (param_1->Object,&local_9b88,"/Docking/DockingIndicator_Center",L".png");
    pFVar16 = (FSlateBrush *)
              FSlateImageBrush::FSlateImageBrush
                        (pFVar22,pFVar12,(FDeprecateVector2DParameter *)&local_res8._s_0,
                         (FLinearColor *)&local_9b68._s_0,NoTile,FullColor);
  }
  pFVar7 = ::FName::FName((FName *)&local_res10._s_0,"Docking.Cross.DockCenter");
  FSlateStyleSet::Set<FSlateImageBrush>
            ((FSlateStyleSet *)pFVar1,*pFVar7,(FSlateImageBrush *)pFVar16);
  if ((pFVar22 != (FSlateImageBrush *)0x0) && ((void *)local_9b88._0_8_ != (void *)0x0)) {
    FMemory::Free((void *)local_9b88._0_8_);
  }
  pFVar1 = param_1->Object;
  pFVar22 = ::operator_new(0xb0);
  pFVar16 = pFVar23;
  if (pFVar22 != (FSlateImageBrush *)0x0) {
    local_res8._s_0 = (TVector2<float>_u_0_s_0)CoreStyleConstants::Icon64x64;
    local_9b68._s_0.X = (double)___xmm_3f800000000000003eb333333f800000;
    local_9b68._s_0.Y = _UNK_1509252a8;
    pFVar12 = (FString *)
              (**(code **)(param_1->Object->_padding_ + 0xf0))
                        (param_1->Object,&local_9b88,"/Docking/DockingIndicator_Center",L".png");
    pFVar16 = (FSlateBrush *)
              FSlateImageBrush::FSlateImageBrush
                        (pFVar22,pFVar12,(FDeprecateVector2DParameter *)&local_res8._s_0,
                         (FLinearColor *)&local_9b68._s_0,NoTile,FullColor);
  }
  pFVar7 = ::FName::FName((FName *)&local_res10._s_0,"Docking.Cross.DockCenter_Hovered");
  FSlateStyleSet::Set<FSlateImageBrush>
            ((FSlateStyleSet *)pFVar1,*pFVar7,(FSlateImageBrush *)pFVar16);
  if ((pFVar22 != (FSlateImageBrush *)0x0) && ((void *)local_9b88._0_8_ != (void *)0x0)) {
    FMemory::Free((void *)local_9b88._0_8_);
  }
  pFVar1 = param_1->Object;
  pFVar18 = ::operator_new(0xb0);
  pFVar16 = pFVar23;
  if (pFVar18 != (FSlateNoResource *)0x0) {
    local_res8 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
    pFVar16 = (FSlateBrush *)
              FSlateNoResource::FSlateNoResource
                        (pFVar18,(FDeprecateVector2DParameter *)&local_res8._s_0);
  }
  pFVar7 = ::FName::FName((FName *)&local_res10._s_0,"Docking.Cross.BorderLeft");
  FSlateStyleSet::Set<FSlateNoResource>
            ((FSlateStyleSet *)pFVar1,*pFVar7,(FSlateNoResource *)pFVar16);
  pFVar1 = param_1->Object;
  pFVar18 = ::operator_new(0xb0);
  pFVar16 = pFVar23;
  if (pFVar18 != (FSlateNoResource *)0x0) {
    local_res8 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
    pFVar16 = (FSlateBrush *)
              FSlateNoResource::FSlateNoResource
                        (pFVar18,(FDeprecateVector2DParameter *)&local_res8._s_0);
  }
  pFVar7 = ::FName::FName((FName *)&local_res10._s_0,"Docking.Cross.BorderTop");
  FSlateStyleSet::Set<FSlateNoResource>
            ((FSlateStyleSet *)pFVar1,*pFVar7,(FSlateNoResource *)pFVar16);
  pFVar1 = param_1->Object;
  pFVar18 = ::operator_new(0xb0);
  pFVar16 = pFVar23;
  if (pFVar18 != (FSlateNoResource *)0x0) {
    local_res8 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
    pFVar16 = (FSlateBrush *)
              FSlateNoResource::FSlateNoResource
                        (pFVar18,(FDeprecateVector2DParameter *)&local_res8._s_0);
  }
  pFVar7 = ::FName::FName((FName *)&local_res10._s_0,"Docking.Cross.BorderRight");
  FSlateStyleSet::Set<FSlateNoResource>
            ((FSlateStyleSet *)pFVar1,*pFVar7,(FSlateNoResource *)pFVar16);
  pFVar1 = param_1->Object;
  pFVar18 = ::operator_new(0xb0);
  pFVar16 = pFVar23;
  if (pFVar18 != (FSlateNoResource *)0x0) {
    local_res8 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
    pFVar16 = (FSlateBrush *)
              FSlateNoResource::FSlateNoResource
                        (pFVar18,(FDeprecateVector2DParameter *)&local_res8._s_0);
  }
  pFVar7 = ::FName::FName((FName *)&local_res10._s_0,"Docking.Cross.BorderBottom");
  FSlateStyleSet::Set<FSlateNoResource>
            ((FSlateStyleSet *)pFVar1,*pFVar7,(FSlateNoResource *)pFVar16);
  pFVar1 = param_1->Object;
  pFVar18 = ::operator_new(0xb0);
  if (pFVar18 != (FSlateNoResource *)0x0) {
    local_res8 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
    pFVar23 = (FSlateBrush *)
              FSlateNoResource::FSlateNoResource
                        (pFVar18,(FDeprecateVector2DParameter *)&local_res8._s_0);
  }
  pFVar7 = ::FName::FName((FName *)&local_res10._s_0,"Docking.Cross.BorderCenter");
  FSlateStyleSet::Set<FSlateNoResource>
            ((FSlateStyleSet *)pFVar1,*pFVar7,(FSlateNoResource *)pFVar23);
  pFVar1 = param_1->Object;
  local_9b68._s_0.X = (double)___xmm_3f8000003f0000003f4000003f800000;
  local_9b68._s_0.Y = _UNK_150925308;
  pFVar7 = ::FName::FName((FName *)&local_res8._s_0,"Docking.Cross.PreviewWindowTint");
  FSlateStyleSet::Set((FSlateStyleSet *)pFVar1,*pFVar7,(FLinearColor *)&local_9b68._s_0);
  pFVar1 = param_1->Object;
  pFVar7 = ::FName::FName(&local_res18,"Docking.Cross.Tint");
  FSlateStyleSet::Set((FSlateStyleSet *)pFVar1,*pFVar7,&FLinearColor::White);
  pFVar1 = param_1->Object;
  pFVar7 = ::FName::FName(&local_res20,"Docking.Cross.HoveredTint");
  FSlateStyleSet::Set((FSlateStyleSet *)pFVar1,*pFVar7,&FLinearColor::White);
  pFVar8 = FButtonStyle::FButtonStyle(&local_7138);
  local_res8._s_0 = (TVector2<float>_u_0_s_0)CoreStyleConstants::Icon12x12;
  pFVar12 = (FString *)
            (**(code **)(param_1->Object->_padding_ + 0xf0))
                      (param_1->Object,&local_9b48,"Starship/Docking/OpenTabInWindow",L".svg");
  FSlateImageBrush::FSlateImageBrush
            ((FSlateImageBrush *)&local_99e8,pFVar12,(FDeprecateVector2DParameter *)&local_res8._s_0
             ,&FStyleColors::Foreground,NoTile,Vector);
  local_99e8._padding_ = (longlong)&___7FSlateVectorImageBrush__6B_;
  FSlateBrush::operator=(&pFVar8->Normal,&local_99e8);
  local_res8._s_0 = (TVector2<float>_u_0_s_0)CoreStyleConstants::Icon12x12;
  pFVar12 = (FString *)
            (**(code **)(param_1->Object->_padding_ + 0xf0))
                      (param_1->Object,&local_9b88,"Starship/Docking/OpenTabInWindow",L".svg");
  FSlateImageBrush::FSlateImageBrush
            ((FSlateImageBrush *)&local_9a98,pFVar12,(FDeprecateVector2DParameter *)&local_res8._s_0
             ,&FStyleColors::Foreground,NoTile,Vector);
  local_9a98._padding_ = (longlong)&___7FSlateVectorImageBrush__6B_;
  FSlateBrush::operator=(&pFVar8->Pressed,&local_9a98);
  local_res8._s_0 = (TVector2<float>_u_0_s_0)CoreStyleConstants::Icon12x12;
  pFVar12 = (FString *)
            (**(code **)(param_1->Object->_padding_ + 0xf0))
                      (param_1->Object,&local_9b68,"Starship/Docking/OpenTabInWindow",L".svg");
  FSlateImageBrush::FSlateImageBrush
            ((FSlateImageBrush *)&local_9728,pFVar12,(FDeprecateVector2DParameter *)&local_res8._s_0
             ,&FStyleColors::ForegroundHover,NoTile,Vector);
  local_9728._padding_ = (longlong)&___7FSlateVectorImageBrush__6B_;
  FSlateBrush::operator=(&pFVar8->Hovered,&local_9728);
  FButtonStyle::FButtonStyle(&local_5e38,pFVar8);
  local_9728._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_9728.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  if ((void *)local_9b68._s_0.X != (void *)0x0) {
    FMemory::Free((void *)local_9b68._s_0.X);
  }
  local_9a98._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_9a98.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  if ((void *)local_9b88._0_8_ != (void *)0x0) {
    FMemory::Free((void *)local_9b88._0_8_);
  }
  local_99e8._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_99e8.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  if ((FName)local_9b48._0_8_ != (FName)0x0) {
    FMemory::Free((void *)local_9b48._0_8_);
  }
  FButtonStyle::~FButtonStyle(&local_7138);
  pFVar1 = param_1->Object;
  pFVar7 = ::FName::FName((FName *)&local_res8._s_0,"Docking.OpenTabInWindow.Button");
  FSlateStyleSet::Set<FButtonStyle>((FSlateStyleSet *)pFVar1,*pFVar7,&local_5e38);
  FButtonStyle::~FButtonStyle(&local_5e38);
  FToolBarStyle::~FToolBarStyle((FToolBarStyle *)local_3f58);
  local_7f88._0_8_ = &___7FComboButtonStyle__6B_;
  local_7f88.MenuBorderBrush._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_7f88.MenuBorderBrush.ResourceHandle.Data.SharedReferenceCount.ReferenceController
            );
  local_7f88.DownArrowImage._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_7f88.DownArrowImage.ResourceHandle.Data.SharedReferenceCount.ReferenceController)
  ;
  FButtonStyle::~FButtonStyle((FButtonStyle *)((longlong)&local_7f88 + 0x10));
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)&local_7f88);
  local_84e8._0_8_ = &___7FComboButtonStyle__6B_;
  local_84e8.MenuBorderBrush._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_84e8.MenuBorderBrush.ResourceHandle.Data.SharedReferenceCount.ReferenceController
            );
  local_84e8.DownArrowImage._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_84e8.DownArrowImage.ResourceHandle.Data.SharedReferenceCount.ReferenceController)
  ;
  FButtonStyle::~FButtonStyle((FButtonStyle *)((longlong)&local_84e8 + 0x10));
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)&local_84e8);
  FButtonStyle::~FButtonStyle(&local_74c8);
  FButtonStyle::~FButtonStyle(&local_5aa8);
  local_8878._0_8_ = &___7FButtonStyle__6B_;
  local_8878.Disabled._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_8878.Disabled.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  local_8878.Pressed._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_8878.Pressed.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  local_8878.Hovered._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_8878.Hovered.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  local_8878.Normal._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_8878.Normal.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)&local_8878);
  FDockTabStyle::~FDockTabStyle(&local_6a18);
  FButtonStyle::~FButtonStyle(&local_6da8);
  return;
}

// SetupMultiboxStyles @ 14259eda0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
FStarshipCoreStyle::SetupMultiboxStyles(TSharedRef<FStarshipCoreStyle::FStyle,1> *param_1)

{
  FStyle *pFVar1;
  code *pcVar2;
  float fVar3;
  float fVar4;
  FName FVar5;
  FName FVar6;
  double dVar7;
  void *pvVar8;
  double dVar9;
  void *pvVar10;
  double dVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  void *pvVar14;
  double dVar15;
  EStyleColor EVar16;
  undefined2 uVar17;
  TVector2<float>_u_0 TVar18;
  undefined4 uVar19;
  FName *pFVar20;
  FEditableTextBoxStyle *pFVar21;
  TVector2<float>_u_0 TVar22;
  FSlateImageBrush *pFVar23;
  FString *pFVar24;
  FToolBarStyle *pFVar25;
  FTextBlockStyle *pFVar26;
  FStyleFonts *pFVar27;
  FComboButtonStyle *pFVar28;
  FCheckBoxStyle *pFVar29;
  FSlateBrush *pFVar30;
  FButtonStyle *pFVar31;
  FButtonStyle *pFVar32;
  FSlateBrush *pFVar33;
  FSlateRoundedBoxBrush *pFVar34;
  FSlateBrush *pFVar35;
  FSpinBoxStyle *pFVar36;
  FSlateBoxBrush *this;
  FSlateBorderBrush *this_00;
  FSlateNoResource *this_01;
  ulonglong uVar37;
  char cVar38;
  bool bVar39;
  TVector2<float>_u_0 local_res8;
  TVector2<float>_u_0 local_res10;
  TVector2<float>_u_0 local_res18;
  FName local_res20;
  undefined1 auStack_203d8 [24];
  double dStack_203c0;
  FLinearColor_u_0 FStack_203b8;
  undefined4 uStack_203a8;
  FLinearColor_u_0 FStack_203a0;
  undefined1 auStack_20390 [8];
  undefined8 uStack_20388;
  FLinearColor_u_0 FStack_20380;
  TVector2<float>_u_0 aTStack_20370 [2];
  FLinearColor_u_0 FStack_20360;
  FLinearColor_u_0 FStack_20350;
  void *apvStack_20340 [2];
  void *apvStack_20330 [2];
  FName FStack_20320;
  FSlateColor FStack_20318;
  FName FStack_20300;
  FName FStack_202f8;
  void *apvStack_202f0 [2];
  void *apvStack_202e0 [2];
  FSlateColor FStack_202d0;
  FName FStack_202b8;
  FName FStack_202b0;
  FName FStack_202a8;
  FName FStack_202a0;
  FMargin FStack_20298;
  FSlateColor FStack_20288;
  FSlateBrush FStack_20268;
  FSlateBrush FStack_201b8;
  FSlateBrush FStack_20108;
  FSlateBrush FStack_20058;
  FSlateBrush FStack_1ffa8;
  FSlateBrush FStack_1fef8;
  FSlateBrush FStack_1fe48;
  undefined **appuStack_1fd98 [20];
  TReferenceControllerBase<1> *pTStack_1fcf8;
  undefined **appuStack_1fce8 [20];
  TReferenceControllerBase<1> *pTStack_1fc48;
  undefined **appuStack_1fc38 [20];
  TReferenceControllerBase<1> *pTStack_1fb98;
  FSlateBrush FStack_1fb88;
  undefined **appuStack_1fad8 [20];
  TReferenceControllerBase<1> *pTStack_1fa38;
  undefined **appuStack_1fa28 [20];
  TReferenceControllerBase<1> *pTStack_1f988;
  undefined **appuStack_1f978 [20];
  TReferenceControllerBase<1> *pTStack_1f8d8;
  undefined **appuStack_1f8c8 [20];
  TReferenceControllerBase<1> *pTStack_1f828;
  FSlateBrush FStack_1f818;
  FSlateFontInfo FStack_1f768;
  undefined **appuStack_1f708 [20];
  TReferenceControllerBase<1> *pTStack_1f668;
  undefined **appuStack_1f658 [20];
  TReferenceControllerBase<1> *pTStack_1f5b8;
  undefined **appuStack_1f5a8 [20];
  TReferenceControllerBase<1> *pTStack_1f508;
  undefined **appuStack_1f4f8 [20];
  TReferenceControllerBase<1> *pTStack_1f458;
  undefined **appuStack_1f448 [20];
  TReferenceControllerBase<1> *pTStack_1f3a8;
  undefined **appuStack_1f398 [20];
  TReferenceControllerBase<1> *pTStack_1f2f8;
  undefined **appuStack_1f2e8 [20];
  TReferenceControllerBase<1> *pTStack_1f248;
  undefined **appuStack_1f238 [20];
  TReferenceControllerBase<1> *pTStack_1f198;
  FSlateBrush FStack_1f188;
  FTextBlockStyle FStack_1f0d8;
  FButtonStyle FStack_1edf8;
  FTextBlockStyle FStack_1ea68;
  FComboButtonStyle FStack_1e788;
  FComboButtonStyle FStack_1e228;
  FButtonStyle FStack_1dcc8;
  FCheckBoxStyle FStack_1d938;
  FComboButtonStyle FStack_1cfe8;
  FComboButtonStyle FStack_1ca88;
  FComboButtonStyle FStack_1c528;
  FButtonStyle FStack_1bfc8;
  FEditableTextBoxStyle FStack_1bc38;
  FButtonStyle FStack_1afb8;
  FButtonStyle FStack_1ac28;
  FButtonStyle FStack_1a898;
  FCheckBoxStyle FStack_1a508;
  FButtonStyle FStack_19bb8;
  FButtonStyle FStack_19828;
  FCheckBoxStyle FStack_19498;
  FSpinBoxStyle FStack_18b48;
  FCheckBoxStyle FStack_18628;
  FCheckBoxStyle FStack_17cd8;
  FCheckBoxStyle FStack_17388;
  FCheckBoxStyle FStack_16a38;
  FCheckBoxStyle FStack_160e8;
  FCheckBoxStyle FStack_15798;
  FCheckBoxStyle FStack_14e48;
  undefined1 auStack_144f8 [16044];
  float fStack_1064c;
  bool bStack_10648;
  FCheckBoxStyle FStack_105f8;
  FToolBarStyle local_fca8;
  undefined1 local_bda8 [16044];
  float local_7efc;
  FToolBarStyle local_7ea8;
  FToolBarStyle local_3fa8;
  undefined8 uStack_48;
  
  uStack_48 = 0x14259edbf;
  local_res8._s_0 = local_res8._s_0 & 0xffffffff00000000;
  pFVar1 = param_1->Object;
  pFVar20 = ::FName::FName(&FStack_202b0,"NormalEditableTextBox");
  pFVar21 = (FEditableTextBoxStyle *)
            (**(code **)(pFVar1->_padding_ + 0xa0))
                      (pFVar1,FEditableTextBoxStyle::TypeName,*pFVar20,0,1);
  uVar37 = (ulonglong)_tls_index;
  local_res18 = (TVector2<float>_u_0)pFVar21;
  if ((TVector2<float>_u_0)pFVar21 == (TVector2<float>_u_0)0x0) {
    pFVar21 = &::Default;
    local_res18 = (TVector2<float>_u_0)&::Default;
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar37 * 8) + 0x9d4c) <
         ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      FEditableTextBoxStyle::FEditableTextBoxStyle(&::Default);
      atexit(`FEditableTextBoxStyle::GetDefault'::__l2::_dynamic_atexit_destructor_for__Default__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  pFVar1 = param_1->Object;
  pFVar20 = ::FName::FName(&FStack_202a8,"NormalText");
  TVar22 = (TVector2<float>_u_0)
           (**(code **)(pFVar1->_padding_ + 0xa0))(pFVar1,FTextBlockStyle::TypeName,*pFVar20,0,1);
  if (TVar22 == (TVector2<float>_u_0)0x0) {
    local_res8 = TVar22;
    TVar22 = (TVector2<float>_u_0)FTextBlockStyle::GetDefault();
  }
  pFVar1 = param_1->Object;
  local_res8 = TVar22;
  pFVar20 = ::FName::FName(&FStack_202a0,"SmallButtonText");
  local_res20 = (FName)(**(code **)(pFVar1->_padding_ + 0xa0))
                                 (pFVar1,FTextBlockStyle::TypeName,*pFVar20,0,1);
  if (local_res20 == (FName)0x0) {
    local_res20 = (FName)FTextBlockStyle::GetDefault();
  }
  pFVar1 = param_1->Object;
  pcVar2 = *(code **)(pFVar1->_padding_ + 0x40);
  pFVar20 = ::FName::FName((FName *)&local_res10._s_0,"SelectionColor");
  (*pcVar2)(pFVar1,&FStack_202d0,*pFVar20,0,&FStyleDefaults::DefaultSlateColor,0);
  pFVar1 = param_1->Object;
  pcVar2 = *(code **)(pFVar1->_padding_ + 0x40);
  pFVar20 = ::FName::FName((FName *)&local_res10._s_0,"SelectionColor_Pressed");
  (*pcVar2)(pFVar1,&FStack_20318,*pFVar20,0,&FStyleDefaults::DefaultSlateColor,0);
  pFVar1 = param_1->Object;
  pcVar2 = *(code **)(pFVar1->_padding_ + 0x40);
  pFVar20 = ::FName::FName((FName *)&local_res10._s_0,"SelectionColor_Pressed");
  (*pcVar2)(pFVar1,&FStack_20288,*pFVar20,0,&FStyleDefaults::DefaultSlateColor,0);
  pFVar1 = param_1->Object;
  pFVar23 = ::operator_new(0xb0);
  dVar9 = _UNK_15076b1f8;
  pvVar8 = ___xmm_3f8000003f8000003f8000003f800000;
  bVar39 = pFVar23 == (FSlateImageBrush *)0x0;
  if (bVar39) {
    pFVar23 = (FSlateImageBrush *)0x0;
  }
  else {
    local_res10._s_0 = (TVector2<float>_u_0_s_0)CoreStyleConstants::Icon40x40;
    FStack_20350._0_8_ = ___xmm_3f8000003f8000003f8000003f800000;
    FStack_20350._8_8_ = _UNK_15076b1f8;
    pFVar24 = (FString *)
              (**(code **)(param_1->Object->_padding_ + 0xf0))
                        (param_1->Object,&FStack_20360,"Starship/Common/EditToolbar",L".svg");
    FSlateImageBrush::FSlateImageBrush
              (pFVar23,pFVar24,(FDeprecateVector2DParameter *)&local_res10._s_0,
               (FLinearColor *)&FStack_20350._s_0,NoTile,Vector);
    *(undefined ***)pFVar23 = &___7FSlateVectorImageBrush__6B_;
  }
  pFVar20 = ::FName::FName((FName *)&aTStack_20370[0]._s_0,"MultiBox.GenericToolBarIcon");
  FSlateStyleSet::Set<FSlateVectorImageBrush>
            ((FSlateStyleSet *)pFVar1,*pFVar20,(FSlateVectorImageBrush *)pFVar23);
  if ((!bVar39) && ((void *)FStack_20360._0_8_ != (void *)0x0)) {
    FMemory::Free((void *)FStack_20360._0_8_);
  }
  pFVar1 = param_1->Object;
  pFVar23 = ::operator_new(0xb0);
  bVar39 = pFVar23 == (FSlateImageBrush *)0x0;
  if (bVar39) {
    pFVar23 = (FSlateImageBrush *)0x0;
  }
  else {
    local_res10._s_0 = (TVector2<float>_u_0_s_0)CoreStyleConstants::Icon16x16;
    FStack_20350._0_8_ = pvVar8;
    FStack_20350._8_8_ = dVar9;
    pFVar24 = (FString *)
              (**(code **)(param_1->Object->_padding_ + 0xf0))
                        (param_1->Object,&FStack_20360,"Starship/Common/EditToolbar",L".svg");
    FSlateImageBrush::FSlateImageBrush
              (pFVar23,pFVar24,(FDeprecateVector2DParameter *)&local_res10._s_0,
               (FLinearColor *)&FStack_20350._s_0,NoTile,Vector);
    *(undefined ***)pFVar23 = &___7FSlateVectorImageBrush__6B_;
  }
  pFVar20 = ::FName::FName((FName *)&aTStack_20370[0]._s_0,"MultiBox.GenericToolBarIcon.Small");
  FSlateStyleSet::Set<FSlateVectorImageBrush>
            ((FSlateStyleSet *)pFVar1,*pFVar20,(FSlateVectorImageBrush *)pFVar23);
  if ((!bVar39) && ((void *)FStack_20360._0_8_ != (void *)0x0)) {
    FMemory::Free((void *)FStack_20360._0_8_);
  }
  pFVar1 = param_1->Object;
  FStack_20350._0_8_ = ___xmm_3f800000000000003f80000000000000;
  FStack_20350._8_8_ = _UNK_15076b198;
  pFVar20 = ::FName::FName((FName *)&local_res10._s_0,"MultiboxHookColor");
  FSlateStyleSet::Set((FSlateStyleSet *)pFVar1,*pFVar20,(FLinearColor *)&FStack_20350._s_0);
  pFVar25 = FToolBarStyle::FToolBarStyle(&local_7ea8);
  aTStack_20370[0] = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  local_res10 = (TVector2<float>_u_0)0x0;
  FStack_20350._0_8_ = 0;
  FStack_20350._8_8_ = 0;
  FSlateBrush::FSlateBrush
            (&FStack_1fb88,Image,(FName)0x0,(FMargin *)&FStack_20350._s_0,NoTile,NoImage,
             (FDeprecateVector2DParameter *)&aTStack_20370[0]._s_0,&FStyleColors::Panel,
             (UObject *)0x0,false);
  FStack_1fb88._padding_ = (longlong)&___7FSlateColorBrush__6B_;
  FSlateBrush::operator=(&pFVar25->BackgroundBrush,&FStack_1fb88);
  (pFVar25->BackgroundPadding).Left = 0.0;
  (pFVar25->BackgroundPadding).Top = 4.0;
  (pFVar25->BackgroundPadding).Right = 0.0;
  (pFVar25->BackgroundPadding).Bottom = 4.0;
  (pFVar25->ComboButtonPadding).Left = 4.0;
  (pFVar25->ComboButtonPadding).Top = 0.0;
  (pFVar25->ComboButtonPadding).Right = 4.0;
  (pFVar25->ComboButtonPadding).Bottom = 0.0;
  (pFVar25->ButtonPadding).Left = 2.0;
  (pFVar25->ButtonPadding).Top = 0.0;
  (pFVar25->ButtonPadding).Right = 2.0;
  (pFVar25->ButtonPadding).Bottom = 0.0;
  (pFVar25->CheckBoxPadding).Left = 4.0;
  (pFVar25->CheckBoxPadding).Top = 0.0;
  (pFVar25->CheckBoxPadding).Right = 4.0;
  (pFVar25->CheckBoxPadding).Bottom = 0.0;
  aTStack_20370[0] = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  auStack_20390._0_4_ = 0;
  auStack_20390._4_4_ = 0;
  uStack_20388._0_4_ = 0.0;
  uStack_20388._4_4_ = 0.0;
  local_res10 = (TVector2<float>_u_0)0x0;
  FSlateBrush::FSlateBrush
            (&FStack_1f188,Image,(FName)0x0,(FMargin *)auStack_20390,NoTile,NoImage,
             (FDeprecateVector2DParameter *)&aTStack_20370[0]._s_0,&FStyleColors::Background,
             (UObject *)0x0,false);
  FStack_1f188._padding_ = (longlong)&___7FSlateColorBrush__6B_;
  FSlateBrush::operator=(&pFVar25->SeparatorBrush,&FStack_1f188);
  (pFVar25->SeparatorPadding).Left = 1.0;
  (pFVar25->SeparatorPadding).Top = 0.0;
  (pFVar25->SeparatorPadding).Right = 1.0;
  (pFVar25->SeparatorPadding).Bottom = 0.0;
  pFVar26 = FTextBlockStyle::FTextBlockStyle(&FStack_1f0d8,(FTextBlockStyle *)TVar22);
  pFVar27 = FStyleFonts::Get();
  FSlateFontInfo::operator=(&pFVar26->Font,&pFVar27->Normal);
  FTextBlockStyle::operator=(&pFVar25->LabelStyle,pFVar26);
  pFVar21 = FEditableTextBoxStyle::FEditableTextBoxStyle(&FStack_1bc38,pFVar21);
  pFVar27 = FStyleFonts::Get();
  FSlateFontInfo::operator=(&(pFVar21->TextStyle).Font,&pFVar27->Normal);
  FEditableTextBoxStyle::operator=(&pFVar25->EditableTextStyle,pFVar21);
  pFVar1 = param_1->Object;
  pFVar20 = ::FName::FName(&FStack_202b8,"ComboButton");
  pFVar28 = (FComboButtonStyle *)
            (**(code **)(pFVar1->_padding_ + 0xa0))(pFVar1,FComboButtonStyle::TypeName,*pFVar20,0,1)
  ;
  if (pFVar28 == (FComboButtonStyle *)0x0) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar37 * 8) + 0x9d4c) <
         ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      FComboButtonStyle::FComboButtonStyle(&::Default);
      atexit(`FComboButtonStyle::GetDefault'::__l2::_dynamic_atexit_destructor_for__Default__);
      _Init_thread_footer(&::_TSS0);
    }
    pFVar28 = &::Default;
  }
  FComboButtonStyle::operator=(&pFVar25->ComboButtonStyle,pFVar28);
  (pFVar25->BlockPadding).Left = 2.0;
  (pFVar25->BlockPadding).Top = 2.0;
  (pFVar25->BlockPadding).Right = 4.0;
  (pFVar25->BlockPadding).Bottom = 4.0;
  (pFVar25->IndentedBlockPadding).Left = 18.0;
  (pFVar25->IndentedBlockPadding).Top = 2.0;
  (pFVar25->IndentedBlockPadding).Right = 4.0;
  (pFVar25->IndentedBlockPadding).Bottom = 4.0;
  FToolBarStyle::FToolBarStyle((FToolBarStyle *)local_bda8,pFVar25);
  FStack_1bc38._padding_ = (longlong)&___7FEditableTextBoxStyle__6B_;
  FScrollBarStyle::~FScrollBarStyle(&FStack_1bc38.ScrollBarStyle);
  FTextBlockStyle::~FTextBlockStyle(&FStack_1bc38.TextStyle);
  FStack_1bc38.BackgroundImageReadOnly._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_1bc38.BackgroundImageReadOnly.ResourceHandle.Data.SharedReferenceCount.
             ReferenceController);
  FStack_1bc38.BackgroundImageFocused._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_1bc38.BackgroundImageFocused.ResourceHandle.Data.SharedReferenceCount.
             ReferenceController);
  FStack_1bc38.BackgroundImageHovered._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_1bc38.BackgroundImageHovered.ResourceHandle.Data.SharedReferenceCount.
             ReferenceController);
  FStack_1bc38.BackgroundImageNormal._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_1bc38.BackgroundImageNormal.ResourceHandle.Data.SharedReferenceCount.
             ReferenceController);
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)&FStack_1bc38);
  FStack_1f0d8._0_8_ = &___7FTextBlockStyle__6B_;
  FStack_1f0d8.UnderlineBrush._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_1f0d8.UnderlineBrush.ResourceHandle.Data.SharedReferenceCount.
             ReferenceController);
  FStack_1f0d8.StrikeBrush._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_1f0d8.StrikeBrush.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  FStack_1f0d8.HighlightShape._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_1f0d8.HighlightShape.ResourceHandle.Data.SharedReferenceCount.
             ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_1f0d8.Font.CompositeFont.SharedReferenceCount.ReferenceController);
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)&FStack_1f0d8);
  FStack_1f188._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_1f188.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  FStack_1fb88._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_1fb88.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  FToolBarStyle::~FToolBarStyle(&local_7ea8);
  pFVar29 = FCheckBoxStyle::FCheckBoxStyle(&FStack_1d938);
  (pFVar29->CheckBoxType).Value = '\x01';
  local_res10 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  pFVar30 = (FSlateBrush *)
            FSlateNoResource::FSlateNoResource
                      ((FSlateNoResource *)appuStack_1fa28,
                       (FDeprecateVector2DParameter *)&local_res10._s_0);
  FSlateBrush::operator=(&pFVar29->UncheckedImage,pFVar30);
  dVar7 = _UNK_15076b0c8;
  FVar5 = ___xmm_3e8000003e8000003e8000003e800000;
  auStack_20390._0_4_ = ___xmm_3e8000003e8000003e8000003e800000;
  auStack_20390._4_4_ = _UNK_15076b0c4;
  uStack_20388 = _UNK_15076b0c8;
  pFVar24 = (FString *)
            (**(code **)(param_1->Object->_padding_ + 0xf0))
                      (param_1->Object,&FStack_203b8,"Common/RoundedSelection_16x",L".png");
  pFVar30 = (FSlateBrush *)
            FSlateBoxBrush::FSlateBoxBrush
                      ((FSlateBoxBrush *)appuStack_1f2e8,pFVar24,(FMargin *)auStack_20390,
                       &FStack_20318,FullColor);
  FSlateBrush::operator=(&pFVar29->UncheckedPressedImage,pFVar30);
  FVar6 = ___xmm_3e8000003e8000003e8000003e800000;
  ___xmm_3e8000003e8000003e8000003e800000 = FVar5.ComparisonIndex.Value;
  _UNK_15076b0c4 = FVar5.Number;
  auStack_20390._0_4_ = ___xmm_3e8000003e8000003e8000003e800000;
  auStack_20390._4_4_ = _UNK_15076b0c4;
  uStack_20388 = dVar7;
  ___xmm_3e8000003e8000003e8000003e800000 = FVar6;
  pFVar24 = (FString *)
            (**(code **)(param_1->Object->_padding_ + 0xf0))
                      (param_1->Object,apvStack_20340,"Common/RoundedSelection_16x",L".png");
  pFVar30 = (FSlateBrush *)
            FSlateBoxBrush::FSlateBoxBrush
                      ((FSlateBoxBrush *)appuStack_1f398,pFVar24,(FMargin *)auStack_20390,
                       &FStack_202d0,FullColor);
  FSlateBrush::operator=(&pFVar29->UncheckedHoveredImage,pFVar30);
  FVar6 = ___xmm_3e8000003e8000003e8000003e800000;
  ___xmm_3e8000003e8000003e8000003e800000 = FVar5.ComparisonIndex.Value;
  _UNK_15076b0c4 = FVar5.Number;
  auStack_20390._0_4_ = ___xmm_3e8000003e8000003e8000003e800000;
  auStack_20390._4_4_ = _UNK_15076b0c4;
  uStack_20388 = dVar7;
  ___xmm_3e8000003e8000003e8000003e800000 = FVar6;
  pFVar24 = (FString *)
            (**(code **)(param_1->Object->_padding_ + 0xf0))
                      (param_1->Object,apvStack_202e0,"Common/RoundedSelection_16x",L".png");
  pFVar30 = (FSlateBrush *)
            FSlateBoxBrush::FSlateBoxBrush
                      ((FSlateBoxBrush *)appuStack_1f448,pFVar24,(FMargin *)auStack_20390,
                       &FStack_20318,FullColor);
  FSlateBrush::operator=(&pFVar29->CheckedImage,pFVar30);
  FVar6 = ___xmm_3e8000003e8000003e8000003e800000;
  ___xmm_3e8000003e8000003e8000003e800000 = FVar5.ComparisonIndex.Value;
  _UNK_15076b0c4 = FVar5.Number;
  auStack_20390._0_4_ = ___xmm_3e8000003e8000003e8000003e800000;
  auStack_20390._4_4_ = _UNK_15076b0c4;
  uStack_20388 = dVar7;
  ___xmm_3e8000003e8000003e8000003e800000 = FVar6;
  pFVar24 = (FString *)
            (**(code **)(param_1->Object->_padding_ + 0xf0))
                      (param_1->Object,apvStack_202f0,"Common/RoundedSelection_16x",L".png");
  pFVar30 = (FSlateBrush *)
            FSlateBoxBrush::FSlateBoxBrush
                      ((FSlateBoxBrush *)appuStack_1f4f8,pFVar24,(FMargin *)auStack_20390,
                       &FStack_20318,FullColor);
  FSlateBrush::operator=(&pFVar29->CheckedHoveredImage,pFVar30);
  FVar6 = ___xmm_3e8000003e8000003e8000003e800000;
  ___xmm_3e8000003e8000003e8000003e800000 = FVar5.ComparisonIndex.Value;
  _UNK_15076b0c4 = FVar5.Number;
  auStack_20390._0_4_ = ___xmm_3e8000003e8000003e8000003e800000;
  auStack_20390._4_4_ = _UNK_15076b0c4;
  uStack_20388 = dVar7;
  ___xmm_3e8000003e8000003e8000003e800000 = FVar6;
  pFVar24 = (FString *)
            (**(code **)(param_1->Object->_padding_ + 0xf0))
                      (param_1->Object,aTStack_20370,"Common/RoundedSelection_16x",L".png");
  pFVar30 = (FSlateBrush *)
            FSlateBoxBrush::FSlateBoxBrush
                      ((FSlateBoxBrush *)appuStack_1f5a8,pFVar24,(FMargin *)auStack_20390,
                       &FStack_202d0,FullColor);
  FSlateBrush::operator=(&pFVar29->CheckedPressedImage,pFVar30);
  FCheckBoxStyle::FCheckBoxStyle(&FStack_16a38,pFVar29);
  appuStack_1f5a8[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_1f508)
  ;
  if (aTStack_20370[0] != (TVector2<float>_u_0)0x0) {
    FMemory::Free((void *)aTStack_20370[0]);
  }
  appuStack_1f4f8[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_1f458)
  ;
  if (apvStack_202f0[0] != (void *)0x0) {
    FMemory::Free(apvStack_202f0[0]);
  }
  appuStack_1f448[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_1f3a8)
  ;
  if (apvStack_202e0[0] != (void *)0x0) {
    FMemory::Free(apvStack_202e0[0]);
  }
  appuStack_1f398[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_1f2f8)
  ;
  if (apvStack_20340[0] != (void *)0x0) {
    FMemory::Free(apvStack_20340[0]);
  }
  appuStack_1f2e8[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_1f248)
  ;
  if ((void *)FStack_203b8._0_8_ != (void *)0x0) {
    FMemory::Free((void *)FStack_203b8._0_8_);
  }
  appuStack_1fa28[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_1f988)
  ;
  FCheckBoxStyle::~FCheckBoxStyle(&FStack_1d938);
  FCheckBoxStyle::operator=((FCheckBoxStyle *)(local_bda8 + 0x1180),&FStack_16a38);
  pFVar31 = FButtonStyle::FButtonStyle((FButtonStyle *)&FStack_1d938);
  local_res10 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  pFVar30 = (FSlateBrush *)
            FSlateNoResource::FSlateNoResource
                      ((FSlateNoResource *)appuStack_1f398,
                       (FDeprecateVector2DParameter *)&local_res10._s_0);
  FSlateBrush::operator=(&pFVar31->Normal,pFVar30);
  FVar6 = ___xmm_3e8000003e8000003e8000003e800000;
  ___xmm_3e8000003e8000003e8000003e800000 = FVar5.ComparisonIndex.Value;
  _UNK_15076b0c4 = FVar5.Number;
  FStack_203b8._s_0.R = (float)___xmm_3e8000003e8000003e8000003e800000;
  FStack_203b8._s_0.G = (float)_UNK_15076b0c4;
  FStack_203b8._8_8_ = dVar7;
  ___xmm_3e8000003e8000003e8000003e800000 = FVar6;
  pFVar24 = (FString *)
            (**(code **)(param_1->Object->_padding_ + 0xf0))
                      (param_1->Object,&FStack_20380,"Common/RoundedSelection_16x",L".png");
  pFVar30 = (FSlateBrush *)
            FSlateBoxBrush::FSlateBoxBrush
                      ((FSlateBoxBrush *)appuStack_1f2e8,pFVar24,(FMargin *)&FStack_203b8._s_0,
                       &FStack_20318,FullColor);
  FSlateBrush::operator=(&pFVar31->Pressed,pFVar30);
  FVar6 = ___xmm_3e8000003e8000003e8000003e800000;
  ___xmm_3e8000003e8000003e8000003e800000 = FVar5.ComparisonIndex.Value;
  _UNK_15076b0c4 = FVar5.Number;
  FStack_203b8._s_0.R = (float)___xmm_3e8000003e8000003e8000003e800000;
  FStack_203b8._s_0.G = (float)_UNK_15076b0c4;
  FStack_203b8._8_8_ = dVar7;
  ___xmm_3e8000003e8000003e8000003e800000 = FVar6;
  pFVar24 = (FString *)
            (**(code **)(param_1->Object->_padding_ + 0xf0))
                      (param_1->Object,apvStack_20330,"Common/RoundedSelection_16x",L".png");
  pFVar30 = (FSlateBrush *)
            FSlateBoxBrush::FSlateBoxBrush
                      ((FSlateBoxBrush *)appuStack_1fa28,pFVar24,(FMargin *)&FStack_203b8._s_0,
                       &FStack_202d0,FullColor);
  FSlateBrush::operator=(&pFVar31->Hovered,pFVar30);
  (pFVar31->NormalPadding).Left = 2.0;
  (pFVar31->NormalPadding).Top = 2.0;
  (pFVar31->NormalPadding).Right = 2.0;
  (pFVar31->NormalPadding).Bottom = 2.0;
  (pFVar31->PressedPadding).Left = 2.0;
  (pFVar31->PressedPadding).Top = 3.0;
  (pFVar31->PressedPadding).Right = 2.0;
  (pFVar31->PressedPadding).Bottom = 1.0;
  uVar13 = _UNK_15090c6d8;
  uVar12 = ___xmm_3f8000003f800000000000003f800000;
  *(undefined8 *)&(pFVar31->NormalForeground).SpecifiedColor.field0_0x0 =
       ___xmm_3f8000003f800000000000003f800000;
  *(undefined8 *)((longlong)&(pFVar31->NormalForeground).SpecifiedColor.field0_0x0 + 8) = uVar13;
  uStack_203a8._0_1_ = (undefined1)2;
  uStack_203a8._1_1_ = (undefined1)(2 >> 8);
  (pFVar31->NormalForeground).ColorUseRule = (undefined1)uStack_203a8;
  (pFVar31->NormalForeground).ColorTableId = uStack_203a8._1_1_;
  *(undefined2 *)&(pFVar31->NormalForeground).field_0x12 = uStack_203a8._2_2_;
  *(undefined8 *)&(pFVar31->PressedForeground).SpecifiedColor.field0_0x0 = uVar12;
  *(undefined8 *)((longlong)&(pFVar31->PressedForeground).SpecifiedColor.field0_0x0 + 8) = uVar13;
  uStack_203a8._0_1_ = (undefined1)2;
  uStack_203a8._1_1_ = (undefined1)(2 >> 8);
  (pFVar31->PressedForeground).ColorUseRule = (undefined1)uStack_203a8;
  (pFVar31->PressedForeground).ColorTableId = uStack_203a8._1_1_;
  *(undefined2 *)&(pFVar31->PressedForeground).field_0x12 = uStack_203a8._2_2_;
  *(undefined8 *)&(pFVar31->HoveredForeground).SpecifiedColor.field0_0x0 = uVar12;
  *(undefined8 *)((longlong)&(pFVar31->HoveredForeground).SpecifiedColor.field0_0x0 + 8) = uVar13;
  uStack_203a8._0_1_ = (undefined1)2;
  uStack_203a8._1_1_ = (undefined1)(2 >> 8);
  (pFVar31->HoveredForeground).ColorUseRule = (undefined1)uStack_203a8;
  (pFVar31->HoveredForeground).ColorTableId = uStack_203a8._1_1_;
  *(undefined2 *)&(pFVar31->HoveredForeground).field_0x12 = uStack_203a8._2_2_;
  *(undefined8 *)&(pFVar31->DisabledForeground).SpecifiedColor.field0_0x0 = uVar12;
  *(undefined8 *)((longlong)&(pFVar31->DisabledForeground).SpecifiedColor.field0_0x0 + 8) = uVar13;
  uStack_203a8 = CONCAT22(uStack_203a8._2_2_,2);
  uVar19 = uStack_203a8;
  uStack_203a8._0_1_ = (undefined1)2;
  uStack_203a8._1_1_ = (undefined1)(2 >> 8);
  (pFVar31->DisabledForeground).ColorUseRule = (undefined1)uStack_203a8;
  (pFVar31->DisabledForeground).ColorTableId = uStack_203a8._1_1_;
  *(undefined2 *)&(pFVar31->DisabledForeground).field_0x12 = uStack_203a8._2_2_;
  uStack_203a8 = uVar19;
  FButtonStyle::FButtonStyle(&FStack_1ac28,pFVar31);
  appuStack_1fa28[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_1f988)
  ;
  if (apvStack_20330[0] != (void *)0x0) {
    FMemory::Free(apvStack_20330[0]);
  }
  appuStack_1f2e8[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_1f248)
  ;
  if ((void *)FStack_20380._0_8_ != (void *)0x0) {
    FMemory::Free((void *)FStack_20380._0_8_);
  }
  appuStack_1f398[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_1f2f8)
  ;
  FStack_1d938._0_8_ = &___7FButtonStyle__6B_;
  FStack_1d938.CheckedImage._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_1d938.CheckedImage.ResourceHandle.Data.SharedReferenceCount.ReferenceController)
  ;
  FStack_1d938.UncheckedPressedImage._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_1d938.UncheckedPressedImage.ResourceHandle.Data.SharedReferenceCount.
             ReferenceController);
  FStack_1d938.UncheckedHoveredImage._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_1d938.UncheckedHoveredImage.ResourceHandle.Data.SharedReferenceCount.
             ReferenceController);
  FStack_1d938.UncheckedImage._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_1d938.UncheckedImage.ResourceHandle.Data.SharedReferenceCount.
             ReferenceController);
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)&FStack_1d938);
  FButtonStyle::operator=((FButtonStyle *)(local_bda8 + 0x3270),&FStack_1ac28);
  local_res10._s_0.X = CoreStyleConstants::Icon40x40._0_4_;
  local_res10._s_0.Y = CoreStyleConstants::Icon40x40._4_4_;
  local_bda8._16040_4_ = local_res10._s_0.X;
  local_7efc = local_res10._s_0.Y;
  local_res10._s_0 = (TVector2<float>_u_0_s_0)CoreStyleConstants::Icon16x16;
  local_bda8[0x3da0] = false;
  FStack_20380._0_8_ = pvVar8;
  FStack_20380._8_8_ = dVar9;
  pFVar24 = (FString *)
            (**(code **)(param_1->Object->_padding_ + 0xf0))
                      (param_1->Object,apvStack_20330,"Common/menu",L".svg");
  FSlateImageBrush::FSlateImageBrush
            ((FSlateImageBrush *)&FStack_1fb88,pFVar24,
             (FDeprecateVector2DParameter *)&local_res10._s_0,(FLinearColor *)&FStack_20380._s_0,
             NoTile,Vector);
  FStack_1fb88._padding_ = (longlong)&___7FSlateVectorImageBrush__6B_;
  FSlateBrush::operator=((FSlateBrush *)(local_bda8 + 0x3770),&FStack_1fb88);
  FStack_1fb88._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_1fb88.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  if (apvStack_20330[0] != (void *)0x0) {
    FMemory::Free(apvStack_20330[0]);
  }
  pFVar1 = param_1->Object;
  pFVar20 = ::FName::FName((FName *)&local_res10._s_0,"ToolBar");
  FSlateStyleSet::Set<FToolBarStyle>((FSlateStyleSet *)pFVar1,*pFVar20,(FToolBarStyle *)local_bda8);
  pFVar1 = param_1->Object;
  pFVar20 = ::FName::FName((FName *)auStack_20390,"SimpleButton");
  pFVar31 = (FButtonStyle *)
            (**(code **)(pFVar1->_padding_ + 0xa0))(pFVar1,FButtonStyle::TypeName,*pFVar20,0,1);
  if (((pFVar31 == (FButtonStyle *)0x0) &&
      (pFVar31 = &::Default,
      *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar37 * 8) + 0x9d4c) < ::_TSS0))
     && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    FButtonStyle::FButtonStyle(&::Default);
    atexit(`FButtonStyle::GetDefault'::__l2::_dynamic_atexit_destructor_for__Default__);
    _Init_thread_footer(&::_TSS0);
  }
  pFVar32 = FButtonStyle::FButtonStyle(&FStack_1edf8,pFVar31);
  (pFVar32->NormalForeground).SpecifiedColor.field0_0x0._s_0 =
       (FLinearColor_u_0_s_0)FStyleColors::Foreground.SpecifiedColor.field0_0x0;
  EVar16 = FStyleColors::Foreground.ColorTableId;
  uVar17 = FStyleColors::Foreground._18_2_;
  (pFVar32->NormalForeground).ColorUseRule = FStyleColors::Foreground.ColorUseRule;
  (pFVar32->NormalForeground).ColorTableId = EVar16;
  *(undefined2 *)&(pFVar32->NormalForeground).field_0x12 = uVar17;
  (pFVar32->PressedForeground).SpecifiedColor.field0_0x0._s_0 =
       (FLinearColor_u_0_s_0)FStyleColors::ForegroundHover.SpecifiedColor.field0_0x0;
  EVar16 = FStyleColors::ForegroundHover.ColorTableId;
  uVar17 = FStyleColors::ForegroundHover._18_2_;
  (pFVar32->PressedForeground).ColorUseRule = FStyleColors::ForegroundHover.ColorUseRule;
  (pFVar32->PressedForeground).ColorTableId = EVar16;
  *(undefined2 *)&(pFVar32->PressedForeground).field_0x12 = uVar17;
  (pFVar32->HoveredForeground).SpecifiedColor.field0_0x0._s_0 =
       (FLinearColor_u_0_s_0)FStyleColors::ForegroundHover.SpecifiedColor.field0_0x0;
  EVar16 = FStyleColors::ForegroundHover.ColorTableId;
  uVar17 = FStyleColors::ForegroundHover._18_2_;
  (pFVar32->HoveredForeground).ColorUseRule = FStyleColors::ForegroundHover.ColorUseRule;
  (pFVar32->HoveredForeground).ColorTableId = EVar16;
  *(undefined2 *)&(pFVar32->HoveredForeground).field_0x12 = uVar17;
  (pFVar32->DisabledForeground).SpecifiedColor.field0_0x0._s_0 =
       (FLinearColor_u_0_s_0)FStyleColors::Foreground.SpecifiedColor.field0_0x0;
  EVar16 = FStyleColors::Foreground.ColorTableId;
  uVar17 = FStyleColors::Foreground._18_2_;
  (pFVar32->DisabledForeground).ColorUseRule = FStyleColors::Foreground.ColorUseRule;
  (pFVar32->DisabledForeground).ColorTableId = EVar16;
  *(undefined2 *)&(pFVar32->DisabledForeground).field_0x12 = uVar17;
  (pFVar32->NormalPadding).Left = 8.0;
  (pFVar32->NormalPadding).Top = 4.0;
  (pFVar32->NormalPadding).Right = 8.0;
  (pFVar32->NormalPadding).Bottom = 4.0;
  (pFVar32->PressedPadding).Left = 8.0;
  (pFVar32->PressedPadding).Top = 5.0;
  (pFVar32->PressedPadding).Right = 8.0;
  (pFVar32->PressedPadding).Bottom = 3.0;
  FButtonStyle::FButtonStyle(&FStack_1afb8,pFVar32);
  FStack_1edf8._0_8_ = &___7FButtonStyle__6B_;
  FStack_1edf8.Disabled._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_1edf8.Disabled.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  FStack_1edf8.Pressed._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_1edf8.Pressed.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  FStack_1edf8.Hovered._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_1edf8.Hovered.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  FStack_1edf8.Normal._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_1edf8.Normal.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)&FStack_1edf8);
  pFVar1 = param_1->Object;
  pFVar20 = ::FName::FName(&FStack_20300,"SimpleComboButton");
  pFVar28 = (FComboButtonStyle *)
            (**(code **)(pFVar1->_padding_ + 0xa0))(pFVar1,FComboButtonStyle::TypeName,*pFVar20,0,1)
  ;
  if (((pFVar28 == (FComboButtonStyle *)0x0) &&
      (pFVar28 = &::Default,
      *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar37 * 8) + 0x9d4c) < ::_TSS0))
     && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    FComboButtonStyle::FComboButtonStyle(&::Default);
    atexit(`FComboButtonStyle::GetDefault'::__l2::_dynamic_atexit_destructor_for__Default__);
    _Init_thread_footer(&::_TSS0);
  }
  pFVar28 = FComboButtonStyle::FComboButtonStyle(&FStack_1c528,pFVar28);
  pFVar30 = (FSlateBrush *)0x0;
  (pFVar28->DownArrowPadding).Left = 1.0;
  (pFVar28->DownArrowPadding).Top = 0.0;
  (pFVar28->DownArrowPadding).Right = 2.0;
  (pFVar28->DownArrowPadding).Bottom = 0.0;
  FComboButtonStyle::FComboButtonStyle(&FStack_1e788,pFVar28);
  FStack_1c528._0_8_ = &___7FComboButtonStyle__6B_;
  FStack_1c528.MenuBorderBrush._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_1c528.MenuBorderBrush.ResourceHandle.Data.SharedReferenceCount.
             ReferenceController);
  FStack_1c528.DownArrowImage._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_1c528.DownArrowImage.ResourceHandle.Data.SharedReferenceCount.
             ReferenceController);
  FButtonStyle::~FButtonStyle((FButtonStyle *)((longlong)&FStack_1c528 + 0x10));
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)&FStack_1c528);
  pFVar33 = ::operator_new(0xb0);
  if (pFVar33 != (FSlateBrush *)0x0) {
    aTStack_20370[0] = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
    local_res10 = (TVector2<float>_u_0)0x0;
    FStack_20380._0_8_ = (void *)0x0;
    FStack_20380._8_8_ = 0;
    FSlateBrush::FSlateBrush
              (pFVar33,Image,(FName)0x0,(FMargin *)&FStack_20380._s_0,NoTile,NoImage,
               (FDeprecateVector2DParameter *)&aTStack_20370[0]._s_0,&FStyleColors::Panel,
               (UObject *)0x0,false);
    pFVar33->_padding_ = (longlong)&___7FSlateColorBrush__6B_;
    pFVar30 = pFVar33;
  }
  pFVar25 = FToolBarStyle::FToolBarStyle(&local_3fa8);
  FSlateBrush::operator=(&pFVar25->BackgroundBrush,pFVar30);
  (pFVar25->BackgroundPadding).Left = 4.0;
  (pFVar25->BackgroundPadding).Top = 6.0;
  (pFVar25->BackgroundPadding).Right = 4.0;
  (pFVar25->BackgroundPadding).Bottom = 6.0;
  (pFVar25->ComboButtonPadding).Left = 0.0;
  (pFVar25->ComboButtonPadding).Top = 0.0;
  (pFVar25->ComboButtonPadding).Right = 0.0;
  (pFVar25->ComboButtonPadding).Bottom = 0.0;
  (pFVar25->ButtonPadding).Left = 4.0;
  (pFVar25->ButtonPadding).Top = 0.0;
  (pFVar25->ButtonPadding).Right = 4.0;
  (pFVar25->ButtonPadding).Bottom = 0.0;
  (pFVar25->CheckBoxPadding).Left = 8.0;
  (pFVar25->CheckBoxPadding).Top = 0.0;
  (pFVar25->CheckBoxPadding).Right = 8.0;
  (pFVar25->CheckBoxPadding).Bottom = 0.0;
  aTStack_20370[0] = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  FStack_203b8._0_8_ = 0;
  FStack_203b8._8_8_ = 0;
  local_res10 = (TVector2<float>_u_0)0x0;
  FSlateBrush::FSlateBrush
            (&FStack_20268,Image,(FName)0x0,(FMargin *)&FStack_203b8._s_0,NoTile,NoImage,
             (FDeprecateVector2DParameter *)&aTStack_20370[0]._s_0,&FStyleColors::Recessed,
             (UObject *)0x0,false);
  FStack_20268._padding_ = (longlong)&___7FSlateColorBrush__6B_;
  FSlateBrush::operator=(&pFVar25->SeparatorBrush,&FStack_20268);
  (pFVar25->SeparatorPadding).Left = 4.0;
  (pFVar25->SeparatorPadding).Top = -5.0;
  (pFVar25->SeparatorPadding).Right = 4.0;
  (pFVar25->SeparatorPadding).Bottom = -5.0;
  pFVar26 = FTextBlockStyle::FTextBlockStyle(&FStack_1ea68,(FTextBlockStyle *)local_res8);
  FTextBlockStyle::operator=(&pFVar25->LabelStyle,pFVar26);
  FComboButtonStyle::operator=(&pFVar25->ComboButtonStyle,&FStack_1e788);
  TVar22 = local_res18;
  (pFVar25->LabelPadding).Left = 4.0;
  (pFVar25->LabelPadding).Top = 0.0;
  (pFVar25->LabelPadding).Right = 0.0;
  (pFVar25->LabelPadding).Bottom = 0.0;
  pFVar21 = FEditableTextBoxStyle::FEditableTextBoxStyle
                      ((FEditableTextBoxStyle *)&local_fca8,(FEditableTextBoxStyle *)local_res18);
  FEditableTextBoxStyle::operator=(&pFVar25->EditableTextStyle,pFVar21);
  FToolBarStyle::FToolBarStyle((FToolBarStyle *)auStack_144f8,pFVar25);
  FEditableTextBoxStyle::~FEditableTextBoxStyle((FEditableTextBoxStyle *)&local_fca8);
  FTextBlockStyle::~FTextBlockStyle(&FStack_1ea68);
  FStack_20268._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_20268.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  FToolBarStyle::~FToolBarStyle(&local_3fa8);
  auStack_144f8._14160_4_ = ___xmm_c0c00000c0800000c0c0000000000000;
  auStack_144f8._14164_4_ = _UNK_150925464;
  auStack_144f8._14168_4_ = _UNK_150925468;
  auStack_144f8._14172_4_ = _UNK_15092546c;
  auStack_144f8._15992_4_ = 0.0;
  auStack_144f8._15996_4_ = 0.0;
  auStack_144f8._16000_4_ = 0.0;
  auStack_144f8._16004_4_ = 0.0;
  auStack_144f8[0x3e88] = true;
  pFVar28 = FComboButtonStyle::FComboButtonStyle
                      (&FStack_1cfe8,(FComboButtonStyle *)(auStack_144f8 + 0x1ad0));
  (pFVar28->ContentPadding).Left = 4.0;
  (pFVar28->ContentPadding).Top = 0.0;
  (pFVar28->ContentPadding).Right = 0.0;
  (pFVar28->ContentPadding).Bottom = 0.0;
  (pFVar28->DownArrowPadding).Left = 4.0;
  (pFVar28->DownArrowPadding).Top = 0.0;
  (pFVar28->DownArrowPadding).Right = 0.0;
  (pFVar28->DownArrowPadding).Bottom = 0.0;
  pFVar32 = FButtonStyle::FButtonStyle(&FStack_19bb8);
  local_res18 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  local_res10 = (TVector2<float>_u_0)0x0;
  FStack_203b8._0_8_ = 0;
  FStack_203b8._8_8_ = 0;
  FSlateBrush::FSlateBrush
            (&FStack_1ffa8,Image,(FName)0x0,(FMargin *)&FStack_203b8._s_0,NoTile,NoImage,
             (FDeprecateVector2DParameter *)&local_res18._s_0,&FStyleColors::Dropdown,(UObject *)0x0
             ,false);
  FStack_1ffa8._padding_ = (longlong)&___7FSlateColorBrush__6B_;
  FSlateBrush::operator=(&pFVar32->Normal,&FStack_1ffa8);
  local_res18 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  local_res10 = (TVector2<float>_u_0)0x0;
  FStack_203b8._0_8_ = 0;
  FStack_203b8._8_8_ = 0;
  FSlateBrush::FSlateBrush
            (&FStack_20058,Image,(FName)0x0,(FMargin *)&FStack_203b8._s_0,NoTile,NoImage,
             (FDeprecateVector2DParameter *)&local_res18._s_0,&FStyleColors::Hover,(UObject *)0x0,
             false);
  FStack_20058._padding_ = (longlong)&___7FSlateColorBrush__6B_;
  FSlateBrush::operator=(&pFVar32->Hovered,&FStack_20058);
  local_res18 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  local_res10 = (TVector2<float>_u_0)0x0;
  FStack_203b8._0_8_ = 0;
  FStack_203b8._8_8_ = 0;
  FSlateBrush::FSlateBrush
            (&FStack_20108,Image,(FName)0x0,(FMargin *)&FStack_203b8._s_0,NoTile,NoImage,
             (FDeprecateVector2DParameter *)&local_res18._s_0,&FStyleColors::Header,(UObject *)0x0,
             false);
  FStack_20108._padding_ = (longlong)&___7FSlateColorBrush__6B_;
  FSlateBrush::operator=(&pFVar32->Pressed,&FStack_20108);
  (pFVar32->NormalForeground).SpecifiedColor.field0_0x0._s_0 =
       (FLinearColor_u_0_s_0)FStyleColors::Foreground.SpecifiedColor.field0_0x0;
  EVar16 = FStyleColors::Foreground.ColorTableId;
  uVar17 = FStyleColors::Foreground._18_2_;
  (pFVar32->NormalForeground).ColorUseRule = FStyleColors::Foreground.ColorUseRule;
  (pFVar32->NormalForeground).ColorTableId = EVar16;
  *(undefined2 *)&(pFVar32->NormalForeground).field_0x12 = uVar17;
  (pFVar32->HoveredForeground).SpecifiedColor.field0_0x0._s_0 =
       (FLinearColor_u_0_s_0)FStyleColors::ForegroundHover.SpecifiedColor.field0_0x0;
  EVar16 = FStyleColors::ForegroundHover.ColorTableId;
  uVar17 = FStyleColors::ForegroundHover._18_2_;
  (pFVar32->HoveredForeground).ColorUseRule = FStyleColors::ForegroundHover.ColorUseRule;
  (pFVar32->HoveredForeground).ColorTableId = EVar16;
  *(undefined2 *)&(pFVar32->HoveredForeground).field_0x12 = uVar17;
  (pFVar32->PressedForeground).SpecifiedColor.field0_0x0._s_0 =
       (FLinearColor_u_0_s_0)FStyleColors::ForegroundHover.SpecifiedColor.field0_0x0;
  EVar16 = FStyleColors::ForegroundHover.ColorTableId;
  uVar17 = FStyleColors::ForegroundHover._18_2_;
  (pFVar32->PressedForeground).ColorUseRule = FStyleColors::ForegroundHover.ColorUseRule;
  (pFVar32->PressedForeground).ColorTableId = EVar16;
  *(undefined2 *)&(pFVar32->PressedForeground).field_0x12 = uVar17;
  (pFVar32->DisabledForeground).SpecifiedColor.field0_0x0._s_0 =
       (FLinearColor_u_0_s_0)FStyleColors::Hover2.SpecifiedColor.field0_0x0;
  EVar16 = FStyleColors::Hover2.ColorTableId;
  uVar17 = FStyleColors::Hover2._18_2_;
  (pFVar32->DisabledForeground).ColorUseRule = FStyleColors::Hover2.ColorUseRule;
  (pFVar32->DisabledForeground).ColorTableId = EVar16;
  *(undefined2 *)&(pFVar32->DisabledForeground).field_0x12 = uVar17;
  (pFVar32->NormalPadding).Left = 6.0;
  (pFVar32->NormalPadding).Top = 4.0;
  (pFVar32->NormalPadding).Right = 6.0;
  (pFVar32->NormalPadding).Bottom = 4.0;
  (pFVar32->PressedPadding).Left = 6.0;
  (pFVar32->PressedPadding).Top = 4.0;
  (pFVar32->PressedPadding).Right = 6.0;
  (pFVar32->PressedPadding).Bottom = 4.0;
  FButtonStyle::operator=(&pFVar28->ButtonStyle,pFVar32);
  if (pFVar28 != (FComboButtonStyle *)(auStack_144f8 + 0x3830)) {
    TOptional<FComboButtonStyle>::Emplace<FComboButtonStyle_const_&>
              ((TOptional<FComboButtonStyle> *)(auStack_144f8 + 0x3830),pFVar28);
  }
  local_res10._s_0 = (TVector2<float>_u_0_s_0)CoreStyleConstants::Icon16x16;
  FStack_20380._0_8_ = pvVar8;
  FStack_20380._8_8_ = dVar9;
  pFVar24 = (FString *)
            (**(code **)(param_1->Object->_padding_ + 0xf0))
                      (param_1->Object,&FStack_203a0,"Common/menu",L".svg");
  FSlateImageBrush::FSlateImageBrush
            ((FSlateImageBrush *)&FStack_201b8,pFVar24,
             (FDeprecateVector2DParameter *)&local_res10._s_0,(FLinearColor *)&FStack_20380._s_0,
             NoTile,Vector);
  FStack_201b8._padding_ = (longlong)&___7FSlateVectorImageBrush__6B_;
  FSlateBrush::operator=((FSlateBrush *)(auStack_144f8 + 0x3770),&FStack_201b8);
  FStack_201b8._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_201b8.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  if ((void *)FStack_203a0._0_8_ != (void *)0x0) {
    FMemory::Free((void *)FStack_203a0._0_8_);
  }
  FStack_20108._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_20108.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  FStack_20058._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_20058.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  FStack_1ffa8._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_1ffa8.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  FButtonStyle::~FButtonStyle(&FStack_19bb8);
  FStack_1cfe8._0_8_ = &___7FComboButtonStyle__6B_;
  FStack_1cfe8.MenuBorderBrush._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_1cfe8.MenuBorderBrush.ResourceHandle.Data.SharedReferenceCount.
             ReferenceController);
  FStack_1cfe8.DownArrowImage._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_1cfe8.DownArrowImage.ResourceHandle.Data.SharedReferenceCount.
             ReferenceController);
  FButtonStyle::~FButtonStyle((FButtonStyle *)((longlong)&FStack_1cfe8 + 0x10));
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)&FStack_1cfe8);
  pFVar1 = param_1->Object;
  pFVar20 = ::FName::FName(&FStack_202f8,"ToggleButtonCheckbox");
  pFVar29 = ISlateStyle::GetWidgetStyle<FCheckBoxStyle>
                      ((ISlateStyle *)pFVar1,*pFVar20,(char *)0x0,(FCheckBoxStyle *)0x0);
  pFVar29 = FCheckBoxStyle::FCheckBoxStyle(&FStack_105f8,pFVar29);
  (pFVar29->Padding).Left = 8.0;
  (pFVar29->Padding).Top = 4.0;
  (pFVar29->Padding).Right = 8.0;
  (pFVar29->Padding).Bottom = 4.0;
  FCheckBoxStyle::FCheckBoxStyle(&FStack_17388,pFVar29);
  FCheckBoxStyle::~FCheckBoxStyle(&FStack_105f8);
  FCheckBoxStyle::operator=((FCheckBoxStyle *)(auStack_144f8 + 0x1180),&FStack_17388);
  FButtonStyle::operator=((FButtonStyle *)(auStack_144f8 + 0x3270),&FStack_1afb8);
  pFVar31 = FButtonStyle::FButtonStyle(&FStack_19828,pFVar31);
  local_res10 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  pFVar33 = (FSlateBrush *)
            FSlateNoResource::FSlateNoResource
                      ((FSlateNoResource *)appuStack_1fad8,
                       (FDeprecateVector2DParameter *)&local_res10._s_0);
  FSlateBrush::operator=(&pFVar31->Pressed,pFVar33);
  local_res10 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  pFVar33 = (FSlateBrush *)
            FSlateNoResource::FSlateNoResource
                      ((FSlateNoResource *)appuStack_1f658,
                       (FDeprecateVector2DParameter *)&local_res10._s_0);
  FSlateBrush::operator=(&pFVar31->Hovered,pFVar33);
  local_res10 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  pFVar33 = (FSlateBrush *)
            FSlateNoResource::FSlateNoResource
                      ((FSlateNoResource *)appuStack_1f708,
                       (FDeprecateVector2DParameter *)&local_res10._s_0);
  FSlateBrush::operator=(&pFVar31->Normal,pFVar33);
  (pFVar31->NormalForeground).SpecifiedColor.field0_0x0._s_0 =
       (FLinearColor_u_0_s_0)FStyleColors::Foreground.SpecifiedColor.field0_0x0;
  EVar16 = FStyleColors::Foreground.ColorTableId;
  uVar17 = FStyleColors::Foreground._18_2_;
  (pFVar31->NormalForeground).ColorUseRule = FStyleColors::Foreground.ColorUseRule;
  (pFVar31->NormalForeground).ColorTableId = EVar16;
  *(undefined2 *)&(pFVar31->NormalForeground).field_0x12 = uVar17;
  (pFVar31->PressedForeground).SpecifiedColor.field0_0x0._s_0 =
       (FLinearColor_u_0_s_0)FStyleColors::ForegroundHover.SpecifiedColor.field0_0x0;
  EVar16 = FStyleColors::ForegroundHover.ColorTableId;
  uVar17 = FStyleColors::ForegroundHover._18_2_;
  (pFVar31->PressedForeground).ColorUseRule = FStyleColors::ForegroundHover.ColorUseRule;
  (pFVar31->PressedForeground).ColorTableId = EVar16;
  *(undefined2 *)&(pFVar31->PressedForeground).field_0x12 = uVar17;
  (pFVar31->HoveredForeground).SpecifiedColor.field0_0x0._s_0 =
       (FLinearColor_u_0_s_0)FStyleColors::ForegroundHover.SpecifiedColor.field0_0x0;
  EVar16 = FStyleColors::ForegroundHover.ColorTableId;
  uVar17 = FStyleColors::ForegroundHover._18_2_;
  (pFVar31->HoveredForeground).ColorUseRule = FStyleColors::ForegroundHover.ColorUseRule;
  (pFVar31->HoveredForeground).ColorTableId = EVar16;
  *(undefined2 *)&(pFVar31->HoveredForeground).field_0x12 = uVar17;
  (pFVar31->DisabledForeground).SpecifiedColor.field0_0x0._s_0 =
       (FLinearColor_u_0_s_0)FStyleColors::Foreground.SpecifiedColor.field0_0x0;
  EVar16 = FStyleColors::Foreground.ColorTableId;
  uVar17 = FStyleColors::Foreground._18_2_;
  (pFVar31->DisabledForeground).ColorUseRule = FStyleColors::Foreground.ColorUseRule;
  (pFVar31->DisabledForeground).ColorTableId = EVar16;
  *(undefined2 *)&(pFVar31->DisabledForeground).field_0x12 = uVar17;
  (pFVar31->NormalPadding).Left = 8.0;
  (pFVar31->NormalPadding).Top = 4.0;
  (pFVar31->NormalPadding).Right = 8.0;
  (pFVar31->NormalPadding).Bottom = 4.0;
  (pFVar31->PressedPadding).Left = 8.0;
  (pFVar31->PressedPadding).Top = 5.0;
  (pFVar31->PressedPadding).Right = 8.0;
  (pFVar31->PressedPadding).Bottom = 3.0;
  FButtonStyle::FButtonStyle(&FStack_1dcc8,pFVar31);
  appuStack_1f708[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_1f668)
  ;
  appuStack_1f658[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_1f5b8)
  ;
  appuStack_1fad8[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_1fa38)
  ;
  FButtonStyle::~FButtonStyle(&FStack_19828);
  pFVar1 = param_1->Object;
  pFVar20 = ::FName::FName(&FStack_20320,"TransparentCheckBox");
  pFVar29 = ISlateStyle::GetWidgetStyle<FCheckBoxStyle>
                      ((ISlateStyle *)pFVar1,*pFVar20,(char *)0x0,(FCheckBoxStyle *)0x0);
  pFVar29 = FCheckBoxStyle::FCheckBoxStyle(&FStack_1a508,pFVar29);
  (pFVar29->Padding).Left = 8.0;
  (pFVar29->Padding).Top = 4.0;
  (pFVar29->Padding).Right = 8.0;
  (pFVar29->Padding).Bottom = 4.0;
  FCheckBoxStyle::FCheckBoxStyle(&FStack_17cd8,pFVar29);
  FCheckBoxStyle::~FCheckBoxStyle(&FStack_1a508);
  FButtonStyle::operator=((FButtonStyle *)(auStack_144f8 + 0x2030),&FStack_1dcc8);
  FCheckBoxStyle::operator=((FCheckBoxStyle *)(auStack_144f8 + 0x2920),&FStack_17cd8);
  local_res10._s_0 = (TVector2<float>_u_0_s_0)CoreStyleConstants::Icon20x20;
  TVar18._s_0 = local_res10._s_0;
  local_res10._s_0.X = CoreStyleConstants::Icon20x20._0_4_;
  local_res10._s_0.Y = CoreStyleConstants::Icon20x20._4_4_;
  auStack_144f8._16040_4_ = local_res10._s_0.X;
  fStack_1064c = local_res10._s_0.Y;
  FStack_1dcc8.NormalPadding.Left = ___xmm_40800000408000004080000040800000;
  FStack_1dcc8.NormalPadding.Top = _UNK_1509253f4;
  FStack_1dcc8.NormalPadding.Right = _UNK_1509253f8;
  FStack_1dcc8.NormalPadding.Bottom = _UNK_1509253fc;
  FStack_1dcc8.PressedPadding.Left = ___xmm_404000004080000040a0000040800000;
  FStack_1dcc8.PressedPadding.Top = _UNK_1509253a4;
  FStack_1dcc8.PressedPadding.Right = _UNK_1509253a8;
  FStack_1dcc8.PressedPadding.Bottom = _UNK_1509253ac;
  local_res10._s_0 = TVar18._s_0;
  pFVar28 = FComboButtonStyle::FComboButtonStyle(&FStack_1ca88,&FStack_1e788);
  pFVar33 = (FSlateBrush *)0x0;
  (pFVar28->ContentPadding).Left = 0.0;
  (pFVar28->ContentPadding).Top = 0.0;
  (pFVar28->ContentPadding).Right = 0.0;
  (pFVar28->ContentPadding).Bottom = 0.0;
  FButtonStyle::operator=(&pFVar28->ButtonStyle,&FStack_1dcc8);
  local_res10 = (TVector2<float>_u_0)0x41a0000040c00000;
  FStack_203b8._0_8_ = pvVar8;
  FStack_203b8._8_8_ = dVar9;
  pFVar24 = (FString *)
            (**(code **)(param_1->Object->_padding_ + 0xf0))
                      (param_1->Object,auStack_203d8,"Starship/Common/ellipsis-vertical-narrow",
                       L".svg");
  FSlateImageBrush::FSlateImageBrush
            ((FSlateImageBrush *)&FStack_1fef8,pFVar24,
             (FDeprecateVector2DParameter *)&local_res10._s_0,(FLinearColor *)&FStack_203b8._s_0,
             NoTile,Vector);
  FStack_1fef8._padding_ = (longlong)&___7FSlateVectorImageBrush__6B_;
  FSlateBrush::operator=(&pFVar28->DownArrowImage,&FStack_1fef8);
  (pFVar28->DownArrowPadding).Left = 1.0;
  (pFVar28->DownArrowPadding).Top = 0.0;
  (pFVar28->DownArrowPadding).Right = 1.0;
  (pFVar28->DownArrowPadding).Bottom = 0.0;
  FComboButtonStyle::FComboButtonStyle(&FStack_1e228,pFVar28);
  FStack_1fef8._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_1fef8.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  if ((void *)auStack_203d8._0_8_ != (void *)0x0) {
    FMemory::Free((void *)auStack_203d8._0_8_);
  }
  FStack_1ca88._0_8_ = &___7FComboButtonStyle__6B_;
  FStack_1ca88.MenuBorderBrush._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_1ca88.MenuBorderBrush.ResourceHandle.Data.SharedReferenceCount.
             ReferenceController);
  FStack_1ca88.DownArrowImage._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_1ca88.DownArrowImage.ResourceHandle.Data.SharedReferenceCount.
             ReferenceController);
  FButtonStyle::~FButtonStyle((FButtonStyle *)((longlong)&FStack_1ca88 + 0x10));
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)&FStack_1ca88);
  FComboButtonStyle::operator=((FComboButtonStyle *)(auStack_144f8 + 0x23c0),&FStack_1e228);
  pFVar1 = param_1->Object;
  pFVar34 = ::operator_new(0xb0);
  dVar15 = _UNK_150925008;
  pvVar14 = ___xmm_00000000000000004010000000000000;
  dVar11 = _UNK_15076bb58;
  pvVar10 = ___xmm_40100000000000000000000000000000;
  pFVar35 = pFVar33;
  if (pFVar34 != (FSlateRoundedBoxBrush *)0x0) {
    local_res10 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
    auStack_203d8._0_8_ = ___xmm_00000000000000004010000000000000;
    auStack_203d8._8_8_ = _UNK_150925008;
    dStack_203c0 = _UNK_15076bb58;
    auStack_203d8._16_8_ = ___xmm_40100000000000000000000000000000;
    pFVar35 = (FSlateBrush *)
              FSlateRoundedBoxBrush::FSlateRoundedBoxBrush<FSlateColor,UE::Math::TVector4<double>_>
                        (pFVar34,&FStyleColors::Hover,(TVector4<double> *)auStack_203d8,
                         (FDeprecateVector2DParameter *)&local_res10._s_0);
  }
  pFVar20 = ::FName::FName((FName *)&local_res18._s_0,"ToolbarSettingsRegion.LeftHover");
  FSlateStyleSet::Set<FSlateRoundedBoxBrush>
            ((FSlateStyleSet *)pFVar1,*pFVar20,(FSlateRoundedBoxBrush *)pFVar35);
  pFVar1 = param_1->Object;
  pFVar34 = ::operator_new(0xb0);
  pFVar35 = pFVar33;
  if (pFVar34 != (FSlateRoundedBoxBrush *)0x0) {
    local_res10 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
    auStack_203d8._0_8_ = pvVar10;
    auStack_203d8._8_8_ = dVar11;
    dStack_203c0 = dVar15;
    auStack_203d8._16_8_ = pvVar14;
    pFVar35 = (FSlateBrush *)
              FSlateRoundedBoxBrush::FSlateRoundedBoxBrush<FSlateColor,UE::Math::TVector4<double>_>
                        (pFVar34,&FStyleColors::Hover,(TVector4<double> *)auStack_203d8,
                         (FDeprecateVector2DParameter *)&local_res10._s_0);
  }
  pFVar20 = ::FName::FName((FName *)&local_res18._s_0,"ToolbarSettingsRegion.RightHover");
  FSlateStyleSet::Set<FSlateRoundedBoxBrush>
            ((FSlateStyleSet *)pFVar1,*pFVar20,(FSlateRoundedBoxBrush *)pFVar35);
  pFVar1 = param_1->Object;
  pFVar34 = ::operator_new(0xb0);
  fVar3 = __real_3f800000;
  pFVar35 = pFVar33;
  if (pFVar34 != (FSlateRoundedBoxBrush *)0x0) {
    local_res10 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
    auStack_203d8._0_8_ = pvVar14;
    auStack_203d8._8_8_ = dVar15;
    dStack_203c0 = dVar11;
    auStack_203d8._16_8_ = pvVar10;
    pFVar35 = (FSlateBrush *)
              FSlateRoundedBoxBrush::
              FSlateRoundedBoxBrush<FSlateColor,FSlateColor,UE::Math::TVector4<double>_>
                        (pFVar34,&FStyleColors::Dropdown,(TVector4<double> *)auStack_203d8,
                         &FStyleColors::Header,__real_3f800000,
                         (FDeprecateVector2DParameter *)&local_res10._s_0);
  }
  pFVar20 = ::FName::FName((FName *)&local_res18._s_0,"ToolbarSettingsRegion.Left");
  FSlateStyleSet::Set<FSlateRoundedBoxBrush>
            ((FSlateStyleSet *)pFVar1,*pFVar20,(FSlateRoundedBoxBrush *)pFVar35);
  pFVar1 = param_1->Object;
  pFVar34 = ::operator_new(0xb0);
  pFVar35 = pFVar33;
  if (pFVar34 != (FSlateRoundedBoxBrush *)0x0) {
    local_res10 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
    auStack_203d8._0_8_ = pvVar10;
    auStack_203d8._8_8_ = dVar11;
    dStack_203c0 = dVar15;
    auStack_203d8._16_8_ = pvVar14;
    pFVar35 = (FSlateBrush *)
              FSlateRoundedBoxBrush::
              FSlateRoundedBoxBrush<FSlateColor,FSlateColor,UE::Math::TVector4<double>_>
                        (pFVar34,&FStyleColors::Dropdown,(TVector4<double> *)auStack_203d8,
                         &FStyleColors::Header,fVar3,
                         (FDeprecateVector2DParameter *)&local_res10._s_0);
  }
  pFVar20 = ::FName::FName((FName *)&local_res18._s_0,"ToolbarSettingsRegion.Right");
  FSlateStyleSet::Set<FSlateRoundedBoxBrush>
            ((FSlateStyleSet *)pFVar1,*pFVar20,(FSlateRoundedBoxBrush *)pFVar35);
  pFVar1 = param_1->Object;
  pFVar34 = ::operator_new(0xb0);
  pFVar35 = pFVar33;
  if (pFVar34 != (FSlateRoundedBoxBrush *)0x0) {
    local_res10 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
    auStack_203d8._0_8_ = pvVar14;
    auStack_203d8._8_8_ = dVar15;
    dStack_203c0 = dVar11;
    auStack_203d8._16_8_ = pvVar10;
    pFVar35 = (FSlateBrush *)
              FSlateRoundedBoxBrush::FSlateRoundedBoxBrush<FSlateColor,UE::Math::TVector4<double>_>
                        (pFVar34,&FStyleColors::PrimaryHover,(TVector4<double> *)auStack_203d8,
                         (FDeprecateVector2DParameter *)&local_res10._s_0);
  }
  pFVar20 = ::FName::FName((FName *)&local_res18._s_0,"ToolbarSettingsRegion.LeftToggleHover");
  FSlateStyleSet::Set<FSlateRoundedBoxBrush>
            ((FSlateStyleSet *)pFVar1,*pFVar20,(FSlateRoundedBoxBrush *)pFVar35);
  pFVar1 = param_1->Object;
  pFVar34 = ::operator_new(0xb0);
  pFVar35 = pFVar33;
  if (pFVar34 != (FSlateRoundedBoxBrush *)0x0) {
    local_res10 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
    auStack_203d8._0_8_ = pvVar14;
    auStack_203d8._8_8_ = dVar15;
    dStack_203c0 = dVar11;
    auStack_203d8._16_8_ = pvVar10;
    pFVar35 = (FSlateBrush *)
              FSlateRoundedBoxBrush::FSlateRoundedBoxBrush<FSlateColor,UE::Math::TVector4<double>_>
                        (pFVar34,&FStyleColors::Primary,(TVector4<double> *)auStack_203d8,
                         (FDeprecateVector2DParameter *)&local_res10._s_0);
  }
  pFVar20 = ::FName::FName((FName *)&local_res18._s_0,"ToolbarSettingsRegion.LeftToggle");
  FSlateStyleSet::Set<FSlateRoundedBoxBrush>
            ((FSlateStyleSet *)pFVar1,*pFVar20,(FSlateRoundedBoxBrush *)pFVar35);
  pFVar1 = param_1->Object;
  pFVar20 = ::FName::FName((FName *)&local_res10._s_0,"SlimToolBar");
  FSlateStyleSet::Set<FToolBarStyle>
            ((FSlateStyleSet *)pFVar1,*pFVar20,(FToolBarStyle *)auStack_144f8);
  pFVar1 = param_1->Object;
  bStack_10648 = false;
  pFVar20 = ::FName::FName((FName *)&local_res10._s_0,"AssetEditorToolbar");
  FSlateStyleSet::Set<FToolBarStyle>
            ((FSlateStyleSet *)pFVar1,*pFVar20,(FToolBarStyle *)auStack_144f8);
  pFVar1 = param_1->Object;
  pFVar20 = ::FName::FName((FName *)&local_res10._s_0,"AssetEditorToolbar.Background");
  FSlateStyleSet::Set<FSlateBrush>((FSlateStyleSet *)pFVar1,*pFVar20,pFVar30);
  FToolBarStyle::FToolBarStyle(&local_fca8,(FToolBarStyle *)auStack_144f8);
  pFVar1 = param_1->Object;
  pFVar20 = ::FName::FName(&FStack_20320,"SecondaryToolbar");
  FSlateStyleSet::Set<FToolBarStyle>((FSlateStyleSet *)pFVar1,*pFVar20,&local_fca8);
  FToolBarStyle::~FToolBarStyle(&local_fca8);
  pFVar1 = param_1->Object;
  bStack_10648 = true;
  pFVar20 = ::FName::FName(&FStack_202f8,"CalloutToolbar");
  FSlateStyleSet::Set<FToolBarStyle>
            ((FSlateStyleSet *)pFVar1,*pFVar20,(FToolBarStyle *)auStack_144f8);
  FToolBarStyle::FToolBarStyle(&local_fca8,(FToolBarStyle *)auStack_144f8);
  pFVar1 = param_1->Object;
  local_fca8.ButtonTextMaxWidth = 100.0;
  local_fca8.ButtonTextMinWidth = 100.0;
  pFVar20 = ::FName::FName(&FStack_20300,"CalloutToolbar-Width100");
  FSlateStyleSet::Set<FToolBarStyle>((FSlateStyleSet *)pFVar1,*pFVar20,&local_fca8);
  FToolBarStyle::~FToolBarStyle(&local_fca8);
  FStack_1e228._0_8_ = &___7FComboButtonStyle__6B_;
  FStack_1e228.MenuBorderBrush._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_1e228.MenuBorderBrush.ResourceHandle.Data.SharedReferenceCount.
             ReferenceController);
  FStack_1e228.DownArrowImage._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_1e228.DownArrowImage.ResourceHandle.Data.SharedReferenceCount.
             ReferenceController);
  FButtonStyle::~FButtonStyle((FButtonStyle *)((longlong)&FStack_1e228 + 0x10));
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)&FStack_1e228);
  FCheckBoxStyle::~FCheckBoxStyle(&FStack_17cd8);
  FButtonStyle::~FButtonStyle(&FStack_1dcc8);
  FCheckBoxStyle::~FCheckBoxStyle(&FStack_17388);
  FToolBarStyle::~FToolBarStyle((FToolBarStyle *)auStack_144f8);
  FStack_1e788._0_8_ = &___7FComboButtonStyle__6B_;
  FStack_1e788.MenuBorderBrush._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_1e788.MenuBorderBrush.ResourceHandle.Data.SharedReferenceCount.
             ReferenceController);
  FStack_1e788.DownArrowImage._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_1e788.DownArrowImage.ResourceHandle.Data.SharedReferenceCount.
             ReferenceController);
  FButtonStyle::~FButtonStyle((FButtonStyle *)((longlong)&FStack_1e788 + 0x10));
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)&FStack_1e788);
  FButtonStyle::~FButtonStyle(&FStack_1afb8);
  FButtonStyle::~FButtonStyle(&FStack_1ac28);
  FCheckBoxStyle::~FCheckBoxStyle(&FStack_16a38);
  FToolBarStyle::~FToolBarStyle((FToolBarStyle *)local_bda8);
  pFVar1 = param_1->Object;
  pFVar34 = ::operator_new(0xb0);
  pFVar30 = pFVar33;
  if (pFVar34 != (FSlateRoundedBoxBrush *)0x0) {
    local_res10 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
    pFVar30 = (FSlateBrush *)
              FSlateRoundedBoxBrush::FSlateRoundedBoxBrush<FSlateColor,float>
                        (pFVar34,&FStyleColors::Input,__real_40a00000,
                         (FDeprecateVector2DParameter *)&local_res10._s_0);
  }
  pFVar20 = ::FName::FName((FName *)&local_res18._s_0,"Menu.WidgetBorder");
  FSlateStyleSet::Set<FSlateRoundedBoxBrush>
            ((FSlateStyleSet *)pFVar1,*pFVar20,(FSlateRoundedBoxBrush *)pFVar30);
  pFVar1 = param_1->Object;
  pFVar36 = FSpinBoxStyle::FSpinBoxStyle(&FStack_18b48);
  fVar4 = __real_40800000;
  local_res10 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  pFVar30 = (FSlateBrush *)
            FSlateRoundedBoxBrush::FSlateRoundedBoxBrush<FSlateColor,FSlateColor,float>
                      ((FSlateRoundedBoxBrush *)appuStack_1fc38,&FStyleColors::Input,__real_40800000
                       ,&FStyleColors::Secondary,fVar3,
                       (FDeprecateVector2DParameter *)&local_res10._s_0);
  FSlateBrush::operator=(&pFVar36->BackgroundBrush,pFVar30);
  local_res10 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  pFVar30 = (FSlateBrush *)
            FSlateRoundedBoxBrush::FSlateRoundedBoxBrush<FSlateColor,FSlateColor,float>
                      ((FSlateRoundedBoxBrush *)appuStack_1fce8,&FStyleColors::Input,fVar4,
                       &FStyleColors::Hover,fVar3,(FDeprecateVector2DParameter *)&local_res10._s_0);
  FSlateBrush::operator=(&pFVar36->HoveredBackgroundBrush,pFVar30);
  local_res10 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  pFVar30 = (FSlateBrush *)
            FSlateRoundedBoxBrush::FSlateRoundedBoxBrush<FSlateColor,FLinearColor,float>
                      ((FSlateRoundedBoxBrush *)appuStack_1fd98,&FStyleColors::Hover,fVar4,
                       &FLinearColor::Transparent,fVar3,
                       (FDeprecateVector2DParameter *)&local_res10._s_0);
  FSlateBrush::operator=(&pFVar36->ActiveFillBrush,pFVar30);
  local_res10 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  pFVar30 = (FSlateBrush *)
            FSlateRoundedBoxBrush::FSlateRoundedBoxBrush<FSlateColor,FLinearColor,float>
                      ((FSlateRoundedBoxBrush *)appuStack_1f8c8,&FStyleColors::Secondary,fVar4,
                       &FLinearColor::Transparent,fVar3,
                       (FDeprecateVector2DParameter *)&local_res10._s_0);
  FSlateBrush::operator=(&pFVar36->InactiveFillBrush,pFVar30);
  local_res10 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  pFVar30 = (FSlateBrush *)
            FSlateNoResource::FSlateNoResource
                      ((FSlateNoResource *)appuStack_1f978,
                       (FDeprecateVector2DParameter *)&local_res10._s_0);
  FSlateBrush::operator=(&pFVar36->ArrowsImage,pFVar30);
  (pFVar36->ForegroundColor).SpecifiedColor.field0_0x0._s_0 =
       (FLinearColor_u_0_s_0)FStyleColors::ForegroundHover.SpecifiedColor.field0_0x0;
  EVar16 = FStyleColors::ForegroundHover.ColorTableId;
  uVar17 = FStyleColors::ForegroundHover._18_2_;
  (pFVar36->ForegroundColor).ColorUseRule = FStyleColors::ForegroundHover.ColorUseRule;
  (pFVar36->ForegroundColor).ColorTableId = EVar16;
  *(undefined2 *)&(pFVar36->ForegroundColor).field_0x12 = uVar17;
  (pFVar36->TextPadding).Left = 10.0;
  (pFVar36->TextPadding).Top = 3.5;
  (pFVar36->TextPadding).Right = 10.0;
  (pFVar36->TextPadding).Bottom = 4.0;
  pFVar20 = ::FName::FName((FName *)&FStack_20360._s_0,"Menu.SpinBox");
  FSlateStyleSet::Set<FSpinBoxStyle>((FSlateStyleSet *)pFVar1,*pFVar20,pFVar36);
  appuStack_1f978[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_1f8d8)
  ;
  appuStack_1f8c8[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_1f828)
  ;
  appuStack_1fd98[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_1fcf8)
  ;
  appuStack_1fce8[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_1fc48)
  ;
  appuStack_1fc38[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_1fb98)
  ;
  FSpinBoxStyle::~FSpinBoxStyle(&FStack_18b48);
  pFVar1 = param_1->Object;
  pFVar35 = ::operator_new(0xb0);
  pFVar30 = pFVar33;
  if (pFVar35 != (FSlateBrush *)0x0) {
    local_res18 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
    auStack_203d8._0_8_ = (void *)0x0;
    auStack_203d8._8_8_ = 0.0;
    local_res10 = (TVector2<float>_u_0)0x0;
    FSlateBrush::FSlateBrush
              (pFVar35,Image,(FName)0x0,(FMargin *)auStack_203d8,NoTile,NoImage,
               (FDeprecateVector2DParameter *)&local_res18._s_0,&FStyleColors::Dropdown,
               (UObject *)0x0,false);
    pFVar35->_padding_ = (longlong)&___7FSlateColorBrush__6B_;
    pFVar30 = pFVar35;
  }
  pFVar20 = ::FName::FName((FName *)&FStack_20360._s_0,"Menu.Background");
  FSlateStyleSet::Set<FSlateColorBrush>
            ((FSlateStyleSet *)pFVar1,*pFVar20,(FSlateColorBrush *)pFVar30);
  pFVar1 = param_1->Object;
  pFVar34 = ::operator_new(0xb0);
  pFVar30 = pFVar33;
  if (pFVar34 != (FSlateRoundedBoxBrush *)0x0) {
    local_res10 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
    pFVar30 = (FSlateBrush *)
              FSlateRoundedBoxBrush::FSlateRoundedBoxBrush<FSlateColor,FSlateColor,float>
                        (pFVar34,&FStyleColors::Transparent,0.0,&FStyleColors::DropdownOutline,fVar3
                         ,(FDeprecateVector2DParameter *)&local_res10._s_0);
  }
  pFVar20 = ::FName::FName((FName *)&local_res18._s_0,"Menu.Outline");
  FSlateStyleSet::Set<FSlateRoundedBoxBrush>
            ((FSlateStyleSet *)pFVar1,*pFVar20,(FSlateRoundedBoxBrush *)pFVar30);
  pFVar1 = param_1->Object;
  pFVar23 = ::operator_new(0xb0);
  pFVar30 = pFVar33;
  if (pFVar23 != (FSlateImageBrush *)0x0) {
    local_res10._s_0 = (TVector2<float>_u_0_s_0)CoreStyleConstants::Icon16x16;
    auStack_203d8._0_8_ = pvVar8;
    auStack_203d8._8_8_ = dVar9;
    pFVar24 = (FString *)
              (**(code **)(param_1->Object->_padding_ + 0xf0))
                        (param_1->Object,&FStack_203a0,"Icons/icon_tab_toolbar_16px",L".png");
    pFVar30 = (FSlateBrush *)
              FSlateImageBrush::FSlateImageBrush
                        (pFVar23,pFVar24,(FDeprecateVector2DParameter *)&local_res10._s_0,
                         (FLinearColor *)auStack_203d8,NoTile,FullColor);
  }
  pFVar20 = ::FName::FName((FName *)&local_res18._s_0,"Menu.Icon");
  FSlateStyleSet::Set<FSlateImageBrush>
            ((FSlateStyleSet *)pFVar1,*pFVar20,(FSlateImageBrush *)pFVar30);
  if ((pFVar23 != (FSlateImageBrush *)0x0) && ((void *)FStack_203a0._0_8_ != (void *)0x0)) {
    FMemory::Free((void *)FStack_203a0._0_8_);
  }
  pFVar1 = param_1->Object;
  pFVar23 = ::operator_new(0xb0);
  pFVar30 = pFVar33;
  if (pFVar23 != (FSlateImageBrush *)0x0) {
    local_res10._s_0 = (TVector2<float>_u_0_s_0)CoreStyleConstants::Icon16x16;
    auStack_203d8._0_8_ = pvVar8;
    auStack_203d8._8_8_ = dVar9;
    pFVar24 = (FString *)
              (**(code **)(param_1->Object->_padding_ + 0xf0))
                        (param_1->Object,&FStack_203a0,"Icons/toolbar_expand_16x",L".png");
    pFVar30 = (FSlateBrush *)
              FSlateImageBrush::FSlateImageBrush
                        (pFVar23,pFVar24,(FDeprecateVector2DParameter *)&local_res10._s_0,
                         (FLinearColor *)auStack_203d8,NoTile,FullColor);
  }
  pFVar20 = ::FName::FName((FName *)&local_res18._s_0,"Menu.Expand");
  FSlateStyleSet::Set<FSlateImageBrush>
            ((FSlateStyleSet *)pFVar1,*pFVar20,(FSlateImageBrush *)pFVar30);
  if ((pFVar23 != (FSlateImageBrush *)0x0) && ((void *)FStack_203a0._0_8_ != (void *)0x0)) {
    FMemory::Free((void *)FStack_203a0._0_8_);
  }
  pFVar1 = param_1->Object;
  pFVar35 = ::operator_new(0xb0);
  pFVar30 = pFVar33;
  if (pFVar35 != (FSlateBrush *)0x0) {
    local_res10._s_0 = (TVector2<float>_u_0_s_0)CoreStyleConstants::Icon16x16;
    pFVar24 = (FString *)
              (**(code **)(param_1->Object->_padding_ + 0xf0))
                        (param_1->Object,auStack_203d8,"Starship/Common/chevron-right",L".svg");
    FSlateImageBrush::FSlateImageBrush
              ((FSlateImageBrush *)pFVar35,pFVar24,(FDeprecateVector2DParameter *)&local_res10._s_0,
               &FStyleColors::Foreground,NoTile,Vector);
    pFVar35->_padding_ = (longlong)&___7FSlateVectorImageBrush__6B_;
    pFVar30 = pFVar35;
  }
  pFVar20 = ::FName::FName((FName *)&local_res18._s_0,"Menu.SubMenuIndicator");
  FSlateStyleSet::Set<FSlateVectorImageBrush>
            ((FSlateStyleSet *)pFVar1,*pFVar20,(FSlateVectorImageBrush *)pFVar30);
  if ((pFVar35 != (FSlateBrush *)0x0) && ((void *)auStack_203d8._0_8_ != (void *)0x0)) {
    FMemory::Free((void *)auStack_203d8._0_8_);
  }
  pFVar1 = param_1->Object;
  auStack_203d8._0_8_ = ___xmm_40000000400000004000000040000000;
  auStack_203d8._8_8_ = _UNK_15076ba38;
  pFVar20 = ::FName::FName((FName *)&local_res10._s_0,"Menu.SToolBarComboButtonBlock.Padding");
  FSlateStyleSet::Set((FSlateStyleSet *)pFVar1,*pFVar20,(FMargin *)auStack_203d8);
  pFVar1 = param_1->Object;
  auStack_203d8._0_8_ = ___xmm_40000000400000004000000040000000;
  auStack_203d8._8_8_ = _UNK_15076ba38;
  pFVar20 = ::FName::FName((FName *)&local_res18._s_0,"Menu.SToolBarButtonBlock.Padding");
  FSlateStyleSet::Set((FSlateStyleSet *)pFVar1,*pFVar20,(FMargin *)auStack_203d8);
  pFVar1 = param_1->Object;
  auStack_203d8._0_8_ = ___xmm_40000000400000004000000040000000;
  auStack_203d8._8_8_ = _UNK_15076ba38;
  pFVar20 = ::FName::FName((FName *)&FStack_20360._s_0,"Menu.SToolBarCheckComboButtonBlock.Padding")
  ;
  FSlateStyleSet::Set((FSlateStyleSet *)pFVar1,*pFVar20,(FMargin *)auStack_203d8);
  pFVar1 = param_1->Object;
  auStack_203d8._0_8_ = 0.0;
  auStack_203d8._8_8_ = 0.0;
  pFVar20 = ::FName::FName(&FStack_20320,"Menu.SToolBarButtonBlock.CheckBox.Padding");
  FSlateStyleSet::Set((FSlateStyleSet *)pFVar1,*pFVar20,(FMargin *)auStack_203d8);
  pFVar1 = param_1->Object;
  pFVar20 = ::FName::FName(&FStack_202f8,"Menu.SToolBarComboButtonBlock.ComboButton.Color");
  FSlateStyleSet::Set((FSlateStyleSet *)pFVar1,*pFVar20,&FStack_20288);
  pFVar1 = param_1->Object;
  pFVar20 = ::FName::FName(&FStack_20300,"Menu.MenuIconSize");
  FSlateStyleSet::Set((FSlateStyleSet *)pFVar1,*pFVar20,__real_41600000);
  pFVar1 = param_1->Object;
  FStack_20298.Left = ___xmm_3f80000040a000003f80000041400000;
  FStack_20298.Top = _UNK_150925324;
  FStack_20298.Right = _UNK_150925328;
  FStack_20298.Bottom = _UNK_15092532c;
  auStack_203d8._0_8_ = ___xmm_3f80000040a000003f80000041f00000;
  auStack_203d8._8_8_ = _UNK_150925338;
  pFVar20 = ::FName::FName((FName *)auStack_20390,"Menu.Block.IndentedPadding");
  FSlateStyleSet::Set((FSlateStyleSet *)pFVar1,*pFVar20,(FMargin *)auStack_203d8);
  pFVar1 = param_1->Object;
  pFVar20 = ::FName::FName(&FStack_202b8,"Menu.Block.Padding");
  FSlateStyleSet::Set((FSlateStyleSet *)pFVar1,*pFVar20,&FStack_20298);
  pFVar1 = param_1->Object;
  pFVar35 = ::operator_new(0xb0);
  pFVar30 = pFVar33;
  if (pFVar35 != (FSlateBrush *)0x0) {
    local_res18 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
    auStack_203d8._0_8_ = 0.0;
    auStack_203d8._8_8_ = 0.0;
    local_res10 = (TVector2<float>_u_0)0x0;
    FSlateBrush::FSlateBrush
              (pFVar35,Image,(FName)0x0,(FMargin *)auStack_203d8,NoTile,NoImage,
               (FDeprecateVector2DParameter *)&local_res18._s_0,&FStyleColors::White25,
               (UObject *)0x0,false);
    pFVar35->_padding_ = (longlong)&___7FSlateColorBrush__6B_;
    pFVar30 = pFVar35;
  }
  pFVar20 = ::FName::FName((FName *)&FStack_20360._s_0,"Menu.Separator");
  FSlateStyleSet::Set<FSlateColorBrush>
            ((FSlateStyleSet *)pFVar1,*pFVar20,(FSlateColorBrush *)pFVar30);
  pFVar1 = param_1->Object;
  auStack_203d8._0_8_ = ___xmm_40c000004140000040c0000041400000;
  auStack_203d8._8_8_ = _UNK_150925448;
  pFVar20 = ::FName::FName((FName *)&local_res10._s_0,"Menu.Separator.Padding");
  FSlateStyleSet::Set((FSlateStyleSet *)pFVar1,*pFVar20,(FMargin *)auStack_203d8);
  pFVar1 = param_1->Object;
  pFVar20 = ::FName::FName((FName *)&local_res18._s_0,"Menu.Label");
  TVar18 = local_res8;
  FSlateStyleSet::Set<FTextBlockStyle>
            ((FSlateStyleSet *)pFVar1,*pFVar20,(FTextBlockStyle *)local_res8);
  pFVar1 = param_1->Object;
  pFVar21 = FEditableTextBoxStyle::FEditableTextBoxStyle
                      ((FEditableTextBoxStyle *)&local_fca8,(FEditableTextBoxStyle *)TVar22);
  pFVar27 = FStyleFonts::Get();
  FSlateFontInfo::operator=(&(pFVar21->TextStyle).Font,&pFVar27->Normal);
  pFVar20 = ::FName::FName((FName *)&local_res8._s_0,"Menu.EditableText");
  FSlateStyleSet::Set<FEditableTextBoxStyle>((FSlateStyleSet *)pFVar1,*pFVar20,pFVar21);
  FEditableTextBoxStyle::~FEditableTextBoxStyle((FEditableTextBoxStyle *)&local_fca8);
  pFVar1 = param_1->Object;
  pFVar26 = FTextBlockStyle::FTextBlockStyle(&FStack_1ea68,(FTextBlockStyle *)TVar18);
  pFVar27 = FStyleFonts::Get();
  FSlateFontInfo::operator=(&pFVar26->Font,&pFVar27->Small);
  pFVar20 = ::FName::FName((FName *)&local_res8._s_0,"Menu.Keybinding");
  FSlateStyleSet::Set<FTextBlockStyle>((FSlateStyleSet *)pFVar1,*pFVar20,pFVar26);
  FTextBlockStyle::~FTextBlockStyle(&FStack_1ea68);
  stack0xfffffffffffdfc38 = (undefined1  [16])FLinearColor::Black.field0_0x0;
  auStack_203d8._0_8_ = auStack_203d8._0_8_ & 0xff00000000000000;
  auStack_203d8._8_8_ = 0.0;
  pFVar20 = ::FName::FName(&FStack_20320,"Bold");
  FCoreStyle::GetDefaultFontStyle
            (&FStack_1f768,*pFVar20,__real_40e00000,(FFontOutlineSettings *)auStack_203d8);
  pFVar1 = param_1->Object;
  FStack_1f768.LetterSpacing = 0xfa;
  pFVar26 = FTextBlockStyle::FTextBlockStyle(&FStack_1ea68,(FTextBlockStyle *)local_res20);
  FSlateFontInfo::operator=(&pFVar26->Font,&FStack_1f768);
  (pFVar26->ColorAndOpacity).SpecifiedColor.field0_0x0._s_0 =
       (FLinearColor_u_0_s_0)FStyleColors::White25.SpecifiedColor.field0_0x0;
  EVar16 = FStyleColors::White25.ColorTableId;
  uVar17 = FStyleColors::White25._18_2_;
  (pFVar26->ColorAndOpacity).ColorUseRule = FStyleColors::White25.ColorUseRule;
  (pFVar26->ColorAndOpacity).ColorTableId = EVar16;
  *(undefined2 *)&(pFVar26->ColorAndOpacity).field_0x12 = uVar17;
  pFVar20 = ::FName::FName((FName *)&local_res8._s_0,"Menu.Heading");
  FSlateStyleSet::Set<FTextBlockStyle>((FSlateStyleSet *)pFVar1,*pFVar20,pFVar26);
  FTextBlockStyle::~FTextBlockStyle(&FStack_1ea68);
  pFVar1 = param_1->Object;
  auStack_203d8._0_8_ = ___xmm_40c000004140000040c0000041400000;
  auStack_203d8._8_8_ = _UNK_150925448;
  pFVar20 = ::FName::FName(&local_res20,"Menu.Heading.Padding");
  FSlateStyleSet::Set((FSlateStyleSet *)pFVar1,*pFVar20,(FMargin *)auStack_203d8);
  FStack_20360._0_8_ = ___xmm_3e4ccccd3f8000003f8000003f800000;
  FStack_20360._8_8_ = _UNK_150925158;
  FStack_203a0._s_0.R = (float)___xmm_3c23d70a3f8000003f8000003f800000;
  FStack_203a0._s_0.G = (float)_UNK_1509250b4;
  FStack_203a0._s_0.B = _UNK_1509250b8;
  FStack_203a0._s_0.A = _UNK_1509250bc;
  pFVar29 = FCheckBoxStyle::FCheckBoxStyle(&FStack_1a508);
  local_res8 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  pFVar30 = (FSlateBrush *)
            FSlateNoResource::FSlateNoResource
                      ((FSlateNoResource *)appuStack_1fd98,
                       (FDeprecateVector2DParameter *)&local_res8._s_0);
  FSlateBrush::operator=(&pFVar29->UncheckedImage,pFVar30);
  local_res8 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  pFVar30 = (FSlateBrush *)
            FSlateNoResource::FSlateNoResource
                      ((FSlateNoResource *)appuStack_1fce8,
                       (FDeprecateVector2DParameter *)&local_res8._s_0);
  FSlateBrush::operator=(&pFVar29->UncheckedHoveredImage,pFVar30);
  local_res8 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  pFVar30 = (FSlateBrush *)
            FSlateNoResource::FSlateNoResource
                      ((FSlateNoResource *)appuStack_1fc38,
                       (FDeprecateVector2DParameter *)&local_res8._s_0);
  FSlateBrush::operator=(&pFVar29->UncheckedPressedImage,pFVar30);
  local_res8._s_0 = (TVector2<float>_u_0_s_0)CoreStyleConstants::Icon16x16;
  auStack_203d8._0_8_ = pvVar8;
  auStack_203d8._8_8_ = dVar9;
  pFVar24 = (FString *)
            (**(code **)(param_1->Object->_padding_ + 0xf0))
                      (param_1->Object,apvStack_202f0,"Starship/Common/check",L".svg");
  FSlateImageBrush::FSlateImageBrush
            ((FSlateImageBrush *)&FStack_20268,pFVar24,
             (FDeprecateVector2DParameter *)&local_res8._s_0,(FLinearColor *)auStack_203d8,NoTile,
             Vector);
  FStack_20268._padding_ = (longlong)&___7FSlateVectorImageBrush__6B_;
  FSlateBrush::operator=(&pFVar29->CheckedImage,&FStack_20268);
  auStack_203d8._0_8_ = pvVar8;
  auStack_203d8._8_8_ = dVar9;
  local_res8._s_0 = (TVector2<float>_u_0_s_0)CoreStyleConstants::Icon16x16;
  pFVar24 = (FString *)
            (**(code **)(param_1->Object->_padding_ + 0xf0))
                      (param_1->Object,apvStack_202e0,"Starship/Common/check",L".svg");
  FSlateImageBrush::FSlateImageBrush
            ((FSlateImageBrush *)&FStack_201b8,pFVar24,
             (FDeprecateVector2DParameter *)&local_res8._s_0,(FLinearColor *)auStack_203d8,NoTile,
             Vector);
  FStack_201b8._padding_ = (longlong)&___7FSlateVectorImageBrush__6B_;
  FSlateBrush::operator=(&pFVar29->CheckedHoveredImage,&FStack_201b8);
  local_res8._s_0 = (TVector2<float>_u_0_s_0)CoreStyleConstants::Icon16x16;
  auStack_203d8._0_8_ = pvVar8;
  auStack_203d8._8_8_ = dVar9;
  pFVar24 = (FString *)
            (**(code **)(param_1->Object->_padding_ + 0xf0))
                      (param_1->Object,apvStack_20340,"Starship/Common/check",L".svg");
  FSlateImageBrush::FSlateImageBrush
            ((FSlateImageBrush *)&FStack_20108,pFVar24,
             (FDeprecateVector2DParameter *)&local_res8._s_0,(FLinearColor *)auStack_203d8,NoTile,
             Vector);
  FStack_20108._padding_ = (longlong)&___7FSlateVectorImageBrush__6B_;
  FSlateBrush::operator=(&pFVar29->CheckedPressedImage,&FStack_20108);
  local_res8._s_0 = (TVector2<float>_u_0_s_0)CoreStyleConstants::Icon16x16;
  pFVar24 = (FString *)
            (**(code **)(param_1->Object->_padding_ + 0xf0))
                      (param_1->Object,&FStack_203b8,"Starship/Common/check",L".svg");
  FSlateImageBrush::FSlateImageBrush
            ((FSlateImageBrush *)&FStack_20058,pFVar24,
             (FDeprecateVector2DParameter *)&local_res8._s_0,(FLinearColor *)&FStack_203a0._s_0,
             NoTile,Vector);
  FStack_20058._padding_ = (longlong)&___7FSlateVectorImageBrush__6B_;
  FSlateBrush::operator=(&pFVar29->UndeterminedImage,&FStack_20058);
  local_res8._s_0 = (TVector2<float>_u_0_s_0)CoreStyleConstants::Icon16x16;
  pFVar24 = (FString *)
            (**(code **)(param_1->Object->_padding_ + 0xf0))
                      (param_1->Object,apvStack_20330,"Starship/Common/check",L".svg");
  FSlateImageBrush::FSlateImageBrush
            ((FSlateImageBrush *)&FStack_1ffa8,pFVar24,
             (FDeprecateVector2DParameter *)&local_res8._s_0,(FLinearColor *)&FStack_20360._s_0,
             NoTile,Vector);
  FStack_1ffa8._padding_ = (longlong)&___7FSlateVectorImageBrush__6B_;
  FSlateBrush::operator=(&pFVar29->UndeterminedHoveredImage,&FStack_1ffa8);
  local_res8._s_0 = (TVector2<float>_u_0_s_0)CoreStyleConstants::Icon16x16;
  pFVar24 = (FString *)
            (**(code **)(param_1->Object->_padding_ + 0xf0))
                      (param_1->Object,&FStack_20380,"Starship/Common/check",L".svg");
  FSlateImageBrush::FSlateImageBrush
            ((FSlateImageBrush *)&FStack_1fef8,pFVar24,
             (FDeprecateVector2DParameter *)&local_res8._s_0,(FLinearColor *)&FStack_20360._s_0,
             NoTile,Vector);
  FStack_1fef8._padding_ = (longlong)&___7FSlateVectorImageBrush__6B_;
  FSlateBrush::operator=(&pFVar29->UndeterminedPressedImage,&FStack_1fef8);
  FCheckBoxStyle::FCheckBoxStyle(&FStack_18628,pFVar29);
  FStack_1fef8._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_1fef8.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  if ((void *)FStack_20380._0_8_ != (void *)0x0) {
    FMemory::Free((void *)FStack_20380._0_8_);
  }
  FStack_1ffa8._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_1ffa8.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  if (apvStack_20330[0] != (void *)0x0) {
    FMemory::Free(apvStack_20330[0]);
  }
  FStack_20058._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_20058.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  if ((void *)FStack_203b8._0_8_ != (void *)0x0) {
    FMemory::Free((void *)FStack_203b8._0_8_);
  }
  FStack_20108._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_20108.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  if (apvStack_20340[0] != (void *)0x0) {
    FMemory::Free(apvStack_20340[0]);
  }
  FStack_201b8._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_201b8.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  if (apvStack_202e0[0] != (void *)0x0) {
    FMemory::Free(apvStack_202e0[0]);
  }
  FStack_20268._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_20268.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  if (apvStack_202f0[0] != (void *)0x0) {
    FMemory::Free(apvStack_202f0[0]);
  }
  appuStack_1fc38[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_1fb98)
  ;
  appuStack_1fce8[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_1fc48)
  ;
  appuStack_1fd98[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_1fcf8)
  ;
  FCheckBoxStyle::~FCheckBoxStyle(&FStack_1a508);
  pFVar29 = FCheckBoxStyle::FCheckBoxStyle(&FStack_1a508);
  (pFVar29->CheckBoxType).Value = '\0';
  (pFVar29->ForegroundColor).SpecifiedColor.field0_0x0._s_0 =
       (FLinearColor_u_0_s_0)FStyleColors::White.SpecifiedColor.field0_0x0;
  EVar16 = FStyleColors::White.ColorTableId;
  uVar17 = FStyleColors::White._18_2_;
  (pFVar29->ForegroundColor).ColorUseRule = FStyleColors::White.ColorUseRule;
  (pFVar29->ForegroundColor).ColorTableId = EVar16;
  *(undefined2 *)&(pFVar29->ForegroundColor).field_0x12 = uVar17;
  (pFVar29->HoveredForeground).SpecifiedColor.field0_0x0._s_0 =
       (FLinearColor_u_0_s_0)FStyleColors::White.SpecifiedColor.field0_0x0;
  EVar16 = FStyleColors::White.ColorTableId;
  uVar17 = FStyleColors::White._18_2_;
  (pFVar29->HoveredForeground).ColorUseRule = FStyleColors::White.ColorUseRule;
  (pFVar29->HoveredForeground).ColorTableId = EVar16;
  *(undefined2 *)&(pFVar29->HoveredForeground).field_0x12 = uVar17;
  (pFVar29->PressedForeground).SpecifiedColor.field0_0x0._s_0 =
       (FLinearColor_u_0_s_0)FStyleColors::White.SpecifiedColor.field0_0x0;
  EVar16 = FStyleColors::White.ColorTableId;
  uVar17 = FStyleColors::White._18_2_;
  (pFVar29->PressedForeground).ColorUseRule = FStyleColors::White.ColorUseRule;
  (pFVar29->PressedForeground).ColorTableId = EVar16;
  *(undefined2 *)&(pFVar29->PressedForeground).field_0x12 = uVar17;
  (pFVar29->CheckedForeground).SpecifiedColor.field0_0x0._s_0 =
       (FLinearColor_u_0_s_0)FStyleColors::White.SpecifiedColor.field0_0x0;
  EVar16 = FStyleColors::White.ColorTableId;
  uVar17 = FStyleColors::White._18_2_;
  (pFVar29->CheckedForeground).ColorUseRule = FStyleColors::White.ColorUseRule;
  (pFVar29->CheckedForeground).ColorTableId = EVar16;
  *(undefined2 *)&(pFVar29->CheckedForeground).field_0x12 = uVar17;
  (pFVar29->CheckedHoveredForeground).SpecifiedColor.field0_0x0._s_0 =
       (FLinearColor_u_0_s_0)FStyleColors::White.SpecifiedColor.field0_0x0;
  EVar16 = FStyleColors::White.ColorTableId;
  uVar17 = FStyleColors::White._18_2_;
  (pFVar29->CheckedHoveredForeground).ColorUseRule = FStyleColors::White.ColorUseRule;
  (pFVar29->CheckedHoveredForeground).ColorTableId = EVar16;
  *(undefined2 *)&(pFVar29->CheckedHoveredForeground).field_0x12 = uVar17;
  (pFVar29->CheckedPressedForeground).SpecifiedColor.field0_0x0._s_0 =
       (FLinearColor_u_0_s_0)FStyleColors::White.SpecifiedColor.field0_0x0;
  EVar16 = FStyleColors::White.ColorTableId;
  uVar17 = FStyleColors::White._18_2_;
  (pFVar29->CheckedPressedForeground).ColorUseRule = FStyleColors::White.ColorUseRule;
  (pFVar29->CheckedPressedForeground).ColorTableId = EVar16;
  *(undefined2 *)&(pFVar29->CheckedPressedForeground).field_0x12 = uVar17;
  (pFVar29->UndeterminedForeground).SpecifiedColor.field0_0x0._s_0 =
       (FLinearColor_u_0_s_0)FStyleColors::White.SpecifiedColor.field0_0x0;
  EVar16 = FStyleColors::White.ColorTableId;
  uVar17 = FStyleColors::White._18_2_;
  (pFVar29->UndeterminedForeground).ColorUseRule = FStyleColors::White.ColorUseRule;
  (pFVar29->UndeterminedForeground).ColorTableId = EVar16;
  *(undefined2 *)&(pFVar29->UndeterminedForeground).field_0x12 = uVar17;
  local_res8 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  pFVar30 = (FSlateBrush *)
            FSlateNoResource::FSlateNoResource
                      ((FSlateNoResource *)appuStack_1fad8,
                       (FDeprecateVector2DParameter *)&local_res8._s_0);
  FSlateBrush::operator=(&pFVar29->UncheckedImage,pFVar30);
  local_res8 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  pFVar30 = (FSlateBrush *)
            FSlateNoResource::FSlateNoResource
                      ((FSlateNoResource *)appuStack_1f978,
                       (FDeprecateVector2DParameter *)&local_res8._s_0);
  FSlateBrush::operator=(&pFVar29->UncheckedHoveredImage,pFVar30);
  local_res8 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  pFVar30 = (FSlateBrush *)
            FSlateNoResource::FSlateNoResource
                      ((FSlateNoResource *)appuStack_1f8c8,
                       (FDeprecateVector2DParameter *)&local_res8._s_0);
  FSlateBrush::operator=(&pFVar29->UncheckedPressedImage,pFVar30);
  local_res8._s_0 = (TVector2<float>_u_0_s_0)CoreStyleConstants::Icon16x16;
  pFVar24 = (FString *)
            (**(code **)(param_1->Object->_padding_ + 0xf0))
                      (param_1->Object,apvStack_20340,"Starship/CoreWidgets/CheckBox/check",L".svg")
  ;
  FSlateImageBrush::FSlateImageBrush
            ((FSlateImageBrush *)&FStack_20268,pFVar24,
             (FDeprecateVector2DParameter *)&local_res8._s_0,&FStyleColors::White,NoTile,Vector);
  FStack_20268._padding_ = (longlong)&___7FSlateVectorImageBrush__6B_;
  FSlateBrush::operator=(&pFVar29->CheckedImage,&FStack_20268);
  local_res8._s_0 = (TVector2<float>_u_0_s_0)CoreStyleConstants::Icon16x16;
  pFVar24 = (FString *)
            (**(code **)(param_1->Object->_padding_ + 0xf0))
                      (param_1->Object,&FStack_203b8,"Starship/CoreWidgets/CheckBox/check",L".svg");
  FSlateImageBrush::FSlateImageBrush
            ((FSlateImageBrush *)&FStack_201b8,pFVar24,
             (FDeprecateVector2DParameter *)&local_res8._s_0,&FStyleColors::White,NoTile,Vector);
  FStack_201b8._padding_ = (longlong)&___7FSlateVectorImageBrush__6B_;
  FSlateBrush::operator=(&pFVar29->CheckedHoveredImage,&FStack_201b8);
  local_res8._s_0 = (TVector2<float>_u_0_s_0)CoreStyleConstants::Icon16x16;
  pFVar24 = (FString *)
            (**(code **)(param_1->Object->_padding_ + 0xf0))
                      (param_1->Object,apvStack_20330,"Starship/CoreWidgets/CheckBox/check",L".svg")
  ;
  FSlateImageBrush::FSlateImageBrush
            ((FSlateImageBrush *)&FStack_20108,pFVar24,
             (FDeprecateVector2DParameter *)&local_res8._s_0,&FStyleColors::White,NoTile,Vector);
  FStack_20108._padding_ = (longlong)&___7FSlateVectorImageBrush__6B_;
  FSlateBrush::operator=(&pFVar29->CheckedPressedImage,&FStack_20108);
  local_res8._s_0 = (TVector2<float>_u_0_s_0)CoreStyleConstants::Icon16x16;
  pFVar24 = (FString *)
            (**(code **)(param_1->Object->_padding_ + 0xf0))
                      (param_1->Object,&FStack_20380,"Starship/CoreWidgets/CheckBox/indeterminate",
                       L".svg");
  FSlateImageBrush::FSlateImageBrush
            ((FSlateImageBrush *)&FStack_20058,pFVar24,
             (FDeprecateVector2DParameter *)&local_res8._s_0,&FStyleColors::White,NoTile,Vector);
  FStack_20058._padding_ = (longlong)&___7FSlateVectorImageBrush__6B_;
  FSlateBrush::operator=(&pFVar29->UndeterminedImage,&FStack_20058);
  local_res8._s_0 = (TVector2<float>_u_0_s_0)CoreStyleConstants::Icon16x16;
  pFVar24 = (FString *)
            (**(code **)(param_1->Object->_padding_ + 0xf0))
                      (param_1->Object,&FStack_203a0,"Starship/CoreWidgets/CheckBox/indeterminate",
                       L".svg");
  FSlateImageBrush::FSlateImageBrush
            ((FSlateImageBrush *)&FStack_1ffa8,pFVar24,
             (FDeprecateVector2DParameter *)&local_res8._s_0,&FStyleColors::White,NoTile,Vector);
  FStack_1ffa8._padding_ = (longlong)&___7FSlateVectorImageBrush__6B_;
  FSlateBrush::operator=(&pFVar29->UndeterminedHoveredImage,&FStack_1ffa8);
  local_res8._s_0 = (TVector2<float>_u_0_s_0)CoreStyleConstants::Icon16x16;
  pFVar24 = (FString *)
            (**(code **)(param_1->Object->_padding_ + 0xf0))
                      (param_1->Object,auStack_203d8,"Starship/CoreWidgets/CheckBox/indeterminate",
                       L".svg");
  FSlateImageBrush::FSlateImageBrush
            ((FSlateImageBrush *)&FStack_1fef8,pFVar24,
             (FDeprecateVector2DParameter *)&local_res8._s_0,&FStyleColors::White,NoTile,Vector);
  FStack_1fef8._padding_ = (longlong)&___7FSlateVectorImageBrush__6B_;
  FSlateBrush::operator=(&pFVar29->UndeterminedPressedImage,&FStack_1fef8);
  fVar4 = __real_40400000;
  local_res8._s_0 = (TVector2<float>_u_0_s_0)CoreStyleConstants::Icon18x18;
  pFVar30 = (FSlateBrush *)
            FSlateRoundedBoxBrush::FSlateRoundedBoxBrush<FSlateColor,FSlateColor,float>
                      ((FSlateRoundedBoxBrush *)appuStack_1fd98,&FStyleColors::Panel,__real_40400000
                       ,&FStyleColors::Hover,fVar3,(FDeprecateVector2DParameter *)&local_res8._s_0);
  FSlateBrush::operator=(&pFVar29->BackgroundImage,pFVar30);
  local_res8._s_0 = (TVector2<float>_u_0_s_0)CoreStyleConstants::Icon18x18;
  pFVar30 = (FSlateBrush *)
            FSlateRoundedBoxBrush::FSlateRoundedBoxBrush<FSlateColor,FSlateColor,float>
                      ((FSlateRoundedBoxBrush *)appuStack_1fce8,&FStyleColors::Panel,fVar4,
                       &FStyleColors::Hover,fVar3,(FDeprecateVector2DParameter *)&local_res8._s_0);
  FSlateBrush::operator=(&pFVar29->BackgroundHoveredImage,pFVar30);
  local_res8._s_0 = (TVector2<float>_u_0_s_0)CoreStyleConstants::Icon18x18;
  pFVar30 = (FSlateBrush *)
            FSlateRoundedBoxBrush::FSlateRoundedBoxBrush<FSlateColor,FSlateColor,float>
                      ((FSlateRoundedBoxBrush *)appuStack_1fc38,&FStyleColors::Panel,fVar4,
                       &FStyleColors::Hover,fVar3,(FDeprecateVector2DParameter *)&local_res8._s_0);
  FSlateBrush::operator=(&pFVar29->BackgroundPressedImage,pFVar30);
  FCheckBoxStyle::FCheckBoxStyle(&FStack_14e48,pFVar29);
  appuStack_1fc38[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_1fb98)
  ;
  appuStack_1fce8[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_1fc48)
  ;
  appuStack_1fd98[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_1fcf8)
  ;
  FStack_1fef8._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_1fef8.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  if ((void *)auStack_203d8._0_8_ != (void *)0x0) {
    FMemory::Free((void *)auStack_203d8._0_8_);
  }
  FStack_1ffa8._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_1ffa8.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  if ((FName)FStack_203a0._0_8_ != (FName)0x0) {
    FMemory::Free((void *)FStack_203a0._0_8_);
  }
  FStack_20058._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_20058.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  if ((void *)FStack_20380._0_8_ != (void *)0x0) {
    FMemory::Free((void *)FStack_20380._0_8_);
  }
  FStack_20108._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_20108.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  if (apvStack_20330[0] != (void *)0x0) {
    FMemory::Free(apvStack_20330[0]);
  }
  FStack_201b8._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_201b8.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  if ((void *)FStack_203b8._0_8_ != (void *)0x0) {
    FMemory::Free((void *)FStack_203b8._0_8_);
  }
  FStack_20268._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_20268.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  if (apvStack_20340[0] != (void *)0x0) {
    FMemory::Free(apvStack_20340[0]);
  }
  appuStack_1f8c8[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_1f828)
  ;
  appuStack_1f978[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_1f8d8)
  ;
  appuStack_1fad8[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_1fa38)
  ;
  FCheckBoxStyle::~FCheckBoxStyle(&FStack_1a508);
  pFVar1 = param_1->Object;
  pFVar20 = ::FName::FName((FName *)&local_res8._s_0,"Menu.CheckBox");
  FSlateStyleSet::Set<FCheckBoxStyle>((FSlateStyleSet *)pFVar1,*pFVar20,&FStack_14e48);
  pFVar1 = param_1->Object;
  pFVar20 = ::FName::FName((FName *)&local_res10._s_0,"Menu.Check");
  FSlateStyleSet::Set<FCheckBoxStyle>((FSlateStyleSet *)pFVar1,*pFVar20,&FStack_18628);
  pFVar1 = param_1->Object;
  pFVar20 = ::FName::FName((FName *)&local_res18._s_0,"ClippingVerticalBox.Check");
  FSlateStyleSet::Set<FCheckBoxStyle>((FSlateStyleSet *)pFVar1,*pFVar20,&FStack_18628);
  pFVar29 = FCheckBoxStyle::FCheckBoxStyle(&FStack_1a508);
  pFVar30 = (FSlateBrush *)
            FSlateRoundedBoxBrush::FSlateRoundedBoxBrush<FSlateColor>
                      ((FSlateRoundedBoxBrush *)appuStack_1fa28,&FStyleColors::Input,
                       &CoreStyleConstants::Icon8x8);
  FSlateBrush::operator=(&pFVar29->UncheckedImage,pFVar30);
  pFVar30 = (FSlateBrush *)
            FSlateRoundedBoxBrush::FSlateRoundedBoxBrush<FSlateColor>
                      ((FSlateRoundedBoxBrush *)appuStack_1f708,&FStyleColors::Input,
                       &CoreStyleConstants::Icon8x8);
  FSlateBrush::operator=(&pFVar29->UncheckedHoveredImage,pFVar30);
  pFVar30 = (FSlateBrush *)
            FSlateRoundedBoxBrush::FSlateRoundedBoxBrush<FSlateColor>
                      ((FSlateRoundedBoxBrush *)appuStack_1f658,&FStyleColors::Hover2,
                       &CoreStyleConstants::Icon8x8);
  FSlateBrush::operator=(&pFVar29->UncheckedPressedImage,pFVar30);
  pFVar30 = (FSlateBrush *)
            FSlateRoundedBoxBrush::FSlateRoundedBoxBrush<FSlateColor>
                      ((FSlateRoundedBoxBrush *)appuStack_1fad8,&FStyleColors::White,
                       &CoreStyleConstants::Icon8x8);
  FSlateBrush::operator=(&pFVar29->CheckedImage,pFVar30);
  pFVar30 = (FSlateBrush *)
            FSlateRoundedBoxBrush::FSlateRoundedBoxBrush<FSlateColor>
                      ((FSlateRoundedBoxBrush *)appuStack_1f978,&FStyleColors::White,
                       &CoreStyleConstants::Icon8x8);
  FSlateBrush::operator=(&pFVar29->CheckedHoveredImage,pFVar30);
  pFVar30 = (FSlateBrush *)
            FSlateRoundedBoxBrush::FSlateRoundedBoxBrush<FSlateColor>
                      ((FSlateRoundedBoxBrush *)appuStack_1f8c8,&FStyleColors::White,
                       &CoreStyleConstants::Icon8x8);
  FSlateBrush::operator=(&pFVar29->CheckedPressedImage,pFVar30);
  pFVar30 = (FSlateBrush *)
            FSlateRoundedBoxBrush::FSlateRoundedBoxBrush<FSlateColor>
                      ((FSlateRoundedBoxBrush *)appuStack_1fd98,&FStyleColors::Input,
                       &CoreStyleConstants::Icon8x8);
  FSlateBrush::operator=(&pFVar29->UndeterminedImage,pFVar30);
  pFVar30 = (FSlateBrush *)
            FSlateRoundedBoxBrush::FSlateRoundedBoxBrush<FSlateColor>
                      ((FSlateRoundedBoxBrush *)appuStack_1fce8,&FStyleColors::White,
                       &CoreStyleConstants::Icon8x8);
  FSlateBrush::operator=(&pFVar29->UndeterminedHoveredImage,pFVar30);
  pFVar30 = (FSlateBrush *)
            FSlateRoundedBoxBrush::FSlateRoundedBoxBrush<FSlateColor>
                      ((FSlateRoundedBoxBrush *)appuStack_1fc38,&FStyleColors::White,
                       &CoreStyleConstants::Icon8x8);
  FSlateBrush::operator=(&pFVar29->UndeterminedPressedImage,pFVar30);
  FCheckBoxStyle::FCheckBoxStyle(&FStack_15798,pFVar29);
  appuStack_1fc38[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_1fb98)
  ;
  appuStack_1fce8[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_1fc48)
  ;
  appuStack_1fd98[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_1fcf8)
  ;
  appuStack_1f8c8[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_1f828)
  ;
  appuStack_1f978[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_1f8d8)
  ;
  appuStack_1fad8[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_1fa38)
  ;
  appuStack_1f658[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_1f5b8)
  ;
  appuStack_1f708[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_1f668)
  ;
  appuStack_1fa28[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_1f988)
  ;
  FCheckBoxStyle::~FCheckBoxStyle(&FStack_1a508);
  pFVar1 = param_1->Object;
  pFVar20 = ::FName::FName(&local_res20,"Menu.RadioButton");
  FSlateStyleSet::Set<FCheckBoxStyle>((FSlateStyleSet *)pFVar1,*pFVar20,&FStack_15798);
  pFVar29 = FCheckBoxStyle::FCheckBoxStyle(&FStack_19498);
  (pFVar29->CheckBoxType).Value = '\x01';
  local_res8 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  pFVar30 = (FSlateBrush *)
            FSlateNoResource::FSlateNoResource
                      ((FSlateNoResource *)appuStack_1f238,
                       (FDeprecateVector2DParameter *)&local_res8._s_0);
  FSlateBrush::operator=(&pFVar29->UncheckedImage,pFVar30);
  FVar6 = ___xmm_3e8000003e8000003e8000003e800000;
  ___xmm_3e8000003e8000003e8000003e800000 = FVar5.ComparisonIndex.Value;
  _UNK_15076b0c4 = FVar5.Number;
  auStack_203d8._0_4_ = ___xmm_3e8000003e8000003e8000003e800000;
  auStack_203d8._4_4_ = _UNK_15076b0c4;
  auStack_203d8._8_8_ = dVar7;
  ___xmm_3e8000003e8000003e8000003e800000 = FVar6;
  pFVar24 = (FString *)
            (**(code **)(param_1->Object->_padding_ + 0xf0))
                      (param_1->Object,auStack_20390,"Common/RoundedSelection_16x",L".png");
  pFVar30 = (FSlateBrush *)
            FSlateBoxBrush::FSlateBoxBrush
                      ((FSlateBoxBrush *)&FStack_1f818,pFVar24,(FMargin *)auStack_203d8,
                       &FStack_20318,FullColor);
  FSlateBrush::operator=(&pFVar29->UncheckedPressedImage,pFVar30);
  FVar6 = ___xmm_3e8000003e8000003e8000003e800000;
  ___xmm_3e8000003e8000003e8000003e800000 = FVar5.ComparisonIndex.Value;
  _UNK_15076b0c4 = FVar5.Number;
  auStack_203d8._0_4_ = ___xmm_3e8000003e8000003e8000003e800000;
  auStack_203d8._4_4_ = _UNK_15076b0c4;
  auStack_203d8._8_8_ = dVar7;
  ___xmm_3e8000003e8000003e8000003e800000 = FVar6;
  pFVar24 = (FString *)
            (**(code **)(param_1->Object->_padding_ + 0xf0))
                      (param_1->Object,apvStack_202f0,"Common/RoundedSelection_16x",L".png");
  pFVar30 = (FSlateBrush *)
            FSlateBoxBrush::FSlateBoxBrush
                      ((FSlateBoxBrush *)&FStack_1fe48,pFVar24,(FMargin *)auStack_203d8,
                       &FStack_202d0,FullColor);
  FSlateBrush::operator=(&pFVar29->UncheckedHoveredImage,pFVar30);
  FVar6 = ___xmm_3e8000003e8000003e8000003e800000;
  ___xmm_3e8000003e8000003e8000003e800000 = FVar5.ComparisonIndex.Value;
  _UNK_15076b0c4 = FVar5.Number;
  auStack_203d8._0_4_ = ___xmm_3e8000003e8000003e8000003e800000;
  auStack_203d8._4_4_ = _UNK_15076b0c4;
  auStack_203d8._8_8_ = dVar7;
  ___xmm_3e8000003e8000003e8000003e800000 = FVar6;
  pFVar24 = (FString *)
            (**(code **)(param_1->Object->_padding_ + 0xf0))
                      (param_1->Object,apvStack_202e0,"Common/RoundedSelection_16x",L".png");
  pFVar30 = (FSlateBrush *)
            FSlateBoxBrush::FSlateBoxBrush
                      ((FSlateBoxBrush *)appuStack_1f5a8,pFVar24,(FMargin *)auStack_203d8,
                       &FStack_20318,FullColor);
  FSlateBrush::operator=(&pFVar29->CheckedImage,pFVar30);
  FVar6 = ___xmm_3e8000003e8000003e8000003e800000;
  ___xmm_3e8000003e8000003e8000003e800000 = FVar5.ComparisonIndex.Value;
  _UNK_15076b0c4 = FVar5.Number;
  auStack_203d8._0_4_ = ___xmm_3e8000003e8000003e8000003e800000;
  auStack_203d8._4_4_ = _UNK_15076b0c4;
  auStack_203d8._8_8_ = dVar7;
  ___xmm_3e8000003e8000003e8000003e800000 = FVar6;
  pFVar24 = (FString *)
            (**(code **)(param_1->Object->_padding_ + 0xf0))
                      (param_1->Object,apvStack_20340,"Common/RoundedSelection_16x",L".png");
  pFVar30 = (FSlateBrush *)
            FSlateBoxBrush::FSlateBoxBrush
                      ((FSlateBoxBrush *)appuStack_1f4f8,pFVar24,(FMargin *)auStack_203d8,
                       &FStack_20318,FullColor);
  FSlateBrush::operator=(&pFVar29->CheckedHoveredImage,pFVar30);
  FVar6 = ___xmm_3e8000003e8000003e8000003e800000;
  ___xmm_3e8000003e8000003e8000003e800000 = FVar5.ComparisonIndex.Value;
  _UNK_15076b0c4 = FVar5.Number;
  auStack_203d8._0_4_ = ___xmm_3e8000003e8000003e8000003e800000;
  auStack_203d8._4_4_ = _UNK_15076b0c4;
  auStack_203d8._8_8_ = dVar7;
  ___xmm_3e8000003e8000003e8000003e800000 = FVar6;
  pFVar24 = (FString *)
            (**(code **)(param_1->Object->_padding_ + 0xf0))
                      (param_1->Object,&FStack_203b8,"Common/RoundedSelection_16x",L".png");
  pFVar30 = (FSlateBrush *)
            FSlateBoxBrush::FSlateBoxBrush
                      ((FSlateBoxBrush *)appuStack_1f448,pFVar24,(FMargin *)auStack_203d8,
                       &FStack_202d0,FullColor);
  FSlateBrush::operator=(&pFVar29->CheckedPressedImage,pFVar30);
  FCheckBoxStyle::FCheckBoxStyle(&FStack_160e8,pFVar29);
  appuStack_1f448[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_1f3a8)
  ;
  if ((void *)FStack_203b8._0_8_ != (void *)0x0) {
    FMemory::Free((void *)FStack_203b8._0_8_);
  }
  appuStack_1f4f8[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_1f458)
  ;
  if (apvStack_20340[0] != (void *)0x0) {
    FMemory::Free(apvStack_20340[0]);
  }
  appuStack_1f5a8[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_1f508)
  ;
  if (apvStack_202e0[0] != (void *)0x0) {
    FMemory::Free(apvStack_202e0[0]);
  }
  FStack_1fe48._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_1fe48.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  if (apvStack_202f0[0] != (void *)0x0) {
    FMemory::Free(apvStack_202f0[0]);
  }
  FStack_1f818._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_1f818.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  if ((FName)auStack_20390 != (FName)0x0) {
    FMemory::Free((void *)auStack_20390);
  }
  appuStack_1f238[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_1f198)
  ;
  FCheckBoxStyle::~FCheckBoxStyle(&FStack_19498);
  pFVar1 = param_1->Object;
  pFVar20 = ::FName::FName((FName *)&local_res8._s_0,"Menu.ToggleButton");
  FSlateStyleSet::Set<FCheckBoxStyle>((FSlateStyleSet *)pFVar1,*pFVar20,&FStack_160e8);
  pFVar1 = param_1->Object;
  pFVar20 = ::FName::FName((FName *)&FStack_20350._s_0,"NoBorder");
  pFVar31 = ISlateStyle::GetWidgetStyle<FButtonStyle>
                      ((ISlateStyle *)pFVar1,*pFVar20,(char *)0x0,(FButtonStyle *)0x0);
  pFVar31 = FButtonStyle::FButtonStyle((FButtonStyle *)&FStack_19498,pFVar31);
  local_res8 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  pFVar30 = (FSlateBrush *)
            FSlateNoResource::FSlateNoResource
                      ((FSlateNoResource *)appuStack_1f238,
                       (FDeprecateVector2DParameter *)&local_res8._s_0);
  FSlateBrush::operator=(&pFVar31->Normal,pFVar30);
  local_res10 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  FStack_203b8._0_8_ = 0;
  FStack_203b8._8_8_ = 0;
  local_res8 = (TVector2<float>_u_0)0x0;
  FSlateBrush::FSlateBrush
            (&FStack_1fe48,Image,(FName)0x0,(FMargin *)&FStack_203b8._s_0,NoTile,NoImage,
             (FDeprecateVector2DParameter *)&local_res10._s_0,&FStyleColors::Primary,(UObject *)0x0,
             false);
  FStack_1fe48._padding_ = (longlong)&___7FSlateColorBrush__6B_;
  FSlateBrush::operator=(&pFVar31->Pressed,&FStack_1fe48);
  local_res10 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  local_res8 = (TVector2<float>_u_0)0x0;
  FStack_203b8._0_8_ = 0;
  FStack_203b8._8_8_ = 0;
  FSlateBrush::FSlateBrush
            (&FStack_1f818,Image,(FName)0x0,(FMargin *)&FStack_203b8._s_0,NoTile,NoImage,
             (FDeprecateVector2DParameter *)&local_res10._s_0,&FStyleColors::Primary,(UObject *)0x0,
             false);
  FStack_1f818._padding_ = (longlong)&___7FSlateColorBrush__6B_;
  FSlateBrush::operator=(&pFVar31->Hovered,&FStack_1f818);
  (pFVar31->HoveredForeground).SpecifiedColor.field0_0x0._s_0 =
       (FLinearColor_u_0_s_0)FStyleColors::ForegroundHover.SpecifiedColor.field0_0x0;
  EVar16 = FStyleColors::ForegroundHover.ColorTableId;
  uVar17 = FStyleColors::ForegroundHover._18_2_;
  (pFVar31->HoveredForeground).ColorUseRule = FStyleColors::ForegroundHover.ColorUseRule;
  (pFVar31->HoveredForeground).ColorTableId = EVar16;
  *(undefined2 *)&(pFVar31->HoveredForeground).field_0x12 = uVar17;
  (pFVar31->NormalPadding).Left = 0.0;
  (pFVar31->NormalPadding).Top = 2.0;
  (pFVar31->NormalPadding).Right = 0.0;
  *(undefined8 *)&(pFVar31->NormalPadding).Bottom = 0x40000000;
  (pFVar31->PressedPadding).Top = 3.0;
  (pFVar31->PressedPadding).Right = 0.0;
  (pFVar31->PressedPadding).Bottom = 1.0;
  FButtonStyle::FButtonStyle(&FStack_1bfc8,pFVar31);
  FStack_1f818._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_1f818.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  FStack_1fe48._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_1fe48.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  appuStack_1f238[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_1f198)
  ;
  FButtonStyle::~FButtonStyle((FButtonStyle *)&FStack_19498);
  pFVar1 = param_1->Object;
  pFVar20 = ::FName::FName((FName *)&local_res18._s_0,"Menu.Button");
  FSlateStyleSet::Set<FButtonStyle>((FSlateStyleSet *)pFVar1,*pFVar20,&FStack_1bfc8);
  pFVar1 = param_1->Object;
  this = ::operator_new(0xb0);
  FVar6 = ___xmm_3e8000003e8000003e8000003e800000;
  pFVar30 = pFVar33;
  if (this != (FSlateBoxBrush *)0x0) {
    ___xmm_3e8000003e8000003e8000003e800000 = FVar5.ComparisonIndex.Value;
    _UNK_15076b0c4 = FVar5.Number;
    auStack_203d8._0_4_ = ___xmm_3e8000003e8000003e8000003e800000;
    auStack_203d8._4_4_ = _UNK_15076b0c4;
    auStack_203d8._8_8_ = dVar7;
    ___xmm_3e8000003e8000003e8000003e800000 = FVar6;
    pFVar24 = (FString *)
              (**(code **)(param_1->Object->_padding_ + 0xf0))
                        (param_1->Object,&FStack_203a0,"Common/RoundedSelection_16x",L".png");
    pFVar30 = (FSlateBrush *)
              FSlateBoxBrush::FSlateBoxBrush
                        (this,pFVar24,(FMargin *)auStack_203d8,&FStack_20318,FullColor);
  }
  pFVar20 = ::FName::FName((FName *)&local_res8._s_0,"Menu.Button.Checked");
  FSlateStyleSet::Set<FSlateBoxBrush>((FSlateStyleSet *)pFVar1,*pFVar20,(FSlateBoxBrush *)pFVar30);
  if ((this != (FSlateBoxBrush *)0x0) && ((FName)FStack_203a0._0_8_ != (FName)0x0)) {
    FMemory::Free((void *)FStack_203a0._0_8_);
  }
  pFVar1 = param_1->Object;
  this_00 = ::operator_new(0xb0);
  FVar6 = ___xmm_3e8000003e8000003e8000003e800000;
  pFVar30 = pFVar33;
  if (this_00 != (FSlateBorderBrush *)0x0) {
    auStack_203d8._0_4_ = ___xmm_3f8000003dcccccd3dcccccd3dcccccd;
    auStack_203d8._4_4_ = _UNK_1509252c4;
    auStack_203d8._8_8_ = _UNK_1509252c8;
    ___xmm_3e8000003e8000003e8000003e800000 = FVar5.ComparisonIndex.Value;
    _UNK_15076b0c4 = FVar5.Number;
    FStack_203a0._s_0.R = (float)___xmm_3e8000003e8000003e8000003e800000;
    FStack_203a0._s_0.G = (float)_UNK_15076b0c4;
    FStack_203a0._8_8_ = dVar7;
    ___xmm_3e8000003e8000003e8000003e800000 = FVar6;
    pFVar24 = (FString *)
              (**(code **)(param_1->Object->_padding_ + 0xf0))
                        (param_1->Object,&FStack_20380,"Common/Selection",L".png");
    pFVar30 = (FSlateBrush *)
              FSlateBorderBrush::FSlateBorderBrush
                        (this_00,pFVar24,(FMargin *)&FStack_203a0._s_0,(FLinearColor *)auStack_203d8
                         ,FullColor);
  }
  pFVar20 = ::FName::FName((FName *)&local_res8._s_0,"Menu.Button.SubMenuOpen");
  FSlateStyleSet::Set<FSlateBorderBrush>
            ((FSlateStyleSet *)pFVar1,*pFVar20,(FSlateBorderBrush *)pFVar30);
  if ((this_00 != (FSlateBorderBrush *)0x0) && ((void *)FStack_20380._0_8_ != (void *)0x0)) {
    FMemory::Free((void *)FStack_20380._0_8_);
  }
  cVar38 = '\0';
  pFVar31 = FButtonStyle::FButtonStyle((FButtonStyle *)&FStack_19498,&FStack_1bfc8);
  local_res10 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  auStack_203d8._0_8_ = (void *)0x0;
  auStack_203d8._8_8_ = 0.0;
  local_res8 = (TVector2<float>_u_0)0x0;
  FSlateBrush::FSlateBrush
            (&FStack_1fe48,Image,(FName)0x0,(FMargin *)auStack_203d8,NoTile,NoImage,
             (FDeprecateVector2DParameter *)&local_res10._s_0,&FStyleColors::Hover,(UObject *)0x0,
             false);
  FStack_1fe48._padding_ = (longlong)&___7FSlateColorBrush__6B_;
  FSlateBrush::operator=(&pFVar31->Hovered,&FStack_1fe48);
  (pFVar31->HoveredForeground).SpecifiedColor.field0_0x0._s_0 =
       (FLinearColor_u_0_s_0)FStyleColors::ForegroundHover.SpecifiedColor.field0_0x0;
  EVar16 = FStyleColors::ForegroundHover.ColorTableId;
  uVar17 = FStyleColors::ForegroundHover._18_2_;
  (pFVar31->HoveredForeground).ColorUseRule = FStyleColors::ForegroundHover.ColorUseRule;
  (pFVar31->HoveredForeground).ColorTableId = EVar16;
  *(undefined2 *)&(pFVar31->HoveredForeground).field_0x12 = uVar17;
  (pFVar31->PressedForeground).SpecifiedColor.field0_0x0._s_0 =
       (FLinearColor_u_0_s_0)FStyleColors::ForegroundHover.SpecifiedColor.field0_0x0;
  EVar16 = FStyleColors::ForegroundHover.ColorTableId;
  uVar17 = FStyleColors::ForegroundHover._18_2_;
  (pFVar31->PressedForeground).ColorUseRule = FStyleColors::ForegroundHover.ColorUseRule;
  (pFVar31->PressedForeground).ColorTableId = EVar16;
  *(undefined2 *)&(pFVar31->PressedForeground).field_0x12 = uVar17;
  (pFVar31->NormalForeground).SpecifiedColor.field0_0x0._s_0 =
       (FLinearColor_u_0_s_0)FStyleColors::Foreground.SpecifiedColor.field0_0x0;
  EVar16 = FStyleColors::Foreground.ColorTableId;
  uVar17 = FStyleColors::Foreground._18_2_;
  (pFVar31->NormalForeground).ColorUseRule = FStyleColors::Foreground.ColorUseRule;
  (pFVar31->NormalForeground).ColorTableId = EVar16;
  *(undefined2 *)&(pFVar31->NormalForeground).field_0x12 = uVar17;
  FButtonStyle::FButtonStyle(&FStack_1a898,pFVar31);
  FStack_1fe48._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_1fe48.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  FButtonStyle::~FButtonStyle((FButtonStyle *)&FStack_19498);
  pFVar1 = param_1->Object;
  this_01 = ::operator_new(0xb0);
  pFVar30 = pFVar33;
  if (this_01 != (FSlateNoResource *)0x0) {
    local_res8 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
    pFVar30 = (FSlateBrush *)
              FSlateNoResource::FSlateNoResource
                        (this_01,(FDeprecateVector2DParameter *)&local_res8._s_0);
  }
  pFVar20 = ::FName::FName((FName *)&local_res10._s_0,"WindowMenuBar.Background");
  FSlateStyleSet::Set<FSlateNoResource>
            ((FSlateStyleSet *)pFVar1,*pFVar20,(FSlateNoResource *)pFVar30);
  pFVar1 = param_1->Object;
  pFVar26 = FTextBlockStyle::FTextBlockStyle(&FStack_1ea68,(FTextBlockStyle *)TVar18);
  pFVar27 = FStyleFonts::Get();
  FSlateFontInfo::operator=(&pFVar26->Font,&pFVar27->Normal);
  pFVar20 = ::FName::FName((FName *)&local_res8._s_0,"WindowMenuBar.Label");
  FSlateStyleSet::Set<FTextBlockStyle>((FSlateStyleSet *)pFVar1,*pFVar20,pFVar26);
  FTextBlockStyle::~FTextBlockStyle(&FStack_1ea68);
  pFVar1 = param_1->Object;
  pFVar23 = ::operator_new(0xb0);
  pFVar30 = pFVar33;
  if (pFVar23 != (FSlateImageBrush *)0x0) {
    local_res8._s_0 = (TVector2<float>_u_0_s_0)CoreStyleConstants::Icon16x16;
    cVar38 = -0x80;
    auStack_203d8._0_8_ = pvVar8;
    auStack_203d8._8_8_ = dVar9;
    pFVar24 = (FString *)
              (**(code **)(param_1->Object->_padding_ + 0xf0))
                        (param_1->Object,&FStack_203a0,"Icons/toolbar_expand_16x",L".png");
    pFVar30 = (FSlateBrush *)
              FSlateImageBrush::FSlateImageBrush
                        (pFVar23,pFVar24,(FDeprecateVector2DParameter *)&local_res8._s_0,
                         (FLinearColor *)auStack_203d8,NoTile,FullColor);
  }
  pFVar20 = ::FName::FName((FName *)&local_res10._s_0,"WindowMenuBar.Expand");
  FSlateStyleSet::Set<FSlateImageBrush>
            ((FSlateStyleSet *)pFVar1,*pFVar20,(FSlateImageBrush *)pFVar30);
  if ((cVar38 < '\0') && ((FName)FStack_203a0._0_8_ != (FName)0x0)) {
    FMemory::Free((void *)FStack_203a0._0_8_);
  }
  pFVar1 = param_1->Object;
  pFVar20 = ::FName::FName((FName *)&local_res8._s_0,"WindowMenuBar.Button");
  FSlateStyleSet::Set<FButtonStyle>((FSlateStyleSet *)pFVar1,*pFVar20,&FStack_1a898);
  pFVar1 = param_1->Object;
  pFVar30 = ::operator_new(0xb0);
  if (pFVar30 != (FSlateBrush *)0x0) {
    local_res10 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
    auStack_203d8._0_8_ = (void *)0x0;
    auStack_203d8._8_8_ = 0.0;
    local_res8 = (TVector2<float>_u_0)0x0;
    FSlateBrush::FSlateBrush
              (pFVar30,Image,(FName)0x0,(FMargin *)auStack_203d8,NoTile,NoImage,
               (FDeprecateVector2DParameter *)&local_res10._s_0,&FStyleColors::Primary,
               (UObject *)0x0,false);
    pFVar30->_padding_ = (longlong)&___7FSlateColorBrush__6B_;
    pFVar33 = pFVar30;
  }
  pFVar20 = ::FName::FName((FName *)&local_res18._s_0,"WindowMenuBar.Button.SubMenuOpen");
  FSlateStyleSet::Set<FSlateColorBrush>
            ((FSlateStyleSet *)pFVar1,*pFVar20,(FSlateColorBrush *)pFVar33);
  pFVar1 = param_1->Object;
  auStack_203d8._0_8_ = ___xmm_40800000414000004080000041400000;
  auStack_203d8._8_8_ = _UNK_150925408;
  pFVar20 = ::FName::FName((FName *)&local_res8._s_0,"WindowMenuBar.MenuBar.Padding");
  FSlateStyleSet::Set((FSlateStyleSet *)pFVar1,*pFVar20,(FMargin *)auStack_203d8);
  FButtonStyle::~FButtonStyle(&FStack_1a898);
  FButtonStyle::~FButtonStyle(&FStack_1bfc8);
  FCheckBoxStyle::~FCheckBoxStyle(&FStack_160e8);
  FCheckBoxStyle::~FCheckBoxStyle(&FStack_15798);
  FCheckBoxStyle::~FCheckBoxStyle(&FStack_14e48);
  FCheckBoxStyle::~FCheckBoxStyle(&FStack_18628);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_1f768.CompositeFont.SharedReferenceCount.ReferenceController);
  return;
}

// SetupTableViewStyles @ 1425a30b0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
FStarshipCoreStyle::SetupTableViewStyles(TSharedRef<FStarshipCoreStyle::FStyle,1> *param_1)

{
  FStyle *pFVar1;
  code *pcVar2;
  float fVar3;
  float fVar4;
  void *pvVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  EStyleColor EVar8;
  undefined2 uVar9;
  FName *pFVar10;
  FSlateBrush *pFVar11;
  FTableRowStyle *pFVar12;
  FString *pFVar13;
  FSlateImageBrush *pFVar14;
  FSlateImageBrush *pFVar15;
  FHeaderRowStyle *pFVar16;
  FSlateImageBrush *pFVar17;
  TVector2<float>_u_0 local_res8;
  TVector2<float>_u_0 local_res10;
  FName local_res18;
  FLinearColor_u_0 local_6878;
  void *local_6868;
  undefined8 uStack_6860;
  FLinearColor_u_0 local_6858;
  void *local_6848 [2];
  void *local_6838 [2];
  void *local_6828 [2];
  FSlateColor local_6818;
  FSlateBrush local_67f8;
  FSlateBrush local_6748;
  FSlateColor local_6698;
  FSlateBrush local_6678;
  FSlateBrush local_65c8;
  FSlateBrush local_6518;
  FSlateBrush local_6468;
  FSlateBrush local_63b8;
  undefined1 local_6308 [176];
  FSharedReferencer<1> local_6258;
  FSlateBrush local_6248;
  undefined **local_6198 [20];
  TReferenceControllerBase<1> *local_60f8;
  FSlateBrush local_60e8;
  FSlateBrush local_6038;
  FSlateBrush local_5f88;
  FTableViewStyle local_5ed8;
  FTableViewStyle local_5e18;
  undefined **local_5d58 [20];
  TReferenceControllerBase<1> *local_5cb8;
  undefined1 local_5ca8 [192];
  FSlateBrush local_5be8;
  FSlateBrush local_5b38;
  FSlateBrush local_5a88;
  FSlateBrush local_59d8;
  FSlateBrush local_5928;
  FSlateBrush local_5878;
  FSlateBrush local_57c8;
  FSlateBrush local_5718;
  FSlateWidgetStyle local_5668 [2];
  FSlateBrush local_5658;
  FSlateBrush local_55a8;
  FHeaderRowStyle local_54f8;
  FTableColumnHeaderStyle local_4558;
  FTableRowStyle local_3f18;
  FTableColumnHeaderStyle local_33c8;
  FTableRowStyle local_2d88;
  FTableRowStyle local_2238;
  FTableRowStyle local_16e8;
  FTableRowStyle local_b98;
  
  pFVar17 = (FSlateImageBrush *)0x0;
  local_res8._s_0 = local_res8._s_0 & 0xffffffff00000000;
  pFVar1 = param_1->Object;
  pcVar2 = *(code **)(pFVar1->_padding_ + 0x40);
  pFVar10 = ::FName::FName((FName *)&local_res8._s_0,"SelectionColor");
  (*pcVar2)(pFVar1,&local_6818,*pFVar10,0,&FStyleDefaults::DefaultSlateColor,0);
  pFVar1 = param_1->Object;
  pcVar2 = *(code **)(pFVar1->_padding_ + 0x40);
  pFVar10 = ::FName::FName((FName *)&local_res8._s_0,"SelectorColor");
  (*pcVar2)(pFVar1,&local_6698,*pFVar10,0,&FStyleDefaults::DefaultSlateColor,0);
  FSlateWidgetStyle::FSlateWidgetStyle((FSlateWidgetStyle *)&local_5e18);
  local_res8 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  local_5e18._padding_ = (longlong)&___7FTableViewStyle__6B_;
  pFVar11 = (FSlateBrush *)
            FSlateNoResource::FSlateNoResource
                      ((FSlateNoResource *)&local_67f8,
                       (FDeprecateVector2DParameter *)&local_res8._s_0);
  FSlateBrush::FSlateBrush(&local_5e18.BackgroundBrush,pFVar11);
  local_67f8._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_67f8.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  pFVar1 = param_1->Object;
  pFVar10 = ::FName::FName((FName *)&local_res8._s_0,"ListView");
  FSlateStyleSet::Set<FTableViewStyle>((FSlateStyleSet *)pFVar1,*pFVar10,&local_5e18);
  pFVar1 = param_1->Object;
  FSlateWidgetStyle::FSlateWidgetStyle((FSlateWidgetStyle *)local_6308);
  local_res8 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  local_6308._0_8_ = &___7FTableViewStyle__6B_;
  pFVar11 = (FSlateBrush *)
            FSlateNoResource::FSlateNoResource
                      ((FSlateNoResource *)&local_67f8,
                       (FDeprecateVector2DParameter *)&local_res8._s_0);
  FSlateBrush::FSlateBrush((FSlateBrush *)(local_6308 + 0x10),pFVar11);
  local_67f8._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_67f8.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  local_res8 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  pFVar11 = (FSlateBrush *)
            FSlateNoResource::FSlateNoResource
                      ((FSlateNoResource *)&local_6748,
                       (FDeprecateVector2DParameter *)&local_res8._s_0);
  FSlateBrush::operator=((FSlateBrush *)(local_6308 + 0x10),pFVar11);
  pFVar10 = ::FName::FName((FName *)&local_res10._s_0,"SimpleListView");
  FSlateStyleSet::Set<FTableViewStyle>
            ((FSlateStyleSet *)pFVar1,*pFVar10,(FTableViewStyle *)local_6308);
  local_6748._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_6748.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  local_6308._0_8_ = &___7FTableViewStyle__6B_;
  local_6308._16_8_ = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_6258.ReferenceController);
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)local_6308);
  FSlateWidgetStyle::FSlateWidgetStyle((FSlateWidgetStyle *)&local_5ed8);
  local_res8 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  local_5ed8._padding_ = (longlong)&___7FTableViewStyle__6B_;
  pFVar11 = (FSlateBrush *)
            FSlateNoResource::FSlateNoResource
                      ((FSlateNoResource *)&local_67f8,
                       (FDeprecateVector2DParameter *)&local_res8._s_0);
  FSlateBrush::FSlateBrush(&local_5ed8.BackgroundBrush,pFVar11);
  local_67f8._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_67f8.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  pFVar1 = param_1->Object;
  pFVar10 = ::FName::FName((FName *)&local_res8._s_0,"TreeView");
  FSlateStyleSet::Set<FTableViewStyle>((FSlateStyleSet *)pFVar1,*pFVar10,&local_5ed8);
  pFVar12 = FTableRowStyle::FTableRowStyle((FTableRowStyle *)&local_54f8);
  local_res10 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  local_6868 = (void *)0x0;
  uStack_6860._0_4_ = 0.0;
  uStack_6860._4_4_ = 0.0;
  local_res8 = (TVector2<float>_u_0)0x0;
  FSlateBrush::FSlateBrush
            (&local_67f8,Image,(FName)0x0,(FMargin *)&local_6868,NoTile,NoImage,
             (FDeprecateVector2DParameter *)&local_res10._s_0,&FStyleColors::Recessed,(UObject *)0x0
             ,false);
  local_67f8._padding_ = (longlong)&___7FSlateColorBrush__6B_;
  FSlateBrush::operator=(&pFVar12->EvenRowBackgroundBrush,&local_67f8);
  local_res10 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  local_res8 = (TVector2<float>_u_0)0x0;
  local_6868 = (void *)0x0;
  uStack_6860._0_4_ = 0.0;
  uStack_6860._4_4_ = 0.0;
  FSlateBrush::FSlateBrush
            (&local_6748,Image,(FName)0x0,(FMargin *)&local_6868,NoTile,NoImage,
             (FDeprecateVector2DParameter *)&local_res10._s_0,&FStyleColors::SelectHover,
             (UObject *)0x0,false);
  local_6748._padding_ = (longlong)&___7FSlateColorBrush__6B_;
  FSlateBrush::operator=(&pFVar12->EvenRowBackgroundHoveredBrush,&local_6748);
  local_res10 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  local_res8 = (TVector2<float>_u_0)0x0;
  local_6868 = (void *)0x0;
  uStack_6860._0_4_ = 0.0;
  uStack_6860._4_4_ = 0.0;
  FSlateBrush::FSlateBrush
            (&local_63b8,Image,(FName)0x0,(FMargin *)&local_6868,NoTile,NoImage,
             (FDeprecateVector2DParameter *)&local_res10._s_0,&FStyleColors::Recessed,(UObject *)0x0
             ,false);
  local_63b8._padding_ = (longlong)&___7FSlateColorBrush__6B_;
  FSlateBrush::operator=(&pFVar12->OddRowBackgroundBrush,&local_63b8);
  local_res10 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  local_res8 = (TVector2<float>_u_0)0x0;
  local_6868 = (void *)0x0;
  uStack_6860._0_4_ = 0.0;
  uStack_6860._4_4_ = 0.0;
  FSlateBrush::FSlateBrush
            (&local_6468,Image,(FName)0x0,(FMargin *)&local_6868,NoTile,NoImage,
             (FDeprecateVector2DParameter *)&local_res10._s_0,&FStyleColors::SelectHover,
             (UObject *)0x0,false);
  local_6468._padding_ = (longlong)&___7FSlateColorBrush__6B_;
  FSlateBrush::operator=(&pFVar12->OddRowBackgroundHoveredBrush,&local_6468);
  local_6868 = ___xmm_3e8000003e8000003e8000003e800000;
  uStack_6860._0_4_ = _UNK_15076b0c8;
  uStack_6860._4_4_ = _UNK_15076b0cc;
  pFVar13 = (FString *)
            (**(code **)(param_1->Object->_padding_ + 0xf0))
                      (param_1->Object,&local_6878,"Common/Selector",L".png");
  pFVar11 = (FSlateBrush *)
            FSlateBorderBrush::FSlateBorderBrush
                      ((FSlateBorderBrush *)local_6308,pFVar13,(FMargin *)&local_6868,&local_6698,
                       FullColor);
  FSlateBrush::operator=(&pFVar12->SelectorFocusedBrush,pFVar11);
  local_res10 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  local_res8 = (TVector2<float>_u_0)0x0;
  local_6868 = (void *)0x0;
  uStack_6860._0_4_ = 0.0;
  uStack_6860._4_4_ = 0.0;
  FSlateBrush::FSlateBrush
            (&local_6518,Image,(FName)0x0,(FMargin *)&local_6868,NoTile,NoImage,
             (FDeprecateVector2DParameter *)&local_res10._s_0,&FStyleColors::Select,(UObject *)0x0,
             false);
  local_6518._padding_ = (longlong)&___7FSlateColorBrush__6B_;
  FSlateBrush::operator=(&pFVar12->ActiveBrush,&local_6518);
  local_res10 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  local_res8 = (TVector2<float>_u_0)0x0;
  local_6868 = (void *)0x0;
  uStack_6860._0_4_ = 0.0;
  uStack_6860._4_4_ = 0.0;
  FSlateBrush::FSlateBrush
            (&local_65c8,Image,(FName)0x0,(FMargin *)&local_6868,NoTile,NoImage,
             (FDeprecateVector2DParameter *)&local_res10._s_0,&FStyleColors::Select,(UObject *)0x0,
             false);
  local_65c8._padding_ = (longlong)&___7FSlateColorBrush__6B_;
  FSlateBrush::operator=(&pFVar12->ActiveHoveredBrush,&local_65c8);
  local_res10 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  local_res8 = (TVector2<float>_u_0)0x0;
  local_6868 = (void *)0x0;
  uStack_6860._0_4_ = 0.0;
  uStack_6860._4_4_ = 0.0;
  FSlateBrush::FSlateBrush
            (&local_6678,Image,(FName)0x0,(FMargin *)&local_6868,NoTile,NoImage,
             (FDeprecateVector2DParameter *)&local_res10._s_0,&FStyleColors::SelectInactive,
             (UObject *)0x0,false);
  local_6678._padding_ = (longlong)&___7FSlateColorBrush__6B_;
  FSlateBrush::operator=(&pFVar12->InactiveBrush,&local_6678);
  local_res10 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  local_res8 = (TVector2<float>_u_0)0x0;
  local_6868 = (void *)0x0;
  uStack_6860._0_4_ = 0.0;
  uStack_6860._4_4_ = 0.0;
  FSlateBrush::FSlateBrush
            (&local_60e8,Image,(FName)0x0,(FMargin *)&local_6868,NoTile,NoImage,
             (FDeprecateVector2DParameter *)&local_res10._s_0,&FStyleColors::SelectInactive,
             (UObject *)0x0,false);
  local_60e8._padding_ = (longlong)&___7FSlateColorBrush__6B_;
  FSlateBrush::operator=(&pFVar12->InactiveHoveredBrush,&local_60e8);
  local_res10 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  local_6868 = (void *)0x0;
  uStack_6860._0_4_ = 0.0;
  uStack_6860._4_4_ = 0.0;
  local_res8 = (TVector2<float>_u_0)0x0;
  FSlateBrush::FSlateBrush
            (&local_5f88,Image,(FName)0x0,(FMargin *)&local_6868,NoTile,NoImage,
             (FDeprecateVector2DParameter *)&local_res10._s_0,&FStyleColors::SelectParent,
             (UObject *)0x0,false);
  local_5f88._padding_ = (longlong)&___7FSlateColorBrush__6B_;
  FSlateBrush::operator=(&pFVar12->ActiveHighlightedBrush,&local_5f88);
  local_res10 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  local_res8 = (TVector2<float>_u_0)0x0;
  local_6868 = (void *)0x0;
  uStack_6860._0_4_ = 0.0;
  uStack_6860._4_4_ = 0.0;
  FSlateBrush::FSlateBrush
            (&local_6038,Image,(FName)0x0,(FMargin *)&local_6868,NoTile,NoImage,
             (FDeprecateVector2DParameter *)&local_res10._s_0,&FStyleColors::SelectParent,
             (UObject *)0x0,false);
  local_6038._padding_ = (longlong)&___7FSlateColorBrush__6B_;
  FSlateBrush::operator=(&pFVar12->InactiveHighlightedBrush,&local_6038);
  (pFVar12->TextColor).SpecifiedColor.field0_0x0._s_0 =
       (FLinearColor_u_0_s_0)FStyleColors::Foreground.SpecifiedColor.field0_0x0;
  EVar8 = FStyleColors::Foreground.ColorTableId;
  uVar9 = FStyleColors::Foreground._18_2_;
  (pFVar12->TextColor).ColorUseRule = FStyleColors::Foreground.ColorUseRule;
  (pFVar12->TextColor).ColorTableId = EVar8;
  *(undefined2 *)&(pFVar12->TextColor).field_0x12 = uVar9;
  (pFVar12->SelectedTextColor).SpecifiedColor.field0_0x0._s_0 =
       (FLinearColor_u_0_s_0)FStyleColors::ForegroundHover.SpecifiedColor.field0_0x0;
  uVar6 = _UNK_150924ff8;
  local_6868 = ___xmm_00000000000000003f2000003f200000;
  EVar8 = FStyleColors::ForegroundHover.ColorTableId;
  uVar9 = FStyleColors::ForegroundHover._18_2_;
  (pFVar12->SelectedTextColor).ColorUseRule = FStyleColors::ForegroundHover.ColorUseRule;
  uVar7 = _UNK_150924ff8;
  (pFVar12->SelectedTextColor).ColorTableId = EVar8;
  *(undefined2 *)&(pFVar12->SelectedTextColor).field_0x12 = uVar9;
  _UNK_150924ff8 = (float)uVar6;
  _UNK_150924ffc = SUB84(uVar6,4);
  uStack_6860._0_4_ = _UNK_150924ff8;
  uStack_6860._4_4_ = _UNK_150924ffc;
  _UNK_150924ff8 = uVar7;
  pFVar13 = (FString *)
            (**(code **)(param_1->Object->_padding_ + 0xf0))
                      (param_1->Object,local_6838,"Common/DropZoneIndicator_Above",L".png");
  pFVar11 = (FSlateBrush *)
            FSlateBoxBrush::FSlateBoxBrush
                      ((FSlateBoxBrush *)local_6198,pFVar13,(FMargin *)&local_6868,&local_6818,
                       FullColor);
  FSlateBrush::operator=(&pFVar12->DropIndicator_Above,pFVar11);
  local_6868 = ___xmm_3e8000003e8000003e8000003e800000;
  uStack_6860._0_4_ = _UNK_15076b0c8;
  uStack_6860._4_4_ = _UNK_15076b0cc;
  pFVar13 = (FString *)
            (**(code **)(param_1->Object->_padding_ + 0xf0))
                      (param_1->Object,local_6848,"Common/DropZoneIndicator_Onto",L".png");
  pFVar11 = (FSlateBrush *)
            FSlateBoxBrush::FSlateBoxBrush
                      ((FSlateBoxBrush *)local_5ca8,pFVar13,(FMargin *)&local_6868,&local_6818,
                       FullColor);
  FSlateBrush::operator=(&pFVar12->DropIndicator_Onto,pFVar11);
  local_6868 = ___xmm_3f20000000000000000000003f200000;
  uStack_6860._0_4_ = _UNK_150925248;
  uStack_6860._4_4_ = _UNK_15092524c;
  pFVar13 = (FString *)
            (**(code **)(param_1->Object->_padding_ + 0xf0))
                      (param_1->Object,local_6828,"Common/DropZoneIndicator_Below",L".png");
  pFVar11 = (FSlateBrush *)
            FSlateBoxBrush::FSlateBoxBrush
                      ((FSlateBoxBrush *)local_5d58,pFVar13,(FMargin *)&local_6868,&local_6818,
                       FullColor);
  FSlateBrush::operator=(&pFVar12->DropIndicator_Below,pFVar11);
  FTableRowStyle::FTableRowStyle(&local_3f18,pFVar12);
  local_5d58[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_5cb8);
  if (local_6828[0] != (void *)0x0) {
    FMemory::Free(local_6828[0]);
  }
  local_5ca8._0_8_ = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_5ca8._160_8_);
  if (local_6848[0] != (void *)0x0) {
    FMemory::Free(local_6848[0]);
  }
  local_6198[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_60f8);
  if (local_6838[0] != (void *)0x0) {
    FMemory::Free(local_6838[0]);
  }
  local_6038._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_6038.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  local_5f88._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_5f88.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  local_60e8._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_60e8.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  local_6678._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_6678.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  local_65c8._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_65c8.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  local_6518._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_6518.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  local_6308._0_8_ = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_6308._160_8_);
  if ((void *)local_6878._0_8_ != (void *)0x0) {
    FMemory::Free((void *)local_6878._0_8_);
  }
  local_6468._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_6468.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  local_63b8._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_63b8.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  local_6748._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_6748.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  local_67f8._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_67f8.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  FTableRowStyle::~FTableRowStyle((FTableRowStyle *)&local_54f8);
  pFVar1 = param_1->Object;
  pFVar10 = ::FName::FName((FName *)&local_res8._s_0,"TableView.Row");
  FSlateStyleSet::Set<FTableRowStyle>((FSlateStyleSet *)pFVar1,*pFVar10,&local_3f18);
  pFVar12 = FTableRowStyle::FTableRowStyle((FTableRowStyle *)&local_54f8);
  local_res8 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  pFVar11 = (FSlateBrush *)
            FSlateNoResource::FSlateNoResource
                      ((FSlateNoResource *)&local_6038,
                       (FDeprecateVector2DParameter *)&local_res8._s_0);
  FSlateBrush::operator=(&pFVar12->EvenRowBackgroundBrush,pFVar11);
  local_res10 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  local_6878._0_8_ = 0;
  local_6878._8_8_ = 0;
  local_res8 = (TVector2<float>_u_0)0x0;
  FSlateBrush::FSlateBrush
            (&local_60e8,Image,(FName)0x0,(FMargin *)&local_6878._s_0,NoTile,NoImage,
             (FDeprecateVector2DParameter *)&local_res10._s_0,&FStyleColors::SelectHover,
             (UObject *)0x0,false);
  local_60e8._padding_ = (longlong)&___7FSlateColorBrush__6B_;
  FSlateBrush::operator=(&pFVar12->EvenRowBackgroundHoveredBrush,&local_60e8);
  local_res8 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  pFVar11 = (FSlateBrush *)
            FSlateNoResource::FSlateNoResource
                      ((FSlateNoResource *)&local_5f88,
                       (FDeprecateVector2DParameter *)&local_res8._s_0);
  FSlateBrush::operator=(&pFVar12->OddRowBackgroundBrush,pFVar11);
  local_res10 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  local_res8 = (TVector2<float>_u_0)0x0;
  local_6878._0_8_ = 0;
  local_6878._8_8_ = 0;
  FSlateBrush::FSlateBrush
            (&local_6678,Image,(FName)0x0,(FMargin *)&local_6878._s_0,NoTile,NoImage,
             (FDeprecateVector2DParameter *)&local_res10._s_0,&FStyleColors::SelectHover,
             (UObject *)0x0,false);
  local_6678._padding_ = (longlong)&___7FSlateColorBrush__6B_;
  FSlateBrush::operator=(&pFVar12->OddRowBackgroundHoveredBrush,&local_6678);
  local_6878._0_8_ = ___xmm_3e8000003e8000003e8000003e800000;
  local_6878._s_0.B = _UNK_15076b0c8;
  local_6878._s_0.A = _UNK_15076b0cc;
  pFVar13 = (FString *)
            (**(code **)(param_1->Object->_padding_ + 0xf0))
                      (param_1->Object,&local_6868,"Common/Selector",L".png");
  pFVar11 = (FSlateBrush *)
            FSlateBorderBrush::FSlateBorderBrush
                      ((FSlateBorderBrush *)local_5d58,pFVar13,(FMargin *)&local_6878._s_0,
                       &local_6698,FullColor);
  FSlateBrush::operator=(&pFVar12->SelectorFocusedBrush,pFVar11);
  local_res10 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  local_res8 = (TVector2<float>_u_0)0x0;
  local_6878._0_8_ = 0;
  local_6878._8_8_ = 0;
  FSlateBrush::FSlateBrush
            (&local_65c8,Image,(FName)0x0,(FMargin *)&local_6878._s_0,NoTile,NoImage,
             (FDeprecateVector2DParameter *)&local_res10._s_0,&FStyleColors::Select,(UObject *)0x0,
             false);
  local_65c8._padding_ = (longlong)&___7FSlateColorBrush__6B_;
  FSlateBrush::operator=(&pFVar12->ActiveBrush,&local_65c8);
  local_res10 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  local_res8 = (TVector2<float>_u_0)0x0;
  local_6878._0_8_ = 0;
  local_6878._8_8_ = 0;
  FSlateBrush::FSlateBrush
            (&local_6518,Image,(FName)0x0,(FMargin *)&local_6878._s_0,NoTile,NoImage,
             (FDeprecateVector2DParameter *)&local_res10._s_0,&FStyleColors::Select,(UObject *)0x0,
             false);
  local_6518._padding_ = (longlong)&___7FSlateColorBrush__6B_;
  FSlateBrush::operator=(&pFVar12->ActiveHoveredBrush,&local_6518);
  local_res10 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  local_res8 = (TVector2<float>_u_0)0x0;
  local_6878._0_8_ = 0;
  local_6878._8_8_ = 0;
  FSlateBrush::FSlateBrush
            (&local_6468,Image,(FName)0x0,(FMargin *)&local_6878._s_0,NoTile,NoImage,
             (FDeprecateVector2DParameter *)&local_res10._s_0,&FStyleColors::SelectInactive,
             (UObject *)0x0,false);
  local_6468._padding_ = (longlong)&___7FSlateColorBrush__6B_;
  FSlateBrush::operator=(&pFVar12->InactiveBrush,&local_6468);
  local_res10 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  local_res8 = (TVector2<float>_u_0)0x0;
  local_6878._0_8_ = 0;
  local_6878._8_8_ = 0;
  FSlateBrush::FSlateBrush
            (&local_63b8,Image,(FName)0x0,(FMargin *)&local_6878._s_0,NoTile,NoImage,
             (FDeprecateVector2DParameter *)&local_res10._s_0,&FStyleColors::SelectInactive,
             (UObject *)0x0,false);
  local_63b8._padding_ = (longlong)&___7FSlateColorBrush__6B_;
  FSlateBrush::operator=(&pFVar12->InactiveHoveredBrush,&local_63b8);
  local_res10 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  local_res8 = (TVector2<float>_u_0)0x0;
  local_6878._0_8_ = 0;
  local_6878._8_8_ = 0;
  FSlateBrush::FSlateBrush
            (&local_6748,Image,(FName)0x0,(FMargin *)&local_6878._s_0,NoTile,NoImage,
             (FDeprecateVector2DParameter *)&local_res10._s_0,&FStyleColors::SelectParent,
             (UObject *)0x0,false);
  local_6748._padding_ = (longlong)&___7FSlateColorBrush__6B_;
  FSlateBrush::operator=(&pFVar12->ActiveHighlightedBrush,&local_6748);
  local_res10 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  local_res8 = (TVector2<float>_u_0)0x0;
  local_6878._0_8_ = 0;
  local_6878._8_8_ = 0;
  FSlateBrush::FSlateBrush
            (&local_67f8,Image,(FName)0x0,(FMargin *)&local_6878._s_0,NoTile,NoImage,
             (FDeprecateVector2DParameter *)&local_res10._s_0,&FStyleColors::SelectParent,
             (UObject *)0x0,false);
  local_67f8._padding_ = (longlong)&___7FSlateColorBrush__6B_;
  FSlateBrush::operator=(&pFVar12->InactiveHighlightedBrush,&local_67f8);
  (pFVar12->TextColor).SpecifiedColor.field0_0x0._s_0 =
       (FLinearColor_u_0_s_0)FStyleColors::Foreground.SpecifiedColor.field0_0x0;
  EVar8 = FStyleColors::Foreground.ColorTableId;
  uVar9 = FStyleColors::Foreground._18_2_;
  (pFVar12->TextColor).ColorUseRule = FStyleColors::Foreground.ColorUseRule;
  (pFVar12->TextColor).ColorTableId = EVar8;
  *(undefined2 *)&(pFVar12->TextColor).field_0x12 = uVar9;
  (pFVar12->SelectedTextColor).SpecifiedColor.field0_0x0._s_0 =
       (FLinearColor_u_0_s_0)FStyleColors::ForegroundInverted.SpecifiedColor.field0_0x0;
  uVar6 = _UNK_150924ff8;
  local_6878._0_8_ = ___xmm_00000000000000003f2000003f200000;
  EVar8 = FStyleColors::ForegroundInverted.ColorTableId;
  uVar9 = FStyleColors::ForegroundInverted._18_2_;
  (pFVar12->SelectedTextColor).ColorUseRule = FStyleColors::ForegroundInverted.ColorUseRule;
  uVar7 = _UNK_150924ff8;
  (pFVar12->SelectedTextColor).ColorTableId = EVar8;
  *(undefined2 *)&(pFVar12->SelectedTextColor).field_0x12 = uVar9;
  _UNK_150924ff8 = (float)uVar6;
  _UNK_150924ffc = SUB84(uVar6,4);
  local_6878._s_0.B = _UNK_150924ff8;
  local_6878._s_0.A = _UNK_150924ffc;
  _UNK_150924ff8 = uVar7;
  pFVar13 = (FString *)
            (**(code **)(param_1->Object->_padding_ + 0xf0))
                      (param_1->Object,local_6828,"Common/DropZoneIndicator_Above",L".png");
  pFVar11 = (FSlateBrush *)
            FSlateBoxBrush::FSlateBoxBrush
                      ((FSlateBoxBrush *)local_5ca8,pFVar13,(FMargin *)&local_6878._s_0,&local_6818,
                       FullColor);
  FSlateBrush::operator=(&pFVar12->DropIndicator_Above,pFVar11);
  local_6878._0_8_ = ___xmm_3e8000003e8000003e8000003e800000;
  local_6878._s_0.B = _UNK_15076b0c8;
  local_6878._s_0.A = _UNK_15076b0cc;
  pFVar13 = (FString *)
            (**(code **)(param_1->Object->_padding_ + 0xf0))
                      (param_1->Object,local_6848,"Common/DropZoneIndicator_Onto",L".png");
  pFVar11 = (FSlateBrush *)
            FSlateBoxBrush::FSlateBoxBrush
                      ((FSlateBoxBrush *)local_6198,pFVar13,(FMargin *)&local_6878._s_0,&local_6818,
                       FullColor);
  FSlateBrush::operator=(&pFVar12->DropIndicator_Onto,pFVar11);
  local_6878._0_8_ = ___xmm_3f20000000000000000000003f200000;
  local_6878._s_0.B = _UNK_150925248;
  local_6878._s_0.A = _UNK_15092524c;
  pFVar13 = (FString *)
            (**(code **)(param_1->Object->_padding_ + 0xf0))
                      (param_1->Object,local_6838,"Common/DropZoneIndicator_Below",L".png");
  pFVar11 = (FSlateBrush *)
            FSlateBoxBrush::FSlateBoxBrush
                      ((FSlateBoxBrush *)local_6308,pFVar13,(FMargin *)&local_6878._s_0,&local_6818,
                       FullColor);
  FSlateBrush::operator=(&pFVar12->DropIndicator_Below,pFVar11);
  FTableRowStyle::FTableRowStyle(&local_b98,pFVar12);
  local_6308._0_8_ = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_6308._160_8_);
  if (local_6838[0] != (void *)0x0) {
    FMemory::Free(local_6838[0]);
  }
  local_6198[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_60f8);
  if (local_6848[0] != (void *)0x0) {
    FMemory::Free(local_6848[0]);
  }
  local_5ca8._0_8_ = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_5ca8._160_8_);
  if (local_6828[0] != (void *)0x0) {
    FMemory::Free(local_6828[0]);
  }
  local_67f8._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_67f8.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  local_6748._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_6748.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  local_63b8._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_63b8.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  local_6468._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_6468.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  local_6518._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_6518.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  local_65c8._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_65c8.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  local_5d58[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_5cb8);
  if (local_6868 != (void *)0x0) {
    FMemory::Free(local_6868);
  }
  local_6678._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_6678.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  local_5f88._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_5f88.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  local_60e8._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_60e8.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  local_6038._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_6038.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  FTableRowStyle::~FTableRowStyle((FTableRowStyle *)&local_54f8);
  pFVar1 = param_1->Object;
  pFVar10 = ::FName::FName((FName *)&local_res8._s_0,"SimpleTableView.Row");
  FSlateStyleSet::Set<FTableRowStyle>((FSlateStyleSet *)pFVar1,*pFVar10,&local_b98);
  pFVar12 = FTableRowStyle::FTableRowStyle((FTableRowStyle *)&local_54f8,&local_3f18);
  fVar4 = __real_40000000;
  fVar3 = __real_3f800000;
  pFVar12->bUseParentRowBrush = true;
  local_res8 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  pFVar11 = (FSlateBrush *)
            FSlateRoundedBoxBrush::FSlateRoundedBoxBrush<FSlateColor,FSlateColor,float>
                      ((FSlateRoundedBoxBrush *)local_6198,&FStyleColors::Header,fVar4,
                       &FStyleColors::Transparent,fVar3,
                       (FDeprecateVector2DParameter *)&local_res8._s_0);
  FSlateBrush::operator=(&pFVar12->ParentRowBackgroundBrush,pFVar11);
  local_res8 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  pFVar11 = (FSlateBrush *)
            FSlateRoundedBoxBrush::FSlateRoundedBoxBrush<FSlateColor,float>
                      ((FSlateRoundedBoxBrush *)local_6308,&FStyleColors::SelectHover,fVar4,
                       (FDeprecateVector2DParameter *)&local_res8._s_0);
  FSlateBrush::operator=(&pFVar12->ParentRowBackgroundHoveredBrush,pFVar11);
  FTableRowStyle::FTableRowStyle(&local_16e8,pFVar12);
  local_6308._0_8_ = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_6308._160_8_);
  local_6198[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_60f8);
  FTableRowStyle::~FTableRowStyle((FTableRowStyle *)&local_54f8);
  pFVar1 = param_1->Object;
  pFVar10 = ::FName::FName((FName *)&local_res8._s_0,"ShowParentsTableView.Row");
  FSlateStyleSet::Set<FTableRowStyle>((FSlateStyleSet *)pFVar1,*pFVar10,&local_16e8);
  pFVar12 = FTableRowStyle::FTableRowStyle((FTableRowStyle *)&local_54f8,&local_3f18);
  local_res8._s_0 = (TVector2<float>_u_0_s_0)CoreStyleConstants::Icon8x8;
  local_6878._0_8_ = ___xmm_3dcccccd000000000000000000000000;
  local_6878._8_8_ = _UNK_1509250e8;
  pFVar13 = (FString *)
            (**(code **)(param_1->Object->_padding_ + 0xf0))
                      (param_1->Object,local_6848,"Common/Selection",L".png");
  pFVar11 = (FSlateBrush *)
            FSlateImageBrush::FSlateImageBrush
                      ((FSlateImageBrush *)local_6198,pFVar13,
                       (FDeprecateVector2DParameter *)&local_res8._s_0,
                       (FLinearColor *)&local_6878._s_0,NoTile,FullColor);
  FSlateBrush::operator=(&pFVar12->EvenRowBackgroundBrush,pFVar11);
  local_res8._s_0 = (TVector2<float>_u_0_s_0)CoreStyleConstants::Icon8x8;
  local_6878._0_8_ = ___xmm_3dcccccd000000000000000000000000;
  local_6878._8_8_ = _UNK_1509250e8;
  pFVar13 = (FString *)
            (**(code **)(param_1->Object->_padding_ + 0xf0))
                      (param_1->Object,local_6838,"Common/Selection",L".png");
  pFVar11 = (FSlateBrush *)
            FSlateImageBrush::FSlateImageBrush
                      ((FSlateImageBrush *)local_6308,pFVar13,
                       (FDeprecateVector2DParameter *)&local_res8._s_0,
                       (FLinearColor *)&local_6878._s_0,NoTile,FullColor);
  FSlateBrush::operator=(&pFVar12->OddRowBackgroundBrush,pFVar11);
  FTableRowStyle::FTableRowStyle(&local_2238,pFVar12);
  local_6308._0_8_ = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_6308._160_8_);
  if (local_6838[0] != (void *)0x0) {
    FMemory::Free(local_6838[0]);
  }
  local_6198[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_60f8);
  if (local_6848[0] != (void *)0x0) {
    FMemory::Free(local_6848[0]);
  }
  FTableRowStyle::~FTableRowStyle((FTableRowStyle *)&local_54f8);
  pFVar1 = param_1->Object;
  pFVar10 = ::FName::FName((FName *)&local_res8._s_0,"TableView.DarkRow");
  FSlateStyleSet::Set<FTableRowStyle>((FSlateStyleSet *)pFVar1,*pFVar10,&local_2238);
  pFVar12 = FTableRowStyle::FTableRowStyle((FTableRowStyle *)&local_54f8,&local_3f18);
  local_res10 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  local_6878._0_8_ = 0;
  local_6878._8_8_ = 0;
  local_res8 = (TVector2<float>_u_0)0x0;
  FSlateBrush::FSlateBrush
            (&local_6748,Image,(FName)0x0,(FMargin *)&local_6878._s_0,NoTile,NoImage,
             (FDeprecateVector2DParameter *)&local_res10._s_0,&FStyleColors::Recessed,(UObject *)0x0
             ,false);
  local_6748._padding_ = (longlong)&___7FSlateColorBrush__6B_;
  FSlateBrush::operator=(&pFVar12->EvenRowBackgroundBrush,&local_6748);
  local_res10 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  local_res8 = (TVector2<float>_u_0)0x0;
  local_6878._0_8_ = (void *)0x0;
  local_6878._8_8_ = 0;
  FSlateBrush::FSlateBrush
            (&local_67f8,Image,(FName)0x0,(FMargin *)&local_6878._s_0,NoTile,NoImage,
             (FDeprecateVector2DParameter *)&local_res10._s_0,&FStyleColors::Background,
             (UObject *)0x0,false);
  local_67f8._padding_ = (longlong)&___7FSlateColorBrush__6B_;
  FSlateBrush::operator=(&pFVar12->OddRowBackgroundBrush,&local_67f8);
  FTableRowStyle::FTableRowStyle(&local_2d88,pFVar12);
  local_67f8._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_67f8.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  local_6748._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_6748.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  FTableRowStyle::~FTableRowStyle((FTableRowStyle *)&local_54f8);
  pFVar1 = param_1->Object;
  pFVar10 = ::FName::FName((FName *)&local_res8._s_0,"TableView.AlternatingRow");
  FSlateStyleSet::Set<FTableRowStyle>((FSlateStyleSet *)pFVar1,*pFVar10,&local_2d88);
  pFVar1 = param_1->Object;
  pFVar14 = ::operator_new(0xb0);
  pFVar15 = pFVar17;
  if (pFVar14 != (FSlateImageBrush *)0x0) {
    local_res8._s_0 = (TVector2<float>_u_0_s_0)CoreStyleConstants::Icon16x16;
    pFVar13 = (FString *)
              (**(code **)(param_1->Object->_padding_ + 0xf0))
                        (param_1->Object,&local_6878,"Starship/Common/caret-right",L".svg");
    FSlateImageBrush::FSlateImageBrush
              (pFVar14,pFVar13,(FDeprecateVector2DParameter *)&local_res8._s_0,
               &FStyleColors::Foreground,NoTile,Vector);
    *(undefined ***)pFVar14 = &___7FSlateVectorImageBrush__6B_;
    pFVar15 = pFVar14;
  }
  pFVar10 = ::FName::FName((FName *)&local_res10._s_0,"TreeArrow_Collapsed");
  FSlateStyleSet::Set<FSlateVectorImageBrush>
            ((FSlateStyleSet *)pFVar1,*pFVar10,(FSlateVectorImageBrush *)pFVar15);
  if ((pFVar14 != (FSlateImageBrush *)0x0) && ((void *)local_6878._0_8_ != (void *)0x0)) {
    FMemory::Free((void *)local_6878._0_8_);
  }
  pFVar1 = param_1->Object;
  pFVar14 = ::operator_new(0xb0);
  pFVar15 = pFVar17;
  if (pFVar14 != (FSlateImageBrush *)0x0) {
    local_res8._s_0 = (TVector2<float>_u_0_s_0)CoreStyleConstants::Icon16x16;
    pFVar13 = (FString *)
              (**(code **)(param_1->Object->_padding_ + 0xf0))
                        (param_1->Object,&local_6878,"Starship/Common/caret-right",L".svg");
    FSlateImageBrush::FSlateImageBrush
              (pFVar14,pFVar13,(FDeprecateVector2DParameter *)&local_res8._s_0,
               &FStyleColors::ForegroundHover,NoTile,Vector);
    *(undefined ***)pFVar14 = &___7FSlateVectorImageBrush__6B_;
    pFVar15 = pFVar14;
  }
  pFVar10 = ::FName::FName((FName *)&local_res10._s_0,"TreeArrow_Collapsed_Hovered");
  FSlateStyleSet::Set<FSlateVectorImageBrush>
            ((FSlateStyleSet *)pFVar1,*pFVar10,(FSlateVectorImageBrush *)pFVar15);
  if ((pFVar14 != (FSlateImageBrush *)0x0) && ((void *)local_6878._0_8_ != (void *)0x0)) {
    FMemory::Free((void *)local_6878._0_8_);
  }
  pFVar1 = param_1->Object;
  pFVar14 = ::operator_new(0xb0);
  pFVar15 = pFVar17;
  if (pFVar14 != (FSlateImageBrush *)0x0) {
    local_res8._s_0 = (TVector2<float>_u_0_s_0)CoreStyleConstants::Icon16x16;
    pFVar13 = (FString *)
              (**(code **)(param_1->Object->_padding_ + 0xf0))
                        (param_1->Object,&local_6878,"Starship/Common/caret-down",L".svg");
    FSlateImageBrush::FSlateImageBrush
              (pFVar14,pFVar13,(FDeprecateVector2DParameter *)&local_res8._s_0,
               &FStyleColors::Foreground,NoTile,Vector);
    *(undefined ***)pFVar14 = &___7FSlateVectorImageBrush__6B_;
    pFVar15 = pFVar14;
  }
  pFVar10 = ::FName::FName((FName *)&local_res10._s_0,"TreeArrow_Expanded");
  FSlateStyleSet::Set<FSlateVectorImageBrush>
            ((FSlateStyleSet *)pFVar1,*pFVar10,(FSlateVectorImageBrush *)pFVar15);
  if ((pFVar14 != (FSlateImageBrush *)0x0) && ((void *)local_6878._0_8_ != (void *)0x0)) {
    FMemory::Free((void *)local_6878._0_8_);
  }
  pFVar1 = param_1->Object;
  pFVar15 = ::operator_new(0xb0);
  if (pFVar15 != (FSlateImageBrush *)0x0) {
    local_res8._s_0 = (TVector2<float>_u_0_s_0)CoreStyleConstants::Icon16x16;
    pFVar13 = (FString *)
              (**(code **)(param_1->Object->_padding_ + 0xf0))
                        (param_1->Object,&local_6878,"Starship/Common/caret-down",L".svg");
    FSlateImageBrush::FSlateImageBrush
              (pFVar15,pFVar13,(FDeprecateVector2DParameter *)&local_res8._s_0,
               &FStyleColors::ForegroundHover,NoTile,Vector);
    *(undefined ***)pFVar15 = &___7FSlateVectorImageBrush__6B_;
    pFVar17 = pFVar15;
  }
  pFVar10 = ::FName::FName((FName *)&local_res10._s_0,"TreeArrow_Expanded_Hovered");
  FSlateStyleSet::Set<FSlateVectorImageBrush>
            ((FSlateStyleSet *)pFVar1,*pFVar10,(FSlateVectorImageBrush *)pFVar17);
  if ((pFVar15 != (FSlateImageBrush *)0x0) && ((void *)local_6878._0_8_ != (void *)0x0)) {
    FMemory::Free((void *)local_6878._0_8_);
  }
  FSlateWidgetStyle::FSlateWidgetStyle((FSlateWidgetStyle *)local_5ca8);
  local_5ca8._0_8_ = &___7FTableColumnHeaderStyle__6B_;
  FSlateBrush::FSlateBrush((FSlateBrush *)(local_5ca8 + 0x10));
  FSlateBrush::FSlateBrush(&local_5be8);
  FSlateBrush::FSlateBrush(&local_5b38);
  FSlateBrush::FSlateBrush(&local_5a88);
  FSlateBrush::FSlateBrush(&local_59d8);
  FSlateBrush::FSlateBrush(&local_5928);
  FSlateBrush::FSlateBrush(&local_5878);
  FSlateBrush::FSlateBrush(&local_57c8);
  FSlateBrush::FSlateBrush(&local_5718);
  uVar6 = _UNK_15076b1f8;
  pvVar5 = ___xmm_3f8000003f8000003f8000003f800000;
  local_res8._s_0 = (TVector2<float>_u_0_s_0)CoreStyleConstants::Icon12x12;
  local_6878._0_8_ = ___xmm_3f8000003f8000003f8000003f800000;
  local_6878._8_8_ = _UNK_15076b1f8;
  pFVar13 = (FString *)
            (**(code **)(param_1->Object->_padding_ + 0xf0))
                      (param_1->Object,&local_6858,"Starship/CoreWidgets/TableView/sort-up-arrow",
                       L".svg");
  FSlateImageBrush::FSlateImageBrush
            ((FSlateImageBrush *)&local_6678,pFVar13,(FDeprecateVector2DParameter *)&local_res8._s_0
             ,(FLinearColor *)&local_6878._s_0,NoTile,Vector);
  local_6678._padding_ = (longlong)&___7FSlateVectorImageBrush__6B_;
  FSlateBrush::operator=((FSlateBrush *)(local_5ca8 + 0x10),&local_6678);
  local_res8._s_0 = (TVector2<float>_u_0_s_0)CoreStyleConstants::Icon12x12;
  local_6878._0_8_ = pvVar5;
  local_6878._8_8_ = uVar6;
  pFVar13 = (FString *)
            (**(code **)(param_1->Object->_padding_ + 0xf0))
                      (param_1->Object,&local_6868,"Starship/CoreWidgets/TableView/sort-down-arrow",
                       L".svg");
  FSlateImageBrush::FSlateImageBrush
            ((FSlateImageBrush *)&local_65c8,pFVar13,(FDeprecateVector2DParameter *)&local_res8._s_0
             ,(FLinearColor *)&local_6878._s_0,NoTile,Vector);
  local_65c8._padding_ = (longlong)&___7FSlateVectorImageBrush__6B_;
  FSlateBrush::operator=(&local_5be8,&local_65c8);
  local_res8._s_0 = (TVector2<float>_u_0_s_0)CoreStyleConstants::Icon12x12;
  local_6878._0_8_ = pvVar5;
  local_6878._8_8_ = uVar6;
  pFVar13 = (FString *)
            (**(code **)(param_1->Object->_padding_ + 0xf0))
                      (param_1->Object,local_6828,"Starship/CoreWidgets/TableView/sort-up-arrows",
                       L".svg");
  FSlateImageBrush::FSlateImageBrush
            ((FSlateImageBrush *)&local_6518,pFVar13,(FDeprecateVector2DParameter *)&local_res8._s_0
             ,(FLinearColor *)&local_6878._s_0,NoTile,Vector);
  local_6518._padding_ = (longlong)&___7FSlateVectorImageBrush__6B_;
  FSlateBrush::operator=(&local_5b38,&local_6518);
  local_res8._s_0 = (TVector2<float>_u_0_s_0)CoreStyleConstants::Icon12x12;
  local_6878._0_8_ = pvVar5;
  local_6878._8_8_ = uVar6;
  pFVar13 = (FString *)
            (**(code **)(param_1->Object->_padding_ + 0xf0))
                      (param_1->Object,local_6848,"Starship/CoreWidgets/TableView/sort-down-arrows",
                       L".svg");
  FSlateImageBrush::FSlateImageBrush
            ((FSlateImageBrush *)&local_6468,pFVar13,(FDeprecateVector2DParameter *)&local_res8._s_0
             ,(FLinearColor *)&local_6878._s_0,NoTile,Vector);
  local_6468._padding_ = (longlong)&___7FSlateVectorImageBrush__6B_;
  FSlateBrush::operator=(&local_5a88,&local_6468);
  local_res10 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  local_res8 = (TVector2<float>_u_0)0x0;
  local_6878._0_8_ = 0;
  local_6878._8_8_ = 0;
  FSlateBrush::FSlateBrush
            (&local_63b8,Image,(FName)0x0,(FMargin *)&local_6878._s_0,NoTile,NoImage,
             (FDeprecateVector2DParameter *)&local_res10._s_0,&FStyleColors::Header,(UObject *)0x0,
             false);
  local_63b8._padding_ = (longlong)&___7FSlateColorBrush__6B_;
  FSlateBrush::operator=(&local_59d8,&local_63b8);
  local_res10 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  local_res8 = (TVector2<float>_u_0)0x0;
  local_6878._0_8_ = 0;
  local_6878._8_8_ = 0;
  FSlateBrush::FSlateBrush
            (&local_6748,Image,(FName)0x0,(FMargin *)&local_6878._s_0,NoTile,NoImage,
             (FDeprecateVector2DParameter *)&local_res10._s_0,&FStyleColors::Dropdown,(UObject *)0x0
             ,false);
  local_6748._padding_ = (longlong)&___7FSlateColorBrush__6B_;
  FSlateBrush::operator=(&local_5928,&local_6748);
  local_res8 = (TVector2<float>_u_0)0x41c0000040c00000;
  local_6878._0_8_ = pvVar5;
  local_6878._8_8_ = uVar6;
  pFVar13 = (FString *)
            (**(code **)(param_1->Object->_padding_ + 0xf0))
                      (param_1->Object,local_6838,"Starship/Common/ellipsis-vertical-narrow",L".svg"
                      );
  FSlateImageBrush::FSlateImageBrush
            ((FSlateImageBrush *)&local_67f8,pFVar13,(FDeprecateVector2DParameter *)&local_res8._s_0
             ,(FLinearColor *)&local_6878._s_0,NoTile,Vector);
  local_67f8._padding_ = (longlong)&___7FSlateVectorImageBrush__6B_;
  FSlateBrush::operator=(&local_5878,&local_67f8);
  local_res8 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  pFVar11 = (FSlateBrush *)
            FSlateNoResource::FSlateNoResource
                      ((FSlateNoResource *)local_6198,
                       (FDeprecateVector2DParameter *)&local_res8._s_0);
  FSlateBrush::operator=(&local_57c8,pFVar11);
  local_res8 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  pFVar11 = (FSlateBrush *)
            FSlateNoResource::FSlateNoResource
                      ((FSlateNoResource *)local_6308,
                       (FDeprecateVector2DParameter *)&local_res8._s_0);
  FSlateBrush::operator=(&local_5718,pFVar11);
  FTableColumnHeaderStyle::FTableColumnHeaderStyle
            (&local_4558,(FTableColumnHeaderStyle *)local_5ca8);
  local_6308._0_8_ = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_6308._160_8_);
  local_6198[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_60f8);
  local_67f8._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_67f8.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  if (local_6838[0] != (void *)0x0) {
    FMemory::Free(local_6838[0]);
  }
  local_6748._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_6748.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  local_63b8._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_63b8.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  local_6468._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_6468.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  if (local_6848[0] != (void *)0x0) {
    FMemory::Free(local_6848[0]);
  }
  local_6518._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_6518.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  if (local_6828[0] != (void *)0x0) {
    FMemory::Free(local_6828[0]);
  }
  local_65c8._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_65c8.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  if (local_6868 != (void *)0x0) {
    FMemory::Free(local_6868);
  }
  local_6678._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_6678.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  if ((void *)local_6858._0_8_ != (void *)0x0) {
    FMemory::Free((void *)local_6858._0_8_);
  }
  FTableColumnHeaderStyle::~FTableColumnHeaderStyle((FTableColumnHeaderStyle *)local_5ca8);
  pFVar1 = param_1->Object;
  pFVar10 = ::FName::FName((FName *)&local_res8._s_0,"TableView.Header.Column");
  FSlateStyleSet::Set<FTableColumnHeaderStyle>((FSlateStyleSet *)pFVar1,*pFVar10,&local_4558);
  FSlateWidgetStyle::FSlateWidgetStyle((FSlateWidgetStyle *)local_5ca8);
  local_5ca8._0_8_ = &___7FTableColumnHeaderStyle__6B_;
  FSlateBrush::FSlateBrush((FSlateBrush *)(local_5ca8 + 0x10));
  FSlateBrush::FSlateBrush(&local_5be8);
  FSlateBrush::FSlateBrush(&local_5b38);
  FSlateBrush::FSlateBrush(&local_5a88);
  FSlateBrush::FSlateBrush(&local_59d8);
  FSlateBrush::FSlateBrush(&local_5928);
  FSlateBrush::FSlateBrush(&local_5878);
  FSlateBrush::FSlateBrush(&local_57c8);
  FSlateBrush::FSlateBrush(&local_5718);
  local_res8._s_0 = (TVector2<float>_u_0_s_0)CoreStyleConstants::Icon12x12;
  local_6858._0_8_ = pvVar5;
  local_6858._8_8_ = uVar6;
  pFVar13 = (FString *)
            (**(code **)(param_1->Object->_padding_ + 0xf0))
                      (param_1->Object,&local_6868,"Starship/CoreWidgets/TableView/sort-up-arrow",
                       L".svg");
  FSlateImageBrush::FSlateImageBrush
            ((FSlateImageBrush *)&local_6678,pFVar13,(FDeprecateVector2DParameter *)&local_res8._s_0
             ,(FLinearColor *)&local_6858._s_0,NoTile,Vector);
  local_6678._padding_ = (longlong)&___7FSlateVectorImageBrush__6B_;
  FSlateBrush::operator=((FSlateBrush *)(local_5ca8 + 0x10),&local_6678);
  local_res8._s_0 = (TVector2<float>_u_0_s_0)CoreStyleConstants::Icon12x12;
  local_6858._0_8_ = pvVar5;
  local_6858._8_8_ = uVar6;
  pFVar13 = (FString *)
            (**(code **)(param_1->Object->_padding_ + 0xf0))
                      (param_1->Object,local_6828,"Starship/CoreWidgets/TableView/sort-down-arrow",
                       L".svg");
  FSlateImageBrush::FSlateImageBrush
            ((FSlateImageBrush *)&local_65c8,pFVar13,(FDeprecateVector2DParameter *)&local_res8._s_0
             ,(FLinearColor *)&local_6858._s_0,NoTile,Vector);
  local_65c8._padding_ = (longlong)&___7FSlateVectorImageBrush__6B_;
  FSlateBrush::operator=(&local_5be8,&local_65c8);
  local_res8._s_0 = (TVector2<float>_u_0_s_0)CoreStyleConstants::Icon12x12;
  local_6858._0_8_ = pvVar5;
  local_6858._8_8_ = uVar6;
  pFVar13 = (FString *)
            (**(code **)(param_1->Object->_padding_ + 0xf0))
                      (param_1->Object,local_6848,"Starship/CoreWidgets/TableView/sort-up-arrows",
                       L".svg");
  FSlateImageBrush::FSlateImageBrush
            ((FSlateImageBrush *)&local_6518,pFVar13,(FDeprecateVector2DParameter *)&local_res8._s_0
             ,(FLinearColor *)&local_6858._s_0,NoTile,Vector);
  local_6518._padding_ = (longlong)&___7FSlateVectorImageBrush__6B_;
  FSlateBrush::operator=(&local_5b38,&local_6518);
  local_res8._s_0 = (TVector2<float>_u_0_s_0)CoreStyleConstants::Icon12x12;
  local_6858._0_8_ = pvVar5;
  local_6858._8_8_ = uVar6;
  pFVar13 = (FString *)
            (**(code **)(param_1->Object->_padding_ + 0xf0))
                      (param_1->Object,local_6838,"Starship/CoreWidgets/TableView/sort-down-arrows",
                       L".svg");
  FSlateImageBrush::FSlateImageBrush
            ((FSlateImageBrush *)&local_6468,pFVar13,(FDeprecateVector2DParameter *)&local_res8._s_0
             ,(FLinearColor *)&local_6858._s_0,NoTile,Vector);
  local_6468._padding_ = (longlong)&___7FSlateVectorImageBrush__6B_;
  FSlateBrush::operator=(&local_5a88,&local_6468);
  local_res10 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  local_res8 = (TVector2<float>_u_0)0x0;
  local_6858._0_8_ = 0;
  local_6858._8_8_ = 0;
  FSlateBrush::FSlateBrush
            (&local_63b8,Image,(FName)0x0,(FMargin *)&local_6858._s_0,NoTile,NoImage,
             (FDeprecateVector2DParameter *)&local_res10._s_0,&FStyleColors::Header,(UObject *)0x0,
             false);
  local_63b8._padding_ = (longlong)&___7FSlateColorBrush__6B_;
  FSlateBrush::operator=(&local_59d8,&local_63b8);
  local_res10 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  local_res8 = (TVector2<float>_u_0)0x0;
  local_6858._0_8_ = 0;
  local_6858._8_8_ = 0;
  FSlateBrush::FSlateBrush
            (&local_6748,Image,(FName)0x0,(FMargin *)&local_6858._s_0,NoTile,NoImage,
             (FDeprecateVector2DParameter *)&local_res10._s_0,&FStyleColors::Dropdown,(UObject *)0x0
             ,false);
  local_6748._padding_ = (longlong)&___7FSlateColorBrush__6B_;
  FSlateBrush::operator=(&local_5928,&local_6748);
  local_res8 = (TVector2<float>_u_0)0x41c0000040c00000;
  local_6858._0_8_ = pvVar5;
  local_6858._8_8_ = uVar6;
  pFVar13 = (FString *)
            (**(code **)(param_1->Object->_padding_ + 0xf0))
                      (param_1->Object,&local_6878,"Starship/Common/ellipsis-vertical-narrow",
                       L".svg");
  FSlateImageBrush::FSlateImageBrush
            ((FSlateImageBrush *)&local_67f8,pFVar13,(FDeprecateVector2DParameter *)&local_res8._s_0
             ,(FLinearColor *)&local_6858._s_0,NoTile,Vector);
  local_67f8._padding_ = (longlong)&___7FSlateVectorImageBrush__6B_;
  FSlateBrush::operator=(&local_5878,&local_67f8);
  local_res8 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  pFVar11 = (FSlateBrush *)
            FSlateNoResource::FSlateNoResource
                      ((FSlateNoResource *)local_6198,
                       (FDeprecateVector2DParameter *)&local_res8._s_0);
  FSlateBrush::operator=(&local_57c8,pFVar11);
  local_res8 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  pFVar11 = (FSlateBrush *)
            FSlateNoResource::FSlateNoResource
                      ((FSlateNoResource *)local_6308,
                       (FDeprecateVector2DParameter *)&local_res8._s_0);
  FSlateBrush::operator=(&local_5718,pFVar11);
  FTableColumnHeaderStyle::FTableColumnHeaderStyle
            (&local_33c8,(FTableColumnHeaderStyle *)local_5ca8);
  local_6308._0_8_ = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_6308._160_8_);
  local_6198[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_60f8);
  local_67f8._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_67f8.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  if ((void *)local_6878._0_8_ != (void *)0x0) {
    FMemory::Free((void *)local_6878._0_8_);
  }
  local_6748._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_6748.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  local_63b8._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_63b8.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  local_6468._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_6468.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  if (local_6838[0] != (void *)0x0) {
    FMemory::Free(local_6838[0]);
  }
  local_6518._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_6518.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  if (local_6848[0] != (void *)0x0) {
    FMemory::Free(local_6848[0]);
  }
  local_65c8._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_65c8.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  if (local_6828[0] != (void *)0x0) {
    FMemory::Free(local_6828[0]);
  }
  local_6678._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_6678.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  if (local_6868 != (void *)0x0) {
    FMemory::Free(local_6868);
  }
  FTableColumnHeaderStyle::~FTableColumnHeaderStyle((FTableColumnHeaderStyle *)local_5ca8);
  FSlateWidgetStyle::FSlateWidgetStyle((FSlateWidgetStyle *)local_6308);
  local_6308._0_8_ = &___7FSplitterStyle__6B_;
  FSlateBrush::FSlateBrush((FSlateBrush *)(local_6308 + 0x10));
  FSlateBrush::FSlateBrush(&local_6248);
  local_res10 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  local_res8 = (TVector2<float>_u_0)0x0;
  local_6858._0_8_ = 0;
  local_6858._8_8_ = 0;
  FSlateBrush::FSlateBrush
            (&local_6748,Image,(FName)0x0,(FMargin *)&local_6858._s_0,NoTile,NoImage,
             (FDeprecateVector2DParameter *)&local_res10._s_0,&FStyleColors::Recessed,(UObject *)0x0
             ,false);
  local_6748._padding_ = (longlong)&___7FSlateColorBrush__6B_;
  FSlateBrush::operator=((FSlateBrush *)(local_6308 + 0x10),&local_6748);
  local_res10 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  local_res8 = (TVector2<float>_u_0)0x0;
  local_6858._0_8_ = 0;
  local_6858._8_8_ = 0;
  FSlateBrush::FSlateBrush
            (&local_67f8,Image,(FName)0x0,(FMargin *)&local_6858._s_0,NoTile,NoImage,
             (FDeprecateVector2DParameter *)&local_res10._s_0,&FStyleColors::Recessed,(UObject *)0x0
             ,false);
  local_67f8._padding_ = (longlong)&___7FSlateColorBrush__6B_;
  FSlateBrush::operator=(&local_6248,&local_67f8);
  local_5668[0] = (FSlateWidgetStyle)&___7FSplitterStyle__6B_;
  FSlateBrush::FSlateBrush(&local_5658,(FSlateBrush *)(local_6308 + 0x10));
  FSlateBrush::FSlateBrush(&local_55a8,&local_6248);
  local_67f8._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_67f8.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  local_6748._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_6748.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  local_6308._0_8_ = &___7FSplitterStyle__6B_;
  local_6248._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_6248.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  local_6308._16_8_ = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_6258.ReferenceController);
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)local_6308);
  pFVar1 = param_1->Object;
  pFVar16 = FHeaderRowStyle::FHeaderRowStyle(&local_54f8);
  FTableColumnHeaderStyle::operator=(&pFVar16->ColumnStyle,&local_4558);
  FTableColumnHeaderStyle::operator=(&pFVar16->LastColumnStyle,&local_33c8);
  FSlateBrush::operator=(&(pFVar16->ColumnSplitterStyle).HandleNormalBrush,&local_5658);
  FSlateBrush::operator=(&(pFVar16->ColumnSplitterStyle).HandleHighlightBrush,&local_55a8);
  pFVar16->SplitterHandleSize = 1.0;
  local_res10 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  local_6858._0_8_ = 0;
  local_6858._8_8_ = 0;
  local_res8 = (TVector2<float>_u_0)0x0;
  FSlateBrush::FSlateBrush
            (&local_6748,Image,(FName)0x0,(FMargin *)&local_6858._s_0,NoTile,NoImage,
             (FDeprecateVector2DParameter *)&local_res10._s_0,&FStyleColors::Recessed,(UObject *)0x0
             ,false);
  local_6748._padding_ = (longlong)&___7FSlateColorBrush__6B_;
  FSlateBrush::operator=(&pFVar16->BackgroundBrush,&local_6748);
  (pFVar16->ForegroundColor).SpecifiedColor.field0_0x0._s_0 =
       (FLinearColor_u_0_s_0)FStyleColors::Foreground.SpecifiedColor.field0_0x0;
  EVar8 = FStyleColors::Foreground.ColorTableId;
  uVar9 = FStyleColors::Foreground._18_2_;
  (pFVar16->ForegroundColor).ColorUseRule = FStyleColors::Foreground.ColorUseRule;
  (pFVar16->ForegroundColor).ColorTableId = EVar8;
  *(undefined2 *)&(pFVar16->ForegroundColor).field_0x12 = uVar9;
  local_res10 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  local_6858._0_8_ = 0;
  local_6858._8_8_ = 0;
  local_res8 = (TVector2<float>_u_0)0x0;
  FSlateBrush::FSlateBrush
            (&local_67f8,Image,(FName)0x0,(FMargin *)&local_6858._s_0,NoTile,NoImage,
             (FDeprecateVector2DParameter *)&local_res10._s_0,&FStyleColors::Recessed,(UObject *)0x0
             ,false);
  local_67f8._padding_ = (longlong)&___7FSlateColorBrush__6B_;
  FSlateBrush::operator=(&pFVar16->HorizontalSeparatorBrush,&local_67f8);
  pFVar16->HorizontalSeparatorThickness = 2.0;
  pFVar10 = ::FName::FName(&local_res18,"TableView.Header");
  FSlateStyleSet::Set<FHeaderRowStyle>((FSlateStyleSet *)pFVar1,*pFVar10,pFVar16);
  local_67f8._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_67f8.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  local_6748._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_6748.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  FHeaderRowStyle::~FHeaderRowStyle(&local_54f8);
  local_5668[0] = (FSlateWidgetStyle)&___7FSplitterStyle__6B_;
  local_55a8._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_55a8.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  local_5658._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_5658.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  FSlateWidgetStyle::~FSlateWidgetStyle(local_5668);
  FTableColumnHeaderStyle::~FTableColumnHeaderStyle(&local_33c8);
  FTableColumnHeaderStyle::~FTableColumnHeaderStyle(&local_4558);
  FTableRowStyle::~FTableRowStyle(&local_2d88);
  FTableRowStyle::~FTableRowStyle(&local_2238);
  FTableRowStyle::~FTableRowStyle(&local_16e8);
  FTableRowStyle::~FTableRowStyle(&local_b98);
  FTableRowStyle::~FTableRowStyle(&local_3f18);
  local_5ed8._padding_ = (longlong)&___7FTableViewStyle__6B_;
  local_5ed8.BackgroundBrush._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_5ed8.BackgroundBrush.ResourceHandle.Data.SharedReferenceCount.ReferenceController
            );
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)&local_5ed8);
  local_5e18._padding_ = (longlong)&___7FTableViewStyle__6B_;
  local_5e18.BackgroundBrush._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_5e18.BackgroundBrush.ResourceHandle.Data.SharedReferenceCount.ReferenceController
            );
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)&local_5e18);
  return;
}

// SetupTextStyles @ 1425a5870

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FStarshipCoreStyle::SetupTextStyles(TSharedRef<FStarshipCoreStyle::FStyle,1> *param_1)

{
  FStyle *pFVar1;
  uint uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  EStyleColor EVar12;
  undefined2 uVar13;
  uint uVar14;
  undefined4 uVar15;
  bool bVar16;
  FName *pFVar17;
  FScrollBarStyle *pFVar18;
  FStyleFonts *pFVar19;
  FTextBlockStyle *pFVar20;
  FSlateImageBrush *this;
  FString *pFVar21;
  FSlateBrush *pFVar22;
  FLegacySlateFontInfoCache *pFVar23;
  FSlateBrush *pFVar24;
  FEditableTextBoxStyle *pFVar25;
  FSlateBrush *this_00;
  FSlateBoxBrush *this_01;
  FSlateBorderBrush *this_02;
  FSlateFontInfo *pFVar26;
  FButtonStyle *pFVar27;
  undefined8 local_res8;
  TVector2<float>_u_0 local_res20;
  undefined4 uStack_12648;
  FDeprecateSlateVector2D FStack_12644;
  FName FStack_12638;
  FName FStack_12630;
  TVector2<float>_u_0 TStack_12628;
  TVector2<float>_u_0 TStack_12620;
  TVector2<float>_u_0 TStack_12618;
  TVector2<float>_u_0 TStack_12610;
  TVector2<float>_u_0 TStack_12608;
  TVector2<float>_u_0 TStack_12600;
  TVector2<float>_u_0 TStack_125f8;
  TVector2<float>_u_0 TStack_125f0;
  TVector2<float>_u_0 TStack_125e8;
  TVector2<float>_u_0 TStack_125e0;
  FDeprecateSlateVector2D FStack_125d8;
  FDeprecateSlateVector2D FStack_125d0;
  FDeprecateSlateVector2D FStack_125c8;
  FDeprecateSlateVector2D FStack_125c0;
  TVector2<float>_u_0 TStack_125b8;
  FFontOutlineSettings FStack_125b0;
  FFontOutlineSettings FStack_12590;
  FFontOutlineSettings FStack_12570;
  FFontOutlineSettings FStack_12550;
  TSharedRef<FCompositeFont_const_,1> TStack_12528;
  TSharedRef<FCompositeFont_const_,1> aTStack_12518 [2];
  undefined4 uStack_124f8;
  undefined4 uStack_124e4;
  undefined4 uStack_124d0;
  FName FStack_124c8;
  FName FStack_124c0;
  FName FStack_124b8;
  FName FStack_124b0;
  FName FStack_124a8;
  FName FStack_124a0;
  FName FStack_12498;
  FName FStack_12490;
  FName FStack_12488;
  FName FStack_12480;
  FName FStack_12478;
  FName FStack_12470;
  FName FStack_12468;
  FName FStack_12460;
  FName FStack_12458;
  FName FStack_12450;
  FName FStack_12448;
  FName FStack_12440;
  FName FStack_12438;
  FName FStack_12430;
  FName FStack_12428;
  FName FStack_12420;
  FName FStack_12418;
  FName FStack_12410;
  FName FStack_12408;
  FName FStack_12400;
  FName FStack_123f8;
  FName FStack_123f0;
  FName FStack_123e8;
  FName FStack_123e0;
  FMargin FStack_123d8;
  void *apvStack_123c8 [2];
  TSharedPtr<FCompositeFont_const_,1> TStack_123b8;
  FLinearColor_u_0 FStack_123a8;
  FMargin FStack_12398;
  void *apvStack_12388 [2];
  TSharedPtr<FCompositeFont_const_,1> TStack_12378;
  FLinearColor_u_0 FStack_12368;
  FMargin FStack_12358;
  FLinearColor_u_0 FStack_12348;
  FMargin FStack_12338;
  FLinearColor_u_0 FStack_12328;
  FMargin FStack_12318;
  FLinearColor_u_0 FStack_12308;
  FMargin FStack_122f8;
  void *apvStack_122e8 [2];
  void *apvStack_122d8 [2];
  void *apvStack_122c8 [2];
  void *apvStack_122b8 [2];
  FMargin FStack_122a8;
  FLinearColor_u_0 FStack_12298;
  FMargin FStack_12288;
  void *apvStack_12278 [2];
  FLinearColor_u_0 FStack_12268;
  FMargin FStack_12258;
  void *apvStack_12248 [2];
  FMargin FStack_12238;
  FLinearColor_u_0 FStack_12228;
  FLinearColor_u_0 FStack_12218;
  void *apvStack_12208 [2];
  void *apvStack_121f8 [2];
  void *apvStack_121e8 [2];
  void *apvStack_121d8 [2];
  FLinearColor_u_0 FStack_121c8;
  FMargin FStack_121b8;
  FLinearColor_u_0 FStack_121a8;
  FMargin FStack_12198;
  void *apvStack_12188 [2];
  void *apvStack_12178 [2];
  FName FStack_12168;
  FName FStack_12160;
  FName FStack_12158;
  FName FStack_12150;
  FName FStack_12148;
  FName FStack_12140;
  FName FStack_12138;
  FName FStack_12130;
  FTextBlockStyle FStack_12128;
  FSlateWidgetStyle FStack_11e48;
  FSlateFontInfo FStack_11e40;
  undefined8 uStack_11de0;
  undefined4 uStack_11dd8;
  undefined4 uStack_11dd4;
  undefined2 uStack_11dd0;
  undefined2 uStack_11dce;
  FSlateBrush FStack_11dc8;
  FSlateBrush FStack_11d18;
  FSlateBrush FStack_11c68;
  FTextBlockStyle FStack_11bb8;
  FTextBlockStyle FStack_118d8;
  FTextBlockStyle FStack_115f8;
  FTextBlockStyle FStack_11318;
  FTextBlockStyle FStack_11038;
  FTextBlockStyle FStack_10d58;
  FTextBlockStyle FStack_10a78;
  FTextBlockStyle FStack_10798;
  FSlateFontInfo FStack_104b8;
  FSlateFontInfo FStack_10458;
  FSlateBrush FStack_103f8;
  FSlateBrush FStack_10348;
  FSlateBrush FStack_10298;
  FSlateBrush FStack_101e8;
  FSlateBrush FStack_10138;
  FSlateBrush FStack_10088;
  FEditableTextStyle local_ffd8;
  undefined **local_fd48;
  FSlateFontInfo local_fd40;
  FLinearColor_u_0 local_fce0;
  ESlateColorStylingMode local_fcd0;
  EStyleColor EStack_fccf;
  undefined2 uStack_fcce;
  FDeprecateSlateVector2D local_fccc;
  FLinearColor_u_0 local_fcc4;
  FLinearColor_u_0 local_fcb4;
  ESlateColorStylingMode local_fca4;
  EStyleColor EStack_fca3;
  undefined2 uStack_fca2;
  FLinearColor_u_0 local_fca0;
  ESlateColorStylingMode local_fc90;
  EStyleColor EStack_fc8f;
  undefined2 uStack_fc8e;
  FSlateBrush local_fc88;
  FSlateBrush local_fbd8;
  FSlateBrush local_fb28;
  ETextTransformPolicy local_fa78;
  ETextOverflowPolicy local_fa77;
  FTextBlockStyle local_fa68;
  FTextBlockStyle local_f788;
  FSlateFontInfo local_f4a8;
  FSlateFontInfo local_f448;
  undefined **local_f3e8 [20];
  TReferenceControllerBase<1> *local_f348;
  undefined **local_f338 [20];
  TReferenceControllerBase<1> *local_f298;
  undefined **local_f288 [20];
  TReferenceControllerBase<1> *local_f1e8;
  undefined **local_f1d8 [20];
  TReferenceControllerBase<1> *local_f138;
  undefined **local_f128 [20];
  TReferenceControllerBase<1> *local_f088;
  undefined **local_f078 [20];
  TReferenceControllerBase<1> *local_efd8;
  undefined **local_efc8 [20];
  TReferenceControllerBase<1> *local_ef28;
  undefined **local_ef18 [20];
  TReferenceControllerBase<1> *local_ee78;
  undefined **local_ee68 [20];
  TReferenceControllerBase<1> *local_edc8;
  undefined **local_edb8 [20];
  TReferenceControllerBase<1> *local_ed18;
  undefined **local_ed08 [20];
  TReferenceControllerBase<1> *local_ec68;
  undefined **local_ec58 [20];
  TReferenceControllerBase<1> *local_ebb8;
  undefined **local_eba8 [20];
  TReferenceControllerBase<1> *local_eb08;
  undefined **local_eaf8 [20];
  TReferenceControllerBase<1> *local_ea58;
  undefined **local_ea48 [20];
  TReferenceControllerBase<1> *local_e9a8;
  undefined **local_e998 [20];
  TReferenceControllerBase<1> *local_e8f8;
  FTextBlockStyle local_e8e8;
  FTextBlockStyle local_e608;
  FTextBlockStyle local_e328;
  FSearchBoxStyle local_e048;
  FSlateWidgetStyle local_d068 [2];
  FButtonStyle local_d058;
  FTextBlockStyle local_ccc8;
  FMargin local_c9e8;
  FTextBlockStyle local_c9d8;
  FHyperlinkStyle local_c6f8;
  FTextBlockStyle local_c068;
  FTextBlockStyle local_bd88;
  FTextBlockStyle local_baa8;
  FTextBlockStyle local_b7c8;
  FTextBlockStyle local_b4e8;
  FEditableTextBoxStyle local_b208;
  FEditableTextBoxStyle local_a588;
  FEditableTextBoxStyle local_9908;
  FEditableTextBoxStyle local_8c88;
  FButtonStyle local_8008;
  FSlateWidgetStyle local_7c78 [2];
  FEditableTextBoxStyle local_7c68;
  FTextBlockStyle local_6fe8;
  FSlateWidgetStyle local_6d08 [2];
  FEditableTextBoxStyle local_6cf8;
  FTextBlockStyle local_6078;
  FTextBlockStyle local_5d98;
  FTextBlockStyle local_5ab8;
  FTextBlockStyle local_57d8;
  FButtonStyle local_54f8;
  FInlineEditableTextBlockStyle local_5168;
  FInlineEditableTextBlockStyle local_41f8;
  FEditableTextBoxStyle local_3288;
  FEditableTextBoxStyle local_2608;
  FEditableTextBoxStyle local_1988;
  FEditableTextBoxStyle local_d08;
  undefined8 uStack_48;
  
  uVar14 = uStack_12648;
  uStack_48 = 0x1425a588f;
  pFVar1 = param_1->Object;
  pFVar22 = (FSlateBrush *)0x0;
  pFVar17 = ::FName::FName(&FStack_12168,"Scrollbar");
  pFVar18 = (FScrollBarStyle *)
            (**(code **)(pFVar1->_padding_ + 0xa0))(pFVar1,FScrollBarStyle::TypeName,*pFVar17,0,1);
  if (((pFVar18 == (FScrollBarStyle *)0x0) &&
      (pFVar18 = &::Default,
      *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0)) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    FScrollBarStyle::FScrollBarStyle(&::Default);
    atexit(`FScrollBarStyle::GetDefault'::__l2::_dynamic_atexit_destructor_for__Default__);
    _Init_thread_footer(&::_TSS0);
  }
  pFVar19 = FStyleFonts::Get();
  pFVar20 = FTextBlockStyle::FTextBlockStyle(&local_e608);
  FSlateFontInfo::operator=(&pFVar20->Font,&pFVar19->Normal);
  uVar6 = _UNK_15090c6d8;
  *(undefined8 *)&(pFVar20->ColorAndOpacity).SpecifiedColor.field0_0x0 =
       ___xmm_3f8000003f800000000000003f800000;
  *(undefined8 *)((longlong)&(pFVar20->ColorAndOpacity).SpecifiedColor.field0_0x0 + 8) = uVar6;
  uStack_124f8 = CONCAT22(uStack_124f8._2_2_,2);
  uVar15 = uStack_124f8;
  uStack_124f8._0_1_ = (undefined1)2;
  uStack_124f8._1_1_ = (undefined1)(2 >> 8);
  (pFVar20->ColorAndOpacity).ColorUseRule = (undefined1)uStack_124f8;
  (pFVar20->ColorAndOpacity).ColorTableId = uStack_124f8._1_1_;
  *(undefined2 *)&(pFVar20->ColorAndOpacity).field_0x12 = uStack_124f8._2_2_;
  local_res8._0_4_ = UE::Math::TVector2<float>::ZeroVector.field0_0x0._0_4_;
  local_res8._4_4_ = UE::Math::TVector2<float>::ZeroVector.field0_0x0._4_4_;
  *(undefined4 *)&pFVar20->ShadowOffset = (undefined4)local_res8;
  *(undefined4 *)&(pFVar20->ShadowOffset).field_0x4 = local_res8._4_4_;
  (pFVar20->SelectedBackgroundColor).SpecifiedColor.field0_0x0._s_0 =
       (FLinearColor_u_0_s_0)FStyleColors::Highlight.SpecifiedColor.field0_0x0;
  EVar12 = FStyleColors::Highlight.ColorTableId;
  uVar13 = FStyleColors::Highlight._18_2_;
  (pFVar20->SelectedBackgroundColor).ColorUseRule = FStyleColors::Highlight.ColorUseRule;
  (pFVar20->SelectedBackgroundColor).ColorTableId = EVar12;
  *(undefined2 *)&(pFVar20->SelectedBackgroundColor).field_0x12 = uVar13;
  (pFVar20->HighlightColor).SpecifiedColor.field0_0x0._s_0 =
       (FLinearColor_u_0_s_0)FStyleColors::Black.SpecifiedColor.field0_0x0;
  EVar12 = FStyleColors::Black.ColorTableId;
  uVar13 = FStyleColors::Black._18_2_;
  (pFVar20->HighlightColor).ColorUseRule = FStyleColors::Black.ColorUseRule;
  (pFVar20->HighlightColor).ColorTableId = EVar12;
  *(undefined2 *)&(pFVar20->HighlightColor).field_0x12 = uVar13;
  local_res20 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  FStack_123d8.Left = 0.0;
  FStack_123d8.Top = 0.0;
  FStack_123d8.Right = 0.0;
  FStack_123d8.Bottom = 0.0;
  uStack_124f8 = uVar15;
  FSlateBrush::FSlateBrush
            (&FStack_10298,Image,(FName)0x0,&FStack_123d8,NoTile,NoImage,
             (FDeprecateVector2DParameter *)&local_res20._s_0,&FStyleColors::AccentGreen,
             (UObject *)0x0,false);
  FStack_10298._padding_ = (longlong)&___7FSlateColorBrush__6B_;
  FSlateBrush::operator=(&pFVar20->HighlightShape,&FStack_10298);
  FTextBlockStyle::FTextBlockStyle(&FStack_12128,pFVar20);
  FStack_10298._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_10298.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  local_e608._0_8_ = &___7FTextBlockStyle__6B_;
  local_e608.UnderlineBrush._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_e608.UnderlineBrush.ResourceHandle.Data.SharedReferenceCount.ReferenceController)
  ;
  local_e608.StrikeBrush._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_e608.StrikeBrush.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  local_e608.HighlightShape._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_e608.HighlightShape.ResourceHandle.Data.SharedReferenceCount.ReferenceController)
  ;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_e608.Font.CompositeFont.SharedReferenceCount.ReferenceController);
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)&local_e608);
  pFVar1 = param_1->Object;
  pFVar17 = ::FName::FName(&FStack_12160,"NormalFont");
  FSlateStyleSet::Set((FSlateStyleSet *)pFVar1,*pFVar17,&pFVar19->Normal);
  pFVar1 = param_1->Object;
  pFVar17 = ::FName::FName(&FStack_12158,"SmallFont");
  FSlateStyleSet::Set((FSlateStyleSet *)pFVar1,*pFVar17,&pFVar19->Small);
  pFVar1 = param_1->Object;
  pFVar17 = ::FName::FName(&FStack_12150,"Font.Large");
  FSlateStyleSet::Set((FSlateStyleSet *)pFVar1,*pFVar17,&pFVar19->Large);
  pFVar1 = param_1->Object;
  pFVar17 = ::FName::FName(&FStack_12148,"NormalFontBold");
  FSlateStyleSet::Set((FSlateStyleSet *)pFVar1,*pFVar17,&pFVar19->NormalBold);
  pFVar1 = param_1->Object;
  pFVar17 = ::FName::FName(&FStack_12140,"SmallFontBold");
  FSlateStyleSet::Set((FSlateStyleSet *)pFVar1,*pFVar17,&pFVar19->SmallBold);
  pFVar1 = param_1->Object;
  pFVar17 = ::FName::FName(&FStack_12138,"Font.Large.Bold");
  FSlateStyleSet::Set((FSlateStyleSet *)pFVar1,*pFVar17,&pFVar19->LargeBold);
  pFVar1 = param_1->Object;
  pFVar17 = ::FName::FName(&FStack_12130,"NormalFontItalic");
  FSlateStyleSet::Set((FSlateStyleSet *)pFVar1,*pFVar17,&pFVar19->NormalItalic);
  pFVar1 = param_1->Object;
  pFVar17 = ::FName::FName(&FStack_124c8,"NormalFontBoldItalic");
  FSlateStyleSet::Set((FSlateStyleSet *)pFVar1,*pFVar17,&pFVar19->NormalBoldItalic);
  pFVar1 = param_1->Object;
  pFVar17 = ::FName::FName(&FStack_124c0,"HeadingMedium");
  FSlateStyleSet::Set((FSlateStyleSet *)pFVar1,*pFVar17,&pFVar19->HeadingMedium);
  pFVar1 = param_1->Object;
  pFVar17 = ::FName::FName(&FStack_124b8,"HeadingSmall");
  FSlateStyleSet::Set((FSlateStyleSet *)pFVar1,*pFVar17,&pFVar19->HeadingSmall);
  pFVar1 = param_1->Object;
  pFVar17 = ::FName::FName(&FStack_124b0,"HeadingExtraSmall");
  FSlateStyleSet::Set((FSlateStyleSet *)pFVar1,*pFVar17,&pFVar19->HeadingExtraSmall);
  this = ::operator_new(0xb0);
  if (this != (FSlateImageBrush *)0x0) {
    FStack_12644 = CoreStyleConstants::Icon8x8;
    pFVar21 = (FString *)
              (**(code **)(param_1->Object->_padding_ + 0xf0))
                        (param_1->Object,apvStack_123c8,"Old/White",L".png");
    pFVar22 = (FSlateBrush *)
              FSlateImageBrush::FSlateImageBrush
                        (this,pFVar21,(FDeprecateVector2DParameter *)&FStack_12644,
                         &FLinearColor::White,Both,FullColor);
    if (apvStack_123c8[0] != (void *)0x0) {
      FMemory::Free(apvStack_123c8[0]);
    }
  }
  pFVar1 = param_1->Object;
  pFVar17 = ::FName::FName(&FStack_124a8,"DefaultTextUnderline");
  FSlateStyleSet::Set<FSlateBrush>((FSlateStyleSet *)pFVar1,*pFVar17,pFVar22);
  FStack_118d8._0_8_ = &___7FTextBlockStyle__6B_;
  FSlateFontInfo::FSlateFontInfo(&FStack_118d8.Font,&FStack_12128.Font);
  FStack_118d8.ColorAndOpacity.ColorUseRule = FStack_12128.ColorAndOpacity.ColorUseRule;
  FStack_118d8.ColorAndOpacity.ColorTableId = FStack_12128.ColorAndOpacity.ColorTableId;
  FStack_118d8.ColorAndOpacity._18_2_ = FStack_12128.ColorAndOpacity._18_2_;
  FStack_118d8.ColorAndOpacity.SpecifiedColor.field0_0x0._0_8_ =
       FStack_12128.ColorAndOpacity.SpecifiedColor.field0_0x0._0_8_;
  FStack_118d8.ColorAndOpacity.SpecifiedColor.field0_0x0._8_8_ =
       FStack_12128.ColorAndOpacity.SpecifiedColor.field0_0x0._8_8_;
  FStack_118d8.ShadowOffset = FStack_12128.ShadowOffset;
  FStack_118d8.SelectedBackgroundColor.ColorUseRule =
       FStack_12128.SelectedBackgroundColor.ColorUseRule;
  FStack_118d8.SelectedBackgroundColor.ColorTableId =
       FStack_12128.SelectedBackgroundColor.ColorTableId;
  FStack_118d8.SelectedBackgroundColor._18_2_ = FStack_12128.SelectedBackgroundColor._18_2_;
  FStack_118d8.ShadowColorAndOpacity.field0_0x0._0_8_ =
       FStack_12128.ShadowColorAndOpacity.field0_0x0._0_8_;
  FStack_118d8.ShadowColorAndOpacity.field0_0x0._8_8_ =
       FStack_12128.ShadowColorAndOpacity.field0_0x0._8_8_;
  FStack_118d8.HighlightColor.ColorUseRule = FStack_12128.HighlightColor.ColorUseRule;
  FStack_118d8.HighlightColor.ColorTableId = FStack_12128.HighlightColor.ColorTableId;
  FStack_118d8.HighlightColor._18_2_ = FStack_12128.HighlightColor._18_2_;
  FStack_118d8.SelectedBackgroundColor.SpecifiedColor.field0_0x0._0_8_ =
       FStack_12128.SelectedBackgroundColor.SpecifiedColor.field0_0x0._0_8_;
  FStack_118d8.SelectedBackgroundColor.SpecifiedColor.field0_0x0._8_8_ =
       FStack_12128.SelectedBackgroundColor.SpecifiedColor.field0_0x0._8_8_;
  FStack_118d8.HighlightColor.SpecifiedColor.field0_0x0._0_8_ =
       FStack_12128.HighlightColor.SpecifiedColor.field0_0x0._0_8_;
  FStack_118d8.HighlightColor.SpecifiedColor.field0_0x0._8_8_ =
       FStack_12128.HighlightColor.SpecifiedColor.field0_0x0._8_8_;
  FSlateBrush::FSlateBrush(&FStack_118d8.HighlightShape,&FStack_12128.HighlightShape);
  FSlateBrush::FSlateBrush(&FStack_118d8.StrikeBrush,&FStack_12128.StrikeBrush);
  FSlateBrush::FSlateBrush(&FStack_118d8.UnderlineBrush,&FStack_12128.UnderlineBrush);
  FStack_118d8.TransformPolicy = FStack_12128.TransformPolicy;
  FStack_118d8.OverflowPolicy = FStack_12128.OverflowPolicy;
  FSlateBrush::operator=(&FStack_118d8.UnderlineBrush,pFVar22);
  FTextBlockStyle::FTextBlockStyle(&local_e8e8,&FStack_118d8);
  FStack_118d8._0_8_ = &___7FTextBlockStyle__6B_;
  FStack_118d8.UnderlineBrush._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_118d8.UnderlineBrush.ResourceHandle.Data.SharedReferenceCount.
             ReferenceController);
  FStack_118d8.StrikeBrush._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_118d8.StrikeBrush.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  FStack_118d8.HighlightShape._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_118d8.HighlightShape.ResourceHandle.Data.SharedReferenceCount.
             ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_118d8.Font.CompositeFont.SharedReferenceCount.ReferenceController);
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)&FStack_118d8);
  pFVar20 = FTextBlockStyle::FTextBlockStyle(&local_e328);
  FStack_125b0.OutlineColor.field0_0x0._s_0 = FLinearColor::Black.field0_0x0;
  FStack_125b0.OutlineSize = 0;
  FStack_125b0.bMiteredCorners = false;
  FStack_125b0.bSeparateFillAlpha = false;
  FStack_125b0.bApplyOutlineToDropShadows = false;
  FStack_125b0.OutlineMaterial.field0_0x0.DebugPtr = (TObjectPtr<UObject>_u_0)0x0;
  pFVar17 = ::FName::FName(&FStack_124a0,"Mono");
  FStack_12638 = *pFVar17;
  pFVar23 = FLegacySlateFontInfoCache::Get();
  FLegacySlateFontInfoCache::GetDefaultFont(pFVar23,&TStack_12528);
  TStack_123b8.Object = TStack_12528.Object;
  TStack_123b8.SharedReferenceCount.ReferenceController =
       TStack_12528.SharedReferenceCount.ReferenceController;
  if (TStack_12528.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (TStack_12528.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(TStack_12528.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  fVar5 = __real_41200000;
  FSlateFontInfo::FSlateFontInfo
            (&FStack_104b8,&TStack_123b8,__real_41200000,&FStack_12638,&FStack_125b0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (TStack_12528.SharedReferenceCount.ReferenceController);
  FSlateFontInfo::operator=(&pFVar20->Font,&FStack_104b8);
  uVar8 = _UNK_15090c6d8;
  uVar7 = _UNK_15076b1f8;
  uVar6 = ___xmm_3f8000003f8000003f8000003f800000;
  *(undefined8 *)&(pFVar20->ColorAndOpacity).SpecifiedColor.field0_0x0 =
       ___xmm_3f8000003f800000000000003f800000;
  *(undefined8 *)((longlong)&(pFVar20->ColorAndOpacity).SpecifiedColor.field0_0x0 + 8) = uVar8;
  uStack_124e4 = CONCAT22(uStack_124e4._2_2_,2);
  uVar15 = uStack_124e4;
  uStack_124e4._0_1_ = (undefined1)2;
  uStack_124e4._1_1_ = (undefined1)(2 >> 8);
  (pFVar20->ColorAndOpacity).ColorUseRule = (undefined1)uStack_124e4;
  (pFVar20->ColorAndOpacity).ColorTableId = uStack_124e4._1_1_;
  *(undefined2 *)&(pFVar20->ColorAndOpacity).field_0x12 = uStack_124e4._2_2_;
  local_res8._0_4_ = UE::Math::TVector2<float>::ZeroVector.field0_0x0._0_4_;
  local_res8._4_4_ = UE::Math::TVector2<float>::ZeroVector.field0_0x0._4_4_;
  *(undefined4 *)&pFVar20->ShadowOffset = (undefined4)local_res8;
  *(undefined4 *)&(pFVar20->ShadowOffset).field_0x4 = local_res8._4_4_;
  uVar11 = _UNK_150925298;
  uVar9 = ___xmm_3f800000000000003e99999a3ca3d70a;
  uVar2 = uStack_12648 >> 8;
  uStack_12648 = uVar2 << 8;
  (pFVar20->ShadowColorAndOpacity).field0_0x0._s_0 =
       (FLinearColor_u_0_s_0)FLinearColor::Black.field0_0x0;
  uVar10 = _UNK_1509251a8;
  uVar8 = ___xmm_3ec000003ec000003ec000003ec00000;
  *(undefined8 *)&(pFVar20->HighlightColor).SpecifiedColor.field0_0x0 = uVar9;
  *(undefined8 *)((longlong)&(pFVar20->HighlightColor).SpecifiedColor.field0_0x0 + 8) = uVar11;
  (pFVar20->HighlightColor).ColorUseRule = (undefined1)uStack_12648;
  uVar11 = _UNK_1509251a8;
  uVar9 = ___xmm_3ec000003ec000003ec000003ec00000;
  (pFVar20->HighlightColor).ColorTableId = uStack_12648._1_1_;
  *(undefined2 *)&(pFVar20->HighlightColor).field_0x12 = uStack_12648._2_2_;
  FStack_123a8._0_8_ = uVar6;
  FStack_123a8._8_8_ = uVar7;
  ___xmm_3ec000003ec000003ec000003ec00000 = (float)uVar8;
  _UNK_1509251a4 = SUB84(uVar8,4);
  FStack_12398.Left = ___xmm_3ec000003ec000003ec000003ec00000;
  FStack_12398.Top = _UNK_1509251a4;
  _UNK_1509251a8 = (float)uVar10;
  _UNK_1509251ac = SUB84(uVar10,4);
  FStack_12398.Right = _UNK_1509251a8;
  FStack_12398.Bottom = _UNK_1509251ac;
  ___xmm_3ec000003ec000003ec000003ec00000 = uVar9;
  _UNK_1509251a8 = uVar11;
  uStack_124e4 = uVar15;
  pFVar21 = (FString *)
            (**(code **)(param_1->Object->_padding_ + 0xf0))
                      (param_1->Object,apvStack_12388,"Common/TextBlockHighlightShape",L".png");
  pFVar24 = (FSlateBrush *)
            FSlateBoxBrush::FSlateBoxBrush
                      ((FSlateBoxBrush *)local_f3e8,pFVar21,&FStack_12398,
                       (FLinearColor *)&FStack_123a8._s_0,FullColor);
  FSlateBrush::operator=(&pFVar20->HighlightShape,pFVar24);
  FTextBlockStyle::FTextBlockStyle(&FStack_10798,pFVar20);
  local_f3e8[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_f348);
  if (apvStack_12388[0] != (void *)0x0) {
    FMemory::Free(apvStack_12388[0]);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_104b8.CompositeFont.SharedReferenceCount.ReferenceController);
  local_e328._0_8_ = &___7FTextBlockStyle__6B_;
  local_e328.UnderlineBrush._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_e328.UnderlineBrush.ResourceHandle.Data.SharedReferenceCount.ReferenceController)
  ;
  local_e328.StrikeBrush._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_e328.StrikeBrush.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  local_e328.HighlightShape._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_e328.HighlightShape.ResourceHandle.Data.SharedReferenceCount.ReferenceController)
  ;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_e328.Font.CompositeFont.SharedReferenceCount.ReferenceController);
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)&local_e328);
  FStack_115f8._0_8_ = &___7FTextBlockStyle__6B_;
  FSlateFontInfo::FSlateFontInfo(&FStack_115f8.Font,&FStack_10798.Font);
  FStack_115f8.ColorAndOpacity.ColorUseRule = FStack_10798.ColorAndOpacity.ColorUseRule;
  FStack_115f8.ColorAndOpacity.ColorTableId = FStack_10798.ColorAndOpacity.ColorTableId;
  FStack_115f8.ColorAndOpacity._18_2_ = FStack_10798.ColorAndOpacity._18_2_;
  FStack_115f8.ColorAndOpacity.SpecifiedColor.field0_0x0._0_8_ =
       FStack_10798.ColorAndOpacity.SpecifiedColor.field0_0x0._0_8_;
  FStack_115f8.ColorAndOpacity.SpecifiedColor.field0_0x0._8_8_ =
       FStack_10798.ColorAndOpacity.SpecifiedColor.field0_0x0._8_8_;
  FStack_115f8.ShadowOffset = FStack_10798.ShadowOffset;
  FStack_115f8.SelectedBackgroundColor.ColorUseRule =
       FStack_10798.SelectedBackgroundColor.ColorUseRule;
  FStack_115f8.SelectedBackgroundColor.ColorTableId =
       FStack_10798.SelectedBackgroundColor.ColorTableId;
  FStack_115f8.SelectedBackgroundColor._18_2_ = FStack_10798.SelectedBackgroundColor._18_2_;
  FStack_115f8.ShadowColorAndOpacity.field0_0x0._0_8_ =
       FStack_10798.ShadowColorAndOpacity.field0_0x0._0_8_;
  FStack_115f8.ShadowColorAndOpacity.field0_0x0._8_8_ =
       FStack_10798.ShadowColorAndOpacity.field0_0x0._8_8_;
  FStack_115f8.HighlightColor.ColorUseRule = FStack_10798.HighlightColor.ColorUseRule;
  FStack_115f8.HighlightColor.ColorTableId = FStack_10798.HighlightColor.ColorTableId;
  FStack_115f8.HighlightColor._18_2_ = FStack_10798.HighlightColor._18_2_;
  FStack_115f8.SelectedBackgroundColor.SpecifiedColor.field0_0x0._0_8_ =
       FStack_10798.SelectedBackgroundColor.SpecifiedColor.field0_0x0._0_8_;
  FStack_115f8.SelectedBackgroundColor.SpecifiedColor.field0_0x0._8_8_ =
       FStack_10798.SelectedBackgroundColor.SpecifiedColor.field0_0x0._8_8_;
  FStack_115f8.HighlightColor.SpecifiedColor.field0_0x0._0_8_ =
       FStack_10798.HighlightColor.SpecifiedColor.field0_0x0._0_8_;
  FStack_115f8.HighlightColor.SpecifiedColor.field0_0x0._8_8_ =
       FStack_10798.HighlightColor.SpecifiedColor.field0_0x0._8_8_;
  FSlateBrush::FSlateBrush(&FStack_115f8.HighlightShape,&FStack_10798.HighlightShape);
  FSlateBrush::FSlateBrush(&FStack_115f8.StrikeBrush,&FStack_10798.StrikeBrush);
  FSlateBrush::FSlateBrush(&FStack_115f8.UnderlineBrush,&FStack_10798.UnderlineBrush);
  FStack_115f8.TransformPolicy = FStack_10798.TransformPolicy;
  FStack_115f8.OverflowPolicy = FStack_10798.OverflowPolicy;
  FSlateBrush::operator=(&FStack_115f8.UnderlineBrush,pFVar22);
  FTextBlockStyle::FTextBlockStyle(&local_bd88,&FStack_115f8);
  FStack_115f8._0_8_ = &___7FTextBlockStyle__6B_;
  FStack_115f8.UnderlineBrush._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_115f8.UnderlineBrush.ResourceHandle.Data.SharedReferenceCount.
             ReferenceController);
  FStack_115f8.StrikeBrush._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_115f8.StrikeBrush.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  FStack_115f8.HighlightShape._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_115f8.HighlightShape.ResourceHandle.Data.SharedReferenceCount.
             ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_115f8.Font.CompositeFont.SharedReferenceCount.ReferenceController);
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)&FStack_115f8);
  pFVar1 = param_1->Object;
  pFVar17 = ::FName::FName(&FStack_12498,"MonospacedText");
  FSlateStyleSet::Set<FTextBlockStyle>((FSlateStyleSet *)pFVar1,*pFVar17,&FStack_10798);
  pFVar1 = param_1->Object;
  pFVar17 = ::FName::FName(&FStack_12490,"MonospacedUnderlinedText");
  FSlateStyleSet::Set<FTextBlockStyle>((FSlateStyleSet *)pFVar1,*pFVar17,&local_bd88);
  FStack_11318._0_8_ = &___7FTextBlockStyle__6B_;
  FSlateFontInfo::FSlateFontInfo(&FStack_11318.Font,&FStack_12128.Font);
  FStack_11318.ColorAndOpacity.ColorUseRule = FStack_12128.ColorAndOpacity.ColorUseRule;
  FStack_11318.ColorAndOpacity.ColorTableId = FStack_12128.ColorAndOpacity.ColorTableId;
  FStack_11318.ColorAndOpacity._18_2_ = FStack_12128.ColorAndOpacity._18_2_;
  FStack_11318.ColorAndOpacity.SpecifiedColor.field0_0x0._0_8_ =
       FStack_12128.ColorAndOpacity.SpecifiedColor.field0_0x0._0_8_;
  FStack_11318.ColorAndOpacity.SpecifiedColor.field0_0x0._8_8_ =
       FStack_12128.ColorAndOpacity.SpecifiedColor.field0_0x0._8_8_;
  FStack_11318.ShadowOffset = FStack_12128.ShadowOffset;
  FStack_11318.SelectedBackgroundColor.ColorUseRule =
       FStack_12128.SelectedBackgroundColor.ColorUseRule;
  FStack_11318.SelectedBackgroundColor.ColorTableId =
       FStack_12128.SelectedBackgroundColor.ColorTableId;
  FStack_11318.SelectedBackgroundColor._18_2_ = FStack_12128.SelectedBackgroundColor._18_2_;
  FStack_11318.ShadowColorAndOpacity.field0_0x0._0_8_ =
       FStack_12128.ShadowColorAndOpacity.field0_0x0._0_8_;
  FStack_11318.ShadowColorAndOpacity.field0_0x0._8_8_ =
       FStack_12128.ShadowColorAndOpacity.field0_0x0._8_8_;
  FStack_11318.HighlightColor.ColorUseRule = FStack_12128.HighlightColor.ColorUseRule;
  FStack_11318.HighlightColor.ColorTableId = FStack_12128.HighlightColor.ColorTableId;
  FStack_11318.HighlightColor._18_2_ = FStack_12128.HighlightColor._18_2_;
  FStack_11318.SelectedBackgroundColor.SpecifiedColor.field0_0x0._0_8_ =
       FStack_12128.SelectedBackgroundColor.SpecifiedColor.field0_0x0._0_8_;
  FStack_11318.SelectedBackgroundColor.SpecifiedColor.field0_0x0._8_8_ =
       FStack_12128.SelectedBackgroundColor.SpecifiedColor.field0_0x0._8_8_;
  FStack_11318.HighlightColor.SpecifiedColor.field0_0x0._0_8_ =
       FStack_12128.HighlightColor.SpecifiedColor.field0_0x0._0_8_;
  FStack_11318.HighlightColor.SpecifiedColor.field0_0x0._8_8_ =
       FStack_12128.HighlightColor.SpecifiedColor.field0_0x0._8_8_;
  FSlateBrush::FSlateBrush(&FStack_11318.HighlightShape,&FStack_12128.HighlightShape);
  FSlateBrush::FSlateBrush(&FStack_11318.StrikeBrush,&FStack_12128.StrikeBrush);
  FSlateBrush::FSlateBrush(&FStack_11318.UnderlineBrush,&FStack_12128.UnderlineBrush);
  FStack_11318.TransformPolicy = FStack_12128.TransformPolicy;
  FStack_11318.OverflowPolicy = FStack_12128.OverflowPolicy;
  FSlateFontInfo::operator=(&FStack_11318.Font,&pFVar19->Small);
  FTextBlockStyle::FTextBlockStyle(&local_f788,&FStack_11318);
  FStack_11318._0_8_ = &___7FTextBlockStyle__6B_;
  FStack_11318.UnderlineBrush._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_11318.UnderlineBrush.ResourceHandle.Data.SharedReferenceCount.
             ReferenceController);
  FStack_11318.StrikeBrush._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_11318.StrikeBrush.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  FStack_11318.HighlightShape._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_11318.HighlightShape.ResourceHandle.Data.SharedReferenceCount.
             ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_11318.Font.CompositeFont.SharedReferenceCount.ReferenceController);
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)&FStack_11318);
  FStack_11038._0_8_ = &___7FTextBlockStyle__6B_;
  FSlateFontInfo::FSlateFontInfo(&FStack_11038.Font,&local_f788.Font);
  FStack_11038.ColorAndOpacity.ColorUseRule = local_f788.ColorAndOpacity.ColorUseRule;
  FStack_11038.ColorAndOpacity.ColorTableId = local_f788.ColorAndOpacity.ColorTableId;
  FStack_11038.ColorAndOpacity._18_2_ = local_f788.ColorAndOpacity._18_2_;
  FStack_11038.ColorAndOpacity.SpecifiedColor.field0_0x0._0_8_ =
       local_f788.ColorAndOpacity.SpecifiedColor.field0_0x0._0_8_;
  FStack_11038.ColorAndOpacity.SpecifiedColor.field0_0x0._8_8_ =
       local_f788.ColorAndOpacity.SpecifiedColor.field0_0x0._8_8_;
  FStack_11038.ShadowOffset = local_f788.ShadowOffset;
  FStack_11038.SelectedBackgroundColor.SpecifiedColor.field0_0x0._0_8_ =
       local_f788.SelectedBackgroundColor.SpecifiedColor.field0_0x0._0_8_;
  FStack_11038.SelectedBackgroundColor.SpecifiedColor.field0_0x0._8_8_ =
       local_f788.SelectedBackgroundColor.SpecifiedColor.field0_0x0._8_8_;
  FStack_11038.SelectedBackgroundColor.ColorUseRule =
       local_f788.SelectedBackgroundColor.ColorUseRule;
  FStack_11038.SelectedBackgroundColor.ColorTableId =
       local_f788.SelectedBackgroundColor.ColorTableId;
  FStack_11038.SelectedBackgroundColor._18_2_ = local_f788.SelectedBackgroundColor._18_2_;
  FStack_11038.ShadowColorAndOpacity.field0_0x0._0_8_ =
       local_f788.ShadowColorAndOpacity.field0_0x0._0_8_;
  FStack_11038.ShadowColorAndOpacity.field0_0x0._8_8_ =
       local_f788.ShadowColorAndOpacity.field0_0x0._8_8_;
  FStack_11038.HighlightColor.SpecifiedColor.field0_0x0._0_8_ =
       local_f788.HighlightColor.SpecifiedColor.field0_0x0._0_8_;
  FStack_11038.HighlightColor.SpecifiedColor.field0_0x0._8_8_ =
       local_f788.HighlightColor.SpecifiedColor.field0_0x0._8_8_;
  FStack_11038.HighlightColor.ColorUseRule = local_f788.HighlightColor.ColorUseRule;
  FStack_11038.HighlightColor.ColorTableId = local_f788.HighlightColor.ColorTableId;
  FStack_11038.HighlightColor._18_2_ = local_f788.HighlightColor._18_2_;
  FSlateBrush::FSlateBrush(&FStack_11038.HighlightShape,&local_f788.HighlightShape);
  FSlateBrush::FSlateBrush(&FStack_11038.StrikeBrush,&local_f788.StrikeBrush);
  FSlateBrush::FSlateBrush(&FStack_11038.UnderlineBrush,&local_f788.UnderlineBrush);
  FStack_11038.TransformPolicy = local_f788.TransformPolicy;
  FStack_11038.OverflowPolicy = local_f788.OverflowPolicy;
  FSlateBrush::operator=(&FStack_11038.UnderlineBrush,pFVar22);
  FTextBlockStyle::FTextBlockStyle(&local_baa8,&FStack_11038);
  FStack_11038._0_8_ = &___7FTextBlockStyle__6B_;
  FStack_11038.UnderlineBrush._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_11038.UnderlineBrush.ResourceHandle.Data.SharedReferenceCount.
             ReferenceController);
  FStack_11038.StrikeBrush._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_11038.StrikeBrush.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  FStack_11038.HighlightShape._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_11038.HighlightShape.ResourceHandle.Data.SharedReferenceCount.
             ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_11038.Font.CompositeFont.SharedReferenceCount.ReferenceController);
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)&FStack_11038);
  FStack_10d58._0_8_ = &___7FTextBlockStyle__6B_;
  FSlateFontInfo::FSlateFontInfo(&FStack_10d58.Font,&FStack_12128.Font);
  FStack_10d58.ColorAndOpacity.ColorUseRule = FStack_12128.ColorAndOpacity.ColorUseRule;
  FStack_10d58.ColorAndOpacity.ColorTableId = FStack_12128.ColorAndOpacity.ColorTableId;
  FStack_10d58.ColorAndOpacity._18_2_ = FStack_12128.ColorAndOpacity._18_2_;
  FStack_10d58.ColorAndOpacity.SpecifiedColor.field0_0x0._0_8_ =
       FStack_12128.ColorAndOpacity.SpecifiedColor.field0_0x0._0_8_;
  FStack_10d58.ColorAndOpacity.SpecifiedColor.field0_0x0._8_8_ =
       FStack_12128.ColorAndOpacity.SpecifiedColor.field0_0x0._8_8_;
  FStack_10d58.ShadowOffset = FStack_12128.ShadowOffset;
  FStack_10d58.SelectedBackgroundColor.ColorUseRule =
       FStack_12128.SelectedBackgroundColor.ColorUseRule;
  FStack_10d58.SelectedBackgroundColor.ColorTableId =
       FStack_12128.SelectedBackgroundColor.ColorTableId;
  FStack_10d58.SelectedBackgroundColor._18_2_ = FStack_12128.SelectedBackgroundColor._18_2_;
  FStack_10d58.ShadowColorAndOpacity.field0_0x0._0_8_ =
       FStack_12128.ShadowColorAndOpacity.field0_0x0._0_8_;
  FStack_10d58.ShadowColorAndOpacity.field0_0x0._8_8_ =
       FStack_12128.ShadowColorAndOpacity.field0_0x0._8_8_;
  FStack_10d58.HighlightColor.ColorUseRule = FStack_12128.HighlightColor.ColorUseRule;
  FStack_10d58.HighlightColor.ColorTableId = FStack_12128.HighlightColor.ColorTableId;
  FStack_10d58.HighlightColor._18_2_ = FStack_12128.HighlightColor._18_2_;
  FStack_10d58.SelectedBackgroundColor.SpecifiedColor.field0_0x0._0_8_ =
       FStack_12128.SelectedBackgroundColor.SpecifiedColor.field0_0x0._0_8_;
  FStack_10d58.SelectedBackgroundColor.SpecifiedColor.field0_0x0._8_8_ =
       FStack_12128.SelectedBackgroundColor.SpecifiedColor.field0_0x0._8_8_;
  FStack_10d58.HighlightColor.SpecifiedColor.field0_0x0._0_8_ =
       FStack_12128.HighlightColor.SpecifiedColor.field0_0x0._0_8_;
  FStack_10d58.HighlightColor.SpecifiedColor.field0_0x0._8_8_ =
       FStack_12128.HighlightColor.SpecifiedColor.field0_0x0._8_8_;
  FSlateBrush::FSlateBrush(&FStack_10d58.HighlightShape,&FStack_12128.HighlightShape);
  FSlateBrush::FSlateBrush(&FStack_10d58.StrikeBrush,&FStack_12128.StrikeBrush);
  FSlateBrush::FSlateBrush(&FStack_10d58.UnderlineBrush,&FStack_12128.UnderlineBrush);
  FStack_10d58.TransformPolicy = FStack_12128.TransformPolicy;
  FStack_10d58.OverflowPolicy = FStack_12128.OverflowPolicy;
  FSlateFontInfo::operator=(&FStack_10d58.Font,&pFVar19->Large);
  FTextBlockStyle::FTextBlockStyle(&local_fa68,&FStack_10d58);
  FStack_10d58.UnderlineBrush._padding_ = (longlong)&___7FSlateBrush__6B_;
  FStack_10d58._0_8_ = &___7FTextBlockStyle__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_10d58.UnderlineBrush.ResourceHandle.Data.SharedReferenceCount.
             ReferenceController);
  FStack_10d58.StrikeBrush._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_10d58.StrikeBrush.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  FStack_10d58.HighlightShape._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_10d58.HighlightShape.ResourceHandle.Data.SharedReferenceCount.
             ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_10d58.Font.CompositeFont.SharedReferenceCount.ReferenceController);
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)&FStack_10d58);
  FStack_10a78._0_8_ = &___7FTextBlockStyle__6B_;
  FSlateFontInfo::FSlateFontInfo(&FStack_10a78.Font,&local_fa68.Font);
  FStack_10a78.ColorAndOpacity.ColorUseRule = local_fa68.ColorAndOpacity.ColorUseRule;
  FStack_10a78.ColorAndOpacity.ColorTableId = local_fa68.ColorAndOpacity.ColorTableId;
  FStack_10a78.ColorAndOpacity._18_2_ = local_fa68.ColorAndOpacity._18_2_;
  FStack_10a78.ColorAndOpacity.SpecifiedColor.field0_0x0._0_8_ =
       local_fa68.ColorAndOpacity.SpecifiedColor.field0_0x0._0_8_;
  FStack_10a78.ColorAndOpacity.SpecifiedColor.field0_0x0._8_8_ =
       local_fa68.ColorAndOpacity.SpecifiedColor.field0_0x0._8_8_;
  FStack_10a78.ShadowOffset = local_fa68.ShadowOffset;
  FStack_10a78.SelectedBackgroundColor.ColorUseRule =
       local_fa68.SelectedBackgroundColor.ColorUseRule;
  FStack_10a78.SelectedBackgroundColor.ColorTableId =
       local_fa68.SelectedBackgroundColor.ColorTableId;
  FStack_10a78.SelectedBackgroundColor._18_2_ = local_fa68.SelectedBackgroundColor._18_2_;
  FStack_10a78.ShadowColorAndOpacity.field0_0x0._0_8_ =
       local_fa68.ShadowColorAndOpacity.field0_0x0._0_8_;
  FStack_10a78.ShadowColorAndOpacity.field0_0x0._8_8_ =
       local_fa68.ShadowColorAndOpacity.field0_0x0._8_8_;
  FStack_10a78.HighlightColor.ColorUseRule = local_fa68.HighlightColor.ColorUseRule;
  FStack_10a78.HighlightColor.ColorTableId = local_fa68.HighlightColor.ColorTableId;
  FStack_10a78.HighlightColor._18_2_ = local_fa68.HighlightColor._18_2_;
  FStack_10a78.SelectedBackgroundColor.SpecifiedColor.field0_0x0._0_8_ =
       local_fa68.SelectedBackgroundColor.SpecifiedColor.field0_0x0._0_8_;
  FStack_10a78.SelectedBackgroundColor.SpecifiedColor.field0_0x0._8_8_ =
       local_fa68.SelectedBackgroundColor.SpecifiedColor.field0_0x0._8_8_;
  FStack_10a78.HighlightColor.SpecifiedColor.field0_0x0._0_8_ =
       local_fa68.HighlightColor.SpecifiedColor.field0_0x0._0_8_;
  FStack_10a78.HighlightColor.SpecifiedColor.field0_0x0._8_8_ =
       local_fa68.HighlightColor.SpecifiedColor.field0_0x0._8_8_;
  FSlateBrush::FSlateBrush(&FStack_10a78.HighlightShape,&local_fa68.HighlightShape);
  FSlateBrush::FSlateBrush(&FStack_10a78.StrikeBrush,&local_fa68.StrikeBrush);
  FSlateBrush::FSlateBrush(&FStack_10a78.UnderlineBrush,&local_fa68.UnderlineBrush);
  FStack_10a78.TransformPolicy = local_fa68.TransformPolicy;
  FStack_10a78.OverflowPolicy = local_fa68.OverflowPolicy;
  FSlateBrush::operator=(&FStack_10a78.UnderlineBrush,pFVar22);
  FTextBlockStyle::FTextBlockStyle(&local_b4e8,&FStack_10a78);
  FStack_10a78._0_8_ = &___7FTextBlockStyle__6B_;
  FStack_10a78.UnderlineBrush._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_10a78.UnderlineBrush.ResourceHandle.Data.SharedReferenceCount.
             ReferenceController);
  FStack_10a78.StrikeBrush._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_10a78.StrikeBrush.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  FStack_10a78.HighlightShape._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_10a78.HighlightShape.ResourceHandle.Data.SharedReferenceCount.
             ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_10a78.Font.CompositeFont.SharedReferenceCount.ReferenceController);
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)&FStack_10a78);
  pFVar1 = param_1->Object;
  FStack_11bb8._0_8_ = &___7FTextBlockStyle__6B_;
  FSlateFontInfo::FSlateFontInfo(&FStack_11bb8.Font,&FStack_12128.Font);
  FStack_11bb8.ColorAndOpacity.ColorUseRule = FStack_12128.ColorAndOpacity.ColorUseRule;
  FStack_11bb8.ColorAndOpacity.ColorTableId = FStack_12128.ColorAndOpacity.ColorTableId;
  FStack_11bb8.ColorAndOpacity._18_2_ = FStack_12128.ColorAndOpacity._18_2_;
  FStack_11bb8.ShadowOffset._0_4_ = FStack_12128.ShadowOffset._0_4_;
  FStack_11bb8.ShadowOffset._4_4_ = FStack_12128.ShadowOffset._4_4_;
  FStack_11bb8.SelectedBackgroundColor.SpecifiedColor.field0_0x0._0_8_ =
       FStack_12128.SelectedBackgroundColor.SpecifiedColor.field0_0x0._0_8_;
  FStack_11bb8.SelectedBackgroundColor.SpecifiedColor.field0_0x0._8_8_ =
       FStack_12128.SelectedBackgroundColor.SpecifiedColor.field0_0x0._8_8_;
  FStack_11bb8.SelectedBackgroundColor.ColorUseRule =
       FStack_12128.SelectedBackgroundColor.ColorUseRule;
  FStack_11bb8.SelectedBackgroundColor.ColorTableId =
       FStack_12128.SelectedBackgroundColor.ColorTableId;
  FStack_11bb8.SelectedBackgroundColor._18_2_ = FStack_12128.SelectedBackgroundColor._18_2_;
  FStack_11bb8.ShadowColorAndOpacity.field0_0x0._s_0.R =
       (float)FStack_12128.ShadowColorAndOpacity.field0_0x0._0_8_;
  FStack_11bb8.ShadowColorAndOpacity.field0_0x0._s_0.G =
       (float)((ulonglong)FStack_12128.ShadowColorAndOpacity.field0_0x0._0_8_ >> 0x20);
  FStack_11bb8.ShadowColorAndOpacity.field0_0x0._s_0.B =
       (float)FStack_12128.ShadowColorAndOpacity.field0_0x0._8_8_;
  FStack_11bb8.ShadowColorAndOpacity.field0_0x0._s_0.A =
       (float)((ulonglong)FStack_12128.ShadowColorAndOpacity.field0_0x0._8_8_ >> 0x20);
  FStack_11bb8.HighlightColor.ColorUseRule = FStack_12128.HighlightColor.ColorUseRule;
  FStack_11bb8.HighlightColor.ColorTableId = FStack_12128.HighlightColor.ColorTableId;
  FStack_11bb8.HighlightColor._18_2_ = FStack_12128.HighlightColor._18_2_;
  FStack_11bb8.HighlightColor.SpecifiedColor.field0_0x0._0_8_ =
       FStack_12128.HighlightColor.SpecifiedColor.field0_0x0._0_8_;
  FStack_11bb8.HighlightColor.SpecifiedColor.field0_0x0._8_8_ =
       FStack_12128.HighlightColor.SpecifiedColor.field0_0x0._8_8_;
  FSlateBrush::FSlateBrush(&FStack_11bb8.HighlightShape,&FStack_12128.HighlightShape);
  FSlateBrush::FSlateBrush(&FStack_11bb8.StrikeBrush,&FStack_12128.StrikeBrush);
  FSlateBrush::FSlateBrush(&FStack_11bb8.UnderlineBrush,&FStack_12128.UnderlineBrush);
  FStack_11bb8.TransformPolicy = FStack_12128.TransformPolicy;
  FStack_11bb8.OverflowPolicy = FStack_12128.OverflowPolicy;
  FStack_12590.OutlineSize = 0;
  FStack_12590.bMiteredCorners = false;
  FStack_12590.bSeparateFillAlpha = false;
  FStack_12590.bApplyOutlineToDropShadows = false;
  FStack_12590.OutlineMaterial.field0_0x0.DebugPtr = (TObjectPtr<UObject>_u_0)0x0;
  FStack_12590.OutlineColor.field0_0x0._s_0 = FLinearColor::Black.field0_0x0;
  pFVar17 = ::FName::FName(&FStack_12488,"Regular");
  FStack_12630 = *pFVar17;
  pFVar23 = FLegacySlateFontInfoCache::Get();
  FLegacySlateFontInfoCache::GetDefaultFont(pFVar23,aTStack_12518);
  TStack_12378.Object = aTStack_12518[0].Object;
  TStack_12378.SharedReferenceCount.ReferenceController =
       aTStack_12518[0].SharedReferenceCount.ReferenceController;
  if (aTStack_12518[0].SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (aTStack_12518[0].SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(aTStack_12518[0].SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1
         );
    UNLOCK();
  }
  FSlateFontInfo::FSlateFontInfo
            (&FStack_10458,&TStack_12378,__real_41c00000,&FStack_12630,&FStack_12590);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (aTStack_12518[0].SharedReferenceCount.ReferenceController);
  FSlateFontInfo::operator=(&FStack_11bb8.Font,&FStack_10458);
  uStack_12648 = uVar2 << 8;
  FStack_11bb8.ColorAndOpacity.SpecifiedColor.field0_0x0._s_0 = FLinearColor::Black.field0_0x0;
  FStack_11bb8.ColorAndOpacity.ColorUseRule = (undefined1)uStack_12648;
  FStack_11bb8.ColorAndOpacity.ColorTableId = uStack_12648._1_1_;
  FStack_11bb8.ColorAndOpacity._18_2_ = uStack_12648._2_2_;
  FStack_11bb8.ShadowOffset._0_4_ = 0;
  FStack_11bb8.ShadowOffset._4_4_ = SUB84(___xmm_3f4ccccd3f4ccccd3f4ccccd3f800000,0);
  FStack_11bb8.ShadowColorAndOpacity.field0_0x0._s_0.R =
       (float)((ulonglong)___xmm_3f4ccccd3f4ccccd3f4ccccd3f800000 >> 0x20);
  FStack_11bb8.ShadowColorAndOpacity.field0_0x0._s_0.G = (float)_UNK_150925268;
  FStack_11bb8.ShadowColorAndOpacity.field0_0x0._s_0.B = (float)((ulonglong)_UNK_150925268 >> 0x20);
  FStack_11bb8.ShadowColorAndOpacity.field0_0x0._s_0.A = 0.5;
  pFVar17 = ::FName::FName(&FStack_12480,"EmbossedText");
  FSlateStyleSet::Set<FTextBlockStyle>((FSlateStyleSet *)pFVar1,*pFVar17,&FStack_11bb8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_10458.CompositeFont.SharedReferenceCount.ReferenceController);
  FStack_11bb8._0_8_ = &___7FTextBlockStyle__6B_;
  FStack_11bb8.UnderlineBrush._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_11bb8.UnderlineBrush.ResourceHandle.Data.SharedReferenceCount.
             ReferenceController);
  FStack_11bb8.StrikeBrush._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_11bb8.StrikeBrush.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  FStack_11bb8.HighlightShape._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_11bb8.HighlightShape.ResourceHandle.Data.SharedReferenceCount.
             ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_11bb8.Font.CompositeFont.SharedReferenceCount.ReferenceController);
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)&FStack_11bb8);
  pFVar25 = FEditableTextBoxStyle::FEditableTextBoxStyle(&local_a588);
  FTextBlockStyle::operator=(&pFVar25->TextStyle,&FStack_12128);
  FStack_12368._0_8_ = uVar6;
  FStack_12368._8_8_ = uVar7;
  FStack_12358.Left = ___xmm_3e8000003e8000003e8000003e800000;
  FStack_12358.Top = _UNK_15076b0c4;
  FStack_12358.Right = _UNK_15076b0c8;
  FStack_12358.Bottom = _UNK_15076b0cc;
  pFVar21 = (FString *)
            (**(code **)(param_1->Object->_padding_ + 0xf0))
                      (param_1->Object,apvStack_122b8,"Common/TextBox_Dark",L".png");
  pFVar22 = (FSlateBrush *)
            FSlateBoxBrush::FSlateBoxBrush
                      ((FSlateBoxBrush *)local_f128,pFVar21,&FStack_12358,
                       (FLinearColor *)&FStack_12368._s_0,FullColor);
  FSlateBrush::operator=(&pFVar25->BackgroundImageNormal,pFVar22);
  FStack_12348._0_8_ = uVar6;
  FStack_12348._8_8_ = uVar7;
  FStack_12338.Left = ___xmm_3e8000003e8000003e8000003e800000;
  FStack_12338.Top = _UNK_15076b0c4;
  FStack_12338.Right = _UNK_15076b0c8;
  FStack_12338.Bottom = _UNK_15076b0cc;
  pFVar21 = (FString *)
            (**(code **)(param_1->Object->_padding_ + 0xf0))
                      (param_1->Object,apvStack_122c8,"Common/TextBox_Hovered_Dark",L".png");
  pFVar22 = (FSlateBrush *)
            FSlateBoxBrush::FSlateBoxBrush
                      ((FSlateBoxBrush *)local_f1d8,pFVar21,&FStack_12338,
                       (FLinearColor *)&FStack_12348._s_0,FullColor);
  FSlateBrush::operator=(&pFVar25->BackgroundImageHovered,pFVar22);
  FStack_12328._0_8_ = uVar6;
  FStack_12328._8_8_ = uVar7;
  FStack_12318.Left = ___xmm_3e8000003e8000003e8000003e800000;
  FStack_12318.Top = _UNK_15076b0c4;
  FStack_12318.Right = _UNK_15076b0c8;
  FStack_12318.Bottom = _UNK_15076b0cc;
  pFVar21 = (FString *)
            (**(code **)(param_1->Object->_padding_ + 0xf0))
                      (param_1->Object,apvStack_122d8,"Common/TextBox_Hovered_Dark",L".png");
  pFVar22 = (FSlateBrush *)
            FSlateBoxBrush::FSlateBoxBrush
                      ((FSlateBoxBrush *)local_f288,pFVar21,&FStack_12318,
                       (FLinearColor *)&FStack_12328._s_0,FullColor);
  FSlateBrush::operator=(&pFVar25->BackgroundImageFocused,pFVar22);
  FStack_12308._0_8_ = uVar6;
  FStack_12308._8_8_ = uVar7;
  FStack_122f8.Left = ___xmm_3e8000003e8000003e8000003e800000;
  FStack_122f8.Top = _UNK_15076b0c4;
  FStack_122f8.Right = _UNK_15076b0c8;
  FStack_122f8.Bottom = _UNK_15076b0cc;
  pFVar21 = (FString *)
            (**(code **)(param_1->Object->_padding_ + 0xf0))
                      (param_1->Object,apvStack_122e8,"Common/TextBox_ReadOnly",L".png");
  pFVar22 = (FSlateBrush *)
            FSlateBoxBrush::FSlateBoxBrush
                      ((FSlateBoxBrush *)local_f338,pFVar21,&FStack_122f8,
                       (FLinearColor *)&FStack_12308._s_0,FullColor);
  FSlateBrush::operator=(&pFVar25->BackgroundImageReadOnly,pFVar22);
  FScrollBarStyle::operator=(&pFVar25->ScrollBarStyle,pFVar18);
  FEditableTextBoxStyle::FEditableTextBoxStyle(&local_d08,pFVar25);
  local_f338[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_f298);
  if (apvStack_122e8[0] != (void *)0x0) {
    FMemory::Free(apvStack_122e8[0]);
  }
  local_f288[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_f1e8);
  if (apvStack_122d8[0] != (void *)0x0) {
    FMemory::Free(apvStack_122d8[0]);
  }
  local_f1d8[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_f138);
  if (apvStack_122c8[0] != (void *)0x0) {
    FMemory::Free(apvStack_122c8[0]);
  }
  local_f128[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_f088);
  if (apvStack_122b8[0] != (void *)0x0) {
    FMemory::Free(apvStack_122b8[0]);
  }
  local_a588._padding_ = (longlong)&___7FEditableTextBoxStyle__6B_;
  FScrollBarStyle::~FScrollBarStyle(&local_a588.ScrollBarStyle);
  FTextBlockStyle::~FTextBlockStyle(&local_a588.TextStyle);
  local_a588.BackgroundImageReadOnly._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_a588.BackgroundImageReadOnly.ResourceHandle.Data.SharedReferenceCount.
             ReferenceController);
  local_a588.BackgroundImageFocused._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_a588.BackgroundImageFocused.ResourceHandle.Data.SharedReferenceCount.
             ReferenceController);
  local_a588.BackgroundImageHovered._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_a588.BackgroundImageHovered.ResourceHandle.Data.SharedReferenceCount.
             ReferenceController);
  local_a588.BackgroundImageNormal._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_a588.BackgroundImageNormal.ResourceHandle.Data.SharedReferenceCount.
             ReferenceController);
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)&local_a588);
  pFVar1 = param_1->Object;
  pFVar17 = ::FName::FName(&FStack_12478,"DarkEditableTextBox");
  FSlateStyleSet::Set<FEditableTextBoxStyle>((FSlateStyleSet *)pFVar1,*pFVar17,&local_d08);
  pFVar1 = param_1->Object;
  pFVar17 = ::FName::FName(&FStack_12470,"NormalText");
  FSlateStyleSet::Set<FTextBlockStyle>((FSlateStyleSet *)pFVar1,*pFVar17,&FStack_12128);
  pFVar1 = param_1->Object;
  pFVar17 = ::FName::FName(&FStack_12468,"NormalUnderlinedText");
  FSlateStyleSet::Set<FTextBlockStyle>((FSlateStyleSet *)pFVar1,*pFVar17,&local_e8e8);
  pFVar1 = param_1->Object;
  pFVar17 = ::FName::FName(&FStack_12460,"SmallText");
  FSlateStyleSet::Set<FTextBlockStyle>((FSlateStyleSet *)pFVar1,*pFVar17,&local_f788);
  pFVar1 = param_1->Object;
  pFVar17 = ::FName::FName(&FStack_12458,"SmallUnderlinedText");
  FSlateStyleSet::Set<FTextBlockStyle>((FSlateStyleSet *)pFVar1,*pFVar17,&local_baa8);
  pFVar1 = param_1->Object;
  pFVar17 = ::FName::FName(&FStack_12450,"Text.Large");
  FSlateStyleSet::Set<FTextBlockStyle>((FSlateStyleSet *)pFVar1,*pFVar17,&local_fa68);
  pFVar1 = param_1->Object;
  pFVar17 = ::FName::FName(&FStack_12448,"Text.Large.Underlined");
  FSlateStyleSet::Set<FTextBlockStyle>((FSlateStyleSet *)pFVar1,*pFVar17,&local_b4e8);
  this_00 = ::operator_new(0xb0);
  pFVar22 = (FSlateBrush *)0x0;
  pFVar24 = pFVar22;
  if (this_00 != (FSlateBrush *)0x0) {
    TStack_12628 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
    FStack_122a8.Left = 0.0;
    FStack_122a8.Top = 0.0;
    FStack_122a8.Right = 0.0;
    FStack_122a8.Bottom = 0.0;
    FSlateBrush::FSlateBrush
              (this_00,Image,(FName)0x0,&FStack_122a8,NoTile,NoImage,
               (FDeprecateVector2DParameter *)&TStack_12628._s_0,&FStyleColors::Highlight,
               (UObject *)0x0,false);
    this_00->_padding_ = (longlong)&___7FSlateColorBrush__6B_;
    pFVar24 = this_00;
  }
  this_01 = ::operator_new(0xb0);
  if (this_01 == (FSlateBoxBrush *)0x0) {
    local_res8 = (FSlateBrush *)0x0;
  }
  else {
    FStack_12298._0_8_ = ___xmm_3f400000000000000000000000000000;
    FStack_12298._8_8_ = _UNK_150925258;
    FStack_12288.Left = ___xmm_3e4000003e4000003e4000003e400000;
    FStack_12288.Top = _UNK_150925134;
    FStack_12288.Right = _UNK_150925138;
    FStack_12288.Bottom = _UNK_15092513c;
    pFVar21 = (FString *)
              (**(code **)(param_1->Object->_padding_ + 0xf0))
                        (param_1->Object,apvStack_12278,"Old/DashedBorder",L".png");
    local_res8 = (FSlateBrush *)
                 FSlateBoxBrush::FSlateBoxBrush
                           (this_01,pFVar21,&FStack_12288,(FLinearColor *)&FStack_12298._s_0,
                            FullColor);
    if (apvStack_12278[0] != (void *)0x0) {
      FMemory::Free(apvStack_12278[0]);
    }
  }
  this_02 = ::operator_new(0xb0);
  if (this_02 != (FSlateBorderBrush *)0x0) {
    FStack_12268._0_8_ = uVar6;
    FStack_12268._8_8_ = uVar7;
    FStack_12258.Left = ___xmm_3e400000000000000000000000000000;
    FStack_12258.Top = _UNK_150925124;
    FStack_12258.Right = _UNK_150925128;
    FStack_12258.Bottom = _UNK_15092512c;
    pFVar21 = (FString *)
              (**(code **)(param_1->Object->_padding_ + 0xf0))
                        (param_1->Object,apvStack_12248,"Old/HyperlinkDotted",L".png");
    pFVar22 = (FSlateBrush *)
              FSlateBorderBrush::FSlateBorderBrush
                        (this_02,pFVar21,&FStack_12258,(FLinearColor *)&FStack_12268._s_0,FullColor)
    ;
    if (apvStack_12248[0] != (void *)0x0) {
      FMemory::Free(apvStack_12248[0]);
    }
  }
  FSlateWidgetStyle::FSlateWidgetStyle(&FStack_11e48);
  FStack_11e48 = (FSlateWidgetStyle)&___7FEditableTextStyle__6B_;
  FStyleDefaults::GetFontInfo(&FStack_11e40,9);
  fVar3 = __real_3f800000;
  uStack_11de0 = 0x3f800000;
  uStack_11dd8 = 0x3f800000;
  uStack_11dd4 = 0x3f800000;
  uStack_11dd0._0_1_ = UseColor_Foreground;
  uStack_11dd0._1_1_ = Black;
  FSlateBrush::FSlateBrush(&FStack_11dc8);
  FSlateBrush::FSlateBrush(&FStack_11d18);
  FSlateBrush::FSlateBrush(&FStack_11c68);
  FSlateBrush::operator=(&FStack_11dc8,pFVar24);
  FSlateBrush::operator=(&FStack_11d18,pFVar22);
  TStack_12620 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  FStack_12238.Left = 0.0;
  FStack_12238.Top = 0.0;
  FStack_12238.Right = 0.0;
  FStack_12238.Bottom = 0.0;
  FSlateBrush::FSlateBrush
            (&FStack_101e8,Image,(FName)0x0,&FStack_12238,NoTile,NoImage,
             (FDeprecateVector2DParameter *)&TStack_12620._s_0,&FStyleColors::White,(UObject *)0x0,
             false);
  FStack_101e8._padding_ = (longlong)&___7FSlateColorBrush__6B_;
  FSlateBrush::operator=(&FStack_11c68,&FStack_101e8);
  local_ffd8._padding_ = (longlong)&___7FEditableTextStyle__6B_;
  FSlateFontInfo::FSlateFontInfo(&local_ffd8.Font,&FStack_11e40);
  local_ffd8.ColorAndOpacity.SpecifiedColor.field0_0x0._8_8_ = CONCAT44(uStack_11dd4,uStack_11dd8);
  local_ffd8.ColorAndOpacity.ColorUseRule = (ESlateColorStylingMode)uStack_11dd0;
  local_ffd8.ColorAndOpacity.ColorTableId = uStack_11dd0._1_1_;
  local_ffd8.ColorAndOpacity._18_2_ = uStack_11dce;
  local_ffd8.ColorAndOpacity.SpecifiedColor.field0_0x0._0_8_ = uStack_11de0;
  FSlateBrush::FSlateBrush(&local_ffd8.BackgroundImageSelected,&FStack_11dc8);
  FSlateBrush::FSlateBrush(&local_ffd8.BackgroundImageComposing,&FStack_11d18);
  FSlateBrush::FSlateBrush(&local_ffd8.CaretImage,&FStack_11c68);
  FStack_101e8._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_101e8.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  FStack_11e48 = (FSlateWidgetStyle)&___7FEditableTextStyle__6B_;
  FStack_11c68._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_11c68.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  FStack_11d18._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_11d18.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  FStack_11dc8._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_11dc8.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_11e40.CompositeFont.SharedReferenceCount.ReferenceController);
  FSlateWidgetStyle::~FSlateWidgetStyle(&FStack_11e48);
  pFVar1 = param_1->Object;
  pFVar17 = ::FName::FName(&FStack_12440,"NormalEditableText");
  FSlateStyleSet::Set<FEditableTextStyle>((FSlateStyleSet *)pFVar1,*pFVar17,&local_ffd8);
  pFVar1 = param_1->Object;
  pFVar17 = ::FName::FName(&FStack_12438,"EditableText.SelectionBackground");
  FSlateStyleSet::Set<FSlateBrush>((FSlateStyleSet *)pFVar1,*pFVar17,pFVar24);
  pFVar1 = param_1->Object;
  pFVar17 = ::FName::FName(&FStack_12430,"EditableText.SelectionTarget");
  FSlateStyleSet::Set<FSlateBrush>((FSlateStyleSet *)pFVar1,*pFVar17,local_res8);
  pFVar1 = param_1->Object;
  pFVar17 = ::FName::FName(&FStack_12428,"EditableText.CompositionBackground");
  FSlateStyleSet::Set<FSlateBrush>((FSlateStyleSet *)pFVar1,*pFVar17,pFVar22);
  local_ffd8.CaretImage._padding_ = (longlong)&___7FSlateBrush__6B_;
  local_ffd8._padding_ = (longlong)&___7FEditableTextStyle__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_ffd8.CaretImage.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  local_ffd8.BackgroundImageComposing._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_ffd8.BackgroundImageComposing.ResourceHandle.Data.SharedReferenceCount.
             ReferenceController);
  local_ffd8.BackgroundImageSelected._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_ffd8.BackgroundImageSelected.ResourceHandle.Data.SharedReferenceCount.
             ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_ffd8.Font.CompositeFont.SharedReferenceCount.ReferenceController);
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)&local_ffd8);
  pFVar25 = FEditableTextBoxStyle::FEditableTextBoxStyle(&local_9908);
  FTextBlockStyle::operator=(&pFVar25->TextStyle,&FStack_12128);
  fVar4 = __real_40800000;
  TStack_12618 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  pFVar22 = (FSlateBrush *)
            FSlateRoundedBoxBrush::FSlateRoundedBoxBrush<FSlateColor,FSlateColor,float>
                      ((FSlateRoundedBoxBrush *)local_ee68,&FStyleColors::Input,__real_40800000,
                       &FStyleColors::InputOutline,fVar3,
                       (FDeprecateVector2DParameter *)&TStack_12618._s_0);
  FSlateBrush::operator=(&pFVar25->BackgroundImageNormal,pFVar22);
  TStack_12610 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  pFVar22 = (FSlateBrush *)
            FSlateRoundedBoxBrush::FSlateRoundedBoxBrush<FSlateColor,FSlateColor,float>
                      ((FSlateRoundedBoxBrush *)local_ef18,&FStyleColors::Input,fVar4,
                       &FStyleColors::Hover,fVar3,(FDeprecateVector2DParameter *)&TStack_12610._s_0)
  ;
  FSlateBrush::operator=(&pFVar25->BackgroundImageHovered,pFVar22);
  TStack_12608 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  pFVar22 = (FSlateBrush *)
            FSlateRoundedBoxBrush::FSlateRoundedBoxBrush<FSlateColor,FSlateColor,float>
                      ((FSlateRoundedBoxBrush *)local_efc8,&FStyleColors::Input,fVar4,
                       &FStyleColors::Primary,fVar3,
                       (FDeprecateVector2DParameter *)&TStack_12608._s_0);
  FSlateBrush::operator=(&pFVar25->BackgroundImageFocused,pFVar22);
  TStack_12600 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  pFVar22 = (FSlateBrush *)
            FSlateRoundedBoxBrush::FSlateRoundedBoxBrush<FSlateColor,FSlateColor,float>
                      ((FSlateRoundedBoxBrush *)local_f078,&FStyleColors::Header,fVar4,
                       &FStyleColors::InputOutline,fVar3,
                       (FDeprecateVector2DParameter *)&TStack_12600._s_0);
  FSlateBrush::operator=(&pFVar25->BackgroundImageReadOnly,pFVar22);
  FSlateFontInfo::operator=(&(pFVar25->TextStyle).Font,&pFVar19->Normal);
  (pFVar25->Padding).Left = 8.0;
  (pFVar25->Padding).Top = 3.0;
  (pFVar25->Padding).Right = 8.0;
  (pFVar25->Padding).Bottom = 4.0;
  uStack_124d0 = CONCAT22(uStack_124d0._2_2_,2);
  uVar15 = uStack_124d0;
  (pFVar25->ForegroundColor).SpecifiedColor.field0_0x0._s_0 =
       (FLinearColor_u_0_s_0)FStyleColors::Foreground.SpecifiedColor.field0_0x0;
  EVar12 = FStyleColors::Foreground.ColorTableId;
  uVar13 = FStyleColors::Foreground._18_2_;
  (pFVar25->ForegroundColor).ColorUseRule = FStyleColors::Foreground.ColorUseRule;
  (pFVar25->ForegroundColor).ColorTableId = EVar12;
  *(undefined2 *)&(pFVar25->ForegroundColor).field_0x12 = uVar13;
  (pFVar25->BackgroundColor).SpecifiedColor.field0_0x0._s_0 =
       (FLinearColor_u_0_s_0)FStyleColors::White.SpecifiedColor.field0_0x0;
  uVar9 = _UNK_15090c6d8;
  uVar8 = ___xmm_3f8000003f800000000000003f800000;
  EVar12 = FStyleColors::White.ColorTableId;
  uVar13 = FStyleColors::White._18_2_;
  (pFVar25->BackgroundColor).ColorUseRule = FStyleColors::White.ColorUseRule;
  (pFVar25->BackgroundColor).ColorTableId = EVar12;
  *(undefined2 *)&(pFVar25->BackgroundColor).field_0x12 = uVar13;
  *(undefined8 *)&(pFVar25->ReadOnlyForegroundColor).SpecifiedColor.field0_0x0 = uVar8;
  *(undefined8 *)((longlong)&(pFVar25->ReadOnlyForegroundColor).SpecifiedColor.field0_0x0 + 8) =
       uVar9;
  uStack_124d0._0_1_ = (undefined1)2;
  uStack_124d0._1_1_ = (undefined1)(2 >> 8);
  (pFVar25->ReadOnlyForegroundColor).ColorUseRule = (undefined1)uStack_124d0;
  (pFVar25->ReadOnlyForegroundColor).ColorTableId = uStack_124d0._1_1_;
  *(undefined2 *)&(pFVar25->ReadOnlyForegroundColor).field_0x12 = uStack_124d0._2_2_;
  (pFVar25->FocusedForegroundColor).SpecifiedColor.field0_0x0._s_0 =
       (FLinearColor_u_0_s_0)FStyleColors::White.SpecifiedColor.field0_0x0;
  EVar12 = FStyleColors::White.ColorTableId;
  uVar13 = FStyleColors::White._18_2_;
  (pFVar25->FocusedForegroundColor).ColorUseRule = FStyleColors::White.ColorUseRule;
  (pFVar25->FocusedForegroundColor).ColorTableId = EVar12;
  *(undefined2 *)&(pFVar25->FocusedForegroundColor).field_0x12 = uVar13;
  uStack_124d0 = uVar15;
  FScrollBarStyle::operator=(&pFVar25->ScrollBarStyle,pFVar18);
  FEditableTextBoxStyle::FEditableTextBoxStyle(&local_3288,pFVar25);
  local_f078[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_efd8);
  local_efc8[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_ef28);
  local_ef18[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_ee78);
  local_ee68[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_edc8);
  local_9908._padding_ = (longlong)&___7FEditableTextBoxStyle__6B_;
  FScrollBarStyle::~FScrollBarStyle(&local_9908.ScrollBarStyle);
  FTextBlockStyle::~FTextBlockStyle(&local_9908.TextStyle);
  local_9908.BackgroundImageReadOnly._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_9908.BackgroundImageReadOnly.ResourceHandle.Data.SharedReferenceCount.
             ReferenceController);
  local_9908.BackgroundImageFocused._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_9908.BackgroundImageFocused.ResourceHandle.Data.SharedReferenceCount.
             ReferenceController);
  local_9908.BackgroundImageHovered._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_9908.BackgroundImageHovered.ResourceHandle.Data.SharedReferenceCount.
             ReferenceController);
  local_9908.BackgroundImageNormal._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_9908.BackgroundImageNormal.ResourceHandle.Data.SharedReferenceCount.
             ReferenceController);
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)&local_9908);
  pFVar1 = param_1->Object;
  pFVar17 = ::FName::FName(&FStack_12420,"NormalEditableTextBox");
  FSlateStyleSet::Set<FEditableTextBoxStyle>((FSlateStyleSet *)pFVar1,*pFVar17,&local_3288);
  pFVar25 = FEditableTextBoxStyle::FEditableTextBoxStyle(&local_8c88,&local_3288);
  TStack_125f8 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  pFVar22 = (FSlateBrush *)
            FSlateRoundedBoxBrush::FSlateRoundedBoxBrush<FSlateColor,FSlateColor>
                      ((FSlateRoundedBoxBrush *)local_eba8,&FStyleColors::Input,
                       &FStyleColors::Secondary,fVar3,
                       (FDeprecateVector2DParameter *)&TStack_125f8._s_0);
  FSlateBrush::operator=(&pFVar25->BackgroundImageNormal,pFVar22);
  TStack_125f0 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  pFVar22 = (FSlateBrush *)
            FSlateRoundedBoxBrush::FSlateRoundedBoxBrush<FSlateColor,FSlateColor>
                      ((FSlateRoundedBoxBrush *)local_ec58,&FStyleColors::Input,&FStyleColors::Hover
                       ,fVar3,(FDeprecateVector2DParameter *)&TStack_125f0._s_0);
  FSlateBrush::operator=(&pFVar25->BackgroundImageHovered,pFVar22);
  TStack_125e8 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  pFVar22 = (FSlateBrush *)
            FSlateRoundedBoxBrush::FSlateRoundedBoxBrush<FSlateColor,FSlateColor>
                      ((FSlateRoundedBoxBrush *)local_ed08,&FStyleColors::Input,
                       &FStyleColors::Primary,fVar3,
                       (FDeprecateVector2DParameter *)&TStack_125e8._s_0);
  FSlateBrush::operator=(&pFVar25->BackgroundImageFocused,pFVar22);
  TStack_125e0 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  pFVar22 = (FSlateBrush *)
            FSlateRoundedBoxBrush::FSlateRoundedBoxBrush<FSlateColor,FSlateColor>
                      ((FSlateRoundedBoxBrush *)local_edb8,&FStyleColors::Header,
                       &FStyleColors::InputOutline,fVar3,
                       (FDeprecateVector2DParameter *)&TStack_125e0._s_0);
  FSlateBrush::operator=(&pFVar25->BackgroundImageReadOnly,pFVar22);
  FEditableTextBoxStyle::FEditableTextBoxStyle(&local_b208,pFVar25);
  local_edb8[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_ed18);
  local_ed08[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_ec68);
  local_ec58[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_ebb8);
  local_eba8[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_eb08);
  local_8c88._padding_ = (longlong)&___7FEditableTextBoxStyle__6B_;
  FScrollBarStyle::~FScrollBarStyle(&local_8c88.ScrollBarStyle);
  FTextBlockStyle::~FTextBlockStyle(&local_8c88.TextStyle);
  local_8c88.BackgroundImageReadOnly._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_8c88.BackgroundImageReadOnly.ResourceHandle.Data.SharedReferenceCount.
             ReferenceController);
  local_8c88.BackgroundImageFocused._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_8c88.BackgroundImageFocused.ResourceHandle.Data.SharedReferenceCount.
             ReferenceController);
  local_8c88.BackgroundImageHovered._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_8c88.BackgroundImageHovered.ResourceHandle.Data.SharedReferenceCount.
             ReferenceController);
  local_8c88.BackgroundImageNormal._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_8c88.BackgroundImageNormal.ResourceHandle.Data.SharedReferenceCount.
             ReferenceController);
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)&local_8c88);
  pFVar1 = param_1->Object;
  FSlateWidgetStyle::FSlateWidgetStyle((FSlateWidgetStyle *)&local_e048);
  local_e048._padding_ = (longlong)&___7FSearchBoxStyle__6B_;
  FEditableTextBoxStyle::FEditableTextBoxStyle(&local_e048.TextBoxStyle);
  FSlateFontInfo::FSlateFontInfo(&local_e048.ActiveFontInfo);
  FSlateBrush::FSlateBrush(&local_e048.UpArrowImage);
  FSlateBrush::FSlateBrush(&local_e048.DownArrowImage);
  FSlateBrush::FSlateBrush(&local_e048.GlassImage);
  FSlateBrush::FSlateBrush(&local_e048.ClearImage);
  local_e048.ImageSizeOverride.bIsSet = false;
  local_e048.ImagePadding.Left = 0.0;
  local_e048.ImagePadding.Top = 0.0;
  local_e048.ImagePadding.Right = 0.0;
  local_e048.ImagePadding.Bottom = 0.0;
  local_e048.bLeftAlignButtons_DEPRECATED = false;
  local_e048.bLeftAlignSearchResultButtons = false;
  local_e048.bLeftAlignGlassImageAndClearButton = false;
  FEditableTextBoxStyle::operator=(&local_e048.TextBoxStyle,&local_b208);
  bVar16 = FSlateFontInfo::HasValidFont(&local_e048.ActiveFontInfo);
  if (!bVar16) {
    FSlateFontInfo::operator=(&local_e048.ActiveFontInfo,&local_e048.TextBoxStyle.TextStyle.Font);
  }
  FStack_125d8 = CoreStyleConstants::Icon16x16;
  pFVar21 = (FString *)
            (**(code **)(param_1->Object->_padding_ + 0xf0))
                      (param_1->Object,apvStack_121d8,"Starship/Common/chevron-up",L".svg");
  FSlateImageBrush::FSlateImageBrush
            ((FSlateImageBrush *)&FStack_103f8,pFVar21,(FDeprecateVector2DParameter *)&FStack_125d8,
             &FStyleColors::Foreground,NoTile,Vector);
  FStack_103f8._padding_ = (longlong)&___7FSlateVectorImageBrush__6B_;
  FSlateBrush::operator=(&local_e048.UpArrowImage,&FStack_103f8);
  FStack_125d0 = CoreStyleConstants::Icon16x16;
  pFVar21 = (FString *)
            (**(code **)(param_1->Object->_padding_ + 0xf0))
                      (param_1->Object,apvStack_121e8,"Starship/Common/chevron-down",L".svg");
  FSlateImageBrush::FSlateImageBrush
            ((FSlateImageBrush *)&FStack_10348,pFVar21,(FDeprecateVector2DParameter *)&FStack_125d0,
             &FStyleColors::Foreground,NoTile,Vector);
  FStack_10348._padding_ = (longlong)&___7FSlateVectorImageBrush__6B_;
  FSlateBrush::operator=(&local_e048.DownArrowImage,&FStack_10348);
  FStack_125c8 = CoreStyleConstants::Icon16x16;
  FStack_12228._0_8_ = uVar6;
  FStack_12228._8_8_ = uVar7;
  pFVar21 = (FString *)
            (**(code **)(param_1->Object->_padding_ + 0xf0))
                      (param_1->Object,apvStack_121f8,"Starship/Common/search",L".svg");
  FSlateImageBrush::FSlateImageBrush
            ((FSlateImageBrush *)&FStack_10088,pFVar21,(FDeprecateVector2DParameter *)&FStack_125c8,
             (FLinearColor *)&FStack_12228._s_0,NoTile,Vector);
  FStack_10088._padding_ = (longlong)&___7FSlateVectorImageBrush__6B_;
  FSlateBrush::operator=(&local_e048.GlassImage,&FStack_10088);
  FStack_125c0 = CoreStyleConstants::Icon16x16;
  FStack_12218._0_8_ = uVar6;
  FStack_12218._8_8_ = uVar7;
  pFVar21 = (FString *)
            (**(code **)(param_1->Object->_padding_ + 0xf0))
                      (param_1->Object,apvStack_12208,"Starship/Common/close",L".svg");
  FSlateImageBrush::FSlateImageBrush
            ((FSlateImageBrush *)&FStack_10138,pFVar21,(FDeprecateVector2DParameter *)&FStack_125c0,
             (FLinearColor *)&FStack_12218._s_0,NoTile,Vector);
  FStack_10138._padding_ = (longlong)&___7FSlateVectorImageBrush__6B_;
  FSlateBrush::operator=(&local_e048.ClearImage,&FStack_10138);
  local_e048.ImageSizeOverride.TypedValue.field0_0x0._s_0.X =
       ___xmm_402c000000000000402c000000000000;
  local_e048.ImageSizeOverride.TypedValue.field0_0x0._s_0.Y = _UNK_150925398;
  local_e048.ImagePadding.Left = ___xmm_00000000000000000000000040800000;
  local_e048.ImagePadding.Top = _UNK_150924fd4;
  local_e048.ImagePadding.Right = _UNK_150924fd8;
  local_e048.ImagePadding.Bottom = _UNK_150924fdc;
  local_e048.ImageSizeOverride.bIsSet = true;
  local_e048.bLeftAlignSearchResultButtons = true;
  local_e048.bLeftAlignGlassImageAndClearButton = true;
  pFVar17 = ::FName::FName(&FStack_12418,"SearchBox");
  FSlateStyleSet::Set<FSearchBoxStyle>((FSlateStyleSet *)pFVar1,*pFVar17,&local_e048);
  FStack_10138._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_10138.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  if (apvStack_12208[0] != (void *)0x0) {
    FMemory::Free(apvStack_12208[0]);
  }
  FStack_10088._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_10088.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  if (apvStack_121f8[0] != (void *)0x0) {
    FMemory::Free(apvStack_121f8[0]);
  }
  FStack_10348._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_10348.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  if (apvStack_121e8[0] != (void *)0x0) {
    FMemory::Free(apvStack_121e8[0]);
  }
  FStack_103f8._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_103f8.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  if (apvStack_121d8[0] != (void *)0x0) {
    FMemory::Free(apvStack_121d8[0]);
  }
  local_e048._padding_ = (longlong)&___7FSearchBoxStyle__6B_;
  local_e048.ClearImage._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_e048.ClearImage.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  local_e048.GlassImage._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_e048.GlassImage.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  local_e048.DownArrowImage._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_e048.DownArrowImage.ResourceHandle.Data.SharedReferenceCount.ReferenceController)
  ;
  local_e048.UpArrowImage._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_e048.UpArrowImage.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_e048.ActiveFontInfo.CompositeFont.SharedReferenceCount.ReferenceController);
  FEditableTextBoxStyle::~FEditableTextBoxStyle(&local_e048.TextBoxStyle);
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)&local_e048);
  local_b208._padding_ = (longlong)&___7FEditableTextBoxStyle__6B_;
  FScrollBarStyle::~FScrollBarStyle(&local_b208.ScrollBarStyle);
  FTextBlockStyle::~FTextBlockStyle(&local_b208.TextStyle);
  local_b208.BackgroundImageReadOnly._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_b208.BackgroundImageReadOnly.ResourceHandle.Data.SharedReferenceCount.
             ReferenceController);
  local_b208.BackgroundImageFocused._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_b208.BackgroundImageFocused.ResourceHandle.Data.SharedReferenceCount.
             ReferenceController);
  local_b208.BackgroundImageHovered._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_b208.BackgroundImageHovered.ResourceHandle.Data.SharedReferenceCount.
             ReferenceController);
  local_b208.BackgroundImageNormal._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_b208.BackgroundImageNormal.ResourceHandle.Data.SharedReferenceCount.
             ReferenceController);
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)&local_b208);
  local_fd48 = &___7FTextBlockStyle__6B_;
  FSlateFontInfo::FSlateFontInfo(&local_fd40,&FStack_12128.Font);
  local_fcd0 = FStack_12128.ColorAndOpacity.ColorUseRule;
  EStack_fccf = FStack_12128.ColorAndOpacity.ColorTableId;
  uStack_fcce = FStack_12128.ColorAndOpacity._18_2_;
  local_fce0._0_8_ = FStack_12128.ColorAndOpacity.SpecifiedColor.field0_0x0._0_8_;
  local_fce0._8_8_ = FStack_12128.ColorAndOpacity.SpecifiedColor.field0_0x0._8_8_;
  local_fccc = FStack_12128.ShadowOffset;
  local_fca4 = FStack_12128.SelectedBackgroundColor.ColorUseRule;
  EStack_fca3 = FStack_12128.SelectedBackgroundColor.ColorTableId;
  uStack_fca2 = FStack_12128.SelectedBackgroundColor._18_2_;
  local_fcc4._0_8_ = FStack_12128.ShadowColorAndOpacity.field0_0x0._0_8_;
  local_fcc4._8_8_ = FStack_12128.ShadowColorAndOpacity.field0_0x0._8_8_;
  local_fc90 = FStack_12128.HighlightColor.ColorUseRule;
  EStack_fc8f = FStack_12128.HighlightColor.ColorTableId;
  uStack_fc8e = FStack_12128.HighlightColor._18_2_;
  local_fcb4._0_8_ = FStack_12128.SelectedBackgroundColor.SpecifiedColor.field0_0x0._0_8_;
  local_fcb4._8_8_ = FStack_12128.SelectedBackgroundColor.SpecifiedColor.field0_0x0._8_8_;
  local_fca0._0_8_ = FStack_12128.HighlightColor.SpecifiedColor.field0_0x0._0_8_;
  local_fca0._8_8_ = FStack_12128.HighlightColor.SpecifiedColor.field0_0x0._8_8_;
  FSlateBrush::FSlateBrush(&local_fc88,&FStack_12128.HighlightShape);
  FSlateBrush::FSlateBrush(&local_fbd8,&FStack_12128.StrikeBrush);
  FSlateBrush::FSlateBrush(&local_fb28,&FStack_12128.UnderlineBrush);
  local_fa78 = FStack_12128.TransformPolicy;
  local_fa77 = FStack_12128.OverflowPolicy;
  FSlateWidgetStyle::FSlateWidgetStyle(local_7c78);
  local_7c78[0] = (FSlateWidgetStyle)&___7FInlineEditableTextBlockStyle__6B_;
  FEditableTextBoxStyle::FEditableTextBoxStyle(&local_7c68);
  FTextBlockStyle::FTextBlockStyle(&local_6fe8);
  FTextBlockStyle::operator=(&local_6fe8,(FTextBlockStyle *)&local_fd48);
  FEditableTextBoxStyle::operator=(&local_7c68,&local_3288);
  local_41f8._padding_ = (longlong)&___7FInlineEditableTextBlockStyle__6B_;
  FEditableTextBoxStyle::FEditableTextBoxStyle(&local_41f8.EditableTextBoxStyle,&local_7c68);
  FTextBlockStyle::FTextBlockStyle(&local_41f8.TextStyle,&local_6fe8);
  local_7c78[0] = (FSlateWidgetStyle)&___7FInlineEditableTextBlockStyle__6B_;
  FTextBlockStyle::~FTextBlockStyle(&local_6fe8);
  FEditableTextBoxStyle::~FEditableTextBoxStyle(&local_7c68);
  FSlateWidgetStyle::~FSlateWidgetStyle(local_7c78);
  pFVar1 = param_1->Object;
  pFVar17 = ::FName::FName(&FStack_12410,"InlineEditableTextBlockStyle");
  FSlateStyleSet::Set<FInlineEditableTextBlockStyle>((FSlateStyleSet *)pFVar1,*pFVar17,&local_41f8);
  pFVar20 = FTextBlockStyle::FTextBlockStyle(&local_5d98,(FTextBlockStyle *)&local_fd48);
  FSlateFontInfo::operator=(&pFVar20->Font,&pFVar19->Small);
  FTextBlockStyle::FTextBlockStyle(&local_c068,pFVar20);
  FTextBlockStyle::~FTextBlockStyle(&local_5d98);
  pFVar25 = FEditableTextBoxStyle::FEditableTextBoxStyle(&local_1988,&local_3288);
  FSlateFontInfo::operator=(&(pFVar25->TextStyle).Font,&pFVar19->Small);
  FEditableTextBoxStyle::FEditableTextBoxStyle(&local_2608,pFVar25);
  FEditableTextBoxStyle::~FEditableTextBoxStyle(&local_1988);
  FSlateWidgetStyle::FSlateWidgetStyle(local_6d08);
  local_6d08[0] = (FSlateWidgetStyle)&___7FInlineEditableTextBlockStyle__6B_;
  FEditableTextBoxStyle::FEditableTextBoxStyle(&local_6cf8);
  FTextBlockStyle::FTextBlockStyle(&local_6078);
  FTextBlockStyle::operator=(&local_6078,&local_c068);
  FEditableTextBoxStyle::operator=(&local_6cf8,&local_2608);
  local_5168._padding_ = (longlong)&___7FInlineEditableTextBlockStyle__6B_;
  FEditableTextBoxStyle::FEditableTextBoxStyle(&local_5168.EditableTextBoxStyle,&local_6cf8);
  FTextBlockStyle::FTextBlockStyle(&local_5168.TextStyle,&local_6078);
  local_6d08[0] = (FSlateWidgetStyle)&___7FInlineEditableTextBlockStyle__6B_;
  FTextBlockStyle::~FTextBlockStyle(&local_6078);
  FEditableTextBoxStyle::~FEditableTextBoxStyle(&local_6cf8);
  FSlateWidgetStyle::~FSlateWidgetStyle(local_6d08);
  pFVar1 = param_1->Object;
  pFVar17 = ::FName::FName(&FStack_12408,"InlineEditableTextBlockSmallStyle");
  FSlateStyleSet::Set<FInlineEditableTextBlockStyle>((FSlateStyleSet *)pFVar1,*pFVar17,&local_5168);
  local_5168._padding_ = (longlong)&___7FInlineEditableTextBlockStyle__6B_;
  FTextBlockStyle::~FTextBlockStyle(&local_5168.TextStyle);
  FEditableTextBoxStyle::~FEditableTextBoxStyle(&local_5168.EditableTextBoxStyle);
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)&local_5168);
  FEditableTextBoxStyle::~FEditableTextBoxStyle(&local_2608);
  FTextBlockStyle::~FTextBlockStyle(&local_c068);
  local_41f8._padding_ = (longlong)&___7FInlineEditableTextBlockStyle__6B_;
  FTextBlockStyle::~FTextBlockStyle(&local_41f8.TextStyle);
  FEditableTextBoxStyle::~FEditableTextBoxStyle(&local_41f8.EditableTextBoxStyle);
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)&local_41f8);
  FTextBlockStyle::~FTextBlockStyle((FTextBlockStyle *)&local_fd48);
  pFVar20 = FTextBlockStyle::FTextBlockStyle(&local_5ab8,&FStack_12128);
  FStack_12570.OutlineSize = 0;
  FStack_12570.bMiteredCorners = false;
  FStack_12570.bSeparateFillAlpha = false;
  FStack_12570.OutlineColor.field0_0x0._s_0 = FLinearColor::Black.field0_0x0;
  FStack_12570.bApplyOutlineToDropShadows = false;
  FStack_12570.OutlineMaterial.field0_0x0.DebugPtr = (TObjectPtr<UObject>_u_0)0x0;
  pFVar17 = ::FName::FName(&FStack_12400,"Italic");
  pFVar26 = FCoreStyle::GetDefaultFontStyle(&local_f4a8,*pFVar17,__real_41000000,&FStack_12570);
  FSlateFontInfo::operator=(&pFVar20->Font,pFVar26);
  uVar8 = _UNK_15090c6d8;
  *(undefined8 *)&(pFVar20->ColorAndOpacity).SpecifiedColor.field0_0x0 =
       ___xmm_3f8000003f800000000000003f800000;
  *(undefined8 *)((longlong)&(pFVar20->ColorAndOpacity).SpecifiedColor.field0_0x0 + 8) = uVar8;
  uStack_12648._0_1_ = (undefined1)3;
  uStack_12648._1_1_ = (undefined1)(3 >> 8);
  (pFVar20->ColorAndOpacity).ColorUseRule = (undefined1)uStack_12648;
  (pFVar20->ColorAndOpacity).ColorTableId = uStack_12648._1_1_;
  *(short *)&(pFVar20->ColorAndOpacity).field_0x12 = (short)(uVar14 >> 0x10);
  FTextBlockStyle::FTextBlockStyle(&local_b7c8,pFVar20);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_f4a8.CompositeFont.SharedReferenceCount.ReferenceController);
  FTextBlockStyle::~FTextBlockStyle(&local_5ab8);
  pFVar1 = param_1->Object;
  pFVar17 = ::FName::FName(&FStack_123f8,"HintText");
  FSlateStyleSet::Set<FTextBlockStyle>((FSlateStyleSet *)pFVar1,*pFVar17,&local_b7c8);
  pFVar20 = FTextBlockStyle::FTextBlockStyle(&local_57d8,&FStack_12128);
  FStack_12550.OutlineSize = 0;
  FStack_12550.bMiteredCorners = false;
  FStack_12550.bSeparateFillAlpha = false;
  FStack_12550.OutlineColor.field0_0x0._s_0 = FLinearColor::Black.field0_0x0;
  FStack_12550.bApplyOutlineToDropShadows = false;
  FStack_12550.OutlineMaterial.field0_0x0.DebugPtr = (TObjectPtr<UObject>_u_0)0x0;
  pFVar17 = ::FName::FName(&FStack_123f0,"Regular");
  pFVar26 = FCoreStyle::GetDefaultFontStyle(&local_f448,*pFVar17,fVar5,&FStack_12550);
  FSlateFontInfo::operator=(&pFVar20->Font,pFVar26);
  FTextBlockStyle::FTextBlockStyle(&local_c9d8,pFVar20);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_f448.CompositeFont.SharedReferenceCount.ReferenceController);
  FTextBlockStyle::~FTextBlockStyle(&local_57d8);
  pFVar1 = param_1->Object;
  pFVar17 = ::FName::FName(&FStack_123e8,"Common.InheritedFromNativeTextStyle");
  FSlateStyleSet::Set<FTextBlockStyle>((FSlateStyleSet *)pFVar1,*pFVar17,&local_c9d8);
  pFVar27 = FButtonStyle::FButtonStyle(&local_54f8);
  FStack_121c8._0_8_ = uVar6;
  FStack_121c8._8_8_ = uVar7;
  FStack_121b8.Left = ___xmm_3e400000000000000000000000000000;
  FStack_121b8.Top = _UNK_150925124;
  FStack_121b8.Right = _UNK_150925128;
  FStack_121b8.Bottom = _UNK_15092512c;
  pFVar21 = (FString *)
            (**(code **)(param_1->Object->_padding_ + 0xf0))
                      (param_1->Object,apvStack_12178,"Old/HyperlinkDotted",L".png");
  pFVar22 = (FSlateBrush *)
            FSlateBorderBrush::FSlateBorderBrush
                      ((FSlateBorderBrush *)local_e998,pFVar21,&FStack_121b8,
                       (FLinearColor *)&FStack_121c8._s_0,FullColor);
  FSlateBrush::operator=(&pFVar27->Normal,pFVar22);
  TStack_125b8 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  pFVar22 = (FSlateBrush *)
            FSlateNoResource::FSlateNoResource
                      ((FSlateNoResource *)local_ea48,
                       (FDeprecateVector2DParameter *)&TStack_125b8._s_0);
  FSlateBrush::operator=(&pFVar27->Pressed,pFVar22);
  FStack_121a8._0_8_ = uVar6;
  FStack_121a8._8_8_ = uVar7;
  FStack_12198.Left = ___xmm_3e400000000000000000000000000000;
  FStack_12198.Top = _UNK_150925124;
  FStack_12198.Right = _UNK_150925128;
  FStack_12198.Bottom = _UNK_15092512c;
  pFVar21 = (FString *)
            (**(code **)(param_1->Object->_padding_ + 0xf0))
                      (param_1->Object,apvStack_12188,"Old/HyperlinkUnderline",L".png");
  pFVar22 = (FSlateBrush *)
            FSlateBorderBrush::FSlateBorderBrush
                      ((FSlateBorderBrush *)local_eaf8,pFVar21,&FStack_12198,
                       (FLinearColor *)&FStack_121a8._s_0,FullColor);
  FSlateBrush::operator=(&pFVar27->Hovered,pFVar22);
  FButtonStyle::FButtonStyle(&local_8008,pFVar27);
  local_eaf8[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_ea58);
  if (apvStack_12188[0] != (void *)0x0) {
    FMemory::Free(apvStack_12188[0]);
  }
  local_ea48[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_e9a8);
  local_e998[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_e8f8);
  if (apvStack_12178[0] != (void *)0x0) {
    FMemory::Free(apvStack_12178[0]);
  }
  FButtonStyle::~FButtonStyle(&local_54f8);
  FSlateWidgetStyle::FSlateWidgetStyle(local_d068);
  local_d068[0] = (FSlateWidgetStyle)&___7FHyperlinkStyle__6B_;
  FButtonStyle::FButtonStyle(&local_d058);
  FTextBlockStyle::FTextBlockStyle(&local_ccc8);
  local_c9e8.Left = 0.0;
  local_c9e8.Top = 0.0;
  local_c9e8.Right = 0.0;
  local_c9e8.Bottom = 0.0;
  FButtonStyle::operator=(&local_d058,&local_8008);
  FTextBlockStyle::operator=(&local_ccc8,&local_c9d8);
  local_c6f8._padding_ = (longlong)&___7FHyperlinkStyle__6B_;
  local_c9e8.Left = 0.0;
  local_c9e8.Top = 0.0;
  local_c9e8.Right = 0.0;
  local_c9e8.Bottom = 0.0;
  FButtonStyle::FButtonStyle(&local_c6f8.UnderlineStyle,&local_d058);
  FTextBlockStyle::FTextBlockStyle(&local_c6f8.TextStyle,&local_ccc8);
  local_c6f8.Padding.Left = local_c9e8.Left;
  local_c6f8.Padding.Top = local_c9e8.Top;
  local_c6f8.Padding.Right = local_c9e8.Right;
  local_c6f8.Padding.Bottom = local_c9e8.Bottom;
  local_d068[0] = (FSlateWidgetStyle)&___7FHyperlinkStyle__6B_;
  FTextBlockStyle::~FTextBlockStyle(&local_ccc8);
  FButtonStyle::~FButtonStyle(&local_d058);
  FSlateWidgetStyle::~FSlateWidgetStyle(local_d068);
  pFVar1 = param_1->Object;
  pFVar17 = ::FName::FName(&FStack_123e0,"Common.GotoNativeCodeHyperlink");
  FSlateStyleSet::Set<FHyperlinkStyle>((FSlateStyleSet *)pFVar1,*pFVar17,&local_c6f8);
  local_c6f8._padding_ = (longlong)&___7FHyperlinkStyle__6B_;
  FTextBlockStyle::~FTextBlockStyle(&local_c6f8.TextStyle);
  FButtonStyle::~FButtonStyle(&local_c6f8.UnderlineStyle);
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)&local_c6f8);
  FButtonStyle::~FButtonStyle(&local_8008);
  FTextBlockStyle::~FTextBlockStyle(&local_c9d8);
  FTextBlockStyle::~FTextBlockStyle(&local_b7c8);
  FEditableTextBoxStyle::~FEditableTextBoxStyle(&local_3288);
  FEditableTextBoxStyle::~FEditableTextBoxStyle(&local_d08);
  FTextBlockStyle::~FTextBlockStyle(&local_b4e8);
  FTextBlockStyle::~FTextBlockStyle(&local_fa68);
  FTextBlockStyle::~FTextBlockStyle(&local_baa8);
  FTextBlockStyle::~FTextBlockStyle(&local_f788);
  FTextBlockStyle::~FTextBlockStyle(&local_bd88);
  FStack_10798._0_8_ = &___7FTextBlockStyle__6B_;
  FStack_10798.UnderlineBrush._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_10798.UnderlineBrush.ResourceHandle.Data.SharedReferenceCount.
             ReferenceController);
  FStack_10798.StrikeBrush._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_10798.StrikeBrush.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  FStack_10798.HighlightShape._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_10798.HighlightShape.ResourceHandle.Data.SharedReferenceCount.
             ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_10798.Font.CompositeFont.SharedReferenceCount.ReferenceController);
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)&FStack_10798);
  local_e8e8._0_8_ = &___7FTextBlockStyle__6B_;
  local_e8e8.UnderlineBrush._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_e8e8.UnderlineBrush.ResourceHandle.Data.SharedReferenceCount.ReferenceController)
  ;
  local_e8e8.StrikeBrush._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_e8e8.StrikeBrush.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  local_e8e8.HighlightShape._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_e8e8.HighlightShape.ResourceHandle.Data.SharedReferenceCount.ReferenceController)
  ;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_e8e8.Font.CompositeFont.SharedReferenceCount.ReferenceController);
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)&local_e8e8);
  FStack_12128._0_8_ = &___7FTextBlockStyle__6B_;
  FStack_12128.UnderlineBrush._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_12128.UnderlineBrush.ResourceHandle.Data.SharedReferenceCount.
             ReferenceController);
  FStack_12128.StrikeBrush._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_12128.StrikeBrush.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  FStack_12128.HighlightShape._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_12128.HighlightShape.ResourceHandle.Data.SharedReferenceCount.
             ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_12128.Font.CompositeFont.SharedReferenceCount.ReferenceController);
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)&FStack_12128);
  return;
}

