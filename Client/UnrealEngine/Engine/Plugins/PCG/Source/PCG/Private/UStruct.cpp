// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 1

// IsChildOf<FPCGSplineStruct> @ 149886f90

bool __thiscall UStruct::IsChildOf<FPCGSplineStruct>(UStruct *this)

{
  int iVar1;
  UPackage *pUVar2;
  
  if (Z_Registration_Info_UScriptStruct_FPCGSplineStruct.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar2 = Z_Construct_UPackage__Script_PCG();
    Z_Registration_Info_UScriptStruct_FPCGSplineStruct.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FPCGSplineStruct,(UObject *)pUVar2,
                         L"PCGSplineStruct");
    if (Z_Registration_Info_UScriptStruct_FPCGSplineStruct.OuterSingleton == (UScriptStruct *)0x0) {
      return false;
    }
  }
  iVar1 = (int)(Z_Registration_Info_UScriptStruct_FPCGSplineStruct.OuterSingleton)->_padding_;
  if ((iVar1 <= (int)this->_padding_) &&
     ((longlong *)*(undefined1 **)(this->_padding_ + (longlong)iVar1 * 8) ==
      &(Z_Registration_Info_UScriptStruct_FPCGSplineStruct.OuterSingleton)->_padding_)) {
    return true;
  }
  return false;
}

