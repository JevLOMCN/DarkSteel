// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 7

// StaticClass @ 1485e4e30

UClass * __cdecl USkeletalMeshDescriptionBulkData::StaticClass(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_USkeletalMeshDescriptionBulkData.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"SkeletalMeshDescriptionBulkData",
               &Z_Registration_Info_UClass_USkeletalMeshDescriptionBulkData.InnerSingleton,
               StaticRegisterNativesUSkeletalMeshDescriptionBulkData,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<USkeletalMeshDescriptionBulkData>,
               InternalVTableHelperCtorCaller<USkeletalMeshDescriptionBulkData>,aFStackX_8,
               UMeshDescriptionBaseBulkData::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USkeletalMeshDescriptionBulkData.InnerSingleton;
}

// USkeletalMeshDescriptionBulkData @ 148623de0

USkeletalMeshDescriptionBulkData * __thiscall
USkeletalMeshDescriptionBulkData::USkeletalMeshDescriptionBulkData
          (USkeletalMeshDescriptionBulkData *this,FVTableHelper *param_1)

{
  UMeshDescriptionBaseBulkData::UMeshDescriptionBaseBulkData
            ((UMeshDescriptionBaseBulkData *)this,param_1);
  *(undefined ***)this = &___7USkeletalMeshDescriptionBulkData__6B_;
  return this;
}

// USkeletalMeshDescriptionBulkData @ 148623e10

USkeletalMeshDescriptionBulkData * __thiscall
USkeletalMeshDescriptionBulkData::USkeletalMeshDescriptionBulkData
          (USkeletalMeshDescriptionBulkData *this)

{
  UMeshDescriptionBaseBulkData::UMeshDescriptionBaseBulkData((UMeshDescriptionBaseBulkData *)this);
  *(undefined ***)this = &___7USkeletalMeshDescriptionBulkData__6B_;
  return this;
}

// ~USkeletalMeshDescriptionBulkData @ 148625880

void __thiscall
USkeletalMeshDescriptionBulkData::~USkeletalMeshDescriptionBulkData
          (USkeletalMeshDescriptionBulkData *this)

{
  *(undefined ***)this = &___7USkeletalMeshDescriptionBulkData__6B_;
  UMeshDescriptionBaseBulkData::~UMeshDescriptionBaseBulkData((UMeshDescriptionBaseBulkData *)this);
  return;
}

// GetPrivateStaticClass @ 14864cab0

UClass * __cdecl USkeletalMeshDescriptionBulkData::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USkeletalMeshDescriptionBulkData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"SkeletalMeshDescriptionBulkData",
               &Z_Registration_Info_UClass_USkeletalMeshDescriptionBulkData.InnerSingleton,
               StaticRegisterNativesUSkeletalMeshDescriptionBulkData,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<USkeletalMeshDescriptionBulkData>,
               InternalVTableHelperCtorCaller<USkeletalMeshDescriptionBulkData>,local_res8,
               UMeshDescriptionBaseBulkData::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USkeletalMeshDescriptionBulkData.InnerSingleton;
}

// Initialize @ 148658490

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall USkeletalMeshDescriptionBulkData::Initialize(USkeletalMeshDescriptionBulkData *this)

{
  FUObjectItem *this_00;
  
  this_00 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)&this->field_0xc);
  FUObjectItem::ClearRootFlags(this_00,Async);
  return;
}

// StaticRegisterNativesUSkeletalMeshDescriptionBulkData @ 148668af0

void __cdecl
USkeletalMeshDescriptionBulkData::StaticRegisterNativesUSkeletalMeshDescriptionBulkData(void)

{
  return;
}

