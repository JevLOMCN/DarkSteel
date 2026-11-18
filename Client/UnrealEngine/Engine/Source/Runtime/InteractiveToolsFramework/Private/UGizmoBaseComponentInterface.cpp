// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InteractiveToolsFramework
// Functions: 6

// StaticClass @ 14962bdf0

UClass * __cdecl UGizmoBaseComponentInterface::StaticClass(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UGizmoBaseComponentInterface.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"GizmoBaseComponentInterface",
               &Z_Registration_Info_UClass_UGizmoBaseComponentInterface.InnerSingleton,
               StaticRegisterNativesUGizmoBaseComponentInterface,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UGizmoBaseComponentInterface>,
               InternalVTableHelperCtorCaller<UGizmoBaseComponentInterface>,aFStackX_8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGizmoBaseComponentInterface.InnerSingleton;
}

// UGizmoBaseComponentInterface @ 14963a660

UGizmoBaseComponentInterface * __thiscall
UGizmoBaseComponentInterface::UGizmoBaseComponentInterface
          (UGizmoBaseComponentInterface *this,FVTableHelper *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UGizmoBaseComponentInterface__6B_;
  return this;
}

// UGizmoBaseComponentInterface @ 14963a690

UGizmoBaseComponentInterface * __thiscall
UGizmoBaseComponentInterface::UGizmoBaseComponentInterface
          (UGizmoBaseComponentInterface *this,FObjectInitializer *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UGizmoBaseComponentInterface__6B_;
  return this;
}

// ~UGizmoBaseComponentInterface @ 14963e830

void __thiscall
UGizmoBaseComponentInterface::~UGizmoBaseComponentInterface(UGizmoBaseComponentInterface *this)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  return;
}

// GetPrivateStaticClass @ 149656250

UClass * __cdecl UGizmoBaseComponentInterface::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGizmoBaseComponentInterface.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"GizmoBaseComponentInterface",
               &Z_Registration_Info_UClass_UGizmoBaseComponentInterface.InnerSingleton,
               StaticRegisterNativesUGizmoBaseComponentInterface,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UGizmoBaseComponentInterface>,
               InternalVTableHelperCtorCaller<UGizmoBaseComponentInterface>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGizmoBaseComponentInterface.InnerSingleton;
}

// StaticRegisterNativesUGizmoBaseComponentInterface @ 149664ac0

void __cdecl UGizmoBaseComponentInterface::StaticRegisterNativesUGizmoBaseComponentInterface(void)

{
  return;
}

