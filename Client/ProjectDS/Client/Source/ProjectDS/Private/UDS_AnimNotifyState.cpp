// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 7

// StaticClass @ 14b415e00

UClass * __cdecl UDS_AnimNotifyState::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_AnimNotifyState.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_AnimNotifyState",
               &Z_Registration_Info_UClass_UDS_AnimNotifyState.InnerSingleton,
               StaticRegisterNativesUDS_AnimNotifyState,0x30,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_AnimNotifyState>,
               InternalVTableHelperCtorCaller<UDS_AnimNotifyState>,local_res8,
               UAnimNotifyState::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_AnimNotifyState.InnerSingleton;
}

// UDS_AnimNotifyState @ 14b41af40

UDS_AnimNotifyState * __thiscall
UDS_AnimNotifyState::UDS_AnimNotifyState(UDS_AnimNotifyState *this,FVTableHelper *param_1)

{
  UAnimNotifyState::UAnimNotifyState((UAnimNotifyState *)this,param_1);
  *(undefined ***)this = &___7UDS_AnimNotifyState__6B_;
  return this;
}

// UDS_AnimNotifyState @ 14b41af70

UDS_AnimNotifyState * __thiscall
UDS_AnimNotifyState::UDS_AnimNotifyState(UDS_AnimNotifyState *this,FObjectInitializer *param_1)

{
  UAnimNotifyState::UAnimNotifyState((UAnimNotifyState *)this,param_1);
  *(undefined ***)this = &___7UDS_AnimNotifyState__6B_;
  return this;
}

// ~UDS_AnimNotifyState @ 14b41b9e0

void __thiscall UDS_AnimNotifyState::~UDS_AnimNotifyState(UDS_AnimNotifyState *this)

{
  *(undefined ***)this = &___7UDS_AnimNotifyState__6B_;
  UAnimNotifyState::~UAnimNotifyState((UAnimNotifyState *)this);
  return;
}

// GetPrivateStaticClass @ 14b41d0d0

UClass * __cdecl UDS_AnimNotifyState::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_AnimNotifyState.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_AnimNotifyState",
               &Z_Registration_Info_UClass_UDS_AnimNotifyState.InnerSingleton,
               StaticRegisterNativesUDS_AnimNotifyState,0x30,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_AnimNotifyState>,
               InternalVTableHelperCtorCaller<UDS_AnimNotifyState>,local_res8,
               UAnimNotifyState::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_AnimNotifyState.InnerSingleton;
}

// StaticRegisterNativesUDS_AnimNotifyState @ 14b41e170

void __cdecl UDS_AnimNotifyState::StaticRegisterNativesUDS_AnimNotifyState(void)

{
  return;
}

// GetAnimBP @ 14b876350

TWeakObjectPtr<UDS_CharacterAnimBase,FWeakObjectPtr> __thiscall
UDS_AnimNotifyState::GetAnimBP(UDS_AnimNotifyState *this,USkeletalMeshComponent *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TWeakObjectPtr<UDS_CharacterAnimBase,FWeakObjectPtr> TVar4;
  UAnimInstance *pUVar5;
  UClass *pUVar6;
  USkeletalMeshComponent *in_R8;
  undefined8 local_res18;
  UAnimInstance *local_res20;
  
  if (in_R8 == (USkeletalMeshComponent *)0x0) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_4949097150257561589>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Animation\\NotifyState\\DS_AnimNotifyState.cpp"
                       ,0xb,"MeshComp");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      TVar4.WeakPtr = (FWeakObjectPtr)(*pcVar2)();
      return (TWeakObjectPtr<UDS_CharacterAnimBase,FWeakObjectPtr>)TVar4.WeakPtr;
    }
    param_1->_padding_ = 0;
    local_res18 = 0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)&local_res18);
    return (TWeakObjectPtr<UDS_CharacterAnimBase,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
  }
  pUVar5 = USkeletalMeshComponent::GetAnimInstance(in_R8);
  if (pUVar5 != (UAnimInstance *)0x0) {
    pUVar6 = Z_Construct_UClass_UDS_CharacterAnimBase_NoRegister();
    iVar1 = (int)pUVar6->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar5->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar5->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar6->_padding_)) goto LAB_14b8763f1;
  }
  pUVar5 = (UAnimInstance *)0x0;
LAB_14b8763f1:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UAnimInstance *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar5);
  }
  param_1->_padding_ = 0;
  local_res20 = pUVar5;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UAnimInstance *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar5);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)&local_res20);
  return (TWeakObjectPtr<UDS_CharacterAnimBase,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
}

