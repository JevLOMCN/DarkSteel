// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 4

// FStyleFonts @ 142547c30

FStyleFonts * __thiscall FStyleFonts::FStyleFonts(FStyleFonts *this)

{
  float fVar1;
  FName *pFVar2;
  FName local_res8;
  FFontOutlineSettings local_38;
  
  local_38.OutlineSize = 0;
  local_38.OutlineColor.field0_0x0._s_0 = FLinearColor::Black.field0_0x0;
  local_38.bMiteredCorners = false;
  local_38.bSeparateFillAlpha = false;
  local_38.bApplyOutlineToDropShadows = false;
  local_38.OutlineMaterial.field0_0x0.DebugPtr = (TObjectPtr<UObject>_u_0)0x0;
  pFVar2 = ::FName::FName(&local_res8,"Regular");
  fVar1 = __real_41200000;
  FCoreStyle::GetDefaultFontStyle(&this->Normal,*pFVar2,__real_41200000,&local_38);
  local_38.OutlineSize = 0;
  local_38.bMiteredCorners = false;
  local_38.bSeparateFillAlpha = false;
  local_38.OutlineColor.field0_0x0._s_0 = FLinearColor::Black.field0_0x0;
  local_38.bApplyOutlineToDropShadows = false;
  local_38.OutlineMaterial.field0_0x0.DebugPtr = (TObjectPtr<UObject>_u_0)0x0;
  pFVar2 = ::FName::FName(&local_res8,"Italic");
  FCoreStyle::GetDefaultFontStyle(&this->NormalItalic,*pFVar2,fVar1,&local_38);
  local_38.OutlineSize = 0;
  local_38.bMiteredCorners = false;
  local_38.bSeparateFillAlpha = false;
  local_38.OutlineColor.field0_0x0._s_0 = FLinearColor::Black.field0_0x0;
  local_38.bApplyOutlineToDropShadows = false;
  local_38.OutlineMaterial.field0_0x0.DebugPtr = (TObjectPtr<UObject>_u_0)0x0;
  pFVar2 = ::FName::FName(&local_res8,"Bold");
  FCoreStyle::GetDefaultFontStyle(&this->NormalBold,*pFVar2,fVar1,&local_38);
  local_38.OutlineSize = 0;
  local_38.bMiteredCorners = false;
  local_38.bSeparateFillAlpha = false;
  local_38.OutlineColor.field0_0x0._s_0 = FLinearColor::Black.field0_0x0;
  local_38.bApplyOutlineToDropShadows = false;
  local_38.OutlineMaterial.field0_0x0.DebugPtr = (TObjectPtr<UObject>_u_0)0x0;
  pFVar2 = ::FName::FName(&local_res8,"BoldItalic");
  FCoreStyle::GetDefaultFontStyle(&this->NormalBoldItalic,*pFVar2,fVar1,&local_38);
  local_38.OutlineSize = 0;
  local_38.bMiteredCorners = false;
  local_38.bSeparateFillAlpha = false;
  local_38.OutlineColor.field0_0x0._s_0 = FLinearColor::Black.field0_0x0;
  local_38.bApplyOutlineToDropShadows = false;
  local_38.OutlineMaterial.field0_0x0.DebugPtr = (TObjectPtr<UObject>_u_0)0x0;
  pFVar2 = ::FName::FName(&local_res8,"Regular");
  fVar1 = __real_41000000;
  FCoreStyle::GetDefaultFontStyle(&this->Small,*pFVar2,__real_41000000,&local_38);
  local_38.OutlineSize = 0;
  local_38.bMiteredCorners = false;
  local_38.bSeparateFillAlpha = false;
  local_38.OutlineColor.field0_0x0._s_0 = FLinearColor::Black.field0_0x0;
  local_38.bApplyOutlineToDropShadows = false;
  local_38.OutlineMaterial.field0_0x0.DebugPtr = (TObjectPtr<UObject>_u_0)0x0;
  pFVar2 = ::FName::FName(&local_res8,"Bold");
  FCoreStyle::GetDefaultFontStyle(&this->SmallBold,*pFVar2,fVar1,&local_38);
  local_38.OutlineSize = 0;
  local_38.bMiteredCorners = false;
  local_38.bSeparateFillAlpha = false;
  local_38.OutlineColor.field0_0x0._s_0 = FLinearColor::Black.field0_0x0;
  local_38.bApplyOutlineToDropShadows = false;
  local_38.OutlineMaterial.field0_0x0.DebugPtr = (TObjectPtr<UObject>_u_0)0x0;
  pFVar2 = ::FName::FName(&local_res8,"Regular");
  fVar1 = __real_41600000;
  FCoreStyle::GetDefaultFontStyle(&this->Large,*pFVar2,__real_41600000,&local_38);
  local_38.OutlineSize = 0;
  local_38.bMiteredCorners = false;
  local_38.bSeparateFillAlpha = false;
  local_38.OutlineColor.field0_0x0._s_0 = FLinearColor::Black.field0_0x0;
  local_38.bApplyOutlineToDropShadows = false;
  local_38.OutlineMaterial.field0_0x0.DebugPtr = (TObjectPtr<UObject>_u_0)0x0;
  pFVar2 = ::FName::FName(&local_res8,"Bold");
  FCoreStyle::GetDefaultFontStyle(&this->LargeBold,*pFVar2,fVar1,&local_38);
  local_38.OutlineSize = 0;
  local_38.bMiteredCorners = false;
  local_38.bSeparateFillAlpha = false;
  local_38.OutlineColor.field0_0x0._s_0 = FLinearColor::Black.field0_0x0;
  local_38.bApplyOutlineToDropShadows = false;
  local_38.OutlineMaterial.field0_0x0.DebugPtr = (TObjectPtr<UObject>_u_0)0x0;
  pFVar2 = ::FName::FName(&local_res8,"BoldCondensed");
  FCoreStyle::GetDefaultFontStyle(&this->HeadingMedium,*pFVar2,__real_42040000,&local_38);
  local_38.OutlineSize = 0;
  local_38.bMiteredCorners = false;
  local_38.bSeparateFillAlpha = false;
  local_38.OutlineColor.field0_0x0._s_0 = FLinearColor::Black.field0_0x0;
  local_38.bApplyOutlineToDropShadows = false;
  local_38.OutlineMaterial.field0_0x0.DebugPtr = (TObjectPtr<UObject>_u_0)0x0;
  pFVar2 = ::FName::FName(&local_res8,"BoldCondensed");
  FCoreStyle::GetDefaultFontStyle(&this->HeadingSmall,*pFVar2,__real_41a80000,&local_38);
  local_38.OutlineSize = 0;
  local_38.bMiteredCorners = false;
  local_38.bSeparateFillAlpha = false;
  local_38.OutlineColor.field0_0x0._s_0 = FLinearColor::Black.field0_0x0;
  local_38.bApplyOutlineToDropShadows = false;
  local_38.OutlineMaterial.field0_0x0.DebugPtr = (TObjectPtr<UObject>_u_0)0x0;
  pFVar2 = ::FName::FName(&local_res8,"BoldCondensed");
  FCoreStyle::GetDefaultFontStyle(&this->HeadingExtraSmall,*pFVar2,__real_41700000,&local_38);
  return this;
}

// FStyleFonts @ 142547f50

FStyleFonts * __thiscall FStyleFonts::FStyleFonts(FStyleFonts *this,FStyleFonts *param_1)

{
  FSlateFontInfo::FSlateFontInfo(&this->Normal,&param_1->Normal);
  FSlateFontInfo::FSlateFontInfo(&this->NormalItalic,&param_1->NormalItalic);
  FSlateFontInfo::FSlateFontInfo(&this->NormalBold,&param_1->NormalBold);
  FSlateFontInfo::FSlateFontInfo(&this->NormalBoldItalic,&param_1->NormalBoldItalic);
  FSlateFontInfo::FSlateFontInfo(&this->Small,&param_1->Small);
  FSlateFontInfo::FSlateFontInfo(&this->SmallBold,&param_1->SmallBold);
  FSlateFontInfo::FSlateFontInfo(&this->Large,&param_1->Large);
  FSlateFontInfo::FSlateFontInfo(&this->LargeBold,&param_1->LargeBold);
  FSlateFontInfo::FSlateFontInfo(&this->HeadingMedium,&param_1->HeadingMedium);
  FSlateFontInfo::FSlateFontInfo(&this->HeadingSmall,&param_1->HeadingSmall);
  FSlateFontInfo::FSlateFontInfo(&this->HeadingExtraSmall,&param_1->HeadingExtraSmall);
  return this;
}

// ~FStyleFonts @ 14254bfe0

void __thiscall FStyleFonts::~FStyleFonts(FStyleFonts *this)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->HeadingExtraSmall).CompositeFont.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->HeadingSmall).CompositeFont.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->HeadingMedium).CompositeFont.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->LargeBold).CompositeFont.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Large).CompositeFont.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->SmallBold).CompositeFont.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Small).CompositeFont.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->NormalBoldItalic).CompositeFont.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->NormalBold).CompositeFont.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->NormalItalic).CompositeFont.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Normal).CompositeFont.SharedReferenceCount.ReferenceController);
  return;
}

// Get @ 14257e620

FStyleFonts * __cdecl FStyleFonts::Get(void)

{
  TUniquePtr<FStyleFonts,TDefaultDelete<FStyleFonts>_> this;
  FStyleFonts *pFVar1;
  FStyleFonts *this_00;
  FStyleFonts *pFVar2;
  bool bVar3;
  FStyleFonts local_428;
  
  if (Instance.Ptr == (FStyleFonts *)0x0) {
    pFVar1 = FStyleFonts(&local_428);
    this_00 = ::operator_new(0x420);
    pFVar2 = (FStyleFonts *)0x0;
    if (this_00 != (FStyleFonts *)0x0) {
      pFVar2 = FStyleFonts(this_00,pFVar1);
    }
    this.Ptr = Instance.Ptr;
    bVar3 = Instance.Ptr != (FStyleFonts *)0x0;
    Instance.Ptr = pFVar2;
    if (bVar3) {
      ~FStyleFonts(this.Ptr);
      ::operator_delete(this.Ptr,0x420);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_428.HeadingExtraSmall.CompositeFont.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_428.HeadingSmall.CompositeFont.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_428.HeadingMedium.CompositeFont.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_428.LargeBold.CompositeFont.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_428.Large.CompositeFont.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_428.SmallBold.CompositeFont.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_428.Small.CompositeFont.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_428.NormalBoldItalic.CompositeFont.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_428.NormalBold.CompositeFont.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_428.NormalItalic.CompositeFont.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_428.Normal.CompositeFont.SharedReferenceCount.ReferenceController);
  }
  return Instance.Ptr;
}

