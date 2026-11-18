// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Constraints
// Functions: 12

// FAnimationEvaluator @ 14649dc30

/* WARNING: Enum "Type": Some values do not have unique names */

FAnimationEvaluator * __thiscall
UE::Anim::FAnimationEvaluator::FAnimationEvaluator
          (FAnimationEvaluator *this,USkeletalMeshComponent *param_1)

{
  undefined8 *puVar1;
  ulong64 uVar2;
  ulong64 *puVar3;
  FName local_res8;
  void *local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  bool local_48;
  FDelegateAllocation *local_40;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_38;
  FDelegateAllocation local_30;
  
  if ((GC::GIsIncrementalReachabilityPending) && (param_1 != (USkeletalMeshComponent *)0x0)) {
    GC::MarkAsReachable((UObject *)param_1);
  }
  (this->SkeletalMeshComponent).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8 = (FName)param_1;
  if ((GC::GIsIncrementalReachabilityPending != false) && (param_1 != (USkeletalMeshComponent *)0x0)
     ) {
    GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)this,(FObjectPtr)&local_res8);
  (this->Context).ComponentSpaceTransforms.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Context).ComponentSpaceTransforms.ArrayNum = 0;
  (this->Context).ComponentSpaceTransforms.ArrayMax = 0;
  (this->Context).BoneSpaceTransforms.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Context).BoneSpaceTransforms.ArrayNum = 0;
  (this->Context).BoneSpaceTransforms.ArrayMax = 0;
  (this->Context).CachedComponentSpaceTransforms.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->Context).CachedComponentSpaceTransforms.ArrayNum = 0;
  (this->Context).CachedComponentSpaceTransforms.ArrayMax = 0;
  (this->Context).CachedBoneSpaceTransforms.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Context).CachedBoneSpaceTransforms.ArrayNum = 0;
  (this->Context).CachedBoneSpaceTransforms.ArrayMax = 0;
  *(undefined8 *)&(this->Context).Curve = 0;
  *(undefined8 *)&(this->Context).Curve.field_0x8 = 0;
  (this->Context).Curve.field_0x10 = 0;
  *(undefined8 *)&(this->Context).Curve.field_0x18 = 0;
  *(undefined8 *)&(this->Context).CachedCurve = 0;
  *(undefined8 *)&(this->Context).CachedCurve.field_0x8 = 0;
  (this->Context).CachedCurve.field_0x10 = 0;
  *(undefined8 *)&(this->Context).CachedCurve.field_0x18 = 0;
  *(undefined8 *)&(this->Context).CustomAttributes = 0;
  *(undefined8 *)&(this->Context).CustomAttributes.field_0x8 = 0;
  *(undefined8 *)&(this->Context).CustomAttributes.field_0x10 = 0;
  *(undefined8 *)&(this->Context).CustomAttributes.field_0x18 = 0;
  *(undefined8 *)&(this->Context).CustomAttributes.field_0x20 = 0;
  *(undefined8 *)&(this->Context).CustomAttributes.field_0x28 = 0;
  *(undefined8 *)&(this->Context).CustomAttributes.field_0x30 = 0;
  *(undefined8 *)&(this->Context).CustomAttributes.field_0x38 = 0;
  *(undefined8 *)&(this->Context).CachedCustomAttributes = 0;
  *(undefined8 *)&(this->Context).CachedCustomAttributes.field_0x8 = 0;
  *(undefined8 *)&(this->Context).CachedCustomAttributes.field_0x10 = 0;
  *(undefined8 *)&(this->Context).CachedCustomAttributes.field_0x18 = 0;
  *(undefined8 *)&(this->Context).CachedCustomAttributes.field_0x20 = 0;
  *(undefined8 *)&(this->Context).CachedCustomAttributes.field_0x28 = 0;
  *(undefined8 *)&(this->Context).CachedCustomAttributes.field_0x30 = 0;
  *(undefined8 *)&(this->Context).CachedCustomAttributes.field_0x38 = 0;
  (this->Context).AnimInstance = (UAnimInstance *)0x0;
  (this->Context).PostProcessAnimInstance = (UAnimInstance *)0x0;
  (this->Context).SkeletalMesh = (USkeletalMesh *)0x0;
  (this->OnBoneTransformsFinalizedHandle).ID = 0;
  *(undefined8 *)&this->PostEvaluationTasks = 0;
  *(undefined8 *)&(this->PostEvaluationTasks).field_0x8 = 0;
  *(undefined8 *)&(this->PostEvaluationTasks).field_0x20 = 0;
  *(undefined4 *)&(this->PostEvaluationTasks).field_0x28 = 0;
  *(undefined4 *)&(this->PostEvaluationTasks).field_0x2c = 0x80;
  *(undefined4 *)&(this->PostEvaluationTasks).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->PostEvaluationTasks).field_0x34 = 0;
  *(undefined8 *)&(this->PostEvaluationTasks).field_0x40 = 0;
  *(undefined4 *)&(this->PostEvaluationTasks).field_0x48 = 0;
  if (param_1 != (USkeletalMeshComponent *)0x0) {
    local_38.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    local_30.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_30.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_38,(FWriteAccessScope *)&local_58);
    local_40 = &local_30;
    puVar1 = Core::Private::DelegateAllocate(0x28,&local_30);
    if (puVar1 != (undefined8 *)0x0) {
      *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
      uVar2 = FDelegateHandle::GenerateNewID();
      puVar1[2] = uVar2;
      *puVar1 = &
                ___7__TBaseRawMethodDelegateInstance__0A_UFAnimationEvaluator_Anim_UE____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
      ;
      puVar1[4] = BoneTransformsFinalized;
      puVar1[3] = this;
    }
    if (local_48 == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                ((FMRSWRecursiveAccessDetector *)CONCAT44(uStack_4c,local_50),
                 (FDestructionSentinel *)&local_58);
    }
    puVar3 = (ulong64 *)(**(code **)(param_1->_padding_ + 0xc50))(param_1,&local_res8);
    (this->OnBoneTransformsFinalizedHandle).ID = *puVar3;
    if ((bLogNewEvaluation != false) && (2 < (byte)LogTemp._0_1_)) {
      local_res8 = (FName)param_1->_padding_;
      ::FName::ToString(&local_res8,(FString *)&local_58);
      Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogTemp);
      if (local_58 != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58);
      }
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_38,(FWriteAccessScope *)&local_58);
    if ((local_30.DelegateSize != 0) &&
       (local_30.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_30.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_30,0,0,0x10);
      local_30.DelegateSize = 0;
    }
    if (local_48 == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                ((FMRSWRecursiveAccessDetector *)CONCAT44(uStack_4c,local_50),
                 (FDestructionSentinel *)&local_58);
    }
    if (local_30.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_30.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_38.AccessDetector);
  }
  return this;
}

// ~FAnimationEvaluator @ 14649f740

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UE::Anim::FAnimationEvaluator::~FAnimationEvaluator(FAnimationEvaluator *this)

{
  void *pvVar1;
  UObject *pUVar2;
  FName local_res8;
  FString local_18;
  
  if ((this->OnBoneTransformsFinalizedHandle).ID != 0) {
    pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)this,true);
    if (((pUVar2 != (UObject *)0x0) &&
        ((**(code **)(*(longlong *)pUVar2 + 0xc58))(pUVar2,&this->OnBoneTransformsFinalizedHandle),
        bLogNewEvaluation != false)) && (2 < (byte)LogTemp._0_1_)) {
      local_res8.ComparisonIndex.Value = *(uint *)&pUVar2->field_0x18;
      local_res8.Number = *(uint *)&pUVar2->field_0x1c;
      ::FName::ToString(&local_res8,&local_18);
      Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogTemp);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
    (this->OnBoneTransformsFinalizedHandle).ID = 0;
  }
  TSet<TTuple<FGuid,UE::Anim::FAnimationEvaluationTask>,TDefaultMapHashableKeyFuncs<FGuid,UE::Anim::FAnimationEvaluationTask,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<FGuid,UE::Anim::FAnimationEvaluationTask>,TDefaultMapHashableKeyFuncs<FGuid,UE::Anim::FAnimationEvaluationTask,0>,FDefaultSetAllocator>
           *)&this->PostEvaluationTasks);
  *(undefined4 *)&(this->PostEvaluationTasks).field_0x48 = 0;
  pvVar1 = *(void **)&(this->PostEvaluationTasks).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FGuid,UE::Anim::FAnimationEvaluationTask>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FGuid,UE::Anim::FAnimationEvaluationTask>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FGuid,UE::Anim::FAnimationEvaluationTask>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->PostEvaluationTasks);
  FAnimationEvaluationContext::~FAnimationEvaluationContext(&this->Context);
  return;
}

// operator() @ 1464a18e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TTransform<double> * __thiscall
`UE::Anim::FAnimationEvaluator::GetRelativeTransform'::__l2::<lambda_1>::operator()
          (void *this,TTransform<double> *__return_storage_ptr__,
          TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  float fVar3;
  float fVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  double dVar11;
  bool bVar12;
  uint uVar13;
  USkeletalMeshSocket *pUVar14;
  TTransform<double> *pTVar15;
  uint *puVar16;
  longlong lVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined1 auStackY_d8 [32];
  uint local_a8 [4];
  TTransform<double> local_98;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_d8;
  uVar13 = 0xffffffff;
  local_a8[0] = 0xffffffff;
  local_98.Rotation.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  local_98.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_98.Rotation.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  local_98.Rotation.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  local_98.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_98.Rotation.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  local_98.Translation.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  local_98.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_98.Translation.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  local_98.Translation.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
  local_98.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_98.Translation.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
  local_98.Scale3D.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  local_98.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_98.Scale3D.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  local_98.Scale3D.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
  local_98.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_98.Scale3D.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
  pUVar14 = USkinnedMeshComponent::GetSocketInfoByName
                      (*(USkinnedMeshComponent **)((longlong)this + 8),*(FName *)this,&local_98,
                       (int *)local_a8);
  if (pUVar14 != (USkeletalMeshSocket *)0x0) {
    lVar17 = (longlong)(int)local_a8[0];
    if ((-1 < (int)local_a8[0]) && ((int)local_a8[0] < param_1->ArrayNum)) {
      uVar13 = 0;
      if ((int)local_a8[0] < param_1->ArrayNum) {
        uVar13 = ~local_a8[0] >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar2 = (code *)swi(3);
        pTVar15 = (TTransform<double> *)(*pcVar2)();
        return pTVar15;
      }
      fVar3 = GlobalVectorConstants::Float0001.m128_f32[2];
      fVar4 = GlobalVectorConstants::Float0001.m128_f32[3];
      pFVar1 = (param_1->AllocatorInstance).Data;
      auVar5._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
      auVar5._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
      auVar5._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20)
      ;
      *(undefined1 (*) [16])(__return_storage_ptr__->Rotation).XY.m128d_f64 = auVar5;
      auVar6._8_4_ = SUB84((double)fVar4,0);
      auVar6._0_8_ = (double)fVar3;
      auVar6._12_4_ = (int)((ulonglong)(double)fVar4 >> 0x20);
      *(undefined1 (*) [16])(__return_storage_ptr__->Rotation).ZW.m128d_f64 = auVar6;
      fVar3 = GlobalVectorConstants::FloatZero.m128_f32[2];
      fVar4 = GlobalVectorConstants::FloatZero.m128_f32[3];
      auVar7._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
      auVar7._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
      auVar7._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20)
      ;
      *(undefined1 (*) [16])(__return_storage_ptr__->Translation).XY.m128d_f64 = auVar7;
      auVar8._8_4_ = SUB84((double)fVar4,0);
      auVar8._0_8_ = (double)fVar3;
      auVar8._12_4_ = (int)((ulonglong)(double)fVar4 >> 0x20);
      *(undefined1 (*) [16])(__return_storage_ptr__->Translation).ZW.m128d_f64 = auVar8;
      fVar3 = GlobalVectorConstants::Float1110.m128_f32[2];
      fVar4 = GlobalVectorConstants::Float1110.m128_f32[3];
      auVar9._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
      auVar9._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
      auVar9._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20)
      ;
      *(undefined1 (*) [16])(__return_storage_ptr__->Scale3D).XY.m128d_f64 = auVar9;
      auVar10._8_4_ = SUB84((double)fVar4,0);
      auVar10._0_8_ = (double)fVar3;
      auVar10._12_4_ = (int)((ulonglong)(double)fVar4 >> 0x20);
      *(undefined1 (*) [16])(__return_storage_ptr__->Scale3D).ZW.m128d_f64 = auVar10;
      UE::Math::TTransform<double>::Multiply
                (__return_storage_ptr__,&local_98,(TTransform<double> *)(pFVar1 + lVar17 * 0x60));
      return __return_storage_ptr__;
    }
    bVar12 = UE::Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<2079554526850842801>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Animation\\Constraints\\Private\\Transform\\AnimationEvaluation.cpp"
                        ,0xb1,
                        "BoneIndex != INDEX_NONE && ComponentSpaceTransforms.IsValidIndex(BoneIndex)"
                       );
    if (bVar12) {
      pcVar2 = (code *)swi(3);
      pTVar15 = (TTransform<double> *)(*pcVar2)();
      return pTVar15;
    }
  }
  if (*(longlong **)((longlong)this + 0x10) != (longlong *)0x0) {
    lVar17 = (**(code **)(**(longlong **)((longlong)this + 0x10) + 800))();
    if ((*(FName *)this != (FName)0x0) &&
       (puVar16 = (uint *)TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                          ::Find((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                                  *)(lVar17 + 0x90),*(FName *)this), puVar16 != (uint *)0x0)) {
      uVar13 = *puVar16;
    }
    local_a8[0] = uVar13;
    if ((-1 < (int)uVar13) && ((int)uVar13 < param_1->ArrayNum)) {
      if (((int)uVar13 < 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar2 = (code *)swi(3);
        pTVar15 = (TTransform<double> *)(*pcVar2)();
        return pTVar15;
      }
      pFVar1 = (param_1->AllocatorInstance).Data;
      lVar17 = (longlong)(int)uVar13 * 0x60;
      dVar11 = *(double *)(pFVar1 + lVar17 + 8);
      (__return_storage_ptr__->Rotation).XY.m128d_f64[0] = *(double *)(pFVar1 + lVar17);
      (__return_storage_ptr__->Rotation).XY.m128d_f64[1] = dVar11;
      dVar11 = *(double *)(pFVar1 + lVar17 + 0x10 + 8);
      (__return_storage_ptr__->Rotation).ZW.m128d_f64[0] = *(double *)(pFVar1 + lVar17 + 0x10);
      (__return_storage_ptr__->Rotation).ZW.m128d_f64[1] = dVar11;
      dVar11 = *(double *)(pFVar1 + lVar17 + 0x20 + 8);
      (__return_storage_ptr__->Translation).XY.m128d_f64[0] = *(double *)(pFVar1 + lVar17 + 0x20);
      (__return_storage_ptr__->Translation).XY.m128d_f64[1] = dVar11;
      dVar11 = *(double *)(pFVar1 + lVar17 + 0x30 + 8);
      (__return_storage_ptr__->Translation).ZW.m128d_f64[0] = *(double *)(pFVar1 + lVar17 + 0x30);
      (__return_storage_ptr__->Translation).ZW.m128d_f64[1] = dVar11;
      dVar11 = *(double *)(pFVar1 + lVar17 + 0x40 + 8);
      (__return_storage_ptr__->Scale3D).XY.m128d_f64[0] = *(double *)(pFVar1 + lVar17 + 0x40);
      (__return_storage_ptr__->Scale3D).XY.m128d_f64[1] = dVar11;
      pFVar1 = pFVar1 + lVar17 + 0x50;
      uVar18 = *(undefined4 *)pFVar1;
      uVar19 = *(undefined4 *)(pFVar1 + 4);
      uVar20 = *(undefined4 *)(pFVar1 + 8);
      uVar21 = *(undefined4 *)(pFVar1 + 0xc);
      goto LAB_1464a1b98;
    }
    bVar12 = UE::Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<2079554526850842810>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Animation\\Constraints\\Private\\Transform\\AnimationEvaluation.cpp"
                        ,0xba,
                        "BoneIndex != INDEX_NONE && ComponentSpaceTransforms.IsValidIndex(BoneIndex)"
                       );
    if (bVar12) {
      pcVar2 = (code *)swi(3);
      pTVar15 = (TTransform<double> *)(*pcVar2)();
      return pTVar15;
    }
  }
  *&(__return_storage_ptr__->Rotation).XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *&(__return_storage_ptr__->Rotation).ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *&(__return_storage_ptr__->Translation).XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *&(__return_storage_ptr__->Translation).ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *&(__return_storage_ptr__->Scale3D).XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  uVar18 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0]._0_4_;
  uVar19 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0]._4_4_;
  uVar20 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1]._0_4_;
  uVar21 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1]._4_4_;
LAB_1464a1b98:
  *(undefined4 *)(__return_storage_ptr__->Scale3D).ZW.m128d_f64 = uVar18;
  *(undefined4 *)((longlong)(__return_storage_ptr__->Scale3D).ZW.m128d_f64 + 4) = uVar19;
  *(undefined4 *)((__return_storage_ptr__->Scale3D).ZW.m128d_f64 + 1) = uVar20;
  *(undefined4 *)((longlong)(__return_storage_ptr__->Scale3D).ZW.m128d_f64 + 0xc) = uVar21;
  return __return_storage_ptr__;
}

// AddPostEvaluationTask @ 1464a3970

bool __thiscall
UE::Anim::FAnimationEvaluator::AddPostEvaluationTask
          (FAnimationEvaluator *this,FAnimationEvaluationTask *param_1)

{
  bool bVar1;
  int iVar2;
  USkeletalMeshComponent *pUVar3;
  ulong64 uVar4;
  
  pUVar3 = (USkeletalMeshComponent *)FWeakObjectPtr::Get((FWeakObjectPtr *)this);
  if (((pUVar3 != (USkeletalMeshComponent *)0x0) &&
      ((((param_1->Guid).D != 0 || (param_1->Guid).C != 0) || (param_1->Guid).B != 0) ||
       (param_1->Guid).A != 0)) && (*(longlong *)&param_1->PostEvaluationFunction != 0)) {
    bVar1 = TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr>::
            UEOpEquals<USkeletalMeshComponent,bool>(&param_1->SkeletalMeshComponent,pUVar3);
    if (bVar1) {
      uVar4 = CityHash64((char *)param_1,0x10);
      iVar2 = TSet<TTuple<FGuid,UE::Anim::FAnimationEvaluationTask>,TDefaultMapHashableKeyFuncs<FGuid,UE::Anim::FAnimationEvaluationTask,0>,FDefaultSetAllocator>
              ::FindIndexByHash<FGuid>
                        ((TSet<TTuple<FGuid,UE::Anim::FAnimationEvaluationTask>,TDefaultMapHashableKeyFuncs<FGuid,UE::Anim::FAnimationEvaluationTask,0>,FDefaultSetAllocator>
                          *)&this->PostEvaluationTasks,(uint)uVar4,&param_1->Guid);
      if (iVar2 == -1) {
        uVar4 = CityHash64((char *)param_1,0x10);
        TMapBase<FGuid,UE::Anim::FAnimationEvaluationTask,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,UE::Anim::FAnimationEvaluationTask,0>_>
        ::FindOrAddImpl<FGuid_const_&,UE::Anim::FAnimationEvaluationTask_const_&>
                  ((TMapBase<FGuid,UE::Anim::FAnimationEvaluationTask,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,UE::Anim::FAnimationEvaluationTask,0>_>
                    *)&this->PostEvaluationTasks,(uint)uVar4,&param_1->Guid,param_1);
        return true;
      }
    }
  }
  return false;
}

// BoneTransformsFinalized @ 1464a4a20

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall UE::Anim::FAnimationEvaluator::BoneTransformsFinalized(FAnimationEvaluator *this)

{
  double *pdVar1;
  double *pdVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  double dVar5;
  double dVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  uint uVar10;
  uint uVar11;
  uint uVar12;
  double dVar13;
  bool bVar14;
  int iVar15;
  uint uVar16;
  int iVar17;
  USkeletalMeshComponent *pUVar18;
  undefined7 extraout_var;
  undefined8 uVar19;
  uint uVar20;
  int iVar21;
  longlong lVar22;
  longlong *plVar23;
  double *pdVar24;
  longlong lVar25;
  ulonglong uVar26;
  uint uVar27;
  uint uVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  double dVar39;
  double dVar40;
  double dVar41;
  double dVar42;
  undefined4 uVar43;
  undefined4 uVar44;
  double dVar45;
  double dVar46;
  undefined1 auStack_e0 [16];
  uint uStack_d0;
  uint uStack_cc;
  longlong local_c8;
  TSet<TTuple<FGuid,UE::Anim::FAnimationEvaluationTask>,TDefaultMapHashableKeyFuncs<FGuid,UE::Anim::FAnimationEvaluationTask,0>,FDefaultSetAllocator>
  *pTStack_c0;
  TSet<TTuple<FGuid,UE::Anim::FAnimationEvaluationTask>,TDefaultMapHashableKeyFuncs<FGuid,UE::Anim::FAnimationEvaluationTask,0>,FDefaultSetAllocator>
  *local_b8;
  char local_b0;
  char cStack_af;
  double local_a8;
  double local_a0;
  undefined1 local_98 [32];
  longlong local_78;
  TSet<TTuple<FGuid,UE::Anim::FAnimationEvaluationTask>,TDefaultMapHashableKeyFuncs<FGuid,UE::Anim::FAnimationEvaluationTask,0>,FDefaultSetAllocator>
  *pTStack_70;
  
  bVar14 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)this);
  if (((bVar14) && ((this->Context).ComponentSpaceTransforms.ArrayNum != 0)) &&
     ((this->Context).SkeletalMesh != (USkeletalMesh *)0x0)) {
    pUVar18 = (USkeletalMeshComponent *)FWeakObjectPtr::Get((FWeakObjectPtr *)this);
    lVar22 = (longlong)(int)pUVar18->_padding_;
    iVar17 = (int)(&pUVar18->_padding_)[lVar22 * 2];
    pdVar2 = (double *)(&pUVar18->_padding_)[lVar22 * 2];
    if ((iVar17 < 0) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("InCount >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xeb,L""), bVar14)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    dVar13 = __real_3f1a36e2e0000000;
    uVar12 = _UNK_15061cc8c;
    uVar11 = _UNK_15061cc88;
    uVar10 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
    uVar27 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
    if (((this->Context).ComponentSpaceTransforms.ArrayNum == iVar17) &&
       (uVar28 = 0, pdVar24 = pdVar2, 0 < iVar17)) {
      do {
        iVar15 = (this->Context).ComponentSpaceTransforms.ArrayNum;
        uVar16 = 0;
        if ((int)uVar28 < iVar15) {
          uVar16 = ~uVar28 >> 0x1f;
        }
        if (uVar16 == 0) {
          iVar15 = 0x506106c8;
          bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          uVar16 = (uint)CONCAT71(extraout_var,bVar14);
          if (bVar14) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        pFVar3 = (this->Context).ComponentSpaceTransforms.AllocatorInstance.Data;
        uVar43 = SUB84(dVar13,0);
        uVar44 = (undefined4)((ulonglong)dVar13 >> 0x20);
        auVar29._8_4_ = uVar43;
        auVar29._0_8_ = dVar13;
        auVar29._12_4_ = uVar44;
        dVar5 = *(double *)((longlong)pdVar24 + (longlong)(pFVar3 + (0x30 - (longlong)pdVar2))) -
                pdVar24[6];
        dVar6 = *(double *)
                 ((FScriptContainerElement *)
                  ((longlong)pdVar24 + (longlong)(pFVar3 + (0x30 - (longlong)pdVar2))) + 8) -
                pdVar24[7];
        dVar39 = *(double *)((longlong)pdVar24 + (longlong)(pFVar3 + (0x20 - (longlong)pdVar2))) -
                 pdVar24[4];
        dVar41 = *(double *)
                  ((FScriptContainerElement *)
                   ((longlong)pdVar24 + (longlong)(pFVar3 + (0x20 - (longlong)pdVar2))) + 8) -
                 pdVar24[5];
        auVar30._8_8_ =
             -(ulonglong)
              (auVar29._8_8_ <
              (double)CONCAT44((uint)((ulonglong)dVar6 >> 0x20) & uVar12,SUB84(dVar6,0) & uVar11));
        auVar30._0_8_ =
             -(ulonglong)
              (dVar13 < (double)CONCAT44((uint)((ulonglong)dVar5 >> 0x20) & uVar10,
                                         SUB84(dVar5,0) & uVar27));
        uVar20 = movmskpd(iVar15,auVar30);
        lVar22 = -(ulonglong)
                  (dVar13 < (double)CONCAT44((uint)((ulonglong)dVar41 >> 0x20) & uVar12,
                                             SUB84(dVar41,0) & uVar11));
        auVar7._8_4_ = (int)lVar22;
        auVar7._0_8_ = -(ulonglong)
                        (dVar13 < (double)CONCAT44((uint)((ulonglong)dVar39 >> 0x20) & uVar10,
                                                   SUB84(dVar39,0) & uVar27));
        auVar7._12_4_ = (int)((ulonglong)lVar22 >> 0x20);
        iVar15 = movmskpd(uVar16,auVar7);
        if ((uVar20 & 0x3fffffff) == 0 && iVar15 == 0) {
          dVar39 = *(double *)((longlong)pdVar24 + (longlong)(pFVar3 + (0x10 - (longlong)pdVar2)));
          dVar41 = *(double *)
                    ((FScriptContainerElement *)
                     ((longlong)pdVar24 + (longlong)(pFVar3 + (0x10 - (longlong)pdVar2))) + 8);
          pdVar1 = (double *)((longlong)pdVar24 + ((longlong)pFVar3 - (longlong)pdVar2));
          dVar45 = *pdVar1;
          dVar46 = pdVar1[1];
          local_a8 = dVar13;
          dVar5 = dVar39 - pdVar24[2];
          dVar6 = dVar41 - pdVar24[3];
          dVar39 = dVar39 + pdVar24[2];
          dVar41 = dVar41 + pdVar24[3];
          dVar40 = dVar45 - *pdVar24;
          dVar42 = dVar46 - pdVar24[1];
          dVar45 = dVar45 + *pdVar24;
          dVar46 = dVar46 + pdVar24[1];
          auVar31._8_4_ = uVar43;
          auVar31._0_8_ = dVar13;
          auVar31._12_4_ = uVar44;
          auVar32._8_8_ =
               -(ulonglong)
                (auVar31._8_8_ <
                (double)CONCAT44((uint)((ulonglong)dVar6 >> 0x20) & uVar12,SUB84(dVar6,0) & uVar11))
          ;
          auVar32._0_8_ =
               -(ulonglong)
                (dVar13 < (double)CONCAT44((uint)((ulonglong)dVar5 >> 0x20) & uVar10,
                                           SUB84(dVar5,0) & uVar27));
          iVar21 = movmskpd(0,auVar32);
          auVar33._8_4_ = uVar43;
          auVar33._0_8_ = dVar13;
          auVar33._12_4_ = uVar44;
          auVar34._8_8_ =
               -(ulonglong)
                (auVar33._8_8_ <
                (double)CONCAT44((uint)((ulonglong)dVar42 >> 0x20) & uVar12,SUB84(dVar42,0) & uVar11
                                ));
          auVar34._0_8_ =
               -(ulonglong)
                (dVar13 < (double)CONCAT44((uint)((ulonglong)dVar40 >> 0x20) & uVar10,
                                           SUB84(dVar40,0) & uVar27));
          uVar16 = movmskpd(iVar15,auVar34);
          uVar20 = iVar21 << 2 | uVar16;
          if (uVar20 != 0) {
            auVar35._8_4_ = uVar43;
            auVar35._0_8_ = dVar13;
            auVar35._12_4_ = uVar44;
            auVar36._8_8_ =
                 -(ulonglong)
                  (auVar35._8_8_ <
                  (double)CONCAT44((uint)((ulonglong)dVar41 >> 0x20) & uVar12,
                                   SUB84(dVar41,0) & uVar11));
            auVar36._0_8_ =
                 -(ulonglong)
                  (dVar13 < (double)CONCAT44((uint)((ulonglong)dVar39 >> 0x20) & uVar10,
                                             SUB84(dVar39,0) & uVar27));
            uVar20 = movmskpd(uVar20,auVar36);
            lVar22 = -(ulonglong)
                      (dVar13 < (double)CONCAT44((uint)((ulonglong)dVar46 >> 0x20) & uVar12,
                                                 SUB84(dVar46,0) & uVar11));
            auVar8._8_4_ = (int)lVar22;
            auVar8._0_8_ = -(ulonglong)
                            (dVar13 < (double)CONCAT44((uint)((ulonglong)dVar45 >> 0x20) & uVar10,
                                                       SUB84(dVar45,0) & uVar27));
            auVar8._12_4_ = (int)((ulonglong)lVar22 >> 0x20);
            uVar16 = movmskpd(uVar16,auVar8);
            if ((uVar20 & 0x3fffffff) != 0 || uVar16 != 0) goto LAB_1464a4c79;
          }
          dVar5 = *(double *)((longlong)pdVar24 + (longlong)(pFVar3 + (0x50 - (longlong)pdVar2))) -
                  pdVar24[10];
          dVar6 = *(double *)
                   ((FScriptContainerElement *)
                    ((longlong)pdVar24 + (longlong)(pFVar3 + (0x50 - (longlong)pdVar2))) + 8) -
                  pdVar24[0xb];
          dVar39 = *(double *)((longlong)pdVar24 + (longlong)(pFVar3 + (0x40 - (longlong)pdVar2))) -
                   pdVar24[8];
          dVar41 = *(double *)
                    ((FScriptContainerElement *)
                     ((longlong)pdVar24 + (longlong)(pFVar3 + (0x40 - (longlong)pdVar2))) + 8) -
                   pdVar24[9];
          auVar37._8_4_ = uVar43;
          auVar37._0_8_ = dVar13;
          auVar37._12_4_ = uVar44;
          local_a0 = dVar13;
          auVar38._8_8_ =
               -(ulonglong)
                (auVar37._8_8_ <
                (double)CONCAT44((uint)((ulonglong)dVar6 >> 0x20) & uVar12,SUB84(dVar6,0) & uVar11))
          ;
          auVar38._0_8_ =
               -(ulonglong)
                (dVar13 < (double)CONCAT44((uint)((ulonglong)dVar5 >> 0x20) & uVar10,
                                           SUB84(dVar5,0) & uVar27));
          uVar20 = movmskpd(0,auVar38);
          lVar22 = -(ulonglong)
                    (dVar13 < (double)CONCAT44((uint)((ulonglong)dVar41 >> 0x20) & uVar12,
                                               SUB84(dVar41,0) & uVar11));
          auVar9._8_4_ = (int)lVar22;
          auVar9._0_8_ = -(ulonglong)
                          (dVar13 < (double)CONCAT44((uint)((ulonglong)dVar39 >> 0x20) & uVar10,
                                                     SUB84(dVar39,0) & uVar27));
          auVar9._12_4_ = (int)((ulonglong)lVar22 >> 0x20);
          iVar15 = movmskpd(uVar16,auVar9);
          if ((uVar20 & 0x3fffffff) != 0 || iVar15 != 0) goto LAB_1464a4c79;
        }
        else {
LAB_1464a4c79:
          if (((int)uVar28 < 0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0x14f,
                                  L"Array index out of bounds: %lld from an array of size %lld"),
             bVar14)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          dVar5 = pdVar24[1];
          pdVar1 = (double *)((longlong)pdVar24 + ((longlong)pFVar3 - (longlong)pdVar2));
          *pdVar1 = *pdVar24;
          pdVar1[1] = dVar5;
          dVar5 = pdVar24[3];
          *(double *)((longlong)pdVar24 + (longlong)(pFVar3 + (0x10 - (longlong)pdVar2))) =
               pdVar24[2];
          *(double *)
           ((FScriptContainerElement *)
            ((longlong)pdVar24 + (longlong)(pFVar3 + (0x10 - (longlong)pdVar2))) + 8) = dVar5;
          dVar5 = pdVar24[5];
          *(double *)((longlong)pdVar24 + (longlong)(pFVar3 + (0x20 - (longlong)pdVar2))) =
               pdVar24[4];
          *(double *)
           ((FScriptContainerElement *)
            ((longlong)pdVar24 + (longlong)(pFVar3 + (0x20 - (longlong)pdVar2))) + 8) = dVar5;
          dVar5 = pdVar24[7];
          *(double *)((longlong)pdVar24 + (longlong)(pFVar3 + (0x30 - (longlong)pdVar2))) =
               pdVar24[6];
          *(double *)
           ((FScriptContainerElement *)
            ((longlong)pdVar24 + (longlong)(pFVar3 + (0x30 - (longlong)pdVar2))) + 8) = dVar5;
          dVar5 = pdVar24[9];
          *(double *)((longlong)pdVar24 + (longlong)(pFVar3 + (0x40 - (longlong)pdVar2))) =
               pdVar24[8];
          *(double *)
           ((FScriptContainerElement *)
            ((longlong)pdVar24 + (longlong)(pFVar3 + (0x40 - (longlong)pdVar2))) + 8) = dVar5;
          dVar5 = pdVar24[0xb];
          *(double *)((longlong)pdVar24 + (longlong)(pFVar3 + (0x50 - (longlong)pdVar2))) =
               pdVar24[10];
          *(double *)
           ((FScriptContainerElement *)
            ((longlong)pdVar24 + (longlong)(pFVar3 + (0x50 - (longlong)pdVar2))) + 8) = dVar5;
        }
        uVar28 = uVar28 + 1;
        pdVar24 = pdVar24 + 0xc;
      } while ((int)uVar28 < iVar17);
    }
    TSet<TTuple<FGuid,UE::Anim::FAnimationEvaluationTask>,TDefaultMapHashableKeyFuncs<FGuid,UE::Anim::FAnimationEvaluationTask,0>,FDefaultSetAllocator>
    ::TIterator::TIterator
              ((TIterator *)local_98,
               (TSet<TTuple<FGuid,UE::Anim::FAnimationEvaluationTask>,TDefaultMapHashableKeyFuncs<FGuid,UE::Anim::FAnimationEvaluationTask,0>,FDefaultSetAllocator>
                *)&this->PostEvaluationTasks);
    local_b0 = '\0';
    cStack_af = '\0';
    stack0xffffffffffffff28 = local_98._16_16_;
    auStack_e0._0_8_ = local_98._8_8_;
    local_c8 = local_78;
    pTStack_c0 = pTStack_70;
    uVar26 = local_98._24_8_ >> 0x20;
    local_b8 = (TSet<TTuple<FGuid,UE::Anim::FAnimationEvaluationTask>,TDefaultMapHashableKeyFuncs<FGuid,UE::Anim::FAnimationEvaluationTask,0>,FDefaultSetAllocator>
                *)&this->PostEvaluationTasks;
    if (local_98._28_4_ < *(int *)(local_98._16_8_ + 0x18)) {
      do {
        lVar25 = (longlong)(int)uVar26 * 0x70;
        lVar22 = *(longlong *)local_98._0_8_;
        if ((((((*(int *)(lVar25 + 0x1c + lVar22) == 0 && *(int *)(lVar25 + 0x18 + lVar22) == 0) &&
               *(int *)(lVar25 + 0x14 + lVar22) == 0) && *(int *)(lVar25 + 0x10 + lVar22) == 0) ||
             (*(longlong *)(lVar25 + 0x30 + lVar22) == 0)) ||
            (pUVar18 == (USkeletalMeshComponent *)0x0)) ||
           (bVar14 = TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr>::
                     UEOpEquals<USkeletalMeshComponent,bool>
                               ((TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr> *)
                                (lVar22 + 0x20 + lVar25),pUVar18), !bVar14)) {
          TSet<TTuple<FGuid,UE::Anim::FAnimationEvaluationTask>,TDefaultMapHashableKeyFuncs<FGuid,UE::Anim::FAnimationEvaluationTask,0>,FDefaultSetAllocator>
          ::RemoveByIndex(pTStack_c0,(int)uVar26);
          local_b0 = '\x01';
        }
        else {
          Core::Private::Function::CheckCallable(*(void **)(lVar25 + 0x30 + lVar22));
          plVar23 = *(longlong **)(lVar25 + 0x58 + lVar22);
          pcVar4 = *(code **)(lVar25 + 0x30 + lVar22);
          if (plVar23 == (longlong *)0x0) {
            plVar23 = (longlong *)(lVar22 + 0x40 + lVar25);
          }
          uVar19 = (**(code **)(*plVar23 + 8))();
          (*pcVar4)(uVar19);
        }
        uStack_d0 = uStack_d0 & ~auStack_e0._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                  ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_e0);
        uVar26 = (ulonglong)uStack_cc;
      } while ((int)uStack_cc < *(int *)(auStack_e0._8_8_ + 0x18));
      if ((local_b0 != '\0') && (cStack_af != '\0')) {
        uVar27 = *(int *)&(local_b8->Elements).field_0x8 - *(int *)&(local_b8->Elements).field_0x34;
        if (uVar27 < 4) {
          iVar17 = 1;
        }
        else {
          uVar26 = (ulonglong)((uVar27 >> 1) + 7) * 2 + 1;
          lVar22 = 0x3f;
          if (uVar26 != 0) {
            for (; uVar26 >> lVar22 == 0; lVar22 = lVar22 + -1) {
            }
          }
          iVar17 = 1 << ((byte)lVar22 & 0x1f);
        }
        if (((0 < (int)uVar27) && (local_b8->HashSize < iVar17)) || (iVar17 < local_b8->HashSize)) {
          local_b8->HashSize = iVar17;
          TSet<TTuple<FGuid,UE::Anim::FAnimationEvaluationTask>,TDefaultMapHashableKeyFuncs<FGuid,UE::Anim::FAnimationEvaluationTask,0>,FDefaultSetAllocator>
          ::Rehash(local_b8);
        }
      }
    }
  }
  return;
}

// EvaluateAnimation @ 1464aeba0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UE::Anim::FAnimationEvaluator::EvaluateAnimation(FAnimationEvaluator *this)

{
  undefined1 *puVar1;
  TVector<double> *pTVar2;
  FBlendedHeapCurve *pFVar3;
  int iVar4;
  UAnimInstance *pUVar5;
  FScriptContainerElement *pFVar6;
  void *_Src;
  USkeletalMesh *pUVar7;
  code *pcVar8;
  double dVar9;
  byte bVar10;
  bool bVar11;
  bool bVar12;
  int iVar13;
  USkeletalMeshComponent *this_00;
  FGraphTraversalCounter *pFVar14;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *pTVar15;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *pTVar16;
  FBlendedHeapCurve *pFVar17;
  undefined8 uVar18;
  longlong *plVar19;
  ulonglong uVar20;
  longlong lVar21;
  uint uVar22;
  float fVar23;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> local_a8;
  undefined1 local_98 [32];
  longlong local_78;
  TSet<TTuple<FGuid,UE::Anim::FAnimationEvaluationTask>,TDefaultMapHashableKeyFuncs<FGuid,UE::Anim::FAnimationEvaluationTask,0>,FDefaultSetAllocator>
  *pTStack_70;
  longlong *local_68;
  undefined1 auStack_60 [16];
  uint uStack_50;
  uint uStack_4c;
  longlong local_48;
  TSet<TTuple<FGuid,UE::Anim::FAnimationEvaluationTask>,TDefaultMapHashableKeyFuncs<FGuid,UE::Anim::FAnimationEvaluationTask,0>,FDefaultSetAllocator>
  *pTStack_40;
  TSet<TTuple<FGuid,UE::Anim::FAnimationEvaluationTask>,TDefaultMapHashableKeyFuncs<FGuid,UE::Anim::FAnimationEvaluationTask,0>,FDefaultSetAllocator>
  *local_38;
  char local_30;
  char cStack_2f;
  
  this_00 = (USkeletalMeshComponent *)FWeakObjectPtr::Get((FWeakObjectPtr *)this);
  if (this_00 == (USkeletalMeshComponent *)0x0) {
    return;
  }
  pUVar5 = (this->Context).AnimInstance;
  if (pUVar5 != (UAnimInstance *)0x0) {
    UAnimInstance::PreEvaluateAnimation(pUVar5);
  }
  pUVar5 = (this->Context).PostProcessAnimInstance;
  if (pUVar5 != (UAnimInstance *)0x0) {
    UAnimInstance::PreEvaluateAnimation(pUVar5);
  }
  pUVar5 = (this->Context).AnimInstance;
  bVar12 = false;
  if (((pUVar5 != (UAnimInstance *)0x0) && (bVar11 = UAnimInstance::NeedsUpdate(pUVar5), !bVar11))
     && ((pFVar14 = UAnimInstance::GetUpdateCounter((this->Context).AnimInstance),
         pFVar14->Counter == -1 || (pFVar14->LastSyncronizedFrame == 0xffffffffffffffff)))) {
    bVar12 = true;
  }
  bVar11 = USkeletalMeshComponent::GetDisablePostProcessBlueprint(this_00);
  if ((((!bVar11) &&
       (bVar11 = USkeletalMeshComponent::ShouldEvaluatePostProcessAnimBP(this_00), bVar11)) &&
      (pUVar5 = (this->Context).PostProcessAnimInstance, pUVar5 != (UAnimInstance *)0x0)) &&
     (bVar11 = UAnimInstance::NeedsUpdate(pUVar5), !bVar11)) {
    pFVar14 = UAnimInstance::GetUpdateCounter((this->Context).PostProcessAnimInstance);
    if ((pFVar14->Counter == -1) || (pFVar14->LastSyncronizedFrame == 0xffffffffffffffff)) {
      bVar10 = 1;
    }
    else {
      bVar10 = 0;
    }
    bVar12 = (bool)(bVar12 | bVar10);
  }
  fVar23 = CachingDelta;
  if (bVar12) {
    if (CachingCount < 1) {
      fVar23 = 0.0;
    }
  }
  else if (CachingCount < 1) goto LAB_1464aecb8;
  USkeletalMeshComponent::TickAnimation(this_00,fVar23,false);
LAB_1464aecb8:
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>::operator=
            (&(this->Context).ComponentSpaceTransforms,
             (TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)
             (&this_00->_padding_ + (longlong)*(int *)((longlong)&this_00->_padding_ + 4) * 2));
  pTVar15 = USkeletalMeshComponent::GetCachedComponentSpaceTransforms(this_00);
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>::operator=
            (&(this->Context).CachedComponentSpaceTransforms,pTVar15);
  pTVar16 = USkeletalMeshComponent::GetBoneSpaceTransforms(this_00,&local_a8);
  pTVar15 = &(this->Context).BoneSpaceTransforms;
  if (pTVar15 != pTVar16) {
    pFVar6 = (pTVar15->AllocatorInstance).Data;
    if (pFVar6 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar6);
    }
    (pTVar15->AllocatorInstance).Data = (pTVar16->AllocatorInstance).Data;
    (pTVar16->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->Context).BoneSpaceTransforms.ArrayNum = pTVar16->ArrayNum;
    (this->Context).BoneSpaceTransforms.ArrayMax = pTVar16->ArrayMax;
    pTVar16->ArrayNum = 0;
    pTVar16->ArrayMax = 0;
  }
  if (local_a8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.AllocatorInstance.Data);
  }
  pFVar17 = USkeletalMeshComponent::GetAnimCurves(this_00);
  pFVar3 = &(this->Context).Curve;
  if (pFVar3 != pFVar17) {
    iVar13 = *(int *)&pFVar17->field_0x8;
    puVar1 = &(this->Context).Curve.field_0xc;
    _Src = *(void **)pFVar17;
    iVar4 = *(int *)puVar1;
    *(int *)&(this->Context).Curve.field_0x8 = iVar13;
    if ((iVar13 == 0) && (iVar4 == 0)) {
      *(undefined4 *)puVar1 = 0;
    }
    else {
      Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,4,iVar13,iVar4,(ForAnyElementType *)pFVar3,iVar13,(int *)puVar1);
      if (iVar13 != 0) {
        memcpy(*(void **)pFVar3,_Src,(longlong)iVar13 << 4);
      }
    }
  }
  pTVar2 = &(this->Context).RootBoneTranslation;
  (this->Context).Curve.field_0x10 = pFVar17->field_0x10;
  *(undefined8 *)&(this->Context).Curve.field_0x18 = *(undefined8 *)&pFVar17->field_0x18;
  dVar9 = (this_00->RootBoneTranslation).field0_0x0._s_0.Y;
  bVar12 = (this->Context).bDoEvaluation;
  pUVar5 = (this->Context).AnimInstance;
  pUVar7 = (this->Context).SkeletalMesh;
  (pTVar2->field0_0x0)._s_0.X = (this_00->RootBoneTranslation).field0_0x0._s_0.X;
  (this->Context).RootBoneTranslation.field0_0x0._s_0.Y = dVar9;
  bVar11 = (this->Context).bForceRefPose;
  (this->Context).RootBoneTranslation.field0_0x0._s_0.Z =
       (this_00->RootBoneTranslation).field0_0x0._s_0.Z;
  USkeletalMeshComponent::PerformAnimationProcessing
            (this_00,pUVar7,pUVar5,bVar12,bVar11,&(this->Context).ComponentSpaceTransforms,pTVar15,
             pTVar2,pFVar3,&(this->Context).CustomAttributes);
  TSet<TTuple<FGuid,UE::Anim::FAnimationEvaluationTask>,TDefaultMapHashableKeyFuncs<FGuid,UE::Anim::FAnimationEvaluationTask,0>,FDefaultSetAllocator>
  ::TIterator::TIterator
            ((TIterator *)local_98,
             (TSet<TTuple<FGuid,UE::Anim::FAnimationEvaluationTask>,TDefaultMapHashableKeyFuncs<FGuid,UE::Anim::FAnimationEvaluationTask,0>,FDefaultSetAllocator>
              *)&this->PostEvaluationTasks);
  local_68 = (longlong *)local_98._0_8_;
  auStack_60._0_8_ = local_98._8_8_;
  stack0xffffffffffffffa8 = local_98._16_16_;
  local_48 = local_78;
  pTStack_40 = pTStack_70;
  local_30 = '\0';
  cStack_2f = '\0';
  uVar20 = local_98._24_8_ >> 0x20;
  local_38 = (TSet<TTuple<FGuid,UE::Anim::FAnimationEvaluationTask>,TDefaultMapHashableKeyFuncs<FGuid,UE::Anim::FAnimationEvaluationTask,0>,FDefaultSetAllocator>
              *)&this->PostEvaluationTasks;
  if (local_98._28_4_ < *(int *)(local_98._16_8_ + 0x18)) {
    do {
      lVar21 = (longlong)(int)uVar20 * 0x70 + *local_68;
      if (((((*(int *)(lVar21 + 0x1c) == 0 && *(int *)(lVar21 + 0x18) == 0) &&
            *(int *)(lVar21 + 0x14) == 0) && *(int *)(lVar21 + 0x10) == 0) ||
          (*(longlong *)(lVar21 + 0x30) == 0)) ||
         (bVar12 = TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr>::
                   UEOpEquals<USkeletalMeshComponent,bool>
                             ((TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr> *)
                              (lVar21 + 0x20),this_00), !bVar12)) {
        TSet<TTuple<FGuid,UE::Anim::FAnimationEvaluationTask>,TDefaultMapHashableKeyFuncs<FGuid,UE::Anim::FAnimationEvaluationTask,0>,FDefaultSetAllocator>
        ::RemoveByIndex(pTStack_40,(int)uVar20);
        local_30 = '\x01';
      }
      else {
        if ((bLogNewEvaluation != false) && (2 < (byte)LogTemp._0_1_)) {
          local_a8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_a8.ArrayNum = 0;
          local_a8.ArrayMax = 0;
          FGuid::AppendString((FGuid *)(lVar21 + 0x10),(FString *)&local_a8,Digits);
          Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogTemp);
          if (local_a8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_a8.AllocatorInstance.Data);
          }
        }
        Core::Private::Function::CheckCallable(*(void **)(lVar21 + 0x30));
        pcVar8 = *(code **)(lVar21 + 0x30);
        plVar19 = (longlong *)(lVar21 + 0x40);
        if (*(longlong **)(lVar21 + 0x58) != (longlong *)0x0) {
          plVar19 = *(longlong **)(lVar21 + 0x58);
        }
        uVar18 = (**(code **)(*plVar19 + 8))();
        (*pcVar8)(uVar18);
      }
      uStack_50 = uStack_50 & ~auStack_60._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_60);
      uVar20 = (ulonglong)uStack_4c;
    } while ((int)uStack_4c < *(int *)(auStack_60._8_8_ + 0x18));
    if ((local_30 != '\0') && (cStack_2f != '\0')) {
      uVar22 = *(int *)&(local_38->Elements).field_0x8 - *(int *)&(local_38->Elements).field_0x34;
      if (uVar22 < 4) {
        iVar13 = 1;
      }
      else {
        uVar20 = (ulonglong)((uVar22 >> 1) + 7) * 2 + 1;
        lVar21 = 0x3f;
        if (uVar20 != 0) {
          for (; uVar20 >> lVar21 == 0; lVar21 = lVar21 + -1) {
          }
        }
        iVar13 = 1 << ((byte)lVar21 & 0x1f);
      }
      if (((0 < (int)uVar22) && (local_38->HashSize < iVar13)) || (iVar13 < local_38->HashSize)) {
        local_38->HashSize = iVar13;
        TSet<TTuple<FGuid,UE::Anim::FAnimationEvaluationTask>,TDefaultMapHashableKeyFuncs<FGuid,UE::Anim::FAnimationEvaluationTask,0>,FDefaultSetAllocator>
        ::Rehash(local_38);
      }
    }
  }
  return;
}

// GetGlobalTransform @ 1464b35b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TTransform<double> * __thiscall
UE::Anim::FAnimationEvaluator::GetGlobalTransform
          (FAnimationEvaluator *this,TTransform<double> *__return_storage_ptr__,FName param_1)

{
  int iVar1;
  UObject *pUVar2;
  UClass *pUVar3;
  FAnimationEvaluationCache *this_00;
  FAnimationEvaluator *this_01;
  TTransform<double> *pTVar4;
  FName FVar5;
  USkeletalMeshComponent *this_02;
  undefined1 auStack_178 [32];
  TTransform<double> local_158;
  TTransform<double> local_f8;
  TTransform<double> local_98;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_178;
  pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)this);
  if (pUVar2 == (UObject *)0x0) {
    *&(__return_storage_ptr__->Rotation).XY.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
    *&(__return_storage_ptr__->Rotation).ZW.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
    *&(__return_storage_ptr__->Translation).XY.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
    *&(__return_storage_ptr__->Translation).ZW.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
    *&(__return_storage_ptr__->Scale3D).XY.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
    *&(__return_storage_ptr__->Scale3D).ZW.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  }
  else {
    FVar5.ComparisonIndex.Value = *(uint *)&pUVar2[5].field_0x10;
    FVar5.Number = *(uint *)&pUVar2[5].field_0x14;
    this_02 = *(USkeletalMeshComponent **)&pUVar2[5].field_0x8;
    if (this_02 == (USkeletalMeshComponent *)0x0) {
      GetRelativeTransform(this,__return_storage_ptr__,param_1);
    }
    else {
      GetRelativeTransform(this,&local_f8,param_1);
      do {
        pUVar3 = Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
        iVar1 = (int)pUVar3->_padding_;
        if ((*(int *)(this_02->_padding_ + 0x38) < iVar1) ||
           ((longlong *)
            *(undefined1 **)(*(longlong *)(this_02->_padding_ + 0x30) + (longlong)iVar1 * 8) !=
            &pUVar3->_padding_)) {
          pTVar4 = USceneComponent::GetRelativeTransform((USceneComponent *)this_02,&local_98);
        }
        else {
          this_00 = FAnimationEvaluationCache::Get();
          this_01 = FAnimationEvaluationCache::GetEvaluator(this_00,this_02);
          pTVar4 = GetRelativeTransform(this_01,&local_98,FVar5);
        }
        local_158.Rotation.XY.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
        local_158.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
        local_158.Rotation.XY.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
        local_158.Rotation.ZW.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
        local_158.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
        local_158.Rotation.ZW.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
        local_158.Translation.XY.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
        local_158.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0]
        ;
        local_158.Translation.XY.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
        local_158.Translation.ZW.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
        local_158.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2]
        ;
        local_158.Translation.ZW.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
        local_158.Scale3D.XY.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
        local_158.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
        local_158.Scale3D.XY.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
        local_158.Scale3D.ZW.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
        local_158.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
        local_158.Scale3D.ZW.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
        UE::Math::TTransform<double>::Multiply(&local_158,&local_f8,pTVar4);
        local_f8.Scale3D.ZW.m128d_f64[0] = local_158.Scale3D.ZW.m128d_f64[0];
        local_f8.Scale3D.ZW.m128d_f64[1] = local_158.Scale3D.ZW.m128d_f64[1];
        local_f8.Scale3D.XY.m128d_f64[0] = local_158.Scale3D.XY.m128d_f64[0];
        local_f8.Scale3D.XY.m128d_f64[1] = local_158.Scale3D.XY.m128d_f64[1];
        local_f8.Translation.ZW.m128d_f64[0] = local_158.Translation.ZW.m128d_f64[0];
        local_f8.Translation.ZW.m128d_f64[1] = local_158.Translation.ZW.m128d_f64[1];
        local_f8.Translation.XY.m128d_f64[0] = local_158.Translation.XY.m128d_f64[0];
        local_f8.Translation.XY.m128d_f64[1] = local_158.Translation.XY.m128d_f64[1];
        local_f8.Rotation.ZW.m128d_f64[0] = local_158.Rotation.ZW.m128d_f64[0];
        local_f8.Rotation.ZW.m128d_f64[1] = local_158.Rotation.ZW.m128d_f64[1];
        local_f8.Rotation.XY.m128d_f64[0] = local_158.Rotation.XY.m128d_f64[0];
        local_f8.Rotation.XY.m128d_f64[1] = local_158.Rotation.XY.m128d_f64[1];
        FVar5 = (FName)this_02->_padding_;
        this_02 = (USkeletalMeshComponent *)this_02->_padding_;
      } while (this_02 != (USkeletalMeshComponent *)0x0);
      (__return_storage_ptr__->Rotation).XY.m128d_f64[0] = local_158.Rotation.XY.m128d_f64[0];
      (__return_storage_ptr__->Rotation).XY.m128d_f64[1] = local_158.Rotation.XY.m128d_f64[1];
      (__return_storage_ptr__->Rotation).ZW.m128d_f64[0] = local_158.Rotation.ZW.m128d_f64[0];
      (__return_storage_ptr__->Rotation).ZW.m128d_f64[1] = local_158.Rotation.ZW.m128d_f64[1];
      (__return_storage_ptr__->Translation).XY.m128d_f64[0] = local_158.Translation.XY.m128d_f64[0];
      (__return_storage_ptr__->Translation).XY.m128d_f64[1] = local_158.Translation.XY.m128d_f64[1];
      (__return_storage_ptr__->Translation).ZW.m128d_f64[0] = local_158.Translation.ZW.m128d_f64[0];
      (__return_storage_ptr__->Translation).ZW.m128d_f64[1] = local_158.Translation.ZW.m128d_f64[1];
      (__return_storage_ptr__->Scale3D).XY.m128d_f64[0] = local_158.Scale3D.XY.m128d_f64[0];
      (__return_storage_ptr__->Scale3D).XY.m128d_f64[1] = local_158.Scale3D.XY.m128d_f64[1];
      (__return_storage_ptr__->Scale3D).ZW.m128d_f64[0] = local_158.Scale3D.ZW.m128d_f64[0];
      (__return_storage_ptr__->Scale3D).ZW.m128d_f64[1] = local_158.Scale3D.ZW.m128d_f64[1];
    }
  }
  return __return_storage_ptr__;
}

// GetRelativeTransform @ 1464b6340

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TTransform<double> * __thiscall
UE::Anim::FAnimationEvaluator::GetRelativeTransform
          (FAnimationEvaluator *this,TTransform<double> *__return_storage_ptr__,FName param_1)

{
  bool bVar1;
  USkeletalMeshComponent *this_00;
  UObject *pUVar2;
  TTransform<double> *pTVar3;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *pTVar4;
  undefined1 auStack_198 [32];
  FName local_178;
  USkeletalMeshComponent *local_170;
  USkeletalMesh *local_168;
  TTransform<double> local_158;
  TTransform<double> local_f8;
  TTransform<double> local_98;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_198;
  this_00 = (USkeletalMeshComponent *)FWeakObjectPtr::Get((FWeakObjectPtr *)this);
  if (this_00 == (USkeletalMeshComponent *)0x0) {
    *&(__return_storage_ptr__->Rotation).XY.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
    *&(__return_storage_ptr__->Rotation).ZW.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
    *&(__return_storage_ptr__->Translation).XY.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
    *&(__return_storage_ptr__->Translation).ZW.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
    *&(__return_storage_ptr__->Scale3D).XY.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
    local_158.Scale3D.ZW.m128d_f64[0]._0_4_ =
         UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0]._0_4_;
    local_158.Scale3D.ZW.m128d_f64[0]._4_4_ =
         UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0]._4_4_;
    local_158.Scale3D.ZW.m128d_f64[1]._0_4_ =
         UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1]._0_4_;
    local_158.Scale3D.ZW.m128d_f64[1]._4_4_ =
         UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1]._4_4_;
    goto LAB_1464b652e;
  }
  bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)this);
  if (((!bVar1) || ((this->Context).ComponentSpaceTransforms.ArrayNum == 0)) ||
     (local_168 = (this->Context).SkeletalMesh, local_168 == (USkeletalMesh *)0x0)) {
    local_168 = USkeletalMeshComponent::GetSkeletalMeshAsset(this_00);
  }
  local_178 = param_1;
  local_170 = this_00;
  USceneComponent::GetRelativeTransform((USceneComponent *)this_00,&local_f8);
  bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)this);
  if ((bVar1) && ((this->Context).ComponentSpaceTransforms.ArrayNum != 0)) {
    pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)this);
    if ((this->Context).ComponentSpaceTransforms.ArrayNum !=
        *(int *)(&pUVar2[0x27].field_0x8 + (longlong)*(int *)&pUVar2[0x28].field_0x20 * 0x10))
    goto LAB_1464b643c;
    pTVar4 = &(this->Context).ComponentSpaceTransforms;
  }
  else {
LAB_1464b643c:
    pTVar4 = (TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)
             (&this_00->_padding_ + (longlong)(int)this_00->_padding_ * 2);
  }
  if (param_1 == (FName)0x0) {
    local_158.Rotation.XY.m128d_f64[1] = local_f8.Rotation.XY.m128d_f64[1];
    local_158.Rotation.XY.m128d_f64[0] = local_f8.Rotation.XY.m128d_f64[0];
    local_158.Rotation.ZW.m128d_f64[1] = local_f8.Rotation.ZW.m128d_f64[1];
    local_158.Rotation.ZW.m128d_f64[0] = local_f8.Rotation.ZW.m128d_f64[0];
    local_158.Translation.XY.m128d_f64[1] = local_f8.Translation.XY.m128d_f64[1];
    local_158.Translation.XY.m128d_f64[0] = local_f8.Translation.XY.m128d_f64[0];
    local_158.Translation.ZW.m128d_f64[1] = local_f8.Translation.ZW.m128d_f64[1];
    local_158.Translation.ZW.m128d_f64[0] = local_f8.Translation.ZW.m128d_f64[0];
    local_158.Scale3D.XY.m128d_f64[1] = local_f8.Scale3D.XY.m128d_f64[1];
    local_158.Scale3D.XY.m128d_f64[0] = local_f8.Scale3D.XY.m128d_f64[0];
    local_158.Scale3D.ZW.m128d_f64[1] = local_f8.Scale3D.ZW.m128d_f64[1];
    local_158.Scale3D.ZW.m128d_f64[0] = local_f8.Scale3D.ZW.m128d_f64[0];
  }
  else {
    pTVar3 = `UE::Anim::FAnimationEvaluator::GetRelativeTransform'::__l2::<lambda_1>::operator()
                       (&local_178,&local_98,pTVar4);
    local_158.Rotation.XY.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
    local_158.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
    local_158.Rotation.XY.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
    local_158.Rotation.ZW.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
    local_158.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
    local_158.Rotation.ZW.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
    local_158.Translation.XY.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
    local_158.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
    local_158.Translation.XY.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
    local_158.Translation.ZW.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
    local_158.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
    local_158.Translation.ZW.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
    local_158.Scale3D.XY.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
    local_158.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
    local_158.Scale3D.XY.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
    local_158.Scale3D.ZW.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
    local_158.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
    local_158.Scale3D.ZW.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
    UE::Math::TTransform<double>::Multiply(&local_158,pTVar3,&local_f8);
  }
  (__return_storage_ptr__->Rotation).XY.m128d_f64[0] = local_158.Rotation.XY.m128d_f64[0];
  (__return_storage_ptr__->Rotation).XY.m128d_f64[1] = local_158.Rotation.XY.m128d_f64[1];
  (__return_storage_ptr__->Rotation).ZW.m128d_f64[0] = local_158.Rotation.ZW.m128d_f64[0];
  (__return_storage_ptr__->Rotation).ZW.m128d_f64[1] = local_158.Rotation.ZW.m128d_f64[1];
  (__return_storage_ptr__->Translation).XY.m128d_f64[0] = local_158.Translation.XY.m128d_f64[0];
  (__return_storage_ptr__->Translation).XY.m128d_f64[1] = local_158.Translation.XY.m128d_f64[1];
  (__return_storage_ptr__->Translation).ZW.m128d_f64[0] = local_158.Translation.ZW.m128d_f64[0];
  (__return_storage_ptr__->Translation).ZW.m128d_f64[1] = local_158.Translation.ZW.m128d_f64[1];
  (__return_storage_ptr__->Scale3D).XY.m128d_f64[0] = local_158.Scale3D.XY.m128d_f64[0];
  (__return_storage_ptr__->Scale3D).XY.m128d_f64[1] = local_158.Scale3D.XY.m128d_f64[1];
LAB_1464b652e:
  *(undefined4 *)(__return_storage_ptr__->Scale3D).ZW.m128d_f64 =
       local_158.Scale3D.ZW.m128d_f64[0]._0_4_;
  *(undefined4 *)((longlong)(__return_storage_ptr__->Scale3D).ZW.m128d_f64 + 4) =
       local_158.Scale3D.ZW.m128d_f64[0]._4_4_;
  *(undefined4 *)((__return_storage_ptr__->Scale3D).ZW.m128d_f64 + 1) =
       local_158.Scale3D.ZW.m128d_f64[1]._0_4_;
  *(undefined4 *)((longlong)(__return_storage_ptr__->Scale3D).ZW.m128d_f64 + 0xc) =
       local_158.Scale3D.ZW.m128d_f64[1]._4_4_;
  return __return_storage_ptr__;
}

// IsValid @ 1464b94f0

bool __thiscall UE::Anim::FAnimationEvaluator::IsValid(FAnimationEvaluator *this,bool param_1)

{
  bool bVar1;
  UObject *pUVar2;
  
  bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)this);
  if ((bVar1) && ((this->Context).ComponentSpaceTransforms.ArrayNum != 0)) {
    if (param_1) {
      pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)this);
      return (this->Context).ComponentSpaceTransforms.ArrayNum ==
             *(int *)(&pUVar2[0x27].field_0x8 + (longlong)*(int *)&pUVar2[0x28].field_0x20 * 0x10);
    }
    return (this->Context).SkeletalMesh != (USkeletalMesh *)0x0;
  }
  return false;
}

// RefreshBoneTransforms @ 1464bc890

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall UE::Anim::FAnimationEvaluator::RefreshBoneTransforms(FAnimationEvaluator *this)

{
  code *pcVar1;
  bool bVar2;
  UObject *pUVar3;
  USkeletalMeshComponent *pUVar4;
  USkeletalMesh *pUVar5;
  char *pcVar6;
  byte bVar7;
  undefined ***pppuVar8;
  UAnimInstance *pUVar9;
  undefined1 auStack_a8 [32];
  byte local_88;
  undefined7 uStack_87;
  FAnimationEvaluator *pFStack_80;
  code *local_78;
  undefined **local_68;
  ulonglong uStack_60;
  FAnimationEvaluator *local_58;
  undefined ***local_50;
  undefined **local_38;
  ulonglong uStack_30;
  FAnimationEvaluator *pFStack_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_a8;
  bVar2 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)this);
  if (bVar2) {
    pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)this);
    if ((pUVar3[0x45].field_0x12 & 0x40) == 0) {
      pUVar4 = (USkeletalMeshComponent *)FWeakObjectPtr::Get((FWeakObjectPtr *)this);
      bVar2 = USkeletalMeshComponent::HandleExistingParallelEvaluationTask(pUVar4,true,true);
      if (!bVar2) {
        pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)this);
        pUVar9 = (UAnimInstance *)0x0;
        bVar7 = (byte)pUVar3[0x33].field_0x11 >> 3;
        local_88 = bVar7 & 1;
        local_38 = &Core::Private::Function::
                    TFunction_OwnedObject<`UE::Anim::FAnimationEvaluator::RefreshBoneTransforms'::`2'::<lambda_1>,0,0>
                    ::_vftable_;
        uStack_60 = CONCAT71(uStack_87,bVar7) & 0xffffffffffffff01;
        local_78 = Core::Private::Function::
                   TFunctionRefCaller<`UE::Anim::FAnimationEvaluator::RefreshBoneTransforms'::__l2::<lambda_1>,void>
                   ::Call;
        local_50 = (undefined ***)0x0;
        local_68 = &Core::Private::Function::
                    TFunction_OwnedObject<`UE::Anim::FAnimationEvaluator::RefreshBoneTransforms'::`2'::<lambda_1>,0,0>
                    ::_vftable_;
        pFStack_80 = this;
        local_58 = this;
        uStack_30 = uStack_60;
        pFStack_28 = this;
        pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)this);
        pUVar3[0x33].field_0x11 = pUVar3[0x33].field_0x11 & 0xf7;
        bVar2 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)this);
        if (bVar2) {
          pUVar4 = (USkeletalMeshComponent *)FWeakObjectPtr::Get((FWeakObjectPtr *)this);
          bVar2 = USkeletalMeshComponent::ShouldEvaluatePostProcessInstance(pUVar4);
          pUVar4 = (USkeletalMeshComponent *)FWeakObjectPtr::Get((FWeakObjectPtr *)this);
          pUVar5 = USkeletalMeshComponent::GetSkeletalMeshAsset(pUVar4);
          (this->Context).SkeletalMesh = pUVar5;
          pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)this);
          (this->Context).AnimInstance = *(UAnimInstance **)&pUVar3[0x3b].field_0x18;
          if (bVar2) {
            pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)this);
            pUVar9 = *(UAnimInstance **)(pUVar3 + 0x3c);
          }
          (this->Context).bDoInterpolation = false;
          (this->Context).bDoEvaluation = true;
          (this->Context).bDuplicateToCacheBones = false;
          (this->Context).bDuplicateToCacheCurve = false;
          (this->Context).bDuplicateToCachedAttributes = false;
          (this->Context).bForceRefPose = false;
        }
        else {
          (this->Context).AnimInstance = (UAnimInstance *)0x0;
          (this->Context).SkeletalMesh = (USkeletalMesh *)0x0;
        }
        (this->Context).PostProcessAnimInstance = pUVar9;
        EvaluateAnimation(this);
        Core::Private::Function::CheckCallable(local_78);
        pcVar1 = local_78;
        pppuVar8 = &local_68;
        if (local_50 != (undefined ***)0x0) {
          pppuVar8 = local_50;
        }
        pcVar6 = (char *)(*(code *)(*pppuVar8)[1])();
        if (pcVar1 == Core::Private::Function::
                      TFunctionRefCaller<`UE::Anim::FAnimationEvaluator::RefreshBoneTransforms'::__l2::<lambda_1>,void>
                      ::Call) {
          pUVar3 = FWeakObjectPtr::Get(*(FWeakObjectPtr **)(pcVar6 + 8));
          pUVar3[0x33].field_0x11 =
               (*pcVar6 << 3 ^ pUVar3[0x33].field_0x11) & 8U ^ pUVar3[0x33].field_0x11;
        }
        else {
          (*pcVar1)(pcVar6);
        }
        if (local_78 != (code *)0x0) {
          pppuVar8 = &local_68;
          if (local_50 != (undefined ***)0x0) {
            pppuVar8 = local_50;
          }
          (*(code *)(*pppuVar8)[2])();
        }
      }
    }
  }
  return;
}

// Update @ 1464c3d80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall UE::Anim::FAnimationEvaluator::Update(FAnimationEvaluator *this,bool param_1)

{
  code *pcVar1;
  bool bVar2;
  UObject *pUVar3;
  USkeletalMeshComponent *pUVar4;
  USkeletalMesh *pUVar5;
  char *pcVar6;
  byte bVar7;
  undefined ***pppuVar8;
  UAnimInstance *pUVar9;
  undefined1 auStack_a8 [32];
  byte bStack_88;
  undefined7 uStack_87;
  FAnimationEvaluator *pFStack_80;
  code *pcStack_78;
  undefined **ppuStack_68;
  ulonglong uStack_60;
  FAnimationEvaluator *pFStack_58;
  undefined ***pppuStack_50;
  undefined **ppuStack_38;
  ulonglong uStack_30;
  FAnimationEvaluator *pFStack_28;
  ulonglong uStack_18;
  
  (this->Context).AnimInstance = (UAnimInstance *)0x0;
  (this->Context).PostProcessAnimInstance = (UAnimInstance *)0x0;
  (this->Context).SkeletalMesh = (USkeletalMesh *)0x0;
  if (!param_1) {
    return;
  }
  uStack_18 = __security_cookie.value ^ (ulonglong)auStack_a8;
  bVar2 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)this);
  if (bVar2) {
    pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)this);
    if ((pUVar3[0x45].field_0x12 & 0x40) == 0) {
      pUVar4 = (USkeletalMeshComponent *)FWeakObjectPtr::Get((FWeakObjectPtr *)this);
      bVar2 = USkeletalMeshComponent::HandleExistingParallelEvaluationTask(pUVar4,true,true);
      if (!bVar2) {
        pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)this);
        pUVar9 = (UAnimInstance *)0x0;
        bVar7 = (byte)pUVar3[0x33].field_0x11 >> 3;
        bStack_88 = bVar7 & 1;
        ppuStack_38 = &Core::Private::Function::
                       TFunction_OwnedObject<`UE::Anim::FAnimationEvaluator::RefreshBoneTransforms'::`2'::<lambda_1>,0,0>
                       ::_vftable_;
        uStack_60 = CONCAT71(uStack_87,bVar7) & 0xffffffffffffff01;
        pcStack_78 = Core::Private::Function::
                     TFunctionRefCaller<`UE::Anim::FAnimationEvaluator::RefreshBoneTransforms'::__l2::<lambda_1>,void>
                     ::Call;
        pppuStack_50 = (undefined ***)0x0;
        ppuStack_68 = &Core::Private::Function::
                       TFunction_OwnedObject<`UE::Anim::FAnimationEvaluator::RefreshBoneTransforms'::`2'::<lambda_1>,0,0>
                       ::_vftable_;
        pFStack_80 = this;
        pFStack_58 = this;
        uStack_30 = uStack_60;
        pFStack_28 = this;
        pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)this);
        pUVar3[0x33].field_0x11 = pUVar3[0x33].field_0x11 & 0xf7;
        bVar2 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)this);
        if (bVar2) {
          pUVar4 = (USkeletalMeshComponent *)FWeakObjectPtr::Get((FWeakObjectPtr *)this);
          bVar2 = USkeletalMeshComponent::ShouldEvaluatePostProcessInstance(pUVar4);
          pUVar4 = (USkeletalMeshComponent *)FWeakObjectPtr::Get((FWeakObjectPtr *)this);
          pUVar5 = USkeletalMeshComponent::GetSkeletalMeshAsset(pUVar4);
          (this->Context).SkeletalMesh = pUVar5;
          pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)this);
          (this->Context).AnimInstance = *(UAnimInstance **)&pUVar3[0x3b].field_0x18;
          if (bVar2) {
            pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)this);
            pUVar9 = *(UAnimInstance **)(pUVar3 + 0x3c);
          }
          (this->Context).bDoInterpolation = false;
          (this->Context).bDoEvaluation = true;
          (this->Context).bDuplicateToCacheBones = false;
          (this->Context).bDuplicateToCacheCurve = false;
          (this->Context).bDuplicateToCachedAttributes = false;
          (this->Context).bForceRefPose = false;
        }
        else {
          (this->Context).AnimInstance = (UAnimInstance *)0x0;
          (this->Context).SkeletalMesh = (USkeletalMesh *)0x0;
        }
        (this->Context).PostProcessAnimInstance = pUVar9;
        EvaluateAnimation(this);
        Core::Private::Function::CheckCallable(pcStack_78);
        pcVar1 = pcStack_78;
        pppuVar8 = &ppuStack_68;
        if (pppuStack_50 != (undefined ***)0x0) {
          pppuVar8 = pppuStack_50;
        }
        pcVar6 = (char *)(*(code *)(*pppuVar8)[1])();
        if (pcVar1 == Core::Private::Function::
                      TFunctionRefCaller<`UE::Anim::FAnimationEvaluator::RefreshBoneTransforms'::__l2::<lambda_1>,void>
                      ::Call) {
          pUVar3 = FWeakObjectPtr::Get(*(FWeakObjectPtr **)(pcVar6 + 8));
          pUVar3[0x33].field_0x11 =
               (*pcVar6 << 3 ^ pUVar3[0x33].field_0x11) & 8U ^ pUVar3[0x33].field_0x11;
        }
        else {
          (*pcVar1)(pcVar6);
        }
        if (pcStack_78 != (code *)0x0) {
          pppuVar8 = &ppuStack_68;
          if (pppuStack_50 != (undefined ***)0x0) {
            pppuVar8 = pppuStack_50;
          }
          (*(code *)(*pppuVar8)[2])();
        }
      }
    }
  }
  return;
}

// UpdateContext @ 1464c3da0

void __thiscall UE::Anim::FAnimationEvaluator::UpdateContext(FAnimationEvaluator *this)

{
  bool bVar1;
  USkeletalMeshComponent *pUVar2;
  USkeletalMesh *pUVar3;
  UObject *pUVar4;
  UAnimInstance *pUVar5;
  
  bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)this);
  if (!bVar1) {
    (this->Context).AnimInstance = (UAnimInstance *)0x0;
    (this->Context).SkeletalMesh = (USkeletalMesh *)0x0;
    (this->Context).PostProcessAnimInstance = (UAnimInstance *)0x0;
    return;
  }
  pUVar2 = (USkeletalMeshComponent *)FWeakObjectPtr::Get((FWeakObjectPtr *)this);
  bVar1 = USkeletalMeshComponent::ShouldEvaluatePostProcessInstance(pUVar2);
  pUVar2 = (USkeletalMeshComponent *)FWeakObjectPtr::Get((FWeakObjectPtr *)this);
  pUVar3 = USkeletalMeshComponent::GetSkeletalMeshAsset(pUVar2);
  (this->Context).SkeletalMesh = pUVar3;
  pUVar4 = FWeakObjectPtr::Get((FWeakObjectPtr *)this);
  (this->Context).AnimInstance = *(UAnimInstance **)&pUVar4[0x3b].field_0x18;
  if (bVar1) {
    pUVar4 = FWeakObjectPtr::Get((FWeakObjectPtr *)this);
    pUVar5 = *(UAnimInstance **)(pUVar4 + 0x3c);
  }
  else {
    pUVar5 = (UAnimInstance *)0x0;
  }
  (this->Context).bDoInterpolation = false;
  (this->Context).bDoEvaluation = true;
  (this->Context).bDuplicateToCacheBones = false;
  (this->Context).bDuplicateToCacheCurve = false;
  (this->Context).bDuplicateToCachedAttributes = false;
  (this->Context).bForceRefPose = false;
  (this->Context).PostProcessAnimInstance = pUVar5;
  return;
}

