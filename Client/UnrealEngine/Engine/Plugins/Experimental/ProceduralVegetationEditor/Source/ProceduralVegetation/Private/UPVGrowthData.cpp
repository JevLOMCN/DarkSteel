// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProceduralVegetation
// Functions: 8

// StaticClass @ 14da59440

UClass * __cdecl UPVGrowthData::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPVGrowthData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProceduralVegetation",L"PVGrowthData",
               &Z_Registration_Info_UClass_UPVGrowthData.InnerSingleton,
               StaticRegisterNativesUPVGrowthData,0x180,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UPVGrowthData>,InternalVTableHelperCtorCaller<UPVGrowthData>,
               local_res8,UPVData::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPVGrowthData.InnerSingleton;
}

// UPVGrowthData @ 14da669b0

UPVGrowthData * __thiscall UPVGrowthData::UPVGrowthData(UPVGrowthData *this,FVTableHelper *param_1)

{
  UPVData::UPVData((UPVData *)this,param_1);
  *(undefined ***)this = &___7UPVGrowthData__6B_;
  return this;
}

// UPVGrowthData @ 14da669e0

UPVGrowthData * __thiscall
UPVGrowthData::UPVGrowthData(UPVGrowthData *this,FObjectInitializer *param_1)

{
  UPVData::UPVData((UPVData *)this,param_1);
  *(undefined ***)this = &___7UPVGrowthData__6B_;
  return this;
}

// ~UPVGrowthData @ 14da67c80

void __thiscall UPVGrowthData::~UPVGrowthData(UPVGrowthData *this)

{
  *(undefined ***)this = &___7UPVData__6B_;
  FManagedArrayCollection::~FManagedArrayCollection((FManagedArrayCollection *)&this->field_0x98);
  UPCGSpatialData::~UPCGSpatialData((UPCGSpatialData *)this);
  return;
}

// GetDataType @ 14da944c0

/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

EPCGDataType __thiscall UPVGrowthData::GetDataType(UPVGrowthData *this)

{
  return Any;
}

// GetDataTypeId @ 14da944f0

FPCGDataTypeBaseId * __thiscall UPVGrowthData::GetDataTypeId(UPVGrowthData *this)

{
  UPackage *pUVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_FPCGDataTypeBaseId_const&___ptr64___cdecl_FPVDataTypeInfoGrowth::AsId(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_FPCGDataTypeBaseId_const&___ptr64___cdecl_FPVDataTypeInfoGrowth::AsId(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_FPCGDataTypeBaseId_const&___ptr64___cdecl_FPVDataTypeInfoGrowth::AsId(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      if (Z_Registration_Info_UScriptStruct_FPVDataTypeInfoGrowth.OuterSingleton ==
          (UScriptStruct *)0x0) {
        pUVar1 = Z_Construct_UPackage__Script_ProceduralVegetation();
        Z_Registration_Info_UScriptStruct_FPVDataTypeInfoGrowth.OuterSingleton =
             GetStaticStruct(Z_Construct_UScriptStruct_FPVDataTypeInfoGrowth,(UObject *)pUVar1,
                             L"PVDataTypeInfoGrowth");
      }
      FPCGDataTypeBaseId::FPCGDataTypeBaseId
                (&`public:_static_struct_FPCGDataTypeBaseId_const&___ptr64___cdecl_FPVDataTypeInfoGrowth::AsId(void)'
                  ::__l2::Id,Z_Registration_Info_UScriptStruct_FPVDataTypeInfoGrowth.OuterSingleton)
      ;
      _Init_thread_footer(&`public:_static_struct_FPCGDataTypeBaseId_const&___ptr64___cdecl_FPVDataTypeInfoGrowth::AsId(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_FPCGDataTypeBaseId_const&___ptr64___cdecl_FPVDataTypeInfoGrowth::AsId(void)'
              ::__l2::Id;
    }
  }
  return &`public:_static_struct_FPCGDataTypeBaseId_const&___ptr64___cdecl_FPVDataTypeInfoGrowth::AsId(void)'
          ::__l2::Id;
}

// GetPrivateStaticClass @ 14da99380

UClass * __cdecl UPVGrowthData::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPVGrowthData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProceduralVegetation",L"PVGrowthData",
               &Z_Registration_Info_UClass_UPVGrowthData.InnerSingleton,
               StaticRegisterNativesUPVGrowthData,0x180,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UPVGrowthData>,InternalVTableHelperCtorCaller<UPVGrowthData>,
               local_res8,UPVData::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPVGrowthData.InnerSingleton;
}

// StaticRegisterNativesUPVGrowthData @ 14daa98d0

void __cdecl UPVGrowthData::StaticRegisterNativesUPVGrowthData(void)

{
  return;
}

