// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AutomationController
// Functions: 2

// Add @ 148c55710

int __thiscall
TFilterCollection<TSharedPtr<IAutomationReport,1>_const_&>::Add
          (TFilterCollection<TSharedPtr<IAutomationReport,1>_const_&> *this,
          TSharedPtr<IFilter<TSharedPtr<IAutomationReport,1>_const_&>,1> *param_1)

{
  int *piVar1;
  TSharedPtr<IFilter<TSharedPtr<IAutomationReport,1>_const_&>,1> *pTVar2;
  TReferenceControllerBase<1> *pTVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  TMulticastDelegateBase<FDefaultDelegateUserPolicy> *this_00;
  FScriptContainerElement *pFVar8;
  undefined1 local_38 [8];
  ForAnyElementType local_30;
  int local_28;
  FDestructionSentinel local_20;
  
  pFVar8 = (this->ChildFilters).AllocatorInstance.Data;
  if (pFVar8 != pFVar8 + (longlong)(this->ChildFilters).ArrayNum * 0x10) {
    pFVar7 = pFVar8;
    do {
      if (*(IFilter<TSharedPtr<IAutomationReport,1>_const_&> **)pFVar7 == param_1->Object) {
        iVar6 = (int)((longlong)pFVar7 - (longlong)pFVar8 >> 4);
        if (iVar6 != -1) {
          return iVar6;
        }
        break;
      }
      pFVar7 = pFVar7 + 0x10;
    } while (pFVar7 != pFVar8 + (longlong)(this->ChildFilters).ArrayNum * 0x10);
  }
  if (param_1->Object != (IFilter<TSharedPtr<IAutomationReport,1>_const_&> *)0x0) {
    this_00 = (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
              (**(code **)((longlong)*param_1->Object + 0x18))();
    TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
    CreateSP<TFilterCollection<TSharedPtr<IAutomationReport,1>_const_&>_>
              ((TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_38,this,
               (pmf_0e4b5987)0x148c65210);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::
    AddDelegateInstance<TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>
              (this_00,(TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)&stack0x00000008)
    ;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_38,
               (FWriteAccessScope *)&local_20);
    if ((local_28 != 0) && (local_30.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)local_30.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_30,0,0,0x10);
      local_28 = 0;
    }
    if (local_20.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_20.Accessor,&local_20);
    }
    if (local_30.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_30.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_38);
  }
  pTVar2 = (TSharedPtr<IFilter<TSharedPtr<IAutomationReport,1>_const_&>,1> *)
           (this->ChildFilters).AllocatorInstance.Data;
  if (((pTVar2 <= param_1) && (param_1 < pTVar2 + (this->ChildFilters).ArrayMax)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar5)) {
    pcVar4 = (code *)swi(3);
    iVar6 = (*pcVar4)();
    return iVar6;
  }
  iVar6 = (this->ChildFilters).ArrayNum;
  piVar1 = &(this->ChildFilters).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&(this->ChildFilters).AllocatorInstance,piVar1);
  }
  (this->ChildFilters).ArrayNum = iVar6 + 1;
  pFVar8 = (this->ChildFilters).AllocatorInstance.Data + (longlong)iVar6 * 0x10;
  *(IFilter<TSharedPtr<IAutomationReport,1>_const_&> **)pFVar8 = param_1->Object;
  pTVar3 = (param_1->SharedReferenceCount).ReferenceController;
  *(TReferenceControllerBase<1> **)(pFVar8 + 8) = pTVar3;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
            ((TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)
             &this->ChangedEvent);
  return iVar6;
}

// OnChildFilterChanged @ 148c65210

void __thiscall
TFilterCollection<TSharedPtr<IAutomationReport,1>_const_&>::OnChildFilterChanged
          (TFilterCollection<TSharedPtr<IAutomationReport,1>_const_&> *this)

{
  TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
            ((TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)
             &this->ChangedEvent);
  return;
}

