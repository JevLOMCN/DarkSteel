// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 2

// StaticStruct @ 14245a140

UScriptStruct * __cdecl FFontOutlineSettings::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FFontOutlineSettings.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_SlateCore();
    Z_Registration_Info_UScriptStruct_FFontOutlineSettings.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FFontOutlineSettings,(UObject *)pUVar1,
                         L"FontOutlineSettings");
  }
  return Z_Registration_Info_UScriptStruct_FFontOutlineSettings.OuterSingleton;
}

// FFontOutlineSettings @ 142544230

FFontOutlineSettings * __thiscall
FFontOutlineSettings::FFontOutlineSettings(FFontOutlineSettings *this)

{
  (this->OutlineMaterial).field0_0x0.DebugPtr = (UObject *)0x0;
  this->OutlineSize = 0;
  this->bMiteredCorners = false;
  this->bSeparateFillAlpha = false;
  this->bApplyOutlineToDropShadows = false;
  (this->OutlineColor).field0_0x0._s_0 = (FLinearColor_u_0_s_0)FLinearColor::Black.field0_0x0;
  return this;
}

