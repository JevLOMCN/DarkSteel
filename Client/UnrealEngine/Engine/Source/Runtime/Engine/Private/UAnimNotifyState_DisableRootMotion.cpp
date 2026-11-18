// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 8

// StaticClass @ 147490630

UClass * __cdecl UAnimNotifyState_DisableRootMotion::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAnimNotifyState_DisableRootMotion.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"AnimNotifyState_DisableRootMotion",
               &Z_Registration_Info_UClass_UAnimNotifyState_DisableRootMotion.InnerSingleton,
               StaticRegisterNativesUAnimNotifyState_DisableRootMotion,0x30,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UAnimNotifyState_DisableRootMotion>,
               InternalVTableHelperCtorCaller<UAnimNotifyState_DisableRootMotion>,local_res8,
               UAnimNotifyState::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAnimNotifyState_DisableRootMotion.InnerSingleton;
}

// UAnimNotifyState_DisableRootMotion @ 1474b3e60

UAnimNotifyState_DisableRootMotion * __thiscall
UAnimNotifyState_DisableRootMotion::UAnimNotifyState_DisableRootMotion
          (UAnimNotifyState_DisableRootMotion *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UAnimNotifyState_DisableRootMotion__6B_;
  return this;
}

// UAnimNotifyState_DisableRootMotion @ 1474b3e90

UAnimNotifyState_DisableRootMotion * __thiscall
UAnimNotifyState_DisableRootMotion::UAnimNotifyState_DisableRootMotion
          (UAnimNotifyState_DisableRootMotion *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->field_0x28 = 1;
  *(undefined ***)this = &___7UAnimNotifyState_DisableRootMotion__6B_;
  return this;
}

// ~UAnimNotifyState_DisableRootMotion @ 1474b5620

void __thiscall
UAnimNotifyState_DisableRootMotion::~UAnimNotifyState_DisableRootMotion
          (UAnimNotifyState_DisableRootMotion *this)

{
  *(undefined ***)this = &___7UAnimNotifyState__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// BranchingPointNotifyBegin @ 1474c1640

void __thiscall
UAnimNotifyState_DisableRootMotion::BranchingPointNotifyBegin
          (UAnimNotifyState_DisableRootMotion *this,FBranchingPointNotifyPayload *param_1)

{
  code *pcVar1;
  UAnimInstance *this_00;
  FAnimMontageInstance *pFVar2;
  float fVar3;
  undefined8 local_38;
  TReferenceControllerBase<1> *pTStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  undefined4 local_10;
  undefined1 local_c;
  
  fVar3 = 0.0;
  local_18 = 0;
  local_10 = 0;
  local_38 = 0;
  pTStack_30 = (TReferenceControllerBase<1> *)0x0;
  local_c = 0;
  local_28 = 0;
  uStack_20 = 0;
  pcVar1 = *(code **)(*(longlong *)this + 0x2c0);
  if (param_1->NotifyEvent != (FAnimNotifyEvent *)0x0) {
    fVar3 = FAnimNotifyEvent::GetDuration(param_1->NotifyEvent);
  }
  (*pcVar1)(this,param_1->SkelMeshComponent,param_1->SequenceAsset,fVar3,&local_38);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_30);
  if (param_1->SkelMeshComponent != (USkeletalMeshComponent *)0x0) {
    this_00 = USkeletalMeshComponent::GetAnimInstance(param_1->SkelMeshComponent);
    if (this_00 != (UAnimInstance *)0x0) {
      pFVar2 = UAnimInstance::GetMontageInstanceForID(this_00,param_1->MontageInstanceID);
      if (pFVar2 != (FAnimMontageInstance *)0x0) {
        pFVar2->DisableRootMotionCount = pFVar2->DisableRootMotionCount + 1;
      }
    }
  }
  return;
}

// BranchingPointNotifyEnd @ 1474c1780

void __thiscall
UAnimNotifyState_DisableRootMotion::BranchingPointNotifyEnd
          (UAnimNotifyState_DisableRootMotion *this,FBranchingPointNotifyPayload *param_1)

{
  UAnimInstance *this_00;
  FAnimMontageInstance *pFVar1;
  bool local_res8 [8];
  FAnimNotifyEventReference local_38;
  
  local_38.NotifySource.field0_0x0.DebugPtr = (TObjectPtr<UObject_const_>_u_0)0x0;
  local_38.ContextData.Object =
       (TArray<TUniquePtr<UE::Anim::IAnimNotifyEventContextDataInterface_const_,TDefaultDelete<UE::Anim::IAnimNotifyEventContextDataInterface_const_>_>,TSizedDefaultAllocator<32>_>
        *)0x0;
  local_38.ContextData.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0
  ;
  local_38.Notify = (FAnimNotifyEvent *)0x0;
  local_38.MirrorTable.field0_0x0.DebugPtr = (TObjectPtr<UMirrorDataTable_const_>_u_0)0x0;
  local_38.CurrentAnimTime = 0.0;
  local_38.bActiveContext = false;
  if (param_1->bReachedEnd != false) {
    local_res8[0] = true;
    FAnimNotifyEventReference::AddContextData<UE::Anim::FAnimNotifyEndDataContext,bool>
              (&local_38,local_res8);
  }
  (**(code **)(*(longlong *)this + 0x2e0))
            (this,param_1->SkelMeshComponent,param_1->SequenceAsset,&local_38);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_38.ContextData.SharedReferenceCount.ReferenceController);
  if (param_1->SkelMeshComponent != (USkeletalMeshComponent *)0x0) {
    this_00 = USkeletalMeshComponent::GetAnimInstance(param_1->SkelMeshComponent);
    if (this_00 != (UAnimInstance *)0x0) {
      pFVar1 = UAnimInstance::GetMontageInstanceForID(this_00,param_1->MontageInstanceID);
      if (pFVar1 != (FAnimMontageInstance *)0x0) {
        pFVar1->DisableRootMotionCount = pFVar1->DisableRootMotionCount + -1;
      }
    }
  }
  return;
}

// GetPrivateStaticClass @ 1474dd250

UClass * __cdecl UAnimNotifyState_DisableRootMotion::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAnimNotifyState_DisableRootMotion.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"AnimNotifyState_DisableRootMotion",
               &Z_Registration_Info_UClass_UAnimNotifyState_DisableRootMotion.InnerSingleton,
               StaticRegisterNativesUAnimNotifyState_DisableRootMotion,0x30,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UAnimNotifyState_DisableRootMotion>,
               InternalVTableHelperCtorCaller<UAnimNotifyState_DisableRootMotion>,local_res8,
               UAnimNotifyState::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAnimNotifyState_DisableRootMotion.InnerSingleton;
}

// StaticRegisterNativesUAnimNotifyState_DisableRootMotion @ 1474fae30

void __cdecl
UAnimNotifyState_DisableRootMotion::StaticRegisterNativesUAnimNotifyState_DisableRootMotion(void)

{
  return;
}

