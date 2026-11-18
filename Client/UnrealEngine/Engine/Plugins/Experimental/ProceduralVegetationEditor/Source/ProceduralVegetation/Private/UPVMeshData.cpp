// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProceduralVegetation
// Functions: 8

// StaticClass @ 14da56e50

UClass * __cdecl UPVMeshData::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPVMeshData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProceduralVegetation",L"PVMeshData",
               &Z_Registration_Info_UClass_UPVMeshData.InnerSingleton,
               StaticRegisterNativesUPVMeshData,0x180,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UPVMeshData>,InternalVTableHelperCtorCaller<UPVMeshData>,
               local_res8,UPVData::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPVMeshData.InnerSingleton;
}

// UPVMeshData @ 14da66bb0

UPVMeshData * __thiscall UPVMeshData::UPVMeshData(UPVMeshData *this,FVTableHelper *param_1)

{
  UPVData::UPVData((UPVData *)this,param_1);
  *(undefined ***)this = &___7UPVMeshData__6B_;
  return this;
}

// UPVMeshData @ 14da66be0

UPVMeshData * __thiscall UPVMeshData::UPVMeshData(UPVMeshData *this,FObjectInitializer *param_1)

{
  UPVData::UPVData((UPVData *)this,param_1);
  *(undefined ***)this = &___7UPVMeshData__6B_;
  return this;
}

// ~UPVMeshData @ 14da67d80

void __thiscall UPVMeshData::~UPVMeshData(UPVMeshData *this)

{
  *(undefined ***)this = &___7UPVData__6B_;
  FManagedArrayCollection::~FManagedArrayCollection((FManagedArrayCollection *)&this->field_0x98);
  UPCGSpatialData::~UPCGSpatialData((UPCGSpatialData *)this);
  return;
}

// GetDataType @ 14da944d0

/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

EPCGDataType __thiscall UPVMeshData::GetDataType(UPVMeshData *this)

{
  return Any;
}

// GetDataTypeId @ 14da94500

FPCGDataTypeBaseId * __thiscall UPVMeshData::GetDataTypeId(UPVMeshData *this)

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

// GetPrivateStaticClass @ 14da995c0

UClass * __cdecl UPVMeshData::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPVMeshData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProceduralVegetation",L"PVMeshData",
               &Z_Registration_Info_UClass_UPVMeshData.InnerSingleton,
               StaticRegisterNativesUPVMeshData,0x180,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UPVMeshData>,InternalVTableHelperCtorCaller<UPVMeshData>,
               local_res8,UPVData::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPVMeshData.InnerSingleton;
}

// StaticRegisterNativesUPVMeshData @ 14daa9930

void __cdecl UPVMeshData::StaticRegisterNativesUPVMeshData(void)

{
  return;
}

