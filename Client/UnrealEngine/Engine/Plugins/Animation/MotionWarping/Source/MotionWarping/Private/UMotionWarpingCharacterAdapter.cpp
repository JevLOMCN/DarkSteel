// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MotionWarping
// Functions: 15

// StaticClass @ 14cefd510

UClass * __cdecl UMotionWarpingCharacterAdapter::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMotionWarpingCharacterAdapter.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MotionWarping",L"MotionWarpingCharacterAdapter",
               &Z_Registration_Info_UClass_UMotionWarpingCharacterAdapter.InnerSingleton,
               StaticRegisterNativesUMotionWarpingCharacterAdapter,0x48,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMotionWarpingCharacterAdapter>,
               InternalVTableHelperCtorCaller<UMotionWarpingCharacterAdapter>,local_res8,
               UMotionWarpingBaseAdapter::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMotionWarpingCharacterAdapter.InnerSingleton;
}

// UMotionWarpingCharacterAdapter @ 14cf04280

UMotionWarpingCharacterAdapter * __thiscall
UMotionWarpingCharacterAdapter::UMotionWarpingCharacterAdapter
          (UMotionWarpingCharacterAdapter *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UMotionWarpingCharacterAdapter__6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  (this->TargetCharacter).WeakPtr = (FWeakObjectPtr)0x0;
  return this;
}

// UMotionWarpingCharacterAdapter @ 14cf042c0

UMotionWarpingCharacterAdapter * __thiscall
UMotionWarpingCharacterAdapter::UMotionWarpingCharacterAdapter
          (UMotionWarpingCharacterAdapter *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UMotionWarpingCharacterAdapter__6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  (this->TargetCharacter).WeakPtr = (FWeakObjectPtr)0x0;
  return this;
}

// ~UMotionWarpingCharacterAdapter @ 14cf057d0

void __thiscall
UMotionWarpingCharacterAdapter::~UMotionWarpingCharacterAdapter
          (UMotionWarpingCharacterAdapter *this)

{
  this->_padding_ = (longlong)&___7UMotionWarpingBaseAdapter__6B_;
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_padding_);
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_padding_);
  UObject::~UObject((UObject *)this);
  return;
}

// BeginDestroy @ 14cf09510

void __thiscall UMotionWarpingCharacterAdapter::BeginDestroy(UMotionWarpingCharacterAdapter *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->TargetCharacter).WeakPtr);
  if ((pUVar1 != (UObject *)0x0) && (*(longlong *)(pUVar1 + 0x15) != 0)) {
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)(*(longlong *)(pUVar1 + 0x15) + 0xfc8));
  }
  UObject::BeginDestroy((UObject *)this);
  return;
}

// GetActor @ 14cf0ef10

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

AActor * __thiscall UMotionWarpingCharacterAdapter::GetActor(UMotionWarpingCharacterAdapter *this)

{
  AActor *pAVar1;
  
  pAVar1 = (AActor *)FWeakObjectPtr::Get(&(this->TargetCharacter).WeakPtr);
  return pAVar1;
}

// GetBaseVisualRotationOffset @ 14cf0f190

TQuat<double> * __thiscall
UMotionWarpingCharacterAdapter::GetBaseVisualRotationOffset
          (UMotionWarpingCharacterAdapter *this,TQuat<double> *__return_storage_ptr__)

{
  double dVar1;
  UObject *pUVar2;
  
  pUVar2 = FWeakObjectPtr::Get(&(this->TargetCharacter).WeakPtr);
  dVar1 = UE::Math::TQuat<double>::Identity.Y;
  if (pUVar2 != (UObject *)0x0) {
    (**(code **)(*(longlong *)pUVar2 + 0x8e0))(pUVar2,__return_storage_ptr__);
    return __return_storage_ptr__;
  }
  __return_storage_ptr__->X = UE::Math::TQuat<double>::Identity.X;
  __return_storage_ptr__->Y = dVar1;
  dVar1 = UE::Math::TQuat<double>::Identity.W;
  __return_storage_ptr__->Z = UE::Math::TQuat<double>::Identity.Z;
  __return_storage_ptr__->W = dVar1;
  return __return_storage_ptr__;
}

// GetBaseVisualTranslationOffset @ 14cf0f220

TVector<double> * __thiscall
UMotionWarpingCharacterAdapter::GetBaseVisualTranslationOffset
          (UMotionWarpingCharacterAdapter *this,TVector<double> *__return_storage_ptr__)

{
  double dVar1;
  double dVar2;
  undefined8 uVar3;
  UObject *pUVar4;
  
  pUVar4 = FWeakObjectPtr::Get(&(this->TargetCharacter).WeakPtr);
  uVar3 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  if (pUVar4 != (UObject *)0x0) {
    dVar2 = *(double *)&pUVar4[0x1a].field_0x8;
    dVar1 = *(double *)&pUVar4[0x1a].field_0x10;
    (__return_storage_ptr__->field0_0x0)._s_0.X = *(double *)(pUVar4 + 0x1a);
    (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar2;
    (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar1;
    return __return_storage_ptr__;
  }
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)uVar3;
  (__return_storage_ptr__->field0_0x0)._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  return __return_storage_ptr__;
}

// GetMesh @ 14cf0fa30

USkeletalMeshComponent * __thiscall
UMotionWarpingCharacterAdapter::GetMesh(UMotionWarpingCharacterAdapter *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->TargetCharacter).WeakPtr);
  if (pUVar1 != (UObject *)0x0) {
    return *(USkeletalMeshComponent **)&pUVar1[0x14].field_0x20;
  }
  return (USkeletalMeshComponent *)0x0;
}

// GetPrivateStaticClass @ 14cf103a0

UClass * __cdecl UMotionWarpingCharacterAdapter::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMotionWarpingCharacterAdapter.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MotionWarping",L"MotionWarpingCharacterAdapter",
               &Z_Registration_Info_UClass_UMotionWarpingCharacterAdapter.InnerSingleton,
               StaticRegisterNativesUMotionWarpingCharacterAdapter,0x48,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMotionWarpingCharacterAdapter>,
               InternalVTableHelperCtorCaller<UMotionWarpingCharacterAdapter>,local_res8,
               UMotionWarpingBaseAdapter::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMotionWarpingCharacterAdapter.InnerSingleton;
}

// GetVisualRootLocation @ 14cf11c40

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TVector<double> * __thiscall
UMotionWarpingCharacterAdapter::GetVisualRootLocation
          (UMotionWarpingCharacterAdapter *this,TVector<double> *__return_storage_ptr__)

{
  longlong lVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  UObject *pUVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  double dVar8;
  double dVar9;
  uint uVar10;
  uint uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  
  pUVar5 = FWeakObjectPtr::Get(&(this->TargetCharacter).WeakPtr);
  if (pUVar5 == (UObject *)0x0) {
    dVar3 = (double)CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_,
                             UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_);
    (__return_storage_ptr__->field0_0x0)._s_0.X =
         (double)CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_,
                          UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_);
    (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar3;
    (__return_storage_ptr__->field0_0x0)._s_0.Z =
         UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    return __return_storage_ptr__;
  }
  lVar1 = *(longlong *)(pUVar5 + 0xb);
  if (lVar1 == 0) {
    uVar16 = 0;
    uVar17 = 0;
    uVar18 = 0;
    uVar19 = 0;
    uVar6 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
    uVar7 = (undefined4)((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_ >> 0x20)
    ;
    uVar12 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
    uVar13 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
    uVar14 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
    uVar15 = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
    dVar3 = ___xmm_3ff00000000000000000000000000000;
    dVar4 = _UNK_15061cbc8;
  }
  else {
    uVar16 = *(undefined4 *)(lVar1 + 0x1f0);
    uVar17 = *(undefined4 *)(lVar1 + 500);
    uVar18 = *(undefined4 *)(lVar1 + 0x1f8);
    uVar19 = *(undefined4 *)(lVar1 + 0x1fc);
    uVar6 = *(undefined4 *)(lVar1 + 0x220);
    uVar7 = *(undefined4 *)(lVar1 + 0x224);
    uVar12 = *(undefined4 *)(lVar1 + 0x210);
    uVar13 = *(undefined4 *)(lVar1 + 0x214);
    uVar14 = *(undefined4 *)(lVar1 + 0x218);
    uVar15 = *(undefined4 *)(lVar1 + 0x21c);
    dVar3 = *(double *)(lVar1 + 0x200);
    dVar4 = *(double *)(lVar1 + 0x208);
  }
  dVar2 = (double)CONCAT44(uVar17,uVar16) + (double)CONCAT44(uVar17,uVar16);
  dVar8 = (double)((float)*(double *)(*(longlong *)&pUVar5[0x15].field_0x8 + 0x240) *
                  *(float *)(*(longlong *)&pUVar5[0x15].field_0x8 + 0x568));
  uVar10 = SUB84(dVar2,0) ^ (uint)__xmm_80000000000000008000000000000000;
  uVar11 = (uint)((ulonglong)dVar2 >> 0x20) ^ __xmm_80000000000000008000000000000000._4_4_;
  dVar9 = (double)CONCAT44(uVar19,uVar18) + (double)CONCAT44(uVar19,uVar18);
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       (double)CONCAT44(uVar13,uVar12) -
       (dVar9 * dVar4 - (double)CONCAT44(uVar11,uVar10) * dVar3) * dVar8;
  dVar2 = ((double)CONCAT44(uVar11,uVar10) * (double)CONCAT44(uVar17,uVar16) -
          dVar9 * (double)CONCAT44(uVar19,uVar18)) + __real_3ff0000000000000;
  (__return_storage_ptr__->field0_0x0)._s_0.Y =
       (double)CONCAT44(uVar15,uVar14) -
       ((double)CONCAT44(uVar11,uVar10) * dVar4 + dVar9 * dVar3) * dVar8;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = (double)CONCAT44(uVar7,uVar6) - dVar2 * dVar8;
  return __return_storage_ptr__;
}

// SetCharacter @ 14cf1b8c0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
UMotionWarpingCharacterAdapter::SetCharacter
          (UMotionWarpingCharacterAdapter *this,ACharacter *param_1)

{
  UCharacterMovementComponent *pUVar1;
  bool bVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  ACharacter *local_res10;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  if (((param_1 == (ACharacter *)0x0) ||
      ((param_1->CharacterMovement).field0_0x0.DebugPtr == (UCharacterMovementComponent *)0x0)) &&
     (bVar2 = `UMotionWarpingCharacterAdapter::SetCharacter'::__l3::<lambda_1>::operator()
                        (&local_res10), !bVar2)) {
    return;
  }
  local_res10 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (ACharacter *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=(&(this->TargetCharacter).WeakPtr,(FObjectPtr)&local_res10);
  pUVar1 = (param_1->CharacterMovement).field0_0x0.DebugPtr;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &pUVar1->ProcessRootMotionPreConvertToWorld,(FWriteAccessScope *)&local_28);
  local_10 = &(pUVar1->ProcessRootMotionPreConvertToWorld).field_0x8;
  puVar3 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)local_10);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6A_AU__TTransform_N_Math_UE__AEBU123_PEAVUCharacterMovementComponent__M_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    *puVar3 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUMotionWarpingCharacterAdapter____A6A_AU__TTransform_N_Math_UE__AEBU234_PEAVUCharacterMovementComponent__M_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (this != (UMotionWarpingCharacterAdapter *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar3[3] = 0;
    local_res10 = (ACharacter *)this;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (this != (UMotionWarpingCharacterAdapter *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar3 + 3),(FObjectPtr)&local_res10);
    puVar3[4] = WarpLocalRootMotionOnCharacter;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// StaticRegisterNativesUMotionWarpingCharacterAdapter @ 14cf1bd60

void __cdecl
UMotionWarpingCharacterAdapter::StaticRegisterNativesUMotionWarpingCharacterAdapter(void)

{
  return;
}

// WarpLocalRootMotionOnCharacter @ 14cf1dfd0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

TTransform<double> * __thiscall
UMotionWarpingCharacterAdapter::WarpLocalRootMotionOnCharacter
          (UMotionWarpingCharacterAdapter *this,TTransform<double> *__return_storage_ptr__,
          TTransform<double> *param_1,UCharacterMovementComponent *param_2,float param_3)

{
  UCharacterMovementComponent *pUVar1;
  FSavedMove_Character *pFVar2;
  UAnimMontage *pUVar3;
  code *pcVar4;
  double dVar5;
  char cVar6;
  bool bVar7;
  ACharacter *this_00;
  TTransform<double> *pTVar8;
  FAnimMontageInstance *pFVar9;
  longlong *plVar10;
  undefined8 local_res8;
  UObject *local_98;
  UAnimMontage *local_90;
  FReadAccessScope local_88;
  FReadAccessScope local_70;
  FWeakObjectPtr local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  float local_40;
  
  this_00 = (ACharacter *)FWeakObjectPtr::Get(&(this->TargetCharacter).WeakPtr);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->_padding_,&local_88);
  if ((((int)this->_padding_ == 0) || ((longlong *)this->_padding_ == (longlong *)0x0)) ||
     (cVar6 = (**(code **)(*(longlong *)this->_padding_ + 0x38))(), cVar6 == '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_88);
  }
  else {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_88);
    if (this_00 != (ACharacter *)0x0) {
      plVar10 = (longlong *)0x0;
      local_58.ObjectIndex = 0;
      local_58.ObjectSerialNumber = 0;
      local_res8 = 0;
      FWeakObjectPtr::operator=(&local_58,(FObjectPtr)&local_res8);
      local_50 = ___xmm_3f800000000000000000000000000000;
      uStack_48 = _UNK_150689648;
      local_40 = param_3;
      if (this_00->bClientUpdating == '\0') {
        pFVar9 = ACharacter::GetRootMotionAnimMontageInstance(this_00);
        if (pFVar9 != (FAnimMontageInstance *)0x0) {
          pUVar3 = (pFVar9->Montage).field0_0x0.DebugPtr;
          if ((pUVar3 == (UAnimMontage *)0x0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("Montage",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\MotionWarping\\Source\\MotionWarping\\Private\\MotionWarpingCharacterAdapter.cpp"
                                 ,0x6b,L""), bVar7)) {
            pcVar4 = (code *)swi(3);
            pTVar8 = (TTransform<double> *)(*pcVar4)();
            return pTVar8;
          }
          local_90 = pUVar3;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (pUVar3 != (UAnimMontage *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)pUVar3);
          }
          FWeakObjectPtr::operator=(&local_58,(FObjectPtr)&local_90);
          local_50 = CONCAT44(pFVar9->Position,(pFVar9->DeltaTimeRecord).Previous);
          uStack_48 = CONCAT44(*(float *)&((pFVar9->Montage).field0_0x0.DebugPtr)->_padding_ *
                               pFVar9->PlayRate,(pFVar9->Blend).BlendedValue);
        }
      }
      else {
        pUVar1 = (this_00->CharacterMovement).field0_0x0.DebugPtr;
        if ((pUVar1 == (UCharacterMovementComponent *)0x0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("MoveComp",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\MotionWarping\\Source\\MotionWarping\\Private\\MotionWarpingCharacterAdapter.cpp"
                               ,0x59,L""), bVar7)) {
          pcVar4 = (code *)swi(3);
          pTVar8 = (TTransform<double> *)(*pcVar4)();
          return pTVar8;
        }
        pFVar2 = pUVar1->CurrentReplayedSavedMove;
        if ((pFVar2 == (FSavedMove_Character *)0x0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("SavedMove",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\MotionWarping\\Source\\MotionWarping\\Private\\MotionWarpingCharacterAdapter.cpp"
                               ,0x5c,L""), bVar7)) {
          pcVar4 = (code *)swi(3);
          pTVar8 = (TTransform<double> *)(*pcVar4)();
          return pTVar8;
        }
        bVar7 = FWeakObjectPtr::IsValid(&(pFVar2->RootMotionMontage).WeakPtr);
        if (bVar7) {
          local_98 = FWeakObjectPtr::Get(&(pFVar2->RootMotionMontage).WeakPtr);
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_98 != (UObject *)0x0))
          {
            UE::GC::MarkAsReachable(local_98);
          }
          FWeakObjectPtr::operator=(&local_58,(FObjectPtr)&local_98);
          local_50 = CONCAT44(pFVar2->RootMotionTrackPosition,
                              pFVar2->RootMotionPreviousTrackPosition);
          uStack_48 = CONCAT44(pFVar2->RootMotionPlayRateWithScale,(undefined4)uStack_48);
        }
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->_padding_,
                 &local_70);
      if ((int)this->_padding_ != 0) {
        plVar10 = (longlong *)this->_padding_;
      }
      (**(code **)(*plVar10 + 0x60))(plVar10,__return_storage_ptr__,param_1,param_3,&local_58);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_70);
      return __return_storage_ptr__;
    }
  }
  dVar5 = (param_1->Rotation).XY.m128d_f64[1];
  (__return_storage_ptr__->Rotation).XY.m128d_f64[0] = (param_1->Rotation).XY.m128d_f64[0];
  (__return_storage_ptr__->Rotation).XY.m128d_f64[1] = dVar5;
  dVar5 = (param_1->Rotation).ZW.m128d_f64[1];
  (__return_storage_ptr__->Rotation).ZW.m128d_f64[0] = (param_1->Rotation).ZW.m128d_f64[0];
  (__return_storage_ptr__->Rotation).ZW.m128d_f64[1] = dVar5;
  dVar5 = (param_1->Translation).XY.m128d_f64[1];
  (__return_storage_ptr__->Translation).XY.m128d_f64[0] = (param_1->Translation).XY.m128d_f64[0];
  (__return_storage_ptr__->Translation).XY.m128d_f64[1] = dVar5;
  dVar5 = (param_1->Translation).ZW.m128d_f64[1];
  (__return_storage_ptr__->Translation).ZW.m128d_f64[0] = (param_1->Translation).ZW.m128d_f64[0];
  (__return_storage_ptr__->Translation).ZW.m128d_f64[1] = dVar5;
  dVar5 = (param_1->Scale3D).XY.m128d_f64[1];
  (__return_storage_ptr__->Scale3D).XY.m128d_f64[0] = (param_1->Scale3D).XY.m128d_f64[0];
  (__return_storage_ptr__->Scale3D).XY.m128d_f64[1] = dVar5;
  dVar5 = (param_1->Scale3D).ZW.m128d_f64[1];
  (__return_storage_ptr__->Scale3D).ZW.m128d_f64[0] = (param_1->Scale3D).ZW.m128d_f64[0];
  (__return_storage_ptr__->Scale3D).ZW.m128d_f64[1] = dVar5;
  return __return_storage_ptr__;
}

// operator() @ 150578250

bool __thiscall
`UMotionWarpingCharacterAdapter::SetCharacter'::__l3::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_991371828800782310>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_991371828800782310>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

