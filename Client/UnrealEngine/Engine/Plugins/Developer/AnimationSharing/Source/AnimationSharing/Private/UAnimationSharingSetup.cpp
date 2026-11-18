// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AnimationSharing
// Functions: 6

// StaticClass @ 14e2a6fd0

UClass * __cdecl UAnimationSharingSetup::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAnimationSharingSetup.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AnimationSharing",L"AnimationSharingSetup",
               &Z_Registration_Info_UClass_UAnimationSharingSetup.InnerSingleton,
               StaticRegisterNativesUAnimationSharingSetup,0x48,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<UAnimationSharingSetup>,
               InternalVTableHelperCtorCaller<UAnimationSharingSetup>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAnimationSharingSetup.InnerSingleton;
}

// UAnimationSharingSetup @ 14e2abe70

UAnimationSharingSetup * __thiscall
UAnimationSharingSetup::UAnimationSharingSetup(UAnimationSharingSetup *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UAnimationSharingSetup__6B_;
  (this->SkeletonSetups).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SkeletonSetups).ArrayNum = 0;
  (this->SkeletonSetups).ArrayMax = 0;
  (this->ScalabilitySettings).BlendSignificanceValue.Default = 0.0;
  (this->ScalabilitySettings).UseBlendTransitions.Default = true;
  (this->ScalabilitySettings).MaximumNumberConcurrentBlends = 1;
  (this->ScalabilitySettings).TickSignificanceValue = 0.0;
  return this;
}

// UAnimationSharingSetup @ 14e2abeb0

UAnimationSharingSetup * __thiscall
UAnimationSharingSetup::UAnimationSharingSetup
          (UAnimationSharingSetup *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UAnimationSharingSetup__6B_;
  (this->SkeletonSetups).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SkeletonSetups).ArrayNum = 0;
  (this->SkeletonSetups).ArrayMax = 0;
  (this->ScalabilitySettings).BlendSignificanceValue.Default = 0.0;
  (this->ScalabilitySettings).UseBlendTransitions.Default = true;
  (this->ScalabilitySettings).MaximumNumberConcurrentBlends = 1;
  (this->ScalabilitySettings).TickSignificanceValue = 0.0;
  return this;
}

// ~UAnimationSharingSetup @ 14e2ac4f0

void __thiscall UAnimationSharingSetup::~UAnimationSharingSetup(UAnimationSharingSetup *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UAnimationSharingSetup__6B_;
  DestructItems<FPerSkeletonAnimationSharingSetup,int>
            ((FPerSkeletonAnimationSharingSetup *)(this->SkeletonSetups).AllocatorInstance.Data,
             (this->SkeletonSetups).ArrayNum);
  pFVar1 = (this->SkeletonSetups).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14e2b0620

UClass * __cdecl UAnimationSharingSetup::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAnimationSharingSetup.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AnimationSharing",L"AnimationSharingSetup",
               &Z_Registration_Info_UClass_UAnimationSharingSetup.InnerSingleton,
               StaticRegisterNativesUAnimationSharingSetup,0x48,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<UAnimationSharingSetup>,
               InternalVTableHelperCtorCaller<UAnimationSharingSetup>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAnimationSharingSetup.InnerSingleton;
}

// StaticRegisterNativesUAnimationSharingSetup @ 14e2b9170

void __cdecl UAnimationSharingSetup::StaticRegisterNativesUAnimationSharingSetup(void)

{
  return;
}

