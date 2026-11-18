// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// StaticStruct @ 147321d80

UScriptStruct * __cdecl FKShapeElem::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FKShapeElem.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FKShapeElem.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FKShapeElem,(UObject *)pUVar1,L"KShapeElem");
  }
  return Z_Registration_Info_UScriptStruct_FKShapeElem.OuterSingleton;
}

// ~FKShapeElem @ 1476e8f40

void __thiscall FKShapeElem::~FKShapeElem(FKShapeElem *this)

{
  this->_padding_ = (longlong)&___7FKShapeElem__6B_;
  return;
}

