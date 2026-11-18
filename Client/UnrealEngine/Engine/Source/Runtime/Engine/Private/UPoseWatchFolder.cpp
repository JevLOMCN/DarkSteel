// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 147ba18f0

UClass * __cdecl UPoseWatchFolder::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPoseWatchFolder.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"PoseWatchFolder",
               &Z_Registration_Info_UClass_UPoseWatchFolder.InnerSingleton,
               StaticRegisterNativesUPoseWatchFolder,0x28,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine"
               ,InternalConstructor<UPoseWatchFolder>,
               InternalVTableHelperCtorCaller<UPoseWatchFolder>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPoseWatchFolder.InnerSingleton;
}

// UPoseWatchFolder @ 147bbda80

UPoseWatchFolder * __thiscall
UPoseWatchFolder::UPoseWatchFolder(UPoseWatchFolder *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UPoseWatchFolder__6B_;
  return this;
}

// UPoseWatchFolder @ 147bbdab0

UPoseWatchFolder * __thiscall
UPoseWatchFolder::UPoseWatchFolder(UPoseWatchFolder *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UPoseWatchFolder__6B_;
  return this;
}

// ~UPoseWatchFolder @ 147bbfa70

void __thiscall UPoseWatchFolder::~UPoseWatchFolder(UPoseWatchFolder *this)

{
  *(undefined ***)this = &___7UPoseWatchFolder__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 147be5c50

UClass * __cdecl UPoseWatchFolder::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPoseWatchFolder.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"PoseWatchFolder",
               &Z_Registration_Info_UClass_UPoseWatchFolder.InnerSingleton,
               StaticRegisterNativesUPoseWatchFolder,0x28,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine"
               ,InternalConstructor<UPoseWatchFolder>,
               InternalVTableHelperCtorCaller<UPoseWatchFolder>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPoseWatchFolder.InnerSingleton;
}

// StaticRegisterNativesUPoseWatchFolder @ 147c03790

void __cdecl UPoseWatchFolder::StaticRegisterNativesUPoseWatchFolder(void)

{
  return;
}

