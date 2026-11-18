// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DatasmithContent
// Functions: 6

// StaticClass @ 14e2eda30

UClass * __cdecl UDatasmithAdditionalData::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDatasmithAdditionalData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/DatasmithContent",L"DatasmithAdditionalData",
               &Z_Registration_Info_UClass_UDatasmithAdditionalData.InnerSingleton,
               StaticRegisterNativesUDatasmithAdditionalData,0x28,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDatasmithAdditionalData>,
               InternalVTableHelperCtorCaller<UDatasmithAdditionalData>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDatasmithAdditionalData.InnerSingleton;
}

// UDatasmithAdditionalData @ 14e2f4480

UDatasmithAdditionalData * __thiscall
UDatasmithAdditionalData::UDatasmithAdditionalData
          (UDatasmithAdditionalData *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UDatasmithAdditionalData__6B_;
  return this;
}

// UDatasmithAdditionalData @ 14e2f44b0

UDatasmithAdditionalData * __thiscall
UDatasmithAdditionalData::UDatasmithAdditionalData(UDatasmithAdditionalData *this)

{
  UObject::UObject((UObject *)this);
  *(undefined ***)this = &___7UDatasmithAdditionalData__6B_;
  return this;
}

// ~UDatasmithAdditionalData @ 14e2f5da0

void __thiscall UDatasmithAdditionalData::~UDatasmithAdditionalData(UDatasmithAdditionalData *this)

{
  *(undefined ***)this = &___7UDatasmithAdditionalData__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14e2fbd10

UClass * __cdecl UDatasmithAdditionalData::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDatasmithAdditionalData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/DatasmithContent",L"DatasmithAdditionalData",
               &Z_Registration_Info_UClass_UDatasmithAdditionalData.InnerSingleton,
               StaticRegisterNativesUDatasmithAdditionalData,0x28,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDatasmithAdditionalData>,
               InternalVTableHelperCtorCaller<UDatasmithAdditionalData>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDatasmithAdditionalData.InnerSingleton;
}

// StaticRegisterNativesUDatasmithAdditionalData @ 14e2fec40

void __cdecl UDatasmithAdditionalData::StaticRegisterNativesUDatasmithAdditionalData(void)

{
  return;
}

