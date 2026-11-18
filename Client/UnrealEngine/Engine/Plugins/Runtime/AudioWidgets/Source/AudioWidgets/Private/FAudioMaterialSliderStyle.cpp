// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioWidgets
// Functions: 7

// StaticStruct @ 14d88f8f0

UScriptStruct * __cdecl FAudioMaterialSliderStyle::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FAudioMaterialSliderStyle.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AudioWidgets();
    Z_Registration_Info_UScriptStruct_FAudioMaterialSliderStyle.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAudioMaterialSliderStyle,(UObject *)pUVar1,
                         L"AudioMaterialSliderStyle");
  }
  return Z_Registration_Info_UScriptStruct_FAudioMaterialSliderStyle.OuterSingleton;
}

// FAudioMaterialSliderStyle @ 14d8afc20

FAudioMaterialSliderStyle * __thiscall
FAudioMaterialSliderStyle::FAudioMaterialSliderStyle(FAudioMaterialSliderStyle *this)

{
  undefined8 uVar1;
  EStyleColor EVar2;
  undefined2 uVar3;
  FLinearColor FVar4;
  FLinearColor FVar5;
  FLinearColor FVar6;
  FAudioTextBoxStyle *pFVar7;
  
  FSlateWidgetStyle::FSlateWidgetStyle((FSlateWidgetStyle *)this);
  FVar4 = AudioWidgets::SlateTypesPrivate::SliderBackgroundColor;
  this->_padding_ = 0;
  FVar5 = AudioWidgets::SlateTypesPrivate::SliderBackgroundAccentColor;
  *(undefined4 *)&this->_padding_ = 0x42000000;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0x42000000;
  (this->SliderBackgroundColor).field0_0x0._s_0 = (FLinearColor_u_0_s_0)FVar4.field0_0x0;
  this->_padding_ = (longlong)&___7FAudioMaterialSliderStyle__6B_;
  FVar6 = AudioWidgets::SlateTypesPrivate::SliderValueMainColor;
  (this->SliderBackgroundAccentColor).field0_0x0._s_0 = (FLinearColor_u_0_s_0)FVar5.field0_0x0;
  FVar4 = AudioWidgets::SlateTypesPrivate::SliderHandleMainColor;
  (this->SliderValueMainColor).field0_0x0._s_0 = (FLinearColor_u_0_s_0)FVar6.field0_0x0;
  FVar5 = AudioWidgets::SlateTypesPrivate::SliderHandleOutlineColor;
  (this->SliderHandleMainColor).field0_0x0._s_0 = (FLinearColor_u_0_s_0)FVar4.field0_0x0;
  (this->SliderHandleOutlineColor).field0_0x0._s_0 = (FLinearColor_u_0_s_0)FVar5.field0_0x0;
  pFVar7 = FAudioTextBoxStyle::GetDefault();
  *(undefined ***)&this->TextBoxStyle = &___7FAudioTextBoxStyle__6B_;
  FSlateBrush::FSlateBrush(&(this->TextBoxStyle).BackgroundImage,&pFVar7->BackgroundImage);
  uVar1 = *(undefined8 *)((longlong)&(pFVar7->BackgroundColor).SpecifiedColor.field0_0x0 + 8);
  *(undefined8 *)&(this->TextBoxStyle).BackgroundColor.SpecifiedColor.field0_0x0 =
       *(undefined8 *)&(pFVar7->BackgroundColor).SpecifiedColor.field0_0x0;
  *(undefined8 *)((longlong)&(this->TextBoxStyle).BackgroundColor.SpecifiedColor.field0_0x0 + 8) =
       uVar1;
  EVar2 = (pFVar7->BackgroundColor).ColorTableId;
  uVar3 = *(undefined2 *)&(pFVar7->BackgroundColor).field_0x12;
  (this->TextBoxStyle).BackgroundColor.ColorUseRule = (pFVar7->BackgroundColor).ColorUseRule;
  (this->TextBoxStyle).BackgroundColor.ColorTableId = EVar2;
  *(undefined2 *)&(this->TextBoxStyle).BackgroundColor.field_0x12 = uVar3;
  this->_padding_ = 0x437a000041c80000;
  return this;
}

// operator= @ 14d8c3350

FAudioMaterialSliderStyle * __thiscall
FAudioMaterialSliderStyle::operator=
          (FAudioMaterialSliderStyle *this,FAudioMaterialSliderStyle *param_1)

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
  uVar1 = *(undefined8 *)((longlong)&(param_1->SliderBackgroundColor).field0_0x0 + 8);
  *(undefined8 *)&(this->SliderBackgroundColor).field0_0x0 =
       *(undefined8 *)&(param_1->SliderBackgroundColor).field0_0x0;
  *(undefined8 *)((longlong)&(this->SliderBackgroundColor).field0_0x0 + 8) = uVar1;
  uVar1 = *(undefined8 *)((longlong)&(param_1->SliderBackgroundAccentColor).field0_0x0 + 8);
  *(undefined8 *)&(this->SliderBackgroundAccentColor).field0_0x0 =
       *(undefined8 *)&(param_1->SliderBackgroundAccentColor).field0_0x0;
  *(undefined8 *)((longlong)&(this->SliderBackgroundAccentColor).field0_0x0 + 8) = uVar1;
  uVar1 = *(undefined8 *)((longlong)&(param_1->SliderValueMainColor).field0_0x0 + 8);
  *(undefined8 *)&(this->SliderValueMainColor).field0_0x0 =
       *(undefined8 *)&(param_1->SliderValueMainColor).field0_0x0;
  *(undefined8 *)((longlong)&(this->SliderValueMainColor).field0_0x0 + 8) = uVar1;
  uVar1 = *(undefined8 *)((longlong)&(param_1->SliderHandleMainColor).field0_0x0 + 8);
  *(undefined8 *)&(this->SliderHandleMainColor).field0_0x0 =
       *(undefined8 *)&(param_1->SliderHandleMainColor).field0_0x0;
  *(undefined8 *)((longlong)&(this->SliderHandleMainColor).field0_0x0 + 8) = uVar1;
  uVar1 = *(undefined8 *)((longlong)&(param_1->SliderHandleOutlineColor).field0_0x0 + 8);
  *(undefined8 *)&(this->SliderHandleOutlineColor).field0_0x0 =
       *(undefined8 *)&(param_1->SliderHandleOutlineColor).field0_0x0;
  *(undefined8 *)((longlong)&(this->SliderHandleOutlineColor).field0_0x0 + 8) = uVar1;
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

// CreateDynamicMaterial @ 14d905b20

UMaterialInstanceDynamic * __thiscall
FAudioMaterialSliderStyle::CreateDynamicMaterial(FAudioMaterialSliderStyle *this,UObject *param_1)

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
  ::FString::FString((FString *)&local_28,
                     "MI_AudioMaterialRoundedSlider.MI_AudioMaterialRoundedSlider");
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
    if (local_18.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) goto LAB_14d905bca;
  }
  sVar2 = wcslen(local_28.DataPtr);
  local_28.Size = (int)sVar2;
LAB_14d905bca:
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

// GetDefault @ 14d92cb00

FAudioMaterialSliderStyle * __cdecl FAudioMaterialSliderStyle::GetDefault(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      FAudioMaterialSliderStyle(&::Default);
      atexit(`FAudioMaterialSliderStyle::GetDefault'::__l2::
             _dynamic_atexit_destructor_for__Default__);
      _Init_thread_footer(&::_TSS0);
      return &::Default;
    }
  }
  return &::Default;
}

// GetResources @ 14d934260

void __thiscall
FAudioMaterialSliderStyle::GetResources
          (FAudioMaterialSliderStyle *this,
          TArray<FSlateBrush_const_*,TSizedDefaultAllocator<32>_> *param_1)

{
  return;
}

// GetTypeName @ 14d937410

FName __thiscall FAudioMaterialSliderStyle::GetTypeName(FAudioMaterialSliderStyle *this)

{
  FName in_RDX;
  
  *(FName *)in_RDX = TypeName;
  return in_RDX;
}

