// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: KawaiiPhysics
// Functions: 139

// `dynamic_initializer_for_'CVarEnableOldPhysicsMethodGravity'' @ 1413ff7d0

void __cdecl _dynamic_initializer_for__CVarEnableOldPhysicsMethodGravity__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarEnableOldPhysicsMethodGravity,L"p.KawaiiPhysics.EnableOldPhysicsMethodGravity",
             local_res8,
             L"Enables/Disables old physics method for gravity before v1.3.1. This is the setting for the transition period when changing the physical calculation."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarEnableOldPhysicsMethodGravity__);
  return;
}

// `dynamic_initializer_for_'CVarEnableOldPhysicsMethodSphereLimit'' @ 1413ff820

void __cdecl _dynamic_initializer_for__CVarEnableOldPhysicsMethodSphereLimit__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarEnableOldPhysicsMethodSphereLimit,
             L"p.KawaiiPhysics.EnableOldPhysicsMethodSphereLimit",local_res8,
             L"Enables/Disables old physics method for sphere limit before v1.3.1. This is the setting for the transition period when changing the physical calculation."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarEnableOldPhysicsMethodSphereLimit__);
  return;
}

// `dynamic_initializer_for_'LogKawaiiPhysicsLibrary'' @ 1413ff870

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogKawaiiPhysicsLibrary__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogKawaiiPhysicsLibrary,L"LogKawaiiPhysicsLibrary",Verbose,All);
  atexit(_dynamic_atexit_destructor_for__LogKawaiiPhysicsLibrary__);
  return;
}

// `dynamic_initializer_for_'ModuleRegistrantKawaiiPhysics'' @ 1413ff8b0

void __cdecl _dynamic_initializer_for__ModuleRegistrantKawaiiPhysics__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "KawaiiPhysics";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"KawaiiPhysics",0xd);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,FStaticallyLinkedModuleRegistrant<FKawaiiPhysicsModule>::InitializeModule);
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_KawaiiPhysics_AdjustByBoneConstraint'' @ 1413ff900

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_KawaiiPhysics_AdjustByBoneConstraint__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_KawaiiPhysics_AdjustByBoneConstraint ==
      (FThreadSafeStaticStat<FStat_STAT_KawaiiPhysics_AdjustByBoneConstraint>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_KawaiiPhysics_AdjustByBoneConstraint");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_KawaiiPhysics_AdjustByBoneConstraint,
               *pFVar1,L"KawaiiPhysics_AdjustByBoneConstraint","STATGROUP_Anim","STATCAT_Advanced",
               L"Anim",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_KawaiiPhysics_AdjustByCollision'' @ 1413ff990

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_KawaiiPhysics_AdjustByCollision__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_KawaiiPhysics_AdjustByCollision ==
      (FThreadSafeStaticStat<FStat_STAT_KawaiiPhysics_AdjustByCollision>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_KawaiiPhysics_AdjustByCollision");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_KawaiiPhysics_AdjustByCollision,*pFVar1,
               L"KawaiiPhysics_AdjustByCollision","STATGROUP_Anim","STATCAT_Advanced",L"Anim",true,
               true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_KawaiiPhysics_Eval'' @ 1413ffa20

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_KawaiiPhysics_Eval__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_KawaiiPhysics_Eval == (FThreadSafeStaticStat<FStat_STAT_KawaiiPhysics_Eval>)0x0)
  {
    pFVar1 = FName::FName(local_res8,"STAT_KawaiiPhysics_Eval");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_KawaiiPhysics_Eval,*pFVar1,
               L"KawaiiPhysics_Eval","STATGROUP_Anim","STATCAT_Advanced",L"Anim",true,true,ST_int64,
               true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_KawaiiPhysics_GetWindVelocity'' @ 1413ffab0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_KawaiiPhysics_GetWindVelocity__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_KawaiiPhysics_GetWindVelocity ==
      (FThreadSafeStaticStat<FStat_STAT_KawaiiPhysics_GetWindVelocity>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_KawaiiPhysics_GetWindVelocity");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_KawaiiPhysics_GetWindVelocity,*pFVar1,
               L"KawaiiPhysics_GetWindVelocity","STATGROUP_Anim","STATCAT_Advanced",L"Anim",true,
               true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_KawaiiPhysics_InitModifyBones'' @ 1413ffb40

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_KawaiiPhysics_InitModifyBones__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_KawaiiPhysics_InitModifyBones ==
      (FThreadSafeStaticStat<FStat_STAT_KawaiiPhysics_InitModifyBones>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_KawaiiPhysics_InitModifyBones");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_KawaiiPhysics_InitModifyBones,*pFVar1,
               L"KawaiiPhysics_InitModifyBones","STATGROUP_Anim","STATCAT_Advanced",L"Anim",true,
               true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_KawaiiPhysics_Simulate'' @ 1413ffbd0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_KawaiiPhysics_Simulate__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_KawaiiPhysics_Simulate ==
      (FThreadSafeStaticStat<FStat_STAT_KawaiiPhysics_Simulate>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_KawaiiPhysics_Simulate");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_KawaiiPhysics_Simulate,*pFVar1,
               L"KawaiiPhysics_Simulate","STATGROUP_Anim","STATCAT_Advanced",L"Anim",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_KawaiiPhysics_SimulatemodifyBones'' @ 1413ffc60

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_KawaiiPhysics_SimulatemodifyBones__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_KawaiiPhysics_SimulatemodifyBones ==
      (FThreadSafeStaticStat<FStat_STAT_KawaiiPhysics_SimulatemodifyBones>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_KawaiiPhysics_SimulatemodifyBones");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_KawaiiPhysics_SimulatemodifyBones,*pFVar1,
               L"KawaiiPhysics_SimulatemodifyBones","STATGROUP_Anim","STATCAT_Advanced",L"Anim",true
               ,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_KawaiiPhysics_UpdateCapsuleLimit'' @ 1413ffcf0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_KawaiiPhysics_UpdateCapsuleLimit__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_KawaiiPhysics_UpdateCapsuleLimit ==
      (FThreadSafeStaticStat<FStat_STAT_KawaiiPhysics_UpdateCapsuleLimit>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_KawaiiPhysics_UpdateCapsuleLimit");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_KawaiiPhysics_UpdateCapsuleLimit,*pFVar1,
               L"KawaiiPhysics_UpdateCapsuleLimit","STATGROUP_Anim","STATCAT_Advanced",L"Anim",true,
               true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_KawaiiPhysics_UpdatePhysicsSetting'' @ 1413ffd80

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_KawaiiPhysics_UpdatePhysicsSetting__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_KawaiiPhysics_UpdatePhysicsSetting ==
      (FThreadSafeStaticStat<FStat_STAT_KawaiiPhysics_UpdatePhysicsSetting>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_KawaiiPhysics_UpdatePhysicsSetting");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_KawaiiPhysics_UpdatePhysicsSetting,*pFVar1
               ,L"KawaiiPhysics_UpdatePhysicsSetting","STATGROUP_Anim","STATCAT_Advanced",L"Anim",
               true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_KawaiiPhysics_UpdatePlanerLimit'' @ 1413ffe10

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_KawaiiPhysics_UpdatePlanerLimit__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_KawaiiPhysics_UpdatePlanerLimit ==
      (FThreadSafeStaticStat<FStat_STAT_KawaiiPhysics_UpdatePlanerLimit>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_KawaiiPhysics_UpdatePlanerLimit");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_KawaiiPhysics_UpdatePlanerLimit,*pFVar1,
               L"KawaiiPhysics_UpdatePlanerLimit","STATGROUP_Anim","STATCAT_Advanced",L"Anim",true,
               true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_KawaiiPhysics_UpdateSphericalLimit'' @ 1413ffea0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_KawaiiPhysics_UpdateSphericalLimit__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_KawaiiPhysics_UpdateSphericalLimit ==
      (FThreadSafeStaticStat<FStat_STAT_KawaiiPhysics_UpdateSphericalLimit>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_KawaiiPhysics_UpdateSphericalLimit");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_KawaiiPhysics_UpdateSphericalLimit,*pFVar1
               ,L"KawaiiPhysics_UpdateSphericalLimit","STATGROUP_Anim","STATCAT_Advanced",L"Anim",
               true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_KawaiiPhysics_WarmUp'' @ 1413fff30

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_KawaiiPhysics_WarmUp__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_KawaiiPhysics_WarmUp ==
      (FThreadSafeStaticStat<FStat_STAT_KawaiiPhysics_WarmUp>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_KawaiiPhysics_WarmUp");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_KawaiiPhysics_WarmUp,*pFVar1,
               L"KawaiiPhysics_WarmUp","STATGROUP_Anim","STATCAT_Advanced",L"Anim",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_KawaiiPhysics_WorldCollision'' @ 1413fffc0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_KawaiiPhysics_WorldCollision__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_KawaiiPhysics_WorldCollision ==
      (FThreadSafeStaticStat<FStat_STAT_KawaiiPhysics_WorldCollision>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_KawaiiPhysics_WorldCollision");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_KawaiiPhysics_WorldCollision,*pFVar1,
               L"KawaiiPhysics_WorldCollision","STATGROUP_Anim","STATCAT_Advanced",L"Anim",true,true
               ,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'XPBDComplianceValues'' @ 141400050

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl _dynamic_initializer_for__XPBDComplianceValues__(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ForAnyElementType FVar3;
  
  uVar2 = _UNK_152d4c9c8;
  uVar1 = ___xmm_3109705f3089705f2f2febff2e2febff;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,7,0,&XPBDComplianceValues.AllocatorInstance,7,&XPBDComplianceValues.ArrayMax);
  FVar3 = XPBDComplianceValues.AllocatorInstance;
  *(undefined8 *)XPBDComplianceValues.AllocatorInstance.Data = uVar1;
  *(undefined8 *)(FVar3.Data + 8) = uVar2;
  *(undefined8 *)(FVar3.Data + 0x10) = 0x37a7c5ac33d6bf95;
  *(undefined4 *)(FVar3.Data + 0x18) = 0x38d1b717;
  atexit(_dynamic_atexit_destructor_for__XPBDComplianceValues__);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_ProjectDS_Client_Plugins_KawaiiPhysics_Source_KawaiiPhysics_Public_AnimNode_KawaiiPhysics_h__Script_KawaiiPhysics_52936434'' @ 141400110

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_ProjectDS_Client_Plugins_KawaiiPhysics_Source_KawaiiPhysics_Public_AnimNode_KawaiiPhysics_h__Script_KawaiiPhysics_52936434__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/KawaiiPhysics",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_ProjectDS_Client_Plugins_KawaiiPhysics_Source_KawaiiPhysics_Public_AnimNode_KawaiiPhysics_h__Script_KawaiiPhysics_Statics
             ::ScriptStructInfo,8,
             Z_CompiledInDeferFile_FID_ProjectDS_Client_Plugins_KawaiiPhysics_Source_KawaiiPhysics_Public_AnimNode_KawaiiPhysics_h__Script_KawaiiPhysics_Statics
             ::EnumInfo,4);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_ProjectDS_Client_Plugins_KawaiiPhysics_Source_KawaiiPhysics_Public_KawaiiPhysicsBoneConstraintsDataAsset_h__Script_KawaiiPhysics_4142154850'' @ 141400160

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_ProjectDS_Client_Plugins_KawaiiPhysics_Source_KawaiiPhysics_Public_KawaiiPhysicsBoneConstraintsDataAsset_h__Script_KawaiiPhysics_4142154850__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/KawaiiPhysics",
             Z_CompiledInDeferFile_FID_ProjectDS_Client_Plugins_KawaiiPhysics_Source_KawaiiPhysics_Public_KawaiiPhysicsBoneConstraintsDataAsset_h__Script_KawaiiPhysics_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_ProjectDS_Client_Plugins_KawaiiPhysics_Source_KawaiiPhysics_Public_KawaiiPhysicsBoneConstraintsDataAsset_h__Script_KawaiiPhysics_Statics
             ::ScriptStructInfo,2,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_ProjectDS_Client_Plugins_KawaiiPhysics_Source_KawaiiPhysics_Public_KawaiiPhysicsLibrary_h__Script_KawaiiPhysics_2838075931'' @ 1414001b0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_ProjectDS_Client_Plugins_KawaiiPhysics_Source_KawaiiPhysics_Public_KawaiiPhysicsLibrary_h__Script_KawaiiPhysics_2838075931__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/KawaiiPhysics",
             Z_CompiledInDeferFile_FID_ProjectDS_Client_Plugins_KawaiiPhysics_Source_KawaiiPhysics_Public_KawaiiPhysicsLibrary_h__Script_KawaiiPhysics_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_ProjectDS_Client_Plugins_KawaiiPhysics_Source_KawaiiPhysics_Public_KawaiiPhysicsLibrary_h__Script_KawaiiPhysics_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_ProjectDS_Client_Plugins_KawaiiPhysics_Source_KawaiiPhysics_Public_KawaiiPhysicsLimitsDataAsset_h__Script_KawaiiPhysics_1745041788'' @ 141400200

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_ProjectDS_Client_Plugins_KawaiiPhysics_Source_KawaiiPhysics_Public_KawaiiPhysicsLimitsDataAsset_h__Script_KawaiiPhysics_1745041788__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/KawaiiPhysics",
             Z_CompiledInDeferFile_FID_ProjectDS_Client_Plugins_KawaiiPhysics_Source_KawaiiPhysics_Public_KawaiiPhysicsLimitsDataAsset_h__Script_KawaiiPhysics_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_ProjectDS_Client_Plugins_KawaiiPhysics_Source_KawaiiPhysics_Public_KawaiiPhysicsLimitsDataAsset_h__Script_KawaiiPhysics_Statics
             ::ScriptStructInfo,4,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferPackage_UPackage__Script_KawaiiPhysics'' @ 141400250

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferPackage_UPackage__Script_KawaiiPhysics__(void)

{
  FPackageReloadVersionInfo local_res8 [4];
  
  local_res8[0].BodyHash = 0xfcb45bfc;
  local_res8[0].DeclarationsHash = 0xac6e2da0;
  RegisterCompiledInInfo
            (Z_Construct_UPackage__Script_KawaiiPhysics,L"/Script/KawaiiPhysics",
             &Z_Registration_Info_UPackage__Script_KawaiiPhysics,local_res8);
  return;
}

// NewStructOps @ 14de39b30

void * __cdecl Z_Construct_UScriptStruct_FKawaiiPhysicsSettings_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x18;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FKawaiiPhysicsSettings,&UE::CoreUObject::Private::Construct<FKawaiiPhysicsSettings>,&UE::CoreUObject::Private::ConstructForTests<FKawaiiPhysicsSettings>,&UE::CoreUObject::Private::Destruct<FKawaiiPhysicsSettings>,&UE::CoreUObject::Private::Copy<FKawaiiPhysicsSettings>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_bDummy_SetBit @ 14de39b70

void __cdecl
Z_Construct_UScriptStruct_FKawaiiPhysicsModifyBone_Statics::NewProp_bDummy_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xec) = 1;
  return;
}

// NewProp_bSkipSimulate_SetBit @ 14de39b80

void __cdecl
Z_Construct_UScriptStruct_FKawaiiPhysicsModifyBone_Statics::NewProp_bSkipSimulate_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xed) = 1;
  return;
}

// NewStructOps @ 14de39b90

void * __cdecl Z_Construct_UScriptStruct_FKawaiiPhysicsModifyBone_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xf0;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FKawaiiPhysicsModifyBone,&UE::CoreUObject::Private::Construct<FKawaiiPhysicsModifyBone>,&UE::CoreUObject::Private::ConstructForTests<FKawaiiPhysicsModifyBone>,&UE::CoreUObject::Private::Destruct<FKawaiiPhysicsModifyBone>,&UE::CoreUObject::Private::Copy<FKawaiiPhysicsModifyBone>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0x10;
    return puVar1;
  }
  return (void *)0x0;
}

// EXPBDComplianceType_StaticEnum @ 14de39bd0

UEnum * __cdecl EXPBDComplianceType_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EXPBDComplianceType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_KawaiiPhysics();
    Z_Registration_Info_UEnum_EXPBDComplianceType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_KawaiiPhysics_EXPBDComplianceType,(UObject *)pUVar1,
                       L"EXPBDComplianceType");
  }
  return Z_Registration_Info_UEnum_EXPBDComplianceType.OuterSingleton;
}

// NewProp_bOverrideCompliance_SetBit @ 14de39c10

void __cdecl
Z_Construct_UScriptStruct_FModifyBoneConstraint_Statics::NewProp_bOverrideCompliance_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x20) = 1;
  return;
}

// NewProp_bIsDummy_SetBit @ 14de39c20

void __cdecl
Z_Construct_UScriptStruct_FModifyBoneConstraint_Statics::NewProp_bIsDummy_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x30) = 1;
  return;
}

// NewStructOps @ 14de39c30

void * __cdecl Z_Construct_UScriptStruct_FModifyBoneConstraint_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x38;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FModifyBoneConstraint,&UE::CoreUObject::Private::Construct<FModifyBoneConstraint>,&UE::CoreUObject::Private::ConstructForTests<FModifyBoneConstraint>,&UE::CoreUObject::Private::Destruct<FModifyBoneConstraint>,&UE::CoreUObject::Private::Copy<FModifyBoneConstraint>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_OverrideTargetFramerate_SetBit @ 14de39cf0

void __cdecl
Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_OverrideTargetFramerate_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xec) = 1;
  return;
}

// NewProp_bNeedWarmUp_SetBit @ 14de39d00

void __cdecl
Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_bNeedWarmUp_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xed) = 1;
  return;
}

// NewProp_bUpdatePhysicsSettingsInGame_SetBit @ 14de39d10

void __cdecl
Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::
NewProp_bUpdatePhysicsSettingsInGame_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x470) = 1;
  return;
}

// NewProp_ResetBoneTransformWhenBoneNotFound_SetBit @ 14de39d20

void __cdecl
Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::
NewProp_ResetBoneTransformWhenBoneNotFound_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x47a) = 1;
  return;
}

// NewProp_bAutoAddChildDummyBoneConstraint_SetBit @ 14de39d30

void __cdecl
Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::
NewProp_bAutoAddChildDummyBoneConstraint_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x4bc) = 1;
  return;
}

// NewProp_bEnableWind_SetBit @ 14de39d40

void __cdecl
Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_bEnableWind_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x550) = 1;
  return;
}

// NewProp_bAllowWorldCollision_SetBit @ 14de39d50

void __cdecl
Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_bAllowWorldCollision_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x558) = 1;
  return;
}

// NewProp_bOverrideCollisionParams_SetBit @ 14de39d60

void __cdecl
Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_bOverrideCollisionParams_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x559) = 1;
  return;
}

// NewProp_bIgnoreSelfComponent_SetBit @ 14de39d70

void __cdecl
Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_bIgnoreSelfComponent_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x6f0) = 1;
  return;
}

// NewProp_bInitPhysicsSettings_SetBit @ 14de39d80

void __cdecl
Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_bInitPhysicsSettings_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x790) = 1;
  return;
}

// NewStructOps @ 14de39d90

void * __cdecl Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x7e0;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FAnimNode_KawaiiPhysics,&UE::CoreUObject::Private::Construct<FAnimNode_KawaiiPhysics>,&UE::CoreUObject::Private::ConstructForTests<FAnimNode_KawaiiPhysics>,&UE::CoreUObject::Private::Destruct<FAnimNode_KawaiiPhysics>,&UE::CoreUObject::Private::Copy<FAnimNode_KawaiiPhysics>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0x10;
    return puVar1;
  }
  return (void *)0x0;
}

// `scalar_deleting_destructor' @ 14de39df0

void * __thiscall
FKawaiiPhysicsModule::_scalar_deleting_destructor_(FKawaiiPhysicsModule *this,uint param_1)

{
  *this = (FKawaiiPhysicsModule)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// Z_Construct_UClass_UKawaiiPhysicsBoneConstraintsDataAsset @ 14de3a410

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UKawaiiPhysicsBoneConstraintsDataAsset(void)

{
  if (Z_Registration_Info_UClass_UKawaiiPhysicsBoneConstraintsDataAsset.OuterSingleton ==
      (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UKawaiiPhysicsBoneConstraintsDataAsset.OuterSingleton,
               &Z_Construct_UClass_UKawaiiPhysicsBoneConstraintsDataAsset_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UKawaiiPhysicsBoneConstraintsDataAsset.OuterSingleton;
}

// Z_Construct_UScriptStruct_FModifyBoneConstraintData @ 14de3a450

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FModifyBoneConstraintData(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FModifyBoneConstraintData.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FModifyBoneConstraintData.InnerSingleton,
               &Z_Construct_UScriptStruct_FModifyBoneConstraintData_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FModifyBoneConstraintData.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FModifyBoneConstraintData.InnerSingleton;
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

// NewProp_bOverrideCompliance_SetBit @ 14de3a4d0

void __cdecl
Z_Construct_UScriptStruct_FModifyBoneConstraintData_Statics::NewProp_bOverrideCompliance_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x10) = 1;
  return;
}

// NewStructOps @ 14de3a4e0

void * __cdecl Z_Construct_UScriptStruct_FModifyBoneConstraintData_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x14;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FModifyBoneConstraintData,&UE::CoreUObject::Private::Construct<FModifyBoneConstraintData>,&UE::CoreUObject::Private::ConstructForTests<FModifyBoneConstraintData>,&UE::CoreUObject::Private::Destruct<FModifyBoneConstraintData>,&UE::CoreUObject::Private::Copy<FModifyBoneConstraintData>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14de3a520

void * __cdecl Z_Construct_UScriptStruct_FRegexPatternBoneSet_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FRegexPatternBoneSet,&UE::CoreUObject::Private::Construct<FRegexPatternBoneSet>,&UE::CoreUObject::Private::ConstructForTests<FRegexPatternBoneSet>,&UE::CoreUObject::Private::Destruct<FRegexPatternBoneSet>,&UE::CoreUObject::Private::Copy<FRegexPatternBoneSet>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UKawaiiPhysicsLibrary @ 14de3ab20

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UKawaiiPhysicsLibrary(void)

{
  if (Z_Registration_Info_UClass_UKawaiiPhysicsLibrary.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UKawaiiPhysicsLibrary.OuterSingleton,
               &Z_Construct_UClass_UKawaiiPhysicsLibrary_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UKawaiiPhysicsLibrary.OuterSingleton;
}

// Z_Construct_UScriptStruct_FKawaiiPhysicsReference @ 14de3ab60

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FKawaiiPhysicsReference(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FKawaiiPhysicsReference.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FKawaiiPhysicsReference.InnerSingleton,
               &Z_Construct_UScriptStruct_FKawaiiPhysicsReference_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FKawaiiPhysicsReference.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FKawaiiPhysicsReference.InnerSingleton;
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

// NewStructOps @ 14de3abe0

void * __cdecl Z_Construct_UScriptStruct_FKawaiiPhysicsReference_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FKawaiiPhysicsReference,&UE::CoreUObject::Private::Construct<FKawaiiPhysicsReference>,&UE::CoreUObject::Private::ConstructForTests<FKawaiiPhysicsReference>,&UE::CoreUObject::Private::Destruct<FKawaiiPhysicsReference>,&UE::CoreUObject::Private::Copy<FKawaiiPhysicsReference>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UKawaiiPhysicsLibrary_ConvertToKawaiiPhysics @ 14de3ac20

UFunction * __cdecl Z_Construct_UFunction_UKawaiiPhysicsLibrary_ConvertToKawaiiPhysics(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UKawaiiPhysicsLibrary_ConvertToKawaiiPhysics_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_Result_SetBit @ 14de3ac60

void __cdecl
Z_Construct_UFunction_UKawaiiPhysicsLibrary_ConvertToKawaiiPhysicsPure_Statics::
NewProp_Result_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x20) = 1;
  return;
}

// Z_Construct_UFunction_UKawaiiPhysicsLibrary_ConvertToKawaiiPhysicsPure @ 14de3ac70

UFunction * __cdecl Z_Construct_UFunction_UKawaiiPhysicsLibrary_ConvertToKawaiiPhysicsPure(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UKawaiiPhysicsLibrary_ConvertToKawaiiPhysicsPure_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 14de3acb0

void __cdecl
Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetAllowWorldCollision_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x10) = 1;
  return;
}

// Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetAllowWorldCollision @ 14de3adf0

UFunction * __cdecl Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetAllowWorldCollision(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetAllowWorldCollision_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetDummyBoneLength @ 14de3af40

UFunction * __cdecl Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetDummyBoneLength(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetDummyBoneLength_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 14de3af80

void __cdecl
Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetEnableWind_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x10) = 1;
  return;
}

// Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetEnableWind @ 14de3af90

UFunction * __cdecl Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetEnableWind(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetEnableWind_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetGravity @ 14de3afd0

UFunction * __cdecl Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetGravity(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetGravity_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 14de3b010

void __cdecl
Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetNeedWarmUp_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x10) = 1;
  return;
}

// Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetNeedWarmUp @ 14de3b020

UFunction * __cdecl Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetNeedWarmUp(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetNeedWarmUp_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetPhysicsSettings @ 14de3b060

UFunction * __cdecl Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetPhysicsSettings(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetPhysicsSettings_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetTeleportDistanceThreshold @ 14de3b0a0

UFunction * __cdecl Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetTeleportDistanceThreshold(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetTeleportDistanceThreshold_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetTeleportRotationThreshold @ 14de3b120

UFunction * __cdecl Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetTeleportRotationThreshold(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetTeleportRotationThreshold_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetWindScale @ 14de3b3a0

UFunction * __cdecl Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetWindScale(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetWindScale_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UKawaiiPhysicsLibrary_ResetDynamics @ 14de3b510

UFunction * __cdecl Z_Construct_UFunction_UKawaiiPhysicsLibrary_ResetDynamics(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UKawaiiPhysicsLibrary_ResetDynamics_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_AllowWorldCollision_SetBit @ 14de3b590

void __cdecl
Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetAllowWorldCollision_Statics::
NewProp_AllowWorldCollision_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x10) = 1;
  return;
}

// Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetAllowWorldCollision @ 14de3b5e0

UFunction * __cdecl Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetAllowWorldCollision(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetAllowWorldCollision_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetDummyBoneLength @ 14de3b620

UFunction * __cdecl Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetDummyBoneLength(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetDummyBoneLength_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_EnableWind_SetBit @ 14de3b660

void __cdecl
Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetEnableWind_Statics::NewProp_EnableWind_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x10) = 1;
  return;
}

// Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetEnableWind @ 14de3b670

UFunction * __cdecl Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetEnableWind(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetEnableWind_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetGravity @ 14de3b6b0

UFunction * __cdecl Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetGravity(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetGravity_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_NeedWarmUp_SetBit @ 14de3b6f0

void __cdecl
Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetNeedWarmUp_Statics::NewProp_NeedWarmUp_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x10) = 1;
  return;
}

// Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetNeedWarmUp @ 14de3b700

UFunction * __cdecl Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetNeedWarmUp(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetNeedWarmUp_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetPhysicsSettings @ 14de3b740

UFunction * __cdecl Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetPhysicsSettings(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetPhysicsSettings_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetTeleportDistanceThreshold @ 14de3b780

UFunction * __cdecl Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetTeleportDistanceThreshold(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetTeleportDistanceThreshold_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetTeleportRotationThreshold @ 14de3b7c0

UFunction * __cdecl Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetTeleportRotationThreshold(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetTeleportRotationThreshold_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetWindScale @ 14de3b800

UFunction * __cdecl Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetWindScale(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetWindScale_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UKawaiiPhysicsLimitsDataAsset @ 14de3bbb0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UKawaiiPhysicsLimitsDataAsset(void)

{
  if (Z_Registration_Info_UClass_UKawaiiPhysicsLimitsDataAsset.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UKawaiiPhysicsLimitsDataAsset.OuterSingleton,
               &Z_Construct_UClass_UKawaiiPhysicsLimitsDataAsset_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UKawaiiPhysicsLimitsDataAsset.OuterSingleton;
}

// Z_Construct_UScriptStruct_FCollisionLimitDataBase @ 14de3bbf0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FCollisionLimitDataBase(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FCollisionLimitDataBase.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FCollisionLimitDataBase.InnerSingleton,
               &Z_Construct_UScriptStruct_FCollisionLimitDataBase_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FCollisionLimitDataBase.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FCollisionLimitDataBase.InnerSingleton;
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

// NewStructOps @ 14de3bc70

void * __cdecl Z_Construct_UScriptStruct_FCollisionLimitDataBase_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x80;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FCollisionLimitDataBase,&UE::CoreUObject::Private::Construct<FCollisionLimitDataBase>,&UE::CoreUObject::Private::ConstructForTests<FCollisionLimitDataBase>,&UE::CoreUObject::Private::Destruct<FCollisionLimitDataBase>,&UE::CoreUObject::Private::Copy<FCollisionLimitDataBase>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0x10;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14de3bd50

void * __cdecl Z_Construct_UScriptStruct_FSphericalLimitData_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x90;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FSphericalLimitData,&UE::CoreUObject::Private::Construct<FSphericalLimitData>,&UE::CoreUObject::Private::ConstructForTests<FSphericalLimitData>,&UE::CoreUObject::Private::Destruct<FSphericalLimitData>,&UE::CoreUObject::Private::Copy<FSphericalLimitData>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0x10;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14de3be30

void * __cdecl Z_Construct_UScriptStruct_FCapsuleLimitData_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x90;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FCapsuleLimitData,&UE::CoreUObject::Private::Construct<FCapsuleLimitData>,&UE::CoreUObject::Private::ConstructForTests<FCapsuleLimitData>,&UE::CoreUObject::Private::Destruct<FCapsuleLimitData>,&UE::CoreUObject::Private::Copy<FCapsuleLimitData>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0x10;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14de3be70

void * __cdecl Z_Construct_UScriptStruct_FPlanarLimitData_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xa0;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FPlanarLimitData,&UE::CoreUObject::Private::Construct<FPlanarLimitData>,&UE::CoreUObject::Private::ConstructForTests<FPlanarLimitData>,&UE::CoreUObject::Private::Destruct<FPlanarLimitData>,&UE::CoreUObject::Private::Copy<FPlanarLimitData>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0x10;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UKawaiiPhysicsBoneConstraintsDataAsset_NoRegister @ 14de3c130

UClass * __cdecl Z_Construct_UClass_UKawaiiPhysicsBoneConstraintsDataAsset_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UKawaiiPhysicsBoneConstraintsDataAsset.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/KawaiiPhysics",L"KawaiiPhysicsBoneConstraintsDataAsset",
               &Z_Registration_Info_UClass_UKawaiiPhysicsBoneConstraintsDataAsset.InnerSingleton,
               UKawaiiPhysicsBoneConstraintsDataAsset::
               StaticRegisterNativesUKawaiiPhysicsBoneConstraintsDataAsset,0x40,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UKawaiiPhysicsBoneConstraintsDataAsset>,
               InternalVTableHelperCtorCaller<UKawaiiPhysicsBoneConstraintsDataAsset>,local_res8,
               UDataAsset::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UKawaiiPhysicsBoneConstraintsDataAsset.InnerSingleton;
}

// Z_Construct_UClass_UKawaiiPhysicsLimitsDataAsset_NoRegister @ 14de3c1f0

UClass * __cdecl Z_Construct_UClass_UKawaiiPhysicsLimitsDataAsset_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UKawaiiPhysicsLimitsDataAsset.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/KawaiiPhysics",L"KawaiiPhysicsLimitsDataAsset",
               &Z_Registration_Info_UClass_UKawaiiPhysicsLimitsDataAsset.InnerSingleton,
               UKawaiiPhysicsLimitsDataAsset::StaticRegisterNativesUKawaiiPhysicsLimitsDataAsset,
               0x60,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UKawaiiPhysicsLimitsDataAsset>,
               InternalVTableHelperCtorCaller<UKawaiiPhysicsLimitsDataAsset>,local_res8,
               UDataAsset::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UKawaiiPhysicsLimitsDataAsset.InnerSingleton;
}

// Z_Construct_UEnum_KawaiiPhysics_EBoneForwardAxis @ 14de3c2b0

UEnum * __cdecl Z_Construct_UEnum_KawaiiPhysics_EBoneForwardAxis(void)

{
  if (Z_Registration_Info_UEnum_EBoneForwardAxis.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EBoneForwardAxis.InnerSingleton,
               &Z_Construct_UEnum_KawaiiPhysics_EBoneForwardAxis_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EBoneForwardAxis.InnerSingleton;
}

// Z_Construct_UEnum_KawaiiPhysics_EPlanarConstraint @ 14de3c2f0

UEnum * __cdecl Z_Construct_UEnum_KawaiiPhysics_EPlanarConstraint(void)

{
  if (Z_Registration_Info_UEnum_EPlanarConstraint.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EPlanarConstraint.InnerSingleton,
               &Z_Construct_UEnum_KawaiiPhysics_EPlanarConstraint_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EPlanarConstraint.InnerSingleton;
}

// Z_Construct_UEnum_KawaiiPhysics_EXPBDComplianceType @ 14de3c330

UEnum * __cdecl Z_Construct_UEnum_KawaiiPhysics_EXPBDComplianceType(void)

{
  if (Z_Registration_Info_UEnum_EXPBDComplianceType.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EXPBDComplianceType.InnerSingleton,
               &Z_Construct_UEnum_KawaiiPhysics_EXPBDComplianceType_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EXPBDComplianceType.InnerSingleton;
}

// Z_Construct_UScriptStruct_FCapsuleLimit @ 14de3c370

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FCapsuleLimit(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FCapsuleLimit.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FCapsuleLimit.InnerSingleton,
               &Z_Construct_UScriptStruct_FCapsuleLimit_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FCapsuleLimit.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FCapsuleLimit.InnerSingleton;
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

// Z_Construct_UScriptStruct_FCollisionLimitBase @ 14de3c3f0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FCollisionLimitBase(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FCollisionLimitBase.InnerSingleton == (UScriptStruct *)0x0)
  {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FCollisionLimitBase.InnerSingleton,
               &Z_Construct_UScriptStruct_FCollisionLimitBase_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FCollisionLimitBase.InnerSingleton != (UScriptStruct *)0x0)
  {
    return Z_Registration_Info_UScriptStruct_FCollisionLimitBase.InnerSingleton;
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

// Z_Construct_UScriptStruct_FKawaiiPhysicsModifyBone @ 14de3c470

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FKawaiiPhysicsModifyBone(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FKawaiiPhysicsModifyBone.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FKawaiiPhysicsModifyBone.InnerSingleton,
               &Z_Construct_UScriptStruct_FKawaiiPhysicsModifyBone_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FKawaiiPhysicsModifyBone.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FKawaiiPhysicsModifyBone.InnerSingleton;
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

// Z_Construct_UScriptStruct_FKawaiiPhysicsSettings @ 14de3c4f0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FKawaiiPhysicsSettings(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FKawaiiPhysicsSettings.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FKawaiiPhysicsSettings.InnerSingleton,
               &Z_Construct_UScriptStruct_FKawaiiPhysicsSettings_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FKawaiiPhysicsSettings.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FKawaiiPhysicsSettings.InnerSingleton;
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

// Z_Construct_UScriptStruct_FModifyBoneConstraint @ 14de3c570

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FModifyBoneConstraint(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FModifyBoneConstraint.InnerSingleton == (UScriptStruct *)0x0
     ) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FModifyBoneConstraint.InnerSingleton,
               &Z_Construct_UScriptStruct_FModifyBoneConstraint_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FModifyBoneConstraint.InnerSingleton != (UScriptStruct *)0x0
     ) {
    return Z_Registration_Info_UScriptStruct_FModifyBoneConstraint.InnerSingleton;
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

// Z_Construct_UScriptStruct_FPlanarLimit @ 14de3c5f0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FPlanarLimit(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FPlanarLimit.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FPlanarLimit.InnerSingleton,
               &Z_Construct_UScriptStruct_FPlanarLimit_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FPlanarLimit.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FPlanarLimit.InnerSingleton;
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

// Z_Construct_UScriptStruct_FSphericalLimit @ 14de3c670

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FSphericalLimit(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FSphericalLimit.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FSphericalLimit.InnerSingleton,
               &Z_Construct_UScriptStruct_FSphericalLimit_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FSphericalLimit.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FSphericalLimit.InnerSingleton;
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

// Z_Construct_UPackage__Script_KawaiiPhysics @ 14de3c6f0

UPackage * __cdecl Z_Construct_UPackage__Script_KawaiiPhysics(void)

{
  if (Z_Registration_Info_UPackage__Script_KawaiiPhysics.OuterSingleton == (UPackage *)0x0) {
    UECodeGen_Private::ConstructUPackage
              (&Z_Registration_Info_UPackage__Script_KawaiiPhysics.OuterSingleton,&PackageParams);
  }
  return Z_Registration_Info_UPackage__Script_KawaiiPhysics.OuterSingleton;
}

// EPlanarConstraint_StaticEnum @ 14de3c730

UEnum * __cdecl EPlanarConstraint_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EPlanarConstraint.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_KawaiiPhysics();
    Z_Registration_Info_UEnum_EPlanarConstraint.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_KawaiiPhysics_EPlanarConstraint,(UObject *)pUVar1,
                       L"EPlanarConstraint");
  }
  return Z_Registration_Info_UEnum_EPlanarConstraint.OuterSingleton;
}

// EBoneForwardAxis_StaticEnum @ 14de3c770

UEnum * __cdecl EBoneForwardAxis_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EBoneForwardAxis.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_KawaiiPhysics();
    Z_Registration_Info_UEnum_EBoneForwardAxis.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_KawaiiPhysics_EBoneForwardAxis,(UObject *)pUVar1,
                       L"EBoneForwardAxis");
  }
  return Z_Registration_Info_UEnum_EBoneForwardAxis.OuterSingleton;
}

// ECollisionLimitType_StaticEnum @ 14de3c7b0

UEnum * __cdecl ECollisionLimitType_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ECollisionLimitType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_KawaiiPhysics();
    Z_Registration_Info_UEnum_ECollisionLimitType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_KawaiiPhysics_ECollisionLimitType,(UObject *)pUVar1,
                       L"ECollisionLimitType");
  }
  return Z_Registration_Info_UEnum_ECollisionLimitType.OuterSingleton;
}

// NewProp_bEnable_SetBit @ 14de3c7f0

void __cdecl
Z_Construct_UScriptStruct_FCollisionLimitBase_Statics::NewProp_bEnable_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x80) = 1;
  return;
}

// NewStructOps @ 14de3c800

void * __cdecl Z_Construct_UScriptStruct_FCollisionLimitBase_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x90;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FCollisionLimitBase,&UE::CoreUObject::Private::Construct<FCollisionLimitBase>,&UE::CoreUObject::Private::ConstructForTests<FCollisionLimitBase>,&UE::CoreUObject::Private::Destruct<FCollisionLimitBase>,&UE::CoreUObject::Private::Copy<FCollisionLimitBase>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0x10;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14de3c940

void * __cdecl Z_Construct_UScriptStruct_FSphericalLimit_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x90;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FSphericalLimit,&UE::CoreUObject::Private::Construct<FSphericalLimit>,&UE::CoreUObject::Private::ConstructForTests<FSphericalLimit>,&UE::CoreUObject::Private::Destruct<FSphericalLimit>,&UE::CoreUObject::Private::Copy<FSphericalLimit>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0x10;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14de3c980

void * __cdecl Z_Construct_UScriptStruct_FCapsuleLimit_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x90;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FCapsuleLimit,&UE::CoreUObject::Private::Construct<FCapsuleLimit>,&UE::CoreUObject::Private::ConstructForTests<FCapsuleLimit>,&UE::CoreUObject::Private::Destruct<FCapsuleLimit>,&UE::CoreUObject::Private::Copy<FCapsuleLimit>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0x10;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14de3c9c0

void * __cdecl Z_Construct_UScriptStruct_FPlanarLimit_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xb0;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FPlanarLimit,&UE::CoreUObject::Private::Construct<FPlanarLimit>,&UE::CoreUObject::Private::ConstructForTests<FPlanarLimit>,&UE::CoreUObject::Private::Destruct<FPlanarLimit>,&UE::CoreUObject::Private::Copy<FPlanarLimit>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0x10;
    return puVar1;
  }
  return (void *)0x0;
}

// ConstructItems<FKawaiiPhysicsModifyBone,FKawaiiPhysicsModifyBone,int> @ 14de3cc00

void __cdecl
ConstructItems<FKawaiiPhysicsModifyBone,FKawaiiPhysicsModifyBone,int>
          (void *param_1,FKawaiiPhysicsModifyBone *param_2,int param_3)

{
  ForAnyElementType *pFVar1;
  bool *pbVar2;
  FName *pFVar3;
  int iVar4;
  FScriptContainerElement *_Src;
  FName FVar5;
  undefined8 uVar6;
  double dVar7;
  float fVar8;
  int *piVar9;
  int *piVar10;
  
  if (param_3 != 0) {
    piVar9 = (int *)((longlong)param_1 + 0x24);
    piVar10 = &param_2->ParentIndex;
    do {
      FVar5 = *(FName *)(piVar10 + -2);
      pFVar1 = (ForAnyElementType *)(piVar9 + -3);
      pFVar3 = (FName *)((longlong)piVar10 + (longlong)param_1 + (-0x10 - (longlong)param_2));
      *pFVar3 = (((FKawaiiPhysicsModifyBone *)(piVar10 + -4))->BoneRef).BoneName;
      pFVar3[1] = FVar5;
      piVar9[-5] = *piVar10;
      pFVar1->Data = (FScriptContainerElement *)0x0;
      iVar4 = piVar10[4];
      _Src = (((TArray<int,TSizedDefaultAllocator<32>_> *)(piVar10 + 2))->AllocatorInstance).Data;
      piVar9[-1] = iVar4;
      if (iVar4 == 0) {
        *piVar9 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,iVar4,0,pFVar1,iVar4,piVar9);
        memcpy(pFVar1->Data,_Src,(longlong)iVar4 << 2);
      }
      fVar8 = ((FKawaiiPhysicsSettings *)(piVar10 + 6))->WorldDampingLocation;
      uVar6 = *(undefined8 *)(piVar10 + 8);
      piVar9[1] = (int)((FKawaiiPhysicsSettings *)(piVar10 + 6))->Damping;
      piVar9[2] = (int)fVar8;
      *(undefined8 *)(piVar9 + 3) = uVar6;
      *(undefined8 *)(piVar9 + 5) = *(undefined8 *)(piVar10 + 10);
      uVar6 = *(undefined8 *)(piVar10 + 0xe);
      *(double *)(piVar9 + 7) = (((TVector<double> *)(piVar10 + 0xc))->field0_0x0)._s_0.X;
      *(undefined8 *)(piVar9 + 9) = uVar6;
      *(undefined8 *)(piVar9 + 0xb) = *(undefined8 *)(piVar10 + 0x10);
      uVar6 = *(undefined8 *)(piVar10 + 0x14);
      *(double *)(piVar9 + 0xd) = (((TVector<double> *)(piVar10 + 0x12))->field0_0x0)._s_0.X;
      *(undefined8 *)(piVar9 + 0xf) = uVar6;
      *(undefined8 *)(piVar9 + 0x11) = *(undefined8 *)(piVar10 + 0x16);
      dVar7 = *(double *)(piVar10 + 0x1a);
      *(double *)(piVar9 + 0x13) = ((TQuat<double> *)(piVar10 + 0x18))->X;
      *(double *)(piVar9 + 0x15) = dVar7;
      dVar7 = *(double *)(piVar10 + 0x1e);
      *(double *)(piVar9 + 0x17) = *(double *)(piVar10 + 0x1c);
      *(double *)(piVar9 + 0x19) = dVar7;
      uVar6 = *(undefined8 *)(piVar10 + 0x22);
      *(double *)(piVar9 + 0x1b) = (((TVector<double> *)(piVar10 + 0x20))->field0_0x0)._s_0.X;
      *(undefined8 *)(piVar9 + 0x1d) = uVar6;
      *(undefined8 *)(piVar9 + 0x1f) = *(undefined8 *)(piVar10 + 0x24);
      dVar7 = *(double *)(piVar10 + 0x2a);
      *(double *)(piVar9 + 0x23) = ((TQuat<double> *)(piVar10 + 0x28))->X;
      *(double *)(piVar9 + 0x25) = dVar7;
      dVar7 = *(double *)(piVar10 + 0x2e);
      *(double *)(piVar9 + 0x27) = *(double *)(piVar10 + 0x2c);
      *(double *)(piVar9 + 0x29) = dVar7;
      uVar6 = *(undefined8 *)(piVar10 + 0x32);
      *(double *)(piVar9 + 0x2b) = (((TVector<double> *)(piVar10 + 0x30))->field0_0x0)._s_0.X;
      *(undefined8 *)(piVar9 + 0x2d) = uVar6;
      *(undefined8 *)(piVar9 + 0x2f) = *(undefined8 *)(piVar10 + 0x34);
      piVar9[0x31] = piVar10[0x36];
      *(bool *)(piVar9 + 0x32) = *(bool *)(piVar10 + 0x37);
      pbVar2 = (bool *)((longlong)piVar10 + 0xdd);
      piVar10 = piVar10 + 0x3c;
      *(bool *)((longlong)piVar9 + 0xc9) = *pbVar2;
      piVar9 = piVar9 + 0x3c;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// DestructItems<FKawaiiPhysicsModifyBone,int> @ 14de3cda0

void __cdecl
DestructItems<FKawaiiPhysicsModifyBone,int>(FKawaiiPhysicsModifyBone *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar2;
  
  if (param_2 != 0) {
    pTVar2 = &param_1->ChildIndexs;
    do {
      pFVar1 = (pTVar2->AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pTVar2 = pTVar2 + 0xf;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// InternalConstructor<UKawaiiPhysicsBoneConstraintsDataAsset> @ 14de3cde0

void __cdecl
InternalConstructor<UKawaiiPhysicsBoneConstraintsDataAsset>(FObjectInitializer *param_1)

{
  UDataAsset *this;
  
  this = (UDataAsset *)param_1->Obj;
  if (this != (UDataAsset *)0x0) {
    UDataAsset::UDataAsset(this,param_1);
    this->_padding_ = (longlong)&___7UKawaiiPhysicsBoneConstraintsDataAsset__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
  }
  return;
}

// InternalConstructor<UKawaiiPhysicsLibrary> @ 14de3ce20

void __cdecl InternalConstructor<UKawaiiPhysicsLibrary>(FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary *this;
  
  this = (UBlueprintFunctionLibrary *)param_1->Obj;
  if (this != (UBlueprintFunctionLibrary *)0x0) {
    UBlueprintFunctionLibrary::UBlueprintFunctionLibrary(this,param_1);
    *(undefined ***)this = &___7UKawaiiPhysicsLibrary__6B_;
  }
  return;
}

// InternalConstructor<UKawaiiPhysicsLimitsDataAsset> @ 14de3ce50

void __cdecl InternalConstructor<UKawaiiPhysicsLimitsDataAsset>(FObjectInitializer *param_1)

{
  UDataAsset *this;
  
  this = (UDataAsset *)param_1->Obj;
  if (this != (UDataAsset *)0x0) {
    UDataAsset::UDataAsset(this,param_1);
    this->_padding_ = (longlong)&___7UKawaiiPhysicsLimitsDataAsset__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1].NativeClass.Class.field0_0x0.DebugPtr = (UClass *)0x0;
  }
  return;
}

// InternalVTableHelperCtorCaller<UKawaiiPhysicsBoneConstraintsDataAsset> @ 14de3cea0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UKawaiiPhysicsBoneConstraintsDataAsset>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UDataAsset *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UKawaiiPhysicsBoneConstraintsDataAsset::GetPrivateStaticClass();
  this = (UDataAsset *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UDataAsset *)0x0) {
    UDataAsset::UDataAsset(this,param_1);
    this->_padding_ = (longlong)&___7UKawaiiPhysicsBoneConstraintsDataAsset__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UKawaiiPhysicsLibrary> @ 14de3cf60

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UKawaiiPhysicsLibrary>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UKawaiiPhysicsLibrary::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UBlueprintFunctionLibrary::UBlueprintFunctionLibrary
              ((UBlueprintFunctionLibrary *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UKawaiiPhysicsLibrary__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UKawaiiPhysicsLimitsDataAsset> @ 14de3d010

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UKawaiiPhysicsLimitsDataAsset>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UDataAsset *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UKawaiiPhysicsLimitsDataAsset::GetPrivateStaticClass();
  this = (UDataAsset *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UDataAsset *)0x0) {
    UDataAsset::UDataAsset(this,param_1);
    this->_padding_ = (longlong)&___7UKawaiiPhysicsLimitsDataAsset__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1].NativeClass.Class.field0_0x0.DebugPtr = (UClass *)0x0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// StaticEnum<enum_EBoneForwardAxis> @ 14de3d0e0

UEnum * __cdecl StaticEnum<enum_EBoneForwardAxis>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EBoneForwardAxis.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_KawaiiPhysics();
    Z_Registration_Info_UEnum_EBoneForwardAxis.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_KawaiiPhysics_EBoneForwardAxis,(UObject *)pUVar1,
                       L"EBoneForwardAxis");
  }
  return Z_Registration_Info_UEnum_EBoneForwardAxis.OuterSingleton;
}

// StaticEnum<enum_ECollisionLimitType> @ 14de3d120

UEnum * __cdecl StaticEnum<enum_ECollisionLimitType>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ECollisionLimitType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_KawaiiPhysics();
    Z_Registration_Info_UEnum_ECollisionLimitType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_KawaiiPhysics_ECollisionLimitType,(UObject *)pUVar1,
                       L"ECollisionLimitType");
  }
  return Z_Registration_Info_UEnum_ECollisionLimitType.OuterSingleton;
}

// StaticEnum<enum_EPlanarConstraint> @ 14de3d160

UEnum * __cdecl StaticEnum<enum_EPlanarConstraint>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EPlanarConstraint.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_KawaiiPhysics();
    Z_Registration_Info_UEnum_EPlanarConstraint.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_KawaiiPhysics_EPlanarConstraint,(UObject *)pUVar1,
                       L"EPlanarConstraint");
  }
  return Z_Registration_Info_UEnum_EPlanarConstraint.OuterSingleton;
}

// StaticEnum<enum_EXPBDComplianceType> @ 14de3d1a0

UEnum * __cdecl StaticEnum<enum_EXPBDComplianceType>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EXPBDComplianceType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_KawaiiPhysics();
    Z_Registration_Info_UEnum_EXPBDComplianceType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_KawaiiPhysics_EXPBDComplianceType,(UObject *)pUVar1,
                       L"EXPBDComplianceType");
  }
  return Z_Registration_Info_UEnum_EXPBDComplianceType.OuterSingleton;
}

// `scalar_deleting_destructor' @ 14de3e7e0

void * __thiscall
FAnimNode_KawaiiPhysics::_scalar_deleting_destructor_(FAnimNode_KawaiiPhysics *this,uint param_1)

{
  ~FAnimNode_KawaiiPhysics(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x7e0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14de3e820

void * __thiscall
UKawaiiPhysicsBoneConstraintsDataAsset::_scalar_deleting_destructor_
          (UKawaiiPhysicsBoneConstraintsDataAsset *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UKawaiiPhysicsBoneConstraintsDataAsset__6B_;
  pFVar1 = (this->BoneConstraintsData).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UDataAsset::~UDataAsset((UDataAsset *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14de3e890

void * __thiscall
UKawaiiPhysicsLibrary::_scalar_deleting_destructor_(UKawaiiPhysicsLibrary *this,uint param_1)

{
  *(undefined ***)this = &___7UKawaiiPhysicsLibrary__6B_;
  UBlueprintFunctionLibrary::~UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14de3e8f0

void * __thiscall
UKawaiiPhysicsLimitsDataAsset::_scalar_deleting_destructor_
          (UKawaiiPhysicsLimitsDataAsset *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UKawaiiPhysicsLimitsDataAsset__6B_;
  pFVar1 = (this->PlanarLimits).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->CapsuleLimits).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->SphericalLimits).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UDataAsset::~UDataAsset((UDataAsset *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x60);
  }
  return this;
}

// EmptyLinkFunctionForGeneratedCodeAnimNode_KawaiiPhysics @ 14de42da0

void __cdecl EmptyLinkFunctionForGeneratedCodeAnimNode_KawaiiPhysics(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeKawaiiPhysicsBoneConstraintsDataAsset @ 14de42db0

void __cdecl EmptyLinkFunctionForGeneratedCodeKawaiiPhysicsBoneConstraintsDataAsset(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeKawaiiPhysicsLibrary @ 14de42dc0

void __cdecl EmptyLinkFunctionForGeneratedCodeKawaiiPhysicsLibrary(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeKawaiiPhysicsLimitsDataAsset @ 14de42dd0

void __cdecl EmptyLinkFunctionForGeneratedCodeKawaiiPhysicsLimitsDataAsset(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeKawaiiPhysics_init @ 14de42de0

void __cdecl EmptyLinkFunctionForGeneratedCodeKawaiiPhysics_init(void)

{
  return;
}

// Z_Construct_UClass_UKawaiiPhysicsLibrary_NoRegister @ 14de48ac0

UClass * __cdecl Z_Construct_UClass_UKawaiiPhysicsLibrary_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UKawaiiPhysicsLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/KawaiiPhysics",L"KawaiiPhysicsLibrary",
               &Z_Registration_Info_UClass_UKawaiiPhysicsLibrary.InnerSingleton,
               UKawaiiPhysicsLibrary::StaticRegisterNativesUKawaiiPhysicsLibrary,0x28,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",InternalConstructor<UKawaiiPhysicsLibrary>,
               InternalVTableHelperCtorCaller<UKawaiiPhysicsLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UKawaiiPhysicsLibrary.InnerSingleton;
}

// Z_Construct_UEnum_KawaiiPhysics_ECollisionLimitType @ 14de48b80

UEnum * __cdecl Z_Construct_UEnum_KawaiiPhysics_ECollisionLimitType(void)

{
  if (Z_Registration_Info_UEnum_ECollisionLimitType.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ECollisionLimitType.InnerSingleton,
               &Z_Construct_UEnum_KawaiiPhysics_ECollisionLimitType_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ECollisionLimitType.InnerSingleton;
}

// Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics @ 14de48bc0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FAnimNode_KawaiiPhysics.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FAnimNode_KawaiiPhysics.InnerSingleton,
               &Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FAnimNode_KawaiiPhysics.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FAnimNode_KawaiiPhysics.InnerSingleton;
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

// Z_Construct_UScriptStruct_FCapsuleLimitData @ 14de48c40

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FCapsuleLimitData(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FCapsuleLimitData.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FCapsuleLimitData.InnerSingleton,
               &Z_Construct_UScriptStruct_FCapsuleLimitData_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FCapsuleLimitData.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FCapsuleLimitData.InnerSingleton;
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

// Z_Construct_UScriptStruct_FPlanarLimitData @ 14de48cc0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FPlanarLimitData(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FPlanarLimitData.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FPlanarLimitData.InnerSingleton,
               &Z_Construct_UScriptStruct_FPlanarLimitData_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FPlanarLimitData.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FPlanarLimitData.InnerSingleton;
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

// Z_Construct_UScriptStruct_FRegexPatternBoneSet @ 14de48d40

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FRegexPatternBoneSet(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FRegexPatternBoneSet.InnerSingleton == (UScriptStruct *)0x0)
  {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FRegexPatternBoneSet.InnerSingleton,
               &Z_Construct_UScriptStruct_FRegexPatternBoneSet_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FRegexPatternBoneSet.InnerSingleton != (UScriptStruct *)0x0)
  {
    return Z_Registration_Info_UScriptStruct_FRegexPatternBoneSet.InnerSingleton;
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

// Z_Construct_UScriptStruct_FSphericalLimitData @ 14de48dc0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FSphericalLimitData(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FSphericalLimitData.InnerSingleton == (UScriptStruct *)0x0)
  {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FSphericalLimitData.InnerSingleton,
               &Z_Construct_UScriptStruct_FSphericalLimitData_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FSphericalLimitData.InnerSingleton != (UScriptStruct *)0x0)
  {
    return Z_Registration_Info_UScriptStruct_FSphericalLimitData.InnerSingleton;
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

// IMPLEMENT_MODULE_KawaiiPhysics @ 14de4a360

void __cdecl IMPLEMENT_MODULE_KawaiiPhysics(void)

{
  return;
}

// `dynamic_atexit_destructor_for_'CVarEnableOldPhysicsMethodGravity'' @ 15045f550

void __cdecl _dynamic_atexit_destructor_for__CVarEnableOldPhysicsMethodGravity__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarEnableOldPhysicsMethodGravity);
  return;
}

// `dynamic_atexit_destructor_for_'CVarEnableOldPhysicsMethodSphereLimit'' @ 15045f570

void __cdecl _dynamic_atexit_destructor_for__CVarEnableOldPhysicsMethodSphereLimit__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarEnableOldPhysicsMethodSphereLimit);
  return;
}

// `dynamic_atexit_destructor_for_'LogKawaiiPhysicsLibrary'' @ 15045f590

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogKawaiiPhysicsLibrary__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogKawaiiPhysicsLibrary);
  return;
}

// `dynamic_atexit_destructor_for_'XPBDComplianceValues'' @ 15045f5b0

void __cdecl _dynamic_atexit_destructor_for__XPBDComplianceValues__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = XPBDComplianceValues.AllocatorInstance.Data;
  if (XPBDComplianceValues.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (XPBDComplianceValues.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

