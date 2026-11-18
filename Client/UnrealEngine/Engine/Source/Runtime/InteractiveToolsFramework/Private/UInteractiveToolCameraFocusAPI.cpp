// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InteractiveToolsFramework
// Functions: 6

// StaticClass @ 14962c140

UClass * __cdecl UInteractiveToolCameraFocusAPI::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInteractiveToolCameraFocusAPI.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"InteractiveToolCameraFocusAPI",
               &Z_Registration_Info_UClass_UInteractiveToolCameraFocusAPI.InnerSingleton,
               StaticRegisterNativesUInteractiveToolCameraFocusAPI,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UInteractiveToolCameraFocusAPI>,
               InternalVTableHelperCtorCaller<UInteractiveToolCameraFocusAPI>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInteractiveToolCameraFocusAPI.InnerSingleton;
}

// UInteractiveToolCameraFocusAPI @ 14963b6d0

UInteractiveToolCameraFocusAPI * __thiscall
UInteractiveToolCameraFocusAPI::UInteractiveToolCameraFocusAPI
          (UInteractiveToolCameraFocusAPI *this,FVTableHelper *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UInteractiveToolCameraFocusAPI__6B_;
  return this;
}

// UInteractiveToolCameraFocusAPI @ 14963b700

UInteractiveToolCameraFocusAPI * __thiscall
UInteractiveToolCameraFocusAPI::UInteractiveToolCameraFocusAPI
          (UInteractiveToolCameraFocusAPI *this,FObjectInitializer *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UInteractiveToolCameraFocusAPI__6B_;
  return this;
}

// ~UInteractiveToolCameraFocusAPI @ 14963eb10

void __thiscall
UInteractiveToolCameraFocusAPI::~UInteractiveToolCameraFocusAPI
          (UInteractiveToolCameraFocusAPI *this)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  return;
}

// GetPrivateStaticClass @ 149656dc0

UClass * __cdecl UInteractiveToolCameraFocusAPI::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInteractiveToolCameraFocusAPI.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"InteractiveToolCameraFocusAPI",
               &Z_Registration_Info_UClass_UInteractiveToolCameraFocusAPI.InnerSingleton,
               StaticRegisterNativesUInteractiveToolCameraFocusAPI,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UInteractiveToolCameraFocusAPI>,
               InternalVTableHelperCtorCaller<UInteractiveToolCameraFocusAPI>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInteractiveToolCameraFocusAPI.InnerSingleton;
}

// StaticRegisterNativesUInteractiveToolCameraFocusAPI @ 149664bc0

void __cdecl
UInteractiveToolCameraFocusAPI::StaticRegisterNativesUInteractiveToolCameraFocusAPI(void)

{
  return;
}

