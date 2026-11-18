// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 3

// operator<enum_ECameraEvaluationDataCondition,UE::Cameras::FCameraNodeEvaluationResult>_TTuple<enum_ECameraEvaluationDataCondition,UE::Cameras::FCameraNodeEvaluationResult> @ 14d5389e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

TTuple<ECameraEvaluationDataCondition,UE::Cameras::FCameraNodeEvaluationResult> * __thiscall
TKeyInitializer<enum_ECameraEvaluationDataCondition_const_&>::
operator<enum_ECameraEvaluationDataCondition,UE::Cameras::FCameraNodeEvaluationResult>_TTuple<enum_ECameraEvaluationDataCondition,UE::Cameras::FCameraNodeEvaluationResult>
          (void *this,
          TTuple<ECameraEvaluationDataCondition,UE::Cameras::FCameraNodeEvaluationResult>
          *__return_storage_ptr__)

{
  FCameraNodeEvaluationResult *pFVar1;
  undefined1 auStack_a38 [32];
  undefined1 local_a18 [328];
  void *local_8d0;
  undefined4 local_8c8;
  ForElementType<UE::Cameras::FCameraRigJoint> local_7c8;
  ForAnyElementType local_50;
  ForAnyElementType local_30;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_a38;
  memset(local_a18,0,0xa00);
  pFVar1 = UE::Cameras::FCameraNodeEvaluationResult::FCameraNodeEvaluationResult
                     ((FCameraNodeEvaluationResult *)local_a18);
  *(undefined1 *)__return_storage_ptr__ = **(undefined1 **)this;
  UE::Cameras::FCameraNodeEvaluationResult::FCameraNodeEvaluationResult
            ((FCameraNodeEvaluationResult *)&__return_storage_ptr__->field_0x10,pFVar1);
  if (local_30.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_30.Data);
  }
  if (local_50.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_50.Data);
  }
  if (local_7c8 != (ForElementType<UE::Cameras::FCameraRigJoint>)0x0) {
    FMemory::Free((void *)local_7c8);
  }
  local_8c8 = 0;
  if (local_8d0 != (void *)0x0) {
    FMemory::Free(local_8d0);
  }
  TSparseArray<TSparseSetElement<TTuple<FCameraContextDataID,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FCameraContextDataID,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FCameraContextDataID,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)(local_a18 + 0x108));
  if ((FScriptContainerElement *)local_a18._248_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_a18._248_8_);
  }
  UE::Cameras::FCameraVariableTable::~FCameraVariableTable
            ((FCameraVariableTable *)(local_a18 + 0x88));
  return __return_storage_ptr__;
}

// operator<UClass_*,TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator>_>_TTuple<UClass_*,TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator>_> @ 14d5e5970

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TTuple<UClass_*,TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator>_> * __thiscall
TKeyInitializer<UClass_*_const_&>::
operator<UClass_*,TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator>_>_TTuple<UClass_*,TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator>_>
          (TKeyInitializer<UClass_*_const_&> *this,
          TTuple<UClass_*,TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator>_>
          *__return_storage_ptr__)

{
  int iVar1;
  undefined1 auStackY_98 [32];
  undefined1 local_68 [24];
  undefined8 uStack_50;
  void *local_48;
  undefined4 local_40;
  uint local_3c;
  undefined4 local_38;
  undefined4 local_34;
  ForElementType<FSetElementId> local_30;
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_98;
  local_30.InlineData[0] = '\0';
  local_30.InlineData[1] = '\0';
  local_30.InlineData[2] = '\0';
  local_30.InlineData[3] = '\0';
  local_30._padding_ = 0;
  local_68._16_8_ = 0;
  uStack_50 = 0;
  local_20 = 0;
  local_68._0_8_ = (FScriptContainerElement *)0x0;
  local_68._8_8_ = 0;
  local_48 = (void *)0x0;
  local_40 = 0;
  local_3c = 0x80;
  local_38 = 0xffffffff;
  local_34 = 0;
  local_30.SecondaryData = (ForElementType<FSetElementId>)0x0;
  *(UClass **)__return_storage_ptr__ = *this->Key;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x10 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x28 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x30 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x34 = 0x80;
  *(undefined4 *)&__return_storage_ptr__->field_0x38 = 0xffffffff;
  *(undefined4 *)&__return_storage_ptr__->field_0x3c = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x48 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x50 = 0;
  TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator>::
  Move<TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator>_>
            ((TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator> *)
             &__return_storage_ptr__->field_0x8,
             (TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator> *)local_68);
  local_20 = local_20 & 0xffffffff00000000;
  if (local_30.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_30.SecondaryData);
  }
  iVar1 = SUB84(local_68._8_8_,4);
  local_68._8_8_ = local_68._8_8_ & 0xffffffff00000000;
  if (iVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,(ForAnyElementType *)local_68,0,(int *)(local_68 + 0xc));
  }
  local_38 = 0xffffffff;
  local_34 = 0;
  local_40 = 0;
  if (0x80 < local_3c) {
    local_3c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_68 + 0x10),0);
  }
  if (local_48 != (void *)0x0) {
    FMemory::Free(local_48);
  }
  if ((FScriptContainerElement *)local_68._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_68._0_8_);
  }
  return __return_storage_ptr__;
}

// operator<TSharedPtr<UE::Cameras::FCameraEvaluationContext_const_,1>,UE::Cameras::FDrivenControlRotationHelperService::FMonitoredContext>_TTuple<TSharedPtr<UE::Cameras::FCameraEvaluationContext_const_,1>,UE::Cameras::FDrivenControlRotationHelperService::FMonitoredContext> @ 14d64bc40

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

TTuple<TSharedPtr<UE::Cameras::FCameraEvaluationContext_const_,1>,UE::Cameras::FDrivenControlRotationHelperService::FMonitoredContext>
* __thiscall
TKeyInitializer<TSharedPtr<UE::Cameras::FCameraEvaluationContext_const_,1>_const_&>::
operator<TSharedPtr<UE::Cameras::FCameraEvaluationContext_const_,1>,UE::Cameras::FDrivenControlRotationHelperService::FMonitoredContext>_TTuple<TSharedPtr<UE::Cameras::FCameraEvaluationContext_const_,1>,UE::Cameras::FDrivenControlRotationHelperService::FMonitoredContext>
          (TKeyInitializer<TSharedPtr<UE::Cameras::FCameraEvaluationContext_const_,1>_const_&> *this
          ,TTuple<TSharedPtr<UE::Cameras::FCameraEvaluationContext_const_,1>,UE::Cameras::FDrivenControlRotationHelperService::FMonitoredContext>
           *__return_storage_ptr__)

{
  TSharedPtr<UE::Cameras::FCameraEvaluationContext_const_,1> *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  dVar5 = UE::Math::TRotator<double>::ZeroRotator.Roll;
  dVar4 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
  dVar3 = UE::Math::TRotator<double>::ZeroRotator.Pitch;
  pTVar1 = this->Key;
  *(FCameraEvaluationContext **)__return_storage_ptr__ = pTVar1->Object;
  pTVar2 = (pTVar1->SharedReferenceCount).ReferenceController;
  *(TReferenceControllerBase<1> **)&__return_storage_ptr__->field_0x8 = pTVar2;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  *(undefined8 *)&__return_storage_ptr__->field_0x10 = 0;
  *(double *)&__return_storage_ptr__->field_0x18 = dVar3;
  *(double *)&__return_storage_ptr__->field_0x20 = dVar4;
  *(double *)&__return_storage_ptr__->field_0x28 = dVar5;
  *(undefined8 *)&__return_storage_ptr__->field_0x30 = 0;
  return __return_storage_ptr__;
}

