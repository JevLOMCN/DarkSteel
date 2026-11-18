// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 1

// ClearVariables @ 14b79fc00

void __thiscall FDS_BuffEffectInfo::ClearVariables(FDS_BuffEffectInfo *this)

{
  TSharedPtr<FStreamableHandle,1> *pTVar1;
  int *piVar2;
  FWeakObjectPtr *pFVar3;
  int iVar4;
  FStreamableHandle *this_00;
  bool bVar5;
  UObject *pUVar6;
  FScriptContainerElement *pFVar7;
  FWeakObjectPtr *pFVar8;
  FScriptContainerElement *pFVar9;
  FWeakObjectPtr local_res8;
  undefined8 local_48;
  FSharedReferencer<1> FStack_40;
  undefined8 local_38;
  FSharedReferencer<1> local_30;
  undefined8 local_28;
  FSharedReferencer<1> local_20;
  
  pTVar1 = &this->AsyncLoadHandle_ActEffect;
  this->BuffID = 0;
  this->ID_ActEffect = 0;
  this->ID_BuffEffect = 0;
  this->ID_ExtinctionEffect = 0;
  this->bIsPeriodBuffEffect = false;
  this->PeriodBuffEffectTick = 0.0;
  this->PeriodBuffEffectInterval = 0.0;
  if (pTVar1->Object != (FStreamableHandle *)0x0) {
    FStreamableHandle::CancelHandle(pTVar1->Object);
    local_48 = 0;
    FStack_40.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (pTVar1 != (TSharedPtr<FStreamableHandle,1> *)&local_48) {
      pTVar1->Object = (FStreamableHandle *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->AsyncLoadHandle_ActEffect).SharedReferenceCount,&FStack_40);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_40.ReferenceController);
  }
  iVar4 = (this->AsyncLoadHandle_BuffEffect).ArrayNum;
  pFVar7 = (this->AsyncLoadHandle_BuffEffect).AllocatorInstance.Data;
  pFVar9 = pFVar7 + (longlong)iVar4 * 0x10;
  while( true ) {
    if ((this->AsyncLoadHandle_BuffEffect).ArrayNum != iVar4) {
      `TCheckedPointerIterator<TSharedPtr<FStreamableHandle,1>,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(&local_res8);
    }
    if (pFVar7 == pFVar9) break;
    local_20.ReferenceController = *(TReferenceControllerBase<1> **)(pFVar7 + 8);
    this_00 = *(FStreamableHandle **)pFVar7;
    if (local_20.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_20.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(local_20.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (this_00 != (FStreamableHandle *)0x0) {
      FStreamableHandle::CancelHandle(this_00);
      local_30.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      local_28 = 0;
      local_38 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(&local_20,&local_30);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_30.ReferenceController);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_20.ReferenceController);
    pFVar7 = pFVar7 + 0x10;
  }
  DestructItems<TSharedPtr<FStreamableHandle,1>,int>
            ((TSharedPtr<FStreamableHandle,1> *)
             (this->AsyncLoadHandle_BuffEffect).AllocatorInstance.Data,
             (this->AsyncLoadHandle_BuffEffect).ArrayNum);
  piVar2 = &(this->AsyncLoadHandle_BuffEffect).ArrayMax;
  (this->AsyncLoadHandle_BuffEffect).ArrayNum = 0;
  if (*piVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,&(this->AsyncLoadHandle_BuffEffect).AllocatorInstance,0,piVar2);
  }
  bVar5 = TWeakObjectPtr<UNiagaraComponent,FWeakObjectPtr>::UEOpEquals(&this->ActEffect,(void *)0x0)
  ;
  if (!bVar5) {
    pUVar6 = FWeakObjectPtr::Get(&(this->ActEffect).WeakPtr);
    (**(code **)(*(longlong *)pUVar6 + 0x4a0))(pUVar6);
    (this->ActEffect).WeakPtr = (FWeakObjectPtr)0x0;
  }
  pFVar8 = (FWeakObjectPtr *)(this->BuffEffect).AllocatorInstance.Data;
  iVar4 = (this->BuffEffect).ArrayNum;
  pFVar3 = pFVar8 + iVar4;
  while( true ) {
    if ((this->BuffEffect).ArrayNum != iVar4) {
      `TCheckedPointerIterator<TWeakObjectPtr<UNiagaraComponent,FWeakObjectPtr>,int,0>::operator!='
      ::__l2::<lambda_1>::operator()(&local_res8);
    }
    if (pFVar8 == pFVar3) break;
    local_res8 = *pFVar8;
    bVar5 = TWeakObjectPtr<UNiagaraComponent,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UNiagaraComponent,FWeakObjectPtr> *)&local_res8,(void *)0x0);
    if (!bVar5) {
      pUVar6 = FWeakObjectPtr::Get(&local_res8);
      (**(code **)(*(longlong *)pUVar6 + 0x4a0))(pUVar6);
    }
    pFVar8 = pFVar8 + 1;
  }
  piVar2 = &(this->BuffEffect).ArrayMax;
  (this->BuffEffect).ArrayNum = 0;
  if (*piVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,0,&(this->BuffEffect).AllocatorInstance,0,piVar2);
  }
  return;
}

