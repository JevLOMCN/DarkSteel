// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 147ba1e20

UClass * __cdecl UPoseWatch::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPoseWatch.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"PoseWatch",&Z_Registration_Info_UClass_UPoseWatch.InnerSingleton,
               StaticRegisterNativesUPoseWatch,0x28,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UPoseWatch>,InternalVTableHelperCtorCaller<UPoseWatch>,local_res8
               ,UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPoseWatch.InnerSingleton;
}

// UPoseWatch @ 147bbd9c0

UPoseWatch * __thiscall UPoseWatch::UPoseWatch(UPoseWatch *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UPoseWatch__6B_;
  return this;
}

// UPoseWatch @ 147bbd9f0

UPoseWatch * __thiscall UPoseWatch::UPoseWatch(UPoseWatch *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UPoseWatch__6B_;
  return this;
}

// ~UPoseWatch @ 147bbfa50

void __thiscall UPoseWatch::~UPoseWatch(UPoseWatch *this)

{
  *(undefined ***)this = &___7UPoseWatch__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 147be5af0

UClass * __cdecl UPoseWatch::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPoseWatch.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"PoseWatch",&Z_Registration_Info_UClass_UPoseWatch.InnerSingleton,
               StaticRegisterNativesUPoseWatch,0x28,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UPoseWatch>,InternalVTableHelperCtorCaller<UPoseWatch>,local_res8
               ,UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPoseWatch.InnerSingleton;
}

// StaticRegisterNativesUPoseWatch @ 147c03770

void __cdecl UPoseWatch::StaticRegisterNativesUPoseWatch(void)

{
  return;
}

