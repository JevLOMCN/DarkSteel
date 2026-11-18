// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WorldMetricsCore
// Functions: 6

// StaticClass @ 14f130bc0

UClass * __cdecl UWorldMetricsActorTrackerSubscriber::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWorldMetricsActorTrackerSubscriber.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/WorldMetricsCore",L"WorldMetricsActorTrackerSubscriber",
               &Z_Registration_Info_UClass_UWorldMetricsActorTrackerSubscriber.InnerSingleton,
               StaticRegisterNativesUWorldMetricsActorTrackerSubscriber,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UWorldMetricsActorTrackerSubscriber>,
               InternalVTableHelperCtorCaller<UWorldMetricsActorTrackerSubscriber>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWorldMetricsActorTrackerSubscriber.InnerSingleton;
}

// UWorldMetricsActorTrackerSubscriber @ 14f1332d0

UWorldMetricsActorTrackerSubscriber * __thiscall
UWorldMetricsActorTrackerSubscriber::UWorldMetricsActorTrackerSubscriber
          (UWorldMetricsActorTrackerSubscriber *this,FVTableHelper *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UWorldMetricsActorTrackerSubscriber__6B_;
  return this;
}

// UWorldMetricsActorTrackerSubscriber @ 14f133300

UWorldMetricsActorTrackerSubscriber * __thiscall
UWorldMetricsActorTrackerSubscriber::UWorldMetricsActorTrackerSubscriber
          (UWorldMetricsActorTrackerSubscriber *this,FObjectInitializer *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UWorldMetricsActorTrackerSubscriber__6B_;
  return this;
}

// ~UWorldMetricsActorTrackerSubscriber @ 14f1336e0

void __thiscall
UWorldMetricsActorTrackerSubscriber::~UWorldMetricsActorTrackerSubscriber
          (UWorldMetricsActorTrackerSubscriber *this)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  return;
}

// GetPrivateStaticClass @ 14f136e20

UClass * __cdecl UWorldMetricsActorTrackerSubscriber::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWorldMetricsActorTrackerSubscriber.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/WorldMetricsCore",L"WorldMetricsActorTrackerSubscriber",
               &Z_Registration_Info_UClass_UWorldMetricsActorTrackerSubscriber.InnerSingleton,
               StaticRegisterNativesUWorldMetricsActorTrackerSubscriber,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UWorldMetricsActorTrackerSubscriber>,
               InternalVTableHelperCtorCaller<UWorldMetricsActorTrackerSubscriber>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWorldMetricsActorTrackerSubscriber.InnerSingleton;
}

// StaticRegisterNativesUWorldMetricsActorTrackerSubscriber @ 14f139530

void __cdecl
UWorldMetricsActorTrackerSubscriber::StaticRegisterNativesUWorldMetricsActorTrackerSubscriber(void)

{
  return;
}

