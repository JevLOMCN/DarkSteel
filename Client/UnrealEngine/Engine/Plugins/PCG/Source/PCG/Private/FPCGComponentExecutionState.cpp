// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 30

// AddToManagedResources @ 149ef4db0

void __thiscall
FPCGComponentExecutionState::AddToManagedResources
          (FPCGComponentExecutionState *this,UPCGManagedResource *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (this->Component == (UPCGComponent *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Component",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\PCGComponent.cpp"
                       ,0x1234,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  UPCGComponent::AddToManagedResources(this->Component,param_1);
  return;
}

// Cancel @ 149ef7160

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall FPCGComponentExecutionState::Cancel(FPCGComponentExecutionState *this)

{
  UPCGComponent *pUVar1;
  code *pcVar2;
  bool bVar3;
  UWorld *pUVar4;
  UPCGSubsystem *pUVar5;
  UPCGSubsystem *pUVar6;
  
  if ((this->Component == (UPCGComponent *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Component",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\PCGComponent.cpp"
                         ,0x11e0,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pUVar1 = this->Component;
  if ((pUVar1->CurrentGenerationTask != 0xffffffffffffffff) &&
     ((AActor *)pUVar1->_padding_ != (AActor *)0x0)) {
    pUVar4 = AActor::GetWorld((AActor *)pUVar1->_padding_);
    pUVar5 = UPCGSubsystem::GetInstance(pUVar4);
    if (pUVar5 != (UPCGSubsystem *)0x0) {
      pUVar5 = (UPCGSubsystem *)0x0;
      if ((AActor *)pUVar1->_padding_ != (AActor *)0x0) {
        pUVar4 = AActor::GetWorld((AActor *)pUVar1->_padding_);
        pUVar5 = UPCGSubsystem::GetInstance(pUVar4);
      }
      pUVar6 = (UPCGSubsystem *)&pUVar1->_padding_;
      if (pUVar1 == (UPCGComponent *)0x0) {
        pUVar6 = (UPCGSubsystem *)0x0;
      }
      IPCGBaseSubsystem::CancelGeneration
                ((IPCGBaseSubsystem *)&pUVar5->_padding_,(IPCGGraphExecutionSource *)pUVar6);
    }
  }
  return;
}

// ExecutePreGraph @ 149efcb70

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
FPCGComponentExecutionState::ExecutePreGraph(FPCGComponentExecutionState *this,FPCGContext *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (this->Component == (UPCGComponent *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Component",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\PCGComponent.cpp"
                       ,0x11ec,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  UPCGComponent::ExecutePreGraph(this->Component,param_1);
  return;
}

// GenerateLocalGetTaskId @ 149efe360

/* WARNING: Enum "EPCGHiGenGrid": Some values do not have unique names */

ulong64 __thiscall
FPCGComponentExecutionState::GenerateLocalGetTaskId
          (FPCGComponentExecutionState *this,EPCGHiGenGrid param_1)

{
  code *pcVar1;
  bool bVar2;
  char cVar3;
  ulong64 uVar4;
  TArray<unsigned___int64,TSizedDefaultAllocator<32>_> local_18;
  
  if (this->Component == (UPCGComponent *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Component",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\PCGComponent.cpp"
                       ,0x123a,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return uVar4;
    }
  }
  cVar3 = (**(code **)(this->_padding_ + 0xe0))();
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  uVar4 = UPCGComponent::GenerateInternal
                    (this->Component,true,param_1,(cVar3 != '\0') + GenerateOnDemand,&local_18);
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return uVar4;
}

// GetBounds @ 149efef70

TBox<double> * __thiscall
FPCGComponentExecutionState::GetBounds
          (FPCGComponentExecutionState *this,TBox<double> *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TBox<double> *pTVar3;
  
  if (this->Component == (UPCGComponent *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Component",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\PCGComponent.cpp"
                       ,0x11b0,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TBox<double> *)(*pcVar1)();
      return pTVar3;
    }
  }
  UPCGComponent::GetGridBounds(this->Component,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetDebugName @ 149eff600

FString * __thiscall
FPCGComponentExecutionState::GetDebugName
          (FPCGComponentExecutionState *this,FString *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  FString *pFVar3;
  FName local_res8;
  
  if ((this->Component == (UPCGComponent *)0x0) || (this->Component->_padding_ == 0)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Component && Component->GetOwner()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\PCGComponent.cpp"
                       ,0x118c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FString *)(*pcVar1)();
      return pFVar3;
    }
  }
  local_res8 = *(FName *)(this->Component->_padding_ + 0x18);
  ::FName::ToString(&local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetGenerationGridSize @ 149efffa0

uint __thiscall
FPCGComponentExecutionState::GetGenerationGridSize(FPCGComponentExecutionState *this)

{
  code *pcVar1;
  bool bVar2;
  char cVar3;
  uint uVar4;
  
  if (this->Component == (UPCGComponent *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Component",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\PCGComponent.cpp"
                       ,0x121c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return uVar4;
    }
  }
  cVar3 = (**(code **)(this->_padding_ + 0xd0))(this);
  if (cVar3 == '\0') {
    cVar3 = (**(code **)(this->_padding_ + 0xd8))(this);
    if (cVar3 == '\0') {
      return 0;
    }
  }
  return this->Component->GenerationGridSize;
}

// GetGenerationTaskId @ 149f004a0

ulong64 __thiscall
FPCGComponentExecutionState::GetGenerationTaskId(FPCGComponentExecutionState *this)

{
  code *pcVar1;
  bool bVar2;
  ulong64 uVar3;
  
  if (this->Component != (UPCGComponent *)0x0) {
    return this->Component->CurrentGenerationTask;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Component",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\PCGComponent.cpp"
                     ,0x1222,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return uVar3;
  }
  return this->Component->CurrentGenerationTask;
}

// GetGraph @ 149f00510

/* WARNING: Enum "EPCGHiGenGrid": Some values do not have unique names */

UPCGGraph * __thiscall FPCGComponentExecutionState::GetGraph(FPCGComponentExecutionState *this)

{
  UPCGGraphInstance *pUVar1;
  code *pcVar2;
  bool bVar3;
  UPCGGraph *pUVar4;
  
  if (this->Component == (UPCGComponent *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Component",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\PCGComponent.cpp"
                       ,0x11ce,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pUVar4 = (UPCGGraph *)(*pcVar2)();
      return pUVar4;
    }
  }
  pUVar1 = (this->Component->GraphInstance).field0_0x0.DebugPtr;
  if (pUVar1 != (UPCGGraphInstance *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000149f0055e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pUVar4 = (UPCGGraph *)(**(code **)(pUVar1->_padding_ + 0x2b8))();
    return pUVar4;
  }
  return (UPCGGraph *)0x0;
}

// GetGraphInstance @ 149f00760

UPCGGraphInstance * __thiscall
FPCGComponentExecutionState::GetGraphInstance(FPCGComponentExecutionState *this)

{
  code *pcVar1;
  bool bVar2;
  UPCGGraphInstance *pUVar3;
  
  if (this->Component != (UPCGComponent *)0x0) {
    return (this->Component->GraphInstance).field0_0x0.DebugPtr;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Component",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\PCGComponent.cpp"
                     ,0x11d4,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pUVar3 = (UPCGGraphInstance *)(*pcVar1)();
    return pUVar3;
  }
  return (this->Component->GraphInstance).field0_0x0.DebugPtr;
}

// GetGridDescriptor @ 149f00c40

FPCGGridDescriptor * __thiscall
FPCGComponentExecutionState::GetGridDescriptor
          (FPCGComponentExecutionState *this,FPCGGridDescriptor *__return_storage_ptr__,uint param_1
          )

{
  EPCGComponentGenerationTrigger EVar1;
  int iVar2;
  uint uVar3;
  UPCGComponent *pUVar4;
  APCGPartitionActor *this_00;
  UPCGGraphInstance *pUVar5;
  code *pcVar6;
  bool bVar7;
  FPCGGridDescriptor *pFVar8;
  UClass *pUVar9;
  UObject *pUVar10;
  
  if ((this->Component == (UPCGComponent *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Component",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\PCGComponent.cpp"
                         ,0x1216,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    pFVar8 = (FPCGGridDescriptor *)(*pcVar6)();
    return pFVar8;
  }
  pUVar4 = this->Component;
  this_00 = (APCGPartitionActor *)pUVar4->_padding_;
  if (this_00 != (APCGPartitionActor *)0x0) {
    pUVar9 = Z_Construct_UClass_APCGPartitionActor_NoRegister();
    iVar2 = (int)pUVar9->_padding_;
    if ((iVar2 <= *(int *)(this_00->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar2 * 8)
        == &pUVar9->_padding_)) {
      APCGPartitionActor::GetGridDescriptor(this_00,__return_storage_ptr__);
      if (param_1 == __return_storage_ptr__->GridSize) {
        return __return_storage_ptr__;
      }
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("GridSize == GridDescriptor.GetGridSize()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\PCGComponent.cpp"
                         ,0xf6,L"");
      if (!bVar7) {
        return __return_storage_ptr__;
      }
      pcVar6 = (code *)swi(3);
      pFVar8 = (FPCGGridDescriptor *)(*pcVar6)();
      return pFVar8;
    }
  }
  pUVar5 = (pUVar4->GraphInstance).field0_0x0.DebugPtr;
  if ((pUVar5 == (UPCGGraphInstance *)0x0) ||
     (pUVar10 = (UObject *)(**(code **)(pUVar5->_padding_ + 0x2b8))(), pUVar10 == (UObject *)0x0)) {
    pUVar9 = UPCGGraph::StaticClass();
    if ((pUVar9->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
      UClass::InternalCreateDefaultObjectWrapper(pUVar9);
    }
    pUVar10 = (pUVar9->ClassDefaultObject).field0_0x0.DebugPtr;
  }
  EVar1 = pUVar4->GenerationTrigger;
  bVar7 = (bool)pUVar10[2].field_0x1c;
  __return_storage_ptr__->RuntimeHash = 0;
  __return_storage_ptr__->bIsRuntime = EVar1 == GenerateAtRuntime;
  __return_storage_ptr__->GridSize = param_1;
  __return_storage_ptr__->bIs2DGrid = bVar7;
  (__return_storage_ptr__->Hash).bIsSet = false;
  if (pUVar4->GenerationTrigger != GenerateAtRuntime) {
    uVar3 = pUVar4->RuntimeGridDescriptorHash;
    if (((__return_storage_ptr__->Hash).bIsSet != false) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("!Hash.IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Grid\\PCGGridDescriptor.h"
                           ,0x3c,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      pFVar8 = (FPCGGridDescriptor *)(*pcVar6)();
      return pFVar8;
    }
    __return_storage_ptr__->RuntimeHash = uVar3;
  }
  return __return_storage_ptr__;
}

// GetLocalSource @ 149f01ce0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

IPCGGraphExecutionSource * __thiscall
FPCGComponentExecutionState::GetLocalSource
          (FPCGComponentExecutionState *this,FPCGGridDescriptor *param_1,TIntVector3<int> *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  IPCGGraphExecutionSource *pIVar4;
  longlong *plVar5;
  UPCGSubsystem *this_00;
  UClass *pUVar6;
  UPCGComponent *pUVar7;
  FString *pFVar8;
  wchar_t *pwVar9;
  wchar_t *pwVar10;
  FString local_48;
  FString local_38;
  FString local_28;
  
  pwVar9 = L"";
  if ((this->Component == (UPCGComponent *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Component",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\PCGComponent.cpp"
                         ,0x11fe,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pIVar4 = (IPCGGraphExecutionSource *)(*pcVar2)();
    return pIVar4;
  }
  plVar5 = (longlong *)(**(code **)(this->_padding_ + 0xb0))(this);
  if ((plVar5 != (longlong *)0x0) &&
     (this_00 = (UPCGSubsystem *)(**(code **)(*plVar5 + 8))(plVar5), this_00 != (UPCGSubsystem *)0x0
     )) {
    pUVar6 = Z_Construct_UClass_UPCGSubsystem_NoRegister();
    iVar1 = (int)pUVar6->_padding_;
    if ((iVar1 <= *(int *)(this_00->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar6->_padding_)) {
      pIVar4 = (IPCGGraphExecutionSource *)(**(code **)(this->_padding_ + 0xc0))(this);
      if (pIVar4 == (IPCGGraphExecutionSource *)0x0) {
        pFVar8 = GetTypeName<UPCGComponent>(&local_48);
        if ((pFVar8->Data).ArrayNum != 0) {
          pwVar9 = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
        }
                    /* WARNING: Subroutine does not return */
        CastLogError(L"nullptr",pwVar9);
      }
      pUVar7 = (UPCGComponent *)(**(code **)((longlong)*pIVar4 + 8))(pIVar4);
      if (pUVar7 != (UPCGComponent *)0x0) {
        pUVar6 = UPCGComponent::StaticClass();
        iVar1 = (int)pUVar6->_padding_;
        if ((iVar1 <= *(int *)(pUVar7->_padding_ + 0x38)) &&
           ((longlong *)
            *(undefined1 **)(*(longlong *)(pUVar7->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
            &pUVar6->_padding_)) {
          pUVar7 = UPCGSubsystem::GetLocalComponent(this_00,param_1,param_2,pUVar7);
          if (pUVar7 != (UPCGComponent *)0x0) {
            return (IPCGGraphExecutionSource *)&pUVar7->_padding_;
          }
          return (IPCGGraphExecutionSource *)0x0;
        }
      }
      pFVar8 = GetTypeName<UPCGComponent>(&local_38);
      if ((pFVar8->Data).ArrayNum == 0) {
        pwVar10 = L"";
      }
      else {
        pwVar10 = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
      }
      pFVar8 = GetFullNameForCastLogError<IPCGGraphExecutionSource>(&local_28,pIVar4);
      if ((pFVar8->Data).ArrayNum != 0) {
        pwVar9 = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(pwVar9,pwVar10);
    }
  }
  return (IPCGGraphExecutionSource *)0x0;
}

// GetLocalSpaceBounds @ 149f01e90

TBox<double> * __thiscall
FPCGComponentExecutionState::GetLocalSpaceBounds
          (FPCGComponentExecutionState *this,TBox<double> *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TBox<double> *pTVar3;
  
  if (this->Component == (UPCGComponent *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Component",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\PCGComponent.cpp"
                       ,0x11bc,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TBox<double> *)(*pcVar1)();
      return pTVar3;
    }
  }
  UPCGComponent::GetLocalSpaceBounds(this->Component,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetOriginalBounds @ 149f02740

TBox<double> * __thiscall
FPCGComponentExecutionState::GetOriginalBounds
          (FPCGComponentExecutionState *this,TBox<double> *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TBox<double> *pTVar3;
  
  if (this->Component == (UPCGComponent *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Component",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\PCGComponent.cpp"
                       ,0x11b6,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TBox<double> *)(*pcVar1)();
      return pTVar3;
    }
  }
  UPCGComponent::GetOriginalGridBounds(this->Component,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetOriginalLocalSpaceBounds @ 149f02b30

TBox<double> * __thiscall
FPCGComponentExecutionState::GetOriginalLocalSpaceBounds
          (FPCGComponentExecutionState *this,TBox<double> *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TBox<double> *pTVar3;
  
  if (this->Component == (UPCGComponent *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Component",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\PCGComponent.cpp"
                       ,0x11c2,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TBox<double> *)(*pcVar1)();
      return pTVar3;
    }
  }
  UPCGComponent::GetOriginalLocalSpaceBounds(this->Component,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetOriginalSource @ 149f02e80

IPCGGraphExecutionSource * __thiscall
FPCGComponentExecutionState::GetOriginalSource(FPCGComponentExecutionState *this)

{
  code *pcVar1;
  bool bVar2;
  IPCGGraphExecutionSource *pIVar3;
  UPCGComponent *pUVar4;
  
  if (this->Component == (UPCGComponent *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Component",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\PCGComponent.cpp"
                       ,0x11f8,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pIVar3 = (IPCGGraphExecutionSource *)(*pcVar1)();
      return pIVar3;
    }
  }
  pUVar4 = UPCGComponent::GetOriginalComponent(this->Component);
  pIVar3 = (IPCGGraphExecutionSource *)&pUVar4->_padding_;
  if (pUVar4 == (UPCGComponent *)0x0) {
    pIVar3 = (IPCGGraphExecutionSource *)0x0;
  }
  return pIVar3;
}

// GetOriginalTransform @ 149f02f00

TTransform<double> * __thiscall
FPCGComponentExecutionState::GetOriginalTransform
          (FPCGComponentExecutionState *this,TTransform<double> *__return_storage_ptr__)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)(**(code **)(this->_padding_ + 0xc0))();
  if (plVar1 != (longlong *)0x0) {
    plVar1 = (longlong *)(**(code **)(*plVar1 + 0x18))(plVar1);
    (**(code **)(*plVar1 + 0x30))(plVar1,__return_storage_ptr__);
    return __return_storage_ptr__;
  }
  (**(code **)(this->_padding_ + 0x30))(this,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetSeed @ 149f04a40

int __thiscall FPCGComponentExecutionState::GetSeed(FPCGComponentExecutionState *this)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  
  if (this->Component != (UPCGComponent *)0x0) {
    return this->Component->Seed;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Component",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\PCGComponent.cpp"
                     ,0x1186,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    iVar3 = (*pcVar1)();
    return iVar3;
  }
  return this->Component->Seed;
}

// GetSelfData @ 149f04be0

UPCGData * __thiscall FPCGComponentExecutionState::GetSelfData(FPCGComponentExecutionState *this)

{
  code *pcVar1;
  bool bVar2;
  UPCGData *pUVar3;
  
  if (this->Component == (UPCGComponent *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Component",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\PCGComponent.cpp"
                       ,0x1180,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pUVar3 = (UPCGData *)(*pcVar1)();
      return pUVar3;
    }
  }
  pUVar3 = UPCGComponent::GetActorPCGData(this->Component);
  return pUVar3;
}

// GetTransform @ 149f05c40

TTransform<double> * __thiscall
FPCGComponentExecutionState::GetTransform
          (FPCGComponentExecutionState *this,TTransform<double> *__return_storage_ptr__)

{
  longlong lVar1;
  code *pcVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  bool bVar7;
  TTransform<double> *pTVar8;
  
  if ((this->Component == (UPCGComponent *)0x0) || (this->Component->_padding_ == 0)) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Component && Component->GetOwner()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\PCGComponent.cpp"
                       ,0x1192,L"");
    if (bVar7) {
      pcVar2 = (code *)swi(3);
      pTVar8 = (TTransform<double> *)(*pcVar2)();
      return pTVar8;
    }
  }
  lVar1 = *(longlong *)(this->Component->_padding_ + 0x1b8);
  if (lVar1 == 0) {
    pTVar8 = &UE::Math::TTransform<double>::Identity;
  }
  else {
    pTVar8 = (TTransform<double> *)(lVar1 + 0x1f0);
  }
  dVar3 = (pTVar8->Rotation).XY.m128d_f64[1];
  dVar4 = (pTVar8->Rotation).ZW.m128d_f64[0];
  dVar5 = (pTVar8->Rotation).ZW.m128d_f64[1];
  (__return_storage_ptr__->Rotation).XY.m128d_f64[0] = (pTVar8->Rotation).XY.m128d_f64[0];
  (__return_storage_ptr__->Rotation).XY.m128d_f64[1] = dVar3;
  dVar3 = (pTVar8->Translation).XY.m128d_f64[0];
  dVar6 = (pTVar8->Translation).XY.m128d_f64[1];
  (__return_storage_ptr__->Rotation).ZW.m128d_f64[0] = dVar4;
  (__return_storage_ptr__->Rotation).ZW.m128d_f64[1] = dVar5;
  dVar4 = (pTVar8->Translation).ZW.m128d_f64[0];
  dVar5 = (pTVar8->Translation).ZW.m128d_f64[1];
  (__return_storage_ptr__->Translation).XY.m128d_f64[0] = dVar3;
  (__return_storage_ptr__->Translation).XY.m128d_f64[1] = dVar6;
  dVar3 = (pTVar8->Scale3D).XY.m128d_f64[0];
  dVar6 = (pTVar8->Scale3D).XY.m128d_f64[1];
  (__return_storage_ptr__->Translation).ZW.m128d_f64[0] = dVar4;
  (__return_storage_ptr__->Translation).ZW.m128d_f64[1] = dVar5;
  dVar4 = (pTVar8->Scale3D).ZW.m128d_f64[0];
  dVar5 = (pTVar8->Scale3D).ZW.m128d_f64[1];
  (__return_storage_ptr__->Scale3D).XY.m128d_f64[0] = dVar3;
  (__return_storage_ptr__->Scale3D).XY.m128d_f64[1] = dVar6;
  (__return_storage_ptr__->Scale3D).ZW.m128d_f64[0] = dVar4;
  (__return_storage_ptr__->Scale3D).ZW.m128d_f64[1] = dVar5;
  return __return_storage_ptr__;
}

// GetWorld @ 149f066c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UWorld * __thiscall FPCGComponentExecutionState::GetWorld(FPCGComponentExecutionState *this)

{
  code *pcVar1;
  bool bVar2;
  UWorld *pUVar3;
  
  if (this->Component == (UPCGComponent *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Component",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\PCGComponent.cpp"
                       ,0x11a4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pUVar3 = (UWorld *)(*pcVar1)();
      return pUVar3;
    }
  }
  pUVar3 = (UWorld *)this->Component->_padding_;
  if (pUVar3 == (UWorld *)0x0) {
    pUVar3 = UActorComponent::GetWorld_Uncached((UActorComponent *)this->Component);
    return pUVar3;
  }
  return pUVar3;
}

// HasAuthority @ 149f06840

bool __thiscall FPCGComponentExecutionState::HasAuthority(FPCGComponentExecutionState *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  if ((this->Component == (UPCGComponent *)0x0) || (this->Component->_padding_ == 0)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Component && Component->GetOwner()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\PCGComponent.cpp"
                       ,0x11aa,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return *(char *)(this->Component->_padding_ + 0x168) == '\x03';
}

// IsGenerating @ 149f07eb0

bool __thiscall FPCGComponentExecutionState::IsGenerating(FPCGComponentExecutionState *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  if (this->Component == (UPCGComponent *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Component",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\PCGComponent.cpp"
                       ,0x11e6,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return this->Component->CurrentGenerationTask != 0xffffffffffffffff;
}

// IsLocalSource @ 149f08070

bool __thiscall FPCGComponentExecutionState::IsLocalSource(FPCGComponentExecutionState *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  if (this->Component != (UPCGComponent *)0x0) {
    return this->Component->bIsComponentLocal;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Component",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\PCGComponent.cpp"
                     ,0x1210,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return this->Component->bIsComponentLocal;
}

// IsManagedByRuntimeGenSystem @ 149f080e0

bool __thiscall
FPCGComponentExecutionState::IsManagedByRuntimeGenSystem(FPCGComponentExecutionState *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  if (this->Component == (UPCGComponent *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Component",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\PCGComponent.cpp"
                       ,0x11f2,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return this->Component->GenerationTrigger == GenerateAtRuntime;
}

// IsPartitioned @ 149f08140

bool __thiscall FPCGComponentExecutionState::IsPartitioned(FPCGComponentExecutionState *this)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  UClass *pUVar6;
  
  if ((this->Component == (UPCGComponent *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Component",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\PCGComponent.cpp"
                         ,0x120a,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  if (this->Component->bIsComponentPartitioned == false) {
    return false;
  }
  lVar2 = this->Component->_padding_;
  if (lVar2 != 0) {
    pUVar6 = Z_Construct_UClass_APCGPartitionActor_NoRegister();
    lVar2 = *(longlong *)(lVar2 + 0x10);
    iVar1 = (int)pUVar6->_padding_;
    if ((iVar1 <= *(int *)(lVar2 + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar6->_padding_)) {
      return false;
    }
  }
  return true;
}

// OnGraphExecutionAborted @ 149f09680

void __thiscall
FPCGComponentExecutionState::OnGraphExecutionAborted
          (FPCGComponentExecutionState *this,bool param_1,bool param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (this->Component == (UPCGComponent *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Component",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\PCGComponent.cpp"
                       ,0x11da,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  UPCGComponent::OnProcessGraphAborted(this->Component,param_1,param_2);
  return;
}

// RetrieveOutputDataForPin @ 149f114f0

FPCGDataCollection * __thiscall
FPCGComponentExecutionState::RetrieveOutputDataForPin
          (FPCGComponentExecutionState *this,FString *param_1)

{
  FPlatformRWLock *SRWLock;
  UPCGComponent *pUVar1;
  code *pcVar2;
  bool bVar3;
  FPCGDataCollection *pFVar4;
  
  if (this->Component == (UPCGComponent *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Component",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\PCGComponent.cpp"
                       ,0x122e,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FPCGDataCollection *)(*pcVar2)();
      return pFVar4;
    }
  }
  pUVar1 = this->Component;
  SRWLock = &pUVar1->PerPinGeneratedOutputLock;
  if (SRWLock == (FPlatformRWLock *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                       ,0x1c,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FPCGDataCollection *)(*pcVar2)();
      return pFVar4;
    }
  }
  AcquireSRWLockShared((PSRWLOCK)SRWLock);
  pFVar4 = TMapBase<FString,FPCGDataCollection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FPCGDataCollection,0>_>
           ::Find((TMapBase<FString,FPCGDataCollection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FPCGDataCollection,0>_>
                   *)&pUVar1->PerPinGeneratedOutput,param_1);
  if (SRWLock != (FPlatformRWLock *)0x0) {
    ReleaseSRWLockShared((PSRWLOCK)SRWLock);
  }
  return pFVar4;
}

// StoreOutputDataForPin @ 149f14170

void __thiscall
FPCGComponentExecutionState::StoreOutputDataForPin
          (FPCGComponentExecutionState *this,FString *param_1,FPCGDataCollection *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (this->Component == (UPCGComponent *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Component",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\PCGComponent.cpp"
                       ,0x1228,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  UPCGComponent::StoreOutputDataForPin(this->Component,param_1,param_2);
  return;
}

// Use2DGrid @ 149f154c0

bool __thiscall FPCGComponentExecutionState::Use2DGrid(FPCGComponentExecutionState *this)

{
  UPCGGraphInstance *pUVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  UObject *pUVar5;
  UClass *this_00;
  
  if (this->Component == (UPCGComponent *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Component",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\PCGComponent.cpp"
                       ,0x11c8,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  pUVar1 = (this->Component->GraphInstance).field0_0x0.DebugPtr;
  if (pUVar1 != (UPCGGraphInstance *)0x0) {
    pUVar5 = (UObject *)(**(code **)(pUVar1->_padding_ + 0x2b8))();
    if (pUVar5 != (UObject *)0x0) goto LAB_149f15535;
  }
  this_00 = UPCGGraph::StaticClass();
  if ((this_00->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(this_00);
  }
  pUVar5 = (this_00->ClassDefaultObject).field0_0x0.DebugPtr;
LAB_149f15535:
  return (bool)pUVar5[2].field_0x1c;
}

