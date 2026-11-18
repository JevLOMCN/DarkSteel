// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AnimationWarpingRuntime
// Functions: 174

// TypeName'' @ 1411cad80

void __cdecl `dynamic_initializer_for_'UE::AnimationWarping::FRootOffsetProvider::TypeName__(void)

{
  ::FName::FName(&UE::AnimationWarping::FRootOffsetProvider::TypeName,
                 L"UE::AnimationWarping::FRootOffsetProvider");
  return;
}

// `dynamic_initializer_for_'BoneAttributeNamespace'' @ 1411cada0

void __cdecl UE::Anim::_dynamic_initializer_for__BoneAttributeNamespace__(void)

{
  ::FName::FName(&BoneAttributeNamespace,"bone");
  return;
}

// `dynamic_initializer_for_'CVarAnimNodeFootPlacementDebug'' @ 1411cadc0

void __cdecl _dynamic_initializer_for__CVarAnimNodeFootPlacementDebug__(void)

{
  bool local_res8 [32];
  
  local_res8[0] = false;
  TAutoConsoleVariable<bool>::TAutoConsoleVariable<bool>
            (&CVarAnimNodeFootPlacementDebug,L"a.AnimNode.FootPlacement.Debug",local_res8,
             L"Turn on visualization debugging for Foot Placement",0);
  atexit(_dynamic_atexit_destructor_for__CVarAnimNodeFootPlacementDebug__);
  return;
}

// `dynamic_initializer_for_'CVarAnimNodeFootPlacementDebugDrawHistory'' @ 1411cae10

void __cdecl _dynamic_initializer_for__CVarAnimNodeFootPlacementDebugDrawHistory__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarAnimNodeFootPlacementDebugDrawHistory,
             L"a.AnimNode.FootPlacement.Debug.DrawHistory",local_res8,
             L"Turn on history visualization debugging 0 = Disabled, -1 = Pelvis, >1 = Foot Index. Clear with FlushPersistentDebugLines"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarAnimNodeFootPlacementDebugDrawHistory__);
  return;
}

// `dynamic_initializer_for_'CVarAnimNodeFootPlacementDebugTraces'' @ 1411cae60

void __cdecl _dynamic_initializer_for__CVarAnimNodeFootPlacementDebugTraces__(void)

{
  bool local_res8 [32];
  
  local_res8[0] = false;
  TAutoConsoleVariable<bool>::TAutoConsoleVariable<bool>
            (&CVarAnimNodeFootPlacementDebugTraces,L"a.AnimNode.FootPlacement.Debug.Traces",
             local_res8,L"Turn on visualization debugging for foot ground traces",0);
  atexit(_dynamic_atexit_destructor_for__CVarAnimNodeFootPlacementDebugTraces__);
  return;
}

// `dynamic_initializer_for_'CVarAnimNodeFootPlacementEnable'' @ 1411caeb0

void __cdecl _dynamic_initializer_for__CVarAnimNodeFootPlacementEnable__(void)

{
  bool local_res8 [32];
  
  local_res8[0] = true;
  TAutoConsoleVariable<bool>::TAutoConsoleVariable<bool>
            (&CVarAnimNodeFootPlacementEnable,L"a.AnimNode.FootPlacement.Enable",local_res8,
             L"Enable/Disable Foot Placement",0);
  atexit(_dynamic_atexit_destructor_for__CVarAnimNodeFootPlacementEnable__);
  return;
}

// `dynamic_initializer_for_'CVarAnimNodeFootPlacementEnableLock'' @ 1411caf00

void __cdecl _dynamic_initializer_for__CVarAnimNodeFootPlacementEnableLock__(void)

{
  bool local_res8 [32];
  
  local_res8[0] = true;
  TAutoConsoleVariable<bool>::TAutoConsoleVariable<bool>
            (&CVarAnimNodeFootPlacementEnableLock,L"a.AnimNode.FootPlacement.Enable.Lock",local_res8
             ,L"Enable/Disable Foot Locking",0);
  atexit(_dynamic_atexit_destructor_for__CVarAnimNodeFootPlacementEnableLock__);
  return;
}

// `dynamic_initializer_for_'CVarAnimNodeOffsetRootBoneDebug'' @ 1411caf50

void __cdecl _dynamic_initializer_for__CVarAnimNodeOffsetRootBoneDebug__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarAnimNodeOffsetRootBoneDebug,L"a.AnimNode.OffsetRootBone.Debug",local_res8,
             L"Turn on visualization debugging for Offset Root Bone",0);
  atexit(_dynamic_atexit_destructor_for__CVarAnimNodeOffsetRootBoneDebug__);
  return;
}

// `dynamic_initializer_for_'CVarAnimNodeOffsetRootBoneEnable'' @ 1411cafa0

void __cdecl _dynamic_initializer_for__CVarAnimNodeOffsetRootBoneEnable__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 1;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarAnimNodeOffsetRootBoneEnable,L"a.AnimNode.OffsetRootBone.Enable",local_res8,
             L"Toggle Offset Root Bone",0);
  atexit(_dynamic_atexit_destructor_for__CVarAnimNodeOffsetRootBoneEnable__);
  return;
}

// `dynamic_initializer_for_'CVarAnimNodeOffsetRootBoneModifyBone'' @ 1411caff0

void __cdecl _dynamic_initializer_for__CVarAnimNodeOffsetRootBoneModifyBone__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 1;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarAnimNodeOffsetRootBoneModifyBone,L"a.AnimNode.OffsetRootBone.ModifyBone",
             local_res8,L"Toggle whether the transform is applied to the bone",0);
  atexit(_dynamic_atexit_destructor_for__CVarAnimNodeOffsetRootBoneModifyBone__);
  return;
}

// `dynamic_initializer_for_'CVarAnimNodeOrientationWarpingDebug'' @ 1411cb040

void __cdecl _dynamic_initializer_for__CVarAnimNodeOrientationWarpingDebug__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarAnimNodeOrientationWarpingDebug,L"a.AnimNode.OrientationWarping.Debug",
             &AnimNodeOrientationWarpingDebug,
             L"Turn on visualization debugging for Orientation Warping.",0);
  atexit(_dynamic_atexit_destructor_for__CVarAnimNodeOrientationWarpingDebug__);
  return;
}

// `dynamic_initializer_for_'CVarAnimNodeOrientationWarpingDebugTransparency'' @ 1411cb090

void __cdecl _dynamic_initializer_for__CVarAnimNodeOrientationWarpingDebugTransparency__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarAnimNodeOrientationWarpingDebugTransparency,
             L"a.AnimNode.OrientationWarping.Debug.Transparency",
             &AnimNodeOrientationWarpingDebugTransparency,
             L"Enable transparency for debug draws, based on blend weight",0);
  atexit(_dynamic_atexit_destructor_for__CVarAnimNodeOrientationWarpingDebugTransparency__);
  return;
}

// `dynamic_initializer_for_'CVarAnimNodeOrientationWarpingEnable'' @ 1411cb0e0

void __cdecl _dynamic_initializer_for__CVarAnimNodeOrientationWarpingEnable__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarAnimNodeOrientationWarpingEnable,L"a.AnimNode.OrientationWarping.Enable",
             &AnimNodeOrientationWarpingEnable,L"Toggle Orientation Warping",0);
  atexit(_dynamic_atexit_destructor_for__CVarAnimNodeOrientationWarpingEnable__);
  return;
}

// `dynamic_initializer_for_'CVarAnimNodeOrientationWarpingVerbose'' @ 1411cb130

void __cdecl _dynamic_initializer_for__CVarAnimNodeOrientationWarpingVerbose__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarAnimNodeOrientationWarpingVerbose,L"a.AnimNode.OrientationWarping.Verbose",
             &AnimNodeOrientationWarpingVerbose,
             L"Turn on verbose graph debugging for Orientation Warping",0);
  atexit(_dynamic_atexit_destructor_for__CVarAnimNodeOrientationWarpingVerbose__);
  return;
}

// `dynamic_initializer_for_'CVarAnimNodeSlopeWarpingDebug'' @ 1411cb180

void __cdecl _dynamic_initializer_for__CVarAnimNodeSlopeWarpingDebug__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarAnimNodeSlopeWarpingDebug,L"a.AnimNode.SlopeWarping.Debug",local_res8,
             L"Turn on debug for AnimNode_SlopeWarping",0);
  atexit(_dynamic_atexit_destructor_for__CVarAnimNodeSlopeWarpingDebug__);
  return;
}

// `dynamic_initializer_for_'CVarAnimNodeSteeringEnabled'' @ 1411cb1d0

void __cdecl _dynamic_initializer_for__CVarAnimNodeSteeringEnabled__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarAnimNodeSteeringEnabled,L"a.AnimNode.Steering.Enabled",&bAnimNodeSteeringEnabled,
             L"True will enable steering anim nodes. Equivalent to setting alpha to non-zero.",0);
  atexit(_dynamic_atexit_destructor_for__CVarAnimNodeSteeringEnabled__);
  return;
}

// `dynamic_initializer_for_'CVarAnimNodeStrideWarpingDebug'' @ 1411cb220

void __cdecl _dynamic_initializer_for__CVarAnimNodeStrideWarpingDebug__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarAnimNodeStrideWarpingDebug,L"a.AnimNode.StrideWarping.Debug",local_res8,
             L"Turn on visualization debugging for Stride Warping",0);
  atexit(_dynamic_atexit_destructor_for__CVarAnimNodeStrideWarpingDebug__);
  return;
}

// `dynamic_initializer_for_'CVarAnimNodeStrideWarpingEnable'' @ 1411cb270

void __cdecl _dynamic_initializer_for__CVarAnimNodeStrideWarpingEnable__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 1;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarAnimNodeStrideWarpingEnable,L"a.AnimNode.StrideWarping.Enable",local_res8,
             L"Toggle Stride Warping",0);
  atexit(_dynamic_atexit_destructor_for__CVarAnimNodeStrideWarpingEnable__);
  return;
}

// `dynamic_initializer_for_'CVarAnimNodeStrideWarpingVerbose'' @ 1411cb2c0

void __cdecl _dynamic_initializer_for__CVarAnimNodeStrideWarpingVerbose__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarAnimNodeStrideWarpingVerbose,L"a.AnimNode.StrideWarping.Verbose",local_res8,
             L"Turn on verbose graph debugging for Stride Warping",0);
  atexit(_dynamic_atexit_destructor_for__CVarAnimNodeStrideWarpingVerbose__);
  return;
}

// `dynamic_initializer_for_'CVarSlopeWarpingEnable'' @ 1411cb310

void __cdecl _dynamic_initializer_for__CVarSlopeWarpingEnable__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 1;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarSlopeWarpingEnable,L"a.AnimNode.SlopeWarping.Enable",local_res8,
             L"Toggle Slope Warping",0);
  atexit(_dynamic_atexit_destructor_for__CVarSlopeWarpingEnable__);
  return;
}

// `dynamic_initializer_for_'ModuleRegistrantAnimationWarpingRuntime'' @ 1411cb360

void __cdecl _dynamic_initializer_for__ModuleRegistrantAnimationWarpingRuntime__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "AnimationWarpingRuntime";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"AnimationWarpingRuntime",0x17);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,
             FStaticallyLinkedModuleRegistrant<UE::AnimationWarping::FModule>::InitializeModule);
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_FootPlacement_Eval'' @ 1411cb3b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_FootPlacement_Eval__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_FootPlacement_Eval == (FThreadSafeStaticStat<FStat_STAT_FootPlacement_Eval>)0x0)
  {
    pFVar1 = FName::FName(local_res8,"STAT_FootPlacement_Eval");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FootPlacement_Eval,*pFVar1,
               L"Foot Placement Eval","STATGROUP_Anim","STATCAT_Advanced",L"Anim",true,true,ST_int64
               ,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_OffsetRootBone_Eval'' @ 1411cb440

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_OffsetRootBone_Eval__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_OffsetRootBone_Eval == (FThreadSafeStaticStat<FStat_STAT_OffsetRootBone_Eval>)0x0
     ) {
    pFVar1 = FName::FName(local_res8,"STAT_OffsetRootBone_Eval");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_OffsetRootBone_Eval,*pFVar1,
               L"OffsetRootBone Eval","STATGROUP_Anim","STATCAT_Advanced",L"Anim",true,true,ST_int64
               ,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_OrientationWarping_Eval'' @ 1411cb4d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_OrientationWarping_Eval__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_OrientationWarping_Eval ==
      (FThreadSafeStaticStat<FStat_STAT_OrientationWarping_Eval>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_OrientationWarping_Eval");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_OrientationWarping_Eval,*pFVar1,
               L"OrientationWarping Eval","STATGROUP_Anim","STATCAT_Advanced",L"Anim",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_OverrideRootMotion_Eval'' @ 1411cb560

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_OverrideRootMotion_Eval__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_OverrideRootMotion_Eval ==
      (FThreadSafeStaticStat<FStat_STAT_OverrideRootMotion_Eval>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_OverrideRootMotion_Eval");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_OverrideRootMotion_Eval,*pFVar1,
               L"OverrideRootMotion Eval","STATGROUP_Anim","STATCAT_Advanced",L"Anim",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_SlopeWarping_Eval'' @ 1411cb5f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_SlopeWarping_Eval__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_SlopeWarping_Eval == (FThreadSafeStaticStat<FStat_STAT_SlopeWarping_Eval>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_SlopeWarping_Eval");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SlopeWarping_Eval,*pFVar1,
               L"Slope Warping Eval","STATGROUP_Anim","STATCAT_Advanced",L"Anim",true,true,ST_int64,
               true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_StrideWarping_Eval'' @ 1411cb680

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_StrideWarping_Eval__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_StrideWarping_Eval == (FThreadSafeStaticStat<FStat_STAT_StrideWarping_Eval>)0x0)
  {
    pFVar1 = FName::FName(local_res8,"STAT_StrideWarping_Eval");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_StrideWarping_Eval,*pFVar1,
               L"StrideWarping Eval","STATGROUP_Anim","STATCAT_Advanced",L"Anim",true,true,ST_int64,
               true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_AnimationWarping_Source_Runtime_Public_AnimationWarpingLibrary_h__Script_AnimationWarpingRuntime_3883316934'' @ 1411cb710

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_AnimationWarping_Source_Runtime_Public_AnimationWarpingLibrary_h__Script_AnimationWarpingRuntime_3883316934__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/AnimationWarpingRuntime",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_AnimationWarping_Source_Runtime_Public_AnimationWarpingLibrary_h__Script_AnimationWarpingRuntime_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_AnimationWarping_Source_Runtime_Public_AnimationWarpingTypes_h__Script_AnimationWarpingRuntime_1180573421'' @ 1411cb750

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_AnimationWarping_Source_Runtime_Public_AnimationWarpingTypes_h__Script_AnimationWarpingRuntime_1180573421__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/AnimationWarpingRuntime",(FClassRegisterCompiledInInfo *)0x0,0,
             (FStructRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_AnimationWarping_Source_Runtime_Public_AnimationWarpingTypes_h__Script_AnimationWarpingRuntime_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_AnimationWarping_Source_Runtime_Public_BoneControllers_AnimNode_FootPlacement_h__Script_AnimationWarpingRuntime_965747562'' @ 1411cb7a0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_AnimationWarping_Source_Runtime_Public_BoneControllers_AnimNode_FootPlacement_h__Script_AnimationWarpingRuntime_965747562__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/AnimationWarpingRuntime",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_AnimationWarping_Source_Runtime_Public_BoneControllers_AnimNode_FootPlacement_h__Script_AnimationWarpingRuntime_Statics
             ::ScriptStructInfo,7,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_AnimationWarping_Source_Runtime_Public_BoneControllers_AnimNode_FootPlacement_h__Script_AnimationWarpingRuntime_Statics
             ::EnumInfo,3);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_AnimationWarping_Source_Runtime_Public_BoneControllers_AnimNode_OffsetRootBone_h__Script_AnimationWarpingRuntime_3836196622'' @ 1411cb7f0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_AnimationWarping_Source_Runtime_Public_BoneControllers_AnimNode_OffsetRootBone_h__Script_AnimationWarpingRuntime_3836196622__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/AnimationWarpingRuntime",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_AnimationWarping_Source_Runtime_Public_BoneControllers_AnimNode_OffsetRootBone_h__Script_AnimationWarpingRuntime_Statics
             ::ScriptStructInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_AnimationWarping_Source_Runtime_Public_BoneControllers_AnimNode_OffsetRootBone_h__Script_AnimationWarpingRuntime_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_AnimationWarping_Source_Runtime_Public_BoneControllers_AnimNode_OrientationWarping_h__Script_AnimationWarpingRuntime_2066060777'' @ 1411cb840

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_AnimationWarping_Source_Runtime_Public_BoneControllers_AnimNode_OrientationWarping_h__Script_AnimationWarpingRuntime_2066060777__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/AnimationWarpingRuntime",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_AnimationWarping_Source_Runtime_Public_BoneControllers_AnimNode_OrientationWarping_h__Script_AnimationWarpingRuntime_Statics
             ::ScriptStructInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_AnimationWarping_Source_Runtime_Public_BoneControllers_AnimNode_OrientationWarping_h__Script_AnimationWarpingRuntime_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_AnimationWarping_Source_Runtime_Public_BoneControllers_AnimNode_OverrideRootMotion_h__Script_AnimationWarpingRuntime_1797635602'' @ 1411cb890

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_AnimationWarping_Source_Runtime_Public_BoneControllers_AnimNode_OverrideRootMotion_h__Script_AnimationWarpingRuntime_1797635602__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/AnimationWarpingRuntime",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_AnimationWarping_Source_Runtime_Public_BoneControllers_AnimNode_OverrideRootMotion_h__Script_AnimationWarpingRuntime_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_AnimationWarping_Source_Runtime_Public_BoneControllers_AnimNode_SlopeWarping_h__Script_AnimationWarpingRuntime_3426654087'' @ 1411cb8d0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_AnimationWarping_Source_Runtime_Public_BoneControllers_AnimNode_SlopeWarping_h__Script_AnimationWarpingRuntime_3426654087__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/AnimationWarpingRuntime",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_AnimationWarping_Source_Runtime_Public_BoneControllers_AnimNode_SlopeWarping_h__Script_AnimationWarpingRuntime_Statics
             ::ScriptStructInfo,3,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_AnimationWarping_Source_Runtime_Public_BoneControllers_AnimNode_Steering_h__Script_AnimationWarpingRuntime_2260323306'' @ 1411cb910

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_AnimationWarping_Source_Runtime_Public_BoneControllers_AnimNode_Steering_h__Script_AnimationWarpingRuntime_2260323306__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/AnimationWarpingRuntime",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_AnimationWarping_Source_Runtime_Public_BoneControllers_AnimNode_Steering_h__Script_AnimationWarpingRuntime_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_AnimationWarping_Source_Runtime_Public_BoneControllers_AnimNode_StrideWarping_h__Script_AnimationWarpingRuntime_3049936444'' @ 1411cb950

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_AnimationWarping_Source_Runtime_Public_BoneControllers_AnimNode_StrideWarping_h__Script_AnimationWarpingRuntime_3049936444__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/AnimationWarpingRuntime",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_AnimationWarping_Source_Runtime_Public_BoneControllers_AnimNode_StrideWarping_h__Script_AnimationWarpingRuntime_Statics
             ::ScriptStructInfo,2,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_AnimationWarping_Source_Runtime_Public_BoneControllers_AnimNode_WarpTest_h__Script_AnimationWarpingRuntime_3420270773'' @ 1411cb990

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_AnimationWarping_Source_Runtime_Public_BoneControllers_AnimNode_WarpTest_h__Script_AnimationWarpingRuntime_3420270773__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/AnimationWarpingRuntime",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_AnimationWarping_Source_Runtime_Public_BoneControllers_AnimNode_WarpTest_h__Script_AnimationWarpingRuntime_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferPackage_UPackage__Script_AnimationWarpingRuntime'' @ 1411cb9d0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferPackage_UPackage__Script_AnimationWarpingRuntime__(void)

{
  FPackageReloadVersionInfo local_res8 [4];
  
  local_res8[0].BodyHash = 0xba2d705b;
  local_res8[0].DeclarationsHash = 0x9d3620de;
  RegisterCompiledInInfo
            (Z_Construct_UPackage__Script_AnimationWarpingRuntime,L"/Script/AnimationWarpingRuntime"
             ,&Z_Registration_Info_UPackage__Script_AnimationWarpingRuntime,local_res8);
  return;
}

// `scalar_deleting_destructor' @ 14a709380

void * __thiscall
FAnimNode_OrientationWarping::_scalar_deleting_destructor_
          (FAnimNode_OrientationWarping *this,uint param_1)

{
  ~FAnimNode_OrientationWarping(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x280);
  }
  return this;
}

// Z_Construct_UEnum_AnimationWarpingRuntime_EOrientationWarpingSpace @ 14a7093c0

UEnum * __cdecl Z_Construct_UEnum_AnimationWarpingRuntime_EOrientationWarpingSpace(void)

{
  if (Z_Registration_Info_UEnum_EOrientationWarpingSpace.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EOrientationWarpingSpace.InnerSingleton,
               &Z_Construct_UEnum_AnimationWarpingRuntime_EOrientationWarpingSpace_Statics::
                EnumParams);
  }
  return Z_Registration_Info_UEnum_EOrientationWarpingSpace.InnerSingleton;
}

// EOrientationWarpingSpace_StaticEnum @ 14a709400

UEnum * __cdecl EOrientationWarpingSpace_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EOrientationWarpingSpace.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AnimationWarpingRuntime();
    Z_Registration_Info_UEnum_EOrientationWarpingSpace.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_AnimationWarpingRuntime_EOrientationWarpingSpace,
                       (UObject *)pUVar1,L"EOrientationWarpingSpace");
  }
  return Z_Registration_Info_UEnum_EOrientationWarpingSpace.OuterSingleton;
}

// NewProp_bCounterCompenstateInterpolationByRootMotion_SetBit @ 14a7094d0

void __cdecl
Z_Construct_UScriptStruct_FAnimNode_OrientationWarping_Statics::
NewProp_bCounterCompenstateInterpolationByRootMotion_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x14c) = 1;
  return;
}

// NewProp_bScaleByGlobalBlendWeight_SetBit @ 14a7094e0

void __cdecl
Z_Construct_UScriptStruct_FAnimNode_OrientationWarping_Statics::
NewProp_bScaleByGlobalBlendWeight_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x14d) = 1;
  return;
}

// NewProp_bUseManualRootMotionVelocity_SetBit @ 14a7094f0

void __cdecl
Z_Construct_UScriptStruct_FAnimNode_OrientationWarping_Statics::
NewProp_bUseManualRootMotionVelocity_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x14e) = 1;
  return;
}

// NewStructOps @ 14a709500

void * __cdecl Z_Construct_UScriptStruct_FAnimNode_OrientationWarping_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x280;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FAnimNode_OrientationWarping,&UE::CoreUObject::Private::Construct<FAnimNode_OrientationWarping>,&UE::CoreUObject::Private::ConstructForTests<FAnimNode_OrientationWarping>,&UE::CoreUObject::Private::Destruct<FAnimNode_OrientationWarping>,&UE::CoreUObject::Private::Copy<FAnimNode_OrientationWarping>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0x10;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_bMirrored_SetBit @ 14a709580

void __cdecl
Z_Construct_UScriptStruct_FAnimNode_Steering_Statics::NewProp_bMirrored_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xf0) = 1;
  return;
}

// NewStructOps @ 14a709590

void * __cdecl Z_Construct_UScriptStruct_FAnimNode_Steering_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x1b0;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FAnimNode_Steering,&UE::CoreUObject::Private::Construct<FAnimNode_Steering>,&UE::CoreUObject::Private::ConstructForTests<FAnimNode_Steering>,&UE::CoreUObject::Private::Destruct<FAnimNode_Steering>,&UE::CoreUObject::Private::Copy<FAnimNode_Steering>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0x10;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UPackage__Script_AnimationWarpingRuntime @ 14a709ae0

UPackage * __cdecl Z_Construct_UPackage__Script_AnimationWarpingRuntime(void)

{
  if (Z_Registration_Info_UPackage__Script_AnimationWarpingRuntime.OuterSingleton == (UPackage *)0x0
     ) {
    UECodeGen_Private::ConstructUPackage
              (&Z_Registration_Info_UPackage__Script_AnimationWarpingRuntime.OuterSingleton,
               &PackageParams);
  }
  return Z_Registration_Info_UPackage__Script_AnimationWarpingRuntime.OuterSingleton;
}

// Z_Construct_UEnum_AnimationWarpingRuntime_EActorMovementCompensationMode @ 14a709b60

UEnum * __cdecl Z_Construct_UEnum_AnimationWarpingRuntime_EActorMovementCompensationMode(void)

{
  if (Z_Registration_Info_UEnum_EActorMovementCompensationMode.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EActorMovementCompensationMode.InnerSingleton,
               &Z_Construct_UEnum_AnimationWarpingRuntime_EActorMovementCompensationMode_Statics::
                EnumParams);
  }
  return Z_Registration_Info_UEnum_EActorMovementCompensationMode.InnerSingleton;
}

// Z_Construct_UEnum_AnimationWarpingRuntime_EFootPlacementLockType @ 14a709ba0

UEnum * __cdecl Z_Construct_UEnum_AnimationWarpingRuntime_EFootPlacementLockType(void)

{
  if (Z_Registration_Info_UEnum_EFootPlacementLockType.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EFootPlacementLockType.InnerSingleton,
               &Z_Construct_UEnum_AnimationWarpingRuntime_EFootPlacementLockType_Statics::EnumParams
              );
  }
  return Z_Registration_Info_UEnum_EFootPlacementLockType.InnerSingleton;
}

// Z_Construct_UEnum_AnimationWarpingRuntime_EPelvisHeightMode @ 14a709be0

UEnum * __cdecl Z_Construct_UEnum_AnimationWarpingRuntime_EPelvisHeightMode(void)

{
  if (Z_Registration_Info_UEnum_EPelvisHeightMode.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EPelvisHeightMode.InnerSingleton,
               &Z_Construct_UEnum_AnimationWarpingRuntime_EPelvisHeightMode_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EPelvisHeightMode.InnerSingleton;
}

// Z_Construct_UScriptStruct_FFootPlacemenLegDefinition @ 14a709c20

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FFootPlacemenLegDefinition(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FFootPlacemenLegDefinition.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FFootPlacemenLegDefinition.InnerSingleton,
               &Z_Construct_UScriptStruct_FFootPlacemenLegDefinition_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FFootPlacemenLegDefinition.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FFootPlacemenLegDefinition.InnerSingleton;
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

// Z_Construct_UScriptStruct_FFootPlacementInterpolationSettings @ 14a709ca0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FFootPlacementInterpolationSettings(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FFootPlacementInterpolationSettings.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FFootPlacementInterpolationSettings.InnerSingleton
               ,&Z_Construct_UScriptStruct_FFootPlacementInterpolationSettings_Statics::StructParams
              );
  }
  if (Z_Registration_Info_UScriptStruct_FFootPlacementInterpolationSettings.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FFootPlacementInterpolationSettings.InnerSingleton;
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

// Z_Construct_UScriptStruct_FFootPlacementPelvisSettings @ 14a709d20

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FFootPlacementPelvisSettings(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FFootPlacementPelvisSettings.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FFootPlacementPelvisSettings.InnerSingleton,
               &Z_Construct_UScriptStruct_FFootPlacementPelvisSettings_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FFootPlacementPelvisSettings.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FFootPlacementPelvisSettings.InnerSingleton;
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

// Z_Construct_UScriptStruct_FFootPlacementPlantSettings @ 14a709da0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FFootPlacementPlantSettings(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FFootPlacementPlantSettings.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FFootPlacementPlantSettings.InnerSingleton,
               &Z_Construct_UScriptStruct_FFootPlacementPlantSettings_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FFootPlacementPlantSettings.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FFootPlacementPlantSettings.InnerSingleton;
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

// EOffsetRootBoneMode_StaticEnum @ 14a709e20

UEnum * __cdecl EOffsetRootBoneMode_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EOffsetRootBoneMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AnimationWarpingRuntime();
    Z_Registration_Info_UEnum_EOffsetRootBoneMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_AnimationWarpingRuntime_EOffsetRootBoneMode,
                       (UObject *)pUVar1,L"EOffsetRootBoneMode");
  }
  return Z_Registration_Info_UEnum_EOffsetRootBoneMode.OuterSingleton;
}

// Z_Construct_UScriptStruct_FFootPlacementTraceSettings @ 14a709e60

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FFootPlacementTraceSettings(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FFootPlacementTraceSettings.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FFootPlacementTraceSettings.InnerSingleton,
               &Z_Construct_UScriptStruct_FFootPlacementTraceSettings_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FFootPlacementTraceSettings.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FFootPlacementTraceSettings.InnerSingleton;
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

// EFootPlacementLockType_StaticEnum @ 14a709ee0

UEnum * __cdecl EFootPlacementLockType_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EFootPlacementLockType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AnimationWarpingRuntime();
    Z_Registration_Info_UEnum_EFootPlacementLockType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_AnimationWarpingRuntime_EFootPlacementLockType,
                       (UObject *)pUVar1,L"EFootPlacementLockType");
  }
  return Z_Registration_Info_UEnum_EFootPlacementLockType.OuterSingleton;
}

// NewProp_bEnableFloorInterpolation_SetBit @ 14a709f20

void __cdecl
Z_Construct_UScriptStruct_FFootPlacementInterpolationSettings_Statics::
NewProp_bEnableFloorInterpolation_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x28) = 1;
  return;
}

// NewProp_bSmoothRootBone_SetBit @ 14a709f30

void __cdecl
Z_Construct_UScriptStruct_FFootPlacementInterpolationSettings_Statics::
NewProp_bSmoothRootBone_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x29) = 1;
  return;
}

// NewProp_bEnableSeparationInterpolation_SetBit @ 14a709f40

void __cdecl
Z_Construct_UScriptStruct_FFootPlacementInterpolationSettings_Statics::
NewProp_bEnableSeparationInterpolation_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x2a) = 1;
  return;
}

// NewStructOps @ 14a709f50

void * __cdecl
Z_Construct_UScriptStruct_FFootPlacementInterpolationSettings_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x2c;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FFootPlacementInterpolationSettings,&UE::CoreUObject::Private::Construct<FFootPlacementInterpolationSettings>,&UE::CoreUObject::Private::ConstructForTests<FFootPlacementInterpolationSettings>,&UE::CoreUObject::Private::Destruct<FFootPlacementInterpolationSettings>,&UE::CoreUObject::Private::Copy<FFootPlacementInterpolationSettings>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_bDisableComplexTrace_SetBit @ 14a70d020

void __cdecl
Z_Construct_UScriptStruct_FFootPlacementTraceSettings_Statics::NewProp_bDisableComplexTrace_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xc) = 1;
  return;
}

// NewProp_bEnabled_SetBit @ 14a70d030

void __cdecl
Z_Construct_UScriptStruct_FFootPlacementTraceSettings_Statics::NewProp_bEnabled_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x15) = 1;
  return;
}

// NewStructOps @ 14a70d040

void * __cdecl Z_Construct_UScriptStruct_FFootPlacementTraceSettings_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x18;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FFootPlacementTraceSettings,&UE::CoreUObject::Private::Construct<FFootPlacementTraceSettings>,&UE::CoreUObject::Private::ConstructForTests<FFootPlacementTraceSettings>,&UE::CoreUObject::Private::Destruct<FFootPlacementTraceSettings>,&UE::CoreUObject::Private::Copy<FFootPlacementTraceSettings>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14a70d1a0

void * __cdecl Z_Construct_UScriptStruct_FFootPlacementRootDefinition_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FFootPlacementRootDefinition,&UE::CoreUObject::Private::Construct<FFootPlacementRootDefinition>,&UE::CoreUObject::Private::ConstructForTests<FFootPlacementRootDefinition>,&UE::CoreUObject::Private::Destruct<FFootPlacementRootDefinition>,&UE::CoreUObject::Private::Copy<FFootPlacementRootDefinition>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// EPelvisHeightMode_StaticEnum @ 14a70d6e0

UEnum * __cdecl EPelvisHeightMode_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EPelvisHeightMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AnimationWarpingRuntime();
    Z_Registration_Info_UEnum_EPelvisHeightMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_AnimationWarpingRuntime_EPelvisHeightMode,(UObject *)pUVar1
                       ,L"EPelvisHeightMode");
  }
  return Z_Registration_Info_UEnum_EPelvisHeightMode.OuterSingleton;
}

// EActorMovementCompensationMode_StaticEnum @ 14a70d720

UEnum * __cdecl EActorMovementCompensationMode_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EActorMovementCompensationMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AnimationWarpingRuntime();
    Z_Registration_Info_UEnum_EActorMovementCompensationMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_AnimationWarpingRuntime_EActorMovementCompensationMode,
                       (UObject *)pUVar1,L"EActorMovementCompensationMode");
  }
  return Z_Registration_Info_UEnum_EActorMovementCompensationMode.OuterSingleton;
}

// NewProp_bEnableInterpolation_SetBit @ 14a70d760

void __cdecl
Z_Construct_UScriptStruct_FFootPlacementPelvisSettings_Statics::NewProp_bEnableInterpolation_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x1a) = 1;
  return;
}

// NewProp_bDisablePelvisOffsetInAir_SetBit @ 14a70d770

void __cdecl
Z_Construct_UScriptStruct_FFootPlacementPelvisSettings_Statics::
NewProp_bDisablePelvisOffsetInAir_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x1b) = 1;
  return;
}

// NewStructOps @ 14a70d780

void * __cdecl Z_Construct_UScriptStruct_FFootPlacementPelvisSettings_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x24;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FFootPlacementPelvisSettings,&UE::CoreUObject::Private::Construct<FFootPlacementPelvisSettings>,&UE::CoreUObject::Private::ConstructForTests<FFootPlacementPelvisSettings>,&UE::CoreUObject::Private::Destruct<FFootPlacementPelvisSettings>,&UE::CoreUObject::Private::Copy<FFootPlacementPelvisSettings>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// `scalar_deleting_destructor' @ 14a70d7c0

void * __thiscall
FAnimNode_StrideWarping::_scalar_deleting_destructor_(FAnimNode_StrideWarping *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->FootData).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FootDefinitions).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7FAnimNode_SkeletalControlBase__6B_;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  this->_padding_ = (longlong)&___7FAnimNode_Base__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x248);
  }
  return this;
}

// Z_Construct_UScriptStruct_FStrideWarpingFootDefinition @ 14a70d840

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FStrideWarpingFootDefinition(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FStrideWarpingFootDefinition.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FStrideWarpingFootDefinition.InnerSingleton,
               &Z_Construct_UScriptStruct_FStrideWarpingFootDefinition_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FStrideWarpingFootDefinition.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FStrideWarpingFootDefinition.InnerSingleton;
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

// NewStructOps @ 14a70d8c0

void * __cdecl Z_Construct_UScriptStruct_FStrideWarpingFootDefinition_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x30;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FStrideWarpingFootDefinition,&UE::CoreUObject::Private::Construct<FStrideWarpingFootDefinition>,&UE::CoreUObject::Private::ConstructForTests<FStrideWarpingFootDefinition>,&UE::CoreUObject::Private::Destruct<FStrideWarpingFootDefinition>,&UE::CoreUObject::Private::Copy<FStrideWarpingFootDefinition>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14a70d900

void * __cdecl Z_Construct_UScriptStruct_FFootPlacemenLegDefinition_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x4c;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FFootPlacemenLegDefinition,&UE::CoreUObject::Private::Construct<FFootPlacemenLegDefinition>,&UE::CoreUObject::Private::ConstructForTests<FFootPlacemenLegDefinition>,&UE::CoreUObject::Private::Destruct<FFootPlacemenLegDefinition>,&UE::CoreUObject::Private::Copy<FFootPlacemenLegDefinition>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_bOrientStrideDirectionUsingFloorNormal_SetBit @ 14a70d940

void __cdecl
Z_Construct_UScriptStruct_FAnimNode_StrideWarping_Statics::
NewProp_bOrientStrideDirectionUsingFloorNormal_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x200) = 1;
  return;
}

// NewProp_bCompensateIKUsingFKThighRotation_SetBit @ 14a70d950

void __cdecl
Z_Construct_UScriptStruct_FAnimNode_StrideWarping_Statics::
NewProp_bCompensateIKUsingFKThighRotation_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x201) = 1;
  return;
}

// NewProp_bClampIKUsingFKLimits_SetBit @ 14a70d960

void __cdecl
Z_Construct_UScriptStruct_FAnimNode_StrideWarping_Statics::NewProp_bClampIKUsingFKLimits_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x202) = 1;
  return;
}

// NewProp_bDisableIfMissingRootMotion_SetBit @ 14a70d970

void __cdecl
Z_Construct_UScriptStruct_FAnimNode_StrideWarping_Statics::
NewProp_bDisableIfMissingRootMotion_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x203) = 1;
  return;
}

// NewStructOps @ 14a70d980

void * __cdecl Z_Construct_UScriptStruct_FAnimNode_StrideWarping_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x248;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FAnimNode_StrideWarping,&UE::CoreUObject::Private::Construct<FAnimNode_StrideWarping>,&UE::CoreUObject::Private::ConstructForTests<FAnimNode_StrideWarping>,&UE::CoreUObject::Private::Destruct<FAnimNode_StrideWarping>,&UE::CoreUObject::Private::Copy<FAnimNode_StrideWarping>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_bReconstructWorldPlantFromVelocity_SetBit @ 14a70e1d0

void __cdecl
Z_Construct_UScriptStruct_FFootPlacementPlantSettings_Statics::
NewProp_bReconstructWorldPlantFromVelocity_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x30) = 1;
  return;
}

// NewProp_bAdjustHeelBeforePlanting_SetBit @ 14a70e3e0

void __cdecl
Z_Construct_UScriptStruct_FFootPlacementPlantSettings_Statics::
NewProp_bAdjustHeelBeforePlanting_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x31) = 1;
  return;
}

// NewStructOps @ 14a70e3f0

void * __cdecl Z_Construct_UScriptStruct_FFootPlacementPlantSettings_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x34;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FFootPlacementPlantSettings,&UE::CoreUObject::Private::Construct<FFootPlacementPlantSettings>,&UE::CoreUObject::Private::ConstructForTests<FFootPlacementPlantSettings>,&UE::CoreUObject::Private::Destruct<FFootPlacementPlantSettings>,&UE::CoreUObject::Private::Copy<FFootPlacementPlantSettings>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// `scalar_deleting_destructor' @ 14a70e430

void * __thiscall
FAnimNode_OverrideRootMotion::_scalar_deleting_destructor_
          (FAnimNode_OverrideRootMotion *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FAnimNode_Base__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// NewStructOps @ 14a70e470

void * __cdecl Z_Construct_UScriptStruct_FAnimNode_OverrideRootMotion_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x30;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FAnimNode_OverrideRootMotion,&UE::CoreUObject::Private::Construct<FAnimNode_OverrideRootMotion>,&UE::CoreUObject::Private::ConstructForTests<FAnimNode_OverrideRootMotion>,&UE::CoreUObject::Private::Destruct<FAnimNode_OverrideRootMotion>,&UE::CoreUObject::Private::Copy<FAnimNode_OverrideRootMotion>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14a70e4b0

void * __cdecl Z_Construct_UScriptStruct_FAnimNode_FootPlacement_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x520;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FAnimNode_FootPlacement,&UE::CoreUObject::Private::Construct<FAnimNode_FootPlacement>,&UE::CoreUObject::Private::ConstructForTests<FAnimNode_FootPlacement>,&UE::CoreUObject::Private::Destruct<FAnimNode_FootPlacement>,&UE::CoreUObject::Private::Copy<FAnimNode_FootPlacement>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0x10;
    return puVar1;
  }
  return (void *)0x0;
}

// `scalar_deleting_destructor' @ 14a712950

void * __thiscall
FAnimNode_OffsetRootBone::_scalar_deleting_destructor_(FAnimNode_OffsetRootBone *this,uint param_1)

{
  *(undefined ***)this = &___7FAnimNode_Base__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x100);
  }
  return this;
}

// Z_Construct_UClass_UAnimationWarpingLibrary @ 14a712a50

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UAnimationWarpingLibrary(void)

{
  if (Z_Registration_Info_UClass_UAnimationWarpingLibrary.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UAnimationWarpingLibrary.OuterSingleton,
               &Z_Construct_UClass_UAnimationWarpingLibrary_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UAnimationWarpingLibrary.OuterSingleton;
}

// NewProp_ReturnValue_SetBit @ 14a712a90

void __cdecl
Z_Construct_UFunction_UAnimationWarpingLibrary_GetCurveValueFromAnimation_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x18) = 1;
  return;
}

// Z_Construct_UFunction_UAnimationWarpingLibrary_GetCurveValueFromAnimation @ 14a712aa0

UFunction * __cdecl Z_Construct_UFunction_UAnimationWarpingLibrary_GetCurveValueFromAnimation(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAnimationWarpingLibrary_GetCurveValueFromAnimation_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 14a712ae0

void __cdecl
Z_Construct_UFunction_UAnimationWarpingLibrary_GetFloatValueFromCurve_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x10) = 1;
  return;
}

// Z_Construct_UFunction_UAnimationWarpingLibrary_GetFloatValueFromCurve @ 14a712b70

UFunction * __cdecl Z_Construct_UFunction_UAnimationWarpingLibrary_GetFloatValueFromCurve(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAnimationWarpingLibrary_GetFloatValueFromCurve_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UAnimationWarpingLibrary_GetOffsetRootTransform @ 14a712c00

UFunction * __cdecl Z_Construct_UFunction_UAnimationWarpingLibrary_GetOffsetRootTransform(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAnimationWarpingLibrary_GetOffsetRootTransform_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 14a712c40

void __cdecl
Z_Construct_UFunction_UAnimationWarpingLibrary_GetVectorValueFromCurve_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x28) = 1;
  return;
}

// Z_Construct_UFunction_UAnimationWarpingLibrary_GetVectorValueFromCurve @ 14a712c50

UFunction * __cdecl Z_Construct_UFunction_UAnimationWarpingLibrary_GetVectorValueFromCurve(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAnimationWarpingLibrary_GetVectorValueFromCurve_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// `scalar_deleting_destructor' @ 14a713710

void * __thiscall
FAnimNode_WarpTest::_scalar_deleting_destructor_(FAnimNode_WarpTest *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->Transforms).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined ***)this = &___7FAnimNode_Base__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xb0);
  }
  return this;
}

// NewStructOps @ 14a713760

void * __cdecl Z_Construct_UScriptStruct_FAnimNode_WarpTest_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xb0;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FAnimNode_WarpTest,&UE::CoreUObject::Private::Construct<FAnimNode_WarpTest>,&UE::CoreUObject::Private::ConstructForTests<FAnimNode_WarpTest>,&UE::CoreUObject::Private::Destruct<FAnimNode_WarpTest>,&UE::CoreUObject::Private::Copy<FAnimNode_WarpTest>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0x10;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UScriptStruct_FSlopeWarpingFootData @ 14a7137a0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FSlopeWarpingFootData(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FSlopeWarpingFootData.InnerSingleton == (UScriptStruct *)0x0
     ) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FSlopeWarpingFootData.InnerSingleton,
               &Z_Construct_UScriptStruct_FSlopeWarpingFootData_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FSlopeWarpingFootData.InnerSingleton != (UScriptStruct *)0x0
     ) {
    return Z_Registration_Info_UScriptStruct_FSlopeWarpingFootData.InnerSingleton;
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

// Z_Construct_UScriptStruct_FSlopeWarpingFootDefinition @ 14a713820

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FSlopeWarpingFootDefinition(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FSlopeWarpingFootDefinition.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FSlopeWarpingFootDefinition.InnerSingleton,
               &Z_Construct_UScriptStruct_FSlopeWarpingFootDefinition_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FSlopeWarpingFootDefinition.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FSlopeWarpingFootDefinition.InnerSingleton;
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

// NewStructOps @ 14a7138a0

void * __cdecl Z_Construct_UScriptStruct_FSlopeWarpingFootDefinition_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x28;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FSlopeWarpingFootDefinition,&UE::CoreUObject::Private::Construct<FSlopeWarpingFootDefinition>,&UE::CoreUObject::Private::ConstructForTests<FSlopeWarpingFootDefinition>,&UE::CoreUObject::Private::Destruct<FSlopeWarpingFootDefinition>,&UE::CoreUObject::Private::Copy<FSlopeWarpingFootDefinition>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14a7139c0

void * __cdecl Z_Construct_UScriptStruct_FSlopeWarpingFootData_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xb0;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FSlopeWarpingFootData,&UE::CoreUObject::Private::Construct<FSlopeWarpingFootData>,&UE::CoreUObject::Private::ConstructForTests<FSlopeWarpingFootData>,&UE::CoreUObject::Private::Destruct<FSlopeWarpingFootData>,&UE::CoreUObject::Private::Copy<FSlopeWarpingFootData>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0x10;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_bKeepMeshInsideOfCapsule_SetBit @ 14a713a00

void __cdecl
Z_Construct_UScriptStruct_FAnimNode_SlopeWarping_Statics::NewProp_bKeepMeshInsideOfCapsule_SetBit
          (void *param_1)

{
  *(uint *)((longlong)param_1 + 0x2ac) = *(uint *)((longlong)param_1 + 0x2ac) | 1;
  return;
}

// NewProp_bPullPelvisDown_SetBit @ 14a713a10

void __cdecl
Z_Construct_UScriptStruct_FAnimNode_SlopeWarping_Statics::NewProp_bPullPelvisDown_SetBit
          (void *param_1)

{
  *(uint *)((longlong)param_1 + 0x2ac) = *(uint *)((longlong)param_1 + 0x2ac) | 2;
  return;
}

// NewProp_bUseCustomFloorOffset_SetBit @ 14a713a20

void __cdecl
Z_Construct_UScriptStruct_FAnimNode_SlopeWarping_Statics::NewProp_bUseCustomFloorOffset_SetBit
          (void *param_1)

{
  *(uint *)((longlong)param_1 + 0x2ac) = *(uint *)((longlong)param_1 + 0x2ac) | 4;
  return;
}

// NewProp_bWasOnGround_SetBit @ 14a713a30

void __cdecl
Z_Construct_UScriptStruct_FAnimNode_SlopeWarping_Statics::NewProp_bWasOnGround_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x2ac) = *(uint *)((longlong)param_1 + 0x2ac) | 8;
  return;
}

// NewProp_bShowDebug_SetBit @ 14a713a40

void __cdecl
Z_Construct_UScriptStruct_FAnimNode_SlopeWarping_Statics::NewProp_bShowDebug_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x2ac) = *(uint *)((longlong)param_1 + 0x2ac) | 0x10;
  return;
}

// NewProp_bFloorSmoothingInitialized_SetBit @ 14a713a50

void __cdecl
Z_Construct_UScriptStruct_FAnimNode_SlopeWarping_Statics::NewProp_bFloorSmoothingInitialized_SetBit
          (void *param_1)

{
  *(uint *)((longlong)param_1 + 0x2ac) = *(uint *)((longlong)param_1 + 0x2ac) | 0x20;
  return;
}

// NewStructOps @ 14a713a60

void * __cdecl Z_Construct_UScriptStruct_FAnimNode_SlopeWarping_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x2e0;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FAnimNode_SlopeWarping,&UE::CoreUObject::Private::Construct<FAnimNode_SlopeWarping>,&UE::CoreUObject::Private::ConstructForTests<FAnimNode_SlopeWarping>,&UE::CoreUObject::Private::Destruct<FAnimNode_SlopeWarping>,&UE::CoreUObject::Private::Copy<FAnimNode_SlopeWarping>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// EOffsetRootBone_CollisionTestingMode_StaticEnum @ 14a713aa0

UEnum * __cdecl EOffsetRootBone_CollisionTestingMode_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EOffsetRootBone_CollisionTestingMode.OuterSingleton == (UEnum *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_AnimationWarpingRuntime();
    Z_Registration_Info_UEnum_EOffsetRootBone_CollisionTestingMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_AnimationWarpingRuntime_EOffsetRootBone_CollisionTestingMode
                       ,(UObject *)pUVar1,L"EOffsetRootBone_CollisionTestingMode");
  }
  return Z_Registration_Info_UEnum_EOffsetRootBone_CollisionTestingMode.OuterSingleton;
}

// NewStructOps @ 14a713ae0

void * __cdecl Z_Construct_UScriptStruct_FAnimNode_OffsetRootBone_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x100;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FAnimNode_OffsetRootBone,&UE::CoreUObject::Private::Construct<FAnimNode_OffsetRootBone>,&UE::CoreUObject::Private::ConstructForTests<FAnimNode_OffsetRootBone>,&UE::CoreUObject::Private::Destruct<FAnimNode_OffsetRootBone>,&UE::CoreUObject::Private::Copy<FAnimNode_OffsetRootBone>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0x10;
    return puVar1;
  }
  return (void *)0x0;
}

// `scalar_deleting_destructor' @ 14a7152f0

void * __thiscall
FAnimNode_Steering::_scalar_deleting_destructor_(FAnimNode_Steering *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FAnimNode_SkeletalControlBase__6B_;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  this->_padding_ = (longlong)&___7FAnimNode_Base__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x1b0);
  }
  return this;
}

// Cast<UAnimSequenceBase,UAnimationAsset> @ 14a719aa0

UAnimSequenceBase * __cdecl
Cast<UAnimSequenceBase,UAnimationAsset>(TObjectPtr<UAnimationAsset> *param_1)

{
  bool bVar1;
  UClass *pUVar2;
  
  if ((param_1->field0_0x0).DebugPtr != (UAnimationAsset *)0x0) {
    pUVar2 = Z_Construct_UClass_UAnimSequenceBase_NoRegister();
    bVar1 = FObjectPtr::IsA((FObjectPtr *)param_1,pUVar2);
    if (bVar1) {
      return (UAnimSequenceBase *)(param_1->field0_0x0).DebugPtr;
    }
  }
  return (UAnimSequenceBase *)0x0;
}

// HeapSortInternal<FAnimNode_OrientationWarping::FOrientationWarpingSpineBoneData,int,FIdentityFunctor,TDereferenceWrapper<FAnimNode_OrientationWarping::FOrientationWarpingSpineBoneData,FAnimNode_OrientationWarping::FOrientationWarpingSpineBoneData::FCompareBoneIndex>_> @ 14a719d20

void __cdecl
AlgoImpl::
HeapSortInternal<FAnimNode_OrientationWarping::FOrientationWarpingSpineBoneData,int,FIdentityFunctor,TDereferenceWrapper<FAnimNode_OrientationWarping::FOrientationWarpingSpineBoneData,FAnimNode_OrientationWarping::FOrientationWarpingSpineBoneData::FCompareBoneIndex>_>
          (FOrientationWarpingSpineBoneData *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<FAnimNode_OrientationWarping::FOrientationWarpingSpineBoneData,FAnimNode_OrientationWarping::FOrientationWarpingSpineBoneData::FCompareBoneIndex>
          param_4)

{
  FOrientationWarpingSpineBoneData *pFVar1;
  FOrientationWarpingSpineBoneData *pFVar2;
  FOrientationWarpingSpineBoneData FVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  
  if (param_2 < 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar6 = (param_2 + -2) / 2;
  iVar7 = iVar6 * 2 + 1;
  iVar9 = iVar7;
  iVar10 = iVar6;
  do {
    while (param_2 <= iVar7) {
LAB_14a719e02:
      if (iVar10 == 0) {
        iVar7 = param_2 + -1;
        lVar11 = (longlong)iVar7;
        if (0 < iVar7) {
          do {
            iVar9 = 0;
            FVar3 = *param_1;
            *param_1 = param_1[lVar11];
            param_1[lVar11] = FVar3;
            if (1 < iVar7) {
              do {
                iVar10 = iVar9 * 2;
                iVar6 = iVar10 + 1;
                if (iVar10 + 2 < iVar7) {
                  if ((int)param_1[(longlong)iVar10 + 2].BoneIndex < (int)param_1[iVar6].BoneIndex)
                  {
                    iVar6 = iVar10;
                  }
                  iVar6 = iVar6 + 1;
                }
                pFVar1 = param_1 + iVar6;
                pFVar2 = param_1 + iVar9;
                if ((int)pFVar1->BoneIndex <= (int)pFVar2->BoneIndex) break;
                FVar3 = *pFVar2;
                *pFVar2 = *pFVar1;
                *pFVar1 = FVar3;
                iVar9 = iVar6;
              } while (iVar6 * 2 + 1 < iVar7);
            }
            iVar7 = iVar7 + -1;
            lVar11 = lVar11 + -1;
          } while (0 < lVar11);
        }
        return;
      }
      iVar6 = iVar10 + -1;
      iVar7 = iVar9 + -2;
      iVar9 = iVar7;
      iVar10 = iVar6;
    }
    iVar7 = iVar6 * 2;
    iVar8 = iVar7 + 1;
    if (iVar7 + 2 < param_2) {
      if ((int)param_1[(longlong)iVar7 + 2].BoneIndex < (int)param_1[iVar8].BoneIndex) {
        iVar8 = iVar7;
      }
      iVar8 = iVar8 + 1;
    }
    pFVar1 = param_1 + iVar8;
    pFVar2 = param_1 + iVar6;
    if ((int)pFVar1->BoneIndex <= (int)pFVar2->BoneIndex) goto LAB_14a719e02;
    FVar3 = *pFVar2;
    *pFVar2 = *pFVar1;
    iVar7 = iVar8 * 2 + 1;
    *pFVar1 = FVar3;
    iVar6 = iVar8;
  } while( true );
}

// Integrate<UE::Math::TVector<double>_> @ 14a719eb0

void __cdecl
RK4Integrator::Integrate<UE::Math::TVector<double>_>
          (FRK4State<UE::Math::TVector<double>_> *param_1,TVector<double> *param_2,
          FRK4SpringConstants *param_3,float *param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  
  dVar20 = __real_3fc5555560000000;
  dVar1 = (param_1->Velocity).field0_0x0._s_0.X;
  dVar2 = (param_1->Position).field0_0x0._s_0.Y;
  dVar24 = (param_1->Velocity).field0_0x0._s_0.Y;
  dVar3 = (param_2->field0_0x0)._s_0.Z;
  dVar4 = (param_1->Position).field0_0x0._s_0.Z;
  dVar22 = (double)param_3->SpringStiffness;
  dVar25 = (double)param_3->DampingConstant;
  dVar5 = (param_2->field0_0x0)._s_0.X;
  dVar6 = (param_1->Position).field0_0x0._s_0.X;
  dVar7 = (param_2->field0_0x0)._s_0.Y;
  dVar8 = (param_1->Velocity).field0_0x0._s_0.Z;
  dVar21 = (dVar5 - dVar6) * dVar22 - dVar1 * dVar25;
  dVar26 = (dVar7 - dVar2) * dVar22 - dVar24 * dVar25;
  dVar11 = (dVar3 - dVar4) * dVar22 - dVar8 * dVar25;
  dVar23 = (double)(*param_4 * __real_3f000000);
  dVar15 = dVar23 * dVar21 + dVar1;
  dVar13 = dVar23 * dVar11 + dVar8;
  dVar14 = dVar23 * dVar26 + dVar24;
  dVar12 = (dVar5 - (dVar23 * dVar1 + dVar6)) * dVar22 - dVar15 * dVar25;
  dVar9 = (dVar7 - (dVar23 * dVar24 + dVar2)) * dVar22 - dVar14 * dVar25;
  dVar16 = dVar12 * dVar23 + dVar1;
  dVar29 = (dVar3 - (dVar23 * dVar8 + dVar4)) * dVar22 - dVar13 * dVar25;
  dVar27 = dVar9 * dVar23 + dVar24;
  dVar10 = dVar29 * dVar23 + dVar8;
  dVar17 = (dVar5 - (dVar15 * dVar23 + dVar6)) * dVar22 - dVar16 * dVar25;
  dVar19 = (double)*param_4;
  dVar18 = (dVar7 - (dVar14 * dVar23 + dVar2)) * dVar22 - dVar27 * dVar25;
  dVar12 = dVar17 + dVar12;
  dVar23 = (dVar3 - (dVar13 * dVar23 + dVar4)) * dVar22 - dVar10 * dVar25;
  dVar9 = dVar18 + dVar9;
  dVar28 = dVar19 * dVar17 + dVar1;
  dVar17 = dVar19 * dVar18 + dVar24;
  dVar18 = dVar19 * dVar23 + dVar8;
  dVar23 = dVar23 + dVar29;
  (param_1->Position).field0_0x0._s_0.X =
       (dVar16 + dVar15 + dVar1 + dVar16 + dVar15 + dVar28) * dVar19 * __real_3fc5555560000000 +
       dVar6;
  (param_1->Position).field0_0x0._s_0.Z =
       (dVar10 + dVar13 + dVar8 + dVar10 + dVar13 + dVar18) * dVar19 * dVar20 + dVar4;
  (param_1->Position).field0_0x0._s_0.Y =
       (dVar27 + dVar14 + dVar24 + dVar27 + dVar14 + dVar17) * dVar19 * dVar20 + dVar2;
  dVar24 = (double)*param_4;
  (param_1->Velocity).field0_0x0._s_0.X =
       ((((dVar5 - (dVar19 * dVar16 + dVar6)) * dVar22 - dVar28 * dVar25) + dVar21) * dVar20 +
       dVar12 * dVar20 + dVar12 * dVar20) * dVar24 + dVar1;
  (param_1->Velocity).field0_0x0._s_0.Y =
       ((((dVar7 - (dVar19 * dVar27 + dVar2)) * dVar22 - dVar17 * dVar25) + dVar26) * dVar20 +
       dVar9 * dVar20 + dVar9 * dVar20) * dVar24 + (param_1->Velocity).field0_0x0._s_0.Y;
  (param_1->Velocity).field0_0x0._s_0.Z =
       ((((dVar3 - (dVar19 * dVar10 + dVar4)) * dVar22 - dVar18 * dVar25) + dVar11) * dVar20 +
       dVar23 * dVar20 + dVar23 * dVar20) * dVar24 + (param_1->Velocity).field0_0x0._s_0.Z;
  return;
}

// InternalConstructor<UAnimationWarpingLibrary> @ 14a71a3d0

void __cdecl InternalConstructor<UAnimationWarpingLibrary>(FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary *this;
  
  this = (UBlueprintFunctionLibrary *)param_1->Obj;
  if (this != (UBlueprintFunctionLibrary *)0x0) {
    UBlueprintFunctionLibrary::UBlueprintFunctionLibrary(this,param_1);
    *(undefined ***)this = &___7UAnimationWarpingLibrary__6B_;
  }
  return;
}

// InternalVTableHelperCtorCaller<UAnimationWarpingLibrary> @ 14a71a400

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UAnimationWarpingLibrary>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UAnimationWarpingLibrary::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UBlueprintFunctionLibrary::UBlueprintFunctionLibrary
              ((UBlueprintFunctionLibrary *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UAnimationWarpingLibrary__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// IntroSortInternal<FAnimNode_OrientationWarping::FOrientationWarpingSpineBoneData,int,FIdentityFunctor,TDereferenceWrapper<FAnimNode_OrientationWarping::FOrientationWarpingSpineBoneData,FAnimNode_OrientationWarping::FOrientationWarpingSpineBoneData::FCompareBoneIndex>_> @ 14a71a4b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<FAnimNode_OrientationWarping::FOrientationWarpingSpineBoneData,int,FIdentityFunctor,TDereferenceWrapper<FAnimNode_OrientationWarping::FOrientationWarpingSpineBoneData,FAnimNode_OrientationWarping::FOrientationWarpingSpineBoneData::FCompareBoneIndex>_>
          (FOrientationWarpingSpineBoneData *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<FAnimNode_OrientationWarping::FOrientationWarpingSpineBoneData,FAnimNode_OrientationWarping::FOrientationWarpingSpineBoneData::FCompareBoneIndex>
          param_4)

{
  FOrientationWarpingSpineBoneData *pFVar1;
  FOrientationWarpingSpineBoneData FVar2;
  int iVar3;
  FOrientationWarpingSpineBoneData *pFVar4;
  FOrientationWarpingSpineBoneData **ppFVar5;
  FOrientationWarpingSpineBoneData *pFVar6;
  FOrientationWarpingSpineBoneData *pFVar7;
  FOrientationWarpingSpineBoneData *pFVar8;
  FOrientationWarpingSpineBoneData *pFVar9;
  float fVar10;
  undefined1 auStack_368 [48];
  FOrientationWarpingSpineBoneData *local_338;
  FOrientationWarpingSpineBoneData *local_328;
  FOrientationWarpingSpineBoneData *local_320;
  undefined4 local_318;
  undefined1 local_310 [744];
  ulonglong local_28;
  
  if (1 < param_2) {
    local_28 = __security_cookie.value ^ (ulonglong)auStack_368;
    local_320 = param_1 + (longlong)param_2 + -1;
    local_328 = param_1;
    fVar10 = logf((float)param_2 * (float)param_2);
    local_318 = (undefined4)(longlong)fVar10;
    memset(local_310,0,0x2e8);
    ppFVar5 = &local_328;
    do {
      pFVar8 = ppFVar5[1];
      pFVar4 = *ppFVar5;
      pFVar1 = ppFVar5[2];
      iVar3 = (int)((longlong)pFVar8 - (longlong)pFVar4 >> 3) + 1;
      local_338._0_4_ = (int)pFVar1;
      pFVar9 = pFVar4;
      if ((int)local_338 != 0) {
LAB_14a71a560:
        if (8 < iVar3) {
          if (iVar3 < 0) {
            iVar3 = iVar3 + 1;
          }
          pFVar6 = pFVar8 + 1;
          FVar2 = pFVar9[iVar3 >> 1];
          pFVar9[iVar3 >> 1] = *pFVar9;
          *pFVar9 = FVar2;
          pFVar4 = pFVar9;
LAB_14a71a590:
          pFVar4 = pFVar4 + 1;
          if (pFVar4 <= pFVar8) goto code_r0x00014a71a599;
          goto LAB_14a71a5a0;
        }
        for (; pFVar4 = pFVar9, pFVar1 = pFVar9, pFVar9 < pFVar8; pFVar8 = pFVar8 + -1) {
          while (pFVar1 = pFVar1 + 1, pFVar1 <= pFVar8) {
            if ((int)pFVar4->BoneIndex < (int)pFVar1->BoneIndex) {
              pFVar4 = pFVar1;
            }
          }
          FVar2 = *pFVar4;
          *pFVar4 = *pFVar8;
          *pFVar8 = FVar2;
        }
        goto LAB_14a71a65a;
      }
LAB_14a71a649:
      local_338 = pFVar1;
      HeapSortInternal<FAnimNode_OrientationWarping::FOrientationWarpingSpineBoneData,int,FIdentityFunctor,TDereferenceWrapper<FAnimNode_OrientationWarping::FOrientationWarpingSpineBoneData,FAnimNode_OrientationWarping::FOrientationWarpingSpineBoneData::FCompareBoneIndex>_>
                (pFVar4,iVar3,param_3,param_4);
LAB_14a71a65a:
      ppFVar5 = ppFVar5 + -3;
    } while (&local_328 <= ppFVar5);
  }
  return;
code_r0x00014a71a599:
  if ((int)pFVar4->BoneIndex <= (int)pFVar9->BoneIndex) goto LAB_14a71a590;
LAB_14a71a5a0:
  do {
    pFVar7 = pFVar6;
    pFVar6 = pFVar7 + -1;
    if (pFVar6 <= pFVar9) break;
  } while ((int)pFVar9->BoneIndex <= (int)pFVar6->BoneIndex);
  if (pFVar4 <= pFVar6) {
    FVar2 = *pFVar4;
    *pFVar4 = *pFVar6;
    *pFVar6 = FVar2;
    goto LAB_14a71a590;
  }
  FVar2 = *pFVar9;
  local_338._0_4_ = (int)local_338 + -1;
  *pFVar9 = *pFVar6;
  *pFVar6 = FVar2;
  if ((longlong)((longlong)pFVar6 + (-8 - (longlong)pFVar9) & 0xfffffffffffffff8U) <
      (longlong)((longlong)pFVar8 - (longlong)pFVar4 & 0xfffffffffffffff8U)) {
    if (pFVar4 < pFVar8) {
      *ppFVar5 = pFVar4;
      ppFVar5[1] = pFVar8;
      *(int *)(ppFVar5 + 2) = (int)local_338;
      ppFVar5 = ppFVar5 + 3;
    }
    if (pFVar6 <= pFVar9 + 1) goto LAB_14a71a65a;
    pFVar8 = pFVar7 + -2;
    pFVar4 = pFVar9;
  }
  else {
    if (pFVar9 + 1 < pFVar6) {
      *ppFVar5 = pFVar9;
      ppFVar5[1] = pFVar7 + -2;
      *(int *)(ppFVar5 + 2) = (int)local_338;
      ppFVar5 = ppFVar5 + 3;
    }
    if (pFVar8 <= pFVar4) goto LAB_14a71a65a;
  }
  iVar3 = (int)((longlong)pFVar8 - (longlong)pFVar4 >> 3) + 1;
  pFVar9 = pFVar4;
  if ((int)local_338 == 0) goto LAB_14a71a649;
  goto LAB_14a71a560;
}

// StaticEnum<enum_EActorMovementCompensationMode> @ 14a71aae0

UEnum * __cdecl StaticEnum<enum_EActorMovementCompensationMode>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EActorMovementCompensationMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AnimationWarpingRuntime();
    Z_Registration_Info_UEnum_EActorMovementCompensationMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_AnimationWarpingRuntime_EActorMovementCompensationMode,
                       (UObject *)pUVar1,L"EActorMovementCompensationMode");
  }
  return Z_Registration_Info_UEnum_EActorMovementCompensationMode.OuterSingleton;
}

// StaticEnum<enum_EFootPlacementLockType> @ 14a71ab20

UEnum * __cdecl StaticEnum<enum_EFootPlacementLockType>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EFootPlacementLockType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AnimationWarpingRuntime();
    Z_Registration_Info_UEnum_EFootPlacementLockType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_AnimationWarpingRuntime_EFootPlacementLockType,
                       (UObject *)pUVar1,L"EFootPlacementLockType");
  }
  return Z_Registration_Info_UEnum_EFootPlacementLockType.OuterSingleton;
}

// StaticEnum<enum_EOffsetRootBoneMode> @ 14a71ab60

UEnum * __cdecl StaticEnum<enum_EOffsetRootBoneMode>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EOffsetRootBoneMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AnimationWarpingRuntime();
    Z_Registration_Info_UEnum_EOffsetRootBoneMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_AnimationWarpingRuntime_EOffsetRootBoneMode,
                       (UObject *)pUVar1,L"EOffsetRootBoneMode");
  }
  return Z_Registration_Info_UEnum_EOffsetRootBoneMode.OuterSingleton;
}

// StaticEnum<enum_EOffsetRootBone_CollisionTestingMode> @ 14a71aba0

UEnum * __cdecl StaticEnum<enum_EOffsetRootBone_CollisionTestingMode>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EOffsetRootBone_CollisionTestingMode.OuterSingleton == (UEnum *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_AnimationWarpingRuntime();
    Z_Registration_Info_UEnum_EOffsetRootBone_CollisionTestingMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_AnimationWarpingRuntime_EOffsetRootBone_CollisionTestingMode
                       ,(UObject *)pUVar1,L"EOffsetRootBone_CollisionTestingMode");
  }
  return Z_Registration_Info_UEnum_EOffsetRootBone_CollisionTestingMode.OuterSingleton;
}

// StaticEnum<enum_EOrientationWarpingSpace> @ 14a71abe0

UEnum * __cdecl StaticEnum<enum_EOrientationWarpingSpace>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EOrientationWarpingSpace.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AnimationWarpingRuntime();
    Z_Registration_Info_UEnum_EOrientationWarpingSpace.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_AnimationWarpingRuntime_EOrientationWarpingSpace,
                       (UObject *)pUVar1,L"EOrientationWarpingSpace");
  }
  return Z_Registration_Info_UEnum_EOrientationWarpingSpace.OuterSingleton;
}

// StaticEnum<enum_EPelvisHeightMode> @ 14a71ac20

UEnum * __cdecl StaticEnum<enum_EPelvisHeightMode>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EPelvisHeightMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AnimationWarpingRuntime();
    Z_Registration_Info_UEnum_EPelvisHeightMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_AnimationWarpingRuntime_EPelvisHeightMode,(UObject *)pUVar1
                       ,L"EPelvisHeightMode");
  }
  return Z_Registration_Info_UEnum_EPelvisHeightMode.OuterSingleton;
}

// `vector_deleting_destructor'`adjustor{8}' @ 14a71d084

/* [thunk]:public: virtual void * __ptr64 __cdecl UE::AnimationWarping::FModule::`vector deleting
   destructor'`adjustor{8}' (unsigned int) __ptr64 */

void * __thiscall
UE::AnimationWarping::FModule::_vector_deleting_destructor__adjustor_8__(FModule *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((FModule *)&this[-1].RootMotionAttributeId.Index,param_1);
  return pvVar1;
}

// `scalar_deleting_destructor' @ 14a71d0a0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<UE::AnimationWarping::FRootOffsetProvider,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<UE::AnimationWarping::FRootOffsetProvider,1> *this,
          uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x80);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a71d0e0

void * __thiscall
FAnimNode_FootPlacement::_scalar_deleting_destructor_(FAnimNode_FootPlacement *this,uint param_1)

{
  ~FAnimNode_FootPlacement(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x520);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a71d120

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void * __thiscall
FAnimNode_SlopeWarping::_scalar_deleting_destructor_(FAnimNode_SlopeWarping *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->FeetData).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FeetDefinitions).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7FAnimNode_SkeletalControlBase__6B_;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  this->_padding_ = (longlong)&___7FAnimNode_Base__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x2e0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a71d1a0

void * __thiscall
UE::AnimationWarping::FModule::_scalar_deleting_destructor_(FModule *this,uint param_1)

{
  this->_padding_ = (longlong)&___7IAnimRootMotionProvider_Anim_UE__6B_;
  this->_padding_ = (longlong)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a71d1e0

void * __thiscall
UE::AnimationWarping::FRootOffsetProvider::_scalar_deleting_destructor_
          (FRootOffsetProvider *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a71d210

void * __thiscall
UE::Anim::IAnimRootMotionProvider::_scalar_deleting_destructor_
          (IAnimRootMotionProvider *this,uint param_1)

{
  *this = (IAnimRootMotionProvider)&___7IAnimRootMotionProvider_Anim_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a71d250

void * __thiscall
UAnimationWarpingLibrary::_scalar_deleting_destructor_(UAnimationWarpingLibrary *this,uint param_1)

{
  *(undefined ***)this = &___7UAnimationWarpingLibrary__6B_;
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

// EmptyLinkFunctionForGeneratedCodeAnimNode_FootPlacement @ 14a71fe70

void __cdecl EmptyLinkFunctionForGeneratedCodeAnimNode_FootPlacement(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeAnimNode_OffsetRootBone @ 14a71fe80

void __cdecl EmptyLinkFunctionForGeneratedCodeAnimNode_OffsetRootBone(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeAnimNode_OrientationWarping @ 14a71fe90

void __cdecl EmptyLinkFunctionForGeneratedCodeAnimNode_OrientationWarping(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeAnimNode_OverrideRootMotion @ 14a71fea0

void __cdecl EmptyLinkFunctionForGeneratedCodeAnimNode_OverrideRootMotion(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeAnimNode_SlopeWarping @ 14a71feb0

void __cdecl EmptyLinkFunctionForGeneratedCodeAnimNode_SlopeWarping(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeAnimNode_Steering @ 14a71fec0

void __cdecl EmptyLinkFunctionForGeneratedCodeAnimNode_Steering(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeAnimNode_StrideWarping @ 14a71fed0

void __cdecl EmptyLinkFunctionForGeneratedCodeAnimNode_StrideWarping(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeAnimNode_WarpTest @ 14a71fee0

void __cdecl EmptyLinkFunctionForGeneratedCodeAnimNode_WarpTest(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeAnimationWarpingLibrary @ 14a71fef0

void __cdecl EmptyLinkFunctionForGeneratedCodeAnimationWarpingLibrary(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeAnimationWarpingRuntime_init @ 14a71ff00

void __cdecl EmptyLinkFunctionForGeneratedCodeAnimationWarpingRuntime_init(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeAnimationWarpingTypes @ 14a71ff10

void __cdecl EmptyLinkFunctionForGeneratedCodeAnimationWarpingTypes(void)

{
  return;
}

// GetFootIKCentroid @ 14a729800

TVector<double> * __cdecl
GetFootIKCentroid(TVector<double> *__return_storage_ptr__,
                 TArray<FSlopeWarpingFootData,TSizedDefaultAllocator<32>_> *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  int iVar4;
  code *pcVar5;
  double dVar6;
  double dVar7;
  undefined8 uVar8;
  bool bVar9;
  TVector<double> *pTVar10;
  FScriptContainerElement *pFVar11;
  FScriptContainerElement *pFVar12;
  FScriptContainerElement *pFVar13;
  double dVar14;
  undefined1 local_res8 [8];
  
  if (param_1->ArrayNum < 1) {
    bVar9 = FDebug::CheckVerifyFailedImpl2
                      ("FeetData.Num() > 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\AnimationWarping\\Source\\Runtime\\Private\\BoneControllers\\AnimNode_SlopeWarping.cpp"
                       ,0x51,L"");
    if (bVar9) {
      pcVar5 = (code *)swi(3);
      pTVar10 = (TVector<double> *)(*pcVar5)();
      return pTVar10;
    }
  }
  uVar8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  pFVar12 = (param_1->AllocatorInstance).Data;
  iVar4 = param_1->ArrayNum;
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)uVar8;
  pFVar13 = pFVar12 + 0x30;
  (__return_storage_ptr__->field0_0x0)._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  pFVar11 = pFVar12 + (longlong)iVar4 * 0xb0;
  while( true ) {
    if (param_1->ArrayNum != iVar4) {
      `TCheckedPointerIterator<FSlopeWarpingFootData_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    dVar1 = (__return_storage_ptr__->field0_0x0)._s_0.X;
    dVar2 = (__return_storage_ptr__->field0_0x0)._s_0.Y;
    dVar3 = (__return_storage_ptr__->field0_0x0)._s_0.Z;
    if (pFVar12 == pFVar11) break;
    dVar14 = *(double *)pFVar13;
    dVar6 = *(double *)(pFVar13 + 8);
    pFVar12 = pFVar12 + 0xb0;
    dVar7 = *(double *)(pFVar13 + 0x10);
    pFVar13 = pFVar13 + 0xb0;
    (__return_storage_ptr__->field0_0x0)._s_0.X = dVar1 + dVar14;
    (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar3 + dVar7;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar2 + dVar6;
  }
  dVar14 = __real_3ff0000000000000 / (double)param_1->ArrayNum;
  (__return_storage_ptr__->field0_0x0)._s_0.X = dVar1 * dVar14;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar2 * dVar14;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar3 * dVar14;
  return __return_storage_ptr__;
}

// Z_Construct_UClass_UAnimationWarpingLibrary_NoRegister @ 14a732160

UClass * __cdecl Z_Construct_UClass_UAnimationWarpingLibrary_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAnimationWarpingLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AnimationWarpingRuntime",L"AnimationWarpingLibrary",
               &Z_Registration_Info_UClass_UAnimationWarpingLibrary.InnerSingleton,
               UAnimationWarpingLibrary::StaticRegisterNativesUAnimationWarpingLibrary,0x28,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UAnimationWarpingLibrary>,
               InternalVTableHelperCtorCaller<UAnimationWarpingLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAnimationWarpingLibrary.InnerSingleton;
}

// Z_Construct_UEnum_AnimationWarpingRuntime_EOffsetRootBoneMode @ 14a732220

UEnum * __cdecl Z_Construct_UEnum_AnimationWarpingRuntime_EOffsetRootBoneMode(void)

{
  if (Z_Registration_Info_UEnum_EOffsetRootBoneMode.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EOffsetRootBoneMode.InnerSingleton,
               &Z_Construct_UEnum_AnimationWarpingRuntime_EOffsetRootBoneMode_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EOffsetRootBoneMode.InnerSingleton;
}

// Z_Construct_UEnum_AnimationWarpingRuntime_EOffsetRootBone_CollisionTestingMode @ 14a732260

UEnum * __cdecl Z_Construct_UEnum_AnimationWarpingRuntime_EOffsetRootBone_CollisionTestingMode(void)

{
  if (Z_Registration_Info_UEnum_EOffsetRootBone_CollisionTestingMode.InnerSingleton == (UEnum *)0x0)
  {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EOffsetRootBone_CollisionTestingMode.InnerSingleton,
               &Z_Construct_UEnum_AnimationWarpingRuntime_EOffsetRootBone_CollisionTestingMode_Statics
                ::EnumParams);
  }
  return Z_Registration_Info_UEnum_EOffsetRootBone_CollisionTestingMode.InnerSingleton;
}

// Z_Construct_UScriptStruct_FAnimNode_FootPlacement @ 14a7322a0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FAnimNode_FootPlacement(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FAnimNode_FootPlacement.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FAnimNode_FootPlacement.InnerSingleton,
               &Z_Construct_UScriptStruct_FAnimNode_FootPlacement_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FAnimNode_FootPlacement.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FAnimNode_FootPlacement.InnerSingleton;
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

// Z_Construct_UScriptStruct_FAnimNode_OffsetRootBone @ 14a732320

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FAnimNode_OffsetRootBone(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FAnimNode_OffsetRootBone.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FAnimNode_OffsetRootBone.InnerSingleton,
               &Z_Construct_UScriptStruct_FAnimNode_OffsetRootBone_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FAnimNode_OffsetRootBone.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FAnimNode_OffsetRootBone.InnerSingleton;
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

// Z_Construct_UScriptStruct_FAnimNode_OrientationWarping @ 14a7323a0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FAnimNode_OrientationWarping(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FAnimNode_OrientationWarping.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FAnimNode_OrientationWarping.InnerSingleton,
               &Z_Construct_UScriptStruct_FAnimNode_OrientationWarping_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FAnimNode_OrientationWarping.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FAnimNode_OrientationWarping.InnerSingleton;
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

// Z_Construct_UScriptStruct_FAnimNode_OverrideRootMotion @ 14a732420

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FAnimNode_OverrideRootMotion(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FAnimNode_OverrideRootMotion.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FAnimNode_OverrideRootMotion.InnerSingleton,
               &Z_Construct_UScriptStruct_FAnimNode_OverrideRootMotion_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FAnimNode_OverrideRootMotion.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FAnimNode_OverrideRootMotion.InnerSingleton;
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

// Z_Construct_UScriptStruct_FAnimNode_SlopeWarping @ 14a7324a0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FAnimNode_SlopeWarping(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FAnimNode_SlopeWarping.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FAnimNode_SlopeWarping.InnerSingleton,
               &Z_Construct_UScriptStruct_FAnimNode_SlopeWarping_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FAnimNode_SlopeWarping.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FAnimNode_SlopeWarping.InnerSingleton;
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

// Z_Construct_UScriptStruct_FAnimNode_Steering @ 14a732520

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FAnimNode_Steering(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FAnimNode_Steering.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FAnimNode_Steering.InnerSingleton,
               &Z_Construct_UScriptStruct_FAnimNode_Steering_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FAnimNode_Steering.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FAnimNode_Steering.InnerSingleton;
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

// Z_Construct_UScriptStruct_FAnimNode_StrideWarping @ 14a7325a0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FAnimNode_StrideWarping(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FAnimNode_StrideWarping.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FAnimNode_StrideWarping.InnerSingleton,
               &Z_Construct_UScriptStruct_FAnimNode_StrideWarping_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FAnimNode_StrideWarping.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FAnimNode_StrideWarping.InnerSingleton;
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

// Z_Construct_UScriptStruct_FAnimNode_WarpTest @ 14a732620

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FAnimNode_WarpTest(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FAnimNode_WarpTest.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FAnimNode_WarpTest.InnerSingleton,
               &Z_Construct_UScriptStruct_FAnimNode_WarpTest_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FAnimNode_WarpTest.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FAnimNode_WarpTest.InnerSingleton;
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

// Z_Construct_UScriptStruct_FFootPlacementRootDefinition @ 14a7326a0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FFootPlacementRootDefinition(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FFootPlacementRootDefinition.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FFootPlacementRootDefinition.InnerSingleton,
               &Z_Construct_UScriptStruct_FFootPlacementRootDefinition_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FFootPlacementRootDefinition.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FFootPlacementRootDefinition.InnerSingleton;
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

// IMPLEMENT_MODULE_AnimationWarpingRuntime @ 14a732f00

void __cdecl IMPLEMENT_MODULE_AnimationWarpingRuntime(void)

{
  return;
}

// `dynamic_atexit_destructor_for_'CVarAnimNodeFootPlacementDebug'' @ 150420660

void __cdecl _dynamic_atexit_destructor_for__CVarAnimNodeFootPlacementDebug__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarAnimNodeFootPlacementDebug);
  return;
}

// `dynamic_atexit_destructor_for_'CVarAnimNodeFootPlacementDebugDrawHistory'' @ 150420680

void __cdecl _dynamic_atexit_destructor_for__CVarAnimNodeFootPlacementDebugDrawHistory__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarAnimNodeFootPlacementDebugDrawHistory);
  return;
}

// `dynamic_atexit_destructor_for_'CVarAnimNodeFootPlacementDebugTraces'' @ 1504206a0

void __cdecl _dynamic_atexit_destructor_for__CVarAnimNodeFootPlacementDebugTraces__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarAnimNodeFootPlacementDebugTraces);
  return;
}

// `dynamic_atexit_destructor_for_'CVarAnimNodeFootPlacementEnable'' @ 1504206c0

void __cdecl _dynamic_atexit_destructor_for__CVarAnimNodeFootPlacementEnable__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarAnimNodeFootPlacementEnable);
  return;
}

// `dynamic_atexit_destructor_for_'CVarAnimNodeFootPlacementEnableLock'' @ 1504206e0

void __cdecl _dynamic_atexit_destructor_for__CVarAnimNodeFootPlacementEnableLock__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarAnimNodeFootPlacementEnableLock);
  return;
}

// `dynamic_atexit_destructor_for_'CVarAnimNodeOffsetRootBoneDebug'' @ 150420700

void __cdecl _dynamic_atexit_destructor_for__CVarAnimNodeOffsetRootBoneDebug__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarAnimNodeOffsetRootBoneDebug);
  return;
}

// `dynamic_atexit_destructor_for_'CVarAnimNodeOffsetRootBoneEnable'' @ 150420720

void __cdecl _dynamic_atexit_destructor_for__CVarAnimNodeOffsetRootBoneEnable__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarAnimNodeOffsetRootBoneEnable);
  return;
}

// `dynamic_atexit_destructor_for_'CVarAnimNodeOffsetRootBoneModifyBone'' @ 150420740

void __cdecl _dynamic_atexit_destructor_for__CVarAnimNodeOffsetRootBoneModifyBone__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarAnimNodeOffsetRootBoneModifyBone);
  return;
}

// `dynamic_atexit_destructor_for_'CVarAnimNodeOrientationWarpingDebug'' @ 150420760

void __cdecl _dynamic_atexit_destructor_for__CVarAnimNodeOrientationWarpingDebug__(void)

{
  CVarAnimNodeOrientationWarpingDebug._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarAnimNodeOrientationWarpingDebug);
  return;
}

// `dynamic_atexit_destructor_for_'CVarAnimNodeOrientationWarpingDebugTransparency'' @ 150420780

void __cdecl _dynamic_atexit_destructor_for__CVarAnimNodeOrientationWarpingDebugTransparency__(void)

{
  CVarAnimNodeOrientationWarpingDebugTransparency._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarAnimNodeOrientationWarpingDebugTransparency);
  return;
}

// `dynamic_atexit_destructor_for_'CVarAnimNodeOrientationWarpingEnable'' @ 1504207a0

void __cdecl _dynamic_atexit_destructor_for__CVarAnimNodeOrientationWarpingEnable__(void)

{
  CVarAnimNodeOrientationWarpingEnable._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarAnimNodeOrientationWarpingEnable);
  return;
}

// `dynamic_atexit_destructor_for_'CVarAnimNodeOrientationWarpingVerbose'' @ 1504207c0

void __cdecl _dynamic_atexit_destructor_for__CVarAnimNodeOrientationWarpingVerbose__(void)

{
  CVarAnimNodeOrientationWarpingVerbose._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarAnimNodeOrientationWarpingVerbose);
  return;
}

// `dynamic_atexit_destructor_for_'CVarAnimNodeSlopeWarpingDebug'' @ 1504207e0

void __cdecl _dynamic_atexit_destructor_for__CVarAnimNodeSlopeWarpingDebug__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarAnimNodeSlopeWarpingDebug);
  return;
}

// `dynamic_atexit_destructor_for_'CVarAnimNodeSteeringEnabled'' @ 150420800

void __cdecl _dynamic_atexit_destructor_for__CVarAnimNodeSteeringEnabled__(void)

{
  CVarAnimNodeSteeringEnabled._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarAnimNodeSteeringEnabled);
  return;
}

// `dynamic_atexit_destructor_for_'CVarAnimNodeStrideWarpingDebug'' @ 150420820

void __cdecl _dynamic_atexit_destructor_for__CVarAnimNodeStrideWarpingDebug__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarAnimNodeStrideWarpingDebug);
  return;
}

// `dynamic_atexit_destructor_for_'CVarAnimNodeStrideWarpingEnable'' @ 150420840

void __cdecl _dynamic_atexit_destructor_for__CVarAnimNodeStrideWarpingEnable__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarAnimNodeStrideWarpingEnable);
  return;
}

// `dynamic_atexit_destructor_for_'CVarAnimNodeStrideWarpingVerbose'' @ 150420860

void __cdecl _dynamic_atexit_destructor_for__CVarAnimNodeStrideWarpingVerbose__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarAnimNodeStrideWarpingVerbose);
  return;
}

// `dynamic_atexit_destructor_for_'CVarSlopeWarpingEnable'' @ 150420880

void __cdecl _dynamic_atexit_destructor_for__CVarSlopeWarpingEnable__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarSlopeWarpingEnable);
  return;
}

