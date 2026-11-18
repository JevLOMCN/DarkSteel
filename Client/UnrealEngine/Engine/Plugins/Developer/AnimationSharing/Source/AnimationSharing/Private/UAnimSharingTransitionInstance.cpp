// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AnimationSharing
// Functions: 6

// StaticClass @ 14e2a8050

UClass * __cdecl UAnimSharingTransitionInstance::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAnimSharingTransitionInstance.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UAnimInstance::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AnimationSharing",L"AnimSharingTransitionInstance",
               &Z_Registration_Info_UClass_UAnimSharingTransitionInstance.InnerSingleton,
               StaticRegisterNativesUAnimSharingTransitionInstance,0x440,0x10,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UAnimSharingTransitionInstance>,
               InternalVTableHelperCtorCaller<UAnimSharingTransitionInstance>,local_res8,
               UAnimInstance::StaticClass,USkeletalMeshComponent::StaticClass);
  }
  return Z_Registration_Info_UClass_UAnimSharingTransitionInstance.InnerSingleton;
}

// UAnimSharingTransitionInstance @ 14e2abc10

UAnimSharingTransitionInstance * __thiscall
UAnimSharingTransitionInstance::UAnimSharingTransitionInstance
          (UAnimSharingTransitionInstance *this,FVTableHelper *param_1)

{
  UAnimInstance::UAnimInstance((UAnimInstance *)this,param_1);
  this->_padding_ = (longlong)&___7UAnimSharingTransitionInstance__6B_;
  (this->FromComponent).WeakPtr = (FWeakObjectPtr)0x0;
  (this->ToComponent).WeakPtr = (FWeakObjectPtr)0x0;
  return this;
}

// UAnimSharingTransitionInstance @ 14e2abc50

UAnimSharingTransitionInstance * __thiscall
UAnimSharingTransitionInstance::UAnimSharingTransitionInstance
          (UAnimSharingTransitionInstance *this,FObjectInitializer *param_1)

{
  undefined8 local_res8;
  
  UAnimInstance::UAnimInstance((UAnimInstance *)this,param_1);
  this->_padding_ = (longlong)&___7UAnimSharingTransitionInstance__6B_;
  (this->FromComponent).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8 = 0;
  FWeakObjectPtr::operator=(&(this->FromComponent).WeakPtr,(FObjectPtr)&local_res8);
  local_res8 = 0;
  (this->ToComponent).WeakPtr = (FWeakObjectPtr)0x0;
  FWeakObjectPtr::operator=(&(this->ToComponent).WeakPtr,(FObjectPtr)&local_res8);
  this->BlendTime = 0.5;
  this->bBlendBool = false;
  return this;
}

// ~UAnimSharingTransitionInstance @ 14e2ac440

void __thiscall
UAnimSharingTransitionInstance::~UAnimSharingTransitionInstance
          (UAnimSharingTransitionInstance *this)

{
  this->_padding_ = (longlong)&___7UAnimSharingTransitionInstance__6B_;
  UAnimInstance::~UAnimInstance((UAnimInstance *)this);
  return;
}

// GetPrivateStaticClass @ 14e2b04b0

UClass * __cdecl UAnimSharingTransitionInstance::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAnimSharingTransitionInstance.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UAnimInstance::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AnimationSharing",L"AnimSharingTransitionInstance",
               &Z_Registration_Info_UClass_UAnimSharingTransitionInstance.InnerSingleton,
               StaticRegisterNativesUAnimSharingTransitionInstance,0x440,0x10,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UAnimSharingTransitionInstance>,
               InternalVTableHelperCtorCaller<UAnimSharingTransitionInstance>,local_res8,
               UAnimInstance::StaticClass,USkeletalMeshComponent::StaticClass);
  }
  return Z_Registration_Info_UClass_UAnimSharingTransitionInstance.InnerSingleton;
}

// StaticRegisterNativesUAnimSharingTransitionInstance @ 14e2b9120

void __cdecl
UAnimSharingTransitionInstance::StaticRegisterNativesUAnimSharingTransitionInstance(void)

{
  return;
}

