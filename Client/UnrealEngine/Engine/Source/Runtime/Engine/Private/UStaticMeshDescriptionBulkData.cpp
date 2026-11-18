// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 148766f50

UClass * __cdecl UStaticMeshDescriptionBulkData::StaticClass(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UStaticMeshDescriptionBulkData.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"StaticMeshDescriptionBulkData",
               &Z_Registration_Info_UClass_UStaticMeshDescriptionBulkData.InnerSingleton,
               StaticRegisterNativesUStaticMeshDescriptionBulkData,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UStaticMeshDescriptionBulkData>,
               InternalVTableHelperCtorCaller<UStaticMeshDescriptionBulkData>,aFStackX_8,
               UMeshDescriptionBaseBulkData::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UStaticMeshDescriptionBulkData.InnerSingleton;
}

// UStaticMeshDescriptionBulkData @ 14877d400

UStaticMeshDescriptionBulkData * __thiscall
UStaticMeshDescriptionBulkData::UStaticMeshDescriptionBulkData
          (UStaticMeshDescriptionBulkData *this,FVTableHelper *param_1)

{
  UMeshDescriptionBaseBulkData::UMeshDescriptionBaseBulkData
            ((UMeshDescriptionBaseBulkData *)this,param_1);
  *(undefined ***)this = &___7UStaticMeshDescriptionBulkData__6B_;
  return this;
}

// UStaticMeshDescriptionBulkData @ 14877d430

UStaticMeshDescriptionBulkData * __thiscall
UStaticMeshDescriptionBulkData::UStaticMeshDescriptionBulkData(UStaticMeshDescriptionBulkData *this)

{
  UMeshDescriptionBaseBulkData::UMeshDescriptionBaseBulkData((UMeshDescriptionBaseBulkData *)this);
  *(undefined ***)this = &___7UStaticMeshDescriptionBulkData__6B_;
  return this;
}

// ~UStaticMeshDescriptionBulkData @ 148780760

void __thiscall
UStaticMeshDescriptionBulkData::~UStaticMeshDescriptionBulkData
          (UStaticMeshDescriptionBulkData *this)

{
  *(undefined ***)this = &___7UStaticMeshDescriptionBulkData__6B_;
  UMeshDescriptionBaseBulkData::~UMeshDescriptionBaseBulkData((UMeshDescriptionBaseBulkData *)this);
  return;
}

// GetPrivateStaticClass @ 1487a2b20

UClass * __cdecl UStaticMeshDescriptionBulkData::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UStaticMeshDescriptionBulkData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"StaticMeshDescriptionBulkData",
               &Z_Registration_Info_UClass_UStaticMeshDescriptionBulkData.InnerSingleton,
               StaticRegisterNativesUStaticMeshDescriptionBulkData,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UStaticMeshDescriptionBulkData>,
               InternalVTableHelperCtorCaller<UStaticMeshDescriptionBulkData>,local_res8,
               UMeshDescriptionBaseBulkData::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UStaticMeshDescriptionBulkData.InnerSingleton;
}

// StaticRegisterNativesUStaticMeshDescriptionBulkData @ 1487c57e0

void __cdecl
UStaticMeshDescriptionBulkData::StaticRegisterNativesUStaticMeshDescriptionBulkData(void)

{
  return;
}

