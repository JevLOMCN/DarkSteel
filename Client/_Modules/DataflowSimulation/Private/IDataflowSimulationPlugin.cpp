// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DataflowSimulation
// Functions: 2

// StartupModule @ 1462ed0c0

void __thiscall IDataflowSimulationPlugin::StartupModule(IDataflowSimulationPlugin *this)

{
  FDelegateHandle FVar1;
  FName local_res10 [3];
  
  UE::Dataflow::RegisterDataflowSimulationNodes();
  ::FName::FName(local_res10,"FDataflowSimulationNode");
  UE::Dataflow::RegisterNodeFilter(local_res10);
  ::FName::FName(local_res10,"FDataflowInvalidNode");
  UE::Dataflow::RegisterNodeFilter(local_res10);
  ::FName::FName(local_res10,"FDataflowExecutionNode");
  UE::Dataflow::RegisterNodeFilter(local_res10);
  FVar1 = TMulticastDelegateRegistration<void___cdecl(UWorld_*,enum_ELevelTick,float),FDefaultDelegateUserPolicy>
          ::AddLambda<_UDataflowSimulationManager::OnStartup_::__l2::<lambda_1>_>
                    (&FWorldDelegates::OnWorldPostActorTick,(<lambda_1> *)local_res10);
                    /* WARNING: Load size is inaccurate */
  UDataflowSimulationManager::OnWorldPostActorTick.ID = *FVar1.ID;
  FVar1 = TMulticastDelegateRegistration<void___cdecl(UActorComponent_*),FDefaultDelegateUserPolicy>
          ::AddLambda<_UDataflowSimulationManager::OnStartup_::__l2::<lambda_2>_>
                    ((TMulticastDelegateRegistration<void___cdecl(UActorComponent_*),FDefaultDelegateUserPolicy>
                      *)&UActorComponent::GlobalCreatePhysicsDelegate,(<lambda_2> *)local_res10);
                    /* WARNING: Load size is inaccurate */
  UDataflowSimulationManager::OnCreatePhysicsStateHandle.ID = *FVar1.ID;
  FVar1 = TMulticastDelegateRegistration<void___cdecl(UActorComponent_*),FDefaultDelegateUserPolicy>
          ::AddLambda<_UDataflowSimulationManager::OnStartup_::__l2::<lambda_3>_>
                    ((TMulticastDelegateRegistration<void___cdecl(UActorComponent_*),FDefaultDelegateUserPolicy>
                      *)&UActorComponent::GlobalDestroyPhysicsDelegate,(<lambda_3> *)local_res10);
                    /* WARNING: Load size is inaccurate */
  UDataflowSimulationManager::OnDestroyPhysicsStateHandle.ID = *FVar1.ID;
  return;
}

// ShutdownModule @ 1462ed190

void __thiscall IDataflowSimulationPlugin::ShutdownModule(IDataflowSimulationPlugin *this)

{
  if (UDataflowSimulationManager::OnWorldPostActorTick.ID != 0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &FWorldDelegates::OnWorldPostActorTick,
               UDataflowSimulationManager::OnWorldPostActorTick);
  }
  if (UDataflowSimulationManager::OnCreatePhysicsStateHandle.ID != 0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &UActorComponent::GlobalCreatePhysicsDelegate,
               UDataflowSimulationManager::OnCreatePhysicsStateHandle);
  }
  if (UDataflowSimulationManager::OnDestroyPhysicsStateHandle.ID != 0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &UActorComponent::GlobalDestroyPhysicsDelegate,
               UDataflowSimulationManager::OnDestroyPhysicsStateHandle);
    return;
  }
  return;
}

