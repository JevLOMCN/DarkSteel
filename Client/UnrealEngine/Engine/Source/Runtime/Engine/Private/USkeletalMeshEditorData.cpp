// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 1485e5260

UClass * __cdecl USkeletalMeshEditorData::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USkeletalMeshEditorData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"SkeletalMeshEditorData",
               &Z_Registration_Info_UClass_USkeletalMeshEditorData.InnerSingleton,
               StaticRegisterNativesUSkeletalMeshEditorData,0x28,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<USkeletalMeshEditorData>,
               InternalVTableHelperCtorCaller<USkeletalMeshEditorData>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USkeletalMeshEditorData.InnerSingleton;
}

// USkeletalMeshEditorData @ 148623e40

USkeletalMeshEditorData * __thiscall
USkeletalMeshEditorData::USkeletalMeshEditorData
          (USkeletalMeshEditorData *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7USkeletalMeshEditorData__6B_;
  return this;
}

// USkeletalMeshEditorData @ 148623e70

USkeletalMeshEditorData * __thiscall
USkeletalMeshEditorData::USkeletalMeshEditorData
          (USkeletalMeshEditorData *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7USkeletalMeshEditorData__6B_;
  return this;
}

// ~USkeletalMeshEditorData @ 1486258a0

void __thiscall USkeletalMeshEditorData::~USkeletalMeshEditorData(USkeletalMeshEditorData *this)

{
  *(undefined ***)this = &___7USkeletalMeshEditorData__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14864cb70

UClass * __cdecl USkeletalMeshEditorData::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USkeletalMeshEditorData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"SkeletalMeshEditorData",
               &Z_Registration_Info_UClass_USkeletalMeshEditorData.InnerSingleton,
               StaticRegisterNativesUSkeletalMeshEditorData,0x28,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<USkeletalMeshEditorData>,
               InternalVTableHelperCtorCaller<USkeletalMeshEditorData>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USkeletalMeshEditorData.InnerSingleton;
}

// StaticRegisterNativesUSkeletalMeshEditorData @ 148668b00

void __cdecl USkeletalMeshEditorData::StaticRegisterNativesUSkeletalMeshEditorData(void)

{
  return;
}

