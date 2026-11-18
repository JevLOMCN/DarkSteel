// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 19

// ~IPCGGraphExecutionState @ 149eef990

void __thiscall IPCGGraphExecutionState::~IPCGGraphExecutionState(IPCGGraphExecutionState *this)

{
  return;
}

// AddToManagedResources @ 149ef4e10

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
IPCGGraphExecutionState::AddToManagedResources
          (IPCGGraphExecutionState *this,UPCGManagedResource *param_1)

{
  void *local_18 [3];
  
  if (1 < (byte)LogPCG._0_1_) {
    (**(code **)((longlong)*this + 0x18))(this,local_18);
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
    if (local_18[0] != (void *)0x0) {
      FMemory::Free(local_18[0]);
    }
  }
  return;
}

// ExecutePreGraph @ 149efcbd0

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
IPCGGraphExecutionState::ExecutePreGraph(IPCGGraphExecutionState *this,FPCGContext *param_1)

{
  return;
}

// GenerateLocalGetTaskId @ 149efe400

/* WARNING: Enum "EPCGHiGenGrid": Some values do not have unique names */

ulong64 __thiscall
IPCGGraphExecutionState::GenerateLocalGetTaskId(IPCGGraphExecutionState *this,EPCGHiGenGrid param_1)

{
  return 0xffffffffffffffff;
}

// GetGenerationGridSize @ 149f00020

uint __thiscall IPCGGraphExecutionState::GetGenerationGridSize(IPCGGraphExecutionState *this)

{
  return 0;
}

// GetGenerationTaskId @ 149f00500

ulong64 __thiscall IPCGGraphExecutionState::GetGenerationTaskId(IPCGGraphExecutionState *this)

{
  return 0xffffffffffffffff;
}

// GetGridDescriptor @ 149f00de0

FPCGGridDescriptor * __thiscall
IPCGGraphExecutionState::GetGridDescriptor
          (IPCGGraphExecutionState *this,FPCGGridDescriptor *__return_storage_ptr__,uint param_1)

{
  bool bVar1;
  bool bVar2;
  
  bVar1 = (bool)(**(code **)((longlong)*this + 0xe8))();
  bVar2 = (bool)(**(code **)((longlong)*this + 0xe0))(this);
  __return_storage_ptr__->bIsRuntime = bVar2;
  __return_storage_ptr__->GridSize = param_1;
  __return_storage_ptr__->bIs2DGrid = bVar1;
  __return_storage_ptr__->RuntimeHash = 0;
  (__return_storage_ptr__->Hash).bIsSet = false;
  return __return_storage_ptr__;
}

// GetLocalSource @ 149f01e80

IPCGGraphExecutionSource * __thiscall
IPCGGraphExecutionState::GetLocalSource
          (IPCGGraphExecutionState *this,FPCGGridDescriptor *param_1,TIntVector3<int> *param_2)

{
  return (IPCGGraphExecutionSource *)0x0;
}

// GetLocalSpaceBounds @ 149f01ef0

TBox<double> * __thiscall
IPCGGraphExecutionState::GetLocalSpaceBounds
          (IPCGGraphExecutionState *this,TBox<double> *__return_storage_ptr__)

{
  (**(code **)((longlong)*this + 0x40))();
  return __return_storage_ptr__;
}

// GetOriginalBounds @ 149f027a0

TBox<double> * __thiscall
IPCGGraphExecutionState::GetOriginalBounds
          (IPCGGraphExecutionState *this,TBox<double> *__return_storage_ptr__)

{
  (**(code **)((longlong)*this + 0x40))();
  return __return_storage_ptr__;
}

// GetOriginalLocalSpaceBounds @ 149f02b90

TBox<double> * __thiscall
IPCGGraphExecutionState::GetOriginalLocalSpaceBounds
          (IPCGGraphExecutionState *this,TBox<double> *__return_storage_ptr__)

{
  (**(code **)((longlong)*this + 0x40))();
  return __return_storage_ptr__;
}

// GetOriginalTransform @ 149f02f70

TTransform<double> * __thiscall
IPCGGraphExecutionState::GetOriginalTransform
          (IPCGGraphExecutionState *this,TTransform<double> *__return_storage_ptr__)

{
  (**(code **)((longlong)*this + 0x30))();
  return __return_storage_ptr__;
}

// GetSubsystem @ 149f05700

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

IPCGBaseSubsystem * __thiscall IPCGGraphExecutionState::GetSubsystem(IPCGGraphExecutionState *this)

{
  UWorld *pUVar1;
  UPCGSubsystem *pUVar2;
  UPCGEngineSubsystem *pUVar3;
  IPCGBaseSubsystem *pIVar4;
  
  pUVar1 = (UWorld *)(**(code **)((longlong)*this + 0x20))();
  if (pUVar1 != (UWorld *)0x0) {
    pUVar2 = UPCGSubsystem::GetInstance(pUVar1);
    pIVar4 = (IPCGBaseSubsystem *)&pUVar2->_padding_;
    if (pUVar2 == (UPCGSubsystem *)0x0) {
      pIVar4 = (IPCGBaseSubsystem *)0x0;
    }
    return pIVar4;
  }
  pUVar3 = UPCGEngineSubsystem::Get();
  if (pUVar3 != (UPCGEngineSubsystem *)0x0) {
    return (IPCGBaseSubsystem *)&pUVar3->field_0x30;
  }
  return (IPCGBaseSubsystem *)0x0;
}

// IsLocalSource @ 149f080d0

bool __thiscall IPCGGraphExecutionState::IsLocalSource(IPCGGraphExecutionState *this)

{
  return false;
}

// IsManagedByRuntimeGenSystem @ 149f08130

bool __thiscall IPCGGraphExecutionState::IsManagedByRuntimeGenSystem(IPCGGraphExecutionState *this)

{
  return false;
}

// IsPartitioned @ 149f081d0

bool __thiscall IPCGGraphExecutionState::IsPartitioned(IPCGGraphExecutionState *this)

{
  return false;
}

// RetrieveOutputDataForPin @ 149f115e0

FPCGDataCollection * __thiscall
IPCGGraphExecutionState::RetrieveOutputDataForPin(IPCGGraphExecutionState *this,FString *param_1)

{
  return (FPCGDataCollection *)0x0;
}

// StoreOutputDataForPin @ 149f141e0

void __thiscall
IPCGGraphExecutionState::StoreOutputDataForPin
          (IPCGGraphExecutionState *this,FString *param_1,FPCGDataCollection *param_2)

{
  return;
}

// Use2DGrid @ 149f15550

bool __thiscall IPCGGraphExecutionState::Use2DGrid(IPCGGraphExecutionState *this)

{
  return false;
}

