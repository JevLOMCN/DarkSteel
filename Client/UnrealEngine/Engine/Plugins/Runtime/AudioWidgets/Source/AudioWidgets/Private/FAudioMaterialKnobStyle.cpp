// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioWidgets
// Functions: 7

// StaticStruct @ 14d88f970

UScriptStruct * __cdecl FAudioMaterialKnobStyle::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FAudioMaterialKnobStyle.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AudioWidgets();
    Z_Registration_Info_UScriptStruct_FAudioMaterialKnobStyle.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAudioMaterialKnobStyle,(UObject *)pUVar1,
                         L"AudioMaterialKnobStyle");
  }
  return Z_Registration_Info_UScriptStruct_FAudioMaterialKnobStyle.OuterSingleton;
}

// FAudioMaterialKnobStyle @ 14d8afa50

FAudioMaterialKnobStyle * __thiscall
FAudioMaterialKnobStyle::FAudioMaterialKnobStyle(FAudioMaterialKnobStyle *this)

{
  FLinearColor FVar1;
  FLinearColor FVar2;
  
  FSlateWidgetStyle::FSlateWidgetStyle((FSlateWidgetStyle *)this);
  FVar1 = AudioWidgets::SlateTypesPrivate::KnobMainColor;
  this->_padding_ = 0;
  FVar2 = AudioWidgets::SlateTypesPrivate::KnobAccentColor;
  *(undefined4 *)&this->_padding_ = 0x42000000;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0x42000000;
  (this->KnobMainColor).field0_0x0._s_0 = (FLinearColor_u_0_s_0)FVar1.field0_0x0;
  this->_padding_ = (longlong)&___7FAudioMaterialKnobStyle__6B_;
  FVar1 = AudioWidgets::SlateTypesPrivate::KnobShadowColor;
  (this->KnobAccentColor).field0_0x0._s_0 = (FLinearColor_u_0_s_0)FVar2.field0_0x0;
  FVar2 = AudioWidgets::SlateTypesPrivate::KnobSmoothBevelColor;
  (this->KnobShadowColor).field0_0x0._s_0 = (FLinearColor_u_0_s_0)FVar1.field0_0x0;
  FVar1 = AudioWidgets::SlateTypesPrivate::KnobIndicatorDotColor;
  (this->KnobSmoothBevelColor).field0_0x0._s_0 = (FLinearColor_u_0_s_0)FVar2.field0_0x0;
  FVar2 = AudioWidgets::SlateTypesPrivate::KnobEdgeFillColor;
  (this->KnobIndicatorDotColor).field0_0x0._s_0 = (FLinearColor_u_0_s_0)FVar1.field0_0x0;
  FVar1 = AudioWidgets::SlateTypesPrivate::KnobBarColor;
  (this->KnobEdgeFillColor).field0_0x0._s_0 = (FLinearColor_u_0_s_0)FVar2.field0_0x0;
  FVar2 = AudioWidgets::SlateTypesPrivate::KnobBarShadowColor;
  (this->KnobBarColor).field0_0x0._s_0 = (FLinearColor_u_0_s_0)FVar1.field0_0x0;
  FVar1 = AudioWidgets::SlateTypesPrivate::KnobBarFillMinColor;
  (this->KnobBarShadowColor).field0_0x0._s_0 = (FLinearColor_u_0_s_0)FVar2.field0_0x0;
  FVar2 = AudioWidgets::SlateTypesPrivate::KnobBarFillMidColor;
  (this->KnobBarFillMinColor).field0_0x0._s_0 = (FLinearColor_u_0_s_0)FVar1.field0_0x0;
  FVar1 = AudioWidgets::SlateTypesPrivate::KnobBarFillMaxColor;
  (this->KnobBarFillMidColor).field0_0x0._s_0 = (FLinearColor_u_0_s_0)FVar2.field0_0x0;
  FVar2 = AudioWidgets::SlateTypesPrivate::KnobBarFillTintColor;
  (this->KnobBarFillMaxColor).field0_0x0._s_0 = (FLinearColor_u_0_s_0)FVar1.field0_0x0;
  (this->KnobBarFillTintColor).field0_0x0._s_0 = (FLinearColor_u_0_s_0)FVar2.field0_0x0;
  FAudioTextBoxStyle::FAudioTextBoxStyle(&this->TextBoxStyle);
  this->_padding_ = 0x4300000043000000;
  return this;
}

// operator= @ 14d8c3180

FAudioMaterialKnobStyle * __thiscall
FAudioMaterialKnobStyle::operator=(FAudioMaterialKnobStyle *this,FAudioMaterialKnobStyle *param_1)

{
  undefined8 uVar1;
  EStyleColor EVar2;
  undefined2 uVar3;
  
  if ((UE::GC::GIsIncrementalReachabilityPending) &&
     ((UObject *)param_1->_padding_ != (UObject *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1->_padding_);
  }
  this->_padding_ = param_1->_padding_;
  this->_padding_ = param_1->_padding_;
  uVar1 = *(undefined8 *)((longlong)&(param_1->KnobMainColor).field0_0x0 + 8);
  *(undefined8 *)&(this->KnobMainColor).field0_0x0 =
       *(undefined8 *)&(param_1->KnobMainColor).field0_0x0;
  *(undefined8 *)((longlong)&(this->KnobMainColor).field0_0x0 + 8) = uVar1;
  uVar1 = *(undefined8 *)((longlong)&(param_1->KnobAccentColor).field0_0x0 + 8);
  *(undefined8 *)&(this->KnobAccentColor).field0_0x0 =
       *(undefined8 *)&(param_1->KnobAccentColor).field0_0x0;
  *(undefined8 *)((longlong)&(this->KnobAccentColor).field0_0x0 + 8) = uVar1;
  uVar1 = *(undefined8 *)((longlong)&(param_1->KnobShadowColor).field0_0x0 + 8);
  *(undefined8 *)&(this->KnobShadowColor).field0_0x0 =
       *(undefined8 *)&(param_1->KnobShadowColor).field0_0x0;
  *(undefined8 *)((longlong)&(this->KnobShadowColor).field0_0x0 + 8) = uVar1;
  uVar1 = *(undefined8 *)((longlong)&(param_1->KnobSmoothBevelColor).field0_0x0 + 8);
  *(undefined8 *)&(this->KnobSmoothBevelColor).field0_0x0 =
       *(undefined8 *)&(param_1->KnobSmoothBevelColor).field0_0x0;
  *(undefined8 *)((longlong)&(this->KnobSmoothBevelColor).field0_0x0 + 8) = uVar1;
  uVar1 = *(undefined8 *)((longlong)&(param_1->KnobIndicatorDotColor).field0_0x0 + 8);
  *(undefined8 *)&(this->KnobIndicatorDotColor).field0_0x0 =
       *(undefined8 *)&(param_1->KnobIndicatorDotColor).field0_0x0;
  *(undefined8 *)((longlong)&(this->KnobIndicatorDotColor).field0_0x0 + 8) = uVar1;
  uVar1 = *(undefined8 *)((longlong)&(param_1->KnobEdgeFillColor).field0_0x0 + 8);
  *(undefined8 *)&(this->KnobEdgeFillColor).field0_0x0 =
       *(undefined8 *)&(param_1->KnobEdgeFillColor).field0_0x0;
  *(undefined8 *)((longlong)&(this->KnobEdgeFillColor).field0_0x0 + 8) = uVar1;
  uVar1 = *(undefined8 *)((longlong)&(param_1->KnobBarColor).field0_0x0 + 8);
  *(undefined8 *)&(this->KnobBarColor).field0_0x0 =
       *(undefined8 *)&(param_1->KnobBarColor).field0_0x0;
  *(undefined8 *)((longlong)&(this->KnobBarColor).field0_0x0 + 8) = uVar1;
  uVar1 = *(undefined8 *)((longlong)&(param_1->KnobBarShadowColor).field0_0x0 + 8);
  *(undefined8 *)&(this->KnobBarShadowColor).field0_0x0 =
       *(undefined8 *)&(param_1->KnobBarShadowColor).field0_0x0;
  *(undefined8 *)((longlong)&(this->KnobBarShadowColor).field0_0x0 + 8) = uVar1;
  uVar1 = *(undefined8 *)((longlong)&(param_1->KnobBarFillMinColor).field0_0x0 + 8);
  *(undefined8 *)&(this->KnobBarFillMinColor).field0_0x0 =
       *(undefined8 *)&(param_1->KnobBarFillMinColor).field0_0x0;
  *(undefined8 *)((longlong)&(this->KnobBarFillMinColor).field0_0x0 + 8) = uVar1;
  uVar1 = *(undefined8 *)((longlong)&(param_1->KnobBarFillMidColor).field0_0x0 + 8);
  *(undefined8 *)&(this->KnobBarFillMidColor).field0_0x0 =
       *(undefined8 *)&(param_1->KnobBarFillMidColor).field0_0x0;
  *(undefined8 *)((longlong)&(this->KnobBarFillMidColor).field0_0x0 + 8) = uVar1;
  uVar1 = *(undefined8 *)((longlong)&(param_1->KnobBarFillMaxColor).field0_0x0 + 8);
  *(undefined8 *)&(this->KnobBarFillMaxColor).field0_0x0 =
       *(undefined8 *)&(param_1->KnobBarFillMaxColor).field0_0x0;
  *(undefined8 *)((longlong)&(this->KnobBarFillMaxColor).field0_0x0 + 8) = uVar1;
  uVar1 = *(undefined8 *)((longlong)&(param_1->KnobBarFillTintColor).field0_0x0 + 8);
  *(undefined8 *)&(this->KnobBarFillTintColor).field0_0x0 =
       *(undefined8 *)&(param_1->KnobBarFillTintColor).field0_0x0;
  *(undefined8 *)((longlong)&(this->KnobBarFillTintColor).field0_0x0 + 8) = uVar1;
  FSlateBrush::operator=
            (&(this->TextBoxStyle).BackgroundImage,&(param_1->TextBoxStyle).BackgroundImage);
  uVar1 = *(undefined8 *)
           ((longlong)&(param_1->TextBoxStyle).BackgroundColor.SpecifiedColor.field0_0x0 + 8);
  *(undefined8 *)&(this->TextBoxStyle).BackgroundColor.SpecifiedColor.field0_0x0 =
       *(undefined8 *)&(param_1->TextBoxStyle).BackgroundColor.SpecifiedColor.field0_0x0;
  *(undefined8 *)((longlong)&(this->TextBoxStyle).BackgroundColor.SpecifiedColor.field0_0x0 + 8) =
       uVar1;
  EVar2 = (param_1->TextBoxStyle).BackgroundColor.ColorTableId;
  uVar3 = *(undefined2 *)&(param_1->TextBoxStyle).BackgroundColor.field_0x12;
  (this->TextBoxStyle).BackgroundColor.ColorUseRule =
       (param_1->TextBoxStyle).BackgroundColor.ColorUseRule;
  (this->TextBoxStyle).BackgroundColor.ColorTableId = EVar2;
  *(undefined2 *)&(this->TextBoxStyle).BackgroundColor.field_0x12 = uVar3;
  return this;
}

// CreateDynamicMaterial @ 14d905880

UMaterialInstanceDynamic * __thiscall
FAudioMaterialKnobStyle::CreateDynamicMaterial(FAudioMaterialKnobStyle *this,UObject *param_1)

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
  ::FString::FString((FString *)&local_28,"MI_AudioMaterialKnob.MI_AudioMaterialKnob");
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
    if (local_18.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) goto LAB_14d90592a;
  }
  sVar2 = wcslen(local_28.DataPtr);
  local_28.Size = (int)sVar2;
LAB_14d90592a:
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

// GetDefault @ 14d92c9e0

FAudioMaterialKnobStyle * __cdecl FAudioMaterialKnobStyle::GetDefault(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      FAudioMaterialKnobStyle(&::Default);
      atexit(`FAudioMaterialKnobStyle::GetDefault'::__l2::_dynamic_atexit_destructor_for__Default__)
      ;
      _Init_thread_footer(&::_TSS0);
      return &::Default;
    }
  }
  return &::Default;
}

// GetResources @ 14d934240

void __thiscall
FAudioMaterialKnobStyle::GetResources
          (FAudioMaterialKnobStyle *this,
          TArray<FSlateBrush_const_*,TSizedDefaultAllocator<32>_> *param_1)

{
  return;
}

// GetTypeName @ 14d9373d0

FName __thiscall FAudioMaterialKnobStyle::GetTypeName(FAudioMaterialKnobStyle *this)

{
  FName in_RDX;
  
  *(FName *)in_RDX = TypeName;
  return in_RDX;
}

