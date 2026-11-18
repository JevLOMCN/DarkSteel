// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 5

// StaticStruct @ 147cad6d0

UScriptStruct * __cdecl FHLODProxyMesh::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FHLODProxyMesh.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FHLODProxyMesh.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FHLODProxyMesh,(UObject *)pUVar1,L"HLODProxyMesh"
                        );
  }
  return Z_Registration_Info_UScriptStruct_FHLODProxyMesh.OuterSingleton;
}

// FHLODProxyMesh @ 147cc39a0

FHLODProxyMesh * __thiscall FHLODProxyMesh::FHLODProxyMesh(FHLODProxyMesh *this)

{
  *(undefined8 *)&this->LODActor = 0;
  *(undefined8 *)&(this->LODActor).field_0x10 = 0;
  *(undefined8 *)&(this->LODActor).field_0x8 = 0;
  (this->StaticMesh).field0_0x0.DebugPtr = (UStaticMesh *)0x0;
  (this->Key).ComparisonIndex = 0;
  (this->Key).Number = 0;
  return this;
}

// GetKey @ 147d08d40

FName * __thiscall FHLODProxyMesh::GetKey(FHLODProxyMesh *this)

{
  return &this->Key;
}

// GetLODActor @ 147d08d50

TLazyObjectPtr<ALODActor> * __thiscall FHLODProxyMesh::GetLODActor(FHLODProxyMesh *this)

{
  return &this->LODActor;
}

// GetStaticMesh @ 147d0e0b0

UStaticMesh * __thiscall FHLODProxyMesh::GetStaticMesh(FHLODProxyMesh *this)

{
  return (this->StaticMesh).field0_0x0.DebugPtr;
}

