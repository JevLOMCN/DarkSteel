// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 22

// StaticStruct @ 14245a180

UScriptStruct * __cdecl FSlateFontInfo::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FSlateFontInfo.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_SlateCore();
    Z_Registration_Info_UScriptStruct_FSlateFontInfo.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FSlateFontInfo,(UObject *)pUVar1,L"SlateFontInfo"
                        );
  }
  return Z_Registration_Info_UScriptStruct_FSlateFontInfo.OuterSingleton;
}

// FSlateFontInfo @ 142475f80

FSlateFontInfo * __thiscall
FSlateFontInfo::FSlateFontInfo(FSlateFontInfo *this,FSlateFontInfo *param_1)

{
  UObject *pUVar1;
  TReferenceControllerBase<1> *pTVar2;
  undefined8 uVar3;
  
  pUVar1 = (param_1->FontObject).field0_0x0.DebugPtr;
  (this->FontObject).field0_0x0.DebugPtr = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar1);
  }
  pUVar1 = (param_1->FontMaterial).field0_0x0.DebugPtr;
  (this->FontMaterial).field0_0x0.DebugPtr = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar1);
  }
  (this->OutlineSettings).OutlineSize = (param_1->OutlineSettings).OutlineSize;
  (this->OutlineSettings).bMiteredCorners = (param_1->OutlineSettings).bMiteredCorners;
  (this->OutlineSettings).bSeparateFillAlpha = (param_1->OutlineSettings).bSeparateFillAlpha;
  (this->OutlineSettings).bApplyOutlineToDropShadows =
       (param_1->OutlineSettings).bApplyOutlineToDropShadows;
  pUVar1 = (param_1->OutlineSettings).OutlineMaterial.field0_0x0.DebugPtr;
  (this->OutlineSettings).OutlineMaterial.field0_0x0.DebugPtr = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar1);
  }
  uVar3 = *(undefined8 *)((longlong)&(param_1->OutlineSettings).OutlineColor.field0_0x0 + 8);
  *(undefined8 *)&(this->OutlineSettings).OutlineColor.field0_0x0 =
       *(undefined8 *)&(param_1->OutlineSettings).OutlineColor.field0_0x0;
  *(undefined8 *)((longlong)&(this->OutlineSettings).OutlineColor.field0_0x0 + 8) = uVar3;
  (this->CompositeFont).Object = (param_1->CompositeFont).Object;
  pTVar2 = (param_1->CompositeFont).SharedReferenceCount.ReferenceController;
  (this->CompositeFont).SharedReferenceCount.ReferenceController = pTVar2;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  this->TypefaceFontName = param_1->TypefaceFontName;
  this->Size = param_1->Size;
  this->LetterSpacing = param_1->LetterSpacing;
  this->SkewAmount = param_1->SkewAmount;
  this->FontFallback = param_1->FontFallback;
  this->bForceMonospaced = param_1->bForceMonospaced;
  this->bMaterialIsStencil = param_1->bMaterialIsStencil;
  this->MonospacedWidth = param_1->MonospacedWidth;
  return this;
}

// FSlateFontInfo @ 142476070

FSlateFontInfo * __thiscall
FSlateFontInfo::FSlateFontInfo
          (FSlateFontInfo *this,FName *param_1,float param_2,EFontHinting param_3)

{
  float fVar1;
  float fVar2;
  undefined1 local_res18 [16];
  
  fVar1 = __real_477fff00;
  (this->FontObject).field0_0x0.DebugPtr = (UObject *)0x0;
  (this->FontMaterial).field0_0x0.DebugPtr = (UObject *)0x0;
  (this->OutlineSettings).OutlineMaterial.field0_0x0.DebugPtr = (UObject *)0x0;
  (this->OutlineSettings).OutlineSize = 0;
  (this->OutlineSettings).bMiteredCorners = false;
  (this->OutlineSettings).bSeparateFillAlpha = false;
  (this->OutlineSettings).bApplyOutlineToDropShadows = false;
  (this->OutlineSettings).OutlineColor.field0_0x0._s_0 =
       (FLinearColor_u_0_s_0)FLinearColor::Black.field0_0x0;
  (this->CompositeFont).Object = (FCompositeFont *)0x0;
  (this->CompositeFont).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->TypefaceFontName).ComparisonIndex = 0;
  (this->TypefaceFontName).Number = 0;
  fVar2 = param_2;
  if (fVar1 <= param_2) {
    fVar2 = fVar1;
  }
  this->LetterSpacing = 0;
  this->SkewAmount = 0.0;
  this->FontFallback = FF_Max;
  this->bForceMonospaced = false;
  this->bMaterialIsStencil = false;
  this->MonospacedWidth = 1.0;
  if (fVar2 <= 0.0) {
    fVar2 = 0.0;
  }
  this->Size = fVar2;
  if ((param_2 < 0.0) || (fVar1 < param_2)) {
    `FSlateFontInfo::FSlateFontInfo'::__l2::<lambda_1>::operator()(local_res18);
  }
  UpgradeLegacyFontInfo(this,*param_1,param_3);
  return this;
}

// FSlateFontInfo @ 142476130

FSlateFontInfo * __thiscall
FSlateFontInfo::FSlateFontInfo
          (FSlateFontInfo *this,FString *param_1,float param_2,EFontHinting param_3,
          FFontOutlineSettings *param_4)

{
  UObject *pUVar1;
  undefined8 uVar2;
  float fVar3;
  FFontOutlineSettings *pFVar4;
  FName *pFVar5;
  wchar_t *pwVar6;
  float fVar7;
  undefined1 local_res18 [16];
  
  pFVar4 = param_4;
  (this->FontObject).field0_0x0.DebugPtr = (UObject *)0x0;
  (this->FontMaterial).field0_0x0.DebugPtr = (UObject *)0x0;
  (this->OutlineSettings).OutlineSize = param_4->OutlineSize;
  (this->OutlineSettings).bMiteredCorners = param_4->bMiteredCorners;
  (this->OutlineSettings).bSeparateFillAlpha = param_4->bSeparateFillAlpha;
  (this->OutlineSettings).bApplyOutlineToDropShadows = param_4->bApplyOutlineToDropShadows;
  pUVar1 = (param_4->OutlineMaterial).field0_0x0.DebugPtr;
  (this->OutlineSettings).OutlineMaterial.field0_0x0.DebugPtr = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar1);
  }
  fVar3 = __real_477fff00;
  uVar2 = *(undefined8 *)((longlong)&(pFVar4->OutlineColor).field0_0x0 + 8);
  *(undefined8 *)&(this->OutlineSettings).OutlineColor.field0_0x0 =
       *(undefined8 *)&(pFVar4->OutlineColor).field0_0x0;
  *(undefined8 *)((longlong)&(this->OutlineSettings).OutlineColor.field0_0x0 + 8) = uVar2;
  (this->CompositeFont).Object = (FCompositeFont *)0x0;
  (this->CompositeFont).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->TypefaceFontName).ComparisonIndex = 0;
  (this->TypefaceFontName).Number = 0;
  fVar7 = param_2;
  if (fVar3 <= param_2) {
    fVar7 = fVar3;
  }
  this->LetterSpacing = 0;
  this->SkewAmount = 0.0;
  this->FontFallback = FF_Max;
  this->bForceMonospaced = false;
  this->bMaterialIsStencil = false;
  this->MonospacedWidth = 1.0;
  if (fVar7 <= 0.0) {
    fVar7 = 0.0;
  }
  this->Size = fVar7;
  if ((param_2 < 0.0) || (fVar3 < param_2)) {
    `FSlateFontInfo::FSlateFontInfo'::__l2::<lambda_1>::operator()(local_res18);
  }
  if ((param_1->Data).ArrayNum == 0) {
    pwVar6 = L"";
  }
  else {
    pwVar6 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  pFVar5 = ::FName::FName((FName *)&param_4,pwVar6);
  UpgradeLegacyFontInfo(this,*pFVar5,param_3);
  return this;
}

// FSlateFontInfo @ 142476240

FSlateFontInfo * __thiscall
FSlateFontInfo::FSlateFontInfo
          (FSlateFontInfo *this,char *param_1,float param_2,EFontHinting param_3)

{
  float fVar1;
  FName *pFVar2;
  float fVar3;
  FName local_res8;
  undefined1 local_res18 [8];
  
  fVar1 = __real_477fff00;
  (this->FontObject).field0_0x0.DebugPtr = (UObject *)0x0;
  (this->FontMaterial).field0_0x0.DebugPtr = (UObject *)0x0;
  (this->OutlineSettings).OutlineMaterial.field0_0x0.DebugPtr = (UObject *)0x0;
  (this->OutlineSettings).OutlineSize = 0;
  (this->OutlineSettings).bMiteredCorners = false;
  (this->OutlineSettings).bSeparateFillAlpha = false;
  (this->OutlineSettings).bApplyOutlineToDropShadows = false;
  (this->OutlineSettings).OutlineColor.field0_0x0._s_0 =
       (FLinearColor_u_0_s_0)FLinearColor::Black.field0_0x0;
  (this->CompositeFont).Object = (FCompositeFont *)0x0;
  (this->CompositeFont).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->TypefaceFontName).ComparisonIndex = 0;
  (this->TypefaceFontName).Number = 0;
  fVar3 = param_2;
  if (fVar1 <= param_2) {
    fVar3 = fVar1;
  }
  this->LetterSpacing = 0;
  this->SkewAmount = 0.0;
  this->FontFallback = FF_Max;
  this->bForceMonospaced = false;
  this->bMaterialIsStencil = false;
  this->MonospacedWidth = 1.0;
  if (fVar3 <= 0.0) {
    fVar3 = 0.0;
  }
  this->Size = fVar3;
  if ((param_2 < 0.0) || (fVar1 < param_2)) {
    `FSlateFontInfo::FSlateFontInfo'::__l2::<lambda_1>::operator()(local_res18);
  }
  pFVar2 = ::FName::FName(&local_res8,param_1);
  UpgradeLegacyFontInfo(this,*pFVar2,param_3);
  return this;
}

// FSlateFontInfo @ 142476300

/* WARNING: Enum "Type": Some values do not have unique names */

FSlateFontInfo * __thiscall
FSlateFontInfo::FSlateFontInfo
          (FSlateFontInfo *this,UObject *param_1,float param_2,FName *param_3,
          FFontOutlineSettings *param_4)

{
  UObject *pUVar1;
  undefined8 uVar2;
  float fVar3;
  FFontOutlineSettings *pFVar4;
  UClass *pUVar5;
  longlong *plVar6;
  longlong lVar7;
  float fVar8;
  undefined1 local_res18 [16];
  FString local_38 [2];
  
  (this->FontObject).field0_0x0.DebugPtr = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(param_1);
  }
  pFVar4 = param_4;
  (this->FontMaterial).field0_0x0.DebugPtr = (UObject *)0x0;
  (this->OutlineSettings).OutlineSize = param_4->OutlineSize;
  (this->OutlineSettings).bMiteredCorners = param_4->bMiteredCorners;
  (this->OutlineSettings).bSeparateFillAlpha = param_4->bSeparateFillAlpha;
  (this->OutlineSettings).bApplyOutlineToDropShadows = param_4->bApplyOutlineToDropShadows;
  pUVar1 = (param_4->OutlineMaterial).field0_0x0.DebugPtr;
  (this->OutlineSettings).OutlineMaterial.field0_0x0.DebugPtr = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar1);
  }
  fVar3 = __real_477fff00;
  uVar2 = *(undefined8 *)((longlong)&(pFVar4->OutlineColor).field0_0x0 + 8);
  *(undefined8 *)&(this->OutlineSettings).OutlineColor.field0_0x0 =
       *(undefined8 *)&(pFVar4->OutlineColor).field0_0x0;
  *(undefined8 *)((longlong)&(this->OutlineSettings).OutlineColor.field0_0x0 + 8) = uVar2;
  (this->CompositeFont).Object = (FCompositeFont *)0x0;
  (this->CompositeFont).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  fVar8 = param_2;
  if (fVar3 <= param_2) {
    fVar8 = fVar3;
  }
  this->TypefaceFontName = *param_3;
  this->LetterSpacing = 0;
  this->SkewAmount = 0.0;
  this->FontFallback = FF_Max;
  this->bForceMonospaced = false;
  this->bMaterialIsStencil = false;
  if (fVar8 <= 0.0) {
    fVar8 = 0.0;
  }
  this->MonospacedWidth = 1.0;
  this->Size = fVar8;
  if ((param_2 < 0.0) || (fVar3 < param_2)) {
    `FSlateFontInfo::FSlateFontInfo'::__l2::<lambda_1>::operator()(local_res18);
  }
  if (param_1 == (UObject *)0x0) {
    if (2 < (byte)LogSlate._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogSlate);
    }
  }
  else {
    pUVar5 = UFontProviderInterface::StaticClass();
    plVar6 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)param_1,pUVar5);
    if (((plVar6 == (longlong *)0x0) || (lVar7 = (**(code **)(*plVar6 + 0x10))(plVar6), lVar7 == 0))
       && (5 < (byte)LogSlate._0_1_)) {
      param_4 = *(FFontOutlineSettings **)&param_1->field_0x18;
      ::FName::ToString((FName *)&param_4,local_38);
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogSlate);
      if (local_38[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38[0].Data.AllocatorInstance.Data);
      }
    }
  }
  return this;
}

// FSlateFontInfo @ 1424764b0

FSlateFontInfo * __thiscall
FSlateFontInfo::FSlateFontInfo
          (FSlateFontInfo *this,wchar_t *param_1,float param_2,EFontHinting param_3)

{
  float fVar1;
  FName *pFVar2;
  float fVar3;
  FName local_res8;
  undefined1 local_res18 [8];
  
  fVar1 = __real_477fff00;
  (this->FontObject).field0_0x0.DebugPtr = (UObject *)0x0;
  (this->FontMaterial).field0_0x0.DebugPtr = (UObject *)0x0;
  (this->OutlineSettings).OutlineMaterial.field0_0x0.DebugPtr = (UObject *)0x0;
  (this->OutlineSettings).OutlineSize = 0;
  (this->OutlineSettings).bMiteredCorners = false;
  (this->OutlineSettings).bSeparateFillAlpha = false;
  (this->OutlineSettings).bApplyOutlineToDropShadows = false;
  (this->OutlineSettings).OutlineColor.field0_0x0._s_0 =
       (FLinearColor_u_0_s_0)FLinearColor::Black.field0_0x0;
  (this->CompositeFont).Object = (FCompositeFont *)0x0;
  (this->CompositeFont).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->TypefaceFontName).ComparisonIndex = 0;
  (this->TypefaceFontName).Number = 0;
  fVar3 = param_2;
  if (fVar1 <= param_2) {
    fVar3 = fVar1;
  }
  this->LetterSpacing = 0;
  this->SkewAmount = 0.0;
  this->FontFallback = FF_Max;
  this->bForceMonospaced = false;
  this->bMaterialIsStencil = false;
  this->MonospacedWidth = 1.0;
  if (fVar3 <= 0.0) {
    fVar3 = 0.0;
  }
  this->Size = fVar3;
  if ((param_2 < 0.0) || (fVar1 < param_2)) {
    `FSlateFontInfo::FSlateFontInfo'::__l2::<lambda_1>::operator()(local_res18);
  }
  pFVar2 = ::FName::FName(&local_res8,param_1);
  UpgradeLegacyFontInfo(this,*pFVar2,param_3);
  return this;
}

// FSlateFontInfo @ 142476570

/* WARNING: Enum "Type": Some values do not have unique names */

FSlateFontInfo * __thiscall
FSlateFontInfo::FSlateFontInfo
          (FSlateFontInfo *this,TSharedPtr<FCompositeFont_const_,1> *param_1,float param_2,
          FName *param_3,FFontOutlineSettings *param_4)

{
  UObject *pUVar1;
  TReferenceControllerBase<1> *pTVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  undefined1 local_res18 [16];
  
  (this->FontObject).field0_0x0.DebugPtr = (UObject *)0x0;
  (this->FontMaterial).field0_0x0.DebugPtr = (UObject *)0x0;
  (this->OutlineSettings).OutlineSize = param_4->OutlineSize;
  (this->OutlineSettings).bMiteredCorners = param_4->bMiteredCorners;
  (this->OutlineSettings).bSeparateFillAlpha = param_4->bSeparateFillAlpha;
  (this->OutlineSettings).bApplyOutlineToDropShadows = param_4->bApplyOutlineToDropShadows;
  pUVar1 = (param_4->OutlineMaterial).field0_0x0.DebugPtr;
  (this->OutlineSettings).OutlineMaterial.field0_0x0.DebugPtr = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar1);
  }
  uVar3 = *(undefined8 *)((longlong)&(param_4->OutlineColor).field0_0x0 + 8);
  *(undefined8 *)&(this->OutlineSettings).OutlineColor.field0_0x0 =
       *(undefined8 *)&(param_4->OutlineColor).field0_0x0;
  *(undefined8 *)((longlong)&(this->OutlineSettings).OutlineColor.field0_0x0 + 8) = uVar3;
  (this->CompositeFont).Object = param_1->Object;
  pTVar2 = (param_1->SharedReferenceCount).ReferenceController;
  (this->CompositeFont).SharedReferenceCount.ReferenceController = pTVar2;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  this->TypefaceFontName = *param_3;
  this->LetterSpacing = 0;
  this->SkewAmount = 0.0;
  this->FontFallback = FF_Max;
  this->bForceMonospaced = false;
  this->bMaterialIsStencil = false;
  this->MonospacedWidth = 1.0;
  fVar4 = __real_477fff00;
  fVar5 = param_2;
  if (__real_477fff00 <= param_2) {
    fVar5 = __real_477fff00;
  }
  if (fVar5 <= 0.0) {
    fVar5 = 0.0;
  }
  this->Size = fVar5;
  if ((param_2 < 0.0) || (fVar4 < param_2)) {
    `FSlateFontInfo::FSlateFontInfo'::__l2::<lambda_1>::operator()(local_res18);
  }
  if ((param_1->Object == (FCompositeFont *)0x0) && (2 < (byte)LogSlate._0_1_)) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogSlate);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return this;
}

// FSlateFontInfo @ 142476690

FSlateFontInfo * __thiscall FSlateFontInfo::FSlateFontInfo(FSlateFontInfo *this)

{
  (this->FontObject).field0_0x0.DebugPtr = (UObject *)0x0;
  (this->FontMaterial).field0_0x0.DebugPtr = (UObject *)0x0;
  (this->OutlineSettings).OutlineMaterial.field0_0x0.DebugPtr = (UObject *)0x0;
  (this->OutlineSettings).OutlineSize = 0;
  (this->OutlineSettings).bMiteredCorners = false;
  (this->OutlineSettings).bSeparateFillAlpha = false;
  (this->OutlineSettings).bApplyOutlineToDropShadows = false;
  (this->OutlineSettings).OutlineColor.field0_0x0._s_0 =
       (FLinearColor_u_0_s_0)FLinearColor::Black.field0_0x0;
  (this->CompositeFont).Object = (FCompositeFont *)0x0;
  (this->CompositeFont).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->TypefaceFontName).ComparisonIndex = 0;
  (this->TypefaceFontName).Number = 0;
  this->SkewAmount = 0.0;
  this->bMaterialIsStencil = false;
  this->Size = 24.0;
  this->LetterSpacing = 0;
  this->FontFallback = FF_Max;
  this->bForceMonospaced = false;
  this->MonospacedWidth = 1.0;
  return this;
}

// AddReferencedObjects @ 14247fa60

void __thiscall
FSlateFontInfo::AddReferencedObjects(FSlateFontInfo *this,FReferenceCollector *param_1)

{
  (**(code **)(param_1->_padding_ + 0x88))(param_1,this,0,0);
  (**(code **)(param_1->_padding_ + 0x88))(param_1,&this->FontMaterial,0,0);
                    /* WARNING: Could not recover jumptable at 0x00014247fab5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1->_padding_ + 0x88))(param_1,&(this->OutlineSettings).OutlineMaterial,0,0);
  return;
}

// GetClampSize @ 14248c770

float __thiscall FSlateFontInfo::GetClampSize(FSlateFontInfo *this)

{
  float fVar1;
  
  fVar1 = this->Size;
  if (__real_477fff00 <= this->Size) {
    fVar1 = __real_477fff00;
  }
  if (fVar1 <= 0.0) {
    fVar1 = 0.0;
  }
  return fVar1;
}

// GetClampSkew @ 14248c790

float __thiscall FSlateFontInfo::GetClampSkew(FSlateFontInfo *this)

{
  float fVar1;
  
  fVar1 = this->SkewAmount;
  if (__real_40a00000 <= this->SkewAmount) {
    fVar1 = __real_40a00000;
  }
  if (fVar1 <= __real_c0a00000) {
    fVar1 = __real_c0a00000;
  }
  return fVar1;
}

// GetCompositeFont @ 14248cc50

FCompositeFont * __thiscall FSlateFontInfo::GetCompositeFont(FSlateFontInfo *this)

{
  UObjectBaseUtility *this_00;
  UClass *pUVar1;
  longlong *plVar2;
  FCompositeFont *pFVar3;
  FLegacySlateFontInfoCache *this_01;
  TSharedPtr<FCompositeFont_const_,1> *pTVar4;
  TSharedPtr<FCompositeFont_const_,1> local_18;
  
  this_00 = (UObjectBaseUtility *)(this->FontObject).field0_0x0.DebugPtr;
  if (this_00 != (UObjectBaseUtility *)0x0) {
    pUVar1 = UFontProviderInterface::StaticClass();
    plVar2 = UObjectBaseUtility::GetInterfaceAddress(this_00,pUVar1);
    if (plVar2 != (longlong *)0x0) {
      pFVar3 = (FCompositeFont *)(**(code **)(*plVar2 + 0x10))(plVar2);
      goto joined_r0x00014248cca2;
    }
  }
  pFVar3 = (this->CompositeFont).Object;
joined_r0x00014248cca2:
  if (pFVar3 == (FCompositeFont *)0x0) {
    this_01 = FLegacySlateFontInfoCache::Get();
    pTVar4 = FLegacySlateFontInfoCache::GetLastResortFont(this_01,&local_18);
    pFVar3 = pTVar4->Object;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
  }
  return pFVar3;
}

// HasValidFont @ 142497b20

bool __thiscall FSlateFontInfo::HasValidFont(FSlateFontInfo *this)

{
  if (((this->CompositeFont).Object == (FCompositeFont *)0x0) &&
     ((this->FontObject).field0_0x0.DebugPtr == (UObject *)0x0)) {
    return false;
  }
  return true;
}

// UpgradeLegacyFontInfo @ 1424ad500

void __thiscall
FSlateFontInfo::UpgradeLegacyFontInfo(FSlateFontInfo *this,FName param_1,EFontHinting param_2)

{
  FLegacySlateFontInfoCache *pFVar1;
  TSharedPtr<FCompositeFont_const_,1> *pTVar2;
  bool bVar3;
  FName local_res10;
  TSharedPtr<FCompositeFont_const_,1> local_28;
  TSharedPtr<FCompositeFont_const_,1> local_18;
  
  local_res10 = param_1;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FName::FName(&SpecialName_DefaultSystemFont,"DefaultSystemFont");
    _Init_thread_footer(&::_TSS0);
  }
  bVar3 = local_res10 != SpecialName_DefaultSystemFont;
  if (bVar3) {
    pFVar1 = FLegacySlateFontInfoCache::Get();
    pTVar2 = FLegacySlateFontInfoCache::GetCompositeFont(pFVar1,&local_28,&local_res10,param_2);
  }
  else {
    pFVar1 = FLegacySlateFontInfoCache::Get();
    pTVar2 = FLegacySlateFontInfoCache::GetSystemFont(pFVar1,&local_18);
  }
  if (&this->CompositeFont != pTVar2) {
    (this->CompositeFont).Object = pTVar2->Object;
    pTVar2->Object = (FCompositeFont *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->CompositeFont).SharedReferenceCount,&pTVar2->SharedReferenceCount);
  }
  if (bVar3) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28.SharedReferenceCount.ReferenceController);
  }
  else {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
  }
  return;
}

// operator= @ 1424eda20

FSlateFontInfo * __thiscall FSlateFontInfo::operator=(FSlateFontInfo *this,FSlateFontInfo *param_1)

{
  UObject *pUVar1;
  TReferenceControllerBase<1> *pTVar2;
  FCompositeFont *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  undefined8 uVar5;
  
  if ((UE::GC::GIsIncrementalReachabilityPending) &&
     (pUVar1 = (param_1->FontObject).field0_0x0.DebugPtr, pUVar1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar1);
  }
  (this->FontObject).field0_0x0 = (param_1->FontObject).field0_0x0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar1 = (param_1->FontMaterial).field0_0x0.DebugPtr, pUVar1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar1);
  }
  (this->FontMaterial).field0_0x0 = (param_1->FontMaterial).field0_0x0;
  (this->OutlineSettings).OutlineSize = (param_1->OutlineSettings).OutlineSize;
  (this->OutlineSettings).bMiteredCorners = (param_1->OutlineSettings).bMiteredCorners;
  (this->OutlineSettings).bSeparateFillAlpha = (param_1->OutlineSettings).bSeparateFillAlpha;
  (this->OutlineSettings).bApplyOutlineToDropShadows =
       (param_1->OutlineSettings).bApplyOutlineToDropShadows;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar1 = (param_1->OutlineSettings).OutlineMaterial.field0_0x0.DebugPtr,
     pUVar1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar1);
  }
  (this->OutlineSettings).OutlineMaterial.field0_0x0 =
       (param_1->OutlineSettings).OutlineMaterial.field0_0x0;
  uVar5 = *(undefined8 *)((longlong)&(param_1->OutlineSettings).OutlineColor.field0_0x0 + 8);
  *(undefined8 *)&(this->OutlineSettings).OutlineColor.field0_0x0 =
       *(undefined8 *)&(param_1->OutlineSettings).OutlineColor.field0_0x0;
  *(undefined8 *)((longlong)&(this->OutlineSettings).OutlineColor.field0_0x0 + 8) = uVar5;
  pTVar2 = (param_1->CompositeFont).SharedReferenceCount.ReferenceController;
  pFVar3 = (param_1->CompositeFont).Object;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar4 = (this->CompositeFont).SharedReferenceCount.ReferenceController;
  (this->CompositeFont).Object = pFVar3;
  (this->CompositeFont).SharedReferenceCount.ReferenceController = pTVar2;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  this->TypefaceFontName = param_1->TypefaceFontName;
  this->Size = param_1->Size;
  this->LetterSpacing = param_1->LetterSpacing;
  this->SkewAmount = param_1->SkewAmount;
  this->FontFallback = param_1->FontFallback;
  this->bForceMonospaced = param_1->bForceMonospaced;
  this->bMaterialIsStencil = param_1->bMaterialIsStencil;
  this->MonospacedWidth = param_1->MonospacedWidth;
  return this;
}

// operator() @ 15048dcf0

bool __thiscall `FSlateFontInfo::FSlateFontInfo'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_5015849824029769593>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_5015849824029769593>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 15048dd30

bool __thiscall `FSlateFontInfo::FSlateFontInfo'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_5015849824029769614>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_5015849824029769614>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 15048dd70

bool __thiscall `FSlateFontInfo::FSlateFontInfo'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_5015849824029769572>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_5015849824029769572>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 15048ddb0

bool __thiscall `FSlateFontInfo::FSlateFontInfo'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_5015849824029769643>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_5015849824029769643>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 15048ddf0

bool __thiscall `FSlateFontInfo::FSlateFontInfo'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_5015849824029769551>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_5015849824029769551>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 15048de30

bool __thiscall `FSlateFontInfo::FSlateFontInfo'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_5015849824029769663>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_5015849824029769663>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

