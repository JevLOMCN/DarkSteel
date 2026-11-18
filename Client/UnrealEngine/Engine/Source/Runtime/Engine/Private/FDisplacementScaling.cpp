// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// StaticStruct @ 147ba3970

UScriptStruct * __cdecl FDisplacementScaling::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDisplacementScaling.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FDisplacementScaling.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDisplacementScaling,(UObject *)pUVar1,
                         L"DisplacementScaling");
  }
  return Z_Registration_Info_UScriptStruct_FDisplacementScaling.OuterSingleton;
}

// operator!= @ 147f2f9d0

bool __thiscall
FDisplacementScaling::operator!=(FDisplacementScaling *this,FDisplacementScaling *param_1)

{
  if (((float)((uint)(this->Magnitude - param_1->Magnitude) & __xmm_7fffffff7fffffff7fffffff7fffffff
              ) <= __real_322bcc77) &&
     ((float)((uint)(this->Center - param_1->Center) & __xmm_7fffffff7fffffff7fffffff7fffffff) <=
      __real_322bcc77)) {
    return false;
  }
  return true;
}

