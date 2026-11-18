// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioWidgets
// Functions: 15

// StaticStruct @ 14d88f9b0

UScriptStruct * __cdecl FAudioMaterialMeterStyle::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FAudioMaterialMeterStyle.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AudioWidgets();
    Z_Registration_Info_UScriptStruct_FAudioMaterialMeterStyle.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAudioMaterialMeterStyle,(UObject *)pUVar1,
                         L"AudioMaterialMeterStyle");
  }
  return Z_Registration_Info_UScriptStruct_FAudioMaterialMeterStyle.OuterSingleton;
}

// FAudioMaterialMeterStyle @ 14d8afb50

FAudioMaterialMeterStyle * __thiscall
FAudioMaterialMeterStyle::FAudioMaterialMeterStyle(FAudioMaterialMeterStyle *this)

{
  FLinearColor FVar1;
  FLinearColor FVar2;
  TVector2<double> TVar3;
  
  FSlateWidgetStyle::FSlateWidgetStyle((FSlateWidgetStyle *)this);
  FVar1 = AudioWidgets::SlateTypesPrivate::MeterFillMinColor;
  this->_padding_ = 0;
  FVar2 = AudioWidgets::SlateTypesPrivate::MeterFillMidColor;
  *(undefined4 *)&this->_padding_ = 0x42000000;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0x42000000;
  (this->MeterFillMidColor).field0_0x0._s_0 = (FLinearColor_u_0_s_0)FVar2.field0_0x0;
  this->_padding_ = (longlong)&___7FAudioMaterialMeterStyle__6B_;
  FVar2 = AudioWidgets::SlateTypesPrivate::MeterFillBackgroundColor;
  (this->MeterFillMinColor).field0_0x0._s_0 = (FLinearColor_u_0_s_0)FVar1.field0_0x0;
  (this->MeterFillBackgroundColor).field0_0x0._s_0 = (FLinearColor_u_0_s_0)FVar2.field0_0x0;
  (this->MeterFillMaxColor).field0_0x0._s_0 = (FLinearColor_u_0_s_0)FVar1.field0_0x0;
  (this->MeterPadding).field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)AudioWidgets::SlateTypesPrivate::MeterPadding.field0_0x0;
  TVar3 = AudioWidgets::SlateTypesPrivate::MeterValueRangeDb;
  this->bShowScale = true;
  this->bScaleSide = true;
  this->ScaleHashOffset = 5.0;
  (this->ValueRangeDb).field0_0x0._s_0 = (TVector2<double>_u_0_s_0)TVar3.field0_0x0;
  this->ScaleHashWidth = 10.0;
  this->ScaleHashHeight = 1.0;
  this->DecibelsPerHash = 5;
  FStyleDefaults::GetFontInfo(&this->Font,5);
  this->_padding_ = 0x4400000041c80000;
  return this;
}

// operator= @ 14d8c3280

FAudioMaterialMeterStyle * __thiscall
FAudioMaterialMeterStyle::operator=
          (FAudioMaterialMeterStyle *this,FAudioMaterialMeterStyle *param_1)

{
  undefined8 uVar1;
  double dVar2;
  
  if ((UE::GC::GIsIncrementalReachabilityPending) &&
     ((UObject *)param_1->_padding_ != (UObject *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1->_padding_);
  }
  this->_padding_ = param_1->_padding_;
  this->_padding_ = param_1->_padding_;
  uVar1 = *(undefined8 *)((longlong)&(param_1->MeterFillMinColor).field0_0x0 + 8);
  *(undefined8 *)&(this->MeterFillMinColor).field0_0x0 =
       *(undefined8 *)&(param_1->MeterFillMinColor).field0_0x0;
  *(undefined8 *)((longlong)&(this->MeterFillMinColor).field0_0x0 + 8) = uVar1;
  uVar1 = *(undefined8 *)((longlong)&(param_1->MeterFillMidColor).field0_0x0 + 8);
  *(undefined8 *)&(this->MeterFillMidColor).field0_0x0 =
       *(undefined8 *)&(param_1->MeterFillMidColor).field0_0x0;
  *(undefined8 *)((longlong)&(this->MeterFillMidColor).field0_0x0 + 8) = uVar1;
  uVar1 = *(undefined8 *)((longlong)&(param_1->MeterFillMaxColor).field0_0x0 + 8);
  *(undefined8 *)&(this->MeterFillMaxColor).field0_0x0 =
       *(undefined8 *)&(param_1->MeterFillMaxColor).field0_0x0;
  *(undefined8 *)((longlong)&(this->MeterFillMaxColor).field0_0x0 + 8) = uVar1;
  uVar1 = *(undefined8 *)((longlong)&(param_1->MeterFillBackgroundColor).field0_0x0 + 8);
  *(undefined8 *)&(this->MeterFillBackgroundColor).field0_0x0 =
       *(undefined8 *)&(param_1->MeterFillBackgroundColor).field0_0x0;
  *(undefined8 *)((longlong)&(this->MeterFillBackgroundColor).field0_0x0 + 8) = uVar1;
  dVar2 = (param_1->MeterPadding).field0_0x0._s_0.Y;
  (this->MeterPadding).field0_0x0._s_0.X = (param_1->MeterPadding).field0_0x0._s_0.X;
  (this->MeterPadding).field0_0x0._s_0.Y = dVar2;
  dVar2 = (param_1->ValueRangeDb).field0_0x0._s_0.Y;
  (this->ValueRangeDb).field0_0x0._s_0.X = (param_1->ValueRangeDb).field0_0x0._s_0.X;
  (this->ValueRangeDb).field0_0x0._s_0.Y = dVar2;
  this->bShowScale = param_1->bShowScale;
  this->bScaleSide = param_1->bScaleSide;
  this->ScaleHashOffset = param_1->ScaleHashOffset;
  this->ScaleHashWidth = param_1->ScaleHashWidth;
  this->ScaleHashHeight = param_1->ScaleHashHeight;
  this->DecibelsPerHash = param_1->DecibelsPerHash;
  FSlateFontInfo::operator=(&this->Font,&param_1->Font);
  return this;
}

// CreateDynamicMaterial @ 14d9059d0

UMaterialInstanceDynamic * __thiscall
FAudioMaterialMeterStyle::CreateDynamicMaterial(FAudioMaterialMeterStyle *this,UObject *param_1)

{
  FString *pFVar1;
  size_t sVar2;
  UClass *pUVar3;
  UMaterialInterface *pUVar4;
  UMaterialInstanceDynamic *pUVar5;
  TStringView<wchar_t> local_38;
  TStringView<wchar_t> local_28;
  FString local_18;
  
  if ((UMaterialInterface *)this->_padding_ != (UMaterialInterface *)0x0) {
    pUVar5 = UMaterialInstanceDynamic::Create
                       ((UMaterialInterface *)this->_padding_,param_1,(FName)0x0);
    return pUVar5;
  }
  ::FString::FString((FString *)&local_28,"MI_AudioMaterialMeter.MI_AudioMaterialMeter");
  pFVar1 = ::FString::FString((FString *)&local_38,"/AudioWidgets/AudioMaterialSlate/");
  ::FString::ConcatFF(&local_18,pFVar1,(FString *)&local_28);
  if (local_38.DataPtr != (wchar_t *)0x0) {
    FMemory::Free(local_38.DataPtr);
  }
  if (local_28.DataPtr != (wchar_t *)0x0) {
    FMemory::Free(local_28.DataPtr);
  }
  local_38.Size = 0;
  local_38._12_4_ = 0;
  local_38.DataPtr = (wchar_t *)0x0;
  local_28.Size = 0;
  if (local_18.Data.ArrayNum == 0) {
    local_28.DataPtr = L"";
  }
  else {
    local_28.DataPtr = (wchar_t *)local_18.Data.AllocatorInstance.Data;
    if (local_18.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) goto LAB_14d905a7a;
  }
  sVar2 = wcslen(local_28.DataPtr);
  local_28.Size = (int)sVar2;
LAB_14d905a7a:
  pUVar3 = Z_Construct_UClass_UMaterialInterface_NoRegister();
  pUVar4 = (UMaterialInterface *)
           StaticLoadObject(pUVar3,(UObject *)0x0,&local_28,&local_38,0,(UPackageMap *)0x0,true,
                            (FLinkerInstancingContext *)0x0);
  pUVar5 = UMaterialInstanceDynamic::Create(pUVar4,param_1,(FName)0x0);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return pUVar5;
}

// GetDefault @ 14d92ca70

FAudioMaterialMeterStyle * __cdecl FAudioMaterialMeterStyle::GetDefault(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      FAudioMaterialMeterStyle(&::Default);
      atexit(`FAudioMaterialMeterStyle::GetDefault'::__l2::_dynamic_atexit_destructor_for__Default__
            );
      _Init_thread_footer(&::_TSS0);
      return &::Default;
    }
  }
  return &::Default;
}

// GetResources @ 14d934250

void __thiscall
FAudioMaterialMeterStyle::GetResources
          (FAudioMaterialMeterStyle *this,
          TArray<FSlateBrush_const_*,TSizedDefaultAllocator<32>_> *param_1)

{
  return;
}

// GetTypeName @ 14d9373f0

FName __thiscall FAudioMaterialMeterStyle::GetTypeName(FAudioMaterialMeterStyle *this)

{
  FName in_RDX;
  
  *(FName *)in_RDX = TypeName;
  return in_RDX;
}

// SetFont @ 14d968e40

FAudioMaterialMeterStyle * __thiscall
FAudioMaterialMeterStyle::SetFont(FAudioMaterialMeterStyle *this,FName *param_1,ushort param_2)

{
  FSlateFontInfo *pFVar1;
  FSlateFontInfo local_68;
  
  pFVar1 = FSlateFontInfo::FSlateFontInfo(&local_68,param_1,(float)param_2,Default);
  FSlateFontInfo::operator=(&this->Font,pFVar1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_68.CompositeFont.SharedReferenceCount.ReferenceController);
  return this;
}

// SetFont @ 14d968e90

FAudioMaterialMeterStyle * __thiscall
FAudioMaterialMeterStyle::SetFont(FAudioMaterialMeterStyle *this,FString *param_1,ushort param_2)

{
  FSlateFontInfo *pFVar1;
  wchar_t *pwVar2;
  FSlateFontInfo local_68;
  
  if ((param_1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  pFVar1 = FSlateFontInfo::FSlateFontInfo(&local_68,pwVar2,(float)param_2,Default);
  FSlateFontInfo::operator=(&this->Font,pFVar1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_68.CompositeFont.SharedReferenceCount.ReferenceController);
  return this;
}

// SetFont @ 14d968f00

FAudioMaterialMeterStyle * __thiscall
FAudioMaterialMeterStyle::SetFont(FAudioMaterialMeterStyle *this,char *param_1,ushort param_2)

{
  FSlateFontInfo *pFVar1;
  FSlateFontInfo local_68;
  
  pFVar1 = FSlateFontInfo::FSlateFontInfo(&local_68,param_1,(float)param_2,Default);
  FSlateFontInfo::operator=(&this->Font,pFVar1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_68.CompositeFont.SharedReferenceCount.ReferenceController);
  return this;
}

// SetFont @ 14d968f50

FAudioMaterialMeterStyle * __thiscall
FAudioMaterialMeterStyle::SetFont(FAudioMaterialMeterStyle *this,wchar_t *param_1,ushort param_2)

{
  FSlateFontInfo *pFVar1;
  FSlateFontInfo local_68;
  
  pFVar1 = FSlateFontInfo::FSlateFontInfo(&local_68,param_1,(float)param_2,Default);
  FSlateFontInfo::operator=(&this->Font,pFVar1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_68.CompositeFont.SharedReferenceCount.ReferenceController);
  return this;
}

// SetFontName @ 14d969100

FAudioMaterialMeterStyle * __thiscall
FAudioMaterialMeterStyle::SetFontName(FAudioMaterialMeterStyle *this,FName *param_1)

{
  FSlateFontInfo *pFVar1;
  FSlateFontInfo local_68;
  
  pFVar1 = FSlateFontInfo::FSlateFontInfo(&local_68,param_1,(this->Font).Size,Default);
  FSlateFontInfo::operator=(&this->Font,pFVar1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_68.CompositeFont.SharedReferenceCount.ReferenceController);
  return this;
}

// SetFontName @ 14d969160

FAudioMaterialMeterStyle * __thiscall
FAudioMaterialMeterStyle::SetFontName(FAudioMaterialMeterStyle *this,FString *param_1)

{
  FSlateFontInfo *pFVar1;
  FFontOutlineSettings local_88;
  FSlateFontInfo local_68;
  
  local_88.OutlineSize = 0;
  local_88.bMiteredCorners = false;
  local_88.bSeparateFillAlpha = false;
  local_88.bApplyOutlineToDropShadows = false;
  local_88.OutlineMaterial.field0_0x0.DebugPtr = (TObjectPtr<UObject>_u_0)0x0;
  local_88.OutlineColor.field0_0x0._s_0 = FLinearColor::Black.field0_0x0;
  pFVar1 = FSlateFontInfo::FSlateFontInfo(&local_68,param_1,(this->Font).Size,Default,&local_88);
  FSlateFontInfo::operator=(&this->Font,pFVar1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_68.CompositeFont.SharedReferenceCount.ReferenceController);
  return this;
}

// SetFontName @ 14d9691f0

FAudioMaterialMeterStyle * __thiscall
FAudioMaterialMeterStyle::SetFontName(FAudioMaterialMeterStyle *this,char *param_1)

{
  FSlateFontInfo *pFVar1;
  FSlateFontInfo local_68;
  
  pFVar1 = FSlateFontInfo::FSlateFontInfo(&local_68,param_1,(this->Font).Size,Default);
  FSlateFontInfo::operator=(&this->Font,pFVar1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_68.CompositeFont.SharedReferenceCount.ReferenceController);
  return this;
}

// SetFontName @ 14d969250

FAudioMaterialMeterStyle * __thiscall
FAudioMaterialMeterStyle::SetFontName(FAudioMaterialMeterStyle *this,wchar_t *param_1)

{
  FSlateFontInfo *pFVar1;
  FSlateFontInfo local_68;
  
  pFVar1 = FSlateFontInfo::FSlateFontInfo(&local_68,param_1,(this->Font).Size,Default);
  FSlateFontInfo::operator=(&this->Font,pFVar1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_68.CompositeFont.SharedReferenceCount.ReferenceController);
  return this;
}

