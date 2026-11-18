// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProceduralVegetation
// Functions: 4

// StaticStruct @ 14da56da0

UScriptStruct * __cdecl FPVDataTypeInfoMesh::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FPVDataTypeInfoMesh.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_ProceduralVegetation();
    Z_Registration_Info_UScriptStruct_FPVDataTypeInfoMesh.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FPVDataTypeInfoMesh,(UObject *)pUVar1,
                         L"PVDataTypeInfoMesh");
  }
  return Z_Registration_Info_UScriptStruct_FPVDataTypeInfoMesh.OuterSingleton;
}

// GetAssociatedClass @ 14da56de0

TSubclassOf<UPCGData> __thiscall FPVDataTypeInfoMesh::GetAssociatedClass(FPVDataTypeInfoMesh *this)

{
  UClass *pUVar1;
  TObjectPtr<UClass> in_RDX;
  
  pUVar1 = UPVMeshData::StaticClass();
  *(UClass **)in_RDX.field0_0x0 = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  return (TSubclassOf<UPCGData>)in_RDX.field0_0x0;
}

// AsId @ 14da700f0

FPCGDataTypeBaseId * __cdecl FPVDataTypeInfoMesh::AsId(void)

{
  UPackage *pUVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_FPCGDataTypeBaseId_const&___ptr64___cdecl_FPVDataTypeInfoMesh::AsId(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_FPCGDataTypeBaseId_const&___ptr64___cdecl_FPVDataTypeInfoMesh::AsId(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_FPCGDataTypeBaseId_const&___ptr64___cdecl_FPVDataTypeInfoMesh::AsId(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      if (Z_Registration_Info_UScriptStruct_FPVDataTypeInfoMesh.OuterSingleton ==
          (UScriptStruct *)0x0) {
        pUVar1 = Z_Construct_UPackage__Script_ProceduralVegetation();
        Z_Registration_Info_UScriptStruct_FPVDataTypeInfoMesh.OuterSingleton =
             GetStaticStruct(Z_Construct_UScriptStruct_FPVDataTypeInfoMesh,(UObject *)pUVar1,
                             L"PVDataTypeInfoMesh");
      }
      FPCGDataTypeBaseId::FPCGDataTypeBaseId
                (&`public:_static_struct_FPCGDataTypeBaseId_const&___ptr64___cdecl_FPVDataTypeInfoMesh::AsId(void)'
                  ::__l2::Id,Z_Registration_Info_UScriptStruct_FPVDataTypeInfoMesh.OuterSingleton);
      _Init_thread_footer(&`public:_static_struct_FPCGDataTypeBaseId_const&___ptr64___cdecl_FPVDataTypeInfoMesh::AsId(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_FPCGDataTypeBaseId_const&___ptr64___cdecl_FPVDataTypeInfoMesh::AsId(void)'
              ::__l2::Id;
    }
  }
  return &`public:_static_struct_FPCGDataTypeBaseId_const&___ptr64___cdecl_FPVDataTypeInfoMesh::AsId(void)'
          ::__l2::Id;
}

// GetStaticAssociatedClass @ 14da9a2e0

TSubclassOf<UPCGData> __cdecl FPVDataTypeInfoMesh::GetStaticAssociatedClass(void)

{
  UClass *pUVar1;
  TObjectPtr<UClass> in_RCX;
  
  pUVar1 = UPVMeshData::StaticClass();
  *(UClass **)in_RCX.field0_0x0 = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  return (TSubclassOf<UPCGData>)in_RCX.field0_0x0;
}

