// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 6

// StaticClass @ 14b5af290

UClass * __cdecl UDS_SyncSendInterface::StaticClass(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UDS_SyncSendInterface.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_SyncSendInterface",
               &Z_Registration_Info_UClass_UDS_SyncSendInterface.InnerSingleton,
               StaticRegisterNativesUDS_SyncSendInterface,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UDS_SyncSendInterface>,
               InternalVTableHelperCtorCaller<UDS_SyncSendInterface>,aFStackX_8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_SyncSendInterface.InnerSingleton;
}

// UDS_SyncSendInterface @ 14b5b2070

UDS_SyncSendInterface * __thiscall
UDS_SyncSendInterface::UDS_SyncSendInterface(UDS_SyncSendInterface *this,FVTableHelper *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UDS_SyncSendInterface__6B_;
  return this;
}

// UDS_SyncSendInterface @ 14b5b20a0

UDS_SyncSendInterface * __thiscall
UDS_SyncSendInterface::UDS_SyncSendInterface
          (UDS_SyncSendInterface *this,FObjectInitializer *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UDS_SyncSendInterface__6B_;
  return this;
}

// ~UDS_SyncSendInterface @ 14b5b29e0

void __thiscall UDS_SyncSendInterface::~UDS_SyncSendInterface(UDS_SyncSendInterface *this)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  return;
}

// GetPrivateStaticClass @ 14b5b4d20

UClass * __cdecl UDS_SyncSendInterface::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_SyncSendInterface.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_SyncSendInterface",
               &Z_Registration_Info_UClass_UDS_SyncSendInterface.InnerSingleton,
               StaticRegisterNativesUDS_SyncSendInterface,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UDS_SyncSendInterface>,
               InternalVTableHelperCtorCaller<UDS_SyncSendInterface>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_SyncSendInterface.InnerSingleton;
}

// StaticRegisterNativesUDS_SyncSendInterface @ 14b5b59e0

void __cdecl UDS_SyncSendInterface::StaticRegisterNativesUDS_SyncSendInterface(void)

{
  return;
}

