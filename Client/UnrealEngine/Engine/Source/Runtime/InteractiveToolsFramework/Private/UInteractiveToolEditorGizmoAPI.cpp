// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InteractiveToolsFramework
// Functions: 6

// StaticClass @ 14962c8f0

UClass * __cdecl UInteractiveToolEditorGizmoAPI::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInteractiveToolEditorGizmoAPI.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"InteractiveToolEditorGizmoAPI",
               &Z_Registration_Info_UClass_UInteractiveToolEditorGizmoAPI.InnerSingleton,
               StaticRegisterNativesUInteractiveToolEditorGizmoAPI,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UInteractiveToolEditorGizmoAPI>,
               InternalVTableHelperCtorCaller<UInteractiveToolEditorGizmoAPI>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInteractiveToolEditorGizmoAPI.InnerSingleton;
}

// UInteractiveToolEditorGizmoAPI @ 14963b730

UInteractiveToolEditorGizmoAPI * __thiscall
UInteractiveToolEditorGizmoAPI::UInteractiveToolEditorGizmoAPI
          (UInteractiveToolEditorGizmoAPI *this,FVTableHelper *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UInteractiveToolEditorGizmoAPI__6B_;
  return this;
}

// UInteractiveToolEditorGizmoAPI @ 14963b760

UInteractiveToolEditorGizmoAPI * __thiscall
UInteractiveToolEditorGizmoAPI::UInteractiveToolEditorGizmoAPI
          (UInteractiveToolEditorGizmoAPI *this,FObjectInitializer *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UInteractiveToolEditorGizmoAPI__6B_;
  return this;
}

// ~UInteractiveToolEditorGizmoAPI @ 14963eb20

void __thiscall
UInteractiveToolEditorGizmoAPI::~UInteractiveToolEditorGizmoAPI
          (UInteractiveToolEditorGizmoAPI *this)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  return;
}

// GetPrivateStaticClass @ 149656e80

UClass * __cdecl UInteractiveToolEditorGizmoAPI::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInteractiveToolEditorGizmoAPI.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"InteractiveToolEditorGizmoAPI",
               &Z_Registration_Info_UClass_UInteractiveToolEditorGizmoAPI.InnerSingleton,
               StaticRegisterNativesUInteractiveToolEditorGizmoAPI,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UInteractiveToolEditorGizmoAPI>,
               InternalVTableHelperCtorCaller<UInteractiveToolEditorGizmoAPI>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInteractiveToolEditorGizmoAPI.InnerSingleton;
}

// StaticRegisterNativesUInteractiveToolEditorGizmoAPI @ 149664bd0

void __cdecl
UInteractiveToolEditorGizmoAPI::StaticRegisterNativesUInteractiveToolEditorGizmoAPI(void)

{
  return;
}

