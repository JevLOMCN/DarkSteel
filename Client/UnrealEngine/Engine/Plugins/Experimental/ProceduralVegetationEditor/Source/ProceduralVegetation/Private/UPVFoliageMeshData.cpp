// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProceduralVegetation
// Functions: 8

// StaticClass @ 14da589b0

UClass * __cdecl UPVFoliageMeshData::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPVFoliageMeshData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProceduralVegetation",L"PVFoliageMeshData",
               &Z_Registration_Info_UClass_UPVFoliageMeshData.InnerSingleton,
               StaticRegisterNativesUPVFoliageMeshData,0x180,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UPVFoliageMeshData>,
               InternalVTableHelperCtorCaller<UPVFoliageMeshData>,local_res8,UPVData::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPVFoliageMeshData.InnerSingleton;
}

// UPVFoliageMeshData @ 14da66810

UPVFoliageMeshData * __thiscall
UPVFoliageMeshData::UPVFoliageMeshData(UPVFoliageMeshData *this,FVTableHelper *param_1)

{
  UPVData::UPVData((UPVData *)this,param_1);
  *(undefined ***)this = &___7UPVFoliageMeshData__6B_;
  return this;
}

// UPVFoliageMeshData @ 14da66840

UPVFoliageMeshData * __thiscall
UPVFoliageMeshData::UPVFoliageMeshData(UPVFoliageMeshData *this,FObjectInitializer *param_1)

{
  UPVData::UPVData((UPVData *)this,param_1);
  *(undefined ***)this = &___7UPVFoliageMeshData__6B_;
  return this;
}

// ~UPVFoliageMeshData @ 14da67bc0

void __thiscall UPVFoliageMeshData::~UPVFoliageMeshData(UPVFoliageMeshData *this)

{
  *(undefined ***)this = &___7UPVData__6B_;
  FManagedArrayCollection::~FManagedArrayCollection((FManagedArrayCollection *)&this->field_0x98);
  UPCGSpatialData::~UPCGSpatialData((UPCGSpatialData *)this);
  return;
}

// GetDataType @ 14da944b0

/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

EPCGDataType __thiscall UPVFoliageMeshData::GetDataType(UPVFoliageMeshData *this)

{
  return Any;
}

// GetDataTypeId @ 14da944e0

FPCGDataTypeBaseId * __thiscall UPVFoliageMeshData::GetDataTypeId(UPVFoliageMeshData *this)

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

// GetPrivateStaticClass @ 14da99140

UClass * __cdecl UPVFoliageMeshData::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPVFoliageMeshData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProceduralVegetation",L"PVFoliageMeshData",
               &Z_Registration_Info_UClass_UPVFoliageMeshData.InnerSingleton,
               StaticRegisterNativesUPVFoliageMeshData,0x180,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UPVFoliageMeshData>,
               InternalVTableHelperCtorCaller<UPVFoliageMeshData>,local_res8,UPVData::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPVFoliageMeshData.InnerSingleton;
}

// StaticRegisterNativesUPVFoliageMeshData @ 14daa98a0

void __cdecl UPVFoliageMeshData::StaticRegisterNativesUPVFoliageMeshData(void)

{
  return;
}

