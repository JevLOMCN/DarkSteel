// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 147ba8290

UClass * __cdecl ULODSyncInterface::StaticClass(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_ULODSyncInterface.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"LODSyncInterface",
               &Z_Registration_Info_UClass_ULODSyncInterface.InnerSingleton,
               StaticRegisterNativesULODSyncInterface,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<ULODSyncInterface>,
               InternalVTableHelperCtorCaller<ULODSyncInterface>,aFStackX_8,UInterface::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULODSyncInterface.InnerSingleton;
}

// ULODSyncInterface @ 147bbd830

ULODSyncInterface * __thiscall
ULODSyncInterface::ULODSyncInterface(ULODSyncInterface *this,FVTableHelper *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7ULODSyncInterface__6B_;
  return this;
}

// ULODSyncInterface @ 147bbd860

ULODSyncInterface * __thiscall
ULODSyncInterface::ULODSyncInterface(ULODSyncInterface *this,FObjectInitializer *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7ULODSyncInterface__6B_;
  return this;
}

// ~ULODSyncInterface @ 147bbf9e0

void __thiscall ULODSyncInterface::~ULODSyncInterface(ULODSyncInterface *this)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  return;
}

// GetPrivateStaticClass @ 147be58b0

UClass * __cdecl ULODSyncInterface::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULODSyncInterface.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"LODSyncInterface",
               &Z_Registration_Info_UClass_ULODSyncInterface.InnerSingleton,
               StaticRegisterNativesULODSyncInterface,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<ULODSyncInterface>,
               InternalVTableHelperCtorCaller<ULODSyncInterface>,local_res8,UInterface::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULODSyncInterface.InnerSingleton;
}

// StaticRegisterNativesULODSyncInterface @ 147c03710

void __cdecl ULODSyncInterface::StaticRegisterNativesULODSyncInterface(void)

{
  return;
}

