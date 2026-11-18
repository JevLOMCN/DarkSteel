// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioWidgets
// Functions: 6

// StaticStruct @ 14d88f9f0

UScriptStruct * __cdecl FAudioMaterialEnvelopeStyle::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FAudioMaterialEnvelopeStyle.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AudioWidgets();
    Z_Registration_Info_UScriptStruct_FAudioMaterialEnvelopeStyle.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAudioMaterialEnvelopeStyle,(UObject *)pUVar1,
                         L"AudioMaterialEnvelopeStyle");
  }
  return Z_Registration_Info_UScriptStruct_FAudioMaterialEnvelopeStyle.OuterSingleton;
}

// FAudioMaterialEnvelopeStyle @ 14d8af9d0

FAudioMaterialEnvelopeStyle * __thiscall
FAudioMaterialEnvelopeStyle::FAudioMaterialEnvelopeStyle(FAudioMaterialEnvelopeStyle *this)

{
  FLinearColor FVar1;
  
  FSlateWidgetStyle::FSlateWidgetStyle((FSlateWidgetStyle *)this);
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0x42000000;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0x42000000;
  this->_padding_ = (longlong)&___7FAudioMaterialEnvelopeStyle__6B_;
  (this->CurveColor).field0_0x0._s_0 = (FLinearColor_u_0_s_0)FLinearColor::White.field0_0x0;
  (this->BackgroundColor).field0_0x0._s_0 = (FLinearColor_u_0_s_0)FLinearColor::Black.field0_0x0;
  FVar1 = FLinearColor::Gray;
  this->_padding_ = 0x4380000043800000;
  (this->OutlineColor).field0_0x0._s_0 = (FLinearColor_u_0_s_0)FVar1.field0_0x0;
  return this;
}

// CreateDynamicMaterial @ 14d905730

UMaterialInstanceDynamic * __thiscall
FAudioMaterialEnvelopeStyle::CreateDynamicMaterial
          (FAudioMaterialEnvelopeStyle *this,UObject *param_1)

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
                     "MI_AudioMaterialEnvelope_ADSR.MI_AudioMaterialEnvelope_ADSR");
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
    if (local_18.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) goto LAB_14d9057da;
  }
  sVar2 = wcslen(local_28.DataPtr);
  local_28.Size = (int)sVar2;
LAB_14d9057da:
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

// GetDefault @ 14d92c900

FAudioMaterialEnvelopeStyle * __cdecl FAudioMaterialEnvelopeStyle::GetDefault(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      FSlateWidgetStyle::FSlateWidgetStyle((FSlateWidgetStyle *)&::Default);
      ::Default._padding_ = 0x4380000043800000;
      ::Default.CurveColor = FLinearColor::White;
      ::Default._padding_ = 0;
      ::Default._padding_ = (longlong)&___7FAudioMaterialEnvelopeStyle__6B_;
      ::Default.BackgroundColor = FLinearColor::Black;
      ::Default.OutlineColor = FLinearColor::Gray;
      atexit(`FAudioMaterialEnvelopeStyle::GetDefault'::__l2::
             _dynamic_atexit_destructor_for__Default__);
      _Init_thread_footer(&::_TSS0);
      return &::Default;
    }
  }
  return &::Default;
}

// GetResources @ 14d934230

void __thiscall
FAudioMaterialEnvelopeStyle::GetResources
          (FAudioMaterialEnvelopeStyle *this,
          TArray<FSlateBrush_const_*,TSizedDefaultAllocator<32>_> *param_1)

{
  return;
}

// GetTypeName @ 14d9373b0

FName __thiscall FAudioMaterialEnvelopeStyle::GetTypeName(FAudioMaterialEnvelopeStyle *this)

{
  FName in_RDX;
  
  *(FName *)in_RDX = TypeName;
  return in_RDX;
}

