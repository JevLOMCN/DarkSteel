// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AnimationSharing
// Functions: 137

// OnAnimationSharingManagerCreated'' @ 141417740

void __cdecl `dynamic_initializer_for_'FAnimSharingModule::OnAnimationSharingManagerCreated__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FAnimSharingModule::OnAnimationSharingManagerCreated__);
  return;
}

// OnAnimationSharingManagerSetupAdded'' @ 141417760

void __cdecl
`dynamic_initializer_for_'FAnimSharingModule::OnAnimationSharingManagerSetupAdded__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FAnimSharingModule::OnAnimationSharingManagerSetupAdded__);
  return;
}

// WorldAnimSharingManagers'' @ 141417780

void __cdecl `dynamic_initializer_for_'FAnimSharingModule::WorldAnimSharingManagers__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FAnimSharingModule::WorldAnimSharingManagers__);
  return;
}

// `dynamic_initializer_for_'CVarAnimSharing_DebugStates'' @ 1414177a0

void __cdecl _dynamic_initializer_for__CVarAnimSharing_DebugStates__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarAnimSharing_DebugStates,L"a.Sharing.DebugStates",&GAnimationSharingDebugging,
             L"Values: 0/1/2/3\nControls whether and which animation sharing debug features are enabled.\n0: Turned off.\n1: Turns on active leader-components and blend with material coloring, and printing state information for each actor above their capsule.\n2: Turns printing state information about currently active animation states, blend etc. Also enables line drawing from follower-components to currently assigned leader components.\n3: Enable printing of extra state info, including currently playing animations (for anim blueprints this will only be the first relevant anim player on graph \'AnimGraph\')."
             ,1);
  atexit(_dynamic_atexit_destructor_for__CVarAnimSharing_DebugStates__);
  return;
}

// `dynamic_initializer_for_'CVarAnimSharing_DisableDebugMaterials'' @ 1414177f0

void __cdecl _dynamic_initializer_for__CVarAnimSharing_DisableDebugMaterials__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarAnimSharing_DisableDebugMaterials,L"a.Sharing.DisableDebugMaterials",
             &GAnimationSharingDisableDebugMaterials,
             L"Values: 0/1\nControls whether material coloring should be disabled when anim sharing debug is enabled.\n"
             ,1);
  atexit(_dynamic_atexit_destructor_for__CVarAnimSharing_DisableDebugMaterials__);
  return;
}

// `dynamic_initializer_for_'CVarAnimSharing_Enabled'' @ 141417840

void __cdecl _dynamic_initializer_for__CVarAnimSharing_Enabled__(void)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  IConsoleObject *pIVar5;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_58;
  FDelegateAllocation local_50;
  FDestructionSentinel local_40;
  FDestructionSentinel local_28;
  FDelegateAllocation *local_10;
  
  local_58.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_50.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_50.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_58,(FWriteAccessScope *)&local_28);
  local_10 = &local_50;
  puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_50);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA_____PEAVUWorld___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*),FDefaultDelegateUserPolicy,<lambda_24>_>
               ::_vftable_;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
    IConsoleManager::SetupSingleton();
    if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
      bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("Singleton != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x4fb,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  pIVar5 = (IConsoleObject *)
           (**(code **)((longlong)*IConsoleManager::Singleton + 0x90))
                     (IConsoleManager::Singleton,L"a.Sharing.Enabled",
                      L"Arguments: 0/1\nControls whether the animation sharing is enabled.",
                      &local_58,1);
  FAutoConsoleObject::FAutoConsoleObject((FAutoConsoleObject *)&CVarAnimSharing_Enabled,pIVar5);
  CVarAnimSharing_Enabled._0_8_ = &___7FAutoConsoleCommandWithWorldAndArgs__6B_;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_58,(FWriteAccessScope *)&local_40);
  if ((local_50.DelegateSize != 0) &&
     (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_50.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_50,0,0,0x10);
    local_50.DelegateSize = 0;
  }
  if (local_40.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
  }
  if (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_50.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_58.AccessDetector);
  atexit(_dynamic_atexit_destructor_for__CVarAnimSharing_Enabled__);
  return;
}

// `dynamic_initializer_for_'CVarAnimSharing_FontScale'' @ 1414179d0

void __cdecl _dynamic_initializer_for__CVarAnimSharing_FontScale__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarAnimSharing_FontScale,L"a.Sharing.DebugFontScale",&GAnimationSharingDebugFontScale
             ,L"Scale of font used for anim sharing debug.\n",1);
  atexit(_dynamic_atexit_destructor_for__CVarAnimSharing_FontScale__);
  return;
}

// `dynamic_initializer_for_'CVarAnimSharing_ToggleVisibility'' @ 141417a20

void __cdecl _dynamic_initializer_for__CVarAnimSharing_ToggleVisibility__(void)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  IConsoleObject *pIVar5;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_58;
  FDelegateAllocation local_50;
  FDestructionSentinel local_40;
  FDestructionSentinel local_28;
  FDelegateAllocation *local_10;
  
  local_58.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_50.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_50.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_58,(FWriteAccessScope *)&local_28);
  local_10 = &local_50;
  puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_50);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA_____PEAVUWorld___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*),FDefaultDelegateUserPolicy,<lambda_25>_>
               ::_vftable_;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
    IConsoleManager::SetupSingleton();
    if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
      bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("Singleton != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x4fb,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  pIVar5 = (IConsoleObject *)
           (**(code **)((longlong)*IConsoleManager::Singleton + 0x90))
                     (IConsoleManager::Singleton,L"a.Sharing.ToggleVisibility",
                      L"Toggles the visibility of the Leader Pose Components.",&local_58,1);
  FAutoConsoleObject::FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarAnimSharing_ToggleVisibility,pIVar5);
  CVarAnimSharing_ToggleVisibility._0_8_ = &___7FAutoConsoleCommandWithWorldAndArgs__6B_;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_58,(FWriteAccessScope *)&local_40);
  if ((local_50.DelegateSize != 0) &&
     (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_50.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_50,0,0,0x10);
    local_50.DelegateSize = 0;
  }
  if (local_40.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
  }
  if (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_50.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_58.AccessDetector);
  atexit(_dynamic_atexit_destructor_for__CVarAnimSharing_ToggleVisibility__);
  return;
}

// `dynamic_initializer_for_'LogAnimationSharing'' @ 141417bb0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogAnimationSharing__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogAnimationSharing,L"LogAnimationSharing",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogAnimationSharing__);
  return;
}

// `dynamic_initializer_for_'ModuleRegistrantAnimationSharing'' @ 141417bf0

void __cdecl _dynamic_initializer_for__ModuleRegistrantAnimationSharing__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "AnimationSharing";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"AnimationSharing",0x10);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,FStaticallyLinkedModuleRegistrant<FAnimSharingModule>::InitializeModule);
  return;
}

// `dynamic_initializer_for_'NAME_UAnimationSharingStateProcessor_GetAnimationStateEnum'' @ 141417c40

void __cdecl
_dynamic_initializer_for__NAME_UAnimationSharingStateProcessor_GetAnimationStateEnum__(void)

{
  FName::FName(&NAME_UAnimationSharingStateProcessor_GetAnimationStateEnum,L"GetAnimationStateEnum")
  ;
  return;
}

// `dynamic_initializer_for_'NAME_UAnimationSharingStateProcessor_ProcessActorState'' @ 141417c60

void __cdecl
_dynamic_initializer_for__NAME_UAnimationSharingStateProcessor_ProcessActorState__(void)

{
  FName::FName(&NAME_UAnimationSharingStateProcessor_ProcessActorState,L"ProcessActorState");
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_AnimationSharing_KickoffInstances'' @ 141417c80

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_AnimationSharing_KickoffInstances__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_AnimationSharing_KickoffInstances ==
      (FThreadSafeStaticStat<FStat_STAT_AnimationSharing_KickoffInstances>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_AnimationSharing_KickoffInstances");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AnimationSharing_KickoffInstances,*pFVar1,
               L"KickoffInstances","STATGROUP_AnimationSharing","STATCAT_Advanced",
               L"Animation Sharing Manager",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_AnimationSharing_NumActors'' @ 141417d10

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_AnimationSharing_NumActors__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_AnimationSharing_NumActors ==
      (FThreadSafeStaticStat<FStat_STAT_AnimationSharing_NumActors>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_AnimationSharing_NumActors");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AnimationSharing_NumActors,*pFVar1,
               L"NumActors","STATGROUP_AnimationSharing","STATCAT_Advanced",
               L"Animation Sharing Manager",true,true,ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_AnimationSharing_NumBlends'' @ 141417da0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_AnimationSharing_NumBlends__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_AnimationSharing_NumBlends ==
      (FThreadSafeStaticStat<FStat_STAT_AnimationSharing_NumBlends>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_AnimationSharing_NumBlends");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AnimationSharing_NumBlends,*pFVar1,
               L"NumBlends","STATGROUP_AnimationSharing","STATCAT_Advanced",
               L"Animation Sharing Manager",true,true,ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_AnimationSharing_NumComponent'' @ 141417e30

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_AnimationSharing_NumComponent__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_AnimationSharing_NumComponent ==
      (FThreadSafeStaticStat<FStat_STAT_AnimationSharing_NumComponent>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_AnimationSharing_NumComponent");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AnimationSharing_NumComponent,*pFVar1,
               L"NumComponent","STATGROUP_AnimationSharing","STATCAT_Advanced",
               L"Animation Sharing Manager",true,true,ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_AnimationSharing_NumOnDemands'' @ 141417ec0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_AnimationSharing_NumOnDemands__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_AnimationSharing_NumOnDemands ==
      (FThreadSafeStaticStat<FStat_STAT_AnimationSharing_NumOnDemands>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_AnimationSharing_NumOnDemands");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AnimationSharing_NumOnDemands,*pFVar1,
               L"NumOnDemands","STATGROUP_AnimationSharing","STATCAT_Advanced",
               L"Animation Sharing Manager",true,true,ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_AnimationSharing_Tick'' @ 141417f50

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_AnimationSharing_Tick__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_AnimationSharing_Tick ==
      (FThreadSafeStaticStat<FStat_STAT_AnimationSharing_Tick>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_AnimationSharing_Tick");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AnimationSharing_Tick,*pFVar1,L"Tick",
               "STATGROUP_AnimationSharing","STATCAT_Advanced",L"Animation Sharing Manager",true,
               true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_AnimationSharing_TickActorStates'' @ 141417fe0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_AnimationSharing_TickActorStates__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_AnimationSharing_TickActorStates ==
      (FThreadSafeStaticStat<FStat_STAT_AnimationSharing_TickActorStates>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_AnimationSharing_TickActorStates");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AnimationSharing_TickActorStates,*pFVar1,
               L"TickActorStates","STATGROUP_AnimationSharing","STATCAT_Advanced",
               L"Animation Sharing Manager",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_AnimationSharing_UpdateAdditives'' @ 141418070

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_AnimationSharing_UpdateAdditives__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_AnimationSharing_UpdateAdditives ==
      (FThreadSafeStaticStat<FStat_STAT_AnimationSharing_UpdateAdditives>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_AnimationSharing_UpdateAdditives");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AnimationSharing_UpdateAdditives,*pFVar1,
               L"UpdateAdditives","STATGROUP_AnimationSharing","STATCAT_Advanced",
               L"Animation Sharing Manager",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_AnimationSharing_UpdateBlends'' @ 141418100

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_AnimationSharing_UpdateBlends__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_AnimationSharing_UpdateBlends ==
      (FThreadSafeStaticStat<FStat_STAT_AnimationSharing_UpdateBlends>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_AnimationSharing_UpdateBlends");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AnimationSharing_UpdateBlends,*pFVar1,
               L"UpdateBlends","STATGROUP_AnimationSharing","STATCAT_Advanced",
               L"Animation Sharing Manager",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_AnimationSharing_UpdateOnDemands'' @ 141418190

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_AnimationSharing_UpdateOnDemands__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_AnimationSharing_UpdateOnDemands ==
      (FThreadSafeStaticStat<FStat_STAT_AnimationSharing_UpdateOnDemands>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_AnimationSharing_UpdateOnDemands");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AnimationSharing_UpdateOnDemands,*pFVar1,
               L"UpdateOnDemands","STATGROUP_AnimationSharing","STATCAT_Advanced",
               L"Animation Sharing Manager",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_AnimationSharing_Source_AnimationSharing_Public_AnimationSharingInstances_h__Script_AnimationSharing_3819410262'' @ 141418220

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_AnimationSharing_Source_AnimationSharing_Public_AnimationSharingInstances_h__Script_AnimationSharing_3819410262__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/AnimationSharing",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_AnimationSharing_Source_AnimationSharing_Public_AnimationSharingInstances_h__Script_AnimationSharing_Statics
             ::ClassInfo,3,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_AnimationSharing_Source_AnimationSharing_Public_AnimationSharingManager_h__Script_AnimationSharing_4281784302'' @ 141418260

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_AnimationSharing_Source_AnimationSharing_Public_AnimationSharingManager_h__Script_AnimationSharing_4281784302__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/AnimationSharing",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_AnimationSharing_Source_AnimationSharing_Public_AnimationSharingManager_h__Script_AnimationSharing_Statics
             ::ClassInfo,2,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_AnimationSharing_Source_AnimationSharing_Public_AnimationSharingManager_h__Script_AnimationSharing_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_AnimationSharing_Source_AnimationSharing_Public_AnimationSharingSetup_h__Script_AnimationSharing_992394325'' @ 1414182b0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_AnimationSharing_Source_AnimationSharing_Public_AnimationSharingSetup_h__Script_AnimationSharing_992394325__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/AnimationSharing",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_AnimationSharing_Source_AnimationSharing_Public_AnimationSharingSetup_h__Script_AnimationSharing_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_AnimationSharing_Source_AnimationSharing_Public_AnimationSharingTypes_h__Script_AnimationSharing_2165200655'' @ 1414182f0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_AnimationSharing_Source_AnimationSharing_Public_AnimationSharingTypes_h__Script_AnimationSharing_2165200655__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/AnimationSharing",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_AnimationSharing_Source_AnimationSharing_Public_AnimationSharingTypes_h__Script_AnimationSharing_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_AnimationSharing_Source_AnimationSharing_Public_AnimationSharingTypes_h__Script_AnimationSharing_Statics
             ::ScriptStructInfo,4,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferPackage_UPackage__Script_AnimationSharing'' @ 141418340

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferPackage_UPackage__Script_AnimationSharing__(void)

{
  FPackageReloadVersionInfo local_res8 [4];
  
  local_res8[0].BodyHash = 0xedd2c9da;
  local_res8[0].DeclarationsHash = 0x8d9be7be;
  RegisterCompiledInInfo
            (Z_Construct_UPackage__Script_AnimationSharing,L"/Script/AnimationSharing",
             &Z_Registration_Info_UPackage__Script_AnimationSharing,local_res8);
  return;
}

// Z_Construct_UClass_UAnimationSharingSetup_NoRegister @ 14e2a6f20

UClass * __cdecl Z_Construct_UClass_UAnimationSharingSetup_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAnimationSharingSetup.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AnimationSharing",L"AnimationSharingSetup",
               &Z_Registration_Info_UClass_UAnimationSharingSetup.InnerSingleton,
               UAnimationSharingSetup::StaticRegisterNativesUAnimationSharingSetup,0x48,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UAnimationSharingSetup>,
               InternalVTableHelperCtorCaller<UAnimationSharingSetup>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAnimationSharingSetup.InnerSingleton;
}

// Z_Construct_UClass_UAnimationSharingManager @ 14e2a70f0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UAnimationSharingManager(void)

{
  if (Z_Registration_Info_UClass_UAnimationSharingManager.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UAnimationSharingManager.OuterSingleton,
               &Z_Construct_UClass_UAnimationSharingManager_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UAnimationSharingManager.OuterSingleton;
}

// Z_Construct_UClass_UAnimSharingInstance @ 14e2a7130

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UAnimSharingInstance(void)

{
  if (Z_Registration_Info_UClass_UAnimSharingInstance.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UAnimSharingInstance.OuterSingleton,
               &Z_Construct_UClass_UAnimSharingInstance_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UAnimSharingInstance.OuterSingleton;
}

// `vector_deleting_destructor'`adjustor{8}' @ 14e2a7168

/* [thunk]:public: virtual void * __ptr64 __cdecl FAnimSharingModule::`vector deleting
   destructor'`adjustor{8}' (unsigned int) __ptr64 */

void * __thiscall
FAnimSharingModule::_vector_deleting_destructor__adjustor_8__(FAnimSharingModule *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((FAnimSharingModule *)&this[-1].field_0x10,param_1);
  return pvVar1;
}

// NewStructOps @ 14e2a7180

void * __cdecl Z_Construct_UScriptStruct_FTickAnimationSharingFunction_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x30;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FTickAnimationSharingFunction,&UE::CoreUObject::Private::Construct<FTickAnimationSharingFunction>,&UE::CoreUObject::Private::ConstructForTests<FTickAnimationSharingFunction>,&UE::CoreUObject::Private::Destruct<FTickAnimationSharingFunction>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UPackage__Script_AnimationSharing @ 14e2a71c0

UPackage * __cdecl Z_Construct_UPackage__Script_AnimationSharing(void)

{
  if (Z_Registration_Info_UPackage__Script_AnimationSharing.OuterSingleton == (UPackage *)0x0) {
    UECodeGen_Private::ConstructUPackage
              (&Z_Registration_Info_UPackage__Script_AnimationSharing.OuterSingleton,&PackageParams)
    ;
  }
  return Z_Registration_Info_UPackage__Script_AnimationSharing.OuterSingleton;
}

// Z_Construct_UClass_UAnimationSharingStateProcessor_NoRegister @ 14e2a7200

UClass * __cdecl Z_Construct_UClass_UAnimationSharingStateProcessor_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAnimationSharingStateProcessor.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AnimationSharing",L"AnimationSharingStateProcessor",
               &Z_Registration_Info_UClass_UAnimationSharingStateProcessor.InnerSingleton,
               UAnimationSharingStateProcessor::StaticRegisterNativesUAnimationSharingStateProcessor
               ,0x50,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UAnimationSharingStateProcessor>,
               InternalVTableHelperCtorCaller<UAnimationSharingStateProcessor>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAnimationSharingStateProcessor.InnerSingleton;
}

// NewProp_ReturnValue_SetBit @ 14e2a72f0

void __cdecl
Z_Construct_UFunction_UAnimationSharingManager_AnimationSharingEnabled_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UAnimationSharingManager_AnimationSharingEnabled @ 14e2a7300

UFunction * __cdecl Z_Construct_UFunction_UAnimationSharingManager_AnimationSharingEnabled(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAnimationSharingManager_AnimationSharingEnabled_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 14e2a7380

void __cdecl
Z_Construct_UFunction_UAnimationSharingManager_CreateAnimationSharingManager_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x10) = 1;
  return;
}

// Z_Construct_UFunction_UAnimationSharingManager_CreateAnimationSharingManager @ 14e2a7390

UFunction * __cdecl
Z_Construct_UFunction_UAnimationSharingManager_CreateAnimationSharingManager(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAnimationSharingManager_CreateAnimationSharingManager_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UAnimationSharingManager_GetAnimationSharingManager @ 14e2a73d0

UFunction * __cdecl Z_Construct_UFunction_UAnimationSharingManager_GetAnimationSharingManager(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAnimationSharingManager_GetAnimationSharingManager_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UAnimationSharingManager_RegisterActorWithSkeletonBP @ 14e2a7410

UFunction * __cdecl Z_Construct_UFunction_UAnimationSharingManager_RegisterActorWithSkeletonBP(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAnimationSharingManager_RegisterActorWithSkeletonBP_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UAnimationSharingStateProcessor @ 14e2a7580

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UAnimationSharingStateProcessor(void)

{
  if (Z_Registration_Info_UClass_UAnimationSharingStateProcessor.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UAnimationSharingStateProcessor.OuterSingleton,
               &Z_Construct_UClass_UAnimationSharingStateProcessor_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UAnimationSharingStateProcessor.OuterSingleton;
}

// Z_Construct_UClass_UAnimSharingAdditiveInstance_NoRegister @ 14e2a75c0

UClass * __cdecl Z_Construct_UClass_UAnimSharingAdditiveInstance_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAnimSharingAdditiveInstance.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UAnimInstance::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AnimationSharing",L"AnimSharingAdditiveInstance",
               &Z_Registration_Info_UClass_UAnimSharingAdditiveInstance.InnerSingleton,
               UAnimSharingAdditiveInstance::StaticRegisterNativesUAnimSharingAdditiveInstance,0x440
               ,0x10,CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UAnimSharingAdditiveInstance>,
               InternalVTableHelperCtorCaller<UAnimSharingAdditiveInstance>,local_res8,
               UAnimInstance::StaticClass,USkeletalMeshComponent::StaticClass);
  }
  return Z_Registration_Info_UClass_UAnimSharingAdditiveInstance.InnerSingleton;
}

// Z_Construct_UClass_UAnimSharingStateInstance_NoRegister @ 14e2a7680

UClass * __cdecl Z_Construct_UClass_UAnimSharingStateInstance_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAnimSharingStateInstance.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UAnimInstance::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AnimationSharing",L"AnimSharingStateInstance",
               &Z_Registration_Info_UClass_UAnimSharingStateInstance.InnerSingleton,
               UAnimSharingStateInstance::StaticRegisterNativesUAnimSharingStateInstance,0x450,0x10,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UAnimSharingStateInstance>,
               InternalVTableHelperCtorCaller<UAnimSharingStateInstance>,local_res8,
               UAnimInstance::StaticClass,USkeletalMeshComponent::StaticClass);
  }
  return Z_Registration_Info_UClass_UAnimSharingStateInstance.InnerSingleton;
}

// Z_Construct_UClass_UAnimSharingTransitionInstance_NoRegister @ 14e2a7740

UClass * __cdecl Z_Construct_UClass_UAnimSharingTransitionInstance_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAnimSharingTransitionInstance.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UAnimInstance::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AnimationSharing",L"AnimSharingTransitionInstance",
               &Z_Registration_Info_UClass_UAnimSharingTransitionInstance.InnerSingleton,
               UAnimSharingTransitionInstance::StaticRegisterNativesUAnimSharingTransitionInstance,
               0x440,0x10,CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UAnimSharingTransitionInstance>,
               InternalVTableHelperCtorCaller<UAnimSharingTransitionInstance>,local_res8,
               UAnimInstance::StaticClass,USkeletalMeshComponent::StaticClass);
  }
  return Z_Registration_Info_UClass_UAnimSharingTransitionInstance.InnerSingleton;
}

// Z_Construct_UScriptStruct_FAnimationSetup @ 14e2a7800

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FAnimationSetup(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FAnimationSetup.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FAnimationSetup.InnerSingleton,
               &Z_Construct_UScriptStruct_FAnimationSetup_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FAnimationSetup.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FAnimationSetup.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// Z_Construct_UScriptStruct_FAnimationSharingScalability @ 14e2a7880

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FAnimationSharingScalability(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FAnimationSharingScalability.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FAnimationSharingScalability.InnerSingleton,
               &Z_Construct_UScriptStruct_FAnimationSharingScalability_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FAnimationSharingScalability.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FAnimationSharingScalability.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// Z_Construct_UScriptStruct_FAnimationStateEntry @ 14e2a7900

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FAnimationStateEntry(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FAnimationStateEntry.InnerSingleton == (UScriptStruct *)0x0)
  {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FAnimationStateEntry.InnerSingleton,
               &Z_Construct_UScriptStruct_FAnimationStateEntry_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FAnimationStateEntry.InnerSingleton != (UScriptStruct *)0x0)
  {
    return Z_Registration_Info_UScriptStruct_FAnimationStateEntry.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// Z_Construct_UScriptStruct_FPerSkeletonAnimationSharingSetup @ 14e2a7980

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FPerSkeletonAnimationSharingSetup(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FPerSkeletonAnimationSharingSetup.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FPerSkeletonAnimationSharingSetup.InnerSingleton,
               &Z_Construct_UScriptStruct_FPerSkeletonAnimationSharingSetup_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FPerSkeletonAnimationSharingSetup.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FPerSkeletonAnimationSharingSetup.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// NewStructOps @ 14e2a7a00

void * __cdecl Z_Construct_UScriptStruct_FAnimationSetup_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x18;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FAnimationSetup,&UE::CoreUObject::Private::Construct<FAnimationSetup>,&UE::CoreUObject::Private::ConstructForTests<FAnimationSetup>,&UE::CoreUObject::Private::Destruct<FAnimationSetup>,&UE::CoreUObject::Private::Copy<FAnimationSetup>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_bOnDemand_SetBit @ 14e2a7a40

void __cdecl
Z_Construct_UScriptStruct_FAnimationStateEntry_Statics::NewProp_bOnDemand_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x18) = 1;
  return;
}

// NewProp_bAdditive_SetBit @ 14e2a7a50

void __cdecl
Z_Construct_UScriptStruct_FAnimationStateEntry_Statics::NewProp_bAdditive_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x19) = 1;
  return;
}

// NewProp_bReturnToPreviousState_SetBit @ 14e2a7a60

void __cdecl
Z_Construct_UScriptStruct_FAnimationStateEntry_Statics::NewProp_bReturnToPreviousState_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x20) = 1;
  return;
}

// NewProp_bSetNextState_SetBit @ 14e2a7a70

void __cdecl
Z_Construct_UScriptStruct_FAnimationStateEntry_Statics::NewProp_bSetNextState_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x21) = 1;
  return;
}

// NewProp_bRequiresCurves_SetBit @ 14e2a7a80

void __cdecl
Z_Construct_UScriptStruct_FAnimationStateEntry_Statics::NewProp_bRequiresCurves_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x2c) = 1;
  return;
}

// NewStructOps @ 14e2a7a90

void * __cdecl Z_Construct_UScriptStruct_FAnimationStateEntry_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x30;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FAnimationStateEntry,&UE::CoreUObject::Private::Construct<FAnimationStateEntry>,&UE::CoreUObject::Private::ConstructForTests<FAnimationStateEntry>,&UE::CoreUObject::Private::Destruct<FAnimationStateEntry>,&UE::CoreUObject::Private::Copy<FAnimationStateEntry>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UAnimationSharingStateProcessor_GetAnimationStateEnum @ 14e2a7bc0

UFunction * __cdecl
Z_Construct_UFunction_UAnimationSharingStateProcessor_GetAnimationStateEnum(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAnimationSharingStateProcessor_GetAnimationStateEnum_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bShouldProcess_SetBit @ 14e2a7c00

void __cdecl
Z_Construct_UFunction_UAnimationSharingStateProcessor_ProcessActorState_Statics::
NewProp_bShouldProcess_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x12) = 1;
  return;
}

// Z_Construct_UFunction_UAnimationSharingStateProcessor_ProcessActorState @ 14e2a7c10

UFunction * __cdecl Z_Construct_UFunction_UAnimationSharingStateProcessor_ProcessActorState(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAnimationSharingStateProcessor_ProcessActorState_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bEnableMaterialParameterCaching_SetBit @ 14e2a7cd0

void __cdecl
Z_Construct_UScriptStruct_FPerSkeletonAnimationSharingSetup_Statics::
NewProp_bEnableMaterialParameterCaching_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x28) = 1;
  return;
}

// NewStructOps @ 14e2a7ce0

void * __cdecl
Z_Construct_UScriptStruct_FPerSkeletonAnimationSharingSetup_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x40;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FPerSkeletonAnimationSharingSetup,&UE::CoreUObject::Private::Construct<FPerSkeletonAnimationSharingSetup>,&UE::CoreUObject::Private::ConstructForTests<FPerSkeletonAnimationSharingSetup>,&UE::CoreUObject::Private::Destruct<FPerSkeletonAnimationSharingSetup>,&UE::CoreUObject::Private::Copy<FPerSkeletonAnimationSharingSetup>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14e2a7d20

void * __cdecl Z_Construct_UScriptStruct_FAnimationSharingScalability_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FAnimationSharingScalability,&UE::CoreUObject::Private::Construct<FAnimationSharingScalability>,&UE::CoreUObject::Private::ConstructForTests<FAnimationSharingScalability>,&UE::CoreUObject::Private::Destruct<FAnimationSharingScalability>,&UE::CoreUObject::Private::Copy<FAnimationSharingScalability>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UAnimSharingInstance_NoRegister @ 14e2a83a0

UClass * __cdecl Z_Construct_UClass_UAnimSharingInstance_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAnimSharingInstance.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AnimationSharing",L"AnimSharingInstance",
               &Z_Registration_Info_UClass_UAnimSharingInstance.InnerSingleton,
               UAnimSharingInstance::StaticRegisterNativesUAnimSharingInstance,0x130,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",InternalConstructor<UAnimSharingInstance>,
               InternalVTableHelperCtorCaller<UAnimSharingInstance>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAnimSharingInstance.InnerSingleton;
}

// Z_Construct_UClass_UAnimationSharingManager_NoRegister @ 14e2a8450

UClass * __cdecl Z_Construct_UClass_UAnimationSharingManager_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAnimationSharingManager.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AnimationSharing",L"AnimationSharingManager",
               &Z_Registration_Info_UClass_UAnimationSharingManager.InnerSingleton,
               UAnimationSharingManager::StaticRegisterNativesUAnimationSharingManager,0xf0,8,
               CLASS_Intrinsic|CLASS_DefaultConfig,CASTCLASS_None,L"Engine",
               InternalConstructor<UAnimationSharingManager>,
               InternalVTableHelperCtorCaller<UAnimationSharingManager>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAnimationSharingManager.InnerSingleton;
}

// Z_Construct_UClass_UAnimationSharingSetup @ 14e2a8500

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UAnimationSharingSetup(void)

{
  if (Z_Registration_Info_UClass_UAnimationSharingSetup.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UAnimationSharingSetup.OuterSingleton,
               &Z_Construct_UClass_UAnimationSharingSetup_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UAnimationSharingSetup.OuterSingleton;
}

// `scalar_deleting_destructor' @ 14e2a8830

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*),FDefaultDelegateUserPolicy,<lambda_24>_>
::_scalar_deleting_destructor_
          (TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*),FDefaultDelegateUserPolicy,<lambda_24>_>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e2a8b20

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*),FDefaultDelegateUserPolicy,<lambda_25>_>
::_scalar_deleting_destructor_
          (TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*),FDefaultDelegateUserPolicy,<lambda_25>_>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// Z_Construct_UClass_UAnimSharingAdditiveInstance @ 14e2a8c00

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UAnimSharingAdditiveInstance(void)

{
  if (Z_Registration_Info_UClass_UAnimSharingAdditiveInstance.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UAnimSharingAdditiveInstance.OuterSingleton,
               &Z_Construct_UClass_UAnimSharingAdditiveInstance_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UAnimSharingAdditiveInstance.OuterSingleton;
}

// Z_Construct_UClass_UAnimSharingStateInstance @ 14e2a8c40

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UAnimSharingStateInstance(void)

{
  if (Z_Registration_Info_UClass_UAnimSharingStateInstance.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UAnimSharingStateInstance.OuterSingleton,
               &Z_Construct_UClass_UAnimSharingStateInstance_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UAnimSharingStateInstance.OuterSingleton;
}

// Z_Construct_UClass_UAnimSharingTransitionInstance @ 14e2a8c80

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UAnimSharingTransitionInstance(void)

{
  if (Z_Registration_Info_UClass_UAnimSharingTransitionInstance.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UAnimSharingTransitionInstance.OuterSingleton,
               &Z_Construct_UClass_UAnimSharingTransitionInstance_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UAnimSharingTransitionInstance.OuterSingleton;
}

// Z_Construct_UFunction_UAnimSharingStateInstance_GetInstancedActors @ 14e2a8cc0

UFunction * __cdecl Z_Construct_UFunction_UAnimSharingStateInstance_GetInstancedActors(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAnimSharingStateInstance_GetInstancedActors_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bStateBool_SetBit @ 14e2a8d00

void __cdecl
Z_Construct_UClass_UAnimSharingStateInstance_Statics::NewProp_bStateBool_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x438) = 1;
  return;
}

// NewProp_bBlendBool_SetBit @ 14e2a8d10

void __cdecl
Z_Construct_UClass_UAnimSharingTransitionInstance_Statics::NewProp_bBlendBool_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x43c) = 1;
  return;
}

// NewProp_bStateBool_SetBit @ 14e2a8d20

void __cdecl
Z_Construct_UClass_UAnimSharingAdditiveInstance_Statics::NewProp_bStateBool_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x43c) = 1;
  return;
}

// `scalar_deleting_destructor' @ 14e2a8fe0

void * __thiscall
FAnimSharingModule::_scalar_deleting_destructor_(FAnimSharingModule *this,uint param_1)

{
  *(undefined ***)&this->field_0x8 = &___7FGCObject__6B_;
  FGCObject::UnregisterGCObject((FGCObject *)&this->field_0x8);
  *(undefined ***)this = IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// CastChecked<USignificanceManager,USignificanceManager> @ 14e2a9040

USignificanceManager * __cdecl
CastChecked<USignificanceManager,USignificanceManager>(USignificanceManager *param_1,Type param_2)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_18;
  
  if (param_1 != (USignificanceManager *)0x0) {
    return param_1;
  }
  if (param_2 != NullChecked) {
    return (USignificanceManager *)0x0;
  }
  pFVar1 = GetTypeName<USignificanceManager>(&local_18);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// ConstructItems<FAnimationSetup,FAnimationSetup,int> @ 14e2a9090

/* WARNING: Type propagation algorithm not settling */

void __cdecl
ConstructItems<FAnimationSetup,FAnimationSetup,int>
          (void *param_1,FAnimationSetup *param_2,int param_3)

{
  FPerPlatformBool *pFVar1;
  UObject *pUVar2;
  TObjectPtr<UClass>_u_0 TVar3;
  int *piVar4;
  FPerPlatformInt *pFVar5;
  
  if (param_3 != 0) {
    piVar4 = (int *)((longlong)param_1 + 0x10);
    pFVar5 = &param_2->NumRandomizedInstances;
    do {
      pUVar2 = *(UObject **)((longlong)piVar4 + (longlong)param_2 + (-0x10 - (longlong)param_1));
      *(UObject **)(piVar4 + -4) = pUVar2;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar2);
      }
      TVar3 = (TObjectPtr<UClass>_u_0)((TObjectPtr<UClass>_u_0 *)(pFVar5 + -2))->DebugPtr;
      ((TObjectPtr<UClass> *)(piVar4 + -2))->field0_0x0 = TVar3;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (TVar3 != (TObjectPtr<UClass>_u_0)0x0)) {
        UE::GC::MarkAsReachable((UObject *)TVar3.DebugPtr);
      }
      *piVar4 = pFVar5->Default;
      pFVar1 = (FPerPlatformBool *)(pFVar5 + 1);
      pFVar5 = pFVar5 + 6;
      *(bool *)(piVar4 + 1) = pFVar1->Default;
      piVar4 = piVar4 + 6;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<FAnimationStateEntry,FAnimationStateEntry,int> @ 14e2a9130

void __cdecl
ConstructItems<FAnimationStateEntry,FAnimationStateEntry,int>
          (void *param_1,FAnimationStateEntry *param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  FAnimationSetup *pFVar3;
  float *pfVar4;
  ForAnyElementType *pFVar5;
  TArray<FAnimationSetup,TSizedDefaultAllocator<32>_> *pTVar6;
  
  if (param_3 != 0) {
    pFVar5 = (ForAnyElementType *)((longlong)param_1 + 8);
    pTVar6 = &param_2->AnimationSetups;
    do {
      *(undefined1 *)((longlong)pTVar6 + (longlong)param_1 + (-8 - (longlong)param_2)) =
           *(undefined1 *)((longlong)(pTVar6 + -1) + 8);
      piVar1 = (int *)((longlong)&pFVar5[1].Data + 4);
      pFVar5->Data = (FScriptContainerElement *)0x0;
      iVar2 = pTVar6->ArrayNum;
      pFVar3 = (FAnimationSetup *)(pTVar6->AllocatorInstance).Data;
      *(int *)&pFVar5[1].Data = iVar2;
      if (iVar2 == 0) {
        *piVar1 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,8,iVar2,0,pFVar5,iVar2,piVar1);
        ConstructItems<FAnimationSetup,FAnimationSetup,int>(pFVar5->Data,pFVar3,iVar2);
      }
      *(bool *)&pFVar5[2].Data = *(bool *)(pTVar6 + 1);
      *(bool *)((longlong)&pFVar5[2].Data + 1) = *(bool *)((longlong)(pTVar6 + 1) + 1);
      *(float *)((longlong)&pFVar5[2].Data + 4) = *(float *)((longlong)(pTVar6 + 1) + 4);
      *(bool *)&pFVar5[3].Data = *(bool *)((longlong)(pTVar6 + 1) + 8);
      *(bool *)((longlong)&pFVar5[3].Data + 1) = *(bool *)((longlong)(pTVar6 + 1) + 9);
      *(uchar *)((longlong)&pFVar5[3].Data + 2) = *(uchar *)((longlong)(pTVar6 + 1) + 10);
      *(int *)((longlong)&pFVar5[3].Data + 4) =
           ((FPerPlatformInt *)((longlong)(pTVar6 + 1) + 0xc))->Default;
      *(float *)&pFVar5[4].Data = *(float *)(pTVar6 + 2);
      pfVar4 = (float *)(pTVar6 + 2);
      pTVar6 = pTVar6 + 3;
      *(bool *)((longlong)&pFVar5[4].Data + 4) = *(bool *)(pfVar4 + 1);
      pFVar5 = pFVar5 + 6;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// DefaultConstructItems<FAdditiveInstance,int> @ 14e2a9240

void __cdecl DefaultConstructItems<FAdditiveInstance,int>(void *param_1,int param_2)

{
  return;
}

// DefaultConstructItems<FBlendInstance,int> @ 14e2a9250

void __cdecl DefaultConstructItems<FBlendInstance,int>(void *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)((longlong)param_1 + 0x28);
    do {
      puVar1[-1] = 0;
      *puVar1 = 0;
      puVar1 = puVar1 + 7;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<FOnDemandInstance,int> @ 14e2a9280

void __cdecl DefaultConstructItems<FOnDemandInstance,int>(void *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)((longlong)param_1 + 0x28);
    do {
      puVar1[-1] = 0;
      *puVar1 = 0;
      puVar1 = puVar1 + 6;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<FPerStateData,int> @ 14e2a92b0

void __cdecl DefaultConstructItems<FPerStateData,int>(void *param_1,int param_2)

{
  undefined4 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined4 *)((longlong)param_1 + 4);
    do {
      *(undefined2 *)(puVar1 + -1) = 0;
      *puVar1 = 0;
      puVar1[1] = 0xffffffff;
      *(undefined1 *)((longlong)puVar1 + 0xd) = 0xff;
      *(undefined8 *)(puVar1 + 5) = 0;
      *(undefined8 *)(puVar1 + 7) = 0;
      *(undefined8 *)(puVar1 + 9) = 0;
      *(undefined8 *)(puVar1 + 0xf) = 0;
      puVar1[0x11] = 0;
      puVar1[0x12] = 0x80;
      *(undefined8 *)(puVar1 + 0x17) = 0;
      puVar1[0x19] = 0;
      puVar1[0x1a] = 0x80;
      *(undefined8 *)(puVar1 + 0x1f) = 0;
      puVar1[0x21] = 0;
      puVar1[0x22] = 0x80;
      *(undefined8 *)(puVar1 + 0x23) = 0;
      *(undefined8 *)(puVar1 + 0x25) = 0;
      *(undefined8 *)(puVar1 + 0x27) = 0;
      *(undefined8 *)(puVar1 + 0x29) = 0;
      *(undefined8 *)(puVar1 + 0x2b) = 0;
      *(undefined8 *)(puVar1 + 0x2d) = 0;
      puVar1 = puVar1 + 0x30;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FAnimationStateEntry,int> @ 14e2a9350

void __cdecl DestructItems<FAnimationStateEntry,int>(FAnimationStateEntry *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  TArray<FAnimationSetup,TSizedDefaultAllocator<32>_> *pTVar2;
  
  if (param_2 != 0) {
    pTVar2 = &param_1->AnimationSetups;
    do {
      pFVar1 = (pTVar2->AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pTVar2 = pTVar2 + 3;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FBlendInstance,int> @ 14e2a9390

void __cdecl DestructItems<FBlendInstance,int>(FBlendInstance *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> *pTVar2;
  
  if (param_2 != 0) {
    pTVar2 = &param_1->ActorIndices;
    do {
      pFVar1 = (pTVar2->AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pTVar2 = (TArray<unsigned_int,TSizedDefaultAllocator<32>_> *)((longlong)(pTVar2 + 3) + 8);
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FOnDemandInstance,int> @ 14e2a93d0

void __cdecl DestructItems<FOnDemandInstance,int>(FOnDemandInstance *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> *pTVar2;
  
  if (param_2 != 0) {
    pTVar2 = &param_1->ActorIndices;
    do {
      pFVar1 = (pTVar2->AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pTVar2 = pTVar2 + 3;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FPerActorData,int> @ 14e2a9410

void __cdecl DestructItems<FPerActorData,int>(FPerActorData *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> *pTVar2;
  
  if (param_2 != 0) {
    pTVar2 = &param_1->ComponentIndices;
    do {
      TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)(pTVar2 + 1));
      pFVar1 = (pTVar2->AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pTVar2 = (TArray<unsigned_int,TSizedDefaultAllocator<32>_> *)((longlong)(pTVar2 + 4) + 8);
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FPerSkeletonAnimationSharingSetup,int> @ 14e2a9460

void __cdecl
DestructItems<FPerSkeletonAnimationSharingSetup,int>
          (FPerSkeletonAnimationSharingSetup *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  TArray<FAnimationStateEntry,TSizedDefaultAllocator<32>_> *pTVar2;
  
  if (param_2 != 0) {
    pTVar2 = &param_1->AnimationStates;
    do {
      DestructItems<FAnimationStateEntry,int>
                ((FAnimationStateEntry *)(pTVar2->AllocatorInstance).Data,pTVar2->ArrayNum);
      pFVar1 = (pTVar2->AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pTVar2 = pTVar2 + 4;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FPerStateData,int> @ 14e2a94b0

void __cdecl DestructItems<FPerStateData,int>(FPerStateData *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar2;
  
  if (param_2 != 0) {
    pTVar2 = &param_1->AnimationLengths;
    do {
      FInstanceStack<FAdditiveAnimationInstance>::~FInstanceStack<FAdditiveAnimationInstance>
                ((FInstanceStack<FAdditiveAnimationInstance> *)(pTVar2 + 1));
      pFVar1 = (pTVar2->AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      if (*(ForElementType<unsigned_int> *)(pTVar2 + -1) != (ForElementType<unsigned_int>)0x0) {
        FMemory::Free((void *)*(ForElementType<unsigned_int> *)(pTVar2 + -1));
      }
      if (*(ForElementType<unsigned_int> *)(pTVar2 + -3) != (ForElementType<unsigned_int>)0x0) {
        FMemory::Free((void *)*(ForElementType<unsigned_int> *)(pTVar2 + -3));
      }
      if (*(ForElementType<unsigned_int> *)(pTVar2 + -5) != (ForElementType<unsigned_int>)0x0) {
        FMemory::Free((void *)*(ForElementType<unsigned_int> *)(pTVar2 + -5));
      }
      pFVar1 = (((TArray<USkeletalMeshComponent_*,TSizedDefaultAllocator<32>_> *)(pTVar2 + -7))->
               AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pTVar2 = pTVar2 + 0xc;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// ForEachComponent_Internal<USkeletalMeshComponent,1,1,`AActor::GetComponents<USkeletalMeshComponent,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>'::__l2::<lambda_1>_> @ 14e2a9930

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
AActor::
ForEachComponent_Internal<USkeletalMeshComponent,1,1,_AActor::GetComponents<USkeletalMeshComponent,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_::__l2::<lambda_1>_>
          (AActor *this,TSubclassOf<UActorComponent> param_1,<lambda_1> param_2)

{
  undefined1 *puVar1;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *pTVar2;
  ForElementType<AActor_*> FVar3;
  ulonglong uVar4;
  int iVar5;
  uint uVar6;
  undefined1 *puVar7;
  USkeletalMeshComponent *pUVar8;
  AActor *this_00;
  code *pcVar9;
  <lambda_1> <Var10;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *pTVar11;
  bool bVar12;
  UClass *pUVar13;
  UClass *pUVar14;
  longlong lVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  ForElementType<AActor_*> FVar19;
  undefined1 *puVar20;
  uint *puVar21;
  <lambda_1> local_res18;
  undefined1 auStack_1f8 [32];
  longlong *local_1d8;
  ForElementType<AActor_*> local_1d0;
  longlong local_1c8;
  longlong local_1c0;
  undefined8 local_1b8;
  undefined1 local_1a8;
  undefined1 local_1a7 [7];
  longlong local_1a0;
  int local_198;
  int local_194;
  UObject *local_190;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *local_188;
  int iStack_180;
  uint uStack_17c;
  undefined1 *local_178;
  undefined4 uStack_170;
  int iStack_16c;
  int local_168;
  undefined4 uStack_164;
  int iStack_160;
  undefined4 uStack_15c;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *local_158;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_150;
  undefined8 uStack_130;
  undefined4 local_10c;
  ForElementType<AActor_*> local_108;
  int local_40;
  int local_3c;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_1f8;
  lVar15 = *(longlong *)param_1.Class.field0_0x0;
  if (lVar15 == 0) {
    return;
  }
  local_res18.OutComponents = param_2.OutComponents;
  pUVar13 = Z_Construct_UClass_UActorComponent_NoRegister();
  if (pUVar13 == (UClass *)0x0) {
    return;
  }
  iVar5 = (int)pUVar13->_padding_;
  if ((*(int *)(lVar15 + 0x38) < iVar5) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(lVar15 + 0x30) + (longlong)iVar5 * 8) !=
      &pUVar13->_padding_)) {
    bVar12 = false;
  }
  else {
    bVar12 = true;
  }
  if (!bVar12) {
    return;
  }
  pUVar13 = *(UClass **)param_1.Class.field0_0x0;
  if (pUVar13 == (UClass *)0x0) {
    return;
  }
  pUVar14 = Z_Construct_UClass_UActorComponent_NoRegister();
  if ((pUVar13 != pUVar14) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("bClassIsActorComponent == false || ComponentClass == UActorComponent::StaticClass()"
                          ,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\GameFramework\\Actor.h"
                          ,0xf1c,L""), bVar12)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  pUVar14 = Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
  if (pUVar14 != (UClass *)0x0) {
    iVar5 = (int)pUVar14->_padding_;
    if (((int)pUVar13->_padding_ < iVar5) ||
       ((longlong *)*(undefined1 **)(pUVar13->_padding_ + (longlong)iVar5 * 8) !=
        &pUVar14->_padding_)) {
      bVar12 = false;
    }
    else {
      bVar12 = true;
    }
    if (bVar12) goto LAB_14e2a9a53;
  }
  bVar12 = ::FDebug::CheckVerifyFailedImpl2
                     ("ComponentClass->IsChildOf(ComponentType::StaticClass())",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\GameFramework\\Actor.h"
                      ,0xf1d,L"");
  if (bVar12) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
LAB_14e2a9a53:
  local_3c = 0x18;
  pTVar2 = &this->OwnedComponents;
  local_108.SecondaryData = (ForElementType<AActor_*>)0x0;
  puVar1 = &(this->OwnedComponents).Elements.field_0x10;
  iStack_180 = 0;
  local_40 = 0;
  iVar5 = *(int *)&(this->OwnedComponents).Elements.field_0x28;
  uStack_17c = 1;
  local_168 = 0;
  iStack_16c = iStack_180;
  if (iVar5 != 0) {
    puVar21 = *(uint **)&(this->OwnedComponents).Elements.field_0x20;
    if (puVar21 == (uint *)0x0) {
      puVar21 = (uint *)puVar1;
    }
    uVar18 = *puVar21;
    iStack_180 = 0;
    local_168 = 0;
    while (uVar18 == 0) {
      iStack_180 = iStack_180 + 1;
      local_168 = local_168 + 0x20;
      iStack_16c = iVar5;
      if ((int)(iVar5 + -1 + (iVar5 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_180) goto LAB_14e2a9aed;
      uVar18 = puVar21[iStack_180];
    }
    uStack_17c = ~(uVar18 - 1) & uVar18;
    uVar4 = (ulonglong)uStack_17c * 2 + 1;
    lVar15 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    local_198 = (int)lVar15;
    iStack_16c = local_198 + -1 + local_168;
    if (iVar5 < iStack_16c) {
      iStack_16c = iVar5;
    }
  }
LAB_14e2a9aed:
  uVar18 = *(uint *)&(this->OwnedComponents).Elements.field_0x28;
  uStack_164 = local_10c;
  uVar17 = uVar18 & 0xffffffe0;
  iStack_160 = *(int *)&(this->OwnedComponents).Elements.field_0x8 -
               *(int *)&(this->OwnedComponents).Elements.field_0x34;
  uStack_170 = 0xffffffff;
  TStack_150._padding_ = CONCAT44(uStack_17c,iStack_180);
  TStack_150.CurrentBitIndex = iStack_16c;
  TStack_150.UnvisitedBitMask = 0xffffffff;
  iVar16 = (int)uVar18 >> 5;
  TStack_150._28_4_ = local_10c;
  TStack_150.BaseBitIndex = local_168;
  uStack_130 = CONCAT44(uStack_15c,iStack_160);
  local_188 = pTVar2;
  local_178 = puVar1;
  local_158 = pTVar2;
  TStack_150.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar18 < 0) || (iVar5 < (int)uVar18)) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar12)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  uVar6 = *(uint *)&(this->OwnedComponents).Elements.field_0x28;
  if (uVar18 != uVar6) {
    puVar7 = *(undefined1 **)&(this->OwnedComponents).Elements.field_0x20;
    puVar20 = puVar1;
    if (puVar7 != (undefined1 *)0x0) {
      puVar20 = puVar7;
    }
    uVar18 = -1 << ((byte)uVar18 & 0x1f) & *(uint *)(puVar20 + (longlong)iVar16 * 4);
    while (uVar18 == 0) {
      iVar16 = iVar16 + 1;
      uVar17 = uVar17 + 0x20;
      uVar18 = uVar6;
      if ((int)(((int)(uVar6 - 1) >> 0x1f & 0x1fU) + (uVar6 - 1)) >> 5 < iVar16) goto LAB_14e2a9bf0;
      uVar18 = *(uint *)(puVar20 + (longlong)iVar16 * 4);
    }
    uVar4 = (ulonglong)(~(uVar18 - 1) & uVar18) * 2 + 1;
    lVar15 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    local_194 = (int)lVar15;
    uVar18 = local_194 + -1 + uVar17;
    if ((int)uVar6 < (int)uVar18) {
      uVar18 = uVar6;
    }
  }
LAB_14e2a9bf0:
  do {
    pTVar11 = local_158;
    if (*(int *)&(local_158->Elements).field_0x8 - *(int *)&(local_158->Elements).field_0x34 !=
        (int)uStack_130) {
      local_1a8 = 0;
      `TSparseArray<TSparseSetElement<TObjectPtr<UActorComponent>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_1a8);
    }
    iVar5 = local_40;
    <Var10.OutComponents = local_res18.OutComponents;
    if (((TStack_150.CurrentBitIndex == uVar18) &&
        (TStack_150.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar11 == pTVar2)
       ) {
      FVar19 = (ForElementType<AActor_*>)&local_108;
      if (local_108.SecondaryData != (ForElementType<AActor_*>)0x0) {
        FVar19 = local_108.SecondaryData;
      }
      FVar3 = (ForElementType<AActor_*>)((longlong)FVar19 + (longlong)local_40 * 8);
      while( true ) {
        if (local_40 != iVar5) {
          `TCheckedPointerIterator<AActor_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_1a7);
        }
        if (FVar19 == FVar3) break;
        local_190 = *(UObject **)param_1.Class.field0_0x0;
        this_00 = *(AActor **)FVar19;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_190 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(local_190);
        }
        ForEachComponent_Internal<USkeletalMeshComponent,1,1,_AActor::GetComponents<USkeletalMeshComponent,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_::__l2::<lambda_1>_>
                  (this_00,(TSubclassOf<UActorComponent>)&local_190,<Var10);
        FVar19 = (ForElementType<AActor_*>)((longlong)FVar19 + 8);
      }
      if (local_108.SecondaryData != (ForElementType<AActor_*>)0x0) {
        FMemory::Free((void *)local_108.SecondaryData);
      }
      return;
    }
    pUVar8 = *(USkeletalMeshComponent **)
              (*(longlong *)&pTVar11->Elements + (longlong)TStack_150.CurrentBitIndex * 0x10);
    if (pUVar8 != (USkeletalMeshComponent *)0x0) {
      `AActor::
      GetComponents<USkeletalMeshComponent,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>'
      ::__l2::<lambda_1>::operator()(&local_res18,pUVar8);
      pUVar13 = Z_Construct_UClass_UChildActorComponent_NoRegister();
      iVar5 = (int)pUVar13->_padding_;
      if (((iVar5 <= *(int *)(pUVar8->_padding_ + 0x38)) &&
          ((longlong *)
           *(undefined1 **)(*(longlong *)(pUVar8->_padding_ + 0x30) + (longlong)iVar5 * 8) ==
           &pUVar13->_padding_)) && (local_1a0 = pUVar8->_padding_, local_1a0 != 0)) {
        FVar19 = (ForElementType<AActor_*>)&local_108;
        if (local_108.SecondaryData != (ForElementType<AActor_*>)0x0) {
          FVar19 = local_108.SecondaryData;
        }
        if ((ulonglong)FVar19 <= &local_1a0) {
          FVar19 = (ForElementType<AActor_*>)&local_108;
          if (local_108.SecondaryData != (ForElementType<AActor_*>)0x0) {
            FVar19 = local_108.SecondaryData;
          }
          if (&local_1a0 < (longlong *)((longlong)FVar19 + (longlong)local_3c * 8)) {
            local_1c0 = (longlong)local_40;
            local_1b8 = 8;
            local_1d8 = &local_1a0;
            local_1d0 = (ForElementType<AActor_*>)&local_108;
            if (local_108.SecondaryData != (ForElementType<AActor_*>)0x0) {
              local_1d0 = local_108.SecondaryData;
            }
            local_1c8 = (longlong)local_3c;
            bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               );
            if (bVar12) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
          }
        }
        if (local_40 == local_3c) {
          local_40 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>::ForElementType<AActor_*>_>
                               (0x808,&local_108,&local_3c);
        }
        lVar15 = (longlong)local_40;
        FVar19 = (ForElementType<AActor_*>)&local_108;
        if (local_108.SecondaryData != (ForElementType<AActor_*>)0x0) {
          FVar19 = local_108.SecondaryData;
        }
        local_40 = local_40 + 1;
        *(longlong *)((longlong)FVar19 + lVar15 * 8) = local_1a0;
      }
    }
    TStack_150.UnvisitedBitMask = TStack_150.UnvisitedBitMask & ~TStack_150._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_150);
  } while( true );
}

// ForEachComponent_Internal<USkeletalMeshComponent,1,0,`AActor::GetComponents<USkeletalMeshComponent,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>'::__l2::<lambda_1>_> @ 14e2a9e60

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
AActor::
ForEachComponent_Internal<USkeletalMeshComponent,1,0,_AActor::GetComponents<USkeletalMeshComponent,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_::__l2::<lambda_1>_>
          (AActor *this,TSubclassOf<UActorComponent> param_1,<lambda_1> param_2)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  USkeletalMeshComponent *pUVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  UClass *pUVar9;
  UClass *pUVar10;
  longlong lVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  undefined1 *puVar15;
  int iVar16;
  uint *puVar17;
  undefined1 local_res10 [8];
  TArray<USkeletalMeshComponent_*,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
  *local_res18;
  int local_res20;
  undefined4 local_9c;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  lVar11 = *(longlong *)param_1.Class.field0_0x0;
  if (lVar11 == 0) {
    return;
  }
  local_res18 = param_2.OutComponents;
  pUVar9 = Z_Construct_UClass_UActorComponent_NoRegister();
  if (pUVar9 == (UClass *)0x0) {
    return;
  }
  iVar3 = (int)pUVar9->_padding_;
  if ((*(int *)(lVar11 + 0x38) < iVar3) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(lVar11 + 0x30) + (longlong)iVar3 * 8) !=
      &pUVar9->_padding_)) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
  }
  if (!bVar6) {
    return;
  }
  pUVar9 = *(UClass **)param_1.Class.field0_0x0;
  if (pUVar9 == (UClass *)0x0) {
    return;
  }
  pUVar10 = Z_Construct_UClass_UActorComponent_NoRegister();
  if ((pUVar9 != pUVar10) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("bClassIsActorComponent == false || ComponentClass == UActorComponent::StaticClass()"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\GameFramework\\Actor.h"
                         ,0xf1c,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pUVar10 = Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
  if (pUVar10 != (UClass *)0x0) {
    iVar3 = (int)pUVar10->_padding_;
    if (((int)pUVar9->_padding_ < iVar3) ||
       ((longlong *)*(undefined1 **)(pUVar9->_padding_ + (longlong)iVar3 * 8) != &pUVar10->_padding_
       )) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if (bVar6) goto LAB_14e2a9f66;
  }
  bVar6 = ::FDebug::CheckVerifyFailedImpl2
                    ("ComponentClass->IsChildOf(ComponentType::StaticClass())",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\GameFramework\\Actor.h"
                     ,0xf1d,L"");
  if (bVar6) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
LAB_14e2a9f66:
  iVar14 = 0;
  puVar1 = &(this->OwnedComponents).Elements.field_0x10;
  iVar3 = *(int *)&(this->OwnedComponents).Elements.field_0x28;
  uVar7 = 1;
  iVar16 = 0;
  iVar8 = 0;
  if (iVar3 != 0) {
    puVar17 = *(uint **)&(this->OwnedComponents).Elements.field_0x20;
    if (puVar17 == (uint *)0x0) {
      puVar17 = (uint *)puVar1;
    }
    uVar13 = *puVar17;
    while (uVar13 == 0) {
      lVar11 = (longlong)iVar14;
      iVar16 = iVar16 + 0x20;
      iVar14 = iVar14 + 1;
      iVar8 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_14e2a9fed;
      uVar13 = puVar17[lVar11 + 1];
    }
    uVar7 = -uVar13 & uVar13;
    uVar2 = (ulonglong)uVar7 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_res20 = (int)lVar11;
    iVar8 = local_res20 + -1 + iVar16;
    if (iVar3 < iVar8) {
      iVar8 = iVar3;
    }
  }
LAB_14e2a9fed:
  uVar13 = *(uint *)&(this->OwnedComponents).Elements.field_0x28;
  uVar12 = uVar13 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar7,iVar14);
  TStack_60.CurrentBitIndex = iVar8;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar14 = (int)uVar13 >> 5;
  TStack_60._28_4_ = local_9c;
  TStack_60.BaseBitIndex = iVar16;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(this->OwnedComponents).Elements.field_0x8 -
                       *(int *)&(this->OwnedComponents).Elements.field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar13 < 0) || (iVar3 < (int)uVar13)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar7 = *(uint *)&(this->OwnedComponents).Elements.field_0x28;
  if (uVar13 != uVar7) {
    puVar15 = *(undefined1 **)&(this->OwnedComponents).Elements.field_0x20;
    if (puVar15 == (undefined1 *)0x0) {
      puVar15 = puVar1;
    }
    uVar13 = -1 << ((byte)uVar13 & 0x1f) & *(uint *)(puVar15 + (longlong)iVar14 * 4);
    while (uVar13 == 0) {
      lVar11 = (longlong)iVar14;
      uVar12 = uVar12 + 0x20;
      iVar14 = iVar14 + 1;
      uVar13 = uVar7;
      if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_14e2aa0f1;
      uVar13 = *(uint *)(puVar15 + lVar11 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
    lVar11 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    uVar13 = (int)lVar11 + -1 + uVar12;
    if ((int)uVar7 < (int)uVar13) {
      uVar13 = uVar7;
    }
  }
LAB_14e2aa0f1:
  while( true ) {
    if (*(int *)&(this->OwnedComponents).Elements.field_0x8 -
        *(int *)&(this->OwnedComponents).Elements.field_0x34 != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TObjectPtr<UActorComponent>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if ((TStack_60.CurrentBitIndex == uVar13) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    pUVar4 = *(USkeletalMeshComponent **)
              (*(longlong *)&(this->OwnedComponents).Elements +
              (longlong)TStack_60.CurrentBitIndex * 0x10);
    if (pUVar4 != (USkeletalMeshComponent *)0x0) {
      `AActor::
      GetComponents<USkeletalMeshComponent,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>'
      ::__l2::<lambda_1>::operator()(&local_res18,pUVar4);
    }
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// ForEachComponent_Internal<USkeletalMeshComponent,0,1,`AActor::GetComponents<USkeletalMeshComponent,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>'::__l2::<lambda_1>_> @ 14e2aa170

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
AActor::
ForEachComponent_Internal<USkeletalMeshComponent,0,1,_AActor::GetComponents<USkeletalMeshComponent,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_::__l2::<lambda_1>_>
          (AActor *this,TSubclassOf<UActorComponent> param_1,<lambda_1> param_2)

{
  undefined1 *puVar1;
  ForElementType<AActor_*> FVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  undefined1 *puVar7;
  USkeletalMeshComponent *pUVar8;
  AActor *this_00;
  code *pcVar9;
  <lambda_1> <Var10;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *pTVar11;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *pTVar12;
  bool bVar13;
  UClass *pUVar14;
  longlong lVar15;
  uint uVar16;
  int iVar17;
  ForElementType<AActor_*> FVar18;
  undefined1 *puVar19;
  uint *puVar20;
  uint uVar21;
  <lambda_1> local_res18;
  undefined1 auStack_1f8 [32];
  longlong *local_1d8;
  ForElementType<AActor_*> local_1d0;
  longlong local_1c8;
  longlong local_1c0;
  undefined8 local_1b8;
  undefined1 local_1a8;
  undefined1 local_1a7 [7];
  longlong local_1a0;
  int local_198;
  int local_194;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *local_190;
  UObject *local_188;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *local_180;
  int iStack_178;
  uint uStack_174;
  undefined1 *local_170;
  undefined4 uStack_168;
  int iStack_164;
  int local_160;
  undefined4 uStack_15c;
  int iStack_158;
  undefined4 uStack_154;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *local_150;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_148;
  undefined8 uStack_128;
  undefined4 local_104;
  ForElementType<AActor_*> local_100;
  int local_38;
  int local_34;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_1f8;
  lVar6 = *(longlong *)param_1.Class.field0_0x0;
  if (lVar6 == 0) {
    return;
  }
  local_res18.OutComponents = param_2.OutComponents;
  pUVar14 = Z_Construct_UClass_UActorComponent_NoRegister();
  if (pUVar14 == (UClass *)0x0) {
    return;
  }
  iVar4 = (int)pUVar14->_padding_;
  if ((*(int *)(lVar6 + 0x38) < iVar4) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(lVar6 + 0x30) + (longlong)iVar4 * 8) !=
      &pUVar14->_padding_)) {
    bVar13 = false;
  }
  else {
    bVar13 = true;
  }
  if (!bVar13) {
    return;
  }
  lVar6 = *(longlong *)param_1.Class.field0_0x0;
  if (lVar6 == 0) {
    return;
  }
  pUVar14 = Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
  if (pUVar14 != (UClass *)0x0) {
    iVar4 = (int)pUVar14->_padding_;
    if ((*(int *)(lVar6 + 0x38) < iVar4) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar6 + 0x30) + (longlong)iVar4 * 8) !=
        &pUVar14->_padding_)) {
      bVar13 = false;
    }
    else {
      bVar13 = true;
    }
    if (bVar13) goto LAB_14e2aa263;
  }
  bVar13 = ::FDebug::CheckVerifyFailedImpl2
                     ("ComponentClass->IsChildOf(ComponentType::StaticClass())",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\GameFramework\\Actor.h"
                      ,0xf1d,L"");
  if (bVar13) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
LAB_14e2aa263:
  local_34 = 0x18;
  local_190 = &this->OwnedComponents;
  local_100.SecondaryData = (ForElementType<AActor_*>)0x0;
  puVar1 = &(this->OwnedComponents).Elements.field_0x10;
  iStack_178 = 0;
  local_38 = 0;
  iVar4 = *(int *)&(this->OwnedComponents).Elements.field_0x28;
  uStack_174 = 1;
  local_160 = 0;
  iStack_164 = iStack_178;
  if (iVar4 != 0) {
    puVar20 = *(uint **)&(this->OwnedComponents).Elements.field_0x20;
    if (puVar20 == (uint *)0x0) {
      puVar20 = (uint *)puVar1;
    }
    uVar16 = *puVar20;
    iStack_178 = 0;
    local_160 = 0;
    while (uVar16 == 0) {
      iStack_178 = iStack_178 + 1;
      local_160 = local_160 + 0x20;
      iStack_164 = iVar4;
      if ((int)((iVar4 + -1 >> 0x1f & 0x1fU) + iVar4 + -1) >> 5 < iStack_178) goto LAB_14e2aa310;
      uVar16 = puVar20[iStack_178];
    }
    uStack_174 = ~(uVar16 - 1) & uVar16;
    uVar3 = (ulonglong)uStack_174 * 2 + 1;
    lVar15 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    local_198 = (int)lVar15;
    iStack_164 = local_198 + -1 + local_160;
    if (iVar4 < iStack_164) {
      iStack_164 = iVar4;
    }
  }
LAB_14e2aa310:
  uStack_15c = local_104;
  iStack_158 = *(int *)&(this->OwnedComponents).Elements.field_0x8 -
               *(int *)&(this->OwnedComponents).Elements.field_0x34;
  uVar16 = *(uint *)&(this->OwnedComponents).Elements.field_0x28;
  uStack_168 = 0xffffffff;
  TStack_148._padding_ = CONCAT44(uStack_174,iStack_178);
  uVar21 = uVar16 & 0xffffffe0;
  TStack_148.CurrentBitIndex = iStack_164;
  TStack_148.UnvisitedBitMask = 0xffffffff;
  iVar17 = (int)uVar16 >> 5;
  TStack_148._28_4_ = local_104;
  TStack_148.BaseBitIndex = local_160;
  uStack_128 = CONCAT44(uStack_154,iStack_158);
  local_180 = local_190;
  local_170 = puVar1;
  local_150 = local_190;
  TStack_148.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar16 < 0) || (iVar4 < (int)uVar16)) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar13)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  pTVar11 = local_190;
  uVar5 = *(uint *)&(this->OwnedComponents).Elements.field_0x28;
  if (uVar16 != uVar5) {
    puVar7 = *(undefined1 **)&(this->OwnedComponents).Elements.field_0x20;
    puVar19 = puVar1;
    if (puVar7 != (undefined1 *)0x0) {
      puVar19 = puVar7;
    }
    uVar16 = -1 << ((byte)uVar16 & 0x1f) & *(uint *)(puVar19 + (longlong)iVar17 * 4);
    while (uVar16 == 0) {
      iVar17 = iVar17 + 1;
      uVar21 = uVar21 + 0x20;
      uVar16 = uVar5;
      if ((int)(((int)(uVar5 - 1) >> 0x1f & 0x1fU) + (uVar5 - 1)) >> 5 < iVar17) goto LAB_14e2aa420;
      uVar16 = *(uint *)(puVar19 + (longlong)iVar17 * 4);
    }
    uVar3 = (ulonglong)(~(uVar16 - 1) & uVar16) * 2 + 1;
    lVar15 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    local_194 = (int)lVar15;
    uVar16 = local_194 + -1 + uVar21;
    if ((int)uVar5 < (int)uVar16) {
      uVar16 = uVar5;
    }
  }
LAB_14e2aa420:
  do {
    pTVar12 = local_150;
    if (*(int *)&(local_150->Elements).field_0x8 - *(int *)&(local_150->Elements).field_0x34 !=
        (int)uStack_128) {
      local_1a8 = 0;
      `TSparseArray<TSparseSetElement<TObjectPtr<UActorComponent>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_1a8);
    }
    iVar4 = local_38;
    <Var10.OutComponents = local_res18.OutComponents;
    if (((TStack_148.CurrentBitIndex == uVar16) &&
        (TStack_148.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) &&
       (pTVar12 == pTVar11)) {
      FVar18 = (ForElementType<AActor_*>)&local_100;
      if (local_100.SecondaryData != (ForElementType<AActor_*>)0x0) {
        FVar18 = local_100.SecondaryData;
      }
      FVar2 = (ForElementType<AActor_*>)((longlong)FVar18 + (longlong)local_38 * 8);
      while( true ) {
        if (local_38 != iVar4) {
          `TCheckedPointerIterator<AActor_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_1a7);
        }
        if (FVar18 == FVar2) break;
        local_188 = *(UObject **)param_1.Class.field0_0x0;
        this_00 = *(AActor **)FVar18;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_188 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(local_188);
        }
        ForEachComponent_Internal<USkeletalMeshComponent,0,1,_AActor::GetComponents<USkeletalMeshComponent,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_::__l2::<lambda_1>_>
                  (this_00,(TSubclassOf<UActorComponent>)&local_188,<Var10);
        FVar18 = (ForElementType<AActor_*>)((longlong)FVar18 + 8);
      }
      if (local_100.SecondaryData != (ForElementType<AActor_*>)0x0) {
        FMemory::Free((void *)local_100.SecondaryData);
      }
      return;
    }
    pUVar8 = *(USkeletalMeshComponent **)
              (*(longlong *)&pTVar12->Elements + (longlong)TStack_148.CurrentBitIndex * 0x10);
    if (pUVar8 != (USkeletalMeshComponent *)0x0) {
      if ((*(int *)(lVar6 + 0x38) <= *(int *)(pUVar8->_padding_ + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(pUVar8->_padding_ + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) ==
          lVar6 + 0x30)) {
        `AActor::
        GetComponents<USkeletalMeshComponent,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>'
        ::__l2::<lambda_1>::operator()(&local_res18,pUVar8);
      }
      pUVar14 = Z_Construct_UClass_UChildActorComponent_NoRegister();
      iVar4 = (int)pUVar14->_padding_;
      if (((iVar4 <= *(int *)(pUVar8->_padding_ + 0x38)) &&
          ((longlong *)
           *(undefined1 **)(*(longlong *)(pUVar8->_padding_ + 0x30) + (longlong)iVar4 * 8) ==
           &pUVar14->_padding_)) && (local_1a0 = pUVar8->_padding_, local_1a0 != 0)) {
        FVar18 = (ForElementType<AActor_*>)&local_100;
        if (local_100.SecondaryData != (ForElementType<AActor_*>)0x0) {
          FVar18 = local_100.SecondaryData;
        }
        if ((ulonglong)FVar18 <= &local_1a0) {
          FVar18 = (ForElementType<AActor_*>)&local_100;
          if (local_100.SecondaryData != (ForElementType<AActor_*>)0x0) {
            FVar18 = local_100.SecondaryData;
          }
          if (&local_1a0 < (longlong *)((longlong)FVar18 + (longlong)local_34 * 8)) {
            local_1c0 = (longlong)local_38;
            local_1b8 = 8;
            local_1d8 = &local_1a0;
            local_1d0 = (ForElementType<AActor_*>)&local_100;
            if (local_100.SecondaryData != (ForElementType<AActor_*>)0x0) {
              local_1d0 = local_100.SecondaryData;
            }
            local_1c8 = (longlong)local_34;
            bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               );
            if (bVar13) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
          }
        }
        if (local_38 == local_34) {
          local_38 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>::ForElementType<AActor_*>_>
                               (0x808,&local_100,&local_34);
        }
        lVar15 = (longlong)local_38;
        FVar18 = (ForElementType<AActor_*>)&local_100;
        if (local_100.SecondaryData != (ForElementType<AActor_*>)0x0) {
          FVar18 = local_100.SecondaryData;
        }
        local_38 = local_38 + 1;
        *(longlong *)((longlong)FVar18 + lVar15 * 8) = local_1a0;
      }
    }
    TStack_148.UnvisitedBitMask = TStack_148.UnvisitedBitMask & ~TStack_148._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_148);
  } while( true );
}

// ForEachComponent_Internal<USkeletalMeshComponent,0,0,`AActor::GetComponents<USkeletalMeshComponent,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>'::__l2::<lambda_1>_> @ 14e2aa6b0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
AActor::
ForEachComponent_Internal<USkeletalMeshComponent,0,0,_AActor::GetComponents<USkeletalMeshComponent,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_::__l2::<lambda_1>_>
          (AActor *this,TSubclassOf<UActorComponent> param_1,<lambda_1> param_2)

{
  ulonglong uVar1;
  undefined1 *puVar2;
  int iVar3;
  longlong lVar4;
  undefined1 *puVar5;
  USkeletalMeshComponent *pUVar6;
  longlong lVar7;
  code *pcVar8;
  bool bVar9;
  uint uVar10;
  int iVar11;
  UClass *pUVar12;
  uint uVar13;
  int iVar14;
  undefined1 *puVar15;
  int iVar16;
  uint *puVar17;
  uint uVar18;
  undefined1 local_res10 [8];
  TArray<USkeletalMeshComponent_*,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
  *local_res18;
  int local_res20;
  undefined4 local_9c;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  lVar4 = *(longlong *)param_1.Class.field0_0x0;
  if (lVar4 == 0) {
    return;
  }
  local_res18 = param_2.OutComponents;
  pUVar12 = Z_Construct_UClass_UActorComponent_NoRegister();
  if (pUVar12 == (UClass *)0x0) {
    return;
  }
  iVar3 = (int)pUVar12->_padding_;
  if ((*(int *)(lVar4 + 0x38) < iVar3) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(lVar4 + 0x30) + (longlong)iVar3 * 8) !=
      &pUVar12->_padding_)) {
    bVar9 = false;
  }
  else {
    bVar9 = true;
  }
  if (!bVar9) {
    return;
  }
  lVar4 = *(longlong *)param_1.Class.field0_0x0;
  if (lVar4 == 0) {
    return;
  }
  pUVar12 = Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
  if (pUVar12 != (UClass *)0x0) {
    iVar3 = (int)pUVar12->_padding_;
    if ((*(int *)(lVar4 + 0x38) < iVar3) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar4 + 0x30) + (longlong)iVar3 * 8) !=
        &pUVar12->_padding_)) {
      bVar9 = false;
    }
    else {
      bVar9 = true;
    }
    if (bVar9) goto LAB_14e2aa78e;
  }
  bVar9 = ::FDebug::CheckVerifyFailedImpl2
                    ("ComponentClass->IsChildOf(ComponentType::StaticClass())",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\GameFramework\\Actor.h"
                     ,0xf1d,L"");
  if (bVar9) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
LAB_14e2aa78e:
  iVar14 = 0;
  iVar3 = *(int *)&(this->OwnedComponents).Elements.field_0x28;
  puVar2 = &(this->OwnedComponents).Elements.field_0x10;
  uVar10 = 1;
  iVar16 = 0;
  iVar11 = 0;
  if (iVar3 != 0) {
    puVar17 = *(uint **)&(this->OwnedComponents).Elements.field_0x20;
    if (puVar17 == (uint *)0x0) {
      puVar17 = (uint *)puVar2;
    }
    uVar13 = *puVar17;
    while (uVar13 == 0) {
      iVar14 = iVar14 + 1;
      iVar16 = iVar16 + 0x20;
      iVar11 = iVar3;
      if ((int)((iVar3 + -1 >> 0x1f & 0x1fU) + iVar3 + -1) >> 5 < iVar14) goto LAB_14e2aa81f;
      uVar13 = puVar17[iVar14];
    }
    uVar10 = ~(uVar13 - 1) & uVar13;
    uVar1 = (ulonglong)uVar10 * 2 + 1;
    lVar7 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    local_res20 = (int)lVar7;
    iVar11 = local_res20 + -1 + iVar16;
    if (iVar3 < iVar11) {
      iVar11 = iVar3;
    }
  }
LAB_14e2aa81f:
  uVar13 = *(uint *)&(this->OwnedComponents).Elements.field_0x28;
  uVar18 = uVar13 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar10,iVar14);
  TStack_60.CurrentBitIndex = iVar11;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar14 = (int)uVar13 >> 5;
  TStack_60._28_4_ = local_9c;
  TStack_60.BaseBitIndex = iVar16;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(this->OwnedComponents).Elements.field_0x8 -
                       *(int *)&(this->OwnedComponents).Elements.field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar2;
  if ((((int)uVar13 < 0) || (iVar3 < (int)uVar13)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar9)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  uVar10 = *(uint *)&(this->OwnedComponents).Elements.field_0x28;
  if (uVar13 != uVar10) {
    puVar5 = *(undefined1 **)&(this->OwnedComponents).Elements.field_0x20;
    puVar15 = puVar2;
    if (puVar5 != (undefined1 *)0x0) {
      puVar15 = puVar5;
    }
    uVar13 = -1 << ((byte)uVar13 & 0x1f) & *(uint *)(puVar15 + (longlong)iVar14 * 4);
    while (uVar13 == 0) {
      iVar14 = iVar14 + 1;
      uVar18 = uVar18 + 0x20;
      uVar13 = uVar10;
      if ((int)(((int)(uVar10 - 1) >> 0x1f & 0x1fU) + (uVar10 - 1)) >> 5 < iVar14)
      goto LAB_14e2aa930;
      uVar13 = *(uint *)(puVar15 + (longlong)iVar14 * 4);
    }
    uVar1 = (ulonglong)(~(uVar13 - 1) & uVar13) * 2 + 1;
    lVar7 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    uVar13 = (int)lVar7 + -1 + uVar18;
    if ((int)uVar10 < (int)uVar13) {
      uVar13 = uVar10;
    }
  }
LAB_14e2aa930:
  while( true ) {
    if (*(int *)&(this->OwnedComponents).Elements.field_0x8 -
        *(int *)&(this->OwnedComponents).Elements.field_0x34 != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TObjectPtr<UActorComponent>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if ((TStack_60.CurrentBitIndex == uVar13) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar2)) break;
    pUVar6 = *(USkeletalMeshComponent **)
              (*(longlong *)&(this->OwnedComponents).Elements +
              (longlong)TStack_60.CurrentBitIndex * 0x10);
    if (pUVar6 != (USkeletalMeshComponent *)0x0) {
      if ((*(int *)(lVar4 + 0x38) <= *(int *)(pUVar6->_padding_ + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(pUVar6->_padding_ + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
          lVar4 + 0x30)) {
        `AActor::
        GetComponents<USkeletalMeshComponent,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>'
        ::__l2::<lambda_1>::operator()(&local_res18,pUVar6);
      }
    }
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// GetFullNameForCastLogError<USignificanceManager> @ 14e2aa9d0

FString * __cdecl
GetFullNameForCastLogError<USignificanceManager>
          (FString *__return_storage_ptr__,USignificanceManager *param_1)

{
  UObjectBaseUtility::GetFullName
            ((UObjectBaseUtility *)param_1,__return_storage_ptr__,(UObject *)0x0,None);
  return __return_storage_ptr__;
}

// InternalConstructor<UAnimSharingAdditiveInstance> @ 14e2aaa00

void __cdecl InternalConstructor<UAnimSharingAdditiveInstance>(FObjectInitializer *param_1)

{
  UAnimInstance *this;
  
  this = (UAnimInstance *)param_1->Obj;
  if (this != (UAnimInstance *)0x0) {
    UAnimInstance::UAnimInstance(this,param_1);
    *(undefined ***)this = &___7UAnimSharingAdditiveInstance__6B_;
    *(undefined8 *)&this->field_0x428 = 0;
    *(undefined8 *)(this + 1) = 0;
  }
  return;
}

// InternalConstructor<UAnimSharingInstance> @ 14e2aaa40

void __cdecl InternalConstructor<UAnimSharingInstance>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UAnimSharingInstance__6B_;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined8 *)&this[1].field_0x18 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
    *(undefined8 *)(this + 2) = 0;
    *(undefined8 *)&this[2].field_0x8 = 0;
    *(undefined8 *)&this[2].field_0x10 = 0;
    *(undefined8 *)&this[2].field_0x18 = 0;
    *(undefined8 *)&this[2].field_0x20 = 0;
    *(undefined8 *)(this + 3) = 0;
    *(undefined8 *)&this[3].field_0x8 = 0;
    *(undefined8 *)&this[3].field_0x10 = 0;
    *(undefined8 *)&this[3].field_0x1c = 0;
    *(undefined8 *)(this + 4) = 0;
    *(undefined8 *)&this[4].field_0x8 = 0;
    *(undefined8 *)&this[4].field_0x10 = 0;
    *(undefined8 *)&this[4].field_0x18 = 0;
    *(undefined8 *)&this[4].field_0x20 = 0;
    *(undefined8 *)(this + 5) = 0;
    *(undefined8 *)&this[5].field_0x8 = 0;
    *(undefined8 *)&this[5].field_0x10 = 0;
    *(undefined8 *)(this + 6) = 0;
    *(undefined8 *)&this[6].field_0x8 = 0;
    *(undefined4 *)&this[6].field_0x14 = 0;
    this[6].field_0x10 = 1;
    *(undefined8 *)&this[6].field_0x18 = 1;
  }
  return;
}

// InternalConstructor<UAnimSharingStateInstance> @ 14e2aab20

void __cdecl InternalConstructor<UAnimSharingStateInstance>(FObjectInitializer *param_1)

{
  UAnimInstance *this;
  
  this = (UAnimInstance *)param_1->Obj;
  if (this != (UAnimInstance *)0x0) {
    UAnimInstance::UAnimInstance(this,param_1);
    *(undefined4 *)&this[1].field_0x4 = 0x3f800000;
    *(undefined ***)this = &___7UAnimSharingStateInstance__6B_;
    *(undefined8 *)&this->field_0x428 = 0;
    *(undefined4 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined2 *)&this[1].field_0x9 = 0xffff;
  }
  return;
}

// InternalConstructor<UAnimSharingTransitionInstance> @ 14e2aab80

void __cdecl InternalConstructor<UAnimSharingTransitionInstance>(FObjectInitializer *param_1)

{
  UAnimInstance *this;
  UAnimInstance *this_00;
  undefined8 local_res8;
  
  this_00 = (UAnimInstance *)param_1->Obj;
  if (this_00 != (UAnimInstance *)0x0) {
    UAnimInstance::UAnimInstance(this_00,param_1);
    *(undefined ***)this_00 = &___7UAnimSharingTransitionInstance__6B_;
    *(undefined8 *)&this_00->field_0x428 = 0;
    local_res8 = 0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)&this_00->field_0x428,(FObjectPtr)&local_res8);
    this = this_00 + 1;
    local_res8 = 0;
    *(int *)&this->field_0x0 = 0;
    *(int *)&this->field_0x4 = 0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)this,(FObjectPtr)&local_res8);
    this_00[1].field_0xc = 0;
    *(undefined4 *)&this_00[1].field_0x8 = 0x3f000000;
  }
  return;
}

// InternalConstructor<UAnimationSharingManager> @ 14e2aac00

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl InternalConstructor<UAnimationSharingManager>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UAnimationSharingManager__6B_;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x18 = 0;
    *(undefined8 *)(this + 2) = 0;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
    *(undefined8 *)&this[2].field_0x18 = 0;
    *(undefined4 *)&this[2].field_0x20 = 0;
    *(undefined4 *)&this[2].field_0x24 = 0x80;
    *(undefined4 *)(this + 3) = 0xffffffff;
    *(undefined4 *)&this[3].field_0x4 = 0;
    *(undefined8 *)&this[3].field_0x10 = 0;
    *(undefined4 *)&this[3].field_0x18 = 0;
    *(undefined4 *)&this[3].field_0x20 = 0;
    *(undefined8 *)(this + 4) = 0;
    *(undefined8 *)&this[4].field_0x8 = 0;
    this[4].field_0x10 = 1;
    *(undefined4 *)&this[4].field_0x14 = 0;
    *(undefined8 *)&this[4].field_0x18 = 1;
    FTickFunction::FTickFunction((FTickFunction *)&this[4].field_0x20);
    *(undefined8 *)&this[5].field_0x20 = 0;
    *(undefined ***)&this[4].field_0x20 = &___7FTickAnimationSharingFunction__6B_;
  }
  return;
}

// InternalConstructor<UAnimationSharingSetup> @ 14e2aacd0

void __cdecl InternalConstructor<UAnimationSharingSetup>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UAnimationSharingSetup__6B_;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined4 *)&this[1].field_0x14 = 0;
    this[1].field_0x10 = 1;
    *(undefined8 *)&this[1].field_0x18 = 1;
  }
  return;
}

// InternalConstructor<UAnimationSharingStateProcessor> @ 14e2aad20

void __cdecl InternalConstructor<UAnimationSharingStateProcessor>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UAnimationSharingStateProcessor__6B_;
    *(undefined8 *)&this[1].field_0x18 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    FUtf8String::Reset((FUtf8String *)&this[1].field_0x18,0);
    return;
  }
  return;
}

// InternalVTableHelperCtorCaller<UAnimSharingAdditiveInstance> @ 14e2aad80

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UAnimSharingAdditiveInstance>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UAnimInstance *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UAnimSharingAdditiveInstance::GetPrivateStaticClass();
  this = (UAnimInstance *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UAnimInstance *)0x0) {
    UAnimInstance::UAnimInstance(this,param_1);
    *(undefined ***)this = &___7UAnimSharingAdditiveInstance__6B_;
    *(undefined8 *)&this->field_0x428 = 0;
    *(undefined8 *)(this + 1) = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UAnimSharingInstance> @ 14e2aae40

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UAnimSharingInstance>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UAnimSharingInstance::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UAnimSharingInstance__6B_;
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    *(undefined8 *)&pUVar1[1].field_0x18 = 0;
    *(undefined8 *)&pUVar1[1].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 2) = 0;
    *(undefined8 *)&pUVar1[2].field_0x8 = 0;
    *(undefined8 *)&pUVar1[2].field_0x10 = 0;
    *(undefined8 *)&pUVar1[2].field_0x18 = 0;
    *(undefined8 *)&pUVar1[2].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 3) = 0;
    *(undefined8 *)&pUVar1[3].field_0x8 = 0;
    *(undefined8 *)&pUVar1[3].field_0x10 = 0;
    *(undefined8 *)&pUVar1[3].field_0x1c = 0;
    *(undefined8 *)(pUVar1 + 4) = 0;
    *(undefined8 *)&pUVar1[4].field_0x8 = 0;
    *(undefined8 *)&pUVar1[4].field_0x10 = 0;
    *(undefined8 *)&pUVar1[4].field_0x18 = 0;
    *(undefined8 *)&pUVar1[4].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 5) = 0;
    *(undefined8 *)&pUVar1[5].field_0x8 = 0;
    *(undefined8 *)&pUVar1[5].field_0x10 = 0;
    *(undefined8 *)(pUVar1 + 6) = 0;
    *(undefined8 *)&pUVar1[6].field_0x8 = 0;
    pUVar1[6].field_0x10 = 1;
    *(undefined4 *)&pUVar1[6].field_0x14 = 0;
    *(undefined8 *)&pUVar1[6].field_0x18 = 1;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UAnimSharingStateInstance> @ 14e2aaf90

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UAnimSharingStateInstance>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UAnimInstance *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UAnimSharingStateInstance::GetPrivateStaticClass();
  this = (UAnimInstance *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UAnimInstance *)0x0) {
    UAnimInstance::UAnimInstance(this,param_1);
    *(undefined ***)this = &___7UAnimSharingStateInstance__6B_;
    *(undefined8 *)&this->field_0x428 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UAnimSharingTransitionInstance> @ 14e2ab050

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UAnimSharingTransitionInstance>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UAnimInstance *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UAnimSharingTransitionInstance::GetPrivateStaticClass();
  this = (UAnimInstance *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UAnimInstance *)0x0) {
    UAnimInstance::UAnimInstance(this,param_1);
    *(undefined ***)this = &___7UAnimSharingTransitionInstance__6B_;
    *(undefined8 *)&this->field_0x428 = 0;
    *(undefined8 *)(this + 1) = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UAnimationSharingManager> @ 14e2ab110

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UAnimationSharingManager>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UObject *pUVar3;
  
  pUVar3 = (UObject *)0x0;
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UAnimationSharingManager::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UAnimationSharingManager__6B_;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined8 *)&pUVar1[1].field_0x18 = 0;
    *(undefined8 *)(pUVar1 + 2) = 0;
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    *(undefined8 *)&pUVar1[1].field_0x20 = 0;
    *(undefined8 *)&pUVar1[2].field_0x18 = 0;
    *(undefined4 *)&pUVar1[2].field_0x20 = 0;
    *(undefined4 *)&pUVar1[2].field_0x24 = 0x80;
    *(undefined4 *)(pUVar1 + 3) = 0xffffffff;
    *(undefined4 *)&pUVar1[3].field_0x4 = 0;
    *(undefined8 *)&pUVar1[3].field_0x10 = 0;
    *(undefined4 *)&pUVar1[3].field_0x18 = 0;
    *(undefined4 *)&pUVar1[3].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 4) = 0;
    *(undefined8 *)&pUVar1[4].field_0x8 = 0;
    pUVar1[4].field_0x10 = 1;
    *(undefined4 *)&pUVar1[4].field_0x14 = 0;
    *(undefined8 *)&pUVar1[4].field_0x18 = 1;
    FTickFunction::FTickFunction((FTickFunction *)&pUVar1[4].field_0x20);
    *(undefined8 *)&pUVar1[5].field_0x20 = 0;
    *(undefined ***)&pUVar1[4].field_0x20 = &___7FTickAnimationSharingFunction__6B_;
    pUVar3 = pUVar1;
  }
  return pUVar3;
}

// InternalVTableHelperCtorCaller<UAnimationSharingSetup> @ 14e2ab240

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UAnimationSharingSetup>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UAnimationSharingSetup::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UAnimationSharingSetup__6B_;
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    pUVar1[1].field_0x10 = 1;
    *(undefined4 *)&pUVar1[1].field_0x14 = 0;
    *(undefined8 *)&pUVar1[1].field_0x18 = 1;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UAnimationSharingStateProcessor> @ 14e2ab310

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UAnimationSharingStateProcessor>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UAnimationSharingStateProcessor::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UAnimationSharingStateProcessor__6B_;
    *(undefined8 *)&pUVar1[1].field_0x18 = 0;
    *(undefined8 *)&pUVar1[1].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    FUtf8String::Reset((FUtf8String *)&pUVar1[1].field_0x18,0);
    return pUVar1;
  }
  return (UObject *)0x0;
}

// IsObjectPtrEqual<USkeleton_const_,USkeleton_const_*,0> @ 14e2ab3e0

bool __cdecl
ObjectPtr_Private::IsObjectPtrEqual<USkeleton_const_,USkeleton_const_*,0>
          (TObjectPtr<USkeleton_const_> *param_1,USkeleton **param_2)

{
  if ((param_1->field0_0x0).DebugPtr == (USkeleton *)0x0) {
    return *param_2 == (USkeleton *)0x0;
  }
  return (param_1->field0_0x0).DebugPtr == *param_2;
}

// NewObject<UAnimSharingInstance> @ 14e2ab400

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UAnimSharingInstance * __cdecl NewObject<UAnimSharingInstance>(UObject *param_1)

{
  UClass *pUVar1;
  UAnimSharingInstance *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = UAnimSharingInstance::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UAnimSharingInstance *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar3 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// NewObject<UAnimationSharingManager> @ 14e2ab4a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UAnimationSharingManager * __cdecl NewObject<UAnimationSharingManager>(UObject *param_1)

{
  UClass *pUVar1;
  UAnimationSharingManager *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = UAnimationSharingManager::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UAnimationSharingManager *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar3 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// ~TFunction_OwnedObject<`FAnimSharingModule::CreateAnimationSharingManager'::__l2::<lambda_1>,0,0> @ 14e2ac1b0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FAnimSharingModule::CreateAnimationSharingManager'::__l2::<lambda_1>,0,0>::
~TFunction_OwnedObject<_FAnimSharingModule::CreateAnimationSharingManager_::__l2::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FAnimSharingModule::CreateAnimationSharingManager'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  return;
}

// operator() @ 14e2ac7e0

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
<lambda_24>::operator()
          (<lambda_24> *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,UWorld *param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  int iVar3;
  UObject *pUVar4;
  longlong lVar5;
  code *pcVar6;
  bool bVar7;
  TTuple<UWorld_const_*,TObjectPtr<UAnimationSharingManager>_> *pTVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  undefined1 local_res10 [16];
  undefined1 local_res20 [8];
  
  if (param_1->ArrayNum == 0) {
    return;
  }
  if ((param_1->ArrayNum < 1) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  bVar7 = ::FString::ToBool((FString *)(param_1->AllocatorInstance).Data);
  if ((((!bVar7) && (GAnimationSharingEnabled != 0)) && (param_2 != (UWorld *)0x0)) &&
     (pTVar8 = TSet<TTuple<UWorld_const_*,TObjectPtr<UAnimationSharingManager>_>,TDefaultMapHashableKeyFuncs<UWorld_const_*,TObjectPtr<UAnimationSharingManager>,0>,FDefaultSetAllocator>
               ::Find((TSet<TTuple<UWorld_const_*,TObjectPtr<UAnimationSharingManager>_>,TDefaultMapHashableKeyFuncs<UWorld_const_*,TObjectPtr<UAnimationSharingManager>,0>,FDefaultSetAllocator>
                       *)&FAnimSharingModule::WorldAnimSharingManagers,param_2),
     pTVar8 != (TTuple<UWorld_const_*,TObjectPtr<UAnimationSharingManager>_> *)0x0)) {
    pUVar4 = *(UObject **)&pTVar8->field_0x8;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if (pUVar4 == (UObject *)0x0) goto LAB_14e2ac9bd;
      UE::GC::MarkAsReachable(pUVar4);
    }
    if (pUVar4 != (UObject *)0x0) {
      puVar9 = *(undefined8 **)&pUVar4[1].field_0x10;
      iVar3 = *(int *)&pUVar4[1].field_0x18;
      puVar1 = puVar9 + iVar3;
      while( true ) {
        if (*(int *)&pUVar4[1].field_0x18 != iVar3) {
          `TCheckedPointerIterator<TObjectPtr<UAnimSharingInstance>,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_res10);
        }
        if (puVar9 == puVar1) break;
        UAnimSharingInstance::UnregisterAllActors((UAnimSharingInstance *)*puVar9);
        puVar9 = puVar9 + 1;
      }
      plVar10 = *(longlong **)&pUVar4[1].field_0x10;
      iVar3 = *(int *)&pUVar4[1].field_0x18;
      plVar2 = plVar10 + iVar3;
      while( true ) {
        if (*(int *)&pUVar4[1].field_0x18 != iVar3) {
          `TCheckedPointerIterator<TObjectPtr<UAnimSharingInstance>,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_res20);
        }
        if (plVar10 == plVar2) break;
        lVar5 = *plVar10;
        DestructItems<FBlendInstance,int>(*(FBlendInstance **)(lVar5 + 0xa0),*(int *)(lVar5 + 0xa8))
        ;
        *(undefined4 *)(lVar5 + 0xa8) = 0;
        if (*(int *)(lVar5 + 0xac) != 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x38,8,0,(ForAnyElementType *)(lVar5 + 0xa0),0,(int *)(lVar5 + 0xac));
        }
        DestructItems<FOnDemandInstance,int>
                  (*(FOnDemandInstance **)(lVar5 + 0xb0),*(int *)(lVar5 + 0xb8));
        *(undefined4 *)(lVar5 + 0xb8) = 0;
        if (*(int *)(lVar5 + 0xbc) != 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x30,8,0,(ForAnyElementType *)(lVar5 + 0xb0),0,(int *)(lVar5 + 0xbc));
        }
        plVar10 = plVar10 + 1;
      }
    }
  }
LAB_14e2ac9bd:
  GAnimationSharingEnabled = (uint)bVar7;
  if (4 < (byte)LogAnimationSharing._0_1_) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogAnimationSharing);
  }
  return;
}

// `scalar_deleting_destructor' @ 14e2ad110

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(int),FDefaultDelegateUserPolicy,`UAnimationSharingManager::RegisterActorWithSkeletonBP'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e2ad140

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FAnimSharingModule::CreateAnimationSharingManager'::__l2::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FAnimSharingModule::CreateAnimationSharingManager'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e2ad180

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void * __thiscall
FTickAnimationSharingFunction::_scalar_deleting_destructor_
          (FTickAnimationSharingFunction *this,uint param_1)

{
  FTickFunction::~FTickFunction((FTickFunction *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e2ad1c0

void * __thiscall
UAnimSharingAdditiveInstance::_scalar_deleting_destructor_
          (UAnimSharingAdditiveInstance *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UAnimSharingAdditiveInstance__6B_;
  UAnimInstance::~UAnimInstance((UAnimInstance *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x440);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e2ad220

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void * __thiscall
UAnimSharingInstance::_scalar_deleting_destructor_(UAnimSharingInstance *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UAnimSharingInstance__6B_;
  pFVar1 = (this->UsedAnimationSequences).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->AdditiveInstances).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FOnDemandInstance,int>
            ((FOnDemandInstance *)(this->OnDemandInstances).AllocatorInstance.Data,
             (this->OnDemandInstances).ArrayNum);
  pFVar1 = (this->OnDemandInstances).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FBlendInstance,int>
            ((FBlendInstance *)(this->BlendInstances).AllocatorInstance.Data,
             (this->BlendInstances).ArrayNum);
  pFVar1 = (this->BlendInstances).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FInstanceStack<FTransitionBlendInstance>::~FInstanceStack<FTransitionBlendInstance>
            (&this->BlendInstanceStack);
  DestructItems<FPerStateData,int>
            ((FPerStateData *)(this->PerStateData).AllocatorInstance.Data,
             (this->PerStateData).ArrayNum);
  pFVar1 = (this->PerStateData).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->PerComponentData).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FPerActorData,int>
            ((FPerActorData *)(this->PerActorData).AllocatorInstance.Data,
             (this->PerActorData).ArrayNum);
  pFVar1 = (this->PerActorData).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->RegisteredActors).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x130);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e2ad350

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void * __thiscall
UAnimSharingStateInstance::_scalar_deleting_destructor_
          (UAnimSharingStateInstance *this,uint param_1)

{
  *(undefined ***)this = &___7UAnimSharingStateInstance__6B_;
  UAnimInstance::~UAnimInstance((UAnimInstance *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x450);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e2ad3b0

void * __thiscall
UAnimSharingTransitionInstance::_scalar_deleting_destructor_
          (UAnimSharingTransitionInstance *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UAnimSharingTransitionInstance__6B_;
  UAnimInstance::~UAnimInstance((UAnimInstance *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x440);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e2ad410

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void * __thiscall
UAnimationSharingManager::_scalar_deleting_destructor_(UAnimationSharingManager *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&___7UAnimationSharingManager__6B_;
  FTickFunction::~FTickFunction((FTickFunction *)&this->TickFunction);
  pFVar1 = (this->AnimationSharingSetups).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->SkeletonIDToSkeletonIndexMap).field_0x48 = 0;
  pvVar2 = *(void **)&(this->SkeletonIDToSkeletonIndexMap).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_char,unsigned_char>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_char,unsigned_char>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned_char,unsigned_char>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->SkeletonIDToSkeletonIndexMap);
  pFVar1 = (this->PerSkeletonData).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Skeletons).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e2ad4e0

void * __thiscall
UAnimationSharingSetup::_scalar_deleting_destructor_(UAnimationSharingSetup *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UAnimationSharingSetup__6B_;
  DestructItems<FPerSkeletonAnimationSharingSetup,int>
            ((FPerSkeletonAnimationSharingSetup *)(this->SkeletonSetups).AllocatorInstance.Data,
             (this->SkeletonSetups).ArrayNum);
  pFVar1 = (this->SkeletonSetups).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e2ad560

void * __thiscall
UAnimationSharingStateProcessor::_scalar_deleting_destructor_
          (UAnimationSharingStateProcessor *this,uint param_1)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UAnimationSharingStateProcessor__6B_;
  pvVar1 = *(void **)&(this->AnimationStateEnum).SoftObjectPtr.field_0x18;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x50);
  }
  return this;
}

// EmptyLinkFunctionForGeneratedCodeAnimationSharingInstances @ 14e2aeda0

void __cdecl EmptyLinkFunctionForGeneratedCodeAnimationSharingInstances(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeAnimationSharingManager @ 14e2aedb0

void __cdecl EmptyLinkFunctionForGeneratedCodeAnimationSharingManager(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeAnimationSharingSetup @ 14e2aedc0

void __cdecl EmptyLinkFunctionForGeneratedCodeAnimationSharingSetup(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeAnimationSharingTypes @ 14e2aedd0

void __cdecl EmptyLinkFunctionForGeneratedCodeAnimationSharingTypes(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeAnimationSharing_init @ 14e2aede0

void __cdecl EmptyLinkFunctionForGeneratedCodeAnimationSharing_init(void)

{
  return;
}

// Z_Construct_UScriptStruct_FTickAnimationSharingFunction @ 14e2be460

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FTickAnimationSharingFunction(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FTickAnimationSharingFunction.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FTickAnimationSharingFunction.InnerSingleton,
               &Z_Construct_UScriptStruct_FTickAnimationSharingFunction_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FTickAnimationSharingFunction.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FTickAnimationSharingFunction.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// IMPLEMENT_MODULE_AnimationSharing @ 14e2beb30

void __cdecl IMPLEMENT_MODULE_AnimationSharing(void)

{
  return;
}

// OnAnimationSharingManagerCreated'' @ 150463d30

void __cdecl
`dynamic_atexit_destructor_for_'FAnimSharingModule::OnAnimationSharingManagerCreated__(void)

{
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)
             FAnimSharingModule::OnAnimationSharingManagerCreated._8_8_,
             FAnimSharingModule::OnAnimationSharingManagerCreated._16_4_);
  if (FAnimSharingModule::OnAnimationSharingManagerCreated._8_8_ != 0) {
    FMemory::Free((void *)FAnimSharingModule::OnAnimationSharingManagerCreated._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&FAnimSharingModule::OnAnimationSharingManagerCreated);
  return;
}

// OnAnimationSharingManagerSetupAdded'' @ 150463d70

void __cdecl
`dynamic_atexit_destructor_for_'FAnimSharingModule::OnAnimationSharingManagerSetupAdded__(void)

{
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)
             FAnimSharingModule::OnAnimationSharingManagerSetupAdded._8_8_,
             FAnimSharingModule::OnAnimationSharingManagerSetupAdded._16_4_);
  if (FAnimSharingModule::OnAnimationSharingManagerSetupAdded._8_8_ != 0) {
    FMemory::Free((void *)FAnimSharingModule::OnAnimationSharingManagerSetupAdded._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)
             &FAnimSharingModule::OnAnimationSharingManagerSetupAdded);
  return;
}

// WorldAnimSharingManagers'' @ 150463db0

void __cdecl `dynamic_atexit_destructor_for_'FAnimSharingModule::WorldAnimSharingManagers__(void)

{
  FAnimSharingModule::WorldAnimSharingManagers._72_4_ = 0;
  if (FAnimSharingModule::WorldAnimSharingManagers._64_8_ != 0) {
    FMemory::Free((void *)FAnimSharingModule::WorldAnimSharingManagers._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<UWorld_const_*,TObjectPtr<UAnimationSharingManager>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UWorld_const_*,TObjectPtr<UAnimationSharingManager>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UWorld_const_*,TObjectPtr<UAnimationSharingManager>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&FAnimSharingModule::WorldAnimSharingManagers);
  return;
}

// `dynamic_atexit_destructor_for_'CVarAnimSharing_DebugStates'' @ 150463df0

void __cdecl _dynamic_atexit_destructor_for__CVarAnimSharing_DebugStates__(void)

{
  CVarAnimSharing_DebugStates._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarAnimSharing_DebugStates);
  return;
}

// `dynamic_atexit_destructor_for_'CVarAnimSharing_DisableDebugMaterials'' @ 150463e10

void __cdecl _dynamic_atexit_destructor_for__CVarAnimSharing_DisableDebugMaterials__(void)

{
  CVarAnimSharing_DisableDebugMaterials._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarAnimSharing_DisableDebugMaterials);
  return;
}

// `dynamic_atexit_destructor_for_'CVarAnimSharing_Enabled'' @ 150463e30

void __cdecl _dynamic_atexit_destructor_for__CVarAnimSharing_Enabled__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarAnimSharing_Enabled);
  return;
}

// `dynamic_atexit_destructor_for_'CVarAnimSharing_FontScale'' @ 150463e50

void __cdecl _dynamic_atexit_destructor_for__CVarAnimSharing_FontScale__(void)

{
  CVarAnimSharing_FontScale._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarAnimSharing_FontScale);
  return;
}

// `dynamic_atexit_destructor_for_'CVarAnimSharing_ToggleVisibility'' @ 150463e70

void __cdecl _dynamic_atexit_destructor_for__CVarAnimSharing_ToggleVisibility__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarAnimSharing_ToggleVisibility);
  return;
}

// `dynamic_atexit_destructor_for_'LogAnimationSharing'' @ 150463e90

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogAnimationSharing__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogAnimationSharing);
  return;
}

