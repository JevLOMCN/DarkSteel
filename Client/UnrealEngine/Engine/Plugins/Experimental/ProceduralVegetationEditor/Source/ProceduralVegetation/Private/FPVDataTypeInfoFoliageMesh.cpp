// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProceduralVegetation
// Functions: 4

// StaticStruct @ 14da58850

UScriptStruct * __cdecl FPVDataTypeInfoFoliageMesh::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FPVDataTypeInfoFoliageMesh.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ProceduralVegetation();
    Z_Registration_Info_UScriptStruct_FPVDataTypeInfoFoliageMesh.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FPVDataTypeInfoFoliageMesh,(UObject *)pUVar1,
                         L"PVDataTypeInfoFoliageMesh");
  }
  return Z_Registration_Info_UScriptStruct_FPVDataTypeInfoFoliageMesh.OuterSingleton;
}

// GetAssociatedClass @ 14da58890

TSubclassOf<UPCGData> __thiscall
FPVDataTypeInfoFoliageMesh::GetAssociatedClass(FPVDataTypeInfoFoliageMesh *this)

{
  UClass *pUVar1;
  TObjectPtr<UClass> in_RDX;
  
  pUVar1 = UPVFoliageMeshData::StaticClass();
  *(UClass **)in_RDX.field0_0x0 = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  return (TSubclassOf<UPCGData>)in_RDX.field0_0x0;
}

// AsId @ 14da6ff90

FPCGDataTypeBaseId * __cdecl FPVDataTypeInfoFoliageMesh::AsId(void)

{
  UPackage *pUVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_FPCGDataTypeBaseId_const&___ptr64___cdecl_FPVDataTypeInfoFoliageMesh::AsId(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_FPCGDataTypeBaseId_const&___ptr64___cdecl_FPVDataTypeInfoFoliageMesh::AsId(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_FPCGDataTypeBaseId_const&___ptr64___cdecl_FPVDataTypeInfoFoliageMesh::AsId(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      if (Z_Registration_Info_UScriptStruct_FPVDataTypeInfoFoliageMesh.OuterSingleton ==
          (UScriptStruct *)0x0) {
        pUVar1 = Z_Construct_UPackage__Script_ProceduralVegetation();
        Z_Registration_Info_UScriptStruct_FPVDataTypeInfoFoliageMesh.OuterSingleton =
             GetStaticStruct(Z_Construct_UScriptStruct_FPVDataTypeInfoFoliageMesh,(UObject *)pUVar1,
                             L"PVDataTypeInfoFoliageMesh");
      }
      FPCGDataTypeBaseId::FPCGDataTypeBaseId
                (&`public:_static_struct_FPCGDataTypeBaseId_const&___ptr64___cdecl_FPVDataTypeInfoFoliageMesh::AsId(void)'
                  ::__l2::Id,
                 Z_Registration_Info_UScriptStruct_FPVDataTypeInfoFoliageMesh.OuterSingleton);
      _Init_thread_footer(&`public:_static_struct_FPCGDataTypeBaseId_const&___ptr64___cdecl_FPVDataTypeInfoFoliageMesh::AsId(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_FPCGDataTypeBaseId_const&___ptr64___cdecl_FPVDataTypeInfoFoliageMesh::AsId(void)'
              ::__l2::Id;
    }
  }
  return &`public:_static_struct_FPCGDataTypeBaseId_const&___ptr64___cdecl_FPVDataTypeInfoFoliageMesh::AsId(void)'
          ::__l2::Id;
}

// GetStaticAssociatedClass @ 14da9a260

TSubclassOf<UPCGData> __cdecl FPVDataTypeInfoFoliageMesh::GetStaticAssociatedClass(void)

{
  UClass *pUVar1;
  TObjectPtr<UClass> in_RCX;
  
  pUVar1 = UPVFoliageMeshData::StaticClass();
  *(UClass **)in_RCX.field0_0x0 = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  return (TSubclassOf<UPCGData>)in_RCX.field0_0x0;
}

