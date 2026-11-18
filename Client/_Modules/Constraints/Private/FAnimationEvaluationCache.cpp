// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Constraints
// Functions: 7

// ~FAnimationEvaluationCache @ 14649f650

void __thiscall
UE::Anim::FAnimationEvaluationCache::~FAnimationEvaluationCache(FAnimationEvaluationCache *this)

{
  FDelegateHandle FVar1;
  void *pvVar2;
  TMulticastDelegateBase<FDefaultDelegateUserPolicy> *this_00;
  
  if ((this->ConstraintsNotificationHandle).ID != 0) {
    this_00 = (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
              FConstraintsManagerController::GetNotifyDelegate();
    FVar1.ID = (this->ConstraintsNotificationHandle).ID;
    if (FVar1.ID != 0) {
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance(this_00,FVar1);
    }
    (this->ConstraintsNotificationHandle).ID = 0;
  }
  TSet<TTuple<USkeletalMeshComponent_*,UE::Anim::FAnimationEvaluator>,TDefaultMapHashableKeyFuncs<USkeletalMeshComponent_*,UE::Anim::FAnimationEvaluator,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<USkeletalMeshComponent_*,UE::Anim::FAnimationEvaluator>,TDefaultMapHashableKeyFuncs<USkeletalMeshComponent_*,UE::Anim::FAnimationEvaluator,0>,FDefaultSetAllocator>
           *)this);
  *(undefined4 *)&(this->PerSkeletalMeshEvaluator).field_0x48 = 0;
  pvVar2 = *(void **)&(this->PerSkeletalMeshEvaluator).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<USkeletalMeshComponent_*,UE::Anim::FAnimationEvaluator>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<USkeletalMeshComponent_*,UE::Anim::FAnimationEvaluator>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<USkeletalMeshComponent_*,UE::Anim::FAnimationEvaluator>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)this);
  return;
}

// Get @ 1464b0550

FAnimationEvaluationCache * __cdecl UE::Anim::FAnimationEvaluationCache::Get(void)

{
  TMulticastDelegate<void___cdecl(EConstraintsManagerNotifyType,UObject_*),FDefaultDelegateUserPolicy>
  *this;
  FDelegateHandle FVar1;
  <lambda_1> local_res10 [3];
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    atexit(`UE::Anim::FAnimationEvaluationCache::Get'::__l2::
           _dynamic_atexit_destructor_for__AnimationEvaluationCache__);
    _Init_thread_footer(&::_TSS0);
  }
  if (AnimationEvaluationCache.ConstraintsNotificationHandle.ID != 0) {
    return &AnimationEvaluationCache;
  }
  this = FConstraintsManagerController::GetNotifyDelegate();
  FVar1 = TMulticastDelegateRegistration<void___cdecl(enum_EConstraintsManagerNotifyType,UObject_*),FDefaultDelegateUserPolicy>
          ::
          AddLambda<_UE::Anim::FAnimationEvaluationCache::RegisterNotifications_::__l5::<lambda_1>_>
                    (this,local_res10);
                    /* WARNING: Load size is inaccurate */
  AnimationEvaluationCache.ConstraintsNotificationHandle.ID = *FVar1.ID;
  return &AnimationEvaluationCache;
}

// GetEvaluator @ 1464b2f10

/* WARNING: Enum "Type": Some values do not have unique names */

FAnimationEvaluator * __thiscall
UE::Anim::FAnimationEvaluationCache::GetEvaluator
          (FAnimationEvaluationCache *this,USkeletalMeshComponent *param_1)

{
  bool bVar1;
  FAnimationEvaluator *this_00;
  longlong lVar2;
  USkeletalMeshComponent *local_res10;
  TPairInitializer<USkeletalMeshComponent_*_&,USkeletalMeshComponent_*_&> local_res18;
  undefined1 local_18 [16];
  
  local_res10 = param_1;
  if (param_1 != (USkeletalMeshComponent *)0x0) {
    this_00 = TMapBase<USkeletalMeshComponent_*,UE::Anim::FAnimationEvaluator,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<USkeletalMeshComponent_*,UE::Anim::FAnimationEvaluator,0>_>
              ::Find((TMapBase<USkeletalMeshComponent_*,UE::Anim::FAnimationEvaluator,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<USkeletalMeshComponent_*,UE::Anim::FAnimationEvaluator,0>_>
                      *)this,param_1);
    if (this_00 != (FAnimationEvaluator *)0x0) {
      bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)this_00);
      if (((!bVar1) || ((this_00->Context).ComponentSpaceTransforms.ArrayNum == 0)) ||
         ((this_00->Context).SkeletalMesh == (USkeletalMesh *)0x0)) {
        if ((bLogNewEvaluation != false) && (2 < (byte)LogTemp._0_1_)) {
          local_res18.Key = (USkeletalMeshComponent **)local_res10->_padding_;
          ::FName::ToString((FName *)&local_res18,(FString *)local_18);
          Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogTemp);
          if ((FScriptContainerElement *)local_18._0_8_ != (FScriptContainerElement *)0x0) {
            FMemory::Free((void *)local_18._0_8_);
          }
        }
        (this_00->Context).AnimInstance = (UAnimInstance *)0x0;
        (this_00->Context).PostProcessAnimInstance = (UAnimInstance *)0x0;
        (this_00->Context).SkeletalMesh = (USkeletalMesh *)0x0;
        FAnimationEvaluator::RefreshBoneTransforms(this_00);
      }
      return this_00;
    }
    local_18._0_8_ = &local_res10;
    local_18._8_8_ = &local_res10;
    TSet<TTuple<USkeletalMeshComponent_*,UE::Anim::FAnimationEvaluator>,TDefaultMapHashableKeyFuncs<USkeletalMeshComponent_*,UE::Anim::FAnimationEvaluator,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<USkeletalMeshComponent_*_&,USkeletalMeshComponent_*_&>_>
              ((TSet<TTuple<USkeletalMeshComponent_*,UE::Anim::FAnimationEvaluator>,TDefaultMapHashableKeyFuncs<USkeletalMeshComponent_*,UE::Anim::FAnimationEvaluator,0>,FDefaultSetAllocator>
                *)this,&local_res18,(bool *)local_18);
    lVar2 = (longlong)(int)local_res18.Key * 0x1a8 + *(longlong *)&this->PerSkeletalMeshEvaluator;
    *(undefined8 *)(lVar2 + 0x10) = 0;
    *(undefined8 *)(lVar2 + 0x18) = 0;
    *(undefined8 *)(lVar2 + 0x20) = 0;
    FAnimationEvaluator::RefreshBoneTransforms((FAnimationEvaluator *)(lVar2 + 8));
    if ((bLogNewEvaluation != false) && (2 < (byte)LogTemp._0_1_)) {
      local_res18.Key = (USkeletalMeshComponent **)local_res10->_padding_;
      ::FName::ToString((FName *)&local_res18,(FString *)local_18);
      Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogTemp);
      if ((FScriptContainerElement *)local_18._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_18._0_8_);
      }
    }
    return (FAnimationEvaluator *)(lVar2 + 8);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    FAnimationEvaluator::FAnimationEvaluator(&::Invalid,(USkeletalMeshComponent *)0x0);
    atexit(`UE::Anim::FAnimationEvaluationCache::GetEvaluator'::__l5::
           _dynamic_atexit_destructor_for__Invalid__);
    _Init_thread_footer(&::_TSS0);
    return &::Invalid;
  }
  return &::Invalid;
}

// GetEvaluator @ 1464b3120

/* WARNING: Enum "Type": Some values do not have unique names */

FAnimationEvaluator * __thiscall
UE::Anim::FAnimationEvaluationCache::GetEvaluator
          (FAnimationEvaluationCache *this,USkeletalMeshComponent *param_1,
          FAnimationEvaluationTask *param_2)

{
  bool bVar1;
  bool bVar2;
  FAnimationEvaluator *this_00;
  USkeletalMeshComponent *local_res10;
  FName local_res20;
  undefined1 local_18 [16];
  
  local_res10 = param_1;
  if (param_1 == (USkeletalMeshComponent *)0x0) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      FAnimationEvaluator::FAnimationEvaluator(&::Invalid,(USkeletalMeshComponent *)0x0);
      atexit(`UE::Anim::FAnimationEvaluationCache::GetEvaluator'::__l5::
             _dynamic_atexit_destructor_for__Invalid__);
      _Init_thread_footer(&::_TSS0);
      return &::Invalid;
    }
    return &::Invalid;
  }
  this_00 = TMapBase<USkeletalMeshComponent_*,UE::Anim::FAnimationEvaluator,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<USkeletalMeshComponent_*,UE::Anim::FAnimationEvaluator,0>_>
            ::Find((TMapBase<USkeletalMeshComponent_*,UE::Anim::FAnimationEvaluator,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<USkeletalMeshComponent_*,UE::Anim::FAnimationEvaluator,0>_>
                    *)this,param_1);
  if (this_00 == (FAnimationEvaluator *)0x0) {
    local_18._0_8_ = &local_res10;
    local_18._8_8_ = &local_res10;
    TSet<TTuple<USkeletalMeshComponent_*,UE::Anim::FAnimationEvaluator>,TDefaultMapHashableKeyFuncs<USkeletalMeshComponent_*,UE::Anim::FAnimationEvaluator,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<USkeletalMeshComponent_*_&,USkeletalMeshComponent_*_&>_>
              ((TSet<TTuple<USkeletalMeshComponent_*,UE::Anim::FAnimationEvaluator>,TDefaultMapHashableKeyFuncs<USkeletalMeshComponent_*,UE::Anim::FAnimationEvaluator,0>,FDefaultSetAllocator>
                *)this,(TPairInitializer<USkeletalMeshComponent_*_&,USkeletalMeshComponent_*_&> *)
                       &local_res20,(bool *)local_18);
    this_00 = (FAnimationEvaluator *)
              (*(longlong *)&this->PerSkeletalMeshEvaluator +
              (longlong)(int)local_res20.ComparisonIndex.Value * 0x1a8 + 8);
    FAnimationEvaluator::AddPostEvaluationTask(this_00,param_2);
    (this_00->Context).AnimInstance = (UAnimInstance *)0x0;
    (this_00->Context).PostProcessAnimInstance = (UAnimInstance *)0x0;
    (this_00->Context).SkeletalMesh = (USkeletalMesh *)0x0;
    FAnimationEvaluator::RefreshBoneTransforms(this_00);
    if ((bLogNewEvaluation != false) && (2 < (byte)LogTemp._0_1_)) {
      local_res20 = (FName)local_res10->_padding_;
      ::FName::ToString(&local_res20,(FString *)local_18);
      Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogTemp);
      if ((FScriptContainerElement *)local_18._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_18._0_8_);
      }
    }
  }
  else {
    bVar1 = FAnimationEvaluator::AddPostEvaluationTask(this_00,param_2);
    bVar2 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)this_00);
    if (((!bVar2) || ((this_00->Context).ComponentSpaceTransforms.ArrayNum == 0)) ||
       ((this_00->Context).SkeletalMesh == (USkeletalMesh *)0x0)) {
      if ((bLogNewEvaluation != false) && (2 < (byte)LogTemp._0_1_)) {
        local_res20 = (FName)local_res10->_padding_;
        ::FName::ToString(&local_res20,(FString *)local_18);
        Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogTemp);
        if ((FScriptContainerElement *)local_18._0_8_ != (FScriptContainerElement *)0x0) {
          FMemory::Free((void *)local_18._0_8_);
        }
      }
      (this_00->Context).AnimInstance = (UAnimInstance *)0x0;
      (this_00->Context).PostProcessAnimInstance = (UAnimInstance *)0x0;
      (this_00->Context).SkeletalMesh = (USkeletalMesh *)0x0;
      FAnimationEvaluator::RefreshBoneTransforms(this_00);
      return this_00;
    }
    if (((bVar1) &&
        ((((param_2->Guid).D != 0 || (param_2->Guid).C != 0) || (param_2->Guid).B != 0) ||
         (param_2->Guid).A != 0)) &&
       ((*(longlong *)&param_2->PostEvaluationFunction != 0 &&
        ((local_res10 != (USkeletalMeshComponent *)0x0 &&
         (bVar1 = TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr>::
                  UEOpEquals<USkeletalMeshComponent,bool>
                            (&param_2->SkeletalMeshComponent,local_res10), bVar1)))))) {
      Core::Private::Function::
      TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,void___cdecl(void)>::
      operator()((TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,void___cdecl(void)>
                  *)&param_2->PostEvaluationFunction);
      return this_00;
    }
  }
  return this_00;
}

// MarkForEvaluation @ 1464b9f70

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::Anim::FAnimationEvaluationCache::MarkForEvaluation
          (FAnimationEvaluationCache *this,USkeletalMeshComponent *param_1)

{
  bool bVar1;
  FAnimationEvaluator *this_00;
  FName local_res10 [3];
  FString local_18;
  
  if ((((param_1 != (USkeletalMeshComponent *)0x0) &&
       (this_00 = TMapBase<USkeletalMeshComponent_*,UE::Anim::FAnimationEvaluator,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<USkeletalMeshComponent_*,UE::Anim::FAnimationEvaluator,0>_>
                  ::Find((TMapBase<USkeletalMeshComponent_*,UE::Anim::FAnimationEvaluator,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<USkeletalMeshComponent_*,UE::Anim::FAnimationEvaluator,0>_>
                          *)this,param_1), this_00 != (FAnimationEvaluator *)0x0)) &&
      (bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)this_00), bVar1)) &&
     (((this_00->Context).ComponentSpaceTransforms.ArrayNum != 0 &&
      ((this_00->Context).SkeletalMesh != (USkeletalMesh *)0x0)))) {
    if ((bLogNewEvaluation != false) && (2 < (byte)LogTemp._0_1_)) {
      local_res10[0] = (FName)param_1->_padding_;
      ::FName::ToString(local_res10,&local_18);
      Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogTemp);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
    (this_00->Context).AnimInstance = (UAnimInstance *)0x0;
    (this_00->Context).PostProcessAnimInstance = (UAnimInstance *)0x0;
    (this_00->Context).SkeletalMesh = (USkeletalMesh *)0x0;
  }
  return;
}

// RegisterNotifications @ 1464bd200

void __thiscall
UE::Anim::FAnimationEvaluationCache::RegisterNotifications(FAnimationEvaluationCache *this)

{
  TMulticastDelegate<void___cdecl(EConstraintsManagerNotifyType,UObject_*),FDefaultDelegateUserPolicy>
  *this_00;
  FDelegateHandle FVar1;
  <lambda_1> local_res10 [3];
  
  if ((this->ConstraintsNotificationHandle).ID == 0) {
    this_00 = FConstraintsManagerController::GetNotifyDelegate();
    FVar1 = TMulticastDelegateRegistration<void___cdecl(enum_EConstraintsManagerNotifyType,UObject_*),FDefaultDelegateUserPolicy>
            ::
            AddLambda<_UE::Anim::FAnimationEvaluationCache::RegisterNotifications_::__l5::<lambda_1>_>
                      (this_00,local_res10);
                    /* WARNING: Load size is inaccurate */
    (this->ConstraintsNotificationHandle).ID = *FVar1.ID;
  }
  return;
}

// UnregisterNotifications @ 1464c3cf0

void __thiscall
UE::Anim::FAnimationEvaluationCache::UnregisterNotifications(FAnimationEvaluationCache *this)

{
  FDelegateHandle FVar1;
  TMulticastDelegateBase<FDefaultDelegateUserPolicy> *this_00;
  
  if ((this->ConstraintsNotificationHandle).ID != 0) {
    this_00 = (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
              FConstraintsManagerController::GetNotifyDelegate();
    FVar1.ID = (this->ConstraintsNotificationHandle).ID;
    if (FVar1.ID != 0) {
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance(this_00,FVar1);
    }
    (this->ConstraintsNotificationHandle).ID = 0;
  }
  return;
}

