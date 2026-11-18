// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioWidgets
// Functions: 3

// StaticStruct @ 14d88f6e0

UScriptStruct * __cdecl FAudioMaterialWidgetStyle::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FAudioMaterialWidgetStyle.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AudioWidgets();
    Z_Registration_Info_UScriptStruct_FAudioMaterialWidgetStyle.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAudioMaterialWidgetStyle,(UObject *)pUVar1,
                         L"AudioMaterialWidgetStyle");
  }
  return Z_Registration_Info_UScriptStruct_FAudioMaterialWidgetStyle.OuterSingleton;
}

// FAudioMaterialWidgetStyle @ 14d8afd00

FAudioMaterialWidgetStyle * __thiscall
FAudioMaterialWidgetStyle::FAudioMaterialWidgetStyle(FAudioMaterialWidgetStyle *this)

{
  FSlateWidgetStyle::FSlateWidgetStyle((FSlateWidgetStyle *)this);
  this->_padding_ = (longlong)&___7FAudioMaterialWidgetStyle__6B_;
  (this->Material).field0_0x0.DebugPtr = (UMaterialInterface *)0x0;
  (this->DesiredSize).field0_0x0._s_0.X = 32.0;
  (this->DesiredSize).field0_0x0._s_0.Y = 32.0;
  return this;
}

// CreateDynamicMaterial @ 14d905c70

UMaterialInstanceDynamic * __thiscall
FAudioMaterialWidgetStyle::CreateDynamicMaterial(FAudioMaterialWidgetStyle *this,UObject *param_1)

{
  UMaterialInstanceDynamic *pUVar1;
  
  pUVar1 = UMaterialInstanceDynamic::Create((this->Material).field0_0x0.DebugPtr,param_1,(FName)0x0)
  ;
  return pUVar1;
}

