// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DataflowSimulation
// Functions: 11

// ~IDataflowSimulationInterface @ 1462f2f30

void __thiscall
IDataflowSimulationInterface::~IDataflowSimulationInterface(IDataflowSimulationInterface *this)

{
  *this = (IDataflowSimulationInterface)&___7IDataflowSimulationInterface__6B_;
  return;
}

// GetSimulationType @ 1462f7980

FString * __thiscall
IDataflowSimulationInterface::GetSimulationType
          (IDataflowSimulationInterface *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"");
  return __return_storage_ptr__;
}

// IsInterfaceRegistered @ 1462f8a70

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
IDataflowSimulationInterface::IsInterfaceRegistered
          (IDataflowSimulationInterface *this,TObjectPtr<UWorld> *param_1)

{
  UObject *pUVar1;
  UDataflowSimulationManager *pUVar2;
  undefined8 *puVar3;
  FDataflowSimulationData *this_00;
  FString *pFVar4;
  TSet<IDataflowSimulationInterface_*,DefaultKeyFuncs<IDataflowSimulationInterface_*,0>,FDefaultSetAllocator>
  *this_01;
  IDataflowSimulationInterface **ppIVar5;
  UObject *local_res10;
  void *local_18 [2];
  
  if ((param_1->field0_0x0).DebugPtr != (UWorld *)0x0) {
    pUVar2 = UWorld::GetSubsystem<UDataflowSimulationManager>((param_1->field0_0x0).DebugPtr);
    if (pUVar2 != (UDataflowSimulationManager *)0x0) {
      if (this != (IDataflowSimulationInterface *)0x0) {
        puVar3 = (undefined8 *)(**(code **)((longlong)*this + 0x10))(this);
        pUVar1 = (UObject *)*puVar3;
        if (pUVar1 != (UObject *)0x0) {
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable(pUVar1);
            if (UE::GC::GIsIncrementalReachabilityPending != false) {
              UE::GC::MarkAsReachable(pUVar1);
            }
          }
          local_res10 = pUVar1;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable(pUVar1);
          }
          this_00 = TMapBase<TObjectPtr<UDataflow>,UE::Dataflow::Private::FDataflowSimulationData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UDataflow>,UE::Dataflow::Private::FDataflowSimulationData,0>_>
                    ::Find((TMapBase<TObjectPtr<UDataflow>,UE::Dataflow::Private::FDataflowSimulationData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UDataflow>,UE::Dataflow::Private::FDataflowSimulationData,0>_>
                            *)&pUVar2->SimulationData,(TObjectPtr<UDataflow_const_>)&local_res10);
          if (this_00 != (FDataflowSimulationData *)0x0) {
            pFVar4 = (FString *)(**(code **)((longlong)*this + 0x70))(this,local_18);
            this_01 = TMapBase<FString,TSet<IDataflowSimulationInterface_*,DefaultKeyFuncs<IDataflowSimulationInterface_*,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSet<IDataflowSimulationInterface_*,DefaultKeyFuncs<IDataflowSimulationInterface_*,0>,FDefaultSetAllocator>,0>_>
                      ::Find((TMapBase<FString,TSet<IDataflowSimulationInterface_*,DefaultKeyFuncs<IDataflowSimulationInterface_*,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSet<IDataflowSimulationInterface_*,DefaultKeyFuncs<IDataflowSimulationInterface_*,0>,FDefaultSetAllocator>,0>_>
                              *)this_00,pFVar4);
            if (local_18[0] != (void *)0x0) {
              FMemory::Free(local_18[0]);
            }
            if (this_01 !=
                (TSet<IDataflowSimulationInterface_*,DefaultKeyFuncs<IDataflowSimulationInterface_*,0>,FDefaultSetAllocator>
                 *)0x0) {
              ppIVar5 = TSet<IDataflowSimulationInterface_*,DefaultKeyFuncs<IDataflowSimulationInterface_*,0>,FDefaultSetAllocator>
                        ::Find(this_01,this);
              return ppIVar5 != (IDataflowSimulationInterface **)0x0;
            }
          }
        }
      }
      return false;
    }
  }
  return false;
}

// PostProcessSimulation @ 1462f8e90

void __thiscall
IDataflowSimulationInterface::PostProcessSimulation
          (IDataflowSimulationInterface *this,float param_1)

{
  return;
}

// PreProcessSimulation @ 1462f9550

void __thiscall
IDataflowSimulationInterface::PreProcessSimulation(IDataflowSimulationInterface *this,float param_1)

{
  return;
}

// ReadFromSimulation @ 1462f9d50

void __thiscall
IDataflowSimulationInterface::ReadFromSimulation
          (IDataflowSimulationInterface *this,float param_1,bool param_2)

{
  return;
}

// ReadRestartData @ 1462f9d70

void __thiscall IDataflowSimulationInterface::ReadRestartData(IDataflowSimulationInterface *this)

{
  return;
}

// RegisterManagerInterface @ 1462faf80

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
IDataflowSimulationInterface::RegisterManagerInterface
          (IDataflowSimulationInterface *this,TObjectPtr<UWorld> *param_1)

{
  UDataflowSimulationManager *this_00;
  
  if ((param_1->field0_0x0).DebugPtr != (UWorld *)0x0) {
    this_00 = UWorld::GetSubsystem<UDataflowSimulationManager>((param_1->field0_0x0).DebugPtr);
    if (this_00 != (UDataflowSimulationManager *)0x0) {
      UDataflowSimulationManager::AddSimulationInterface(this_00,this);
      return;
    }
  }
  return;
}

// UnregisterManagerInterface @ 1462fea40

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
IDataflowSimulationInterface::UnregisterManagerInterface
          (IDataflowSimulationInterface *this,TObjectPtr<UWorld> *param_1)

{
  UDataflowSimulationManager *this_00;
  
  if ((param_1->field0_0x0).DebugPtr != (UWorld *)0x0) {
    this_00 = UWorld::GetSubsystem<UDataflowSimulationManager>((param_1->field0_0x0).DebugPtr);
    if (this_00 != (UDataflowSimulationManager *)0x0) {
      UDataflowSimulationManager::RemoveSimulationInterface(this_00,this);
      return;
    }
  }
  return;
}

// WriteToSimulation @ 1462ff1f0

void __thiscall
IDataflowSimulationInterface::WriteToSimulation
          (IDataflowSimulationInterface *this,float param_1,bool param_2)

{
  return;
}

// _getUObject @ 1462ffd40

UObject * __thiscall IDataflowSimulationInterface::_getUObject(IDataflowSimulationInterface *this)

{
  return (UObject *)0x0;
}

