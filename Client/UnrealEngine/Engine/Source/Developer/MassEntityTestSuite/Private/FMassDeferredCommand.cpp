// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 5

// Add @ 14710eb10

void __thiscall
FMassDeferredCommand<5>::Add
          (FMassDeferredCommand<5> *this,TFunction<void___cdecl(FMassEntityManager_&)> *param_1)

{
  int *piVar1;
  TFunction<void___cdecl(FMassEntityManager_&)> *pTVar2;
  code *pcVar3;
  longlong lVar4;
  bool bVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  
  pTVar2 = (TFunction<void___cdecl(FMassEntityManager_&)> *)
           (this->DeferredFunctions).AllocatorInstance.Data;
  if ((pTVar2 <= param_1) && (param_1 < pTVar2 + (this->DeferredFunctions).ArrayMax)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar6 = (this->DeferredFunctions).ArrayNum;
  piVar1 = &(this->DeferredFunctions).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x1030,&(this->DeferredFunctions).AllocatorInstance,piVar1);
  }
  (this->DeferredFunctions).ArrayNum = iVar6 + 1;
  pFVar7 = (this->DeferredFunctions).AllocatorInstance.Data + (longlong)iVar6 * 0x30;
  *(longlong *)pFVar7 = *(longlong *)param_1;
  *(longlong *)(pFVar7 + 0x28) = *(longlong *)&param_1->field_0x28;
  *(undefined8 *)&param_1->field_0x28 = 0;
  lVar4 = *(longlong *)&param_1->field_0x18;
  *(longlong *)(pFVar7 + 0x10) = *(longlong *)&param_1->field_0x10;
  *(longlong *)(pFVar7 + 0x18) = lVar4;
  *(longlong *)(pFVar7 + 0x20) = *(longlong *)&param_1->field_0x20;
  if (*(longlong *)pFVar7 != 0) {
    *(undefined8 *)param_1 = 0;
  }
  *(undefined1 *)&this->_padding_ = 1;
  return;
}

// GetAllocatedSize @ 14711f810

ulong64 __thiscall FMassDeferredCommand<5>::GetAllocatedSize(FMassDeferredCommand<5> *this)

{
  return (longlong)(this->DeferredFunctions).ArrayMax * 0x30;
}

// GetNumOperationsStat @ 147120330

int __thiscall FMassDeferredCommand<5>::GetNumOperationsStat(FMassDeferredCommand<5> *this)

{
  return (this->DeferredFunctions).ArrayNum;
}

// Reset @ 14719b910

void __thiscall FMassDeferredCommand<5>::Reset(FMassDeferredCommand<5> *this)

{
  int *piVar1;
  int iVar2;
  TFunction<void___cdecl(FMassEntityManager_&)> *pTVar3;
  
  piVar1 = &(this->DeferredFunctions).ArrayMax;
  pTVar3 = (TFunction<void___cdecl(FMassEntityManager_&)> *)
           (this->DeferredFunctions).AllocatorInstance.Data;
  iVar2 = (this->DeferredFunctions).ArrayNum;
  if ((this->DeferredFunctions).ArrayMax < 0) {
    DestructItems<TFunction<void___cdecl(FMassEntityManager_&)>,int>(pTVar3,iVar2);
    (this->DeferredFunctions).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x30,0x10,0,&(this->DeferredFunctions).AllocatorInstance,0,piVar1);
      *(undefined1 *)&this->_padding_ = 0;
      return;
    }
  }
  else {
    DestructItems<TFunction<void___cdecl(FMassEntityManager_&)>,int>(pTVar3,iVar2);
    (this->DeferredFunctions).ArrayNum = 0;
  }
  *(undefined1 *)&this->_padding_ = 0;
  return;
}

// Run @ 14719ce10

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __thiscall
FMassDeferredCommand<5>::Run(FMassDeferredCommand<5> *this,FMassEntityManager *param_1)

{
  int iVar1;
  code *pcVar2;
  undefined8 uVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  bool bVar7;
  undefined1 local_res8 [8];
  
  bVar7 = -1 < CpuChannel->Enabled;
  if (bVar7) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`protected:_virtual_void___cdecl_FMassDeferredCommand<5>::Run(FMassEntityManager&___ptr64)___ptr64'
                ::__l2::__CpuProfilerEventSpecId679,"MassDeferredCommand_Execute",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Public\\MassCommands.h"
               ,0x2a7);
    FCpuProfilerTrace::OutputBeginEvent
              (`protected:_virtual_void___cdecl_FMassDeferredCommand<5>::Run(FMassEntityManager&___ptr64)___ptr64'
               ::__l2::__CpuProfilerEventSpecId679);
  }
  iVar1 = (this->DeferredFunctions).ArrayNum;
  pFVar6 = (this->DeferredFunctions).AllocatorInstance.Data;
  pFVar5 = pFVar6 + (longlong)iVar1 * 0x30;
  while( true ) {
    if ((this->DeferredFunctions).ArrayNum != iVar1) {
      `TCheckedPointerIterator<TFunction<void___cdecl(FMassEntityManager_&)>,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar6 == pFVar5) break;
    UE::Core::Private::Function::CheckCallable(*(void **)pFVar6);
    pcVar2 = *(code **)pFVar6;
    pFVar4 = pFVar6 + 0x10;
    if (*(FScriptContainerElement **)(pFVar6 + 0x28) != (FScriptContainerElement *)0x0) {
      pFVar4 = *(FScriptContainerElement **)(pFVar6 + 0x28);
    }
    uVar3 = (**(code **)(*(longlong *)pFVar4 + 8))();
    (*pcVar2)(uVar3,param_1);
    pFVar6 = pFVar6 + 0x30;
  }
  if (!bVar7) {
    return;
  }
  FCpuProfilerTrace::OutputEndEvent();
  return;
}

