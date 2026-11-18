// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 7

// StaticClass @ 14d5782d0

UClass * __cdecl UPriorityQueueCameraDirector::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPriorityQueueCameraDirector.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"PriorityQueueCameraDirector",
               &Z_Registration_Info_UClass_UPriorityQueueCameraDirector.InnerSingleton,
               StaticRegisterNativesUPriorityQueueCameraDirector,0x40,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPriorityQueueCameraDirector>,
               InternalVTableHelperCtorCaller<UPriorityQueueCameraDirector>,local_res8,
               UCameraDirector::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPriorityQueueCameraDirector.InnerSingleton;
}

// UPriorityQueueCameraDirector @ 14d590110

UPriorityQueueCameraDirector * __thiscall
UPriorityQueueCameraDirector::UPriorityQueueCameraDirector
          (UPriorityQueueCameraDirector *this,FVTableHelper *param_1)

{
  UCameraDirector::UCameraDirector((UCameraDirector *)this,param_1);
  *(undefined ***)this = &___7UPriorityQueueCameraDirector__6B_;
  return this;
}

// UPriorityQueueCameraDirector @ 14d590140

UPriorityQueueCameraDirector * __thiscall
UPriorityQueueCameraDirector::UPriorityQueueCameraDirector
          (UPriorityQueueCameraDirector *this,FObjectInitializer *param_1)

{
  UCameraDirector::UCameraDirector((UCameraDirector *)this,param_1);
  *(undefined ***)this = &___7UPriorityQueueCameraDirector__6B_;
  return this;
}

// ~UPriorityQueueCameraDirector @ 14d591f00

void __thiscall
UPriorityQueueCameraDirector::~UPriorityQueueCameraDirector(UPriorityQueueCameraDirector *this)

{
  *(undefined ***)this = &___7UPriorityQueueCameraDirector__6B_;
  UCameraDirector::~UCameraDirector((UCameraDirector *)this);
  return;
}

// GetPrivateStaticClass @ 14d5aa3c0

UClass * __cdecl UPriorityQueueCameraDirector::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPriorityQueueCameraDirector.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"PriorityQueueCameraDirector",
               &Z_Registration_Info_UClass_UPriorityQueueCameraDirector.InnerSingleton,
               StaticRegisterNativesUPriorityQueueCameraDirector,0x40,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPriorityQueueCameraDirector>,
               InternalVTableHelperCtorCaller<UPriorityQueueCameraDirector>,local_res8,
               UCameraDirector::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPriorityQueueCameraDirector.InnerSingleton;
}

// OnBuildEvaluator @ 14d5b8b30

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

FCameraDirectorEvaluator * __thiscall
UPriorityQueueCameraDirector::OnBuildEvaluator
          (UPriorityQueueCameraDirector *this,FCameraDirectorEvaluatorBuilder *param_1)

{
  FPriorityQueueCameraDirectorEvaluator *pFVar1;
  
  pFVar1 = UE::Cameras::FCameraDirectorEvaluatorStorage::
           BuildEvaluator<UE::Cameras::FPriorityQueueCameraDirectorEvaluator>(param_1->Storage);
  return (FCameraDirectorEvaluator *)pFVar1;
}

// StaticRegisterNativesUPriorityQueueCameraDirector @ 14d5d0ec0

void __cdecl UPriorityQueueCameraDirector::StaticRegisterNativesUPriorityQueueCameraDirector(void)

{
  return;
}

