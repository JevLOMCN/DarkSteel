// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 14749cc90

UClass * __cdecl UAnimMetaData::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAnimMetaData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"AnimMetaData",
               &Z_Registration_Info_UClass_UAnimMetaData.InnerSingleton,
               StaticRegisterNativesUAnimMetaData,0x28,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UAnimMetaData>,
               InternalVTableHelperCtorCaller<UAnimMetaData>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAnimMetaData.InnerSingleton;
}

// UAnimMetaData @ 1474b3870

UAnimMetaData * __thiscall UAnimMetaData::UAnimMetaData(UAnimMetaData *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UAnimMetaData__6B_;
  return this;
}

// UAnimMetaData @ 1474b38a0

UAnimMetaData * __thiscall
UAnimMetaData::UAnimMetaData(UAnimMetaData *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UAnimMetaData__6B_;
  return this;
}

// ~UAnimMetaData @ 1474b5480

void __thiscall UAnimMetaData::~UAnimMetaData(UAnimMetaData *this)

{
  *(undefined ***)this = &___7UAnimMetaData__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 1474dcd40

UClass * __cdecl UAnimMetaData::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAnimMetaData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"AnimMetaData",
               &Z_Registration_Info_UClass_UAnimMetaData.InnerSingleton,
               StaticRegisterNativesUAnimMetaData,0x28,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UAnimMetaData>,
               InternalVTableHelperCtorCaller<UAnimMetaData>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAnimMetaData.InnerSingleton;
}

// StaticRegisterNativesUAnimMetaData @ 1474faca0

void __cdecl UAnimMetaData::StaticRegisterNativesUAnimMetaData(void)

{
  return;
}

