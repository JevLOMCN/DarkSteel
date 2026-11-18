// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 147673690

UClass * __cdecl ACameraBlockingVolume::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ACameraBlockingVolume.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"CameraBlockingVolume",
               &Z_Registration_Info_UClass_ACameraBlockingVolume.InnerSingleton,
               StaticRegisterNativesACameraBlockingVolume,0x2f8,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<ACameraBlockingVolume>,
               InternalVTableHelperCtorCaller<ACameraBlockingVolume>,local_res8,AVolume::StaticClass
               ,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ACameraBlockingVolume.InnerSingleton;
}

// ACameraBlockingVolume @ 147685e60

ACameraBlockingVolume * __thiscall
ACameraBlockingVolume::ACameraBlockingVolume(ACameraBlockingVolume *this,FVTableHelper *param_1)

{
  AVolume::AVolume((AVolume *)this,param_1);
  *(undefined ***)this = &___7ACameraBlockingVolume__6B_;
  return this;
}

// ACameraBlockingVolume @ 147685e90

ACameraBlockingVolume * __thiscall
ACameraBlockingVolume::ACameraBlockingVolume
          (ACameraBlockingVolume *this,FObjectInitializer *param_1)

{
  AVolume::AVolume((AVolume *)this,param_1);
  *(undefined ***)this = &___7ACameraBlockingVolume__6B_;
  (**(code **)(**(longlong **)&this->field_0x2d8 + 0x9f0))(*(longlong **)&this->field_0x2d8,4,2);
  return this;
}

// ~ACameraBlockingVolume @ 147689e50

void __thiscall ACameraBlockingVolume::~ACameraBlockingVolume(ACameraBlockingVolume *this)

{
  *(undefined ***)this = &___7ACameraBlockingVolume__6B_;
  AVolume::~AVolume((AVolume *)this);
  return;
}

// GetPrivateStaticClass @ 1476b3ad0

UClass * __cdecl ACameraBlockingVolume::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ACameraBlockingVolume.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"CameraBlockingVolume",
               &Z_Registration_Info_UClass_ACameraBlockingVolume.InnerSingleton,
               StaticRegisterNativesACameraBlockingVolume,0x2f8,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<ACameraBlockingVolume>,
               InternalVTableHelperCtorCaller<ACameraBlockingVolume>,local_res8,AVolume::StaticClass
               ,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ACameraBlockingVolume.InnerSingleton;
}

// StaticRegisterNativesACameraBlockingVolume @ 1476ca190

void __cdecl ACameraBlockingVolume::StaticRegisterNativesACameraBlockingVolume(void)

{
  return;
}

