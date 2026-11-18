// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NavigationSystem
// Functions: 4

// FPathFindingQuery @ 146d74a70

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FPathFindingQuery * __thiscall
FPathFindingQuery::FPathFindingQuery
          (FPathFindingQuery *this,INavAgentInterface *param_1,ANavigationData *param_2,
          TVector<double> *param_3,TVector<double> *param_4,
          TSharedPtr<FNavigationQueryFilter_const_,1> *param_5,
          TSharedPtr<FNavigationPath,1> *param_6,double param_7,bool param_8)

{
  longlong *plVar1;
  uint uVar2;
  TReferenceControllerBase<1> *pTVar3;
  FNavigationQueryFilter *pFVar4;
  double dVar5;
  TSharedPtr<FNavigationQueryFilter_const_,1> *pTVar6;
  TSharedPtr<FNavigationPath,1> *pTVar7;
  bool bVar8;
  UObject *pUVar9;
  FNavAgentProperties *pFVar10;
  longlong local_38;
  FSharedReferencer<1> local_30;
  
  pTVar6 = param_5;
  pTVar3 = (param_5->SharedReferenceCount).ReferenceController;
  pFVar4 = param_5->Object;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (param_1 != (INavAgentInterface *)0x0) {
    pUVar9 = (UObject *)(**(code **)((longlong)*param_1 + 8))(param_1);
    if (pUVar9 != (UObject *)0x0) goto LAB_146d74aca;
  }
  pUVar9 = (UObject *)0x0;
LAB_146d74aca:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar9 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar9);
  }
  this->_padding_ = 0;
  param_5 = (TSharedPtr<FNavigationQueryFilter_const_,1> *)pUVar9;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar9 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar9);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)this,(FObjectPtr)&param_5);
  dVar5 = (param_3->field0_0x0)._s_0.Y;
  this->_padding_ = (longlong)(param_3->field0_0x0)._s_0.X;
  this->_padding_ = (longlong)dVar5;
  plVar1 = &this->_padding_;
  this->_padding_ = (longlong)(param_3->field0_0x0)._s_0.Z;
  dVar5 = (param_4->field0_0x0)._s_0.Y;
  this->_padding_ = (longlong)(param_4->field0_0x0)._s_0.X;
  this->_padding_ = (longlong)dVar5;
  this->_padding_ = (longlong)(param_4->field0_0x0)._s_0.Z;
  *plVar1 = (longlong)pFVar4;
  this->_padding_ = (longlong)pTVar3;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  uVar2 = *(uint *)((longlong)&this->_padding_ + 4);
  this->_padding_ = (longlong)param_7;
  *(undefined4 *)&this->_padding_ = 0;
  *(uint *)((longlong)&this->_padding_ + 4) = (uint)param_8 * 2 | uVar2 & 0xfffffffd | 1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_2 != (ANavigationData *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_2);
  }
  (this->NavData).WeakPtr = (FWeakObjectPtr)0x0;
  param_5 = (TSharedPtr<FNavigationQueryFilter_const_,1> *)param_2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_2 != (ANavigationData *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_2);
  }
  FWeakObjectPtr::operator=(&(this->NavData).WeakPtr,(FObjectPtr)&param_5);
  pTVar7 = param_6;
  (this->PathInstanceToFill).Object = param_6->Object;
  pTVar3 = (param_6->SharedReferenceCount).ReferenceController;
  (this->PathInstanceToFill).SharedReferenceCount.ReferenceController = pTVar3;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  pFVar10 = (FNavAgentProperties *)(**(code **)((longlong)*param_1 + 0x10))(param_1);
  FNavAgentProperties::FNavAgentProperties(&this->NavAgentProperties,pFVar10);
  if (*plVar1 == 0) {
    bVar8 = FWeakObjectPtr::IsValid(&(this->NavData).WeakPtr);
    if (bVar8) {
      pUVar9 = FWeakObjectPtr::Get(&(this->NavData).WeakPtr);
      local_30.ReferenceController = *(TReferenceControllerBase<1> **)&pUVar9[0x1a].field_0x10;
      local_38 = *(longlong *)&pUVar9[0x1a].field_0x8;
      if (local_30.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_30.ReferenceController)->SharedReferenceCount =
             (atomic<int>)((int)(local_30.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      if (plVar1 != &local_38) {
        *plVar1 = local_38;
        local_38 = 0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  ((FSharedReferencer<1> *)&this->_padding_,&local_30);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_30.ReferenceController);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((pTVar6->SharedReferenceCount).ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((pTVar7->SharedReferenceCount).ReferenceController);
  return this;
}

// FPathFindingQuery @ 146d74cb0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FPathFindingQuery * __thiscall
FPathFindingQuery::FPathFindingQuery
          (FPathFindingQuery *this,UObject *param_1,ANavigationData *param_2,
          TVector<double> *param_3,TVector<double> *param_4,
          TSharedPtr<FNavigationQueryFilter_const_,1> *param_5,
          TSharedPtr<FNavigationPath,1> *param_6,double param_7,bool param_8)

{
  uint uVar1;
  TReferenceControllerBase<1> *pTVar2;
  FNavigationQueryFilter *pFVar3;
  double dVar4;
  TSharedPtr<FNavigationPath,1> *pTVar5;
  bool bVar6;
  UObject *pUVar7;
  longlong local_38;
  FSharedReferencer<1> local_30;
  
  pTVar5 = param_6;
  pTVar2 = (param_5->SharedReferenceCount).ReferenceController;
  pFVar3 = param_5->Object;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(param_1);
  }
  this->_padding_ = 0;
  param_6 = (TSharedPtr<FNavigationPath,1> *)param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(param_1);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)this,(FObjectPtr)&param_6);
  dVar4 = (param_3->field0_0x0)._s_0.Y;
  this->_padding_ = (longlong)(param_3->field0_0x0)._s_0.X;
  this->_padding_ = (longlong)dVar4;
  this->_padding_ = (longlong)(param_3->field0_0x0)._s_0.Z;
  dVar4 = (param_4->field0_0x0)._s_0.Y;
  this->_padding_ = (longlong)(param_4->field0_0x0)._s_0.X;
  this->_padding_ = (longlong)dVar4;
  this->_padding_ = (longlong)(param_4->field0_0x0)._s_0.Z;
  this->_padding_ = (longlong)pFVar3;
  this->_padding_ = (longlong)pTVar2;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  uVar1 = *(uint *)((longlong)&this->_padding_ + 4);
  this->_padding_ = (longlong)param_7;
  *(undefined4 *)&this->_padding_ = 0;
  *(uint *)((longlong)&this->_padding_ + 4) = (uint)param_8 * 2 | uVar1 & 0xfffffffd | 1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_2 != (ANavigationData *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_2);
  }
  (this->NavData).WeakPtr = (FWeakObjectPtr)0x0;
  param_6 = (TSharedPtr<FNavigationPath,1> *)param_2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_2 != (ANavigationData *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_2);
  }
  FWeakObjectPtr::operator=(&(this->NavData).WeakPtr,(FObjectPtr)&param_6);
  (this->PathInstanceToFill).Object = pTVar5->Object;
  pTVar2 = (pTVar5->SharedReferenceCount).ReferenceController;
  (this->PathInstanceToFill).SharedReferenceCount.ReferenceController = pTVar2;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  FNavAgentProperties::FNavAgentProperties
            (&this->NavAgentProperties,(FNavAgentProperties *)&param_2->NavDataConfig);
  if (this->_padding_ == 0) {
    bVar6 = FWeakObjectPtr::IsValid(&(this->NavData).WeakPtr);
    if (bVar6) {
      pUVar7 = FWeakObjectPtr::Get(&(this->NavData).WeakPtr);
      local_30.ReferenceController = *(TReferenceControllerBase<1> **)&pUVar7[0x1a].field_0x10;
      local_38 = *(longlong *)&pUVar7[0x1a].field_0x8;
      if (local_30.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_30.ReferenceController)->SharedReferenceCount =
             (atomic<int>)((int)(local_30.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      if (&this->_padding_ != &local_38) {
        this->_padding_ = local_38;
        local_38 = 0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  ((FSharedReferencer<1> *)&this->_padding_,&local_30);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_30.ReferenceController);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_5->SharedReferenceCount).ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((pTVar5->SharedReferenceCount).ReferenceController);
  return this;
}

// FPathFindingQuery @ 146d74ed0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FPathFindingQuery * __thiscall
FPathFindingQuery::FPathFindingQuery
          (FPathFindingQuery *this,TSharedRef<FNavigationPath,1> *param_1,ANavigationData *param_2)

{
  undefined1 *puVar1;
  TReferenceControllerBase<1> *pTVar2;
  FNavigationPath *pFVar3;
  INavAgentInterface *pIVar4;
  longlong lVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  bool bVar9;
  UObject *pUVar10;
  TVector<double> *pTVar11;
  ANavigationData *local_res8;
  longlong local_68;
  FSharedReferencer<1> local_60;
  TVector<double>_u_0 local_58;
  undefined1 local_40 [40];
  
  FPathFindingQueryData::FPathFindingQueryData
            ((FPathFindingQueryData *)this,&param_1->Object->PathFindingQueryData);
  if (param_2 == (ANavigationData *)0x0) {
    param_2 = (ANavigationData *)FWeakObjectPtr::Get(&(param_1->Object->NavigationDataUsed).WeakPtr)
    ;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_2 != (ANavigationData *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_2);
  }
  (this->NavData).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8 = param_2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_2 != (ANavigationData *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_2);
  }
  FWeakObjectPtr::operator=(&(this->NavData).WeakPtr,(FObjectPtr)&local_res8);
  (this->PathInstanceToFill).Object = param_1->Object;
  pTVar2 = (param_1->SharedReferenceCount).ReferenceController;
  (this->PathInstanceToFill).SharedReferenceCount.ReferenceController = pTVar2;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  FNavAgentProperties::FNavAgentProperties
            (&this->NavAgentProperties,&FNavAgentProperties::DefaultProperties);
  dVar8 = __real_7fefffffffffffff;
  if (param_1->Object->bUpdateStartPointOnRepath != 0) {
    pUVar10 = FWeakObjectPtr::Get(&(param_1->Object->SourceActor).WeakPtr);
    if (pUVar10 != (UObject *)0x0) {
      pFVar3 = param_1->Object;
      bVar9 = TWeakObjectPtr<AActor_const_,FWeakObjectPtr>::UEOpEquals
                        (&pFVar3->SourceActor,(void *)0x0);
      if (bVar9) {
        if ((pFVar3->PathPoints).ArrayNum < 1) {
          pTVar11 = &FNavigationSystem::InvalidLocation;
        }
        else {
          pTVar11 = (TVector<double> *)(pFVar3->PathPoints).AllocatorInstance.Data;
        }
      }
      else {
        pIVar4 = pFVar3->SourceActorAsNavAgent;
        if (pIVar4 == (INavAgentInterface *)0x0) {
          pUVar10 = FWeakObjectPtr::Get(&(pFVar3->SourceActor).WeakPtr);
          lVar5 = *(longlong *)(pUVar10 + 0xb);
          if (lVar5 == 0) {
            pTVar11 = (TVector<double> *)&local_58;
            local_58._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
            local_58._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
            local_58._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
          }
          else {
            pTVar11 = (TVector<double> *)&local_58;
            local_58._s_0.X = *(double *)(lVar5 + 0x210);
            local_58._s_0.Y = *(double *)(lVar5 + 0x218);
            local_58._s_0.Z = *(double *)(lVar5 + 0x220);
          }
        }
        else {
          pTVar11 = (TVector<double> *)(**(code **)((longlong)*pIVar4 + 0x18))(pIVar4,local_40);
        }
      }
      dVar6 = (((TVector<double>_u_0 *)&((TVector<double>_u_0_s_0 *)pTVar11)->X)->_s_0).X;
      dVar7 = *(double *)((longlong)pTVar11 + 8);
      local_58._s_0.Z = (double)*(undefined8 *)((longlong)pTVar11 + 0x10);
      if (((dVar6 != dVar8) || (dVar7 != dVar8)) || (local_58._s_0.Z != dVar8)) {
        this->_padding_ = (longlong)dVar6;
        this->_padding_ = (longlong)dVar7;
        this->_padding_ = (longlong)local_58._s_0.Z;
      }
    }
  }
  if ((param_1->Object->bUpdateEndPointOnRepath != 0) && (param_1->Object->bObservingGoalActor != 0)
     ) {
    pUVar10 = FWeakObjectPtr::Get(&(param_1->Object->GoalActor).WeakPtr);
    if (pUVar10 != (UObject *)0x0) {
      FNavigationPath::GetGoalLocation(param_1->Object,(TVector<double> *)&local_58._s_0);
      if (((local_58._s_0.X != dVar8) || (local_58._s_0.Y != dVar8)) || (local_58._s_0.Z != dVar8))
      {
        this->_padding_ = (longlong)local_58._s_0.X;
        this->_padding_ = (longlong)local_58._s_0.Y;
        this->_padding_ = (longlong)local_58._s_0.Z;
      }
    }
  }
  bVar9 = FWeakObjectPtr::IsValid(&(this->NavData).WeakPtr);
  if (bVar9) {
    if (this->_padding_ == 0) {
      pUVar10 = FWeakObjectPtr::Get(&(this->NavData).WeakPtr);
      local_60.ReferenceController = *(TReferenceControllerBase<1> **)&pUVar10[0x1a].field_0x10;
      local_68 = *(longlong *)&pUVar10[0x1a].field_0x8;
      if (local_60.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_60.ReferenceController)->SharedReferenceCount =
             (atomic<int>)((int)(local_60.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      if (&this->_padding_ != &local_68) {
        this->_padding_ = local_68;
        local_68 = 0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  ((FSharedReferencer<1> *)&this->_padding_,&local_60);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_60.ReferenceController);
    }
    pUVar10 = FWeakObjectPtr::Get(&(this->NavData).WeakPtr);
    FNavAgentProperties::operator=
              (&this->NavAgentProperties,(FNavAgentProperties *)(pUVar10 + 0x12));
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return this;
}

// ComputeCostLimitFromHeuristic @ 146d87990

double __cdecl
FPathFindingQuery::ComputeCostLimitFromHeuristic
          (TVector<double> *param_1,TVector<double> *param_2,double param_3,double param_4,
          double param_5)

{
  double dVar1;
  double dVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  double dVar5;
  
  dVar2 = __real_47efffffe0000000;
  if (param_4 != __real_47efffffe0000000) {
    dVar2 = (param_2->field0_0x0)._s_0.Y - (param_1->field0_0x0)._s_0.Y;
    dVar1 = (param_2->field0_0x0)._s_0.Z - (param_1->field0_0x0)._s_0.Z;
    dVar5 = (param_2->field0_0x0)._s_0.X - (param_1->field0_0x0)._s_0.X;
    auVar3._0_8_ = dVar1 * dVar1;
    auVar3._8_8_ = 0;
    auVar4._8_8_ = 0;
    auVar4._0_8_ = dVar2 * dVar2 + dVar5 * dVar5 + auVar3._0_8_;
    auVar4 = sqrtpd(auVar3,auVar4);
    dVar2 = auVar4._0_8_ * param_3 * param_4;
    if (__real_7fefffffffffffff <= dVar2) {
      dVar2 = __real_7fefffffffffffff;
    }
    if (dVar2 <= param_5) {
      dVar2 = param_5;
    }
  }
  return dVar2;
}

