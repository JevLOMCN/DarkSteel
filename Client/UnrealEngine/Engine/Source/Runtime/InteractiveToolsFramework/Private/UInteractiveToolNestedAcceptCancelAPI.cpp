// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InteractiveToolsFramework
// Functions: 6

// StaticClass @ 14962c300

UClass * __cdecl UInteractiveToolNestedAcceptCancelAPI::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInteractiveToolNestedAcceptCancelAPI.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"InteractiveToolNestedAcceptCancelAPI",
               &Z_Registration_Info_UClass_UInteractiveToolNestedAcceptCancelAPI.InnerSingleton,
               StaticRegisterNativesUInteractiveToolNestedAcceptCancelAPI,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UInteractiveToolNestedAcceptCancelAPI>,
               InternalVTableHelperCtorCaller<UInteractiveToolNestedAcceptCancelAPI>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInteractiveToolNestedAcceptCancelAPI.InnerSingleton;
}

// UInteractiveToolNestedAcceptCancelAPI @ 14963b850

UInteractiveToolNestedAcceptCancelAPI * __thiscall
UInteractiveToolNestedAcceptCancelAPI::UInteractiveToolNestedAcceptCancelAPI
          (UInteractiveToolNestedAcceptCancelAPI *this,FVTableHelper *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UInteractiveToolNestedAcceptCancelAPI__6B_;
  return this;
}

// UInteractiveToolNestedAcceptCancelAPI @ 14963b880

UInteractiveToolNestedAcceptCancelAPI * __thiscall
UInteractiveToolNestedAcceptCancelAPI::UInteractiveToolNestedAcceptCancelAPI
          (UInteractiveToolNestedAcceptCancelAPI *this,FObjectInitializer *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UInteractiveToolNestedAcceptCancelAPI__6B_;
  return this;
}

// ~UInteractiveToolNestedAcceptCancelAPI @ 14963eb50

void __thiscall
UInteractiveToolNestedAcceptCancelAPI::~UInteractiveToolNestedAcceptCancelAPI
          (UInteractiveToolNestedAcceptCancelAPI *this)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  return;
}

// GetPrivateStaticClass @ 1496570c0

UClass * __cdecl UInteractiveToolNestedAcceptCancelAPI::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInteractiveToolNestedAcceptCancelAPI.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"InteractiveToolNestedAcceptCancelAPI",
               &Z_Registration_Info_UClass_UInteractiveToolNestedAcceptCancelAPI.InnerSingleton,
               StaticRegisterNativesUInteractiveToolNestedAcceptCancelAPI,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UInteractiveToolNestedAcceptCancelAPI>,
               InternalVTableHelperCtorCaller<UInteractiveToolNestedAcceptCancelAPI>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInteractiveToolNestedAcceptCancelAPI.InnerSingleton;
}

// StaticRegisterNativesUInteractiveToolNestedAcceptCancelAPI @ 149664c00

void __cdecl
UInteractiveToolNestedAcceptCancelAPI::StaticRegisterNativesUInteractiveToolNestedAcceptCancelAPI
          (void)

{
  return;
}

