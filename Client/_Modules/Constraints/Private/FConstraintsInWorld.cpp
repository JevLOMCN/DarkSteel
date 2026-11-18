// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Constraints
// Functions: 4

// StaticStruct @ 14648e620

UScriptStruct * __cdecl FConstraintsInWorld::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FConstraintsInWorld.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_Constraints();
    Z_Registration_Info_UScriptStruct_FConstraintsInWorld.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FConstraintsInWorld,(UObject *)pUVar1,
                         L"ConstraintsInWorld");
  }
  return Z_Registration_Info_UScriptStruct_FConstraintsInWorld.OuterSingleton;
}

// GetEvaluationGraph @ 1464b2d20

FConstraintsEvaluationGraph * __thiscall
FConstraintsInWorld::GetEvaluationGraph(FConstraintsInWorld *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  FConstraintsEvaluationGraph *pFVar7;
  TReferenceControllerBase<1> *pTVar8;
  FConstraintsEvaluationGraph *local_28;
  FSharedReferencer<1> local_20;
  
  if ((this->EvaluationGraph).Object != (FConstraintsEvaluationGraph *)0x0) goto LAB_1464b2ea6;
  pTVar6 = ::operator_new(0x40);
  pTVar8 = (TReferenceControllerBase<1> *)0x0;
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    pFVar7 = (FConstraintsEvaluationGraph *)&DAT_00000010;
LAB_1464b2dde:
    if (((pFVar7->_padding_ == 0) || (pFVar7->_padding_ == 0)) ||
       (*(int *)(pFVar7->_padding_ + 8) < 1)) {
      if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
        UNLOCK();
      }
      pFVar7->_padding_ = (longlong)pFVar7;
      if (pTVar8 != (TReferenceControllerBase<1> *)pFVar7->_padding_) {
        if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar8->WeakReferenceCount = (atomic<int>)((int)pTVar8->WeakReferenceCount + 1);
          UNLOCK();
        }
        plVar3 = (longlong *)pFVar7->_padding_;
        if (plVar3 != (longlong *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)plVar3 + 0xc);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            (**(code **)(*plVar3 + 8))(plVar3,1);
          }
        }
        pFVar7->_padding_ = (longlong)pTVar8;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
    }
  }
  else {
    pFVar7 = (FConstraintsEvaluationGraph *)(pTVar6 + 1);
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_UFConstraintsEvaluationGraph___00_SharedPointerInternals__6B_
    ;
    pTVar6[1]._padding_ = 0;
    pTVar6[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[1].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[2]._padding_ = 0;
    pTVar6[2].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[2].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[3]._padding_ = (longlong)this;
    pTVar6[3].SharedReferenceCount = (atomic<int>)0x0;
    pTVar8 = pTVar6;
    if (pFVar7 != (FConstraintsEvaluationGraph *)0x0) goto LAB_1464b2dde;
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InObject != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x246,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar7 = (FConstraintsEvaluationGraph *)(*pcVar4)();
      return pFVar7;
    }
  }
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_28 = pFVar7;
  local_20.ReferenceController = pTVar8;
  if (&this->EvaluationGraph != (TSharedPtr<FConstraintsEvaluationGraph,1> *)&local_28) {
    (this->EvaluationGraph).Object = pFVar7;
    local_28 = (FConstraintsEvaluationGraph *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->EvaluationGraph).SharedReferenceCount,&local_20);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_20.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
LAB_1464b2ea6:
  if ((this->EvaluationGraph).Object == (FConstraintsEvaluationGraph *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar7 = (FConstraintsEvaluationGraph *)(*pcVar4)();
      return pFVar7;
    }
  }
  return (this->EvaluationGraph).Object;
}

// InvalidateGraph @ 1464b91a0

void __thiscall FConstraintsInWorld::InvalidateGraph(FConstraintsInWorld *this)

{
  TSharedPtr<FConstraintsEvaluationGraph,1> *pTVar1;
  longlong local_18;
  FSharedReferencer<1> aFStack_10 [2];
  
  pTVar1 = &this->EvaluationGraph;
  if (pTVar1->Object != (FConstraintsEvaluationGraph *)0x0) {
    local_18 = 0;
    aFStack_10[0].ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (pTVar1 != (TSharedPtr<FConstraintsEvaluationGraph,1> *)&local_18) {
      pTVar1->Object = (FConstraintsEvaluationGraph *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->EvaluationGraph).SharedReferenceCount,aFStack_10);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (aFStack_10[0].ReferenceController);
  }
  FConstraintsManagerController::Notify(GraphUpdated,(UObject *)0x0);
  return;
}

// RemoveConstraints @ 1464bf310

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall FConstraintsInWorld::RemoveConstraints(FConstraintsInWorld *this,UWorld *param_1)

{
  int *piVar1;
  FWeakObjectPtr *pFVar2;
  int iVar3;
  bool bVar4;
  int iVar5;
  UObject *pUVar6;
  FWeakObjectPtr *this_00;
  undefined1 local_res8 [8];
  undefined8 local_38;
  FSharedReferencer<1> FStack_30;
  
  iVar3 = (this->Constraints).ArrayNum;
  piVar1 = &(this->Constraints).ArrayNum;
  this_00 = (FWeakObjectPtr *)(this->Constraints).AllocatorInstance.Data;
  pFVar2 = this_00 + iVar3;
  while( true ) {
    if (*piVar1 != iVar3) {
      `TCheckedPointerIterator<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (this_00 == pFVar2) break;
    bVar4 = FWeakObjectPtr::IsValid(this_00);
    if (bVar4) {
      pUVar6 = FWeakObjectPtr::Get(this_00);
      (**(code **)(*(longlong *)pUVar6 + 0x308))(pUVar6);
      pUVar6 = FWeakObjectPtr::Get(this_00);
      (**(code **)(*(longlong *)pUVar6 + 0x2c8))(pUVar6);
    }
    this_00 = this_00 + 1;
  }
  iVar3 = *piVar1;
  if (iVar3 < 0) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,4,-iVar3,&(this->Constraints).AllocatorInstance,piVar1,
                       &(this->Constraints).ArrayMax);
    memset((this->Constraints).AllocatorInstance.Data + (longlong)iVar5 * 8,0,(longlong)-iVar3 << 3)
    ;
  }
  else if (0 < iVar3) {
    *piVar1 = *piVar1 - iVar3;
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,&(this->Constraints).AllocatorInstance,*piVar1,&(this->Constraints).ArrayMax);
  }
  if ((this->EvaluationGraph).Object != (FConstraintsEvaluationGraph *)0x0) {
    local_38 = 0;
    FStack_30.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (&this->EvaluationGraph != (TSharedPtr<FConstraintsEvaluationGraph,1> *)&local_38) {
      (this->EvaluationGraph).Object = (FConstraintsEvaluationGraph *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->EvaluationGraph).SharedReferenceCount,&FStack_30);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_30.ReferenceController);
  }
  FConstraintsManagerController::Notify(GraphUpdated,(UObject *)0x0);
  return;
}

