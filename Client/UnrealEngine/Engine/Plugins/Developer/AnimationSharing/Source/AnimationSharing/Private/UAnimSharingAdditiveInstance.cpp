// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AnimationSharing
// Functions: 6

// StaticClass @ 14e2a82e0

UClass * __cdecl UAnimSharingAdditiveInstance::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAnimSharingAdditiveInstance.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UAnimInstance::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AnimationSharing",L"AnimSharingAdditiveInstance",
               &Z_Registration_Info_UClass_UAnimSharingAdditiveInstance.InnerSingleton,
               StaticRegisterNativesUAnimSharingAdditiveInstance,0x440,0x10,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UAnimSharingAdditiveInstance>,
               InternalVTableHelperCtorCaller<UAnimSharingAdditiveInstance>,local_res8,
               UAnimInstance::StaticClass,USkeletalMeshComponent::StaticClass);
  }
  return Z_Registration_Info_UClass_UAnimSharingAdditiveInstance.InnerSingleton;
}

// UAnimSharingAdditiveInstance @ 14e2ab960

UAnimSharingAdditiveInstance * __thiscall
UAnimSharingAdditiveInstance::UAnimSharingAdditiveInstance
          (UAnimSharingAdditiveInstance *this,FVTableHelper *param_1)

{
  UAnimInstance::UAnimInstance((UAnimInstance *)this,param_1);
  this->_padding_ = (longlong)&___7UAnimSharingAdditiveInstance__6B_;
  (this->BaseComponent).WeakPtr = (FWeakObjectPtr)0x0;
  (this->AdditiveAnimation).WeakPtr = (FWeakObjectPtr)0x0;
  return this;
}

// UAnimSharingAdditiveInstance @ 14e2ab9a0

UAnimSharingAdditiveInstance * __thiscall
UAnimSharingAdditiveInstance::UAnimSharingAdditiveInstance
          (UAnimSharingAdditiveInstance *this,FObjectInitializer *param_1)

{
  UAnimInstance::UAnimInstance((UAnimInstance *)this,param_1);
  this->_padding_ = (longlong)&___7UAnimSharingAdditiveInstance__6B_;
  (this->BaseComponent).WeakPtr = (FWeakObjectPtr)0x0;
  (this->AdditiveAnimation).WeakPtr = (FWeakObjectPtr)0x0;
  return this;
}

// ~UAnimSharingAdditiveInstance @ 14e2ac310

void __thiscall
UAnimSharingAdditiveInstance::~UAnimSharingAdditiveInstance(UAnimSharingAdditiveInstance *this)

{
  this->_padding_ = (longlong)&___7UAnimSharingAdditiveInstance__6B_;
  UAnimInstance::~UAnimInstance((UAnimInstance *)this);
  return;
}

// GetPrivateStaticClass @ 14e2b0280

UClass * __cdecl UAnimSharingAdditiveInstance::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAnimSharingAdditiveInstance.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UAnimInstance::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AnimationSharing",L"AnimSharingAdditiveInstance",
               &Z_Registration_Info_UClass_UAnimSharingAdditiveInstance.InnerSingleton,
               StaticRegisterNativesUAnimSharingAdditiveInstance,0x440,0x10,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UAnimSharingAdditiveInstance>,
               InternalVTableHelperCtorCaller<UAnimSharingAdditiveInstance>,local_res8,
               UAnimInstance::StaticClass,USkeletalMeshComponent::StaticClass);
  }
  return Z_Registration_Info_UClass_UAnimSharingAdditiveInstance.InnerSingleton;
}

// StaticRegisterNativesUAnimSharingAdditiveInstance @ 14e2b90c0

void __cdecl UAnimSharingAdditiveInstance::StaticRegisterNativesUAnimSharingAdditiveInstance(void)

{
  return;
}

