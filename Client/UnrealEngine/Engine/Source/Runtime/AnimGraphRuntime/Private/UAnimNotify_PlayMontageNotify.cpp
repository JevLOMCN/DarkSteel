// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AnimGraphRuntime
// Functions: 8

// StaticClass @ 1463ed350

UClass * __cdecl UAnimNotify_PlayMontageNotify::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAnimNotify_PlayMontageNotify.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AnimGraphRuntime",L"AnimNotify_PlayMontageNotify",
               &Z_Registration_Info_UClass_UAnimNotify_PlayMontageNotify.InnerSingleton,
               StaticRegisterNativesUAnimNotify_PlayMontageNotify,0x40,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UAnimNotify_PlayMontageNotify>,
               InternalVTableHelperCtorCaller<UAnimNotify_PlayMontageNotify>,local_res8,
               UAnimNotify::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAnimNotify_PlayMontageNotify.InnerSingleton;
}

// UAnimNotify_PlayMontageNotify @ 1464075e0

UAnimNotify_PlayMontageNotify * __thiscall
UAnimNotify_PlayMontageNotify::UAnimNotify_PlayMontageNotify
          (UAnimNotify_PlayMontageNotify *this,FVTableHelper *param_1)

{
  UAnimNotify::UAnimNotify((UAnimNotify *)this,param_1);
  this->_padding_ = (longlong)&___7UAnimNotify_PlayMontageNotify__6B_;
  (this->NotifyName).ComparisonIndex = 0;
  (this->NotifyName).Number = 0;
  return this;
}

// UAnimNotify_PlayMontageNotify @ 146407610

UAnimNotify_PlayMontageNotify * __thiscall
UAnimNotify_PlayMontageNotify::UAnimNotify_PlayMontageNotify
          (UAnimNotify_PlayMontageNotify *this,FObjectInitializer *param_1)

{
  UAnimNotify::UAnimNotify((UAnimNotify *)this,param_1);
  *(undefined1 *)&this->_padding_ = 1;
  this->_padding_ = (longlong)&___7UAnimNotify_PlayMontageNotify__6B_;
  (this->NotifyName).ComparisonIndex = 0;
  (this->NotifyName).Number = 0;
  return this;
}

// ~UAnimNotify_PlayMontageNotify @ 146409680

void __thiscall
UAnimNotify_PlayMontageNotify::~UAnimNotify_PlayMontageNotify(UAnimNotify_PlayMontageNotify *this)

{
  this->_padding_ = (longlong)&___7UAnimNotify_PlayMontageNotify__6B_;
  UAnimNotify::~UAnimNotify((UAnimNotify *)this);
  return;
}

// BranchingPointNotify @ 146416ad0

void __thiscall
UAnimNotify_PlayMontageNotify::BranchingPointNotify
          (UAnimNotify_PlayMontageNotify *this,FBranchingPointNotifyPayload *param_1)

{
  UAnimInstance *pUVar1;
  
  UAnimNotify::BranchingPointNotify((UAnimNotify *)this,param_1);
  if (param_1->SkelMeshComponent != (USkeletalMeshComponent *)0x0) {
    pUVar1 = USkeletalMeshComponent::GetAnimInstance(param_1->SkelMeshComponent);
    if (pUVar1 != (UAnimInstance *)0x0) {
      FPlayMontageAnimNotifyDelegate_DelegateWrapper
                ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)
                 &pUVar1->OnPlayMontageNotifyBegin,this->NotifyName,param_1);
    }
  }
  return;
}

// GetNotifyName_Implementation @ 14644be40

FString * __thiscall
UAnimNotify_PlayMontageNotify::GetNotifyName_Implementation
          (UAnimNotify_PlayMontageNotify *this,FString *__return_storage_ptr__)

{
  ::FName::ToString(&this->NotifyName,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 14644cd60

UClass * __cdecl UAnimNotify_PlayMontageNotify::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAnimNotify_PlayMontageNotify.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AnimGraphRuntime",L"AnimNotify_PlayMontageNotify",
               &Z_Registration_Info_UClass_UAnimNotify_PlayMontageNotify.InnerSingleton,
               StaticRegisterNativesUAnimNotify_PlayMontageNotify,0x40,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UAnimNotify_PlayMontageNotify>,
               InternalVTableHelperCtorCaller<UAnimNotify_PlayMontageNotify>,local_res8,
               UAnimNotify::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAnimNotify_PlayMontageNotify.InnerSingleton;
}

// StaticRegisterNativesUAnimNotify_PlayMontageNotify @ 14646e560

void __cdecl UAnimNotify_PlayMontageNotify::StaticRegisterNativesUAnimNotify_PlayMontageNotify(void)

{
  return;
}

