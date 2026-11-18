// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// StaticStruct @ 147ba39c0

UScriptStruct * __cdecl FDisplacementFadeRange::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDisplacementFadeRange.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FDisplacementFadeRange.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDisplacementFadeRange,(UObject *)pUVar1,
                         L"DisplacementFadeRange");
  }
  return Z_Registration_Info_UScriptStruct_FDisplacementFadeRange.OuterSingleton;
}

// operator!= @ 147f2f990

bool __thiscall
FDisplacementFadeRange::operator!=(FDisplacementFadeRange *this,FDisplacementFadeRange *param_1)

{
  if (((float)((uint)(this->StartSizePixels - param_1->StartSizePixels) &
              __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_322bcc77) &&
     ((float)((uint)(this->EndSizePixels - param_1->EndSizePixels) &
             __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_322bcc77)) {
    return false;
  }
  return true;
}

