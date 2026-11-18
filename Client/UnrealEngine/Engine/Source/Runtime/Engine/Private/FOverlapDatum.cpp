// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 4

// FOverlapDatum @ 1477ed9d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FOverlapDatum * __thiscall
FOverlapDatum::FOverlapDatum
          (FOverlapDatum *this,UWorld *param_1,FCollisionShape *param_2,
          FCollisionQueryParams *param_3,FCollisionResponseParams *param_4,
          FCollisionObjectQueryParams *param_5,ECollisionChannel param_6,uint param_7,
          TVector<double> *param_8,TQuat<double> *param_9,
          TDelegate<void___cdecl(FTraceHandle_const_&,FOverlapDatum_&),FDefaultDelegateUserPolicy>
          *param_10,int param_11)

{
  TDelegate<void___cdecl(FTraceHandle_const_&,FOverlapDatum_&),FDefaultDelegateUserPolicy> *this_00;
  int *piVar1;
  undefined8 *puVar2;
  code *pcVar3;
  undefined8 uVar4;
  double dVar5;
  int iVar6;
  uchar uVar7;
  undefined3 uVar8;
  bool bVar9;
  FOverlapDatum *pFVar10;
  UWorld *local_res8;
  FDestructionSentinel local_48;
  
  FBaseTraceDatum::FBaseTraceDatum((FBaseTraceDatum *)this);
  this_00 = &this->Delegate;
  *(undefined8 *)this_00 = 0;
  piVar1 = &(this->OutOverlaps).ArrayMax;
  *(undefined8 *)&(this->Delegate).field_0x8 = 0;
  *(undefined4 *)&(this->Delegate).field_0x10 = 0;
  (this->OutOverlaps).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OutOverlaps).ArrayNum = 0;
  *piVar1 = 0;
  if (param_1 == (UWorld *)0x0) {
    bVar9 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<6125059968996474942>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Collision\\WorldCollision.cpp"
                       ,0x3e,"World");
    if (bVar9) {
      pcVar3 = (code *)swi(3);
      pFVar10 = (FOverlapDatum *)(*pcVar3)();
      return pFVar10;
    }
  }
  uVar4 = *(undefined8 *)((longlong)&param_2->field1_0x4 + 4);
  *(undefined8 *)&this->field_0xb8 = *(undefined8 *)param_2;
  *(undefined8 *)&this->field_0xc0 = uVar4;
  FCollisionQueryParams::operator=((FCollisionQueryParams *)&this->field_0x8,param_3);
  uVar4 = *(undefined8 *)((longlong)&(param_4->CollisionResponse).field0_0x0 + 8);
  *(undefined8 *)&this->field_0x90 = *(undefined8 *)&(param_4->CollisionResponse).field0_0x0;
  *(undefined8 *)&this->field_0x98 = uVar4;
  uVar4 = *(undefined8 *)((longlong)&(param_4->CollisionResponse).field0_0x0 + 0x18);
  *(undefined8 *)&this->field_0xa0 =
       *(undefined8 *)((longlong)&(param_4->CollisionResponse).field0_0x0 + 0x10);
  *(undefined8 *)&this->field_0xa8 = uVar4;
  iVar6 = param_5->ObjectTypesToQuery;
  uVar7 = param_5->IgnoreMask;
  uVar8 = *(undefined3 *)&param_5->field_0x5;
  *(ECollisionChannel *)&this->field_0xc8 = param_6;
  *(uint *)&this->field_0xd0 = param_7;
  *(int *)&this->field_0xcc = param_11;
  *(int *)&this->field_0xb0 = iVar6;
  this->field_0xb4 = uVar7;
  *(undefined3 *)&this->field_0xb5 = uVar8;
  local_res8 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UWorld *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)this,(FObjectPtr)&local_res8);
  dVar5 = (param_8->field0_0x0)._s_0.Y;
  (this->Pos).field0_0x0._s_0.X = (param_8->field0_0x0)._s_0.X;
  (this->Pos).field0_0x0._s_0.Y = dVar5;
  (this->Pos).field0_0x0._s_0.Z = (param_8->field0_0x0)._s_0.Z;
  dVar5 = param_9->Y;
  (this->Rot).X = param_9->X;
  (this->Rot).Y = dVar5;
  dVar5 = param_9->W;
  (this->Rot).Z = param_9->Z;
  (this->Rot).W = dVar5;
  if (param_10 ==
      (TDelegate<void___cdecl(FTraceHandle_const_&,FOverlapDatum_&),FDefaultDelegateUserPolicy> *)
      0x0) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,
               (FWriteAccessScope *)&local_48);
    if ((*(int *)&(this->Delegate).field_0x10 != 0) &&
       (puVar2 = *(undefined8 **)&(this->Delegate).field_0x8, puVar2 != (undefined8 *)0x0)) {
      (**(code **)*puVar2)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&(this->Delegate).field_0x8,0,0,0x10);
      *(undefined4 *)&(this->Delegate).field_0x10 = 0;
    }
    if (local_48.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
    }
  }
  else {
    TDelegate<void___cdecl(FTraceHandle_const_&,FOverlapDatum_&),FDefaultDelegateUserPolicy>::
    operator=(this_00,param_10);
  }
  (this->OutOverlaps).ArrayNum = 0;
  if (*piVar1 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x48,8,0,&(this->OutOverlaps).AllocatorInstance,0,piVar1);
  }
  return this;
}

// FOverlapDatum @ 1477edc00

FOverlapDatum * __thiscall FOverlapDatum::FOverlapDatum(FOverlapDatum *this)

{
  FBaseTraceDatum::FBaseTraceDatum((FBaseTraceDatum *)this);
  *(undefined8 *)&this->Delegate = 0;
  *(undefined8 *)&(this->Delegate).field_0x8 = 0;
  *(undefined4 *)&(this->Delegate).field_0x10 = 0;
  (this->OutOverlaps).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OutOverlaps).ArrayNum = 0;
  (this->OutOverlaps).ArrayMax = 0;
  return this;
}

// ~FOverlapDatum @ 1477f39e0

void __thiscall FOverlapDatum::~FOverlapDatum(FOverlapDatum *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  pFVar1 = (this->OutOverlaps).AllocatorInstance.Data;
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
  if (*(void **)&this->field_0x80 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x80);
  }
  if (*(void **)&this->field_0x60 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x60);
  }
  return;
}

// operator= @ 1477f5410

FOverlapDatum * __thiscall FOverlapDatum::operator=(FOverlapDatum *this,FOverlapDatum *param_1)

{
  int *piVar1;
  TArray<FOverlapResult,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  FOverlapResult *pFVar4;
  double dVar5;
  
  FBaseTraceDatum::operator=((FBaseTraceDatum *)this,(FBaseTraceDatum *)param_1);
  dVar5 = (param_1->Pos).field0_0x0._s_0.Y;
  (this->Pos).field0_0x0._s_0.X = (param_1->Pos).field0_0x0._s_0.X;
  (this->Pos).field0_0x0._s_0.Y = dVar5;
  (this->Pos).field0_0x0._s_0.Z = (param_1->Pos).field0_0x0._s_0.Z;
  dVar5 = (param_1->Rot).Y;
  (this->Rot).X = (param_1->Rot).X;
  (this->Rot).Y = dVar5;
  dVar5 = (param_1->Rot).W;
  (this->Rot).Z = (param_1->Rot).Z;
  (this->Rot).W = dVar5;
  TDelegate<void___cdecl(FTraceHandle_const_&,FOverlapDatum_&),FDefaultDelegateUserPolicy>::
  operator=(&this->Delegate,&param_1->Delegate);
  pTVar2 = &this->OutOverlaps;
  if (pTVar2 != &param_1->OutOverlaps) {
    iVar3 = (param_1->OutOverlaps).ArrayNum;
    piVar1 = &(this->OutOverlaps).ArrayMax;
    pFVar4 = (FOverlapResult *)(param_1->OutOverlaps).AllocatorInstance.Data;
    (this->OutOverlaps).ArrayNum = iVar3;
    if ((iVar3 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x48,8,iVar3,*piVar1,&pTVar2->AllocatorInstance,iVar3,piVar1);
      ConstructItems<FOverlapResult,FOverlapResult,int>
                ((pTVar2->AllocatorInstance).Data,pFVar4,iVar3);
    }
  }
  return this;
}

