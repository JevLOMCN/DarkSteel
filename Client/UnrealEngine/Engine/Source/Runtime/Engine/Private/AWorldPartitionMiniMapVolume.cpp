// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 7

// StaticClass @ 148aa8080

UClass * __cdecl AWorldPartitionMiniMapVolume::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_AWorldPartitionMiniMapVolume.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"WorldPartitionMiniMapVolume",
               &Z_Registration_Info_UClass_AWorldPartitionMiniMapVolume.InnerSingleton,
               StaticRegisterNativesAWorldPartitionMiniMapVolume,0x2f8,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<AWorldPartitionMiniMapVolume>,
               InternalVTableHelperCtorCaller<AWorldPartitionMiniMapVolume>,local_res8,
               AVolume::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AWorldPartitionMiniMapVolume.InnerSingleton;
}

// AWorldPartitionMiniMapVolume @ 148ab3480

AWorldPartitionMiniMapVolume * __thiscall
AWorldPartitionMiniMapVolume::AWorldPartitionMiniMapVolume
          (AWorldPartitionMiniMapVolume *this,FVTableHelper *param_1)

{
  AVolume::AVolume((AVolume *)this,param_1);
  *(undefined ***)this = &___7AWorldPartitionMiniMapVolume__6B_;
  return this;
}

// AWorldPartitionMiniMapVolume @ 148ab34b0

AWorldPartitionMiniMapVolume * __thiscall
AWorldPartitionMiniMapVolume::AWorldPartitionMiniMapVolume
          (AWorldPartitionMiniMapVolume *this,FObjectInitializer *param_1)

{
  FName FVar1;
  FName *pFVar2;
  FName local_res8;
  
  pFVar2 = ::FName::FName(&local_res8,L"Sprite");
  FVar1 = *pFVar2;
  FObjectInitializer::AssertIfSubobjectSetupIsNotAllowed(param_1,FVar1);
  FObjectInitializer::FOverrides::Add
            (&param_1->SubobjectOverrides,FVar1,(UClass *)0x0,(TArrayView<FName_const_,int> *)0x0);
  AVolume::AVolume((AVolume *)this,param_1);
  *(undefined ***)this = &___7AWorldPartitionMiniMapVolume__6B_;
  (**(code **)(**(longlong **)&this->field_0x2d8 + 0x788))
            (*(longlong **)&this->field_0x2d8,UCollisionProfile::NoCollision_ProfileName,1);
  return this;
}

// ~AWorldPartitionMiniMapVolume @ 148ab6fd0

void __thiscall
AWorldPartitionMiniMapVolume::~AWorldPartitionMiniMapVolume(AWorldPartitionMiniMapVolume *this)

{
  *(undefined ***)this = &___7AWorldPartitionMiniMapVolume__6B_;
  AVolume::~AVolume((AVolume *)this);
  return;
}

// GetPrivateStaticClass @ 148aced80

UClass * __cdecl AWorldPartitionMiniMapVolume::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_AWorldPartitionMiniMapVolume.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"WorldPartitionMiniMapVolume",
               &Z_Registration_Info_UClass_AWorldPartitionMiniMapVolume.InnerSingleton,
               StaticRegisterNativesAWorldPartitionMiniMapVolume,0x2f8,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<AWorldPartitionMiniMapVolume>,
               InternalVTableHelperCtorCaller<AWorldPartitionMiniMapVolume>,local_res8,
               AVolume::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AWorldPartitionMiniMapVolume.InnerSingleton;
}

// IsEditorOnly @ 148ad43b0

bool __thiscall AWorldPartitionMiniMapVolume::IsEditorOnly(AWorldPartitionMiniMapVolume *this)

{
  return true;
}

// StaticRegisterNativesAWorldPartitionMiniMapVolume @ 148adb7e0

void __cdecl AWorldPartitionMiniMapVolume::StaticRegisterNativesAWorldPartitionMiniMapVolume(void)

{
  return;
}

