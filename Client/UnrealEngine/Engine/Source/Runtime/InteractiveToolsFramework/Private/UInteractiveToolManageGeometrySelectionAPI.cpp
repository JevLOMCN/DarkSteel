// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InteractiveToolsFramework
// Functions: 6

// StaticClass @ 14962cb30

UClass * __cdecl UInteractiveToolManageGeometrySelectionAPI::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInteractiveToolManageGeometrySelectionAPI.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"InteractiveToolManageGeometrySelectionAPI",
               &Z_Registration_Info_UClass_UInteractiveToolManageGeometrySelectionAPI.InnerSingleton
               ,StaticRegisterNativesUInteractiveToolManageGeometrySelectionAPI,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UInteractiveToolManageGeometrySelectionAPI>,
               InternalVTableHelperCtorCaller<UInteractiveToolManageGeometrySelectionAPI>,local_res8
               ,UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInteractiveToolManageGeometrySelectionAPI.InnerSingleton;
}

// UInteractiveToolManageGeometrySelectionAPI @ 14963b7f0

UInteractiveToolManageGeometrySelectionAPI * __thiscall
UInteractiveToolManageGeometrySelectionAPI::UInteractiveToolManageGeometrySelectionAPI
          (UInteractiveToolManageGeometrySelectionAPI *this,FVTableHelper *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UInteractiveToolManageGeometrySelectionAPI__6B_;
  return this;
}

// UInteractiveToolManageGeometrySelectionAPI @ 14963b820

UInteractiveToolManageGeometrySelectionAPI * __thiscall
UInteractiveToolManageGeometrySelectionAPI::UInteractiveToolManageGeometrySelectionAPI
          (UInteractiveToolManageGeometrySelectionAPI *this,FObjectInitializer *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UInteractiveToolManageGeometrySelectionAPI__6B_;
  return this;
}

// ~UInteractiveToolManageGeometrySelectionAPI @ 14963eb40

void __thiscall
UInteractiveToolManageGeometrySelectionAPI::~UInteractiveToolManageGeometrySelectionAPI
          (UInteractiveToolManageGeometrySelectionAPI *this)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  return;
}

// GetPrivateStaticClass @ 149657000

UClass * __cdecl UInteractiveToolManageGeometrySelectionAPI::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInteractiveToolManageGeometrySelectionAPI.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"InteractiveToolManageGeometrySelectionAPI",
               &Z_Registration_Info_UClass_UInteractiveToolManageGeometrySelectionAPI.InnerSingleton
               ,StaticRegisterNativesUInteractiveToolManageGeometrySelectionAPI,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UInteractiveToolManageGeometrySelectionAPI>,
               InternalVTableHelperCtorCaller<UInteractiveToolManageGeometrySelectionAPI>,local_res8
               ,UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInteractiveToolManageGeometrySelectionAPI.InnerSingleton;
}

// StaticRegisterNativesUInteractiveToolManageGeometrySelectionAPI @ 149664bf0

void __cdecl
UInteractiveToolManageGeometrySelectionAPI::
StaticRegisterNativesUInteractiveToolManageGeometrySelectionAPI(void)

{
  return;
}

