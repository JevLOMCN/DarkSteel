// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntity
// Functions: 4

// GetAllocatedSize @ 14721e6b0

ulong64 __thiscall FMassDeferredCommand<1>::GetAllocatedSize(FMassDeferredCommand<1> *this)

{
  return (longlong)(this->DeferredFunctions).ArrayMax * 0x30;
}

// GetNumOperationsStat @ 147223810

int __thiscall FMassDeferredCommand<1>::GetNumOperationsStat(FMassDeferredCommand<1> *this)

{
  return (this->DeferredFunctions).ArrayNum;
}

// Reset @ 147248860

void __thiscall FMassDeferredCommand<1>::Reset(FMassDeferredCommand<1> *this)

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

// Run @ 14724a210

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __thiscall
FMassDeferredCommand<1>::Run(FMassDeferredCommand<1> *this,FMassEntityManager *param_1)

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
              (&`protected:_virtual_void___cdecl_FMassDeferredCommand<1>::Run(FMassEntityManager&___ptr64)___ptr64'
                ::__l2::__CpuProfilerEventSpecId679,"MassDeferredCommand_Execute",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Public\\MassCommands.h"
               ,0x2a7);
    FCpuProfilerTrace::OutputBeginEvent
              (`protected:_virtual_void___cdecl_FMassDeferredCommand<1>::Run(FMassEntityManager&___ptr64)___ptr64'
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

