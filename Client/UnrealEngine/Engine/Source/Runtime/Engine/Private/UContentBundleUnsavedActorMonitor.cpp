// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 148a29a40

UClass * __cdecl UContentBundleUnsavedActorMonitor::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UContentBundleUnsavedActorMonitor.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ContentBundleUnsavedActorMonitor",
               &Z_Registration_Info_UClass_UContentBundleUnsavedActorMonitor.InnerSingleton,
               StaticRegisterNativesUContentBundleUnsavedActorMonitor,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UContentBundleUnsavedActorMonitor>,
               InternalVTableHelperCtorCaller<UContentBundleUnsavedActorMonitor>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UContentBundleUnsavedActorMonitor.InnerSingleton;
}

// UContentBundleUnsavedActorMonitor @ 148a42580

UContentBundleUnsavedActorMonitor * __thiscall
UContentBundleUnsavedActorMonitor::UContentBundleUnsavedActorMonitor
          (UContentBundleUnsavedActorMonitor *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UContentBundleUnsavedActorMonitor__6B_;
  return this;
}

// UContentBundleUnsavedActorMonitor @ 148a425b0

UContentBundleUnsavedActorMonitor * __thiscall
UContentBundleUnsavedActorMonitor::UContentBundleUnsavedActorMonitor
          (UContentBundleUnsavedActorMonitor *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UContentBundleUnsavedActorMonitor__6B_;
  return this;
}

// ~UContentBundleUnsavedActorMonitor @ 148a445e0

void __thiscall
UContentBundleUnsavedActorMonitor::~UContentBundleUnsavedActorMonitor
          (UContentBundleUnsavedActorMonitor *this)

{
  *(undefined ***)this = &___7UContentBundleUnsavedActorMonitor__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 148a59ec0

UClass * __cdecl UContentBundleUnsavedActorMonitor::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UContentBundleUnsavedActorMonitor.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ContentBundleUnsavedActorMonitor",
               &Z_Registration_Info_UClass_UContentBundleUnsavedActorMonitor.InnerSingleton,
               StaticRegisterNativesUContentBundleUnsavedActorMonitor,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UContentBundleUnsavedActorMonitor>,
               InternalVTableHelperCtorCaller<UContentBundleUnsavedActorMonitor>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UContentBundleUnsavedActorMonitor.InnerSingleton;
}

// StaticRegisterNativesUContentBundleUnsavedActorMonitor @ 148a6a310

void __cdecl
UContentBundleUnsavedActorMonitor::StaticRegisterNativesUContentBundleUnsavedActorMonitor(void)

{
  return;
}

