// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 1473371e0

UClass * __cdecl UVisualLoggerDebugSnapshotInterface::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UVisualLoggerDebugSnapshotInterface.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"VisualLoggerDebugSnapshotInterface",
               &Z_Registration_Info_UClass_UVisualLoggerDebugSnapshotInterface.InnerSingleton,
               StaticRegisterNativesUVisualLoggerDebugSnapshotInterface,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UVisualLoggerDebugSnapshotInterface>,
               InternalVTableHelperCtorCaller<UVisualLoggerDebugSnapshotInterface>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UVisualLoggerDebugSnapshotInterface.InnerSingleton;
}

// UVisualLoggerDebugSnapshotInterface @ 147340ee0

UVisualLoggerDebugSnapshotInterface * __thiscall
UVisualLoggerDebugSnapshotInterface::UVisualLoggerDebugSnapshotInterface
          (UVisualLoggerDebugSnapshotInterface *this,FVTableHelper *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UVisualLoggerDebugSnapshotInterface__6B_;
  return this;
}

// ~UVisualLoggerDebugSnapshotInterface @ 1473423b0

void __thiscall
UVisualLoggerDebugSnapshotInterface::~UVisualLoggerDebugSnapshotInterface
          (UVisualLoggerDebugSnapshotInterface *this)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  return;
}

// GetPrivateStaticClass @ 1473503e0

UClass * __cdecl UVisualLoggerDebugSnapshotInterface::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UVisualLoggerDebugSnapshotInterface.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"VisualLoggerDebugSnapshotInterface",
               &Z_Registration_Info_UClass_UVisualLoggerDebugSnapshotInterface.InnerSingleton,
               StaticRegisterNativesUVisualLoggerDebugSnapshotInterface,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UVisualLoggerDebugSnapshotInterface>,
               InternalVTableHelperCtorCaller<UVisualLoggerDebugSnapshotInterface>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UVisualLoggerDebugSnapshotInterface.InnerSingleton;
}

// StaticRegisterNativesUVisualLoggerDebugSnapshotInterface @ 147358990

void __cdecl
UVisualLoggerDebugSnapshotInterface::StaticRegisterNativesUVisualLoggerDebugSnapshotInterface(void)

{
  return;
}

// UVisualLoggerDebugSnapshotInterface @ 1489b7390

UVisualLoggerDebugSnapshotInterface * __thiscall
UVisualLoggerDebugSnapshotInterface::UVisualLoggerDebugSnapshotInterface
          (UVisualLoggerDebugSnapshotInterface *this,FObjectInitializer *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UVisualLoggerDebugSnapshotInterface__6B_;
  return this;
}

