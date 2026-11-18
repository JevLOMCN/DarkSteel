// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 9

// StaticClass @ 14b4168b0

UClass * __cdecl UDS_AnimNotifyState_LockFootIKPosition::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_AnimNotifyState_LockFootIKPosition.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_AnimNotifyState_LockFootIKPosition",
               &Z_Registration_Info_UClass_UDS_AnimNotifyState_LockFootIKPosition.InnerSingleton,
               StaticRegisterNativesUDS_AnimNotifyState_LockFootIKPosition,0x30,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_AnimNotifyState_LockFootIKPosition>,
               InternalVTableHelperCtorCaller<UDS_AnimNotifyState_LockFootIKPosition>,local_res8,
               UDS_AnimNotifyState::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_AnimNotifyState_LockFootIKPosition.InnerSingleton;
}

// UDS_AnimNotifyState_LockFootIKPosition @ 14b41b0a0

UDS_AnimNotifyState_LockFootIKPosition * __thiscall
UDS_AnimNotifyState_LockFootIKPosition::UDS_AnimNotifyState_LockFootIKPosition
          (UDS_AnimNotifyState_LockFootIKPosition *this,FVTableHelper *param_1)

{
  UAnimNotifyState::UAnimNotifyState((UAnimNotifyState *)this,param_1);
  *(undefined ***)this = &___7UDS_AnimNotifyState_LockFootIKPosition__6B_;
  return this;
}

// UDS_AnimNotifyState_LockFootIKPosition @ 14b41b0d0

UDS_AnimNotifyState_LockFootIKPosition * __thiscall
UDS_AnimNotifyState_LockFootIKPosition::UDS_AnimNotifyState_LockFootIKPosition
          (UDS_AnimNotifyState_LockFootIKPosition *this,FObjectInitializer *param_1)

{
  UAnimNotifyState::UAnimNotifyState((UAnimNotifyState *)this,param_1);
  *(undefined ***)this = &___7UDS_AnimNotifyState_LockFootIKPosition__6B_;
  return this;
}

// ~UDS_AnimNotifyState_LockFootIKPosition @ 14b41ba90

void __thiscall
UDS_AnimNotifyState_LockFootIKPosition::~UDS_AnimNotifyState_LockFootIKPosition
          (UDS_AnimNotifyState_LockFootIKPosition *this)

{
  *(undefined ***)this = &___7UDS_AnimNotifyState__6B_;
  UAnimNotifyState::~UAnimNotifyState((UAnimNotifyState *)this);
  return;
}

// GetPrivateStaticClass @ 14b41d3d0

UClass * __cdecl UDS_AnimNotifyState_LockFootIKPosition::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_AnimNotifyState_LockFootIKPosition.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_AnimNotifyState_LockFootIKPosition",
               &Z_Registration_Info_UClass_UDS_AnimNotifyState_LockFootIKPosition.InnerSingleton,
               StaticRegisterNativesUDS_AnimNotifyState_LockFootIKPosition,0x30,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_AnimNotifyState_LockFootIKPosition>,
               InternalVTableHelperCtorCaller<UDS_AnimNotifyState_LockFootIKPosition>,local_res8,
               UDS_AnimNotifyState::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_AnimNotifyState_LockFootIKPosition.InnerSingleton;
}

// StaticRegisterNativesUDS_AnimNotifyState_LockFootIKPosition @ 14b41e1b0

void __cdecl
UDS_AnimNotifyState_LockFootIKPosition::StaticRegisterNativesUDS_AnimNotifyState_LockFootIKPosition
          (void)

{
  return;
}

// NotifyBegin @ 14b8d37f0

void __thiscall
UDS_AnimNotifyState_LockFootIKPosition::NotifyBegin
          (UDS_AnimNotifyState_LockFootIKPosition *this,USkeletalMeshComponent *param_1,
          UAnimSequenceBase *param_2,float param_3,FAnimNotifyEventReference *param_4)

{
  bool bVar1;
  UDS_CharacterAnimBase *this_00;
  
  UDS_AnimNotifyState::GetAnimBP
            ((UDS_AnimNotifyState *)this,(USkeletalMeshComponent *)&stack0xffffffffffffffe8);
  bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&stack0xffffffffffffffe8);
  if (bVar1) {
    this_00 = (UDS_CharacterAnimBase *)
              FWeakObjectPtr::Get((FWeakObjectPtr *)&stack0xffffffffffffffe8);
    UDS_CharacterAnimBase::SetFootIKPositionLock(this_00,true);
  }
  return;
}

// NotifyEnd @ 14b8d3bf0

void __thiscall
UDS_AnimNotifyState_LockFootIKPosition::NotifyEnd
          (UDS_AnimNotifyState_LockFootIKPosition *this,USkeletalMeshComponent *param_1,
          UAnimSequenceBase *param_2,FAnimNotifyEventReference *param_3)

{
  bool bVar1;
  UDS_CharacterAnimBase *this_00;
  
  UDS_AnimNotifyState::GetAnimBP
            ((UDS_AnimNotifyState *)this,(USkeletalMeshComponent *)&stack0xffffffffffffffe8);
  bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&stack0xffffffffffffffe8);
  if (bVar1) {
    this_00 = (UDS_CharacterAnimBase *)
              FWeakObjectPtr::Get((FWeakObjectPtr *)&stack0xffffffffffffffe8);
    UDS_CharacterAnimBase::SetFootIKPositionLock(this_00,false);
  }
  return;
}

// SetFootIKPositionLock @ 14b8e7b40

void __thiscall
UDS_AnimNotifyState_LockFootIKPosition::SetFootIKPositionLock
          (UDS_AnimNotifyState_LockFootIKPosition *this,USkeletalMeshComponent *param_1,bool param_2
          )

{
  bool bVar1;
  UDS_CharacterAnimBase *this_00;
  FWeakObjectPtr local_res20;
  
  UDS_AnimNotifyState::GetAnimBP((UDS_AnimNotifyState *)this,(USkeletalMeshComponent *)&local_res20)
  ;
  bVar1 = FWeakObjectPtr::IsValid(&local_res20);
  if (bVar1) {
    this_00 = (UDS_CharacterAnimBase *)FWeakObjectPtr::Get(&local_res20);
    UDS_CharacterAnimBase::SetFootIKPositionLock(this_00,param_2);
  }
  return;
}

