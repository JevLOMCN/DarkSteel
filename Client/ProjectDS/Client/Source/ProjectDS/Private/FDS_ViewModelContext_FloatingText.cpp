// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 3

// StaticStruct @ 14b5e5490

UScriptStruct * __cdecl FDS_ViewModelContext_FloatingText::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDS_ViewModelContext_FloatingText.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ProjectDS();
    Z_Registration_Info_UScriptStruct_FDS_ViewModelContext_FloatingText.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDS_ViewModelContext_FloatingText,
                         (UObject *)pUVar1,L"DS_ViewModelContext_FloatingText");
  }
  return Z_Registration_Info_UScriptStruct_FDS_ViewModelContext_FloatingText.OuterSingleton;
}

// FDS_ViewModelContext_FloatingText @ 14b5e9390

FDS_ViewModelContext_FloatingText * __thiscall
FDS_ViewModelContext_FloatingText::FDS_ViewModelContext_FloatingText
          (FDS_ViewModelContext_FloatingText *this)

{
  TVector2<double> TVar1;
  
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FDS_ViewModelContext_FloatingText__6B_;
  memset(&(this->FloatingTextInfo).FloatingTextData.field_0x4,0,0xec);
  (this->FloatingTextInfo).FloatingTextData.FloatingTextWindowID = None;
  FSlateBrush::FSlateBrush(&(this->FloatingTextInfo).FloatingTextData.TextBrush);
  (this->FloatingTextInfo).FloatingTextData.TextBrushID = 0;
  (this->FloatingTextInfo).FloatingTextData.TextEffectColor.field0_0x0._s_0 =
       (FLinearColor_u_0_s_0)FLinearColor::White.field0_0x0;
  (this->FloatingTextInfo).FloatingTextData.AnimationSequenceList.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FloatingTextInfo).FloatingTextData.AnimationSequenceList.ArrayNum = 0;
  TVar1 = UE::Math::TVector2<double>::ZeroVector;
  (this->FloatingTextInfo).FloatingTextData.AnimationSequenceList.ArrayMax = 0;
  (this->FloatingTextInfo).TargetEntityID = 0;
  (this->FloatingTextInfo).FloatingTextScreenPosition.field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)TVar1.field0_0x0;
  *(undefined2 *)&(this->FloatingTextInfo).NumberData.field_0x5 = 0;
  (this->FloatingTextInfo).NumberData.field_0x7 = 0;
  (this->FloatingTextInfo).NumberData.FloatingTextWindowID = None;
  (this->FloatingTextInfo).NumberData.NumberFontType = None;
  (this->FloatingTextInfo).NumberData.AnimationSequenceList.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FloatingTextInfo).NumberData.AnimationSequenceList.ArrayNum = 0;
  (this->FloatingTextInfo).NumberData.AnimationSequenceList.ArrayMax = 0;
  (this->FloatingTextInfo).NumberData.IconIDs.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FloatingTextInfo).NumberData.IconIDs.ArrayNum = 0;
  (this->FloatingTextInfo).NumberData.IconIDs.ArrayMax = 0;
  (this->FloatingTextInfo).NumberValue = 0;
  (this->FloatingTextInfo).AbnormalType = None;
  return this;
}

// ~FDS_ViewModelContext_FloatingText @ 14b5e98e0

/* WARNING: Type propagation algorithm not settling */

void __thiscall
FDS_ViewModelContext_FloatingText::~FDS_ViewModelContext_FloatingText
          (FDS_ViewModelContext_FloatingText *this)

{
  FScriptContainerElement *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  
  pFVar1 = (this->FloatingTextInfo).NumberData.IconIDs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FloatingTextInfo).NumberData.AnimationSequenceList.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FloatingTextInfo).FloatingTextData.AnimationSequenceList.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pTVar2 = (this->FloatingTextInfo).FloatingTextData.TextBrush.ResourceHandle.Data.
           SharedReferenceCount.ReferenceController;
  (this->FloatingTextInfo).FloatingTextData.TextBrush._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  this->_padding_ = (longlong)&___7FDS_ViewModelContext__6B_;
  return;
}

