// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 60

// TEventContainer<Chaos::FBreakingEventData> @ 143f41870

TEventContainer<Chaos::FBreakingEventData> * __thiscall
Chaos::TEventContainer<Chaos::FBreakingEventData>::TEventContainer<Chaos::FBreakingEventData>
          (TEventContainer<Chaos::FBreakingEventData> *this,EMultiBufferMode *param_1,
          TFunction<void___cdecl(Chaos::FPBDRigidsSolver_const_*,Chaos::FBreakingEventData_&,bool)>
          *param_2)

{
  EMultiBufferMode EVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  TEventContainer<Chaos::FBreakingEventData> *pTVar5;
  FGuardedTripleBuffer<Chaos::FBreakingEventData> *this_00;
  FTripleBuffer<Chaos::FBreakingEventData> *pFVar6;
  FTripleBuffer<Chaos::FBreakingEventData> *pFVar7;
  FDoubleBuffer<Chaos::FBreakingEventData> *this_01;
  undefined8 *puVar8;
  longlong *plVar9;
  
  pFVar6 = (FTripleBuffer<Chaos::FBreakingEventData> *)0x0;
  this->_padding_ = (longlong)&___7__TEventContainer_UFBreakingEventData_Chaos___Chaos__6B_;
  lVar2 = *(longlong *)param_2;
  *(longlong *)&this->InjectedFunction = lVar2;
  *(undefined8 *)&(this->InjectedFunction).field_0x28 = 0;
  if (lVar2 != 0) {
    puVar8 = (undefined8 *)&param_2->field_0x10;
    if (*(undefined8 **)&param_2->field_0x28 != (undefined8 *)0x0) {
      puVar8 = *(undefined8 **)&param_2->field_0x28;
    }
    (**(code **)*puVar8)();
  }
  EVar1 = *param_1;
  if (EVar1 == Single) {
    pFVar7 = ::operator_new(0x80);
    if (pFVar7 != (FTripleBuffer<Chaos::FBreakingEventData> *)0x0) {
      pFVar7->Data[0].BreakingData.AllBreakingsArray.AllocatorInstance.Data =
           (FScriptContainerElement *)0x0;
      pFVar7->_padding_ = (longlong)&___7__FSingleBuffer_UFBreakingEventData_Chaos___Chaos__6B_;
      pFVar7->Data[0].BreakingData._padding_ = -0x10000000000001;
      pFVar7->Data[0].PhysicsProxyToBreakingIndices._padding_ = -0x10000000000001;
      pFVar7->Data[0].BreakingData.AllBreakingsArray.ArrayNum = 0;
      pFVar7->Data[0].BreakingData.AllBreakingsArray.ArrayMax = 0;
      pFVar7->Data[0].BreakingData.bHasGlobalEvent = false;
      *(ResourceTypeWrapper **)
       &pFVar7->Data[0].PhysicsProxyToBreakingIndices.PhysicsProxyToIndicesMap.field_0x10 =
           (ResourceTypeWrapper *)0x0;
      *(TAtomic<Chaos::FGuardedTripleBuffer<Chaos::FBreakingEventData>::ResourceTypeWrapper_*> *)
       &pFVar7->Data[0].PhysicsProxyToBreakingIndices.PhysicsProxyToIndicesMap.field_0x18 =
           (TAtomic<Chaos::FGuardedTripleBuffer<Chaos::FBreakingEventData>::ResourceTypeWrapper_*>)
           0x0;
      *(undefined8 *)
       &pFVar7->Data[0].PhysicsProxyToBreakingIndices.PhysicsProxyToIndicesMap.field_0x38 = 0;
      *(undefined8 *)
       &pFVar7->Data[0].PhysicsProxyToBreakingIndices.PhysicsProxyToIndicesMap.field_0x48 = 0;
      *(undefined8 *)&pFVar7->Data[0].PhysicsProxyToBreakingIndices.PhysicsProxyToIndicesMap = 0;
      *(ResourceTypeWrapper **)
       &pFVar7->Data[0].PhysicsProxyToBreakingIndices.PhysicsProxyToIndicesMap.field_0x8 =
           (ResourceTypeWrapper *)0x0;
      *(undefined8 *)
       &pFVar7->Data[0].PhysicsProxyToBreakingIndices.PhysicsProxyToIndicesMap.field_0x20 = 0;
      *(undefined4 *)
       &pFVar7->Data[0].PhysicsProxyToBreakingIndices.PhysicsProxyToIndicesMap.field_0x28 = 0;
      *(undefined4 *)
       &pFVar7->Data[0].PhysicsProxyToBreakingIndices.PhysicsProxyToIndicesMap.field_0x2c = 0x80;
      *(undefined4 *)
       &pFVar7->Data[0].PhysicsProxyToBreakingIndices.PhysicsProxyToIndicesMap.field_0x30 =
           0xffffffff;
      *(undefined4 *)
       &pFVar7->Data[0].PhysicsProxyToBreakingIndices.PhysicsProxyToIndicesMap.field_0x34 = 0;
      *(undefined8 *)
       &pFVar7->Data[0].PhysicsProxyToBreakingIndices.PhysicsProxyToIndicesMap.field_0x40 = 0;
      pFVar6 = pFVar7;
    }
  }
  else if (EVar1 == Double) {
    this_01 = ::operator_new(0x108);
    if (this_01 != (FDoubleBuffer<Chaos::FBreakingEventData> *)0x0) {
      pFVar6 = (FTripleBuffer<Chaos::FBreakingEventData> *)
               FDoubleBuffer<Chaos::FBreakingEventData>::FDoubleBuffer<Chaos::FBreakingEventData>
                         (this_01);
    }
  }
  else if (EVar1 == Triple) {
    pFVar7 = ::operator_new(0x178);
    if (pFVar7 != (FTripleBuffer<Chaos::FBreakingEventData> *)0x0) {
      pFVar6 = FTripleBuffer<Chaos::FBreakingEventData>::FTripleBuffer<Chaos::FBreakingEventData>
                         (pFVar7);
    }
  }
  else if (EVar1 == TripleGuarded) {
    this_00 = ::operator_new(0x50);
    if (this_00 != (FGuardedTripleBuffer<Chaos::FBreakingEventData> *)0x0) {
      pFVar6 = (FTripleBuffer<Chaos::FBreakingEventData> *)
               FGuardedTripleBuffer<Chaos::FBreakingEventData>::
               FGuardedTripleBuffer<Chaos::FBreakingEventData>(this_00);
    }
  }
  else {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Framework\\MultiBufferResource.h"
                       ,0x154,L"FMultiBufferFactory Unexpected buffer mode");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar5 = (TEventContainer<Chaos::FBreakingEventData> *)(*pcVar3)();
      return pTVar5;
    }
  }
  (this->EventBuffer).Ptr = (IBufferResource<Chaos::FBreakingEventData> *)pFVar6;
  *(undefined8 *)&this->ProxyOwnerToHandlerMap = 0;
  *(undefined8 *)&(this->ProxyOwnerToHandlerMap).field_0x8 = 0;
  *(undefined8 *)&(this->ProxyOwnerToHandlerMap).field_0x20 = 0;
  *(undefined4 *)&(this->ProxyOwnerToHandlerMap).field_0x28 = 0;
  *(undefined4 *)&(this->ProxyOwnerToHandlerMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->ProxyOwnerToHandlerMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ProxyOwnerToHandlerMap).field_0x34 = 0;
  *(undefined8 *)&(this->ProxyOwnerToHandlerMap).field_0x40 = 0;
  *(undefined4 *)&(this->ProxyOwnerToHandlerMap).field_0x48 = 0;
  *(undefined8 *)&this->HandlersNotInProxyOwnerMap = 0;
  *(undefined8 *)&(this->HandlersNotInProxyOwnerMap).field_0x8 = 0;
  *(undefined8 *)&(this->HandlersNotInProxyOwnerMap).field_0x20 = 0;
  *(undefined4 *)&(this->HandlersNotInProxyOwnerMap).field_0x28 = 0;
  *(undefined4 *)&(this->HandlersNotInProxyOwnerMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->HandlersNotInProxyOwnerMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->HandlersNotInProxyOwnerMap).field_0x34 = 0;
  *(undefined8 *)&(this->HandlersNotInProxyOwnerMap).field_0x40 = 0;
  *(undefined4 *)&(this->HandlersNotInProxyOwnerMap).field_0x48 = 0;
  *(undefined8 *)&this->HandlerMap = 0;
  *(undefined8 *)&(this->HandlerMap).field_0x8 = 0;
  *(undefined8 *)&(this->HandlerMap).field_0x20 = 0;
  *(undefined4 *)&(this->HandlerMap).field_0x28 = 0;
  *(undefined4 *)&(this->HandlerMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->HandlerMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->HandlerMap).field_0x34 = 0;
  *(undefined8 *)&(this->HandlerMap).field_0x40 = 0;
  *(undefined4 *)&(this->HandlerMap).field_0x48 = 0;
  (this->HandlerLock).Mutex.Mutex.Ptr = (void *)0x0;
  (this->DeferredHandlers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DeferredHandlers).ArrayNum = 0;
  (this->DeferredHandlers).ArrayMax = 0;
  (this->DeferredUnregisterHandlers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DeferredUnregisterHandlers).ArrayNum = 0;
  (this->DeferredUnregisterHandlers).ArrayMax = 0;
  (this->DeferredHandlerLock).Mutex.Mutex.Ptr = (void *)0x0;
  this->bDispatchInProgress = false;
  if (*(longlong *)param_2 != 0) {
    plVar9 = (longlong *)&param_2->field_0x10;
    if (*(longlong **)&param_2->field_0x28 != (longlong *)0x0) {
      plVar9 = *(longlong **)&param_2->field_0x28;
    }
    (**(code **)(*plVar9 + 0x10))();
  }
  return this;
}

// TEventContainer<Chaos::FCollisionEventData> @ 143f41b00

TEventContainer<Chaos::FCollisionEventData> * __thiscall
Chaos::TEventContainer<Chaos::FCollisionEventData>::TEventContainer<Chaos::FCollisionEventData>
          (TEventContainer<Chaos::FCollisionEventData> *this,EMultiBufferMode *param_1,
          TFunction<void___cdecl(Chaos::FPBDRigidsSolver_const_*,Chaos::FCollisionEventData_&,bool)>
          *param_2)

{
  EMultiBufferMode EVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  TEventContainer<Chaos::FCollisionEventData> *pTVar5;
  FGuardedTripleBuffer<Chaos::FCollisionEventData> *this_00;
  FTripleBuffer<Chaos::FCollisionEventData> *pFVar6;
  FTripleBuffer<Chaos::FCollisionEventData> *pFVar7;
  FDoubleBuffer<Chaos::FCollisionEventData> *this_01;
  undefined8 *puVar8;
  longlong *plVar9;
  
  pFVar6 = (FTripleBuffer<Chaos::FCollisionEventData> *)0x0;
  this->_padding_ = (longlong)&___7__TEventContainer_UFCollisionEventData_Chaos___Chaos__6B_;
  lVar2 = *(longlong *)param_2;
  *(longlong *)&this->InjectedFunction = lVar2;
  *(undefined8 *)&(this->InjectedFunction).field_0x28 = 0;
  if (lVar2 != 0) {
    puVar8 = (undefined8 *)&param_2->field_0x10;
    if (*(undefined8 **)&param_2->field_0x28 != (undefined8 *)0x0) {
      puVar8 = *(undefined8 **)&param_2->field_0x28;
    }
    (**(code **)*puVar8)();
  }
  EVar1 = *param_1;
  if (EVar1 == Single) {
    pFVar7 = ::operator_new(0x78);
    if (pFVar7 != (FTripleBuffer<Chaos::FCollisionEventData> *)0x0) {
      pFVar7->Data[0].CollisionData.AllCollisionsArray.AllocatorInstance.Data =
           (FScriptContainerElement *)0x0;
      pFVar7->_padding_ = (longlong)&___7__FSingleBuffer_UFCollisionEventData_Chaos___Chaos__6B_;
      pFVar7->Data[0].PhysicsProxyToCollisionIndices._padding_ = -0x10000000000001;
      pFVar7->Data[0].CollisionData.AllCollisionsArray.ArrayNum = 0;
      pFVar7->Data[0].CollisionData.AllCollisionsArray.ArrayMax = 0;
      pFVar7->Data[0].CollisionData._padding_ = -0x10000000000001;
      *(ResourceTypeWrapper **)
       &pFVar7->Data[0].PhysicsProxyToCollisionIndices.PhysicsProxyToIndicesMap.field_0x10 =
           (ResourceTypeWrapper *)0x0;
      *(ResourceTypeWrapper **)
       &pFVar7->Data[0].PhysicsProxyToCollisionIndices.PhysicsProxyToIndicesMap.field_0x18 =
           (ResourceTypeWrapper *)0x0;
      *(undefined8 *)
       &pFVar7->Data[0].PhysicsProxyToCollisionIndices.PhysicsProxyToIndicesMap.field_0x38 = 0;
      *(undefined8 *)
       &pFVar7->Data[0].PhysicsProxyToCollisionIndices.PhysicsProxyToIndicesMap.field_0x48 = 0;
      *(undefined8 *)&pFVar7->Data[0].PhysicsProxyToCollisionIndices.PhysicsProxyToIndicesMap = 0;
      *(undefined8 *)
       &pFVar7->Data[0].PhysicsProxyToCollisionIndices.PhysicsProxyToIndicesMap.field_0x8 = 0;
      *(TAtomic<Chaos::FGuardedTripleBuffer<Chaos::FCollisionEventData>::ResourceTypeWrapper_*> *)
       &pFVar7->Data[0].PhysicsProxyToCollisionIndices.PhysicsProxyToIndicesMap.field_0x20 =
           (TAtomic<Chaos::FGuardedTripleBuffer<Chaos::FCollisionEventData>::ResourceTypeWrapper_*>)
           0x0;
      *(undefined4 *)
       &pFVar7->Data[0].PhysicsProxyToCollisionIndices.PhysicsProxyToIndicesMap.field_0x28 = 0;
      *(undefined4 *)
       &pFVar7->Data[0].PhysicsProxyToCollisionIndices.PhysicsProxyToIndicesMap.field_0x2c = 0x80;
      *(undefined4 *)
       &pFVar7->Data[0].PhysicsProxyToCollisionIndices.PhysicsProxyToIndicesMap.field_0x30 =
           0xffffffff;
      *(undefined4 *)
       &pFVar7->Data[0].PhysicsProxyToCollisionIndices.PhysicsProxyToIndicesMap.field_0x34 = 0;
      *(undefined8 *)
       &pFVar7->Data[0].PhysicsProxyToCollisionIndices.PhysicsProxyToIndicesMap.field_0x40 = 0;
      pFVar6 = pFVar7;
    }
  }
  else if (EVar1 == Double) {
    this_01 = ::operator_new(0xf8);
    if (this_01 != (FDoubleBuffer<Chaos::FCollisionEventData> *)0x0) {
      pFVar6 = (FTripleBuffer<Chaos::FCollisionEventData> *)
               FDoubleBuffer<Chaos::FCollisionEventData>::FDoubleBuffer<Chaos::FCollisionEventData>
                         (this_01);
    }
  }
  else if (EVar1 == Triple) {
    pFVar7 = ::operator_new(0x160);
    if (pFVar7 != (FTripleBuffer<Chaos::FCollisionEventData> *)0x0) {
      pFVar6 = FTripleBuffer<Chaos::FCollisionEventData>::FTripleBuffer<Chaos::FCollisionEventData>
                         (pFVar7);
    }
  }
  else if (EVar1 == TripleGuarded) {
    this_00 = ::operator_new(0x50);
    if (this_00 != (FGuardedTripleBuffer<Chaos::FCollisionEventData> *)0x0) {
      pFVar6 = (FTripleBuffer<Chaos::FCollisionEventData> *)
               FGuardedTripleBuffer<Chaos::FCollisionEventData>::
               FGuardedTripleBuffer<Chaos::FCollisionEventData>(this_00);
    }
  }
  else {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Framework\\MultiBufferResource.h"
                       ,0x154,L"FMultiBufferFactory Unexpected buffer mode");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar5 = (TEventContainer<Chaos::FCollisionEventData> *)(*pcVar3)();
      return pTVar5;
    }
  }
  (this->EventBuffer).Ptr = (IBufferResource<Chaos::FCollisionEventData> *)pFVar6;
  *(undefined8 *)&this->ProxyOwnerToHandlerMap = 0;
  *(undefined8 *)&(this->ProxyOwnerToHandlerMap).field_0x8 = 0;
  *(undefined8 *)&(this->ProxyOwnerToHandlerMap).field_0x20 = 0;
  *(undefined4 *)&(this->ProxyOwnerToHandlerMap).field_0x28 = 0;
  *(undefined4 *)&(this->ProxyOwnerToHandlerMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->ProxyOwnerToHandlerMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ProxyOwnerToHandlerMap).field_0x34 = 0;
  *(undefined8 *)&(this->ProxyOwnerToHandlerMap).field_0x40 = 0;
  *(undefined4 *)&(this->ProxyOwnerToHandlerMap).field_0x48 = 0;
  *(undefined8 *)&this->HandlersNotInProxyOwnerMap = 0;
  *(undefined8 *)&(this->HandlersNotInProxyOwnerMap).field_0x8 = 0;
  *(undefined8 *)&(this->HandlersNotInProxyOwnerMap).field_0x20 = 0;
  *(undefined4 *)&(this->HandlersNotInProxyOwnerMap).field_0x28 = 0;
  *(undefined4 *)&(this->HandlersNotInProxyOwnerMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->HandlersNotInProxyOwnerMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->HandlersNotInProxyOwnerMap).field_0x34 = 0;
  *(undefined8 *)&(this->HandlersNotInProxyOwnerMap).field_0x40 = 0;
  *(undefined4 *)&(this->HandlersNotInProxyOwnerMap).field_0x48 = 0;
  *(undefined8 *)&this->HandlerMap = 0;
  *(undefined8 *)&(this->HandlerMap).field_0x8 = 0;
  *(undefined8 *)&(this->HandlerMap).field_0x20 = 0;
  *(undefined4 *)&(this->HandlerMap).field_0x28 = 0;
  *(undefined4 *)&(this->HandlerMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->HandlerMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->HandlerMap).field_0x34 = 0;
  *(undefined8 *)&(this->HandlerMap).field_0x40 = 0;
  *(undefined4 *)&(this->HandlerMap).field_0x48 = 0;
  (this->HandlerLock).Mutex.Mutex.Ptr = (void *)0x0;
  (this->DeferredHandlers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DeferredHandlers).ArrayNum = 0;
  (this->DeferredHandlers).ArrayMax = 0;
  (this->DeferredUnregisterHandlers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DeferredUnregisterHandlers).ArrayNum = 0;
  (this->DeferredUnregisterHandlers).ArrayMax = 0;
  (this->DeferredHandlerLock).Mutex.Mutex.Ptr = (void *)0x0;
  this->bDispatchInProgress = false;
  if (*(longlong *)param_2 != 0) {
    plVar9 = (longlong *)&param_2->field_0x10;
    if (*(longlong **)&param_2->field_0x28 != (longlong *)0x0) {
      plVar9 = *(longlong **)&param_2->field_0x28;
    }
    (**(code **)(*plVar9 + 0x10))();
  }
  return this;
}

// TEventContainer<Chaos::FCrumblingEventData> @ 143f41d80

TEventContainer<Chaos::FCrumblingEventData> * __thiscall
Chaos::TEventContainer<Chaos::FCrumblingEventData>::TEventContainer<Chaos::FCrumblingEventData>
          (TEventContainer<Chaos::FCrumblingEventData> *this,EMultiBufferMode *param_1,
          TFunction<void___cdecl(Chaos::FPBDRigidsSolver_const_*,Chaos::FCrumblingEventData_&,bool)>
          *param_2)

{
  EMultiBufferMode EVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  TEventContainer<Chaos::FCrumblingEventData> *pTVar5;
  FGuardedTripleBuffer<Chaos::FCrumblingEventData> *this_00;
  FTripleBuffer<Chaos::FCrumblingEventData> *pFVar6;
  FTripleBuffer<Chaos::FCrumblingEventData> *pFVar7;
  FDoubleBuffer<Chaos::FCrumblingEventData> *this_01;
  undefined8 *puVar8;
  longlong *plVar9;
  
  pFVar6 = (FTripleBuffer<Chaos::FCrumblingEventData> *)0x0;
  this->_padding_ = (longlong)&___7__TEventContainer_UFCrumblingEventData_Chaos___Chaos__6B_;
  lVar2 = *(longlong *)param_2;
  *(longlong *)&this->InjectedFunction = lVar2;
  *(undefined8 *)&(this->InjectedFunction).field_0x28 = 0;
  if (lVar2 != 0) {
    puVar8 = (undefined8 *)&param_2->field_0x10;
    if (*(undefined8 **)&param_2->field_0x28 != (undefined8 *)0x0) {
      puVar8 = *(undefined8 **)&param_2->field_0x28;
    }
    (**(code **)*puVar8)();
  }
  EVar1 = *param_1;
  if (EVar1 == Single) {
    pFVar7 = ::operator_new(0x80);
    if (pFVar7 != (FTripleBuffer<Chaos::FCrumblingEventData> *)0x0) {
      pFVar7->Data[0].CrumblingData.AllCrumblingsArray.AllocatorInstance.Data =
           (FScriptContainerElement *)0x0;
      pFVar7->_padding_ = (longlong)&___7__FSingleBuffer_UFCrumblingEventData_Chaos___Chaos__6B_;
      pFVar7->Data[0].CrumblingData._padding_ = -0x10000000000001;
      pFVar7->Data[0].PhysicsProxyToCrumblingIndices._padding_ = -0x10000000000001;
      pFVar7->Data[0].CrumblingData.AllCrumblingsArray.ArrayNum = 0;
      pFVar7->Data[0].CrumblingData.AllCrumblingsArray.ArrayMax = 0;
      pFVar7->Data[0].CrumblingData.bHasGlobalEvent = false;
      *(ResourceTypeWrapper **)
       &pFVar7->Data[0].PhysicsProxyToCrumblingIndices.PhysicsProxyToIndicesMap.field_0x10 =
           (ResourceTypeWrapper *)0x0;
      *(TAtomic<Chaos::FGuardedTripleBuffer<Chaos::FCrumblingEventData>::ResourceTypeWrapper_*> *)
       &pFVar7->Data[0].PhysicsProxyToCrumblingIndices.PhysicsProxyToIndicesMap.field_0x18 =
           (TAtomic<Chaos::FGuardedTripleBuffer<Chaos::FCrumblingEventData>::ResourceTypeWrapper_*>)
           0x0;
      *(undefined8 *)
       &pFVar7->Data[0].PhysicsProxyToCrumblingIndices.PhysicsProxyToIndicesMap.field_0x38 = 0;
      *(undefined8 *)
       &pFVar7->Data[0].PhysicsProxyToCrumblingIndices.PhysicsProxyToIndicesMap.field_0x48 = 0;
      *(undefined8 *)&pFVar7->Data[0].PhysicsProxyToCrumblingIndices.PhysicsProxyToIndicesMap = 0;
      *(ResourceTypeWrapper **)
       &pFVar7->Data[0].PhysicsProxyToCrumblingIndices.PhysicsProxyToIndicesMap.field_0x8 =
           (ResourceTypeWrapper *)0x0;
      *(undefined8 *)
       &pFVar7->Data[0].PhysicsProxyToCrumblingIndices.PhysicsProxyToIndicesMap.field_0x20 = 0;
      *(undefined4 *)
       &pFVar7->Data[0].PhysicsProxyToCrumblingIndices.PhysicsProxyToIndicesMap.field_0x28 = 0;
      *(undefined4 *)
       &pFVar7->Data[0].PhysicsProxyToCrumblingIndices.PhysicsProxyToIndicesMap.field_0x2c = 0x80;
      *(undefined4 *)
       &pFVar7->Data[0].PhysicsProxyToCrumblingIndices.PhysicsProxyToIndicesMap.field_0x30 =
           0xffffffff;
      *(undefined4 *)
       &pFVar7->Data[0].PhysicsProxyToCrumblingIndices.PhysicsProxyToIndicesMap.field_0x34 = 0;
      *(undefined8 *)
       &pFVar7->Data[0].PhysicsProxyToCrumblingIndices.PhysicsProxyToIndicesMap.field_0x40 = 0;
      pFVar6 = pFVar7;
    }
  }
  else if (EVar1 == Double) {
    this_01 = ::operator_new(0x108);
    if (this_01 != (FDoubleBuffer<Chaos::FCrumblingEventData> *)0x0) {
      pFVar6 = (FTripleBuffer<Chaos::FCrumblingEventData> *)
               FDoubleBuffer<Chaos::FCrumblingEventData>::FDoubleBuffer<Chaos::FCrumblingEventData>
                         (this_01);
    }
  }
  else if (EVar1 == Triple) {
    pFVar7 = ::operator_new(0x178);
    if (pFVar7 != (FTripleBuffer<Chaos::FCrumblingEventData> *)0x0) {
      pFVar6 = FTripleBuffer<Chaos::FCrumblingEventData>::FTripleBuffer<Chaos::FCrumblingEventData>
                         (pFVar7);
    }
  }
  else if (EVar1 == TripleGuarded) {
    this_00 = ::operator_new(0x50);
    if (this_00 != (FGuardedTripleBuffer<Chaos::FCrumblingEventData> *)0x0) {
      pFVar6 = (FTripleBuffer<Chaos::FCrumblingEventData> *)
               FGuardedTripleBuffer<Chaos::FCrumblingEventData>::
               FGuardedTripleBuffer<Chaos::FCrumblingEventData>(this_00);
    }
  }
  else {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Framework\\MultiBufferResource.h"
                       ,0x154,L"FMultiBufferFactory Unexpected buffer mode");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar5 = (TEventContainer<Chaos::FCrumblingEventData> *)(*pcVar3)();
      return pTVar5;
    }
  }
  (this->EventBuffer).Ptr = (IBufferResource<Chaos::FCrumblingEventData> *)pFVar6;
  *(undefined8 *)&this->ProxyOwnerToHandlerMap = 0;
  *(undefined8 *)&(this->ProxyOwnerToHandlerMap).field_0x8 = 0;
  *(undefined8 *)&(this->ProxyOwnerToHandlerMap).field_0x20 = 0;
  *(undefined4 *)&(this->ProxyOwnerToHandlerMap).field_0x28 = 0;
  *(undefined4 *)&(this->ProxyOwnerToHandlerMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->ProxyOwnerToHandlerMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ProxyOwnerToHandlerMap).field_0x34 = 0;
  *(undefined8 *)&(this->ProxyOwnerToHandlerMap).field_0x40 = 0;
  *(undefined4 *)&(this->ProxyOwnerToHandlerMap).field_0x48 = 0;
  *(undefined8 *)&this->HandlersNotInProxyOwnerMap = 0;
  *(undefined8 *)&(this->HandlersNotInProxyOwnerMap).field_0x8 = 0;
  *(undefined8 *)&(this->HandlersNotInProxyOwnerMap).field_0x20 = 0;
  *(undefined4 *)&(this->HandlersNotInProxyOwnerMap).field_0x28 = 0;
  *(undefined4 *)&(this->HandlersNotInProxyOwnerMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->HandlersNotInProxyOwnerMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->HandlersNotInProxyOwnerMap).field_0x34 = 0;
  *(undefined8 *)&(this->HandlersNotInProxyOwnerMap).field_0x40 = 0;
  *(undefined4 *)&(this->HandlersNotInProxyOwnerMap).field_0x48 = 0;
  *(undefined8 *)&this->HandlerMap = 0;
  *(undefined8 *)&(this->HandlerMap).field_0x8 = 0;
  *(undefined8 *)&(this->HandlerMap).field_0x20 = 0;
  *(undefined4 *)&(this->HandlerMap).field_0x28 = 0;
  *(undefined4 *)&(this->HandlerMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->HandlerMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->HandlerMap).field_0x34 = 0;
  *(undefined8 *)&(this->HandlerMap).field_0x40 = 0;
  *(undefined4 *)&(this->HandlerMap).field_0x48 = 0;
  (this->HandlerLock).Mutex.Mutex.Ptr = (void *)0x0;
  (this->DeferredHandlers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DeferredHandlers).ArrayNum = 0;
  (this->DeferredHandlers).ArrayMax = 0;
  (this->DeferredUnregisterHandlers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DeferredUnregisterHandlers).ArrayNum = 0;
  (this->DeferredUnregisterHandlers).ArrayMax = 0;
  (this->DeferredHandlerLock).Mutex.Mutex.Ptr = (void *)0x0;
  this->bDispatchInProgress = false;
  if (*(longlong *)param_2 != 0) {
    plVar9 = (longlong *)&param_2->field_0x10;
    if (*(longlong **)&param_2->field_0x28 != (longlong *)0x0) {
      plVar9 = *(longlong **)&param_2->field_0x28;
    }
    (**(code **)(*plVar9 + 0x10))();
  }
  return this;
}

// TEventContainer<Chaos::FRemovalEventData> @ 143f42010

TEventContainer<Chaos::FRemovalEventData> * __thiscall
Chaos::TEventContainer<Chaos::FRemovalEventData>::TEventContainer<Chaos::FRemovalEventData>
          (TEventContainer<Chaos::FRemovalEventData> *this,EMultiBufferMode *param_1,
          TFunction<void___cdecl(Chaos::FPBDRigidsSolver_const_*,Chaos::FRemovalEventData_&,bool)>
          *param_2)

{
  EMultiBufferMode EVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  TEventContainer<Chaos::FRemovalEventData> *pTVar5;
  FGuardedTripleBuffer<Chaos::FRemovalEventData> *this_00;
  FTripleBuffer<Chaos::FRemovalEventData> *pFVar6;
  FTripleBuffer<Chaos::FRemovalEventData> *pFVar7;
  FDoubleBuffer<Chaos::FRemovalEventData> *this_01;
  undefined8 *puVar8;
  longlong *plVar9;
  
  pFVar6 = (FTripleBuffer<Chaos::FRemovalEventData> *)0x0;
  this->_padding_ = (longlong)&___7__TEventContainer_UFRemovalEventData_Chaos___Chaos__6B_;
  lVar2 = *(longlong *)param_2;
  *(longlong *)&this->InjectedFunction = lVar2;
  *(undefined8 *)&(this->InjectedFunction).field_0x28 = 0;
  if (lVar2 != 0) {
    puVar8 = (undefined8 *)&param_2->field_0x10;
    if (*(undefined8 **)&param_2->field_0x28 != (undefined8 *)0x0) {
      puVar8 = *(undefined8 **)&param_2->field_0x28;
    }
    (**(code **)*puVar8)();
  }
  EVar1 = *param_1;
  if (EVar1 == Single) {
    pFVar7 = ::operator_new(0x78);
    if (pFVar7 != (FTripleBuffer<Chaos::FRemovalEventData> *)0x0) {
      pFVar7->Data[0].RemovalData.AllRemovalArray.AllocatorInstance.Data =
           (FScriptContainerElement *)0x0;
      pFVar7->_padding_ = (longlong)&___7__FSingleBuffer_UFRemovalEventData_Chaos___Chaos__6B_;
      pFVar7->Data[0].PhysicsProxyToRemovalIndices._padding_ = -0x10000000000001;
      pFVar7->Data[0].RemovalData.AllRemovalArray.ArrayNum = 0;
      pFVar7->Data[0].RemovalData.AllRemovalArray.ArrayMax = 0;
      pFVar7->Data[0].RemovalData._padding_ = -0x10000000000001;
      *(ResourceTypeWrapper **)
       &pFVar7->Data[0].PhysicsProxyToRemovalIndices.PhysicsProxyToIndicesMap.field_0x10 =
           (ResourceTypeWrapper *)0x0;
      *(ResourceTypeWrapper **)
       &pFVar7->Data[0].PhysicsProxyToRemovalIndices.PhysicsProxyToIndicesMap.field_0x18 =
           (ResourceTypeWrapper *)0x0;
      *(undefined8 *)
       &pFVar7->Data[0].PhysicsProxyToRemovalIndices.PhysicsProxyToIndicesMap.field_0x38 = 0;
      *(undefined8 *)
       &pFVar7->Data[0].PhysicsProxyToRemovalIndices.PhysicsProxyToIndicesMap.field_0x48 = 0;
      *(undefined8 *)&pFVar7->Data[0].PhysicsProxyToRemovalIndices.PhysicsProxyToIndicesMap = 0;
      *(undefined8 *)
       &pFVar7->Data[0].PhysicsProxyToRemovalIndices.PhysicsProxyToIndicesMap.field_0x8 = 0;
      *(TAtomic<Chaos::FGuardedTripleBuffer<Chaos::FRemovalEventData>::ResourceTypeWrapper_*> *)
       &pFVar7->Data[0].PhysicsProxyToRemovalIndices.PhysicsProxyToIndicesMap.field_0x20 =
           (TAtomic<Chaos::FGuardedTripleBuffer<Chaos::FRemovalEventData>::ResourceTypeWrapper_*>)
           0x0;
      *(undefined4 *)
       &pFVar7->Data[0].PhysicsProxyToRemovalIndices.PhysicsProxyToIndicesMap.field_0x28 = 0;
      *(undefined4 *)
       &pFVar7->Data[0].PhysicsProxyToRemovalIndices.PhysicsProxyToIndicesMap.field_0x2c = 0x80;
      *(undefined4 *)
       &pFVar7->Data[0].PhysicsProxyToRemovalIndices.PhysicsProxyToIndicesMap.field_0x30 =
           0xffffffff;
      *(undefined4 *)
       &pFVar7->Data[0].PhysicsProxyToRemovalIndices.PhysicsProxyToIndicesMap.field_0x34 = 0;
      *(undefined8 *)
       &pFVar7->Data[0].PhysicsProxyToRemovalIndices.PhysicsProxyToIndicesMap.field_0x40 = 0;
      pFVar6 = pFVar7;
    }
  }
  else if (EVar1 == Double) {
    this_01 = ::operator_new(0xf8);
    if (this_01 != (FDoubleBuffer<Chaos::FRemovalEventData> *)0x0) {
      pFVar6 = (FTripleBuffer<Chaos::FRemovalEventData> *)
               FDoubleBuffer<Chaos::FRemovalEventData>::FDoubleBuffer<Chaos::FRemovalEventData>
                         (this_01);
    }
  }
  else if (EVar1 == Triple) {
    pFVar7 = ::operator_new(0x160);
    if (pFVar7 != (FTripleBuffer<Chaos::FRemovalEventData> *)0x0) {
      pFVar6 = FTripleBuffer<Chaos::FRemovalEventData>::FTripleBuffer<Chaos::FRemovalEventData>
                         (pFVar7);
    }
  }
  else if (EVar1 == TripleGuarded) {
    this_00 = ::operator_new(0x50);
    if (this_00 != (FGuardedTripleBuffer<Chaos::FRemovalEventData> *)0x0) {
      pFVar6 = (FTripleBuffer<Chaos::FRemovalEventData> *)
               FGuardedTripleBuffer<Chaos::FRemovalEventData>::
               FGuardedTripleBuffer<Chaos::FRemovalEventData>(this_00);
    }
  }
  else {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Framework\\MultiBufferResource.h"
                       ,0x154,L"FMultiBufferFactory Unexpected buffer mode");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar5 = (TEventContainer<Chaos::FRemovalEventData> *)(*pcVar3)();
      return pTVar5;
    }
  }
  (this->EventBuffer).Ptr = (IBufferResource<Chaos::FRemovalEventData> *)pFVar6;
  *(undefined8 *)&this->ProxyOwnerToHandlerMap = 0;
  *(undefined8 *)&(this->ProxyOwnerToHandlerMap).field_0x8 = 0;
  *(undefined8 *)&(this->ProxyOwnerToHandlerMap).field_0x20 = 0;
  *(undefined4 *)&(this->ProxyOwnerToHandlerMap).field_0x28 = 0;
  *(undefined4 *)&(this->ProxyOwnerToHandlerMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->ProxyOwnerToHandlerMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ProxyOwnerToHandlerMap).field_0x34 = 0;
  *(undefined8 *)&(this->ProxyOwnerToHandlerMap).field_0x40 = 0;
  *(undefined4 *)&(this->ProxyOwnerToHandlerMap).field_0x48 = 0;
  *(undefined8 *)&this->HandlersNotInProxyOwnerMap = 0;
  *(undefined8 *)&(this->HandlersNotInProxyOwnerMap).field_0x8 = 0;
  *(undefined8 *)&(this->HandlersNotInProxyOwnerMap).field_0x20 = 0;
  *(undefined4 *)&(this->HandlersNotInProxyOwnerMap).field_0x28 = 0;
  *(undefined4 *)&(this->HandlersNotInProxyOwnerMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->HandlersNotInProxyOwnerMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->HandlersNotInProxyOwnerMap).field_0x34 = 0;
  *(undefined8 *)&(this->HandlersNotInProxyOwnerMap).field_0x40 = 0;
  *(undefined4 *)&(this->HandlersNotInProxyOwnerMap).field_0x48 = 0;
  *(undefined8 *)&this->HandlerMap = 0;
  *(undefined8 *)&(this->HandlerMap).field_0x8 = 0;
  *(undefined8 *)&(this->HandlerMap).field_0x20 = 0;
  *(undefined4 *)&(this->HandlerMap).field_0x28 = 0;
  *(undefined4 *)&(this->HandlerMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->HandlerMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->HandlerMap).field_0x34 = 0;
  *(undefined8 *)&(this->HandlerMap).field_0x40 = 0;
  *(undefined4 *)&(this->HandlerMap).field_0x48 = 0;
  (this->HandlerLock).Mutex.Mutex.Ptr = (void *)0x0;
  (this->DeferredHandlers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DeferredHandlers).ArrayNum = 0;
  (this->DeferredHandlers).ArrayMax = 0;
  (this->DeferredUnregisterHandlers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DeferredUnregisterHandlers).ArrayNum = 0;
  (this->DeferredUnregisterHandlers).ArrayMax = 0;
  (this->DeferredHandlerLock).Mutex.Mutex.Ptr = (void *)0x0;
  this->bDispatchInProgress = false;
  if (*(longlong *)param_2 != 0) {
    plVar9 = (longlong *)&param_2->field_0x10;
    if (*(longlong **)&param_2->field_0x28 != (longlong *)0x0) {
      plVar9 = *(longlong **)&param_2->field_0x28;
    }
    (**(code **)(*plVar9 + 0x10))();
  }
  return this;
}

// TEventContainer<Chaos::FSleepingEventData> @ 143f42290

TEventContainer<Chaos::FSleepingEventData> * __thiscall
Chaos::TEventContainer<Chaos::FSleepingEventData>::TEventContainer<Chaos::FSleepingEventData>
          (TEventContainer<Chaos::FSleepingEventData> *this,EMultiBufferMode *param_1,
          TFunction<void___cdecl(Chaos::FPBDRigidsSolver_const_*,Chaos::FSleepingEventData_&,bool)>
          *param_2)

{
  EMultiBufferMode EVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  TEventContainer<Chaos::FSleepingEventData> *pTVar5;
  FGuardedTripleBuffer<Chaos::FSleepingEventData> *pFVar6;
  FGuardedTripleBuffer<Chaos::FSleepingEventData> *pFVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  
  pFVar7 = (FGuardedTripleBuffer<Chaos::FSleepingEventData> *)0x0;
  this->_padding_ = (longlong)&___7__TEventContainer_UFSleepingEventData_Chaos___Chaos__6B_;
  lVar2 = *(longlong *)param_2;
  *(longlong *)&this->InjectedFunction = lVar2;
  *(undefined8 *)&(this->InjectedFunction).field_0x28 = 0;
  if (lVar2 != 0) {
    puVar8 = (undefined8 *)&param_2->field_0x10;
    if (*(undefined8 **)&param_2->field_0x28 != (undefined8 *)0x0) {
      puVar8 = *(undefined8 **)&param_2->field_0x28;
    }
    (**(code **)*puVar8)();
  }
  EVar1 = *param_1;
  if (EVar1 == Single) {
    pFVar6 = ::operator_new(0x18);
    if (pFVar6 != (FGuardedTripleBuffer<Chaos::FSleepingEventData> *)0x0) {
      pFVar6->Buffers[0].Value.Ptr = (FSleepingEventData *)0x0;
      pFVar6->_padding_ = (longlong)&___7__FSingleBuffer_UFSleepingEventData_Chaos___Chaos__6B_;
      *(undefined8 *)&pFVar6->Buffers[0].bValid = 0;
      pFVar7 = pFVar6;
    }
  }
  else if (EVar1 == Double) {
    pFVar6 = ::operator_new(0x38);
    if (pFVar6 != (FGuardedTripleBuffer<Chaos::FSleepingEventData> *)0x0) {
      pFVar6->Buffers[1].Value.Ptr = (FSleepingEventData *)0x0;
      *(undefined8 *)&pFVar6->Buffers[1].bValid = 0;
      pFVar6->_padding_ = (longlong)&___7__FDoubleBuffer_UFSleepingEventData_Chaos___Chaos__6B_;
      *(ResourceTypeWrapper **)&pFVar6->Buffers[2].bValid = pFVar6->Buffers + 1;
      pFVar6->Buffers[0].Value.Ptr = (FSleepingEventData *)0x0;
      *(undefined8 *)&pFVar6->Buffers[0].bValid = 0;
      pFVar6->Buffers[2].Value.Ptr = (FSleepingEventData *)pFVar6->Buffers;
      pFVar7 = pFVar6;
    }
  }
  else if (EVar1 == Triple) {
    pFVar6 = ::operator_new(0x40);
    if (pFVar6 != (FGuardedTripleBuffer<Chaos::FSleepingEventData> *)0x0) {
      pFVar6->_padding_ = (longlong)&___7__FTripleBuffer_UFSleepingEventData_Chaos___Chaos__6B_;
      pFVar6->Buffers[0].Value.Ptr = (FSleepingEventData *)0x0;
      *(undefined8 *)&pFVar6->Buffers[0].bValid = 0;
      pFVar6->Buffers[1].Value.Ptr = (FSleepingEventData *)0x0;
      *(undefined8 *)&pFVar6->Buffers[1].bValid = 0;
      pFVar6->Buffers[2].Value.Ptr = (FSleepingEventData *)0x0;
      *(undefined8 *)&pFVar6->Buffers[2].bValid = 0;
      pFVar6->ProducerThreadBuffer = (ResourceTypeWrapper *)&DAT_00000001;
      pFVar7 = pFVar6;
    }
  }
  else if (EVar1 == TripleGuarded) {
    pFVar6 = ::operator_new(0x50);
    if (pFVar6 != (FGuardedTripleBuffer<Chaos::FSleepingEventData> *)0x0) {
      pFVar7 = FGuardedTripleBuffer<Chaos::FSleepingEventData>::
               FGuardedTripleBuffer<Chaos::FSleepingEventData>(pFVar6);
    }
  }
  else {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Framework\\MultiBufferResource.h"
                       ,0x154,L"FMultiBufferFactory Unexpected buffer mode");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar5 = (TEventContainer<Chaos::FSleepingEventData> *)(*pcVar3)();
      return pTVar5;
    }
  }
  (this->EventBuffer).Ptr = (IBufferResource<Chaos::FSleepingEventData> *)pFVar7;
  *(undefined8 *)&this->ProxyOwnerToHandlerMap = 0;
  *(undefined8 *)&(this->ProxyOwnerToHandlerMap).field_0x8 = 0;
  *(undefined8 *)&(this->ProxyOwnerToHandlerMap).field_0x20 = 0;
  *(undefined4 *)&(this->ProxyOwnerToHandlerMap).field_0x28 = 0;
  *(undefined4 *)&(this->ProxyOwnerToHandlerMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->ProxyOwnerToHandlerMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ProxyOwnerToHandlerMap).field_0x34 = 0;
  *(undefined8 *)&(this->ProxyOwnerToHandlerMap).field_0x40 = 0;
  *(undefined4 *)&(this->ProxyOwnerToHandlerMap).field_0x48 = 0;
  *(undefined8 *)&this->HandlersNotInProxyOwnerMap = 0;
  *(undefined8 *)&(this->HandlersNotInProxyOwnerMap).field_0x8 = 0;
  *(undefined8 *)&(this->HandlersNotInProxyOwnerMap).field_0x20 = 0;
  *(undefined4 *)&(this->HandlersNotInProxyOwnerMap).field_0x28 = 0;
  *(undefined4 *)&(this->HandlersNotInProxyOwnerMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->HandlersNotInProxyOwnerMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->HandlersNotInProxyOwnerMap).field_0x34 = 0;
  *(undefined8 *)&(this->HandlersNotInProxyOwnerMap).field_0x40 = 0;
  *(undefined4 *)&(this->HandlersNotInProxyOwnerMap).field_0x48 = 0;
  *(undefined8 *)&this->HandlerMap = 0;
  *(undefined8 *)&(this->HandlerMap).field_0x8 = 0;
  *(undefined8 *)&(this->HandlerMap).field_0x20 = 0;
  *(undefined4 *)&(this->HandlerMap).field_0x28 = 0;
  *(undefined4 *)&(this->HandlerMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->HandlerMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->HandlerMap).field_0x34 = 0;
  *(undefined8 *)&(this->HandlerMap).field_0x40 = 0;
  *(undefined4 *)&(this->HandlerMap).field_0x48 = 0;
  (this->HandlerLock).Mutex.Mutex.Ptr = (void *)0x0;
  (this->DeferredHandlers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DeferredHandlers).ArrayNum = 0;
  (this->DeferredHandlers).ArrayMax = 0;
  (this->DeferredUnregisterHandlers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DeferredUnregisterHandlers).ArrayNum = 0;
  (this->DeferredUnregisterHandlers).ArrayMax = 0;
  (this->DeferredHandlerLock).Mutex.Mutex.Ptr = (void *)0x0;
  this->bDispatchInProgress = false;
  if (*(longlong *)param_2 != 0) {
    plVar9 = (longlong *)&param_2->field_0x10;
    if (*(longlong **)&param_2->field_0x28 != (longlong *)0x0) {
      plVar9 = *(longlong **)&param_2->field_0x28;
    }
    (**(code **)(*plVar9 + 0x10))();
  }
  return this;
}

// TEventContainer<Chaos::FTrailingEventData> @ 143f42520

TEventContainer<Chaos::FTrailingEventData> * __thiscall
Chaos::TEventContainer<Chaos::FTrailingEventData>::TEventContainer<Chaos::FTrailingEventData>
          (TEventContainer<Chaos::FTrailingEventData> *this,EMultiBufferMode *param_1,
          TFunction<void___cdecl(Chaos::FPBDRigidsSolver_const_*,Chaos::FTrailingEventData_&,bool)>
          *param_2)

{
  EMultiBufferMode EVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  TEventContainer<Chaos::FTrailingEventData> *pTVar5;
  FGuardedTripleBuffer<Chaos::FTrailingEventData> *this_00;
  FTripleBuffer<Chaos::FTrailingEventData> *pFVar6;
  FTripleBuffer<Chaos::FTrailingEventData> *pFVar7;
  FDoubleBuffer<Chaos::FTrailingEventData> *this_01;
  undefined8 *puVar8;
  longlong *plVar9;
  
  pFVar6 = (FTripleBuffer<Chaos::FTrailingEventData> *)0x0;
  this->_padding_ = (longlong)&___7__TEventContainer_UFTrailingEventData_Chaos___Chaos__6B_;
  lVar2 = *(longlong *)param_2;
  *(longlong *)&this->InjectedFunction = lVar2;
  *(undefined8 *)&(this->InjectedFunction).field_0x28 = 0;
  if (lVar2 != 0) {
    puVar8 = (undefined8 *)&param_2->field_0x10;
    if (*(undefined8 **)&param_2->field_0x28 != (undefined8 *)0x0) {
      puVar8 = *(undefined8 **)&param_2->field_0x28;
    }
    (**(code **)*puVar8)();
  }
  EVar1 = *param_1;
  if (EVar1 == Single) {
    pFVar7 = ::operator_new(0x78);
    if (pFVar7 != (FTripleBuffer<Chaos::FTrailingEventData> *)0x0) {
      pFVar7->Data[0].TrailingData.AllTrailingsArray.AllocatorInstance.Data =
           (FScriptContainerElement *)0x0;
      pFVar7->_padding_ = (longlong)&___7__FSingleBuffer_UFTrailingEventData_Chaos___Chaos__6B_;
      pFVar7->Data[0].PhysicsProxyToTrailingIndices._padding_ = -0x10000000000001;
      pFVar7->Data[0].TrailingData.AllTrailingsArray.ArrayNum = 0;
      pFVar7->Data[0].TrailingData.AllTrailingsArray.ArrayMax = 0;
      pFVar7->Data[0].TrailingData._padding_ = -0x10000000000001;
      *(ResourceTypeWrapper **)
       &pFVar7->Data[0].PhysicsProxyToTrailingIndices.PhysicsProxyToIndicesMap.field_0x10 =
           (ResourceTypeWrapper *)0x0;
      *(ResourceTypeWrapper **)
       &pFVar7->Data[0].PhysicsProxyToTrailingIndices.PhysicsProxyToIndicesMap.field_0x18 =
           (ResourceTypeWrapper *)0x0;
      *(undefined8 *)
       &pFVar7->Data[0].PhysicsProxyToTrailingIndices.PhysicsProxyToIndicesMap.field_0x38 = 0;
      *(undefined8 *)
       &pFVar7->Data[0].PhysicsProxyToTrailingIndices.PhysicsProxyToIndicesMap.field_0x48 = 0;
      *(undefined8 *)&pFVar7->Data[0].PhysicsProxyToTrailingIndices.PhysicsProxyToIndicesMap = 0;
      *(undefined8 *)
       &pFVar7->Data[0].PhysicsProxyToTrailingIndices.PhysicsProxyToIndicesMap.field_0x8 = 0;
      *(TAtomic<Chaos::FGuardedTripleBuffer<Chaos::FTrailingEventData>::ResourceTypeWrapper_*> *)
       &pFVar7->Data[0].PhysicsProxyToTrailingIndices.PhysicsProxyToIndicesMap.field_0x20 =
           (TAtomic<Chaos::FGuardedTripleBuffer<Chaos::FTrailingEventData>::ResourceTypeWrapper_*>)
           0x0;
      *(undefined4 *)
       &pFVar7->Data[0].PhysicsProxyToTrailingIndices.PhysicsProxyToIndicesMap.field_0x28 = 0;
      *(undefined4 *)
       &pFVar7->Data[0].PhysicsProxyToTrailingIndices.PhysicsProxyToIndicesMap.field_0x2c = 0x80;
      *(undefined4 *)
       &pFVar7->Data[0].PhysicsProxyToTrailingIndices.PhysicsProxyToIndicesMap.field_0x30 =
           0xffffffff;
      *(undefined4 *)
       &pFVar7->Data[0].PhysicsProxyToTrailingIndices.PhysicsProxyToIndicesMap.field_0x34 = 0;
      *(undefined8 *)
       &pFVar7->Data[0].PhysicsProxyToTrailingIndices.PhysicsProxyToIndicesMap.field_0x40 = 0;
      pFVar6 = pFVar7;
    }
  }
  else if (EVar1 == Double) {
    this_01 = ::operator_new(0xf8);
    if (this_01 != (FDoubleBuffer<Chaos::FTrailingEventData> *)0x0) {
      pFVar6 = (FTripleBuffer<Chaos::FTrailingEventData> *)
               FDoubleBuffer<Chaos::FTrailingEventData>::FDoubleBuffer<Chaos::FTrailingEventData>
                         (this_01);
    }
  }
  else if (EVar1 == Triple) {
    pFVar7 = ::operator_new(0x160);
    if (pFVar7 != (FTripleBuffer<Chaos::FTrailingEventData> *)0x0) {
      pFVar6 = FTripleBuffer<Chaos::FTrailingEventData>::FTripleBuffer<Chaos::FTrailingEventData>
                         (pFVar7);
    }
  }
  else if (EVar1 == TripleGuarded) {
    this_00 = ::operator_new(0x50);
    if (this_00 != (FGuardedTripleBuffer<Chaos::FTrailingEventData> *)0x0) {
      pFVar6 = (FTripleBuffer<Chaos::FTrailingEventData> *)
               FGuardedTripleBuffer<Chaos::FTrailingEventData>::
               FGuardedTripleBuffer<Chaos::FTrailingEventData>(this_00);
    }
  }
  else {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Framework\\MultiBufferResource.h"
                       ,0x154,L"FMultiBufferFactory Unexpected buffer mode");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar5 = (TEventContainer<Chaos::FTrailingEventData> *)(*pcVar3)();
      return pTVar5;
    }
  }
  (this->EventBuffer).Ptr = (IBufferResource<Chaos::FTrailingEventData> *)pFVar6;
  *(undefined8 *)&this->ProxyOwnerToHandlerMap = 0;
  *(undefined8 *)&(this->ProxyOwnerToHandlerMap).field_0x8 = 0;
  *(undefined8 *)&(this->ProxyOwnerToHandlerMap).field_0x20 = 0;
  *(undefined4 *)&(this->ProxyOwnerToHandlerMap).field_0x28 = 0;
  *(undefined4 *)&(this->ProxyOwnerToHandlerMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->ProxyOwnerToHandlerMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ProxyOwnerToHandlerMap).field_0x34 = 0;
  *(undefined8 *)&(this->ProxyOwnerToHandlerMap).field_0x40 = 0;
  *(undefined4 *)&(this->ProxyOwnerToHandlerMap).field_0x48 = 0;
  *(undefined8 *)&this->HandlersNotInProxyOwnerMap = 0;
  *(undefined8 *)&(this->HandlersNotInProxyOwnerMap).field_0x8 = 0;
  *(undefined8 *)&(this->HandlersNotInProxyOwnerMap).field_0x20 = 0;
  *(undefined4 *)&(this->HandlersNotInProxyOwnerMap).field_0x28 = 0;
  *(undefined4 *)&(this->HandlersNotInProxyOwnerMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->HandlersNotInProxyOwnerMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->HandlersNotInProxyOwnerMap).field_0x34 = 0;
  *(undefined8 *)&(this->HandlersNotInProxyOwnerMap).field_0x40 = 0;
  *(undefined4 *)&(this->HandlersNotInProxyOwnerMap).field_0x48 = 0;
  *(undefined8 *)&this->HandlerMap = 0;
  *(undefined8 *)&(this->HandlerMap).field_0x8 = 0;
  *(undefined8 *)&(this->HandlerMap).field_0x20 = 0;
  *(undefined4 *)&(this->HandlerMap).field_0x28 = 0;
  *(undefined4 *)&(this->HandlerMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->HandlerMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->HandlerMap).field_0x34 = 0;
  *(undefined8 *)&(this->HandlerMap).field_0x40 = 0;
  *(undefined4 *)&(this->HandlerMap).field_0x48 = 0;
  (this->HandlerLock).Mutex.Mutex.Ptr = (void *)0x0;
  (this->DeferredHandlers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DeferredHandlers).ArrayNum = 0;
  (this->DeferredHandlers).ArrayMax = 0;
  (this->DeferredUnregisterHandlers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DeferredUnregisterHandlers).ArrayNum = 0;
  (this->DeferredUnregisterHandlers).ArrayMax = 0;
  (this->DeferredHandlerLock).Mutex.Mutex.Ptr = (void *)0x0;
  this->bDispatchInProgress = false;
  if (*(longlong *)param_2 != 0) {
    plVar9 = (longlong *)&param_2->field_0x10;
    if (*(longlong **)&param_2->field_0x28 != (longlong *)0x0) {
      plVar9 = *(longlong **)&param_2->field_0x28;
    }
    (**(code **)(*plVar9 + 0x10))();
  }
  return this;
}

// ~TEventContainer<Chaos::FBreakingEventData> @ 143f49160

void __thiscall
Chaos::TEventContainer<Chaos::FBreakingEventData>::~TEventContainer<Chaos::FBreakingEventData>
          (TEventContainer<Chaos::FBreakingEventData> *this)

{
  undefined1 *puVar1;
  FPlatformRWLock *SRWLock;
  ulonglong uVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *puVar5;
  FScriptContainerElement *pFVar6;
  void *pvVar7;
  IBufferResource<Chaos::FBreakingEventData> *pIVar8;
  longlong *plVar9;
  code *pcVar10;
  bool bVar11;
  BOOLEAN BVar12;
  uint uVar13;
  int iVar14;
  longlong lVar15;
  longlong *plVar16;
  int iVar17;
  undefined1 *puVar18;
  int iVar19;
  uint *puVar20;
  uint uVar21;
  uint uVar22;
  undefined1 local_res8 [8];
  int local_res10;
  int local_res18;
  undefined4 local_9c;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  this->_padding_ = (longlong)&___7__TEventContainer_UFBreakingEventData_Chaos___Chaos__6B_;
  if ((&this->HandlerLock == (FPlatformRWLock *)0x0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("Mutex",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                          ,0x43,L""), bVar11)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  AcquireSRWLockExclusive((PSRWLOCK)&this->HandlerLock);
  puVar1 = &(this->HandlerMap).field_0x10;
  iVar17 = 0;
  iVar3 = *(int *)&(this->HandlerMap).field_0x28;
  iVar19 = 0;
  uVar13 = 1;
  iVar14 = 0;
  if (iVar3 != 0) {
    puVar20 = *(uint **)&(this->HandlerMap).field_0x20;
    if (puVar20 == (uint *)0x0) {
      puVar20 = (uint *)puVar1;
    }
    uVar21 = *puVar20;
    while (uVar21 == 0) {
      lVar15 = (longlong)iVar17;
      iVar19 = iVar19 + 0x20;
      iVar17 = iVar17 + 1;
      iVar14 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar17) goto LAB_143f49250;
      uVar21 = puVar20[lVar15 + 1];
    }
    uVar13 = -uVar21 & uVar21;
    uVar2 = (ulonglong)uVar13 * 2 + 1;
    lVar15 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    local_res10 = (int)lVar15;
    iVar14 = iVar19 + -1 + local_res10;
    if (iVar3 < iVar14) {
      iVar14 = iVar3;
    }
  }
LAB_143f49250:
  uVar21 = *(uint *)&(this->HandlerMap).field_0x28;
  uVar22 = uVar21 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar13,iVar17);
  TStack_60.CurrentBitIndex = iVar14;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar17 = (int)uVar21 >> 5;
  TStack_60._28_4_ = local_9c;
  TStack_60.BaseBitIndex = iVar19;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(this->HandlerMap).field_0x8 -
                       *(int *)&(this->HandlerMap).field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar21 < 0) || (iVar3 < (int)uVar21)) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar11)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  uVar13 = *(uint *)&(this->HandlerMap).field_0x28;
  if (uVar21 != uVar13) {
    puVar18 = *(undefined1 **)&(this->HandlerMap).field_0x20;
    if (puVar18 == (undefined1 *)0x0) {
      puVar18 = puVar1;
    }
    uVar21 = -1 << ((byte)uVar21 & 0x1f) & *(uint *)(puVar18 + (longlong)iVar17 * 4);
    while (uVar21 == 0) {
      lVar15 = (longlong)iVar17;
      uVar22 = uVar22 + 0x20;
      iVar17 = iVar17 + 1;
      uVar21 = uVar13;
      if ((int)((uVar13 - 1) + ((int)(uVar13 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar17)
      goto LAB_143f49370;
      uVar21 = *(uint *)(puVar18 + lVar15 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar21 & uVar21) * 2 + 1;
    lVar15 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    local_res18 = (int)lVar15;
    uVar21 = local_res18 + -1 + uVar22;
    if ((int)uVar13 < (int)uVar21) {
      uVar21 = uVar13;
    }
  }
LAB_143f49370:
  while( true ) {
    if (*(int *)&(this->HandlerMap).field_0x8 - *(int *)&(this->HandlerMap).field_0x34 !=
        (int)uStack_40) {
      local_res8[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<void_*,Chaos::IEventHandler_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    lVar15 = (longlong)TStack_60.CurrentBitIndex;
    if ((TStack_60.CurrentBitIndex == uVar21) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    lVar4 = *(longlong *)&this->HandlerMap;
    puVar5 = *(undefined8 **)(lVar4 + 8 + lVar15 * 0x18);
    if (puVar5 != (undefined8 *)0x0) {
      (**(code **)*puVar5)(puVar5,1);
    }
    *(undefined8 *)(lVar4 + lVar15 * 0x18 + 8) = 0;
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  SRWLock = &this->HandlerLock;
  if (SRWLock != (FPlatformRWLock *)0x0) {
    ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
  }
  BVar12 = TryAcquireSRWLockExclusive((PSRWLOCK)&this->DeferredHandlerLock);
  if (BVar12 == '\0') {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("!IsLocked()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Windows\\WindowsPlatformMutex.h"
                        ,0x48,L"Destroying a lock that is still held!");
    if (bVar11) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
  }
  else {
    ReleaseSRWLockExclusive((PSRWLOCK)&this->DeferredHandlerLock);
  }
  pFVar6 = (this->DeferredUnregisterHandlers).AllocatorInstance.Data;
  if (pFVar6 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar6);
  }
  pFVar6 = (this->DeferredHandlers).AllocatorInstance.Data;
  if (pFVar6 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar6);
  }
  BVar12 = TryAcquireSRWLockExclusive((PSRWLOCK)SRWLock);
  if (BVar12 == '\0') {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("!IsLocked()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Windows\\WindowsPlatformMutex.h"
                        ,0x48,L"Destroying a lock that is still held!");
    if (bVar11) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
  }
  else {
    ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
  }
  *(undefined4 *)&(this->HandlerMap).field_0x48 = 0;
  pvVar7 = *(void **)&(this->HandlerMap).field_0x40;
  if (pvVar7 != (void *)0x0) {
    FMemory::Free(pvVar7);
  }
  TSparseArray<TSparseSetElement<TTuple<void_*,Chaos::IEventHandler_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<void_*,Chaos::IEventHandler_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<void_*,Chaos::IEventHandler_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->HandlerMap);
  *(undefined4 *)&(this->HandlersNotInProxyOwnerMap).field_0x48 = 0;
  pvVar7 = *(void **)&(this->HandlersNotInProxyOwnerMap).field_0x40;
  if (pvVar7 != (void *)0x0) {
    FMemory::Free(pvVar7);
  }
  TSparseArray<TSparseSetElement<TTuple<void_*,Chaos::IEventHandler_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<void_*,Chaos::IEventHandler_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<void_*,Chaos::IEventHandler_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->HandlersNotInProxyOwnerMap);
  *(undefined4 *)&(this->ProxyOwnerToHandlerMap).field_0x48 = 0;
  pvVar7 = *(void **)&(this->ProxyOwnerToHandlerMap).field_0x40;
  if (pvVar7 != (void *)0x0) {
    FMemory::Free(pvVar7);
  }
  TSparseArray<TSparseSetElement<TTuple<UObject_*,Chaos::IEventHandler_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UObject_*,Chaos::IEventHandler_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UObject_*,Chaos::IEventHandler_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ProxyOwnerToHandlerMap);
  pIVar8 = (this->EventBuffer).Ptr;
  if (pIVar8 != (IBufferResource<Chaos::FBreakingEventData> *)0x0) {
    (**(code **)*pIVar8)(pIVar8,1);
  }
  if (*(longlong *)&this->InjectedFunction != 0) {
    plVar9 = *(longlong **)&(this->InjectedFunction).field_0x28;
    plVar16 = (longlong *)&(this->InjectedFunction).field_0x10;
    if (plVar9 != (longlong *)0x0) {
      plVar16 = plVar9;
    }
    (**(code **)(*plVar16 + 0x10))();
  }
  this->_padding_ = (longlong)&___7FEventContainerBase_Chaos__6B_;
  return;
}

// ~TEventContainer<Chaos::FCollisionEventData> @ 143f49560

void __thiscall
Chaos::TEventContainer<Chaos::FCollisionEventData>::~TEventContainer<Chaos::FCollisionEventData>
          (TEventContainer<Chaos::FCollisionEventData> *this)

{
  undefined1 *puVar1;
  FPlatformRWLock *SRWLock;
  ulonglong uVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *puVar5;
  FScriptContainerElement *pFVar6;
  void *pvVar7;
  IBufferResource<Chaos::FCollisionEventData> *pIVar8;
  longlong *plVar9;
  code *pcVar10;
  bool bVar11;
  BOOLEAN BVar12;
  uint uVar13;
  int iVar14;
  longlong lVar15;
  longlong *plVar16;
  int iVar17;
  undefined1 *puVar18;
  int iVar19;
  uint *puVar20;
  uint uVar21;
  uint uVar22;
  undefined1 local_res8 [8];
  int local_res10;
  int local_res18;
  undefined4 local_9c;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  this->_padding_ = (longlong)&___7__TEventContainer_UFCollisionEventData_Chaos___Chaos__6B_;
  if ((&this->HandlerLock == (FPlatformRWLock *)0x0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("Mutex",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                          ,0x43,L""), bVar11)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  AcquireSRWLockExclusive((PSRWLOCK)&this->HandlerLock);
  puVar1 = &(this->HandlerMap).field_0x10;
  iVar17 = 0;
  iVar3 = *(int *)&(this->HandlerMap).field_0x28;
  iVar19 = 0;
  uVar13 = 1;
  iVar14 = 0;
  if (iVar3 != 0) {
    puVar20 = *(uint **)&(this->HandlerMap).field_0x20;
    if (puVar20 == (uint *)0x0) {
      puVar20 = (uint *)puVar1;
    }
    uVar21 = *puVar20;
    while (uVar21 == 0) {
      lVar15 = (longlong)iVar17;
      iVar19 = iVar19 + 0x20;
      iVar17 = iVar17 + 1;
      iVar14 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar17) goto LAB_143f49650;
      uVar21 = puVar20[lVar15 + 1];
    }
    uVar13 = -uVar21 & uVar21;
    uVar2 = (ulonglong)uVar13 * 2 + 1;
    lVar15 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    local_res10 = (int)lVar15;
    iVar14 = iVar19 + -1 + local_res10;
    if (iVar3 < iVar14) {
      iVar14 = iVar3;
    }
  }
LAB_143f49650:
  uVar21 = *(uint *)&(this->HandlerMap).field_0x28;
  uVar22 = uVar21 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar13,iVar17);
  TStack_60.CurrentBitIndex = iVar14;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar17 = (int)uVar21 >> 5;
  TStack_60._28_4_ = local_9c;
  TStack_60.BaseBitIndex = iVar19;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(this->HandlerMap).field_0x8 -
                       *(int *)&(this->HandlerMap).field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar21 < 0) || (iVar3 < (int)uVar21)) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar11)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  uVar13 = *(uint *)&(this->HandlerMap).field_0x28;
  if (uVar21 != uVar13) {
    puVar18 = *(undefined1 **)&(this->HandlerMap).field_0x20;
    if (puVar18 == (undefined1 *)0x0) {
      puVar18 = puVar1;
    }
    uVar21 = -1 << ((byte)uVar21 & 0x1f) & *(uint *)(puVar18 + (longlong)iVar17 * 4);
    while (uVar21 == 0) {
      lVar15 = (longlong)iVar17;
      uVar22 = uVar22 + 0x20;
      iVar17 = iVar17 + 1;
      uVar21 = uVar13;
      if ((int)((uVar13 - 1) + ((int)(uVar13 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar17)
      goto LAB_143f49770;
      uVar21 = *(uint *)(puVar18 + lVar15 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar21 & uVar21) * 2 + 1;
    lVar15 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    local_res18 = (int)lVar15;
    uVar21 = local_res18 + -1 + uVar22;
    if ((int)uVar13 < (int)uVar21) {
      uVar21 = uVar13;
    }
  }
LAB_143f49770:
  while( true ) {
    if (*(int *)&(this->HandlerMap).field_0x8 - *(int *)&(this->HandlerMap).field_0x34 !=
        (int)uStack_40) {
      local_res8[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<void_*,Chaos::IEventHandler_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    lVar15 = (longlong)TStack_60.CurrentBitIndex;
    if ((TStack_60.CurrentBitIndex == uVar21) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    lVar4 = *(longlong *)&this->HandlerMap;
    puVar5 = *(undefined8 **)(lVar4 + 8 + lVar15 * 0x18);
    if (puVar5 != (undefined8 *)0x0) {
      (**(code **)*puVar5)(puVar5,1);
    }
    *(undefined8 *)(lVar4 + lVar15 * 0x18 + 8) = 0;
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  SRWLock = &this->HandlerLock;
  if (SRWLock != (FPlatformRWLock *)0x0) {
    ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
  }
  BVar12 = TryAcquireSRWLockExclusive((PSRWLOCK)&this->DeferredHandlerLock);
  if (BVar12 == '\0') {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("!IsLocked()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Windows\\WindowsPlatformMutex.h"
                        ,0x48,L"Destroying a lock that is still held!");
    if (bVar11) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
  }
  else {
    ReleaseSRWLockExclusive((PSRWLOCK)&this->DeferredHandlerLock);
  }
  pFVar6 = (this->DeferredUnregisterHandlers).AllocatorInstance.Data;
  if (pFVar6 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar6);
  }
  pFVar6 = (this->DeferredHandlers).AllocatorInstance.Data;
  if (pFVar6 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar6);
  }
  BVar12 = TryAcquireSRWLockExclusive((PSRWLOCK)SRWLock);
  if (BVar12 == '\0') {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("!IsLocked()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Windows\\WindowsPlatformMutex.h"
                        ,0x48,L"Destroying a lock that is still held!");
    if (bVar11) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
  }
  else {
    ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
  }
  *(undefined4 *)&(this->HandlerMap).field_0x48 = 0;
  pvVar7 = *(void **)&(this->HandlerMap).field_0x40;
  if (pvVar7 != (void *)0x0) {
    FMemory::Free(pvVar7);
  }
  TSparseArray<TSparseSetElement<TTuple<void_*,Chaos::IEventHandler_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<void_*,Chaos::IEventHandler_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<void_*,Chaos::IEventHandler_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->HandlerMap);
  *(undefined4 *)&(this->HandlersNotInProxyOwnerMap).field_0x48 = 0;
  pvVar7 = *(void **)&(this->HandlersNotInProxyOwnerMap).field_0x40;
  if (pvVar7 != (void *)0x0) {
    FMemory::Free(pvVar7);
  }
  TSparseArray<TSparseSetElement<TTuple<void_*,Chaos::IEventHandler_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<void_*,Chaos::IEventHandler_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<void_*,Chaos::IEventHandler_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->HandlersNotInProxyOwnerMap);
  *(undefined4 *)&(this->ProxyOwnerToHandlerMap).field_0x48 = 0;
  pvVar7 = *(void **)&(this->ProxyOwnerToHandlerMap).field_0x40;
  if (pvVar7 != (void *)0x0) {
    FMemory::Free(pvVar7);
  }
  TSparseArray<TSparseSetElement<TTuple<UObject_*,Chaos::IEventHandler_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UObject_*,Chaos::IEventHandler_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UObject_*,Chaos::IEventHandler_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ProxyOwnerToHandlerMap);
  pIVar8 = (this->EventBuffer).Ptr;
  if (pIVar8 != (IBufferResource<Chaos::FCollisionEventData> *)0x0) {
    (**(code **)*pIVar8)(pIVar8,1);
  }
  if (*(longlong *)&this->InjectedFunction != 0) {
    plVar9 = *(longlong **)&(this->InjectedFunction).field_0x28;
    plVar16 = (longlong *)&(this->InjectedFunction).field_0x10;
    if (plVar9 != (longlong *)0x0) {
      plVar16 = plVar9;
    }
    (**(code **)(*plVar16 + 0x10))();
  }
  this->_padding_ = (longlong)&___7FEventContainerBase_Chaos__6B_;
  return;
}

// ~TEventContainer<Chaos::FCrumblingEventData> @ 143f49960

void __thiscall
Chaos::TEventContainer<Chaos::FCrumblingEventData>::~TEventContainer<Chaos::FCrumblingEventData>
          (TEventContainer<Chaos::FCrumblingEventData> *this)

{
  undefined1 *puVar1;
  FPlatformRWLock *SRWLock;
  ulonglong uVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *puVar5;
  FScriptContainerElement *pFVar6;
  void *pvVar7;
  IBufferResource<Chaos::FCrumblingEventData> *pIVar8;
  longlong *plVar9;
  code *pcVar10;
  bool bVar11;
  BOOLEAN BVar12;
  uint uVar13;
  int iVar14;
  longlong lVar15;
  longlong *plVar16;
  int iVar17;
  undefined1 *puVar18;
  int iVar19;
  uint *puVar20;
  uint uVar21;
  uint uVar22;
  undefined1 local_res8 [8];
  int local_res10;
  int local_res18;
  undefined4 local_9c;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  this->_padding_ = (longlong)&___7__TEventContainer_UFCrumblingEventData_Chaos___Chaos__6B_;
  if ((&this->HandlerLock == (FPlatformRWLock *)0x0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("Mutex",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                          ,0x43,L""), bVar11)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  AcquireSRWLockExclusive((PSRWLOCK)&this->HandlerLock);
  puVar1 = &(this->HandlerMap).field_0x10;
  iVar17 = 0;
  iVar3 = *(int *)&(this->HandlerMap).field_0x28;
  iVar19 = 0;
  uVar13 = 1;
  iVar14 = 0;
  if (iVar3 != 0) {
    puVar20 = *(uint **)&(this->HandlerMap).field_0x20;
    if (puVar20 == (uint *)0x0) {
      puVar20 = (uint *)puVar1;
    }
    uVar21 = *puVar20;
    while (uVar21 == 0) {
      lVar15 = (longlong)iVar17;
      iVar19 = iVar19 + 0x20;
      iVar17 = iVar17 + 1;
      iVar14 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar17) goto LAB_143f49a50;
      uVar21 = puVar20[lVar15 + 1];
    }
    uVar13 = -uVar21 & uVar21;
    uVar2 = (ulonglong)uVar13 * 2 + 1;
    lVar15 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    local_res10 = (int)lVar15;
    iVar14 = iVar19 + -1 + local_res10;
    if (iVar3 < iVar14) {
      iVar14 = iVar3;
    }
  }
LAB_143f49a50:
  uVar21 = *(uint *)&(this->HandlerMap).field_0x28;
  uVar22 = uVar21 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar13,iVar17);
  TStack_60.CurrentBitIndex = iVar14;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar17 = (int)uVar21 >> 5;
  TStack_60._28_4_ = local_9c;
  TStack_60.BaseBitIndex = iVar19;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(this->HandlerMap).field_0x8 -
                       *(int *)&(this->HandlerMap).field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar21 < 0) || (iVar3 < (int)uVar21)) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar11)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  uVar13 = *(uint *)&(this->HandlerMap).field_0x28;
  if (uVar21 != uVar13) {
    puVar18 = *(undefined1 **)&(this->HandlerMap).field_0x20;
    if (puVar18 == (undefined1 *)0x0) {
      puVar18 = puVar1;
    }
    uVar21 = -1 << ((byte)uVar21 & 0x1f) & *(uint *)(puVar18 + (longlong)iVar17 * 4);
    while (uVar21 == 0) {
      lVar15 = (longlong)iVar17;
      uVar22 = uVar22 + 0x20;
      iVar17 = iVar17 + 1;
      uVar21 = uVar13;
      if ((int)((uVar13 - 1) + ((int)(uVar13 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar17)
      goto LAB_143f49b70;
      uVar21 = *(uint *)(puVar18 + lVar15 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar21 & uVar21) * 2 + 1;
    lVar15 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    local_res18 = (int)lVar15;
    uVar21 = local_res18 + -1 + uVar22;
    if ((int)uVar13 < (int)uVar21) {
      uVar21 = uVar13;
    }
  }
LAB_143f49b70:
  while( true ) {
    if (*(int *)&(this->HandlerMap).field_0x8 - *(int *)&(this->HandlerMap).field_0x34 !=
        (int)uStack_40) {
      local_res8[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<void_*,Chaos::IEventHandler_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    lVar15 = (longlong)TStack_60.CurrentBitIndex;
    if ((TStack_60.CurrentBitIndex == uVar21) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    lVar4 = *(longlong *)&this->HandlerMap;
    puVar5 = *(undefined8 **)(lVar4 + 8 + lVar15 * 0x18);
    if (puVar5 != (undefined8 *)0x0) {
      (**(code **)*puVar5)(puVar5,1);
    }
    *(undefined8 *)(lVar4 + lVar15 * 0x18 + 8) = 0;
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  SRWLock = &this->HandlerLock;
  if (SRWLock != (FPlatformRWLock *)0x0) {
    ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
  }
  BVar12 = TryAcquireSRWLockExclusive((PSRWLOCK)&this->DeferredHandlerLock);
  if (BVar12 == '\0') {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("!IsLocked()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Windows\\WindowsPlatformMutex.h"
                        ,0x48,L"Destroying a lock that is still held!");
    if (bVar11) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
  }
  else {
    ReleaseSRWLockExclusive((PSRWLOCK)&this->DeferredHandlerLock);
  }
  pFVar6 = (this->DeferredUnregisterHandlers).AllocatorInstance.Data;
  if (pFVar6 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar6);
  }
  pFVar6 = (this->DeferredHandlers).AllocatorInstance.Data;
  if (pFVar6 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar6);
  }
  BVar12 = TryAcquireSRWLockExclusive((PSRWLOCK)SRWLock);
  if (BVar12 == '\0') {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("!IsLocked()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Windows\\WindowsPlatformMutex.h"
                        ,0x48,L"Destroying a lock that is still held!");
    if (bVar11) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
  }
  else {
    ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
  }
  *(undefined4 *)&(this->HandlerMap).field_0x48 = 0;
  pvVar7 = *(void **)&(this->HandlerMap).field_0x40;
  if (pvVar7 != (void *)0x0) {
    FMemory::Free(pvVar7);
  }
  TSparseArray<TSparseSetElement<TTuple<void_*,Chaos::IEventHandler_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<void_*,Chaos::IEventHandler_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<void_*,Chaos::IEventHandler_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->HandlerMap);
  *(undefined4 *)&(this->HandlersNotInProxyOwnerMap).field_0x48 = 0;
  pvVar7 = *(void **)&(this->HandlersNotInProxyOwnerMap).field_0x40;
  if (pvVar7 != (void *)0x0) {
    FMemory::Free(pvVar7);
  }
  TSparseArray<TSparseSetElement<TTuple<void_*,Chaos::IEventHandler_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<void_*,Chaos::IEventHandler_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<void_*,Chaos::IEventHandler_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->HandlersNotInProxyOwnerMap);
  *(undefined4 *)&(this->ProxyOwnerToHandlerMap).field_0x48 = 0;
  pvVar7 = *(void **)&(this->ProxyOwnerToHandlerMap).field_0x40;
  if (pvVar7 != (void *)0x0) {
    FMemory::Free(pvVar7);
  }
  TSparseArray<TSparseSetElement<TTuple<UObject_*,Chaos::IEventHandler_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UObject_*,Chaos::IEventHandler_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UObject_*,Chaos::IEventHandler_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ProxyOwnerToHandlerMap);
  pIVar8 = (this->EventBuffer).Ptr;
  if (pIVar8 != (IBufferResource<Chaos::FCrumblingEventData> *)0x0) {
    (**(code **)*pIVar8)(pIVar8,1);
  }
  if (*(longlong *)&this->InjectedFunction != 0) {
    plVar9 = *(longlong **)&(this->InjectedFunction).field_0x28;
    plVar16 = (longlong *)&(this->InjectedFunction).field_0x10;
    if (plVar9 != (longlong *)0x0) {
      plVar16 = plVar9;
    }
    (**(code **)(*plVar16 + 0x10))();
  }
  this->_padding_ = (longlong)&___7FEventContainerBase_Chaos__6B_;
  return;
}

// ~TEventContainer<Chaos::FRemovalEventData> @ 143f49d60

void __thiscall
Chaos::TEventContainer<Chaos::FRemovalEventData>::~TEventContainer<Chaos::FRemovalEventData>
          (TEventContainer<Chaos::FRemovalEventData> *this)

{
  undefined1 *puVar1;
  FPlatformRWLock *SRWLock;
  ulonglong uVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *puVar5;
  FScriptContainerElement *pFVar6;
  void *pvVar7;
  IBufferResource<Chaos::FRemovalEventData> *pIVar8;
  longlong *plVar9;
  code *pcVar10;
  bool bVar11;
  BOOLEAN BVar12;
  uint uVar13;
  int iVar14;
  longlong lVar15;
  longlong *plVar16;
  int iVar17;
  undefined1 *puVar18;
  int iVar19;
  uint *puVar20;
  uint uVar21;
  uint uVar22;
  undefined1 local_res8 [8];
  int local_res10;
  int local_res18;
  undefined4 local_9c;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  this->_padding_ = (longlong)&___7__TEventContainer_UFRemovalEventData_Chaos___Chaos__6B_;
  if ((&this->HandlerLock == (FPlatformRWLock *)0x0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("Mutex",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                          ,0x43,L""), bVar11)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  AcquireSRWLockExclusive((PSRWLOCK)&this->HandlerLock);
  puVar1 = &(this->HandlerMap).field_0x10;
  iVar17 = 0;
  iVar3 = *(int *)&(this->HandlerMap).field_0x28;
  iVar19 = 0;
  uVar13 = 1;
  iVar14 = 0;
  if (iVar3 != 0) {
    puVar20 = *(uint **)&(this->HandlerMap).field_0x20;
    if (puVar20 == (uint *)0x0) {
      puVar20 = (uint *)puVar1;
    }
    uVar21 = *puVar20;
    while (uVar21 == 0) {
      lVar15 = (longlong)iVar17;
      iVar19 = iVar19 + 0x20;
      iVar17 = iVar17 + 1;
      iVar14 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar17) goto LAB_143f49e50;
      uVar21 = puVar20[lVar15 + 1];
    }
    uVar13 = -uVar21 & uVar21;
    uVar2 = (ulonglong)uVar13 * 2 + 1;
    lVar15 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    local_res10 = (int)lVar15;
    iVar14 = iVar19 + -1 + local_res10;
    if (iVar3 < iVar14) {
      iVar14 = iVar3;
    }
  }
LAB_143f49e50:
  uVar21 = *(uint *)&(this->HandlerMap).field_0x28;
  uVar22 = uVar21 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar13,iVar17);
  TStack_60.CurrentBitIndex = iVar14;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar17 = (int)uVar21 >> 5;
  TStack_60._28_4_ = local_9c;
  TStack_60.BaseBitIndex = iVar19;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(this->HandlerMap).field_0x8 -
                       *(int *)&(this->HandlerMap).field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar21 < 0) || (iVar3 < (int)uVar21)) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar11)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  uVar13 = *(uint *)&(this->HandlerMap).field_0x28;
  if (uVar21 != uVar13) {
    puVar18 = *(undefined1 **)&(this->HandlerMap).field_0x20;
    if (puVar18 == (undefined1 *)0x0) {
      puVar18 = puVar1;
    }
    uVar21 = -1 << ((byte)uVar21 & 0x1f) & *(uint *)(puVar18 + (longlong)iVar17 * 4);
    while (uVar21 == 0) {
      lVar15 = (longlong)iVar17;
      uVar22 = uVar22 + 0x20;
      iVar17 = iVar17 + 1;
      uVar21 = uVar13;
      if ((int)((uVar13 - 1) + ((int)(uVar13 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar17)
      goto LAB_143f49f70;
      uVar21 = *(uint *)(puVar18 + lVar15 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar21 & uVar21) * 2 + 1;
    lVar15 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    local_res18 = (int)lVar15;
    uVar21 = local_res18 + -1 + uVar22;
    if ((int)uVar13 < (int)uVar21) {
      uVar21 = uVar13;
    }
  }
LAB_143f49f70:
  while( true ) {
    if (*(int *)&(this->HandlerMap).field_0x8 - *(int *)&(this->HandlerMap).field_0x34 !=
        (int)uStack_40) {
      local_res8[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<void_*,Chaos::IEventHandler_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    lVar15 = (longlong)TStack_60.CurrentBitIndex;
    if ((TStack_60.CurrentBitIndex == uVar21) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    lVar4 = *(longlong *)&this->HandlerMap;
    puVar5 = *(undefined8 **)(lVar4 + 8 + lVar15 * 0x18);
    if (puVar5 != (undefined8 *)0x0) {
      (**(code **)*puVar5)(puVar5,1);
    }
    *(undefined8 *)(lVar4 + lVar15 * 0x18 + 8) = 0;
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  SRWLock = &this->HandlerLock;
  if (SRWLock != (FPlatformRWLock *)0x0) {
    ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
  }
  BVar12 = TryAcquireSRWLockExclusive((PSRWLOCK)&this->DeferredHandlerLock);
  if (BVar12 == '\0') {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("!IsLocked()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Windows\\WindowsPlatformMutex.h"
                        ,0x48,L"Destroying a lock that is still held!");
    if (bVar11) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
  }
  else {
    ReleaseSRWLockExclusive((PSRWLOCK)&this->DeferredHandlerLock);
  }
  pFVar6 = (this->DeferredUnregisterHandlers).AllocatorInstance.Data;
  if (pFVar6 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar6);
  }
  pFVar6 = (this->DeferredHandlers).AllocatorInstance.Data;
  if (pFVar6 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar6);
  }
  BVar12 = TryAcquireSRWLockExclusive((PSRWLOCK)SRWLock);
  if (BVar12 == '\0') {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("!IsLocked()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Windows\\WindowsPlatformMutex.h"
                        ,0x48,L"Destroying a lock that is still held!");
    if (bVar11) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
  }
  else {
    ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
  }
  *(undefined4 *)&(this->HandlerMap).field_0x48 = 0;
  pvVar7 = *(void **)&(this->HandlerMap).field_0x40;
  if (pvVar7 != (void *)0x0) {
    FMemory::Free(pvVar7);
  }
  TSparseArray<TSparseSetElement<TTuple<void_*,Chaos::IEventHandler_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<void_*,Chaos::IEventHandler_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<void_*,Chaos::IEventHandler_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->HandlerMap);
  *(undefined4 *)&(this->HandlersNotInProxyOwnerMap).field_0x48 = 0;
  pvVar7 = *(void **)&(this->HandlersNotInProxyOwnerMap).field_0x40;
  if (pvVar7 != (void *)0x0) {
    FMemory::Free(pvVar7);
  }
  TSparseArray<TSparseSetElement<TTuple<void_*,Chaos::IEventHandler_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<void_*,Chaos::IEventHandler_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<void_*,Chaos::IEventHandler_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->HandlersNotInProxyOwnerMap);
  *(undefined4 *)&(this->ProxyOwnerToHandlerMap).field_0x48 = 0;
  pvVar7 = *(void **)&(this->ProxyOwnerToHandlerMap).field_0x40;
  if (pvVar7 != (void *)0x0) {
    FMemory::Free(pvVar7);
  }
  TSparseArray<TSparseSetElement<TTuple<UObject_*,Chaos::IEventHandler_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UObject_*,Chaos::IEventHandler_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UObject_*,Chaos::IEventHandler_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ProxyOwnerToHandlerMap);
  pIVar8 = (this->EventBuffer).Ptr;
  if (pIVar8 != (IBufferResource<Chaos::FRemovalEventData> *)0x0) {
    (**(code **)*pIVar8)(pIVar8,1);
  }
  if (*(longlong *)&this->InjectedFunction != 0) {
    plVar9 = *(longlong **)&(this->InjectedFunction).field_0x28;
    plVar16 = (longlong *)&(this->InjectedFunction).field_0x10;
    if (plVar9 != (longlong *)0x0) {
      plVar16 = plVar9;
    }
    (**(code **)(*plVar16 + 0x10))();
  }
  this->_padding_ = (longlong)&___7FEventContainerBase_Chaos__6B_;
  return;
}

// ~TEventContainer<Chaos::FSleepingEventData> @ 143f4a160

void __thiscall
Chaos::TEventContainer<Chaos::FSleepingEventData>::~TEventContainer<Chaos::FSleepingEventData>
          (TEventContainer<Chaos::FSleepingEventData> *this)

{
  undefined1 *puVar1;
  FPlatformRWLock *SRWLock;
  ulonglong uVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *puVar5;
  FScriptContainerElement *pFVar6;
  void *pvVar7;
  IBufferResource<Chaos::FSleepingEventData> *pIVar8;
  longlong *plVar9;
  code *pcVar10;
  bool bVar11;
  BOOLEAN BVar12;
  uint uVar13;
  int iVar14;
  longlong lVar15;
  longlong *plVar16;
  int iVar17;
  undefined1 *puVar18;
  int iVar19;
  uint *puVar20;
  uint uVar21;
  uint uVar22;
  undefined1 local_res8 [8];
  int local_res10;
  int local_res18;
  undefined4 local_9c;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  this->_padding_ = (longlong)&___7__TEventContainer_UFSleepingEventData_Chaos___Chaos__6B_;
  if ((&this->HandlerLock == (FPlatformRWLock *)0x0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("Mutex",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                          ,0x43,L""), bVar11)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  AcquireSRWLockExclusive((PSRWLOCK)&this->HandlerLock);
  puVar1 = &(this->HandlerMap).field_0x10;
  iVar17 = 0;
  iVar3 = *(int *)&(this->HandlerMap).field_0x28;
  iVar19 = 0;
  uVar13 = 1;
  iVar14 = 0;
  if (iVar3 != 0) {
    puVar20 = *(uint **)&(this->HandlerMap).field_0x20;
    if (puVar20 == (uint *)0x0) {
      puVar20 = (uint *)puVar1;
    }
    uVar21 = *puVar20;
    while (uVar21 == 0) {
      lVar15 = (longlong)iVar17;
      iVar19 = iVar19 + 0x20;
      iVar17 = iVar17 + 1;
      iVar14 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar17) goto LAB_143f4a250;
      uVar21 = puVar20[lVar15 + 1];
    }
    uVar13 = -uVar21 & uVar21;
    uVar2 = (ulonglong)uVar13 * 2 + 1;
    lVar15 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    local_res10 = (int)lVar15;
    iVar14 = iVar19 + -1 + local_res10;
    if (iVar3 < iVar14) {
      iVar14 = iVar3;
    }
  }
LAB_143f4a250:
  uVar21 = *(uint *)&(this->HandlerMap).field_0x28;
  uVar22 = uVar21 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar13,iVar17);
  TStack_60.CurrentBitIndex = iVar14;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar17 = (int)uVar21 >> 5;
  TStack_60._28_4_ = local_9c;
  TStack_60.BaseBitIndex = iVar19;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(this->HandlerMap).field_0x8 -
                       *(int *)&(this->HandlerMap).field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar21 < 0) || (iVar3 < (int)uVar21)) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar11)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  uVar13 = *(uint *)&(this->HandlerMap).field_0x28;
  if (uVar21 != uVar13) {
    puVar18 = *(undefined1 **)&(this->HandlerMap).field_0x20;
    if (puVar18 == (undefined1 *)0x0) {
      puVar18 = puVar1;
    }
    uVar21 = -1 << ((byte)uVar21 & 0x1f) & *(uint *)(puVar18 + (longlong)iVar17 * 4);
    while (uVar21 == 0) {
      lVar15 = (longlong)iVar17;
      uVar22 = uVar22 + 0x20;
      iVar17 = iVar17 + 1;
      uVar21 = uVar13;
      if ((int)((uVar13 - 1) + ((int)(uVar13 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar17)
      goto LAB_143f4a370;
      uVar21 = *(uint *)(puVar18 + lVar15 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar21 & uVar21) * 2 + 1;
    lVar15 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    local_res18 = (int)lVar15;
    uVar21 = local_res18 + -1 + uVar22;
    if ((int)uVar13 < (int)uVar21) {
      uVar21 = uVar13;
    }
  }
LAB_143f4a370:
  while( true ) {
    if (*(int *)&(this->HandlerMap).field_0x8 - *(int *)&(this->HandlerMap).field_0x34 !=
        (int)uStack_40) {
      local_res8[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<void_*,Chaos::IEventHandler_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    lVar15 = (longlong)TStack_60.CurrentBitIndex;
    if ((TStack_60.CurrentBitIndex == uVar21) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    lVar4 = *(longlong *)&this->HandlerMap;
    puVar5 = *(undefined8 **)(lVar4 + 8 + lVar15 * 0x18);
    if (puVar5 != (undefined8 *)0x0) {
      (**(code **)*puVar5)(puVar5,1);
    }
    *(undefined8 *)(lVar4 + lVar15 * 0x18 + 8) = 0;
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  SRWLock = &this->HandlerLock;
  if (SRWLock != (FPlatformRWLock *)0x0) {
    ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
  }
  BVar12 = TryAcquireSRWLockExclusive((PSRWLOCK)&this->DeferredHandlerLock);
  if (BVar12 == '\0') {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("!IsLocked()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Windows\\WindowsPlatformMutex.h"
                        ,0x48,L"Destroying a lock that is still held!");
    if (bVar11) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
  }
  else {
    ReleaseSRWLockExclusive((PSRWLOCK)&this->DeferredHandlerLock);
  }
  pFVar6 = (this->DeferredUnregisterHandlers).AllocatorInstance.Data;
  if (pFVar6 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar6);
  }
  pFVar6 = (this->DeferredHandlers).AllocatorInstance.Data;
  if (pFVar6 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar6);
  }
  BVar12 = TryAcquireSRWLockExclusive((PSRWLOCK)SRWLock);
  if (BVar12 == '\0') {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("!IsLocked()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Windows\\WindowsPlatformMutex.h"
                        ,0x48,L"Destroying a lock that is still held!");
    if (bVar11) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
  }
  else {
    ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
  }
  *(undefined4 *)&(this->HandlerMap).field_0x48 = 0;
  pvVar7 = *(void **)&(this->HandlerMap).field_0x40;
  if (pvVar7 != (void *)0x0) {
    FMemory::Free(pvVar7);
  }
  TSparseArray<TSparseSetElement<TTuple<void_*,Chaos::IEventHandler_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<void_*,Chaos::IEventHandler_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<void_*,Chaos::IEventHandler_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->HandlerMap);
  *(undefined4 *)&(this->HandlersNotInProxyOwnerMap).field_0x48 = 0;
  pvVar7 = *(void **)&(this->HandlersNotInProxyOwnerMap).field_0x40;
  if (pvVar7 != (void *)0x0) {
    FMemory::Free(pvVar7);
  }
  TSparseArray<TSparseSetElement<TTuple<void_*,Chaos::IEventHandler_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<void_*,Chaos::IEventHandler_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<void_*,Chaos::IEventHandler_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->HandlersNotInProxyOwnerMap);
  *(undefined4 *)&(this->ProxyOwnerToHandlerMap).field_0x48 = 0;
  pvVar7 = *(void **)&(this->ProxyOwnerToHandlerMap).field_0x40;
  if (pvVar7 != (void *)0x0) {
    FMemory::Free(pvVar7);
  }
  TSparseArray<TSparseSetElement<TTuple<UObject_*,Chaos::IEventHandler_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UObject_*,Chaos::IEventHandler_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UObject_*,Chaos::IEventHandler_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ProxyOwnerToHandlerMap);
  pIVar8 = (this->EventBuffer).Ptr;
  if (pIVar8 != (IBufferResource<Chaos::FSleepingEventData> *)0x0) {
    (**(code **)*pIVar8)(pIVar8,1);
  }
  if (*(longlong *)&this->InjectedFunction != 0) {
    plVar9 = *(longlong **)&(this->InjectedFunction).field_0x28;
    plVar16 = (longlong *)&(this->InjectedFunction).field_0x10;
    if (plVar9 != (longlong *)0x0) {
      plVar16 = plVar9;
    }
    (**(code **)(*plVar16 + 0x10))();
  }
  this->_padding_ = (longlong)&___7FEventContainerBase_Chaos__6B_;
  return;
}

// ~TEventContainer<Chaos::FTrailingEventData> @ 143f4a560

void __thiscall
Chaos::TEventContainer<Chaos::FTrailingEventData>::~TEventContainer<Chaos::FTrailingEventData>
          (TEventContainer<Chaos::FTrailingEventData> *this)

{
  undefined1 *puVar1;
  FPlatformRWLock *SRWLock;
  ulonglong uVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *puVar5;
  FScriptContainerElement *pFVar6;
  void *pvVar7;
  IBufferResource<Chaos::FTrailingEventData> *pIVar8;
  longlong *plVar9;
  code *pcVar10;
  bool bVar11;
  BOOLEAN BVar12;
  uint uVar13;
  int iVar14;
  longlong lVar15;
  longlong *plVar16;
  int iVar17;
  undefined1 *puVar18;
  int iVar19;
  uint *puVar20;
  uint uVar21;
  uint uVar22;
  undefined1 local_res8 [8];
  int local_res10;
  int local_res18;
  undefined4 local_9c;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  this->_padding_ = (longlong)&___7__TEventContainer_UFTrailingEventData_Chaos___Chaos__6B_;
  if ((&this->HandlerLock == (FPlatformRWLock *)0x0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("Mutex",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                          ,0x43,L""), bVar11)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  AcquireSRWLockExclusive((PSRWLOCK)&this->HandlerLock);
  puVar1 = &(this->HandlerMap).field_0x10;
  iVar17 = 0;
  iVar3 = *(int *)&(this->HandlerMap).field_0x28;
  iVar19 = 0;
  uVar13 = 1;
  iVar14 = 0;
  if (iVar3 != 0) {
    puVar20 = *(uint **)&(this->HandlerMap).field_0x20;
    if (puVar20 == (uint *)0x0) {
      puVar20 = (uint *)puVar1;
    }
    uVar21 = *puVar20;
    while (uVar21 == 0) {
      lVar15 = (longlong)iVar17;
      iVar19 = iVar19 + 0x20;
      iVar17 = iVar17 + 1;
      iVar14 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar17) goto LAB_143f4a650;
      uVar21 = puVar20[lVar15 + 1];
    }
    uVar13 = -uVar21 & uVar21;
    uVar2 = (ulonglong)uVar13 * 2 + 1;
    lVar15 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    local_res10 = (int)lVar15;
    iVar14 = iVar19 + -1 + local_res10;
    if (iVar3 < iVar14) {
      iVar14 = iVar3;
    }
  }
LAB_143f4a650:
  uVar21 = *(uint *)&(this->HandlerMap).field_0x28;
  uVar22 = uVar21 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar13,iVar17);
  TStack_60.CurrentBitIndex = iVar14;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar17 = (int)uVar21 >> 5;
  TStack_60._28_4_ = local_9c;
  TStack_60.BaseBitIndex = iVar19;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(this->HandlerMap).field_0x8 -
                       *(int *)&(this->HandlerMap).field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar21 < 0) || (iVar3 < (int)uVar21)) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar11)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  uVar13 = *(uint *)&(this->HandlerMap).field_0x28;
  if (uVar21 != uVar13) {
    puVar18 = *(undefined1 **)&(this->HandlerMap).field_0x20;
    if (puVar18 == (undefined1 *)0x0) {
      puVar18 = puVar1;
    }
    uVar21 = -1 << ((byte)uVar21 & 0x1f) & *(uint *)(puVar18 + (longlong)iVar17 * 4);
    while (uVar21 == 0) {
      lVar15 = (longlong)iVar17;
      uVar22 = uVar22 + 0x20;
      iVar17 = iVar17 + 1;
      uVar21 = uVar13;
      if ((int)((uVar13 - 1) + ((int)(uVar13 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar17)
      goto LAB_143f4a770;
      uVar21 = *(uint *)(puVar18 + lVar15 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar21 & uVar21) * 2 + 1;
    lVar15 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    local_res18 = (int)lVar15;
    uVar21 = local_res18 + -1 + uVar22;
    if ((int)uVar13 < (int)uVar21) {
      uVar21 = uVar13;
    }
  }
LAB_143f4a770:
  while( true ) {
    if (*(int *)&(this->HandlerMap).field_0x8 - *(int *)&(this->HandlerMap).field_0x34 !=
        (int)uStack_40) {
      local_res8[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<void_*,Chaos::IEventHandler_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    lVar15 = (longlong)TStack_60.CurrentBitIndex;
    if ((TStack_60.CurrentBitIndex == uVar21) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    lVar4 = *(longlong *)&this->HandlerMap;
    puVar5 = *(undefined8 **)(lVar4 + 8 + lVar15 * 0x18);
    if (puVar5 != (undefined8 *)0x0) {
      (**(code **)*puVar5)(puVar5,1);
    }
    *(undefined8 *)(lVar4 + lVar15 * 0x18 + 8) = 0;
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  SRWLock = &this->HandlerLock;
  if (SRWLock != (FPlatformRWLock *)0x0) {
    ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
  }
  BVar12 = TryAcquireSRWLockExclusive((PSRWLOCK)&this->DeferredHandlerLock);
  if (BVar12 == '\0') {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("!IsLocked()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Windows\\WindowsPlatformMutex.h"
                        ,0x48,L"Destroying a lock that is still held!");
    if (bVar11) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
  }
  else {
    ReleaseSRWLockExclusive((PSRWLOCK)&this->DeferredHandlerLock);
  }
  pFVar6 = (this->DeferredUnregisterHandlers).AllocatorInstance.Data;
  if (pFVar6 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar6);
  }
  pFVar6 = (this->DeferredHandlers).AllocatorInstance.Data;
  if (pFVar6 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar6);
  }
  BVar12 = TryAcquireSRWLockExclusive((PSRWLOCK)SRWLock);
  if (BVar12 == '\0') {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("!IsLocked()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Windows\\WindowsPlatformMutex.h"
                        ,0x48,L"Destroying a lock that is still held!");
    if (bVar11) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
  }
  else {
    ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
  }
  *(undefined4 *)&(this->HandlerMap).field_0x48 = 0;
  pvVar7 = *(void **)&(this->HandlerMap).field_0x40;
  if (pvVar7 != (void *)0x0) {
    FMemory::Free(pvVar7);
  }
  TSparseArray<TSparseSetElement<TTuple<void_*,Chaos::IEventHandler_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<void_*,Chaos::IEventHandler_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<void_*,Chaos::IEventHandler_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->HandlerMap);
  *(undefined4 *)&(this->HandlersNotInProxyOwnerMap).field_0x48 = 0;
  pvVar7 = *(void **)&(this->HandlersNotInProxyOwnerMap).field_0x40;
  if (pvVar7 != (void *)0x0) {
    FMemory::Free(pvVar7);
  }
  TSparseArray<TSparseSetElement<TTuple<void_*,Chaos::IEventHandler_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<void_*,Chaos::IEventHandler_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<void_*,Chaos::IEventHandler_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->HandlersNotInProxyOwnerMap);
  *(undefined4 *)&(this->ProxyOwnerToHandlerMap).field_0x48 = 0;
  pvVar7 = *(void **)&(this->ProxyOwnerToHandlerMap).field_0x40;
  if (pvVar7 != (void *)0x0) {
    FMemory::Free(pvVar7);
  }
  TSparseArray<TSparseSetElement<TTuple<UObject_*,Chaos::IEventHandler_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UObject_*,Chaos::IEventHandler_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UObject_*,Chaos::IEventHandler_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ProxyOwnerToHandlerMap);
  pIVar8 = (this->EventBuffer).Ptr;
  if (pIVar8 != (IBufferResource<Chaos::FTrailingEventData> *)0x0) {
    (**(code **)*pIVar8)(pIVar8,1);
  }
  if (*(longlong *)&this->InjectedFunction != 0) {
    plVar9 = *(longlong **)&(this->InjectedFunction).field_0x28;
    plVar16 = (longlong *)&(this->InjectedFunction).field_0x10;
    if (plVar9 != (longlong *)0x0) {
      plVar16 = plVar9;
    }
    (**(code **)(*plVar16 + 0x10))();
  }
  this->_padding_ = (longlong)&___7FEventContainerBase_Chaos__6B_;
  return;
}

// AddEvent @ 143f54c40

void __thiscall
Chaos::TEventContainer<Chaos::FBreakingEventData>::AddEvent
          (TEventContainer<Chaos::FBreakingEventData> *this,
          TFunction<void___cdecl(Chaos::FBreakingEventData_&)> *param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  uVar2 = (**(code **)((longlong)*(this->EventBuffer).Ptr + 0x10))();
  UE::Core::Private::Function::CheckCallable(*(void **)param_1);
  pcVar1 = *(code **)param_1;
  plVar4 = (longlong *)&param_1->field_0x10;
  if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
    plVar4 = *(longlong **)&param_1->field_0x28;
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  (*pcVar1)(uVar3,uVar2);
  if (*(longlong *)param_1 != 0) {
    plVar4 = (longlong *)&param_1->field_0x10;
    if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
      plVar4 = *(longlong **)&param_1->field_0x28;
    }
    (**(code **)(*plVar4 + 0x10))(plVar4);
  }
  return;
}

// AddEvent @ 143f54cc0

void __thiscall
Chaos::TEventContainer<Chaos::FCollisionEventData>::AddEvent
          (TEventContainer<Chaos::FCollisionEventData> *this,
          TFunction<void___cdecl(Chaos::FCollisionEventData_&)> *param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  uVar2 = (**(code **)((longlong)*(this->EventBuffer).Ptr + 0x10))();
  UE::Core::Private::Function::CheckCallable(*(void **)param_1);
  pcVar1 = *(code **)param_1;
  plVar4 = (longlong *)&param_1->field_0x10;
  if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
    plVar4 = *(longlong **)&param_1->field_0x28;
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  (*pcVar1)(uVar3,uVar2);
  if (*(longlong *)param_1 != 0) {
    plVar4 = (longlong *)&param_1->field_0x10;
    if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
      plVar4 = *(longlong **)&param_1->field_0x28;
    }
    (**(code **)(*plVar4 + 0x10))(plVar4);
  }
  return;
}

// AddEvent @ 143f54d40

void __thiscall
Chaos::TEventContainer<Chaos::FCrumblingEventData>::AddEvent
          (TEventContainer<Chaos::FCrumblingEventData> *this,
          TFunction<void___cdecl(Chaos::FCrumblingEventData_&)> *param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  uVar2 = (**(code **)((longlong)*(this->EventBuffer).Ptr + 0x10))();
  UE::Core::Private::Function::CheckCallable(*(void **)param_1);
  pcVar1 = *(code **)param_1;
  plVar4 = (longlong *)&param_1->field_0x10;
  if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
    plVar4 = *(longlong **)&param_1->field_0x28;
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  (*pcVar1)(uVar3,uVar2);
  if (*(longlong *)param_1 != 0) {
    plVar4 = (longlong *)&param_1->field_0x10;
    if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
      plVar4 = *(longlong **)&param_1->field_0x28;
    }
    (**(code **)(*plVar4 + 0x10))(plVar4);
  }
  return;
}

// AddEvent @ 143f54dc0

void __thiscall
Chaos::TEventContainer<Chaos::FRemovalEventData>::AddEvent
          (TEventContainer<Chaos::FRemovalEventData> *this,
          TFunction<void___cdecl(Chaos::FRemovalEventData_&)> *param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  uVar2 = (**(code **)((longlong)*(this->EventBuffer).Ptr + 0x10))();
  UE::Core::Private::Function::CheckCallable(*(void **)param_1);
  pcVar1 = *(code **)param_1;
  plVar4 = (longlong *)&param_1->field_0x10;
  if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
    plVar4 = *(longlong **)&param_1->field_0x28;
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  (*pcVar1)(uVar3,uVar2);
  if (*(longlong *)param_1 != 0) {
    plVar4 = (longlong *)&param_1->field_0x10;
    if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
      plVar4 = *(longlong **)&param_1->field_0x28;
    }
    (**(code **)(*plVar4 + 0x10))(plVar4);
  }
  return;
}

// AddEvent @ 143f54e40

void __thiscall
Chaos::TEventContainer<Chaos::FSleepingEventData>::AddEvent
          (TEventContainer<Chaos::FSleepingEventData> *this,
          TFunction<void___cdecl(Chaos::FSleepingEventData_&)> *param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  uVar2 = (**(code **)((longlong)*(this->EventBuffer).Ptr + 0x10))();
  UE::Core::Private::Function::CheckCallable(*(void **)param_1);
  pcVar1 = *(code **)param_1;
  plVar4 = (longlong *)&param_1->field_0x10;
  if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
    plVar4 = *(longlong **)&param_1->field_0x28;
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  (*pcVar1)(uVar3,uVar2);
  if (*(longlong *)param_1 != 0) {
    plVar4 = (longlong *)&param_1->field_0x10;
    if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
      plVar4 = *(longlong **)&param_1->field_0x28;
    }
    (**(code **)(*plVar4 + 0x10))(plVar4);
  }
  return;
}

// AddEvent @ 143f54ec0

void __thiscall
Chaos::TEventContainer<Chaos::FTrailingEventData>::AddEvent
          (TEventContainer<Chaos::FTrailingEventData> *this,
          TFunction<void___cdecl(Chaos::FTrailingEventData_&)> *param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  uVar2 = (**(code **)((longlong)*(this->EventBuffer).Ptr + 0x10))();
  UE::Core::Private::Function::CheckCallable(*(void **)param_1);
  pcVar1 = *(code **)param_1;
  plVar4 = (longlong *)&param_1->field_0x10;
  if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
    plVar4 = *(longlong **)&param_1->field_0x28;
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  (*pcVar1)(uVar3,uVar2);
  if (*(longlong *)param_1 != 0) {
    plVar4 = (longlong *)&param_1->field_0x10;
    if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
      plVar4 = *(longlong **)&param_1->field_0x28;
    }
    (**(code **)(*plVar4 + 0x10))(plVar4);
  }
  return;
}

// DestroyStaleEvents @ 143f5b230

void __thiscall
Chaos::TEventContainer<Chaos::FBreakingEventData>::DestroyStaleEvents
          (TEventContainer<Chaos::FBreakingEventData> *this,
          TFunction<void___cdecl(Chaos::FBreakingEventData_&)> *param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  uVar2 = (**(code **)((longlong)*(this->EventBuffer).Ptr + 0x10))();
  UE::Core::Private::Function::CheckCallable(*(void **)param_1);
  pcVar1 = *(code **)param_1;
  plVar4 = (longlong *)&param_1->field_0x10;
  if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
    plVar4 = *(longlong **)&param_1->field_0x28;
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  (*pcVar1)(uVar3,uVar2);
  if (*(longlong *)param_1 != 0) {
    plVar4 = (longlong *)&param_1->field_0x10;
    if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
      plVar4 = *(longlong **)&param_1->field_0x28;
    }
    (**(code **)(*plVar4 + 0x10))(plVar4);
  }
  return;
}

// DestroyStaleEvents @ 143f5b2b0

void __thiscall
Chaos::TEventContainer<Chaos::FCollisionEventData>::DestroyStaleEvents
          (TEventContainer<Chaos::FCollisionEventData> *this,
          TFunction<void___cdecl(Chaos::FCollisionEventData_&)> *param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  uVar2 = (**(code **)((longlong)*(this->EventBuffer).Ptr + 0x10))();
  UE::Core::Private::Function::CheckCallable(*(void **)param_1);
  pcVar1 = *(code **)param_1;
  plVar4 = (longlong *)&param_1->field_0x10;
  if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
    plVar4 = *(longlong **)&param_1->field_0x28;
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  (*pcVar1)(uVar3,uVar2);
  if (*(longlong *)param_1 != 0) {
    plVar4 = (longlong *)&param_1->field_0x10;
    if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
      plVar4 = *(longlong **)&param_1->field_0x28;
    }
    (**(code **)(*plVar4 + 0x10))(plVar4);
  }
  return;
}

// DestroyStaleEvents @ 143f5b330

void __thiscall
Chaos::TEventContainer<Chaos::FCrumblingEventData>::DestroyStaleEvents
          (TEventContainer<Chaos::FCrumblingEventData> *this,
          TFunction<void___cdecl(Chaos::FCrumblingEventData_&)> *param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  uVar2 = (**(code **)((longlong)*(this->EventBuffer).Ptr + 0x10))();
  UE::Core::Private::Function::CheckCallable(*(void **)param_1);
  pcVar1 = *(code **)param_1;
  plVar4 = (longlong *)&param_1->field_0x10;
  if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
    plVar4 = *(longlong **)&param_1->field_0x28;
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  (*pcVar1)(uVar3,uVar2);
  if (*(longlong *)param_1 != 0) {
    plVar4 = (longlong *)&param_1->field_0x10;
    if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
      plVar4 = *(longlong **)&param_1->field_0x28;
    }
    (**(code **)(*plVar4 + 0x10))(plVar4);
  }
  return;
}

// DestroyStaleEvents @ 143f5b3b0

void __thiscall
Chaos::TEventContainer<Chaos::FRemovalEventData>::DestroyStaleEvents
          (TEventContainer<Chaos::FRemovalEventData> *this,
          TFunction<void___cdecl(Chaos::FRemovalEventData_&)> *param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  uVar2 = (**(code **)((longlong)*(this->EventBuffer).Ptr + 0x10))();
  UE::Core::Private::Function::CheckCallable(*(void **)param_1);
  pcVar1 = *(code **)param_1;
  plVar4 = (longlong *)&param_1->field_0x10;
  if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
    plVar4 = *(longlong **)&param_1->field_0x28;
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  (*pcVar1)(uVar3,uVar2);
  if (*(longlong *)param_1 != 0) {
    plVar4 = (longlong *)&param_1->field_0x10;
    if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
      plVar4 = *(longlong **)&param_1->field_0x28;
    }
    (**(code **)(*plVar4 + 0x10))(plVar4);
  }
  return;
}

// DestroyStaleEvents @ 143f5b430

void __thiscall
Chaos::TEventContainer<Chaos::FSleepingEventData>::DestroyStaleEvents
          (TEventContainer<Chaos::FSleepingEventData> *this,
          TFunction<void___cdecl(Chaos::FSleepingEventData_&)> *param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  uVar2 = (**(code **)((longlong)*(this->EventBuffer).Ptr + 0x10))();
  UE::Core::Private::Function::CheckCallable(*(void **)param_1);
  pcVar1 = *(code **)param_1;
  plVar4 = (longlong *)&param_1->field_0x10;
  if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
    plVar4 = *(longlong **)&param_1->field_0x28;
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  (*pcVar1)(uVar3,uVar2);
  if (*(longlong *)param_1 != 0) {
    plVar4 = (longlong *)&param_1->field_0x10;
    if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
      plVar4 = *(longlong **)&param_1->field_0x28;
    }
    (**(code **)(*plVar4 + 0x10))(plVar4);
  }
  return;
}

// DestroyStaleEvents @ 143f5b4b0

void __thiscall
Chaos::TEventContainer<Chaos::FTrailingEventData>::DestroyStaleEvents
          (TEventContainer<Chaos::FTrailingEventData> *this,
          TFunction<void___cdecl(Chaos::FTrailingEventData_&)> *param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  uVar2 = (**(code **)((longlong)*(this->EventBuffer).Ptr + 0x10))();
  UE::Core::Private::Function::CheckCallable(*(void **)param_1);
  pcVar1 = *(code **)param_1;
  plVar4 = (longlong *)&param_1->field_0x10;
  if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
    plVar4 = *(longlong **)&param_1->field_0x28;
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  (*pcVar1)(uVar3,uVar2);
  if (*(longlong *)param_1 != 0) {
    plVar4 = (longlong *)&param_1->field_0x10;
    if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
      plVar4 = *(longlong **)&param_1->field_0x28;
    }
    (**(code **)(*plVar4 + 0x10))(plVar4);
  }
  return;
}

// DispatchConsumerData @ 143f5b530

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
Chaos::TEventContainer<Chaos::FBreakingEventData>::DispatchConsumerData
          (TEventContainer<Chaos::FBreakingEventData> *this)

{
  TArray<void_const_*,TSizedDefaultAllocator<32>_> *pTVar1;
  TMap<void_*,Chaos::IEventHandler_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<void_*,Chaos::IEventHandler_*,0>_>
  *pTVar2;
  TArray<Chaos::IEventHandler_*,TSizedDefaultAllocator<32>_> *pTVar3;
  ulonglong uVar4;
  uint uVar5;
  code *pcVar6;
  TEventContainer<Chaos::FBreakingEventData> *pTVar7;
  ForElementType<unsigned_int> FVar8;
  TMap<void_*,Chaos::IEventHandler_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<void_*,Chaos::IEventHandler_*,0>_>
  *pTVar9;
  TSet<TTuple<UObject_*,Chaos::IEventHandler_*>,TDefaultMapHashableKeyFuncs<UObject_*,Chaos::IEventHandler_*,1>,FDefaultSetAllocator>
  *pTVar10;
  UObject *pUVar11;
  bool bVar12;
  uint uVar13;
  longlong lVar14;
  byte bVar15;
  longlong lVar16;
  int iVar17;
  FPlatformRWLock *SRWLock;
  FScriptContainerElement *pFVar18;
  longlong *plVar19;
  FScriptContainerElement *pFVar20;
  FPlatformRWLock *SRWLock_00;
  int iVar21;
  ForElementType<unsigned_int> FVar22;
  uint *puVar23;
  undefined1 *puVar24;
  longlong *plVar25;
  undefined1 *puVar26;
  uint uVar27;
  uint uVar28;
  undefined1 auStack_2d8 [32];
  uint local_2b8;
  undefined1 local_2b4;
  undefined1 local_2b3;
  undefined1 local_2b2;
  undefined1 local_2b1;
  bool local_2b0;
  TMap<void_*,Chaos::IEventHandler_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<void_*,Chaos::IEventHandler_*,0>_>
  *local_2a8;
  undefined8 uStack_2a0;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_298;
  uint uStack_290;
  uint uStack_28c;
  uint uStack_288;
  undefined4 uStack_284;
  int local_280;
  undefined4 uStack_27c;
  TEventContainer<Chaos::FBreakingEventData> *local_278;
  longlong local_270;
  undefined8 local_268;
  FPlatformRWLock *local_260;
  undefined8 local_248;
  ForElementType<unsigned_int> local_240;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_238;
  int local_218;
  undefined8 local_214;
  int local_20c;
  int local_208;
  int local_204;
  int local_200;
  FPlatformRWLock *local_1f8;
  longlong *local_1f0;
  int local_1e8;
  longlong *local_1e0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_1d8;
  undefined8 uStack_1b8;
  longlong *local_1b0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_1a8;
  undefined8 uStack_188;
  TMap<void_*,Chaos::IEventHandler_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<void_*,Chaos::IEventHandler_*,0>_>
  *local_180;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_178;
  undefined8 uStack_158;
  TMap<void_*,Chaos::IEventHandler_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<void_*,Chaos::IEventHandler_*,0>_>
  *local_150;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_148;
  undefined8 uStack_128;
  TBaseKeyIterator<1> local_120;
  undefined8 local_108 [2];
  longlong local_f8 [5];
  undefined4 local_cc;
  undefined4 local_ac;
  undefined4 local_8c;
  undefined1 local_88 [32];
  uint *local_68;
  uint local_60;
  undefined4 local_5c;
  undefined4 local_58;
  int local_54;
  ForElementType<FSetElementId> local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_2d8;
  local_278 = this;
  bVar12 = IsInGameThread();
  if ((!bVar12) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsInGameThread()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\EventManager.h"
                          ,0x132,L""), bVar12)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  lVar14 = (**(code **)((longlong)*(this->EventBuffer).Ptr + 0x28))();
  if (((lVar14 == 0) || (*(int *)(lVar14 + 0x10) != 0)) ||
     (Chaos::Private::bEventManagerDispatchEmptyEvents != false)) {
    SRWLock = &this->DeferredHandlerLock;
    pFVar20 = (FScriptContainerElement *)0x0;
    iVar17 = 0;
    local_270 = lVar14;
    local_260 = SRWLock;
    if ((SRWLock == (FPlatformRWLock *)0x0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("Mutex",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                            ,0x43,L""), bVar12)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    AcquireSRWLockExclusive((PSRWLOCK)SRWLock);
    pTVar1 = &this->DeferredUnregisterHandlers;
    if ((TArray<void_const_*,TSizedDefaultAllocator<32>_> *)local_108 != pTVar1) {
      pFVar20 = (pTVar1->AllocatorInstance).Data;
      (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      iVar17 = (this->DeferredUnregisterHandlers).ArrayNum;
      (this->DeferredUnregisterHandlers).ArrayNum = 0;
      (this->DeferredUnregisterHandlers).ArrayMax = 0;
    }
    if (((this->DeferredUnregisterHandlers).ArrayNum != 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("DeferredUnregisterHandlers.Num() == 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\EventManager.h"
                            ,0x17f,L""), bVar12)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    if (SRWLock != (FPlatformRWLock *)0x0) {
      ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
    }
    for (pFVar18 = pFVar20; pFVar18 != pFVar20 + (longlong)iVar17 * 8; pFVar18 = pFVar18 + 8) {
      (**(code **)(this->_padding_ + 0x10))(this,*(undefined8 *)pFVar18);
    }
    if (pFVar20 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar20);
    }
    SRWLock_00 = &this->HandlerLock;
    local_1f8 = SRWLock_00;
    if ((SRWLock_00 == (FPlatformRWLock *)0x0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("Mutex",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                            ,0x1c,L""), bVar12)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    AcquireSRWLockShared((PSRWLOCK)SRWLock_00);
    local_2b0 = this->bDispatchInProgress;
    plVar25 = (longlong *)0x0;
    this->bDispatchInProgress = true;
    uStack_288 = 0;
    plVar19 = plVar25;
    if (lVar14 != 0) {
      plVar19 = (longlong *)(lVar14 + 0x28);
    }
    local_1f0 = plVar19;
    if ((plVar19 == (longlong *)0x0) ||
       (iVar17 = (int)plVar19[1] - *(int *)((longlong)plVar19 + 0x34),
       *(int *)&(this->HandlerMap).field_0x8 - *(int *)&(this->HandlerMap).field_0x34 <=
       (*(int *)&(this->HandlersNotInProxyOwnerMap).field_0x8 -
       *(int *)&(this->HandlersNotInProxyOwnerMap).field_0x34) + iVar17)) {
      pTStack_298 = (TBitArray<FDefaultBitArrayAllocator> *)&(this->HandlerMap).field_0x10;
      uVar13 = 0;
      uVar28 = *(uint *)&(this->HandlerMap).field_0x28;
      pTVar2 = &this->HandlerMap;
      uVar27 = 1;
      uStack_28c = uVar13;
      if (uVar28 != 0) {
        puVar23 = *(uint **)&(this->HandlerMap).field_0x20;
        if (puVar23 == (uint *)0x0) {
          puVar23 = (uint *)pTStack_298;
        }
        uVar5 = *puVar23;
        plVar19 = plVar25;
        uStack_288 = 0;
        uVar13 = 0;
        while (uVar5 == 0) {
          iVar17 = (int)plVar25;
          uStack_288 = (int)plVar19 + 0x20;
          plVar19 = (longlong *)(ulonglong)uStack_288;
          uVar13 = iVar17 + 1;
          plVar25 = (longlong *)(ulonglong)uVar13;
          uStack_28c = uVar28;
          if ((int)((uVar28 - 1) + ((int)(uVar28 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar13)
          goto LAB_143f5bf10;
          uVar5 = puVar23[(longlong)iVar17 + 1];
        }
        uVar27 = -uVar5 & uVar5;
        uVar4 = (ulonglong)uVar27 * 2 + 1;
        lVar14 = 0x3f;
        if (uVar4 != 0) {
          for (; uVar4 >> lVar14 == 0; lVar14 = lVar14 + -1) {
          }
        }
        local_200 = (int)lVar14;
        uStack_28c = (uStack_288 - 1) + local_200;
        if ((int)uVar28 < (int)uStack_28c) {
          uStack_28c = uVar28;
        }
      }
LAB_143f5bf10:
      local_280 = *(int *)&(this->HandlerMap).field_0x8 - *(int *)&(this->HandlerMap).field_0x34;
      uVar28 = *(uint *)&(this->HandlerMap).field_0x28;
      uStack_290 = 0xffffffff;
      local_2b8 = -1 << ((byte)uVar28 & 0x1f);
      puVar26 = &(this->HandlerMap).field_0x10;
      uStack_2a0 = CONCAT44(uVar27,uVar13);
      uVar13 = uVar28 & 0xffffffe0;
      uStack_284 = local_8c;
      TStack_148._padding_ = uStack_2a0;
      iVar17 = (int)uVar28 >> 5;
      uStack_128 = CONCAT44(uStack_27c,local_280);
      TStack_148.UnvisitedBitMask = 0xffffffff;
      TStack_148.CurrentBitIndex = uStack_28c;
      TStack_148.BaseBitIndex = uStack_288;
      TStack_148._28_4_ = local_8c;
      local_2a8 = pTVar2;
      local_150 = pTVar2;
      TStack_148.Array = pTStack_298;
      if (((int)uVar28 < 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("StartIndex >= 0 && StartIndex <= Array.Num()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x7af,L""), bVar12)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      lVar14 = local_270;
      uVar27 = *(uint *)&(this->HandlerMap).field_0x28;
      if (uVar28 != uVar27) {
        puVar24 = *(undefined1 **)&(this->HandlerMap).field_0x20;
        if (puVar24 == (undefined1 *)0x0) {
          puVar24 = puVar26;
        }
        uVar28 = local_2b8 & *(uint *)(puVar24 + (longlong)iVar17 * 4);
        while (uVar28 == 0) {
          lVar16 = (longlong)iVar17;
          uVar13 = uVar13 + 0x20;
          iVar17 = iVar17 + 1;
          uVar28 = uVar27;
          if ((int)((uVar27 - 1) + ((int)(uVar27 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar17)
          goto LAB_143f5c050;
          uVar28 = *(uint *)(puVar24 + lVar16 * 4 + 4);
        }
        uVar4 = (ulonglong)(-uVar28 & uVar28) * 2 + 1;
        lVar16 = 0x3f;
        if (uVar4 != 0) {
          for (; uVar4 >> lVar16 == 0; lVar16 = lVar16 + -1) {
          }
        }
        local_1e8 = (int)lVar16;
        uVar28 = (uVar13 - 1) + local_1e8;
        if ((int)uVar27 < (int)uVar28) {
          uVar28 = uVar27;
        }
      }
LAB_143f5c050:
      while( true ) {
        pTVar9 = local_150;
        if (*(int *)&local_150->field_0x8 - *(int *)&local_150->field_0x34 != (int)uStack_128) {
          local_2b1 = 0;
          `TSparseArray<TSparseSetElement<TTuple<void_*,Chaos::IEventHandler_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_2b1);
        }
        if (((TStack_148.CurrentBitIndex == uVar28) &&
            (TStack_148.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar26)) &&
           (SRWLock = local_260, pTVar9 == pTVar2)) break;
        plVar25 = *(longlong **)
                   (*(longlong *)pTVar9 + 8 + (longlong)TStack_148.CurrentBitIndex * 0x18);
        (**(code **)(*plVar25 + 8))(plVar25,lVar14);
        TStack_148.UnvisitedBitMask = TStack_148.UnvisitedBitMask & ~TStack_148._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_148);
      }
    }
    else {
      local_268 = 1;
      if (*(int *)&(this->ProxyOwnerToHandlerMap).field_0x8 !=
          *(int *)&(this->ProxyOwnerToHandlerMap).field_0x34) {
        local_88._0_8_ = 0;
        local_88._8_8_ = 0;
        local_68 = (uint *)0x0;
        local_60 = 0;
        local_5c = 0x80;
        local_58 = 0xffffffff;
        local_54 = 0;
        local_48 = (ForElementType<FSetElementId>)0x0;
        local_40 = 0;
        TSet<Chaos::IEventHandler_*,DefaultKeyFuncs<Chaos::IEventHandler_*,0>,FDefaultSetAllocator>
        ::Reserve((TSet<Chaos::IEventHandler_*,DefaultKeyFuncs<Chaos::IEventHandler_*,0>,FDefaultSetAllocator>
                   *)local_88,iVar17);
        local_238._padding_._4_4_ = 1;
        local_240 = (ForElementType<unsigned_int>)(plVar19 + 2);
        local_238._padding_._0_4_ = 0;
        local_238.UnvisitedBitMask = 0xffffffff;
        local_238.CurrentBitIndex = 0;
        local_238.BaseBitIndex = 0;
        local_238.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_240;
        if ((int)plVar19[5] != 0) {
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_238);
        }
        local_2b8 = *(uint *)(plVar19 + 5);
        local_280 = (int)plVar19[1] - *(int *)((longlong)plVar19 + 0x34);
        uStack_2a0 = CONCAT44(local_238._padding_._4_4_,(undefined4)local_238._padding_);
        uStack_28c = local_238.CurrentBitIndex;
        uStack_290 = local_238.UnvisitedBitMask;
        uStack_284 = local_238._28_4_;
        uStack_288 = local_238.BaseBitIndex;
        uVar28 = local_2b8 & 0xffffffe0;
        pTStack_298 = local_238.Array;
        iVar17 = (int)local_2b8 >> 5;
        bVar15 = (byte)local_2b8;
        uStack_1b8 = CONCAT44(uStack_27c,local_280);
        TStack_1d8.Array = local_238.Array;
        local_2a8 = (TMap<void_*,Chaos::IEventHandler_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<void_*,Chaos::IEventHandler_*,0>_>
                     *)plVar19;
        local_1e0 = plVar19;
        TStack_1d8._padding_ = uStack_2a0;
        TStack_1d8._16_8_ = _uStack_290;
        TStack_1d8._24_8_ = _uStack_288;
        if (((int)local_2b8 < 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("StartIndex >= 0 && StartIndex <= Array.Num()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                ,0x7af,L""), bVar12)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        plVar25 = local_1f0;
        FVar8 = local_240;
        uVar13 = *(int *)((longlong)local_240 + 0x18);
        uVar27 = local_2b8;
        if (local_2b8 != uVar13) {
          FVar22 = *(ForElementType<unsigned_int> *)((longlong)local_240 + 0x10);
          if (*(ForElementType<unsigned_int> *)((longlong)local_240 + 0x10) ==
              (ForElementType<unsigned_int>)0x0) {
            FVar22 = local_240;
          }
          uVar27 = -1 << (bVar15 & 0x1f) & *(uint *)((longlong)FVar22 + (longlong)iVar17 * 4);
          while (uVar27 == 0) {
            lVar14 = (longlong)iVar17;
            uVar28 = uVar28 + 0x20;
            iVar17 = iVar17 + 1;
            local_2b8 = uVar13;
            uVar27 = uVar13;
            if ((int)((uVar13 - 1) + ((int)(uVar13 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar17)
            goto LAB_143f5b900;
            uVar27 = *(uint *)((longlong)FVar22 + 4 + lVar14 * 4);
          }
          uVar4 = (ulonglong)(-uVar27 & uVar27) * 2 + 1;
          lVar14 = 0x3f;
          if (uVar4 != 0) {
            for (; uVar4 >> lVar14 == 0; lVar14 = lVar14 + -1) {
            }
          }
          local_218 = (int)lVar14;
          local_2b8 = local_218 + -1 + uVar28;
          uVar27 = local_2b8;
          if ((int)uVar13 < (int)local_2b8) {
            local_2b8 = uVar13;
            uVar27 = uVar13;
          }
        }
LAB_143f5b900:
        while( true ) {
          plVar19 = local_1e0;
          if ((int)local_1e0[1] - *(int *)((longlong)local_1e0 + 0x34) != (int)uStack_1b8) {
            local_2b4 = 0;
            `TSparseArray<TSparseSetElement<TTuple<IPhysicsProxyBase_*,TArray<int,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_2b4);
          }
          uVar28 = local_60;
          SRWLock_00 = local_1f8;
          SRWLock = local_260;
          if (((TStack_1d8.CurrentBitIndex == uVar27) &&
              ((ForElementType<unsigned_int>)TStack_1d8.Array == FVar8)) && (plVar19 == plVar25))
          break;
          TSet<TTuple<UObject_*,Chaos::IEventHandler_*>,TDefaultMapHashableKeyFuncs<UObject_*,Chaos::IEventHandler_*,1>,FDefaultSetAllocator>
          ::TBaseKeyIterator<1>::TBaseKeyIterator<1>
                    (&local_120,
                     (TSet<TTuple<UObject_*,Chaos::IEventHandler_*>,TDefaultMapHashableKeyFuncs<UObject_*,Chaos::IEventHandler_*,1>,FDefaultSetAllocator>
                      *)&this->ProxyOwnerToHandlerMap,
                     *(UObject **)
                      (*(longlong *)((longlong)TStack_1d8.CurrentBitIndex * 0x20 + *plVar19) + 0x10)
                    );
          pUVar11 = local_120.Key;
          pTVar10 = local_120.Set;
          local_248 = CONCAT44(local_120.NextIndex,local_120.Index);
          iVar21 = local_120.Index;
          iVar17 = local_120.NextIndex;
          while (iVar21 != -1) {
            TSet<Chaos::IEventHandler_*,DefaultKeyFuncs<Chaos::IEventHandler_*,0>,FDefaultSetAllocator>
            ::Emplace<Chaos::IEventHandler_*_const_&>
                      ((TSet<Chaos::IEventHandler_*,DefaultKeyFuncs<Chaos::IEventHandler_*,0>,FDefaultSetAllocator>
                        *)local_88,(IEventHandler **)&local_214,
                       (bool *)(*(longlong *)&pTVar10->Elements + ((longlong)iVar21 * 3 + 1) * 8));
            local_248 = CONCAT44(local_248._4_4_,iVar17);
            if (iVar17 == -1) break;
            lVar14 = *(longlong *)&pTVar10->Elements;
            iVar21 = iVar17;
            do {
              iVar17 = *(int *)(lVar14 + 0x10 + (longlong)iVar21 * 0x18);
              if (*(UObject **)(lVar14 + (longlong)iVar21 * 0x18) == pUVar11) break;
              iVar21 = iVar17;
            } while (iVar17 != -1);
            local_248 = CONCAT44(iVar17,iVar21);
          }
          TStack_1d8.UnvisitedBitMask = TStack_1d8.UnvisitedBitMask & ~TStack_1d8._padding_._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_1d8);
        }
        iVar17 = 0;
        uVar13 = (uint)local_268;
        uStack_288 = 0;
        uStack_28c = 0;
        if (local_60 != 0) {
          puVar23 = (uint *)(local_88 + 0x10);
          if (local_68 != (uint *)0x0) {
            puVar23 = local_68;
          }
          uVar27 = *puVar23;
          while (uVar27 == 0) {
            lVar14 = (longlong)iVar17;
            uStack_288 = uStack_288 + 0x20;
            iVar17 = iVar17 + 1;
            uStack_28c = local_60;
            if ((int)((local_60 - 1) + ((int)(local_60 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar17)
            goto LAB_143f5baa0;
            uVar27 = puVar23[lVar14 + 1];
          }
          uVar13 = -uVar27 & uVar27;
          uVar4 = (ulonglong)uVar13 * 2 + 1;
          lVar14 = 0x3f;
          if (uVar4 != 0) {
            for (; uVar4 >> lVar14 == 0; lVar14 = lVar14 + -1) {
            }
          }
          local_214._4_4_ = (int)lVar14;
          uStack_28c = local_214._4_4_ + -1 + uStack_288;
          if ((int)local_60 < (int)uStack_28c) {
            uStack_28c = local_60;
          }
        }
LAB_143f5baa0:
        local_2a8 = (TMap<void_*,Chaos::IEventHandler_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<void_*,Chaos::IEventHandler_*,0>_>
                     *)local_88;
        pTStack_298 = (TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10);
        local_280 = local_88._8_4_ - local_54;
        uStack_290 = 0xffffffff;
        uVar27 = local_60 & 0xffffffe0;
        uStack_2a0 = CONCAT44(uVar13,iVar17);
        uStack_284 = local_cc;
        TStack_1a8._padding_ = uStack_2a0;
        iVar17 = (int)local_60 >> 5;
        uStack_188 = CONCAT44(uStack_27c,local_280);
        bVar15 = (byte)local_60;
        TStack_1a8.UnvisitedBitMask = 0xffffffff;
        TStack_1a8.CurrentBitIndex = uStack_28c;
        TStack_1a8.BaseBitIndex = uStack_288;
        TStack_1a8._28_4_ = local_cc;
        local_1b0 = (longlong *)local_2a8;
        TStack_1a8.Array = pTStack_298;
        if (((int)local_60 < 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("StartIndex >= 0 && StartIndex <= Array.Num()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                ,0x7af,L""), bVar12)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        lVar14 = local_270;
        if (uVar28 != local_60) {
          puVar23 = (uint *)(local_88 + 0x10);
          if (local_68 != (uint *)0x0) {
            puVar23 = local_68;
          }
          uVar28 = -1 << (bVar15 & 0x1f) & puVar23[iVar17];
          while (uVar28 == 0) {
            lVar16 = (longlong)iVar17;
            uVar27 = uVar27 + 0x20;
            iVar17 = iVar17 + 1;
            uVar28 = local_60;
            if ((int)((local_60 - 1) + ((int)(local_60 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar17)
            goto LAB_143f5bbc4;
            uVar28 = puVar23[lVar16 + 1];
          }
          uVar4 = (ulonglong)(-uVar28 & uVar28) * 2 + 1;
          lVar16 = 0x3f;
          if (uVar4 != 0) {
            for (; uVar4 >> lVar16 == 0; lVar16 = lVar16 + -1) {
            }
          }
          local_20c = (int)lVar16;
          uVar28 = local_20c + -1 + uVar27;
          if ((int)local_60 < (int)uVar28) {
            uVar28 = local_60;
          }
        }
LAB_143f5bbc4:
        while( true ) {
          plVar25 = local_1b0;
          if ((int)local_1b0[1] - *(int *)((longlong)local_1b0 + 0x34) != (int)uStack_188) {
            local_2b3 = 0;
            `TSparseArray<TSparseSetElement<Chaos::IEventHandler_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_2b3);
          }
          if (((TStack_1a8.CurrentBitIndex == uVar28) &&
              (TStack_1a8.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10))) &&
             (plVar25 == (longlong *)local_88)) break;
          plVar25 = *(longlong **)(*plVar25 + (longlong)TStack_1a8.CurrentBitIndex * 0x10);
          (**(code **)(*plVar25 + 8))(plVar25,lVar14);
          TStack_1a8.UnvisitedBitMask = TStack_1a8.UnvisitedBitMask & ~TStack_1a8._padding_._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_1a8);
        }
        local_40 = 0;
        if (local_48 != (ForElementType<FSetElementId>)0x0) {
          FMemory::Free((void *)local_48);
        }
        TSparseArray<TSparseSetElement<Chaos::IEventHandler_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSparseSetElement<Chaos::IEventHandler_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  ((TSparseArray<TSparseSetElement<Chaos::IEventHandler_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    *)local_88);
        this = local_278;
      }
      uVar28 = (uint)local_268;
      pTVar2 = &this->HandlersNotInProxyOwnerMap;
      iVar21 = 0;
      puVar26 = &(this->HandlersNotInProxyOwnerMap).field_0x10;
      iVar17 = *(int *)&(this->HandlersNotInProxyOwnerMap).field_0x28;
      uStack_28c = 0;
      uStack_288 = iVar21;
      if (iVar17 != 0) {
        puVar23 = *(uint **)&(this->HandlersNotInProxyOwnerMap).field_0x20;
        if (puVar23 == (uint *)0x0) {
          puVar23 = (uint *)puVar26;
        }
        uVar13 = *puVar23;
        uStack_288 = 0;
        iVar21 = 0;
        while (uVar13 == 0) {
          lVar14 = (longlong)iVar21;
          uStack_288 = uStack_288 + 0x20;
          iVar21 = iVar21 + 1;
          uStack_28c = iVar17;
          if ((int)(iVar17 + -1 + (iVar17 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar21) goto LAB_143f5bcef;
          uVar13 = puVar23[lVar14 + 1];
        }
        uVar28 = -uVar13 & uVar13;
        uVar4 = (ulonglong)uVar28 * 2 + 1;
        lVar14 = 0x3f;
        if (uVar4 != 0) {
          for (; uVar4 >> lVar14 == 0; lVar14 = lVar14 + -1) {
          }
        }
        local_208 = (int)lVar14;
        uStack_28c = uStack_288 + -1 + local_208;
        if (iVar17 < (int)uStack_28c) {
          uStack_28c = iVar17;
        }
      }
LAB_143f5bcef:
      local_280 = *(int *)&(local_278->HandlersNotInProxyOwnerMap).field_0x8 -
                  *(int *)&(local_278->HandlersNotInProxyOwnerMap).field_0x34;
      uVar13 = *(uint *)&(local_278->HandlersNotInProxyOwnerMap).field_0x28;
      uStack_290 = 0xffffffff;
      local_2b8 = -1 << ((byte)uVar13 & 0x1f);
      uVar27 = uVar13 & 0xffffffe0;
      uStack_2a0 = CONCAT44(uVar28,iVar21);
      uStack_284 = local_ac;
      TStack_178._padding_ = uStack_2a0;
      iVar17 = (int)uVar13 >> 5;
      uStack_158 = CONCAT44(uStack_27c,local_280);
      TStack_178.UnvisitedBitMask = 0xffffffff;
      TStack_178.CurrentBitIndex = uStack_28c;
      TStack_178.BaseBitIndex = uStack_288;
      TStack_178._28_4_ = local_ac;
      local_2a8 = pTVar2;
      pTStack_298 = (TBitArray<FDefaultBitArrayAllocator> *)puVar26;
      local_180 = pTVar2;
      TStack_178.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar26;
      if (((int)uVar13 < 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("StartIndex >= 0 && StartIndex <= Array.Num()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x7af,L""), bVar12)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      uVar28 = *(uint *)&(this->HandlersNotInProxyOwnerMap).field_0x28;
      if (uVar13 != uVar28) {
        puVar24 = *(undefined1 **)&(this->HandlersNotInProxyOwnerMap).field_0x20;
        if (puVar24 == (undefined1 *)0x0) {
          puVar24 = puVar26;
        }
        uVar13 = local_2b8 & *(uint *)(puVar24 + (longlong)iVar17 * 4);
        while (uVar13 == 0) {
          lVar14 = (longlong)iVar17;
          uVar27 = uVar27 + 0x20;
          iVar17 = iVar17 + 1;
          uVar13 = uVar28;
          if ((int)((uVar28 - 1) + ((int)(uVar28 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar17)
          goto LAB_143f5be20;
          uVar13 = *(uint *)(puVar24 + lVar14 * 4 + 4);
        }
        uVar4 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
        lVar14 = 0x3f;
        if (uVar4 != 0) {
          for (; uVar4 >> lVar14 == 0; lVar14 = lVar14 + -1) {
          }
        }
        local_204 = (int)lVar14;
        uVar13 = (uVar27 - 1) + local_204;
        if ((int)uVar28 < (int)uVar13) {
          uVar13 = uVar28;
        }
      }
LAB_143f5be20:
      while( true ) {
        pTVar9 = local_180;
        if (*(int *)&local_180->field_0x8 - *(int *)&local_180->field_0x34 != (int)uStack_158) {
          local_2b2 = 0;
          `TSparseArray<TSparseSetElement<TTuple<void_*,Chaos::IEventHandler_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_2b2);
        }
        if (((TStack_178.CurrentBitIndex == uVar13) &&
            (TStack_178.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar26)) &&
           (pTVar9 == pTVar2)) break;
        plVar25 = *(longlong **)
                   (*(longlong *)pTVar9 + 8 + (longlong)TStack_178.CurrentBitIndex * 0x18);
        (**(code **)(*plVar25 + 8))(plVar25,local_270);
        TStack_178.UnvisitedBitMask = TStack_178.UnvisitedBitMask & ~TStack_178._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_178);
      }
    }
    pTVar7 = local_278;
    local_278->bDispatchInProgress = local_2b0;
    if (SRWLock_00 != (FPlatformRWLock *)0x0) {
      ReleaseSRWLockShared((PSRWLOCK)SRWLock_00);
    }
    iVar17 = 0;
    pFVar20 = (FScriptContainerElement *)0x0;
    if ((SRWLock == (FPlatformRWLock *)0x0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("Mutex",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                            ,0x43,L""), bVar12)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    AcquireSRWLockExclusive((PSRWLOCK)SRWLock);
    pTVar3 = &pTVar7->DeferredHandlers;
    if ((TArray<Chaos::IEventHandler_*,TSizedDefaultAllocator<32>_> *)local_f8 != pTVar3) {
      pFVar20 = (pTVar3->AllocatorInstance).Data;
      (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      iVar17 = (pTVar7->DeferredHandlers).ArrayNum;
      (pTVar7->DeferredHandlers).ArrayNum = 0;
      (pTVar7->DeferredHandlers).ArrayMax = 0;
    }
    if (((pTVar7->DeferredHandlers).ArrayNum != 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("DeferredHandlers.Num() == 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\EventManager.h"
                            ,400,L""), bVar12)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    if (SRWLock != (FPlatformRWLock *)0x0) {
      ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
    }
    for (pFVar18 = pFVar20; pFVar18 != pFVar20 + (longlong)iVar17 * 8; pFVar18 = pFVar18 + 8) {
      (**(code **)(pTVar7->_padding_ + 8))(pTVar7,pFVar18);
    }
    if (pFVar20 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar20);
    }
  }
  return;
}

// DispatchConsumerData @ 143f5c200

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
Chaos::TEventContainer<Chaos::FCollisionEventData>::DispatchConsumerData
          (TEventContainer<Chaos::FCollisionEventData> *this)

{
  TArray<void_const_*,TSizedDefaultAllocator<32>_> *pTVar1;
  TMap<void_*,Chaos::IEventHandler_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<void_*,Chaos::IEventHandler_*,0>_>
  *pTVar2;
  TArray<Chaos::IEventHandler_*,TSizedDefaultAllocator<32>_> *pTVar3;
  ulonglong uVar4;
  uint uVar5;
  code *pcVar6;
  TEventContainer<Chaos::FCollisionEventData> *pTVar7;
  ForElementType<unsigned_int> FVar8;
  TMap<void_*,Chaos::IEventHandler_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<void_*,Chaos::IEventHandler_*,0>_>
  *pTVar9;
  TSet<TTuple<UObject_*,Chaos::IEventHandler_*>,TDefaultMapHashableKeyFuncs<UObject_*,Chaos::IEventHandler_*,1>,FDefaultSetAllocator>
  *pTVar10;
  UObject *pUVar11;
  bool bVar12;
  uint uVar13;
  longlong lVar14;
  byte bVar15;
  longlong lVar16;
  int iVar17;
  FPlatformRWLock *SRWLock;
  FScriptContainerElement *pFVar18;
  longlong *plVar19;
  FScriptContainerElement *pFVar20;
  FPlatformRWLock *SRWLock_00;
  int iVar21;
  ForElementType<unsigned_int> FVar22;
  uint *puVar23;
  undefined1 *puVar24;
  longlong *plVar25;
  undefined1 *puVar26;
  uint uVar27;
  uint uVar28;
  undefined1 auStack_2d8 [32];
  uint local_2b8;
  undefined1 local_2b4;
  undefined1 local_2b3;
  undefined1 local_2b2;
  undefined1 local_2b1;
  bool local_2b0;
  TMap<void_*,Chaos::IEventHandler_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<void_*,Chaos::IEventHandler_*,0>_>
  *local_2a8;
  undefined8 uStack_2a0;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_298;
  uint uStack_290;
  uint uStack_28c;
  uint uStack_288;
  undefined4 uStack_284;
  int local_280;
  undefined4 uStack_27c;
  TEventContainer<Chaos::FCollisionEventData> *local_278;
  longlong local_270;
  undefined8 local_268;
  FPlatformRWLock *local_260;
  undefined8 local_248;
  ForElementType<unsigned_int> local_240;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_238;
  int local_218;
  undefined8 local_214;
  int local_20c;
  int local_208;
  int local_204;
  int local_200;
  FPlatformRWLock *local_1f8;
  longlong *local_1f0;
  int local_1e8;
  longlong *local_1e0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_1d8;
  undefined8 uStack_1b8;
  longlong *local_1b0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_1a8;
  undefined8 uStack_188;
  TMap<void_*,Chaos::IEventHandler_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<void_*,Chaos::IEventHandler_*,0>_>
  *local_180;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_178;
  undefined8 uStack_158;
  TMap<void_*,Chaos::IEventHandler_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<void_*,Chaos::IEventHandler_*,0>_>
  *local_150;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_148;
  undefined8 uStack_128;
  TBaseKeyIterator<1> local_120;
  undefined8 local_108 [2];
  longlong local_f8 [5];
  undefined4 local_cc;
  undefined4 local_ac;
  undefined4 local_8c;
  undefined1 local_88 [32];
  uint *local_68;
  uint local_60;
  undefined4 local_5c;
  undefined4 local_58;
  int local_54;
  ForElementType<FSetElementId> local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_2d8;
  local_278 = this;
  bVar12 = IsInGameThread();
  if ((!bVar12) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsInGameThread()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\EventManager.h"
                          ,0x132,L""), bVar12)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  lVar14 = (**(code **)((longlong)*(this->EventBuffer).Ptr + 0x28))();
  if (((lVar14 == 0) || (*(int *)(lVar14 + 0x10) != 0)) ||
     (Chaos::Private::bEventManagerDispatchEmptyEvents != false)) {
    SRWLock = &this->DeferredHandlerLock;
    pFVar20 = (FScriptContainerElement *)0x0;
    iVar17 = 0;
    local_270 = lVar14;
    local_260 = SRWLock;
    if ((SRWLock == (FPlatformRWLock *)0x0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("Mutex",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                            ,0x43,L""), bVar12)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    AcquireSRWLockExclusive((PSRWLOCK)SRWLock);
    pTVar1 = &this->DeferredUnregisterHandlers;
    if ((TArray<void_const_*,TSizedDefaultAllocator<32>_> *)local_108 != pTVar1) {
      pFVar20 = (pTVar1->AllocatorInstance).Data;
      (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      iVar17 = (this->DeferredUnregisterHandlers).ArrayNum;
      (this->DeferredUnregisterHandlers).ArrayNum = 0;
      (this->DeferredUnregisterHandlers).ArrayMax = 0;
    }
    if (((this->DeferredUnregisterHandlers).ArrayNum != 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("DeferredUnregisterHandlers.Num() == 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\EventManager.h"
                            ,0x17f,L""), bVar12)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    if (SRWLock != (FPlatformRWLock *)0x0) {
      ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
    }
    for (pFVar18 = pFVar20; pFVar18 != pFVar20 + (longlong)iVar17 * 8; pFVar18 = pFVar18 + 8) {
      (**(code **)(this->_padding_ + 0x10))(this,*(undefined8 *)pFVar18);
    }
    if (pFVar20 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar20);
    }
    SRWLock_00 = &this->HandlerLock;
    local_1f8 = SRWLock_00;
    if ((SRWLock_00 == (FPlatformRWLock *)0x0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("Mutex",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                            ,0x1c,L""), bVar12)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    AcquireSRWLockShared((PSRWLOCK)SRWLock_00);
    local_2b0 = this->bDispatchInProgress;
    plVar25 = (longlong *)0x0;
    this->bDispatchInProgress = true;
    uStack_288 = 0;
    plVar19 = plVar25;
    if (lVar14 != 0) {
      plVar19 = (longlong *)(lVar14 + 0x20);
    }
    local_1f0 = plVar19;
    if ((plVar19 == (longlong *)0x0) ||
       (iVar17 = (int)plVar19[1] - *(int *)((longlong)plVar19 + 0x34),
       *(int *)&(this->HandlerMap).field_0x8 - *(int *)&(this->HandlerMap).field_0x34 <=
       (*(int *)&(this->HandlersNotInProxyOwnerMap).field_0x8 -
       *(int *)&(this->HandlersNotInProxyOwnerMap).field_0x34) + iVar17)) {
      pTStack_298 = (TBitArray<FDefaultBitArrayAllocator> *)&(this->HandlerMap).field_0x10;
      uVar13 = 0;
      uVar28 = *(uint *)&(this->HandlerMap).field_0x28;
      pTVar2 = &this->HandlerMap;
      uVar27 = 1;
      uStack_28c = uVar13;
      if (uVar28 != 0) {
        puVar23 = *(uint **)&(this->HandlerMap).field_0x20;
        if (puVar23 == (uint *)0x0) {
          puVar23 = (uint *)pTStack_298;
        }
        uVar5 = *puVar23;
        plVar19 = plVar25;
        uStack_288 = 0;
        uVar13 = 0;
        while (uVar5 == 0) {
          iVar17 = (int)plVar25;
          uStack_288 = (int)plVar19 + 0x20;
          plVar19 = (longlong *)(ulonglong)uStack_288;
          uVar13 = iVar17 + 1;
          plVar25 = (longlong *)(ulonglong)uVar13;
          uStack_28c = uVar28;
          if ((int)((uVar28 - 1) + ((int)(uVar28 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar13)
          goto LAB_143f5cbe0;
          uVar5 = puVar23[(longlong)iVar17 + 1];
        }
        uVar27 = -uVar5 & uVar5;
        uVar4 = (ulonglong)uVar27 * 2 + 1;
        lVar14 = 0x3f;
        if (uVar4 != 0) {
          for (; uVar4 >> lVar14 == 0; lVar14 = lVar14 + -1) {
          }
        }
        local_200 = (int)lVar14;
        uStack_28c = (uStack_288 - 1) + local_200;
        if ((int)uVar28 < (int)uStack_28c) {
          uStack_28c = uVar28;
        }
      }
LAB_143f5cbe0:
      local_280 = *(int *)&(this->HandlerMap).field_0x8 - *(int *)&(this->HandlerMap).field_0x34;
      uVar28 = *(uint *)&(this->HandlerMap).field_0x28;
      uStack_290 = 0xffffffff;
      local_2b8 = -1 << ((byte)uVar28 & 0x1f);
      puVar26 = &(this->HandlerMap).field_0x10;
      uStack_2a0 = CONCAT44(uVar27,uVar13);
      uVar13 = uVar28 & 0xffffffe0;
      uStack_284 = local_8c;
      TStack_148._padding_ = uStack_2a0;
      iVar17 = (int)uVar28 >> 5;
      uStack_128 = CONCAT44(uStack_27c,local_280);
      TStack_148.UnvisitedBitMask = 0xffffffff;
      TStack_148.CurrentBitIndex = uStack_28c;
      TStack_148.BaseBitIndex = uStack_288;
      TStack_148._28_4_ = local_8c;
      local_2a8 = pTVar2;
      local_150 = pTVar2;
      TStack_148.Array = pTStack_298;
      if (((int)uVar28 < 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("StartIndex >= 0 && StartIndex <= Array.Num()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x7af,L""), bVar12)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      lVar14 = local_270;
      uVar27 = *(uint *)&(this->HandlerMap).field_0x28;
      if (uVar28 != uVar27) {
        puVar24 = *(undefined1 **)&(this->HandlerMap).field_0x20;
        if (puVar24 == (undefined1 *)0x0) {
          puVar24 = puVar26;
        }
        uVar28 = local_2b8 & *(uint *)(puVar24 + (longlong)iVar17 * 4);
        while (uVar28 == 0) {
          lVar16 = (longlong)iVar17;
          uVar13 = uVar13 + 0x20;
          iVar17 = iVar17 + 1;
          uVar28 = uVar27;
          if ((int)((uVar27 - 1) + ((int)(uVar27 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar17)
          goto LAB_143f5cd20;
          uVar28 = *(uint *)(puVar24 + lVar16 * 4 + 4);
        }
        uVar4 = (ulonglong)(-uVar28 & uVar28) * 2 + 1;
        lVar16 = 0x3f;
        if (uVar4 != 0) {
          for (; uVar4 >> lVar16 == 0; lVar16 = lVar16 + -1) {
          }
        }
        local_1e8 = (int)lVar16;
        uVar28 = (uVar13 - 1) + local_1e8;
        if ((int)uVar27 < (int)uVar28) {
          uVar28 = uVar27;
        }
      }
LAB_143f5cd20:
      while( true ) {
        pTVar9 = local_150;
        if (*(int *)&local_150->field_0x8 - *(int *)&local_150->field_0x34 != (int)uStack_128) {
          local_2b1 = 0;
          `TSparseArray<TSparseSetElement<TTuple<void_*,Chaos::IEventHandler_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_2b1);
        }
        if (((TStack_148.CurrentBitIndex == uVar28) &&
            (TStack_148.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar26)) &&
           (SRWLock = local_260, pTVar9 == pTVar2)) break;
        plVar25 = *(longlong **)
                   (*(longlong *)pTVar9 + 8 + (longlong)TStack_148.CurrentBitIndex * 0x18);
        (**(code **)(*plVar25 + 8))(plVar25,lVar14);
        TStack_148.UnvisitedBitMask = TStack_148.UnvisitedBitMask & ~TStack_148._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_148);
      }
    }
    else {
      local_268 = 1;
      if (*(int *)&(this->ProxyOwnerToHandlerMap).field_0x8 !=
          *(int *)&(this->ProxyOwnerToHandlerMap).field_0x34) {
        local_88._0_8_ = 0;
        local_88._8_8_ = 0;
        local_68 = (uint *)0x0;
        local_60 = 0;
        local_5c = 0x80;
        local_58 = 0xffffffff;
        local_54 = 0;
        local_48 = (ForElementType<FSetElementId>)0x0;
        local_40 = 0;
        TSet<Chaos::IEventHandler_*,DefaultKeyFuncs<Chaos::IEventHandler_*,0>,FDefaultSetAllocator>
        ::Reserve((TSet<Chaos::IEventHandler_*,DefaultKeyFuncs<Chaos::IEventHandler_*,0>,FDefaultSetAllocator>
                   *)local_88,iVar17);
        local_238._padding_._4_4_ = 1;
        local_240 = (ForElementType<unsigned_int>)(plVar19 + 2);
        local_238._padding_._0_4_ = 0;
        local_238.UnvisitedBitMask = 0xffffffff;
        local_238.CurrentBitIndex = 0;
        local_238.BaseBitIndex = 0;
        local_238.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_240;
        if ((int)plVar19[5] != 0) {
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_238);
        }
        local_2b8 = *(uint *)(plVar19 + 5);
        local_280 = (int)plVar19[1] - *(int *)((longlong)plVar19 + 0x34);
        uStack_2a0 = CONCAT44(local_238._padding_._4_4_,(undefined4)local_238._padding_);
        uStack_28c = local_238.CurrentBitIndex;
        uStack_290 = local_238.UnvisitedBitMask;
        uStack_284 = local_238._28_4_;
        uStack_288 = local_238.BaseBitIndex;
        uVar28 = local_2b8 & 0xffffffe0;
        pTStack_298 = local_238.Array;
        iVar17 = (int)local_2b8 >> 5;
        bVar15 = (byte)local_2b8;
        uStack_1b8 = CONCAT44(uStack_27c,local_280);
        TStack_1d8.Array = local_238.Array;
        local_2a8 = (TMap<void_*,Chaos::IEventHandler_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<void_*,Chaos::IEventHandler_*,0>_>
                     *)plVar19;
        local_1e0 = plVar19;
        TStack_1d8._padding_ = uStack_2a0;
        TStack_1d8._16_8_ = _uStack_290;
        TStack_1d8._24_8_ = _uStack_288;
        if (((int)local_2b8 < 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("StartIndex >= 0 && StartIndex <= Array.Num()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                ,0x7af,L""), bVar12)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        plVar25 = local_1f0;
        FVar8 = local_240;
        uVar13 = *(int *)((longlong)local_240 + 0x18);
        uVar27 = local_2b8;
        if (local_2b8 != uVar13) {
          FVar22 = *(ForElementType<unsigned_int> *)((longlong)local_240 + 0x10);
          if (*(ForElementType<unsigned_int> *)((longlong)local_240 + 0x10) ==
              (ForElementType<unsigned_int>)0x0) {
            FVar22 = local_240;
          }
          uVar27 = -1 << (bVar15 & 0x1f) & *(uint *)((longlong)FVar22 + (longlong)iVar17 * 4);
          while (uVar27 == 0) {
            lVar14 = (longlong)iVar17;
            uVar28 = uVar28 + 0x20;
            iVar17 = iVar17 + 1;
            local_2b8 = uVar13;
            uVar27 = uVar13;
            if ((int)((uVar13 - 1) + ((int)(uVar13 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar17)
            goto LAB_143f5c5d0;
            uVar27 = *(uint *)((longlong)FVar22 + 4 + lVar14 * 4);
          }
          uVar4 = (ulonglong)(-uVar27 & uVar27) * 2 + 1;
          lVar14 = 0x3f;
          if (uVar4 != 0) {
            for (; uVar4 >> lVar14 == 0; lVar14 = lVar14 + -1) {
            }
          }
          local_218 = (int)lVar14;
          local_2b8 = local_218 + -1 + uVar28;
          uVar27 = local_2b8;
          if ((int)uVar13 < (int)local_2b8) {
            local_2b8 = uVar13;
            uVar27 = uVar13;
          }
        }
LAB_143f5c5d0:
        while( true ) {
          plVar19 = local_1e0;
          if ((int)local_1e0[1] - *(int *)((longlong)local_1e0 + 0x34) != (int)uStack_1b8) {
            local_2b4 = 0;
            `TSparseArray<TSparseSetElement<TTuple<IPhysicsProxyBase_*,TArray<int,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_2b4);
          }
          uVar28 = local_60;
          SRWLock_00 = local_1f8;
          SRWLock = local_260;
          if (((TStack_1d8.CurrentBitIndex == uVar27) &&
              ((ForElementType<unsigned_int>)TStack_1d8.Array == FVar8)) && (plVar19 == plVar25))
          break;
          TSet<TTuple<UObject_*,Chaos::IEventHandler_*>,TDefaultMapHashableKeyFuncs<UObject_*,Chaos::IEventHandler_*,1>,FDefaultSetAllocator>
          ::TBaseKeyIterator<1>::TBaseKeyIterator<1>
                    (&local_120,
                     (TSet<TTuple<UObject_*,Chaos::IEventHandler_*>,TDefaultMapHashableKeyFuncs<UObject_*,Chaos::IEventHandler_*,1>,FDefaultSetAllocator>
                      *)&this->ProxyOwnerToHandlerMap,
                     *(UObject **)
                      (*(longlong *)((longlong)TStack_1d8.CurrentBitIndex * 0x20 + *plVar19) + 0x10)
                    );
          pUVar11 = local_120.Key;
          pTVar10 = local_120.Set;
          local_248 = CONCAT44(local_120.NextIndex,local_120.Index);
          iVar21 = local_120.Index;
          iVar17 = local_120.NextIndex;
          while (iVar21 != -1) {
            TSet<Chaos::IEventHandler_*,DefaultKeyFuncs<Chaos::IEventHandler_*,0>,FDefaultSetAllocator>
            ::Emplace<Chaos::IEventHandler_*_const_&>
                      ((TSet<Chaos::IEventHandler_*,DefaultKeyFuncs<Chaos::IEventHandler_*,0>,FDefaultSetAllocator>
                        *)local_88,(IEventHandler **)&local_214,
                       (bool *)(*(longlong *)&pTVar10->Elements + ((longlong)iVar21 * 3 + 1) * 8));
            local_248 = CONCAT44(local_248._4_4_,iVar17);
            if (iVar17 == -1) break;
            lVar14 = *(longlong *)&pTVar10->Elements;
            iVar21 = iVar17;
            do {
              iVar17 = *(int *)(lVar14 + 0x10 + (longlong)iVar21 * 0x18);
              if (*(UObject **)(lVar14 + (longlong)iVar21 * 0x18) == pUVar11) break;
              iVar21 = iVar17;
            } while (iVar17 != -1);
            local_248 = CONCAT44(iVar17,iVar21);
          }
          TStack_1d8.UnvisitedBitMask = TStack_1d8.UnvisitedBitMask & ~TStack_1d8._padding_._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_1d8);
        }
        iVar17 = 0;
        uVar13 = (uint)local_268;
        uStack_288 = 0;
        uStack_28c = 0;
        if (local_60 != 0) {
          puVar23 = (uint *)(local_88 + 0x10);
          if (local_68 != (uint *)0x0) {
            puVar23 = local_68;
          }
          uVar27 = *puVar23;
          while (uVar27 == 0) {
            lVar14 = (longlong)iVar17;
            uStack_288 = uStack_288 + 0x20;
            iVar17 = iVar17 + 1;
            uStack_28c = local_60;
            if ((int)((local_60 - 1) + ((int)(local_60 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar17)
            goto LAB_143f5c770;
            uVar27 = puVar23[lVar14 + 1];
          }
          uVar13 = -uVar27 & uVar27;
          uVar4 = (ulonglong)uVar13 * 2 + 1;
          lVar14 = 0x3f;
          if (uVar4 != 0) {
            for (; uVar4 >> lVar14 == 0; lVar14 = lVar14 + -1) {
            }
          }
          local_214._4_4_ = (int)lVar14;
          uStack_28c = local_214._4_4_ + -1 + uStack_288;
          if ((int)local_60 < (int)uStack_28c) {
            uStack_28c = local_60;
          }
        }
LAB_143f5c770:
        local_2a8 = (TMap<void_*,Chaos::IEventHandler_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<void_*,Chaos::IEventHandler_*,0>_>
                     *)local_88;
        pTStack_298 = (TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10);
        local_280 = local_88._8_4_ - local_54;
        uStack_290 = 0xffffffff;
        uVar27 = local_60 & 0xffffffe0;
        uStack_2a0 = CONCAT44(uVar13,iVar17);
        uStack_284 = local_cc;
        TStack_1a8._padding_ = uStack_2a0;
        iVar17 = (int)local_60 >> 5;
        uStack_188 = CONCAT44(uStack_27c,local_280);
        bVar15 = (byte)local_60;
        TStack_1a8.UnvisitedBitMask = 0xffffffff;
        TStack_1a8.CurrentBitIndex = uStack_28c;
        TStack_1a8.BaseBitIndex = uStack_288;
        TStack_1a8._28_4_ = local_cc;
        local_1b0 = (longlong *)local_2a8;
        TStack_1a8.Array = pTStack_298;
        if (((int)local_60 < 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("StartIndex >= 0 && StartIndex <= Array.Num()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                ,0x7af,L""), bVar12)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        lVar14 = local_270;
        if (uVar28 != local_60) {
          puVar23 = (uint *)(local_88 + 0x10);
          if (local_68 != (uint *)0x0) {
            puVar23 = local_68;
          }
          uVar28 = -1 << (bVar15 & 0x1f) & puVar23[iVar17];
          while (uVar28 == 0) {
            lVar16 = (longlong)iVar17;
            uVar27 = uVar27 + 0x20;
            iVar17 = iVar17 + 1;
            uVar28 = local_60;
            if ((int)((local_60 - 1) + ((int)(local_60 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar17)
            goto LAB_143f5c894;
            uVar28 = puVar23[lVar16 + 1];
          }
          uVar4 = (ulonglong)(-uVar28 & uVar28) * 2 + 1;
          lVar16 = 0x3f;
          if (uVar4 != 0) {
            for (; uVar4 >> lVar16 == 0; lVar16 = lVar16 + -1) {
            }
          }
          local_20c = (int)lVar16;
          uVar28 = local_20c + -1 + uVar27;
          if ((int)local_60 < (int)uVar28) {
            uVar28 = local_60;
          }
        }
LAB_143f5c894:
        while( true ) {
          plVar25 = local_1b0;
          if ((int)local_1b0[1] - *(int *)((longlong)local_1b0 + 0x34) != (int)uStack_188) {
            local_2b3 = 0;
            `TSparseArray<TSparseSetElement<Chaos::IEventHandler_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_2b3);
          }
          if (((TStack_1a8.CurrentBitIndex == uVar28) &&
              (TStack_1a8.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10))) &&
             (plVar25 == (longlong *)local_88)) break;
          plVar25 = *(longlong **)(*plVar25 + (longlong)TStack_1a8.CurrentBitIndex * 0x10);
          (**(code **)(*plVar25 + 8))(plVar25,lVar14);
          TStack_1a8.UnvisitedBitMask = TStack_1a8.UnvisitedBitMask & ~TStack_1a8._padding_._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_1a8);
        }
        local_40 = 0;
        if (local_48 != (ForElementType<FSetElementId>)0x0) {
          FMemory::Free((void *)local_48);
        }
        TSparseArray<TSparseSetElement<Chaos::IEventHandler_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSparseSetElement<Chaos::IEventHandler_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  ((TSparseArray<TSparseSetElement<Chaos::IEventHandler_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    *)local_88);
        this = local_278;
      }
      uVar28 = (uint)local_268;
      pTVar2 = &this->HandlersNotInProxyOwnerMap;
      iVar21 = 0;
      puVar26 = &(this->HandlersNotInProxyOwnerMap).field_0x10;
      iVar17 = *(int *)&(this->HandlersNotInProxyOwnerMap).field_0x28;
      uStack_28c = 0;
      uStack_288 = iVar21;
      if (iVar17 != 0) {
        puVar23 = *(uint **)&(this->HandlersNotInProxyOwnerMap).field_0x20;
        if (puVar23 == (uint *)0x0) {
          puVar23 = (uint *)puVar26;
        }
        uVar13 = *puVar23;
        uStack_288 = 0;
        iVar21 = 0;
        while (uVar13 == 0) {
          lVar14 = (longlong)iVar21;
          uStack_288 = uStack_288 + 0x20;
          iVar21 = iVar21 + 1;
          uStack_28c = iVar17;
          if ((int)(iVar17 + -1 + (iVar17 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar21) goto LAB_143f5c9bf;
          uVar13 = puVar23[lVar14 + 1];
        }
        uVar28 = -uVar13 & uVar13;
        uVar4 = (ulonglong)uVar28 * 2 + 1;
        lVar14 = 0x3f;
        if (uVar4 != 0) {
          for (; uVar4 >> lVar14 == 0; lVar14 = lVar14 + -1) {
          }
        }
        local_208 = (int)lVar14;
        uStack_28c = uStack_288 + -1 + local_208;
        if (iVar17 < (int)uStack_28c) {
          uStack_28c = iVar17;
        }
      }
LAB_143f5c9bf:
      local_280 = *(int *)&(local_278->HandlersNotInProxyOwnerMap).field_0x8 -
                  *(int *)&(local_278->HandlersNotInProxyOwnerMap).field_0x34;
      uVar13 = *(uint *)&(local_278->HandlersNotInProxyOwnerMap).field_0x28;
      uStack_290 = 0xffffffff;
      local_2b8 = -1 << ((byte)uVar13 & 0x1f);
      uVar27 = uVar13 & 0xffffffe0;
      uStack_2a0 = CONCAT44(uVar28,iVar21);
      uStack_284 = local_ac;
      TStack_178._padding_ = uStack_2a0;
      iVar17 = (int)uVar13 >> 5;
      uStack_158 = CONCAT44(uStack_27c,local_280);
      TStack_178.UnvisitedBitMask = 0xffffffff;
      TStack_178.CurrentBitIndex = uStack_28c;
      TStack_178.BaseBitIndex = uStack_288;
      TStack_178._28_4_ = local_ac;
      local_2a8 = pTVar2;
      pTStack_298 = (TBitArray<FDefaultBitArrayAllocator> *)puVar26;
      local_180 = pTVar2;
      TStack_178.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar26;
      if (((int)uVar13 < 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("StartIndex >= 0 && StartIndex <= Array.Num()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x7af,L""), bVar12)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      uVar28 = *(uint *)&(this->HandlersNotInProxyOwnerMap).field_0x28;
      if (uVar13 != uVar28) {
        puVar24 = *(undefined1 **)&(this->HandlersNotInProxyOwnerMap).field_0x20;
        if (puVar24 == (undefined1 *)0x0) {
          puVar24 = puVar26;
        }
        uVar13 = local_2b8 & *(uint *)(puVar24 + (longlong)iVar17 * 4);
        while (uVar13 == 0) {
          lVar14 = (longlong)iVar17;
          uVar27 = uVar27 + 0x20;
          iVar17 = iVar17 + 1;
          uVar13 = uVar28;
          if ((int)((uVar28 - 1) + ((int)(uVar28 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar17)
          goto LAB_143f5caf0;
          uVar13 = *(uint *)(puVar24 + lVar14 * 4 + 4);
        }
        uVar4 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
        lVar14 = 0x3f;
        if (uVar4 != 0) {
          for (; uVar4 >> lVar14 == 0; lVar14 = lVar14 + -1) {
          }
        }
        local_204 = (int)lVar14;
        uVar13 = (uVar27 - 1) + local_204;
        if ((int)uVar28 < (int)uVar13) {
          uVar13 = uVar28;
        }
      }
LAB_143f5caf0:
      while( true ) {
        pTVar9 = local_180;
        if (*(int *)&local_180->field_0x8 - *(int *)&local_180->field_0x34 != (int)uStack_158) {
          local_2b2 = 0;
          `TSparseArray<TSparseSetElement<TTuple<void_*,Chaos::IEventHandler_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_2b2);
        }
        if (((TStack_178.CurrentBitIndex == uVar13) &&
            (TStack_178.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar26)) &&
           (pTVar9 == pTVar2)) break;
        plVar25 = *(longlong **)
                   (*(longlong *)pTVar9 + 8 + (longlong)TStack_178.CurrentBitIndex * 0x18);
        (**(code **)(*plVar25 + 8))(plVar25,local_270);
        TStack_178.UnvisitedBitMask = TStack_178.UnvisitedBitMask & ~TStack_178._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_178);
      }
    }
    pTVar7 = local_278;
    local_278->bDispatchInProgress = local_2b0;
    if (SRWLock_00 != (FPlatformRWLock *)0x0) {
      ReleaseSRWLockShared((PSRWLOCK)SRWLock_00);
    }
    iVar17 = 0;
    pFVar20 = (FScriptContainerElement *)0x0;
    if ((SRWLock == (FPlatformRWLock *)0x0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("Mutex",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                            ,0x43,L""), bVar12)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    AcquireSRWLockExclusive((PSRWLOCK)SRWLock);
    pTVar3 = &pTVar7->DeferredHandlers;
    if ((TArray<Chaos::IEventHandler_*,TSizedDefaultAllocator<32>_> *)local_f8 != pTVar3) {
      pFVar20 = (pTVar3->AllocatorInstance).Data;
      (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      iVar17 = (pTVar7->DeferredHandlers).ArrayNum;
      (pTVar7->DeferredHandlers).ArrayNum = 0;
      (pTVar7->DeferredHandlers).ArrayMax = 0;
    }
    if (((pTVar7->DeferredHandlers).ArrayNum != 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("DeferredHandlers.Num() == 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\EventManager.h"
                            ,400,L""), bVar12)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    if (SRWLock != (FPlatformRWLock *)0x0) {
      ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
    }
    for (pFVar18 = pFVar20; pFVar18 != pFVar20 + (longlong)iVar17 * 8; pFVar18 = pFVar18 + 8) {
      (**(code **)(pTVar7->_padding_ + 8))(pTVar7,pFVar18);
    }
    if (pFVar20 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar20);
    }
  }
  return;
}

// DispatchConsumerData @ 143f5ced0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
Chaos::TEventContainer<Chaos::FCrumblingEventData>::DispatchConsumerData
          (TEventContainer<Chaos::FCrumblingEventData> *this)

{
  TArray<void_const_*,TSizedDefaultAllocator<32>_> *pTVar1;
  TMap<void_*,Chaos::IEventHandler_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<void_*,Chaos::IEventHandler_*,0>_>
  *pTVar2;
  TArray<Chaos::IEventHandler_*,TSizedDefaultAllocator<32>_> *pTVar3;
  ulonglong uVar4;
  uint uVar5;
  code *pcVar6;
  TEventContainer<Chaos::FCrumblingEventData> *pTVar7;
  ForElementType<unsigned_int> FVar8;
  TMap<void_*,Chaos::IEventHandler_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<void_*,Chaos::IEventHandler_*,0>_>
  *pTVar9;
  TSet<TTuple<UObject_*,Chaos::IEventHandler_*>,TDefaultMapHashableKeyFuncs<UObject_*,Chaos::IEventHandler_*,1>,FDefaultSetAllocator>
  *pTVar10;
  UObject *pUVar11;
  bool bVar12;
  uint uVar13;
  longlong lVar14;
  byte bVar15;
  longlong lVar16;
  int iVar17;
  FPlatformRWLock *SRWLock;
  FScriptContainerElement *pFVar18;
  longlong *plVar19;
  FScriptContainerElement *pFVar20;
  FPlatformRWLock *SRWLock_00;
  int iVar21;
  ForElementType<unsigned_int> FVar22;
  uint *puVar23;
  undefined1 *puVar24;
  longlong *plVar25;
  undefined1 *puVar26;
  uint uVar27;
  uint uVar28;
  undefined1 auStack_2d8 [32];
  uint local_2b8;
  undefined1 local_2b4;
  undefined1 local_2b3;
  undefined1 local_2b2;
  undefined1 local_2b1;
  bool local_2b0;
  TMap<void_*,Chaos::IEventHandler_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<void_*,Chaos::IEventHandler_*,0>_>
  *local_2a8;
  undefined8 uStack_2a0;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_298;
  uint uStack_290;
  uint uStack_28c;
  uint uStack_288;
  undefined4 uStack_284;
  int local_280;
  undefined4 uStack_27c;
  TEventContainer<Chaos::FCrumblingEventData> *local_278;
  longlong local_270;
  undefined8 local_268;
  FPlatformRWLock *local_260;
  undefined8 local_248;
  ForElementType<unsigned_int> local_240;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_238;
  int local_218;
  undefined8 local_214;
  int local_20c;
  int local_208;
  int local_204;
  int local_200;
  FPlatformRWLock *local_1f8;
  longlong *local_1f0;
  int local_1e8;
  longlong *local_1e0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_1d8;
  undefined8 uStack_1b8;
  longlong *local_1b0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_1a8;
  undefined8 uStack_188;
  TMap<void_*,Chaos::IEventHandler_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<void_*,Chaos::IEventHandler_*,0>_>
  *local_180;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_178;
  undefined8 uStack_158;
  TMap<void_*,Chaos::IEventHandler_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<void_*,Chaos::IEventHandler_*,0>_>
  *local_150;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_148;
  undefined8 uStack_128;
  TBaseKeyIterator<1> local_120;
  undefined8 local_108 [2];
  longlong local_f8 [5];
  undefined4 local_cc;
  undefined4 local_ac;
  undefined4 local_8c;
  undefined1 local_88 [32];
  uint *local_68;
  uint local_60;
  undefined4 local_5c;
  undefined4 local_58;
  int local_54;
  ForElementType<FSetElementId> local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_2d8;
  local_278 = this;
  bVar12 = IsInGameThread();
  if ((!bVar12) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsInGameThread()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\EventManager.h"
                          ,0x132,L""), bVar12)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  lVar14 = (**(code **)((longlong)*(this->EventBuffer).Ptr + 0x28))();
  if (((lVar14 == 0) || (*(int *)(lVar14 + 0x10) != 0)) ||
     (Chaos::Private::bEventManagerDispatchEmptyEvents != false)) {
    SRWLock = &this->DeferredHandlerLock;
    pFVar20 = (FScriptContainerElement *)0x0;
    iVar17 = 0;
    local_270 = lVar14;
    local_260 = SRWLock;
    if ((SRWLock == (FPlatformRWLock *)0x0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("Mutex",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                            ,0x43,L""), bVar12)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    AcquireSRWLockExclusive((PSRWLOCK)SRWLock);
    pTVar1 = &this->DeferredUnregisterHandlers;
    if ((TArray<void_const_*,TSizedDefaultAllocator<32>_> *)local_108 != pTVar1) {
      pFVar20 = (pTVar1->AllocatorInstance).Data;
      (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      iVar17 = (this->DeferredUnregisterHandlers).ArrayNum;
      (this->DeferredUnregisterHandlers).ArrayNum = 0;
      (this->DeferredUnregisterHandlers).ArrayMax = 0;
    }
    if (((this->DeferredUnregisterHandlers).ArrayNum != 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("DeferredUnregisterHandlers.Num() == 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\EventManager.h"
                            ,0x17f,L""), bVar12)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    if (SRWLock != (FPlatformRWLock *)0x0) {
      ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
    }
    for (pFVar18 = pFVar20; pFVar18 != pFVar20 + (longlong)iVar17 * 8; pFVar18 = pFVar18 + 8) {
      (**(code **)(this->_padding_ + 0x10))(this,*(undefined8 *)pFVar18);
    }
    if (pFVar20 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar20);
    }
    SRWLock_00 = &this->HandlerLock;
    local_1f8 = SRWLock_00;
    if ((SRWLock_00 == (FPlatformRWLock *)0x0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("Mutex",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                            ,0x1c,L""), bVar12)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    AcquireSRWLockShared((PSRWLOCK)SRWLock_00);
    local_2b0 = this->bDispatchInProgress;
    plVar25 = (longlong *)0x0;
    this->bDispatchInProgress = true;
    uStack_288 = 0;
    plVar19 = plVar25;
    if (lVar14 != 0) {
      plVar19 = (longlong *)(lVar14 + 0x28);
    }
    local_1f0 = plVar19;
    if ((plVar19 == (longlong *)0x0) ||
       (iVar17 = (int)plVar19[1] - *(int *)((longlong)plVar19 + 0x34),
       *(int *)&(this->HandlerMap).field_0x8 - *(int *)&(this->HandlerMap).field_0x34 <=
       (*(int *)&(this->HandlersNotInProxyOwnerMap).field_0x8 -
       *(int *)&(this->HandlersNotInProxyOwnerMap).field_0x34) + iVar17)) {
      pTStack_298 = (TBitArray<FDefaultBitArrayAllocator> *)&(this->HandlerMap).field_0x10;
      uVar13 = 0;
      uVar28 = *(uint *)&(this->HandlerMap).field_0x28;
      pTVar2 = &this->HandlerMap;
      uVar27 = 1;
      uStack_28c = uVar13;
      if (uVar28 != 0) {
        puVar23 = *(uint **)&(this->HandlerMap).field_0x20;
        if (puVar23 == (uint *)0x0) {
          puVar23 = (uint *)pTStack_298;
        }
        uVar5 = *puVar23;
        plVar19 = plVar25;
        uStack_288 = 0;
        uVar13 = 0;
        while (uVar5 == 0) {
          iVar17 = (int)plVar25;
          uStack_288 = (int)plVar19 + 0x20;
          plVar19 = (longlong *)(ulonglong)uStack_288;
          uVar13 = iVar17 + 1;
          plVar25 = (longlong *)(ulonglong)uVar13;
          uStack_28c = uVar28;
          if ((int)((uVar28 - 1) + ((int)(uVar28 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar13)
          goto LAB_143f5d8b0;
          uVar5 = puVar23[(longlong)iVar17 + 1];
        }
        uVar27 = -uVar5 & uVar5;
        uVar4 = (ulonglong)uVar27 * 2 + 1;
        lVar14 = 0x3f;
        if (uVar4 != 0) {
          for (; uVar4 >> lVar14 == 0; lVar14 = lVar14 + -1) {
          }
        }
        local_200 = (int)lVar14;
        uStack_28c = (uStack_288 - 1) + local_200;
        if ((int)uVar28 < (int)uStack_28c) {
          uStack_28c = uVar28;
        }
      }
LAB_143f5d8b0:
      local_280 = *(int *)&(this->HandlerMap).field_0x8 - *(int *)&(this->HandlerMap).field_0x34;
      uVar28 = *(uint *)&(this->HandlerMap).field_0x28;
      uStack_290 = 0xffffffff;
      local_2b8 = -1 << ((byte)uVar28 & 0x1f);
      puVar26 = &(this->HandlerMap).field_0x10;
      uStack_2a0 = CONCAT44(uVar27,uVar13);
      uVar13 = uVar28 & 0xffffffe0;
      uStack_284 = local_8c;
      TStack_148._padding_ = uStack_2a0;
      iVar17 = (int)uVar28 >> 5;
      uStack_128 = CONCAT44(uStack_27c,local_280);
      TStack_148.UnvisitedBitMask = 0xffffffff;
      TStack_148.CurrentBitIndex = uStack_28c;
      TStack_148.BaseBitIndex = uStack_288;
      TStack_148._28_4_ = local_8c;
      local_2a8 = pTVar2;
      local_150 = pTVar2;
      TStack_148.Array = pTStack_298;
      if (((int)uVar28 < 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("StartIndex >= 0 && StartIndex <= Array.Num()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x7af,L""), bVar12)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      lVar14 = local_270;
      uVar27 = *(uint *)&(this->HandlerMap).field_0x28;
      if (uVar28 != uVar27) {
        puVar24 = *(undefined1 **)&(this->HandlerMap).field_0x20;
        if (puVar24 == (undefined1 *)0x0) {
          puVar24 = puVar26;
        }
        uVar28 = local_2b8 & *(uint *)(puVar24 + (longlong)iVar17 * 4);
        while (uVar28 == 0) {
          lVar16 = (longlong)iVar17;
          uVar13 = uVar13 + 0x20;
          iVar17 = iVar17 + 1;
          uVar28 = uVar27;
          if ((int)((uVar27 - 1) + ((int)(uVar27 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar17)
          goto LAB_143f5d9f0;
          uVar28 = *(uint *)(puVar24 + lVar16 * 4 + 4);
        }
        uVar4 = (ulonglong)(-uVar28 & uVar28) * 2 + 1;
        lVar16 = 0x3f;
        if (uVar4 != 0) {
          for (; uVar4 >> lVar16 == 0; lVar16 = lVar16 + -1) {
          }
        }
        local_1e8 = (int)lVar16;
        uVar28 = (uVar13 - 1) + local_1e8;
        if ((int)uVar27 < (int)uVar28) {
          uVar28 = uVar27;
        }
      }
LAB_143f5d9f0:
      while( true ) {
        pTVar9 = local_150;
        if (*(int *)&local_150->field_0x8 - *(int *)&local_150->field_0x34 != (int)uStack_128) {
          local_2b1 = 0;
          `TSparseArray<TSparseSetElement<TTuple<void_*,Chaos::IEventHandler_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_2b1);
        }
        if (((TStack_148.CurrentBitIndex == uVar28) &&
            (TStack_148.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar26)) &&
           (SRWLock = local_260, pTVar9 == pTVar2)) break;
        plVar25 = *(longlong **)
                   (*(longlong *)pTVar9 + 8 + (longlong)TStack_148.CurrentBitIndex * 0x18);
        (**(code **)(*plVar25 + 8))(plVar25,lVar14);
        TStack_148.UnvisitedBitMask = TStack_148.UnvisitedBitMask & ~TStack_148._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_148);
      }
    }
    else {
      local_268 = 1;
      if (*(int *)&(this->ProxyOwnerToHandlerMap).field_0x8 !=
          *(int *)&(this->ProxyOwnerToHandlerMap).field_0x34) {
        local_88._0_8_ = 0;
        local_88._8_8_ = 0;
        local_68 = (uint *)0x0;
        local_60 = 0;
        local_5c = 0x80;
        local_58 = 0xffffffff;
        local_54 = 0;
        local_48 = (ForElementType<FSetElementId>)0x0;
        local_40 = 0;
        TSet<Chaos::IEventHandler_*,DefaultKeyFuncs<Chaos::IEventHandler_*,0>,FDefaultSetAllocator>
        ::Reserve((TSet<Chaos::IEventHandler_*,DefaultKeyFuncs<Chaos::IEventHandler_*,0>,FDefaultSetAllocator>
                   *)local_88,iVar17);
        local_238._padding_._4_4_ = 1;
        local_240 = (ForElementType<unsigned_int>)(plVar19 + 2);
        local_238._padding_._0_4_ = 0;
        local_238.UnvisitedBitMask = 0xffffffff;
        local_238.CurrentBitIndex = 0;
        local_238.BaseBitIndex = 0;
        local_238.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_240;
        if ((int)plVar19[5] != 0) {
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_238);
        }
        local_2b8 = *(uint *)(plVar19 + 5);
        local_280 = (int)plVar19[1] - *(int *)((longlong)plVar19 + 0x34);
        uStack_2a0 = CONCAT44(local_238._padding_._4_4_,(undefined4)local_238._padding_);
        uStack_28c = local_238.CurrentBitIndex;
        uStack_290 = local_238.UnvisitedBitMask;
        uStack_284 = local_238._28_4_;
        uStack_288 = local_238.BaseBitIndex;
        uVar28 = local_2b8 & 0xffffffe0;
        pTStack_298 = local_238.Array;
        iVar17 = (int)local_2b8 >> 5;
        bVar15 = (byte)local_2b8;
        uStack_1b8 = CONCAT44(uStack_27c,local_280);
        TStack_1d8.Array = local_238.Array;
        local_2a8 = (TMap<void_*,Chaos::IEventHandler_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<void_*,Chaos::IEventHandler_*,0>_>
                     *)plVar19;
        local_1e0 = plVar19;
        TStack_1d8._padding_ = uStack_2a0;
        TStack_1d8._16_8_ = _uStack_290;
        TStack_1d8._24_8_ = _uStack_288;
        if (((int)local_2b8 < 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("StartIndex >= 0 && StartIndex <= Array.Num()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                ,0x7af,L""), bVar12)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        plVar25 = local_1f0;
        FVar8 = local_240;
        uVar13 = *(int *)((longlong)local_240 + 0x18);
        uVar27 = local_2b8;
        if (local_2b8 != uVar13) {
          FVar22 = *(ForElementType<unsigned_int> *)((longlong)local_240 + 0x10);
          if (*(ForElementType<unsigned_int> *)((longlong)local_240 + 0x10) ==
              (ForElementType<unsigned_int>)0x0) {
            FVar22 = local_240;
          }
          uVar27 = -1 << (bVar15 & 0x1f) & *(uint *)((longlong)FVar22 + (longlong)iVar17 * 4);
          while (uVar27 == 0) {
            lVar14 = (longlong)iVar17;
            uVar28 = uVar28 + 0x20;
            iVar17 = iVar17 + 1;
            local_2b8 = uVar13;
            uVar27 = uVar13;
            if ((int)((uVar13 - 1) + ((int)(uVar13 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar17)
            goto LAB_143f5d2a0;
            uVar27 = *(uint *)((longlong)FVar22 + 4 + lVar14 * 4);
          }
          uVar4 = (ulonglong)(-uVar27 & uVar27) * 2 + 1;
          lVar14 = 0x3f;
          if (uVar4 != 0) {
            for (; uVar4 >> lVar14 == 0; lVar14 = lVar14 + -1) {
            }
          }
          local_218 = (int)lVar14;
          local_2b8 = local_218 + -1 + uVar28;
          uVar27 = local_2b8;
          if ((int)uVar13 < (int)local_2b8) {
            local_2b8 = uVar13;
            uVar27 = uVar13;
          }
        }
LAB_143f5d2a0:
        while( true ) {
          plVar19 = local_1e0;
          if ((int)local_1e0[1] - *(int *)((longlong)local_1e0 + 0x34) != (int)uStack_1b8) {
            local_2b4 = 0;
            `TSparseArray<TSparseSetElement<TTuple<IPhysicsProxyBase_*,TArray<int,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_2b4);
          }
          uVar28 = local_60;
          SRWLock_00 = local_1f8;
          SRWLock = local_260;
          if (((TStack_1d8.CurrentBitIndex == uVar27) &&
              ((ForElementType<unsigned_int>)TStack_1d8.Array == FVar8)) && (plVar19 == plVar25))
          break;
          TSet<TTuple<UObject_*,Chaos::IEventHandler_*>,TDefaultMapHashableKeyFuncs<UObject_*,Chaos::IEventHandler_*,1>,FDefaultSetAllocator>
          ::TBaseKeyIterator<1>::TBaseKeyIterator<1>
                    (&local_120,
                     (TSet<TTuple<UObject_*,Chaos::IEventHandler_*>,TDefaultMapHashableKeyFuncs<UObject_*,Chaos::IEventHandler_*,1>,FDefaultSetAllocator>
                      *)&this->ProxyOwnerToHandlerMap,
                     *(UObject **)
                      (*(longlong *)((longlong)TStack_1d8.CurrentBitIndex * 0x20 + *plVar19) + 0x10)
                    );
          pUVar11 = local_120.Key;
          pTVar10 = local_120.Set;
          local_248 = CONCAT44(local_120.NextIndex,local_120.Index);
          iVar21 = local_120.Index;
          iVar17 = local_120.NextIndex;
          while (iVar21 != -1) {
            TSet<Chaos::IEventHandler_*,DefaultKeyFuncs<Chaos::IEventHandler_*,0>,FDefaultSetAllocator>
            ::Emplace<Chaos::IEventHandler_*_const_&>
                      ((TSet<Chaos::IEventHandler_*,DefaultKeyFuncs<Chaos::IEventHandler_*,0>,FDefaultSetAllocator>
                        *)local_88,(IEventHandler **)&local_214,
                       (bool *)(*(longlong *)&pTVar10->Elements + ((longlong)iVar21 * 3 + 1) * 8));
            local_248 = CONCAT44(local_248._4_4_,iVar17);
            if (iVar17 == -1) break;
            lVar14 = *(longlong *)&pTVar10->Elements;
            iVar21 = iVar17;
            do {
              iVar17 = *(int *)(lVar14 + 0x10 + (longlong)iVar21 * 0x18);
              if (*(UObject **)(lVar14 + (longlong)iVar21 * 0x18) == pUVar11) break;
              iVar21 = iVar17;
            } while (iVar17 != -1);
            local_248 = CONCAT44(iVar17,iVar21);
          }
          TStack_1d8.UnvisitedBitMask = TStack_1d8.UnvisitedBitMask & ~TStack_1d8._padding_._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_1d8);
        }
        iVar17 = 0;
        uVar13 = (uint)local_268;
        uStack_288 = 0;
        uStack_28c = 0;
        if (local_60 != 0) {
          puVar23 = (uint *)(local_88 + 0x10);
          if (local_68 != (uint *)0x0) {
            puVar23 = local_68;
          }
          uVar27 = *puVar23;
          while (uVar27 == 0) {
            lVar14 = (longlong)iVar17;
            uStack_288 = uStack_288 + 0x20;
            iVar17 = iVar17 + 1;
            uStack_28c = local_60;
            if ((int)((local_60 - 1) + ((int)(local_60 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar17)
            goto LAB_143f5d440;
            uVar27 = puVar23[lVar14 + 1];
          }
          uVar13 = -uVar27 & uVar27;
          uVar4 = (ulonglong)uVar13 * 2 + 1;
          lVar14 = 0x3f;
          if (uVar4 != 0) {
            for (; uVar4 >> lVar14 == 0; lVar14 = lVar14 + -1) {
            }
          }
          local_214._4_4_ = (int)lVar14;
          uStack_28c = local_214._4_4_ + -1 + uStack_288;
          if ((int)local_60 < (int)uStack_28c) {
            uStack_28c = local_60;
          }
        }
LAB_143f5d440:
        local_2a8 = (TMap<void_*,Chaos::IEventHandler_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<void_*,Chaos::IEventHandler_*,0>_>
                     *)local_88;
        pTStack_298 = (TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10);
        local_280 = local_88._8_4_ - local_54;
        uStack_290 = 0xffffffff;
        uVar27 = local_60 & 0xffffffe0;
        uStack_2a0 = CONCAT44(uVar13,iVar17);
        uStack_284 = local_cc;
        TStack_1a8._padding_ = uStack_2a0;
        iVar17 = (int)local_60 >> 5;
        uStack_188 = CONCAT44(uStack_27c,local_280);
        bVar15 = (byte)local_60;
        TStack_1a8.UnvisitedBitMask = 0xffffffff;
        TStack_1a8.CurrentBitIndex = uStack_28c;
        TStack_1a8.BaseBitIndex = uStack_288;
        TStack_1a8._28_4_ = local_cc;
        local_1b0 = (longlong *)local_2a8;
        TStack_1a8.Array = pTStack_298;
        if (((int)local_60 < 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("StartIndex >= 0 && StartIndex <= Array.Num()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                ,0x7af,L""), bVar12)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        lVar14 = local_270;
        if (uVar28 != local_60) {
          puVar23 = (uint *)(local_88 + 0x10);
          if (local_68 != (uint *)0x0) {
            puVar23 = local_68;
          }
          uVar28 = -1 << (bVar15 & 0x1f) & puVar23[iVar17];
          while (uVar28 == 0) {
            lVar16 = (longlong)iVar17;
            uVar27 = uVar27 + 0x20;
            iVar17 = iVar17 + 1;
            uVar28 = local_60;
            if ((int)((local_60 - 1) + ((int)(local_60 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar17)
            goto LAB_143f5d564;
            uVar28 = puVar23[lVar16 + 1];
          }
          uVar4 = (ulonglong)(-uVar28 & uVar28) * 2 + 1;
          lVar16 = 0x3f;
          if (uVar4 != 0) {
            for (; uVar4 >> lVar16 == 0; lVar16 = lVar16 + -1) {
            }
          }
          local_20c = (int)lVar16;
          uVar28 = local_20c + -1 + uVar27;
          if ((int)local_60 < (int)uVar28) {
            uVar28 = local_60;
          }
        }
LAB_143f5d564:
        while( true ) {
          plVar25 = local_1b0;
          if ((int)local_1b0[1] - *(int *)((longlong)local_1b0 + 0x34) != (int)uStack_188) {
            local_2b3 = 0;
            `TSparseArray<TSparseSetElement<Chaos::IEventHandler_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_2b3);
          }
          if (((TStack_1a8.CurrentBitIndex == uVar28) &&
              (TStack_1a8.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10))) &&
             (plVar25 == (longlong *)local_88)) break;
          plVar25 = *(longlong **)(*plVar25 + (longlong)TStack_1a8.CurrentBitIndex * 0x10);
          (**(code **)(*plVar25 + 8))(plVar25,lVar14);
          TStack_1a8.UnvisitedBitMask = TStack_1a8.UnvisitedBitMask & ~TStack_1a8._padding_._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_1a8);
        }
        local_40 = 0;
        if (local_48 != (ForElementType<FSetElementId>)0x0) {
          FMemory::Free((void *)local_48);
        }
        TSparseArray<TSparseSetElement<Chaos::IEventHandler_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSparseSetElement<Chaos::IEventHandler_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  ((TSparseArray<TSparseSetElement<Chaos::IEventHandler_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    *)local_88);
        this = local_278;
      }
      uVar28 = (uint)local_268;
      pTVar2 = &this->HandlersNotInProxyOwnerMap;
      iVar21 = 0;
      puVar26 = &(this->HandlersNotInProxyOwnerMap).field_0x10;
      iVar17 = *(int *)&(this->HandlersNotInProxyOwnerMap).field_0x28;
      uStack_28c = 0;
      uStack_288 = iVar21;
      if (iVar17 != 0) {
        puVar23 = *(uint **)&(this->HandlersNotInProxyOwnerMap).field_0x20;
        if (puVar23 == (uint *)0x0) {
          puVar23 = (uint *)puVar26;
        }
        uVar13 = *puVar23;
        uStack_288 = 0;
        iVar21 = 0;
        while (uVar13 == 0) {
          lVar14 = (longlong)iVar21;
          uStack_288 = uStack_288 + 0x20;
          iVar21 = iVar21 + 1;
          uStack_28c = iVar17;
          if ((int)(iVar17 + -1 + (iVar17 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar21) goto LAB_143f5d68f;
          uVar13 = puVar23[lVar14 + 1];
        }
        uVar28 = -uVar13 & uVar13;
        uVar4 = (ulonglong)uVar28 * 2 + 1;
        lVar14 = 0x3f;
        if (uVar4 != 0) {
          for (; uVar4 >> lVar14 == 0; lVar14 = lVar14 + -1) {
          }
        }
        local_208 = (int)lVar14;
        uStack_28c = uStack_288 + -1 + local_208;
        if (iVar17 < (int)uStack_28c) {
          uStack_28c = iVar17;
        }
      }
LAB_143f5d68f:
      local_280 = *(int *)&(local_278->HandlersNotInProxyOwnerMap).field_0x8 -
                  *(int *)&(local_278->HandlersNotInProxyOwnerMap).field_0x34;
      uVar13 = *(uint *)&(local_278->HandlersNotInProxyOwnerMap).field_0x28;
      uStack_290 = 0xffffffff;
      local_2b8 = -1 << ((byte)uVar13 & 0x1f);
      uVar27 = uVar13 & 0xffffffe0;
      uStack_2a0 = CONCAT44(uVar28,iVar21);
      uStack_284 = local_ac;
      TStack_178._padding_ = uStack_2a0;
      iVar17 = (int)uVar13 >> 5;
      uStack_158 = CONCAT44(uStack_27c,local_280);
      TStack_178.UnvisitedBitMask = 0xffffffff;
      TStack_178.CurrentBitIndex = uStack_28c;
      TStack_178.BaseBitIndex = uStack_288;
      TStack_178._28_4_ = local_ac;
      local_2a8 = pTVar2;
      pTStack_298 = (TBitArray<FDefaultBitArrayAllocator> *)puVar26;
      local_180 = pTVar2;
      TStack_178.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar26;
      if (((int)uVar13 < 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("StartIndex >= 0 && StartIndex <= Array.Num()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x7af,L""), bVar12)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      uVar28 = *(uint *)&(this->HandlersNotInProxyOwnerMap).field_0x28;
      if (uVar13 != uVar28) {
        puVar24 = *(undefined1 **)&(this->HandlersNotInProxyOwnerMap).field_0x20;
        if (puVar24 == (undefined1 *)0x0) {
          puVar24 = puVar26;
        }
        uVar13 = local_2b8 & *(uint *)(puVar24 + (longlong)iVar17 * 4);
        while (uVar13 == 0) {
          lVar14 = (longlong)iVar17;
          uVar27 = uVar27 + 0x20;
          iVar17 = iVar17 + 1;
          uVar13 = uVar28;
          if ((int)((uVar28 - 1) + ((int)(uVar28 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar17)
          goto LAB_143f5d7c0;
          uVar13 = *(uint *)(puVar24 + lVar14 * 4 + 4);
        }
        uVar4 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
        lVar14 = 0x3f;
        if (uVar4 != 0) {
          for (; uVar4 >> lVar14 == 0; lVar14 = lVar14 + -1) {
          }
        }
        local_204 = (int)lVar14;
        uVar13 = (uVar27 - 1) + local_204;
        if ((int)uVar28 < (int)uVar13) {
          uVar13 = uVar28;
        }
      }
LAB_143f5d7c0:
      while( true ) {
        pTVar9 = local_180;
        if (*(int *)&local_180->field_0x8 - *(int *)&local_180->field_0x34 != (int)uStack_158) {
          local_2b2 = 0;
          `TSparseArray<TSparseSetElement<TTuple<void_*,Chaos::IEventHandler_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_2b2);
        }
        if (((TStack_178.CurrentBitIndex == uVar13) &&
            (TStack_178.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar26)) &&
           (pTVar9 == pTVar2)) break;
        plVar25 = *(longlong **)
                   (*(longlong *)pTVar9 + 8 + (longlong)TStack_178.CurrentBitIndex * 0x18);
        (**(code **)(*plVar25 + 8))(plVar25,local_270);
        TStack_178.UnvisitedBitMask = TStack_178.UnvisitedBitMask & ~TStack_178._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_178);
      }
    }
    pTVar7 = local_278;
    local_278->bDispatchInProgress = local_2b0;
    if (SRWLock_00 != (FPlatformRWLock *)0x0) {
      ReleaseSRWLockShared((PSRWLOCK)SRWLock_00);
    }
    iVar17 = 0;
    pFVar20 = (FScriptContainerElement *)0x0;
    if ((SRWLock == (FPlatformRWLock *)0x0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("Mutex",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                            ,0x43,L""), bVar12)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    AcquireSRWLockExclusive((PSRWLOCK)SRWLock);
    pTVar3 = &pTVar7->DeferredHandlers;
    if ((TArray<Chaos::IEventHandler_*,TSizedDefaultAllocator<32>_> *)local_f8 != pTVar3) {
      pFVar20 = (pTVar3->AllocatorInstance).Data;
      (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      iVar17 = (pTVar7->DeferredHandlers).ArrayNum;
      (pTVar7->DeferredHandlers).ArrayNum = 0;
      (pTVar7->DeferredHandlers).ArrayMax = 0;
    }
    if (((pTVar7->DeferredHandlers).ArrayNum != 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("DeferredHandlers.Num() == 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\EventManager.h"
                            ,400,L""), bVar12)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    if (SRWLock != (FPlatformRWLock *)0x0) {
      ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
    }
    for (pFVar18 = pFVar20; pFVar18 != pFVar20 + (longlong)iVar17 * 8; pFVar18 = pFVar18 + 8) {
      (**(code **)(pTVar7->_padding_ + 8))(pTVar7,pFVar18);
    }
    if (pFVar20 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar20);
    }
  }
  return;
}

// DispatchConsumerData @ 143f5dba0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
Chaos::TEventContainer<Chaos::FRemovalEventData>::DispatchConsumerData
          (TEventContainer<Chaos::FRemovalEventData> *this)

{
  TArray<void_const_*,TSizedDefaultAllocator<32>_> *pTVar1;
  TMap<void_*,Chaos::IEventHandler_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<void_*,Chaos::IEventHandler_*,0>_>
  *pTVar2;
  TArray<Chaos::IEventHandler_*,TSizedDefaultAllocator<32>_> *pTVar3;
  ulonglong uVar4;
  uint uVar5;
  code *pcVar6;
  TEventContainer<Chaos::FRemovalEventData> *pTVar7;
  ForElementType<unsigned_int> FVar8;
  TMap<void_*,Chaos::IEventHandler_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<void_*,Chaos::IEventHandler_*,0>_>
  *pTVar9;
  TSet<TTuple<UObject_*,Chaos::IEventHandler_*>,TDefaultMapHashableKeyFuncs<UObject_*,Chaos::IEventHandler_*,1>,FDefaultSetAllocator>
  *pTVar10;
  UObject *pUVar11;
  bool bVar12;
  uint uVar13;
  longlong lVar14;
  byte bVar15;
  longlong lVar16;
  int iVar17;
  FPlatformRWLock *SRWLock;
  FScriptContainerElement *pFVar18;
  longlong *plVar19;
  FScriptContainerElement *pFVar20;
  FPlatformRWLock *SRWLock_00;
  int iVar21;
  ForElementType<unsigned_int> FVar22;
  uint *puVar23;
  undefined1 *puVar24;
  longlong *plVar25;
  undefined1 *puVar26;
  uint uVar27;
  uint uVar28;
  undefined1 auStack_2d8 [32];
  uint local_2b8;
  undefined1 local_2b4;
  undefined1 local_2b3;
  undefined1 local_2b2;
  undefined1 local_2b1;
  bool local_2b0;
  TMap<void_*,Chaos::IEventHandler_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<void_*,Chaos::IEventHandler_*,0>_>
  *local_2a8;
  undefined8 uStack_2a0;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_298;
  uint uStack_290;
  uint uStack_28c;
  uint uStack_288;
  undefined4 uStack_284;
  int local_280;
  undefined4 uStack_27c;
  TEventContainer<Chaos::FRemovalEventData> *local_278;
  longlong local_270;
  undefined8 local_268;
  FPlatformRWLock *local_260;
  undefined8 local_248;
  ForElementType<unsigned_int> local_240;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_238;
  int local_218;
  undefined8 local_214;
  int local_20c;
  int local_208;
  int local_204;
  int local_200;
  FPlatformRWLock *local_1f8;
  longlong *local_1f0;
  int local_1e8;
  longlong *local_1e0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_1d8;
  undefined8 uStack_1b8;
  longlong *local_1b0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_1a8;
  undefined8 uStack_188;
  TMap<void_*,Chaos::IEventHandler_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<void_*,Chaos::IEventHandler_*,0>_>
  *local_180;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_178;
  undefined8 uStack_158;
  TMap<void_*,Chaos::IEventHandler_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<void_*,Chaos::IEventHandler_*,0>_>
  *local_150;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_148;
  undefined8 uStack_128;
  TBaseKeyIterator<1> local_120;
  undefined8 local_108 [2];
  longlong local_f8 [5];
  undefined4 local_cc;
  undefined4 local_ac;
  undefined4 local_8c;
  undefined1 local_88 [32];
  uint *local_68;
  uint local_60;
  undefined4 local_5c;
  undefined4 local_58;
  int local_54;
  ForElementType<FSetElementId> local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_2d8;
  local_278 = this;
  bVar12 = IsInGameThread();
  if ((!bVar12) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsInGameThread()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\EventManager.h"
                          ,0x132,L""), bVar12)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  lVar14 = (**(code **)((longlong)*(this->EventBuffer).Ptr + 0x28))();
  if (((lVar14 == 0) || (*(int *)(lVar14 + 0x10) != 0)) ||
     (Chaos::Private::bEventManagerDispatchEmptyEvents != false)) {
    SRWLock = &this->DeferredHandlerLock;
    pFVar20 = (FScriptContainerElement *)0x0;
    iVar17 = 0;
    local_270 = lVar14;
    local_260 = SRWLock;
    if ((SRWLock == (FPlatformRWLock *)0x0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("Mutex",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                            ,0x43,L""), bVar12)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    AcquireSRWLockExclusive((PSRWLOCK)SRWLock);
    pTVar1 = &this->DeferredUnregisterHandlers;
    if ((TArray<void_const_*,TSizedDefaultAllocator<32>_> *)local_108 != pTVar1) {
      pFVar20 = (pTVar1->AllocatorInstance).Data;
      (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      iVar17 = (this->DeferredUnregisterHandlers).ArrayNum;
      (this->DeferredUnregisterHandlers).ArrayNum = 0;
      (this->DeferredUnregisterHandlers).ArrayMax = 0;
    }
    if (((this->DeferredUnregisterHandlers).ArrayNum != 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("DeferredUnregisterHandlers.Num() == 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\EventManager.h"
                            ,0x17f,L""), bVar12)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    if (SRWLock != (FPlatformRWLock *)0x0) {
      ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
    }
    for (pFVar18 = pFVar20; pFVar18 != pFVar20 + (longlong)iVar17 * 8; pFVar18 = pFVar18 + 8) {
      (**(code **)(this->_padding_ + 0x10))(this,*(undefined8 *)pFVar18);
    }
    if (pFVar20 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar20);
    }
    SRWLock_00 = &this->HandlerLock;
    local_1f8 = SRWLock_00;
    if ((SRWLock_00 == (FPlatformRWLock *)0x0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("Mutex",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                            ,0x1c,L""), bVar12)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    AcquireSRWLockShared((PSRWLOCK)SRWLock_00);
    local_2b0 = this->bDispatchInProgress;
    plVar25 = (longlong *)0x0;
    this->bDispatchInProgress = true;
    uStack_288 = 0;
    plVar19 = plVar25;
    if (lVar14 != 0) {
      plVar19 = (longlong *)(lVar14 + 0x20);
    }
    local_1f0 = plVar19;
    if ((plVar19 == (longlong *)0x0) ||
       (iVar17 = (int)plVar19[1] - *(int *)((longlong)plVar19 + 0x34),
       *(int *)&(this->HandlerMap).field_0x8 - *(int *)&(this->HandlerMap).field_0x34 <=
       (*(int *)&(this->HandlersNotInProxyOwnerMap).field_0x8 -
       *(int *)&(this->HandlersNotInProxyOwnerMap).field_0x34) + iVar17)) {
      pTStack_298 = (TBitArray<FDefaultBitArrayAllocator> *)&(this->HandlerMap).field_0x10;
      uVar13 = 0;
      uVar28 = *(uint *)&(this->HandlerMap).field_0x28;
      pTVar2 = &this->HandlerMap;
      uVar27 = 1;
      uStack_28c = uVar13;
      if (uVar28 != 0) {
        puVar23 = *(uint **)&(this->HandlerMap).field_0x20;
        if (puVar23 == (uint *)0x0) {
          puVar23 = (uint *)pTStack_298;
        }
        uVar5 = *puVar23;
        plVar19 = plVar25;
        uStack_288 = 0;
        uVar13 = 0;
        while (uVar5 == 0) {
          iVar17 = (int)plVar25;
          uStack_288 = (int)plVar19 + 0x20;
          plVar19 = (longlong *)(ulonglong)uStack_288;
          uVar13 = iVar17 + 1;
          plVar25 = (longlong *)(ulonglong)uVar13;
          uStack_28c = uVar28;
          if ((int)((uVar28 - 1) + ((int)(uVar28 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar13)
          goto LAB_143f5e580;
          uVar5 = puVar23[(longlong)iVar17 + 1];
        }
        uVar27 = -uVar5 & uVar5;
        uVar4 = (ulonglong)uVar27 * 2 + 1;
        lVar14 = 0x3f;
        if (uVar4 != 0) {
          for (; uVar4 >> lVar14 == 0; lVar14 = lVar14 + -1) {
          }
        }
        local_200 = (int)lVar14;
        uStack_28c = (uStack_288 - 1) + local_200;
        if ((int)uVar28 < (int)uStack_28c) {
          uStack_28c = uVar28;
        }
      }
LAB_143f5e580:
      local_280 = *(int *)&(this->HandlerMap).field_0x8 - *(int *)&(this->HandlerMap).field_0x34;
      uVar28 = *(uint *)&(this->HandlerMap).field_0x28;
      uStack_290 = 0xffffffff;
      local_2b8 = -1 << ((byte)uVar28 & 0x1f);
      puVar26 = &(this->HandlerMap).field_0x10;
      uStack_2a0 = CONCAT44(uVar27,uVar13);
      uVar13 = uVar28 & 0xffffffe0;
      uStack_284 = local_8c;
      TStack_148._padding_ = uStack_2a0;
      iVar17 = (int)uVar28 >> 5;
      uStack_128 = CONCAT44(uStack_27c,local_280);
      TStack_148.UnvisitedBitMask = 0xffffffff;
      TStack_148.CurrentBitIndex = uStack_28c;
      TStack_148.BaseBitIndex = uStack_288;
      TStack_148._28_4_ = local_8c;
      local_2a8 = pTVar2;
      local_150 = pTVar2;
      TStack_148.Array = pTStack_298;
      if (((int)uVar28 < 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("StartIndex >= 0 && StartIndex <= Array.Num()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x7af,L""), bVar12)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      lVar14 = local_270;
      uVar27 = *(uint *)&(this->HandlerMap).field_0x28;
      if (uVar28 != uVar27) {
        puVar24 = *(undefined1 **)&(this->HandlerMap).field_0x20;
        if (puVar24 == (undefined1 *)0x0) {
          puVar24 = puVar26;
        }
        uVar28 = local_2b8 & *(uint *)(puVar24 + (longlong)iVar17 * 4);
        while (uVar28 == 0) {
          lVar16 = (longlong)iVar17;
          uVar13 = uVar13 + 0x20;
          iVar17 = iVar17 + 1;
          uVar28 = uVar27;
          if ((int)((uVar27 - 1) + ((int)(uVar27 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar17)
          goto LAB_143f5e6c0;
          uVar28 = *(uint *)(puVar24 + lVar16 * 4 + 4);
        }
        uVar4 = (ulonglong)(-uVar28 & uVar28) * 2 + 1;
        lVar16 = 0x3f;
        if (uVar4 != 0) {
          for (; uVar4 >> lVar16 == 0; lVar16 = lVar16 + -1) {
          }
        }
        local_1e8 = (int)lVar16;
        uVar28 = (uVar13 - 1) + local_1e8;
        if ((int)uVar27 < (int)uVar28) {
          uVar28 = uVar27;
        }
      }
LAB_143f5e6c0:
      while( true ) {
        pTVar9 = local_150;
        if (*(int *)&local_150->field_0x8 - *(int *)&local_150->field_0x34 != (int)uStack_128) {
          local_2b1 = 0;
          `TSparseArray<TSparseSetElement<TTuple<void_*,Chaos::IEventHandler_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_2b1);
        }
        if (((TStack_148.CurrentBitIndex == uVar28) &&
            (TStack_148.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar26)) &&
           (SRWLock = local_260, pTVar9 == pTVar2)) break;
        plVar25 = *(longlong **)
                   (*(longlong *)pTVar9 + 8 + (longlong)TStack_148.CurrentBitIndex * 0x18);
        (**(code **)(*plVar25 + 8))(plVar25,lVar14);
        TStack_148.UnvisitedBitMask = TStack_148.UnvisitedBitMask & ~TStack_148._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_148);
      }
    }
    else {
      local_268 = 1;
      if (*(int *)&(this->ProxyOwnerToHandlerMap).field_0x8 !=
          *(int *)&(this->ProxyOwnerToHandlerMap).field_0x34) {
        local_88._0_8_ = 0;
        local_88._8_8_ = 0;
        local_68 = (uint *)0x0;
        local_60 = 0;
        local_5c = 0x80;
        local_58 = 0xffffffff;
        local_54 = 0;
        local_48 = (ForElementType<FSetElementId>)0x0;
        local_40 = 0;
        TSet<Chaos::IEventHandler_*,DefaultKeyFuncs<Chaos::IEventHandler_*,0>,FDefaultSetAllocator>
        ::Reserve((TSet<Chaos::IEventHandler_*,DefaultKeyFuncs<Chaos::IEventHandler_*,0>,FDefaultSetAllocator>
                   *)local_88,iVar17);
        local_238._padding_._4_4_ = 1;
        local_240 = (ForElementType<unsigned_int>)(plVar19 + 2);
        local_238._padding_._0_4_ = 0;
        local_238.UnvisitedBitMask = 0xffffffff;
        local_238.CurrentBitIndex = 0;
        local_238.BaseBitIndex = 0;
        local_238.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_240;
        if ((int)plVar19[5] != 0) {
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_238);
        }
        local_2b8 = *(uint *)(plVar19 + 5);
        local_280 = (int)plVar19[1] - *(int *)((longlong)plVar19 + 0x34);
        uStack_2a0 = CONCAT44(local_238._padding_._4_4_,(undefined4)local_238._padding_);
        uStack_28c = local_238.CurrentBitIndex;
        uStack_290 = local_238.UnvisitedBitMask;
        uStack_284 = local_238._28_4_;
        uStack_288 = local_238.BaseBitIndex;
        uVar28 = local_2b8 & 0xffffffe0;
        pTStack_298 = local_238.Array;
        iVar17 = (int)local_2b8 >> 5;
        bVar15 = (byte)local_2b8;
        uStack_1b8 = CONCAT44(uStack_27c,local_280);
        TStack_1d8.Array = local_238.Array;
        local_2a8 = (TMap<void_*,Chaos::IEventHandler_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<void_*,Chaos::IEventHandler_*,0>_>
                     *)plVar19;
        local_1e0 = plVar19;
        TStack_1d8._padding_ = uStack_2a0;
        TStack_1d8._16_8_ = _uStack_290;
        TStack_1d8._24_8_ = _uStack_288;
        if (((int)local_2b8 < 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("StartIndex >= 0 && StartIndex <= Array.Num()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                ,0x7af,L""), bVar12)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        plVar25 = local_1f0;
        FVar8 = local_240;
        uVar13 = *(int *)((longlong)local_240 + 0x18);
        uVar27 = local_2b8;
        if (local_2b8 != uVar13) {
          FVar22 = *(ForElementType<unsigned_int> *)((longlong)local_240 + 0x10);
          if (*(ForElementType<unsigned_int> *)((longlong)local_240 + 0x10) ==
              (ForElementType<unsigned_int>)0x0) {
            FVar22 = local_240;
          }
          uVar27 = -1 << (bVar15 & 0x1f) & *(uint *)((longlong)FVar22 + (longlong)iVar17 * 4);
          while (uVar27 == 0) {
            lVar14 = (longlong)iVar17;
            uVar28 = uVar28 + 0x20;
            iVar17 = iVar17 + 1;
            local_2b8 = uVar13;
            uVar27 = uVar13;
            if ((int)((uVar13 - 1) + ((int)(uVar13 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar17)
            goto LAB_143f5df70;
            uVar27 = *(uint *)((longlong)FVar22 + 4 + lVar14 * 4);
          }
          uVar4 = (ulonglong)(-uVar27 & uVar27) * 2 + 1;
          lVar14 = 0x3f;
          if (uVar4 != 0) {
            for (; uVar4 >> lVar14 == 0; lVar14 = lVar14 + -1) {
            }
          }
          local_218 = (int)lVar14;
          local_2b8 = local_218 + -1 + uVar28;
          uVar27 = local_2b8;
          if ((int)uVar13 < (int)local_2b8) {
            local_2b8 = uVar13;
            uVar27 = uVar13;
          }
        }
LAB_143f5df70:
        while( true ) {
          plVar19 = local_1e0;
          if ((int)local_1e0[1] - *(int *)((longlong)local_1e0 + 0x34) != (int)uStack_1b8) {
            local_2b4 = 0;
            `TSparseArray<TSparseSetElement<TTuple<IPhysicsProxyBase_*,TArray<int,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_2b4);
          }
          uVar28 = local_60;
          SRWLock_00 = local_1f8;
          SRWLock = local_260;
          if (((TStack_1d8.CurrentBitIndex == uVar27) &&
              ((ForElementType<unsigned_int>)TStack_1d8.Array == FVar8)) && (plVar19 == plVar25))
          break;
          TSet<TTuple<UObject_*,Chaos::IEventHandler_*>,TDefaultMapHashableKeyFuncs<UObject_*,Chaos::IEventHandler_*,1>,FDefaultSetAllocator>
          ::TBaseKeyIterator<1>::TBaseKeyIterator<1>
                    (&local_120,
                     (TSet<TTuple<UObject_*,Chaos::IEventHandler_*>,TDefaultMapHashableKeyFuncs<UObject_*,Chaos::IEventHandler_*,1>,FDefaultSetAllocator>
                      *)&this->ProxyOwnerToHandlerMap,
                     *(UObject **)
                      (*(longlong *)((longlong)TStack_1d8.CurrentBitIndex * 0x20 + *plVar19) + 0x10)
                    );
          pUVar11 = local_120.Key;
          pTVar10 = local_120.Set;
          local_248 = CONCAT44(local_120.NextIndex,local_120.Index);
          iVar21 = local_120.Index;
          iVar17 = local_120.NextIndex;
          while (iVar21 != -1) {
            TSet<Chaos::IEventHandler_*,DefaultKeyFuncs<Chaos::IEventHandler_*,0>,FDefaultSetAllocator>
            ::Emplace<Chaos::IEventHandler_*_const_&>
                      ((TSet<Chaos::IEventHandler_*,DefaultKeyFuncs<Chaos::IEventHandler_*,0>,FDefaultSetAllocator>
                        *)local_88,(IEventHandler **)&local_214,
                       (bool *)(*(longlong *)&pTVar10->Elements + ((longlong)iVar21 * 3 + 1) * 8));
            local_248 = CONCAT44(local_248._4_4_,iVar17);
            if (iVar17 == -1) break;
            lVar14 = *(longlong *)&pTVar10->Elements;
            iVar21 = iVar17;
            do {
              iVar17 = *(int *)(lVar14 + 0x10 + (longlong)iVar21 * 0x18);
              if (*(UObject **)(lVar14 + (longlong)iVar21 * 0x18) == pUVar11) break;
              iVar21 = iVar17;
            } while (iVar17 != -1);
            local_248 = CONCAT44(iVar17,iVar21);
          }
          TStack_1d8.UnvisitedBitMask = TStack_1d8.UnvisitedBitMask & ~TStack_1d8._padding_._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_1d8);
        }
        iVar17 = 0;
        uVar13 = (uint)local_268;
        uStack_288 = 0;
        uStack_28c = 0;
        if (local_60 != 0) {
          puVar23 = (uint *)(local_88 + 0x10);
          if (local_68 != (uint *)0x0) {
            puVar23 = local_68;
          }
          uVar27 = *puVar23;
          while (uVar27 == 0) {
            lVar14 = (longlong)iVar17;
            uStack_288 = uStack_288 + 0x20;
            iVar17 = iVar17 + 1;
            uStack_28c = local_60;
            if ((int)((local_60 - 1) + ((int)(local_60 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar17)
            goto LAB_143f5e110;
            uVar27 = puVar23[lVar14 + 1];
          }
          uVar13 = -uVar27 & uVar27;
          uVar4 = (ulonglong)uVar13 * 2 + 1;
          lVar14 = 0x3f;
          if (uVar4 != 0) {
            for (; uVar4 >> lVar14 == 0; lVar14 = lVar14 + -1) {
            }
          }
          local_214._4_4_ = (int)lVar14;
          uStack_28c = local_214._4_4_ + -1 + uStack_288;
          if ((int)local_60 < (int)uStack_28c) {
            uStack_28c = local_60;
          }
        }
LAB_143f5e110:
        local_2a8 = (TMap<void_*,Chaos::IEventHandler_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<void_*,Chaos::IEventHandler_*,0>_>
                     *)local_88;
        pTStack_298 = (TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10);
        local_280 = local_88._8_4_ - local_54;
        uStack_290 = 0xffffffff;
        uVar27 = local_60 & 0xffffffe0;
        uStack_2a0 = CONCAT44(uVar13,iVar17);
        uStack_284 = local_cc;
        TStack_1a8._padding_ = uStack_2a0;
        iVar17 = (int)local_60 >> 5;
        uStack_188 = CONCAT44(uStack_27c,local_280);
        bVar15 = (byte)local_60;
        TStack_1a8.UnvisitedBitMask = 0xffffffff;
        TStack_1a8.CurrentBitIndex = uStack_28c;
        TStack_1a8.BaseBitIndex = uStack_288;
        TStack_1a8._28_4_ = local_cc;
        local_1b0 = (longlong *)local_2a8;
        TStack_1a8.Array = pTStack_298;
        if (((int)local_60 < 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("StartIndex >= 0 && StartIndex <= Array.Num()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                ,0x7af,L""), bVar12)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        lVar14 = local_270;
        if (uVar28 != local_60) {
          puVar23 = (uint *)(local_88 + 0x10);
          if (local_68 != (uint *)0x0) {
            puVar23 = local_68;
          }
          uVar28 = -1 << (bVar15 & 0x1f) & puVar23[iVar17];
          while (uVar28 == 0) {
            lVar16 = (longlong)iVar17;
            uVar27 = uVar27 + 0x20;
            iVar17 = iVar17 + 1;
            uVar28 = local_60;
            if ((int)((local_60 - 1) + ((int)(local_60 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar17)
            goto LAB_143f5e234;
            uVar28 = puVar23[lVar16 + 1];
          }
          uVar4 = (ulonglong)(-uVar28 & uVar28) * 2 + 1;
          lVar16 = 0x3f;
          if (uVar4 != 0) {
            for (; uVar4 >> lVar16 == 0; lVar16 = lVar16 + -1) {
            }
          }
          local_20c = (int)lVar16;
          uVar28 = local_20c + -1 + uVar27;
          if ((int)local_60 < (int)uVar28) {
            uVar28 = local_60;
          }
        }
LAB_143f5e234:
        while( true ) {
          plVar25 = local_1b0;
          if ((int)local_1b0[1] - *(int *)((longlong)local_1b0 + 0x34) != (int)uStack_188) {
            local_2b3 = 0;
            `TSparseArray<TSparseSetElement<Chaos::IEventHandler_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_2b3);
          }
          if (((TStack_1a8.CurrentBitIndex == uVar28) &&
              (TStack_1a8.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10))) &&
             (plVar25 == (longlong *)local_88)) break;
          plVar25 = *(longlong **)(*plVar25 + (longlong)TStack_1a8.CurrentBitIndex * 0x10);
          (**(code **)(*plVar25 + 8))(plVar25,lVar14);
          TStack_1a8.UnvisitedBitMask = TStack_1a8.UnvisitedBitMask & ~TStack_1a8._padding_._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_1a8);
        }
        local_40 = 0;
        if (local_48 != (ForElementType<FSetElementId>)0x0) {
          FMemory::Free((void *)local_48);
        }
        TSparseArray<TSparseSetElement<Chaos::IEventHandler_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSparseSetElement<Chaos::IEventHandler_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  ((TSparseArray<TSparseSetElement<Chaos::IEventHandler_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    *)local_88);
        this = local_278;
      }
      uVar28 = (uint)local_268;
      pTVar2 = &this->HandlersNotInProxyOwnerMap;
      iVar21 = 0;
      puVar26 = &(this->HandlersNotInProxyOwnerMap).field_0x10;
      iVar17 = *(int *)&(this->HandlersNotInProxyOwnerMap).field_0x28;
      uStack_28c = 0;
      uStack_288 = iVar21;
      if (iVar17 != 0) {
        puVar23 = *(uint **)&(this->HandlersNotInProxyOwnerMap).field_0x20;
        if (puVar23 == (uint *)0x0) {
          puVar23 = (uint *)puVar26;
        }
        uVar13 = *puVar23;
        uStack_288 = 0;
        iVar21 = 0;
        while (uVar13 == 0) {
          lVar14 = (longlong)iVar21;
          uStack_288 = uStack_288 + 0x20;
          iVar21 = iVar21 + 1;
          uStack_28c = iVar17;
          if ((int)(iVar17 + -1 + (iVar17 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar21) goto LAB_143f5e35f;
          uVar13 = puVar23[lVar14 + 1];
        }
        uVar28 = -uVar13 & uVar13;
        uVar4 = (ulonglong)uVar28 * 2 + 1;
        lVar14 = 0x3f;
        if (uVar4 != 0) {
          for (; uVar4 >> lVar14 == 0; lVar14 = lVar14 + -1) {
          }
        }
        local_208 = (int)lVar14;
        uStack_28c = uStack_288 + -1 + local_208;
        if (iVar17 < (int)uStack_28c) {
          uStack_28c = iVar17;
        }
      }
LAB_143f5e35f:
      local_280 = *(int *)&(local_278->HandlersNotInProxyOwnerMap).field_0x8 -
                  *(int *)&(local_278->HandlersNotInProxyOwnerMap).field_0x34;
      uVar13 = *(uint *)&(local_278->HandlersNotInProxyOwnerMap).field_0x28;
      uStack_290 = 0xffffffff;
      local_2b8 = -1 << ((byte)uVar13 & 0x1f);
      uVar27 = uVar13 & 0xffffffe0;
      uStack_2a0 = CONCAT44(uVar28,iVar21);
      uStack_284 = local_ac;
      TStack_178._padding_ = uStack_2a0;
      iVar17 = (int)uVar13 >> 5;
      uStack_158 = CONCAT44(uStack_27c,local_280);
      TStack_178.UnvisitedBitMask = 0xffffffff;
      TStack_178.CurrentBitIndex = uStack_28c;
      TStack_178.BaseBitIndex = uStack_288;
      TStack_178._28_4_ = local_ac;
      local_2a8 = pTVar2;
      pTStack_298 = (TBitArray<FDefaultBitArrayAllocator> *)puVar26;
      local_180 = pTVar2;
      TStack_178.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar26;
      if (((int)uVar13 < 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("StartIndex >= 0 && StartIndex <= Array.Num()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x7af,L""), bVar12)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      uVar28 = *(uint *)&(this->HandlersNotInProxyOwnerMap).field_0x28;
      if (uVar13 != uVar28) {
        puVar24 = *(undefined1 **)&(this->HandlersNotInProxyOwnerMap).field_0x20;
        if (puVar24 == (undefined1 *)0x0) {
          puVar24 = puVar26;
        }
        uVar13 = local_2b8 & *(uint *)(puVar24 + (longlong)iVar17 * 4);
        while (uVar13 == 0) {
          lVar14 = (longlong)iVar17;
          uVar27 = uVar27 + 0x20;
          iVar17 = iVar17 + 1;
          uVar13 = uVar28;
          if ((int)((uVar28 - 1) + ((int)(uVar28 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar17)
          goto LAB_143f5e490;
          uVar13 = *(uint *)(puVar24 + lVar14 * 4 + 4);
        }
        uVar4 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
        lVar14 = 0x3f;
        if (uVar4 != 0) {
          for (; uVar4 >> lVar14 == 0; lVar14 = lVar14 + -1) {
          }
        }
        local_204 = (int)lVar14;
        uVar13 = (uVar27 - 1) + local_204;
        if ((int)uVar28 < (int)uVar13) {
          uVar13 = uVar28;
        }
      }
LAB_143f5e490:
      while( true ) {
        pTVar9 = local_180;
        if (*(int *)&local_180->field_0x8 - *(int *)&local_180->field_0x34 != (int)uStack_158) {
          local_2b2 = 0;
          `TSparseArray<TSparseSetElement<TTuple<void_*,Chaos::IEventHandler_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_2b2);
        }
        if (((TStack_178.CurrentBitIndex == uVar13) &&
            (TStack_178.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar26)) &&
           (pTVar9 == pTVar2)) break;
        plVar25 = *(longlong **)
                   (*(longlong *)pTVar9 + 8 + (longlong)TStack_178.CurrentBitIndex * 0x18);
        (**(code **)(*plVar25 + 8))(plVar25,local_270);
        TStack_178.UnvisitedBitMask = TStack_178.UnvisitedBitMask & ~TStack_178._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_178);
      }
    }
    pTVar7 = local_278;
    local_278->bDispatchInProgress = local_2b0;
    if (SRWLock_00 != (FPlatformRWLock *)0x0) {
      ReleaseSRWLockShared((PSRWLOCK)SRWLock_00);
    }
    iVar17 = 0;
    pFVar20 = (FScriptContainerElement *)0x0;
    if ((SRWLock == (FPlatformRWLock *)0x0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("Mutex",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                            ,0x43,L""), bVar12)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    AcquireSRWLockExclusive((PSRWLOCK)SRWLock);
    pTVar3 = &pTVar7->DeferredHandlers;
    if ((TArray<Chaos::IEventHandler_*,TSizedDefaultAllocator<32>_> *)local_f8 != pTVar3) {
      pFVar20 = (pTVar3->AllocatorInstance).Data;
      (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      iVar17 = (pTVar7->DeferredHandlers).ArrayNum;
      (pTVar7->DeferredHandlers).ArrayNum = 0;
      (pTVar7->DeferredHandlers).ArrayMax = 0;
    }
    if (((pTVar7->DeferredHandlers).ArrayNum != 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("DeferredHandlers.Num() == 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\EventManager.h"
                            ,400,L""), bVar12)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    if (SRWLock != (FPlatformRWLock *)0x0) {
      ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
    }
    for (pFVar18 = pFVar20; pFVar18 != pFVar20 + (longlong)iVar17 * 8; pFVar18 = pFVar18 + 8) {
      (**(code **)(pTVar7->_padding_ + 8))(pTVar7,pFVar18);
    }
    if (pFVar20 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar20);
    }
  }
  return;
}

// DispatchConsumerData @ 143f5e870

void __thiscall
Chaos::TEventContainer<Chaos::FSleepingEventData>::DispatchConsumerData
          (TEventContainer<Chaos::FSleepingEventData> *this)

{
  FPlatformRWLock *pFVar1;
  TArray<void_const_*,TSizedDefaultAllocator<32>_> *pTVar2;
  FPlatformRWLock *SRWLock;
  TArray<Chaos::IEventHandler_*,TSizedDefaultAllocator<32>_> *pTVar3;
  ulonglong uVar4;
  uint uVar5;
  longlong *plVar6;
  longlong lVar7;
  code *pcVar8;
  TMap<void_*,Chaos::IEventHandler_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<void_*,Chaos::IEventHandler_*,0>_>
  *pTVar9;
  bool bVar10;
  longlong lVar11;
  FScriptContainerElement *pFVar12;
  FScriptContainerElement *pFVar13;
  int iVar14;
  FScriptContainerElement *pFVar15;
  undefined1 *puVar16;
  uint *puVar17;
  uint uVar18;
  int iVar19;
  uint uVar20;
  undefined1 local_e8;
  bool local_e7;
  int local_e4;
  int local_e0;
  longlong local_d8;
  TMap<void_*,Chaos::IEventHandler_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<void_*,Chaos::IEventHandler_*,0>_>
  *local_d0;
  uint uStack_c8;
  uint uStack_c4;
  undefined1 *local_c0;
  undefined4 uStack_b8;
  int iStack_b4;
  int local_b0;
  undefined4 uStack_ac;
  int iStack_a8;
  undefined4 uStack_a4;
  TMap<void_*,Chaos::IEventHandler_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<void_*,Chaos::IEventHandler_*,0>_>
  *local_a0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_98;
  undefined8 uStack_78;
  undefined8 local_70 [2];
  undefined8 local_60 [5];
  undefined4 local_34;
  
  bVar10 = IsInGameThread();
  if ((!bVar10) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsInGameThread()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\EventManager.h"
                          ,0x132,L""), bVar10)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  local_d8 = (**(code **)((longlong)*(this->EventBuffer).Ptr + 0x28))();
  if (((local_d8 == 0) || (*(int *)(local_d8 + 8) != 0)) ||
     (Chaos::Private::bEventManagerDispatchEmptyEvents != false)) {
    pFVar1 = &this->DeferredHandlerLock;
    pFVar15 = (FScriptContainerElement *)0x0;
    if ((pFVar1 == (FPlatformRWLock *)0x0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("Mutex",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                            ,0x43,L""), bVar10)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    AcquireSRWLockExclusive((PSRWLOCK)pFVar1);
    pTVar2 = &this->DeferredUnregisterHandlers;
    pFVar12 = pFVar15;
    iVar19 = 0;
    if ((TArray<void_const_*,TSizedDefaultAllocator<32>_> *)local_70 != pTVar2) {
      pFVar12 = (pTVar2->AllocatorInstance).Data;
      (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      iVar19 = (this->DeferredUnregisterHandlers).ArrayNum;
      (this->DeferredUnregisterHandlers).ArrayNum = 0;
      (this->DeferredUnregisterHandlers).ArrayMax = 0;
    }
    if (((this->DeferredUnregisterHandlers).ArrayNum != 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("DeferredUnregisterHandlers.Num() == 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\EventManager.h"
                            ,0x17f,L""), bVar10)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    if (pFVar1 != (FPlatformRWLock *)0x0) {
      ReleaseSRWLockExclusive((PSRWLOCK)pFVar1);
    }
    for (pFVar13 = pFVar12; pFVar13 != pFVar12 + (longlong)iVar19 * 8; pFVar13 = pFVar13 + 8) {
      (**(code **)(this->_padding_ + 0x10))(this,*(undefined8 *)pFVar13);
    }
    if (pFVar12 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar12);
    }
    pFVar1 = &this->HandlerLock;
    if ((pFVar1 == (FPlatformRWLock *)0x0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("Mutex",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                            ,0x1c,L""), bVar10)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    AcquireSRWLockShared((PSRWLOCK)pFVar1);
    local_e7 = this->bDispatchInProgress;
    local_c0 = &(this->HandlerMap).field_0x10;
    this->bDispatchInProgress = true;
    local_d0 = &this->HandlerMap;
    iVar19 = *(int *)&(this->HandlerMap).field_0x28;
    local_b0 = 0;
    uStack_c8 = 0;
    uStack_c4 = 1;
    iStack_b4 = 0;
    if (iVar19 != 0) {
      puVar17 = *(uint **)&(this->HandlerMap).field_0x20;
      if (puVar17 == (uint *)0x0) {
        puVar17 = (uint *)local_c0;
      }
      uVar20 = *puVar17;
      uStack_c8 = 0;
      while (uVar20 == 0) {
        iVar14 = (int)pFVar15;
        local_b0 = local_b0 + 0x20;
        uStack_c8 = iVar14 + 1;
        pFVar15 = (FScriptContainerElement *)(ulonglong)uStack_c8;
        iStack_b4 = iVar19;
        if ((int)(iVar19 + -1 + (iVar19 + -1 >> 0x1f & 0x1fU)) >> 5 < (int)uStack_c8)
        goto LAB_143f5eab1;
        uVar20 = puVar17[(longlong)iVar14 + 1];
      }
      uStack_c4 = -uVar20 & uVar20;
      uVar4 = (ulonglong)uStack_c4 * 2 + 1;
      lVar7 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      local_e4 = (int)lVar7;
      iStack_b4 = local_b0 + -1 + local_e4;
      if (iVar19 < iStack_b4) {
        iStack_b4 = iVar19;
      }
    }
LAB_143f5eab1:
    uStack_ac = local_34;
    iStack_a8 = *(int *)&(this->HandlerMap).field_0x8 - *(int *)&(this->HandlerMap).field_0x34;
    uVar20 = *(uint *)&(this->HandlerMap).field_0x28;
    uStack_b8 = 0xffffffff;
    TStack_98._padding_ = CONCAT44(uStack_c4,uStack_c8);
    uVar18 = uVar20 & 0xffffffe0;
    TStack_98.CurrentBitIndex = iStack_b4;
    TStack_98.UnvisitedBitMask = 0xffffffff;
    iVar19 = (int)uVar20 >> 5;
    TStack_98._28_4_ = local_34;
    TStack_98.BaseBitIndex = local_b0;
    uStack_78 = CONCAT44(uStack_a4,iStack_a8);
    local_a0 = local_d0;
    TStack_98.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_c0;
    if (((int)uVar20 < 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("StartIndex >= 0 && StartIndex <= Array.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x7af,L""), bVar10)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    lVar7 = local_d8;
    uVar5 = *(uint *)&(this->HandlerMap).field_0x28;
    if (uVar20 != uVar5) {
      puVar16 = *(undefined1 **)&(this->HandlerMap).field_0x20;
      if (puVar16 == (undefined1 *)0x0) {
        puVar16 = &(this->HandlerMap).field_0x10;
      }
      uVar20 = -1 << ((byte)uVar20 & 0x1f) & *(uint *)(puVar16 + (longlong)iVar19 * 4);
      while (uVar20 == 0) {
        lVar11 = (longlong)iVar19;
        uVar18 = uVar18 + 0x20;
        iVar19 = iVar19 + 1;
        uVar20 = uVar5;
        if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar19)
        goto LAB_143f5ebc6;
        uVar20 = *(uint *)(puVar16 + lVar11 * 4 + 4);
      }
      uVar4 = (ulonglong)(-uVar20 & uVar20) * 2 + 1;
      lVar11 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      local_e0 = (int)lVar11;
      uVar20 = (uVar18 - 1) + local_e0;
      if ((int)uVar5 < (int)uVar20) {
        uVar20 = uVar5;
      }
    }
LAB_143f5ebc6:
    while( true ) {
      pTVar9 = local_a0;
      if (*(int *)&local_a0->field_0x8 - *(int *)&local_a0->field_0x34 != (int)uStack_78) {
        local_e8 = 0;
        `TSparseArray<TSparseSetElement<TTuple<void_*,Chaos::IEventHandler_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_e8);
      }
      if (((TStack_98.CurrentBitIndex == uVar20) &&
          (TStack_98.Array == (TBitArray<FDefaultBitArrayAllocator> *)&(this->HandlerMap).field_0x10
          )) && (pTVar9 == &this->HandlerMap)) break;
      plVar6 = *(longlong **)(*(longlong *)pTVar9 + 8 + (longlong)TStack_98.CurrentBitIndex * 0x18);
      (**(code **)(*plVar6 + 8))(plVar6,lVar7);
      TStack_98.UnvisitedBitMask = TStack_98.UnvisitedBitMask & ~TStack_98._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_98);
    }
    SRWLock = &this->DeferredHandlerLock;
    this->bDispatchInProgress = local_e7;
    if (pFVar1 != (FPlatformRWLock *)0x0) {
      ReleaseSRWLockShared((PSRWLOCK)pFVar1);
    }
    pFVar15 = (FScriptContainerElement *)0x0;
    iVar19 = 0;
    if ((SRWLock == (FPlatformRWLock *)0x0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("Mutex",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                            ,0x43,L""), bVar10)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    AcquireSRWLockExclusive((PSRWLOCK)SRWLock);
    pTVar3 = &this->DeferredHandlers;
    if ((TArray<Chaos::IEventHandler_*,TSizedDefaultAllocator<32>_> *)local_60 != pTVar3) {
      pFVar15 = (pTVar3->AllocatorInstance).Data;
      (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      iVar19 = (this->DeferredHandlers).ArrayNum;
      (this->DeferredHandlers).ArrayNum = 0;
      (this->DeferredHandlers).ArrayMax = 0;
    }
    if (((this->DeferredHandlers).ArrayNum != 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("DeferredHandlers.Num() == 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\EventManager.h"
                            ,400,L""), bVar10)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    if (SRWLock != (FPlatformRWLock *)0x0) {
      ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
    }
    for (pFVar12 = pFVar15; pFVar12 != pFVar15 + (longlong)iVar19 * 8; pFVar12 = pFVar12 + 8) {
      (**(code **)(this->_padding_ + 8))(this,pFVar12);
    }
    if (pFVar15 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar15);
    }
  }
  return;
}

// DispatchConsumerData @ 143f5ed70

void __thiscall
Chaos::TEventContainer<Chaos::FTrailingEventData>::DispatchConsumerData
          (TEventContainer<Chaos::FTrailingEventData> *this)

{
  FPlatformRWLock *pFVar1;
  TArray<void_const_*,TSizedDefaultAllocator<32>_> *pTVar2;
  FPlatformRWLock *SRWLock;
  TArray<Chaos::IEventHandler_*,TSizedDefaultAllocator<32>_> *pTVar3;
  ulonglong uVar4;
  uint uVar5;
  longlong *plVar6;
  longlong lVar7;
  code *pcVar8;
  TMap<void_*,Chaos::IEventHandler_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<void_*,Chaos::IEventHandler_*,0>_>
  *pTVar9;
  bool bVar10;
  longlong lVar11;
  FScriptContainerElement *pFVar12;
  FScriptContainerElement *pFVar13;
  int iVar14;
  FScriptContainerElement *pFVar15;
  undefined1 *puVar16;
  uint *puVar17;
  uint uVar18;
  int iVar19;
  uint uVar20;
  undefined1 local_e8;
  bool local_e7;
  int local_e4;
  int local_e0;
  longlong local_d8;
  TMap<void_*,Chaos::IEventHandler_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<void_*,Chaos::IEventHandler_*,0>_>
  *local_d0;
  uint uStack_c8;
  uint uStack_c4;
  undefined1 *local_c0;
  undefined4 uStack_b8;
  int iStack_b4;
  int local_b0;
  undefined4 uStack_ac;
  int iStack_a8;
  undefined4 uStack_a4;
  TMap<void_*,Chaos::IEventHandler_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<void_*,Chaos::IEventHandler_*,0>_>
  *local_a0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_98;
  undefined8 uStack_78;
  undefined8 local_70 [2];
  undefined8 local_60 [5];
  undefined4 local_34;
  
  bVar10 = IsInGameThread();
  if ((!bVar10) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsInGameThread()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\EventManager.h"
                          ,0x132,L""), bVar10)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  local_d8 = (**(code **)((longlong)*(this->EventBuffer).Ptr + 0x28))();
  if (((local_d8 == 0) || (*(int *)(local_d8 + 0x10) != 0)) ||
     (Chaos::Private::bEventManagerDispatchEmptyEvents != false)) {
    pFVar1 = &this->DeferredHandlerLock;
    pFVar15 = (FScriptContainerElement *)0x0;
    if ((pFVar1 == (FPlatformRWLock *)0x0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("Mutex",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                            ,0x43,L""), bVar10)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    AcquireSRWLockExclusive((PSRWLOCK)pFVar1);
    pTVar2 = &this->DeferredUnregisterHandlers;
    pFVar12 = pFVar15;
    iVar19 = 0;
    if ((TArray<void_const_*,TSizedDefaultAllocator<32>_> *)local_70 != pTVar2) {
      pFVar12 = (pTVar2->AllocatorInstance).Data;
      (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      iVar19 = (this->DeferredUnregisterHandlers).ArrayNum;
      (this->DeferredUnregisterHandlers).ArrayNum = 0;
      (this->DeferredUnregisterHandlers).ArrayMax = 0;
    }
    if (((this->DeferredUnregisterHandlers).ArrayNum != 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("DeferredUnregisterHandlers.Num() == 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\EventManager.h"
                            ,0x17f,L""), bVar10)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    if (pFVar1 != (FPlatformRWLock *)0x0) {
      ReleaseSRWLockExclusive((PSRWLOCK)pFVar1);
    }
    for (pFVar13 = pFVar12; pFVar13 != pFVar12 + (longlong)iVar19 * 8; pFVar13 = pFVar13 + 8) {
      (**(code **)(this->_padding_ + 0x10))(this,*(undefined8 *)pFVar13);
    }
    if (pFVar12 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar12);
    }
    pFVar1 = &this->HandlerLock;
    if ((pFVar1 == (FPlatformRWLock *)0x0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("Mutex",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                            ,0x1c,L""), bVar10)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    AcquireSRWLockShared((PSRWLOCK)pFVar1);
    local_e7 = this->bDispatchInProgress;
    local_c0 = &(this->HandlerMap).field_0x10;
    this->bDispatchInProgress = true;
    local_d0 = &this->HandlerMap;
    iVar19 = *(int *)&(this->HandlerMap).field_0x28;
    local_b0 = 0;
    uStack_c8 = 0;
    uStack_c4 = 1;
    iStack_b4 = 0;
    if (iVar19 != 0) {
      puVar17 = *(uint **)&(this->HandlerMap).field_0x20;
      if (puVar17 == (uint *)0x0) {
        puVar17 = (uint *)local_c0;
      }
      uVar20 = *puVar17;
      uStack_c8 = 0;
      while (uVar20 == 0) {
        iVar14 = (int)pFVar15;
        local_b0 = local_b0 + 0x20;
        uStack_c8 = iVar14 + 1;
        pFVar15 = (FScriptContainerElement *)(ulonglong)uStack_c8;
        iStack_b4 = iVar19;
        if ((int)(iVar19 + -1 + (iVar19 + -1 >> 0x1f & 0x1fU)) >> 5 < (int)uStack_c8)
        goto LAB_143f5efb1;
        uVar20 = puVar17[(longlong)iVar14 + 1];
      }
      uStack_c4 = -uVar20 & uVar20;
      uVar4 = (ulonglong)uStack_c4 * 2 + 1;
      lVar7 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      local_e4 = (int)lVar7;
      iStack_b4 = local_b0 + -1 + local_e4;
      if (iVar19 < iStack_b4) {
        iStack_b4 = iVar19;
      }
    }
LAB_143f5efb1:
    uStack_ac = local_34;
    iStack_a8 = *(int *)&(this->HandlerMap).field_0x8 - *(int *)&(this->HandlerMap).field_0x34;
    uVar20 = *(uint *)&(this->HandlerMap).field_0x28;
    uStack_b8 = 0xffffffff;
    TStack_98._padding_ = CONCAT44(uStack_c4,uStack_c8);
    uVar18 = uVar20 & 0xffffffe0;
    TStack_98.CurrentBitIndex = iStack_b4;
    TStack_98.UnvisitedBitMask = 0xffffffff;
    iVar19 = (int)uVar20 >> 5;
    TStack_98._28_4_ = local_34;
    TStack_98.BaseBitIndex = local_b0;
    uStack_78 = CONCAT44(uStack_a4,iStack_a8);
    local_a0 = local_d0;
    TStack_98.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_c0;
    if (((int)uVar20 < 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("StartIndex >= 0 && StartIndex <= Array.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x7af,L""), bVar10)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    lVar7 = local_d8;
    uVar5 = *(uint *)&(this->HandlerMap).field_0x28;
    if (uVar20 != uVar5) {
      puVar16 = *(undefined1 **)&(this->HandlerMap).field_0x20;
      if (puVar16 == (undefined1 *)0x0) {
        puVar16 = &(this->HandlerMap).field_0x10;
      }
      uVar20 = -1 << ((byte)uVar20 & 0x1f) & *(uint *)(puVar16 + (longlong)iVar19 * 4);
      while (uVar20 == 0) {
        lVar11 = (longlong)iVar19;
        uVar18 = uVar18 + 0x20;
        iVar19 = iVar19 + 1;
        uVar20 = uVar5;
        if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar19)
        goto LAB_143f5f0c6;
        uVar20 = *(uint *)(puVar16 + lVar11 * 4 + 4);
      }
      uVar4 = (ulonglong)(-uVar20 & uVar20) * 2 + 1;
      lVar11 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      local_e0 = (int)lVar11;
      uVar20 = (uVar18 - 1) + local_e0;
      if ((int)uVar5 < (int)uVar20) {
        uVar20 = uVar5;
      }
    }
LAB_143f5f0c6:
    while( true ) {
      pTVar9 = local_a0;
      if (*(int *)&local_a0->field_0x8 - *(int *)&local_a0->field_0x34 != (int)uStack_78) {
        local_e8 = 0;
        `TSparseArray<TSparseSetElement<TTuple<void_*,Chaos::IEventHandler_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_e8);
      }
      if (((TStack_98.CurrentBitIndex == uVar20) &&
          (TStack_98.Array == (TBitArray<FDefaultBitArrayAllocator> *)&(this->HandlerMap).field_0x10
          )) && (pTVar9 == &this->HandlerMap)) break;
      plVar6 = *(longlong **)(*(longlong *)pTVar9 + 8 + (longlong)TStack_98.CurrentBitIndex * 0x18);
      (**(code **)(*plVar6 + 8))(plVar6,lVar7);
      TStack_98.UnvisitedBitMask = TStack_98.UnvisitedBitMask & ~TStack_98._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_98);
    }
    SRWLock = &this->DeferredHandlerLock;
    this->bDispatchInProgress = local_e7;
    if (pFVar1 != (FPlatformRWLock *)0x0) {
      ReleaseSRWLockShared((PSRWLOCK)pFVar1);
    }
    pFVar15 = (FScriptContainerElement *)0x0;
    iVar19 = 0;
    if ((SRWLock == (FPlatformRWLock *)0x0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("Mutex",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                            ,0x43,L""), bVar10)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    AcquireSRWLockExclusive((PSRWLOCK)SRWLock);
    pTVar3 = &this->DeferredHandlers;
    if ((TArray<Chaos::IEventHandler_*,TSizedDefaultAllocator<32>_> *)local_60 != pTVar3) {
      pFVar15 = (pTVar3->AllocatorInstance).Data;
      (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      iVar19 = (this->DeferredHandlers).ArrayNum;
      (this->DeferredHandlers).ArrayNum = 0;
      (this->DeferredHandlers).ArrayMax = 0;
    }
    if (((this->DeferredHandlers).ArrayNum != 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("DeferredHandlers.Num() == 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\EventManager.h"
                            ,400,L""), bVar10)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    if (SRWLock != (FPlatformRWLock *)0x0) {
      ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
    }
    for (pFVar12 = pFVar15; pFVar12 != pFVar15 + (longlong)iVar19 * 8; pFVar12 = pFVar12 + 8) {
      (**(code **)(this->_padding_ + 8))(this,pFVar12);
    }
    if (pFVar15 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar15);
    }
  }
  return;
}

// FlipBufferIfRequired @ 143f6c090

void __thiscall
Chaos::TEventContainer<Chaos::FBreakingEventData>::FlipBufferIfRequired
          (TEventContainer<Chaos::FBreakingEventData> *this)

{
                    /* WARNING: Could not recover jumptable at 0x000143f6c097. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*(this->EventBuffer).Ptr + 0x30))();
  return;
}

// FlipBufferIfRequired @ 143f6c0b0

void __thiscall
Chaos::TEventContainer<Chaos::FCollisionEventData>::FlipBufferIfRequired
          (TEventContainer<Chaos::FCollisionEventData> *this)

{
                    /* WARNING: Could not recover jumptable at 0x000143f6c0b7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*(this->EventBuffer).Ptr + 0x30))();
  return;
}

// FlipBufferIfRequired @ 143f6c0d0

void __thiscall
Chaos::TEventContainer<Chaos::FCrumblingEventData>::FlipBufferIfRequired
          (TEventContainer<Chaos::FCrumblingEventData> *this)

{
                    /* WARNING: Could not recover jumptable at 0x000143f6c0d7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*(this->EventBuffer).Ptr + 0x30))();
  return;
}

// FlipBufferIfRequired @ 143f6c0f0

void __thiscall
Chaos::TEventContainer<Chaos::FRemovalEventData>::FlipBufferIfRequired
          (TEventContainer<Chaos::FRemovalEventData> *this)

{
                    /* WARNING: Could not recover jumptable at 0x000143f6c0f7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*(this->EventBuffer).Ptr + 0x30))();
  return;
}

// FlipBufferIfRequired @ 143f6c110

void __thiscall
Chaos::TEventContainer<Chaos::FSleepingEventData>::FlipBufferIfRequired
          (TEventContainer<Chaos::FSleepingEventData> *this)

{
                    /* WARNING: Could not recover jumptable at 0x000143f6c117. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*(this->EventBuffer).Ptr + 0x30))();
  return;
}

// FlipBufferIfRequired @ 143f6c130

void __thiscall
Chaos::TEventContainer<Chaos::FTrailingEventData>::FlipBufferIfRequired
          (TEventContainer<Chaos::FTrailingEventData> *this)

{
                    /* WARNING: Could not recover jumptable at 0x000143f6c137. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*(this->EventBuffer).Ptr + 0x30))();
  return;
}

// InjectProducerData @ 143f6f9d0

void __thiscall
Chaos::TEventContainer<Chaos::FBreakingEventData>::InjectProducerData
          (TEventContainer<Chaos::FBreakingEventData> *this,FPBDRigidsSolver *param_1,bool param_2)

{
  longlong *plVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong *plVar5;
  FPBDRigidsSolver *local_res8;
  undefined1 local_res18 [8];
  
  local_res18[0] = param_2;
  uVar3 = (**(code **)((longlong)*(this->EventBuffer).Ptr + 0x10))();
  local_res8 = param_1;
  UE::Core::Private::Function::CheckCallable(*(void **)&this->InjectedFunction);
  plVar1 = *(longlong **)&(this->InjectedFunction).field_0x28;
  pcVar2 = *(code **)&this->InjectedFunction;
  plVar5 = (longlong *)&(this->InjectedFunction).field_0x10;
  if (plVar1 != (longlong *)0x0) {
    plVar5 = plVar1;
  }
  uVar4 = (**(code **)(*plVar5 + 8))();
  (*pcVar2)(uVar4,&local_res8,uVar3,local_res18);
  return;
}

// InjectProducerData @ 143f6fa50

void __thiscall
Chaos::TEventContainer<Chaos::FCollisionEventData>::InjectProducerData
          (TEventContainer<Chaos::FCollisionEventData> *this,FPBDRigidsSolver *param_1,bool param_2)

{
  longlong *plVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong *plVar5;
  FPBDRigidsSolver *local_res8;
  undefined1 local_res18 [8];
  
  local_res18[0] = param_2;
  uVar3 = (**(code **)((longlong)*(this->EventBuffer).Ptr + 0x10))();
  local_res8 = param_1;
  UE::Core::Private::Function::CheckCallable(*(void **)&this->InjectedFunction);
  plVar1 = *(longlong **)&(this->InjectedFunction).field_0x28;
  pcVar2 = *(code **)&this->InjectedFunction;
  plVar5 = (longlong *)&(this->InjectedFunction).field_0x10;
  if (plVar1 != (longlong *)0x0) {
    plVar5 = plVar1;
  }
  uVar4 = (**(code **)(*plVar5 + 8))();
  (*pcVar2)(uVar4,&local_res8,uVar3,local_res18);
  return;
}

// InjectProducerData @ 143f6fad0

void __thiscall
Chaos::TEventContainer<Chaos::FCrumblingEventData>::InjectProducerData
          (TEventContainer<Chaos::FCrumblingEventData> *this,FPBDRigidsSolver *param_1,bool param_2)

{
  longlong *plVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong *plVar5;
  FPBDRigidsSolver *local_res8;
  undefined1 local_res18 [8];
  
  local_res18[0] = param_2;
  uVar3 = (**(code **)((longlong)*(this->EventBuffer).Ptr + 0x10))();
  local_res8 = param_1;
  UE::Core::Private::Function::CheckCallable(*(void **)&this->InjectedFunction);
  plVar1 = *(longlong **)&(this->InjectedFunction).field_0x28;
  pcVar2 = *(code **)&this->InjectedFunction;
  plVar5 = (longlong *)&(this->InjectedFunction).field_0x10;
  if (plVar1 != (longlong *)0x0) {
    plVar5 = plVar1;
  }
  uVar4 = (**(code **)(*plVar5 + 8))();
  (*pcVar2)(uVar4,&local_res8,uVar3,local_res18);
  return;
}

// InjectProducerData @ 143f6fb50

void __thiscall
Chaos::TEventContainer<Chaos::FRemovalEventData>::InjectProducerData
          (TEventContainer<Chaos::FRemovalEventData> *this,FPBDRigidsSolver *param_1,bool param_2)

{
  longlong *plVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong *plVar5;
  FPBDRigidsSolver *local_res8;
  undefined1 local_res18 [8];
  
  local_res18[0] = param_2;
  uVar3 = (**(code **)((longlong)*(this->EventBuffer).Ptr + 0x10))();
  local_res8 = param_1;
  UE::Core::Private::Function::CheckCallable(*(void **)&this->InjectedFunction);
  plVar1 = *(longlong **)&(this->InjectedFunction).field_0x28;
  pcVar2 = *(code **)&this->InjectedFunction;
  plVar5 = (longlong *)&(this->InjectedFunction).field_0x10;
  if (plVar1 != (longlong *)0x0) {
    plVar5 = plVar1;
  }
  uVar4 = (**(code **)(*plVar5 + 8))();
  (*pcVar2)(uVar4,&local_res8,uVar3,local_res18);
  return;
}

// InjectProducerData @ 143f6fbd0

void __thiscall
Chaos::TEventContainer<Chaos::FSleepingEventData>::InjectProducerData
          (TEventContainer<Chaos::FSleepingEventData> *this,FPBDRigidsSolver *param_1,bool param_2)

{
  longlong *plVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong *plVar5;
  FPBDRigidsSolver *local_res8;
  undefined1 local_res18 [8];
  
  local_res18[0] = param_2;
  uVar3 = (**(code **)((longlong)*(this->EventBuffer).Ptr + 0x10))();
  local_res8 = param_1;
  UE::Core::Private::Function::CheckCallable(*(void **)&this->InjectedFunction);
  plVar1 = *(longlong **)&(this->InjectedFunction).field_0x28;
  pcVar2 = *(code **)&this->InjectedFunction;
  plVar5 = (longlong *)&(this->InjectedFunction).field_0x10;
  if (plVar1 != (longlong *)0x0) {
    plVar5 = plVar1;
  }
  uVar4 = (**(code **)(*plVar5 + 8))();
  (*pcVar2)(uVar4,&local_res8,uVar3,local_res18);
  return;
}

// InjectProducerData @ 143f6fc50

void __thiscall
Chaos::TEventContainer<Chaos::FTrailingEventData>::InjectProducerData
          (TEventContainer<Chaos::FTrailingEventData> *this,FPBDRigidsSolver *param_1,bool param_2)

{
  longlong *plVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong *plVar5;
  FPBDRigidsSolver *local_res8;
  undefined1 local_res18 [8];
  
  local_res18[0] = param_2;
  uVar3 = (**(code **)((longlong)*(this->EventBuffer).Ptr + 0x10))();
  local_res8 = param_1;
  UE::Core::Private::Function::CheckCallable(*(void **)&this->InjectedFunction);
  plVar1 = *(longlong **)&(this->InjectedFunction).field_0x28;
  pcVar2 = *(code **)&this->InjectedFunction;
  plVar5 = (longlong *)&(this->InjectedFunction).field_0x10;
  if (plVar1 != (longlong *)0x0) {
    plVar5 = plVar1;
  }
  uVar4 = (**(code **)(*plVar5 + 8))();
  (*pcVar2)(uVar4,&local_res8,uVar3,local_res18);
  return;
}

// RegisterHandler @ 143f71260

void __thiscall
Chaos::TEventContainer<Chaos::FBreakingEventData>::RegisterHandler
          (TEventContainer<Chaos::FBreakingEventData> *this,IEventHandler **param_1)

{
  FPlatformRWLock *pFVar1;
  undefined8 *puVar2;
  code *pcVar3;
  int iVar4;
  bool bVar5;
  char cVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  longlong lVar10;
  undefined1 local_res8 [16];
  TPairInitializer<void_*_&&,Chaos::IEventHandler_*_const_&> local_res18;
  TPairInitializer<void_*_&&,Chaos::IEventHandler_*_const_&> local_98;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 *local_78;
  ulonglong local_70;
  IEventHandler ***local_68;
  IEventHandler **local_60;
  undefined8 *local_58;
  IEventHandler **local_50;
  undefined8 *local_48;
  IEventHandler **local_40;
  
  bVar5 = IsInGameThread();
  if (!bVar5) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\EventManager.h"
                       ,0xc1,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (this->bDispatchInProgress == false) {
    pFVar1 = &this->HandlerLock;
    if (pFVar1 == (FPlatformRWLock *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                         ,0xa2,L"");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    AcquireSRWLockExclusive((PSRWLOCK)pFVar1);
    local_98.Value = (IEventHandler **)(**(code **)((longlong)**param_1 + 0x18))();
    local_68 = &local_98.Value;
    local_60 = param_1;
    TSet<TTuple<void_*,Chaos::IEventHandler_*>,TDefaultMapHashableKeyFuncs<void_*,Chaos::IEventHandler_*,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<void_*_&&,Chaos::IEventHandler_*_const_&>_>
              ((TSet<TTuple<void_*,Chaos::IEventHandler_*>,TDefaultMapHashableKeyFuncs<void_*,Chaos::IEventHandler_*,0>,FDefaultSetAllocator>
                *)&this->HandlerMap,&local_res18,(bool *)&local_68);
    local_78 = (undefined8 *)0x0;
    local_70 = 0;
    cVar6 = (**(code **)((longlong)**param_1 + 0x10))(*param_1,&local_78);
    if (cVar6 == '\0') {
      lVar7 = (**(code **)((longlong)*(this->EventBuffer).Ptr + 0x28))();
      lVar10 = 0;
      if (lVar7 != 0) {
        lVar10 = lVar7 + 0x28;
      }
      if (lVar10 != 0) {
        local_80 = (**(code **)((longlong)**param_1 + 0x18))();
        local_48 = &local_80;
        local_40 = param_1;
        TSet<TTuple<void_*,Chaos::IEventHandler_*>,TDefaultMapHashableKeyFuncs<void_*,Chaos::IEventHandler_*,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<void_*_&&,Chaos::IEventHandler_*_const_&>_>
                  ((TSet<TTuple<void_*,Chaos::IEventHandler_*>,TDefaultMapHashableKeyFuncs<void_*,Chaos::IEventHandler_*,0>,FDefaultSetAllocator>
                    *)&this->HandlersNotInProxyOwnerMap,&local_98,(bool *)&local_48);
      }
    }
    else {
      iVar4 = (int)local_70;
      uVar8 = (ulonglong)(int)local_70;
      puVar2 = local_78 + uVar8;
      puVar9 = local_78;
      while( true ) {
        if ((int)uVar8 != iVar4) {
          `TCheckedPointerIterator<UObject_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_res8);
        }
        if (puVar9 == puVar2) break;
        local_88 = *puVar9;
        local_58 = &local_88;
        local_50 = param_1;
        TSet<TTuple<UObject_*,Chaos::IEventHandler_*>,TDefaultMapHashableKeyFuncs<UObject_*,Chaos::IEventHandler_*,1>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<UObject_*_const_&,Chaos::IEventHandler_*_const_&>_>
                  ((TSet<TTuple<UObject_*,Chaos::IEventHandler_*>,TDefaultMapHashableKeyFuncs<UObject_*,Chaos::IEventHandler_*,1>,FDefaultSetAllocator>
                    *)&this->ProxyOwnerToHandlerMap,
                   (TPairInitializer<UObject_*_const_&,Chaos::IEventHandler_*_const_&> *)
                   &local_res18.Value,(bool *)&local_58);
        uVar8 = local_70 & 0xffffffff;
        puVar9 = puVar9 + 1;
      }
    }
    if (local_78 != (undefined8 *)0x0) {
      FMemory::Free(local_78);
    }
    ReleaseSRWLockExclusive((PSRWLOCK)pFVar1);
  }
  else {
    pFVar1 = &this->DeferredHandlerLock;
    if (pFVar1 == (FPlatformRWLock *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                         ,0x43,L"");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    AcquireSRWLockExclusive((PSRWLOCK)pFVar1);
    TArray<Chaos::IEventHandler_*,TSizedDefaultAllocator<32>_>::
    AddUniqueImpl<Chaos::IEventHandler_*_const_&>(&this->DeferredHandlers,param_1);
    if (pFVar1 != (FPlatformRWLock *)0x0) {
      ReleaseSRWLockExclusive((PSRWLOCK)pFVar1);
    }
  }
  return;
}

// RegisterHandler @ 143f714c0

void __thiscall
Chaos::TEventContainer<Chaos::FCollisionEventData>::RegisterHandler
          (TEventContainer<Chaos::FCollisionEventData> *this,IEventHandler **param_1)

{
  FPlatformRWLock *pFVar1;
  undefined8 *puVar2;
  code *pcVar3;
  int iVar4;
  bool bVar5;
  char cVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  longlong lVar10;
  undefined1 local_res8 [16];
  TPairInitializer<void_*_&&,Chaos::IEventHandler_*_const_&> local_res18;
  TPairInitializer<void_*_&&,Chaos::IEventHandler_*_const_&> local_98;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 *local_78;
  ulonglong local_70;
  IEventHandler ***local_68;
  IEventHandler **local_60;
  undefined8 *local_58;
  IEventHandler **local_50;
  undefined8 *local_48;
  IEventHandler **local_40;
  
  bVar5 = IsInGameThread();
  if (!bVar5) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\EventManager.h"
                       ,0xc1,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (this->bDispatchInProgress == false) {
    pFVar1 = &this->HandlerLock;
    if (pFVar1 == (FPlatformRWLock *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                         ,0xa2,L"");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    AcquireSRWLockExclusive((PSRWLOCK)pFVar1);
    local_98.Value = (IEventHandler **)(**(code **)((longlong)**param_1 + 0x18))();
    local_68 = &local_98.Value;
    local_60 = param_1;
    TSet<TTuple<void_*,Chaos::IEventHandler_*>,TDefaultMapHashableKeyFuncs<void_*,Chaos::IEventHandler_*,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<void_*_&&,Chaos::IEventHandler_*_const_&>_>
              ((TSet<TTuple<void_*,Chaos::IEventHandler_*>,TDefaultMapHashableKeyFuncs<void_*,Chaos::IEventHandler_*,0>,FDefaultSetAllocator>
                *)&this->HandlerMap,&local_res18,(bool *)&local_68);
    local_78 = (undefined8 *)0x0;
    local_70 = 0;
    cVar6 = (**(code **)((longlong)**param_1 + 0x10))(*param_1,&local_78);
    if (cVar6 == '\0') {
      lVar7 = (**(code **)((longlong)*(this->EventBuffer).Ptr + 0x28))();
      lVar10 = 0;
      if (lVar7 != 0) {
        lVar10 = lVar7 + 0x20;
      }
      if (lVar10 != 0) {
        local_80 = (**(code **)((longlong)**param_1 + 0x18))();
        local_48 = &local_80;
        local_40 = param_1;
        TSet<TTuple<void_*,Chaos::IEventHandler_*>,TDefaultMapHashableKeyFuncs<void_*,Chaos::IEventHandler_*,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<void_*_&&,Chaos::IEventHandler_*_const_&>_>
                  ((TSet<TTuple<void_*,Chaos::IEventHandler_*>,TDefaultMapHashableKeyFuncs<void_*,Chaos::IEventHandler_*,0>,FDefaultSetAllocator>
                    *)&this->HandlersNotInProxyOwnerMap,&local_98,(bool *)&local_48);
      }
    }
    else {
      iVar4 = (int)local_70;
      uVar8 = (ulonglong)(int)local_70;
      puVar2 = local_78 + uVar8;
      puVar9 = local_78;
      while( true ) {
        if ((int)uVar8 != iVar4) {
          `TCheckedPointerIterator<UObject_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_res8);
        }
        if (puVar9 == puVar2) break;
        local_88 = *puVar9;
        local_58 = &local_88;
        local_50 = param_1;
        TSet<TTuple<UObject_*,Chaos::IEventHandler_*>,TDefaultMapHashableKeyFuncs<UObject_*,Chaos::IEventHandler_*,1>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<UObject_*_const_&,Chaos::IEventHandler_*_const_&>_>
                  ((TSet<TTuple<UObject_*,Chaos::IEventHandler_*>,TDefaultMapHashableKeyFuncs<UObject_*,Chaos::IEventHandler_*,1>,FDefaultSetAllocator>
                    *)&this->ProxyOwnerToHandlerMap,
                   (TPairInitializer<UObject_*_const_&,Chaos::IEventHandler_*_const_&> *)
                   &local_res18.Value,(bool *)&local_58);
        uVar8 = local_70 & 0xffffffff;
        puVar9 = puVar9 + 1;
      }
    }
    if (local_78 != (undefined8 *)0x0) {
      FMemory::Free(local_78);
    }
    ReleaseSRWLockExclusive((PSRWLOCK)pFVar1);
  }
  else {
    pFVar1 = &this->DeferredHandlerLock;
    if (pFVar1 == (FPlatformRWLock *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                         ,0x43,L"");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    AcquireSRWLockExclusive((PSRWLOCK)pFVar1);
    TArray<Chaos::IEventHandler_*,TSizedDefaultAllocator<32>_>::
    AddUniqueImpl<Chaos::IEventHandler_*_const_&>(&this->DeferredHandlers,param_1);
    if (pFVar1 != (FPlatformRWLock *)0x0) {
      ReleaseSRWLockExclusive((PSRWLOCK)pFVar1);
    }
  }
  return;
}

// RegisterHandler @ 143f71720

void __thiscall
Chaos::TEventContainer<Chaos::FCrumblingEventData>::RegisterHandler
          (TEventContainer<Chaos::FCrumblingEventData> *this,IEventHandler **param_1)

{
  FPlatformRWLock *pFVar1;
  undefined8 *puVar2;
  code *pcVar3;
  int iVar4;
  bool bVar5;
  char cVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  longlong lVar10;
  undefined1 local_res8 [16];
  TPairInitializer<void_*_&&,Chaos::IEventHandler_*_const_&> local_res18;
  TPairInitializer<void_*_&&,Chaos::IEventHandler_*_const_&> local_98;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 *local_78;
  ulonglong local_70;
  IEventHandler ***local_68;
  IEventHandler **local_60;
  undefined8 *local_58;
  IEventHandler **local_50;
  undefined8 *local_48;
  IEventHandler **local_40;
  
  bVar5 = IsInGameThread();
  if (!bVar5) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\EventManager.h"
                       ,0xc1,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (this->bDispatchInProgress == false) {
    pFVar1 = &this->HandlerLock;
    if (pFVar1 == (FPlatformRWLock *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                         ,0xa2,L"");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    AcquireSRWLockExclusive((PSRWLOCK)pFVar1);
    local_98.Value = (IEventHandler **)(**(code **)((longlong)**param_1 + 0x18))();
    local_68 = &local_98.Value;
    local_60 = param_1;
    TSet<TTuple<void_*,Chaos::IEventHandler_*>,TDefaultMapHashableKeyFuncs<void_*,Chaos::IEventHandler_*,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<void_*_&&,Chaos::IEventHandler_*_const_&>_>
              ((TSet<TTuple<void_*,Chaos::IEventHandler_*>,TDefaultMapHashableKeyFuncs<void_*,Chaos::IEventHandler_*,0>,FDefaultSetAllocator>
                *)&this->HandlerMap,&local_res18,(bool *)&local_68);
    local_78 = (undefined8 *)0x0;
    local_70 = 0;
    cVar6 = (**(code **)((longlong)**param_1 + 0x10))(*param_1,&local_78);
    if (cVar6 == '\0') {
      lVar7 = (**(code **)((longlong)*(this->EventBuffer).Ptr + 0x28))();
      lVar10 = 0;
      if (lVar7 != 0) {
        lVar10 = lVar7 + 0x28;
      }
      if (lVar10 != 0) {
        local_80 = (**(code **)((longlong)**param_1 + 0x18))();
        local_48 = &local_80;
        local_40 = param_1;
        TSet<TTuple<void_*,Chaos::IEventHandler_*>,TDefaultMapHashableKeyFuncs<void_*,Chaos::IEventHandler_*,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<void_*_&&,Chaos::IEventHandler_*_const_&>_>
                  ((TSet<TTuple<void_*,Chaos::IEventHandler_*>,TDefaultMapHashableKeyFuncs<void_*,Chaos::IEventHandler_*,0>,FDefaultSetAllocator>
                    *)&this->HandlersNotInProxyOwnerMap,&local_98,(bool *)&local_48);
      }
    }
    else {
      iVar4 = (int)local_70;
      uVar8 = (ulonglong)(int)local_70;
      puVar2 = local_78 + uVar8;
      puVar9 = local_78;
      while( true ) {
        if ((int)uVar8 != iVar4) {
          `TCheckedPointerIterator<UObject_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_res8);
        }
        if (puVar9 == puVar2) break;
        local_88 = *puVar9;
        local_58 = &local_88;
        local_50 = param_1;
        TSet<TTuple<UObject_*,Chaos::IEventHandler_*>,TDefaultMapHashableKeyFuncs<UObject_*,Chaos::IEventHandler_*,1>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<UObject_*_const_&,Chaos::IEventHandler_*_const_&>_>
                  ((TSet<TTuple<UObject_*,Chaos::IEventHandler_*>,TDefaultMapHashableKeyFuncs<UObject_*,Chaos::IEventHandler_*,1>,FDefaultSetAllocator>
                    *)&this->ProxyOwnerToHandlerMap,
                   (TPairInitializer<UObject_*_const_&,Chaos::IEventHandler_*_const_&> *)
                   &local_res18.Value,(bool *)&local_58);
        uVar8 = local_70 & 0xffffffff;
        puVar9 = puVar9 + 1;
      }
    }
    if (local_78 != (undefined8 *)0x0) {
      FMemory::Free(local_78);
    }
    ReleaseSRWLockExclusive((PSRWLOCK)pFVar1);
  }
  else {
    pFVar1 = &this->DeferredHandlerLock;
    if (pFVar1 == (FPlatformRWLock *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                         ,0x43,L"");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    AcquireSRWLockExclusive((PSRWLOCK)pFVar1);
    TArray<Chaos::IEventHandler_*,TSizedDefaultAllocator<32>_>::
    AddUniqueImpl<Chaos::IEventHandler_*_const_&>(&this->DeferredHandlers,param_1);
    if (pFVar1 != (FPlatformRWLock *)0x0) {
      ReleaseSRWLockExclusive((PSRWLOCK)pFVar1);
    }
  }
  return;
}

// RegisterHandler @ 143f71980

void __thiscall
Chaos::TEventContainer<Chaos::FRemovalEventData>::RegisterHandler
          (TEventContainer<Chaos::FRemovalEventData> *this,IEventHandler **param_1)

{
  FPlatformRWLock *pFVar1;
  undefined8 *puVar2;
  code *pcVar3;
  int iVar4;
  bool bVar5;
  char cVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  longlong lVar10;
  undefined1 local_res8 [16];
  TPairInitializer<void_*_&&,Chaos::IEventHandler_*_const_&> local_res18;
  TPairInitializer<void_*_&&,Chaos::IEventHandler_*_const_&> local_98;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 *local_78;
  ulonglong local_70;
  IEventHandler ***local_68;
  IEventHandler **local_60;
  undefined8 *local_58;
  IEventHandler **local_50;
  undefined8 *local_48;
  IEventHandler **local_40;
  
  bVar5 = IsInGameThread();
  if (!bVar5) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\EventManager.h"
                       ,0xc1,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (this->bDispatchInProgress == false) {
    pFVar1 = &this->HandlerLock;
    if (pFVar1 == (FPlatformRWLock *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                         ,0xa2,L"");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    AcquireSRWLockExclusive((PSRWLOCK)pFVar1);
    local_98.Value = (IEventHandler **)(**(code **)((longlong)**param_1 + 0x18))();
    local_68 = &local_98.Value;
    local_60 = param_1;
    TSet<TTuple<void_*,Chaos::IEventHandler_*>,TDefaultMapHashableKeyFuncs<void_*,Chaos::IEventHandler_*,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<void_*_&&,Chaos::IEventHandler_*_const_&>_>
              ((TSet<TTuple<void_*,Chaos::IEventHandler_*>,TDefaultMapHashableKeyFuncs<void_*,Chaos::IEventHandler_*,0>,FDefaultSetAllocator>
                *)&this->HandlerMap,&local_res18,(bool *)&local_68);
    local_78 = (undefined8 *)0x0;
    local_70 = 0;
    cVar6 = (**(code **)((longlong)**param_1 + 0x10))(*param_1,&local_78);
    if (cVar6 == '\0') {
      lVar7 = (**(code **)((longlong)*(this->EventBuffer).Ptr + 0x28))();
      lVar10 = 0;
      if (lVar7 != 0) {
        lVar10 = lVar7 + 0x20;
      }
      if (lVar10 != 0) {
        local_80 = (**(code **)((longlong)**param_1 + 0x18))();
        local_48 = &local_80;
        local_40 = param_1;
        TSet<TTuple<void_*,Chaos::IEventHandler_*>,TDefaultMapHashableKeyFuncs<void_*,Chaos::IEventHandler_*,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<void_*_&&,Chaos::IEventHandler_*_const_&>_>
                  ((TSet<TTuple<void_*,Chaos::IEventHandler_*>,TDefaultMapHashableKeyFuncs<void_*,Chaos::IEventHandler_*,0>,FDefaultSetAllocator>
                    *)&this->HandlersNotInProxyOwnerMap,&local_98,(bool *)&local_48);
      }
    }
    else {
      iVar4 = (int)local_70;
      uVar8 = (ulonglong)(int)local_70;
      puVar2 = local_78 + uVar8;
      puVar9 = local_78;
      while( true ) {
        if ((int)uVar8 != iVar4) {
          `TCheckedPointerIterator<UObject_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_res8);
        }
        if (puVar9 == puVar2) break;
        local_88 = *puVar9;
        local_58 = &local_88;
        local_50 = param_1;
        TSet<TTuple<UObject_*,Chaos::IEventHandler_*>,TDefaultMapHashableKeyFuncs<UObject_*,Chaos::IEventHandler_*,1>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<UObject_*_const_&,Chaos::IEventHandler_*_const_&>_>
                  ((TSet<TTuple<UObject_*,Chaos::IEventHandler_*>,TDefaultMapHashableKeyFuncs<UObject_*,Chaos::IEventHandler_*,1>,FDefaultSetAllocator>
                    *)&this->ProxyOwnerToHandlerMap,
                   (TPairInitializer<UObject_*_const_&,Chaos::IEventHandler_*_const_&> *)
                   &local_res18.Value,(bool *)&local_58);
        uVar8 = local_70 & 0xffffffff;
        puVar9 = puVar9 + 1;
      }
    }
    if (local_78 != (undefined8 *)0x0) {
      FMemory::Free(local_78);
    }
    ReleaseSRWLockExclusive((PSRWLOCK)pFVar1);
  }
  else {
    pFVar1 = &this->DeferredHandlerLock;
    if (pFVar1 == (FPlatformRWLock *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                         ,0x43,L"");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    AcquireSRWLockExclusive((PSRWLOCK)pFVar1);
    TArray<Chaos::IEventHandler_*,TSizedDefaultAllocator<32>_>::
    AddUniqueImpl<Chaos::IEventHandler_*_const_&>(&this->DeferredHandlers,param_1);
    if (pFVar1 != (FPlatformRWLock *)0x0) {
      ReleaseSRWLockExclusive((PSRWLOCK)pFVar1);
    }
  }
  return;
}

// RegisterHandler @ 143f71be0

void __thiscall
Chaos::TEventContainer<Chaos::FSleepingEventData>::RegisterHandler
          (TEventContainer<Chaos::FSleepingEventData> *this,IEventHandler **param_1)

{
  FPlatformRWLock *pFVar1;
  undefined8 *puVar2;
  code *pcVar3;
  int iVar4;
  bool bVar5;
  char cVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  undefined1 local_res8 [8];
  TPairInitializer<void_*_&&,Chaos::IEventHandler_*_const_&> local_res18;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 *local_58;
  ulonglong local_50;
  undefined8 *local_48;
  IEventHandler **local_40;
  undefined8 *local_38;
  IEventHandler **local_30;
  
  bVar5 = IsInGameThread();
  if (!bVar5) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\EventManager.h"
                       ,0xc1,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (this->bDispatchInProgress == false) {
    pFVar1 = &this->HandlerLock;
    if (pFVar1 == (FPlatformRWLock *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                         ,0xa2,L"");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    AcquireSRWLockExclusive((PSRWLOCK)pFVar1);
    local_68 = (**(code **)((longlong)**param_1 + 0x18))();
    local_48 = &local_68;
    local_40 = param_1;
    TSet<TTuple<void_*,Chaos::IEventHandler_*>,TDefaultMapHashableKeyFuncs<void_*,Chaos::IEventHandler_*,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<void_*_&&,Chaos::IEventHandler_*_const_&>_>
              ((TSet<TTuple<void_*,Chaos::IEventHandler_*>,TDefaultMapHashableKeyFuncs<void_*,Chaos::IEventHandler_*,0>,FDefaultSetAllocator>
                *)&this->HandlerMap,&local_res18,(bool *)&local_48);
    local_58 = (undefined8 *)0x0;
    local_50 = 0;
    cVar6 = (**(code **)((longlong)**param_1 + 0x10))(*param_1,&local_58);
    if (cVar6 == '\0') {
      (**(code **)((longlong)*(this->EventBuffer).Ptr + 0x28))();
    }
    else {
      iVar4 = (int)local_50;
      uVar7 = (ulonglong)(int)local_50;
      puVar2 = local_58 + uVar7;
      puVar8 = local_58;
      while( true ) {
        if ((int)uVar7 != iVar4) {
          `TCheckedPointerIterator<UObject_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_res8);
        }
        if (puVar8 == puVar2) break;
        local_60 = *puVar8;
        local_38 = &local_60;
        local_30 = param_1;
        TSet<TTuple<UObject_*,Chaos::IEventHandler_*>,TDefaultMapHashableKeyFuncs<UObject_*,Chaos::IEventHandler_*,1>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<UObject_*_const_&,Chaos::IEventHandler_*_const_&>_>
                  ((TSet<TTuple<UObject_*,Chaos::IEventHandler_*>,TDefaultMapHashableKeyFuncs<UObject_*,Chaos::IEventHandler_*,1>,FDefaultSetAllocator>
                    *)&this->ProxyOwnerToHandlerMap,
                   (TPairInitializer<UObject_*_const_&,Chaos::IEventHandler_*_const_&> *)
                   &local_res18.Value,(bool *)&local_38);
        uVar7 = local_50 & 0xffffffff;
        puVar8 = puVar8 + 1;
      }
    }
    if (local_58 != (undefined8 *)0x0) {
      FMemory::Free(local_58);
    }
    ReleaseSRWLockExclusive((PSRWLOCK)pFVar1);
  }
  else {
    pFVar1 = &this->DeferredHandlerLock;
    if (pFVar1 == (FPlatformRWLock *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                         ,0x43,L"");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    AcquireSRWLockExclusive((PSRWLOCK)pFVar1);
    TArray<Chaos::IEventHandler_*,TSizedDefaultAllocator<32>_>::
    AddUniqueImpl<Chaos::IEventHandler_*_const_&>(&this->DeferredHandlers,param_1);
    if (pFVar1 != (FPlatformRWLock *)0x0) {
      ReleaseSRWLockExclusive((PSRWLOCK)pFVar1);
      return;
    }
  }
  return;
}

// RegisterHandler @ 143f71e10

void __thiscall
Chaos::TEventContainer<Chaos::FTrailingEventData>::RegisterHandler
          (TEventContainer<Chaos::FTrailingEventData> *this,IEventHandler **param_1)

{
  FPlatformRWLock *pFVar1;
  undefined8 *puVar2;
  code *pcVar3;
  int iVar4;
  bool bVar5;
  char cVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  undefined1 local_res8 [8];
  TPairInitializer<void_*_&&,Chaos::IEventHandler_*_const_&> local_res18;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 *local_58;
  ulonglong local_50;
  undefined8 *local_48;
  IEventHandler **local_40;
  undefined8 *local_38;
  IEventHandler **local_30;
  
  bVar5 = IsInGameThread();
  if (!bVar5) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\EventManager.h"
                       ,0xc1,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (this->bDispatchInProgress == false) {
    pFVar1 = &this->HandlerLock;
    if (pFVar1 == (FPlatformRWLock *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                         ,0xa2,L"");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    AcquireSRWLockExclusive((PSRWLOCK)pFVar1);
    local_68 = (**(code **)((longlong)**param_1 + 0x18))();
    local_48 = &local_68;
    local_40 = param_1;
    TSet<TTuple<void_*,Chaos::IEventHandler_*>,TDefaultMapHashableKeyFuncs<void_*,Chaos::IEventHandler_*,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<void_*_&&,Chaos::IEventHandler_*_const_&>_>
              ((TSet<TTuple<void_*,Chaos::IEventHandler_*>,TDefaultMapHashableKeyFuncs<void_*,Chaos::IEventHandler_*,0>,FDefaultSetAllocator>
                *)&this->HandlerMap,&local_res18,(bool *)&local_48);
    local_58 = (undefined8 *)0x0;
    local_50 = 0;
    cVar6 = (**(code **)((longlong)**param_1 + 0x10))(*param_1,&local_58);
    if (cVar6 == '\0') {
      (**(code **)((longlong)*(this->EventBuffer).Ptr + 0x28))();
    }
    else {
      iVar4 = (int)local_50;
      uVar7 = (ulonglong)(int)local_50;
      puVar2 = local_58 + uVar7;
      puVar8 = local_58;
      while( true ) {
        if ((int)uVar7 != iVar4) {
          `TCheckedPointerIterator<UObject_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_res8);
        }
        if (puVar8 == puVar2) break;
        local_60 = *puVar8;
        local_38 = &local_60;
        local_30 = param_1;
        TSet<TTuple<UObject_*,Chaos::IEventHandler_*>,TDefaultMapHashableKeyFuncs<UObject_*,Chaos::IEventHandler_*,1>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<UObject_*_const_&,Chaos::IEventHandler_*_const_&>_>
                  ((TSet<TTuple<UObject_*,Chaos::IEventHandler_*>,TDefaultMapHashableKeyFuncs<UObject_*,Chaos::IEventHandler_*,1>,FDefaultSetAllocator>
                    *)&this->ProxyOwnerToHandlerMap,
                   (TPairInitializer<UObject_*_const_&,Chaos::IEventHandler_*_const_&> *)
                   &local_res18.Value,(bool *)&local_38);
        uVar7 = local_50 & 0xffffffff;
        puVar8 = puVar8 + 1;
      }
    }
    if (local_58 != (undefined8 *)0x0) {
      FMemory::Free(local_58);
    }
    ReleaseSRWLockExclusive((PSRWLOCK)pFVar1);
  }
  else {
    pFVar1 = &this->DeferredHandlerLock;
    if (pFVar1 == (FPlatformRWLock *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                         ,0x43,L"");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    AcquireSRWLockExclusive((PSRWLOCK)pFVar1);
    TArray<Chaos::IEventHandler_*,TSizedDefaultAllocator<32>_>::
    AddUniqueImpl<Chaos::IEventHandler_*_const_&>(&this->DeferredHandlers,param_1);
    if (pFVar1 != (FPlatformRWLock *)0x0) {
      ReleaseSRWLockExclusive((PSRWLOCK)pFVar1);
      return;
    }
  }
  return;
}

// ResetConsumerBuffer @ 143f736b0

void __thiscall
Chaos::TEventContainer<Chaos::FBreakingEventData>::ResetConsumerBuffer
          (TEventContainer<Chaos::FBreakingEventData> *this)

{
  longlong lVar1;
  
  lVar1 = (**(code **)((longlong)*(this->EventBuffer).Ptr + 0x18))();
  *(undefined4 *)(lVar1 + 0x10) = 0;
  if (*(int *)(lVar1 + 0x14) < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc0,0x10,0,(ForAnyElementType *)(lVar1 + 8),0,(int *)(lVar1 + 0x14));
  }
  *(undefined1 *)(lVar1 + 0x18) = 0;
  TSet<TTuple<IPhysicsProxyBase_*,TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<IPhysicsProxyBase_*,TArray<int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<IPhysicsProxyBase_*,TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<IPhysicsProxyBase_*,TArray<int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
           *)(lVar1 + 0x28));
  return;
}

// ResetConsumerBuffer @ 143f73710

void __thiscall
Chaos::TEventContainer<Chaos::FCollisionEventData>::ResetConsumerBuffer
          (TEventContainer<Chaos::FCollisionEventData> *this)

{
  longlong lVar1;
  
  lVar1 = (**(code **)((longlong)*(this->EventBuffer).Ptr + 0x18))();
  TSet<TTuple<IPhysicsProxyBase_*,TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<IPhysicsProxyBase_*,TArray<int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<IPhysicsProxyBase_*,TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<IPhysicsProxyBase_*,TArray<int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
           *)(lVar1 + 0x20));
  *(undefined4 *)(lVar1 + 0x10) = 0;
  if (*(int *)(lVar1 + 0x14) < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x120,8,0,(ForAnyElementType *)(lVar1 + 8),0,(int *)(lVar1 + 0x14));
  }
  return;
}

// ResetConsumerBuffer @ 143f73770

void __thiscall
Chaos::TEventContainer<Chaos::FCrumblingEventData>::ResetConsumerBuffer
          (TEventContainer<Chaos::FCrumblingEventData> *this)

{
  FCrumblingEventData *this_00;
  
  this_00 = (FCrumblingEventData *)(**(code **)((longlong)*(this->EventBuffer).Ptr + 0x18))();
  FCrumblingEventData::Reset(this_00);
  return;
}

// ResetConsumerBuffer @ 143f73790

void __thiscall
Chaos::TEventContainer<Chaos::FRemovalEventData>::ResetConsumerBuffer
          (TEventContainer<Chaos::FRemovalEventData> *this)

{
  longlong lVar1;
  
  lVar1 = (**(code **)((longlong)*(this->EventBuffer).Ptr + 0x18))();
  *(undefined4 *)(lVar1 + 0x10) = 0;
  if (*(int *)(lVar1 + 0x14) < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x58,8,0,(ForAnyElementType *)(lVar1 + 8),0,(int *)(lVar1 + 0x14));
  }
  TSet<TTuple<IPhysicsProxyBase_*,TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<IPhysicsProxyBase_*,TArray<int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<IPhysicsProxyBase_*,TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<IPhysicsProxyBase_*,TArray<int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
           *)(lVar1 + 0x20));
  return;
}

// ResetConsumerBuffer @ 143f737f0

void __thiscall
Chaos::TEventContainer<Chaos::FSleepingEventData>::ResetConsumerBuffer
          (TEventContainer<Chaos::FSleepingEventData> *this)

{
  int iVar1;
  ForAnyElementType *pFVar2;
  
  pFVar2 = (ForAnyElementType *)(**(code **)((longlong)*(this->EventBuffer).Ptr + 0x18))();
  iVar1 = *(int *)((longlong)&pFVar2[1].Data + 4);
  *(undefined4 *)&pFVar2[1].Data = 0;
  if (iVar1 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,pFVar2,0,(int *)((longlong)&pFVar2[1].Data + 4));
  }
  return;
}

// ResetConsumerBuffer @ 143f73840

void __thiscall
Chaos::TEventContainer<Chaos::FTrailingEventData>::ResetConsumerBuffer
          (TEventContainer<Chaos::FTrailingEventData> *this)

{
  longlong lVar1;
  
  lVar1 = (**(code **)((longlong)*(this->EventBuffer).Ptr + 0x18))();
  *(undefined4 *)(lVar1 + 0x10) = 0;
  if (*(int *)(lVar1 + 0x14) < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc0,0x10,0,(ForAnyElementType *)(lVar1 + 8),0,(int *)(lVar1 + 0x14));
  }
  TSet<TTuple<IPhysicsProxyBase_*,TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<IPhysicsProxyBase_*,TArray<int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<IPhysicsProxyBase_*,TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<IPhysicsProxyBase_*,TArray<int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
           *)(lVar1 + 0x20));
  return;
}

// UnregisterHandler @ 143f778e0

void __thiscall
Chaos::TEventContainer<Chaos::FBreakingEventData>::UnregisterHandler
          (TEventContainer<Chaos::FBreakingEventData> *this,void *param_1)

{
  TMultiMap<UObject_*,Chaos::IEventHandler_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,Chaos::IEventHandler_*,1>_>
  *this_00;
  ulonglong uVar1;
  uint uVar2;
  longlong *plVar3;
  IEventHandler *pIVar4;
  code *pcVar5;
  undefined8 uVar6;
  TMultiMap<UObject_*,Chaos::IEventHandler_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,Chaos::IEventHandler_*,1>_>
  *pTVar7;
  bool bVar8;
  int iVar9;
  void *pvVar10;
  IEventHandler **ppIVar11;
  longlong lVar12;
  FPlatformRWLock *SRWLock;
  uint uVar13;
  FScriptContainerElement *pFVar14;
  int iVar15;
  ForAnyElementType FVar16;
  undefined1 *puVar17;
  uint *puVar18;
  uint uVar19;
  undefined1 local_res8 [8];
  void *local_res10;
  undefined1 local_res18 [8];
  int local_res20;
  ForAnyElementType local_f8;
  undefined8 local_f0;
  int local_e8;
  void *local_e0;
  void *local_d8;
  TMultiMap<UObject_*,Chaos::IEventHandler_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,Chaos::IEventHandler_*,1>_>
  *local_d0;
  int iStack_c8;
  uint uStack_c4;
  undefined1 *local_c0;
  undefined4 uStack_b8;
  int iStack_b4;
  int local_b0;
  undefined4 uStack_ac;
  int iStack_a8;
  undefined4 uStack_a4;
  TMultiMap<UObject_*,Chaos::IEventHandler_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,Chaos::IEventHandler_*,1>_>
  *local_a0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_98;
  undefined8 uStack_78;
  undefined4 local_54;
  
  local_res10 = param_1;
  bVar8 = IsInGameThread();
  if ((!bVar8) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\EventManager.h"
                         ,0xe6,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if (this->bDispatchInProgress == false) {
    if ((&this->HandlerLock == (FPlatformRWLock *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Mutex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                           ,0x43,L""), bVar8)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    AcquireSRWLockExclusive((PSRWLOCK)&this->HandlerLock);
    this_00 = &this->ProxyOwnerToHandlerMap;
    local_c0 = &(this->ProxyOwnerToHandlerMap).field_0x10;
    local_f8.Data = (FScriptContainerElement *)0x0;
    local_f0 = 0;
    iStack_c8 = 0;
    iVar9 = *(int *)&(this->ProxyOwnerToHandlerMap).field_0x28;
    uStack_c4 = 1;
    local_b0 = 0;
    iStack_b4 = iStack_c8;
    if (iVar9 != 0) {
      puVar18 = *(uint **)&(this->ProxyOwnerToHandlerMap).field_0x20;
      if (puVar18 == (uint *)0x0) {
        puVar18 = (uint *)local_c0;
      }
      uVar13 = *puVar18;
      local_b0 = 0;
      iStack_c8 = 0;
      while (uVar13 == 0) {
        lVar12 = (longlong)iStack_c8;
        local_b0 = local_b0 + 0x20;
        iStack_c8 = iStack_c8 + 1;
        iStack_b4 = iVar9;
        if ((int)(iVar9 + -1 + (iVar9 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_c8) goto LAB_143f77aaf;
        uVar13 = puVar18[lVar12 + 1];
      }
      uStack_c4 = -uVar13 & uVar13;
      uVar1 = (ulonglong)uStack_c4 * 2 + 1;
      lVar12 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      local_res20 = (int)lVar12;
      iStack_b4 = local_b0 + -1 + local_res20;
      if (iVar9 < iStack_b4) {
        iStack_b4 = iVar9;
      }
    }
LAB_143f77aaf:
    uVar13 = *(uint *)&(this->ProxyOwnerToHandlerMap).field_0x28;
    uStack_ac = local_54;
    iStack_a8 = *(int *)&(this->ProxyOwnerToHandlerMap).field_0x8 -
                *(int *)&(this->ProxyOwnerToHandlerMap).field_0x34;
    uVar19 = uVar13 & 0xffffffe0;
    uStack_b8 = 0xffffffff;
    TStack_98.CurrentBitIndex = iStack_b4;
    TStack_98.UnvisitedBitMask = 0xffffffff;
    TStack_98._padding_ = CONCAT44(uStack_c4,iStack_c8);
    iVar15 = (int)uVar13 >> 5;
    TStack_98._28_4_ = local_54;
    TStack_98.BaseBitIndex = local_b0;
    uStack_78 = CONCAT44(uStack_a4,iStack_a8);
    local_d0 = this_00;
    local_a0 = this_00;
    TStack_98.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_c0;
    if ((((int)uVar13 < 0) || (iVar9 < (int)uVar13)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar8)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    uVar2 = *(uint *)&(this->ProxyOwnerToHandlerMap).field_0x28;
    if (uVar13 != uVar2) {
      puVar17 = *(undefined1 **)&(this->ProxyOwnerToHandlerMap).field_0x20;
      if (puVar17 == (undefined1 *)0x0) {
        puVar17 = &(this->ProxyOwnerToHandlerMap).field_0x10;
      }
      uVar13 = -1 << ((byte)uVar13 & 0x1f) & *(uint *)(puVar17 + (longlong)iVar15 * 4);
      while (uVar13 == 0) {
        lVar12 = (longlong)iVar15;
        uVar19 = uVar19 + 0x20;
        iVar15 = iVar15 + 1;
        uVar13 = uVar2;
        if ((int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar15)
        goto LAB_143f77bc0;
        uVar13 = *(uint *)(puVar17 + lVar12 * 4 + 4);
      }
      uVar1 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
      lVar12 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      local_e8 = (int)lVar12;
      uVar13 = local_e8 + -1 + uVar19;
      if ((int)uVar2 < (int)uVar13) {
        uVar13 = uVar2;
      }
    }
LAB_143f77bc0:
    while( true ) {
      pTVar7 = local_a0;
      if (*(int *)&local_a0->field_0x8 - *(int *)&local_a0->field_0x34 != (int)uStack_78) {
        local_res8[0] = 0;
        `TSparseArray<TSparseSetElement<TTuple<UObject_*,Chaos::IEventHandler_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if (((TStack_98.CurrentBitIndex == uVar13) &&
          (TStack_98.Array ==
           (TBitArray<FDefaultBitArrayAllocator> *)&(this->ProxyOwnerToHandlerMap).field_0x10)) &&
         (pTVar7 == this_00)) break;
      lVar12 = *(longlong *)pTVar7;
      pFVar14 = (FScriptContainerElement *)(lVar12 + (longlong)TStack_98.CurrentBitIndex * 0x18);
      plVar3 = *(longlong **)(lVar12 + 8 + (longlong)TStack_98.CurrentBitIndex * 0x18);
      if ((plVar3 != (longlong *)0x0) &&
         (pvVar10 = (void *)(**(code **)(*plVar3 + 0x18))(), pvVar10 == local_res10)) {
        if ((local_f8.Data <= pFVar14) &&
           ((pFVar14 < local_f8.Data + (longlong)local_f0._4_4_ * 0x10 &&
            (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar8)))) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar9 = (int)local_f0;
        if ((int)local_f0 == local_f0._4_4_) {
          iVar9 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x810,&local_f8,(int *)((longlong)&local_f0 + 4));
        }
        local_f0 = CONCAT44(local_f0._4_4_,iVar9 + 1);
        uVar6 = *(undefined8 *)(pFVar14 + 8);
        *(undefined8 *)(local_f8.Data + (longlong)iVar9 * 0x10) = *(undefined8 *)pFVar14;
        *(undefined8 *)(local_f8.Data + (longlong)iVar9 * 0x10 + 8) = uVar6;
      }
      TStack_98.UnvisitedBitMask = TStack_98.UnvisitedBitMask & ~TStack_98._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_98);
    }
    iVar9 = (int)local_f0;
    SRWLock = &this->HandlerLock;
    pFVar14 = local_f8.Data + (longlong)(int)local_f0 * 0x10;
    FVar16.Data = local_f8.Data;
    while( true ) {
      if ((int)local_f0 != iVar9) {
        `TCheckedPointerIterator<TTuple<UObject_*,Chaos::IEventHandler_*>,int,0>::operator!='::__l2
        ::<lambda_1>::operator()(local_res18);
      }
      if (FVar16.Data == pFVar14) break;
      TMultiMap<UObject_*,Chaos::IEventHandler_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,Chaos::IEventHandler_*,1>_>
      ::Remove(this_00,*(UObject **)FVar16.Data,*(IEventHandler **)(FVar16.Data + 8));
      FVar16.Data = FVar16.Data + 0x10;
    }
    local_e0 = local_res10;
    if (*(int *)&(this->HandlersNotInProxyOwnerMap).field_0x8 !=
        *(int *)&(this->HandlersNotInProxyOwnerMap).field_0x34) {
      uVar13 = ((uint)((ulonglong)local_res10 >> 0x14) & 0xffff ^
               (uint)((ulonglong)local_res10 >> 4)) * -0x7a143595;
      uVar13 = (uVar13 >> 0xd ^ uVar13) * -0x3d4d51cb;
      TSet<TTuple<void_*,Chaos::IEventHandler_*>,TDefaultMapHashableKeyFuncs<void_*,Chaos::IEventHandler_*,0>,FDefaultSetAllocator>
      ::RemoveImpl<void_const_*>
                ((TSet<TTuple<void_*,Chaos::IEventHandler_*>,TDefaultMapHashableKeyFuncs<void_*,Chaos::IEventHandler_*,0>,FDefaultSetAllocator>
                  *)&this->HandlersNotInProxyOwnerMap,uVar13 >> 0x10 ^ uVar13,&local_e0);
    }
    ppIVar11 = TMapBase<void_*,Chaos::IEventHandler_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<void_*,Chaos::IEventHandler_*,0>_>
               ::Find((TMapBase<void_*,Chaos::IEventHandler_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<void_*,Chaos::IEventHandler_*,0>_>
                       *)&this->HandlerMap,local_res10);
    if (ppIVar11 != (IEventHandler **)0x0) {
      pIVar4 = *ppIVar11;
      if (pIVar4 != (IEventHandler *)0x0) {
        (**(code **)*pIVar4)(pIVar4,1);
      }
      *ppIVar11 = (IEventHandler *)0x0;
      local_d8 = local_res10;
      if (*(int *)&(this->HandlerMap).field_0x8 != *(int *)&(this->HandlerMap).field_0x34) {
        uVar13 = ((uint)((ulonglong)local_res10 >> 0x14) & 0xffff ^
                 (uint)((ulonglong)local_res10 >> 4)) * -0x7a143595;
        uVar13 = (uVar13 >> 0xd ^ uVar13) * -0x3d4d51cb;
        TSet<TTuple<void_*,Chaos::IEventHandler_*>,TDefaultMapHashableKeyFuncs<void_*,Chaos::IEventHandler_*,0>,FDefaultSetAllocator>
        ::RemoveImpl<void_const_*>
                  ((TSet<TTuple<void_*,Chaos::IEventHandler_*>,TDefaultMapHashableKeyFuncs<void_*,Chaos::IEventHandler_*,0>,FDefaultSetAllocator>
                    *)&this->HandlerMap,uVar13 >> 0x10 ^ uVar13,&local_d8);
      }
    }
    if (local_f8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f8.Data);
    }
  }
  else {
    SRWLock = &this->DeferredHandlerLock;
    if ((SRWLock == (FPlatformRWLock *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Mutex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                           ,0x43,L""), bVar8)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    AcquireSRWLockExclusive((PSRWLOCK)SRWLock);
    TArray<void_const_*,TSizedDefaultAllocator<32>_>::AddUniqueImpl<void_const_*_const_&>
              (&this->DeferredUnregisterHandlers,&local_res10);
  }
  if (SRWLock != (FPlatformRWLock *)0x0) {
    ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
  }
  return;
}

// UnregisterHandler @ 143f77e60

void __thiscall
Chaos::TEventContainer<Chaos::FCollisionEventData>::UnregisterHandler
          (TEventContainer<Chaos::FCollisionEventData> *this,void *param_1)

{
  TMultiMap<UObject_*,Chaos::IEventHandler_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,Chaos::IEventHandler_*,1>_>
  *this_00;
  ulonglong uVar1;
  uint uVar2;
  longlong *plVar3;
  IEventHandler *pIVar4;
  code *pcVar5;
  undefined8 uVar6;
  TMultiMap<UObject_*,Chaos::IEventHandler_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,Chaos::IEventHandler_*,1>_>
  *pTVar7;
  bool bVar8;
  int iVar9;
  void *pvVar10;
  IEventHandler **ppIVar11;
  longlong lVar12;
  FPlatformRWLock *SRWLock;
  uint uVar13;
  FScriptContainerElement *pFVar14;
  int iVar15;
  ForAnyElementType FVar16;
  undefined1 *puVar17;
  uint *puVar18;
  uint uVar19;
  undefined1 local_res8 [8];
  void *local_res10;
  undefined1 local_res18 [8];
  int local_res20;
  ForAnyElementType local_f8;
  undefined8 local_f0;
  int local_e8;
  void *local_e0;
  void *local_d8;
  TMultiMap<UObject_*,Chaos::IEventHandler_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,Chaos::IEventHandler_*,1>_>
  *local_d0;
  int iStack_c8;
  uint uStack_c4;
  undefined1 *local_c0;
  undefined4 uStack_b8;
  int iStack_b4;
  int local_b0;
  undefined4 uStack_ac;
  int iStack_a8;
  undefined4 uStack_a4;
  TMultiMap<UObject_*,Chaos::IEventHandler_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,Chaos::IEventHandler_*,1>_>
  *local_a0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_98;
  undefined8 uStack_78;
  undefined4 local_54;
  
  local_res10 = param_1;
  bVar8 = IsInGameThread();
  if ((!bVar8) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\EventManager.h"
                         ,0xe6,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if (this->bDispatchInProgress == false) {
    if ((&this->HandlerLock == (FPlatformRWLock *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Mutex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                           ,0x43,L""), bVar8)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    AcquireSRWLockExclusive((PSRWLOCK)&this->HandlerLock);
    this_00 = &this->ProxyOwnerToHandlerMap;
    local_c0 = &(this->ProxyOwnerToHandlerMap).field_0x10;
    local_f8.Data = (FScriptContainerElement *)0x0;
    local_f0 = 0;
    iStack_c8 = 0;
    iVar9 = *(int *)&(this->ProxyOwnerToHandlerMap).field_0x28;
    uStack_c4 = 1;
    local_b0 = 0;
    iStack_b4 = iStack_c8;
    if (iVar9 != 0) {
      puVar18 = *(uint **)&(this->ProxyOwnerToHandlerMap).field_0x20;
      if (puVar18 == (uint *)0x0) {
        puVar18 = (uint *)local_c0;
      }
      uVar13 = *puVar18;
      local_b0 = 0;
      iStack_c8 = 0;
      while (uVar13 == 0) {
        lVar12 = (longlong)iStack_c8;
        local_b0 = local_b0 + 0x20;
        iStack_c8 = iStack_c8 + 1;
        iStack_b4 = iVar9;
        if ((int)(iVar9 + -1 + (iVar9 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_c8) goto LAB_143f7802f;
        uVar13 = puVar18[lVar12 + 1];
      }
      uStack_c4 = -uVar13 & uVar13;
      uVar1 = (ulonglong)uStack_c4 * 2 + 1;
      lVar12 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      local_res20 = (int)lVar12;
      iStack_b4 = local_b0 + -1 + local_res20;
      if (iVar9 < iStack_b4) {
        iStack_b4 = iVar9;
      }
    }
LAB_143f7802f:
    uVar13 = *(uint *)&(this->ProxyOwnerToHandlerMap).field_0x28;
    uStack_ac = local_54;
    iStack_a8 = *(int *)&(this->ProxyOwnerToHandlerMap).field_0x8 -
                *(int *)&(this->ProxyOwnerToHandlerMap).field_0x34;
    uVar19 = uVar13 & 0xffffffe0;
    uStack_b8 = 0xffffffff;
    TStack_98.CurrentBitIndex = iStack_b4;
    TStack_98.UnvisitedBitMask = 0xffffffff;
    TStack_98._padding_ = CONCAT44(uStack_c4,iStack_c8);
    iVar15 = (int)uVar13 >> 5;
    TStack_98._28_4_ = local_54;
    TStack_98.BaseBitIndex = local_b0;
    uStack_78 = CONCAT44(uStack_a4,iStack_a8);
    local_d0 = this_00;
    local_a0 = this_00;
    TStack_98.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_c0;
    if ((((int)uVar13 < 0) || (iVar9 < (int)uVar13)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar8)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    uVar2 = *(uint *)&(this->ProxyOwnerToHandlerMap).field_0x28;
    if (uVar13 != uVar2) {
      puVar17 = *(undefined1 **)&(this->ProxyOwnerToHandlerMap).field_0x20;
      if (puVar17 == (undefined1 *)0x0) {
        puVar17 = &(this->ProxyOwnerToHandlerMap).field_0x10;
      }
      uVar13 = -1 << ((byte)uVar13 & 0x1f) & *(uint *)(puVar17 + (longlong)iVar15 * 4);
      while (uVar13 == 0) {
        lVar12 = (longlong)iVar15;
        uVar19 = uVar19 + 0x20;
        iVar15 = iVar15 + 1;
        uVar13 = uVar2;
        if ((int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar15)
        goto LAB_143f78140;
        uVar13 = *(uint *)(puVar17 + lVar12 * 4 + 4);
      }
      uVar1 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
      lVar12 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      local_e8 = (int)lVar12;
      uVar13 = local_e8 + -1 + uVar19;
      if ((int)uVar2 < (int)uVar13) {
        uVar13 = uVar2;
      }
    }
LAB_143f78140:
    while( true ) {
      pTVar7 = local_a0;
      if (*(int *)&local_a0->field_0x8 - *(int *)&local_a0->field_0x34 != (int)uStack_78) {
        local_res8[0] = 0;
        `TSparseArray<TSparseSetElement<TTuple<UObject_*,Chaos::IEventHandler_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if (((TStack_98.CurrentBitIndex == uVar13) &&
          (TStack_98.Array ==
           (TBitArray<FDefaultBitArrayAllocator> *)&(this->ProxyOwnerToHandlerMap).field_0x10)) &&
         (pTVar7 == this_00)) break;
      lVar12 = *(longlong *)pTVar7;
      pFVar14 = (FScriptContainerElement *)(lVar12 + (longlong)TStack_98.CurrentBitIndex * 0x18);
      plVar3 = *(longlong **)(lVar12 + 8 + (longlong)TStack_98.CurrentBitIndex * 0x18);
      if ((plVar3 != (longlong *)0x0) &&
         (pvVar10 = (void *)(**(code **)(*plVar3 + 0x18))(), pvVar10 == local_res10)) {
        if ((local_f8.Data <= pFVar14) &&
           ((pFVar14 < local_f8.Data + (longlong)local_f0._4_4_ * 0x10 &&
            (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar8)))) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar9 = (int)local_f0;
        if ((int)local_f0 == local_f0._4_4_) {
          iVar9 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x810,&local_f8,(int *)((longlong)&local_f0 + 4));
        }
        local_f0 = CONCAT44(local_f0._4_4_,iVar9 + 1);
        uVar6 = *(undefined8 *)(pFVar14 + 8);
        *(undefined8 *)(local_f8.Data + (longlong)iVar9 * 0x10) = *(undefined8 *)pFVar14;
        *(undefined8 *)(local_f8.Data + (longlong)iVar9 * 0x10 + 8) = uVar6;
      }
      TStack_98.UnvisitedBitMask = TStack_98.UnvisitedBitMask & ~TStack_98._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_98);
    }
    iVar9 = (int)local_f0;
    SRWLock = &this->HandlerLock;
    pFVar14 = local_f8.Data + (longlong)(int)local_f0 * 0x10;
    FVar16.Data = local_f8.Data;
    while( true ) {
      if ((int)local_f0 != iVar9) {
        `TCheckedPointerIterator<TTuple<UObject_*,Chaos::IEventHandler_*>,int,0>::operator!='::__l2
        ::<lambda_1>::operator()(local_res18);
      }
      if (FVar16.Data == pFVar14) break;
      TMultiMap<UObject_*,Chaos::IEventHandler_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,Chaos::IEventHandler_*,1>_>
      ::Remove(this_00,*(UObject **)FVar16.Data,*(IEventHandler **)(FVar16.Data + 8));
      FVar16.Data = FVar16.Data + 0x10;
    }
    local_e0 = local_res10;
    if (*(int *)&(this->HandlersNotInProxyOwnerMap).field_0x8 !=
        *(int *)&(this->HandlersNotInProxyOwnerMap).field_0x34) {
      uVar13 = ((uint)((ulonglong)local_res10 >> 0x14) & 0xffff ^
               (uint)((ulonglong)local_res10 >> 4)) * -0x7a143595;
      uVar13 = (uVar13 >> 0xd ^ uVar13) * -0x3d4d51cb;
      TSet<TTuple<void_*,Chaos::IEventHandler_*>,TDefaultMapHashableKeyFuncs<void_*,Chaos::IEventHandler_*,0>,FDefaultSetAllocator>
      ::RemoveImpl<void_const_*>
                ((TSet<TTuple<void_*,Chaos::IEventHandler_*>,TDefaultMapHashableKeyFuncs<void_*,Chaos::IEventHandler_*,0>,FDefaultSetAllocator>
                  *)&this->HandlersNotInProxyOwnerMap,uVar13 >> 0x10 ^ uVar13,&local_e0);
    }
    ppIVar11 = TMapBase<void_*,Chaos::IEventHandler_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<void_*,Chaos::IEventHandler_*,0>_>
               ::Find((TMapBase<void_*,Chaos::IEventHandler_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<void_*,Chaos::IEventHandler_*,0>_>
                       *)&this->HandlerMap,local_res10);
    if (ppIVar11 != (IEventHandler **)0x0) {
      pIVar4 = *ppIVar11;
      if (pIVar4 != (IEventHandler *)0x0) {
        (**(code **)*pIVar4)(pIVar4,1);
      }
      *ppIVar11 = (IEventHandler *)0x0;
      local_d8 = local_res10;
      if (*(int *)&(this->HandlerMap).field_0x8 != *(int *)&(this->HandlerMap).field_0x34) {
        uVar13 = ((uint)((ulonglong)local_res10 >> 0x14) & 0xffff ^
                 (uint)((ulonglong)local_res10 >> 4)) * -0x7a143595;
        uVar13 = (uVar13 >> 0xd ^ uVar13) * -0x3d4d51cb;
        TSet<TTuple<void_*,Chaos::IEventHandler_*>,TDefaultMapHashableKeyFuncs<void_*,Chaos::IEventHandler_*,0>,FDefaultSetAllocator>
        ::RemoveImpl<void_const_*>
                  ((TSet<TTuple<void_*,Chaos::IEventHandler_*>,TDefaultMapHashableKeyFuncs<void_*,Chaos::IEventHandler_*,0>,FDefaultSetAllocator>
                    *)&this->HandlerMap,uVar13 >> 0x10 ^ uVar13,&local_d8);
      }
    }
    if (local_f8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f8.Data);
    }
  }
  else {
    SRWLock = &this->DeferredHandlerLock;
    if ((SRWLock == (FPlatformRWLock *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Mutex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                           ,0x43,L""), bVar8)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    AcquireSRWLockExclusive((PSRWLOCK)SRWLock);
    TArray<void_const_*,TSizedDefaultAllocator<32>_>::AddUniqueImpl<void_const_*_const_&>
              (&this->DeferredUnregisterHandlers,&local_res10);
  }
  if (SRWLock != (FPlatformRWLock *)0x0) {
    ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
  }
  return;
}

// UnregisterHandler @ 143f783e0

void __thiscall
Chaos::TEventContainer<Chaos::FCrumblingEventData>::UnregisterHandler
          (TEventContainer<Chaos::FCrumblingEventData> *this,void *param_1)

{
  TMultiMap<UObject_*,Chaos::IEventHandler_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,Chaos::IEventHandler_*,1>_>
  *this_00;
  ulonglong uVar1;
  uint uVar2;
  longlong *plVar3;
  IEventHandler *pIVar4;
  code *pcVar5;
  undefined8 uVar6;
  TMultiMap<UObject_*,Chaos::IEventHandler_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,Chaos::IEventHandler_*,1>_>
  *pTVar7;
  bool bVar8;
  int iVar9;
  void *pvVar10;
  IEventHandler **ppIVar11;
  longlong lVar12;
  FPlatformRWLock *SRWLock;
  uint uVar13;
  FScriptContainerElement *pFVar14;
  int iVar15;
  ForAnyElementType FVar16;
  undefined1 *puVar17;
  uint *puVar18;
  uint uVar19;
  undefined1 local_res8 [8];
  void *local_res10;
  undefined1 local_res18 [8];
  int local_res20;
  ForAnyElementType local_f8;
  undefined8 local_f0;
  int local_e8;
  void *local_e0;
  void *local_d8;
  TMultiMap<UObject_*,Chaos::IEventHandler_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,Chaos::IEventHandler_*,1>_>
  *local_d0;
  int iStack_c8;
  uint uStack_c4;
  undefined1 *local_c0;
  undefined4 uStack_b8;
  int iStack_b4;
  int local_b0;
  undefined4 uStack_ac;
  int iStack_a8;
  undefined4 uStack_a4;
  TMultiMap<UObject_*,Chaos::IEventHandler_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,Chaos::IEventHandler_*,1>_>
  *local_a0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_98;
  undefined8 uStack_78;
  undefined4 local_54;
  
  local_res10 = param_1;
  bVar8 = IsInGameThread();
  if ((!bVar8) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\EventManager.h"
                         ,0xe6,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if (this->bDispatchInProgress == false) {
    if ((&this->HandlerLock == (FPlatformRWLock *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Mutex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                           ,0x43,L""), bVar8)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    AcquireSRWLockExclusive((PSRWLOCK)&this->HandlerLock);
    this_00 = &this->ProxyOwnerToHandlerMap;
    local_c0 = &(this->ProxyOwnerToHandlerMap).field_0x10;
    local_f8.Data = (FScriptContainerElement *)0x0;
    local_f0 = 0;
    iStack_c8 = 0;
    iVar9 = *(int *)&(this->ProxyOwnerToHandlerMap).field_0x28;
    uStack_c4 = 1;
    local_b0 = 0;
    iStack_b4 = iStack_c8;
    if (iVar9 != 0) {
      puVar18 = *(uint **)&(this->ProxyOwnerToHandlerMap).field_0x20;
      if (puVar18 == (uint *)0x0) {
        puVar18 = (uint *)local_c0;
      }
      uVar13 = *puVar18;
      local_b0 = 0;
      iStack_c8 = 0;
      while (uVar13 == 0) {
        lVar12 = (longlong)iStack_c8;
        local_b0 = local_b0 + 0x20;
        iStack_c8 = iStack_c8 + 1;
        iStack_b4 = iVar9;
        if ((int)(iVar9 + -1 + (iVar9 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_c8) goto LAB_143f785af;
        uVar13 = puVar18[lVar12 + 1];
      }
      uStack_c4 = -uVar13 & uVar13;
      uVar1 = (ulonglong)uStack_c4 * 2 + 1;
      lVar12 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      local_res20 = (int)lVar12;
      iStack_b4 = local_b0 + -1 + local_res20;
      if (iVar9 < iStack_b4) {
        iStack_b4 = iVar9;
      }
    }
LAB_143f785af:
    uVar13 = *(uint *)&(this->ProxyOwnerToHandlerMap).field_0x28;
    uStack_ac = local_54;
    iStack_a8 = *(int *)&(this->ProxyOwnerToHandlerMap).field_0x8 -
                *(int *)&(this->ProxyOwnerToHandlerMap).field_0x34;
    uVar19 = uVar13 & 0xffffffe0;
    uStack_b8 = 0xffffffff;
    TStack_98.CurrentBitIndex = iStack_b4;
    TStack_98.UnvisitedBitMask = 0xffffffff;
    TStack_98._padding_ = CONCAT44(uStack_c4,iStack_c8);
    iVar15 = (int)uVar13 >> 5;
    TStack_98._28_4_ = local_54;
    TStack_98.BaseBitIndex = local_b0;
    uStack_78 = CONCAT44(uStack_a4,iStack_a8);
    local_d0 = this_00;
    local_a0 = this_00;
    TStack_98.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_c0;
    if ((((int)uVar13 < 0) || (iVar9 < (int)uVar13)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar8)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    uVar2 = *(uint *)&(this->ProxyOwnerToHandlerMap).field_0x28;
    if (uVar13 != uVar2) {
      puVar17 = *(undefined1 **)&(this->ProxyOwnerToHandlerMap).field_0x20;
      if (puVar17 == (undefined1 *)0x0) {
        puVar17 = &(this->ProxyOwnerToHandlerMap).field_0x10;
      }
      uVar13 = -1 << ((byte)uVar13 & 0x1f) & *(uint *)(puVar17 + (longlong)iVar15 * 4);
      while (uVar13 == 0) {
        lVar12 = (longlong)iVar15;
        uVar19 = uVar19 + 0x20;
        iVar15 = iVar15 + 1;
        uVar13 = uVar2;
        if ((int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar15)
        goto LAB_143f786c0;
        uVar13 = *(uint *)(puVar17 + lVar12 * 4 + 4);
      }
      uVar1 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
      lVar12 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      local_e8 = (int)lVar12;
      uVar13 = local_e8 + -1 + uVar19;
      if ((int)uVar2 < (int)uVar13) {
        uVar13 = uVar2;
      }
    }
LAB_143f786c0:
    while( true ) {
      pTVar7 = local_a0;
      if (*(int *)&local_a0->field_0x8 - *(int *)&local_a0->field_0x34 != (int)uStack_78) {
        local_res8[0] = 0;
        `TSparseArray<TSparseSetElement<TTuple<UObject_*,Chaos::IEventHandler_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if (((TStack_98.CurrentBitIndex == uVar13) &&
          (TStack_98.Array ==
           (TBitArray<FDefaultBitArrayAllocator> *)&(this->ProxyOwnerToHandlerMap).field_0x10)) &&
         (pTVar7 == this_00)) break;
      lVar12 = *(longlong *)pTVar7;
      pFVar14 = (FScriptContainerElement *)(lVar12 + (longlong)TStack_98.CurrentBitIndex * 0x18);
      plVar3 = *(longlong **)(lVar12 + 8 + (longlong)TStack_98.CurrentBitIndex * 0x18);
      if ((plVar3 != (longlong *)0x0) &&
         (pvVar10 = (void *)(**(code **)(*plVar3 + 0x18))(), pvVar10 == local_res10)) {
        if ((local_f8.Data <= pFVar14) &&
           ((pFVar14 < local_f8.Data + (longlong)local_f0._4_4_ * 0x10 &&
            (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar8)))) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar9 = (int)local_f0;
        if ((int)local_f0 == local_f0._4_4_) {
          iVar9 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x810,&local_f8,(int *)((longlong)&local_f0 + 4));
        }
        local_f0 = CONCAT44(local_f0._4_4_,iVar9 + 1);
        uVar6 = *(undefined8 *)(pFVar14 + 8);
        *(undefined8 *)(local_f8.Data + (longlong)iVar9 * 0x10) = *(undefined8 *)pFVar14;
        *(undefined8 *)(local_f8.Data + (longlong)iVar9 * 0x10 + 8) = uVar6;
      }
      TStack_98.UnvisitedBitMask = TStack_98.UnvisitedBitMask & ~TStack_98._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_98);
    }
    iVar9 = (int)local_f0;
    SRWLock = &this->HandlerLock;
    pFVar14 = local_f8.Data + (longlong)(int)local_f0 * 0x10;
    FVar16.Data = local_f8.Data;
    while( true ) {
      if ((int)local_f0 != iVar9) {
        `TCheckedPointerIterator<TTuple<UObject_*,Chaos::IEventHandler_*>,int,0>::operator!='::__l2
        ::<lambda_1>::operator()(local_res18);
      }
      if (FVar16.Data == pFVar14) break;
      TMultiMap<UObject_*,Chaos::IEventHandler_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,Chaos::IEventHandler_*,1>_>
      ::Remove(this_00,*(UObject **)FVar16.Data,*(IEventHandler **)(FVar16.Data + 8));
      FVar16.Data = FVar16.Data + 0x10;
    }
    local_e0 = local_res10;
    if (*(int *)&(this->HandlersNotInProxyOwnerMap).field_0x8 !=
        *(int *)&(this->HandlersNotInProxyOwnerMap).field_0x34) {
      uVar13 = ((uint)((ulonglong)local_res10 >> 0x14) & 0xffff ^
               (uint)((ulonglong)local_res10 >> 4)) * -0x7a143595;
      uVar13 = (uVar13 >> 0xd ^ uVar13) * -0x3d4d51cb;
      TSet<TTuple<void_*,Chaos::IEventHandler_*>,TDefaultMapHashableKeyFuncs<void_*,Chaos::IEventHandler_*,0>,FDefaultSetAllocator>
      ::RemoveImpl<void_const_*>
                ((TSet<TTuple<void_*,Chaos::IEventHandler_*>,TDefaultMapHashableKeyFuncs<void_*,Chaos::IEventHandler_*,0>,FDefaultSetAllocator>
                  *)&this->HandlersNotInProxyOwnerMap,uVar13 >> 0x10 ^ uVar13,&local_e0);
    }
    ppIVar11 = TMapBase<void_*,Chaos::IEventHandler_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<void_*,Chaos::IEventHandler_*,0>_>
               ::Find((TMapBase<void_*,Chaos::IEventHandler_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<void_*,Chaos::IEventHandler_*,0>_>
                       *)&this->HandlerMap,local_res10);
    if (ppIVar11 != (IEventHandler **)0x0) {
      pIVar4 = *ppIVar11;
      if (pIVar4 != (IEventHandler *)0x0) {
        (**(code **)*pIVar4)(pIVar4,1);
      }
      *ppIVar11 = (IEventHandler *)0x0;
      local_d8 = local_res10;
      if (*(int *)&(this->HandlerMap).field_0x8 != *(int *)&(this->HandlerMap).field_0x34) {
        uVar13 = ((uint)((ulonglong)local_res10 >> 0x14) & 0xffff ^
                 (uint)((ulonglong)local_res10 >> 4)) * -0x7a143595;
        uVar13 = (uVar13 >> 0xd ^ uVar13) * -0x3d4d51cb;
        TSet<TTuple<void_*,Chaos::IEventHandler_*>,TDefaultMapHashableKeyFuncs<void_*,Chaos::IEventHandler_*,0>,FDefaultSetAllocator>
        ::RemoveImpl<void_const_*>
                  ((TSet<TTuple<void_*,Chaos::IEventHandler_*>,TDefaultMapHashableKeyFuncs<void_*,Chaos::IEventHandler_*,0>,FDefaultSetAllocator>
                    *)&this->HandlerMap,uVar13 >> 0x10 ^ uVar13,&local_d8);
      }
    }
    if (local_f8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f8.Data);
    }
  }
  else {
    SRWLock = &this->DeferredHandlerLock;
    if ((SRWLock == (FPlatformRWLock *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Mutex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                           ,0x43,L""), bVar8)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    AcquireSRWLockExclusive((PSRWLOCK)SRWLock);
    TArray<void_const_*,TSizedDefaultAllocator<32>_>::AddUniqueImpl<void_const_*_const_&>
              (&this->DeferredUnregisterHandlers,&local_res10);
  }
  if (SRWLock != (FPlatformRWLock *)0x0) {
    ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
  }
  return;
}

// UnregisterHandler @ 143f78960

void __thiscall
Chaos::TEventContainer<Chaos::FRemovalEventData>::UnregisterHandler
          (TEventContainer<Chaos::FRemovalEventData> *this,void *param_1)

{
  TMultiMap<UObject_*,Chaos::IEventHandler_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,Chaos::IEventHandler_*,1>_>
  *this_00;
  ulonglong uVar1;
  uint uVar2;
  longlong *plVar3;
  IEventHandler *pIVar4;
  code *pcVar5;
  undefined8 uVar6;
  TMultiMap<UObject_*,Chaos::IEventHandler_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,Chaos::IEventHandler_*,1>_>
  *pTVar7;
  bool bVar8;
  int iVar9;
  void *pvVar10;
  IEventHandler **ppIVar11;
  longlong lVar12;
  FPlatformRWLock *SRWLock;
  uint uVar13;
  FScriptContainerElement *pFVar14;
  int iVar15;
  ForAnyElementType FVar16;
  undefined1 *puVar17;
  uint *puVar18;
  uint uVar19;
  undefined1 local_res8 [8];
  void *local_res10;
  undefined1 local_res18 [8];
  int local_res20;
  ForAnyElementType local_f8;
  undefined8 local_f0;
  int local_e8;
  void *local_e0;
  void *local_d8;
  TMultiMap<UObject_*,Chaos::IEventHandler_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,Chaos::IEventHandler_*,1>_>
  *local_d0;
  int iStack_c8;
  uint uStack_c4;
  undefined1 *local_c0;
  undefined4 uStack_b8;
  int iStack_b4;
  int local_b0;
  undefined4 uStack_ac;
  int iStack_a8;
  undefined4 uStack_a4;
  TMultiMap<UObject_*,Chaos::IEventHandler_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,Chaos::IEventHandler_*,1>_>
  *local_a0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_98;
  undefined8 uStack_78;
  undefined4 local_54;
  
  local_res10 = param_1;
  bVar8 = IsInGameThread();
  if ((!bVar8) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\EventManager.h"
                         ,0xe6,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if (this->bDispatchInProgress == false) {
    if ((&this->HandlerLock == (FPlatformRWLock *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Mutex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                           ,0x43,L""), bVar8)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    AcquireSRWLockExclusive((PSRWLOCK)&this->HandlerLock);
    this_00 = &this->ProxyOwnerToHandlerMap;
    local_c0 = &(this->ProxyOwnerToHandlerMap).field_0x10;
    local_f8.Data = (FScriptContainerElement *)0x0;
    local_f0 = 0;
    iStack_c8 = 0;
    iVar9 = *(int *)&(this->ProxyOwnerToHandlerMap).field_0x28;
    uStack_c4 = 1;
    local_b0 = 0;
    iStack_b4 = iStack_c8;
    if (iVar9 != 0) {
      puVar18 = *(uint **)&(this->ProxyOwnerToHandlerMap).field_0x20;
      if (puVar18 == (uint *)0x0) {
        puVar18 = (uint *)local_c0;
      }
      uVar13 = *puVar18;
      local_b0 = 0;
      iStack_c8 = 0;
      while (uVar13 == 0) {
        lVar12 = (longlong)iStack_c8;
        local_b0 = local_b0 + 0x20;
        iStack_c8 = iStack_c8 + 1;
        iStack_b4 = iVar9;
        if ((int)(iVar9 + -1 + (iVar9 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_c8) goto LAB_143f78b2f;
        uVar13 = puVar18[lVar12 + 1];
      }
      uStack_c4 = -uVar13 & uVar13;
      uVar1 = (ulonglong)uStack_c4 * 2 + 1;
      lVar12 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      local_res20 = (int)lVar12;
      iStack_b4 = local_b0 + -1 + local_res20;
      if (iVar9 < iStack_b4) {
        iStack_b4 = iVar9;
      }
    }
LAB_143f78b2f:
    uVar13 = *(uint *)&(this->ProxyOwnerToHandlerMap).field_0x28;
    uStack_ac = local_54;
    iStack_a8 = *(int *)&(this->ProxyOwnerToHandlerMap).field_0x8 -
                *(int *)&(this->ProxyOwnerToHandlerMap).field_0x34;
    uVar19 = uVar13 & 0xffffffe0;
    uStack_b8 = 0xffffffff;
    TStack_98.CurrentBitIndex = iStack_b4;
    TStack_98.UnvisitedBitMask = 0xffffffff;
    TStack_98._padding_ = CONCAT44(uStack_c4,iStack_c8);
    iVar15 = (int)uVar13 >> 5;
    TStack_98._28_4_ = local_54;
    TStack_98.BaseBitIndex = local_b0;
    uStack_78 = CONCAT44(uStack_a4,iStack_a8);
    local_d0 = this_00;
    local_a0 = this_00;
    TStack_98.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_c0;
    if ((((int)uVar13 < 0) || (iVar9 < (int)uVar13)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar8)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    uVar2 = *(uint *)&(this->ProxyOwnerToHandlerMap).field_0x28;
    if (uVar13 != uVar2) {
      puVar17 = *(undefined1 **)&(this->ProxyOwnerToHandlerMap).field_0x20;
      if (puVar17 == (undefined1 *)0x0) {
        puVar17 = &(this->ProxyOwnerToHandlerMap).field_0x10;
      }
      uVar13 = -1 << ((byte)uVar13 & 0x1f) & *(uint *)(puVar17 + (longlong)iVar15 * 4);
      while (uVar13 == 0) {
        lVar12 = (longlong)iVar15;
        uVar19 = uVar19 + 0x20;
        iVar15 = iVar15 + 1;
        uVar13 = uVar2;
        if ((int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar15)
        goto LAB_143f78c40;
        uVar13 = *(uint *)(puVar17 + lVar12 * 4 + 4);
      }
      uVar1 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
      lVar12 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      local_e8 = (int)lVar12;
      uVar13 = local_e8 + -1 + uVar19;
      if ((int)uVar2 < (int)uVar13) {
        uVar13 = uVar2;
      }
    }
LAB_143f78c40:
    while( true ) {
      pTVar7 = local_a0;
      if (*(int *)&local_a0->field_0x8 - *(int *)&local_a0->field_0x34 != (int)uStack_78) {
        local_res8[0] = 0;
        `TSparseArray<TSparseSetElement<TTuple<UObject_*,Chaos::IEventHandler_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if (((TStack_98.CurrentBitIndex == uVar13) &&
          (TStack_98.Array ==
           (TBitArray<FDefaultBitArrayAllocator> *)&(this->ProxyOwnerToHandlerMap).field_0x10)) &&
         (pTVar7 == this_00)) break;
      lVar12 = *(longlong *)pTVar7;
      pFVar14 = (FScriptContainerElement *)(lVar12 + (longlong)TStack_98.CurrentBitIndex * 0x18);
      plVar3 = *(longlong **)(lVar12 + 8 + (longlong)TStack_98.CurrentBitIndex * 0x18);
      if ((plVar3 != (longlong *)0x0) &&
         (pvVar10 = (void *)(**(code **)(*plVar3 + 0x18))(), pvVar10 == local_res10)) {
        if ((local_f8.Data <= pFVar14) &&
           ((pFVar14 < local_f8.Data + (longlong)local_f0._4_4_ * 0x10 &&
            (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar8)))) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar9 = (int)local_f0;
        if ((int)local_f0 == local_f0._4_4_) {
          iVar9 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x810,&local_f8,(int *)((longlong)&local_f0 + 4));
        }
        local_f0 = CONCAT44(local_f0._4_4_,iVar9 + 1);
        uVar6 = *(undefined8 *)(pFVar14 + 8);
        *(undefined8 *)(local_f8.Data + (longlong)iVar9 * 0x10) = *(undefined8 *)pFVar14;
        *(undefined8 *)(local_f8.Data + (longlong)iVar9 * 0x10 + 8) = uVar6;
      }
      TStack_98.UnvisitedBitMask = TStack_98.UnvisitedBitMask & ~TStack_98._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_98);
    }
    iVar9 = (int)local_f0;
    SRWLock = &this->HandlerLock;
    pFVar14 = local_f8.Data + (longlong)(int)local_f0 * 0x10;
    FVar16.Data = local_f8.Data;
    while( true ) {
      if ((int)local_f0 != iVar9) {
        `TCheckedPointerIterator<TTuple<UObject_*,Chaos::IEventHandler_*>,int,0>::operator!='::__l2
        ::<lambda_1>::operator()(local_res18);
      }
      if (FVar16.Data == pFVar14) break;
      TMultiMap<UObject_*,Chaos::IEventHandler_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,Chaos::IEventHandler_*,1>_>
      ::Remove(this_00,*(UObject **)FVar16.Data,*(IEventHandler **)(FVar16.Data + 8));
      FVar16.Data = FVar16.Data + 0x10;
    }
    local_e0 = local_res10;
    if (*(int *)&(this->HandlersNotInProxyOwnerMap).field_0x8 !=
        *(int *)&(this->HandlersNotInProxyOwnerMap).field_0x34) {
      uVar13 = ((uint)((ulonglong)local_res10 >> 0x14) & 0xffff ^
               (uint)((ulonglong)local_res10 >> 4)) * -0x7a143595;
      uVar13 = (uVar13 >> 0xd ^ uVar13) * -0x3d4d51cb;
      TSet<TTuple<void_*,Chaos::IEventHandler_*>,TDefaultMapHashableKeyFuncs<void_*,Chaos::IEventHandler_*,0>,FDefaultSetAllocator>
      ::RemoveImpl<void_const_*>
                ((TSet<TTuple<void_*,Chaos::IEventHandler_*>,TDefaultMapHashableKeyFuncs<void_*,Chaos::IEventHandler_*,0>,FDefaultSetAllocator>
                  *)&this->HandlersNotInProxyOwnerMap,uVar13 >> 0x10 ^ uVar13,&local_e0);
    }
    ppIVar11 = TMapBase<void_*,Chaos::IEventHandler_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<void_*,Chaos::IEventHandler_*,0>_>
               ::Find((TMapBase<void_*,Chaos::IEventHandler_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<void_*,Chaos::IEventHandler_*,0>_>
                       *)&this->HandlerMap,local_res10);
    if (ppIVar11 != (IEventHandler **)0x0) {
      pIVar4 = *ppIVar11;
      if (pIVar4 != (IEventHandler *)0x0) {
        (**(code **)*pIVar4)(pIVar4,1);
      }
      *ppIVar11 = (IEventHandler *)0x0;
      local_d8 = local_res10;
      if (*(int *)&(this->HandlerMap).field_0x8 != *(int *)&(this->HandlerMap).field_0x34) {
        uVar13 = ((uint)((ulonglong)local_res10 >> 0x14) & 0xffff ^
                 (uint)((ulonglong)local_res10 >> 4)) * -0x7a143595;
        uVar13 = (uVar13 >> 0xd ^ uVar13) * -0x3d4d51cb;
        TSet<TTuple<void_*,Chaos::IEventHandler_*>,TDefaultMapHashableKeyFuncs<void_*,Chaos::IEventHandler_*,0>,FDefaultSetAllocator>
        ::RemoveImpl<void_const_*>
                  ((TSet<TTuple<void_*,Chaos::IEventHandler_*>,TDefaultMapHashableKeyFuncs<void_*,Chaos::IEventHandler_*,0>,FDefaultSetAllocator>
                    *)&this->HandlerMap,uVar13 >> 0x10 ^ uVar13,&local_d8);
      }
    }
    if (local_f8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f8.Data);
    }
  }
  else {
    SRWLock = &this->DeferredHandlerLock;
    if ((SRWLock == (FPlatformRWLock *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Mutex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                           ,0x43,L""), bVar8)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    AcquireSRWLockExclusive((PSRWLOCK)SRWLock);
    TArray<void_const_*,TSizedDefaultAllocator<32>_>::AddUniqueImpl<void_const_*_const_&>
              (&this->DeferredUnregisterHandlers,&local_res10);
  }
  if (SRWLock != (FPlatformRWLock *)0x0) {
    ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
  }
  return;
}

// UnregisterHandler @ 143f78ee0

void __thiscall
Chaos::TEventContainer<Chaos::FSleepingEventData>::UnregisterHandler
          (TEventContainer<Chaos::FSleepingEventData> *this,void *param_1)

{
  TMultiMap<UObject_*,Chaos::IEventHandler_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,Chaos::IEventHandler_*,1>_>
  *this_00;
  ulonglong uVar1;
  uint uVar2;
  longlong *plVar3;
  IEventHandler *pIVar4;
  code *pcVar5;
  undefined8 uVar6;
  TMultiMap<UObject_*,Chaos::IEventHandler_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,Chaos::IEventHandler_*,1>_>
  *pTVar7;
  bool bVar8;
  int iVar9;
  void *pvVar10;
  IEventHandler **ppIVar11;
  longlong lVar12;
  FPlatformRWLock *SRWLock;
  uint uVar13;
  FScriptContainerElement *pFVar14;
  int iVar15;
  ForAnyElementType FVar16;
  undefined1 *puVar17;
  uint *puVar18;
  uint uVar19;
  undefined1 local_res8 [8];
  void *local_res10;
  undefined1 local_res18 [8];
  int local_res20;
  ForAnyElementType local_f8;
  undefined8 local_f0;
  int local_e8;
  void *local_e0;
  void *local_d8;
  TMultiMap<UObject_*,Chaos::IEventHandler_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,Chaos::IEventHandler_*,1>_>
  *local_d0;
  int iStack_c8;
  uint uStack_c4;
  undefined1 *local_c0;
  undefined4 uStack_b8;
  int iStack_b4;
  int local_b0;
  undefined4 uStack_ac;
  int iStack_a8;
  undefined4 uStack_a4;
  TMultiMap<UObject_*,Chaos::IEventHandler_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,Chaos::IEventHandler_*,1>_>
  *local_a0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_98;
  undefined8 uStack_78;
  undefined4 local_54;
  
  local_res10 = param_1;
  bVar8 = IsInGameThread();
  if ((!bVar8) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\EventManager.h"
                         ,0xe6,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if (this->bDispatchInProgress == false) {
    if ((&this->HandlerLock == (FPlatformRWLock *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Mutex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                           ,0x43,L""), bVar8)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    AcquireSRWLockExclusive((PSRWLOCK)&this->HandlerLock);
    this_00 = &this->ProxyOwnerToHandlerMap;
    local_c0 = &(this->ProxyOwnerToHandlerMap).field_0x10;
    local_f8.Data = (FScriptContainerElement *)0x0;
    local_f0 = 0;
    iStack_c8 = 0;
    iVar9 = *(int *)&(this->ProxyOwnerToHandlerMap).field_0x28;
    uStack_c4 = 1;
    local_b0 = 0;
    iStack_b4 = iStack_c8;
    if (iVar9 != 0) {
      puVar18 = *(uint **)&(this->ProxyOwnerToHandlerMap).field_0x20;
      if (puVar18 == (uint *)0x0) {
        puVar18 = (uint *)local_c0;
      }
      uVar13 = *puVar18;
      local_b0 = 0;
      iStack_c8 = 0;
      while (uVar13 == 0) {
        lVar12 = (longlong)iStack_c8;
        local_b0 = local_b0 + 0x20;
        iStack_c8 = iStack_c8 + 1;
        iStack_b4 = iVar9;
        if ((int)(iVar9 + -1 + (iVar9 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_c8) goto LAB_143f790af;
        uVar13 = puVar18[lVar12 + 1];
      }
      uStack_c4 = -uVar13 & uVar13;
      uVar1 = (ulonglong)uStack_c4 * 2 + 1;
      lVar12 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      local_res20 = (int)lVar12;
      iStack_b4 = local_b0 + -1 + local_res20;
      if (iVar9 < iStack_b4) {
        iStack_b4 = iVar9;
      }
    }
LAB_143f790af:
    uVar13 = *(uint *)&(this->ProxyOwnerToHandlerMap).field_0x28;
    uStack_ac = local_54;
    iStack_a8 = *(int *)&(this->ProxyOwnerToHandlerMap).field_0x8 -
                *(int *)&(this->ProxyOwnerToHandlerMap).field_0x34;
    uVar19 = uVar13 & 0xffffffe0;
    uStack_b8 = 0xffffffff;
    TStack_98.CurrentBitIndex = iStack_b4;
    TStack_98.UnvisitedBitMask = 0xffffffff;
    TStack_98._padding_ = CONCAT44(uStack_c4,iStack_c8);
    iVar15 = (int)uVar13 >> 5;
    TStack_98._28_4_ = local_54;
    TStack_98.BaseBitIndex = local_b0;
    uStack_78 = CONCAT44(uStack_a4,iStack_a8);
    local_d0 = this_00;
    local_a0 = this_00;
    TStack_98.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_c0;
    if ((((int)uVar13 < 0) || (iVar9 < (int)uVar13)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar8)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    uVar2 = *(uint *)&(this->ProxyOwnerToHandlerMap).field_0x28;
    if (uVar13 != uVar2) {
      puVar17 = *(undefined1 **)&(this->ProxyOwnerToHandlerMap).field_0x20;
      if (puVar17 == (undefined1 *)0x0) {
        puVar17 = &(this->ProxyOwnerToHandlerMap).field_0x10;
      }
      uVar13 = -1 << ((byte)uVar13 & 0x1f) & *(uint *)(puVar17 + (longlong)iVar15 * 4);
      while (uVar13 == 0) {
        lVar12 = (longlong)iVar15;
        uVar19 = uVar19 + 0x20;
        iVar15 = iVar15 + 1;
        uVar13 = uVar2;
        if ((int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar15)
        goto LAB_143f791c0;
        uVar13 = *(uint *)(puVar17 + lVar12 * 4 + 4);
      }
      uVar1 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
      lVar12 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      local_e8 = (int)lVar12;
      uVar13 = local_e8 + -1 + uVar19;
      if ((int)uVar2 < (int)uVar13) {
        uVar13 = uVar2;
      }
    }
LAB_143f791c0:
    while( true ) {
      pTVar7 = local_a0;
      if (*(int *)&local_a0->field_0x8 - *(int *)&local_a0->field_0x34 != (int)uStack_78) {
        local_res8[0] = 0;
        `TSparseArray<TSparseSetElement<TTuple<UObject_*,Chaos::IEventHandler_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if (((TStack_98.CurrentBitIndex == uVar13) &&
          (TStack_98.Array ==
           (TBitArray<FDefaultBitArrayAllocator> *)&(this->ProxyOwnerToHandlerMap).field_0x10)) &&
         (pTVar7 == this_00)) break;
      lVar12 = *(longlong *)pTVar7;
      pFVar14 = (FScriptContainerElement *)(lVar12 + (longlong)TStack_98.CurrentBitIndex * 0x18);
      plVar3 = *(longlong **)(lVar12 + 8 + (longlong)TStack_98.CurrentBitIndex * 0x18);
      if ((plVar3 != (longlong *)0x0) &&
         (pvVar10 = (void *)(**(code **)(*plVar3 + 0x18))(), pvVar10 == local_res10)) {
        if ((local_f8.Data <= pFVar14) &&
           ((pFVar14 < local_f8.Data + (longlong)local_f0._4_4_ * 0x10 &&
            (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar8)))) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar9 = (int)local_f0;
        if ((int)local_f0 == local_f0._4_4_) {
          iVar9 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x810,&local_f8,(int *)((longlong)&local_f0 + 4));
        }
        local_f0 = CONCAT44(local_f0._4_4_,iVar9 + 1);
        uVar6 = *(undefined8 *)(pFVar14 + 8);
        *(undefined8 *)(local_f8.Data + (longlong)iVar9 * 0x10) = *(undefined8 *)pFVar14;
        *(undefined8 *)(local_f8.Data + (longlong)iVar9 * 0x10 + 8) = uVar6;
      }
      TStack_98.UnvisitedBitMask = TStack_98.UnvisitedBitMask & ~TStack_98._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_98);
    }
    iVar9 = (int)local_f0;
    SRWLock = &this->HandlerLock;
    pFVar14 = local_f8.Data + (longlong)(int)local_f0 * 0x10;
    FVar16.Data = local_f8.Data;
    while( true ) {
      if ((int)local_f0 != iVar9) {
        `TCheckedPointerIterator<TTuple<UObject_*,Chaos::IEventHandler_*>,int,0>::operator!='::__l2
        ::<lambda_1>::operator()(local_res18);
      }
      if (FVar16.Data == pFVar14) break;
      TMultiMap<UObject_*,Chaos::IEventHandler_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,Chaos::IEventHandler_*,1>_>
      ::Remove(this_00,*(UObject **)FVar16.Data,*(IEventHandler **)(FVar16.Data + 8));
      FVar16.Data = FVar16.Data + 0x10;
    }
    local_e0 = local_res10;
    if (*(int *)&(this->HandlersNotInProxyOwnerMap).field_0x8 !=
        *(int *)&(this->HandlersNotInProxyOwnerMap).field_0x34) {
      uVar13 = ((uint)((ulonglong)local_res10 >> 0x14) & 0xffff ^
               (uint)((ulonglong)local_res10 >> 4)) * -0x7a143595;
      uVar13 = (uVar13 >> 0xd ^ uVar13) * -0x3d4d51cb;
      TSet<TTuple<void_*,Chaos::IEventHandler_*>,TDefaultMapHashableKeyFuncs<void_*,Chaos::IEventHandler_*,0>,FDefaultSetAllocator>
      ::RemoveImpl<void_const_*>
                ((TSet<TTuple<void_*,Chaos::IEventHandler_*>,TDefaultMapHashableKeyFuncs<void_*,Chaos::IEventHandler_*,0>,FDefaultSetAllocator>
                  *)&this->HandlersNotInProxyOwnerMap,uVar13 >> 0x10 ^ uVar13,&local_e0);
    }
    ppIVar11 = TMapBase<void_*,Chaos::IEventHandler_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<void_*,Chaos::IEventHandler_*,0>_>
               ::Find((TMapBase<void_*,Chaos::IEventHandler_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<void_*,Chaos::IEventHandler_*,0>_>
                       *)&this->HandlerMap,local_res10);
    if (ppIVar11 != (IEventHandler **)0x0) {
      pIVar4 = *ppIVar11;
      if (pIVar4 != (IEventHandler *)0x0) {
        (**(code **)*pIVar4)(pIVar4,1);
      }
      *ppIVar11 = (IEventHandler *)0x0;
      local_d8 = local_res10;
      if (*(int *)&(this->HandlerMap).field_0x8 != *(int *)&(this->HandlerMap).field_0x34) {
        uVar13 = ((uint)((ulonglong)local_res10 >> 0x14) & 0xffff ^
                 (uint)((ulonglong)local_res10 >> 4)) * -0x7a143595;
        uVar13 = (uVar13 >> 0xd ^ uVar13) * -0x3d4d51cb;
        TSet<TTuple<void_*,Chaos::IEventHandler_*>,TDefaultMapHashableKeyFuncs<void_*,Chaos::IEventHandler_*,0>,FDefaultSetAllocator>
        ::RemoveImpl<void_const_*>
                  ((TSet<TTuple<void_*,Chaos::IEventHandler_*>,TDefaultMapHashableKeyFuncs<void_*,Chaos::IEventHandler_*,0>,FDefaultSetAllocator>
                    *)&this->HandlerMap,uVar13 >> 0x10 ^ uVar13,&local_d8);
      }
    }
    if (local_f8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f8.Data);
    }
  }
  else {
    SRWLock = &this->DeferredHandlerLock;
    if ((SRWLock == (FPlatformRWLock *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Mutex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                           ,0x43,L""), bVar8)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    AcquireSRWLockExclusive((PSRWLOCK)SRWLock);
    TArray<void_const_*,TSizedDefaultAllocator<32>_>::AddUniqueImpl<void_const_*_const_&>
              (&this->DeferredUnregisterHandlers,&local_res10);
  }
  if (SRWLock != (FPlatformRWLock *)0x0) {
    ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
  }
  return;
}

// UnregisterHandler @ 143f79460

void __thiscall
Chaos::TEventContainer<Chaos::FTrailingEventData>::UnregisterHandler
          (TEventContainer<Chaos::FTrailingEventData> *this,void *param_1)

{
  TMultiMap<UObject_*,Chaos::IEventHandler_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,Chaos::IEventHandler_*,1>_>
  *this_00;
  ulonglong uVar1;
  uint uVar2;
  longlong *plVar3;
  IEventHandler *pIVar4;
  code *pcVar5;
  undefined8 uVar6;
  TMultiMap<UObject_*,Chaos::IEventHandler_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,Chaos::IEventHandler_*,1>_>
  *pTVar7;
  bool bVar8;
  int iVar9;
  void *pvVar10;
  IEventHandler **ppIVar11;
  longlong lVar12;
  FPlatformRWLock *SRWLock;
  uint uVar13;
  FScriptContainerElement *pFVar14;
  int iVar15;
  ForAnyElementType FVar16;
  undefined1 *puVar17;
  uint *puVar18;
  uint uVar19;
  undefined1 local_res8 [8];
  void *local_res10;
  undefined1 local_res18 [8];
  int local_res20;
  ForAnyElementType local_f8;
  undefined8 local_f0;
  int local_e8;
  void *local_e0;
  void *local_d8;
  TMultiMap<UObject_*,Chaos::IEventHandler_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,Chaos::IEventHandler_*,1>_>
  *local_d0;
  int iStack_c8;
  uint uStack_c4;
  undefined1 *local_c0;
  undefined4 uStack_b8;
  int iStack_b4;
  int local_b0;
  undefined4 uStack_ac;
  int iStack_a8;
  undefined4 uStack_a4;
  TMultiMap<UObject_*,Chaos::IEventHandler_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,Chaos::IEventHandler_*,1>_>
  *local_a0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_98;
  undefined8 uStack_78;
  undefined4 local_54;
  
  local_res10 = param_1;
  bVar8 = IsInGameThread();
  if ((!bVar8) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\EventManager.h"
                         ,0xe6,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if (this->bDispatchInProgress == false) {
    if ((&this->HandlerLock == (FPlatformRWLock *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Mutex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                           ,0x43,L""), bVar8)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    AcquireSRWLockExclusive((PSRWLOCK)&this->HandlerLock);
    this_00 = &this->ProxyOwnerToHandlerMap;
    local_c0 = &(this->ProxyOwnerToHandlerMap).field_0x10;
    local_f8.Data = (FScriptContainerElement *)0x0;
    local_f0 = 0;
    iStack_c8 = 0;
    iVar9 = *(int *)&(this->ProxyOwnerToHandlerMap).field_0x28;
    uStack_c4 = 1;
    local_b0 = 0;
    iStack_b4 = iStack_c8;
    if (iVar9 != 0) {
      puVar18 = *(uint **)&(this->ProxyOwnerToHandlerMap).field_0x20;
      if (puVar18 == (uint *)0x0) {
        puVar18 = (uint *)local_c0;
      }
      uVar13 = *puVar18;
      local_b0 = 0;
      iStack_c8 = 0;
      while (uVar13 == 0) {
        lVar12 = (longlong)iStack_c8;
        local_b0 = local_b0 + 0x20;
        iStack_c8 = iStack_c8 + 1;
        iStack_b4 = iVar9;
        if ((int)(iVar9 + -1 + (iVar9 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_c8) goto LAB_143f7962f;
        uVar13 = puVar18[lVar12 + 1];
      }
      uStack_c4 = -uVar13 & uVar13;
      uVar1 = (ulonglong)uStack_c4 * 2 + 1;
      lVar12 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      local_res20 = (int)lVar12;
      iStack_b4 = local_b0 + -1 + local_res20;
      if (iVar9 < iStack_b4) {
        iStack_b4 = iVar9;
      }
    }
LAB_143f7962f:
    uVar13 = *(uint *)&(this->ProxyOwnerToHandlerMap).field_0x28;
    uStack_ac = local_54;
    iStack_a8 = *(int *)&(this->ProxyOwnerToHandlerMap).field_0x8 -
                *(int *)&(this->ProxyOwnerToHandlerMap).field_0x34;
    uVar19 = uVar13 & 0xffffffe0;
    uStack_b8 = 0xffffffff;
    TStack_98.CurrentBitIndex = iStack_b4;
    TStack_98.UnvisitedBitMask = 0xffffffff;
    TStack_98._padding_ = CONCAT44(uStack_c4,iStack_c8);
    iVar15 = (int)uVar13 >> 5;
    TStack_98._28_4_ = local_54;
    TStack_98.BaseBitIndex = local_b0;
    uStack_78 = CONCAT44(uStack_a4,iStack_a8);
    local_d0 = this_00;
    local_a0 = this_00;
    TStack_98.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_c0;
    if ((((int)uVar13 < 0) || (iVar9 < (int)uVar13)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar8)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    uVar2 = *(uint *)&(this->ProxyOwnerToHandlerMap).field_0x28;
    if (uVar13 != uVar2) {
      puVar17 = *(undefined1 **)&(this->ProxyOwnerToHandlerMap).field_0x20;
      if (puVar17 == (undefined1 *)0x0) {
        puVar17 = &(this->ProxyOwnerToHandlerMap).field_0x10;
      }
      uVar13 = -1 << ((byte)uVar13 & 0x1f) & *(uint *)(puVar17 + (longlong)iVar15 * 4);
      while (uVar13 == 0) {
        lVar12 = (longlong)iVar15;
        uVar19 = uVar19 + 0x20;
        iVar15 = iVar15 + 1;
        uVar13 = uVar2;
        if ((int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar15)
        goto LAB_143f79740;
        uVar13 = *(uint *)(puVar17 + lVar12 * 4 + 4);
      }
      uVar1 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
      lVar12 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      local_e8 = (int)lVar12;
      uVar13 = local_e8 + -1 + uVar19;
      if ((int)uVar2 < (int)uVar13) {
        uVar13 = uVar2;
      }
    }
LAB_143f79740:
    while( true ) {
      pTVar7 = local_a0;
      if (*(int *)&local_a0->field_0x8 - *(int *)&local_a0->field_0x34 != (int)uStack_78) {
        local_res8[0] = 0;
        `TSparseArray<TSparseSetElement<TTuple<UObject_*,Chaos::IEventHandler_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if (((TStack_98.CurrentBitIndex == uVar13) &&
          (TStack_98.Array ==
           (TBitArray<FDefaultBitArrayAllocator> *)&(this->ProxyOwnerToHandlerMap).field_0x10)) &&
         (pTVar7 == this_00)) break;
      lVar12 = *(longlong *)pTVar7;
      pFVar14 = (FScriptContainerElement *)(lVar12 + (longlong)TStack_98.CurrentBitIndex * 0x18);
      plVar3 = *(longlong **)(lVar12 + 8 + (longlong)TStack_98.CurrentBitIndex * 0x18);
      if ((plVar3 != (longlong *)0x0) &&
         (pvVar10 = (void *)(**(code **)(*plVar3 + 0x18))(), pvVar10 == local_res10)) {
        if ((local_f8.Data <= pFVar14) &&
           ((pFVar14 < local_f8.Data + (longlong)local_f0._4_4_ * 0x10 &&
            (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar8)))) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar9 = (int)local_f0;
        if ((int)local_f0 == local_f0._4_4_) {
          iVar9 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x810,&local_f8,(int *)((longlong)&local_f0 + 4));
        }
        local_f0 = CONCAT44(local_f0._4_4_,iVar9 + 1);
        uVar6 = *(undefined8 *)(pFVar14 + 8);
        *(undefined8 *)(local_f8.Data + (longlong)iVar9 * 0x10) = *(undefined8 *)pFVar14;
        *(undefined8 *)(local_f8.Data + (longlong)iVar9 * 0x10 + 8) = uVar6;
      }
      TStack_98.UnvisitedBitMask = TStack_98.UnvisitedBitMask & ~TStack_98._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_98);
    }
    iVar9 = (int)local_f0;
    SRWLock = &this->HandlerLock;
    pFVar14 = local_f8.Data + (longlong)(int)local_f0 * 0x10;
    FVar16.Data = local_f8.Data;
    while( true ) {
      if ((int)local_f0 != iVar9) {
        `TCheckedPointerIterator<TTuple<UObject_*,Chaos::IEventHandler_*>,int,0>::operator!='::__l2
        ::<lambda_1>::operator()(local_res18);
      }
      if (FVar16.Data == pFVar14) break;
      TMultiMap<UObject_*,Chaos::IEventHandler_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,Chaos::IEventHandler_*,1>_>
      ::Remove(this_00,*(UObject **)FVar16.Data,*(IEventHandler **)(FVar16.Data + 8));
      FVar16.Data = FVar16.Data + 0x10;
    }
    local_e0 = local_res10;
    if (*(int *)&(this->HandlersNotInProxyOwnerMap).field_0x8 !=
        *(int *)&(this->HandlersNotInProxyOwnerMap).field_0x34) {
      uVar13 = ((uint)((ulonglong)local_res10 >> 0x14) & 0xffff ^
               (uint)((ulonglong)local_res10 >> 4)) * -0x7a143595;
      uVar13 = (uVar13 >> 0xd ^ uVar13) * -0x3d4d51cb;
      TSet<TTuple<void_*,Chaos::IEventHandler_*>,TDefaultMapHashableKeyFuncs<void_*,Chaos::IEventHandler_*,0>,FDefaultSetAllocator>
      ::RemoveImpl<void_const_*>
                ((TSet<TTuple<void_*,Chaos::IEventHandler_*>,TDefaultMapHashableKeyFuncs<void_*,Chaos::IEventHandler_*,0>,FDefaultSetAllocator>
                  *)&this->HandlersNotInProxyOwnerMap,uVar13 >> 0x10 ^ uVar13,&local_e0);
    }
    ppIVar11 = TMapBase<void_*,Chaos::IEventHandler_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<void_*,Chaos::IEventHandler_*,0>_>
               ::Find((TMapBase<void_*,Chaos::IEventHandler_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<void_*,Chaos::IEventHandler_*,0>_>
                       *)&this->HandlerMap,local_res10);
    if (ppIVar11 != (IEventHandler **)0x0) {
      pIVar4 = *ppIVar11;
      if (pIVar4 != (IEventHandler *)0x0) {
        (**(code **)*pIVar4)(pIVar4,1);
      }
      *ppIVar11 = (IEventHandler *)0x0;
      local_d8 = local_res10;
      if (*(int *)&(this->HandlerMap).field_0x8 != *(int *)&(this->HandlerMap).field_0x34) {
        uVar13 = ((uint)((ulonglong)local_res10 >> 0x14) & 0xffff ^
                 (uint)((ulonglong)local_res10 >> 4)) * -0x7a143595;
        uVar13 = (uVar13 >> 0xd ^ uVar13) * -0x3d4d51cb;
        TSet<TTuple<void_*,Chaos::IEventHandler_*>,TDefaultMapHashableKeyFuncs<void_*,Chaos::IEventHandler_*,0>,FDefaultSetAllocator>
        ::RemoveImpl<void_const_*>
                  ((TSet<TTuple<void_*,Chaos::IEventHandler_*>,TDefaultMapHashableKeyFuncs<void_*,Chaos::IEventHandler_*,0>,FDefaultSetAllocator>
                    *)&this->HandlerMap,uVar13 >> 0x10 ^ uVar13,&local_d8);
      }
    }
    if (local_f8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f8.Data);
    }
  }
  else {
    SRWLock = &this->DeferredHandlerLock;
    if ((SRWLock == (FPlatformRWLock *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Mutex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                           ,0x43,L""), bVar8)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    AcquireSRWLockExclusive((PSRWLOCK)SRWLock);
    TArray<void_const_*,TSizedDefaultAllocator<32>_>::AddUniqueImpl<void_const_*_const_&>
              (&this->DeferredUnregisterHandlers,&local_res10);
  }
  if (SRWLock != (FPlatformRWLock *)0x0) {
    ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
  }
  return;
}

