// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingComponents
// Functions: 6

// StaticClass @ 14cb58720

UClass * __cdecl UToolHostCustomizationAPI::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UToolHostCustomizationAPI.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ModelingComponents",L"ToolHostCustomizationAPI",
               &Z_Registration_Info_UClass_UToolHostCustomizationAPI.InnerSingleton,
               StaticRegisterNativesUToolHostCustomizationAPI,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UToolHostCustomizationAPI>,
               InternalVTableHelperCtorCaller<UToolHostCustomizationAPI>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UToolHostCustomizationAPI.InnerSingleton;
}

// UToolHostCustomizationAPI @ 14cb63a40

UToolHostCustomizationAPI * __thiscall
UToolHostCustomizationAPI::UToolHostCustomizationAPI
          (UToolHostCustomizationAPI *this,FVTableHelper *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UToolHostCustomizationAPI__6B_;
  return this;
}

// UToolHostCustomizationAPI @ 14cb63a70

UToolHostCustomizationAPI * __thiscall
UToolHostCustomizationAPI::UToolHostCustomizationAPI
          (UToolHostCustomizationAPI *this,FObjectInitializer *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UToolHostCustomizationAPI__6B_;
  return this;
}

// ~UToolHostCustomizationAPI @ 14cb653b0

void __thiscall
UToolHostCustomizationAPI::~UToolHostCustomizationAPI(UToolHostCustomizationAPI *this)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  return;
}

// GetPrivateStaticClass @ 14cb99400

UClass * __cdecl UToolHostCustomizationAPI::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UToolHostCustomizationAPI.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ModelingComponents",L"ToolHostCustomizationAPI",
               &Z_Registration_Info_UClass_UToolHostCustomizationAPI.InnerSingleton,
               StaticRegisterNativesUToolHostCustomizationAPI,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UToolHostCustomizationAPI>,
               InternalVTableHelperCtorCaller<UToolHostCustomizationAPI>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UToolHostCustomizationAPI.InnerSingleton;
}

// StaticRegisterNativesUToolHostCustomizationAPI @ 14cbb4630

void __cdecl UToolHostCustomizationAPI::StaticRegisterNativesUToolHostCustomizationAPI(void)

{
  return;
}

