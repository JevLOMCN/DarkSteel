// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChaosSolverEngine
// Functions: 2

// Subscribe @ 146320420

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FMessageEndpoint::Subscribe
          (FMessageEndpoint *this,FTopLevelAssetPath *param_1,TRange<EMessageScope> *param_2)

{
  IMessageBus *pIVar1;
  code *pcVar2;
  atomic<int> aVar3;
  atomic<int> aVar4;
  TSharedRef<FMessageEndpoint,1> *pTVar5;
  TReferenceControllerBase<1> *pTVar6;
  bool bVar7;
  FMessageEndpoint *local_38;
  TReferenceControllerBase<1> *local_30;
  undefined1 local_28 [8];
  TReferenceControllerBase<1> *local_20;
  TSharedRef<FMessageEndpoint,1> local_18;
  
  if (this->Enabled == false) {
LAB_146320462:
    pTVar6 = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar6 = (this->BusPtr).WeakReferenceCount.ReferenceController;
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      aVar3 = pTVar6->SharedReferenceCount;
      do {
        if (aVar3 == (atomic<int>)0x0) goto LAB_146320462;
        LOCK();
        aVar4 = pTVar6->SharedReferenceCount;
        bVar7 = aVar3 == aVar4;
        if (bVar7) {
          pTVar6->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
          aVar4 = aVar3;
        }
        UNLOCK();
        aVar3 = aVar4;
      } while (!bVar7);
      pIVar1 = (this->BusPtr).Object;
      if (pIVar1 != (IMessageBus *)0x0) {
        pcVar2 = *(code **)((longlong)*pIVar1 + 0x40);
        pTVar5 = TSharedFromThis<FMessageEndpoint,1>::AsShared
                           ((TSharedFromThis<FMessageEndpoint,1> *)&this->_padding_,&local_18);
        local_38 = pTVar5->Object;
        local_30 = (pTVar5->SharedReferenceCount).ReferenceController;
        if (local_30 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          local_30->SharedReferenceCount = (atomic<int>)((int)local_30->SharedReferenceCount + 1);
          UNLOCK();
        }
        (*pcVar2)(pIVar1,local_28,&local_38,param_1,param_2);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_20);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_30);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_18.SharedReferenceCount.ReferenceController);
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  return;
}

// Unsubscribe @ 1463219f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FMessageEndpoint::Unsubscribe(FMessageEndpoint *this,FTopLevelAssetPath *param_1)

{
  IMessageBus *pIVar1;
  code *pcVar2;
  atomic<int> aVar3;
  atomic<int> aVar4;
  TSharedRef<FMessageEndpoint,1> *pTVar5;
  TReferenceControllerBase<1> *pTVar6;
  bool bVar7;
  FMessageEndpoint *local_28;
  TReferenceControllerBase<1> *local_20;
  TSharedRef<FMessageEndpoint,1> local_18;
  
  if (this->Enabled == false) {
LAB_146321a2e:
    pTVar6 = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar6 = (this->BusPtr).WeakReferenceCount.ReferenceController;
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      aVar3 = pTVar6->SharedReferenceCount;
      do {
        if (aVar3 == (atomic<int>)0x0) goto LAB_146321a2e;
        LOCK();
        aVar4 = pTVar6->SharedReferenceCount;
        bVar7 = aVar3 == aVar4;
        if (bVar7) {
          pTVar6->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
          aVar4 = aVar3;
        }
        UNLOCK();
        aVar3 = aVar4;
      } while (!bVar7);
      pIVar1 = (this->BusPtr).Object;
      if (pIVar1 != (IMessageBus *)0x0) {
        pcVar2 = *(code **)((longlong)*pIVar1 + 0x68);
        pTVar5 = TSharedFromThis<FMessageEndpoint,1>::AsShared
                           ((TSharedFromThis<FMessageEndpoint,1> *)&this->_padding_,&local_18);
        local_28 = pTVar5->Object;
        local_20 = (pTVar5->SharedReferenceCount).ReferenceController;
        if (local_20 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          local_20->SharedReferenceCount = (atomic<int>)((int)local_20->SharedReferenceCount + 1);
          UNLOCK();
        }
        (*pcVar2)(pIVar1,&local_28,param_1);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_20);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_18.SharedReferenceCount.ReferenceController);
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  return;
}

