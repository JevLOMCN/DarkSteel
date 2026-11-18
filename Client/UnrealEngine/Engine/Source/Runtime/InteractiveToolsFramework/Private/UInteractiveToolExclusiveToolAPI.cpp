// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InteractiveToolsFramework
// Functions: 6

// StaticClass @ 14962c650

UClass * __cdecl UInteractiveToolExclusiveToolAPI::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInteractiveToolExclusiveToolAPI.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"InteractiveToolExclusiveToolAPI",
               &Z_Registration_Info_UClass_UInteractiveToolExclusiveToolAPI.InnerSingleton,
               StaticRegisterNativesUInteractiveToolExclusiveToolAPI,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UInteractiveToolExclusiveToolAPI>,
               InternalVTableHelperCtorCaller<UInteractiveToolExclusiveToolAPI>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInteractiveToolExclusiveToolAPI.InnerSingleton;
}

// UInteractiveToolExclusiveToolAPI @ 14963b790

UInteractiveToolExclusiveToolAPI * __thiscall
UInteractiveToolExclusiveToolAPI::UInteractiveToolExclusiveToolAPI
          (UInteractiveToolExclusiveToolAPI *this,FVTableHelper *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UInteractiveToolExclusiveToolAPI__6B_;
  return this;
}

// UInteractiveToolExclusiveToolAPI @ 14963b7c0

UInteractiveToolExclusiveToolAPI * __thiscall
UInteractiveToolExclusiveToolAPI::UInteractiveToolExclusiveToolAPI
          (UInteractiveToolExclusiveToolAPI *this,FObjectInitializer *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UInteractiveToolExclusiveToolAPI__6B_;
  return this;
}

// ~UInteractiveToolExclusiveToolAPI @ 14963eb30

void __thiscall
UInteractiveToolExclusiveToolAPI::~UInteractiveToolExclusiveToolAPI
          (UInteractiveToolExclusiveToolAPI *this)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  return;
}

// GetPrivateStaticClass @ 149656f40

UClass * __cdecl UInteractiveToolExclusiveToolAPI::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInteractiveToolExclusiveToolAPI.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"InteractiveToolExclusiveToolAPI",
               &Z_Registration_Info_UClass_UInteractiveToolExclusiveToolAPI.InnerSingleton,
               StaticRegisterNativesUInteractiveToolExclusiveToolAPI,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UInteractiveToolExclusiveToolAPI>,
               InternalVTableHelperCtorCaller<UInteractiveToolExclusiveToolAPI>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInteractiveToolExclusiveToolAPI.InnerSingleton;
}

// StaticRegisterNativesUInteractiveToolExclusiveToolAPI @ 149664be0

void __cdecl
UInteractiveToolExclusiveToolAPI::StaticRegisterNativesUInteractiveToolExclusiveToolAPI(void)

{
  return;
}

