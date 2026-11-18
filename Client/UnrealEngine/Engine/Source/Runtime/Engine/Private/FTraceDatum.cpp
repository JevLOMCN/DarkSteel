// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 4

// FTraceDatum @ 1477ee410

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FTraceDatum * __thiscall
FTraceDatum::FTraceDatum
          (FTraceDatum *this,UWorld *param_1,FCollisionShape *param_2,FCollisionQueryParams *param_3
          ,FCollisionResponseParams *param_4,FCollisionObjectQueryParams *param_5,
          ECollisionChannel param_6,uint param_7,EAsyncTraceType param_8,TVector<double> *param_9,
          TVector<double> *param_10,TQuat<double> *param_11,
          TDelegate<void___cdecl(FTraceHandle_const_&,FTraceDatum_&),FDefaultDelegateUserPolicy>
          *param_12,int param_13)

{
  TDelegate<void___cdecl(FTraceHandle_const_&,FTraceDatum_&),FDefaultDelegateUserPolicy> *this_00;
  int *piVar1;
  FCollisionObjectQueryParams FVar2;
  undefined8 *puVar3;
  code *pcVar4;
  longlong lVar5;
  double dVar6;
  bool bVar7;
  FTraceDatum *pFVar8;
  UWorld *local_res8;
  FDestructionSentinel local_48;
  
  FBaseTraceDatum::FBaseTraceDatum((FBaseTraceDatum *)this);
  this_00 = &this->Delegate;
  *(undefined8 *)this_00 = 0;
  piVar1 = &(this->OutHits).ArrayMax;
  *(undefined8 *)&(this->Delegate).field_0x8 = 0;
  *(undefined4 *)&(this->Delegate).field_0x10 = 0;
  (this->OutHits).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OutHits).ArrayNum = 0;
  *piVar1 = 0;
  if (param_1 == (UWorld *)0x0) {
    bVar7 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<6125059968996474942>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Collision\\WorldCollision.cpp"
                       ,0x3e,"World");
    if (bVar7) {
      pcVar4 = (code *)swi(3);
      pFVar8 = (FTraceDatum *)(*pcVar4)();
      return pFVar8;
    }
  }
  lVar5 = *(longlong *)((longlong)&param_2->field1_0x4 + 4);
  this->_padding_ = *(longlong *)param_2;
  this->_padding_ = lVar5;
  FCollisionQueryParams::operator=((FCollisionQueryParams *)&this->_padding_,param_3);
  lVar5 = *(longlong *)((longlong)&(param_4->CollisionResponse).field0_0x0 + 8);
  this->_padding_ = *(longlong *)&(param_4->CollisionResponse).field0_0x0;
  this->_padding_ = lVar5;
  lVar5 = *(longlong *)((longlong)&(param_4->CollisionResponse).field0_0x0 + 0x18);
  this->_padding_ = *(longlong *)((longlong)&(param_4->CollisionResponse).field0_0x0 + 0x10);
  this->_padding_ = lVar5;
  FVar2 = *param_5;
  *(ECollisionChannel *)&this->_padding_ = param_6;
  *(uint *)&this->_padding_ = param_7;
  *(int *)((longlong)&this->_padding_ + 4) = param_13;
  this->_padding_ = (longlong)FVar2;
  local_res8 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UWorld *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)this,(FObjectPtr)&local_res8);
  dVar6 = (param_9->field0_0x0)._s_0.Y;
  (this->Start).field0_0x0._s_0.X = (param_9->field0_0x0)._s_0.X;
  (this->Start).field0_0x0._s_0.Y = dVar6;
  (this->Start).field0_0x0._s_0.Z = (param_9->field0_0x0)._s_0.Z;
  dVar6 = (param_10->field0_0x0)._s_0.Y;
  (this->End).field0_0x0._s_0.X = (param_10->field0_0x0)._s_0.X;
  (this->End).field0_0x0._s_0.Y = dVar6;
  (this->End).field0_0x0._s_0.Z = (param_10->field0_0x0)._s_0.Z;
  dVar6 = param_11->Y;
  (this->Rot).X = param_11->X;
  (this->Rot).Y = dVar6;
  dVar6 = param_11->W;
  (this->Rot).Z = param_11->Z;
  (this->Rot).W = dVar6;
  if (param_12 ==
      (TDelegate<void___cdecl(FTraceHandle_const_&,FTraceDatum_&),FDefaultDelegateUserPolicy> *)0x0)
  {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,
               (FWriteAccessScope *)&local_48);
    if ((*(int *)&(this->Delegate).field_0x10 != 0) &&
       (puVar3 = *(undefined8 **)&(this->Delegate).field_0x8, puVar3 != (undefined8 *)0x0)) {
      (**(code **)*puVar3)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&(this->Delegate).field_0x8,0,0,0x10);
      *(undefined4 *)&(this->Delegate).field_0x10 = 0;
    }
    if (local_48.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
    }
  }
  else {
    TDelegate<void___cdecl(FTraceHandle_const_&,FTraceDatum_&),FDefaultDelegateUserPolicy>::
    operator=(this_00,param_12);
  }
  (this->OutHits).ArrayNum = 0;
  if (*piVar1 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x100,8,0,&(this->OutHits).AllocatorInstance,0,piVar1);
  }
  this->TraceType = param_8;
  return this;
}

// FTraceDatum @ 1477ee670

FTraceDatum * __thiscall FTraceDatum::FTraceDatum(FTraceDatum *this)

{
  FBaseTraceDatum::FBaseTraceDatum((FBaseTraceDatum *)this);
  *(undefined8 *)&this->Delegate = 0;
  *(undefined8 *)&(this->Delegate).field_0x8 = 0;
  *(undefined4 *)&(this->Delegate).field_0x10 = 0;
  (this->OutHits).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OutHits).ArrayNum = 0;
  (this->OutHits).ArrayMax = 0;
  return this;
}

// ~FTraceDatum @ 1477f3d60

void __thiscall FTraceDatum::~FTraceDatum(FTraceDatum *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  pFVar1 = (this->OutHits).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->Delegate);
  pvVar2 = *(void **)&(this->Delegate).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->Delegate);
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  return;
}

// operator= @ 1477f5500

FTraceDatum * __thiscall FTraceDatum::operator=(FTraceDatum *this,FTraceDatum *param_1)

{
  int *piVar1;
  TArray<FHitResult,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  int iVar4;
  FHitResult *pFVar5;
  double dVar6;
  
  FBaseTraceDatum::operator=((FBaseTraceDatum *)this,(FBaseTraceDatum *)param_1);
  dVar6 = (param_1->Start).field0_0x0._s_0.Y;
  (this->Start).field0_0x0._s_0.X = (param_1->Start).field0_0x0._s_0.X;
  (this->Start).field0_0x0._s_0.Y = dVar6;
  (this->Start).field0_0x0._s_0.Z = (param_1->Start).field0_0x0._s_0.Z;
  dVar6 = (param_1->End).field0_0x0._s_0.Y;
  (this->End).field0_0x0._s_0.X = (param_1->End).field0_0x0._s_0.X;
  (this->End).field0_0x0._s_0.Y = dVar6;
  (this->End).field0_0x0._s_0.Z = (param_1->End).field0_0x0._s_0.Z;
  dVar6 = (param_1->Rot).Y;
  (this->Rot).X = (param_1->Rot).X;
  (this->Rot).Y = dVar6;
  dVar6 = (param_1->Rot).W;
  (this->Rot).Z = (param_1->Rot).Z;
  (this->Rot).W = dVar6;
  TDelegate<void___cdecl(FTraceHandle_const_&,FTraceDatum_&),FDefaultDelegateUserPolicy>::operator=
            (&this->Delegate,&param_1->Delegate);
  pTVar2 = &this->OutHits;
  if (pTVar2 != &param_1->OutHits) {
    iVar3 = (this->OutHits).ArrayMax;
    piVar1 = &(this->OutHits).ArrayMax;
    iVar4 = (param_1->OutHits).ArrayNum;
    pFVar5 = (FHitResult *)(param_1->OutHits).AllocatorInstance.Data;
    (this->OutHits).ArrayNum = iVar4;
    if ((iVar4 == 0) && (iVar3 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x100,8,iVar4,iVar3,&pTVar2->AllocatorInstance,iVar4,piVar1);
      ConstructItems<FHitResult,FHitResult,int>((pTVar2->AllocatorInstance).Data,pFVar5,iVar4);
    }
  }
  this->TraceType = param_1->TraceType;
  return this;
}

