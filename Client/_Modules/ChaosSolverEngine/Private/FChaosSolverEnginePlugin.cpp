// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChaosSolverEngine
// Functions: 2

// StartupModule @ 1463000e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall FChaosSolverEnginePlugin::StartupModule(FChaosSolverEnginePlugin *this)

{
  code *pcVar1;
  bool bVar2;
  FChaosSolversModule *this_00;
  UClass *pUVar3;
  UClass *pUVar4;
  FDelegateHandle FVar5;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined1 local_18 [8];
  <lambda_1> local_10 [8];
  
  this_00 = FChaosSolversModule::GetModule();
  if (this_00 == (FChaosSolversModule *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ChaosModule",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\ChaosSolverEngine\\Private\\Chaos\\ChaosSolverEnginePlugin.cpp"
                       ,0x1b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  pUVar3 = AChaosSolverActor::StaticClass();
  pUVar4 = AChaosSolverActor::StaticClass();
  this_00->SolverActorClass = pUVar4;
  this_00->SolverActorRequiredBaseClass = pUVar3;
  bVar2 = FChaosSolversModule::IsValidSolverActorClass(this_00,pUVar4);
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValidSolverActorClass(SolverActorClass)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\ChaosSolversModule.h"
                       ,0xca,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TMulticastDelegateRegistration<void___cdecl(UWorld_*,FWorldInitializationValues),FDefaultDelegateUserPolicy>
  ::AddStatic<>((TMulticastDelegateRegistration<void___cdecl(UWorld_*,FWorldInitializationValues),FDefaultDelegateUserPolicy>
                 *)&FWorldDelegates::OnPostWorldInitialization,
                (_func___cdecl_void_UWorld_ptr_FWorldInitializationValues *)local_res18);
  if (4 < (byte)LogChaosDD._0_1_) {
    UE::Logging::Private::LogWithFields<UE::Logging::Private::FStaticLogRecord>
              ((FLogCategoryBase *)&LogChaosDD,&::LOG_Static);
  }
  FVar5 = TMulticastDelegateRegistration<void___cdecl(UWorld_*,enum_ELevelTick,float),FDefaultDelegateUserPolicy>
          ::AddStatic<>(&FWorldDelegates::OnWorldPreActorTick,
                        (_func___cdecl_void_UWorld_ptr_ELevelTick_float *)local_res20);
                    /* WARNING: Load size is inaccurate */
  UChaosDebugDrawSubsystem::OnTickWorldStartDelegate.ID = *FVar5.ID;
  FVar5 = TMulticastDelegateRegistration<void___cdecl(UWorld_*,enum_ELevelTick,float),FDefaultDelegateUserPolicy>
          ::AddStatic<>(&FWorldDelegates::OnWorldPostActorTick,
                        (_func___cdecl_void_UWorld_ptr_ELevelTick_float *)local_18);
                    /* WARNING: Load size is inaccurate */
  UChaosDebugDrawSubsystem::OnTickWorldEndDelegate.ID = *FVar5.ID;
  TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
  AddLambda<_FChaosSolverEnginePlugin::StartupModule_::__l2::<lambda_1>_>
            ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
             &FCoreDelegates::OnFEngineLoopInitComplete,local_10);
  return;
}

// ShutdownModule @ 146300210

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FChaosSolverEnginePlugin::ShutdownModule(FChaosSolverEnginePlugin *this)

{
  FChaosVDEngineEditorBridge *this_00;
  
  if (4 < (byte)LogChaosDD._0_1_) {
    UE::Logging::Private::LogWithFields<UE::Logging::Private::FStaticLogRecord>
              ((FLogCategoryBase *)&LogChaosDD,&::LOG_Static);
  }
  if (UChaosDebugDrawSubsystem::OnTickWorldStartDelegate.ID != 0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &FWorldDelegates::OnWorldPreActorTick,
               UChaosDebugDrawSubsystem::OnTickWorldStartDelegate);
  }
  if (UChaosDebugDrawSubsystem::OnTickWorldEndDelegate.ID != 0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &FWorldDelegates::OnWorldPostActorTick,
               UChaosDebugDrawSubsystem::OnTickWorldEndDelegate);
  }
  this_00 = FChaosVDEngineEditorBridge::Get();
  FChaosVDEngineEditorBridge::TearDown(this_00);
  return;
}

