// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InteractiveToolsFramework
// Functions: 6

// StaticClass @ 14962c4c0

UClass * __cdecl UInteractiveToolShutdownQueryAPI::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInteractiveToolShutdownQueryAPI.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"InteractiveToolShutdownQueryAPI",
               &Z_Registration_Info_UClass_UInteractiveToolShutdownQueryAPI.InnerSingleton,
               StaticRegisterNativesUInteractiveToolShutdownQueryAPI,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UInteractiveToolShutdownQueryAPI>,
               InternalVTableHelperCtorCaller<UInteractiveToolShutdownQueryAPI>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInteractiveToolShutdownQueryAPI.InnerSingleton;
}

// UInteractiveToolShutdownQueryAPI @ 14963b8b0

UInteractiveToolShutdownQueryAPI * __thiscall
UInteractiveToolShutdownQueryAPI::UInteractiveToolShutdownQueryAPI
          (UInteractiveToolShutdownQueryAPI *this,FVTableHelper *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UInteractiveToolShutdownQueryAPI__6B_;
  return this;
}

// UInteractiveToolShutdownQueryAPI @ 14963b8e0

UInteractiveToolShutdownQueryAPI * __thiscall
UInteractiveToolShutdownQueryAPI::UInteractiveToolShutdownQueryAPI
          (UInteractiveToolShutdownQueryAPI *this,FObjectInitializer *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UInteractiveToolShutdownQueryAPI__6B_;
  return this;
}

// ~UInteractiveToolShutdownQueryAPI @ 14963eb60

void __thiscall
UInteractiveToolShutdownQueryAPI::~UInteractiveToolShutdownQueryAPI
          (UInteractiveToolShutdownQueryAPI *this)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  return;
}

// GetPrivateStaticClass @ 149657180

UClass * __cdecl UInteractiveToolShutdownQueryAPI::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInteractiveToolShutdownQueryAPI.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"InteractiveToolShutdownQueryAPI",
               &Z_Registration_Info_UClass_UInteractiveToolShutdownQueryAPI.InnerSingleton,
               StaticRegisterNativesUInteractiveToolShutdownQueryAPI,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UInteractiveToolShutdownQueryAPI>,
               InternalVTableHelperCtorCaller<UInteractiveToolShutdownQueryAPI>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInteractiveToolShutdownQueryAPI.InnerSingleton;
}

// StaticRegisterNativesUInteractiveToolShutdownQueryAPI @ 149664c10

void __cdecl
UInteractiveToolShutdownQueryAPI::StaticRegisterNativesUInteractiveToolShutdownQueryAPI(void)

{
  return;
}

