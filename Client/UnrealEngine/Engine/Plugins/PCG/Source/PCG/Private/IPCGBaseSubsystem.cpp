// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 23

// ~IPCGBaseSubsystem @ 149f345e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall IPCGBaseSubsystem::~IPCGBaseSubsystem(IPCGBaseSubsystem *this)

{
  this->_padding_ = (longlong)&___7IPCGBaseSubsystem__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->GraphExecutor).SharedReferenceCount.ReferenceController);
  return;
}

// CancelAllGeneration @ 149f3ded0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall IPCGBaseSubsystem::CancelAllGeneration(IPCGBaseSubsystem *this)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  longlong *plVar4;
  int iVar5;
  ForAnyElementType FVar6;
  undefined1 local_res8 [8];
  TArray<IPCGGraphExecutionSource_*,TSizedDefaultAllocator<32>_> local_18;
  
  if ((this->GraphExecutor).Object == (FPCGGraphExecutor *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("GraphExecutor",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Subsystems\\IPCGBaseSubsystem.cpp"
                       ,0x86,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if ((this->GraphExecutor).Object == (FPCGGraphExecutor *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  FPCGGraphExecutor::CancelAll((this->GraphExecutor).Object,&local_18);
  iVar5 = local_18.ArrayNum;
  pFVar1 = local_18.AllocatorInstance.Data + (longlong)iVar5 * 8;
  FVar6.Data = local_18.AllocatorInstance.Data;
  while( true ) {
    if (local_18.ArrayNum != iVar5) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<IPCGGraphExecutionSource_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (FVar6.Data == pFVar1) break;
    if (*(longlong **)FVar6.Data == (longlong *)0x0) {
      bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_8572363030388539253>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Subsystems\\IPCGBaseSubsystem.cpp"
                         ,0x8b,"CancelledExecutionSource");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    else {
      plVar4 = (longlong *)(**(code **)(**(longlong **)FVar6.Data + 0x18))();
      (**(code **)(*plVar4 + 0x78))(plVar4);
    }
    FVar6.Data = FVar6.Data + 8;
  }
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// CancelGeneration @ 149f3e010

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
IPCGBaseSubsystem::CancelGeneration
          (IPCGBaseSubsystem *this,IPCGGraphExecutionSource *param_1,bool param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  int iVar3;
  bool bVar4;
  char cVar5;
  longlong *plVar6;
  ForAnyElementType FVar7;
  undefined1 local_res8 [8];
  TArray<IPCGGraphExecutionSource_*,TSizedDefaultAllocator<32>_> local_18;
  
  if ((this->GraphExecutor).Object != (FPCGGraphExecutor *)0x0) {
    bVar4 = IsInGameThread();
    if (bVar4) goto LAB_149f3e05f;
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("GraphExecutor && IsInGameThread()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Subsystems\\IPCGBaseSubsystem.cpp"
                     ,0x5f,L"");
  if (bVar4) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
LAB_149f3e05f:
  if (param_1 != (IPCGGraphExecutionSource *)0x0) {
    plVar6 = (longlong *)(**(code **)((longlong)*param_1 + 0x18))(param_1);
    cVar5 = (**(code **)(*plVar6 + 0x80))(plVar6);
    if (cVar5 != '\0') {
      (**(code **)(this->_padding_ + 0x20))(this,param_1,param_2);
      if ((this->GraphExecutor).Object == (FPCGGraphExecutor *)0x0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar4) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      FPCGGraphExecutor::Cancel((this->GraphExecutor).Object,&local_18,param_1);
      iVar3 = local_18.ArrayNum;
      pFVar1 = local_18.AllocatorInstance.Data + (longlong)local_18.ArrayNum * 8;
      FVar7.Data = local_18.AllocatorInstance.Data;
      while( true ) {
        if (local_18.ArrayNum != iVar3) {
          `TCheckedPointerIterator<IPCGGraphExecutionSource_*,int,0>::operator!='::__l2::<lambda_1>
          ::operator()(local_res8);
        }
        if (FVar7.Data == pFVar1) break;
        if (*(longlong **)FVar7.Data != (longlong *)0x0) {
          plVar6 = (longlong *)(**(code **)(**(longlong **)FVar7.Data + 0x18))();
          (**(code **)(*plVar6 + 0x78))(plVar6,1,param_2);
        }
        FVar7.Data = FVar7.Data + 8;
      }
      if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.AllocatorInstance.Data);
      }
    }
  }
  return;
}

// CancelGeneration @ 149f3e160

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
IPCGBaseSubsystem::CancelGeneration(IPCGBaseSubsystem *this,IPCGGraphExecutionSource *param_1)

{
  CancelGeneration(this,param_1,true);
  return;
}

// CancelGeneration @ 149f3e170

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPCGHiGenGrid": Some values do not have unique names */

void __thiscall IPCGBaseSubsystem::CancelGeneration(IPCGBaseSubsystem *this,UPCGGraph *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  longlong *plVar4;
  int iVar5;
  ForAnyElementType FVar6;
  undefined1 local_res8 [8];
  TArray<IPCGGraphExecutionSource_*,TSizedDefaultAllocator<32>_> local_18;
  
  if ((this->GraphExecutor).Object == (FPCGGraphExecutor *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("GraphExecutor",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Subsystems\\IPCGBaseSubsystem.cpp"
                       ,0x73,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (param_1 != (UPCGGraph *)0x0) {
    if ((this->GraphExecutor).Object == (FPCGGraphExecutor *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    FPCGGraphExecutor::Cancel((this->GraphExecutor).Object,&local_18,param_1);
    iVar5 = local_18.ArrayNum;
    pFVar1 = local_18.AllocatorInstance.Data + (longlong)iVar5 * 8;
    FVar6.Data = local_18.AllocatorInstance.Data;
    while( true ) {
      if (local_18.ArrayNum != iVar5) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<IPCGGraphExecutionSource_*,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res8);
      }
      if (FVar6.Data == pFVar1) break;
      if (*(longlong **)FVar6.Data == (longlong *)0x0) {
        bVar3 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_8572363030388539267>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Subsystems\\IPCGBaseSubsystem.cpp"
                           ,0x7d,"CancelledExecutionSource");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      else {
        plVar4 = (longlong *)(**(code **)(**(longlong **)FVar6.Data + 0x18))();
        (**(code **)(*plVar4 + 0x78))(plVar4);
      }
      FVar6.Data = FVar6.Data + 8;
    }
    if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.AllocatorInstance.Data);
    }
  }
  return;
}

// CancelGenerationInternal @ 149f3e2c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
IPCGBaseSubsystem::CancelGenerationInternal
          (IPCGBaseSubsystem *this,IPCGGraphExecutionSource *param_1,bool param_2)

{
  return;
}

// ClearOutputData @ 149f401a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall IPCGBaseSubsystem::ClearOutputData(IPCGBaseSubsystem *this,ulong64 param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if ((this->GraphExecutor).Object == (FPCGGraphExecutor *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("GraphExecutor",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Subsystems\\IPCGBaseSubsystem.cpp"
                       ,0xbf,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((this->GraphExecutor).Object == (FPCGGraphExecutor *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FPCGGraphExecutor::ClearOutputData((this->GraphExecutor).Object,param_1);
  return;
}

// DeinitializeBaseSubsystem @ 149f417f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall IPCGBaseSubsystem::DeinitializeBaseSubsystem(IPCGBaseSubsystem *this)

{
  undefined8 local_18;
  FSharedReferencer<1> aFStack_10 [2];
  
  local_18 = 0;
  aFStack_10[0].ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->GraphExecutor != (TSharedPtr<FPCGGraphExecutor,1> *)&local_18) {
    (this->GraphExecutor).Object = (FPCGGraphExecutor *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->GraphExecutor).SharedReferenceCount,aFStack_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (aFStack_10[0].ReferenceController);
  return;
}

// FlushCache @ 149f452b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall IPCGBaseSubsystem::FlushCache(IPCGBaseSubsystem *this)

{
  FPCGGraphExecutor *pFVar1;
  code *pcVar2;
  bool bVar3;
  
  pFVar1 = (this->GraphExecutor).Object;
  if ((pFVar1 != (FPCGGraphExecutor *)0x0) && (pFVar1 != (FPCGGraphExecutor *)0xffffffffffffff88)) {
    FPCGGraphCache::ClearCache(&((this->GraphExecutor).Object)->GraphCache);
    if ((this->GraphExecutor).Object == (FPCGGraphExecutor *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    FPCGGraphCompiler::ClearCache(&((this->GraphExecutor).Object)->GraphCompiler);
    return;
  }
  return;
}

// GetCache @ 149f48030

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

IPCGGraphCache * __thiscall IPCGBaseSubsystem::GetCache(IPCGBaseSubsystem *this)

{
  FPCGGraphExecutor *pFVar1;
  IPCGGraphCache *pIVar2;
  IPCGGraphCache *pIVar3;
  
  pFVar1 = (this->GraphExecutor).Object;
  pIVar3 = (IPCGGraphCache *)&pFVar1->GraphCache;
  if (pFVar1 == (FPCGGraphExecutor *)0x0) {
    pIVar3 = (IPCGGraphCache *)0x0;
  }
  pIVar2 = pIVar3 + 2;
  if (pIVar3 == (IPCGGraphCache *)0x0) {
    pIVar2 = (IPCGGraphCache *)0x0;
  }
  return pIVar2;
}

// GetComputeGraph @ 149f490d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPCGHiGenGrid": Some values do not have unique names */

UPCGComputeGraph * __thiscall
IPCGBaseSubsystem::GetComputeGraph
          (IPCGBaseSubsystem *this,UPCGGraph *param_1,uint param_2,uint param_3)

{
  UPCGGraphCompilationData *pUVar1;
  FPCGGraphExecutor *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  UPCGComputeGraph *pUVar6;
  uint *puVar7;
  undefined1 *puVar8;
  
  pFVar2 = (this->GraphExecutor).Object;
  if ((pFVar2 == (FPCGGraphExecutor *)0x0) || (pFVar2 == (FPCGGraphExecutor *)0xffffffffffffff88)) {
    return (UPCGComputeGraph *)0x0;
  }
  if ((param_1 != (UPCGGraph *)0x0) &&
     (pUVar1 = (param_1->CookedCompilationData).field0_0x0.DebugPtr,
     pUVar1 != (UPCGGraphCompilationData *)0x0)) {
    if (UE::GC::GIsIncrementalReachabilityPending) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    if (*(int *)&(pUVar1->ComputeGraphs).field_0x8 != *(int *)&(pUVar1->ComputeGraphs).field_0x34) {
      puVar8 = *(undefined1 **)&(pUVar1->ComputeGraphs).field_0x40;
      if (puVar8 == (undefined1 *)0x0) {
        puVar8 = &(pUVar1->ComputeGraphs).field_0x38;
      }
      uVar5 = *(uint *)(puVar8 + (ulonglong)
                                 (*(int *)&(pUVar1->ComputeGraphs).field_0x48 - 1U & param_2) * 4);
      if (uVar5 != 0xffffffff) {
        do {
          puVar7 = (uint *)((longlong)(int)uVar5 * 0x20 + *(longlong *)&pUVar1->ComputeGraphs);
          if (*puVar7 == param_2) {
            pUVar6 = (UPCGComputeGraph *)(puVar7 + 2);
            if (puVar7 == (uint *)0x0) {
              pUVar6 = (UPCGComputeGraph *)0x0;
            }
            if (pUVar6 == (UPCGComputeGraph *)0x0) {
              return (UPCGComputeGraph *)0x0;
            }
            if ((int)param_3 < 0) {
              return (UPCGComputeGraph *)0x0;
            }
            if ((int)pUVar6->_padding_ <= (int)param_3) {
              return (UPCGComputeGraph *)0x0;
            }
            if (((int)param_3 < 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar4)) {
              pcVar3 = (code *)swi(3);
              pUVar6 = (UPCGComputeGraph *)(*pcVar3)();
              return pUVar6;
            }
            return *(UPCGComputeGraph **)(pUVar6->_padding_ + (longlong)(int)param_3 * 8);
          }
          uVar5 = puVar7[6];
        } while (uVar5 != 0xffffffff);
      }
    }
  }
  return (UPCGComputeGraph *)0x0;
}

// GetGraphCompiler @ 149f4aba0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FPCGGraphCompiler * __thiscall IPCGBaseSubsystem::GetGraphCompiler(IPCGBaseSubsystem *this)

{
  FPCGGraphExecutor *pFVar1;
  FPCGGraphCompiler *pFVar2;
  
  pFVar1 = (this->GraphExecutor).Object;
  pFVar2 = &pFVar1->GraphCompiler;
  if (pFVar1 == (FPCGGraphExecutor *)0x0) {
    pFVar2 = (FPCGGraphCompiler *)0x0;
  }
  return pFVar2;
}

// GetOutputData @ 149f4be10

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
IPCGBaseSubsystem::GetOutputData
          (IPCGBaseSubsystem *this,ulong64 param_1,FPCGDataCollection *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if ((this->GraphExecutor).Object == (FPCGGraphExecutor *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("GraphExecutor",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Subsystems\\IPCGBaseSubsystem.cpp"
                       ,0xb9,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  if ((this->GraphExecutor).Object == (FPCGGraphExecutor *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  bVar2 = FPCGGraphExecutor::GetOutputData((this->GraphExecutor).Object,param_1,param_2);
  return bVar2;
}

// GetSubsystemWorld @ 149f4f4c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UWorld * __thiscall IPCGBaseSubsystem::GetSubsystemWorld(IPCGBaseSubsystem *this)

{
  return (UWorld *)0x0;
}

// GetTickEndTime @ 149f4f4e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

double __thiscall IPCGBaseSubsystem::GetTickEndTime(IPCGBaseSubsystem *this)

{
  double dVar1;
  double dVar2;
  LARGE_INTEGER local_res10 [3];
  
  QueryPerformanceCounter(local_res10);
  dVar1 = (double)local_res10[0].QuadPart * FGenericPlatformTime::SecondsPerCycle;
  dVar2 = FPCGGraphExecutor::GetTickBudgetInSeconds();
  return dVar2 + dVar1 + __real_4170000000000000;
}

// InitializeBaseSubsystem @ 149f50800

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall IPCGBaseSubsystem::InitializeBaseSubsystem(IPCGBaseSubsystem *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  UWorld *pUVar6;
  TReferenceControllerBase<1> *pTVar7;
  FPCGGraphExecutor *pFVar8;
  FPCGGraphExecutor *local_18;
  FSharedReferencer<1> local_10;
  
  if ((this->GraphExecutor).Object != (FPCGGraphExecutor *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("!GraphExecutor",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Subsystems\\IPCGBaseSubsystem.cpp"
                       ,0x1c,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pUVar6 = (UWorld *)(**(code **)(this->_padding_ + 0x10))(this);
  pTVar7 = ::operator_new(0x6b0);
  if (pTVar7 == (TReferenceControllerBase<1> *)0x0) {
    pTVar7 = (TReferenceControllerBase<1> *)0x0;
    pFVar8 = (FPCGGraphExecutor *)&DAT_00000010;
  }
  else {
    pTVar7->SharedReferenceCount = (atomic<int>)0x1;
    pTVar7->WeakReferenceCount = (atomic<int>)0x1;
    pTVar7->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_VFPCGGraphExecutor___00_SharedPointerInternals__6B_;
    FPCGGraphExecutor::FPCGGraphExecutor((FPCGGraphExecutor *)(pTVar7 + 1),pUVar6);
    pFVar8 = (FPCGGraphExecutor *)(pTVar7 + 1);
    if (pFVar8 == (FPCGGraphExecutor *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      goto LAB_149f5092d;
    }
  }
  if (((pFVar8->_padding_ == 0) || (pFVar8->_padding_ == 0)) ||
     (*(int *)(pFVar8->_padding_ + 8) < 1)) {
    if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
      UNLOCK();
    }
    pFVar8->_padding_ = (longlong)pFVar8;
    if (pTVar7 != (TReferenceControllerBase<1> *)pFVar8->_padding_) {
      if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar7->WeakReferenceCount = (atomic<int>)((int)pTVar7->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar3 = (longlong *)pFVar8->_padding_;
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
      pFVar8->_padding_ = (longlong)pTVar7;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  }
LAB_149f5092d:
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_18 = pFVar8;
  local_10.ReferenceController = pTVar7;
  if (&this->GraphExecutor != (TSharedPtr<FPCGGraphExecutor,1> *)&local_18) {
    (this->GraphExecutor).Object = pFVar8;
    local_18 = (FPCGGraphExecutor *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->GraphExecutor).SharedReferenceCount,&local_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_10.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  return;
}

// IsAnyGraphCurrentlyExecuting @ 149f51cb0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall IPCGBaseSubsystem::IsAnyGraphCurrentlyExecuting(IPCGBaseSubsystem *this)

{
  FPCGGraphExecutor *this_00;
  bool bVar1;
  
  this_00 = (this->GraphExecutor).Object;
  if (this_00 != (FPCGGraphExecutor *)0x0) {
    bVar1 = FPCGGraphExecutor::IsAnyGraphCurrentlyExecuting(this_00);
    if (bVar1) {
      return true;
    }
  }
  return false;
}

// IsGraphCacheDebuggingEnabled @ 149f523d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall IPCGBaseSubsystem::IsGraphCacheDebuggingEnabled(IPCGBaseSubsystem *this)

{
  FPCGGraphExecutor *pFVar1;
  bool bVar2;
  
  pFVar1 = (this->GraphExecutor).Object;
  if (pFVar1 != (FPCGGraphExecutor *)0x0) {
    bVar2 = FPCGGraphCache::IsDebuggingEnabled(&pFVar1->GraphCache);
    if (bVar2) {
      return true;
    }
  }
  return false;
}

// IsGraphCurrentlyExecuting @ 149f52410

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPCGHiGenGrid": Some values do not have unique names */

bool __thiscall
IPCGBaseSubsystem::IsGraphCurrentlyExecuting(IPCGBaseSubsystem *this,UPCGGraph *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if ((this->GraphExecutor).Object == (FPCGGraphExecutor *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("GraphExecutor",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Subsystems\\IPCGBaseSubsystem.cpp"
                       ,0x94,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  if (param_1 == (UPCGGraph *)0x0) {
    return false;
  }
  if ((this->GraphExecutor).Object == (FPCGGraphExecutor *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  bVar2 = FPCGGraphExecutor::IsGraphCurrentlyExecuting((this->GraphExecutor).Object,param_1);
  return bVar2;
}

// ScheduleGeneric @ 149f5f260

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

ulong64 __thiscall
IPCGBaseSubsystem::ScheduleGeneric(IPCGBaseSubsystem *this,FPCGScheduleGenericParams *param_1)

{
  code *pcVar1;
  bool bVar2;
  ulong64 uVar3;
  
  if ((this->GraphExecutor).Object == (FPCGGraphExecutor *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("GraphExecutor",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Subsystems\\IPCGBaseSubsystem.cpp"
                       ,0x42,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
  }
  if ((this->GraphExecutor).Object == (FPCGGraphExecutor *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
  }
  uVar3 = FPCGGraphExecutor::ScheduleGeneric((this->GraphExecutor).Object,param_1);
  return uVar3;
}

// ScheduleGraph @ 149f5f7e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPCGHiGenGrid": Some values do not have unique names */

ulong64 __thiscall
IPCGBaseSubsystem::ScheduleGraph(IPCGBaseSubsystem *this,FPCGScheduleGraphParams *param_1)

{
  code *pcVar1;
  bool bVar2;
  ulong64 uVar3;
  
  if (param_1->ExecutionSource == (IPCGGraphExecutionSource *)0x0) {
    return 0xffffffffffffffff;
  }
  if ((this->GraphExecutor).Object == (FPCGGraphExecutor *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
  }
  uVar3 = FPCGGraphExecutor::ScheduleGraph((this->GraphExecutor).Object,param_1);
  return uVar3;
}

// Tick @ 149f64d00

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

double __thiscall IPCGBaseSubsystem::Tick(IPCGBaseSubsystem *this)

{
  FPCGGraphExecutor *this_00;
  double local_res8 [4];
  
  local_res8[0] = (double)(**(code **)(this->_padding_ + 0x18))();
  this_00 = (this->GraphExecutor).Object;
  if (this_00 != (FPCGGraphExecutor *)0x0) {
    FPCGGraphExecutor::Execute(this_00,local_res8);
  }
  return local_res8[0];
}

// _getUObject @ 149f6f5a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UObject * __thiscall IPCGBaseSubsystem::_getUObject(IPCGBaseSubsystem *this)

{
  return (UObject *)0x0;
}

