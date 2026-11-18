// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// StaticStruct @ 1475888a0

UScriptStruct * __cdecl FSkeletalMeshVertexAttributeInfo::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FSkeletalMeshVertexAttributeInfo.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FSkeletalMeshVertexAttributeInfo.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FSkeletalMeshVertexAttributeInfo,
                         (UObject *)pUVar1,L"SkeletalMeshVertexAttributeInfo");
  }
  return Z_Registration_Info_UScriptStruct_FSkeletalMeshVertexAttributeInfo.OuterSingleton;
}

// IsEnabledForRender @ 1475e2170

bool __thiscall
FSkeletalMeshVertexAttributeInfo::IsEnabledForRender(FSkeletalMeshVertexAttributeInfo *this)

{
  return (this->EnabledForRender).Default;
}

