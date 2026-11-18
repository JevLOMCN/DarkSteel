// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioWidgets
// Functions: 7

// StaticStruct @ 14d88f870

UScriptStruct * __cdecl FAudioMaterialButtonStyle::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FAudioMaterialButtonStyle.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AudioWidgets();
    Z_Registration_Info_UScriptStruct_FAudioMaterialButtonStyle.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAudioMaterialButtonStyle,(UObject *)pUVar1,
                         L"AudioMaterialButtonStyle");
  }
  return Z_Registration_Info_UScriptStruct_FAudioMaterialButtonStyle.OuterSingleton;
}

// FAudioMaterialButtonStyle @ 14d8af930

FAudioMaterialButtonStyle * __thiscall
FAudioMaterialButtonStyle::FAudioMaterialButtonStyle(FAudioMaterialButtonStyle *this)

{
  FLinearColor FVar1;
  FLinearColor FVar2;
  FLinearColor FVar3;
  
  FSlateWidgetStyle::FSlateWidgetStyle((FSlateWidgetStyle *)this);
  FVar1 = AudioWidgets::SlateTypesPrivate::ButtonMainColor;
  this->_padding_ = 0;
  FVar3 = AudioWidgets::SlateTypesPrivate::ButtonMainColorTint1;
  this->_padding_ = (longlong)&___7FAudioMaterialButtonStyle__6B_;
  (this->ButtonMainColor).field0_0x0._s_0 = (FLinearColor_u_0_s_0)FVar1.field0_0x0;
  (this->ButtonMainColorTint_2).field0_0x0._s_0 =
       (FLinearColor_u_0_s_0)AudioWidgets::SlateTypesPrivate::ButtonMainColorTint2.field0_0x0;
  this->_padding_ = 0x4300000043000000;
  FVar2 = AudioWidgets::SlateTypesPrivate::ButtonShadowColor;
  (this->ButtonMainColorTint_1).field0_0x0._s_0 = (FLinearColor_u_0_s_0)FVar3.field0_0x0;
  FVar1 = AudioWidgets::SlateTypesPrivate::ButtonAccentColor;
  (this->ButtonShadowColor).field0_0x0._s_0 = (FLinearColor_u_0_s_0)FVar2.field0_0x0;
  FVar2 = AudioWidgets::SlateTypesPrivate::ButtonPressedOutlineColor;
  (this->ButtonAccentColor).field0_0x0._s_0 = (FLinearColor_u_0_s_0)FVar1.field0_0x0;
  FVar1 = AudioWidgets::SlateTypesPrivate::ButtonUnpressedOutlineColor;
  (this->ButtonPressedOutlineColor).field0_0x0._s_0 = (FLinearColor_u_0_s_0)FVar2.field0_0x0;
  (this->ButtonUnpressedOutlineColor).field0_0x0._s_0 = (FLinearColor_u_0_s_0)FVar1.field0_0x0;
  return this;
}

// operator= @ 14d8c30f0

FAudioMaterialButtonStyle * __thiscall
FAudioMaterialButtonStyle::operator=
          (FAudioMaterialButtonStyle *this,FAudioMaterialButtonStyle *param_1)

{
  undefined8 uVar1;
  
  if ((UE::GC::GIsIncrementalReachabilityPending) &&
     ((UObject *)param_1->_padding_ != (UObject *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1->_padding_);
  }
  this->_padding_ = param_1->_padding_;
  this->_padding_ = param_1->_padding_;
  uVar1 = *(undefined8 *)((longlong)&(param_1->ButtonMainColor).field0_0x0 + 8);
  *(undefined8 *)&(this->ButtonMainColor).field0_0x0 =
       *(undefined8 *)&(param_1->ButtonMainColor).field0_0x0;
  *(undefined8 *)((longlong)&(this->ButtonMainColor).field0_0x0 + 8) = uVar1;
  uVar1 = *(undefined8 *)((longlong)&(param_1->ButtonMainColorTint_1).field0_0x0 + 8);
  *(undefined8 *)&(this->ButtonMainColorTint_1).field0_0x0 =
       *(undefined8 *)&(param_1->ButtonMainColorTint_1).field0_0x0;
  *(undefined8 *)((longlong)&(this->ButtonMainColorTint_1).field0_0x0 + 8) = uVar1;
  uVar1 = *(undefined8 *)((longlong)&(param_1->ButtonMainColorTint_2).field0_0x0 + 8);
  *(undefined8 *)&(this->ButtonMainColorTint_2).field0_0x0 =
       *(undefined8 *)&(param_1->ButtonMainColorTint_2).field0_0x0;
  *(undefined8 *)((longlong)&(this->ButtonMainColorTint_2).field0_0x0 + 8) = uVar1;
  uVar1 = *(undefined8 *)((longlong)&(param_1->ButtonAccentColor).field0_0x0 + 8);
  *(undefined8 *)&(this->ButtonAccentColor).field0_0x0 =
       *(undefined8 *)&(param_1->ButtonAccentColor).field0_0x0;
  *(undefined8 *)((longlong)&(this->ButtonAccentColor).field0_0x0 + 8) = uVar1;
  uVar1 = *(undefined8 *)((longlong)&(param_1->ButtonShadowColor).field0_0x0 + 8);
  *(undefined8 *)&(this->ButtonShadowColor).field0_0x0 =
       *(undefined8 *)&(param_1->ButtonShadowColor).field0_0x0;
  *(undefined8 *)((longlong)&(this->ButtonShadowColor).field0_0x0 + 8) = uVar1;
  uVar1 = *(undefined8 *)((longlong)&(param_1->ButtonUnpressedOutlineColor).field0_0x0 + 8);
  *(undefined8 *)&(this->ButtonUnpressedOutlineColor).field0_0x0 =
       *(undefined8 *)&(param_1->ButtonUnpressedOutlineColor).field0_0x0;
  *(undefined8 *)((longlong)&(this->ButtonUnpressedOutlineColor).field0_0x0 + 8) = uVar1;
  uVar1 = *(undefined8 *)((longlong)&(param_1->ButtonPressedOutlineColor).field0_0x0 + 8);
  *(undefined8 *)&(this->ButtonPressedOutlineColor).field0_0x0 =
       *(undefined8 *)&(param_1->ButtonPressedOutlineColor).field0_0x0;
  *(undefined8 *)((longlong)&(this->ButtonPressedOutlineColor).field0_0x0 + 8) = uVar1;
  return this;
}

// CreateDynamicMaterial @ 14d9055e0

UMaterialInstanceDynamic * __thiscall
FAudioMaterialButtonStyle::CreateDynamicMaterial(FAudioMaterialButtonStyle *this,UObject *param_1)

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
                     "MI_AudioMaterialToggleButton.MI_AudioMaterialToggleButton");
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
    if (local_18.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) goto LAB_14d90568a;
  }
  sVar2 = wcslen(local_28.DataPtr);
  local_28.Size = (int)sVar2;
LAB_14d90568a:
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

// GetDefault @ 14d92c870

FAudioMaterialButtonStyle * __cdecl FAudioMaterialButtonStyle::GetDefault(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      FAudioMaterialButtonStyle(&::Default);
      atexit(`FAudioMaterialButtonStyle::GetDefault'::__l2::
             _dynamic_atexit_destructor_for__Default__);
      _Init_thread_footer(&::_TSS0);
      return &::Default;
    }
  }
  return &::Default;
}

// GetResources @ 14d934220

void __thiscall
FAudioMaterialButtonStyle::GetResources
          (FAudioMaterialButtonStyle *this,
          TArray<FSlateBrush_const_*,TSizedDefaultAllocator<32>_> *param_1)

{
  return;
}

// GetTypeName @ 14d937390

FName __thiscall FAudioMaterialButtonStyle::GetTypeName(FAudioMaterialButtonStyle *this)

{
  FName in_RDX;
  
  *(FName *)in_RDX = TypeName;
  return in_RDX;
}

