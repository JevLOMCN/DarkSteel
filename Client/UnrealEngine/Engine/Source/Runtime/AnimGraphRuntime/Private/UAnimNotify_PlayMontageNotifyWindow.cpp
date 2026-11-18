// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AnimGraphRuntime
// Functions: 9

// StaticClass @ 1463ede80

UClass * __cdecl UAnimNotify_PlayMontageNotifyWindow::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAnimNotify_PlayMontageNotifyWindow.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AnimGraphRuntime",L"AnimNotify_PlayMontageNotifyWindow",
               &Z_Registration_Info_UClass_UAnimNotify_PlayMontageNotifyWindow.InnerSingleton,
               StaticRegisterNativesUAnimNotify_PlayMontageNotifyWindow,0x38,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UAnimNotify_PlayMontageNotifyWindow>,
               InternalVTableHelperCtorCaller<UAnimNotify_PlayMontageNotifyWindow>,local_res8,
               UAnimNotifyState::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAnimNotify_PlayMontageNotifyWindow.InnerSingleton;
}

// UAnimNotify_PlayMontageNotifyWindow @ 146407650

UAnimNotify_PlayMontageNotifyWindow * __thiscall
UAnimNotify_PlayMontageNotifyWindow::UAnimNotify_PlayMontageNotifyWindow
          (UAnimNotify_PlayMontageNotifyWindow *this,FVTableHelper *param_1)

{
  UAnimNotifyState::UAnimNotifyState((UAnimNotifyState *)this,param_1);
  this->_padding_ = (longlong)&___7UAnimNotify_PlayMontageNotifyWindow__6B_;
  (this->NotifyName).ComparisonIndex = 0;
  (this->NotifyName).Number = 0;
  return this;
}

// UAnimNotify_PlayMontageNotifyWindow @ 146407680

UAnimNotify_PlayMontageNotifyWindow * __thiscall
UAnimNotify_PlayMontageNotifyWindow::UAnimNotify_PlayMontageNotifyWindow
          (UAnimNotify_PlayMontageNotifyWindow *this,FObjectInitializer *param_1)

{
  UAnimNotifyState::UAnimNotifyState((UAnimNotifyState *)this,param_1);
  *(undefined1 *)&this->_padding_ = 1;
  this->_padding_ = (longlong)&___7UAnimNotify_PlayMontageNotifyWindow__6B_;
  (this->NotifyName).ComparisonIndex = 0;
  (this->NotifyName).Number = 0;
  return this;
}

// ~UAnimNotify_PlayMontageNotifyWindow @ 1464096a0

void __thiscall
UAnimNotify_PlayMontageNotifyWindow::~UAnimNotify_PlayMontageNotifyWindow
          (UAnimNotify_PlayMontageNotifyWindow *this)

{
  this->_padding_ = (longlong)&___7UAnimNotify_PlayMontageNotifyWindow__6B_;
  UAnimNotifyState::~UAnimNotifyState((UAnimNotifyState *)this);
  return;
}

// BranchingPointNotifyBegin @ 146416b20

void __thiscall
UAnimNotify_PlayMontageNotifyWindow::BranchingPointNotifyBegin
          (UAnimNotify_PlayMontageNotifyWindow *this,FBranchingPointNotifyPayload *param_1)

{
  UAnimInstance *pUVar1;
  
  UAnimNotifyState::BranchingPointNotifyBegin((UAnimNotifyState *)this,param_1);
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

// BranchingPointNotifyEnd @ 146416b70

void __thiscall
UAnimNotify_PlayMontageNotifyWindow::BranchingPointNotifyEnd
          (UAnimNotify_PlayMontageNotifyWindow *this,FBranchingPointNotifyPayload *param_1)

{
  UAnimInstance *pUVar1;
  
  UAnimNotifyState::BranchingPointNotifyEnd((UAnimNotifyState *)this,param_1);
  if (param_1->SkelMeshComponent != (USkeletalMeshComponent *)0x0) {
    pUVar1 = USkeletalMeshComponent::GetAnimInstance(param_1->SkelMeshComponent);
    if (pUVar1 != (UAnimInstance *)0x0) {
      FPlayMontageAnimNotifyDelegate_DelegateWrapper
                ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)
                 &pUVar1->OnPlayMontageNotifyEnd,this->NotifyName,param_1);
    }
  }
  return;
}

// GetNotifyName_Implementation @ 14644be70

FString * __thiscall
UAnimNotify_PlayMontageNotifyWindow::GetNotifyName_Implementation
          (UAnimNotify_PlayMontageNotifyWindow *this,FString *__return_storage_ptr__)

{
  ::FName::ToString(&this->NotifyName,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 14644ce20

UClass * __cdecl UAnimNotify_PlayMontageNotifyWindow::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAnimNotify_PlayMontageNotifyWindow.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AnimGraphRuntime",L"AnimNotify_PlayMontageNotifyWindow",
               &Z_Registration_Info_UClass_UAnimNotify_PlayMontageNotifyWindow.InnerSingleton,
               StaticRegisterNativesUAnimNotify_PlayMontageNotifyWindow,0x38,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UAnimNotify_PlayMontageNotifyWindow>,
               InternalVTableHelperCtorCaller<UAnimNotify_PlayMontageNotifyWindow>,local_res8,
               UAnimNotifyState::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAnimNotify_PlayMontageNotifyWindow.InnerSingleton;
}

// StaticRegisterNativesUAnimNotify_PlayMontageNotifyWindow @ 14646e570

void __cdecl
UAnimNotify_PlayMontageNotifyWindow::StaticRegisterNativesUAnimNotify_PlayMontageNotifyWindow(void)

{
  return;
}

