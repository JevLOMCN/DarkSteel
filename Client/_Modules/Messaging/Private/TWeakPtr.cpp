// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Messaging
// Functions: 3

// UEOpEquals<IBusListener> @ 142d3d240

bool __thiscall
TWeakPtr<IBusListener,1>::UEOpEquals<IBusListener>
          (TWeakPtr<IBusListener,1> *this,TWeakPtr<IBusListener,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  TReferenceControllerBase<1> *pTVar5;
  TReferenceControllerBase<1> *pTVar6;
  TReferenceControllerBase<1> *pTVar7;
  bool bVar8;
  
  pTVar1 = (this->WeakReferenceCount).ReferenceController;
  pTVar7 = (TReferenceControllerBase<1> *)0x0;
  pTVar5 = pTVar1;
  pTVar6 = pTVar7;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar1->SharedReferenceCount;
    do {
      pTVar5 = pTVar7;
      pTVar6 = (TReferenceControllerBase<1> *)0x0;
      if (aVar2 == (atomic<int>)0x0) goto LAB_142d3d281;
      LOCK();
      aVar3 = pTVar1->SharedReferenceCount;
      bVar8 = aVar2 == aVar3;
      if (bVar8) {
        pTVar1->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar8);
    pTVar5 = pTVar1;
    pTVar6 = (TReferenceControllerBase<1> *)this->Object;
  }
LAB_142d3d281:
  pTVar1 = (param_1->WeakReferenceCount).ReferenceController;
  pTVar4 = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar1->SharedReferenceCount;
    do {
      pTVar4 = pTVar7;
      if (aVar2 == (atomic<int>)0x0) goto LAB_142d3d2a2;
      LOCK();
      aVar3 = pTVar1->SharedReferenceCount;
      bVar8 = aVar2 == aVar3;
      if (bVar8) {
        pTVar1->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar8);
    pTVar7 = (TReferenceControllerBase<1> *)param_1->Object;
    pTVar4 = pTVar1;
  }
LAB_142d3d2a2:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  return pTVar6 == pTVar7;
}

// UEOpEquals<IMessageBus> @ 142d3d2e0

bool __thiscall
TWeakPtr<IMessageBus,1>::UEOpEquals<IMessageBus>
          (TWeakPtr<IMessageBus,1> *this,TWeakPtr<IMessageBus,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  TReferenceControllerBase<1> *pTVar5;
  TReferenceControllerBase<1> *pTVar6;
  TReferenceControllerBase<1> *pTVar7;
  bool bVar8;
  
  pTVar1 = (this->WeakReferenceCount).ReferenceController;
  pTVar7 = (TReferenceControllerBase<1> *)0x0;
  pTVar5 = pTVar1;
  pTVar6 = pTVar7;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar1->SharedReferenceCount;
    do {
      pTVar5 = pTVar7;
      pTVar6 = (TReferenceControllerBase<1> *)0x0;
      if (aVar2 == (atomic<int>)0x0) goto LAB_142d3d321;
      LOCK();
      aVar3 = pTVar1->SharedReferenceCount;
      bVar8 = aVar2 == aVar3;
      if (bVar8) {
        pTVar1->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar8);
    pTVar5 = pTVar1;
    pTVar6 = (TReferenceControllerBase<1> *)this->Object;
  }
LAB_142d3d321:
  pTVar1 = (param_1->WeakReferenceCount).ReferenceController;
  pTVar4 = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar1->SharedReferenceCount;
    do {
      pTVar4 = pTVar7;
      if (aVar2 == (atomic<int>)0x0) goto LAB_142d3d342;
      LOCK();
      aVar3 = pTVar1->SharedReferenceCount;
      bVar8 = aVar2 == aVar3;
      if (bVar8) {
        pTVar1->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar8);
    pTVar7 = (TReferenceControllerBase<1> *)param_1->Object;
    pTVar4 = pTVar1;
  }
LAB_142d3d342:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  return pTVar6 == pTVar7;
}

// UEOpEquals<IMessageReceiver> @ 142d3d380

bool __thiscall
TWeakPtr<IMessageReceiver,1>::UEOpEquals<IMessageReceiver>
          (TWeakPtr<IMessageReceiver,1> *this,TWeakPtr<IMessageReceiver,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  TReferenceControllerBase<1> *pTVar5;
  TReferenceControllerBase<1> *pTVar6;
  TReferenceControllerBase<1> *pTVar7;
  bool bVar8;
  
  pTVar1 = (this->WeakReferenceCount).ReferenceController;
  pTVar7 = (TReferenceControllerBase<1> *)0x0;
  pTVar5 = pTVar1;
  pTVar6 = pTVar7;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar1->SharedReferenceCount;
    do {
      pTVar5 = pTVar7;
      pTVar6 = (TReferenceControllerBase<1> *)0x0;
      if (aVar2 == (atomic<int>)0x0) goto LAB_142d3d3c1;
      LOCK();
      aVar3 = pTVar1->SharedReferenceCount;
      bVar8 = aVar2 == aVar3;
      if (bVar8) {
        pTVar1->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar8);
    pTVar5 = pTVar1;
    pTVar6 = (TReferenceControllerBase<1> *)this->Object;
  }
LAB_142d3d3c1:
  pTVar1 = (param_1->WeakReferenceCount).ReferenceController;
  pTVar4 = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar1->SharedReferenceCount;
    do {
      pTVar4 = pTVar7;
      if (aVar2 == (atomic<int>)0x0) goto LAB_142d3d3e2;
      LOCK();
      aVar3 = pTVar1->SharedReferenceCount;
      bVar8 = aVar2 == aVar3;
      if (bVar8) {
        pTVar1->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar8);
    pTVar7 = (TReferenceControllerBase<1> *)param_1->Object;
    pTVar4 = pTVar1;
  }
LAB_142d3d3e2:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  return pTVar6 == pTVar7;
}

