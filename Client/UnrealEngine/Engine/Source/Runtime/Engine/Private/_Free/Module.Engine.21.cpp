// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 578

// Attribute'' @ 1410da490

void __cdecl `dynamic_initializer_for_'UE::Anim::IInertializationRequester::Attribute__(void)

{
  ::FName::FName(&UE::Anim::IInertializationRequester::Attribute,"InertialBlending");
  return;
}

// AttributeName'' @ 1410da4b0

void __cdecl `dynamic_initializer_for_'UE::Anim::IAnimRootMotionProvider::AttributeName__(void)

{
  ::FName::FName(&UE::Anim::IAnimRootMotionProvider::AttributeName,L"RootMotionDelta");
  return;
}

// BaseTypeName'' @ 1410da4d0

void __cdecl
`dynamic_initializer_for_'UE::Anim::IAnimNotifyEventContextDataInterface::BaseTypeName__(void)

{
  ::FName::FName(&UE::Anim::IAnimNotifyEventContextDataInterface::BaseTypeName,
                 "IAnimNotifyEventContextDataInterface");
  return;
}

// BaseTypeName'' @ 1410da4f0

void __cdecl `dynamic_initializer_for_'UE::Anim::IGraphMessage::BaseTypeName__(void)

{
  ::FName::FName(&UE::Anim::IGraphMessage::BaseTypeName,"IGraphMessage");
  return;
}

// DefaultInputPoseName'' @ 1410da510

void __cdecl `dynamic_initializer_for_'FAnimNode_LinkedInputPose::DefaultInputPoseName__(void)

{
  ::FName::FName(&FAnimNode_LinkedInputPose::DefaultInputPoseName,"InPose");
  return;
}

// ModularFeatureName'' @ 1410da530

void __cdecl `dynamic_initializer_for_'UE::Anim::IAnimRootMotionProvider::ModularFeatureName__(void)

{
  ::FName::FName(&UE::Anim::IAnimRootMotionProvider::ModularFeatureName,L"AnimationWarping");
  return;
}

// TypeName'' @ 1410da550

void __cdecl `dynamic_initializer_for_'UE::Anim::FAnimNotifyEndDataContext::TypeName__(void)

{
  ::FName::FName(&UE::Anim::FAnimNotifyEndDataContext::TypeName,L"FAnimNotifyEndDataContext");
  return;
}

// TypeName'' @ 1410da570

void __cdecl `dynamic_initializer_for_'UE::Anim::FCachedPoseSkippedUpdateHandler::TypeName__(void)

{
  ::FName::FName(&UE::Anim::FCachedPoseSkippedUpdateHandler::TypeName,
                 L"UE::Anim::FCachedPoseSkippedUpdateHandler");
  return;
}

// TypeName'' @ 1410da590

void __cdecl `dynamic_initializer_for_'UE::Anim::IInertializationRequester::TypeName__(void)

{
  ::FName::FName(&UE::Anim::IInertializationRequester::TypeName,
                 L"UE::Anim::IInertializationRequester");
  return;
}

// `dynamic_initializer_for_'BoneAttributeNamespace'' @ 1410da5b0

void __cdecl UE::Anim::_dynamic_initializer_for__BoneAttributeNamespace__(void)

{
  ::FName::FName(&BoneAttributeNamespace,"bone");
  return;
}

// `dynamic_initializer_for_'CVarAnimDeadBlendingEnable'' @ 1410da5d0

void __cdecl _dynamic_initializer_for__CVarAnimDeadBlendingEnable__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 1;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarAnimDeadBlendingEnable,L"a.AnimNode.DeadBlending.Enable",local_res8,
             L"Enable / Disable DeadBlending",0);
  atexit(_dynamic_atexit_destructor_for__CVarAnimDeadBlendingEnable__);
  return;
}

// `dynamic_initializer_for_'CVarAnimDynamicsDetailedStats'' @ 1410da620

void __cdecl _dynamic_initializer_for__CVarAnimDynamicsDetailedStats__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarAnimDynamicsDetailedStats,L"p.AnimDynamicsDetailedStats",
             &FAnimPhys::bEnableDetailedStats,L"When set to 1, will enable more detailed stats.",0);
  atexit(_dynamic_atexit_destructor_for__CVarAnimDynamicsDetailedStats__);
  return;
}

// `dynamic_initializer_for_'CVarAnimDynamicsSimSpaceCentrifugalAlpha'' @ 1410da670

void __cdecl _dynamic_initializer_for__CVarAnimDynamicsSimSpaceCentrifugalAlpha__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarAnimDynamicsSimSpaceCentrifugalAlpha,L"p.AnimDynamics.SimSpaceCentrifugalAlpha",
             &FAnimPhys::CentrifugalAlpha,
             L"Settings for centrifugal force alpha for anim dynamics nodes",0);
  atexit(_dynamic_atexit_destructor_for__CVarAnimDynamicsSimSpaceCentrifugalAlpha__);
  return;
}

// `dynamic_initializer_for_'CVarAnimDynamicsSimSpaceCoriolisAlpha'' @ 1410da6c0

void __cdecl _dynamic_initializer_for__CVarAnimDynamicsSimSpaceCoriolisAlpha__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarAnimDynamicsSimSpaceCoriolisAlpha,L"p.AnimDynamics.SimSpaceCoriolisAlpha",
             &FAnimPhys::CoriolisAlpha,
             L"Settings for centrifugal force alpha for anim dynamics nodes",0);
  atexit(_dynamic_atexit_destructor_for__CVarAnimDynamicsSimSpaceCoriolisAlpha__);
  return;
}

// `dynamic_initializer_for_'CVarAnimDynamicsSimSpaceEulerAlpha'' @ 1410da710

void __cdecl _dynamic_initializer_for__CVarAnimDynamicsSimSpaceEulerAlpha__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarAnimDynamicsSimSpaceEulerAlpha,L"p.AnimDynamics.SimSpaceEulerAlpha",
             &FAnimPhys::EulerAlpha,L"Settings for euler force alpha for anim dynamics nodes",0);
  atexit(_dynamic_atexit_destructor_for__CVarAnimDynamicsSimSpaceEulerAlpha__);
  return;
}

// `dynamic_initializer_for_'CVarAnimInertializationEnable'' @ 1410da760

void __cdecl _dynamic_initializer_for__CVarAnimInertializationEnable__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 1;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarAnimInertializationEnable,L"a.AnimNode.Inertialization.Enable",local_res8,
             L"Enable / Disable Inertialization",0);
  atexit(_dynamic_atexit_destructor_for__CVarAnimInertializationEnable__);
  return;
}

// `dynamic_initializer_for_'CVarAnimInertializationIgnoreDeficit'' @ 1410da7b0

void __cdecl _dynamic_initializer_for__CVarAnimInertializationIgnoreDeficit__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarAnimInertializationIgnoreDeficit,L"a.AnimNode.Inertialization.IgnoreDeficit",
             local_res8,L"Ignore inertialization time deficit caused by interruptions",0);
  atexit(_dynamic_atexit_destructor_for__CVarAnimInertializationIgnoreDeficit__);
  return;
}

// `dynamic_initializer_for_'CVarAnimInertializationIgnoreVelocity'' @ 1410da800

void __cdecl _dynamic_initializer_for__CVarAnimInertializationIgnoreVelocity__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarAnimInertializationIgnoreVelocity,L"a.AnimNode.Inertialization.IgnoreVelocity",
             local_res8,
             L"Ignore velocity information during Inertialization (effectively reverting to a quintic diff blend)"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarAnimInertializationIgnoreVelocity__);
  return;
}

// `dynamic_initializer_for_'CVarAnimStateMachineRelevancyReset'' @ 1410da850

void __cdecl _dynamic_initializer_for__CVarAnimStateMachineRelevancyReset__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 1;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarAnimStateMachineRelevancyReset,L"a.AnimNode.StateMachine.EnableRelevancyReset",
             local_res8,L"Reset State Machine when it becomes relevant",0);
  atexit(_dynamic_atexit_destructor_for__CVarAnimStateMachineRelevancyReset__);
  return;
}

// `dynamic_initializer_for_'CVarFrameStripping'' @ 1410da8a0

void __cdecl _dynamic_initializer_for__CVarFrameStripping__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarFrameStripping,StripFrameCVarName,&GPerformFrameStripping,
             L"1 = Strip every other frame on animations that have an even number of frames. 0 = off"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarFrameStripping__);
  return;
}

// `dynamic_initializer_for_'CVarMontageEndSectionRequiresTimeRemaining'' @ 1410da8f0

void __cdecl
MontageCVars::_dynamic_initializer_for__CVarMontageEndSectionRequiresTimeRemaining__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarMontageEndSectionRequiresTimeRemaining,
             L"a.Montage.EndSectionRequiresTimeRemaining",&bEndSectionRequiresTimeRemaining,
             L"Montage EndOfSection is only checked if there is remaining time (default false).",0);
  atexit(_dynamic_atexit_destructor_for__CVarMontageEndSectionRequiresTimeRemaining__);
  return;
}

// `dynamic_initializer_for_'CVarOddFrameStripping'' @ 1410da940

void __cdecl _dynamic_initializer_for__CVarOddFrameStripping__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarOddFrameStripping,OddFrameStripStrippingCVarName,
             &GPerformFrameStrippingOddFramedAnimations,
             L"1 = When frame stripping apply to animations with an odd number of frames too. 0 = only even framed animations"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarOddFrameStripping__);
  return;
}

// `dynamic_initializer_for_'CVarStripAdditiveRefPose'' @ 1410da990

void __cdecl _dynamic_initializer_for__CVarStripAdditiveRefPose__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarStripAdditiveRefPose,L"a.StripAdditiveRefPose",&GStripAdditiveRefPose,
             L"1 = Strip additive ref poses on cook. 0 = off",0);
  atexit(_dynamic_atexit_destructor_for__CVarStripAdditiveRefPose__);
  return;
}

// `dynamic_initializer_for_'DefaultAnimGraphName'' @ 1410da9e0

void __cdecl _dynamic_initializer_for__DefaultAnimGraphName__(void)

{
  FName::FName(&DefaultAnimGraphName,"AnimGraph");
  return;
}

// `dynamic_initializer_for_'LLMTagDeclaration_SequenceData'' @ 1410daa00

void __cdecl _dynamic_initializer_for__LLMTagDeclaration_SequenceData__(void)

{
  FLLMTagDeclaration::FLLMTagDeclaration
            (&LLMTagDeclaration_SequenceData,L"SequenceData",(FName)0x0,(FName)0x0,(FName)0x0,
             (FName)0x0,None);
  return;
}

// `dynamic_initializer_for_'LogAnimMontage'' @ 1410daa50

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogAnimMontage__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogAnimMontage,L"LogAnimMontage",Warning,All);
  atexit(_dynamic_atexit_destructor_for__LogAnimMontage__);
  return;
}

// `dynamic_initializer_for_'LogAnimTrails'' @ 1410daa90

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogAnimTrails__(void)

{
  FLogCategoryBase::FLogCategoryBase((FLogCategoryBase *)&LogAnimTrails,L"LogAnimTrails",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogAnimTrails__);
  return;
}

// `dynamic_initializer_for_'LogAnimTransitionRequests'' @ 1410daad0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogAnimTransitionRequests__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogAnimTransitionRequests,L"LogAnimTransitionRequests",NoLogging,
             All);
  atexit(_dynamic_atexit_destructor_for__LogAnimTransitionRequests__);
  return;
}

// `dynamic_initializer_for_'NAME_UAnimNotifyState_GetDefaultTriggerWeightThreshold'' @ 1410dab10

void __cdecl
_dynamic_initializer_for__NAME_UAnimNotifyState_GetDefaultTriggerWeightThreshold__(void)

{
  FName::FName(&NAME_UAnimNotifyState_GetDefaultTriggerWeightThreshold,
               L"GetDefaultTriggerWeightThreshold");
  return;
}

// `dynamic_initializer_for_'NAME_UAnimNotifyState_GetNotifyName'' @ 1410dab30

void __cdecl _dynamic_initializer_for__NAME_UAnimNotifyState_GetNotifyName__(void)

{
  FName::FName(&NAME_UAnimNotifyState_GetNotifyName,L"GetNotifyName");
  return;
}

// `dynamic_initializer_for_'NAME_UAnimNotifyState_Received_NotifyBegin'' @ 1410dab50

void __cdecl _dynamic_initializer_for__NAME_UAnimNotifyState_Received_NotifyBegin__(void)

{
  FName::FName(&NAME_UAnimNotifyState_Received_NotifyBegin,L"Received_NotifyBegin");
  return;
}

// `dynamic_initializer_for_'NAME_UAnimNotifyState_Received_NotifyEnd'' @ 1410dab70

void __cdecl _dynamic_initializer_for__NAME_UAnimNotifyState_Received_NotifyEnd__(void)

{
  FName::FName(&NAME_UAnimNotifyState_Received_NotifyEnd,L"Received_NotifyEnd");
  return;
}

// `dynamic_initializer_for_'NAME_UAnimNotifyState_Received_NotifyTick'' @ 1410dab90

void __cdecl _dynamic_initializer_for__NAME_UAnimNotifyState_Received_NotifyTick__(void)

{
  FName::FName(&NAME_UAnimNotifyState_Received_NotifyTick,L"Received_NotifyTick");
  return;
}

// `dynamic_initializer_for_'NAME_UAnimNotifyState_Trail_OverridePSTemplate'' @ 1410dabb0

void __cdecl _dynamic_initializer_for__NAME_UAnimNotifyState_Trail_OverridePSTemplate__(void)

{
  FName::FName(&NAME_UAnimNotifyState_Trail_OverridePSTemplate,L"OverridePSTemplate");
  return;
}

// `dynamic_initializer_for_'NAME_UAnimNotify_GetDefaultTriggerWeightThreshold'' @ 1410dabd0

void __cdecl _dynamic_initializer_for__NAME_UAnimNotify_GetDefaultTriggerWeightThreshold__(void)

{
  FName::FName(&NAME_UAnimNotify_GetDefaultTriggerWeightThreshold,
               L"GetDefaultTriggerWeightThreshold");
  return;
}

// `dynamic_initializer_for_'NAME_UAnimNotify_GetNotifyName'' @ 1410dabf0

void __cdecl _dynamic_initializer_for__NAME_UAnimNotify_GetNotifyName__(void)

{
  FName::FName(&NAME_UAnimNotify_GetNotifyName,L"GetNotifyName");
  return;
}

// `dynamic_initializer_for_'NAME_UAnimNotify_Received_Notify'' @ 1410dac10

void __cdecl _dynamic_initializer_for__NAME_UAnimNotify_Received_Notify__(void)

{
  FName::FName(&NAME_UAnimNotify_Received_Notify,L"Received_Notify");
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_AnimDynamicsAngularPost'' @ 1410dac30

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_AnimDynamicsAngularPost__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_AnimDynamicsAngularPost ==
      (FThreadSafeStaticStat<FStat_STAT_AnimDynamicsAngularPost>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_AnimDynamicsAngularPost");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AnimDynamicsAngularPost,*pFVar1,
               L"Angular Limit Post-Update","STATGROUP_Physics","STATCAT_Advanced",L"Physics",true,
               true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_AnimDynamicsAngularPre'' @ 1410dacc0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_AnimDynamicsAngularPre__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_AnimDynamicsAngularPre ==
      (FThreadSafeStaticStat<FStat_STAT_AnimDynamicsAngularPre>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_AnimDynamicsAngularPre");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AnimDynamicsAngularPre,*pFVar1,
               L"Angular Limit Pre-Update","STATGROUP_Physics","STATCAT_Advanced",L"Physics",true,
               true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_AnimDynamicsLimitUpdate'' @ 1410dad50

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_AnimDynamicsLimitUpdate__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_AnimDynamicsLimitUpdate ==
      (FThreadSafeStaticStat<FStat_STAT_AnimDynamicsLimitUpdate>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_AnimDynamicsLimitUpdate");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AnimDynamicsLimitUpdate,*pFVar1,
               L"Limits Update","STATGROUP_Physics","STATCAT_Advanced",L"Physics",true,true,ST_int64
               ,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_AnimDynamicsLinearPost'' @ 1410dade0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_AnimDynamicsLinearPost__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_AnimDynamicsLinearPost ==
      (FThreadSafeStaticStat<FStat_STAT_AnimDynamicsLinearPost>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_AnimDynamicsLinearPost");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AnimDynamicsLinearPost,*pFVar1,
               L"Linear Limit Post-Update","STATGROUP_Physics","STATCAT_Advanced",L"Physics",true,
               true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_AnimDynamicsLinearPre'' @ 1410dae70

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_AnimDynamicsLinearPre__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_AnimDynamicsLinearPre ==
      (FThreadSafeStaticStat<FStat_STAT_AnimDynamicsLinearPre>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_AnimDynamicsLinearPre");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AnimDynamicsLinearPre,*pFVar1,
               L"Linear Limit Pre-Update","STATGROUP_Physics","STATCAT_Advanced",L"Physics",true,
               true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_AnimDynamicsPoseUpdate'' @ 1410daf00

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_AnimDynamicsPoseUpdate__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_AnimDynamicsPoseUpdate ==
      (FThreadSafeStaticStat<FStat_STAT_AnimDynamicsPoseUpdate>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_AnimDynamicsPoseUpdate");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AnimDynamicsPoseUpdate,*pFVar1,
               L"Pose Update","STATGROUP_Physics","STATCAT_Advanced",L"Physics",true,true,ST_int64,
               true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_AnimDynamicsUpdate'' @ 1410daf90

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_AnimDynamicsUpdate__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_AnimDynamicsUpdate == (FThreadSafeStaticStat<FStat_STAT_AnimDynamicsUpdate>)0x0)
  {
    pFVar1 = FName::FName(local_res8,"STAT_AnimDynamicsUpdate");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AnimDynamicsUpdate,*pFVar1,
               L"Anim Dynamics Physics Update","STATGROUP_Physics","STATCAT_Advanced",L"Physics",
               true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_AnimDynamicsVelocityInit'' @ 1410db020

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_AnimDynamicsVelocityInit__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_AnimDynamicsVelocityInit ==
      (FThreadSafeStaticStat<FStat_STAT_AnimDynamicsVelocityInit>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_AnimDynamicsVelocityInit");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AnimDynamicsVelocityInit,*pFVar1,
               L"Velocity Init","STATGROUP_Physics","STATCAT_Advanced",L"Physics",true,true,ST_int64
               ,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_AnimMontageInstance_Advance'' @ 1410db0b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_AnimMontageInstance_Advance__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_AnimMontageInstance_Advance ==
      (FThreadSafeStaticStat<FStat_STAT_AnimMontageInstance_Advance>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_AnimMontageInstance_Advance");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AnimMontageInstance_Advance,*pFVar1,
               L"AnimMontageInstance_Advance","STATGROUP_Anim","STATCAT_Advanced",L"Anim",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_AnimMontageInstance_Advance_Iteration'' @ 1410db140

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_AnimMontageInstance_Advance_Iteration__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_AnimMontageInstance_Advance_Iteration ==
      (FThreadSafeStaticStat<FStat_STAT_AnimMontageInstance_Advance_Iteration>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_AnimMontageInstance_Advance_Iteration");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AnimMontageInstance_Advance_Iteration,
               *pFVar1,L"AnimMontageInstance_Advance_Iteration","STATGROUP_Anim","STATCAT_Advanced",
               L"Anim",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_AnimMontageInstance_HandleEvents'' @ 1410db1d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_AnimMontageInstance_HandleEvents__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_AnimMontageInstance_HandleEvents ==
      (FThreadSafeStaticStat<FStat_STAT_AnimMontageInstance_HandleEvents>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_AnimMontageInstance_HandleEvents");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AnimMontageInstance_HandleEvents,*pFVar1,
               L"AnimMontageInstance_HandleEvents","STATGROUP_Anim","STATCAT_Advanced",L"Anim",true,
               true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_AnimMontageInstance_Terminate'' @ 1410db260

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_AnimMontageInstance_Terminate__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_AnimMontageInstance_Terminate ==
      (FThreadSafeStaticStat<FStat_STAT_AnimMontageInstance_Terminate>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_AnimMontageInstance_Terminate");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AnimMontageInstance_Terminate,*pFVar1,
               L"AnimMontageInstance_Terminate","STATGROUP_Anim","STATCAT_Advanced",L"Anim",true,
               true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_AnimMontageInstance_TickBranchPoints'' @ 1410db2f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_AnimMontageInstance_TickBranchPoints__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_AnimMontageInstance_TickBranchPoints ==
      (FThreadSafeStaticStat<FStat_STAT_AnimMontageInstance_TickBranchPoints>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_AnimMontageInstance_TickBranchPoints");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AnimMontageInstance_TickBranchPoints,
               *pFVar1,L"AnimMontageInstance_TickBranchPoints","STATGROUP_Anim","STATCAT_Advanced",
               L"Anim",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_AnimSeq_EvalCurveData'' @ 1410db380

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_AnimSeq_EvalCurveData__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_AnimSeq_EvalCurveData ==
      (FThreadSafeStaticStat<FStat_STAT_AnimSeq_EvalCurveData>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_AnimSeq_EvalCurveData");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AnimSeq_EvalCurveData,*pFVar1,
               L"AnimSeq EvalCurveData","STATGROUP_Anim","STATCAT_Advanced",L"Anim",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_AnimSeq_GetBonePose'' @ 1410db410

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_AnimSeq_GetBonePose__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_AnimSeq_GetBonePose == (FThreadSafeStaticStat<FStat_STAT_AnimSeq_GetBonePose>)0x0
     ) {
    pFVar1 = FName::FName(local_res8,"STAT_AnimSeq_GetBonePose");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AnimSeq_GetBonePose,*pFVar1,
               L"AnimSeq GetBonePose","STATGROUP_Anim","STATCAT_Advanced",L"Anim",true,true,ST_int64
               ,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_Stat_StateMachineSetState'' @ 1410db4a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_Stat_StateMachineSetState__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_Stat_StateMachineSetState ==
      (FThreadSafeStaticStat<FStat_Stat_StateMachineSetState>)0x0) {
    pFVar1 = FName::FName(local_res8,"Stat_StateMachineSetState");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_Stat_StateMachineSetState,*pFVar1,
               L"StateMachine SetState","STATGROUP_Anim","STATCAT_Advanced",L"Anim",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'TimeStretchCurveName'' @ 1410db530

void __cdecl MontageFNames::_dynamic_initializer_for__TimeStretchCurveName__(void)

{
  ::FName::FName(&TimeStretchCurveName,L"MontageTimeStretchCurve");
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimLinkableElement_h__Script_Engine_1091409093'' @ 1410db550

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimLinkableElement_h__Script_Engine_1091409093__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimLinkableElement_h__Script_Engine_Statics
             ::ScriptStructInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimLinkableElement_h__Script_Engine_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimMetaData_h__Script_Engine_866354938'' @ 1410db5a0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimMetaData_h__Script_Engine_866354938__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimMetaData_h__Script_Engine_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimMontage_h__Script_Engine_2116359374'' @ 1410db5e0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimMontage_h__Script_Engine_2116359374__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimMontage_h__Script_Engine_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimMontage_h__Script_Engine_Statics
             ::ScriptStructInfo,6,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimMontage_h__Script_Engine_Statics
             ::EnumInfo,3);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNodeBase_h__Script_Engine_1748904280'' @ 1410db630

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNodeBase_h__Script_Engine_1748904280__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNodeBase_h__Script_Engine_Statics
             ::ScriptStructInfo,4,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNodeBase_h__Script_Engine_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNodeFunctionRef_h__Script_Engine_1334541446'' @ 1410db680

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNodeFunctionRef_h__Script_Engine_1334541446__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNodeFunctionRef_h__Script_Engine_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNodeReference_h__Script_Engine_1233957958'' @ 1410db6c0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNodeReference_h__Script_Engine_1233957958__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNodeReference_h__Script_Engine_Statics
             ::ScriptStructInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNodeReference_h__Script_Engine_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNodeSpaceConversions_h__Script_Engine_3607976821'' @ 1410db710

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNodeSpaceConversions_h__Script_Engine_3607976821__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNodeSpaceConversions_h__Script_Engine_Statics
             ::ScriptStructInfo,2,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNode_ApplyMeshSpaceAdditive_h__Script_Engine_15560335'' @ 1410db750

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNode_ApplyMeshSpaceAdditive_h__Script_Engine_15560335__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNode_ApplyMeshSpaceAdditive_h__Script_Engine_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNode_AssetPlayerBase_h__Script_Engine_3706013435'' @ 1410db790

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNode_AssetPlayerBase_h__Script_Engine_3706013435__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNode_AssetPlayerBase_h__Script_Engine_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNode_CustomProperty_h__Script_Engine_166894138'' @ 1410db7d0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNode_CustomProperty_h__Script_Engine_166894138__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNode_CustomProperty_h__Script_Engine_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNode_DeadBlending_h__Script_Engine_4214145402'' @ 1410db810

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNode_DeadBlending_h__Script_Engine_4214145402__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNode_DeadBlending_h__Script_Engine_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNode_Inertialization_h__Script_Engine_2953407011'' @ 1410db850

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNode_Inertialization_h__Script_Engine_2953407011__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNode_Inertialization_h__Script_Engine_Statics
             ::ScriptStructInfo,4,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNode_Inertialization_h__Script_Engine_Statics
             ::EnumInfo,3);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNode_LinkedAnimGraph_h__Script_Engine_835491468'' @ 1410db8a0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNode_LinkedAnimGraph_h__Script_Engine_835491468__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNode_LinkedAnimGraph_h__Script_Engine_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNode_LinkedAnimLayer_h__Script_Engine_2130004459'' @ 1410db8e0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNode_LinkedAnimLayer_h__Script_Engine_2130004459__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNode_LinkedAnimLayer_h__Script_Engine_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNode_LinkedInputPose_h__Script_Engine_2946168871'' @ 1410db920

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNode_LinkedInputPose_h__Script_Engine_2946168871__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNode_LinkedInputPose_h__Script_Engine_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNode_RelevantAssetPlayerBase_h__Script_Engine_64271558'' @ 1410db960

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNode_RelevantAssetPlayerBase_h__Script_Engine_64271558__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNode_RelevantAssetPlayerBase_h__Script_Engine_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNode_Root_h__Script_Engine_2044513187'' @ 1410db9a0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNode_Root_h__Script_Engine_2044513187__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNode_Root_h__Script_Engine_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNode_SaveCachedPose_h__Script_Engine_3543010710'' @ 1410db9e0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNode_SaveCachedPose_h__Script_Engine_3543010710__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNode_SaveCachedPose_h__Script_Engine_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNode_SequencePlayer_h__Script_Engine_3650293533'' @ 1410dba20

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNode_SequencePlayer_h__Script_Engine_3650293533__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNode_SequencePlayer_h__Script_Engine_Statics
             ::ScriptStructInfo,3,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNode_StateMachine_h__Script_Engine_4061433150'' @ 1410dba60

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNode_StateMachine_h__Script_Engine_4061433150__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNode_StateMachine_h__Script_Engine_Statics
             ::ScriptStructInfo,3,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNode_TransitionPoseEvaluator_h__Script_Engine_3606024535'' @ 1410dbaa0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNode_TransitionPoseEvaluator_h__Script_Engine_3606024535__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNode_TransitionPoseEvaluator_h__Script_Engine_Statics
             ::ScriptStructInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNode_TransitionPoseEvaluator_h__Script_Engine_Statics
             ::EnumInfo,2);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNode_TransitionResult_h__Script_Engine_1724963186'' @ 1410dbaf0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNode_TransitionResult_h__Script_Engine_1724963186__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNode_TransitionResult_h__Script_Engine_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNode_UseCachedPose_h__Script_Engine_1671003007'' @ 1410dbb30

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNode_UseCachedPose_h__Script_Engine_1671003007__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNode_UseCachedPose_h__Script_Engine_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNotifies_AnimNotifyState_DisableRootMotion_h__Script_Engine_2452664914'' @ 1410dbb70

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNotifies_AnimNotifyState_DisableRootMotion_h__Script_Engine_2452664914__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNotifies_AnimNotifyState_DisableRootMotion_h__Script_Engine_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNotifies_AnimNotifyState_TimedParticleEffect_h__Script_Engine_2392125053'' @ 1410dbbb0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNotifies_AnimNotifyState_TimedParticleEffect_h__Script_Engine_2392125053__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNotifies_AnimNotifyState_TimedParticleEffect_h__Script_Engine_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNotifies_AnimNotifyState_Trail_h__Script_Engine_3441899846'' @ 1410dbbf0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNotifies_AnimNotifyState_Trail_h__Script_Engine_3441899846__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNotifies_AnimNotifyState_Trail_h__Script_Engine_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNotifies_AnimNotifyState_h__Script_Engine_2415885909'' @ 1410dbc30

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNotifies_AnimNotifyState_h__Script_Engine_2415885909__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNotifies_AnimNotifyState_h__Script_Engine_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNotifies_AnimNotify_PauseClothingSimulation_h__Script_Engine_107961679'' @ 1410dbc70

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNotifies_AnimNotify_PauseClothingSimulation_h__Script_Engine_107961679__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNotifies_AnimNotify_PauseClothingSimulation_h__Script_Engine_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNotifies_AnimNotify_PlayParticleEffect_h__Script_Engine_1147575935'' @ 1410dbcb0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNotifies_AnimNotify_PlayParticleEffect_h__Script_Engine_1147575935__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNotifies_AnimNotify_PlayParticleEffect_h__Script_Engine_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNotifies_AnimNotify_PlaySound_h__Script_Engine_2479516988'' @ 1410dbcf0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNotifies_AnimNotify_PlaySound_h__Script_Engine_2479516988__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNotifies_AnimNotify_PlaySound_h__Script_Engine_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNotifies_AnimNotify_ResetClothingSimulation_h__Script_Engine_2600984311'' @ 1410dbd30

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNotifies_AnimNotify_ResetClothingSimulation_h__Script_Engine_2600984311__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNotifies_AnimNotify_ResetClothingSimulation_h__Script_Engine_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNotifies_AnimNotify_ResetDynamics_h__Script_Engine_275324891'' @ 1410dbd70

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNotifies_AnimNotify_ResetDynamics_h__Script_Engine_275324891__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNotifies_AnimNotify_ResetDynamics_h__Script_Engine_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNotifies_AnimNotify_ResumeClothingSimulation_h__Script_Engine_2977423858'' @ 1410dbdb0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNotifies_AnimNotify_ResumeClothingSimulation_h__Script_Engine_2977423858__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNotifies_AnimNotify_ResumeClothingSimulation_h__Script_Engine_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNotifies_AnimNotify_h__Script_Engine_2257421259'' @ 1410dbdf0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNotifies_AnimNotify_h__Script_Engine_2257421259__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNotifies_AnimNotify_h__Script_Engine_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNotifies_AnimNotify_h__Script_Engine_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimSequence_h__Script_Engine_449390201'' @ 1410dbe40

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimSequence_h__Script_Engine_449390201__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimSequence_h__Script_Engine_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimSequence_h__Script_Engine_Statics
             ::ScriptStructInfo,6,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimSequence_h__Script_Engine_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_AnimNodeData_h__Script_Engine_1946521507'' @ 1410dbe90

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_AnimNodeData_h__Script_Engine_1946521507__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_AnimNodeData_h__Script_Engine_Statics
             ::ScriptStructInfo,2,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_AnimNodeData_h__Script_Engine_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_AnimNode_StateResult_h__Script_Engine_3370179695'' @ 1410dbee0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_AnimNode_StateResult_h__Script_Engine_3370179695__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_AnimNode_StateResult_h__Script_Engine_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_AnimNotifyLibrary_h__Script_Engine_3812506623'' @ 1410dbf20

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_AnimNotifyLibrary_h__Script_Engine_3812506623__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_AnimNotifyLibrary_h__Script_Engine_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_AnimNotifyMirrorInspectionLibrary_h__Script_Engine_4119892289'' @ 1410dbf60

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_AnimNotifyMirrorInspectionLibrary_h__Script_Engine_4119892289__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_AnimNotifyMirrorInspectionLibrary_h__Script_Engine_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_AnimNotifyQueue_h__Script_Engine_783260182'' @ 1410dbfa0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_AnimNotifyQueue_h__Script_Engine_783260182__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_AnimNotifyQueue_h__Script_Engine_Statics
             ::ScriptStructInfo,4,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_AnimNotifyStateMachineInspectionLibrary_h__Script_Engine_592108169'' @ 1410dbfe0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_AnimNotifyStateMachineInspectionLibrary_h__Script_Engine_592108169__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_AnimNotifyStateMachineInspectionLibrary_h__Script_Engine_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_AnimPhysicsSolver_h__Script_Engine_2024404478'' @ 1410dc020

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_AnimPhysicsSolver_h__Script_Engine_2024404478__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",(FClassRegisterCompiledInInfo *)0x0,0,
             (FStructRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_AnimPhysicsSolver_h__Script_Engine_Statics
             ::EnumInfo,2);
  return;
}

// NewProp_ReturnValue_SetBit @ 14748fbc0

void __cdecl
Z_Construct_UFunction_UAnimNotifyStateMachineInspectionLibrary_IsTriggeredByStateInStateMachine_Statics
::NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x48) = 1;
  return;
}

// Z_Construct_UFunction_UAnimNotifyStateMachineInspectionLibrary_IsTriggeredByStateInStateMachine @ 14748fbd0

UFunction * __cdecl
Z_Construct_UFunction_UAnimNotifyStateMachineInspectionLibrary_IsTriggeredByStateInStateMachine
          (void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAnimNotifyStateMachineInspectionLibrary_IsTriggeredByStateInStateMachine_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// AnimPhysTwistAxis_StaticEnum @ 14748fc10

UEnum * __cdecl AnimPhysTwistAxis_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_AnimPhysTwistAxis.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_AnimPhysTwistAxis.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_AnimPhysTwistAxis,(UObject *)pUVar1,
                       L"AnimPhysTwistAxis");
  }
  return Z_Registration_Info_UEnum_AnimPhysTwistAxis.OuterSingleton;
}

// NewProp_ReturnValue_SetBit @ 14748fc50

void __cdecl
Z_Construct_UFunction_UAnimNotifyStateMachineInspectionLibrary_IsTriggeredByStateMachine_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x40) = 1;
  return;
}

// AnimPhysCollisionType_StaticEnum @ 14748fc60

UEnum * __cdecl AnimPhysCollisionType_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_AnimPhysCollisionType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_AnimPhysCollisionType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_AnimPhysCollisionType,(UObject *)pUVar1,
                       L"AnimPhysCollisionType");
  }
  return Z_Registration_Info_UEnum_AnimPhysCollisionType.OuterSingleton;
}

// Z_Construct_UFunction_UAnimNotifyStateMachineInspectionLibrary_IsTriggeredByStateMachine @ 14748fca0

UFunction * __cdecl
Z_Construct_UFunction_UAnimNotifyStateMachineInspectionLibrary_IsTriggeredByStateMachine(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAnimNotifyStateMachineInspectionLibrary_IsTriggeredByStateMachine_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UAnimMontage_NoRegister @ 14748fce0

UClass * __cdecl Z_Construct_UClass_UAnimMontage_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAnimMontage.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"AnimMontage",
               &Z_Registration_Info_UClass_UAnimMontage.InnerSingleton,
               UAnimMontage::StaticRegisterNativesUAnimMontage,0x1e0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UAnimMontage>,
               InternalVTableHelperCtorCaller<UAnimMontage>,local_res8,
               UAnimCompositeBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAnimMontage.InnerSingleton;
}

// Z_Construct_UClass_UAnimMontage @ 14748fda0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UAnimMontage(void)

{
  if (Z_Registration_Info_UClass_UAnimMontage.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UAnimMontage.OuterSingleton,
               &Z_Construct_UClass_UAnimMontage_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UAnimMontage.OuterSingleton;
}

// Z_Construct_UEnum_Engine_EAnimNotifyEventType @ 14748fde0

UEnum * __cdecl Z_Construct_UEnum_Engine_EAnimNotifyEventType(void)

{
  if (Z_Registration_Info_UEnum_EAnimNotifyEventType.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EAnimNotifyEventType.InnerSingleton,
               &Z_Construct_UEnum_Engine_EAnimNotifyEventType_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EAnimNotifyEventType.InnerSingleton;
}

// Z_Construct_UEnum_Engine_EMontageBlendMode @ 14748fe20

UEnum * __cdecl Z_Construct_UEnum_Engine_EMontageBlendMode(void)

{
  if (Z_Registration_Info_UEnum_EMontageBlendMode.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EMontageBlendMode.InnerSingleton,
               &Z_Construct_UEnum_Engine_EMontageBlendMode_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EMontageBlendMode.InnerSingleton;
}

// Z_Construct_UScriptStruct_FBranchingPointMarker @ 14748fe60

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FBranchingPointMarker(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FBranchingPointMarker.InnerSingleton == (UScriptStruct *)0x0
     ) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FBranchingPointMarker.InnerSingleton,
               &Z_Construct_UScriptStruct_FBranchingPointMarker_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FBranchingPointMarker.InnerSingleton != (UScriptStruct *)0x0
     ) {
    return Z_Registration_Info_UScriptStruct_FBranchingPointMarker.InnerSingleton;
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

// Z_Construct_UScriptStruct_FCompositeSection @ 14748fee0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FCompositeSection(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FCompositeSection.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FCompositeSection.InnerSingleton,
               &Z_Construct_UScriptStruct_FCompositeSection_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FCompositeSection.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FCompositeSection.InnerSingleton;
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

// Z_Construct_UScriptStruct_FMontageBlendSettings @ 14748ff60

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FMontageBlendSettings(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FMontageBlendSettings.InnerSingleton == (UScriptStruct *)0x0
     ) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FMontageBlendSettings.InnerSingleton,
               &Z_Construct_UScriptStruct_FMontageBlendSettings_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FMontageBlendSettings.InnerSingleton != (UScriptStruct *)0x0
     ) {
    return Z_Registration_Info_UScriptStruct_FMontageBlendSettings.InnerSingleton;
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

// Z_Construct_UScriptStruct_FSlotAnimationTrack @ 14748ffe0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FSlotAnimationTrack(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FSlotAnimationTrack.InnerSingleton == (UScriptStruct *)0x0)
  {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FSlotAnimationTrack.InnerSingleton,
               &Z_Construct_UScriptStruct_FSlotAnimationTrack_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FSlotAnimationTrack.InnerSingleton != (UScriptStruct *)0x0)
  {
    return Z_Registration_Info_UScriptStruct_FSlotAnimationTrack.InnerSingleton;
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

// NewStructOps @ 1474900a0

void * __cdecl Z_Construct_UScriptStruct_FCompositeSection_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x50;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FCompositeSection,&UE::CoreUObject::Private::Construct<FCompositeSection>,&UE::CoreUObject::Private::ConstructForTests<FCompositeSection>,&UE::CoreUObject::Private::Destruct<FCompositeSection>,&UE::CoreUObject::Private::Copy<FCompositeSection>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// `scalar_deleting_destructor' @ 147490160

void * __thiscall FBranchingPoint::_scalar_deleting_destructor_(FBranchingPoint *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FAnimLinkableElement__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// NewStructOps @ 1474901e0

void * __cdecl Z_Construct_UScriptStruct_FSlotAnimationTrack_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x18;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FSlotAnimationTrack,&UE::CoreUObject::Private::Construct<FSlotAnimationTrack>,&UE::CoreUObject::Private::ConstructForTests<FSlotAnimationTrack>,&UE::CoreUObject::Private::Destruct<FSlotAnimationTrack>,&UE::CoreUObject::Private::Copy<FSlotAnimationTrack>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 147490570

void * __cdecl Z_Construct_UScriptStruct_FBranchingPoint_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x40;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FBranchingPoint,&UE::CoreUObject::Private::Construct<FBranchingPoint>,&UE::CoreUObject::Private::ConstructForTests<FBranchingPoint>,&UE::CoreUObject::Private::Destruct<FBranchingPoint>,&UE::CoreUObject::Private::Copy<FBranchingPoint>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 1474905b0

void * __cdecl Z_Construct_UScriptStruct_FAnimNode_LinkedAnimLayer_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 200;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FAnimNode_LinkedAnimLayer,&UE::CoreUObject::Private::Construct<FAnimNode_LinkedAnimLayer>,&UE::CoreUObject::Private::ConstructForTests<FAnimNode_LinkedAnimLayer>,&UE::CoreUObject::Private::Destruct<FAnimNode_LinkedAnimLayer>,&UE::CoreUObject::Private::Copy<FAnimNode_LinkedAnimLayer>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// EAnimNotifyEventType_StaticEnum @ 1474906f0

UEnum * __cdecl EAnimNotifyEventType_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EAnimNotifyEventType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_EAnimNotifyEventType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_EAnimNotifyEventType,(UObject *)pUVar1,
                       L"EAnimNotifyEventType");
  }
  return Z_Registration_Info_UEnum_EAnimNotifyEventType.OuterSingleton;
}

// Z_Construct_UClass_UAnimNotifyState_DisableRootMotion @ 147490730

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UAnimNotifyState_DisableRootMotion(void)

{
  if (Z_Registration_Info_UClass_UAnimNotifyState_DisableRootMotion.OuterSingleton == (UClass *)0x0)
  {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UAnimNotifyState_DisableRootMotion.OuterSingleton,
               &Z_Construct_UClass_UAnimNotifyState_DisableRootMotion_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UAnimNotifyState_DisableRootMotion.OuterSingleton;
}

// EMontageBlendMode_StaticEnum @ 147490770

UEnum * __cdecl EMontageBlendMode_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EMontageBlendMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_EMontageBlendMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_EMontageBlendMode,(UObject *)pUVar1,
                       L"EMontageBlendMode");
  }
  return Z_Registration_Info_UEnum_EMontageBlendMode.OuterSingleton;
}

// NewStructOps @ 1474907b0

void * __cdecl Z_Construct_UScriptStruct_FBranchingPointMarker_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xc;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FBranchingPointMarker,&UE::CoreUObject::Private::Construct<FBranchingPointMarker>,&UE::CoreUObject::Private::ConstructForTests<FBranchingPointMarker>,&UE::CoreUObject::Private::Destruct<FBranchingPointMarker>,&UE::CoreUObject::Private::Copy<FBranchingPointMarker>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_bIsOutputLinked_SetBit @ 147490830

void __cdecl
Z_Construct_UScriptStruct_FAnimNode_LinkedInputPose_Statics::NewProp_bIsOutputLinked_SetBit
          (void *param_1)

{
  *(byte *)((longlong)param_1 + 0xa8) = *(byte *)((longlong)param_1 + 0xa8) | 2;
  return;
}

// NewStructOps @ 147490900

void * __cdecl Z_Construct_UScriptStruct_FAnimNode_LinkedInputPose_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xb8;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FAnimNode_LinkedInputPose,&UE::CoreUObject::Private::Construct<FAnimNode_LinkedInputPose>,&UE::CoreUObject::Private::ConstructForTests<FAnimNode_LinkedInputPose>,&UE::CoreUObject::Private::Destruct<FAnimNode_LinkedInputPose>,&UE::CoreUObject::Private::Copy<FAnimNode_LinkedInputPose>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// EMontageSubStepResult_StaticEnum @ 147492be0

UEnum * __cdecl EMontageSubStepResult_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EMontageSubStepResult.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_EMontageSubStepResult.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_EMontageSubStepResult,(UObject *)pUVar1,
                       L"EMontageSubStepResult");
  }
  return Z_Registration_Info_UEnum_EMontageSubStepResult.OuterSingleton;
}

// NewStructOps @ 147492f00

void * __cdecl Z_Construct_UScriptStruct_FMontageBlendSettings_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FMontageBlendSettings,&UE::CoreUObject::Private::Construct<FMontageBlendSettings>,&UE::CoreUObject::Private::ConstructForTests<FMontageBlendSettings>,&UE::CoreUObject::Private::Destruct<FMontageBlendSettings>,&UE::CoreUObject::Private::Copy<FMontageBlendSettings>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UAnimNotifyState_Trail @ 147493040

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UAnimNotifyState_Trail(void)

{
  if (Z_Registration_Info_UClass_UAnimNotifyState_Trail.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UAnimNotifyState_Trail.OuterSingleton,
               &Z_Construct_UClass_UAnimNotifyState_Trail_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UAnimNotifyState_Trail.OuterSingleton;
}

// Z_Construct_UFunction_UAnimNotifyState_Trail_OverridePSTemplate @ 147493080

UFunction * __cdecl Z_Construct_UFunction_UAnimNotifyState_Trail_OverridePSTemplate(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAnimNotifyState_Trail_OverridePSTemplate_Statics::FuncParams)
    ;
  }
  return ReturnFunction;
}

// NewProp_bPlaying_SetBit @ 1474930c0

void __cdecl
Z_Construct_UScriptStruct_FAnimMontageInstance_Statics::NewProp_bPlaying_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x68) = 1;
  return;
}

// NewProp_bRecycleSpawnedSystems_SetBit @ 1474930d0

void __cdecl
Z_Construct_UClass_UAnimNotifyState_Trail_Statics::NewProp_bRecycleSpawnedSystems_SetBit
          (void *param_1)

{
  *(uint *)((longlong)param_1 + 0x54) = *(uint *)((longlong)param_1 + 0x54) | 1;
  return;
}

// NewStructOps @ 1474930e0

void * __cdecl Z_Construct_UScriptStruct_FAnimMontageInstance_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x208;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FAnimMontageInstance,&UE::CoreUObject::Private::Construct<FAnimMontageInstance>,&UE::CoreUObject::Private::ConstructForTests<FAnimMontageInstance>,&UE::CoreUObject::Private::Destruct<FAnimMontageInstance>,&UE::CoreUObject::Private::Copy<FAnimMontageInstance>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 147493120

void * __cdecl
Z_Construct_UScriptStruct_FAnimNode_AssetPlayerRelevancyBase_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FAnimNode_AssetPlayerRelevancyBase,&UE::CoreUObject::Private::Construct<FAnimNode_AssetPlayerRelevancyBase>,&UE::CoreUObject::Private::ConstructForTests<FAnimNode_AssetPlayerRelevancyBase>,&UE::CoreUObject::Private::Destruct<FAnimNode_AssetPlayerRelevancyBase>,&UE::CoreUObject::Private::Copy<FAnimNode_AssetPlayerRelevancyBase>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UScriptStruct_FAnimNode_Root @ 147493250

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FAnimNode_Root(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FAnimNode_Root.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FAnimNode_Root.InnerSingleton,
               &Z_Construct_UScriptStruct_FAnimNode_Root_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FAnimNode_Root.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FAnimNode_Root.InnerSingleton;
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

// NewStructOps @ 1474932d0

void * __cdecl Z_Construct_UScriptStruct_FAnimNode_Root_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FAnimNode_Root,&UE::CoreUObject::Private::Construct<FAnimNode_Root>,&UE::CoreUObject::Private::ConstructForTests<FAnimNode_Root>,&UE::CoreUObject::Private::Destruct<FAnimNode_Root>,&UE::CoreUObject::Private::Copy<FAnimNode_Root>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UAnimMontage_CreateSlotAnimationAsDynamicMontage_WithBlendSettings @ 1474933d0

UFunction * __cdecl
Z_Construct_UFunction_UAnimMontage_CreateSlotAnimationAsDynamicMontage_WithBlendSettings(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAnimMontage_CreateSlotAnimationAsDynamicMontage_WithBlendSettings_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewStructOps @ 147493410

void * __cdecl Z_Construct_UScriptStruct_FAnimNode_StateResult_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FAnimNode_StateResult,&UE::CoreUObject::Private::Construct<FAnimNode_StateResult>,&UE::CoreUObject::Private::ConstructForTests<FAnimNode_StateResult>,&UE::CoreUObject::Private::Destruct<FAnimNode_StateResult>,&UE::CoreUObject::Private::Copy<FAnimNode_StateResult>,&UE::CoreUObject::Private::StructuredSerializeFromMismatchedTag<FAnimNode_StateResult>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UAnimMontage_GetBlendInArgs @ 147493890

UFunction * __cdecl Z_Construct_UFunction_UAnimMontage_GetBlendInArgs(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAnimMontage_GetBlendInArgs_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UAnimMontage_GetBlendOutArgs @ 1474938d0

UFunction * __cdecl Z_Construct_UFunction_UAnimMontage_GetBlendOutArgs(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAnimMontage_GetBlendOutArgs_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UAnimMontage_GetDefaultBlendInTime @ 147493910

UFunction * __cdecl Z_Construct_UFunction_UAnimMontage_GetDefaultBlendInTime(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAnimMontage_GetDefaultBlendInTime_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UAnimMontage_GetDefaultBlendOutTime @ 147493950

UFunction * __cdecl Z_Construct_UFunction_UAnimMontage_GetDefaultBlendOutTime(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAnimMontage_GetDefaultBlendOutTime_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UAnimMontage_GetFirstAnimReference @ 147493990

UFunction * __cdecl Z_Construct_UFunction_UAnimMontage_GetFirstAnimReference(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAnimMontage_GetFirstAnimReference_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewStructOps @ 1474939d0

void * __cdecl Z_Construct_UScriptStruct_FAnimNode_SaveCachedPose_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x80;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FAnimNode_SaveCachedPose,&UE::CoreUObject::Private::Construct<FAnimNode_SaveCachedPose>,&UE::CoreUObject::Private::ConstructForTests<FAnimNode_SaveCachedPose>,&UE::CoreUObject::Private::Destruct<FAnimNode_SaveCachedPose>,&UE::CoreUObject::Private::Copy<FAnimNode_SaveCachedPose>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UAnimMontage_GetGroupName @ 147493a10

UFunction * __cdecl Z_Construct_UFunction_UAnimMontage_GetGroupName(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_UAnimMontage_GetGroupName_Statics::FuncParams)
    ;
  }
  return ReturnFunction;
}

// Z_Construct_UEnum_Engine_EEvaluatorDataSource @ 147493a50

UEnum * __cdecl Z_Construct_UEnum_Engine_EEvaluatorDataSource(void)

{
  if (Z_Registration_Info_UEnum_EEvaluatorDataSource.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EEvaluatorDataSource.InnerSingleton,
               &Z_Construct_UEnum_Engine_EEvaluatorDataSource_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EEvaluatorDataSource.InnerSingleton;
}

// Z_Construct_UEnum_Engine_EEvaluatorMode @ 147493a90

UEnum * __cdecl Z_Construct_UEnum_Engine_EEvaluatorMode(void)

{
  if (Z_Registration_Info_UEnum_EEvaluatorMode.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EEvaluatorMode.InnerSingleton,
               &Z_Construct_UEnum_Engine_EEvaluatorMode_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EEvaluatorMode.InnerSingleton;
}

// EEvaluatorDataSource_StaticEnum @ 147493ad0

UEnum * __cdecl EEvaluatorDataSource_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EEvaluatorDataSource.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_EEvaluatorDataSource.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_EEvaluatorDataSource,(UObject *)pUVar1,
                       L"EEvaluatorDataSource");
  }
  return Z_Registration_Info_UEnum_EEvaluatorDataSource.OuterSingleton;
}

// Z_Construct_UFunction_UAnimMontage_GetNumSections @ 147493b10

UFunction * __cdecl Z_Construct_UFunction_UAnimMontage_GetNumSections(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAnimMontage_GetNumSections_Statics::FuncParams);
  }
  return ReturnFunction;
}

// EEvaluatorMode_StaticEnum @ 147493b90

UEnum * __cdecl EEvaluatorMode_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EEvaluatorMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_EEvaluatorMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_EEvaluatorMode,(UObject *)pUVar1,L"EEvaluatorMode");
  }
  return Z_Registration_Info_UEnum_EEvaluatorMode.OuterSingleton;
}

// Z_Construct_UFunction_UAnimMontage_GetSectionIndex @ 147493c30

UFunction * __cdecl Z_Construct_UFunction_UAnimMontage_GetSectionIndex(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAnimMontage_GetSectionIndex_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewStructOps @ 147493ce0

void * __cdecl
Z_Construct_UScriptStruct_FAnimNode_TransitionPoseEvaluator_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xa8;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FAnimNode_TransitionPoseEvaluator,&UE::CoreUObject::Private::Construct<FAnimNode_TransitionPoseEvaluator>,&UE::CoreUObject::Private::ConstructForTests<FAnimNode_TransitionPoseEvaluator>,&UE::CoreUObject::Private::Destruct<FAnimNode_TransitionPoseEvaluator>,&UE::CoreUObject::Private::Copy<FAnimNode_TransitionPoseEvaluator>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UAnimMontage_GetSectionName @ 147493df0

UFunction * __cdecl Z_Construct_UFunction_UAnimMontage_GetSectionName(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAnimMontage_GetSectionName_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 147493ed0

void __cdecl
Z_Construct_UFunction_UAnimMontage_IsDynamicMontage_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UAnimMontage_IsDynamicMontage @ 147493ee0

UFunction * __cdecl Z_Construct_UFunction_UAnimMontage_IsDynamicMontage(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAnimMontage_IsDynamicMontage_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 147493f20

void __cdecl
Z_Construct_UFunction_UAnimMontage_IsValidAdditiveSlot_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 1;
  return;
}

// Z_Construct_UFunction_UAnimMontage_IsValidAdditiveSlot @ 147493f30

UFunction * __cdecl Z_Construct_UFunction_UAnimMontage_IsValidAdditiveSlot(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAnimMontage_IsValidAdditiveSlot_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 147493f70

void __cdecl
Z_Construct_UFunction_UAnimMontage_IsValidSectionName_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 1;
  return;
}

// Z_Construct_UFunction_UAnimMontage_IsValidSectionName @ 147493f80

UFunction * __cdecl Z_Construct_UFunction_UAnimMontage_IsValidSectionName(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAnimMontage_IsValidSectionName_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bCanEnterTransition_SetBit @ 147493fc0

void __cdecl
Z_Construct_UScriptStruct_FAnimNode_TransitionResult_Statics::NewProp_bCanEnterTransition_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x10) = 1;
  return;
}

// NewProp_bEnableRootMotionTranslation_SetBit @ 147493fd0

void __cdecl
Z_Construct_UClass_UAnimMontage_Statics::NewProp_bEnableRootMotionTranslation_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x170) = 1;
  return;
}

// NewStructOps @ 147493fe0

void * __cdecl Z_Construct_UScriptStruct_FAnimNode_TransitionResult_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x30;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FAnimNode_TransitionResult,&UE::CoreUObject::Private::Construct<FAnimNode_TransitionResult>,&UE::CoreUObject::Private::ConstructForTests<FAnimNode_TransitionResult>,&UE::CoreUObject::Private::Destruct<FAnimNode_TransitionResult>,&UE::CoreUObject::Private::Copy<FAnimNode_TransitionResult>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_bEnableRootMotionRotation_SetBit @ 147494020

void __cdecl
Z_Construct_UClass_UAnimMontage_Statics::NewProp_bEnableRootMotionRotation_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x171) = 1;
  return;
}

// NewProp_bEnableAutoBlendOut_SetBit @ 147494030

void __cdecl
Z_Construct_UClass_UAnimMontage_Statics::NewProp_bEnableAutoBlendOut_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x172) = 1;
  return;
}

// NewStructOps @ 1474946a0

void * __cdecl Z_Construct_UScriptStruct_FAnimNode_UseCachedPose_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x28;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FAnimNode_UseCachedPose,&UE::CoreUObject::Private::Construct<FAnimNode_UseCachedPose>,&UE::CoreUObject::Private::ConstructForTests<FAnimNode_UseCachedPose>,&UE::CoreUObject::Private::Destruct<FAnimNode_UseCachedPose>,&UE::CoreUObject::Private::Copy<FAnimNode_UseCachedPose>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UAnimNotify @ 147494760

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UAnimNotify(void)

{
  if (Z_Registration_Info_UClass_UAnimNotify.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UAnimNotify.OuterSingleton,
               &Z_Construct_UClass_UAnimNotify_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UAnimNotify.OuterSingleton;
}

// Z_Construct_UScriptStruct_FAnimNotifyEventReference @ 1474947a0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FAnimNotifyEventReference(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FAnimNotifyEventReference.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FAnimNotifyEventReference.InnerSingleton,
               &Z_Construct_UScriptStruct_FAnimNotifyEventReference_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FAnimNotifyEventReference.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FAnimNotifyEventReference.InnerSingleton;
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

// NewStructOps @ 147494820

void * __cdecl Z_Construct_UScriptStruct_FBranchingPointNotifyPayload_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FBranchingPointNotifyPayload,&UE::CoreUObject::Private::Construct<FBranchingPointNotifyPayload>,&UE::CoreUObject::Private::ConstructForTests<FBranchingPointNotifyPayload>,&UE::CoreUObject::Private::Destruct<FBranchingPointNotifyPayload>,&UE::CoreUObject::Private::Copy<FBranchingPointNotifyPayload>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UAnimNotify_GetDefaultTriggerWeightThreshold @ 147494b80

UFunction * __cdecl Z_Construct_UFunction_UAnimNotify_GetDefaultTriggerWeightThreshold(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAnimNotify_GetDefaultTriggerWeightThreshold_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// `scalar_deleting_destructor' @ 147494ce0

void * __thiscall
FAnimNode_Inertialization::_scalar_deleting_destructor_
          (FAnimNode_Inertialization *this,uint param_1)

{
  ~FAnimNode_Inertialization(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x550);
  }
  return this;
}

// Z_Construct_UFunction_UAnimNotify_GetNotifyName @ 147494e40

UFunction * __cdecl Z_Construct_UFunction_UAnimNotify_GetNotifyName(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_UAnimNotify_GetNotifyName_Statics::FuncParams)
    ;
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UAnimNotifyState_TimedParticleEffect @ 147494e80

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UAnimNotifyState_TimedParticleEffect(void)

{
  if (Z_Registration_Info_UClass_UAnimNotifyState_TimedParticleEffect.OuterSingleton ==
      (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UAnimNotifyState_TimedParticleEffect.OuterSingleton,
               &Z_Construct_UClass_UAnimNotifyState_TimedParticleEffect_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UAnimNotifyState_TimedParticleEffect.OuterSingleton;
}

// NewProp_ReturnValue_SetBit @ 147494ec0

void __cdecl
Z_Construct_UFunction_UAnimNotify_Received_Notify_Statics::NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x40) = 1;
  return;
}

// NewProp_bDestroyAtEnd_SetBit @ 147494ed0

void __cdecl
Z_Construct_UClass_UAnimNotifyState_TimedParticleEffect_Statics::NewProp_bDestroyAtEnd_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x70) = 1;
  return;
}

// Z_Construct_UFunction_UAnimNotify_Received_Notify @ 147494fa0

UFunction * __cdecl Z_Construct_UFunction_UAnimNotify_Received_Notify(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAnimNotify_Received_Notify_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewStructOps @ 147494fe0

void * __cdecl Z_Construct_UScriptStruct_FAnimNodeFunctionRef_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FAnimNodeFunctionRef,&UE::CoreUObject::Private::Construct<FAnimNodeFunctionRef>,&UE::CoreUObject::Private::ConstructForTests<FAnimNodeFunctionRef>,&UE::CoreUObject::Private::Destruct<FAnimNodeFunctionRef>,&UE::CoreUObject::Private::Copy<FAnimNodeFunctionRef>,&UE::CoreUObject::Private::Identical<FAnimNodeFunctionRef>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 147495020

void * __cdecl Z_Construct_UScriptStruct_FAnimationActiveTransitionEntry_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 200;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FAnimationActiveTransitionEntry,&UE::CoreUObject::Private::Construct<FAnimationActiveTransitionEntry>,&UE::CoreUObject::Private::ConstructForTests<FAnimationActiveTransitionEntry>,&UE::CoreUObject::Private::Destruct<FAnimationActiveTransitionEntry>,&UE::CoreUObject::Private::Copy<FAnimationActiveTransitionEntry>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UAnimNotify_PauseClothingSimulation @ 147495bd0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UAnimNotify_PauseClothingSimulation(void)

{
  if (Z_Registration_Info_UClass_UAnimNotify_PauseClothingSimulation.OuterSingleton == (UClass *)0x0
     ) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UAnimNotify_PauseClothingSimulation.OuterSingleton,
               &Z_Construct_UClass_UAnimNotify_PauseClothingSimulation_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UAnimNotify_PauseClothingSimulation.OuterSingleton;
}

// `scalar_deleting_destructor' @ 147496060

void * __thiscall
FAnimNode_LinkedInputPose::_scalar_deleting_destructor_
          (FAnimNode_LinkedInputPose *this,uint param_1)

{
  UE::Anim::TAttributeContainer<FCompactPoseBoneIndex,TSizedDefaultAllocator<32>_>::
  ~TAttributeContainer<FCompactPoseBoneIndex,TSizedDefaultAllocator<32>_>
            ((TAttributeContainer<FCompactPoseBoneIndex,TSizedDefaultAllocator<32>_> *)
             &this->CachedAttributes);
  if (*(void **)&this->CachedInputCurve != (void *)0x0) {
    FMemory::Free(*(void **)&this->CachedInputCurve);
  }
  if (*(void **)&this->CachedInputPose != (void *)0x0) {
    FMemory::Free(*(void **)&this->CachedInputPose);
  }
  this->_padding_ = (longlong)&___7FAnimNode_Base__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xb8);
  }
  return this;
}

// NewStructOps @ 1474960d0

void * __cdecl Z_Construct_UScriptStruct_FAnimationPotentialTransition_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x30;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FAnimationPotentialTransition,&UE::CoreUObject::Private::Construct<FAnimationPotentialTransition>,&UE::CoreUObject::Private::ConstructForTests<FAnimationPotentialTransition>,&UE::CoreUObject::Private::Destruct<FAnimationPotentialTransition>,&UE::CoreUObject::Private::Copy<FAnimationPotentialTransition>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_bSkipFirstUpdateTransition_SetBit @ 147496880

void __cdecl
Z_Construct_UScriptStruct_FAnimNode_StateMachine_Statics::NewProp_bSkipFirstUpdateTransition_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x1c) = 1;
  return;
}

// NewProp_bReinitializeOnBecomingRelevant_SetBit @ 147496890

void __cdecl
Z_Construct_UScriptStruct_FAnimNode_StateMachine_Statics::
NewProp_bReinitializeOnBecomingRelevant_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x1d) = 1;
  return;
}

// NewProp_bCreateNotifyMetaData_SetBit @ 1474968a0

void __cdecl
Z_Construct_UScriptStruct_FAnimNode_StateMachine_Statics::NewProp_bCreateNotifyMetaData_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x1e) = 1;
  return;
}

// NewProp_bAllowConduitEntryStates_SetBit @ 1474968b0

void __cdecl
Z_Construct_UScriptStruct_FAnimNode_StateMachine_Statics::NewProp_bAllowConduitEntryStates_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x1f) = 1;
  return;
}

// NewStructOps @ 1474968c0

void * __cdecl Z_Construct_UScriptStruct_FAnimNode_StateMachine_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xd8;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FAnimNode_StateMachine,&UE::CoreUObject::Private::Construct<FAnimNode_StateMachine>,&UE::CoreUObject::Private::ConstructForTests<FAnimNode_StateMachine>,&UE::CoreUObject::Private::Destruct<FAnimNode_StateMachine>,&UE::CoreUObject::Private::Copy<FAnimNode_StateMachine>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UAnimNotify_PlayParticleEffect @ 147496900

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UAnimNotify_PlayParticleEffect(void)

{
  if (Z_Registration_Info_UClass_UAnimNotify_PlayParticleEffect.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UAnimNotify_PlayParticleEffect.OuterSingleton,
               &Z_Construct_UClass_UAnimNotify_PlayParticleEffect_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UAnimNotify_PlayParticleEffect.OuterSingleton;
}

// NewProp_Attached_SetBit @ 147496940

void __cdecl
Z_Construct_UClass_UAnimNotify_PlayParticleEffect_Statics::NewProp_Attached_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0xb0) = *(uint *)((longlong)param_1 + 0xb0) | 1;
  return;
}

// Z_Construct_UScriptStruct_FAnimNode_LinkedAnimGraph @ 147496a10

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FAnimNode_LinkedAnimGraph(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FAnimNode_LinkedAnimGraph.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FAnimNode_LinkedAnimGraph.InnerSingleton,
               &Z_Construct_UScriptStruct_FAnimNode_LinkedAnimGraph_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FAnimNode_LinkedAnimGraph.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FAnimNode_LinkedAnimGraph.InnerSingleton;
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

// NewProp_bReceiveNotifiesFromLinkedInstances_SetBit @ 147496a90

void __cdecl
Z_Construct_UScriptStruct_FAnimNode_LinkedAnimGraph_Statics::
NewProp_bReceiveNotifiesFromLinkedInstances_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0xb0) = *(byte *)((longlong)param_1 + 0xb0) | 1;
  return;
}

// NewProp_bPropagateNotifiesToLinkedInstances_SetBit @ 147496aa0

void __cdecl
Z_Construct_UScriptStruct_FAnimNode_LinkedAnimGraph_Statics::
NewProp_bPropagateNotifiesToLinkedInstances_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0xb0) = *(byte *)((longlong)param_1 + 0xb0) | 2;
  return;
}

// NewStructOps @ 147496ab0

void * __cdecl Z_Construct_UScriptStruct_FAnimNode_LinkedAnimGraph_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xb8;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FAnimNode_LinkedAnimGraph,&UE::CoreUObject::Private::Construct<FAnimNode_LinkedAnimGraph>,&UE::CoreUObject::Private::ConstructForTests<FAnimNode_LinkedAnimGraph>,&UE::CoreUObject::Private::Destruct<FAnimNode_LinkedAnimGraph>,&UE::CoreUObject::Private::Copy<FAnimNode_LinkedAnimGraph>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UAnimNotifyLibrary @ 147496af0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UAnimNotifyLibrary(void)

{
  if (Z_Registration_Info_UClass_UAnimNotifyLibrary.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UAnimNotifyLibrary.OuterSingleton,
               &Z_Construct_UClass_UAnimNotifyLibrary_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UAnimNotifyLibrary.OuterSingleton;
}

// Z_Construct_UFunction_UAnimNotifyLibrary_GetCurrentAnimationNotifyStateTime @ 147496c20

UFunction * __cdecl
Z_Construct_UFunction_UAnimNotifyLibrary_GetCurrentAnimationNotifyStateTime(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAnimNotifyLibrary_GetCurrentAnimationNotifyStateTime_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UAnimNotifyLibrary_GetCurrentAnimationNotifyStateTimeRatio @ 147496f00

UFunction * __cdecl
Z_Construct_UFunction_UAnimNotifyLibrary_GetCurrentAnimationNotifyStateTimeRatio(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAnimNotifyLibrary_GetCurrentAnimationNotifyStateTimeRatio_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UAnimNotify_PlaySound @ 147497110

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UAnimNotify_PlaySound(void)

{
  if (Z_Registration_Info_UClass_UAnimNotify_PlaySound.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UAnimNotify_PlaySound.OuterSingleton,
               &Z_Construct_UClass_UAnimNotify_PlaySound_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UAnimNotify_PlaySound.OuterSingleton;
}

// NewProp_bFollow_SetBit @ 1474971f0

void __cdecl Z_Construct_UClass_UAnimNotify_PlaySound_Statics::NewProp_bFollow_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x48) = *(uint *)((longlong)param_1 + 0x48) | 1;
  return;
}

// Z_Construct_UFunction_UAnimNotifyLibrary_GetCurrentAnimationTime @ 147497200

UFunction * __cdecl Z_Construct_UFunction_UAnimNotifyLibrary_GetCurrentAnimationTime(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAnimNotifyLibrary_GetCurrentAnimationTime_Statics::FuncParams
              );
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UAnimNotifyLibrary_GetCurrentAnimationTimeRatio @ 147497250

UFunction * __cdecl Z_Construct_UFunction_UAnimNotifyLibrary_GetCurrentAnimationTimeRatio(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAnimNotifyLibrary_GetCurrentAnimationTimeRatio_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 147497290

void __cdecl
Z_Construct_UFunction_UAnimNotifyLibrary_IsBlendingOut_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x30) = 1;
  return;
}

// Z_Construct_UFunction_UAnimNotifyLibrary_IsBlendingOut @ 1474972a0

UFunction * __cdecl Z_Construct_UFunction_UAnimNotifyLibrary_IsBlendingOut(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAnimNotifyLibrary_IsBlendingOut_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 1474972e0

void __cdecl
Z_Construct_UFunction_UAnimNotifyLibrary_NotifyStateReachedEnd_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x30) = 1;
  return;
}

// Z_Construct_UFunction_UAnimNotifyLibrary_NotifyStateReachedEnd @ 1474973b0

UFunction * __cdecl Z_Construct_UFunction_UAnimNotifyLibrary_NotifyStateReachedEnd(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAnimNotifyLibrary_NotifyStateReachedEnd_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UAnimSequence_NoRegister @ 1474974b0

UClass * __cdecl Z_Construct_UClass_UAnimSequence_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAnimSequence.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UAnimSequence::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"AnimSequence",
               &Z_Registration_Info_UClass_UAnimSequence.InnerSingleton,
               UAnimSequence::StaticRegisterNativesUAnimSequence,0x1f0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UAnimSequence>,
               InternalVTableHelperCtorCaller<UAnimSequence>,local_res8,
               UAnimSequenceBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAnimSequence.InnerSingleton;
}

// Z_Construct_UClass_UAnimNotify_ResetClothingSimulation @ 1474975b0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UAnimNotify_ResetClothingSimulation(void)

{
  if (Z_Registration_Info_UClass_UAnimNotify_ResetClothingSimulation.OuterSingleton == (UClass *)0x0
     ) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UAnimNotify_ResetClothingSimulation.OuterSingleton,
               &Z_Construct_UClass_UAnimNotify_ResetClothingSimulation_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UAnimNotify_ResetClothingSimulation.OuterSingleton;
}

// EAnimNodeReferenceConversionResult_StaticEnum @ 147497cc0

UEnum * __cdecl EAnimNodeReferenceConversionResult_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EAnimNodeReferenceConversionResult.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_EAnimNodeReferenceConversionResult.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_EAnimNodeReferenceConversionResult,(UObject *)pUVar1
                       ,L"EAnimNodeReferenceConversionResult");
  }
  return Z_Registration_Info_UEnum_EAnimNodeReferenceConversionResult.OuterSingleton;
}

// Z_Construct_UScriptStruct_FAnimNode_Base @ 147497d00

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FAnimNode_Base(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FAnimNode_Base.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FAnimNode_Base.InnerSingleton,
               &Z_Construct_UScriptStruct_FAnimNode_Base_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FAnimNode_Base.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FAnimNode_Base.InnerSingleton;
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

// Z_Construct_UScriptStruct_FComponentSpacePoseLink @ 147497d80

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FComponentSpacePoseLink(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FComponentSpacePoseLink.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FComponentSpacePoseLink.InnerSingleton,
               &Z_Construct_UScriptStruct_FComponentSpacePoseLink_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FComponentSpacePoseLink.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FComponentSpacePoseLink.InnerSingleton;
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

// Z_Construct_UScriptStruct_FPoseLink @ 147497e00

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FPoseLink(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FPoseLink.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FPoseLink.InnerSingleton,
               &Z_Construct_UScriptStruct_FPoseLink_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FPoseLink.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FPoseLink.InnerSingleton;
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

// Z_Construct_UScriptStruct_FPoseLinkBase @ 147497e80

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FPoseLinkBase(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FPoseLinkBase.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FPoseLinkBase.InnerSingleton,
               &Z_Construct_UScriptStruct_FPoseLinkBase_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FPoseLinkBase.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FPoseLinkBase.InnerSingleton;
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

// EPinHidingMode_StaticEnum @ 147497f00

UEnum * __cdecl EPinHidingMode_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EPinHidingMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_EPinHidingMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_EPinHidingMode,(UObject *)pUVar1,L"EPinHidingMode");
  }
  return Z_Registration_Info_UEnum_EPinHidingMode.OuterSingleton;
}

// Z_Construct_UClass_UAnimNotify_ResetDynamics @ 147497f40

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UAnimNotify_ResetDynamics(void)

{
  if (Z_Registration_Info_UClass_UAnimNotify_ResetDynamics.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UAnimNotify_ResetDynamics.OuterSingleton,
               &Z_Construct_UClass_UAnimNotify_ResetDynamics_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UAnimNotify_ResetDynamics.OuterSingleton;
}

// NewStructOps @ 147497f80

void * __cdecl Z_Construct_UScriptStruct_FAnimNodeReference_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FAnimNodeReference,&UE::CoreUObject::Private::Construct<FAnimNodeReference>,&UE::CoreUObject::Private::ConstructForTests<FAnimNodeReference>,&UE::CoreUObject::Private::Destruct<FAnimNodeReference>,&UE::CoreUObject::Private::Copy<FAnimNodeReference>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 147498000

void * __cdecl Z_Construct_UScriptStruct_FPoseLinkBase_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FPoseLinkBase,&UE::CoreUObject::Private::Construct<FPoseLinkBase>,&UE::CoreUObject::Private::ConstructForTests<FPoseLinkBase>,&UE::CoreUObject::Private::Destruct<FPoseLinkBase>,&UE::CoreUObject::Private::Copy<FPoseLinkBase>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 147498160

void * __cdecl Z_Construct_UScriptStruct_FPoseLink_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FPoseLink,&UE::CoreUObject::Private::Construct<FPoseLink>,&UE::CoreUObject::Private::ConstructForTests<FPoseLink>,&UE::CoreUObject::Private::Destruct<FPoseLink>,&UE::CoreUObject::Private::Copy<FPoseLink>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UAnimNotify_ResumeClothingSimulation @ 147498440

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UAnimNotify_ResumeClothingSimulation(void)

{
  if (Z_Registration_Info_UClass_UAnimNotify_ResumeClothingSimulation.OuterSingleton ==
      (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UAnimNotify_ResumeClothingSimulation.OuterSingleton,
               &Z_Construct_UClass_UAnimNotify_ResumeClothingSimulation_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UAnimNotify_ResumeClothingSimulation.OuterSingleton;
}

// NewStructOps @ 147498480

void * __cdecl
Z_Construct_UScriptStruct_FAnimNode_ConvertComponentToLocalSpace_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FAnimNode_ConvertComponentToLocalSpace,&UE::CoreUObject::Private::Construct<FAnimNode_ConvertComponentToLocalSpace>,&UE::CoreUObject::Private::ConstructForTests<FAnimNode_ConvertComponentToLocalSpace>,&UE::CoreUObject::Private::Destruct<FAnimNode_ConvertComponentToLocalSpace>,&UE::CoreUObject::Private::Copy<FAnimNode_ConvertComponentToLocalSpace>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UAnimSequence @ 147498550

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UAnimSequence(void)

{
  if (Z_Registration_Info_UClass_UAnimSequence.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UAnimSequence.OuterSingleton,
               &Z_Construct_UClass_UAnimSequence_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UAnimSequence.OuterSingleton;
}

// Z_Construct_UEnum_Engine_EStripAnimDataOnDedicatedServerSettings @ 1474986b0

UEnum * __cdecl Z_Construct_UEnum_Engine_EStripAnimDataOnDedicatedServerSettings(void)

{
  if (Z_Registration_Info_UEnum_EStripAnimDataOnDedicatedServerSettings.InnerSingleton ==
      (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EStripAnimDataOnDedicatedServerSettings.InnerSingleton,
               &Z_Construct_UEnum_Engine_EStripAnimDataOnDedicatedServerSettings_Statics::EnumParams
              );
  }
  return Z_Registration_Info_UEnum_EStripAnimDataOnDedicatedServerSettings.InnerSingleton;
}

// NewStructOps @ 147498730

void * __cdecl Z_Construct_UScriptStruct_FComponentSpacePoseLink_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FComponentSpacePoseLink,&UE::CoreUObject::Private::Construct<FComponentSpacePoseLink>,&UE::CoreUObject::Private::ConstructForTests<FComponentSpacePoseLink>,&UE::CoreUObject::Private::Destruct<FComponentSpacePoseLink>,&UE::CoreUObject::Private::Copy<FComponentSpacePoseLink>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 1474987b0

void * __cdecl Z_Construct_UScriptStruct_FAnimSequenceTrackContainer_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FAnimSequenceTrackContainer,&UE::CoreUObject::Private::Construct<FAnimSequenceTrackContainer>,&UE::CoreUObject::Private::ConstructForTests<FAnimSequenceTrackContainer>,&UE::CoreUObject::Private::Destruct<FAnimSequenceTrackContainer>,&UE::CoreUObject::Private::Copy<FAnimSequenceTrackContainer>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// `scalar_deleting_destructor' @ 147499050

void * __thiscall
FAnimNode_LinkedAnimLayer::_scalar_deleting_destructor_
          (FAnimNode_LinkedAnimLayer *this,uint param_1)

{
  FAnimNode_LinkedAnimGraph::~FAnimNode_LinkedAnimGraph((FAnimNode_LinkedAnimGraph *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,200);
  }
  return this;
}

// Z_Construct_UEnum_Engine_EAnimLinkMethod @ 1474990d0

UEnum * __cdecl Z_Construct_UEnum_Engine_EAnimLinkMethod(void)

{
  if (Z_Registration_Info_UEnum_EAnimLinkMethod.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EAnimLinkMethod.InnerSingleton,
               &Z_Construct_UEnum_Engine_EAnimLinkMethod_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EAnimLinkMethod.InnerSingleton;
}

// Z_Construct_UScriptStruct_FAnimLinkableElement @ 147499110

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FAnimLinkableElement(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FAnimLinkableElement.InnerSingleton == (UScriptStruct *)0x0)
  {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FAnimLinkableElement.InnerSingleton,
               &Z_Construct_UScriptStruct_FAnimLinkableElement_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FAnimLinkableElement.InnerSingleton != (UScriptStruct *)0x0)
  {
    return Z_Registration_Info_UScriptStruct_FAnimLinkableElement.InnerSingleton;
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

// EAnimLinkMethod_StaticEnum @ 1474991a0

UEnum * __cdecl EAnimLinkMethod_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EAnimLinkMethod.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_EAnimLinkMethod.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_EAnimLinkMethod,(UObject *)pUVar1,L"EAnimLinkMethod"
                      );
  }
  return Z_Registration_Info_UEnum_EAnimLinkMethod.OuterSingleton;
}

// NewStructOps @ 1474992a0

void * __cdecl
Z_Construct_UScriptStruct_FAnimNode_ConvertLocalToComponentSpace_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FAnimNode_ConvertLocalToComponentSpace,&UE::CoreUObject::Private::Construct<FAnimNode_ConvertLocalToComponentSpace>,&UE::CoreUObject::Private::ConstructForTests<FAnimNode_ConvertLocalToComponentSpace>,&UE::CoreUObject::Private::Destruct<FAnimNode_ConvertLocalToComponentSpace>,&UE::CoreUObject::Private::Copy<FAnimNode_ConvertLocalToComponentSpace>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_bAlwaysUseDefaultBlendSettings_SetBit @ 1474992e0

void __cdecl
Z_Construct_UScriptStruct_FAnimNode_DeadBlending_Statics::
NewProp_bAlwaysUseDefaultBlendSettings_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x28) = 1;
  return;
}

// NewProp_bLinearlyInterpolateScales_SetBit @ 1474992f0

void __cdecl
Z_Construct_UScriptStruct_FAnimNode_DeadBlending_Statics::NewProp_bLinearlyInterpolateScales_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x4c) = 1;
  return;
}

// NewStructOps @ 147499300

void * __cdecl Z_Construct_UScriptStruct_FAnimNode_Base_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FAnimNode_Base,&UE::CoreUObject::Private::Construct<FAnimNode_Base>,&UE::CoreUObject::Private::ConstructForTests<FAnimNode_Base>,&UE::CoreUObject::Private::Destruct<FAnimNode_Base>,&UE::CoreUObject::Private::Copy<FAnimNode_Base>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 147499340

void * __cdecl Z_Construct_UScriptStruct_FTranslationTrack_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FTranslationTrack,&UE::CoreUObject::Private::Construct<FTranslationTrack>,&UE::CoreUObject::Private::ConstructForTests<FTranslationTrack>,&UE::CoreUObject::Private::Destruct<FTranslationTrack>,&UE::CoreUObject::Private::Copy<FTranslationTrack>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 147499380

void * __cdecl Z_Construct_UScriptStruct_FAnimLinkableElement_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x30;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FAnimLinkableElement,&UE::CoreUObject::Private::Construct<FAnimLinkableElement>,&UE::CoreUObject::Private::ConstructForTests<FAnimLinkableElement>,&UE::CoreUObject::Private::Destruct<FAnimLinkableElement>,&UE::CoreUObject::Private::Copy<FAnimLinkableElement>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_bResetOnBecomingRelevant_SetBit @ 1474993c0

void __cdecl
Z_Construct_UScriptStruct_FAnimNode_DeadBlending_Statics::NewProp_bResetOnBecomingRelevant_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x9c) = 1;
  return;
}

// NewProp_bForwardRequestsThroughSkippedCachedPoseNodes_SetBit @ 1474993d0

void __cdecl
Z_Construct_UScriptStruct_FAnimNode_DeadBlending_Statics::
NewProp_bForwardRequestsThroughSkippedCachedPoseNodes_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x9d) = 1;
  return;
}

// NewStructOps @ 1474993e0

void * __cdecl Z_Construct_UScriptStruct_FAnimNode_DeadBlending_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x690;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FAnimNode_DeadBlending,&UE::CoreUObject::Private::Construct<FAnimNode_DeadBlending>,&UE::CoreUObject::Private::ConstructForTests<FAnimNode_DeadBlending>,&UE::CoreUObject::Private::Destruct<FAnimNode_DeadBlending>,&UE::CoreUObject::Private::Copy<FAnimNode_DeadBlending>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0x10;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 1474996c0

void * __cdecl Z_Construct_UScriptStruct_FRotationTrack_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FRotationTrack,&UE::CoreUObject::Private::Construct<FRotationTrack>,&UE::CoreUObject::Private::ConstructForTests<FRotationTrack>,&UE::CoreUObject::Private::Destruct<FRotationTrack>,&UE::CoreUObject::Private::Copy<FRotationTrack>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// `vector_deleting_destructor'`adjustor{16}' @ 1474997b4

/* [thunk]:public: virtual void * __ptr64 __cdecl FAnimNode_Inertialization::`vector deleting
   destructor'`adjustor{16}' (unsigned int) __ptr64 */

void * __thiscall
FAnimNode_Inertialization::_vector_deleting_destructor__adjustor_16__
          (FAnimNode_Inertialization *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((FAnimNode_Inertialization *)&this[-1].InertializationRequestNodeId,param_1);
  return pvVar1;
}

// NewStructOps @ 1474997d0

void * __cdecl Z_Construct_UScriptStruct_FScaleTrack_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FScaleTrack,&UE::CoreUObject::Private::Construct<FScaleTrack>,&UE::CoreUObject::Private::ConstructForTests<FScaleTrack>,&UE::CoreUObject::Private::Destruct<FScaleTrack>,&UE::CoreUObject::Private::Copy<FScaleTrack>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 147499b20

void * __cdecl Z_Construct_UScriptStruct_FCurveTrack_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x18;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FCurveTrack,&UE::CoreUObject::Private::Construct<FCurveTrack>,&UE::CoreUObject::Private::ConstructForTests<FCurveTrack>,&UE::CoreUObject::Private::Destruct<FCurveTrack>,&UE::CoreUObject::Private::Copy<FCurveTrack>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14749c810

void * __cdecl Z_Construct_UScriptStruct_FCompressedTrack_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x38;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FCompressedTrack,&UE::CoreUObject::Private::Construct<FCompressedTrack>,&UE::CoreUObject::Private::ConstructForTests<FCompressedTrack>,&UE::CoreUObject::Private::Destruct<FCompressedTrack>,&UE::CoreUObject::Private::Copy<FCompressedTrack>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_bRootSpaceAdditive_SetBit @ 14749c850

void __cdecl
Z_Construct_UScriptStruct_FAnimNode_ApplyMeshSpaceAdditive_Statics::
NewProp_bRootSpaceAdditive_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x30) = *(byte *)((longlong)param_1 + 0x30) | 1;
  return;
}

// NewProp_bAlphaBoolEnabled_SetBit @ 14749c880

void __cdecl
Z_Construct_UScriptStruct_FAnimNode_ApplyMeshSpaceAdditive_Statics::NewProp_bAlphaBoolEnabled_SetBit
          (void *param_1)

{
  *(byte *)((longlong)param_1 + 0x38) = *(byte *)((longlong)param_1 + 0x38) | 1;
  return;
}

// NewStructOps @ 14749c8d0

void * __cdecl
Z_Construct_UScriptStruct_FAnimNode_ApplyMeshSpaceAdditive_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xd0;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FAnimNode_ApplyMeshSpaceAdditive,&UE::CoreUObject::Private::Construct<FAnimNode_ApplyMeshSpaceAdditive>,&UE::CoreUObject::Private::ConstructForTests<FAnimNode_ApplyMeshSpaceAdditive>,&UE::CoreUObject::Private::Destruct<FAnimNode_ApplyMeshSpaceAdditive>,&UE::CoreUObject::Private::Copy<FAnimNode_ApplyMeshSpaceAdditive>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// `scalar_deleting_destructor' @ 14749cb20

void * __thiscall
FAnimNode_StateMachine::_scalar_deleting_destructor_(FAnimNode_StateMachine *this,uint param_1)

{
  ~FAnimNode_StateMachine(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xd8);
  }
  return this;
}

// EStripAnimDataOnDedicatedServerSettings_StaticEnum @ 14749cb60

UEnum * __cdecl EStripAnimDataOnDedicatedServerSettings_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EStripAnimDataOnDedicatedServerSettings.OuterSingleton ==
      (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_EStripAnimDataOnDedicatedServerSettings.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_EStripAnimDataOnDedicatedServerSettings,
                       (UObject *)pUVar1,L"EStripAnimDataOnDedicatedServerSettings");
  }
  return Z_Registration_Info_UEnum_EStripAnimDataOnDedicatedServerSettings.OuterSingleton;
}

// Z_Construct_UClass_UAnimMetaData_NoRegister @ 14749cbe0

UClass * __cdecl Z_Construct_UClass_UAnimMetaData_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAnimMetaData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"AnimMetaData",
               &Z_Registration_Info_UClass_UAnimMetaData.InnerSingleton,
               UAnimMetaData::StaticRegisterNativesUAnimMetaData,0x28,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UAnimMetaData>,InternalVTableHelperCtorCaller<UAnimMetaData>,
               local_res8,UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAnimMetaData.InnerSingleton;
}

// NewProp_bEnableRootMotion_SetBit @ 14749cd80

void __cdecl
Z_Construct_UClass_UAnimSequence_Statics::NewProp_bEnableRootMotion_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x171) = 1;
  return;
}

// NewProp_bForceRootLock_SetBit @ 14749cd90

void __cdecl Z_Construct_UClass_UAnimSequence_Statics::NewProp_bForceRootLock_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x173) = 1;
  return;
}

// NewProp_bUseNormalizedRootMotionScale_SetBit @ 14749cda0

void __cdecl
Z_Construct_UClass_UAnimSequence_Statics::NewProp_bUseNormalizedRootMotionScale_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x174) = 1;
  return;
}

// NewProp_bRootMotionSettingsCopiedFromMontage_SetBit @ 14749cdb0

void __cdecl
Z_Construct_UClass_UAnimSequence_Statics::NewProp_bRootMotionSettingsCopiedFromMontage_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x175) = 1;
  return;
}

// Z_Construct_UClass_UAnimMetaData @ 14749cdc0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UAnimMetaData(void)

{
  if (Z_Registration_Info_UClass_UAnimMetaData.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UAnimMetaData.OuterSingleton,
               &Z_Construct_UClass_UAnimMetaData_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UAnimMetaData.OuterSingleton;
}

// Z_Construct_UClass_UAnimNotifyMirrorInspectionLibrary @ 14749ce00

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UAnimNotifyMirrorInspectionLibrary(void)

{
  if (Z_Registration_Info_UClass_UAnimNotifyMirrorInspectionLibrary.OuterSingleton == (UClass *)0x0)
  {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UAnimNotifyMirrorInspectionLibrary.OuterSingleton,
               &Z_Construct_UClass_UAnimNotifyMirrorInspectionLibrary_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UAnimNotifyMirrorInspectionLibrary.OuterSingleton;
}

// Z_Construct_UFunction_UAnimNotifyMirrorInspectionLibrary_GetMirrorDataTable @ 14749ce90

UFunction * __cdecl
Z_Construct_UFunction_UAnimNotifyMirrorInspectionLibrary_GetMirrorDataTable(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAnimNotifyMirrorInspectionLibrary_GetMirrorDataTable_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 14749d210

void __cdecl
Z_Construct_UFunction_UAnimNotifyMirrorInspectionLibrary_IsTriggeredByMirroredAnimation_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x30) = 1;
  return;
}

// EAnimNodeDataFlags_StaticEnum @ 14749d220

UEnum * __cdecl EAnimNodeDataFlags_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EAnimNodeDataFlags.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_EAnimNodeDataFlags.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_EAnimNodeDataFlags,(UObject *)pUVar1,
                       L"EAnimNodeDataFlags");
  }
  return Z_Registration_Info_UEnum_EAnimNodeDataFlags.OuterSingleton;
}

// Z_Construct_UFunction_UAnimNotifyMirrorInspectionLibrary_IsTriggeredByMirroredAnimation @ 14749d260

UFunction * __cdecl
Z_Construct_UFunction_UAnimNotifyMirrorInspectionLibrary_IsTriggeredByMirroredAnimation(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAnimNotifyMirrorInspectionLibrary_IsTriggeredByMirroredAnimation_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewStructOps @ 14749d320

void * __cdecl Z_Construct_UScriptStruct_FAnimNodeData_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x28;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FAnimNodeData,&UE::CoreUObject::Private::Construct<FAnimNodeData>,&UE::CoreUObject::Private::ConstructForTests<FAnimNodeData>,&UE::CoreUObject::Private::Destruct<FAnimNodeData>,&UE::CoreUObject::Private::Copy<FAnimNodeData>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14749d680

void * __cdecl Z_Construct_UScriptStruct_FAnimNodeStructData_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x58;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FAnimNodeStructData,&UE::CoreUObject::Private::Construct<FAnimNodeStructData>,&UE::CoreUObject::Private::ConstructForTests<FAnimNodeStructData>,&UE::CoreUObject::Private::Destruct<FAnimNodeStructData>,&UE::CoreUObject::Private::Copy<FAnimNodeStructData>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UScriptStruct_FAnimNotifyArray @ 14749d6c0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FAnimNotifyArray(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FAnimNotifyArray.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FAnimNotifyArray.InnerSingleton,
               &Z_Construct_UScriptStruct_FAnimNotifyArray_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FAnimNotifyArray.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FAnimNotifyArray.InnerSingleton;
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

// NewStructOps @ 14749d740

void * __cdecl Z_Construct_UScriptStruct_FAnimNotifyEventReference_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x30;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FAnimNotifyEventReference,&UE::CoreUObject::Private::Construct<FAnimNotifyEventReference>,&UE::CoreUObject::Private::ConstructForTests<FAnimNotifyEventReference>,&UE::CoreUObject::Private::Destruct<FAnimNotifyEventReference>,&UE::CoreUObject::Private::Copy<FAnimNotifyEventReference>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UScriptStruct_FAnimNode_AssetPlayerBase @ 14749d780

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FAnimNode_AssetPlayerBase(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FAnimNode_AssetPlayerBase.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FAnimNode_AssetPlayerBase.InnerSingleton,
               &Z_Construct_UScriptStruct_FAnimNode_AssetPlayerBase_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FAnimNode_AssetPlayerBase.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FAnimNode_AssetPlayerBase.InnerSingleton;
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

// Z_Construct_UScriptStruct_FAnimNode_AssetPlayerRelevancyBase @ 14749d800

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FAnimNode_AssetPlayerRelevancyBase(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FAnimNode_AssetPlayerRelevancyBase.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FAnimNode_AssetPlayerRelevancyBase.InnerSingleton,
               &Z_Construct_UScriptStruct_FAnimNode_AssetPlayerRelevancyBase_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FAnimNode_AssetPlayerRelevancyBase.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FAnimNode_AssetPlayerRelevancyBase.InnerSingleton;
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

// NewStructOps @ 14749d880

void * __cdecl Z_Construct_UScriptStruct_FAnimNode_AssetPlayerBase_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x38;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FAnimNode_AssetPlayerBase,&UE::CoreUObject::Private::Construct<FAnimNode_AssetPlayerBase>,&UE::CoreUObject::Private::ConstructForTests<FAnimNode_AssetPlayerBase>,&UE::CoreUObject::Private::Destruct<FAnimNode_AssetPlayerBase>,&UE::CoreUObject::Private::Copy<FAnimNode_AssetPlayerBase>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14749d8c0

void * __cdecl Z_Construct_UScriptStruct_FAnimNotifyArray_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FAnimNotifyArray,&UE::CoreUObject::Private::Construct<FAnimNotifyArray>,&UE::CoreUObject::Private::ConstructForTests<FAnimNotifyArray>,&UE::CoreUObject::Private::Destruct<FAnimNotifyArray>,&UE::CoreUObject::Private::Copy<FAnimNotifyArray>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14749dad0

void * __cdecl Z_Construct_UScriptStruct_FAnimNotifyContext_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x18;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FAnimNotifyContext,&UE::CoreUObject::Private::Construct<FAnimNotifyContext>,&UE::CoreUObject::Private::ConstructForTests<FAnimNotifyContext>,&UE::CoreUObject::Private::Destruct<FAnimNotifyContext>,&UE::CoreUObject::Private::Copy<FAnimNotifyContext>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14749e200

void * __cdecl Z_Construct_UScriptStruct_FAnimNotifyQueue_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x78;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FAnimNotifyQueue,&UE::CoreUObject::Private::Construct<FAnimNotifyQueue>,&UE::CoreUObject::Private::ConstructForTests<FAnimNotifyQueue>,&UE::CoreUObject::Private::Destruct<FAnimNotifyQueue>,&UE::CoreUObject::Private::Copy<FAnimNotifyQueue>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UScriptStruct_FAnimNode_CustomProperty @ 14749e2f0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FAnimNode_CustomProperty(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FAnimNode_CustomProperty.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FAnimNode_CustomProperty.InnerSingleton,
               &Z_Construct_UScriptStruct_FAnimNode_CustomProperty_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FAnimNode_CustomProperty.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FAnimNode_CustomProperty.InnerSingleton;
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

// NewStructOps @ 14749e430

void * __cdecl Z_Construct_UScriptStruct_FAnimNode_CustomProperty_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x58;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FAnimNode_CustomProperty,&UE::CoreUObject::Private::Construct<FAnimNode_CustomProperty>,&UE::CoreUObject::Private::ConstructForTests<FAnimNode_CustomProperty>,&UE::CoreUObject::Private::Destruct<FAnimNode_CustomProperty>,&UE::CoreUObject::Private::Copy<FAnimNode_CustomProperty>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// `scalar_deleting_destructor' @ 14749e4a0

void * __thiscall
FAnimNode_StateResult::_scalar_deleting_destructor_(FAnimNode_StateResult *this,uint param_1)

{
  *(undefined ***)this = &___7FAnimNode_Base__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14749f4c0

void * __thiscall
FAnimNode_SequencePlayerBase::_scalar_deleting_destructor_
          (FAnimNode_SequencePlayerBase *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FAnimNode_Base__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1474a1190

void * __thiscall
FAnimNode_SequencePlayer::_scalar_deleting_destructor_(FAnimNode_SequencePlayer *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FAnimNode_Base__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1474a1430

void * __thiscall
FAnimNode_SequencePlayer_Standalone::_scalar_deleting_destructor_
          (FAnimNode_SequencePlayer_Standalone *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FAnimNode_Base__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x98);
  }
  return this;
}

// Z_Construct_UClass_UAnimNotifyState @ 1474a14b0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UAnimNotifyState(void)

{
  if (Z_Registration_Info_UClass_UAnimNotifyState.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UAnimNotifyState.OuterSingleton,
               &Z_Construct_UClass_UAnimNotifyState_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UAnimNotifyState.OuterSingleton;
}

// Z_Construct_UScriptStruct_FAnimNode_SequencePlayerBase @ 1474a14f0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FAnimNode_SequencePlayerBase(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FAnimNode_SequencePlayerBase.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FAnimNode_SequencePlayerBase.InnerSingleton,
               &Z_Construct_UScriptStruct_FAnimNode_SequencePlayerBase_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FAnimNode_SequencePlayerBase.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FAnimNode_SequencePlayerBase.InnerSingleton;
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

// NewStructOps @ 1474a1570

void * __cdecl Z_Construct_UScriptStruct_FAnimNode_SequencePlayerBase_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x40;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FAnimNode_SequencePlayerBase,&UE::CoreUObject::Private::Construct<FAnimNode_SequencePlayerBase>,&UE::CoreUObject::Private::ConstructForTests<FAnimNode_SequencePlayerBase>,&UE::CoreUObject::Private::Destruct<FAnimNode_SequencePlayerBase>,&UE::CoreUObject::Private::Copy<FAnimNode_SequencePlayerBase>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UAnimNotifyState_GetDefaultTriggerWeightThreshold @ 1474a16d0

UFunction * __cdecl Z_Construct_UFunction_UAnimNotifyState_GetDefaultTriggerWeightThreshold(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAnimNotifyState_GetDefaultTriggerWeightThreshold_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UAnimNotifyState_GetNotifyName @ 1474a1910

UFunction * __cdecl Z_Construct_UFunction_UAnimNotifyState_GetNotifyName(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAnimNotifyState_GetNotifyName_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewStructOps @ 1474a1c20

void * __cdecl Z_Construct_UScriptStruct_FAnimNode_SequencePlayer_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x48;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FAnimNode_SequencePlayer,&UE::CoreUObject::Private::Construct<FAnimNode_SequencePlayer>,&UE::CoreUObject::Private::ConstructForTests<FAnimNode_SequencePlayer>,&UE::CoreUObject::Private::Destruct<FAnimNode_SequencePlayer>,&UE::CoreUObject::Private::Copy<FAnimNode_SequencePlayer>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_ReturnValue_SetBit @ 1474a1c60

void __cdecl
Z_Construct_UFunction_UAnimNotifyState_Received_NotifyBegin_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x48) = 1;
  return;
}

// Z_Construct_UFunction_UAnimNotifyState_Received_NotifyBegin @ 1474a1ca0

UFunction * __cdecl Z_Construct_UFunction_UAnimNotifyState_Received_NotifyBegin(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAnimNotifyState_Received_NotifyBegin_Statics::FuncParams);
  }
  return ReturnFunction;
}

// EInertializationState_StaticEnum @ 1474a1e60

UEnum * __cdecl EInertializationState_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EInertializationState.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_EInertializationState.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_EInertializationState,(UObject *)pUVar1,
                       L"EInertializationState");
  }
  return Z_Registration_Info_UEnum_EInertializationState.OuterSingleton;
}

// NewProp_ReturnValue_SetBit @ 1474a1ea0

void __cdecl
Z_Construct_UFunction_UAnimNotifyState_Received_NotifyEnd_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x40) = 1;
  return;
}

// NewProp_bOverridePositionWhenJoiningSyncGroupAsLeader_SetBit @ 1474a1eb0

void __cdecl
Z_Construct_UScriptStruct_FAnimNode_SequencePlayer_Standalone_Statics::
NewProp_bOverridePositionWhenJoiningSyncGroupAsLeader_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x49) = 1;
  return;
}

// NewProp_bIgnoreForRelevancyTest_SetBit @ 1474a1ec0

void __cdecl
Z_Construct_UScriptStruct_FAnimNode_SequencePlayer_Standalone_Statics::
NewProp_bIgnoreForRelevancyTest_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x4b) = 1;
  return;
}

// EInertializationBoneState_StaticEnum @ 1474a1ed0

UEnum * __cdecl EInertializationBoneState_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EInertializationBoneState.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_EInertializationBoneState.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_EInertializationBoneState,(UObject *)pUVar1,
                       L"EInertializationBoneState");
  }
  return Z_Registration_Info_UEnum_EInertializationBoneState.OuterSingleton;
}

// Z_Construct_UFunction_UAnimNotifyState_Received_NotifyEnd @ 1474a1f10

UFunction * __cdecl Z_Construct_UFunction_UAnimNotifyState_Received_NotifyEnd(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAnimNotifyState_Received_NotifyEnd_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bLoopAnimation_SetBit @ 1474a1f50

void __cdecl
Z_Construct_UScriptStruct_FAnimNode_SequencePlayer_Standalone_Statics::NewProp_bLoopAnimation_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x90) = 1;
  return;
}

// NewProp_bStartFromMatchingPose_SetBit @ 1474a1f60

void __cdecl
Z_Construct_UScriptStruct_FAnimNode_SequencePlayer_Standalone_Statics::
NewProp_bStartFromMatchingPose_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x91) = 1;
  return;
}

// NewStructOps @ 1474a1f70

void * __cdecl
Z_Construct_UScriptStruct_FAnimNode_SequencePlayer_Standalone_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x98;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FAnimNode_SequencePlayer_Standalone,&UE::CoreUObject::Private::Construct<FAnimNode_SequencePlayer_Standalone>,&UE::CoreUObject::Private::ConstructForTests<FAnimNode_SequencePlayer_Standalone>,&UE::CoreUObject::Private::Destruct<FAnimNode_SequencePlayer_Standalone>,&UE::CoreUObject::Private::Copy<FAnimNode_SequencePlayer_Standalone>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// EInertializationSpace_StaticEnum @ 1474a1fb0

UEnum * __cdecl EInertializationSpace_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EInertializationSpace.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_EInertializationSpace.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_EInertializationSpace,(UObject *)pUVar1,
                       L"EInertializationSpace");
  }
  return Z_Registration_Info_UEnum_EInertializationSpace.OuterSingleton;
}

// NewProp_ReturnValue_SetBit @ 1474a1ff0

void __cdecl
Z_Construct_UFunction_UAnimNotifyState_Received_NotifyTick_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x48) = 1;
  return;
}

// NewStructOps @ 1474a2000

void * __cdecl Z_Construct_UScriptStruct_FInertializationPose_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xc0;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FInertializationPose,&UE::CoreUObject::Private::Construct<FInertializationPose>,&UE::CoreUObject::Private::ConstructForTests<FInertializationPose>,&UE::CoreUObject::Private::Destruct<FInertializationPose>,&UE::CoreUObject::Private::Copy<FInertializationPose>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0x10;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UAnimNotifyState_Received_NotifyTick @ 1474a2040

UFunction * __cdecl Z_Construct_UFunction_UAnimNotifyState_Received_NotifyTick(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAnimNotifyState_Received_NotifyTick_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewStructOps @ 1474a21b0

void * __cdecl Z_Construct_UScriptStruct_FInertializationBoneDiff_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x60;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FInertializationBoneDiff,&UE::CoreUObject::Private::Construct<FInertializationBoneDiff>,&UE::CoreUObject::Private::ConstructForTests<FInertializationBoneDiff>,&UE::CoreUObject::Private::Destruct<FInertializationBoneDiff>,&UE::CoreUObject::Private::Copy<FInertializationBoneDiff>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 1474a2240

void * __cdecl Z_Construct_UScriptStruct_FInertializationPoseDiff_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x38;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FInertializationPoseDiff,&UE::CoreUObject::Private::Construct<FInertializationPoseDiff>,&UE::CoreUObject::Private::ConstructForTests<FInertializationPoseDiff>,&UE::CoreUObject::Private::Destruct<FInertializationPoseDiff>,&UE::CoreUObject::Private::Copy<FInertializationPoseDiff>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_bResetOnBecomingRelevant_SetBit @ 1474a2340

void __cdecl
Z_Construct_UScriptStruct_FAnimNode_Inertialization_Statics::NewProp_bResetOnBecomingRelevant_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x50) = 1;
  return;
}

// NewProp_bForwardRequestsThroughSkippedCachedPoseNodes_SetBit @ 1474a2350

void __cdecl
Z_Construct_UScriptStruct_FAnimNode_Inertialization_Statics::
NewProp_bForwardRequestsThroughSkippedCachedPoseNodes_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x51) = 1;
  return;
}

// NewStructOps @ 1474a2360

void * __cdecl Z_Construct_UScriptStruct_FAnimNode_Inertialization_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x550;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FAnimNode_Inertialization,&UE::CoreUObject::Private::Construct<FAnimNode_Inertialization>,&UE::CoreUObject::Private::ConstructForTests<FAnimNode_Inertialization>,&UE::CoreUObject::Private::Destruct<FAnimNode_Inertialization>,&UE::CoreUObject::Private::Copy<FAnimNode_Inertialization>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0x10;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UAnimNotifyStateMachineInspectionLibrary @ 1474a23a0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UAnimNotifyStateMachineInspectionLibrary(void)

{
  if (Z_Registration_Info_UClass_UAnimNotifyStateMachineInspectionLibrary.OuterSingleton ==
      (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UAnimNotifyStateMachineInspectionLibrary.OuterSingleton,
               &Z_Construct_UClass_UAnimNotifyStateMachineInspectionLibrary_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UAnimNotifyStateMachineInspectionLibrary.OuterSingleton;
}

// NewProp_ReturnValue_SetBit @ 1474a23e0

void __cdecl
Z_Construct_UFunction_UAnimNotifyStateMachineInspectionLibrary_IsTriggeredByState_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x40) = 1;
  return;
}

// Z_Construct_UFunction_UAnimNotifyStateMachineInspectionLibrary_IsTriggeredByState @ 1474a23f0

UFunction * __cdecl
Z_Construct_UFunction_UAnimNotifyStateMachineInspectionLibrary_IsTriggeredByState(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAnimNotifyStateMachineInspectionLibrary_IsTriggeredByState_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// ConstructItems<TObjectPtr<UAnimMetaData>,TObjectPtr<UAnimMetaData>,int> @ 1474a3890

void __cdecl
ConstructItems<TObjectPtr<UAnimMetaData>,TObjectPtr<UAnimMetaData>,int>
          (void *param_1,TObjectPtr<UAnimMetaData> *param_2,int param_3)

{
  TObjectPtr<UAnimMetaData> TVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_1 - (longlong)param_2;
    do {
      TVar1.field0_0x0 = (TObjectPtr<UAnimMetaData>_u_0)param_2->field0_0x0;
      ((TObjectPtr<UAnimMetaData>_u_0 *)(lVar2 + (longlong)param_2))->DebugPtr =
           (UAnimMetaData *)TVar1.field0_0x0;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (TVar1.field0_0x0 != (UAnimMetaData *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)TVar1.field0_0x0);
      }
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<FAnimNotifyEvent,FAnimNotifyEvent,int> @ 1474a38f0

void __cdecl
ConstructItems<FAnimNotifyEvent,FAnimNotifyEvent,int>
          (void *param_1,FAnimNotifyEvent *param_2,int param_3)

{
  FName *pFVar1;
  FAnimLinkableElement *this;
  TObjectPtr<UAnimNotify> TVar2;
  TObjectPtr<UAnimNotifyState> TVar3;
  float *pfVar4;
  float *pfVar5;
  
  if (param_3 != 0) {
    pfVar4 = (float *)((longlong)param_1 + 0x34);
    pfVar5 = &param_2->EndTriggerTimeOffset;
    do {
      this = (FAnimLinkableElement *)
             ((longlong)pfVar5 + (longlong)param_1 + (-0x34 - (longlong)param_2));
      FAnimLinkableElement::FAnimLinkableElement(this,(FAnimLinkableElement *)(pfVar5 + -0xd));
      this->_padding_ = (longlong)&___7FAnimNotifyEvent__6B_;
      pfVar4[-1] = pfVar5[-1];
      *pfVar4 = *pfVar5;
      pfVar4[1] = pfVar5[1];
      *(FName *)(pfVar4 + 2) = *(FName *)(pfVar5 + 2);
      TVar2.field0_0x0 =
           (TObjectPtr<UAnimNotify>_u_0)((TObjectPtr<UAnimNotify>_u_0 *)(pfVar5 + 5))->DebugPtr;
      ((TObjectPtr<UAnimNotify>_u_0 *)(pfVar4 + 5))->DebugPtr = (UAnimNotify *)TVar2.field0_0x0;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (TVar2.field0_0x0 != (UAnimNotify *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)TVar2.field0_0x0);
      }
      TVar3.field0_0x0 =
           (TObjectPtr<UAnimNotifyState>_u_0)
           ((TObjectPtr<UAnimNotifyState>_u_0 *)(pfVar5 + 7))->DebugPtr;
      ((TObjectPtr<UAnimNotifyState>_u_0 *)(pfVar4 + 7))->DebugPtr =
           (UAnimNotifyState *)TVar3.field0_0x0;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (TVar3.field0_0x0 != (UAnimNotifyState *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)TVar3.field0_0x0);
      }
      pfVar4[9] = pfVar5[9];
      FAnimLinkableElement::FAnimLinkableElement
                ((FAnimLinkableElement *)(pfVar4 + 0xb),(FAnimLinkableElement *)(pfVar5 + 0xb));
      *(bool *)(pfVar4 + 0x17) = *(bool *)(pfVar5 + 0x17);
      *(uchar *)((longlong)pfVar4 + 0x5d) =
           ((TEnumAsByte<EMontageNotifyTickType::Type> *)((longlong)pfVar5 + 0x5d))->Value;
      pfVar4[0x18] = pfVar5[0x18];
      *(uchar *)(pfVar4 + 0x19) = ((TEnumAsByte<ENotifyFilterType::Type> *)(pfVar5 + 0x19))->Value;
      pfVar4[0x1a] = pfVar5[0x1a];
      *(bool *)(pfVar4 + 0x1b) = *(bool *)(pfVar5 + 0x1b);
      *(bool *)((longlong)pfVar4 + 0x6d) = *(bool *)((longlong)pfVar5 + 0x6d);
      *(bool *)((longlong)pfVar4 + 0x6e) = *(bool *)((longlong)pfVar5 + 0x6e);
      pfVar4[0x1c] = pfVar5[0x1c];
      *(FName *)(pfVar4 + 0x1d) = *(FName *)(pfVar5 + 0x1d);
      pFVar1 = (FName *)(pfVar5 + 0x1f);
      pfVar5 = pfVar5 + 0x2e;
      *(FName *)(pfVar4 + 0x1f) = *pFVar1;
      pfVar4 = pfVar4 + 0x2e;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<FAnimationActiveTransitionEntry,FAnimationActiveTransitionEntry,int> @ 1474a3a30

void __cdecl
ConstructItems<FAnimationActiveTransitionEntry,FAnimationActiveTransitionEntry,int>
          (void *param_1,FAnimationActiveTransitionEntry *param_2,int param_3)

{
  ForAnyElementType *pFVar1;
  undefined1 *puVar2;
  int iVar3;
  void *_Src;
  FScriptContainerElement *_Src_00;
  FBlendSampleData *pFVar4;
  UObject *pUVar5;
  undefined8 uVar6;
  ForElementType<int> *_Dst;
  int *piVar7;
  int *piVar8;
  int *_Src_01;
  
  if (param_3 != 0) {
    piVar7 = &(param_2->PoseEvaluators).ArrayNum;
    piVar8 = (int *)((longlong)param_1 + 0x50);
    do {
      pFVar1 = (ForAnyElementType *)(piVar8 + -0x10);
      *(int *)((longlong)piVar7 + (longlong)param_1 + (-0x50 - (longlong)param_2)) = piVar7[-0x14];
      piVar8[-0x13] = piVar7[-0x13];
      piVar8[-0x12] = piVar7[-0x12];
      pFVar1->Data = (FScriptContainerElement *)0x0;
      iVar3 = piVar7[-0xe];
      _Src = *(void **)(piVar7 + -0x10);
      piVar8[-0xe] = iVar3;
      if (iVar3 == 0) {
        piVar8[-0xd] = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x60,0x10,iVar3,0,pFVar1,iVar3,piVar8 + -0xd);
        memcpy(pFVar1->Data,_Src,(longlong)iVar3 * 0x60);
      }
      uVar6 = *(undefined8 *)(piVar7 + -10);
      pFVar1 = (ForAnyElementType *)(piVar8 + -2);
      *(undefined8 *)(piVar8 + -0xc) = *(undefined8 *)(piVar7 + -0xc);
      *(undefined8 *)(piVar8 + -10) = uVar6;
      piVar8[-8] = piVar7[-8];
      piVar8[-7] = piVar7[-7];
      piVar8[-6] = piVar7[-6];
      piVar8[-5] = piVar7[-5];
      piVar8[-4] = piVar7[-4];
      pFVar1->Data = (FScriptContainerElement *)0x0;
      iVar3 = *piVar7;
      _Src_00 = (((TArray<FAnimNode_TransitionPoseEvaluator_*,TSizedDefaultAllocator<32>_> *)
                 (piVar7 + -2))->AllocatorInstance).Data;
      *piVar8 = iVar3;
      if (iVar3 == 0) {
        piVar8[1] = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,iVar3,0,pFVar1,iVar3,piVar8 + 1);
        memcpy(pFVar1->Data,_Src_00,(longlong)iVar3 << 3);
      }
      piVar8[2] = 0;
      piVar8[3] = 0;
      iVar3 = piVar7[4];
      pFVar4 = *(FBlendSampleData **)(piVar7 + 2);
      piVar8[4] = iVar3;
      if (iVar3 == 0) {
        piVar8[5] = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x60,8,iVar3,0,(ForAnyElementType *)(piVar8 + 2),iVar3,piVar8 + 5);
        ConstructItems<FBlendSampleData,FBlendSampleData,int>
                  (((ForAnyElementType *)(piVar8 + 2))->Data,pFVar4,iVar3);
      }
      piVar8[10] = 0;
      piVar8[0xb] = 0;
      _Src_01 = *(int **)(piVar7 + 10);
      iVar3 = piVar7[0xc];
      piVar8[0xc] = iVar3;
      if (_Src_01 == (int *)0x0) {
        _Src_01 = piVar7 + 6;
      }
      if (iVar3 == 0) {
        piVar8[0xd] = 3;
      }
      else {
        UE::Core::Private::
        ReallocForCopy<2,TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                  (4,4,iVar3,0,(ForElementType<int> *)(piVar8 + 6),iVar3,piVar8 + 0xd);
        _Dst = *(ForElementType<int> **)(piVar8 + 10);
        if (*(ForElementType<int> **)(piVar8 + 10) == (ForElementType<int> *)0x0) {
          _Dst = (ForElementType<int> *)(piVar8 + 6);
        }
        memcpy(_Dst,_Src_01,(longlong)iVar3 << 2);
      }
      pUVar5 = *(UObject **)(piVar7 + 0xe);
      *(UObject **)(piVar8 + 0xe) = pUVar5;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar5);
      }
      piVar8[0x10] = piVar7[0x10];
      piVar8[0x11] = piVar7[0x11];
      piVar8[0x12] = piVar7[0x12];
      piVar8[0x13] = piVar7[0x13];
      piVar8[0x14] = piVar7[0x14];
      piVar8[0x15] = piVar7[0x15];
      piVar8[0x16] = piVar7[0x16];
      *(char *)(piVar8 + 0x17) = (char)piVar7[0x17];
      *(undefined1 *)((longlong)piVar8 + 0x5d) = *(undefined1 *)((longlong)piVar7 + 0x5d);
      *(undefined1 *)((longlong)piVar8 + 0x5e) = *(undefined1 *)((longlong)piVar7 + 0x5e);
      *(undefined1 *)((longlong)piVar8 + 0x5f) = *(undefined1 *)((longlong)piVar7 + 0x5f);
      piVar8[0x18] = piVar7[0x18];
      pUVar5 = *(UObject **)(piVar7 + 0x1a);
      *(UObject **)(piVar8 + 0x1a) = pUVar5;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar5);
      }
      *(char *)(piVar8 + 0x1c) = (char)piVar7[0x1c];
      *(undefined1 *)((longlong)piVar8 + 0x71) = *(undefined1 *)((longlong)piVar7 + 0x71);
      puVar2 = (undefined1 *)((longlong)piVar7 + 0x72);
      piVar7 = piVar7 + 0x32;
      *(undefined1 *)((longlong)piVar8 + 0x72) = *puVar2;
      piVar8 = piVar8 + 0x32;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<FAnimNode_SaveCachedPose::FCachedUpdateContext,FAnimNode_SaveCachedPose::FCachedUpdateContext,int> @ 1474a3cf0

void __cdecl
ConstructItems<FAnimNode_SaveCachedPose::FCachedUpdateContext,FAnimNode_SaveCachedPose::FCachedUpdateContext,int>
          (void *param_1,FCachedUpdateContext *param_2,int param_3)

{
  longlong *plVar1;
  TReferenceControllerBase<1> *pTVar2;
  longlong lVar3;
  longlong *plVar4;
  FSharedReferencer<1> *pFVar5;
  
  if (param_3 != 0) {
    pFVar5 = &(param_2->SharedContext).SharedReferenceCount;
    plVar4 = (longlong *)((longlong)param_1 + 0x38);
    do {
      plVar1 = (longlong *)((longlong)param_2 + (-0x38 - (longlong)param_1) + (longlong)plVar4);
      lVar3 = plVar1[1];
      plVar4[-7] = *plVar1;
      plVar4[-6] = lVar3;
      plVar1 = (longlong *)((longlong)param_2 + (-0x28 - (longlong)param_1) + (longlong)plVar4);
      lVar3 = plVar1[1];
      plVar4[-5] = *plVar1;
      plVar4[-4] = lVar3;
      plVar1 = (longlong *)((longlong)param_2 + (-0x18 - (longlong)param_1) + (longlong)plVar4);
      lVar3 = plVar1[1];
      plVar4[-3] = *plVar1;
      plVar4[-2] = lVar3;
      plVar4[-1] = (longlong)((TSharedPtr<FAnimationUpdateSharedContext,1> *)(pFVar5 + -1))->Object;
      pTVar2 = pFVar5->ReferenceController;
      *plVar4 = (longlong)pTVar2;
      if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
        UNLOCK();
      }
      pFVar5 = pFVar5 + 8;
      plVar4 = plVar4 + 8;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<FInertializationRequest,FInertializationRequest,int> @ 1474a3d50

void __cdecl
ConstructItems<FInertializationRequest,FInertializationRequest,int>
          (void *param_1,FInertializationRequest *param_2,int param_3)

{
  TObjectPtr<UBlendProfile_const_> TVar1;
  TObjectPtr<UCurveFloat> TVar2;
  ITextData *pIVar3;
  TObjectPtr<UObject> TVar4;
  bool *pbVar5;
  undefined1 *puVar6;
  undefined1 local_res18 [16];
  
  if (param_3 != 0) {
    pbVar5 = &param_2->bUseBlendMode;
    puVar6 = (undefined1 *)((longlong)param_1 + 0x10);
    do {
      *(float *)(pbVar5 + (longlong)param_1 + (-0x10 - (longlong)param_2)) =
           ((FInertializationRequest *)(pbVar5 + -0x10))->Duration;
      TVar1.field0_0x0 =
           (TObjectPtr<UBlendProfile_const_>_u_0)
           ((TObjectPtr<UBlendProfile_const_>_u_0 *)(pbVar5 + -8))->DebugPtr;
      ((TObjectPtr<UBlendProfile_const_>_u_0 *)(puVar6 + -8))->DebugPtr =
           (UBlendProfile *)TVar1.field0_0x0;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (TVar1.field0_0x0 != (UBlendProfile *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)TVar1.field0_0x0);
      }
      *puVar6 = *pbVar5;
      puVar6[1] = pbVar5[1];
      TVar2.field0_0x0 =
           (TObjectPtr<UCurveFloat>_u_0)((TObjectPtr<UCurveFloat>_u_0 *)(pbVar5 + 8))->DebugPtr;
      ((TObjectPtr<UCurveFloat>_u_0 *)(puVar6 + 8))->DebugPtr = (UCurveFloat *)TVar2.field0_0x0;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (TVar2.field0_0x0 != (UCurveFloat *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)TVar2.field0_0x0);
      }
      *(FName *)(puVar6 + 0x10) = *(FName *)(pbVar5 + 0x10);
      *(undefined8 *)(puVar6 + 0x18) = 0;
      pIVar3 = (((FText *)(pbVar5 + 0x18))->TextData).Reference;
      *(ITextData **)(puVar6 + 0x18) = pIVar3;
      if (pIVar3 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar3 + 8))(pIVar3,local_res18);
      }
      *(uint *)(puVar6 + 0x20) = *(uint *)(pbVar5 + 0x20);
      FString::FString((FString *)(puVar6 + 0x28),(FString *)(pbVar5 + 0x28));
      *(int *)(puVar6 + 0x38) = *(int *)(pbVar5 + 0x38);
      TVar4.field0_0x0 =
           (TObjectPtr<UObject>_u_0)((TObjectPtr<UObject>_u_0 *)(pbVar5 + 0x40))->DebugPtr;
      ((TObjectPtr<UObject>_u_0 *)(puVar6 + 0x40))->DebugPtr = (UObject *)TVar4.field0_0x0;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (TVar4.field0_0x0 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)TVar4.field0_0x0);
      }
      puVar6 = puVar6 + 0x58;
      pbVar5 = pbVar5 + 0x58;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<FRawAnimSequenceTrack,FRawAnimSequenceTrack,int> @ 1474a3e60

void __cdecl
ConstructItems<FRawAnimSequenceTrack,FRawAnimSequenceTrack,int>
          (void *param_1,FRawAnimSequenceTrack *param_2,int param_3)

{
  ForAnyElementType *pFVar1;
  int iVar2;
  void *pvVar3;
  FScriptContainerElement *_Src;
  int *piVar4;
  int *piVar5;
  longlong lVar6;
  
  if (param_3 != 0) {
    piVar4 = (int *)((longlong)param_1 + 0x28);
    piVar5 = &(param_2->ScaleKeys).ArrayNum;
    lVar6 = (longlong)param_1 + (-0x28 - (longlong)param_2);
    do {
      *(undefined8 *)((longlong)piVar5 + lVar6) = 0;
      pFVar1 = (ForAnyElementType *)((longlong)piVar5 + lVar6);
      iVar2 = piVar5[-8];
      pvVar3 = *(void **)(piVar5 + -10);
      piVar4[-8] = iVar2;
      if (iVar2 == 0) {
        piVar4[-7] = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0xc,4,iVar2,0,pFVar1,iVar2,piVar4 + -7);
        memcpy(pFVar1->Data,pvVar3,(longlong)iVar2 * 0xc);
      }
      piVar4[-6] = 0;
      piVar4[-5] = 0;
      iVar2 = piVar5[-4];
      pvVar3 = *(void **)(piVar5 + -6);
      piVar4[-4] = iVar2;
      if (iVar2 == 0) {
        piVar4[-3] = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,0x10,iVar2,0,(ForAnyElementType *)(piVar4 + -6),iVar2,piVar4 + -3);
        memcpy(((ForAnyElementType *)(piVar4 + -6))->Data,pvVar3,(longlong)iVar2 << 4);
      }
      piVar4[-2] = 0;
      piVar4[-1] = 0;
      iVar2 = *piVar5;
      _Src = (((TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *)(piVar5 + -2))->
             AllocatorInstance).Data;
      *piVar4 = iVar2;
      if (iVar2 == 0) {
        piVar4[1] = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0xc,4,iVar2,0,(ForAnyElementType *)(piVar4 + -2),iVar2,piVar4 + 1);
        memcpy(((ForAnyElementType *)(piVar4 + -2))->Data,_Src,(longlong)iVar2 * 0xc);
      }
      piVar5 = piVar5 + 0xc;
      piVar4 = piVar4 + 0xc;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<FTransitionEvent,FTransitionEvent,int> @ 1474a3ff0

void __cdecl
ConstructItems<FTransitionEvent,FTransitionEvent,int>
          (void *param_1,FTransitionEvent *param_2,int param_3)

{
  ForElementType<int> *pFVar1;
  int iVar2;
  ForElementType<int> *pFVar3;
  ForElementType<int> *_Dst;
  ForElementType<int> _Src;
  ForElementType<int> *pFVar4;
  int *piVar5;
  
  if (param_3 != 0) {
    pFVar4 = &(param_2->ConsumedTransitions).AllocatorInstance.SecondaryData;
    piVar5 = (int *)((longlong)param_1 + 0x2c);
    do {
      piVar5[-3] = 0;
      piVar5[-2] = 0;
      _Src = *pFVar4;
      iVar2 = *(int *)(pFVar4 + 1);
      piVar5[-1] = iVar2;
      if (_Src == (ForElementType<int>)0x0) {
        _Src = (ForElementType<int>)(pFVar4 + -4);
      }
      if (iVar2 == 0) {
        *piVar5 = 8;
      }
      else {
        pFVar1 = (ForElementType<int> *)
                 ((longlong)param_1 + (-0x20 - (longlong)param_2) + (longlong)pFVar4);
        UE::Core::Private::
        ReallocForCopy<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                  (4,4,iVar2,0,pFVar1,iVar2,piVar5);
        _Dst = *(ForElementType<int> **)(piVar5 + -3);
        if (*(ForElementType<int> **)(piVar5 + -3) == (ForElementType<int> *)0x0) {
          _Dst = pFVar1;
        }
        memcpy(_Dst,(void *)_Src,(longlong)iVar2 << 2);
      }
      *(ForElementType<int> *)(piVar5 + 1) = pFVar4[2];
      *(ForElementType<int> *)(piVar5 + 3) = pFVar4[3];
      *(ForElementType<int> *)(piVar5 + 5) = pFVar4[4];
      *(undefined1 *)(piVar5 + 7) = *(undefined1 *)(pFVar4 + 5);
      pFVar3 = pFVar4 + 5;
      pFVar4 = pFVar4 + 10;
      *(undefined1 *)((longlong)piVar5 + 0x1d) = pFVar3->field_0x1;
      piVar5 = piVar5 + 0x14;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<TDelegate<void___cdecl(FAnimNode_StateMachine_const_&,int,int),FDefaultDelegateUserPolicy>,TDelegate<void___cdecl(FAnimNode_StateMachine_const_&,int,int),FDefaultDelegateUserPolicy>,int> @ 1474a4110

void __cdecl
ConstructItems<TDelegate<void___cdecl(FAnimNode_StateMachine_const_&,int,int),FDefaultDelegateUserPolicy>,TDelegate<void___cdecl(FAnimNode_StateMachine_const_&,int,int),FDefaultDelegateUserPolicy>,int>
          (void *param_1,
          TDelegate<void___cdecl(FAnimNode_StateMachine_const_&,int,int),FDefaultDelegateUserPolicy>
          *param_2,int param_3)

{
  TDelegate<void___cdecl(FAnimNode_StateMachine_const_&,int,int),FDefaultDelegateUserPolicy> *this;
  longlong *plVar1;
  ForAnyElementType FVar2;
  int iVar3;
  ForAnyElementType *this_00;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_58;
  ForAnyElementType local_50;
  int local_48;
  FDestructionSentinel local_40;
  
  if (param_3 != 0) {
    this_00 = (ForAnyElementType *)((longlong)param_1 + 8);
    do {
      this = (TDelegate<void___cdecl(FAnimNode_StateMachine_const_&,int,int),FDefaultDelegateUserPolicy>
              *)(this_00 + -1);
      this_00->Data = (FScriptContainerElement *)0x0;
      *(FMRSWRecursiveAccessDetector *)this = (FMRSWRecursiveAccessDetector)0x0;
      *(undefined4 *)&this_00[1].Data = 0;
      if (param_2 != this) {
        local_58.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
        local_50.Data = (FScriptContainerElement *)0x0;
        local_48 = 0;
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_2,
                   (FReadAccessScope *)&local_40);
        if ((*(int *)&param_2->field_0x10 != 0) &&
           (plVar1 = *(longlong **)&param_2->field_0x8, plVar1 != (longlong *)0x0)) {
          (**(code **)(*plVar1 + 0x50))(plVar1,&local_58);
        }
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  ((FReadAccessScope *)&local_40);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  (&local_58,(FWriteAccessScope *)&local_40);
        iVar3 = local_48;
        FVar2.Data = local_50.Data;
        local_50.Data = (FScriptContainerElement *)0x0;
        local_48 = 0;
        if (local_40.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
        }
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,
                   (FWriteAccessScope *)&local_40);
        if ((*(int *)&this_00[1].Data != 0) && (this_00->Data != (FScriptContainerElement *)0x0)) {
          (*(code *)**(undefined8 **)this_00->Data)();
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(this_00,0,0,0x10);
          *(undefined4 *)&this_00[1].Data = 0;
        }
        if (this_00->Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(this_00->Data);
        }
        this_00->Data = FVar2.Data;
        *(int *)&this_00[1].Data = iVar3;
        if (local_40.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
        }
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  (&local_58,(FWriteAccessScope *)&local_40);
        if ((local_48 != 0) && (local_50.Data != (FScriptContainerElement *)0x0)) {
          (*(code *)**(undefined8 **)local_50.Data)();
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_50,0,0,0x10);
          local_48 = 0;
        }
        if (local_40.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
        }
        if (local_50.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_50.Data);
        }
        FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_58.AccessDetector);
      }
      param_2 = param_2 + 1;
      this_00 = this_00 + 3;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// DefaultConstructItems<FAnimSegment,int> @ 1474a47d0

void __cdecl DefaultConstructItems<FAnimSegment,int>(void *param_1,int param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = (longlong)param_1 + 0xc;
    do {
      *(undefined8 *)(lVar1 + -0xc) = 0;
      *(undefined8 *)(lVar1 + -4) = 0;
      *(undefined4 *)(lVar1 + 4) = 0;
      *(undefined4 *)(lVar1 + 8) = 0x3f800000;
      *(undefined4 *)(lVar1 + 0xc) = 1;
      *(undefined1 *)(lVar1 + 0x10) = 1;
      lVar1 = lVar1 + 0x20;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<FAnimNode_SaveCachedPose::FCachedUpdateContext,int> @ 1474a4810

void __cdecl
DefaultConstructItems<FAnimNode_SaveCachedPose::FCachedUpdateContext,int>(void *param_1,int param_2)

{
  undefined1 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined1 *)((longlong)param_1 + 0x10);
    do {
      *(undefined8 *)(puVar1 + -0x10) = 0;
      *(undefined8 *)(puVar1 + -8) = 0;
      *puVar1 = 1;
      *(undefined8 *)(puVar1 + 4) = 0xffffffffffffffff;
      *(undefined4 *)(puVar1 + 0x10) = 0x3f800000;
      *(undefined8 *)(puVar1 + 0x14) = 0x3f800000;
      *(undefined8 *)(puVar1 + 0x20) = 0;
      *(undefined8 *)(puVar1 + 0x28) = 0;
      puVar1 = puVar1 + 0x40;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<FGraphTraversalCounter,int> @ 1474a4860

void __cdecl DefaultConstructItems<FGraphTraversalCounter,int>(void *param_1,int param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = (longlong)param_1 + 10;
    do {
      *(undefined8 *)(lVar1 + -10) = 0xffffffffffffffff;
      *(undefined4 *)(lVar1 + -2) = 0xffff;
      lVar1 = lVar1 + 0x10;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<FSlotAnimationTrack,int> @ 1474a4890

void __cdecl DefaultConstructItems<FSlotAnimationTrack,int>(void *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)((longlong)param_1 + 0x10);
    do {
      *(FName *)(puVar1 + -2) = FAnimSlotGroup::DefaultSlotName;
      puVar1[-1] = 0;
      *puVar1 = 0;
      puVar1 = puVar1 + 3;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FAnimationActiveTransitionEntry,int> @ 1474a48d0

void __cdecl
DestructItems<FAnimationActiveTransitionEntry,int>
          (FAnimationActiveTransitionEntry *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  TArray<FBlendSampleData,TSizedDefaultAllocator<32>_> *pTVar2;
  
  if (param_2 != 0) {
    pTVar2 = &param_1->StateBlendData;
    do {
      if (*(ForElementType<int> *)(pTVar2 + 2) != (ForElementType<int>)0x0) {
        FMemory::Free((void *)*(ForElementType<int> *)(pTVar2 + 2));
      }
      DestructItems<FBlendSampleData,int>
                ((FBlendSampleData *)(pTVar2->AllocatorInstance).Data,pTVar2->ArrayNum);
      pFVar1 = (pTVar2->AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = (((TArray<FAnimNode_TransitionPoseEvaluator_*,TSizedDefaultAllocator<32>_> *)
                (pTVar2 + -1))->AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = (((TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)
                ((longlong)(pTVar2 + -5) + 8))->AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pTVar2 = (TArray<FBlendSampleData,TSizedDefaultAllocator<32>_> *)
               ((longlong)(pTVar2 + 0xc) + 8);
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<UE::Anim::FCachedPoseThreadContext::FCachedPoseScopeInternal,int> @ 1474a4950

void __cdecl
DestructItems<UE::Anim::FCachedPoseThreadContext::FCachedPoseScopeInternal,int>
          (FCachedPoseScopeInternal *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)&(param_1->CachedPoses).field_0x1170;
    do {
      *(undefined4 *)(puVar1 + 1) = 0;
      if ((void *)*puVar1 != (void *)0x0) {
        FMemory::Free((void *)*puVar1);
      }
      TSparseArray<TSparseSetElement<TTuple<FAnimNode_SaveCachedPose_const_*,UE::Anim::FCachedPoseThreadContext::FCachedPose>_>,TInlineSparseArrayAllocator<32,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FAnimNode_SaveCachedPose_const_*,UE::Anim::FCachedPoseThreadContext::FCachedPose>_>,TInlineSparseArrayAllocator<32,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
                ((TSparseArray<TSparseSetElement<TTuple<FAnimNode_SaveCachedPose_const_*,UE::Anim::FCachedPoseThreadContext::FCachedPose>_>,TInlineSparseArrayAllocator<32,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
                  *)(puVar1 + -0x22e));
      puVar1 = puVar1 + 0x230;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FAnimNode_SaveCachedPose::FCachedUpdateContext,int> @ 1474a49b0

void __cdecl
DestructItems<FAnimNode_SaveCachedPose::FCachedUpdateContext,int>
          (FCachedUpdateContext *param_1,int param_2)

{
  FSharedReferencer<1> *pFVar1;
  
  if (param_2 != 0) {
    pFVar1 = &(param_1->SharedContext).SharedReferenceCount;
    do {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pFVar1->ReferenceController);
      pFVar1 = pFVar1 + 8;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FCompositeSection,int> @ 1474a49f0

void __cdecl DestructItems<FCompositeSection,int>(FCompositeSection *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = (param_1->MetaData).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    param_1->_padding_ = (longlong)&___7FAnimLinkableElement__6B_;
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<FInertializationRequest,int> @ 1474a4a40

void __cdecl
DestructItems<FInertializationRequest,int>(FInertializationRequest *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  ITextData *pIVar2;
  FText *pFVar3;
  
  if (param_2 != 0) {
    pFVar3 = &param_1->Description_DEPRECATED;
    do {
      pFVar1 = (((FString *)(pFVar3 + 1))->Data).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pIVar2 = (pFVar3->TextData).Reference;
      if (pIVar2 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar2 + 0x10))();
      }
      pFVar3 = (FText *)((longlong)(pFVar3 + 5) + 8);
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<UE::Anim::FMessageStack,int> @ 1474a4a90

void __cdecl DestructItems<UE::Anim::FMessageStack,int>(FMessageStack *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)&(param_1->TagStacks).field_0x1b8;
    do {
      *(undefined4 *)(puVar1 + 1) = 0;
      if ((void *)*puVar1 != (void *)0x0) {
        FMemory::Free((void *)*puVar1);
      }
      TSparseArray<TSparseSetElement<TTuple<FName,TArray<UE::Anim::FMessageStack::FNodeInfo,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_>_>,TInlineSparseArrayAllocator<4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FName,TArray<UE::Anim::FMessageStack::FNodeInfo,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_>_>,TInlineSparseArrayAllocator<4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
                ((TSparseArray<TSparseSetElement<TTuple<FName,TArray<UE::Anim::FMessageStack::FNodeInfo,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_>_>,TInlineSparseArrayAllocator<4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
                  *)(puVar1 + -0x37));
      *(undefined4 *)(puVar1 + -0x38) = 0;
      if ((void *)puVar1[-0x39] != (void *)0x0) {
        FMemory::Free((void *)puVar1[-0x39]);
      }
      TSparseArray<TSparseSetElement<TTuple<FName,TArray<UE::Anim::FMessageStack::FMessageEntry,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>_>_>,TInlineSparseArrayAllocator<8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FName,TArray<UE::Anim::FMessageStack::FMessageEntry,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>_>_>,TInlineSparseArrayAllocator<8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
                ((TSparseArray<TSparseSetElement<TTuple<FName,TArray<UE::Anim::FMessageStack::FMessageEntry,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>_>_>,TInlineSparseArrayAllocator<8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
                  *)(puVar1 + -0x161));
      puVar1 = puVar1 + 0x163;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FRawAnimSequenceTrack,int> @ 1474a4b20

void __cdecl DestructItems<FRawAnimSequenceTrack,int>(FRawAnimSequenceTrack *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  TArray<UE::Math::TQuat<float>,TSizedDefaultAllocator<32>_> *pTVar2;
  
  if (param_2 != 0) {
    pTVar2 = &param_1->RotKeys;
    do {
      pFVar1 = (((TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *)(pTVar2 + 1))->
               AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = (pTVar2->AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = (((FRawAnimSequenceTrack *)(pTVar2 + -1))->PosKeys).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pTVar2 = pTVar2 + 3;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FSlotAnimationTrack,int> @ 1474a4b80

void __cdecl DestructItems<FSlotAnimationTrack,int>(FSlotAnimationTrack *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  FAnimTrack *pFVar2;
  
  if (param_2 != 0) {
    pFVar2 = &param_1->AnimTrack;
    do {
      pFVar1 = (pFVar2->AnimSegments).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar2 = (FAnimTrack *)((longlong)(pFVar2 + 1) + 8);
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FTransitionEvent,int> @ 1474a4bc0

void __cdecl DestructItems<FTransitionEvent,int>(FTransitionEvent *param_1,int param_2)

{
  ForElementType<int> *pFVar1;
  
  if (param_2 != 0) {
    pFVar1 = &(param_1->ConsumedTransitions).AllocatorInstance.SecondaryData;
    do {
      if (*pFVar1 != (ForElementType<int>)0x0) {
        FMemory::Free((void *)*pFVar1);
      }
      pFVar1 = pFVar1 + 10;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// ForEachComponent_Internal<UParticleSystemComponent,1,1,`AActor::GetComponents<UParticleSystemComponent,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>'::__l2::<lambda_1>_> @ 1474a6660

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
ForEachComponent_Internal<UParticleSystemComponent,1,1,_AActor::GetComponents<UParticleSystemComponent,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>_::__l2::<lambda_1>_>
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
  UParticleSystemComponent *pUVar8;
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
  pUVar14 = Z_Construct_UClass_UParticleSystemComponent_NoRegister();
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
    if (bVar12) goto LAB_1474a6783;
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
LAB_1474a6783:
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
      if ((int)(iVar5 + -1 + (iVar5 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_180) goto LAB_1474a681d;
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
LAB_1474a681d:
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
      if ((int)(((int)(uVar6 - 1) >> 0x1f & 0x1fU) + (uVar6 - 1)) >> 5 < iVar16) goto LAB_1474a6920;
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
LAB_1474a6920:
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
        ForEachComponent_Internal<UParticleSystemComponent,1,1,_AActor::GetComponents<UParticleSystemComponent,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>_::__l2::<lambda_1>_>
                  (this_00,(TSubclassOf<UActorComponent>)&local_190,<Var10);
        FVar19 = (ForElementType<AActor_*>)((longlong)FVar19 + 8);
      }
      if (local_108.SecondaryData != (ForElementType<AActor_*>)0x0) {
        FMemory::Free((void *)local_108.SecondaryData);
      }
      return;
    }
    pUVar8 = *(UParticleSystemComponent **)
              (*(longlong *)&pTVar11->Elements + (longlong)TStack_150.CurrentBitIndex * 0x10);
    if (pUVar8 != (UParticleSystemComponent *)0x0) {
      `AActor::
      GetComponents<UParticleSystemComponent,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>'
      ::__l2::<lambda_1>::operator()(&local_res18,pUVar8);
      pUVar13 = Z_Construct_UClass_UChildActorComponent_NoRegister();
      iVar5 = (int)pUVar13->_padding_;
      if (((iVar5 <= *(int *)(*(longlong *)&pUVar8->field_0x10 + 0x38)) &&
          ((longlong *)
           *(undefined1 **)
            (*(longlong *)(*(longlong *)&pUVar8->field_0x10 + 0x30) + (longlong)iVar5 * 8) ==
           &pUVar13->_padding_)) && (local_1a0 = *(longlong *)&pUVar8->field_0x258, local_1a0 != 0))
      {
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

// ForEachComponent_Internal<UParticleSystemComponent,1,0,`AActor::GetComponents<UParticleSystemComponent,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>'::__l2::<lambda_1>_> @ 1474a6b90

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
ForEachComponent_Internal<UParticleSystemComponent,1,0,_AActor::GetComponents<UParticleSystemComponent,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>_::__l2::<lambda_1>_>
          (AActor *this,TSubclassOf<UActorComponent> param_1,<lambda_1> param_2)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  UParticleSystemComponent *pUVar4;
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
  TArray<UParticleSystemComponent_*,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
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
  pUVar10 = Z_Construct_UClass_UParticleSystemComponent_NoRegister();
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
    if (bVar6) goto LAB_1474a6c96;
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
LAB_1474a6c96:
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
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_1474a6d1d;
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
LAB_1474a6d1d:
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
      if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_1474a6e21;
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
LAB_1474a6e21:
  while( true ) {
    if (*(int *)&(this->OwnedComponents).Elements.field_0x8 -
        *(int *)&(this->OwnedComponents).Elements.field_0x34 != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TObjectPtr<UActorComponent>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if ((TStack_60.CurrentBitIndex == uVar13) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    pUVar4 = *(UParticleSystemComponent **)
              (*(longlong *)&(this->OwnedComponents).Elements +
              (longlong)TStack_60.CurrentBitIndex * 0x10);
    if (pUVar4 != (UParticleSystemComponent *)0x0) {
      `AActor::
      GetComponents<UParticleSystemComponent,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>'
      ::__l2::<lambda_1>::operator()(&local_res18,pUVar4);
    }
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// ForEachComponent_Internal<UParticleSystemComponent,0,1,`AActor::GetComponents<UParticleSystemComponent,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>'::__l2::<lambda_1>_> @ 1474a6ea0

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
ForEachComponent_Internal<UParticleSystemComponent,0,1,_AActor::GetComponents<UParticleSystemComponent,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>_::__l2::<lambda_1>_>
          (AActor *this,TSubclassOf<UActorComponent> param_1,<lambda_1> param_2)

{
  undefined1 *puVar1;
  ForElementType<AActor_*> FVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  undefined1 *puVar7;
  UParticleSystemComponent *pUVar8;
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
  pUVar14 = Z_Construct_UClass_UParticleSystemComponent_NoRegister();
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
    if (bVar13) goto LAB_1474a6f93;
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
LAB_1474a6f93:
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
      if ((int)((iVar4 + -1 >> 0x1f & 0x1fU) + iVar4 + -1) >> 5 < iStack_178) goto LAB_1474a7040;
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
LAB_1474a7040:
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
      if ((int)(((int)(uVar5 - 1) >> 0x1f & 0x1fU) + (uVar5 - 1)) >> 5 < iVar17) goto LAB_1474a7150;
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
LAB_1474a7150:
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
        ForEachComponent_Internal<UParticleSystemComponent,0,1,_AActor::GetComponents<UParticleSystemComponent,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>_::__l2::<lambda_1>_>
                  (this_00,(TSubclassOf<UActorComponent>)&local_188,<Var10);
        FVar18 = (ForElementType<AActor_*>)((longlong)FVar18 + 8);
      }
      if (local_100.SecondaryData != (ForElementType<AActor_*>)0x0) {
        FMemory::Free((void *)local_100.SecondaryData);
      }
      return;
    }
    pUVar8 = *(UParticleSystemComponent **)
              (*(longlong *)&pTVar12->Elements + (longlong)TStack_148.CurrentBitIndex * 0x10);
    if (pUVar8 != (UParticleSystemComponent *)0x0) {
      if ((*(int *)(lVar6 + 0x38) <= *(int *)(*(longlong *)&pUVar8->field_0x10 + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)&pUVar8->field_0x10 + 0x30) +
           (longlong)*(int *)(lVar6 + 0x38) * 8) == lVar6 + 0x30)) {
        `AActor::
        GetComponents<UParticleSystemComponent,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>'
        ::__l2::<lambda_1>::operator()(&local_res18,pUVar8);
      }
      pUVar14 = Z_Construct_UClass_UChildActorComponent_NoRegister();
      iVar4 = (int)pUVar14->_padding_;
      if (((iVar4 <= *(int *)(*(longlong *)&pUVar8->field_0x10 + 0x38)) &&
          ((longlong *)
           *(undefined1 **)
            (*(longlong *)(*(longlong *)&pUVar8->field_0x10 + 0x30) + (longlong)iVar4 * 8) ==
           &pUVar14->_padding_)) && (local_1a0 = *(longlong *)&pUVar8->field_0x258, local_1a0 != 0))
      {
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

// ForEachComponent_Internal<UParticleSystemComponent,0,0,`AActor::GetComponents<UParticleSystemComponent,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>'::__l2::<lambda_1>_> @ 1474a73e0

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
ForEachComponent_Internal<UParticleSystemComponent,0,0,_AActor::GetComponents<UParticleSystemComponent,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>_::__l2::<lambda_1>_>
          (AActor *this,TSubclassOf<UActorComponent> param_1,<lambda_1> param_2)

{
  ulonglong uVar1;
  undefined1 *puVar2;
  int iVar3;
  longlong lVar4;
  undefined1 *puVar5;
  UParticleSystemComponent *pUVar6;
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
  TArray<UParticleSystemComponent_*,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
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
  pUVar12 = Z_Construct_UClass_UParticleSystemComponent_NoRegister();
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
    if (bVar9) goto LAB_1474a74be;
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
LAB_1474a74be:
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
      if ((int)((iVar3 + -1 >> 0x1f & 0x1fU) + iVar3 + -1) >> 5 < iVar14) goto LAB_1474a754f;
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
LAB_1474a754f:
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
      goto LAB_1474a7660;
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
LAB_1474a7660:
  while( true ) {
    if (*(int *)&(this->OwnedComponents).Elements.field_0x8 -
        *(int *)&(this->OwnedComponents).Elements.field_0x34 != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TObjectPtr<UActorComponent>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if ((TStack_60.CurrentBitIndex == uVar13) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar2)) break;
    pUVar6 = *(UParticleSystemComponent **)
              (*(longlong *)&(this->OwnedComponents).Elements +
              (longlong)TStack_60.CurrentBitIndex * 0x10);
    if (pUVar6 != (UParticleSystemComponent *)0x0) {
      if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)&pUVar6->field_0x10 + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)&pUVar6->field_0x10 + 0x30) +
           (longlong)*(int *)(lVar4 + 0x38) * 8) == lVar4 + 0x30)) {
        `AActor::
        GetComponents<UParticleSystemComponent,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>'
        ::__l2::<lambda_1>::operator()(&local_res18,pUVar6);
      }
    }
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// GetNodeFromPropertyIndex<FAnimNode_TransitionPoseEvaluator> @ 1474a7970

FAnimNode_TransitionPoseEvaluator * __cdecl
GetNodeFromPropertyIndex<FAnimNode_TransitionPoseEvaluator>
          (UObject *param_1,IAnimClassInterface *param_2,int param_3)

{
  uint uVar1;
  FProperty *this;
  UScriptStruct *pUVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  longlong *plVar6;
  longlong lVar7;
  FAnimNode_TransitionPoseEvaluator *pFVar8;
  UPackage *pUVar9;
  
  if (param_3 == -1) {
    return (FAnimNode_TransitionPoseEvaluator *)0x0;
  }
  plVar6 = (longlong *)(**(code **)((longlong)*param_2 + 0x20))(param_2);
  lVar7 = (**(code **)((longlong)*param_2 + 0x20))(param_2);
  uVar1 = (*(int *)(lVar7 + 8) - param_3) - 1;
  uVar5 = 0;
  if ((int)uVar1 < (int)plVar6[1]) {
    uVar5 = ~uVar1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar8 = (FAnimNode_TransitionPoseEvaluator *)(*pcVar3)();
      return pFVar8;
    }
  }
  this = *(FProperty **)(*plVar6 + (longlong)(int)uVar1 * 8);
  if (Z_Registration_Info_UScriptStruct_FAnimNode_TransitionPoseEvaluator.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar9 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FAnimNode_TransitionPoseEvaluator.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_TransitionPoseEvaluator,
                         (UObject *)pUVar9,L"AnimNode_TransitionPoseEvaluator");
  }
  pUVar2 = (UScriptStruct *)this[1]._padding_;
  if (pUVar2 == (UScriptStruct *)0x0) {
    bVar4 = Z_Registration_Info_UScriptStruct_FAnimNode_TransitionPoseEvaluator.OuterSingleton ==
            (UScriptStruct *)0x0;
  }
  else {
    bVar4 = pUVar2 == Z_Registration_Info_UScriptStruct_FAnimNode_TransitionPoseEvaluator.
                      OuterSingleton;
  }
  if (!bVar4) {
    bVar4 = FDebug::CheckVerifyFailedImpl2
                      ("NodeProperty->Struct == NodeType::StaticStruct()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AnimBlueprintGeneratedClass.h"
                       ,0x297,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar8 = (FAnimNode_TransitionPoseEvaluator *)(*pcVar3)();
      return pFVar8;
    }
  }
  pFVar8 = FProperty::ContainerUObjectPtrToValuePtrInternal(this,param_1,0);
  return pFVar8;
}

// HeapSortInternal<FProperty_*,int,FIdentityFunctor,`FAnimNodeStructData::FAnimNodeStructData'::__l2::<lambda_1>_> @ 1474a7bc0

void __cdecl
AlgoImpl::
HeapSortInternal<FProperty_*,int,FIdentityFunctor,_FAnimNodeStructData::FAnimNodeStructData_::__l2::<lambda_1>_>
          (FProperty **param_1,int param_2,FIdentityFunctor param_3,<lambda_1> param_4)

{
  FProperty *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  
  if (param_2 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar4 = (param_2 + -2) / 2;
  iVar5 = iVar4 * 2 + 1;
  iVar8 = iVar5;
  iVar9 = iVar4;
  do {
    while (param_2 <= iVar5) {
LAB_1474a7cae:
      if (iVar9 == 0) {
        iVar5 = param_2 + -1;
        lVar7 = (longlong)iVar5;
        if (0 < iVar5) {
          do {
            iVar8 = 0;
            pFVar1 = *param_1;
            *param_1 = param_1[lVar7];
            param_1[lVar7] = pFVar1;
            if (1 < iVar5) {
              do {
                iVar9 = iVar8 * 2;
                iVar4 = iVar9 + 1;
                if (iVar9 + 2 < iVar5) {
                  if (param_1[(longlong)iVar9 + 2]->Offset_Internal <
                      param_1[iVar4]->Offset_Internal) {
                    iVar4 = iVar9;
                  }
                  iVar4 = iVar4 + 1;
                }
                pFVar1 = param_1[iVar8];
                if (param_1[iVar4]->Offset_Internal <= pFVar1->Offset_Internal) break;
                param_1[iVar8] = param_1[iVar4];
                param_1[iVar4] = pFVar1;
                iVar8 = iVar4;
              } while (iVar4 * 2 + 1 < iVar5);
            }
            iVar5 = iVar5 + -1;
            lVar7 = lVar7 + -1;
          } while (0 < lVar7);
        }
        return;
      }
      iVar4 = iVar9 + -1;
      iVar5 = iVar8 + -2;
      iVar8 = iVar5;
      iVar9 = iVar4;
    }
    iVar5 = iVar4 * 2;
    iVar6 = iVar5 + 1;
    if (iVar5 + 2 < param_2) {
      if (param_1[(longlong)iVar5 + 2]->Offset_Internal < param_1[iVar6]->Offset_Internal) {
        iVar6 = iVar5;
      }
      iVar6 = iVar6 + 1;
    }
    pFVar1 = param_1[iVar4];
    if (param_1[iVar6]->Offset_Internal <= pFVar1->Offset_Internal) goto LAB_1474a7cae;
    param_1[iVar4] = param_1[iVar6];
    iVar5 = iVar6 * 2 + 1;
    param_1[iVar6] = pFVar1;
    iVar4 = iVar6;
  } while( true );
}

// HeapSortInternal<FAnimSyncMarker,int,FIdentityFunctor,TDereferenceWrapper<FAnimSyncMarker,TLess<void>_>_> @ 1474a7d70

void __cdecl
AlgoImpl::
HeapSortInternal<FAnimSyncMarker,int,FIdentityFunctor,TDereferenceWrapper<FAnimSyncMarker,TLess<void>_>_>
          (FAnimSyncMarker *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<FAnimSyncMarker,TLess<void>_> param_4)

{
  FName FVar1;
  float fVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  FAnimSyncMarker *pFVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  
  if (param_2 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar5 = (param_2 + -2) / 2;
  iVar6 = iVar5 * 2 + 1;
  iVar10 = iVar6;
  iVar11 = iVar5;
  do {
    while (param_2 <= iVar6) {
LAB_1474a7e87:
      if (iVar11 == 0) {
        iVar6 = param_2 + -1;
        lVar8 = (longlong)iVar6;
        if (0 < iVar6) {
          pFVar7 = param_1 + lVar8;
          do {
            FVar1 = param_1->MarkerName;
            fVar2 = param_1->Time;
            param_1->MarkerName = pFVar7->MarkerName;
            param_1->Time = pFVar7->Time;
            pFVar7->MarkerName = FVar1;
            pFVar7->Time = fVar2;
            iVar10 = 0;
            if (1 < iVar6) {
              do {
                iVar11 = iVar10 * 2;
                iVar5 = iVar11 + 1;
                if (iVar11 + 2 < iVar6) {
                  if (param_1[(longlong)iVar11 + 2].Time <= param_1[iVar5].Time &&
                      param_1[iVar5].Time != param_1[(longlong)iVar11 + 2].Time) {
                    iVar5 = iVar11;
                  }
                  iVar5 = iVar5 + 1;
                }
                if (param_1[iVar5].Time < param_1[iVar10].Time ||
                    param_1[iVar5].Time == param_1[iVar10].Time) break;
                FVar1 = param_1[iVar10].MarkerName;
                fVar2 = param_1[iVar10].Time;
                param_1[iVar10].MarkerName = param_1[iVar5].MarkerName;
                param_1[iVar10].Time = param_1[iVar5].Time;
                param_1[iVar5].MarkerName = FVar1;
                param_1[iVar5].Time = fVar2;
                iVar10 = iVar5;
              } while (iVar5 * 2 + 1 < iVar6);
            }
            iVar6 = iVar6 + -1;
            lVar8 = lVar8 + -1;
            pFVar7 = pFVar7 + -1;
          } while (0 < lVar8);
        }
        return;
      }
      iVar5 = iVar11 + -1;
      iVar6 = iVar10 + -2;
      iVar10 = iVar6;
      iVar11 = iVar5;
    }
    iVar6 = iVar5 * 2;
    iVar9 = iVar6 + 1;
    if (iVar6 + 2 < param_2) {
      if (param_1[(longlong)iVar6 + 2].Time <= param_1[iVar9].Time &&
          param_1[iVar9].Time != param_1[(longlong)iVar6 + 2].Time) {
        iVar9 = iVar6;
      }
      iVar9 = iVar9 + 1;
    }
    if (param_1[iVar9].Time < param_1[iVar5].Time || param_1[iVar9].Time == param_1[iVar5].Time)
    goto LAB_1474a7e87;
    FVar1 = param_1[iVar5].MarkerName;
    fVar2 = param_1[iVar5].Time;
    param_1[iVar5].MarkerName = param_1[iVar9].MarkerName;
    param_1[iVar5].Time = param_1[iVar9].Time;
    iVar6 = iVar9 * 2 + 1;
    param_1[iVar9].MarkerName = FVar1;
    param_1[iVar9].Time = fVar2;
    iVar5 = iVar9;
  } while( true );
}

// HeapSortInternal<FBranchingPointMarker,int,FIdentityFunctor,TDereferenceWrapper<FBranchingPointMarker,`UAnimMontage::RefreshBranchingPointMarkers'::__l13::FCompareNotifyTickMarkersTime>_> @ 1474a7fa0

void __cdecl
AlgoImpl::
HeapSortInternal<FBranchingPointMarker,int,FIdentityFunctor,TDereferenceWrapper<FBranchingPointMarker,_UAnimMontage::RefreshBranchingPointMarkers_::__l13::FCompareNotifyTickMarkersTime>_>
          (FBranchingPointMarker *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<FBranchingPointMarker,_private:_void___cdecl_UAnimMontage::RefreshBranchingPointMarkers(void)_::_13_::FCompareNotifyTickMarkersTime>
          param_4)

{
  code *pcVar1;
  float fVar2;
  undefined3 uVar3;
  int iVar4;
  float fVar5;
  TEnumAsByte<EAnimNotifyEventType::Type> TVar6;
  undefined3 uVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  FBranchingPointMarker *pFVar11;
  longlong lVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  
  if (param_2 < 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar8) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar8) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar9 = (param_2 + -2) / 2;
  iVar10 = iVar9 * 2 + 1;
  iVar14 = iVar10;
  iVar15 = iVar9;
  do {
    while (param_2 <= iVar10) {
LAB_1474a80b7:
      if (iVar15 == 0) {
        iVar10 = param_2 + -1;
        lVar12 = (longlong)iVar10;
        if (0 < iVar10) {
          pFVar11 = param_1 + lVar12;
          do {
            fVar2 = pFVar11->TriggerTime;
            iVar14 = param_1->NotifyIndex;
            fVar5 = param_1->TriggerTime;
            TVar6.Value = (param_1->NotifyEventType).Value;
            uVar7 = *(undefined3 *)&param_1->field_0x9;
            param_1->NotifyIndex = pFVar11->NotifyIndex;
            param_1->TriggerTime = fVar2;
            uVar3 = *(undefined3 *)&pFVar11->field_0x9;
            param_1->NotifyEventType =
                 (TEnumAsByte<EAnimNotifyEventType::Type>)(pFVar11->NotifyEventType).Value;
            *(undefined3 *)&param_1->field_0x9 = uVar3;
            pFVar11->NotifyIndex = iVar14;
            pFVar11->TriggerTime = fVar5;
            pFVar11->NotifyEventType = (TEnumAsByte<EAnimNotifyEventType::Type>)TVar6.Value;
            *(undefined3 *)&pFVar11->field_0x9 = uVar7;
            iVar14 = 0;
            if (1 < iVar10) {
              do {
                iVar15 = iVar14 * 2;
                iVar9 = iVar15 + 1;
                if (iVar15 + 2 < iVar10) {
                  if (param_1[(longlong)iVar15 + 2].TriggerTime <= param_1[iVar9].TriggerTime &&
                      param_1[iVar9].TriggerTime != param_1[(longlong)iVar15 + 2].TriggerTime) {
                    iVar9 = iVar15;
                  }
                  iVar9 = iVar9 + 1;
                }
                if (param_1[iVar9].TriggerTime < param_1[iVar14].TriggerTime ||
                    param_1[iVar9].TriggerTime == param_1[iVar14].TriggerTime) break;
                fVar2 = param_1[iVar9].TriggerTime;
                iVar15 = param_1[iVar14].NotifyIndex;
                fVar5 = param_1[iVar14].TriggerTime;
                TVar6.Value = param_1[iVar14].NotifyEventType.Value;
                uVar7 = *(undefined3 *)&param_1[iVar14].field_0x9;
                param_1[iVar14].NotifyIndex = param_1[iVar9].NotifyIndex;
                param_1[iVar14].TriggerTime = fVar2;
                uVar3 = *(undefined3 *)&param_1[iVar9].field_0x9;
                param_1[iVar14].NotifyEventType =
                     (TEnumAsByte<EAnimNotifyEventType::Type>)param_1[iVar9].NotifyEventType.Value;
                *(undefined3 *)&param_1[iVar14].field_0x9 = uVar3;
                param_1[iVar9].NotifyIndex = iVar15;
                param_1[iVar9].TriggerTime = fVar5;
                param_1[iVar9].NotifyEventType =
                     (TEnumAsByte<EAnimNotifyEventType::Type>)TVar6.Value;
                *(undefined3 *)&param_1[iVar9].field_0x9 = uVar7;
                iVar14 = iVar9;
              } while (iVar9 * 2 + 1 < iVar10);
            }
            iVar10 = iVar10 + -1;
            lVar12 = lVar12 + -1;
            pFVar11 = pFVar11 + -1;
          } while (0 < lVar12);
        }
        return;
      }
      iVar9 = iVar15 + -1;
      iVar10 = iVar14 + -2;
      iVar14 = iVar10;
      iVar15 = iVar9;
    }
    iVar10 = iVar9 * 2;
    iVar13 = iVar10 + 1;
    if (iVar10 + 2 < param_2) {
      if (param_1[(longlong)iVar10 + 2].TriggerTime <= param_1[iVar13].TriggerTime &&
          param_1[iVar13].TriggerTime != param_1[(longlong)iVar10 + 2].TriggerTime) {
        iVar13 = iVar10;
      }
      iVar13 = iVar13 + 1;
    }
    if (param_1[iVar13].TriggerTime < param_1[iVar9].TriggerTime ||
        param_1[iVar13].TriggerTime == param_1[iVar9].TriggerTime) goto LAB_1474a80b7;
    fVar2 = param_1[iVar13].TriggerTime;
    iVar4 = param_1[iVar9].NotifyIndex;
    fVar5 = param_1[iVar9].TriggerTime;
    TVar6.Value = param_1[iVar9].NotifyEventType.Value;
    uVar7 = *(undefined3 *)&param_1[iVar9].field_0x9;
    param_1[iVar9].NotifyIndex = param_1[iVar13].NotifyIndex;
    param_1[iVar9].TriggerTime = fVar2;
    uVar3 = *(undefined3 *)&param_1[iVar13].field_0x9;
    param_1[iVar9].NotifyEventType =
         (TEnumAsByte<EAnimNotifyEventType::Type>)param_1[iVar13].NotifyEventType.Value;
    *(undefined3 *)&param_1[iVar9].field_0x9 = uVar3;
    iVar10 = iVar13 * 2 + 1;
    param_1[iVar13].NotifyIndex = iVar4;
    param_1[iVar13].TriggerTime = fVar5;
    param_1[iVar13].NotifyEventType = (TEnumAsByte<EAnimNotifyEventType::Type>)TVar6.Value;
    *(undefined3 *)&param_1[iVar13].field_0x9 = uVar7;
    iVar9 = iVar13;
  } while( true );
}

// HeapSortInternal<UE::Anim::FCurveElement,int,FIdentityFunctor,UE::Anim::TNamedValueArray<TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>,UE::Anim::FCurveElement>::FElementSortPredicate> @ 1474a81d0

void __cdecl
AlgoImpl::
HeapSortInternal<UE::Anim::FCurveElement,int,FIdentityFunctor,UE::Anim::TNamedValueArray<TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>,UE::Anim::FCurveElement>::FElementSortPredicate>
          (FCurveElement *param_1,int param_2,FIdentityFunctor param_3,FElementSortPredicate param_4
          )

{
  code *pcVar1;
  FName FVar2;
  float fVar3;
  ECurveElementFlags EVar4;
  undefined3 uVar5;
  float fVar6;
  ECurveElementFlags EVar7;
  undefined3 uVar8;
  bool bVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  longlong lVar14;
  longlong lVar15;
  int iVar16;
  longlong lVar17;
  FCurveElement *pFVar18;
  FCurveElement *pFVar19;
  FCurveElement *pFVar20;
  int iVar21;
  
  if (param_2 < 0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar9) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar9) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar10 = (param_2 + -2) / 2;
  iVar12 = iVar10 * 2 + 1;
  iVar13 = iVar12;
  iVar21 = iVar10;
  do {
    while (param_2 <= iVar12) {
LAB_1474a82e0:
      if (iVar21 == 0) {
        iVar12 = param_2 + -1;
        lVar17 = (longlong)iVar12;
        if (0 < iVar12) {
          pFVar18 = param_1 + lVar17;
          do {
            fVar3 = pFVar18->Value;
            EVar4 = pFVar18->Flags;
            uVar5 = *(undefined3 *)&pFVar18->field_0xd;
            FVar2 = param_1->Name;
            fVar6 = param_1->Value;
            EVar7 = param_1->Flags;
            uVar8 = *(undefined3 *)&param_1->field_0xd;
            param_1->Name = pFVar18->Name;
            param_1->Value = fVar3;
            param_1->Flags = EVar4;
            *(undefined3 *)&param_1->field_0xd = uVar5;
            pFVar18->Name = FVar2;
            pFVar18->Value = fVar6;
            pFVar18->Flags = EVar7;
            *(undefined3 *)&pFVar18->field_0xd = uVar8;
            iVar13 = 0;
            if (1 < iVar12) {
              do {
                iVar21 = iVar13 * 2;
                iVar10 = iVar21 + 1;
                if (iVar21 + 2 < iVar12) {
                  lVar14 = (longlong)iVar21 + 2;
                  lVar15 = (longlong)iVar21 + 1;
                  iVar16 = param_1[lVar14].Name.ComparisonIndex.Value -
                           param_1[lVar15].Name.ComparisonIndex.Value;
                  if (iVar16 == 0) {
                    iVar16 = param_1[lVar14].Name.Number - param_1[lVar15].Name.Number;
                  }
                  if (iVar16 < 0) {
                    iVar10 = iVar21;
                  }
                  iVar10 = iVar10 + 1;
                }
                pFVar20 = param_1 + iVar13;
                pFVar19 = param_1 + iVar10;
                iVar13 = (pFVar20->Name).ComparisonIndex.Value -
                         (pFVar19->Name).ComparisonIndex.Value;
                if (iVar13 == 0) {
                  iVar13 = (pFVar20->Name).Number - (pFVar19->Name).Number;
                }
                if (-1 < iVar13) break;
                fVar3 = pFVar19->Value;
                EVar4 = pFVar19->Flags;
                uVar5 = *(undefined3 *)&pFVar19->field_0xd;
                FVar2 = pFVar20->Name;
                fVar6 = pFVar20->Value;
                EVar7 = pFVar20->Flags;
                uVar8 = *(undefined3 *)&pFVar20->field_0xd;
                pFVar20->Name = pFVar19->Name;
                pFVar20->Value = fVar3;
                pFVar20->Flags = EVar4;
                *(undefined3 *)&pFVar20->field_0xd = uVar5;
                pFVar19->Name = FVar2;
                pFVar19->Value = fVar6;
                pFVar19->Flags = EVar7;
                *(undefined3 *)&pFVar19->field_0xd = uVar8;
                iVar13 = iVar10;
              } while (iVar10 * 2 + 1 < iVar12);
            }
            iVar12 = iVar12 + -1;
            lVar17 = lVar17 + -1;
            pFVar18 = pFVar18 + -1;
          } while (0 < lVar17);
        }
        return;
      }
      iVar10 = iVar21 + -1;
      iVar12 = iVar13 + -2;
      iVar13 = iVar12;
      iVar21 = iVar10;
    }
    iVar12 = iVar10 * 2;
    iVar16 = iVar12 + 1;
    if (iVar12 + 2 < param_2) {
      lVar17 = (longlong)iVar12 + 2;
      lVar14 = (longlong)iVar12 + 1;
      iVar11 = param_1[lVar17].Name.ComparisonIndex.Value -
               param_1[lVar14].Name.ComparisonIndex.Value;
      if (iVar11 == 0) {
        iVar11 = param_1[lVar17].Name.Number - param_1[lVar14].Name.Number;
      }
      if (iVar11 < 0) {
        iVar16 = iVar12;
      }
      iVar16 = iVar16 + 1;
    }
    pFVar19 = param_1 + iVar10;
    pFVar18 = param_1 + iVar16;
    iVar12 = (pFVar19->Name).ComparisonIndex.Value - (pFVar18->Name).ComparisonIndex.Value;
    if (iVar12 == 0) {
      iVar12 = (pFVar19->Name).Number - (pFVar18->Name).Number;
    }
    if (-1 < iVar12) goto LAB_1474a82e0;
    fVar3 = pFVar18->Value;
    EVar4 = pFVar18->Flags;
    uVar5 = *(undefined3 *)&pFVar18->field_0xd;
    iVar12 = iVar16 * 2 + 1;
    FVar2 = pFVar19->Name;
    fVar6 = pFVar19->Value;
    EVar7 = pFVar19->Flags;
    uVar8 = *(undefined3 *)&pFVar19->field_0xd;
    pFVar19->Name = pFVar18->Name;
    pFVar19->Value = fVar3;
    pFVar19->Flags = EVar4;
    *(undefined3 *)&pFVar19->field_0xd = uVar5;
    pFVar18->Name = FVar2;
    pFVar18->Value = fVar6;
    pFVar18->Flags = EVar7;
    *(undefined3 *)&pFVar18->field_0xd = uVar8;
    iVar10 = iVar16;
  } while( true );
}

// HeapSortInternal<FAnimNode_DeadBlending::FDeadBlendingCurveElement,int,FIdentityFunctor,UE::Anim::TNamedValueArray<TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>,FAnimNode_DeadBlending::FDeadBlendingCurveElement>::FElementSortPredicate> @ 1474a83e0

void __cdecl
AlgoImpl::
HeapSortInternal<FAnimNode_DeadBlending::FDeadBlendingCurveElement,int,FIdentityFunctor,UE::Anim::TNamedValueArray<TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>,FAnimNode_DeadBlending::FDeadBlendingCurveElement>::FElementSortPredicate>
          (FDeadBlendingCurveElement *param_1,int param_2,FIdentityFunctor param_3,
          FElementSortPredicate param_4)

{
  FDeadBlendingCurveElement *pFVar1;
  code *pcVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  bool bVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  FDeadBlendingCurveElement *pFVar15;
  longlong lVar16;
  int iVar17;
  
  if (param_2 < 0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar9) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar9) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar10 = (param_2 + -2) / 2;
  iVar12 = iVar10 * 2 + 1;
  iVar17 = iVar12;
  iVar13 = iVar10;
  do {
    while (param_2 <= iVar12) {
LAB_1474a8513:
      if (iVar13 == 0) {
        iVar12 = param_2 + -1;
        lVar16 = (longlong)iVar12;
        if (0 < iVar12) {
          pFVar15 = param_1 + lVar16;
          do {
            lVar3 = pFVar15->_padding_;
            fVar7 = param_1->Velocity;
            fVar8 = param_1->HalfLife;
            lVar4 = param_1->_padding_;
            lVar5 = param_1->_padding_;
            param_1->_padding_ = pFVar15->_padding_;
            param_1->_padding_ = lVar3;
            fVar6 = pFVar15->HalfLife;
            param_1->Velocity = pFVar15->Velocity;
            param_1->HalfLife = fVar6;
            pFVar15->_padding_ = lVar4;
            pFVar15->_padding_ = lVar5;
            pFVar15->Velocity = fVar7;
            pFVar15->HalfLife = fVar8;
            iVar17 = 0;
            if (1 < iVar12) {
              do {
                iVar13 = iVar17 * 2;
                iVar10 = iVar13 + 1;
                if (iVar13 + 2 < iVar12) {
                  iVar14 = (int)param_1[(longlong)iVar13 + 2]._padding_ -
                           (int)param_1[(longlong)iVar13 + 1]._padding_;
                  if (iVar14 == 0) {
                    iVar14 = *(int *)((longlong)&param_1[(longlong)iVar13 + 2]._padding_ + 4) -
                             *(int *)((longlong)&param_1[(longlong)iVar13 + 1]._padding_ + 4);
                  }
                  if (iVar14 < 0) {
                    iVar10 = iVar13;
                  }
                  iVar10 = iVar10 + 1;
                }
                pFVar1 = param_1 + iVar10;
                iVar13 = (int)param_1[iVar17]._padding_ - (int)pFVar1->_padding_;
                if (iVar13 == 0) {
                  iVar13 = *(int *)((longlong)&param_1[iVar17]._padding_ + 4) -
                           *(int *)((longlong)&pFVar1->_padding_ + 4);
                }
                if (-1 < iVar13) break;
                lVar3 = pFVar1->_padding_;
                fVar7 = param_1[iVar17].Velocity;
                fVar8 = param_1[iVar17].HalfLife;
                lVar4 = param_1[iVar17]._padding_;
                lVar5 = param_1[iVar17]._padding_;
                param_1[iVar17]._padding_ = pFVar1->_padding_;
                param_1[iVar17]._padding_ = lVar3;
                fVar6 = pFVar1->HalfLife;
                param_1[iVar17].Velocity = pFVar1->Velocity;
                param_1[iVar17].HalfLife = fVar6;
                pFVar1->_padding_ = lVar4;
                pFVar1->_padding_ = lVar5;
                pFVar1->Velocity = fVar7;
                pFVar1->HalfLife = fVar8;
                iVar17 = iVar10;
              } while (iVar10 * 2 + 1 < iVar12);
            }
            iVar12 = iVar12 + -1;
            lVar16 = lVar16 + -1;
            pFVar15 = pFVar15 + -1;
          } while (0 < lVar16);
        }
        return;
      }
      iVar10 = iVar13 + -1;
      iVar12 = iVar17 + -2;
      iVar17 = iVar12;
      iVar13 = iVar10;
    }
    iVar12 = iVar10 * 2;
    iVar14 = iVar12 + 1;
    if (iVar12 + 2 < param_2) {
      iVar11 = (int)param_1[(longlong)iVar12 + 2]._padding_ -
               (int)param_1[(longlong)iVar12 + 1]._padding_;
      if (iVar11 == 0) {
        iVar11 = *(int *)((longlong)&param_1[(longlong)iVar12 + 2]._padding_ + 4) -
                 *(int *)((longlong)&param_1[(longlong)iVar12 + 1]._padding_ + 4);
      }
      if (iVar11 < 0) {
        iVar14 = iVar12;
      }
      iVar14 = iVar14 + 1;
    }
    pFVar15 = param_1 + iVar14;
    iVar12 = (int)param_1[iVar10]._padding_ - (int)pFVar15->_padding_;
    if (iVar12 == 0) {
      iVar12 = *(int *)((longlong)&param_1[iVar10]._padding_ + 4) -
               *(int *)((longlong)&pFVar15->_padding_ + 4);
    }
    if (-1 < iVar12) goto LAB_1474a8513;
    lVar16 = pFVar15->_padding_;
    iVar12 = iVar14 * 2 + 1;
    fVar7 = param_1[iVar10].Velocity;
    fVar8 = param_1[iVar10].HalfLife;
    lVar3 = param_1[iVar10]._padding_;
    lVar4 = param_1[iVar10]._padding_;
    param_1[iVar10]._padding_ = pFVar15->_padding_;
    param_1[iVar10]._padding_ = lVar16;
    fVar6 = pFVar15->HalfLife;
    param_1[iVar10].Velocity = pFVar15->Velocity;
    param_1[iVar10].HalfLife = fVar6;
    pFVar15->_padding_ = lVar3;
    pFVar15->_padding_ = lVar4;
    pFVar15->Velocity = fVar7;
    pFVar15->HalfLife = fVar8;
    iVar10 = iVar14;
  } while( true );
}

// HeapSortInternal<FInertializationCurveDiffElement,int,FIdentityFunctor,UE::Anim::TNamedValueArray<TSizedDefaultAllocator<32>,FInertializationCurveDiffElement>::FElementSortPredicate> @ 1474a8640

void __cdecl
AlgoImpl::
HeapSortInternal<FInertializationCurveDiffElement,int,FIdentityFunctor,UE::Anim::TNamedValueArray<TSizedDefaultAllocator<32>,FInertializationCurveDiffElement>::FElementSortPredicate>
          (FInertializationCurveDiffElement *param_1,int param_2,FIdentityFunctor param_3,
          FElementSortPredicate param_4)

{
  FInertializationCurveDiffElement *pFVar1;
  code *pcVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  bool bVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  FInertializationCurveDiffElement *pFVar15;
  longlong lVar16;
  int iVar17;
  
  if (param_2 < 0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar9) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar9) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar10 = (param_2 + -2) / 2;
  iVar12 = iVar10 * 2 + 1;
  iVar17 = iVar12;
  iVar13 = iVar10;
  do {
    while (param_2 <= iVar12) {
LAB_1474a8773:
      if (iVar13 == 0) {
        iVar12 = param_2 + -1;
        lVar16 = (longlong)iVar12;
        if (0 < iVar12) {
          pFVar15 = param_1 + lVar16;
          do {
            lVar3 = pFVar15->_padding_;
            fVar7 = param_1->Delta;
            fVar8 = param_1->Derivative;
            lVar4 = param_1->_padding_;
            lVar5 = param_1->_padding_;
            param_1->_padding_ = pFVar15->_padding_;
            param_1->_padding_ = lVar3;
            fVar6 = pFVar15->Derivative;
            param_1->Delta = pFVar15->Delta;
            param_1->Derivative = fVar6;
            pFVar15->_padding_ = lVar4;
            pFVar15->_padding_ = lVar5;
            pFVar15->Delta = fVar7;
            pFVar15->Derivative = fVar8;
            iVar17 = 0;
            if (1 < iVar12) {
              do {
                iVar13 = iVar17 * 2;
                iVar10 = iVar13 + 1;
                if (iVar13 + 2 < iVar12) {
                  iVar14 = (int)param_1[(longlong)iVar13 + 2]._padding_ -
                           (int)param_1[(longlong)iVar13 + 1]._padding_;
                  if (iVar14 == 0) {
                    iVar14 = *(int *)((longlong)&param_1[(longlong)iVar13 + 2]._padding_ + 4) -
                             *(int *)((longlong)&param_1[(longlong)iVar13 + 1]._padding_ + 4);
                  }
                  if (iVar14 < 0) {
                    iVar10 = iVar13;
                  }
                  iVar10 = iVar10 + 1;
                }
                pFVar1 = param_1 + iVar10;
                iVar13 = (int)param_1[iVar17]._padding_ - (int)pFVar1->_padding_;
                if (iVar13 == 0) {
                  iVar13 = *(int *)((longlong)&param_1[iVar17]._padding_ + 4) -
                           *(int *)((longlong)&pFVar1->_padding_ + 4);
                }
                if (-1 < iVar13) break;
                lVar3 = pFVar1->_padding_;
                fVar7 = param_1[iVar17].Delta;
                fVar8 = param_1[iVar17].Derivative;
                lVar4 = param_1[iVar17]._padding_;
                lVar5 = param_1[iVar17]._padding_;
                param_1[iVar17]._padding_ = pFVar1->_padding_;
                param_1[iVar17]._padding_ = lVar3;
                fVar6 = pFVar1->Derivative;
                param_1[iVar17].Delta = pFVar1->Delta;
                param_1[iVar17].Derivative = fVar6;
                pFVar1->_padding_ = lVar4;
                pFVar1->_padding_ = lVar5;
                pFVar1->Delta = fVar7;
                pFVar1->Derivative = fVar8;
                iVar17 = iVar10;
              } while (iVar10 * 2 + 1 < iVar12);
            }
            iVar12 = iVar12 + -1;
            lVar16 = lVar16 + -1;
            pFVar15 = pFVar15 + -1;
          } while (0 < lVar16);
        }
        return;
      }
      iVar10 = iVar13 + -1;
      iVar12 = iVar17 + -2;
      iVar17 = iVar12;
      iVar13 = iVar10;
    }
    iVar12 = iVar10 * 2;
    iVar14 = iVar12 + 1;
    if (iVar12 + 2 < param_2) {
      iVar11 = (int)param_1[(longlong)iVar12 + 2]._padding_ -
               (int)param_1[(longlong)iVar12 + 1]._padding_;
      if (iVar11 == 0) {
        iVar11 = *(int *)((longlong)&param_1[(longlong)iVar12 + 2]._padding_ + 4) -
                 *(int *)((longlong)&param_1[(longlong)iVar12 + 1]._padding_ + 4);
      }
      if (iVar11 < 0) {
        iVar14 = iVar12;
      }
      iVar14 = iVar14 + 1;
    }
    pFVar15 = param_1 + iVar14;
    iVar12 = (int)param_1[iVar10]._padding_ - (int)pFVar15->_padding_;
    if (iVar12 == 0) {
      iVar12 = *(int *)((longlong)&param_1[iVar10]._padding_ + 4) -
               *(int *)((longlong)&pFVar15->_padding_ + 4);
    }
    if (-1 < iVar12) goto LAB_1474a8773;
    lVar16 = pFVar15->_padding_;
    iVar12 = iVar14 * 2 + 1;
    fVar7 = param_1[iVar10].Delta;
    fVar8 = param_1[iVar10].Derivative;
    lVar3 = param_1[iVar10]._padding_;
    lVar4 = param_1[iVar10]._padding_;
    param_1[iVar10]._padding_ = pFVar15->_padding_;
    param_1[iVar10]._padding_ = lVar16;
    fVar6 = pFVar15->Derivative;
    param_1[iVar10].Delta = pFVar15->Delta;
    param_1[iVar10].Derivative = fVar6;
    pFVar15->_padding_ = lVar3;
    pFVar15->_padding_ = lVar4;
    pFVar15->Delta = fVar7;
    pFVar15->Derivative = fVar8;
    iVar10 = iVar14;
  } while( true );
}

// InternalConstructor<UAnimMetaData> @ 1474a88a0

void __cdecl InternalConstructor<UAnimMetaData>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UAnimMetaData__6B_;
  }
  return;
}

// InternalConstructor<UAnimMontage> @ 1474a88d0

void __cdecl InternalConstructor<UAnimMontage>(FObjectInitializer *param_1)

{
  if ((UAnimMontage *)param_1->Obj != (UAnimMontage *)0x0) {
    UAnimMontage::UAnimMontage((UAnimMontage *)param_1->Obj,param_1);
    return;
  }
  return;
}

// InternalConstructor<UAnimNotify> @ 1474a88f0

void __cdecl InternalConstructor<UAnimNotify>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined ***)this = &___7UAnimNotify__6B_;
    *(undefined1 *)(this + 1) = 0;
  }
  return;
}

// InternalConstructor<UAnimNotifyLibrary> @ 1474a8930

void __cdecl InternalConstructor<UAnimNotifyLibrary>(FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary *this;
  
  this = (UBlueprintFunctionLibrary *)param_1->Obj;
  if (this != (UBlueprintFunctionLibrary *)0x0) {
    UBlueprintFunctionLibrary::UBlueprintFunctionLibrary(this,param_1);
    *(undefined ***)this = &___7UAnimNotifyLibrary__6B_;
  }
  return;
}

// InternalConstructor<UAnimNotifyMirrorInspectionLibrary> @ 1474a8960

void __cdecl InternalConstructor<UAnimNotifyMirrorInspectionLibrary>(FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary *this;
  
  this = (UBlueprintFunctionLibrary *)param_1->Obj;
  if (this != (UBlueprintFunctionLibrary *)0x0) {
    UBlueprintFunctionLibrary::UBlueprintFunctionLibrary(this,param_1);
    *(undefined ***)this = &___7UAnimNotifyMirrorInspectionLibrary__6B_;
  }
  return;
}

// InternalConstructor<UAnimNotifyState> @ 1474a8990

void __cdecl InternalConstructor<UAnimNotifyState>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined1 *)(this + 1) = 0;
    *(undefined ***)this = &___7UAnimNotifyState__6B_;
  }
  return;
}

// InternalConstructor<UAnimNotifyStateMachineInspectionLibrary> @ 1474a89d0

void __cdecl
InternalConstructor<UAnimNotifyStateMachineInspectionLibrary>(FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary *this;
  
  this = (UBlueprintFunctionLibrary *)param_1->Obj;
  if (this != (UBlueprintFunctionLibrary *)0x0) {
    UBlueprintFunctionLibrary::UBlueprintFunctionLibrary(this,param_1);
    *(undefined ***)this = &___7UAnimNotifyStateMachineInspectionLibrary__6B_;
  }
  return;
}

// InternalConstructor<UAnimNotifyState_DisableRootMotion> @ 1474a8a00

void __cdecl InternalConstructor<UAnimNotifyState_DisableRootMotion>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined1 *)(this + 1) = 1;
    *(undefined ***)this = &___7UAnimNotifyState_DisableRootMotion__6B_;
  }
  return;
}

// InternalConstructor<UAnimNotifyState_TimedParticleEffect> @ 1474a8a40

void __cdecl InternalConstructor<UAnimNotifyState_TimedParticleEffect>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined1 *)(this + 1) = 0;
    *(undefined ***)this = &___7UAnimNotifyState_TimedParticleEffect__6B_;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x18 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
    *(undefined8 *)(this + 2) = 0;
    *(undefined8 *)&this[2].field_0x8 = 0;
    *(undefined8 *)&this[2].field_0x10 = 0;
    *(undefined8 *)&this[2].field_0x18 = 0;
  }
  return;
}

// InternalConstructor<UAnimNotifyState_Trail> @ 1474a8aa0

void __cdecl InternalConstructor<UAnimNotifyState_Trail>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined1 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(uint *)&this[2].field_0x4 = *(uint *)&this[2].field_0x4 | 1;
    *(undefined ***)this = &___7UAnimNotifyState_Trail__6B_;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined8 *)&this[1].field_0x18 = 0;
    this[1].field_0x20 = 0;
    *(undefined8 *)&this[1].field_0x24 = 0;
  }
  return;
}

// InternalConstructor<UAnimNotify_PauseClothingSimulation> @ 1474a8b00

void __cdecl InternalConstructor<UAnimNotify_PauseClothingSimulation>(FObjectInitializer *param_1)

{
  UObject *this;
  FObjectInitializer *pFVar1;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    pFVar1 = FObjectInitializer::Get();
    UObject::UObject(this,pFVar1);
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined ***)this = &___7UAnimNotify_PauseClothingSimulation__6B_;
    *(undefined1 *)(this + 1) = 0;
  }
  return;
}

// InternalConstructor<UAnimNotify_PlayParticleEffect> @ 1474a8b40

void __cdecl InternalConstructor<UAnimNotify_PlayParticleEffect>(FObjectInitializer *param_1)

{
  UObject *this;
  FObjectInitializer *pFVar1;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    pFVar1 = FObjectInitializer::Get();
    UObject::UObject(this,pFVar1);
    *(uint *)&this[4].field_0x10 = *(uint *)&this[4].field_0x10 | 1;
    *(undefined ***)this = &___7UAnimNotify_PlayParticleEffect__6B_;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined1 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined8 *)&this[4].field_0x14 = 0;
    *(undefined8 *)&this[2].field_0x20 = 0x3ff0000000000000;
    *(undefined8 *)(this + 3) = 0x3ff0000000000000;
    *(undefined8 *)&this[3].field_0x8 = 0x3ff0000000000000;
  }
  return;
}

// InternalConstructor<UAnimNotify_PlaySound> @ 1474a8bb0

void __cdecl InternalConstructor<UAnimNotify_PlaySound>(FObjectInitializer *param_1)

{
  UObject *this;
  FObjectInitializer *pFVar1;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    pFVar1 = FObjectInitializer::Get();
    UObject::UObject(this,pFVar1);
    *(undefined4 *)&this[1].field_0x18 = 0x3f800000;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined1 *)(this + 1) = 0;
    *(undefined ***)this = &___7UAnimNotify_PlaySound__6B_;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined8 *)&this[1].field_0x24 = 0;
    *(undefined4 *)&this[1].field_0x1c = 0x3f800000;
  }
  return;
}

// InternalConstructor<UAnimNotify_ResetClothingSimulation> @ 1474a8c10

void __cdecl InternalConstructor<UAnimNotify_ResetClothingSimulation>(FObjectInitializer *param_1)

{
  UObject *this;
  FObjectInitializer *pFVar1;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    pFVar1 = FObjectInitializer::Get();
    UObject::UObject(this,pFVar1);
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined ***)this = &___7UAnimNotify_ResetClothingSimulation__6B_;
    *(undefined1 *)(this + 1) = 0;
  }
  return;
}

// InternalConstructor<UAnimNotify_ResetDynamics> @ 1474a8c50

void __cdecl InternalConstructor<UAnimNotify_ResetDynamics>(FObjectInitializer *param_1)

{
  UObject *this;
  FObjectInitializer *pFVar1;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    pFVar1 = FObjectInitializer::Get();
    UObject::UObject(this,pFVar1);
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined ***)this = &___7UAnimNotify_ResetDynamics__6B_;
    *(undefined1 *)(this + 1) = 0;
  }
  return;
}

// InternalConstructor<UAnimNotify_ResumeClothingSimulation> @ 1474a8c90

void __cdecl InternalConstructor<UAnimNotify_ResumeClothingSimulation>(FObjectInitializer *param_1)

{
  UObject *this;
  FObjectInitializer *pFVar1;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    pFVar1 = FObjectInitializer::Get();
    UObject::UObject(this,pFVar1);
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined ***)this = &___7UAnimNotify_ResumeClothingSimulation__6B_;
    *(undefined1 *)(this + 1) = 0;
  }
  return;
}

// InternalConstructor<UAnimSequence> @ 1474a8cd0

void __cdecl InternalConstructor<UAnimSequence>(FObjectInitializer *param_1)

{
  UAnimSequenceBase *this;
  
  this = (UAnimSequenceBase *)param_1->Obj;
  if (this != (UAnimSequenceBase *)0x0) {
    UAnimSequenceBase::UAnimSequenceBase(this,param_1);
    *(undefined2 *)((longlong)&this[2]._padding_ + 4) = 1;
    this->_padding_ = (longlong)&UAnimSequence::_vftable__for__UObject__;
    this->_padding_ = (longlong)&UAnimSequence::_vftable__for__IInterface_AssetUserData__;
    this->_padding_ = (longlong)&UAnimSequence::_vftable__for__IInterface_PreviewMeshProvider__;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1].Notifies.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    this[1].Notifies.ArrayNum = 0;
    *(undefined8 *)&this[1].SequenceLength = 0;
    this[1].RawCurveData.FloatCurves.ArrayNum = 0;
    this[1].RawCurveData.FloatCurves.ArrayMax = 0;
    this[1].RateScale = 0.0;
    this[1].bLoop = false;
    *(undefined3 *)&this[1].field_0xad = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    *(undefined1 *)((longlong)&this[2]._padding_ + 2) = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    *(undefined4 *)&this[2]._padding_ = 0x1e;
    *(undefined4 *)((longlong)&this[2]._padding_ + 4) = 1;
    *(undefined2 *)&this[2]._padding_ = 0;
    *(undefined1 *)((longlong)&this[2]._padding_ + 6) = 0;
    *(undefined4 *)&this[2]._padding_ = 0;
    *(undefined4 *)((longlong)&this[2]._padding_ + 4) = 0x80;
    *(undefined4 *)&this[2]._padding_ = 0xffffffff;
    *(undefined4 *)((longlong)&this[2]._padding_ + 4) = 0;
    this[2].Notifies.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    this[2].Notifies.ArrayNum = 0;
    this->RateScale = 1.0;
  }
  return;
}

// InternalVTableHelperCtorCaller<UAnimMetaData> @ 1474a8e60

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UAnimMetaData>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UAnimMetaData::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UAnimMetaData__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UAnimMontage> @ 1474a8f10

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UAnimMontage>(FVTableHelper *param_1)

{
  float fVar1;
  UObject *pUVar2;
  UClass *pUVar3;
  UAnimCompositeBase *this;
  
  pUVar2 = GetTransientPackageAsObject();
  pUVar3 = UAnimMontage::GetPrivateStaticClass();
  this = (UAnimCompositeBase *)
         StaticAllocateObject
                   (pUVar3,pUVar2,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UAnimCompositeBase *)0x0) {
    UAnimCompositeBase::UAnimCompositeBase(this,param_1);
    fVar1 = __real_3e4ccccd;
    this->_padding_ = (longlong)&UAnimMontage::_vftable__for__UObject__;
    this->_padding_ = (longlong)&UAnimMontage::_vftable__for__IInterface_AssetUserData__;
    this->_padding_ = (longlong)&UAnimMontage::_vftable__for__IInterface_PreviewMeshProvider__;
    FAlphaBlend::FAlphaBlend((FAlphaBlend *)&this[1]._padding_,fVar1);
    FAlphaBlend::FAlphaBlend((FAlphaBlend *)&this[1]._padding_,__real_3e4ccccd);
    *(undefined8 *)((longlong)&this[1]._padding_ + 4) = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1].CommonTargetFrameRate.Numerator = 0;
    this[1].CommonTargetFrameRate.Denominator = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    *(undefined4 *)&this[2]._padding_ = 0x42700000;
    *(undefined4 *)((longlong)&this[2]._padding_ + 4) = 0x3c23d70a;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    *(undefined4 *)&this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UAnimNotify> @ 1474a90a0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UAnimNotify>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UAnimNotify::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UAnimNotify__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UAnimNotifyLibrary> @ 1474a9150

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UAnimNotifyLibrary>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UAnimNotifyLibrary::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UBlueprintFunctionLibrary::UBlueprintFunctionLibrary
              ((UBlueprintFunctionLibrary *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UAnimNotifyLibrary__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UAnimNotifyMirrorInspectionLibrary> @ 1474a9200

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UAnimNotifyMirrorInspectionLibrary>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UAnimNotifyMirrorInspectionLibrary::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UBlueprintFunctionLibrary::UBlueprintFunctionLibrary
              ((UBlueprintFunctionLibrary *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UAnimNotifyMirrorInspectionLibrary__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UAnimNotifyState> @ 1474a92b0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UAnimNotifyState>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UAnimNotifyState::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UAnimNotifyState__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UAnimNotifyStateMachineInspectionLibrary> @ 1474a9360

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UAnimNotifyStateMachineInspectionLibrary>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UAnimNotifyStateMachineInspectionLibrary::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UBlueprintFunctionLibrary::UBlueprintFunctionLibrary
              ((UBlueprintFunctionLibrary *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UAnimNotifyStateMachineInspectionLibrary__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UAnimNotifyState_DisableRootMotion> @ 1474a9410

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UAnimNotifyState_DisableRootMotion>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UAnimNotifyState_DisableRootMotion::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UAnimNotifyState_DisableRootMotion__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UAnimNotifyState_TimedParticleEffect> @ 1474a94c0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UAnimNotifyState_TimedParticleEffect>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UAnimNotifyState_TimedParticleEffect::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UAnimNotifyState_TimedParticleEffect__6B_;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UAnimNotifyState_Trail> @ 1474a9580

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UAnimNotifyState_Trail>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UAnimNotifyState_Trail::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UAnimNotifyState_Trail__6B_;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    *(undefined8 *)&pUVar1[1].field_0x18 = 0;
    *(undefined8 *)&pUVar1[1].field_0x24 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UAnimNotify_PauseClothingSimulation> @ 1474a9640

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UAnimNotify_PauseClothingSimulation>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UAnimNotify_PauseClothingSimulation::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UAnimNotify_PauseClothingSimulation__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UAnimNotify_PlayParticleEffect> @ 1474a96f0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UAnimNotify_PlayParticleEffect>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UAnimNotify_PlayParticleEffect::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UAnimNotify_PlayParticleEffect__6B_;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    *(undefined8 *)&pUVar1[4].field_0x14 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UAnimNotify_PlaySound> @ 1474a97b0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UAnimNotify_PlaySound>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UAnimNotify_PlaySound::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UAnimNotify_PlaySound__6B_;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    *(undefined8 *)&pUVar1[1].field_0x24 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UAnimNotify_ResetClothingSimulation> @ 1474a9870

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UAnimNotify_ResetClothingSimulation>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UAnimNotify_ResetClothingSimulation::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UAnimNotify_ResetClothingSimulation__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UAnimNotify_ResetDynamics> @ 1474a9920

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UAnimNotify_ResetDynamics>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UAnimNotify_ResetDynamics::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UAnimNotify_ResetDynamics__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UAnimNotify_ResumeClothingSimulation> @ 1474a99d0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UAnimNotify_ResumeClothingSimulation>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UAnimNotify_ResumeClothingSimulation::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UAnimNotify_ResumeClothingSimulation__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UAnimSequence> @ 1474a9a80

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UAnimSequence>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UAnimSequenceBase *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UAnimSequence::GetPrivateStaticClass();
  this = (UAnimSequenceBase *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UAnimSequenceBase *)0x0) {
    UAnimSequenceBase::UAnimSequenceBase(this,param_1);
    *(undefined1 *)((longlong)&this[2]._padding_ + 6) = 0;
    this->_padding_ = (longlong)&UAnimSequence::_vftable__for__UObject__;
    this->_padding_ = (longlong)&UAnimSequence::_vftable__for__IInterface_AssetUserData__;
    this->_padding_ = (longlong)&UAnimSequence::_vftable__for__IInterface_PreviewMeshProvider__;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1].Notifies.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    this[1].Notifies.ArrayNum = 0;
    *(undefined8 *)&this[1].SequenceLength = 0;
    this[1].RawCurveData.FloatCurves.ArrayNum = 0;
    this[1].RawCurveData.FloatCurves.ArrayMax = 0;
    this[1].RateScale = 0.0;
    this[1].bLoop = false;
    *(undefined3 *)&this[1].field_0xad = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    *(undefined4 *)&this[2]._padding_ = 0x1e;
    *(undefined4 *)((longlong)&this[2]._padding_ + 4) = 1;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    *(undefined4 *)&this[2]._padding_ = 0;
    *(undefined4 *)((longlong)&this[2]._padding_ + 4) = 0x80;
    *(undefined4 *)&this[2]._padding_ = 0xffffffff;
    *(undefined4 *)((longlong)&this[2]._padding_ + 4) = 0;
    this[2].Notifies.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    this[2].Notifies.ArrayNum = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// IntroSortInternal<FProperty_*,int,FIdentityFunctor,`FAnimNodeStructData::FAnimNodeStructData'::__l2::<lambda_1>_> @ 1474a9c60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<FProperty_*,int,FIdentityFunctor,_FAnimNodeStructData::FAnimNodeStructData_::__l2::<lambda_1>_>
          (FProperty **param_1,int param_2,FIdentityFunctor param_3,<lambda_1> param_4)

{
  FProperty **ppFVar1;
  FProperty *pFVar2;
  int iVar3;
  FProperty ***pppFVar4;
  FProperty **ppFVar5;
  FProperty **ppFVar6;
  FProperty **ppFVar7;
  FProperty **ppFVar8;
  FProperty **ppFVar9;
  float fVar10;
  undefined1 auStack_368 [48];
  FProperty **local_338;
  FProperty **local_328;
  FProperty **local_320;
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
    pppFVar4 = &local_328;
    do {
      ppFVar9 = pppFVar4[1];
      ppFVar5 = *pppFVar4;
      ppFVar1 = pppFVar4[2];
      iVar3 = (int)((longlong)ppFVar9 - (longlong)ppFVar5 >> 3) + 1;
      local_338._0_4_ = (int)ppFVar1;
      ppFVar8 = ppFVar5;
      if ((int)local_338 != 0) {
LAB_1474a9d10:
        if (8 < iVar3) {
          if (iVar3 < 0) {
            iVar3 = iVar3 + 1;
          }
          ppFVar6 = ppFVar9 + 1;
          pFVar2 = ppFVar8[iVar3 >> 1];
          ppFVar8[iVar3 >> 1] = *ppFVar8;
          *ppFVar8 = pFVar2;
          ppFVar5 = ppFVar8;
LAB_1474a9d40:
          ppFVar5 = ppFVar5 + 1;
          if (ppFVar5 <= ppFVar9) goto code_r0x0001474a9d49;
          goto LAB_1474a9d57;
        }
        for (; ppFVar5 = ppFVar8, ppFVar1 = ppFVar8, ppFVar8 < ppFVar9; ppFVar9 = ppFVar9 + -1) {
          while (ppFVar6 = ppFVar5, ppFVar1 = ppFVar1 + 1, ppFVar1 <= ppFVar9) {
            ppFVar5 = ppFVar1;
            if ((*ppFVar1)->Offset_Internal <= (*ppFVar6)->Offset_Internal) {
              ppFVar5 = ppFVar6;
            }
          }
          pFVar2 = *ppFVar6;
          *ppFVar6 = *ppFVar9;
          *ppFVar9 = pFVar2;
        }
        goto LAB_1474a9e14;
      }
LAB_1474a9e02:
      local_338 = ppFVar1;
      HeapSortInternal<FProperty_*,int,FIdentityFunctor,_FAnimNodeStructData::FAnimNodeStructData_::__l2::<lambda_1>_>
                (ppFVar5,iVar3,param_3,param_4);
LAB_1474a9e14:
      pppFVar4 = pppFVar4 + -3;
    } while (&local_328 <= pppFVar4);
  }
  return;
code_r0x0001474a9d49:
  if ((*ppFVar5)->Offset_Internal <= (*ppFVar8)->Offset_Internal) goto LAB_1474a9d40;
LAB_1474a9d57:
  do {
    ppFVar7 = ppFVar6;
    ppFVar6 = ppFVar7 + -1;
    if (ppFVar6 <= ppFVar8) break;
  } while ((*ppFVar8)->Offset_Internal <= (*ppFVar6)->Offset_Internal);
  if (ppFVar5 <= ppFVar6) {
    pFVar2 = *ppFVar5;
    *ppFVar5 = *ppFVar6;
    *ppFVar6 = pFVar2;
    goto LAB_1474a9d40;
  }
  pFVar2 = *ppFVar8;
  local_338._0_4_ = (int)local_338 + -1;
  *ppFVar8 = *ppFVar6;
  *ppFVar6 = pFVar2;
  if ((longlong)((longlong)ppFVar6 + (-8 - (longlong)ppFVar8) & 0xfffffffffffffff8U) <
      (longlong)((longlong)ppFVar9 - (longlong)ppFVar5 & 0xfffffffffffffff8U)) {
    if (ppFVar5 < ppFVar9) {
      *pppFVar4 = ppFVar5;
      pppFVar4[1] = ppFVar9;
      *(int *)(pppFVar4 + 2) = (int)local_338;
      pppFVar4 = pppFVar4 + 3;
    }
    if (ppFVar6 <= ppFVar8 + 1) goto LAB_1474a9e14;
    ppFVar9 = ppFVar7 + -2;
    ppFVar5 = ppFVar8;
  }
  else {
    if (ppFVar8 + 1 < ppFVar6) {
      *pppFVar4 = ppFVar8;
      pppFVar4[1] = ppFVar7 + -2;
      *(int *)(pppFVar4 + 2) = (int)local_338;
      pppFVar4 = pppFVar4 + 3;
    }
    if (ppFVar9 <= ppFVar5) goto LAB_1474a9e14;
  }
  iVar3 = (int)((longlong)ppFVar9 - (longlong)ppFVar5 >> 3) + 1;
  ppFVar8 = ppFVar5;
  if ((int)local_338 == 0) goto LAB_1474a9e02;
  goto LAB_1474a9d10;
}

// IntroSortInternal<FAnimSyncMarker,int,FIdentityFunctor,TDereferenceWrapper<FAnimSyncMarker,TLess<void>_>_> @ 1474a9ec0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<FAnimSyncMarker,int,FIdentityFunctor,TDereferenceWrapper<FAnimSyncMarker,TLess<void>_>_>
          (FAnimSyncMarker *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<FAnimSyncMarker,TLess<void>_> param_4)

{
  FAnimSyncMarker *pFVar1;
  FName FVar2;
  longlong lVar3;
  FAnimSyncMarker *pFVar4;
  int iVar5;
  FAnimSyncMarker *pFVar6;
  FAnimSyncMarker *pFVar7;
  FAnimSyncMarker *pFVar8;
  FAnimSyncMarker *pFVar9;
  FAnimSyncMarker *pFVar10;
  FAnimSyncMarker **ppFVar11;
  float fVar12;
  undefined1 auStack_378 [48];
  FAnimSyncMarker *local_348;
  FAnimSyncMarker *local_338;
  FAnimSyncMarker *local_330;
  undefined4 local_328;
  undefined1 local_320 [744];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_378;
  if (1 < param_2) {
    local_330 = param_1 + (longlong)param_2 + -1;
    local_338 = param_1;
    fVar12 = logf((float)param_2 * (float)param_2);
    local_328 = (undefined4)(longlong)fVar12;
    memset(local_320,0,0x2e8);
    ppFVar11 = &local_338;
    do {
      pFVar6 = ppFVar11[1];
      pFVar7 = *ppFVar11;
      pFVar1 = ppFVar11[2];
      local_348._0_4_ = (int)pFVar1;
      iVar5 = (int)(((longlong)pFVar6 - (longlong)pFVar7) / 0xc) + 1;
      pFVar10 = pFVar7;
      if ((int)local_348 != 0) {
LAB_1474a9f90:
        if (8 < iVar5) {
          pFVar4 = pFVar6 + 1;
          iVar5 = iVar5 / 2;
          FVar2 = pFVar10[iVar5].MarkerName;
          fVar12 = pFVar10[iVar5].Time;
          pFVar10[iVar5].MarkerName = pFVar10->MarkerName;
          pFVar10[iVar5].Time = pFVar10->Time;
          pFVar10->MarkerName = FVar2;
          pFVar10->Time = fVar12;
          pFVar7 = pFVar10;
LAB_1474a9fd6:
          pFVar8 = pFVar7;
          pFVar7 = pFVar8 + 1;
          if (pFVar7 <= pFVar6) goto code_r0x0001474a9fdf;
          goto LAB_1474a9ff0;
        }
        if (pFVar10 < pFVar6) {
          pFVar1 = pFVar10 + 1;
          do {
            pFVar7 = pFVar10;
            if (pFVar1 <= pFVar6) {
              pFVar4 = pFVar1;
              if (0x2f < (ulonglong)((longlong)pFVar6 + (0xc - (longlong)pFVar1))) {
                do {
                  if (pFVar7->Time < pFVar4->Time) {
                    pFVar7 = pFVar4;
                  }
                  if (pFVar7->Time <= pFVar4[1].Time && pFVar4[1].Time != pFVar7->Time) {
                    pFVar7 = pFVar4 + 1;
                  }
                  if (pFVar7->Time <= pFVar4[2].Time && pFVar4[2].Time != pFVar7->Time) {
                    pFVar7 = pFVar4 + 2;
                  }
                  if (pFVar7->Time <= pFVar4[3].Time && pFVar4[3].Time != pFVar7->Time) {
                    pFVar7 = pFVar4 + 3;
                  }
                  pFVar4 = pFVar4 + 4;
                } while (pFVar4 <= pFVar6 + -3);
              }
              for (; pFVar4 <= pFVar6; pFVar4 = pFVar4 + 1) {
                if (pFVar7->Time < pFVar4->Time) {
                  pFVar7 = pFVar4;
                }
              }
            }
            FVar2 = pFVar7->MarkerName;
            fVar12 = pFVar7->Time;
            pFVar4 = pFVar6 + -1;
            pFVar7->MarkerName = pFVar6->MarkerName;
            pFVar7->Time = pFVar6->Time;
            pFVar6->MarkerName = FVar2;
            pFVar6->Time = fVar12;
            pFVar6 = pFVar4;
          } while (pFVar10 < pFVar4);
        }
        goto LAB_1474aa109;
      }
LAB_1474aa0fa:
      local_348 = pFVar1;
      HeapSortInternal<FAnimSyncMarker,int,FIdentityFunctor,TDereferenceWrapper<FAnimSyncMarker,TLess<void>_>_>
                (pFVar7,iVar5,param_3,param_4);
LAB_1474aa109:
      ppFVar11 = ppFVar11 + -3;
    } while (&local_338 <= ppFVar11);
  }
  return;
code_r0x0001474a9fdf:
  if (pFVar8[1].Time < pFVar10->Time || pFVar8[1].Time == pFVar10->Time) goto LAB_1474a9fd6;
LAB_1474a9ff0:
  do {
    pFVar9 = pFVar4;
    pFVar4 = pFVar9 + -1;
    if (pFVar4 <= pFVar10) break;
  } while (pFVar10->Time < pFVar9[-1].Time || pFVar10->Time == pFVar9[-1].Time);
  if (pFVar7 <= pFVar4) {
    FVar2 = pFVar7->MarkerName;
    fVar12 = pFVar8[1].Time;
    pFVar7->MarkerName = pFVar4->MarkerName;
    pFVar8[1].Time = pFVar9[-1].Time;
    pFVar4->MarkerName = FVar2;
    pFVar9[-1].Time = fVar12;
    goto LAB_1474a9fd6;
  }
  fVar12 = pFVar10->Time;
  local_348._0_4_ = (int)local_348 + -1;
  FVar2 = pFVar10->MarkerName;
  pFVar10->MarkerName = pFVar4->MarkerName;
  pFVar10->Time = pFVar9[-1].Time;
  pFVar4->MarkerName = FVar2;
  pFVar9[-1].Time = fVar12;
  lVar3 = (longlong)pFVar4 + (-0xc - (longlong)pFVar10);
  lVar3 = lVar3 / 6 + (lVar3 >> 0x3f);
  if ((lVar3 >> 1) - (lVar3 >> 0x3f) < ((longlong)pFVar6 - (longlong)pFVar7) / 0xc) {
    if (pFVar7 < pFVar6) {
      *ppFVar11 = pFVar7;
      ppFVar11[1] = pFVar6;
      *(int *)(ppFVar11 + 2) = (int)local_348;
      ppFVar11 = ppFVar11 + 3;
    }
    if (pFVar4 <= pFVar10 + 1) goto LAB_1474aa109;
    pFVar6 = pFVar9 + -2;
    pFVar7 = pFVar10;
  }
  else {
    if (pFVar10 + 1 < pFVar4) {
      *ppFVar11 = pFVar10;
      ppFVar11[1] = pFVar9 + -2;
      *(int *)(ppFVar11 + 2) = (int)local_348;
      ppFVar11 = ppFVar11 + 3;
    }
    if (pFVar6 <= pFVar7) goto LAB_1474aa109;
  }
  iVar5 = (int)(((longlong)pFVar6 - (longlong)pFVar7) / 0xc) + 1;
  pFVar10 = pFVar7;
  if ((int)local_348 == 0) goto LAB_1474aa0fa;
  goto LAB_1474a9f90;
}

// IntroSortInternal<FBranchingPointMarker,int,FIdentityFunctor,TDereferenceWrapper<FBranchingPointMarker,`UAnimMontage::RefreshBranchingPointMarkers'::__l13::FCompareNotifyTickMarkersTime>_> @ 1474aa230

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<FBranchingPointMarker,int,FIdentityFunctor,TDereferenceWrapper<FBranchingPointMarker,_UAnimMontage::RefreshBranchingPointMarkers_::__l13::FCompareNotifyTickMarkersTime>_>
          (FBranchingPointMarker *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<FBranchingPointMarker,_private:_void___cdecl_UAnimMontage::RefreshBranchingPointMarkers(void)_::_13_::FCompareNotifyTickMarkersTime>
          param_4)

{
  undefined4 uVar1;
  FBranchingPointMarker *pFVar2;
  undefined4 uVar3;
  undefined3 uVar4;
  int iVar5;
  float fVar6;
  TEnumAsByte<EAnimNotifyEventType::Type> TVar7;
  undefined3 uVar8;
  longlong lVar9;
  FBranchingPointMarker *pFVar10;
  int iVar11;
  FBranchingPointMarker *pFVar12;
  FBranchingPointMarker *pFVar13;
  FBranchingPointMarker *pFVar14;
  FBranchingPointMarker *pFVar15;
  FBranchingPointMarker *pFVar16;
  FBranchingPointMarker **ppFVar17;
  float fVar18;
  undefined1 auStack_378 [48];
  FBranchingPointMarker *local_348;
  FBranchingPointMarker *local_338;
  FBranchingPointMarker *local_330;
  undefined4 local_328;
  undefined1 local_320 [744];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_378;
  if (1 < param_2) {
    local_330 = param_1 + (longlong)param_2 + -1;
    local_338 = param_1;
    fVar18 = logf((float)param_2 * (float)param_2);
    local_328 = (undefined4)(longlong)fVar18;
    memset(local_320,0,0x2e8);
    ppFVar17 = &local_338;
    do {
      pFVar12 = ppFVar17[1];
      pFVar13 = *ppFVar17;
      pFVar2 = ppFVar17[2];
      local_348._0_4_ = (int)pFVar2;
      iVar11 = (int)(((longlong)pFVar12 - (longlong)pFVar13) / 0xc) + 1;
      pFVar16 = pFVar13;
      if ((int)local_348 != 0) {
LAB_1474aa300:
        if (8 < iVar11) {
          fVar18 = pFVar16->TriggerTime;
          pFVar10 = pFVar12 + 1;
          iVar11 = iVar11 / 2;
          iVar5 = pFVar16[iVar11].NotifyIndex;
          fVar6 = pFVar16[iVar11].TriggerTime;
          TVar7.Value = pFVar16[iVar11].NotifyEventType.Value;
          uVar8 = *(undefined3 *)&pFVar16[iVar11].field_0x9;
          pFVar16[iVar11].NotifyIndex = pFVar16->NotifyIndex;
          pFVar16[iVar11].TriggerTime = fVar18;
          uVar4 = *(undefined3 *)&pFVar16->field_0x9;
          pFVar16[iVar11].NotifyEventType =
               (TEnumAsByte<EAnimNotifyEventType::Type>)(pFVar16->NotifyEventType).Value;
          *(undefined3 *)&pFVar16[iVar11].field_0x9 = uVar4;
          pFVar16->NotifyIndex = iVar5;
          pFVar16->TriggerTime = fVar6;
          pFVar16->NotifyEventType = (TEnumAsByte<EAnimNotifyEventType::Type>)TVar7.Value;
          *(undefined3 *)&pFVar16->field_0x9 = uVar8;
          pFVar13 = pFVar16;
LAB_1474aa346:
          pFVar14 = pFVar13;
          pFVar13 = pFVar14 + 1;
          if (pFVar13 <= pFVar12) goto code_r0x0001474aa34f;
          goto LAB_1474aa360;
        }
        if (pFVar16 < pFVar12) {
          pFVar2 = pFVar16 + 1;
          do {
            pFVar13 = pFVar16;
            if (pFVar2 <= pFVar12) {
              pFVar10 = pFVar2;
              if (0x2f < (ulonglong)((longlong)pFVar12 + (0xc - (longlong)pFVar2))) {
                do {
                  if (pFVar13->TriggerTime < pFVar10->TriggerTime) {
                    pFVar13 = pFVar10;
                  }
                  if (pFVar13->TriggerTime <= pFVar10[1].TriggerTime &&
                      pFVar10[1].TriggerTime != pFVar13->TriggerTime) {
                    pFVar13 = pFVar10 + 1;
                  }
                  if (pFVar13->TriggerTime <= pFVar10[2].TriggerTime &&
                      pFVar10[2].TriggerTime != pFVar13->TriggerTime) {
                    pFVar13 = pFVar10 + 2;
                  }
                  if (pFVar13->TriggerTime <= pFVar10[3].TriggerTime &&
                      pFVar10[3].TriggerTime != pFVar13->TriggerTime) {
                    pFVar13 = pFVar10 + 3;
                  }
                  pFVar10 = pFVar10 + 4;
                } while (pFVar10 <= pFVar12 + -3);
              }
              for (; pFVar10 <= pFVar12; pFVar10 = pFVar10 + 1) {
                if (pFVar13->TriggerTime < pFVar10->TriggerTime) {
                  pFVar13 = pFVar10;
                }
              }
            }
            iVar11 = pFVar13->NotifyIndex;
            fVar6 = pFVar13->TriggerTime;
            TVar7.Value = (pFVar13->NotifyEventType).Value;
            uVar8 = *(undefined3 *)&pFVar13->field_0x9;
            pFVar10 = pFVar12 + -1;
            fVar18 = pFVar12->TriggerTime;
            pFVar13->NotifyIndex = pFVar12->NotifyIndex;
            pFVar13->TriggerTime = fVar18;
            uVar4 = *(undefined3 *)&pFVar12->field_0x9;
            pFVar13->NotifyEventType =
                 (TEnumAsByte<EAnimNotifyEventType::Type>)(pFVar12->NotifyEventType).Value;
            *(undefined3 *)&pFVar13->field_0x9 = uVar4;
            pFVar12->NotifyIndex = iVar11;
            pFVar12->TriggerTime = fVar6;
            pFVar12->NotifyEventType = (TEnumAsByte<EAnimNotifyEventType::Type>)TVar7.Value;
            *(undefined3 *)&pFVar12->field_0x9 = uVar8;
            pFVar12 = pFVar10;
          } while (pFVar16 < pFVar10);
        }
        goto LAB_1474aa479;
      }
LAB_1474aa46a:
      local_348 = pFVar2;
      HeapSortInternal<FBranchingPointMarker,int,FIdentityFunctor,TDereferenceWrapper<FBranchingPointMarker,_UAnimMontage::RefreshBranchingPointMarkers_::__l13::FCompareNotifyTickMarkersTime>_>
                (pFVar13,iVar11,param_3,param_4);
LAB_1474aa479:
      ppFVar17 = ppFVar17 + -3;
    } while (&local_338 <= ppFVar17);
  }
  return;
code_r0x0001474aa34f:
  if (pFVar14[1].TriggerTime < pFVar16->TriggerTime ||
      pFVar14[1].TriggerTime == pFVar16->TriggerTime) goto LAB_1474aa346;
LAB_1474aa360:
  do {
    pFVar15 = pFVar10;
    pFVar10 = pFVar15 + -1;
    if (pFVar10 <= pFVar16) break;
  } while (pFVar16->TriggerTime < pFVar15[-1].TriggerTime ||
           pFVar16->TriggerTime == pFVar15[-1].TriggerTime);
  uVar1 = pFVar10->NotifyIndex;
  uVar3 = pFVar10->TriggerTime;
  if (pFVar13 <= pFVar10) {
    iVar11 = pFVar13->NotifyIndex;
    fVar18 = pFVar13->TriggerTime;
    TVar7.Value = pFVar14[1].NotifyEventType.Value;
    uVar8 = *(undefined3 *)&pFVar14[1].field_0x9;
    pFVar13->NotifyIndex = uVar1;
    pFVar13->TriggerTime = (float)uVar3;
    uVar4 = *(undefined3 *)&pFVar15[-1].field_0x9;
    pFVar14[1].NotifyEventType =
         (TEnumAsByte<EAnimNotifyEventType::Type>)pFVar15[-1].NotifyEventType.Value;
    *(undefined3 *)&pFVar14[1].field_0x9 = uVar4;
    pFVar10->NotifyIndex = iVar11;
    pFVar10->TriggerTime = fVar18;
    pFVar15[-1].NotifyEventType = (TEnumAsByte<EAnimNotifyEventType::Type>)TVar7.Value;
    *(undefined3 *)&pFVar15[-1].field_0x9 = uVar8;
    goto LAB_1474aa346;
  }
  TVar7.Value = (pFVar16->NotifyEventType).Value;
  uVar8 = *(undefined3 *)&pFVar16->field_0x9;
  local_348._0_4_ = (int)local_348 + -1;
  iVar11 = pFVar16->NotifyIndex;
  fVar18 = pFVar16->TriggerTime;
  pFVar16->NotifyIndex = uVar1;
  pFVar16->TriggerTime = (float)uVar3;
  uVar4 = *(undefined3 *)&pFVar15[-1].field_0x9;
  pFVar16->NotifyEventType =
       (TEnumAsByte<EAnimNotifyEventType::Type>)pFVar15[-1].NotifyEventType.Value;
  *(undefined3 *)&pFVar16->field_0x9 = uVar4;
  pFVar10->NotifyIndex = iVar11;
  pFVar10->TriggerTime = fVar18;
  pFVar15[-1].NotifyEventType = (TEnumAsByte<EAnimNotifyEventType::Type>)TVar7.Value;
  *(undefined3 *)&pFVar15[-1].field_0x9 = uVar8;
  lVar9 = (longlong)pFVar10 + (-0xc - (longlong)pFVar16);
  lVar9 = lVar9 / 6 + (lVar9 >> 0x3f);
  if ((lVar9 >> 1) - (lVar9 >> 0x3f) < ((longlong)pFVar12 - (longlong)pFVar13) / 0xc) {
    if (pFVar13 < pFVar12) {
      *ppFVar17 = pFVar13;
      ppFVar17[1] = pFVar12;
      *(int *)(ppFVar17 + 2) = (int)local_348;
      ppFVar17 = ppFVar17 + 3;
    }
    if (pFVar10 <= pFVar16 + 1) goto LAB_1474aa479;
    pFVar12 = pFVar15 + -2;
    pFVar13 = pFVar16;
  }
  else {
    if (pFVar16 + 1 < pFVar10) {
      *ppFVar17 = pFVar16;
      ppFVar17[1] = pFVar15 + -2;
      *(int *)(ppFVar17 + 2) = (int)local_348;
      ppFVar17 = ppFVar17 + 3;
    }
    if (pFVar12 <= pFVar13) goto LAB_1474aa479;
  }
  iVar11 = (int)(((longlong)pFVar12 - (longlong)pFVar13) / 0xc) + 1;
  pFVar16 = pFVar13;
  if ((int)local_348 == 0) goto LAB_1474aa46a;
  goto LAB_1474aa300;
}

// IntroSortInternal<UE::Anim::FCurveElement,int,FIdentityFunctor,UE::Anim::TNamedValueArray<TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>,UE::Anim::FCurveElement>::FElementSortPredicate> @ 1474aa5a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<UE::Anim::FCurveElement,int,FIdentityFunctor,UE::Anim::TNamedValueArray<TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>,UE::Anim::FCurveElement>::FElementSortPredicate>
          (FCurveElement *param_1,int param_2,FIdentityFunctor param_3,FElementSortPredicate param_4
          )

{
  FCurveElement *pFVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  undefined3 uVar4;
  FName FVar5;
  ECurveElementFlags EVar6;
  undefined3 uVar7;
  float fVar8;
  ECurveElementFlags EVar9;
  undefined3 uVar10;
  int iVar11;
  FCurveElement *pFVar12;
  FCurveElement **ppFVar13;
  FCurveElement *pFVar14;
  FCurveElement *pFVar15;
  FCurveElement *pFVar16;
  FCurveElement *pFVar17;
  FCurveElement *pFVar18;
  float fVar19;
  undefined1 auStack_368 [48];
  FCurveElement *local_338;
  FCurveElement *local_328;
  FCurveElement *local_320;
  undefined4 local_318;
  undefined1 local_310 [744];
  ulonglong local_28;
  
  if (1 < param_2) {
    local_28 = __security_cookie.value ^ (ulonglong)auStack_368;
    local_320 = param_1 + (longlong)param_2 + -1;
    local_328 = param_1;
    fVar19 = logf((float)param_2 * (float)param_2);
    local_318 = (undefined4)(longlong)fVar19;
    memset(local_310,0,0x2e8);
    ppFVar13 = &local_328;
    do {
      pFVar16 = ppFVar13[1];
      pFVar18 = *ppFVar13;
      pFVar1 = ppFVar13[2];
      iVar11 = (int)((longlong)pFVar16 - (longlong)pFVar18 >> 4) + 1;
      local_338._0_4_ = (int)pFVar1;
      pFVar17 = pFVar18;
      if ((int)local_338 != 0) {
LAB_1474aa650:
        if (8 < iVar11) {
          fVar19 = pFVar17->Value;
          EVar6 = pFVar17->Flags;
          uVar7 = *(undefined3 *)&pFVar17->field_0xd;
          pFVar14 = pFVar16 + 1;
          pFVar18 = pFVar17 + iVar11 / 2;
          FVar5 = pFVar18->Name;
          fVar8 = pFVar18->Value;
          EVar9 = pFVar18->Flags;
          uVar10 = *(undefined3 *)&pFVar18->field_0xd;
          pFVar18 = pFVar17 + iVar11 / 2;
          pFVar18->Name = pFVar17->Name;
          pFVar18->Value = fVar19;
          pFVar18->Flags = EVar6;
          *(undefined3 *)&pFVar18->field_0xd = uVar7;
          pFVar17->Name = FVar5;
          pFVar17->Value = fVar8;
          pFVar17->Flags = EVar9;
          *(undefined3 *)&pFVar17->field_0xd = uVar10;
          pFVar18 = pFVar17;
LAB_1474aa680:
          pFVar12 = pFVar18;
          pFVar18 = pFVar12 + 1;
          if (pFVar18 <= pFVar16) goto code_r0x0001474aa689;
          goto LAB_1474aa6a0;
        }
        for (; pFVar18 = pFVar17, pFVar1 = pFVar17, pFVar17 < pFVar16; pFVar16 = pFVar16 + -1) {
          while (pFVar1 = pFVar1 + 1, pFVar1 <= pFVar16) {
            iVar11 = (pFVar18->Name).ComparisonIndex.Value - (pFVar1->Name).ComparisonIndex.Value;
            if (iVar11 == 0) {
              iVar11 = (pFVar18->Name).Number - (pFVar1->Name).Number;
            }
            if (iVar11 < 0) {
              pFVar18 = pFVar1;
            }
          }
          FVar5 = pFVar18->Name;
          fVar8 = pFVar18->Value;
          EVar9 = pFVar18->Flags;
          uVar10 = *(undefined3 *)&pFVar18->field_0xd;
          fVar19 = pFVar16->Value;
          EVar6 = pFVar16->Flags;
          uVar7 = *(undefined3 *)&pFVar16->field_0xd;
          pFVar18->Name = pFVar16->Name;
          pFVar18->Value = fVar19;
          pFVar18->Flags = EVar6;
          *(undefined3 *)&pFVar18->field_0xd = uVar7;
          pFVar16->Name = FVar5;
          pFVar16->Value = fVar8;
          pFVar16->Flags = EVar9;
          *(undefined3 *)&pFVar16->field_0xd = uVar10;
        }
        goto LAB_1474aa76f;
      }
LAB_1474aa75d:
      local_338 = pFVar1;
      HeapSortInternal<UE::Anim::FCurveElement,int,FIdentityFunctor,UE::Anim::TNamedValueArray<TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>,UE::Anim::FCurveElement>::FElementSortPredicate>
                (pFVar18,iVar11,param_3,param_4);
LAB_1474aa76f:
      ppFVar13 = ppFVar13 + -3;
    } while (&local_328 <= ppFVar13);
  }
  return;
code_r0x0001474aa689:
  iVar11 = (pFVar17->Name).ComparisonIndex.Value - (pFVar18->Name).ComparisonIndex.Value;
  if (iVar11 == 0) {
    iVar11 = (pFVar17->Name).Number - pFVar12[1].Name.Number;
  }
  if (-1 < iVar11) goto LAB_1474aa680;
LAB_1474aa6a0:
  do {
    pFVar15 = pFVar14;
    pFVar14 = pFVar15 + -1;
    if (pFVar14 <= pFVar17) break;
    iVar11 = (pFVar14->Name).ComparisonIndex.Value - (pFVar17->Name).ComparisonIndex.Value;
    if (iVar11 == 0) {
      iVar11 = pFVar15[-1].Name.Number - (pFVar17->Name).Number;
    }
  } while (-1 < iVar11);
  uVar2 = pFVar15[-1].Value;
  uVar3 = pFVar15[-1].Flags;
  uVar4 = *(undefined3 *)&pFVar15[-1].field_0xd;
  if (pFVar18 <= pFVar14) {
    FVar5 = pFVar18->Name;
    fVar19 = pFVar12[1].Value;
    EVar6 = pFVar12[1].Flags;
    uVar7 = *(undefined3 *)&pFVar12[1].field_0xd;
    pFVar18->Name = pFVar14->Name;
    pFVar12[1].Value = (float)uVar2;
    pFVar12[1].Flags = uVar3;
    *(undefined3 *)&pFVar12[1].field_0xd = uVar4;
    pFVar14->Name = FVar5;
    pFVar15[-1].Value = fVar19;
    pFVar15[-1].Flags = EVar6;
    *(undefined3 *)&pFVar15[-1].field_0xd = uVar7;
    goto LAB_1474aa680;
  }
  FVar5 = pFVar17->Name;
  fVar19 = pFVar17->Value;
  EVar6 = pFVar17->Flags;
  uVar7 = *(undefined3 *)&pFVar17->field_0xd;
  local_338._0_4_ = (int)local_338 + -1;
  pFVar17->Name = pFVar14->Name;
  pFVar17->Value = (float)uVar2;
  pFVar17->Flags = uVar3;
  *(undefined3 *)&pFVar17->field_0xd = uVar4;
  pFVar14->Name = FVar5;
  pFVar15[-1].Value = fVar19;
  pFVar15[-1].Flags = EVar6;
  *(undefined3 *)&pFVar15[-1].field_0xd = uVar7;
  if ((longlong)((longlong)pFVar14 + (-0x10 - (longlong)pFVar17) & 0xfffffffffffffff0U) <
      (longlong)((longlong)pFVar16 - (longlong)pFVar18 & 0xfffffffffffffff0U)) {
    if (pFVar18 < pFVar16) {
      *ppFVar13 = pFVar18;
      ppFVar13[1] = pFVar16;
      *(int *)(ppFVar13 + 2) = (int)local_338;
      ppFVar13 = ppFVar13 + 3;
    }
    if (pFVar14 <= pFVar17 + 1) goto LAB_1474aa76f;
    pFVar16 = pFVar15 + -2;
    pFVar18 = pFVar17;
  }
  else {
    if (pFVar17 + 1 < pFVar14) {
      *ppFVar13 = pFVar17;
      ppFVar13[1] = pFVar15 + -2;
      *(int *)(ppFVar13 + 2) = (int)local_338;
      ppFVar13 = ppFVar13 + 3;
    }
    if (pFVar16 <= pFVar18) goto LAB_1474aa76f;
  }
  iVar11 = (int)((longlong)pFVar16 - (longlong)pFVar18 >> 4) + 1;
  pFVar17 = pFVar18;
  if ((int)local_338 == 0) goto LAB_1474aa75d;
  goto LAB_1474aa650;
}

// IntroSortInternal<FAnimNode_DeadBlending::FDeadBlendingCurveElement,int,FIdentityFunctor,UE::Anim::TNamedValueArray<TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>,FAnimNode_DeadBlending::FDeadBlendingCurveElement>::FElementSortPredicate> @ 1474aa810

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<FAnimNode_DeadBlending::FDeadBlendingCurveElement,int,FIdentityFunctor,UE::Anim::TNamedValueArray<TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>,FAnimNode_DeadBlending::FDeadBlendingCurveElement>::FElementSortPredicate>
          (FDeadBlendingCurveElement *param_1,int param_2,FIdentityFunctor param_3,
          FElementSortPredicate param_4)

{
  FDeadBlendingCurveElement *pFVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  float fVar5;
  float fVar6;
  longlong lVar7;
  int iVar8;
  FDeadBlendingCurveElement *pFVar9;
  FDeadBlendingCurveElement *pFVar10;
  FDeadBlendingCurveElement *pFVar11;
  FDeadBlendingCurveElement *pFVar12;
  FDeadBlendingCurveElement *pFVar13;
  FDeadBlendingCurveElement *pFVar14;
  FDeadBlendingCurveElement **ppFVar15;
  float fVar16;
  undefined1 auStack_388 [48];
  FDeadBlendingCurveElement *local_358;
  FDeadBlendingCurveElement *local_348;
  FDeadBlendingCurveElement *local_340;
  undefined4 local_338;
  undefined1 local_330 [744];
  ulonglong local_48;
  
  if (1 < param_2) {
    local_48 = __security_cookie.value ^ (ulonglong)auStack_388;
    local_340 = param_1 + (longlong)param_2 + -1;
    local_348 = param_1;
    fVar16 = logf((float)param_2 * (float)param_2);
    local_338 = (undefined4)(longlong)fVar16;
    memset(local_330,0,0x2e8);
    ppFVar15 = &local_348;
    do {
      pFVar9 = ppFVar15[1];
      pFVar14 = *ppFVar15;
      pFVar1 = ppFVar15[2];
      local_358._0_4_ = (int)pFVar1;
      iVar8 = (int)(((longlong)pFVar9 - (longlong)pFVar14) / 0x18) + 1;
      pFVar13 = pFVar14;
      if ((int)local_358 != 0) {
LAB_1474aa8f0:
        if (8 < iVar8) {
          lVar2 = pFVar13->_padding_;
          pFVar11 = pFVar9 + 1;
          iVar8 = iVar8 / 2;
          lVar3 = pFVar13[iVar8]._padding_;
          lVar4 = pFVar13[iVar8]._padding_;
          fVar5 = pFVar13[iVar8].Velocity;
          fVar6 = pFVar13[iVar8].HalfLife;
          pFVar13[iVar8]._padding_ = pFVar13->_padding_;
          pFVar13[iVar8]._padding_ = lVar2;
          fVar16 = pFVar13->HalfLife;
          pFVar13[iVar8].Velocity = pFVar13->Velocity;
          pFVar13[iVar8].HalfLife = fVar16;
          pFVar13->_padding_ = lVar3;
          pFVar13->_padding_ = lVar4;
          pFVar13->Velocity = fVar5;
          pFVar13->HalfLife = fVar6;
          pFVar14 = pFVar13;
LAB_1474aa940:
          pFVar10 = pFVar14;
          pFVar14 = pFVar10 + 1;
          if (pFVar14 <= pFVar9) goto code_r0x0001474aa949;
          goto LAB_1474aa960;
        }
        for (; pFVar1 = pFVar13, pFVar14 = pFVar13, pFVar13 < pFVar9; pFVar9 = pFVar9 + -1) {
          while (pFVar11 = pFVar14 + 1, pFVar11 <= pFVar9) {
            iVar8 = (int)pFVar1->_padding_ - (int)pFVar11->_padding_;
            if (iVar8 == 0) {
              iVar8 = *(int *)((longlong)&pFVar1->_padding_ + 4) -
                      *(int *)((longlong)&pFVar14[1]._padding_ + 4);
            }
            pFVar14 = pFVar11;
            if (iVar8 < 0) {
              pFVar1 = pFVar11;
            }
          }
          lVar2 = pFVar1->_padding_;
          lVar3 = pFVar1->_padding_;
          fVar5 = pFVar1->Velocity;
          fVar6 = pFVar1->HalfLife;
          lVar4 = pFVar9->_padding_;
          pFVar1->_padding_ = pFVar9->_padding_;
          pFVar1->_padding_ = lVar4;
          fVar16 = pFVar9->HalfLife;
          pFVar1->Velocity = pFVar9->Velocity;
          pFVar1->HalfLife = fVar16;
          pFVar9->_padding_ = lVar2;
          pFVar9->_padding_ = lVar3;
          pFVar9->Velocity = fVar5;
          pFVar9->HalfLife = fVar6;
        }
        goto LAB_1474aaa90;
      }
LAB_1474aaa80:
      local_358 = pFVar1;
      HeapSortInternal<FAnimNode_DeadBlending::FDeadBlendingCurveElement,int,FIdentityFunctor,UE::Anim::TNamedValueArray<TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>,FAnimNode_DeadBlending::FDeadBlendingCurveElement>::FElementSortPredicate>
                (pFVar14,iVar8,param_3,param_4);
LAB_1474aaa90:
      ppFVar15 = ppFVar15 + -3;
    } while (&local_348 <= ppFVar15);
  }
  return;
code_r0x0001474aa949:
  iVar8 = (int)pFVar13->_padding_ - (int)pFVar14->_padding_;
  if (iVar8 == 0) {
    iVar8 = *(int *)((longlong)&pFVar13->_padding_ + 4) -
            *(int *)((longlong)&pFVar10[1]._padding_ + 4);
  }
  if (-1 < iVar8) goto LAB_1474aa940;
LAB_1474aa960:
  do {
    pFVar12 = pFVar11;
    pFVar11 = pFVar12 + -1;
    if (pFVar11 <= pFVar13) break;
    iVar8 = (int)pFVar11->_padding_ - (int)pFVar13->_padding_;
    if (iVar8 == 0) {
      iVar8 = *(int *)((longlong)&pFVar12[-1]._padding_ + 4) -
              *(int *)((longlong)&pFVar13->_padding_ + 4);
    }
  } while (-1 < iVar8);
  lVar2 = pFVar12[-1]._padding_;
  if (pFVar14 <= pFVar11) {
    lVar3 = pFVar14->_padding_;
    lVar4 = pFVar10[1]._padding_;
    fVar5 = pFVar10[1].Velocity;
    fVar6 = pFVar10[1].HalfLife;
    pFVar14->_padding_ = pFVar11->_padding_;
    pFVar10[1]._padding_ = lVar2;
    fVar16 = pFVar12[-1].HalfLife;
    pFVar10[1].Velocity = pFVar12[-1].Velocity;
    pFVar10[1].HalfLife = fVar16;
    pFVar11->_padding_ = lVar3;
    pFVar12[-1]._padding_ = lVar4;
    pFVar12[-1].Velocity = fVar5;
    pFVar12[-1].HalfLife = fVar6;
    goto LAB_1474aa940;
  }
  lVar3 = pFVar13->_padding_;
  lVar4 = pFVar13->_padding_;
  fVar5 = pFVar13->Velocity;
  fVar6 = pFVar13->HalfLife;
  lVar7 = (longlong)pFVar11 + (-0x18 - (longlong)pFVar13);
  local_358._0_4_ = (int)local_358 + -1;
  lVar7 = lVar7 / 6 + (lVar7 >> 0x3f);
  pFVar13->_padding_ = pFVar11->_padding_;
  pFVar13->_padding_ = lVar2;
  fVar16 = pFVar12[-1].HalfLife;
  pFVar13->Velocity = pFVar12[-1].Velocity;
  pFVar13->HalfLife = fVar16;
  pFVar11->_padding_ = lVar3;
  pFVar12[-1]._padding_ = lVar4;
  pFVar12[-1].Velocity = fVar5;
  pFVar12[-1].HalfLife = fVar6;
  if ((lVar7 >> 2) - (lVar7 >> 0x3f) < ((longlong)pFVar9 - (longlong)pFVar14) / 0x18) {
    if (pFVar14 < pFVar9) {
      *ppFVar15 = pFVar14;
      ppFVar15[1] = pFVar9;
      *(int *)(ppFVar15 + 2) = (int)local_358;
      ppFVar15 = ppFVar15 + 3;
    }
    if (pFVar11 <= pFVar13 + 1) goto LAB_1474aaa90;
    pFVar9 = pFVar12 + -2;
    pFVar14 = pFVar13;
  }
  else {
    if (pFVar13 + 1 < pFVar11) {
      *ppFVar15 = pFVar13;
      ppFVar15[1] = pFVar12 + -2;
      *(int *)(ppFVar15 + 2) = (int)local_358;
      ppFVar15 = ppFVar15 + 3;
    }
    if (pFVar9 <= pFVar14) goto LAB_1474aaa90;
  }
  iVar8 = (int)(((longlong)pFVar9 - (longlong)pFVar14) / 0x18) + 1;
  pFVar13 = pFVar14;
  if ((int)local_358 == 0) goto LAB_1474aaa80;
  goto LAB_1474aa8f0;
}

// IntroSortInternal<FInertializationCurveDiffElement,int,FIdentityFunctor,UE::Anim::TNamedValueArray<TSizedDefaultAllocator<32>,FInertializationCurveDiffElement>::FElementSortPredicate> @ 1474aab50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<FInertializationCurveDiffElement,int,FIdentityFunctor,UE::Anim::TNamedValueArray<TSizedDefaultAllocator<32>,FInertializationCurveDiffElement>::FElementSortPredicate>
          (FInertializationCurveDiffElement *param_1,int param_2,FIdentityFunctor param_3,
          FElementSortPredicate param_4)

{
  FInertializationCurveDiffElement *pFVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  float fVar5;
  float fVar6;
  longlong lVar7;
  int iVar8;
  FInertializationCurveDiffElement *pFVar9;
  FInertializationCurveDiffElement *pFVar10;
  FInertializationCurveDiffElement *pFVar11;
  FInertializationCurveDiffElement *pFVar12;
  FInertializationCurveDiffElement *pFVar13;
  FInertializationCurveDiffElement *pFVar14;
  FInertializationCurveDiffElement **ppFVar15;
  float fVar16;
  undefined1 auStack_388 [48];
  FInertializationCurveDiffElement *local_358;
  FInertializationCurveDiffElement *local_348;
  FInertializationCurveDiffElement *local_340;
  undefined4 local_338;
  undefined1 local_330 [744];
  ulonglong local_48;
  
  if (1 < param_2) {
    local_48 = __security_cookie.value ^ (ulonglong)auStack_388;
    local_340 = param_1 + (longlong)param_2 + -1;
    local_348 = param_1;
    fVar16 = logf((float)param_2 * (float)param_2);
    local_338 = (undefined4)(longlong)fVar16;
    memset(local_330,0,0x2e8);
    ppFVar15 = &local_348;
    do {
      pFVar9 = ppFVar15[1];
      pFVar14 = *ppFVar15;
      pFVar1 = ppFVar15[2];
      local_358._0_4_ = (int)pFVar1;
      iVar8 = (int)(((longlong)pFVar9 - (longlong)pFVar14) / 0x18) + 1;
      pFVar13 = pFVar14;
      if ((int)local_358 != 0) {
LAB_1474aac30:
        if (8 < iVar8) {
          lVar2 = pFVar13->_padding_;
          pFVar11 = pFVar9 + 1;
          iVar8 = iVar8 / 2;
          lVar3 = pFVar13[iVar8]._padding_;
          lVar4 = pFVar13[iVar8]._padding_;
          fVar5 = pFVar13[iVar8].Delta;
          fVar6 = pFVar13[iVar8].Derivative;
          pFVar13[iVar8]._padding_ = pFVar13->_padding_;
          pFVar13[iVar8]._padding_ = lVar2;
          fVar16 = pFVar13->Derivative;
          pFVar13[iVar8].Delta = pFVar13->Delta;
          pFVar13[iVar8].Derivative = fVar16;
          pFVar13->_padding_ = lVar3;
          pFVar13->_padding_ = lVar4;
          pFVar13->Delta = fVar5;
          pFVar13->Derivative = fVar6;
          pFVar14 = pFVar13;
LAB_1474aac80:
          pFVar10 = pFVar14;
          pFVar14 = pFVar10 + 1;
          if (pFVar14 <= pFVar9) goto code_r0x0001474aac89;
          goto LAB_1474aaca0;
        }
        for (; pFVar1 = pFVar13, pFVar14 = pFVar13, pFVar13 < pFVar9; pFVar9 = pFVar9 + -1) {
          while (pFVar11 = pFVar14 + 1, pFVar11 <= pFVar9) {
            iVar8 = (int)pFVar1->_padding_ - (int)pFVar11->_padding_;
            if (iVar8 == 0) {
              iVar8 = *(int *)((longlong)&pFVar1->_padding_ + 4) -
                      *(int *)((longlong)&pFVar14[1]._padding_ + 4);
            }
            pFVar14 = pFVar11;
            if (iVar8 < 0) {
              pFVar1 = pFVar11;
            }
          }
          lVar2 = pFVar1->_padding_;
          lVar3 = pFVar1->_padding_;
          fVar5 = pFVar1->Delta;
          fVar6 = pFVar1->Derivative;
          lVar4 = pFVar9->_padding_;
          pFVar1->_padding_ = pFVar9->_padding_;
          pFVar1->_padding_ = lVar4;
          fVar16 = pFVar9->Derivative;
          pFVar1->Delta = pFVar9->Delta;
          pFVar1->Derivative = fVar16;
          pFVar9->_padding_ = lVar2;
          pFVar9->_padding_ = lVar3;
          pFVar9->Delta = fVar5;
          pFVar9->Derivative = fVar6;
        }
        goto LAB_1474aadd0;
      }
LAB_1474aadc0:
      local_358 = pFVar1;
      HeapSortInternal<FInertializationCurveDiffElement,int,FIdentityFunctor,UE::Anim::TNamedValueArray<TSizedDefaultAllocator<32>,FInertializationCurveDiffElement>::FElementSortPredicate>
                (pFVar14,iVar8,param_3,param_4);
LAB_1474aadd0:
      ppFVar15 = ppFVar15 + -3;
    } while (&local_348 <= ppFVar15);
  }
  return;
code_r0x0001474aac89:
  iVar8 = (int)pFVar13->_padding_ - (int)pFVar14->_padding_;
  if (iVar8 == 0) {
    iVar8 = *(int *)((longlong)&pFVar13->_padding_ + 4) -
            *(int *)((longlong)&pFVar10[1]._padding_ + 4);
  }
  if (-1 < iVar8) goto LAB_1474aac80;
LAB_1474aaca0:
  do {
    pFVar12 = pFVar11;
    pFVar11 = pFVar12 + -1;
    if (pFVar11 <= pFVar13) break;
    iVar8 = (int)pFVar11->_padding_ - (int)pFVar13->_padding_;
    if (iVar8 == 0) {
      iVar8 = *(int *)((longlong)&pFVar12[-1]._padding_ + 4) -
              *(int *)((longlong)&pFVar13->_padding_ + 4);
    }
  } while (-1 < iVar8);
  lVar2 = pFVar12[-1]._padding_;
  if (pFVar14 <= pFVar11) {
    lVar3 = pFVar14->_padding_;
    lVar4 = pFVar10[1]._padding_;
    fVar5 = pFVar10[1].Delta;
    fVar6 = pFVar10[1].Derivative;
    pFVar14->_padding_ = pFVar11->_padding_;
    pFVar10[1]._padding_ = lVar2;
    fVar16 = pFVar12[-1].Derivative;
    pFVar10[1].Delta = pFVar12[-1].Delta;
    pFVar10[1].Derivative = fVar16;
    pFVar11->_padding_ = lVar3;
    pFVar12[-1]._padding_ = lVar4;
    pFVar12[-1].Delta = fVar5;
    pFVar12[-1].Derivative = fVar6;
    goto LAB_1474aac80;
  }
  lVar3 = pFVar13->_padding_;
  lVar4 = pFVar13->_padding_;
  fVar5 = pFVar13->Delta;
  fVar6 = pFVar13->Derivative;
  lVar7 = (longlong)pFVar11 + (-0x18 - (longlong)pFVar13);
  local_358._0_4_ = (int)local_358 + -1;
  lVar7 = lVar7 / 6 + (lVar7 >> 0x3f);
  pFVar13->_padding_ = pFVar11->_padding_;
  pFVar13->_padding_ = lVar2;
  fVar16 = pFVar12[-1].Derivative;
  pFVar13->Delta = pFVar12[-1].Delta;
  pFVar13->Derivative = fVar16;
  pFVar11->_padding_ = lVar3;
  pFVar12[-1]._padding_ = lVar4;
  pFVar12[-1].Delta = fVar5;
  pFVar12[-1].Derivative = fVar6;
  if ((lVar7 >> 2) - (lVar7 >> 0x3f) < ((longlong)pFVar9 - (longlong)pFVar14) / 0x18) {
    if (pFVar14 < pFVar9) {
      *ppFVar15 = pFVar14;
      ppFVar15[1] = pFVar9;
      *(int *)(ppFVar15 + 2) = (int)local_358;
      ppFVar15 = ppFVar15 + 3;
    }
    if (pFVar11 <= pFVar13 + 1) goto LAB_1474aadd0;
    pFVar9 = pFVar12 + -2;
    pFVar14 = pFVar13;
  }
  else {
    if (pFVar13 + 1 < pFVar11) {
      *ppFVar15 = pFVar13;
      ppFVar15[1] = pFVar12 + -2;
      *(int *)(ppFVar15 + 2) = (int)local_358;
      ppFVar15 = ppFVar15 + 3;
    }
    if (pFVar9 <= pFVar14) goto LAB_1474aadd0;
  }
  iVar8 = (int)(((longlong)pFVar9 - (longlong)pFVar14) / 0x18) + 1;
  pFVar13 = pFVar14;
  if ((int)local_358 == 0) goto LAB_1474aadc0;
  goto LAB_1474aac30;
}

// MakeShared<FAnimationUpdateSharedContext,1> @ 1474aae90

TSharedRef<FAnimationUpdateSharedContext,1> * __cdecl
MakeShared<FAnimationUpdateSharedContext,1>
          (TSharedRef<FAnimationUpdateSharedContext,1> *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TSharedRef<FAnimationUpdateSharedContext,1> *pTVar4;
  
  pTVar3 = operator_new(0xc70);
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    __return_storage_ptr__->Object = (FAnimationUpdateSharedContext *)0x10;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_UFAnimationUpdateSharedContext___00_SharedPointerInternals__6B_
    ;
    memset(pTVar3 + 1,0,0x100);
    pTVar3[0x12]._padding_ = 0;
    pTVar3[0x14]._padding_ = 0;
    memset((void *)((longlong)&pTVar3[0x15]._padding_ + 4),0,0x904);
    pTVar3[0xa6].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[0xa6].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[0xa8].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[0xa8].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[0xa9]._padding_ = 0;
    memset((void *)((longlong)&pTVar3[0xaa]._padding_ + 4),0,0x184);
    pTVar3[0xc3].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[0xc3].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[0xc5].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[0xc5].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[0xc6].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[0xc6].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[0x11]._padding_ = 0;
    pTVar3[0x11].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[0x11].WeakReferenceCount = (atomic<int>)0x4;
    pTVar3[0x12].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[0x12].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTVar3[0x13]._padding_ = 0;
    *(undefined4 *)((longlong)&pTVar3[0x13]._padding_ + 4) = 0x20;
    pTVar3[0x13].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[0x13].SharedReferenceCount = (atomic<int>)0xffffffff;
    pTVar3[0x14].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[0x14].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTVar3[0x15]._padding_ = 0;
    pTVar3[0xa5].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[0xa5].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTVar3[0xa6]._padding_ = 0;
    *(undefined4 *)((longlong)&pTVar3[0xa6]._padding_ + 4) = 8;
    pTVar3[0xa7]._padding_ = 0;
    pTVar3[0xa7].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[0xa7].WeakReferenceCount = (atomic<int>)0x20;
    *(undefined4 *)((longlong)&pTVar3[0xa8]._padding_ + 4) = 0;
    *(undefined4 *)&pTVar3[0xa8]._padding_ = 0xffffffff;
    pTVar3[0xa9].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[0xa9].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTVar3[0xaa]._padding_ = 0;
    pTVar3[0xc2].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[0xc2].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTVar3[0xc3]._padding_ = 0;
    *(undefined4 *)((longlong)&pTVar3[0xc3]._padding_ + 4) = 4;
    pTVar3[0xc4]._padding_ = 0;
    pTVar3[0xc4].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[0xc4].WeakReferenceCount = (atomic<int>)0x20;
    *(undefined4 *)((longlong)&pTVar3[0xc5]._padding_ + 4) = 0;
    *(undefined4 *)&pTVar3[0xc5]._padding_ = 0xffffffff;
    pTVar3[0xc6]._padding_ = 0;
    __return_storage_ptr__->Object = (FAnimationUpdateSharedContext *)(pTVar3 + 1);
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar3;
    if ((FAnimationUpdateSharedContext *)(pTVar3 + 1) == (FAnimationUpdateSharedContext *)0x0) {
      bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TSharedRef<FAnimationUpdateSharedContext,1> *)(*pcVar1)();
        return pTVar4;
      }
    }
  }
  return __return_storage_ptr__;
}

// NewObject<UAnimMontage> @ 1474ab080

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UAnimMontage * __cdecl NewObject<UAnimMontage>(UObject *param_1)

{
  UClass *pUVar1;
  UAnimMontage *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = UAnimMontage::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UAnimMontage *)
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

// NewObject<UParticleSystemComponent> @ 1474ab120

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UParticleSystemComponent * __cdecl NewObject<UParticleSystemComponent>(UObject *param_1)

{
  UClass *pUVar1;
  UParticleSystemComponent *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = Z_Construct_UClass_UParticleSystemComponent_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UParticleSystemComponent *)
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

// StaticEnum<enum_AnimPhysCollisionType> @ 1474aca70

UEnum * __cdecl StaticEnum<enum_AnimPhysCollisionType>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_AnimPhysCollisionType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_AnimPhysCollisionType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_AnimPhysCollisionType,(UObject *)pUVar1,
                       L"AnimPhysCollisionType");
  }
  return Z_Registration_Info_UEnum_AnimPhysCollisionType.OuterSingleton;
}

// StaticEnum<enum_AnimPhysTwistAxis> @ 1474acab0

UEnum * __cdecl StaticEnum<enum_AnimPhysTwistAxis>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_AnimPhysTwistAxis.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_AnimPhysTwistAxis.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_AnimPhysTwistAxis,(UObject *)pUVar1,
                       L"AnimPhysTwistAxis");
  }
  return Z_Registration_Info_UEnum_AnimPhysTwistAxis.OuterSingleton;
}

// StaticEnum<enum_EAnimNodeDataFlags> @ 1474acaf0

UEnum * __cdecl StaticEnum<enum_EAnimNodeDataFlags>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EAnimNodeDataFlags.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_EAnimNodeDataFlags.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_EAnimNodeDataFlags,(UObject *)pUVar1,
                       L"EAnimNodeDataFlags");
  }
  return Z_Registration_Info_UEnum_EAnimNodeDataFlags.OuterSingleton;
}

// StaticEnum<enum_EAnimNodeReferenceConversionResult> @ 1474acb30

UEnum * __cdecl StaticEnum<enum_EAnimNodeReferenceConversionResult>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EAnimNodeReferenceConversionResult.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_EAnimNodeReferenceConversionResult.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_EAnimNodeReferenceConversionResult,(UObject *)pUVar1
                       ,L"EAnimNodeReferenceConversionResult");
  }
  return Z_Registration_Info_UEnum_EAnimNodeReferenceConversionResult.OuterSingleton;
}

// StaticEnum<enum_EInertializationBoneState> @ 1474acb70

UEnum * __cdecl StaticEnum<enum_EInertializationBoneState>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EInertializationBoneState.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_EInertializationBoneState.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_EInertializationBoneState,(UObject *)pUVar1,
                       L"EInertializationBoneState");
  }
  return Z_Registration_Info_UEnum_EInertializationBoneState.OuterSingleton;
}

// StaticEnum<enum_EInertializationSpace> @ 1474acbb0

UEnum * __cdecl StaticEnum<enum_EInertializationSpace>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EInertializationSpace.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_EInertializationSpace.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_EInertializationSpace,(UObject *)pUVar1,
                       L"EInertializationSpace");
  }
  return Z_Registration_Info_UEnum_EInertializationSpace.OuterSingleton;
}

// StaticEnum<enum_EInertializationState> @ 1474acbf0

UEnum * __cdecl StaticEnum<enum_EInertializationState>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EInertializationState.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_EInertializationState.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_EInertializationState,(UObject *)pUVar1,
                       L"EInertializationState");
  }
  return Z_Registration_Info_UEnum_EInertializationState.OuterSingleton;
}

// StaticEnum<enum_EMontageBlendMode> @ 1474acc30

UEnum * __cdecl StaticEnum<enum_EMontageBlendMode>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EMontageBlendMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_EMontageBlendMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_EMontageBlendMode,(UObject *)pUVar1,
                       L"EMontageBlendMode");
  }
  return Z_Registration_Info_UEnum_EMontageBlendMode.OuterSingleton;
}

// StaticEnum<enum_EMontageSubStepResult> @ 1474acc70

UEnum * __cdecl StaticEnum<enum_EMontageSubStepResult>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EMontageSubStepResult.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_EMontageSubStepResult.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_EMontageSubStepResult,(UObject *)pUVar1,
                       L"EMontageSubStepResult");
  }
  return Z_Registration_Info_UEnum_EMontageSubStepResult.OuterSingleton;
}

// StaticEnum<enum_EStripAnimDataOnDedicatedServerSettings> @ 1474accb0

UEnum * __cdecl StaticEnum<enum_EStripAnimDataOnDedicatedServerSettings>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EStripAnimDataOnDedicatedServerSettings.OuterSingleton ==
      (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_EStripAnimDataOnDedicatedServerSettings.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_EStripAnimDataOnDedicatedServerSettings,
                       (UObject *)pUVar1,L"EStripAnimDataOnDedicatedServerSettings");
  }
  return Z_Registration_Info_UEnum_EStripAnimDataOnDedicatedServerSettings.OuterSingleton;
}

// StaticEnum<enum_EEvaluatorMode::Mode> @ 1474accf0

UEnum * __cdecl StaticEnum<enum_EEvaluatorMode::Mode>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EEvaluatorMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_EEvaluatorMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_EEvaluatorMode,(UObject *)pUVar1,L"EEvaluatorMode");
  }
  return Z_Registration_Info_UEnum_EEvaluatorMode.OuterSingleton;
}

// StaticEnum<enum_EAnimLinkMethod::Type> @ 1474acd30

UEnum * __cdecl StaticEnum<enum_EAnimLinkMethod::Type>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EAnimLinkMethod.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_EAnimLinkMethod.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_EAnimLinkMethod,(UObject *)pUVar1,L"EAnimLinkMethod"
                      );
  }
  return Z_Registration_Info_UEnum_EAnimLinkMethod.OuterSingleton;
}

// StaticEnum<enum_EAnimNotifyEventType::Type> @ 1474acd70

UEnum * __cdecl StaticEnum<enum_EAnimNotifyEventType::Type>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EAnimNotifyEventType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_EAnimNotifyEventType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_EAnimNotifyEventType,(UObject *)pUVar1,
                       L"EAnimNotifyEventType");
  }
  return Z_Registration_Info_UEnum_EAnimNotifyEventType.OuterSingleton;
}

// StaticEnum<enum_EEvaluatorDataSource::Type> @ 1474acdb0

UEnum * __cdecl StaticEnum<enum_EEvaluatorDataSource::Type>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EEvaluatorDataSource.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_EEvaluatorDataSource.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_EEvaluatorDataSource,(UObject *)pUVar1,
                       L"EEvaluatorDataSource");
  }
  return Z_Registration_Info_UEnum_EEvaluatorDataSource.OuterSingleton;
}

// StaticEnum<enum_EPinHidingMode::Type> @ 1474acdf0

UEnum * __cdecl StaticEnum<enum_EPinHidingMode::Type>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EPinHidingMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_EPinHidingMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_EPinHidingMode,(UObject *)pUVar1,L"EPinHidingMode");
  }
  return Z_Registration_Info_UEnum_EPinHidingMode.OuterSingleton;
}

// Union<`FAnimNode_DeadBlending::ApplyTo'::__l2::<lambda_1>,TMemStackAllocator<0>,UE::Anim::FCurveElement,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>,UE::Anim::FCurveElement,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>,FAnimNode_DeadBlending::FDeadBlendingCurveElement> @ 1474ace80

void __cdecl
UE::Anim::FNamedValueArrayUtils::
Union<_FAnimNode_DeadBlending::ApplyTo_::__l2::<lambda_1>,TMemStackAllocator<0>,UE::Anim::FCurveElement,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>,UE::Anim::FCurveElement,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>,FAnimNode_DeadBlending::FDeadBlendingCurveElement>
          (TNamedValueArray<TMemStackAllocator<0>,UE::Anim::FCurveElement> *param_1,
          TNamedValueArray<TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>,UE::Anim::FCurveElement>
          *param_2,TNamedValueArray<TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>,FAnimNode_DeadBlending::FDeadBlendingCurveElement>
                   *param_3,<lambda_1> *param_4)

{
  int *piVar1;
  uint *puVar2;
  int iVar3;
  ForElementType<FAnimNode_DeadBlending::FDeadBlendingCurveElement> FVar4;
  FName FVar5;
  FAnimNode_DeadBlending *pFVar6;
  code *pcVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  bool bVar16;
  bool bVar17;
  ECurveElementFlags EVar18;
  int iVar19;
  ForElementType<UE::Anim::FCurveElement> FVar20;
  ForElementType<FAnimNode_DeadBlending::FDeadBlendingCurveElement> FVar21;
  FName *pFVar22;
  FName *pFVar23;
  longlong lVar24;
  FName *pFVar25;
  uint uVar26;
  FCurveElement *pFVar27;
  ForElementType<UE::Anim::FCurveElement> FVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  FIdentityFunctor local_res8;
  FCurveElement local_98 [7];
  
  if (((TNamedValueArray<TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>,UE::Anim::FCurveElement>
        *)param_1 == param_2) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("(void*)&OutResultValueArray != (void*)&InValueArray0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Animation\\NamedValueArray.h"
                          ,0x1a0,L""), bVar16)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if (((TNamedValueArray<TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>,FAnimNode_DeadBlending::FDeadBlendingCurveElement>
        *)param_1 == param_3) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("(void*)&OutResultValueArray != (void*)&InValueArray1",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Animation\\NamedValueArray.h"
                          ,0x1a1,L""), bVar16)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if (((TNamedValueArray<TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>,FAnimNode_DeadBlending::FDeadBlendingCurveElement>
        *)param_2 == param_3) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("(void*)&InValueArray0 != (void*)&InValueArray1",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Animation\\NamedValueArray.h"
                          ,0x1a2,L""), bVar16)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  piVar1 = &(param_1->Elements).ArrayMax;
  (param_1->Elements).ArrayNum = 0;
  if ((param_1->Elements).ArrayMax < 0) {
    Core::Private::ReallocTo<0,TMemStackAllocator<0>::ForElementType<UE::Anim::FCurveElement>_>
              (0x10,4,0,(ForElementType<UE::Anim::FCurveElement> *)param_1,0,piVar1);
  }
  iVar19 = (param_2->Elements).ArrayNum;
  iVar3 = (param_3->Elements).ArrayNum;
  if (param_2->bSorted == false) {
    FVar28 = (param_2->Elements).AllocatorInstance.SecondaryData;
    FVar20 = (ForElementType<UE::Anim::FCurveElement>)param_2;
    if (FVar28 != (ForElementType<UE::Anim::FCurveElement>)0x0) {
      FVar20 = FVar28;
    }
    AlgoImpl::
    IntroSortInternal<UE::Anim::FCurveElement,int,FIdentityFunctor,UE::Anim::TNamedValueArray<TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>,UE::Anim::FCurveElement>::FElementSortPredicate>
              ((FCurveElement *)FVar20,iVar19,local_res8,(FElementSortPredicate)local_res8);
    param_2->bSorted = true;
  }
  if (param_3->bSorted == false) {
    FVar4 = (param_3->Elements).AllocatorInstance.SecondaryData;
    FVar21 = (ForElementType<FAnimNode_DeadBlending::FDeadBlendingCurveElement>)param_3;
    if (FVar4 != (ForElementType<FAnimNode_DeadBlending::FDeadBlendingCurveElement>)0x0) {
      FVar21 = FVar4;
    }
    AlgoImpl::
    IntroSortInternal<FAnimNode_DeadBlending::FDeadBlendingCurveElement,int,FIdentityFunctor,UE::Anim::TNamedValueArray<TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>,FAnimNode_DeadBlending::FDeadBlendingCurveElement>::FElementSortPredicate>
              ((FDeadBlendingCurveElement *)FVar21,(param_3->Elements).ArrayNum,local_res8,
               (FElementSortPredicate)local_res8);
    param_3->bSorted = true;
  }
  iVar8 = iVar3;
  if (iVar3 < iVar19) {
    iVar8 = iVar19;
  }
  uVar26 = iVar8 / 2 + iVar8;
  if ((int)uVar26 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidArrayNum((ulonglong)uVar26);
  }
  if (*piVar1 < (int)uVar26) {
    Core::Private::ReallocTo<0,TMemStackAllocator<0>::ForElementType<UE::Anim::FCurveElement>_>
              (0x10,4,uVar26,(ForElementType<UE::Anim::FCurveElement> *)param_1,
               (param_1->Elements).ArrayNum,piVar1);
  }
  fVar13 = __real_3f80f478;
  fVar12 = __real_3ee6ad0d;
  fVar11 = __real_3e83b5ca;
  fVar10 = __real_3f317218;
  fVar9 = __real_3f800000;
  fVar29 = __real_322bcc77;
  FVar28 = (param_2->Elements).AllocatorInstance.SecondaryData;
  if (FVar28 != (ForElementType<UE::Anim::FCurveElement>)0x0) {
    param_2 = (TNamedValueArray<TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>,UE::Anim::FCurveElement>
               *)FVar28;
  }
  FVar4 = (param_3->Elements).AllocatorInstance.SecondaryData;
  if (FVar4 != (ForElementType<FAnimNode_DeadBlending::FDeadBlendingCurveElement>)0x0) {
    param_3 = (TNamedValueArray<TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>,FAnimNode_DeadBlending::FDeadBlendingCurveElement>
               *)FVar4;
  }
  FVar28 = (ForElementType<UE::Anim::FCurveElement>)((longlong)iVar19 * 0x10 + (longlong)param_2);
  FVar4 = (ForElementType<FAnimNode_DeadBlending::FDeadBlendingCurveElement>)
          ((longlong)param_3 + (longlong)iVar3 * 0x18);
  if ((ForElementType<UE::Anim::FCurveElement>)param_2 != FVar28) {
    if ((ForElementType<FAnimNode_DeadBlending::FDeadBlendingCurveElement>)param_3 != FVar4) {
      do {
        uVar14 = local_98[0]._12_4_;
        local_98[0].Name = *(FName *)param_3;
        FVar5 = *(FName *)param_2;
        pFVar6 = param_4->__this;
        local_98[0].Value = 0.0;
        local_98[0]._12_4_ = local_98[0]._12_4_ & 0xffffff00;
        uVar15 = local_98[0]._12_4_;
        local_98[0]._13_3_ = SUB43(uVar14,1);
        if (FVar5 == local_98[0].Name) {
          pFVar22 = (FName *)(pFVar6->FilteredCurves).AllocatorInstance.Data;
          pFVar25 = pFVar22 + (pFVar6->FilteredCurves).ArrayNum;
          for (; pFVar22 != pFVar25; pFVar22 = pFVar22 + 1) {
            if (*pFVar22 == FVar5) {
              local_98[0].Value = (float)(((FName *)((longlong)param_2 + 8))->ComparisonIndex).Value
              ;
              local_98[0].Flags = *(ECurveElementFlags *)((longlong)param_2 + 0xc);
              goto LAB_1474ad1ba;
            }
          }
          fVar31 = (float)(((FName *)((longlong)param_3 + 0x10))->ComparisonIndex).Value;
          fVar32 = (float)(((FName *)((longlong)param_3 + 8))->ComparisonIndex).Value;
          if (fVar29 < fVar31 * fVar31) {
            fVar30 = *(float *)((longlong)param_3 + 0x14);
            if (*(float *)((longlong)param_3 + 0x14) <= fVar29) {
              fVar30 = fVar29;
            }
            fVar31 = fVar31 / (fVar10 / fVar30);
            fVar30 = (fVar10 / fVar30) * pFVar6->InertializationTime;
            if (fVar31 <= fVar29) {
              fVar31 = fVar29;
            }
            fVar32 = (fVar31 - fVar31 / (((fVar30 * fVar11 + fVar12) * fVar30 + fVar13) * fVar30 +
                                        fVar9)) + fVar32;
          }
          local_98[0].Flags =
               *(byte *)((longlong)param_3 + 0xc) | *(byte *)((longlong)param_2 + 0xc);
          local_98[0].Value =
               (fVar32 - (float)(((FName *)((longlong)param_2 + 8))->ComparisonIndex).Value) *
               param_4->CurveAlpha +
               (float)(((FName *)((longlong)param_2 + 8))->ComparisonIndex).Value;
LAB_1474ad1ba:
          param_2 = (TNamedValueArray<TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>,UE::Anim::FCurveElement>
                     *)((longlong)param_2 + 0x10);
          param_3 = (TNamedValueArray<TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>,FAnimNode_DeadBlending::FDeadBlendingCurveElement>
                     *)((longlong)param_3 + 0x18);
          if (((ForElementType<UE::Anim::FCurveElement>)param_2 == FVar28) ||
             ((ForElementType<FAnimNode_DeadBlending::FDeadBlendingCurveElement>)param_3 == FVar4))
          {
            bVar16 = true;
            local_98[0].Name = FVar5;
          }
          else {
            bVar16 = false;
            local_98[0].Name = FVar5;
          }
        }
        else {
          iVar19 = FVar5.ComparisonIndex.Value.Value - local_98[0].Name.ComparisonIndex.Value;
          if (iVar19 == 0) {
            iVar19 = FVar5.Number - local_98[0].Name.Number;
          }
          if (iVar19 < 0) {
            pFVar22 = (FName *)(pFVar6->FilteredCurves).AllocatorInstance.Data;
            pFVar25 = pFVar22 + (pFVar6->FilteredCurves).ArrayNum;
            for (; pFVar22 != pFVar25; pFVar22 = pFVar22 + 1) {
              if (*pFVar22 == FVar5) {
                local_98[0].Value =
                     (float)(((FName *)((longlong)param_2 + 8))->ComparisonIndex).Value;
                puVar2 = (uint *)((longlong)param_2 + 0xc);
                param_2 = (TNamedValueArray<TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>,UE::Anim::FCurveElement>
                           *)((longlong)param_2 + 0x10);
                bVar16 = (ForElementType<UE::Anim::FCurveElement>)param_2 == FVar28;
                local_98[0].Flags = *(undefined1 *)puVar2;
                local_98[0].Name = FVar5;
                goto LAB_1474ad312;
              }
            }
            local_98[0].Value = (float)(((FName *)((longlong)param_2 + 8))->ComparisonIndex).Value;
            puVar2 = (uint *)((longlong)param_2 + 0xc);
            param_2 = (TNamedValueArray<TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>,UE::Anim::FCurveElement>
                       *)((longlong)param_2 + 0x10);
            local_98[0].Flags = *(undefined1 *)puVar2;
            bVar16 = (ForElementType<UE::Anim::FCurveElement>)param_2 == FVar28;
            local_98[0].Value = local_98[0].Value - local_98[0].Value * param_4->CurveAlpha;
            local_98[0].Name = FVar5;
          }
          else {
            pFVar22 = (FName *)(pFVar6->FilteredCurves).AllocatorInstance.Data;
            pFVar25 = pFVar22 + (pFVar6->FilteredCurves).ArrayNum;
            for (; pFVar22 != pFVar25; pFVar22 = pFVar22 + 1) {
              if (*pFVar22 == local_98[0].Name) goto LAB_1474ad307;
            }
            fVar31 = (float)(((FName *)((longlong)param_3 + 0x10))->ComparisonIndex).Value;
            local_98[0].Value = (float)(((FName *)((longlong)param_3 + 8))->ComparisonIndex).Value;
            if (fVar29 < fVar31 * fVar31) {
              fVar32 = *(float *)((longlong)param_3 + 0x14);
              if (*(float *)((longlong)param_3 + 0x14) <= fVar29) {
                fVar32 = fVar29;
              }
              fVar31 = fVar31 / (fVar10 / fVar32);
              fVar32 = (fVar10 / fVar32) * pFVar6->InertializationTime;
              if (fVar31 <= fVar29) {
                fVar31 = fVar29;
              }
              local_98[0].Value =
                   (fVar31 - fVar31 / (((fVar32 * fVar11 + fVar12) * fVar32 + fVar13) * fVar32 +
                                      fVar9)) + local_98[0].Value;
            }
            local_98[0].Value = local_98[0].Value * param_4->CurveAlpha;
            local_98[0].Flags = *(undefined1 *)((longlong)param_3 + 0xc);
            uVar15 = local_98[0]._12_4_;
LAB_1474ad307:
            local_98[0]._12_4_ = uVar15;
            param_3 = (TNamedValueArray<TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>,FAnimNode_DeadBlending::FDeadBlendingCurveElement>
                       *)((longlong)param_3 + 0x18);
            bVar16 = (ForElementType<FAnimNode_DeadBlending::FDeadBlendingCurveElement>)param_3 ==
                     FVar4;
          }
        }
LAB_1474ad312:
        pFVar27 = (param_1->Elements).AllocatorInstance.Data;
        if (((pFVar27 <= local_98) && (local_98 < pFVar27 + (param_1->Elements).ArrayMax)) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar17)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        iVar19 = (param_1->Elements).ArrayNum;
        if (iVar19 == (param_1->Elements).ArrayMax) {
          iVar19 = Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<0,TMemStackAllocator<0>::ForElementType<UE::Anim::FCurveElement>_>
                             (0x410,(ForElementType<UE::Anim::FCurveElement> *)param_1,piVar1);
        }
        (param_1->Elements).ArrayNum = iVar19 + 1;
        pFVar27 = (param_1->Elements).AllocatorInstance.Data + iVar19;
        pFVar27->Name = local_98[0].Name;
        pFVar27->Value = local_98[0].Value;
        pFVar27->Flags = (char)local_98[0]._12_4_;
        *(int3 *)&pFVar27->field_0xd = SUB43(local_98[0]._12_4_,1);
      } while (!bVar16);
    }
    if (param_2 < (ulonglong)FVar28) {
      iVar19 = (param_1->Elements).ArrayNum;
      iVar3 = (int)((longlong)FVar28 - (longlong)param_2 >> 4);
      uVar26 = iVar19 + iVar3;
      if ((int)uVar26 < 0) {
                    /* WARNING: Subroutine does not return */
        Core::Private::OnInvalidArrayNum((ulonglong)uVar26);
      }
      if ((param_1->Elements).ArrayMax < (int)uVar26) {
        Core::Private::ReallocTo<0,TMemStackAllocator<0>::ForElementType<UE::Anim::FCurveElement>_>
                  (0x10,4,uVar26,(ForElementType<UE::Anim::FCurveElement> *)param_1,iVar19,piVar1);
      }
      Core::Private::ReallocGrow<0,TMemStackAllocator<0>::ForElementType<UE::Anim::FCurveElement>_>
                (0x10,4,iVar3,(ForElementType<UE::Anim::FCurveElement> *)param_1,
                 &(param_1->Elements).ArrayNum,piVar1);
      pFVar6 = param_4->__this;
      pFVar27 = (param_1->Elements).AllocatorInstance.Data + iVar19;
      pFVar25 = (FName *)((longlong)param_2 + 8);
      do {
        (pFVar27->Name).ComparisonIndex = 0;
        (pFVar27->Name).Number = 0;
        pFVar27->Value = 0.0;
        pFVar27->Flags = None;
        *(undefined3 *)&pFVar27->field_0xd = 0;
        pFVar27->Value = 0.0;
        FVar5 = *(FName *)&pFVar25[-1].ComparisonIndex;
        pFVar27->Name = FVar5;
        pFVar23 = (FName *)(pFVar6->FilteredCurves).AllocatorInstance.Data;
        pFVar22 = pFVar23 + (pFVar6->FilteredCurves).ArrayNum;
        for (; pFVar23 != pFVar22; pFVar23 = pFVar23 + 1) {
          if (*pFVar23 == FVar5) {
            fVar29 = (float)(pFVar25->ComparisonIndex).Value;
            goto LAB_1474ad483;
          }
        }
        fVar29 = (float)(pFVar25->ComparisonIndex).Value;
        fVar29 = fVar29 - fVar29 * param_4->CurveAlpha;
LAB_1474ad483:
        pFVar27->Value = fVar29;
        pFVar27->Flags = (ECurveElementFlags)pFVar25->Number;
        pFVar27 = pFVar27 + 1;
        FVar20 = (ForElementType<UE::Anim::FCurveElement>)(pFVar25 + 1);
        pFVar25 = pFVar25 + 2;
      } while ((ulonglong)FVar20 < (ulonglong)FVar28);
      goto LAB_1474ad61e;
    }
  }
  if (param_3 < (ulonglong)FVar4) {
    iVar19 = (param_1->Elements).ArrayNum;
    lVar24 = ((longlong)FVar4 - (longlong)param_3) / 6 +
             ((longlong)FVar4 - (longlong)param_3 >> 0x3f);
    iVar3 = (int)(lVar24 >> 2) - (int)(lVar24 >> 0x3f);
    uVar26 = iVar19 + iVar3;
    if ((int)uVar26 < 0) {
                    /* WARNING: Subroutine does not return */
      Core::Private::OnInvalidArrayNum((ulonglong)uVar26);
    }
    if ((param_1->Elements).ArrayMax < (int)uVar26) {
      Core::Private::ReallocTo<0,TMemStackAllocator<0>::ForElementType<UE::Anim::FCurveElement>_>
                (0x10,4,uVar26,(ForElementType<UE::Anim::FCurveElement> *)param_1,iVar19,piVar1);
    }
    Core::Private::ReallocGrow<0,TMemStackAllocator<0>::ForElementType<UE::Anim::FCurveElement>_>
              (0x10,4,iVar3,(ForElementType<UE::Anim::FCurveElement> *)param_1,
               &(param_1->Elements).ArrayNum,piVar1);
    pFVar6 = param_4->__this;
    pFVar25 = (FName *)((longlong)param_3 + 8);
    pFVar27 = (param_1->Elements).AllocatorInstance.Data + iVar19;
    do {
      (pFVar27->Name).ComparisonIndex = 0;
      (pFVar27->Name).Number = 0;
      pFVar27->Value = 0.0;
      pFVar27->Flags = None;
      *(undefined3 *)&pFVar27->field_0xd = 0;
      pFVar27->Value = 0.0;
      FVar5 = *(FName *)&pFVar25[-1].ComparisonIndex;
      pFVar27->Name = FVar5;
      pFVar23 = (FName *)(pFVar6->FilteredCurves).AllocatorInstance.Data;
      pFVar22 = pFVar23 + (pFVar6->FilteredCurves).ArrayNum;
      for (; pFVar23 != pFVar22; pFVar23 = pFVar23 + 1) {
        if (*pFVar23 == FVar5) {
          EVar18 = None;
          goto LAB_1474ad5fe;
        }
      }
      fVar31 = (float)pFVar25[1].ComparisonIndex.Value;
      fVar32 = (float)(pFVar25->ComparisonIndex).Value;
      if (fVar29 < fVar31 * fVar31) {
        fVar30 = (float)pFVar25[1].Number;
        if ((float)pFVar25[1].Number <= fVar29) {
          fVar30 = fVar29;
        }
        fVar31 = fVar31 / (fVar10 / fVar30);
        fVar30 = (fVar10 / fVar30) * pFVar6->InertializationTime;
        if (fVar31 <= fVar29) {
          fVar31 = fVar29;
        }
        fVar32 = (fVar31 - fVar31 / (((fVar30 * fVar11 + fVar12) * fVar30 + fVar13) * fVar30 + fVar9
                                    )) + fVar32;
      }
      pFVar27->Value = fVar32 * param_4->CurveAlpha;
      EVar18 = (ECurveElementFlags)pFVar25->Number;
LAB_1474ad5fe:
      pFVar27->Flags = EVar18;
      FVar21 = (ForElementType<FAnimNode_DeadBlending::FDeadBlendingCurveElement>)(pFVar25 + 2);
      pFVar25 = pFVar25 + 3;
      pFVar27 = pFVar27 + 1;
    } while ((ulonglong)FVar21 < (ulonglong)FVar4);
  }
LAB_1474ad61e:
  param_1->bSorted = true;
  return;
}

// Union<`FAnimNode_Inertialization::ApplyTo'::__l2::<lambda_1>,TMemStackAllocator<0>,UE::Anim::FCurveElement,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>,UE::Anim::FCurveElement,TSizedDefaultAllocator<32>,FInertializationCurveDiffElement> @ 1474ad6a0

void __cdecl
UE::Anim::FNamedValueArrayUtils::
Union<_FAnimNode_Inertialization::ApplyTo_::__l2::<lambda_1>,TMemStackAllocator<0>,UE::Anim::FCurveElement,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>,UE::Anim::FCurveElement,TSizedDefaultAllocator<32>,FInertializationCurveDiffElement>
          (TNamedValueArray<TMemStackAllocator<0>,UE::Anim::FCurveElement> *param_1,
          TNamedValueArray<TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>,UE::Anim::FCurveElement>
          *param_2,TNamedValueArray<TSizedDefaultAllocator<32>,FInertializationCurveDiffElement>
                   *param_3,<lambda_1> param_4)

{
  int *piVar1;
  uint *puVar2;
  FName *pFVar3;
  int iVar4;
  FName FVar5;
  code *pcVar6;
  int iVar7;
  bool bVar8;
  byte bVar9;
  bool bVar10;
  int iVar11;
  ForElementType<UE::Anim::FCurveElement> FVar12;
  FName *pFVar13;
  FName *pFVar14;
  longlong lVar15;
  ECurveElementFlags EVar16;
  FName *pFVar17;
  FCurveElement *pFVar18;
  uint uVar19;
  ForElementType<UE::Anim::FCurveElement> FVar20;
  float fVar21;
  FIdentityFunctor local_res8;
  FCurveElement local_48 [2];
  
  if (((TNamedValueArray<TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>,UE::Anim::FCurveElement>
        *)param_1 == param_2) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(void*)&OutResultValueArray != (void*)&InValueArray0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Animation\\NamedValueArray.h"
                         ,0x1a0,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  if ((param_1 == (TNamedValueArray<TMemStackAllocator<0>,UE::Anim::FCurveElement> *)param_3) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(void*)&OutResultValueArray != (void*)&InValueArray1",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Animation\\NamedValueArray.h"
                         ,0x1a1,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  if ((param_2 ==
       (TNamedValueArray<TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>,UE::Anim::FCurveElement>
        *)param_3) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(void*)&InValueArray0 != (void*)&InValueArray1",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Animation\\NamedValueArray.h"
                         ,0x1a2,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  piVar1 = &(param_1->Elements).ArrayMax;
  (param_1->Elements).ArrayNum = 0;
  if ((param_1->Elements).ArrayMax < 0) {
    Core::Private::ReallocTo<0,TMemStackAllocator<0>::ForElementType<UE::Anim::FCurveElement>_>
              (0x10,4,0,(ForElementType<UE::Anim::FCurveElement> *)param_1,0,piVar1);
  }
  iVar11 = (param_2->Elements).ArrayNum;
  iVar4 = (param_3->Elements).ArrayNum;
  if (param_2->bSorted == false) {
    FVar20 = (param_2->Elements).AllocatorInstance.SecondaryData;
    FVar12 = (ForElementType<UE::Anim::FCurveElement>)param_2;
    if (FVar20 != (ForElementType<UE::Anim::FCurveElement>)0x0) {
      FVar12 = FVar20;
    }
    AlgoImpl::
    IntroSortInternal<UE::Anim::FCurveElement,int,FIdentityFunctor,UE::Anim::TNamedValueArray<TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>,UE::Anim::FCurveElement>::FElementSortPredicate>
              ((FCurveElement *)FVar12,iVar11,local_res8,(FElementSortPredicate)local_res8);
    param_2->bSorted = true;
  }
  if (param_3->bSorted == false) {
    AlgoImpl::
    IntroSortInternal<FInertializationCurveDiffElement,int,FIdentityFunctor,UE::Anim::TNamedValueArray<TSizedDefaultAllocator<32>,FInertializationCurveDiffElement>::FElementSortPredicate>
              ((FInertializationCurveDiffElement *)(param_3->Elements).AllocatorInstance.Data,
               (param_3->Elements).ArrayNum,local_res8,(FElementSortPredicate)local_res8);
    param_3->bSorted = true;
  }
  iVar7 = iVar4;
  if (iVar4 < iVar11) {
    iVar7 = iVar11;
  }
  uVar19 = iVar7 / 2 + iVar7;
  if ((int)uVar19 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidArrayNum((ulonglong)uVar19);
  }
  if (*piVar1 < (int)uVar19) {
    Core::Private::ReallocTo<0,TMemStackAllocator<0>::ForElementType<UE::Anim::FCurveElement>_>
              (0x10,4,uVar19,(ForElementType<UE::Anim::FCurveElement> *)param_1,
               (param_1->Elements).ArrayNum,piVar1);
  }
  FVar20 = (param_2->Elements).AllocatorInstance.SecondaryData;
  pFVar17 = (FName *)(param_3->Elements).AllocatorInstance.Data;
  if (FVar20 != (ForElementType<UE::Anim::FCurveElement>)0x0) {
    param_2 = (TNamedValueArray<TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>,UE::Anim::FCurveElement>
               *)FVar20;
  }
  piVar1 = &(param_1->Elements).ArrayMax;
  FVar20 = (ForElementType<UE::Anim::FCurveElement>)((longlong)iVar11 * 0x10 + (longlong)param_2);
  pFVar3 = pFVar17 + (longlong)iVar4 * 3;
  if ((ForElementType<UE::Anim::FCurveElement>)param_2 != FVar20) {
    if (pFVar17 != pFVar3) {
      do {
        local_48[0].Name = *pFVar17;
        FVar5 = *(FName *)param_2;
        pFVar13 = (FName *)((param_4.__this)->FilteredCurves).AllocatorInstance.Data;
        local_48[0].Value = 0.0;
        local_48[0]._12_4_ = local_48[0]._12_4_ & 0xffffff00;
        if (FVar5 == local_48[0].Name) {
          pFVar14 = pFVar13 + ((param_4.__this)->FilteredCurves).ArrayNum;
          for (; pFVar13 != pFVar14; pFVar13 = pFVar13 + 1) {
            if (*pFVar13 == FVar5) {
              local_48[0].Value = (float)(((FName *)((longlong)param_2 + 8))->ComparisonIndex).Value
              ;
              bVar9 = *(byte *)((longlong)param_2 + 0xc);
              local_48[0].Name = FVar5;
              goto LAB_1474ad8ec;
            }
          }
          local_48[0].Name = FVar5;
          local_48[0].Value =
               Inertialization::Private::CalcInertialFloat
                         ((float)pFVar17[2].ComparisonIndex.Value,(float)pFVar17[2].Number,
                          (param_4.__this)->InertializationElapsedTime,
                          (param_4.__this)->InertializationDuration);
          bVar9 = *(byte *)((longlong)param_2 + 0xc) | (byte)pFVar17[1].Number;
          local_48[0].Value =
               local_48[0].Value +
               (float)(((FName *)((longlong)param_2 + 8))->ComparisonIndex).Value;
LAB_1474ad8ec:
          param_2 = (TNamedValueArray<TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>,UE::Anim::FCurveElement>
                     *)((longlong)param_2 + 0x10);
          pFVar17 = pFVar17 + 3;
          local_48[0].Flags = bVar9;
          if (((ForElementType<UE::Anim::FCurveElement>)param_2 == FVar20) || (pFVar17 == pFVar3)) {
            bVar8 = true;
          }
          else {
            bVar8 = false;
          }
        }
        else {
          iVar11 = FVar5.ComparisonIndex.Value.Value - local_48[0].Name.ComparisonIndex.Value;
          if (iVar11 == 0) {
            iVar11 = FVar5.Number - local_48[0].Name.Number;
          }
          pFVar14 = pFVar13 + ((param_4.__this)->FilteredCurves).ArrayNum;
          if (iVar11 < 0) {
            for (; pFVar13 != pFVar14; pFVar13 = pFVar13 + 1) {
              if (*pFVar13 == FVar5) {
                local_48[0].Value =
                     (float)(((FName *)((longlong)param_2 + 8))->ComparisonIndex).Value;
                local_48[0].Name = FVar5;
                goto LAB_1474ad976;
              }
            }
            local_48[0].Name = FVar5;
            local_48[0].Value =
                 Inertialization::Private::CalcInertialFloat
                           (0.0,0.0,(param_4.__this)->InertializationElapsedTime,
                            (param_4.__this)->InertializationDuration);
            local_48[0].Value =
                 local_48[0].Value +
                 (float)(((FName *)((longlong)param_2 + 8))->ComparisonIndex).Value;
LAB_1474ad976:
            puVar2 = (uint *)((longlong)param_2 + 0xc);
            param_2 = (TNamedValueArray<TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>,UE::Anim::FCurveElement>
                       *)((longlong)param_2 + 0x10);
            bVar8 = (ForElementType<UE::Anim::FCurveElement>)param_2 == FVar20;
            local_48[0].Flags = *(undefined1 *)puVar2;
          }
          else {
            for (; pFVar13 != pFVar14; pFVar13 = pFVar13 + 1) {
              if (*pFVar13 == local_48[0].Name) goto LAB_1474ad9de;
            }
            local_48[0].Value =
                 Inertialization::Private::CalcInertialFloat
                           ((float)pFVar17[2].ComparisonIndex.Value,(float)pFVar17[2].Number,
                            (param_4.__this)->InertializationElapsedTime,
                            (param_4.__this)->InertializationDuration);
            local_48[0].Flags = (char)pFVar17[1].Number;
LAB_1474ad9de:
            pFVar17 = pFVar17 + 3;
            bVar8 = pFVar17 == pFVar3;
          }
        }
        pFVar18 = (param_1->Elements).AllocatorInstance.Data;
        if (((pFVar18 <= local_48) && (local_48 < pFVar18 + (param_1->Elements).ArrayMax)) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar10)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        iVar11 = (param_1->Elements).ArrayNum;
        if (iVar11 == (param_1->Elements).ArrayMax) {
          iVar11 = Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<0,TMemStackAllocator<0>::ForElementType<UE::Anim::FCurveElement>_>
                             (0x410,(ForElementType<UE::Anim::FCurveElement> *)param_1,piVar1);
        }
        (param_1->Elements).ArrayNum = iVar11 + 1;
        pFVar18 = (param_1->Elements).AllocatorInstance.Data + iVar11;
        pFVar18->Name = local_48[0].Name;
        pFVar18->Value = local_48[0].Value;
        pFVar18->Flags = (char)local_48[0]._12_4_;
        *(int3 *)&pFVar18->field_0xd = SUB43(local_48[0]._12_4_,1);
      } while (!bVar8);
    }
    if (param_2 < (ulonglong)FVar20) {
      iVar11 = (param_1->Elements).ArrayNum;
      iVar4 = (int)((longlong)FVar20 - (longlong)param_2 >> 4);
      uVar19 = iVar11 + iVar4;
      if ((int)uVar19 < 0) {
                    /* WARNING: Subroutine does not return */
        Core::Private::OnInvalidArrayNum((ulonglong)uVar19);
      }
      if ((param_1->Elements).ArrayMax < (int)uVar19) {
        Core::Private::ReallocTo<0,TMemStackAllocator<0>::ForElementType<UE::Anim::FCurveElement>_>
                  (0x10,4,uVar19,(ForElementType<UE::Anim::FCurveElement> *)param_1,iVar11,piVar1);
      }
      Core::Private::ReallocGrow<0,TMemStackAllocator<0>::ForElementType<UE::Anim::FCurveElement>_>
                (0x10,4,iVar4,(ForElementType<UE::Anim::FCurveElement> *)param_1,
                 &(param_1->Elements).ArrayNum,piVar1);
      pFVar18 = (param_1->Elements).AllocatorInstance.Data + iVar11;
      pFVar17 = (FName *)((longlong)param_2 + 8);
      do {
        (pFVar18->Name).ComparisonIndex = 0;
        (pFVar18->Name).Number = 0;
        pFVar18->Value = 0.0;
        pFVar18->Flags = None;
        *(undefined3 *)&pFVar18->field_0xd = 0;
        pFVar18->Value = 0.0;
        FVar5 = pFVar17[-1];
        pFVar18->Name = FVar5;
        pFVar13 = (FName *)((param_4.__this)->FilteredCurves).AllocatorInstance.Data;
        pFVar3 = pFVar13 + ((param_4.__this)->FilteredCurves).ArrayNum;
        for (; pFVar13 != pFVar3; pFVar13 = pFVar13 + 1) {
          if (*pFVar13 == FVar5) {
            fVar21 = (float)(pFVar17->ComparisonIndex).Value;
            goto LAB_1474adb5f;
          }
        }
        fVar21 = Inertialization::Private::CalcInertialFloat
                           (0.0,0.0,(param_4.__this)->InertializationElapsedTime,
                            (param_4.__this)->InertializationDuration);
        fVar21 = fVar21 + (float)(pFVar17->ComparisonIndex).Value;
LAB_1474adb5f:
        pFVar18->Value = fVar21;
        pFVar18->Flags = (ECurveElementFlags)pFVar17->Number;
        pFVar18 = pFVar18 + 1;
        FVar12 = (ForElementType<UE::Anim::FCurveElement>)(pFVar17 + 1);
        pFVar17 = pFVar17 + 2;
      } while ((ulonglong)FVar12 < (ulonglong)FVar20);
      goto LAB_1474adc8c;
    }
  }
  if (pFVar17 < pFVar3) {
    iVar11 = (param_1->Elements).ArrayNum;
    lVar15 = ((longlong)pFVar3 - (longlong)pFVar17) / 6 +
             ((longlong)pFVar3 - (longlong)pFVar17 >> 0x3f);
    iVar4 = (int)(lVar15 >> 2) - (int)(lVar15 >> 0x3f);
    uVar19 = iVar11 + iVar4;
    if ((int)uVar19 < 0) {
                    /* WARNING: Subroutine does not return */
      Core::Private::OnInvalidArrayNum((ulonglong)uVar19);
    }
    if ((param_1->Elements).ArrayMax < (int)uVar19) {
      Core::Private::ReallocTo<0,TMemStackAllocator<0>::ForElementType<UE::Anim::FCurveElement>_>
                (0x10,4,uVar19,(ForElementType<UE::Anim::FCurveElement> *)param_1,iVar11,piVar1);
    }
    Core::Private::ReallocGrow<0,TMemStackAllocator<0>::ForElementType<UE::Anim::FCurveElement>_>
              (0x10,4,iVar4,(ForElementType<UE::Anim::FCurveElement> *)param_1,
               &(param_1->Elements).ArrayNum,piVar1);
    pFVar18 = (param_1->Elements).AllocatorInstance.Data + iVar11;
    pFVar17 = pFVar17 + 2;
    do {
      FVar5 = pFVar17[-2];
      (pFVar18->Name).ComparisonIndex = 0;
      (pFVar18->Name).Number = 0;
      pFVar18->Value = 0.0;
      pFVar18->Flags = None;
      *(undefined3 *)&pFVar18->field_0xd = 0;
      pFVar18->Value = 0.0;
      pFVar18->Name = FVar5;
      pFVar14 = (FName *)((param_4.__this)->FilteredCurves).AllocatorInstance.Data;
      pFVar13 = pFVar14 + ((param_4.__this)->FilteredCurves).ArrayNum;
      for (; pFVar14 != pFVar13; pFVar14 = pFVar14 + 1) {
        if (*pFVar14 == FVar5) {
          EVar16 = None;
          fVar21 = 0.0;
          goto LAB_1474adc72;
        }
      }
      EVar16 = (ECurveElementFlags)pFVar17[-1].Number;
      fVar21 = Inertialization::Private::CalcInertialFloat
                         ((float)(pFVar17->ComparisonIndex).Value,(float)pFVar17->Number,
                          (param_4.__this)->InertializationElapsedTime,
                          (param_4.__this)->InertializationDuration);
LAB_1474adc72:
      pFVar18->Value = fVar21;
      pFVar18->Flags = EVar16;
      pFVar18 = pFVar18 + 1;
      pFVar13 = pFVar17 + 1;
      pFVar17 = pFVar17 + 3;
    } while (pFVar13 < pFVar3);
  }
LAB_1474adc8c:
  param_1->bSorted = true;
  return;
}

// Union<`FInertializationPoseDiff::ApplyTo'::__l2::<lambda_1>,TMemStackAllocator<0>,UE::Anim::FCurveElement,TSizedDefaultAllocator<32>,FInertializationCurveDiffElement> @ 1474adce0

void __cdecl
UE::Anim::FNamedValueArrayUtils::
Union<_FInertializationPoseDiff::ApplyTo_::__l2::<lambda_1>,TMemStackAllocator<0>,UE::Anim::FCurveElement,TSizedDefaultAllocator<32>,FInertializationCurveDiffElement>
          (TNamedValueArray<TMemStackAllocator<0>,UE::Anim::FCurveElement> *param_1,
          TNamedValueArray<TSizedDefaultAllocator<32>,FInertializationCurveDiffElement> *param_2,
          <lambda_1> *param_3)

{
  int *piVar1;
  float **ppfVar2;
  FName *pFVar3;
  FName FVar4;
  FName FVar5;
  float *pfVar6;
  float *pfVar7;
  code *pcVar8;
  int iVar9;
  FName *pFVar10;
  bool bVar11;
  int iVar12;
  longlong lVar13;
  FCurveElement *pFVar14;
  int iVar15;
  FCurveElement *pFVar16;
  FName *pFVar17;
  uint uVar18;
  FCurveElement *pFVar19;
  int *piVar20;
  float fVar21;
  float fVar22;
  FIdentityFunctor local_res8;
  
  if ((param_1 == (TNamedValueArray<TMemStackAllocator<0>,UE::Anim::FCurveElement> *)param_2) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("(void*)&InOutValueArray0 != (void*)&InValueArray1",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Animation\\NamedValueArray.h"
                          ,0x10a,L""), bVar11)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  iVar12 = (param_2->Elements).ArrayNum;
  piVar20 = &(param_1->Elements).ArrayNum;
  iVar15 = *piVar20;
  if (iVar12 != 0) {
    if (param_1->bSorted == false) {
      AlgoImpl::
      IntroSortInternal<UE::Anim::FCurveElement,int,FIdentityFunctor,UE::Anim::TNamedValueArray<TMemStackAllocator<0>,UE::Anim::FCurveElement>::FElementSortPredicate>
                ((param_1->Elements).AllocatorInstance.Data,iVar15,local_res8,
                 (FElementSortPredicate)local_res8);
      param_1->bSorted = true;
    }
    if (param_2->bSorted == false) {
      AlgoImpl::
      IntroSortInternal<FInertializationCurveDiffElement,int,FIdentityFunctor,UE::Anim::TNamedValueArray<TSizedDefaultAllocator<32>,FInertializationCurveDiffElement>::FElementSortPredicate>
                ((FInertializationCurveDiffElement *)(param_2->Elements).AllocatorInstance.Data,
                 (param_2->Elements).ArrayNum,local_res8,(FElementSortPredicate)local_res8);
      param_2->bSorted = true;
    }
    iVar9 = iVar12;
    if (iVar12 < iVar15) {
      iVar9 = iVar15;
    }
    uVar18 = iVar9 / 2 + iVar9;
    if ((int)uVar18 < 0) {
                    /* WARNING: Subroutine does not return */
      Core::Private::OnInvalidArrayNum((ulonglong)uVar18);
    }
    piVar1 = &(param_1->Elements).ArrayMax;
    if ((param_1->Elements).ArrayMax < (int)uVar18) {
      Core::Private::ReallocTo<0,TMemStackAllocator<0>::ForElementType<UE::Anim::FCurveElement>_>
                (0x10,4,uVar18,(ForElementType<UE::Anim::FCurveElement> *)param_1,*piVar20,piVar1);
    }
    pFVar16 = (param_1->Elements).AllocatorInstance.Data;
    pFVar17 = (FName *)(param_2->Elements).AllocatorInstance.Data;
    pFVar19 = pFVar16 + iVar15;
    pFVar3 = pFVar17 + (longlong)iVar12 * 3;
    if ((pFVar16 != pFVar19) && (pFVar17 != pFVar3)) {
      ppfVar2 = &param_3->InertializationDuration;
      do {
        while( true ) {
          FVar4 = *pFVar17;
          FVar5 = pFVar16->Name;
          if (FVar5 != FVar4) break;
          fVar21 = Inertialization::Private::CalcInertialFloat
                             ((float)pFVar17[2].ComparisonIndex.Value,(float)pFVar17[2].Number,
                              *param_3->InertializationElapsedTime,**ppfVar2);
          uVar18 = pFVar17[1].Number;
          pFVar17 = pFVar17 + 3;
          pFVar16->Value = fVar21 + pFVar16->Value;
          pFVar16->Flags = pFVar16->Flags | (ECurveElementFlags)uVar18;
          pFVar16 = pFVar16 + 1;
          if ((pFVar16 == pFVar19) || (pFVar17 == pFVar3)) goto LAB_1474ade89;
        }
        iVar12 = FVar5.ComparisonIndex.Value.Value - FVar4.ComparisonIndex.Value;
        if (iVar12 == 0) {
          iVar12 = FVar5.Number - FVar4.Number;
        }
        if (iVar12 < 0) {
          fVar21 = Inertialization::Private::CalcInertialFloat
                             (0.0,0.0,*param_3->InertializationElapsedTime,**ppfVar2);
          pFVar16->Value = fVar21 + pFVar16->Value;
          pFVar16 = pFVar16 + 1;
          bVar11 = pFVar16 == pFVar19;
        }
        else {
          pFVar19 = (param_1->Elements).AllocatorInstance.Data;
          iVar12 = (param_1->Elements).ArrayNum;
          if (iVar12 == *piVar1) {
            iVar12 = Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<0,TMemStackAllocator<0>::ForElementType<UE::Anim::FCurveElement>_>
                               (0x410,(ForElementType<UE::Anim::FCurveElement> *)param_1,piVar1);
          }
          pFVar14 = (param_1->Elements).AllocatorInstance.Data;
          iVar15 = (int)((longlong)pFVar16 - (longlong)pFVar19 >> 4);
          (param_1->Elements).ArrayNum = iVar12 + 1;
          pFVar14 = pFVar14 + iVar15;
          memmove(pFVar14 + 1,pFVar14,(longlong)(iVar12 - iVar15) << 4);
          pFVar16 = (param_1->Elements).AllocatorInstance.Data;
          iVar12 = (param_1->Elements).ArrayNum;
          pfVar6 = *ppfVar2;
          fVar21 = (float)pFVar17[2].Number;
          pFVar19 = pFVar16 + iVar15;
          (pFVar19->Name).ComparisonIndex = 0;
          (pFVar19->Name).Number = 0;
          pFVar19->Value = 0.0;
          pFVar19->Flags = None;
          *(undefined3 *)&pFVar19->field_0xd = 0;
          pFVar16[iVar15].Value = 0.0;
          pfVar7 = param_3->InertializationElapsedTime;
          fVar22 = (float)pFVar17[2].ComparisonIndex.Value;
          pFVar16[iVar15].Name = FVar4;
          pFVar19 = pFVar16 + iVar12;
          fVar22 = Inertialization::Private::CalcInertialFloat(fVar22,fVar21,*pfVar7,*pfVar6);
          fVar21 = pFVar16[iVar15].Value;
          pFVar10 = pFVar17 + 1;
          pFVar17 = pFVar17 + 3;
          pFVar16[iVar15].Flags = pFVar16[iVar15].Flags | (ECurveElementFlags)pFVar10->Number;
          pFVar16[iVar15].Value = fVar22 + fVar21;
          pFVar16 = pFVar16 + (longlong)iVar15 + 1;
          bVar11 = pFVar17 == pFVar3;
        }
      } while (!bVar11);
    }
LAB_1474ade89:
    piVar20 = &(param_1->Elements).ArrayNum;
    if (pFVar17 < pFVar3) {
      iVar12 = *piVar20;
      lVar13 = ((longlong)pFVar3 - (longlong)pFVar17) / 6 +
               ((longlong)pFVar3 - (longlong)pFVar17 >> 0x3f);
      iVar15 = (int)(lVar13 >> 2) - (int)(lVar13 >> 0x3f);
      uVar18 = iVar15 + iVar12;
      if ((int)uVar18 < 0) {
                    /* WARNING: Subroutine does not return */
        Core::Private::OnInvalidArrayNum((ulonglong)uVar18);
      }
      if (*piVar1 < (int)uVar18) {
        Core::Private::ReallocTo<0,TMemStackAllocator<0>::ForElementType<UE::Anim::FCurveElement>_>
                  (0x10,4,uVar18,(ForElementType<UE::Anim::FCurveElement> *)param_1,iVar12,piVar1);
      }
      Core::Private::ReallocGrow<0,TMemStackAllocator<0>::ForElementType<UE::Anim::FCurveElement>_>
                (0x10,4,iVar15,(ForElementType<UE::Anim::FCurveElement> *)param_1,piVar20,piVar1);
      pfVar6 = param_3->InertializationDuration;
      pFVar16 = (param_1->Elements).AllocatorInstance.Data + iVar12;
      pfVar7 = param_3->InertializationElapsedTime;
      pFVar17 = pFVar17 + 2;
      do {
        FVar4 = pFVar17[-2];
        fVar21 = (float)pFVar17->Number;
        (pFVar16->Name).ComparisonIndex = 0;
        (pFVar16->Name).Number = 0;
        pFVar16->Value = 0.0;
        pFVar16->Flags = None;
        *(undefined3 *)&pFVar16->field_0xd = 0;
        pFVar16->Value = 0.0;
        fVar22 = (float)(pFVar17->ComparisonIndex).Value;
        pFVar16->Name = FVar4;
        fVar21 = Inertialization::Private::CalcInertialFloat(fVar22,fVar21,*pfVar7,*pfVar6);
        pFVar16->Flags = pFVar16->Flags | (ECurveElementFlags)pFVar17[-1].Number;
        pFVar10 = pFVar17 + 1;
        pFVar16->Value = fVar21 + pFVar16->Value;
        pFVar16 = pFVar16 + 1;
        pFVar17 = pFVar17 + 3;
      } while (pFVar10 < pFVar3);
    }
  }
  return;
}

// Union<`FAnimNode_DeadBlending::InitFrom'::__l2::<lambda_1>,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>,FAnimNode_DeadBlending::FDeadBlendingCurveElement,TSizedDefaultAllocator<32>,UE::Anim::FCurveElement> @ 1474ae0c0

void __cdecl
UE::Anim::FNamedValueArrayUtils::
Union<_FAnimNode_DeadBlending::InitFrom_::__l2::<lambda_1>,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>,FAnimNode_DeadBlending::FDeadBlendingCurveElement,TSizedDefaultAllocator<32>,UE::Anim::FCurveElement>
          (TNamedValueArray<TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>,FAnimNode_DeadBlending::FDeadBlendingCurveElement>
           *param_1,TNamedValueArray<TSizedDefaultAllocator<32>,UE::Anim::FCurveElement> *param_2,
          <lambda_1> param_3)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  longlong lVar4;
  code *pcVar5;
  int iVar6;
  bool bVar7;
  int iVar8;
  ForElementType<FAnimNode_DeadBlending::FDeadBlendingCurveElement> FVar9;
  ForElementType<FAnimNode_DeadBlending::FDeadBlendingCurveElement> FVar10;
  longlong lVar11;
  uchar *puVar12;
  longlong *plVar13;
  FScriptContainerElement *pFVar14;
  FScriptContainerElement *pFVar15;
  uint uVar16;
  ForElementType<FAnimNode_DeadBlending::FDeadBlendingCurveElement> FVar17;
  int *piVar18;
  FIdentityFunctor local_res8;
  
  if ((param_1 ==
       (TNamedValueArray<TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>,FAnimNode_DeadBlending::FDeadBlendingCurveElement>
        *)param_2) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(void*)&InOutValueArray0 != (void*)&InValueArray1",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Animation\\NamedValueArray.h"
                         ,0x10a,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  iVar8 = (param_2->Elements).ArrayNum;
  piVar1 = &(param_1->Elements).ArrayNum;
  iVar2 = *piVar1;
  if (iVar8 != 0) {
    if (param_1->bSorted == false) {
      FVar17 = (param_1->Elements).AllocatorInstance.SecondaryData;
      FVar10 = (ForElementType<FAnimNode_DeadBlending::FDeadBlendingCurveElement>)param_1;
      if (FVar17 != (ForElementType<FAnimNode_DeadBlending::FDeadBlendingCurveElement>)0x0) {
        FVar10 = FVar17;
      }
      AlgoImpl::
      IntroSortInternal<FAnimNode_DeadBlending::FDeadBlendingCurveElement,int,FIdentityFunctor,UE::Anim::TNamedValueArray<TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>,FAnimNode_DeadBlending::FDeadBlendingCurveElement>::FElementSortPredicate>
                ((FDeadBlendingCurveElement *)FVar10,iVar2,local_res8,
                 (FElementSortPredicate)local_res8);
      param_1->bSorted = true;
    }
    if (param_2->bSorted == false) {
      AlgoImpl::
      IntroSortInternal<UE::Anim::FCurveElement,int,FIdentityFunctor,UE::Anim::TNamedValueArray<TSizedDefaultAllocator<32>,UE::Anim::FCurveElement>::FElementSortPredicate>
                ((FCurveElement *)(param_2->Elements).AllocatorInstance.Data,
                 (param_2->Elements).ArrayNum,local_res8,(FElementSortPredicate)local_res8);
      param_2->bSorted = true;
    }
    iVar6 = iVar8;
    if (iVar8 < iVar2) {
      iVar6 = iVar2;
    }
    uVar16 = iVar6 / 2 + iVar6;
    if ((int)uVar16 < 0) {
                    /* WARNING: Subroutine does not return */
      Core::Private::OnInvalidArrayNum((ulonglong)uVar16);
    }
    piVar18 = &(param_1->Elements).ArrayMax;
    if (*piVar18 < (int)uVar16) {
      Core::Private::
      ReallocTo<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FAnimNode_DeadBlending::FDeadBlendingCurveElement>_>
                (0x18,4,uVar16,
                 (ForElementType<FAnimNode_DeadBlending::FDeadBlendingCurveElement> *)param_1,
                 *piVar1,piVar18);
    }
    FVar17 = (param_1->Elements).AllocatorInstance.SecondaryData;
    pFVar15 = (param_2->Elements).AllocatorInstance.Data;
    FVar10 = (ForElementType<FAnimNode_DeadBlending::FDeadBlendingCurveElement>)param_1;
    if (FVar17 != (ForElementType<FAnimNode_DeadBlending::FDeadBlendingCurveElement>)0x0) {
      FVar10 = FVar17;
    }
    pFVar14 = pFVar15 + (longlong)iVar8 * 0x10;
    FVar17 = (ForElementType<FAnimNode_DeadBlending::FDeadBlendingCurveElement>)
             ((longlong)FVar10 + (longlong)iVar2 * 0x18);
    if (FVar10 != FVar17) {
      if (pFVar15 == pFVar14) {
        return;
      }
      do {
        while( true ) {
          lVar4 = *(longlong *)pFVar15;
          lVar11 = *(longlong *)FVar10;
          if (lVar11 != lVar4) break;
          *(undefined4 *)((longlong)FVar10 + 8) = *(undefined4 *)(pFVar15 + 8);
          pFVar15 = pFVar15 + 0x10;
          puVar12 = (uchar *)((longlong)FVar10 + 0x10);
          puVar12[0] = '\0';
          puVar12[1] = '\0';
          puVar12[2] = '\0';
          puVar12[3] = '\0';
          *(float *)((longlong)FVar10 + 0x14) = (param_3.__this)->ExtrapolationHalfLifeMin;
          FVar10 = (ForElementType<FAnimNode_DeadBlending::FDeadBlendingCurveElement>)
                   ((longlong)FVar10 + 0x18);
          if ((FVar10 == FVar17) || (pFVar15 == pFVar14)) goto LAB_1474ae33e;
        }
        iVar8 = (int)lVar11 - (int)lVar4;
        if (iVar8 == 0) {
          iVar8 = (int)((ulonglong)lVar11 >> 0x20) - (int)((ulonglong)lVar4 >> 0x20);
        }
        if (iVar8 < 0) {
          puVar12 = (uchar *)((longlong)FVar10 + 8);
          puVar12[0] = '\0';
          puVar12[1] = '\0';
          puVar12[2] = '\0';
          puVar12[3] = '\0';
          puVar12 = (uchar *)((longlong)FVar10 + 0x10);
          puVar12[0] = '\0';
          puVar12[1] = '\0';
          puVar12[2] = '\0';
          puVar12[3] = '\0';
          *(float *)((longlong)FVar10 + 0x14) = (param_3.__this)->ExtrapolationHalfLifeMin;
          FVar10 = (ForElementType<FAnimNode_DeadBlending::FDeadBlendingCurveElement>)
                   ((longlong)FVar10 + 0x18);
          bVar7 = FVar10 == FVar17;
        }
        else {
          FVar17 = (param_1->Elements).AllocatorInstance.SecondaryData;
          FVar9 = (ForElementType<FAnimNode_DeadBlending::FDeadBlendingCurveElement>)param_1;
          if (FVar17 != (ForElementType<FAnimNode_DeadBlending::FDeadBlendingCurveElement>)0x0) {
            FVar9 = FVar17;
          }
          lVar11 = ((longlong)FVar10 - (longlong)FVar9) / 6 +
                   ((longlong)FVar10 - (longlong)FVar9 >> 0x3f);
          iVar8 = (int)(lVar11 >> 2) - (int)(lVar11 >> 0x3f);
          TArray<FAnimNode_DeadBlending::FDeadBlendingCurveElement,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
          ::InsertUninitializedImpl(&param_1->Elements,iVar8);
          FVar17 = (param_1->Elements).AllocatorInstance.SecondaryData;
          if (FVar17 == (ForElementType<FAnimNode_DeadBlending::FDeadBlendingCurveElement>)0x0) {
            puVar12 = (param_1->Elements).AllocatorInstance.InlineData + (longlong)iVar8 * 0x18;
            FVar17 = (ForElementType<FAnimNode_DeadBlending::FDeadBlendingCurveElement>)param_1;
          }
          else {
            puVar12 = (uchar *)((longlong)FVar17 + (longlong)iVar8 * 0x18);
          }
          iVar8 = (param_1->Elements).ArrayNum;
          puVar12[0xd] = '\0';
          puVar12[0xe] = '\0';
          puVar12[0xf] = '\0';
          puVar12[0x10] = '\0';
          puVar12[0x11] = '\0';
          puVar12[0x12] = '\0';
          puVar12[0x13] = '\0';
          puVar12[0x14] = '\0';
          puVar12[0x15] = '\0';
          puVar12[0x16] = '\0';
          puVar12[0x17] = '\0';
          puVar12[0xc] = '\0';
          uVar3 = *(undefined4 *)(pFVar15 + 8);
          FVar17 = (ForElementType<FAnimNode_DeadBlending::FDeadBlendingCurveElement>)
                   ((longlong)FVar17 + (longlong)iVar8 * 0x18);
          *(longlong *)puVar12 = lVar4;
          *(undefined4 *)(puVar12 + 8) = uVar3;
          pFVar15 = pFVar15 + 0x10;
          *(float *)(puVar12 + 0x14) = (param_3.__this)->ExtrapolationHalfLifeMin;
          FVar10 = (ForElementType<FAnimNode_DeadBlending::FDeadBlendingCurveElement>)
                   ((longlong)puVar12 + 0x18);
          bVar7 = pFVar15 == pFVar14;
        }
      } while (!bVar7);
    }
LAB_1474ae33e:
    piVar18 = &(param_1->Elements).ArrayMax;
    if (pFVar15 < pFVar14) {
      iVar8 = (param_1->Elements).ArrayNum;
      iVar2 = (int)((longlong)pFVar14 - (longlong)pFVar15 >> 4);
      uVar16 = iVar8 + iVar2;
      if ((int)uVar16 < 0) {
                    /* WARNING: Subroutine does not return */
        Core::Private::OnInvalidArrayNum((ulonglong)uVar16);
      }
      if ((param_1->Elements).ArrayMax < (int)uVar16) {
        Core::Private::
        ReallocTo<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FAnimNode_DeadBlending::FDeadBlendingCurveElement>_>
                  (0x18,4,uVar16,
                   (ForElementType<FAnimNode_DeadBlending::FDeadBlendingCurveElement> *)param_1,
                   iVar8,piVar18);
      }
      Core::Private::
      ReallocGrow<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FAnimNode_DeadBlending::FDeadBlendingCurveElement>_>
                (0x18,4,iVar2,
                 (ForElementType<FAnimNode_DeadBlending::FDeadBlendingCurveElement> *)param_1,piVar1
                 ,piVar18);
      FVar17 = (param_1->Elements).AllocatorInstance.SecondaryData;
      if (FVar17 != (ForElementType<FAnimNode_DeadBlending::FDeadBlendingCurveElement>)0x0) {
        param_1 = (TNamedValueArray<TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>,FAnimNode_DeadBlending::FDeadBlendingCurveElement>
                   *)FVar17;
      }
      plVar13 = (longlong *)((longlong)param_1 + (longlong)iVar8 * 0x18);
      do {
        *(undefined2 *)((longlong)plVar13 + 0xd) = 0;
        *(undefined1 *)((longlong)plVar13 + 0xf) = 0;
        *plVar13 = *(longlong *)pFVar15;
        uVar3 = *(undefined4 *)(pFVar15 + 8);
        pFVar15 = pFVar15 + 0x10;
        plVar13[2] = 0;
        *(undefined4 *)(plVar13 + 1) = uVar3;
        *(undefined1 *)((longlong)plVar13 + 0xc) = 0;
        *(float *)((longlong)plVar13 + 0x14) = (param_3.__this)->ExtrapolationHalfLifeMin;
        plVar13 = plVar13 + 3;
      } while (pFVar15 < pFVar14);
    }
  }
  return;
}

// Union<`FAnimNode_Inertialization::InitFrom'::__l2::<lambda_1>,TSizedDefaultAllocator<32>,FInertializationCurveDiffElement,TSizedDefaultAllocator<32>,UE::Anim::FCurveElement> @ 1474ae440

void __cdecl
UE::Anim::FNamedValueArrayUtils::
Union<_FAnimNode_Inertialization::InitFrom_::__l2::<lambda_1>,TSizedDefaultAllocator<32>,FInertializationCurveDiffElement,TSizedDefaultAllocator<32>,UE::Anim::FCurveElement>
          (TNamedValueArray<TSizedDefaultAllocator<32>,FInertializationCurveDiffElement> *param_1,
          TNamedValueArray<TSizedDefaultAllocator<32>,UE::Anim::FCurveElement> *param_2,
          <lambda_1> param_3)

{
  int *piVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  undefined4 uVar4;
  longlong lVar5;
  code *pcVar6;
  int iVar7;
  bool bVar8;
  int iVar9;
  longlong lVar10;
  FScriptContainerElement *pFVar11;
  FScriptContainerElement *pFVar12;
  int iVar13;
  FScriptContainerElement *pFVar14;
  uint uVar15;
  FScriptContainerElement *pFVar16;
  FIdentityFunctor local_res8;
  
  if ((param_1 ==
       (TNamedValueArray<TSizedDefaultAllocator<32>,FInertializationCurveDiffElement> *)param_2) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(void*)&InOutValueArray0 != (void*)&InValueArray1",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Animation\\NamedValueArray.h"
                         ,0x10a,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  iVar9 = (param_2->Elements).ArrayNum;
  piVar1 = &(param_1->Elements).ArrayNum;
  iVar13 = *piVar1;
  if (iVar9 != 0) {
    if (param_1->bSorted == false) {
      AlgoImpl::
      IntroSortInternal<FInertializationCurveDiffElement,int,FIdentityFunctor,UE::Anim::TNamedValueArray<TSizedDefaultAllocator<32>,FInertializationCurveDiffElement>::FElementSortPredicate>
                ((FInertializationCurveDiffElement *)(param_1->Elements).AllocatorInstance.Data,
                 iVar13,local_res8,(FElementSortPredicate)local_res8);
      param_1->bSorted = true;
    }
    if (param_2->bSorted == false) {
      AlgoImpl::
      IntroSortInternal<UE::Anim::FCurveElement,int,FIdentityFunctor,UE::Anim::TNamedValueArray<TSizedDefaultAllocator<32>,UE::Anim::FCurveElement>::FElementSortPredicate>
                ((FCurveElement *)(param_2->Elements).AllocatorInstance.Data,
                 (param_2->Elements).ArrayNum,local_res8,(FElementSortPredicate)local_res8);
      param_2->bSorted = true;
    }
    iVar7 = iVar9;
    if (iVar9 < iVar13) {
      iVar7 = iVar13;
    }
    uVar15 = iVar7 / 2 + iVar7;
    if ((int)uVar15 < 0) {
                    /* WARNING: Subroutine does not return */
      Core::Private::OnInvalidArrayNum((ulonglong)uVar15);
    }
    piVar2 = &(param_1->Elements).ArrayMax;
    if (*piVar2 < (int)uVar15) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,4,uVar15,(ForAnyElementType *)param_1,*piVar1,piVar2);
    }
    uVar15 = __xmm_80000000800000008000000080000000;
    pFVar11 = (param_1->Elements).AllocatorInstance.Data;
    pFVar14 = (param_2->Elements).AllocatorInstance.Data;
    pFVar16 = pFVar14 + (longlong)iVar9 * 0x10;
    pFVar12 = pFVar11 + (longlong)iVar13 * 0x18;
    if (pFVar11 != pFVar12) {
      if (pFVar14 == pFVar16) {
        return;
      }
      do {
        while( true ) {
          lVar5 = *(longlong *)pFVar14;
          lVar10 = *(longlong *)pFVar11;
          if (lVar10 != lVar5) break;
          pFVar3 = pFVar14 + 8;
          pFVar14 = pFVar14 + 0x10;
          *(float *)(pFVar11 + 0x10) = *(float *)pFVar3 - *(float *)(pFVar11 + 8);
          pFVar11 = pFVar11 + 0x18;
          if ((pFVar11 == pFVar12) || (pFVar14 == pFVar16)) goto LAB_1474ae6a7;
        }
        iVar9 = (int)lVar10 - (int)lVar5;
        if (iVar9 == 0) {
          iVar9 = (int)((ulonglong)lVar10 >> 0x20) - (int)((ulonglong)lVar5 >> 0x20);
        }
        if (iVar9 < 0) {
          *(uint *)(pFVar11 + 0x10) = *(uint *)(pFVar11 + 8) ^ uVar15;
          pFVar11 = pFVar11 + 0x18;
          bVar8 = pFVar11 == pFVar12;
        }
        else {
          lVar10 = (longlong)pFVar11 - (longlong)(param_1->Elements).AllocatorInstance.Data;
          lVar10 = lVar10 / 6 + (lVar10 >> 0x3f);
          iVar13 = (int)(lVar10 >> 2) - (int)(lVar10 >> 0x3f);
          iVar9 = *piVar1;
          if (iVar9 == *piVar2) {
            iVar9 = Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x418,(ForAnyElementType *)param_1,piVar2);
          }
          *piVar1 = iVar9 + 1;
          lVar10 = (longlong)iVar13;
          pFVar12 = (param_1->Elements).AllocatorInstance.Data + lVar10 * 0x18;
          memmove(pFVar12 + 0x18,pFVar12,(longlong)(iVar9 - iVar13) * 0x18);
          iVar9 = *piVar1;
          pFVar11 = (param_1->Elements).AllocatorInstance.Data;
          *(undefined2 *)(pFVar11 + lVar10 * 0x18 + 0xd) = 0;
          pFVar12 = pFVar11 + (longlong)iVar9 * 0x18;
          pFVar11[lVar10 * 0x18 + 0xf] = (FScriptContainerElement)0x0;
          *(undefined4 *)(pFVar11 + lVar10 * 0x18 + 8) = 0;
          pFVar11[lVar10 * 0x18 + 0xc] = (FScriptContainerElement)0x0;
          *(undefined4 *)(pFVar11 + lVar10 * 0x18 + 0x14) = 0;
          pFVar3 = pFVar14 + 8;
          pFVar14 = pFVar14 + 0x10;
          *(undefined4 *)(pFVar11 + lVar10 * 0x18 + 0x10) = *(undefined4 *)pFVar3;
          *(longlong *)(pFVar11 + lVar10 * 0x18) = lVar5;
          pFVar11 = pFVar11 + lVar10 * 0x18 + 0x18;
          bVar8 = pFVar14 == pFVar16;
        }
      } while (!bVar8);
    }
LAB_1474ae6a7:
    if (pFVar14 < pFVar16) {
      iVar9 = *piVar1;
      iVar13 = (int)((longlong)pFVar16 - (longlong)pFVar14 >> 4);
      uVar15 = iVar13 + iVar9;
      if ((int)uVar15 < 0) {
                    /* WARNING: Subroutine does not return */
        Core::Private::OnInvalidArrayNum((ulonglong)uVar15);
      }
      if (*piVar2 < (int)uVar15) {
        Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,4,uVar15,(ForAnyElementType *)param_1,iVar9,piVar2);
      }
      Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,4,iVar13,(ForAnyElementType *)param_1,piVar1,piVar2);
      pFVar12 = (param_1->Elements).AllocatorInstance.Data + (longlong)iVar9 * 0x18;
      do {
        *(undefined2 *)(pFVar12 + 0xd) = 0;
        pFVar12[0xf] = (FScriptContainerElement)0x0;
        *(longlong *)pFVar12 = *(longlong *)pFVar14;
        uVar4 = *(undefined4 *)(pFVar14 + 8);
        pFVar14 = pFVar14 + 0x10;
        *(undefined4 *)(pFVar12 + 8) = 0;
        pFVar12[0xc] = (FScriptContainerElement)0x0;
        *(undefined4 *)(pFVar12 + 0x14) = 0;
        *(undefined4 *)(pFVar12 + 0x10) = uVar4;
        pFVar12 = pFVar12 + 0x18;
      } while (pFVar14 < pFVar16);
    }
  }
  return;
}

// Union<`FInertializationPoseDiff::InitFrom'::__l2::<lambda_1>,TSizedDefaultAllocator<32>,FInertializationCurveDiffElement,TSizedDefaultAllocator<32>,UE::Anim::FCurveElement> @ 1474ae790

void __cdecl
UE::Anim::FNamedValueArrayUtils::
Union<_FInertializationPoseDiff::InitFrom_::__l2::<lambda_1>,TSizedDefaultAllocator<32>,FInertializationCurveDiffElement,TSizedDefaultAllocator<32>,UE::Anim::FCurveElement>
          (TNamedValueArray<TSizedDefaultAllocator<32>,FInertializationCurveDiffElement> *param_1,
          TNamedValueArray<TSizedDefaultAllocator<32>,UE::Anim::FCurveElement> *param_2,
          <lambda_1> param_3)

{
  int *piVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  undefined4 uVar4;
  longlong lVar5;
  code *pcVar6;
  int iVar7;
  bool bVar8;
  int iVar9;
  longlong lVar10;
  FScriptContainerElement *pFVar11;
  FScriptContainerElement *pFVar12;
  int iVar13;
  FScriptContainerElement *pFVar14;
  uint uVar15;
  FScriptContainerElement *pFVar16;
  FIdentityFunctor local_res8;
  
  if ((param_1 ==
       (TNamedValueArray<TSizedDefaultAllocator<32>,FInertializationCurveDiffElement> *)param_2) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(void*)&InOutValueArray0 != (void*)&InValueArray1",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Animation\\NamedValueArray.h"
                         ,0x10a,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  iVar9 = (param_2->Elements).ArrayNum;
  piVar1 = &(param_1->Elements).ArrayNum;
  iVar13 = *piVar1;
  if (iVar9 != 0) {
    if (param_1->bSorted == false) {
      AlgoImpl::
      IntroSortInternal<FInertializationCurveDiffElement,int,FIdentityFunctor,UE::Anim::TNamedValueArray<TSizedDefaultAllocator<32>,FInertializationCurveDiffElement>::FElementSortPredicate>
                ((FInertializationCurveDiffElement *)(param_1->Elements).AllocatorInstance.Data,
                 iVar13,local_res8,(FElementSortPredicate)local_res8);
      param_1->bSorted = true;
    }
    if (param_2->bSorted == false) {
      AlgoImpl::
      IntroSortInternal<UE::Anim::FCurveElement,int,FIdentityFunctor,UE::Anim::TNamedValueArray<TSizedDefaultAllocator<32>,UE::Anim::FCurveElement>::FElementSortPredicate>
                ((FCurveElement *)(param_2->Elements).AllocatorInstance.Data,
                 (param_2->Elements).ArrayNum,local_res8,(FElementSortPredicate)local_res8);
      param_2->bSorted = true;
    }
    iVar7 = iVar9;
    if (iVar9 < iVar13) {
      iVar7 = iVar13;
    }
    uVar15 = iVar7 / 2 + iVar7;
    if ((int)uVar15 < 0) {
                    /* WARNING: Subroutine does not return */
      Core::Private::OnInvalidArrayNum((ulonglong)uVar15);
    }
    piVar2 = &(param_1->Elements).ArrayMax;
    if (*piVar2 < (int)uVar15) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,4,uVar15,(ForAnyElementType *)param_1,*piVar1,piVar2);
    }
    uVar15 = __xmm_80000000800000008000000080000000;
    pFVar11 = (param_1->Elements).AllocatorInstance.Data;
    pFVar14 = (param_2->Elements).AllocatorInstance.Data;
    pFVar16 = pFVar14 + (longlong)iVar9 * 0x10;
    pFVar12 = pFVar11 + (longlong)iVar13 * 0x18;
    if (pFVar11 != pFVar12) {
      if (pFVar14 == pFVar16) {
        return;
      }
      do {
        while( true ) {
          lVar5 = *(longlong *)pFVar14;
          lVar10 = *(longlong *)pFVar11;
          if (lVar10 != lVar5) break;
          pFVar3 = pFVar14 + 8;
          pFVar14 = pFVar14 + 0x10;
          *(float *)(pFVar11 + 0x10) = *(float *)pFVar3 - *(float *)(pFVar11 + 8);
          pFVar11 = pFVar11 + 0x18;
          if ((pFVar11 == pFVar12) || (pFVar14 == pFVar16)) goto LAB_1474ae9f7;
        }
        iVar9 = (int)lVar10 - (int)lVar5;
        if (iVar9 == 0) {
          iVar9 = (int)((ulonglong)lVar10 >> 0x20) - (int)((ulonglong)lVar5 >> 0x20);
        }
        if (iVar9 < 0) {
          *(uint *)(pFVar11 + 0x10) = *(uint *)(pFVar11 + 8) ^ uVar15;
          pFVar11 = pFVar11 + 0x18;
          bVar8 = pFVar11 == pFVar12;
        }
        else {
          lVar10 = (longlong)pFVar11 - (longlong)(param_1->Elements).AllocatorInstance.Data;
          lVar10 = lVar10 / 6 + (lVar10 >> 0x3f);
          iVar13 = (int)(lVar10 >> 2) - (int)(lVar10 >> 0x3f);
          iVar9 = *piVar1;
          if (iVar9 == *piVar2) {
            iVar9 = Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x418,(ForAnyElementType *)param_1,piVar2);
          }
          *piVar1 = iVar9 + 1;
          lVar10 = (longlong)iVar13;
          pFVar12 = (param_1->Elements).AllocatorInstance.Data + lVar10 * 0x18;
          memmove(pFVar12 + 0x18,pFVar12,(longlong)(iVar9 - iVar13) * 0x18);
          iVar9 = *piVar1;
          pFVar11 = (param_1->Elements).AllocatorInstance.Data;
          *(undefined2 *)(pFVar11 + lVar10 * 0x18 + 0xd) = 0;
          pFVar12 = pFVar11 + (longlong)iVar9 * 0x18;
          pFVar11[lVar10 * 0x18 + 0xf] = (FScriptContainerElement)0x0;
          *(undefined4 *)(pFVar11 + lVar10 * 0x18 + 8) = 0;
          pFVar11[lVar10 * 0x18 + 0xc] = (FScriptContainerElement)0x0;
          *(undefined4 *)(pFVar11 + lVar10 * 0x18 + 0x14) = 0;
          pFVar3 = pFVar14 + 8;
          pFVar14 = pFVar14 + 0x10;
          *(undefined4 *)(pFVar11 + lVar10 * 0x18 + 0x10) = *(undefined4 *)pFVar3;
          *(longlong *)(pFVar11 + lVar10 * 0x18) = lVar5;
          pFVar11 = pFVar11 + lVar10 * 0x18 + 0x18;
          bVar8 = pFVar14 == pFVar16;
        }
      } while (!bVar8);
    }
LAB_1474ae9f7:
    if (pFVar14 < pFVar16) {
      iVar9 = *piVar1;
      iVar13 = (int)((longlong)pFVar16 - (longlong)pFVar14 >> 4);
      uVar15 = iVar13 + iVar9;
      if ((int)uVar15 < 0) {
                    /* WARNING: Subroutine does not return */
        Core::Private::OnInvalidArrayNum((ulonglong)uVar15);
      }
      if (*piVar2 < (int)uVar15) {
        Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,4,uVar15,(ForAnyElementType *)param_1,iVar9,piVar2);
      }
      Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,4,iVar13,(ForAnyElementType *)param_1,piVar1,piVar2);
      pFVar12 = (param_1->Elements).AllocatorInstance.Data + (longlong)iVar9 * 0x18;
      do {
        *(undefined2 *)(pFVar12 + 0xd) = 0;
        pFVar12[0xf] = (FScriptContainerElement)0x0;
        *(longlong *)pFVar12 = *(longlong *)pFVar14;
        uVar4 = *(undefined4 *)(pFVar14 + 8);
        pFVar14 = pFVar14 + 0x10;
        *(undefined4 *)(pFVar12 + 8) = 0;
        pFVar12[0xc] = (FScriptContainerElement)0x0;
        *(undefined4 *)(pFVar12 + 0x14) = 0;
        *(undefined4 *)(pFVar12 + 0x10) = uVar4;
        pFVar12 = pFVar12 + 0x18;
      } while (pFVar14 < pFVar16);
    }
  }
  return;
}

// Union<`TBaseBlendedCurve<TSizedDefaultAllocator<32>,FInertializationCurveDiffElement>::CopyFrom<TMemStackAllocator<0>,UE::Anim::FCurveElement>'::__l3::<lambda_1>,TSizedDefaultAllocator<32>,FInertializationCurveDiffElement,TMemStackAllocator<0>,UE::Anim::FCurveElement> @ 1474aeae0

void __cdecl
UE::Anim::FNamedValueArrayUtils::
Union<_TBaseBlendedCurve<TSizedDefaultAllocator<32>,FInertializationCurveDiffElement>::CopyFrom<TMemStackAllocator<0>,UE::Anim::FCurveElement>_::__l3::<lambda_1>,TSizedDefaultAllocator<32>,FInertializationCurveDiffElement,TMemStackAllocator<0>,UE::Anim::FCurveElement>
          (TNamedValueArray<TSizedDefaultAllocator<32>,FInertializationCurveDiffElement> *param_1,
          TNamedValueArray<TMemStackAllocator<0>,UE::Anim::FCurveElement> *param_2,
          <lambda_1> param_3)

{
  int *piVar1;
  int *piVar2;
  ECurveElementFlags *pEVar3;
  FScriptContainerElement *pFVar4;
  ECurveElementFlags EVar5;
  FName FVar6;
  FName FVar7;
  code *pcVar8;
  int iVar9;
  bool bVar10;
  int iVar11;
  longlong lVar12;
  FName *pFVar13;
  FName *pFVar14;
  int iVar15;
  FCurveElement *pFVar16;
  uint uVar17;
  FCurveElement *pFVar18;
  FIdentityFunctor local_res8;
  
  if (((TNamedValueArray<TMemStackAllocator<0>,UE::Anim::FCurveElement> *)param_1 == param_2) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(void*)&InOutValueArray0 != (void*)&InValueArray1",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Animation\\NamedValueArray.h"
                          ,0x10a,L""), bVar10)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  iVar11 = (param_2->Elements).ArrayNum;
  piVar1 = &(param_1->Elements).ArrayNum;
  iVar15 = *piVar1;
  if (iVar11 != 0) {
    if (param_1->bSorted == false) {
      AlgoImpl::
      IntroSortInternal<FInertializationCurveDiffElement,int,FIdentityFunctor,UE::Anim::TNamedValueArray<TSizedDefaultAllocator<32>,FInertializationCurveDiffElement>::FElementSortPredicate>
                ((FInertializationCurveDiffElement *)(param_1->Elements).AllocatorInstance.Data,
                 iVar15,local_res8,(FElementSortPredicate)local_res8);
      param_1->bSorted = true;
    }
    if (param_2->bSorted == false) {
      AlgoImpl::
      IntroSortInternal<UE::Anim::FCurveElement,int,FIdentityFunctor,UE::Anim::TNamedValueArray<TMemStackAllocator<0>,UE::Anim::FCurveElement>::FElementSortPredicate>
                ((param_2->Elements).AllocatorInstance.Data,(param_2->Elements).ArrayNum,local_res8,
                 (FElementSortPredicate)local_res8);
      param_2->bSorted = true;
    }
    iVar9 = iVar11;
    if (iVar11 < iVar15) {
      iVar9 = iVar15;
    }
    uVar17 = iVar9 / 2 + iVar9;
    if ((int)uVar17 < 0) {
                    /* WARNING: Subroutine does not return */
      Core::Private::OnInvalidArrayNum((ulonglong)uVar17);
    }
    piVar2 = &(param_1->Elements).ArrayMax;
    if (*piVar2 < (int)uVar17) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,4,uVar17,(ForAnyElementType *)param_1,*piVar1,piVar2);
    }
    pFVar13 = (FName *)(param_1->Elements).AllocatorInstance.Data;
    pFVar16 = (param_2->Elements).AllocatorInstance.Data;
    pFVar18 = pFVar16 + iVar11;
    pFVar14 = pFVar13 + (longlong)iVar15 * 3;
    if (pFVar13 != pFVar14) {
      if (pFVar16 == pFVar18) {
        return;
      }
      do {
        while( true ) {
          FVar6 = pFVar16->Name;
          FVar7 = *pFVar13;
          if (FVar7 != FVar6) break;
          pFVar13[1].ComparisonIndex.Value = (uint)pFVar16->Value;
          pEVar3 = &pFVar16->Flags;
          pFVar16 = pFVar16 + 1;
          *(ECurveElementFlags *)&pFVar13[1].Number = *pEVar3;
          pFVar13 = pFVar13 + 3;
          if ((pFVar13 == pFVar14) || (pFVar16 == pFVar18)) goto LAB_1474aed31;
        }
        iVar11 = FVar7.ComparisonIndex.Value.Value - FVar6.ComparisonIndex.Value;
        if (iVar11 == 0) {
          iVar11 = FVar7.Number - FVar6.Number;
        }
        if (iVar11 < 0) {
          pFVar13[1].ComparisonIndex.Value = 0;
          *(undefined1 *)&pFVar13[1].Number = 0;
          pFVar13 = pFVar13 + 3;
          bVar10 = pFVar13 == pFVar14;
        }
        else {
          lVar12 = (longlong)pFVar13 - (longlong)(param_1->Elements).AllocatorInstance.Data;
          lVar12 = lVar12 / 6 + (lVar12 >> 0x3f);
          iVar15 = (int)(lVar12 >> 2) - (int)(lVar12 >> 0x3f);
          iVar11 = *piVar1;
          if (iVar11 == *piVar2) {
            iVar11 = Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x418,(ForAnyElementType *)param_1,piVar2);
          }
          *piVar1 = iVar11 + 1;
          lVar12 = (longlong)iVar15;
          pFVar4 = (param_1->Elements).AllocatorInstance.Data + lVar12 * 0x18;
          memmove(pFVar4 + 0x18,pFVar4,(longlong)(iVar11 - iVar15) * 0x18);
          pFVar4 = (param_1->Elements).AllocatorInstance.Data;
          iVar11 = *piVar1;
          *(undefined2 *)(pFVar4 + lVar12 * 0x18 + 0xd) = 0;
          pFVar4[lVar12 * 0x18 + 0xf] = (FScriptContainerElement)0x0;
          pFVar14 = (FName *)(pFVar4 + (longlong)iVar11 * 0x18);
          *(float *)(pFVar4 + lVar12 * 0x18 + 8) = pFVar16->Value;
          pEVar3 = &pFVar16->Flags;
          pFVar16 = pFVar16 + 1;
          pFVar4[lVar12 * 0x18 + 0xc] = (FScriptContainerElement)*pEVar3;
          *(undefined8 *)(pFVar4 + lVar12 * 0x18 + 0x10) = 0;
          *(FName *)(pFVar4 + lVar12 * 0x18) = FVar6;
          pFVar13 = (FName *)(pFVar4 + lVar12 * 0x18 + 0x18);
          bVar10 = pFVar16 == pFVar18;
        }
      } while (!bVar10);
    }
LAB_1474aed31:
    if (pFVar16 < pFVar18) {
      iVar11 = *piVar1;
      iVar15 = (int)((longlong)pFVar18 - (longlong)pFVar16 >> 4);
      uVar17 = iVar15 + iVar11;
      if ((int)uVar17 < 0) {
                    /* WARNING: Subroutine does not return */
        Core::Private::OnInvalidArrayNum((ulonglong)uVar17);
      }
      if (*piVar2 < (int)uVar17) {
        Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,4,uVar17,(ForAnyElementType *)param_1,iVar11,piVar2);
      }
      Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,4,iVar15,(ForAnyElementType *)param_1,piVar1,piVar2);
      pFVar14 = (FName *)((param_1->Elements).AllocatorInstance.Data + (longlong)iVar11 * 0x18);
      do {
        *(undefined2 *)((longlong)&pFVar14[1].Number + 1) = 0;
        *(undefined1 *)((longlong)&pFVar14[1].Number + 3) = 0;
        *pFVar14 = pFVar16->Name;
        pFVar14[1].ComparisonIndex.Value = (uint)pFVar16->Value;
        EVar5 = pFVar16->Flags;
        pFVar16 = pFVar16 + 1;
        pFVar14[2].ComparisonIndex = 0;
        pFVar14[2].Number = 0;
        *(ECurveElementFlags *)&pFVar14[1].Number = EVar5;
        pFVar14 = pFVar14 + 3;
      } while (pFVar16 < pFVar18);
    }
  }
  return;
}

// Union<`TBaseBlendedCurve<TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>,FAnimNode_DeadBlending::FDeadBlendingCurveElement>::CopyFrom<TSizedDefaultAllocator<32>,UE::Anim::FCurveElement>'::__l3::<lambda_1>,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>,FAnimNode_DeadBlending::FDeadBlendingCurveElement,TSizedDefaultAllocator<32>,UE::Anim::FCurveElement> @ 1474aee10

void __cdecl
UE::Anim::FNamedValueArrayUtils::
Union<_TBaseBlendedCurve<TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>,FAnimNode_DeadBlending::FDeadBlendingCurveElement>::CopyFrom<TSizedDefaultAllocator<32>,UE::Anim::FCurveElement>_::__l3::<lambda_1>,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>,FAnimNode_DeadBlending::FDeadBlendingCurveElement,TSizedDefaultAllocator<32>,UE::Anim::FCurveElement>
          (TNamedValueArray<TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>,FAnimNode_DeadBlending::FDeadBlendingCurveElement>
           *param_1,TNamedValueArray<TSizedDefaultAllocator<32>,UE::Anim::FCurveElement> *param_2,
          <lambda_1> param_3)

{
  FScriptContainerElement *pFVar1;
  int *piVar2;
  FScriptContainerElement FVar3;
  int iVar4;
  longlong lVar5;
  code *pcVar6;
  int iVar7;
  bool bVar8;
  int iVar9;
  ForElementType<FAnimNode_DeadBlending::FDeadBlendingCurveElement> FVar10;
  ForElementType<FAnimNode_DeadBlending::FDeadBlendingCurveElement> FVar11;
  longlong lVar12;
  uchar *puVar13;
  longlong *plVar14;
  FScriptContainerElement *pFVar15;
  FScriptContainerElement *pFVar16;
  uint uVar17;
  ForElementType<FAnimNode_DeadBlending::FDeadBlendingCurveElement> FVar18;
  int *piVar19;
  FIdentityFunctor local_res8;
  
  if ((param_1 ==
       (TNamedValueArray<TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>,FAnimNode_DeadBlending::FDeadBlendingCurveElement>
        *)param_2) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(void*)&InOutValueArray0 != (void*)&InValueArray1",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Animation\\NamedValueArray.h"
                         ,0x10a,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  iVar9 = (param_2->Elements).ArrayNum;
  piVar2 = &(param_1->Elements).ArrayNum;
  iVar4 = *piVar2;
  if (iVar9 != 0) {
    if (param_1->bSorted == false) {
      FVar18 = (param_1->Elements).AllocatorInstance.SecondaryData;
      FVar11 = (ForElementType<FAnimNode_DeadBlending::FDeadBlendingCurveElement>)param_1;
      if (FVar18 != (ForElementType<FAnimNode_DeadBlending::FDeadBlendingCurveElement>)0x0) {
        FVar11 = FVar18;
      }
      AlgoImpl::
      IntroSortInternal<FAnimNode_DeadBlending::FDeadBlendingCurveElement,int,FIdentityFunctor,UE::Anim::TNamedValueArray<TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>,FAnimNode_DeadBlending::FDeadBlendingCurveElement>::FElementSortPredicate>
                ((FDeadBlendingCurveElement *)FVar11,iVar4,local_res8,
                 (FElementSortPredicate)local_res8);
      param_1->bSorted = true;
    }
    if (param_2->bSorted == false) {
      AlgoImpl::
      IntroSortInternal<UE::Anim::FCurveElement,int,FIdentityFunctor,UE::Anim::TNamedValueArray<TSizedDefaultAllocator<32>,UE::Anim::FCurveElement>::FElementSortPredicate>
                ((FCurveElement *)(param_2->Elements).AllocatorInstance.Data,
                 (param_2->Elements).ArrayNum,local_res8,(FElementSortPredicate)local_res8);
      param_2->bSorted = true;
    }
    iVar7 = iVar9;
    if (iVar9 < iVar4) {
      iVar7 = iVar4;
    }
    uVar17 = iVar7 / 2 + iVar7;
    if ((int)uVar17 < 0) {
                    /* WARNING: Subroutine does not return */
      Core::Private::OnInvalidArrayNum((ulonglong)uVar17);
    }
    piVar19 = &(param_1->Elements).ArrayMax;
    if (*piVar19 < (int)uVar17) {
      Core::Private::
      ReallocTo<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FAnimNode_DeadBlending::FDeadBlendingCurveElement>_>
                (0x18,4,uVar17,
                 (ForElementType<FAnimNode_DeadBlending::FDeadBlendingCurveElement> *)param_1,
                 *piVar2,piVar19);
    }
    FVar18 = (param_1->Elements).AllocatorInstance.SecondaryData;
    pFVar16 = (param_2->Elements).AllocatorInstance.Data;
    FVar11 = (ForElementType<FAnimNode_DeadBlending::FDeadBlendingCurveElement>)param_1;
    if (FVar18 != (ForElementType<FAnimNode_DeadBlending::FDeadBlendingCurveElement>)0x0) {
      FVar11 = FVar18;
    }
    pFVar15 = pFVar16 + (longlong)iVar9 * 0x10;
    FVar18 = (ForElementType<FAnimNode_DeadBlending::FDeadBlendingCurveElement>)
             ((longlong)FVar11 + (longlong)iVar4 * 0x18);
    if (FVar11 != FVar18) {
      if (pFVar16 == pFVar15) {
        return;
      }
      do {
        while( true ) {
          lVar5 = *(longlong *)pFVar16;
          lVar12 = *(longlong *)FVar11;
          if (lVar12 != lVar5) break;
          *(undefined4 *)((longlong)FVar11 + 8) = *(undefined4 *)(pFVar16 + 8);
          pFVar1 = pFVar16 + 0xc;
          pFVar16 = pFVar16 + 0x10;
          *(FScriptContainerElement *)((longlong)FVar11 + 0xc) = *pFVar1;
          FVar11 = (ForElementType<FAnimNode_DeadBlending::FDeadBlendingCurveElement>)
                   ((longlong)FVar11 + 0x18);
          if ((FVar11 == FVar18) || (pFVar16 == pFVar15)) goto LAB_1474af063;
        }
        iVar9 = (int)lVar12 - (int)lVar5;
        if (iVar9 == 0) {
          iVar9 = (int)((ulonglong)lVar12 >> 0x20) - (int)((ulonglong)lVar5 >> 0x20);
        }
        if (iVar9 < 0) {
          puVar13 = (uchar *)((longlong)FVar11 + 8);
          puVar13[0] = '\0';
          puVar13[1] = '\0';
          puVar13[2] = '\0';
          puVar13[3] = '\0';
          *(uchar *)((longlong)FVar11 + 0xc) = '\0';
          FVar11 = (ForElementType<FAnimNode_DeadBlending::FDeadBlendingCurveElement>)
                   ((longlong)FVar11 + 0x18);
          bVar8 = FVar11 == FVar18;
        }
        else {
          FVar18 = (param_1->Elements).AllocatorInstance.SecondaryData;
          FVar10 = (ForElementType<FAnimNode_DeadBlending::FDeadBlendingCurveElement>)param_1;
          if (FVar18 != (ForElementType<FAnimNode_DeadBlending::FDeadBlendingCurveElement>)0x0) {
            FVar10 = FVar18;
          }
          lVar12 = ((longlong)FVar11 - (longlong)FVar10) / 6 +
                   ((longlong)FVar11 - (longlong)FVar10 >> 0x3f);
          iVar9 = (int)(lVar12 >> 2) - (int)(lVar12 >> 0x3f);
          TArray<FAnimNode_DeadBlending::FDeadBlendingCurveElement,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
          ::InsertUninitializedImpl(&param_1->Elements,iVar9);
          FVar18 = (param_1->Elements).AllocatorInstance.SecondaryData;
          if (FVar18 == (ForElementType<FAnimNode_DeadBlending::FDeadBlendingCurveElement>)0x0) {
            puVar13 = (param_1->Elements).AllocatorInstance.InlineData + (longlong)iVar9 * 0x18;
            FVar18 = (ForElementType<FAnimNode_DeadBlending::FDeadBlendingCurveElement>)param_1;
          }
          else {
            puVar13 = (uchar *)((longlong)FVar18 + (longlong)iVar9 * 0x18);
          }
          iVar9 = (param_1->Elements).ArrayNum;
          puVar13[0xd] = '\0';
          puVar13[0xe] = '\0';
          puVar13[0xf] = '\0';
          puVar13[0x10] = '\0';
          puVar13[0x11] = '\0';
          puVar13[0x12] = '\0';
          puVar13[0x13] = '\0';
          puVar13[0x14] = '\0';
          puVar13[0x15] = '\0';
          puVar13[0x16] = '\0';
          puVar13[0x17] = '\0';
          *(longlong *)puVar13 = lVar5;
          FVar18 = (ForElementType<FAnimNode_DeadBlending::FDeadBlendingCurveElement>)
                   ((longlong)FVar18 + (longlong)iVar9 * 0x18);
          *(undefined4 *)(puVar13 + 8) = *(undefined4 *)(pFVar16 + 8);
          pFVar1 = pFVar16 + 0xc;
          pFVar16 = pFVar16 + 0x10;
          *(FScriptContainerElement *)(puVar13 + 0xc) = *pFVar1;
          FVar11 = (ForElementType<FAnimNode_DeadBlending::FDeadBlendingCurveElement>)
                   ((longlong)puVar13 + 0x18);
          bVar8 = pFVar16 == pFVar15;
        }
      } while (!bVar8);
    }
LAB_1474af063:
    piVar19 = &(param_1->Elements).ArrayMax;
    if (pFVar16 < pFVar15) {
      iVar9 = (param_1->Elements).ArrayNum;
      iVar4 = (int)((longlong)pFVar15 - (longlong)pFVar16 >> 4);
      uVar17 = iVar9 + iVar4;
      if ((int)uVar17 < 0) {
                    /* WARNING: Subroutine does not return */
        Core::Private::OnInvalidArrayNum((ulonglong)uVar17);
      }
      if ((param_1->Elements).ArrayMax < (int)uVar17) {
        Core::Private::
        ReallocTo<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FAnimNode_DeadBlending::FDeadBlendingCurveElement>_>
                  (0x18,4,uVar17,
                   (ForElementType<FAnimNode_DeadBlending::FDeadBlendingCurveElement> *)param_1,
                   iVar9,piVar19);
      }
      Core::Private::
      ReallocGrow<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FAnimNode_DeadBlending::FDeadBlendingCurveElement>_>
                (0x18,4,iVar4,
                 (ForElementType<FAnimNode_DeadBlending::FDeadBlendingCurveElement> *)param_1,piVar2
                 ,piVar19);
      FVar18 = (param_1->Elements).AllocatorInstance.SecondaryData;
      if (FVar18 != (ForElementType<FAnimNode_DeadBlending::FDeadBlendingCurveElement>)0x0) {
        param_1 = (TNamedValueArray<TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>,FAnimNode_DeadBlending::FDeadBlendingCurveElement>
                   *)FVar18;
      }
      plVar14 = (longlong *)((longlong)param_1 + (longlong)iVar9 * 0x18);
      do {
        *(undefined2 *)((longlong)plVar14 + 0xd) = 0;
        *(undefined1 *)((longlong)plVar14 + 0xf) = 0;
        *plVar14 = *(longlong *)pFVar16;
        *(undefined4 *)(plVar14 + 1) = *(undefined4 *)(pFVar16 + 8);
        FVar3 = pFVar16[0xc];
        pFVar16 = pFVar16 + 0x10;
        plVar14[2] = 0;
        *(FScriptContainerElement *)((longlong)plVar14 + 0xc) = FVar3;
        plVar14 = plVar14 + 3;
      } while (pFVar16 < pFVar15);
    }
  }
  return;
}

// Union<`FAnimNode_DeadBlending::InitFrom'::__l50::<lambda_2>,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>,FAnimNode_DeadBlending::FDeadBlendingCurveElement,TSizedDefaultAllocator<32>,UE::Anim::FCurveElement> @ 1474af150

void __cdecl
UE::Anim::FNamedValueArrayUtils::
Union<_FAnimNode_DeadBlending::InitFrom_::__l50::<lambda_2>,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>,FAnimNode_DeadBlending::FDeadBlendingCurveElement,TSizedDefaultAllocator<32>,UE::Anim::FCurveElement>
          (TNamedValueArray<TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>,FAnimNode_DeadBlending::FDeadBlendingCurveElement>
           *param_1,TNamedValueArray<TSizedDefaultAllocator<32>,UE::Anim::FCurveElement> *param_2,
          <lambda_2> *param_3)

{
  FScriptContainerElement *pFVar1;
  int *piVar2;
  float fVar3;
  int iVar4;
  longlong lVar5;
  FAnimNode_DeadBlending *pFVar6;
  code *pcVar7;
  int iVar8;
  bool bVar9;
  int iVar10;
  ForElementType<FAnimNode_DeadBlending::FDeadBlendingCurveElement> FVar11;
  ForElementType<FAnimNode_DeadBlending::FDeadBlendingCurveElement> FVar12;
  longlong lVar13;
  uchar *puVar14;
  longlong *plVar15;
  FScriptContainerElement *pFVar16;
  FScriptContainerElement *pFVar17;
  uint uVar18;
  ForElementType<FAnimNode_DeadBlending::FDeadBlendingCurveElement> FVar19;
  int *piVar20;
  float fVar21;
  float fVar22;
  FIdentityFunctor local_res8;
  
  if ((param_1 ==
       (TNamedValueArray<TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>,FAnimNode_DeadBlending::FDeadBlendingCurveElement>
        *)param_2) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(void*)&InOutValueArray0 != (void*)&InValueArray1",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Animation\\NamedValueArray.h"
                         ,0x10a,L""), bVar9)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  iVar10 = (param_2->Elements).ArrayNum;
  piVar2 = &(param_1->Elements).ArrayNum;
  iVar4 = *piVar2;
  if (iVar10 != 0) {
    if (param_1->bSorted == false) {
      FVar19 = (param_1->Elements).AllocatorInstance.SecondaryData;
      FVar12 = (ForElementType<FAnimNode_DeadBlending::FDeadBlendingCurveElement>)param_1;
      if (FVar19 != (ForElementType<FAnimNode_DeadBlending::FDeadBlendingCurveElement>)0x0) {
        FVar12 = FVar19;
      }
      AlgoImpl::
      IntroSortInternal<FAnimNode_DeadBlending::FDeadBlendingCurveElement,int,FIdentityFunctor,UE::Anim::TNamedValueArray<TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>,FAnimNode_DeadBlending::FDeadBlendingCurveElement>::FElementSortPredicate>
                ((FDeadBlendingCurveElement *)FVar12,iVar4,local_res8,
                 (FElementSortPredicate)local_res8);
      param_1->bSorted = true;
    }
    if (param_2->bSorted == false) {
      AlgoImpl::
      IntroSortInternal<UE::Anim::FCurveElement,int,FIdentityFunctor,UE::Anim::TNamedValueArray<TSizedDefaultAllocator<32>,UE::Anim::FCurveElement>::FElementSortPredicate>
                ((FCurveElement *)(param_2->Elements).AllocatorInstance.Data,
                 (param_2->Elements).ArrayNum,local_res8,(FElementSortPredicate)local_res8);
      param_2->bSorted = true;
    }
    iVar8 = iVar10;
    if (iVar10 < iVar4) {
      iVar8 = iVar4;
    }
    uVar18 = iVar8 / 2 + iVar8;
    if ((int)uVar18 < 0) {
                    /* WARNING: Subroutine does not return */
      Core::Private::OnInvalidArrayNum((ulonglong)uVar18);
    }
    piVar20 = &(param_1->Elements).ArrayMax;
    if (*piVar20 < (int)uVar18) {
      Core::Private::
      ReallocTo<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FAnimNode_DeadBlending::FDeadBlendingCurveElement>_>
                (0x18,4,uVar18,
                 (ForElementType<FAnimNode_DeadBlending::FDeadBlendingCurveElement> *)param_1,
                 *piVar2,piVar20);
    }
    uVar18 = __xmm_80000000800000008000000080000000;
    FVar19 = (param_1->Elements).AllocatorInstance.SecondaryData;
    pFVar17 = (param_2->Elements).AllocatorInstance.Data;
    FVar12 = (ForElementType<FAnimNode_DeadBlending::FDeadBlendingCurveElement>)param_1;
    if (FVar19 != (ForElementType<FAnimNode_DeadBlending::FDeadBlendingCurveElement>)0x0) {
      FVar12 = FVar19;
    }
    pFVar16 = pFVar17 + (longlong)iVar10 * 0x10;
    FVar19 = (ForElementType<FAnimNode_DeadBlending::FDeadBlendingCurveElement>)
             ((longlong)FVar12 + (longlong)iVar4 * 0x18);
    if (FVar12 != FVar19) {
      if (pFVar17 == pFVar16) {
        return;
      }
      do {
        while( true ) {
          lVar5 = *(longlong *)pFVar17;
          lVar13 = *(longlong *)FVar12;
          if (lVar13 != lVar5) break;
          pFVar1 = pFVar17 + 8;
          pFVar6 = param_3->__this;
          pFVar17 = pFVar17 + 0x10;
          fVar22 = (*(float *)((longlong)FVar12 + 8) - *(float *)pFVar1) / param_3->SrcDeltaTime;
          *(float *)((longlong)FVar12 + 0x10) = fVar22;
          fVar3 = pFVar6->MaximumCurveVelocity;
          fVar21 = fVar3;
          if (fVar22 <= fVar3) {
            fVar21 = fVar22;
          }
          if (fVar21 <= (float)((uint)fVar3 ^ uVar18)) {
            fVar21 = (float)((uint)fVar3 ^ uVar18);
          }
          *(float *)((longlong)FVar12 + 0x10) = fVar21;
          FVar12 = (ForElementType<FAnimNode_DeadBlending::FDeadBlendingCurveElement>)
                   ((longlong)FVar12 + 0x18);
          if ((FVar12 == FVar19) || (pFVar17 == pFVar16)) goto LAB_1474af3d4;
        }
        iVar10 = (int)lVar13 - (int)lVar5;
        if (iVar10 == 0) {
          iVar10 = (int)((ulonglong)lVar13 >> 0x20) - (int)((ulonglong)lVar5 >> 0x20);
        }
        if (iVar10 < 0) {
          FVar12 = (ForElementType<FAnimNode_DeadBlending::FDeadBlendingCurveElement>)
                   ((longlong)FVar12 + 0x18);
          bVar9 = FVar12 == FVar19;
        }
        else {
          FVar19 = (param_1->Elements).AllocatorInstance.SecondaryData;
          FVar11 = (ForElementType<FAnimNode_DeadBlending::FDeadBlendingCurveElement>)param_1;
          if (FVar19 != (ForElementType<FAnimNode_DeadBlending::FDeadBlendingCurveElement>)0x0) {
            FVar11 = FVar19;
          }
          lVar13 = ((longlong)FVar12 - (longlong)FVar11) / 6 +
                   ((longlong)FVar12 - (longlong)FVar11 >> 0x3f);
          iVar10 = (int)(lVar13 >> 2) - (int)(lVar13 >> 0x3f);
          TArray<FAnimNode_DeadBlending::FDeadBlendingCurveElement,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
          ::InsertUninitializedImpl(&param_1->Elements,iVar10);
          FVar19 = (param_1->Elements).AllocatorInstance.SecondaryData;
          if (FVar19 == (ForElementType<FAnimNode_DeadBlending::FDeadBlendingCurveElement>)0x0) {
            puVar14 = (param_1->Elements).AllocatorInstance.InlineData + (longlong)iVar10 * 0x18;
            FVar19 = (ForElementType<FAnimNode_DeadBlending::FDeadBlendingCurveElement>)param_1;
          }
          else {
            puVar14 = (uchar *)((longlong)FVar19 + (longlong)iVar10 * 0x18);
          }
          iVar10 = (param_1->Elements).ArrayNum;
          puVar14[0xd] = '\0';
          puVar14[0xe] = '\0';
          pFVar17 = pFVar17 + 0x10;
          puVar14[0xf] = '\0';
          puVar14[8] = '\0';
          puVar14[9] = '\0';
          puVar14[10] = '\0';
          puVar14[0xb] = '\0';
          puVar14[0xc] = '\0';
          puVar14[0x10] = '\0';
          puVar14[0x11] = '\0';
          puVar14[0x12] = '\0';
          puVar14[0x13] = '\0';
          puVar14[0x14] = '\0';
          puVar14[0x15] = '\0';
          puVar14[0x16] = '\0';
          puVar14[0x17] = '\0';
          FVar19 = (ForElementType<FAnimNode_DeadBlending::FDeadBlendingCurveElement>)
                   ((longlong)FVar19 + (longlong)iVar10 * 0x18);
          *(longlong *)puVar14 = lVar5;
          FVar12 = (ForElementType<FAnimNode_DeadBlending::FDeadBlendingCurveElement>)
                   ((longlong)puVar14 + 0x18);
          bVar9 = pFVar17 == pFVar16;
        }
      } while (!bVar9);
    }
LAB_1474af3d4:
    piVar20 = &(param_1->Elements).ArrayMax;
    if (pFVar17 < pFVar16) {
      iVar10 = (param_1->Elements).ArrayNum;
      iVar4 = (int)((longlong)pFVar16 - (longlong)pFVar17 >> 4);
      uVar18 = iVar4 + iVar10;
      if ((int)uVar18 < 0) {
                    /* WARNING: Subroutine does not return */
        Core::Private::OnInvalidArrayNum((ulonglong)uVar18);
      }
      if ((param_1->Elements).ArrayMax < (int)uVar18) {
        Core::Private::
        ReallocTo<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FAnimNode_DeadBlending::FDeadBlendingCurveElement>_>
                  (0x18,4,uVar18,
                   (ForElementType<FAnimNode_DeadBlending::FDeadBlendingCurveElement> *)param_1,
                   iVar10,piVar20);
      }
      Core::Private::
      ReallocGrow<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FAnimNode_DeadBlending::FDeadBlendingCurveElement>_>
                (0x18,4,iVar4,
                 (ForElementType<FAnimNode_DeadBlending::FDeadBlendingCurveElement> *)param_1,piVar2
                 ,piVar20);
      FVar19 = (param_1->Elements).AllocatorInstance.SecondaryData;
      if (FVar19 != (ForElementType<FAnimNode_DeadBlending::FDeadBlendingCurveElement>)0x0) {
        param_1 = (TNamedValueArray<TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>,FAnimNode_DeadBlending::FDeadBlendingCurveElement>
                   *)FVar19;
      }
      plVar15 = (longlong *)((longlong)param_1 + (longlong)iVar10 * 0x18);
      do {
        *(undefined2 *)((longlong)plVar15 + 0xd) = 0;
        *(undefined1 *)((longlong)plVar15 + 0xf) = 0;
        *(undefined4 *)(plVar15 + 1) = 0;
        *(undefined1 *)((longlong)plVar15 + 0xc) = 0;
        plVar15[2] = 0;
        lVar5 = *(longlong *)pFVar17;
        pFVar17 = pFVar17 + 0x10;
        *plVar15 = lVar5;
        plVar15 = plVar15 + 3;
      } while (pFVar17 < pFVar16);
    }
  }
  return;
}

// Union<`FInertializationPoseDiff::InitFrom'::__l60::<lambda_2>,TSizedDefaultAllocator<32>,FInertializationCurveDiffElement,TSizedDefaultAllocator<32>,UE::Anim::FCurveElement> @ 1474af4c0

void __cdecl
UE::Anim::FNamedValueArrayUtils::
Union<_FInertializationPoseDiff::InitFrom_::__l60::<lambda_2>,TSizedDefaultAllocator<32>,FInertializationCurveDiffElement,TSizedDefaultAllocator<32>,UE::Anim::FCurveElement>
          (TNamedValueArray<TSizedDefaultAllocator<32>,FInertializationCurveDiffElement> *param_1,
          TNamedValueArray<TSizedDefaultAllocator<32>,UE::Anim::FCurveElement> *param_2,
          <lambda_2> param_3)

{
  int *piVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  float fVar4;
  longlong lVar5;
  code *pcVar6;
  int iVar7;
  bool bVar8;
  int iVar9;
  longlong lVar10;
  FScriptContainerElement *pFVar11;
  FScriptContainerElement *pFVar12;
  int iVar13;
  FScriptContainerElement *pFVar14;
  uint uVar15;
  uint uVar16;
  FScriptContainerElement *pFVar17;
  float fVar18;
  FIdentityFunctor local_res8;
  
  if ((param_1 ==
       (TNamedValueArray<TSizedDefaultAllocator<32>,FInertializationCurveDiffElement> *)param_2) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(void*)&InOutValueArray0 != (void*)&InValueArray1",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Animation\\NamedValueArray.h"
                         ,0x10a,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  iVar9 = (param_2->Elements).ArrayNum;
  piVar1 = &(param_1->Elements).ArrayNum;
  iVar13 = *piVar1;
  if (iVar9 != 0) {
    if (param_1->bSorted == false) {
      AlgoImpl::
      IntroSortInternal<FInertializationCurveDiffElement,int,FIdentityFunctor,UE::Anim::TNamedValueArray<TSizedDefaultAllocator<32>,FInertializationCurveDiffElement>::FElementSortPredicate>
                ((FInertializationCurveDiffElement *)(param_1->Elements).AllocatorInstance.Data,
                 iVar13,local_res8,(FElementSortPredicate)local_res8);
      param_1->bSorted = true;
    }
    if (param_2->bSorted == false) {
      AlgoImpl::
      IntroSortInternal<UE::Anim::FCurveElement,int,FIdentityFunctor,UE::Anim::TNamedValueArray<TSizedDefaultAllocator<32>,UE::Anim::FCurveElement>::FElementSortPredicate>
                ((FCurveElement *)(param_2->Elements).AllocatorInstance.Data,
                 (param_2->Elements).ArrayNum,local_res8,(FElementSortPredicate)local_res8);
      param_2->bSorted = true;
    }
    iVar7 = iVar9;
    if (iVar9 < iVar13) {
      iVar7 = iVar13;
    }
    uVar15 = iVar7 / 2 + iVar7;
    if ((int)uVar15 < 0) {
                    /* WARNING: Subroutine does not return */
      Core::Private::OnInvalidArrayNum((ulonglong)uVar15);
    }
    piVar2 = &(param_1->Elements).ArrayMax;
    if (*piVar2 < (int)uVar15) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,4,uVar15,(ForAnyElementType *)param_1,*piVar1,piVar2);
    }
    uVar15 = __xmm_80000000800000008000000080000000;
    pFVar11 = (param_1->Elements).AllocatorInstance.Data;
    pFVar14 = (param_2->Elements).AllocatorInstance.Data;
    pFVar17 = pFVar14 + (longlong)iVar9 * 0x10;
    pFVar12 = pFVar11 + (longlong)iVar13 * 0x18;
    if (pFVar11 != pFVar12) {
      if (pFVar14 == pFVar17) {
        return;
      }
      do {
        while( true ) {
          lVar5 = *(longlong *)pFVar14;
          lVar10 = *(longlong *)pFVar11;
          if (lVar10 != lVar5) break;
          pFVar3 = pFVar14 + 8;
          pFVar14 = pFVar14 + 0x10;
          *(float *)(pFVar11 + 0x14) =
               ((*(float *)(pFVar11 + 0x10) - *(float *)(pFVar11 + 8)) - *(float *)pFVar3) /
               param_3.DeltaTime;
          pFVar11 = pFVar11 + 0x18;
          if ((pFVar11 == pFVar12) || (pFVar14 == pFVar17)) goto LAB_1474af74c;
        }
        iVar9 = (int)lVar10 - (int)lVar5;
        if (iVar9 == 0) {
          iVar9 = (int)((ulonglong)lVar10 >> 0x20) - (int)((ulonglong)lVar5 >> 0x20);
        }
        if (iVar9 < 0) {
          *(float *)(pFVar11 + 0x14) =
               (*(float *)(pFVar11 + 0x10) - *(float *)(pFVar11 + 8)) / param_3.DeltaTime;
          pFVar11 = pFVar11 + 0x18;
          bVar8 = pFVar11 == pFVar12;
        }
        else {
          lVar10 = (longlong)pFVar11 - (longlong)(param_1->Elements).AllocatorInstance.Data;
          lVar10 = lVar10 / 6 + (lVar10 >> 0x3f);
          iVar13 = (int)(lVar10 >> 2) - (int)(lVar10 >> 0x3f);
          iVar9 = *piVar1;
          if (iVar9 == *piVar2) {
            iVar9 = Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x418,(ForAnyElementType *)param_1,piVar2);
          }
          *piVar1 = iVar9 + 1;
          lVar10 = (longlong)iVar13;
          pFVar12 = (param_1->Elements).AllocatorInstance.Data + lVar10 * 0x18;
          memmove(pFVar12 + 0x18,pFVar12,(longlong)(iVar9 - iVar13) * 0x18);
          iVar9 = *piVar1;
          pFVar11 = (param_1->Elements).AllocatorInstance.Data;
          *(undefined2 *)(pFVar11 + lVar10 * 0x18 + 0xd) = 0;
          pFVar12 = pFVar11 + (longlong)iVar9 * 0x18;
          pFVar11[lVar10 * 0x18 + 0xf] = (FScriptContainerElement)0x0;
          fVar18 = *(float *)(pFVar14 + 8);
          pFVar14 = pFVar14 + 0x10;
          *(undefined4 *)(pFVar11 + lVar10 * 0x18 + 8) = 0;
          pFVar11[lVar10 * 0x18 + 0xc] = (FScriptContainerElement)0x0;
          *(undefined4 *)(pFVar11 + lVar10 * 0x18 + 0x10) = 0;
          *(longlong *)(pFVar11 + lVar10 * 0x18) = lVar5;
          *(uint *)(pFVar11 + lVar10 * 0x18 + 0x14) = (uint)(fVar18 / param_3.DeltaTime) ^ uVar15;
          pFVar11 = pFVar11 + lVar10 * 0x18 + 0x18;
          bVar8 = pFVar14 == pFVar17;
        }
      } while (!bVar8);
    }
LAB_1474af74c:
    if (pFVar14 < pFVar17) {
      iVar9 = *piVar1;
      iVar13 = (int)((longlong)pFVar17 - (longlong)pFVar14 >> 4);
      uVar16 = iVar13 + iVar9;
      if ((int)uVar16 < 0) {
                    /* WARNING: Subroutine does not return */
        Core::Private::OnInvalidArrayNum((ulonglong)uVar16);
      }
      if (*piVar2 < (int)uVar16) {
        Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,4,uVar16,(ForAnyElementType *)param_1,iVar9,piVar2);
      }
      Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,4,iVar13,(ForAnyElementType *)param_1,piVar1,piVar2);
      fVar18 = __real_3f800000 / param_3.DeltaTime;
      pFVar12 = (param_1->Elements).AllocatorInstance.Data + (longlong)iVar9 * 0x18;
      do {
        *(undefined2 *)(pFVar12 + 0xd) = 0;
        pFVar12[0xf] = (FScriptContainerElement)0x0;
        fVar4 = *(float *)(pFVar14 + 8);
        lVar5 = *(longlong *)pFVar14;
        pFVar14 = pFVar14 + 0x10;
        *(undefined4 *)(pFVar12 + 8) = 0;
        pFVar12[0xc] = (FScriptContainerElement)0x0;
        *(undefined4 *)(pFVar12 + 0x10) = 0;
        *(uint *)(pFVar12 + 0x14) = (uint)(fVar18 * fVar4) ^ uVar15;
        *(longlong *)pFVar12 = lVar5;
        pFVar12 = pFVar12 + 0x18;
      } while (pFVar14 < pFVar17);
    }
  }
  return;
}

// Union<`FAnimNode_Inertialization::InitFrom'::__l88::<lambda_2>,TSizedDefaultAllocator<32>,FInertializationCurveDiffElement,TSizedDefaultAllocator<32>,UE::Anim::FCurveElement> @ 1474af850

void __cdecl
UE::Anim::FNamedValueArrayUtils::
Union<_FAnimNode_Inertialization::InitFrom_::__l88::<lambda_2>,TSizedDefaultAllocator<32>,FInertializationCurveDiffElement,TSizedDefaultAllocator<32>,UE::Anim::FCurveElement>
          (TNamedValueArray<TSizedDefaultAllocator<32>,FInertializationCurveDiffElement> *param_1,
          TNamedValueArray<TSizedDefaultAllocator<32>,UE::Anim::FCurveElement> *param_2,
          <lambda_2> param_3)

{
  int *piVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  float fVar4;
  longlong lVar5;
  code *pcVar6;
  int iVar7;
  bool bVar8;
  int iVar9;
  longlong lVar10;
  FScriptContainerElement *pFVar11;
  FScriptContainerElement *pFVar12;
  int iVar13;
  FScriptContainerElement *pFVar14;
  uint uVar15;
  uint uVar16;
  FScriptContainerElement *pFVar17;
  float fVar18;
  FIdentityFunctor local_res8;
  
  if ((param_1 ==
       (TNamedValueArray<TSizedDefaultAllocator<32>,FInertializationCurveDiffElement> *)param_2) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(void*)&InOutValueArray0 != (void*)&InValueArray1",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Animation\\NamedValueArray.h"
                         ,0x10a,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  iVar9 = (param_2->Elements).ArrayNum;
  piVar1 = &(param_1->Elements).ArrayNum;
  iVar13 = *piVar1;
  if (iVar9 != 0) {
    if (param_1->bSorted == false) {
      AlgoImpl::
      IntroSortInternal<FInertializationCurveDiffElement,int,FIdentityFunctor,UE::Anim::TNamedValueArray<TSizedDefaultAllocator<32>,FInertializationCurveDiffElement>::FElementSortPredicate>
                ((FInertializationCurveDiffElement *)(param_1->Elements).AllocatorInstance.Data,
                 iVar13,local_res8,(FElementSortPredicate)local_res8);
      param_1->bSorted = true;
    }
    if (param_2->bSorted == false) {
      AlgoImpl::
      IntroSortInternal<UE::Anim::FCurveElement,int,FIdentityFunctor,UE::Anim::TNamedValueArray<TSizedDefaultAllocator<32>,UE::Anim::FCurveElement>::FElementSortPredicate>
                ((FCurveElement *)(param_2->Elements).AllocatorInstance.Data,
                 (param_2->Elements).ArrayNum,local_res8,(FElementSortPredicate)local_res8);
      param_2->bSorted = true;
    }
    iVar7 = iVar9;
    if (iVar9 < iVar13) {
      iVar7 = iVar13;
    }
    uVar15 = iVar7 / 2 + iVar7;
    if ((int)uVar15 < 0) {
                    /* WARNING: Subroutine does not return */
      Core::Private::OnInvalidArrayNum((ulonglong)uVar15);
    }
    piVar2 = &(param_1->Elements).ArrayMax;
    if (*piVar2 < (int)uVar15) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,4,uVar15,(ForAnyElementType *)param_1,*piVar1,piVar2);
    }
    uVar15 = __xmm_80000000800000008000000080000000;
    pFVar11 = (param_1->Elements).AllocatorInstance.Data;
    pFVar14 = (param_2->Elements).AllocatorInstance.Data;
    pFVar17 = pFVar14 + (longlong)iVar9 * 0x10;
    pFVar12 = pFVar11 + (longlong)iVar13 * 0x18;
    if (pFVar11 != pFVar12) {
      if (pFVar14 == pFVar17) {
        return;
      }
      do {
        while( true ) {
          lVar5 = *(longlong *)pFVar14;
          lVar10 = *(longlong *)pFVar11;
          if (lVar10 != lVar5) break;
          pFVar3 = pFVar14 + 8;
          pFVar14 = pFVar14 + 0x10;
          *(float *)(pFVar11 + 0x14) =
               ((*(float *)(pFVar11 + 0x10) - *(float *)(pFVar11 + 8)) - *(float *)pFVar3) /
               param_3.DeltaTime;
          pFVar11 = pFVar11 + 0x18;
          if ((pFVar11 == pFVar12) || (pFVar14 == pFVar17)) goto LAB_1474afadc;
        }
        iVar9 = (int)lVar10 - (int)lVar5;
        if (iVar9 == 0) {
          iVar9 = (int)((ulonglong)lVar10 >> 0x20) - (int)((ulonglong)lVar5 >> 0x20);
        }
        if (iVar9 < 0) {
          *(float *)(pFVar11 + 0x14) =
               (*(float *)(pFVar11 + 0x10) - *(float *)(pFVar11 + 8)) / param_3.DeltaTime;
          pFVar11 = pFVar11 + 0x18;
          bVar8 = pFVar11 == pFVar12;
        }
        else {
          lVar10 = (longlong)pFVar11 - (longlong)(param_1->Elements).AllocatorInstance.Data;
          lVar10 = lVar10 / 6 + (lVar10 >> 0x3f);
          iVar13 = (int)(lVar10 >> 2) - (int)(lVar10 >> 0x3f);
          iVar9 = *piVar1;
          if (iVar9 == *piVar2) {
            iVar9 = Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x418,(ForAnyElementType *)param_1,piVar2);
          }
          *piVar1 = iVar9 + 1;
          lVar10 = (longlong)iVar13;
          pFVar12 = (param_1->Elements).AllocatorInstance.Data + lVar10 * 0x18;
          memmove(pFVar12 + 0x18,pFVar12,(longlong)(iVar9 - iVar13) * 0x18);
          iVar9 = *piVar1;
          pFVar11 = (param_1->Elements).AllocatorInstance.Data;
          *(undefined2 *)(pFVar11 + lVar10 * 0x18 + 0xd) = 0;
          pFVar12 = pFVar11 + (longlong)iVar9 * 0x18;
          pFVar11[lVar10 * 0x18 + 0xf] = (FScriptContainerElement)0x0;
          fVar18 = *(float *)(pFVar14 + 8);
          pFVar14 = pFVar14 + 0x10;
          *(undefined4 *)(pFVar11 + lVar10 * 0x18 + 8) = 0;
          pFVar11[lVar10 * 0x18 + 0xc] = (FScriptContainerElement)0x0;
          *(undefined4 *)(pFVar11 + lVar10 * 0x18 + 0x10) = 0;
          *(longlong *)(pFVar11 + lVar10 * 0x18) = lVar5;
          *(uint *)(pFVar11 + lVar10 * 0x18 + 0x14) = (uint)(fVar18 / param_3.DeltaTime) ^ uVar15;
          pFVar11 = pFVar11 + lVar10 * 0x18 + 0x18;
          bVar8 = pFVar14 == pFVar17;
        }
      } while (!bVar8);
    }
LAB_1474afadc:
    if (pFVar14 < pFVar17) {
      iVar9 = *piVar1;
      iVar13 = (int)((longlong)pFVar17 - (longlong)pFVar14 >> 4);
      uVar16 = iVar13 + iVar9;
      if ((int)uVar16 < 0) {
                    /* WARNING: Subroutine does not return */
        Core::Private::OnInvalidArrayNum((ulonglong)uVar16);
      }
      if (*piVar2 < (int)uVar16) {
        Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,4,uVar16,(ForAnyElementType *)param_1,iVar9,piVar2);
      }
      Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,4,iVar13,(ForAnyElementType *)param_1,piVar1,piVar2);
      fVar18 = __real_3f800000 / param_3.DeltaTime;
      pFVar12 = (param_1->Elements).AllocatorInstance.Data + (longlong)iVar9 * 0x18;
      do {
        *(undefined2 *)(pFVar12 + 0xd) = 0;
        pFVar12[0xf] = (FScriptContainerElement)0x0;
        fVar4 = *(float *)(pFVar14 + 8);
        lVar5 = *(longlong *)pFVar14;
        pFVar14 = pFVar14 + 0x10;
        *(undefined4 *)(pFVar12 + 8) = 0;
        pFVar12[0xc] = (FScriptContainerElement)0x0;
        *(undefined4 *)(pFVar12 + 0x10) = 0;
        *(uint *)(pFVar12 + 0x14) = (uint)(fVar18 * fVar4) ^ uVar15;
        *(longlong *)pFVar12 = lVar5;
        pFVar12 = pFVar12 + 0x18;
      } while (pFVar14 < pFVar17);
    }
  }
  return;
}

// Union<`FAnimNode_DeadBlending::InitFrom'::__l2::<lambda_3>,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>,FAnimNode_DeadBlending::FDeadBlendingCurveElement,TMemStackAllocator<0>,UE::Anim::FCurveElement> @ 1474afbe0

/* WARNING: Type propagation algorithm not settling */

void __cdecl
UE::Anim::FNamedValueArrayUtils::
Union<_FAnimNode_DeadBlending::InitFrom_::__l2::<lambda_3>,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>,FAnimNode_DeadBlending::FDeadBlendingCurveElement,TMemStackAllocator<0>,UE::Anim::FCurveElement>
          (TNamedValueArray<TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>,FAnimNode_DeadBlending::FDeadBlendingCurveElement>
           *param_1,TNamedValueArray<TMemStackAllocator<0>,UE::Anim::FCurveElement> *param_2,
          <lambda_3> param_3)

{
  float *pfVar1;
  uchar *puVar2;
  int *piVar3;
  int iVar4;
  FName FVar5;
  FName FVar6;
  code *pcVar7;
  int iVar8;
  FName *pFVar9;
  float fVar10;
  float fVar11;
  bool bVar12;
  int iVar13;
  ForElementType<FAnimNode_DeadBlending::FDeadBlendingCurveElement> FVar14;
  ForElementType<FAnimNode_DeadBlending::FDeadBlendingCurveElement> FVar15;
  longlong lVar16;
  FName *pFVar17;
  FCurveElement *pFVar18;
  uint uVar19;
  ForElementType<FAnimNode_DeadBlending::FDeadBlendingCurveElement> FVar20;
  int *piVar21;
  FCurveElement *pFVar22;
  float fVar23;
  float fVar24;
  FIdentityFunctor local_res8;
  
  if ((param_1 ==
       (TNamedValueArray<TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>,FAnimNode_DeadBlending::FDeadBlendingCurveElement>
        *)param_2) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("(void*)&InOutValueArray0 != (void*)&InValueArray1",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Animation\\NamedValueArray.h"
                          ,0x10a,L""), bVar12)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  iVar13 = (param_2->Elements).ArrayNum;
  piVar3 = &(param_1->Elements).ArrayNum;
  iVar4 = *piVar3;
  if (iVar13 != 0) {
    if (param_1->bSorted == false) {
      FVar20 = (param_1->Elements).AllocatorInstance.SecondaryData;
      FVar15 = (ForElementType<FAnimNode_DeadBlending::FDeadBlendingCurveElement>)param_1;
      if (FVar20 != (ForElementType<FAnimNode_DeadBlending::FDeadBlendingCurveElement>)0x0) {
        FVar15 = FVar20;
      }
      AlgoImpl::
      IntroSortInternal<FAnimNode_DeadBlending::FDeadBlendingCurveElement,int,FIdentityFunctor,UE::Anim::TNamedValueArray<TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>,FAnimNode_DeadBlending::FDeadBlendingCurveElement>::FElementSortPredicate>
                ((FDeadBlendingCurveElement *)FVar15,iVar4,local_res8,
                 (FElementSortPredicate)local_res8);
      param_1->bSorted = true;
    }
    if (param_2->bSorted == false) {
      AlgoImpl::
      IntroSortInternal<UE::Anim::FCurveElement,int,FIdentityFunctor,UE::Anim::TNamedValueArray<TMemStackAllocator<0>,UE::Anim::FCurveElement>::FElementSortPredicate>
                ((param_2->Elements).AllocatorInstance.Data,(param_2->Elements).ArrayNum,local_res8,
                 (FElementSortPredicate)local_res8);
      param_2->bSorted = true;
    }
    iVar8 = iVar13;
    if (iVar13 < iVar4) {
      iVar8 = iVar4;
    }
    uVar19 = iVar8 / 2 + iVar8;
    if ((int)uVar19 < 0) {
                    /* WARNING: Subroutine does not return */
      Core::Private::OnInvalidArrayNum((ulonglong)uVar19);
    }
    piVar21 = &(param_1->Elements).ArrayMax;
    if (*piVar21 < (int)uVar19) {
      Core::Private::
      ReallocTo<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FAnimNode_DeadBlending::FDeadBlendingCurveElement>_>
                (0x18,4,uVar19,
                 (ForElementType<FAnimNode_DeadBlending::FDeadBlendingCurveElement> *)param_1,
                 *piVar3,piVar21);
    }
    fVar11 = __real_b8d1b717;
    uVar19 = __xmm_80000000800000008000000080000000;
    fVar10 = __real_461c4000;
    fVar24 = __real_38d1b717;
    FVar20 = (param_1->Elements).AllocatorInstance.SecondaryData;
    pFVar18 = (param_2->Elements).AllocatorInstance.Data;
    FVar15 = (ForElementType<FAnimNode_DeadBlending::FDeadBlendingCurveElement>)param_1;
    if (FVar20 != (ForElementType<FAnimNode_DeadBlending::FDeadBlendingCurveElement>)0x0) {
      FVar15 = FVar20;
    }
    pFVar22 = pFVar18 + iVar13;
    FVar20 = (ForElementType<FAnimNode_DeadBlending::FDeadBlendingCurveElement>)
             ((longlong)FVar15 + (longlong)iVar4 * 0x18);
    if (FVar15 != FVar20) {
      if (pFVar18 == pFVar22) {
        return;
      }
      do {
        while( true ) {
          FVar5 = pFVar18->Name;
          FVar6 = *(FName *)FVar15;
          if (FVar6 != FVar5) break;
          fVar23 = *(float *)((longlong)FVar15 + 0x10);
          if (fVar23 < 0.0) {
            if (fVar11 < fVar23) {
              fVar23 = fVar11;
            }
          }
          else if (fVar23 < fVar24) {
            fVar23 = fVar24;
          }
          pfVar1 = &pFVar18->Value;
          pFVar18 = pFVar18 + 1;
          fVar23 = ((*pfVar1 - *(float *)((longlong)FVar15 + 8)) / fVar23) *
                   (param_3.__this)->ExtrapolationHalfLife;
          if ((param_3.__this)->ExtrapolationHalfLifeMax <= fVar23) {
            fVar23 = (param_3.__this)->ExtrapolationHalfLifeMax;
          }
          if (fVar23 <= (param_3.__this)->ExtrapolationHalfLifeMin) {
            fVar23 = (param_3.__this)->ExtrapolationHalfLifeMin;
          }
          *(float *)((longlong)FVar15 + 0x14) = fVar23;
          FVar15 = (ForElementType<FAnimNode_DeadBlending::FDeadBlendingCurveElement>)
                   ((longlong)FVar15 + 0x18);
          if ((FVar15 == FVar20) || (pFVar18 == pFVar22)) goto LAB_1474aff47;
        }
        iVar13 = FVar6.ComparisonIndex.Value.Value - FVar5.ComparisonIndex.Value;
        if (iVar13 == 0) {
          iVar13 = FVar6.Number - FVar5.Number;
        }
        if (iVar13 < 0) {
          fVar23 = *(float *)((longlong)FVar15 + 0x10);
          if (fVar23 < 0.0) {
            if (fVar11 < fVar23) {
              fVar23 = fVar11;
            }
          }
          else if (fVar23 < fVar24) {
            fVar23 = fVar24;
          }
          fVar23 = (float)((uint)((*(float *)((longlong)FVar15 + 8) / fVar23) *
                                 (param_3.__this)->ExtrapolationHalfLife) ^ uVar19);
          if ((param_3.__this)->ExtrapolationHalfLifeMax <= fVar23) {
            fVar23 = (param_3.__this)->ExtrapolationHalfLifeMax;
          }
          if (fVar23 <= (param_3.__this)->ExtrapolationHalfLifeMin) {
            fVar23 = (param_3.__this)->ExtrapolationHalfLifeMin;
          }
          *(float *)((longlong)FVar15 + 0x14) = fVar23;
          FVar15 = (ForElementType<FAnimNode_DeadBlending::FDeadBlendingCurveElement>)
                   ((longlong)FVar15 + 0x18);
          bVar12 = FVar15 == FVar20;
        }
        else {
          FVar20 = (param_1->Elements).AllocatorInstance.SecondaryData;
          FVar14 = (ForElementType<FAnimNode_DeadBlending::FDeadBlendingCurveElement>)param_1;
          if (FVar20 != (ForElementType<FAnimNode_DeadBlending::FDeadBlendingCurveElement>)0x0) {
            FVar14 = FVar20;
          }
          lVar16 = ((longlong)FVar15 - (longlong)FVar14) / 6 +
                   ((longlong)FVar15 - (longlong)FVar14 >> 0x3f);
          iVar13 = (int)(lVar16 >> 2) - (int)(lVar16 >> 0x3f);
          TArray<FAnimNode_DeadBlending::FDeadBlendingCurveElement,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
          ::InsertUninitializedImpl(&param_1->Elements,iVar13);
          FVar20 = (param_1->Elements).AllocatorInstance.SecondaryData;
          if (FVar20 == (ForElementType<FAnimNode_DeadBlending::FDeadBlendingCurveElement>)0x0) {
            pFVar17 = (FName *)((param_1->Elements).AllocatorInstance.InlineData +
                               (longlong)iVar13 * 0x18);
            FVar20 = (ForElementType<FAnimNode_DeadBlending::FDeadBlendingCurveElement>)param_1;
          }
          else {
            pFVar17 = (FName *)((longlong)FVar20 + (longlong)iVar13 * 0x18);
          }
          iVar13 = (param_1->Elements).ArrayNum;
          puVar2 = (uchar *)((longlong)&pFVar17[1].Number + 1);
          puVar2[0] = '\0';
          puVar2[1] = '\0';
          *(uchar *)((longlong)&pFVar17[1].Number + 3) = '\0';
          fVar23 = pFVar18->Value;
          pFVar18 = pFVar18 + 1;
          pFVar17[2].ComparisonIndex = 0;
          pFVar17[2].Number = 0;
          pFVar17[1].ComparisonIndex.Value = 0;
          FVar20 = (ForElementType<FAnimNode_DeadBlending::FDeadBlendingCurveElement>)
                   ((longlong)FVar20 + (longlong)iVar13 * 0x18);
          *(undefined1 *)&pFVar17[1].Number = 0;
          *pFVar17 = FVar5;
          fVar23 = fVar23 * fVar10 * (param_3.__this)->ExtrapolationHalfLife;
          if ((param_3.__this)->ExtrapolationHalfLifeMax <= fVar23) {
            fVar23 = (param_3.__this)->ExtrapolationHalfLifeMax;
          }
          if (fVar23 <= (param_3.__this)->ExtrapolationHalfLifeMin) {
            fVar23 = (param_3.__this)->ExtrapolationHalfLifeMin;
          }
          pFVar17[2].Number = (uint)fVar23;
          FVar15 = (ForElementType<FAnimNode_DeadBlending::FDeadBlendingCurveElement>)(pFVar17 + 3);
          bVar12 = pFVar18 == pFVar22;
        }
      } while (!bVar12);
    }
LAB_1474aff47:
    piVar21 = &(param_1->Elements).ArrayMax;
    if (pFVar18 < pFVar22) {
      iVar13 = (param_1->Elements).ArrayNum;
      iVar4 = (int)((longlong)pFVar22 - (longlong)pFVar18 >> 4);
      uVar19 = iVar4 + iVar13;
      if ((int)uVar19 < 0) {
                    /* WARNING: Subroutine does not return */
        Core::Private::OnInvalidArrayNum((ulonglong)uVar19);
      }
      if ((param_1->Elements).ArrayMax < (int)uVar19) {
        Core::Private::
        ReallocTo<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FAnimNode_DeadBlending::FDeadBlendingCurveElement>_>
                  (0x18,4,uVar19,
                   (ForElementType<FAnimNode_DeadBlending::FDeadBlendingCurveElement> *)param_1,
                   iVar13,piVar21);
      }
      Core::Private::
      ReallocGrow<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FAnimNode_DeadBlending::FDeadBlendingCurveElement>_>
                (0x18,4,iVar4,
                 (ForElementType<FAnimNode_DeadBlending::FDeadBlendingCurveElement> *)param_1,piVar3
                 ,piVar21);
      FVar20 = (param_1->Elements).AllocatorInstance.SecondaryData;
      if (FVar20 != (ForElementType<FAnimNode_DeadBlending::FDeadBlendingCurveElement>)0x0) {
        param_1 = (TNamedValueArray<TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>,FAnimNode_DeadBlending::FDeadBlendingCurveElement>
                   *)FVar20;
      }
      pFVar17 = (FName *)((longlong)param_1 + (longlong)iVar13 * 0x18);
      do {
        *(undefined2 *)((longlong)&pFVar17[1].Number + 1) = 0;
        *(undefined1 *)((longlong)&pFVar17[1].Number + 3) = 0;
        fVar24 = pFVar18->Value;
        pFVar17[2].ComparisonIndex = 0;
        pFVar17[2].Number = 0;
        pFVar17[1].ComparisonIndex.Value = 0;
        *(undefined1 *)&pFVar17[1].Number = 0;
        pFVar9 = &pFVar18->Name;
        pFVar18 = pFVar18 + 1;
        *pFVar17 = *pFVar9;
        fVar24 = fVar24 * fVar10 * (param_3.__this)->ExtrapolationHalfLife;
        if ((param_3.__this)->ExtrapolationHalfLifeMax <= fVar24) {
          fVar24 = (param_3.__this)->ExtrapolationHalfLifeMax;
        }
        if (fVar24 <= (param_3.__this)->ExtrapolationHalfLifeMin) {
          fVar24 = (param_3.__this)->ExtrapolationHalfLifeMin;
        }
        pFVar17[2].Number = (uint)fVar24;
        pFVar17 = pFVar17 + 3;
      } while (pFVar18 < pFVar22);
    }
  }
  return;
}

// ~TFunction_OwnedObject<`FAnimNode_DeadBlending::Update_AnyThread'::__l8::<lambda_1>,1,1> @ 1474b46a0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FAnimNode_DeadBlending::Update_AnyThread'::__l8::<lambda_1>,1,1>::
~TFunction_OwnedObject<_FAnimNode_DeadBlending::Update_AnyThread_::__l8::<lambda_1>,1,1>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FAnimNode_DeadBlending::Update_AnyThread'::`8'::<lambda_1>,1,1>::
        _vftable_;
  return;
}

// ~TFunction_OwnedObject<`FAnimNode_Inertialization::Update_AnyThread'::__l8::<lambda_1>,1,1> @ 1474b46c0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FAnimNode_Inertialization::Update_AnyThread'::__l8::<lambda_1>,1,1>::
~TFunction_OwnedObject<_FAnimNode_Inertialization::Update_AnyThread_::__l8::<lambda_1>,1,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FAnimNode_Inertialization::Update_AnyThread'::`8'::<lambda_1>,1,1>::
        _vftable_;
  return;
}

// operator== @ 1474b6ce0

bool __cdecl operator==(FAnimNotifyEventReference *param_1,FAnimNotifyEvent *param_2)

{
  FAnimNotifyEvent *pFVar1;
  UAnimNotify *pUVar2;
  UAnimNotifyState *pUVar3;
  
  if ((((param_1->NotifySource).field0_0x0.DebugPtr != (UObject *)0x0) &&
      (pFVar1 = param_1->Notify, pFVar1 != (FAnimNotifyEvent *)0x0)) &&
     ((((pUVar2 = (pFVar1->Notify).field0_0x0.DebugPtr, pUVar2 != (UAnimNotify *)0x0 &&
        (pUVar2 == (param_2->Notify).field0_0x0.DebugPtr)) ||
       ((pUVar3 = (pFVar1->NotifyStateClass).field0_0x0.DebugPtr, pUVar3 != (UAnimNotifyState *)0x0
        && (pUVar3 == (param_2->NotifyStateClass).field0_0x0.DebugPtr)))) ||
      ((pUVar2 == (UAnimNotify *)0x0 &&
       ((pUVar3 == (UAnimNotifyState *)0x0 && (pFVar1->NotifyName == param_2->NotifyName)))))))) {
    return true;
  }
  return false;
}

// operator() @ 1474b6f70

void __thiscall `GetCandidateSystems'::__l7::<lambda_1>::operator()(void *this,UObject *param_1)

{
  ForElementType<UParticleSystemComponent_*> FVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  UClass *pUVar5;
  ForElementType<UParticleSystemComponent_*> FVar6;
  ForElementType<UParticleSystemComponent_*> FVar7;
  UObject *local_18 [2];
  
  if (param_1 != (UObject *)0x0) {
    pUVar5 = Z_Construct_UClass_UParticleSystemComponent_NoRegister();
    iVar4 = (int)pUVar5->_padding_;
    if ((iVar4 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar4 * 8) ==
        &pUVar5->_padding_)) {
      FVar7 = *(ForElementType<UParticleSystemComponent_*> *)this;
      FVar1 = *(ForElementType<UParticleSystemComponent_*> *)((longlong)FVar7 + 0x40);
      FVar6 = FVar1;
      if (FVar1 == (ForElementType<UParticleSystemComponent_*>)0x0) {
        FVar6 = FVar7;
      }
      local_18[0] = param_1;
      if ((ulonglong)FVar6 <= local_18) {
        FVar6 = FVar7;
        if (FVar1 != (ForElementType<UParticleSystemComponent_*>)0x0) {
          FVar6 = FVar1;
        }
        if ((local_18 <
             (UObject **)((longlong)FVar6 + (longlong)*(int *)((longlong)FVar7 + 0x4c) * 8)) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      iVar4 = *(int *)((longlong)FVar7 + 0x48);
      if (iVar4 == *(int *)((longlong)FVar7 + 0x4c)) {
        iVar4 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<UParticleSystemComponent_*>_>
                          (0x808,(ForElementType<UParticleSystemComponent_*> *)FVar7,
                           (int *)((longlong)FVar7 + 0x4c));
      }
      *(int *)((longlong)FVar7 + 0x48) = iVar4 + 1;
      if (*(ForElementType<UParticleSystemComponent_*> *)((longlong)FVar7 + 0x40) !=
          (ForElementType<UParticleSystemComponent_*>)0x0) {
        FVar7 = *(ForElementType<UParticleSystemComponent_*> *)((longlong)FVar7 + 0x40);
      }
      *(UObject **)((longlong)FVar7 + (longlong)iVar4 * 8) = local_18[0];
      return;
    }
  }
  return;
}

// operator() @ 1474b7270

EEnumerate __thiscall
``FAnimNode_DeadBlending::Update_AnyThread'::__l8::<lambda_1>::operator()'::__l9::<lambda_1>::
operator()(void *this,IInertializationRequester *param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 local_res8 [8];
  
  lVar2 = *(longlong *)this;
  iVar1 = *(int *)(lVar2 + 0x3c8);
  lVar3 = *(longlong *)(lVar2 + 0x3c0);
  lVar4 = (longlong)iVar1 * 0x58 + lVar3;
  while( true ) {
    if (*(int *)(lVar2 + 0x3c8) != iVar1) {
      `TCheckedPointerIterator<FInertializationRequest,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (lVar3 == lVar4) break;
    (**(code **)((longlong)*param_1 + 0x20))(param_1,lVar3);
    lVar3 = lVar3 + 0x58;
  }
  (**(code **)((longlong)*param_1 + 0x30))
            (param_1,*(undefined8 *)((longlong)this + 0x10),*(undefined4 *)((longlong)this + 8));
  return Stop;
}

// operator() @ 1474b7300

EEnumerate __thiscall
``FAnimNode_Inertialization::Update_AnyThread'::__l8::<lambda_1>::operator()'::__l9::<lambda_1>::
operator()(void *this,IInertializationRequester *param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 local_res8 [8];
  
  lVar2 = *(longlong *)this;
  iVar1 = *(int *)(lVar2 + 0x310);
  lVar3 = *(longlong *)(lVar2 + 0x308);
  lVar4 = (longlong)iVar1 * 0x58 + lVar3;
  while( true ) {
    if (*(int *)(lVar2 + 0x310) != iVar1) {
      `TCheckedPointerIterator<FInertializationRequest,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (lVar3 == lVar4) break;
    (**(code **)((longlong)*param_1 + 0x20))(param_1,lVar3);
    lVar3 = lVar3 + 0x58;
  }
  (**(code **)((longlong)*param_1 + 0x30))
            (param_1,*(undefined8 *)((longlong)this + 0x10),*(undefined4 *)((longlong)this + 8));
  return Stop;
}

// `vector_deleting_destructor'`adjustor{16}' @ 1474b7434

/* [thunk]:public: virtual void * __ptr64 __cdecl FAnimNode_DeadBlending::`vector deleting
   destructor'`adjustor{16}' (unsigned int) __ptr64 */

void * __thiscall
FAnimNode_DeadBlending::_vector_deleting_destructor__adjustor_16__
          (FAnimNode_DeadBlending *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((FAnimNode_DeadBlending *)&this[-1].InertializationRequestAnimInstance,param_1
                     );
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 1474b7444

/* [thunk]:public: virtual void * __ptr64 __cdecl UAnimMontage::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UAnimMontage::_vector_deleting_destructor__adjustor_40__(UAnimMontage *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UAnimMontage *)&this[-1].TimeStretchCurve.Markers,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{48}' @ 1474b7454

/* [thunk]:public: virtual void * __ptr64 __cdecl UAnimMontage::`vector deleting
   destructor'`adjustor{48}' (unsigned int) __ptr64 */

void * __thiscall
UAnimMontage::_vector_deleting_destructor__adjustor_48__(UAnimMontage *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UAnimMontage *)&this[-1].TimeStretchCurve,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 1474b7464

/* [thunk]:public: virtual void * __ptr64 __cdecl UAnimSequence::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UAnimSequence::_vector_deleting_destructor__adjustor_40__(UAnimSequence *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UAnimSequence *)&this[-1].AttributeCurves.field_0x28,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{48}' @ 1474b7474

/* [thunk]:public: virtual void * __ptr64 __cdecl UAnimSequence::`vector deleting
   destructor'`adjustor{48}' (unsigned int) __ptr64 */

void * __thiscall
UAnimSequence::_vector_deleting_destructor__adjustor_48__(UAnimSequence *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UAnimSequence *)&this[-1].AttributeCurves.field_0x20,param_1);
  return pvVar1;
}

// `scalar_deleting_destructor' @ 1474b7490

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FAnimNode_DeadBlending::Update_AnyThread'::__l8::<lambda_1>,1,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FAnimNode_DeadBlending::Update_AnyThread'::`8'::<lambda_1>,1,1>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1474b74d0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FAnimNode_Inertialization::Update_AnyThread'::__l8::<lambda_1>,1,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FAnimNode_Inertialization::Update_AnyThread'::`8'::<lambda_1>,1,1>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1474b7510

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FAnimationUpdateSharedContext,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FAnimationUpdateSharedContext,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xc70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1474b7550

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FAnimExecutionContext::FData,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FAnimExecutionContext::FData,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1474b7590

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<UE::Anim::FActiveStateMachineScope,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<UE::Anim::FActiveStateMachineScope,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1474b75d0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<UE::Anim::FCachedPoseSkippedUpdateHandler,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<UE::Anim::FCachedPoseSkippedUpdateHandler,1> *this,
          uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1474b7610

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<UE::Anim::FDeadBlendingRequester,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<UE::Anim::FDeadBlendingRequester,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1474b7650

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<UE::Anim::FInertializationRequester,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<UE::Anim::FInertializationRequester,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1474b7690

void * __thiscall
TThreadSingleton<UE::Anim::FCachedPoseThreadContext>::_scalar_deleting_destructor_
          (TThreadSingleton<UE::Anim::FCachedPoseThreadContext> *this,uint param_1)

{
  ~TThreadSingleton<UE::Anim::FCachedPoseThreadContext>(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1474b76d0

void * __thiscall
FAnimNode_ApplyMeshSpaceAdditive::_scalar_deleting_destructor_
          (FAnimNode_ApplyMeshSpaceAdditive *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FAnimNode_Base__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xd0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1474b7710

void * __thiscall
FAnimNode_ConvertComponentToLocalSpace::_scalar_deleting_destructor_
          (FAnimNode_ConvertComponentToLocalSpace *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FAnimNode_Base__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1474b7750

void * __thiscall
FAnimNode_ConvertLocalToComponentSpace::_scalar_deleting_destructor_
          (FAnimNode_ConvertLocalToComponentSpace *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FAnimNode_Base__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1474b7790

void * __thiscall
FAnimNode_CustomProperty::_scalar_deleting_destructor_(FAnimNode_CustomProperty *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7FAnimNode_CustomProperty__6B_;
  pFVar1 = (this->DestProperties).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->SourceProperties).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->DestPropertyNames).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->SourcePropertyNames).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7FAnimNode_Base__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x58);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1474b7820

void * __thiscall
FAnimNode_DeadBlending::_scalar_deleting_destructor_(FAnimNode_DeadBlending *this,uint param_1)

{
  ~FAnimNode_DeadBlending(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x690);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1474b7860

void * __thiscall
FAnimNode_LinkedAnimGraph::_scalar_deleting_destructor_
          (FAnimNode_LinkedAnimGraph *this,uint param_1)

{
  ~FAnimNode_LinkedAnimGraph(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xb8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1474b78a0

void * __thiscall FAnimNode_Root::_scalar_deleting_destructor_(FAnimNode_Root *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FAnimNode_Base__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1474b78e0

void * __thiscall
FAnimNode_SaveCachedPose::_scalar_deleting_destructor_(FAnimNode_SaveCachedPose *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<FAnimNode_SaveCachedPose::FCachedUpdateContext,int>
            ((FCachedUpdateContext *)(this->CachedUpdateContexts).AllocatorInstance.Data,
             (this->CachedUpdateContexts).ArrayNum);
  pFVar1 = (this->CachedUpdateContexts).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7FAnimNode_Base__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x80);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1474b7940

void * __thiscall
FAnimNode_TransitionPoseEvaluator::_scalar_deleting_destructor_
          (FAnimNode_TransitionPoseEvaluator *this,uint param_1)

{
  UE::Anim::TAttributeContainer<FCompactPoseBoneIndex,TSizedDefaultAllocator<32>_>::
  ~TAttributeContainer<FCompactPoseBoneIndex,TSizedDefaultAllocator<32>_>
            ((TAttributeContainer<FCompactPoseBoneIndex,TSizedDefaultAllocator<32>_> *)
             &this->CachedAttributes);
  if (*(void **)&this->CachedCurve != (void *)0x0) {
    FMemory::Free(*(void **)&this->CachedCurve);
  }
  if (*(void **)&this->CachedPose != (void *)0x0) {
    FMemory::Free(*(void **)&this->CachedPose);
  }
  this->_padding_ = (longlong)&___7FAnimNode_Base__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xa8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1474b79b0

void * __thiscall
FAnimNode_TransitionResult::_scalar_deleting_destructor_
          (FAnimNode_TransitionResult *this,uint param_1)

{
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->NativeTransitionDelegate);
  this->_padding_ = (longlong)&___7FAnimNode_Base__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1474b7a00

void * __thiscall
FAnimNode_UseCachedPose::_scalar_deleting_destructor_(FAnimNode_UseCachedPose *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FAnimNode_Base__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1474b7a40

void * __thiscall
UE::Anim::FAnimNotifyEndDataContext::_scalar_deleting_destructor_
          (FAnimNotifyEndDataContext *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1474b7a70

void * __thiscall
UE::Anim::FCachedPoseSkippedUpdateHandler::_scalar_deleting_destructor_
          (FCachedPoseSkippedUpdateHandler *this,uint param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if (*(longlong *)&this->Function != 0) {
    plVar1 = *(longlong **)&(this->Function).field_0x28;
    plVar2 = (longlong *)&(this->Function).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1474b7ad0

void * __thiscall
UE::Anim::FCachedPoseThreadContext::_scalar_deleting_destructor_
          (FCachedPoseThreadContext *this,uint param_1)

{
  ForElementType<UE::Anim::FCachedPoseThreadContext::FCachedPoseScopeInternal> FVar1;
  
  FVar1 = (this->Scopes).AllocatorInstance.SecondaryData;
  if (FVar1 == (ForElementType<UE::Anim::FCachedPoseThreadContext::FCachedPoseScopeInternal>)0x0) {
    FVar1 = (ForElementType<UE::Anim::FCachedPoseThreadContext::FCachedPoseScopeInternal>)
            &this->Scopes;
  }
  DestructItems<UE::Anim::FCachedPoseThreadContext::FCachedPoseScopeInternal,int>
            ((FCachedPoseScopeInternal *)FVar1,(this->Scopes).ArrayNum);
  FVar1 = (this->Scopes).AllocatorInstance.SecondaryData;
  if (FVar1 != (ForElementType<UE::Anim::FCachedPoseThreadContext::FCachedPoseScopeInternal>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TThreadSingleton<UE::Anim::FCachedPoseThreadContext>::
  ~TThreadSingleton<UE::Anim::FCachedPoseThreadContext>
            ((TThreadSingleton<UE::Anim::FCachedPoseThreadContext> *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x11a0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1474b7b50

void * __thiscall
FCompositeSection::_scalar_deleting_destructor_(FCompositeSection *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->MetaData).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7FAnimLinkableElement__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1474b7ba0

void * __thiscall
UE::Anim::FDeadBlendingRequester::_scalar_deleting_destructor_
          (FDeadBlendingRequester *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1474b7bd0

void * __thiscall
UE::Anim::FInertializationRequester::_scalar_deleting_destructor_
          (FInertializationRequester *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1474b7c00

void * __thiscall
IBoneReferenceSkeletonProvider::_scalar_deleting_destructor_
          (IBoneReferenceSkeletonProvider *this,uint param_1)

{
  *this = (IBoneReferenceSkeletonProvider)&___7IBoneReferenceSkeletonProvider__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1474b7c40

void * __thiscall
UE::Anim::IInertializationRequester::_scalar_deleting_destructor_
          (IInertializationRequester *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1474b7c70

void * __thiscall UAnimMetaData::_scalar_deleting_destructor_(UAnimMetaData *this,uint param_1)

{
  *(undefined ***)this = &___7UAnimMetaData__6B_;
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1474b7cd0

void * __thiscall UAnimMontage::_scalar_deleting_destructor_(UAnimMontage *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_PreviewMeshProvider__;
  pFVar1 = (this->TimeStretchCurve).Markers.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->BranchingPointStateNotifyIndices).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->BranchingPointMarkers).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FSlotAnimationTrack,int>
            ((FSlotAnimationTrack *)(this->SlotAnimTracks).AllocatorInstance.Data,
             (this->SlotAnimTracks).ArrayNum);
  pFVar1 = (this->SlotAnimTracks).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FCompositeSection,int>
            ((FCompositeSection *)(this->CompositeSections).AllocatorInstance.Data,
             (this->CompositeSections).ArrayNum);
  pFVar1 = (this->CompositeSections).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->MarkerData).UniqueMarkerNames.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->MarkerData).AuthoredSyncMarkers.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UAnimCompositeBase::~UAnimCompositeBase((UAnimCompositeBase *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x1e0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1474b7df0

void * __thiscall UAnimNotify::_scalar_deleting_destructor_(UAnimNotify *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UAnimNotify__6B_;
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1474b7e50

void * __thiscall
UAnimNotifyLibrary::_scalar_deleting_destructor_(UAnimNotifyLibrary *this,uint param_1)

{
  *(undefined ***)this = &___7UAnimNotifyLibrary__6B_;
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

// `scalar_deleting_destructor' @ 1474b7eb0

void * __thiscall
UAnimNotifyMirrorInspectionLibrary::_scalar_deleting_destructor_
          (UAnimNotifyMirrorInspectionLibrary *this,uint param_1)

{
  *(undefined ***)this = &___7UAnimNotifyMirrorInspectionLibrary__6B_;
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

// `scalar_deleting_destructor' @ 1474b7f10

void * __thiscall
UAnimNotifyState::_scalar_deleting_destructor_(UAnimNotifyState *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UAnimNotifyState__6B_;
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1474b7f70

void * __thiscall
UAnimNotifyStateMachineInspectionLibrary::_scalar_deleting_destructor_
          (UAnimNotifyStateMachineInspectionLibrary *this,uint param_1)

{
  *(undefined ***)this = &___7UAnimNotifyStateMachineInspectionLibrary__6B_;
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

// `scalar_deleting_destructor' @ 1474b7fd0

void * __thiscall
UAnimNotifyState_DisableRootMotion::_scalar_deleting_destructor_
          (UAnimNotifyState_DisableRootMotion *this,uint param_1)

{
  *(undefined ***)this = &___7UAnimNotifyState__6B_;
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1474b8030

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
UAnimNotifyState_TimedParticleEffect::_scalar_deleting_destructor_
          (UAnimNotifyState_TimedParticleEffect *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UAnimNotifyState__6B_;
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x78);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1474b8090

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
UAnimNotifyState_Trail::_scalar_deleting_destructor_(UAnimNotifyState_Trail *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UAnimNotifyState__6B_;
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x58);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1474b80f0

void * __thiscall
UAnimNotify_PauseClothingSimulation::_scalar_deleting_destructor_
          (UAnimNotify_PauseClothingSimulation *this,uint param_1)

{
  *(undefined ***)this = &___7UAnimNotify__6B_;
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1474b8150

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
UAnimNotify_PlayParticleEffect::_scalar_deleting_destructor_
          (UAnimNotify_PlayParticleEffect *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UAnimNotify__6B_;
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xc0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1474b81b0

void * __thiscall
UAnimNotify_PlaySound::_scalar_deleting_destructor_(UAnimNotify_PlaySound *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UAnimNotify__6B_;
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x58);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1474b8210

void * __thiscall
UAnimNotify_ResetClothingSimulation::_scalar_deleting_destructor_
          (UAnimNotify_ResetClothingSimulation *this,uint param_1)

{
  *(undefined ***)this = &___7UAnimNotify__6B_;
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1474b8270

void * __thiscall
UAnimNotify_ResetDynamics::_scalar_deleting_destructor_
          (UAnimNotify_ResetDynamics *this,uint param_1)

{
  *(undefined ***)this = &___7UAnimNotify__6B_;
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1474b82d0

void * __thiscall
UAnimNotify_ResumeClothingSimulation::_scalar_deleting_destructor_
          (UAnimNotify_ResumeClothingSimulation *this,uint param_1)

{
  *(undefined ***)this = &___7UAnimNotify__6B_;
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1474b8330

void * __thiscall UAnimSequence::_scalar_deleting_destructor_(UAnimSequence *this,uint param_1)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  *(undefined4 *)&(this->AttributeCurves).field_0x48 = 0;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_PreviewMeshProvider__;
  pvVar1 = *(void **)&(this->AttributeCurves).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FAnimationAttributeIdentifier,FAttributeCurve>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FAnimationAttributeIdentifier,FAttributeCurve>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FAnimationAttributeIdentifier,FAttributeCurve>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->AttributeCurves);
  pFVar2 = (this->UniqueMarkerNames).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->AuthoredSyncMarkers).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->RetargetSourceAssetReferencePose).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  FCompressedAnimSequence::~FCompressedAnimSequence(&this->CompressedData);
  UAnimSequenceBase::~UAnimSequenceBase((UAnimSequenceBase *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x1f0);
  }
  return this;
}

// AdvanceMarkerBackwards @ 1474bb360

void __cdecl
AdvanceMarkerBackwards
          (int *param_1,FName param_2,bool param_3,
          TArray<FAnimSyncMarker,TSizedDefaultAllocator<32>_> *param_4,UMirrorDataTable *param_5)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FName *pFVar5;
  uint uVar6;
  FName FVar7;
  int iVar8;
  int iVar9;
  
  iVar1 = param_4->ArrayNum;
  uVar6 = *param_1;
  iVar8 = (iVar1 - uVar6) + -1;
  iVar9 = iVar1;
  while( true ) {
    uVar4 = 0;
    if ((int)uVar6 < param_4->ArrayNum) {
      uVar4 = ~uVar6 >> 0x1f;
    }
    if ((uVar4 == 0) &&
       (bVar3 = FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    FVar7 = *(FName *)((param_4->AllocatorInstance).Data + (longlong)(int)uVar6 * 0xc);
    if ((param_5 != (UMirrorDataTable *)0x0) &&
       (pFVar5 = TMapBase<FName,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FName,0>_>
                 ::Find((TMapBase<FName,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FName,0>_>
                         *)&param_5->SyncToMirrorSyncMap,FVar7), pFVar5 != (FName *)0x0)) {
      FVar7 = *pFVar5;
    }
    if (((FVar7 == param_2) || (iVar9 = iVar9 + -1, iVar9 < 0)) || ((*param_1 == 0 && (!param_3))))
    break;
    iVar8 = (iVar8 + 1) % iVar1;
    uVar6 = (iVar1 - iVar8) - 1;
    *param_1 = uVar6;
  }
  iVar1 = *param_1;
  if ((-1 < iVar1) && (iVar1 < param_4->ArrayNum)) {
    if ((iVar1 < 0) &&
       (bVar3 = FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    FVar7 = *(FName *)((param_4->AllocatorInstance).Data + (longlong)iVar1 * 0xc);
    if ((param_5 != (UMirrorDataTable *)0x0) &&
       (pFVar5 = TMapBase<FName,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FName,0>_>
                 ::Find((TMapBase<FName,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FName,0>_>
                         *)&param_5->SyncToMirrorSyncMap,FVar7), pFVar5 != (FName *)0x0)) {
      FVar7 = *pFVar5;
    }
    if (FVar7 == param_2) {
      return;
    }
  }
  *param_1 = -1;
  return;
}

// AdvanceMarkerForwards @ 1474bb4f0

void __cdecl
AdvanceMarkerForwards
          (int *param_1,FName param_2,bool param_3,
          TArray<FAnimSyncMarker,TSizedDefaultAllocator<32>_> *param_4,UMirrorDataTable *param_5)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  FName *pFVar6;
  int iVar7;
  FName FVar8;
  
  iVar7 = param_4->ArrayNum;
  while( true ) {
    uVar1 = *param_1;
    uVar4 = 0;
    if ((int)uVar1 < param_4->ArrayNum) {
      uVar4 = ~uVar1 >> 0x1f;
    }
    if ((uVar4 == 0) &&
       (bVar3 = FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    FVar8 = *(FName *)((param_4->AllocatorInstance).Data + (longlong)(int)uVar1 * 0xc);
    if ((param_5 != (UMirrorDataTable *)0x0) &&
       (pFVar6 = TMapBase<FName,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FName,0>_>
                 ::Find((TMapBase<FName,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FName,0>_>
                         *)&param_5->SyncToMirrorSyncMap,FVar8), pFVar6 != (FName *)0x0)) {
      FVar8 = *pFVar6;
    }
    if ((FVar8 == param_2) || (iVar7 = iVar7 + -1, iVar7 < 0)) break;
    iVar5 = *param_1 + 1;
    *param_1 = iVar5;
    if ((iVar5 == param_4->ArrayNum) && (!param_3)) break;
    *param_1 = iVar5 % param_4->ArrayNum;
  }
  iVar7 = *param_1;
  if ((-1 < iVar7) && (iVar7 < param_4->ArrayNum)) {
    if ((iVar7 < 0) &&
       (bVar3 = FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    FVar8 = *(FName *)((param_4->AllocatorInstance).Data + (longlong)iVar7 * 0xc);
    if ((param_5 != (UMirrorDataTable *)0x0) &&
       (pFVar6 = TMapBase<FName,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FName,0>_>
                 ::Find((TMapBase<FName,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FName,0>_>
                         *)&param_5->SyncToMirrorSyncMap,FVar8), pFVar6 != (FName *)0x0)) {
      FVar8 = *pFVar6;
    }
    if (FVar8 == param_2) {
      return;
    }
  }
  *param_1 = -1;
  return;
}

// EmptyLinkFunctionForGeneratedCodeAnimLinkableElement @ 1474cc7c0

void __cdecl EmptyLinkFunctionForGeneratedCodeAnimLinkableElement(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeAnimMetaData @ 1474cc7d0

void __cdecl EmptyLinkFunctionForGeneratedCodeAnimMetaData(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeAnimMontage @ 1474cc7e0

void __cdecl EmptyLinkFunctionForGeneratedCodeAnimMontage(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeAnimNodeBase @ 1474cc7f0

void __cdecl EmptyLinkFunctionForGeneratedCodeAnimNodeBase(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeAnimNodeData @ 1474cc800

void __cdecl EmptyLinkFunctionForGeneratedCodeAnimNodeData(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeAnimNodeFunctionRef @ 1474cc810

void __cdecl EmptyLinkFunctionForGeneratedCodeAnimNodeFunctionRef(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeAnimNodeReference @ 1474cc820

void __cdecl EmptyLinkFunctionForGeneratedCodeAnimNodeReference(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeAnimNodeSpaceConversions @ 1474cc830

void __cdecl EmptyLinkFunctionForGeneratedCodeAnimNodeSpaceConversions(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeAnimNode_ApplyMeshSpaceAdditive @ 1474cc840

void __cdecl EmptyLinkFunctionForGeneratedCodeAnimNode_ApplyMeshSpaceAdditive(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeAnimNode_AssetPlayerBase @ 1474cc850

void __cdecl EmptyLinkFunctionForGeneratedCodeAnimNode_AssetPlayerBase(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeAnimNode_CustomProperty @ 1474cc860

void __cdecl EmptyLinkFunctionForGeneratedCodeAnimNode_CustomProperty(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeAnimNode_DeadBlending @ 1474cc870

void __cdecl EmptyLinkFunctionForGeneratedCodeAnimNode_DeadBlending(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeAnimNode_Inertialization @ 1474cc880

void __cdecl EmptyLinkFunctionForGeneratedCodeAnimNode_Inertialization(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeAnimNode_LinkedAnimGraph @ 1474cc890

void __cdecl EmptyLinkFunctionForGeneratedCodeAnimNode_LinkedAnimGraph(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeAnimNode_LinkedAnimLayer @ 1474cc8a0

void __cdecl EmptyLinkFunctionForGeneratedCodeAnimNode_LinkedAnimLayer(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeAnimNode_LinkedInputPose @ 1474cc8b0

void __cdecl EmptyLinkFunctionForGeneratedCodeAnimNode_LinkedInputPose(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeAnimNode_RelevantAssetPlayerBase @ 1474cc8c0

void __cdecl EmptyLinkFunctionForGeneratedCodeAnimNode_RelevantAssetPlayerBase(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeAnimNode_Root @ 1474cc8d0

void __cdecl EmptyLinkFunctionForGeneratedCodeAnimNode_Root(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeAnimNode_SaveCachedPose @ 1474cc8e0

void __cdecl EmptyLinkFunctionForGeneratedCodeAnimNode_SaveCachedPose(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeAnimNode_SequencePlayer @ 1474cc8f0

void __cdecl EmptyLinkFunctionForGeneratedCodeAnimNode_SequencePlayer(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeAnimNode_StateMachine @ 1474cc900

void __cdecl EmptyLinkFunctionForGeneratedCodeAnimNode_StateMachine(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeAnimNode_StateResult @ 1474cc910

void __cdecl EmptyLinkFunctionForGeneratedCodeAnimNode_StateResult(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeAnimNode_TransitionPoseEvaluator @ 1474cc920

void __cdecl EmptyLinkFunctionForGeneratedCodeAnimNode_TransitionPoseEvaluator(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeAnimNode_TransitionResult @ 1474cc930

void __cdecl EmptyLinkFunctionForGeneratedCodeAnimNode_TransitionResult(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeAnimNode_UseCachedPose @ 1474cc940

void __cdecl EmptyLinkFunctionForGeneratedCodeAnimNode_UseCachedPose(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeAnimNotify @ 1474cc950

void __cdecl EmptyLinkFunctionForGeneratedCodeAnimNotify(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeAnimNotifyLibrary @ 1474cc960

void __cdecl EmptyLinkFunctionForGeneratedCodeAnimNotifyLibrary(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeAnimNotifyMirrorInspectionLibrary @ 1474cc970

void __cdecl EmptyLinkFunctionForGeneratedCodeAnimNotifyMirrorInspectionLibrary(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeAnimNotifyQueue @ 1474cc980

void __cdecl EmptyLinkFunctionForGeneratedCodeAnimNotifyQueue(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeAnimNotifyState @ 1474cc990

void __cdecl EmptyLinkFunctionForGeneratedCodeAnimNotifyState(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeAnimNotifyStateMachineInspectionLibrary @ 1474cc9a0

void __cdecl EmptyLinkFunctionForGeneratedCodeAnimNotifyStateMachineInspectionLibrary(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeAnimNotifyState_DisableRootMotion @ 1474cc9b0

void __cdecl EmptyLinkFunctionForGeneratedCodeAnimNotifyState_DisableRootMotion(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeAnimNotifyState_TimedParticleEffect @ 1474cc9c0

void __cdecl EmptyLinkFunctionForGeneratedCodeAnimNotifyState_TimedParticleEffect(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeAnimNotifyState_Trail @ 1474cc9d0

void __cdecl EmptyLinkFunctionForGeneratedCodeAnimNotifyState_Trail(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeAnimNotify_PauseClothingSimulation @ 1474cc9e0

void __cdecl EmptyLinkFunctionForGeneratedCodeAnimNotify_PauseClothingSimulation(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeAnimNotify_PlayParticleEffect @ 1474cc9f0

void __cdecl EmptyLinkFunctionForGeneratedCodeAnimNotify_PlayParticleEffect(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeAnimNotify_PlaySound @ 1474cca00

void __cdecl EmptyLinkFunctionForGeneratedCodeAnimNotify_PlaySound(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeAnimNotify_ResetClothingSimulation @ 1474cca10

void __cdecl EmptyLinkFunctionForGeneratedCodeAnimNotify_ResetClothingSimulation(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeAnimNotify_ResetDynamics @ 1474cca20

void __cdecl EmptyLinkFunctionForGeneratedCodeAnimNotify_ResetDynamics(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeAnimNotify_ResumeClothingSimulation @ 1474cca30

void __cdecl EmptyLinkFunctionForGeneratedCodeAnimNotify_ResumeClothingSimulation(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeAnimPhysicsSolver @ 1474cca40

void __cdecl EmptyLinkFunctionForGeneratedCodeAnimPhysicsSolver(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeAnimSequence @ 1474cca50

void __cdecl EmptyLinkFunctionForGeneratedCodeAnimSequence(void)

{
  return;
}

// GatherAnimSequenceStats @ 1474d45b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __cdecl GatherAnimSequenceStats(FOutputDevice *param_1)

{
  int iVar1;
  longlong *plVar2;
  FUECompressedAnimData *pFVar3;
  code *pcVar4;
  bool bVar5;
  EInternalObjectFlags EVar6;
  uint uVar7;
  int iVar8;
  UClass *pUVar9;
  FString *pFVar10;
  longlong lVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  undefined1 auStackY_2f8 [32];
  int local_278;
  int local_274;
  int local_270;
  int local_26c;
  int local_268;
  int local_264;
  int local_260;
  int local_25c;
  int local_258;
  int local_254;
  int local_250;
  int local_24c;
  int local_248;
  int local_244;
  int local_240;
  int local_23c;
  float local_238;
  float local_234;
  float local_230;
  int local_22c;
  int local_228;
  int local_224;
  int local_220;
  FOutputDevice *local_218;
  TObjectIterator<UAnimSequence> local_210;
  int local_1f8;
  int local_1f4;
  int local_1f0;
  int local_1ec;
  longlong *local_1e8;
  FScriptContainerElement *local_1e0;
  FName local_1d8;
  ulong64 local_1d0;
  FString local_1c8;
  undefined8 local_1b8;
  undefined4 local_1b0;
  FString local_1a8;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined4 local_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined4 local_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined4 local_140;
  undefined1 local_138 [72];
  void *local_f0;
  undefined4 local_e8;
  TSparseArray<TSparseSetElement<TTuple<FName,unsigned___int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_e0;
  void *local_a0;
  undefined4 local_98;
  TSparseArray<TSparseSetElement<TTuple<FName,unsigned___int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_90;
  void *local_50;
  undefined4 local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_2f8;
  local_1b8 = 0;
  local_1b0 = 0;
  local_188 = 0;
  local_198 = 0;
  uStack_190 = 0;
  local_180 = 0;
  local_178 = 0;
  uStack_170 = 0;
  local_168 = 0;
  local_160 = 0;
  local_158 = 0;
  uStack_150 = 0;
  local_148 = 0;
  local_140 = 0;
  local_218 = param_1;
  FOutputDevice::LogfImpl
            (param_1,L" %60s, Frames,NTT,NRT, NT1,NR1, TotTrnKys,TotRotKys,Codec,ResBytes");
  iVar8 = 0;
  local_210.Index = 0xffffffff;
  local_250 = 0;
  local_254 = 0;
  local_240 = 0;
  local_23c = 0;
  local_244 = 0;
  local_248 = 0;
  local_24c = 0;
  local_210.ObjectArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_210.ObjectArray.ArrayNum = 0;
  local_210.ObjectArray.ArrayMax = 0;
  EVar6 = UE::GetAsyncLoadingInternalFlagsExclusion();
  pUVar9 = UAnimSequence::StaticClass();
  GetObjectsOfClass(pUVar9,&local_210.ObjectArray,true,RF_ClassDefaultObject,
                    EVar6 | (PendingConstruction|Unreachable|AutoRTFMConstructionAborted));
  iVar12 = iVar8;
  iVar13 = iVar8;
  iVar14 = iVar8;
  while( true ) {
    TObjectIterator<UAnimSequence>::Advance(&local_210);
    lVar11 = (longlong)local_210.Index;
    if ((local_210.Index < 0) || (local_210.ObjectArray.ArrayNum <= local_210.Index)) {
      if (local_210.ObjectArray.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_210.ObjectArray.AllocatorInstance.Data);
      }
      FOutputDevice::Log(param_1,
                         L"======================================================================");
      FOutputDevice::LogfImpl
                (param_1,
                 L"Total Num Tracks: %i trans, %i rot, %i scale, %i trans1, %i rot1, %i scale1");
      FOutputDevice::LogfImpl(param_1,L"Total Num Keys: %i trans, %i rot, %i scale");
      FOutputDevice::LogfImpl(param_1,L"Approx Compressed Memory: %i bytes");
      FOutputDevice::LogfImpl(param_1,L"Approx Key Data Memory: %i bytes");
      return;
    }
    uVar7 = 0;
    if (local_210.Index < local_210.ObjectArray.ArrayNum) {
      uVar7 = (uint)~local_210.Index >> 0x1f;
    }
    if ((uVar7 == 0) &&
       (bVar5 = FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) break;
    plVar2 = *(longlong **)(local_210.ObjectArray.AllocatorInstance.Data + lVar11 * 8);
    local_1e8 = plVar2;
    if (((plVar2 == (longlong *)0xffffffffffffff40) || (plVar2 == (longlong *)0x0)) &&
       (bVar5 = FDebug::CheckVerifyFailedImpl2
                          ("CompressedData && InAnimSequence",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AnimSequence.h"
                           ,0x395,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    param_1 = local_218;
    if (plVar2[0x24] != 0) {
      lVar11 = plVar2[0x25];
      pUVar9 = Z_Construct_UClass_UAnimCompress_NoRegister();
      iVar1 = (int)pUVar9->_padding_;
      param_1 = local_218;
      if ((iVar1 <= *(int *)(*(longlong *)(lVar11 + 0x10) + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x30) + (longlong)iVar1 * 8)
          == &pUVar9->_padding_)) {
        local_258 = 0;
        local_25c = 0;
        local_260 = 0;
        local_270 = 0;
        local_274 = 0;
        local_278 = 0;
        local_234 = 0.0;
        local_238 = 0.0;
        local_230 = 0.0;
        local_1f8 = 0;
        local_264 = 0;
        local_268 = 0;
        local_26c = 0;
        pFVar3 = (FUECompressedAnimData *)plVar2[0x24];
        AnimationFormat_GetStats
                  (pFVar3,&local_258,&local_25c,&local_260,&local_270,&local_274,&local_278,
                   &local_234,&local_238,&local_230,&local_1f8,&local_264,&local_268,&local_26c);
        local_250 = local_250 + local_268;
        local_22c = iVar13 + local_258;
        local_228 = iVar14 + local_25c;
        local_224 = iVar8 + local_260;
        local_220 = iVar12 + local_264;
        local_254 = local_254 + local_26c;
        if ((longlong *)plVar2[0x24] == (longlong *)0x0) {
          iVar8 = 0;
        }
        else {
          iVar8 = (**(code **)(*(longlong *)plVar2[0x24] + 0x20))();
        }
        local_244 = local_244 + local_270;
        lVar11 = (longlong)local_210.Index;
        local_248 = local_248 + local_274;
        local_240 = local_240 + (int)plVar2[0x23] + iVar8;
        local_24c = local_24c + local_278;
        local_23c = local_23c +
                    (int)((float)local_274 * local_238 + (float)local_270 * local_234 +
                         (float)local_278 * local_230);
        uVar7 = 0;
        if (local_210.Index < local_210.ObjectArray.ArrayNum) {
          uVar7 = (uint)~local_210.Index >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar5 = FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        plVar2 = *(longlong **)(local_210.ObjectArray.AllocatorInstance.Data + lVar11 * 8);
        FResourceSizeEx::FResourceSizeEx((FResourceSizeEx *)local_138,EstimatedTotal);
        (**(code **)(*plVar2 + 400))(plVar2,local_138);
        local_1d0 = FResourceSizeEx::GetTotalMemoryBytes((FResourceSizeEx *)local_138);
        local_48 = 0;
        if (local_50 != (void *)0x0) {
          FMemory::Free(local_50);
        }
        TSparseArray<TSparseSetElement<TTuple<FName,unsigned___int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSparseSetElement<TTuple<FName,unsigned___int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  (&local_90);
        local_98 = 0;
        if (local_a0 != (void *)0x0) {
          FMemory::Free(local_a0);
        }
        TSparseArray<TSparseSetElement<TTuple<FName,unsigned___int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSparseSetElement<TTuple<FName,unsigned___int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  (&local_e0);
        local_e8 = 0;
        if (local_f0 != (void *)0x0) {
          FMemory::Free(local_f0);
        }
        TSparseArray<TSparseSetElement<TTuple<FName,unsigned___int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSparseSetElement<TTuple<FName,unsigned___int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  ((TSparseArray<TSparseSetElement<TTuple<FName,unsigned___int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    *)(local_138 + 8));
        pFVar10 = FAnimationUtils::GetAnimationKeyFormatString
                            (&local_1a8,*(AnimationKeyFormat *)&pFVar3->field_0x60);
        if ((pFVar10->Data).ArrayNum == 0) {
          local_1e0 = (FScriptContainerElement *)0x15060d16c;
        }
        else {
          local_1e0 = (pFVar10->Data).AllocatorInstance.Data;
        }
        local_1f4 = local_260;
        local_1f0 = local_25c;
        local_1ec = local_258;
        (**(code **)(*local_1e8 + 0x310))();
        local_1d8 = *(FName *)(local_1e8 + 3);
        FName::ToString(&local_1d8,&local_1c8);
        param_1 = local_218;
        FOutputDevice::LogfImpl
                  (local_218,L" %60s, %3i, %3i,%3i,%3i, %3i,%3i,%3i, %10i,%10i,%10i, %s, %d");
        if (local_1c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1c8.Data.AllocatorInstance.Data);
        }
        iVar8 = local_224;
        iVar12 = local_220;
        iVar13 = local_22c;
        iVar14 = local_228;
        if (local_1a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1a8.Data.AllocatorInstance.Data);
          iVar8 = local_224;
          iVar12 = local_220;
          iVar13 = local_22c;
          iVar14 = local_228;
        }
      }
    }
  }
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

// GetSequencePose @ 1474df380

void __cdecl
GetSequencePose(FAnimationPoseData *param_1,FAnimExtractContext *param_2,UAnimSequence *param_3,
               int param_4,bool param_5)

{
  int iVar1;
  float fVar2;
  double dVar3;
  FAnimExtractContext local_78;
  
  iVar1 = (**(code **)(param_3->_padding_ + 0x310))(param_3);
  if (iVar1 < 1) {
    dVar3 = 0.0;
  }
  else {
    iVar1 = (**(code **)(param_3->_padding_ + 0x310))(param_3);
    dVar3 = (double)param_4 / (double)iVar1;
    if (__real_3ff0000000000000 <= (double)param_4 / (double)iVar1) {
      dVar3 = __real_3ff0000000000000;
    }
    if (dVar3 <= 0.0) {
      dVar3 = 0.0;
    }
  }
  fVar2 = (float)(**(code **)(param_3->_padding_ + 0x2c0))(param_3);
  FAnimExtractContext::FAnimExtractContext(&local_78,param_2);
  local_78.CurrentTime = (double)fVar2 * dVar3;
  UAnimSequence::GetBonePose(param_3,param_1,&local_78,param_5);
  if (local_78.BonesRequired.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.BonesRequired.AllocatorInstance.Data);
  }
  if (local_78.PoseCurves.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.PoseCurves.AllocatorInstance.Data);
  }
  return;
}

// IsMarkerValid @ 1474e9dc0

bool __cdecl
IsMarkerValid(FAnimSyncMarker *param_1,bool param_2,
             TArray<FName,TSizedDefaultAllocator<32>_> *param_3)

{
  FName *pFVar1;
  FName *pFVar2;
  
  if (param_1 == (FAnimSyncMarker *)0x0) {
    if (!param_2) {
      return true;
    }
  }
  else {
    pFVar2 = (FName *)(param_3->AllocatorInstance).Data;
    pFVar1 = pFVar2 + param_3->ArrayNum;
    if (pFVar2 != pFVar1) {
      do {
        if (*pFVar2 == param_1->MarkerName) {
          return true;
        }
        pFVar2 = pFVar2 + 1;
      } while (pFVar2 != pFVar1);
      return false;
    }
  }
  return false;
}

// MakePositionMessage @ 1474ecf10

FString * __cdecl
MakePositionMessage(FString *__return_storage_ptr__,FMarkerSyncAnimPosition *param_1)

{
  FString local_38;
  FString local_28 [2];
  
  FName::ToString(&param_1->NextMarkerName,local_28);
  FName::ToString(&param_1->PreviousMarkerName,&local_38);
  FString::PrintfImpl(__return_storage_ptr__,
                      L"Names(PrevName: %s | NextName: %s) PosBetweenMarkers: %.2f");
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_28[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28[0].Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// MarkerCounterSpaceTransform @ 1474ecfd0

int __cdecl MarkerCounterSpaceTransform(int param_1,int param_2)

{
  return (param_1 - param_2) + -1;
}

// MarkerMatchesPosition @ 1474ecfe0

bool __cdecl
MarkerMatchesPosition(UAnimSequence *param_1,int param_2,FName param_3,UMirrorDataTable *param_4)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  uint uVar4;
  FName *pFVar5;
  FName FVar6;
  FName local_res18 [2];
  FName local_48;
  FString local_40;
  FString local_30;
  
  local_res18[0] = param_3;
  if (param_2 == -2) {
    FName::ToString(local_res18,&local_30);
    local_48 = (FName)param_1->_padding_;
    FName::ToString(&local_48,&local_40);
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("MarkerIndex != MarkerIndexSpecialValues::Uninitialized",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimSequence.cpp"
                       ,0xe11,
                       L"Uninitialized marker supplied to MarkerMatchesPosition. Anim: %s Expecting marker %s (Added to help debug Jira OR-9675)"
                      );
    if (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_40.Data.AllocatorInstance.Data);
    }
    if (local_30.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_30.Data.AllocatorInstance.Data);
    }
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  else if (param_2 == -1) {
    return true;
  }
  uVar4 = 0;
  if (param_2 < (param_1->AuthoredSyncMarkers).ArrayNum) {
    uVar4 = (uint)~param_2 >> 0x1f;
  }
  if ((uVar4 == 0) &&
     (bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  FVar6 = *(FName *)((param_1->AuthoredSyncMarkers).AllocatorInstance.Data + (longlong)param_2 * 0xc
                    );
  if ((param_4 != (UMirrorDataTable *)0x0) &&
     (pFVar5 = TMapBase<FName,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FName,0>_>
               ::Find((TMapBase<FName,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FName,0>_>
                       *)&param_4->SyncToMirrorSyncMap,FVar6), pFVar5 != (FName *)0x0)) {
    FVar6 = *pFVar5;
  }
  if (local_res18[0] == FVar6) {
    return true;
  }
  return false;
}

// MarkerOrMirroredName @ 1474ed160

FName __cdecl MarkerOrMirroredName(FName param_1,UMirrorDataTable *param_2)

{
  FName *pFVar1;
  longlong in_R8;
  
  if (in_R8 != 0) {
    pFVar1 = TMapBase<FName,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FName,0>_>
             ::Find((TMapBase<FName,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FName,0>_>
                     *)(in_R8 + 0x1a8),(FName)param_2);
    if (pFVar1 != (FName *)0x0) {
      *(FName *)param_1 = *pFVar1;
      return param_1;
    }
  }
  *(UMirrorDataTable **)param_1 = param_2;
  return param_1;
}

// Z_Construct_UClass_UAnimNotifyLibrary_NoRegister @ 147502fb0

UClass * __cdecl Z_Construct_UClass_UAnimNotifyLibrary_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAnimNotifyLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"AnimNotifyLibrary",
               &Z_Registration_Info_UClass_UAnimNotifyLibrary.InnerSingleton,
               UAnimNotifyLibrary::StaticRegisterNativesUAnimNotifyLibrary,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UAnimNotifyLibrary>,
               InternalVTableHelperCtorCaller<UAnimNotifyLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAnimNotifyLibrary.InnerSingleton;
}

// Z_Construct_UClass_UAnimNotifyMirrorInspectionLibrary_NoRegister @ 147503070

UClass * __cdecl Z_Construct_UClass_UAnimNotifyMirrorInspectionLibrary_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAnimNotifyMirrorInspectionLibrary.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"AnimNotifyMirrorInspectionLibrary",
               &Z_Registration_Info_UClass_UAnimNotifyMirrorInspectionLibrary.InnerSingleton,
               UAnimNotifyMirrorInspectionLibrary::
               StaticRegisterNativesUAnimNotifyMirrorInspectionLibrary,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UAnimNotifyMirrorInspectionLibrary>,
               InternalVTableHelperCtorCaller<UAnimNotifyMirrorInspectionLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAnimNotifyMirrorInspectionLibrary.InnerSingleton;
}

// Z_Construct_UClass_UAnimNotifyStateMachineInspectionLibrary_NoRegister @ 147503130

UClass * __cdecl Z_Construct_UClass_UAnimNotifyStateMachineInspectionLibrary_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAnimNotifyStateMachineInspectionLibrary.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"AnimNotifyStateMachineInspectionLibrary",
               &Z_Registration_Info_UClass_UAnimNotifyStateMachineInspectionLibrary.InnerSingleton,
               UAnimNotifyStateMachineInspectionLibrary::
               StaticRegisterNativesUAnimNotifyStateMachineInspectionLibrary,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",
               InternalConstructor<UAnimNotifyStateMachineInspectionLibrary>,
               InternalVTableHelperCtorCaller<UAnimNotifyStateMachineInspectionLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAnimNotifyStateMachineInspectionLibrary.InnerSingleton;
}

// Z_Construct_UClass_UAnimNotifyState_DisableRootMotion_NoRegister @ 1475031f0

UClass * __cdecl Z_Construct_UClass_UAnimNotifyState_DisableRootMotion_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAnimNotifyState_DisableRootMotion.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"AnimNotifyState_DisableRootMotion",
               &Z_Registration_Info_UClass_UAnimNotifyState_DisableRootMotion.InnerSingleton,
               UAnimNotifyState_DisableRootMotion::
               StaticRegisterNativesUAnimNotifyState_DisableRootMotion,0x30,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UAnimNotifyState_DisableRootMotion>,
               InternalVTableHelperCtorCaller<UAnimNotifyState_DisableRootMotion>,local_res8,
               UAnimNotifyState::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAnimNotifyState_DisableRootMotion.InnerSingleton;
}

// Z_Construct_UClass_UAnimNotifyState_NoRegister @ 1475032b0

UClass * __cdecl Z_Construct_UClass_UAnimNotifyState_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAnimNotifyState.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"AnimNotifyState",
               &Z_Registration_Info_UClass_UAnimNotifyState.InnerSingleton,
               UAnimNotifyState::StaticRegisterNativesUAnimNotifyState,0x30,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UAnimNotifyState>,
               InternalVTableHelperCtorCaller<UAnimNotifyState>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAnimNotifyState.InnerSingleton;
}

// Z_Construct_UClass_UAnimNotifyState_TimedParticleEffect_NoRegister @ 147503360

UClass * __cdecl Z_Construct_UClass_UAnimNotifyState_TimedParticleEffect_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAnimNotifyState_TimedParticleEffect.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"AnimNotifyState_TimedParticleEffect",
               &Z_Registration_Info_UClass_UAnimNotifyState_TimedParticleEffect.InnerSingleton,
               UAnimNotifyState_TimedParticleEffect::
               StaticRegisterNativesUAnimNotifyState_TimedParticleEffect,0x78,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UAnimNotifyState_TimedParticleEffect>,
               InternalVTableHelperCtorCaller<UAnimNotifyState_TimedParticleEffect>,local_res8,
               UAnimNotifyState::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAnimNotifyState_TimedParticleEffect.InnerSingleton;
}

// Z_Construct_UClass_UAnimNotifyState_Trail_NoRegister @ 147503420

UClass * __cdecl Z_Construct_UClass_UAnimNotifyState_Trail_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAnimNotifyState_Trail.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"AnimNotifyState_Trail",
               &Z_Registration_Info_UClass_UAnimNotifyState_Trail.InnerSingleton,
               UAnimNotifyState_Trail::StaticRegisterNativesUAnimNotifyState_Trail,0x58,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",InternalConstructor<UAnimNotifyState_Trail>,
               InternalVTableHelperCtorCaller<UAnimNotifyState_Trail>,local_res8,
               UAnimNotifyState::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAnimNotifyState_Trail.InnerSingleton;
}

// Z_Construct_UClass_UAnimNotify_NoRegister @ 1475034e0

UClass * __cdecl Z_Construct_UClass_UAnimNotify_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAnimNotify.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"AnimNotify",
               &Z_Registration_Info_UClass_UAnimNotify.InnerSingleton,
               UAnimNotify::StaticRegisterNativesUAnimNotify,0x38,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UAnimNotify>,
               InternalVTableHelperCtorCaller<UAnimNotify>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAnimNotify.InnerSingleton;
}

// Z_Construct_UClass_UAnimNotify_PauseClothingSimulation_NoRegister @ 147503590

UClass * __cdecl Z_Construct_UClass_UAnimNotify_PauseClothingSimulation_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAnimNotify_PauseClothingSimulation.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"AnimNotify_PauseClothingSimulation",
               &Z_Registration_Info_UClass_UAnimNotify_PauseClothingSimulation.InnerSingleton,
               UAnimNotify_PauseClothingSimulation::
               StaticRegisterNativesUAnimNotify_PauseClothingSimulation,0x38,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UAnimNotify_PauseClothingSimulation>,
               InternalVTableHelperCtorCaller<UAnimNotify_PauseClothingSimulation>,local_res8,
               UAnimNotify::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAnimNotify_PauseClothingSimulation.InnerSingleton;
}

// Z_Construct_UClass_UAnimNotify_PlayParticleEffect_NoRegister @ 147503650

UClass * __cdecl Z_Construct_UClass_UAnimNotify_PlayParticleEffect_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAnimNotify_PlayParticleEffect.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"AnimNotify_PlayParticleEffect",
               &Z_Registration_Info_UClass_UAnimNotify_PlayParticleEffect.InnerSingleton,
               UAnimNotify_PlayParticleEffect::StaticRegisterNativesUAnimNotify_PlayParticleEffect,
               0xc0,0x10,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UAnimNotify_PlayParticleEffect>,
               InternalVTableHelperCtorCaller<UAnimNotify_PlayParticleEffect>,local_res8,
               UAnimNotify::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAnimNotify_PlayParticleEffect.InnerSingleton;
}

// Z_Construct_UClass_UAnimNotify_PlaySound_NoRegister @ 147503710

UClass * __cdecl Z_Construct_UClass_UAnimNotify_PlaySound_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAnimNotify_PlaySound.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"AnimNotify_PlaySound",
               &Z_Registration_Info_UClass_UAnimNotify_PlaySound.InnerSingleton,
               UAnimNotify_PlaySound::StaticRegisterNativesUAnimNotify_PlaySound,0x58,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Game",
               InternalConstructor<UAnimNotify_PlaySound>,
               InternalVTableHelperCtorCaller<UAnimNotify_PlaySound>,local_res8,
               UAnimNotify::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAnimNotify_PlaySound.InnerSingleton;
}

// Z_Construct_UClass_UAnimNotify_ResetClothingSimulation_NoRegister @ 1475037d0

UClass * __cdecl Z_Construct_UClass_UAnimNotify_ResetClothingSimulation_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAnimNotify_ResetClothingSimulation.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"AnimNotify_ResetClothingSimulation",
               &Z_Registration_Info_UClass_UAnimNotify_ResetClothingSimulation.InnerSingleton,
               UAnimNotify_ResetClothingSimulation::
               StaticRegisterNativesUAnimNotify_ResetClothingSimulation,0x38,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UAnimNotify_ResetClothingSimulation>,
               InternalVTableHelperCtorCaller<UAnimNotify_ResetClothingSimulation>,local_res8,
               UAnimNotify::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAnimNotify_ResetClothingSimulation.InnerSingleton;
}

// Z_Construct_UClass_UAnimNotify_ResetDynamics_NoRegister @ 147503890

UClass * __cdecl Z_Construct_UClass_UAnimNotify_ResetDynamics_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAnimNotify_ResetDynamics.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"AnimNotify_ResetDynamics",
               &Z_Registration_Info_UClass_UAnimNotify_ResetDynamics.InnerSingleton,
               UAnimNotify_ResetDynamics::StaticRegisterNativesUAnimNotify_ResetDynamics,0x38,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UAnimNotify_ResetDynamics>,
               InternalVTableHelperCtorCaller<UAnimNotify_ResetDynamics>,local_res8,
               UAnimNotify::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAnimNotify_ResetDynamics.InnerSingleton;
}

// Z_Construct_UClass_UAnimNotify_ResumeClothingSimulation_NoRegister @ 147503950

UClass * __cdecl Z_Construct_UClass_UAnimNotify_ResumeClothingSimulation_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAnimNotify_ResumeClothingSimulation.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"AnimNotify_ResumeClothingSimulation",
               &Z_Registration_Info_UClass_UAnimNotify_ResumeClothingSimulation.InnerSingleton,
               UAnimNotify_ResumeClothingSimulation::
               StaticRegisterNativesUAnimNotify_ResumeClothingSimulation,0x38,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UAnimNotify_ResumeClothingSimulation>,
               InternalVTableHelperCtorCaller<UAnimNotify_ResumeClothingSimulation>,local_res8,
               UAnimNotify::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAnimNotify_ResumeClothingSimulation.InnerSingleton;
}

// Z_Construct_UEnum_Engine_AnimPhysCollisionType @ 147503a10

UEnum * __cdecl Z_Construct_UEnum_Engine_AnimPhysCollisionType(void)

{
  if (Z_Registration_Info_UEnum_AnimPhysCollisionType.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_AnimPhysCollisionType.InnerSingleton,
               &Z_Construct_UEnum_Engine_AnimPhysCollisionType_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_AnimPhysCollisionType.InnerSingleton;
}

// Z_Construct_UEnum_Engine_AnimPhysTwistAxis @ 147503a50

UEnum * __cdecl Z_Construct_UEnum_Engine_AnimPhysTwistAxis(void)

{
  if (Z_Registration_Info_UEnum_AnimPhysTwistAxis.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_AnimPhysTwistAxis.InnerSingleton,
               &Z_Construct_UEnum_Engine_AnimPhysTwistAxis_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_AnimPhysTwistAxis.InnerSingleton;
}

// Z_Construct_UEnum_Engine_EAnimNodeDataFlags @ 147503a90

UEnum * __cdecl Z_Construct_UEnum_Engine_EAnimNodeDataFlags(void)

{
  if (Z_Registration_Info_UEnum_EAnimNodeDataFlags.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EAnimNodeDataFlags.InnerSingleton,
               &Z_Construct_UEnum_Engine_EAnimNodeDataFlags_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EAnimNodeDataFlags.InnerSingleton;
}

// Z_Construct_UEnum_Engine_EAnimNodeReferenceConversionResult @ 147503ad0

UEnum * __cdecl Z_Construct_UEnum_Engine_EAnimNodeReferenceConversionResult(void)

{
  if (Z_Registration_Info_UEnum_EAnimNodeReferenceConversionResult.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EAnimNodeReferenceConversionResult.InnerSingleton,
               &Z_Construct_UEnum_Engine_EAnimNodeReferenceConversionResult_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EAnimNodeReferenceConversionResult.InnerSingleton;
}

// Z_Construct_UEnum_Engine_EInertializationBoneState @ 147503b10

UEnum * __cdecl Z_Construct_UEnum_Engine_EInertializationBoneState(void)

{
  if (Z_Registration_Info_UEnum_EInertializationBoneState.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EInertializationBoneState.InnerSingleton,
               &Z_Construct_UEnum_Engine_EInertializationBoneState_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EInertializationBoneState.InnerSingleton;
}

// Z_Construct_UEnum_Engine_EInertializationSpace @ 147503b50

UEnum * __cdecl Z_Construct_UEnum_Engine_EInertializationSpace(void)

{
  if (Z_Registration_Info_UEnum_EInertializationSpace.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EInertializationSpace.InnerSingleton,
               &Z_Construct_UEnum_Engine_EInertializationSpace_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EInertializationSpace.InnerSingleton;
}

// Z_Construct_UEnum_Engine_EInertializationState @ 147503b90

UEnum * __cdecl Z_Construct_UEnum_Engine_EInertializationState(void)

{
  if (Z_Registration_Info_UEnum_EInertializationState.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EInertializationState.InnerSingleton,
               &Z_Construct_UEnum_Engine_EInertializationState_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EInertializationState.InnerSingleton;
}

// Z_Construct_UEnum_Engine_EMontageSubStepResult @ 147503bd0

UEnum * __cdecl Z_Construct_UEnum_Engine_EMontageSubStepResult(void)

{
  if (Z_Registration_Info_UEnum_EMontageSubStepResult.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EMontageSubStepResult.InnerSingleton,
               &Z_Construct_UEnum_Engine_EMontageSubStepResult_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EMontageSubStepResult.InnerSingleton;
}

// Z_Construct_UEnum_Engine_EPinHidingMode @ 147503c10

UEnum * __cdecl Z_Construct_UEnum_Engine_EPinHidingMode(void)

{
  if (Z_Registration_Info_UEnum_EPinHidingMode.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EPinHidingMode.InnerSingleton,
               &Z_Construct_UEnum_Engine_EPinHidingMode_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EPinHidingMode.InnerSingleton;
}

// Z_Construct_UScriptStruct_FAnimMontageInstance @ 147503c50

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FAnimMontageInstance(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FAnimMontageInstance.InnerSingleton == (UScriptStruct *)0x0)
  {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FAnimMontageInstance.InnerSingleton,
               &Z_Construct_UScriptStruct_FAnimMontageInstance_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FAnimMontageInstance.InnerSingleton != (UScriptStruct *)0x0)
  {
    return Z_Registration_Info_UScriptStruct_FAnimMontageInstance.InnerSingleton;
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

// Z_Construct_UScriptStruct_FAnimNodeData @ 147503cd0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FAnimNodeData(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FAnimNodeData.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FAnimNodeData.InnerSingleton,
               &Z_Construct_UScriptStruct_FAnimNodeData_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FAnimNodeData.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FAnimNodeData.InnerSingleton;
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

// Z_Construct_UScriptStruct_FAnimNodeFunctionRef @ 147503d50

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FAnimNodeFunctionRef(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FAnimNodeFunctionRef.InnerSingleton == (UScriptStruct *)0x0)
  {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FAnimNodeFunctionRef.InnerSingleton,
               &Z_Construct_UScriptStruct_FAnimNodeFunctionRef_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FAnimNodeFunctionRef.InnerSingleton != (UScriptStruct *)0x0)
  {
    return Z_Registration_Info_UScriptStruct_FAnimNodeFunctionRef.InnerSingleton;
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

// Z_Construct_UScriptStruct_FAnimNodeReference @ 147503dd0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FAnimNodeReference(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FAnimNodeReference.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FAnimNodeReference.InnerSingleton,
               &Z_Construct_UScriptStruct_FAnimNodeReference_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FAnimNodeReference.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FAnimNodeReference.InnerSingleton;
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

// Z_Construct_UScriptStruct_FAnimNodeStructData @ 147503e50

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FAnimNodeStructData(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FAnimNodeStructData.InnerSingleton == (UScriptStruct *)0x0)
  {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FAnimNodeStructData.InnerSingleton,
               &Z_Construct_UScriptStruct_FAnimNodeStructData_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FAnimNodeStructData.InnerSingleton != (UScriptStruct *)0x0)
  {
    return Z_Registration_Info_UScriptStruct_FAnimNodeStructData.InnerSingleton;
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

// Z_Construct_UScriptStruct_FAnimNode_ApplyMeshSpaceAdditive @ 147503ed0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FAnimNode_ApplyMeshSpaceAdditive(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FAnimNode_ApplyMeshSpaceAdditive.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FAnimNode_ApplyMeshSpaceAdditive.InnerSingleton,
               &Z_Construct_UScriptStruct_FAnimNode_ApplyMeshSpaceAdditive_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FAnimNode_ApplyMeshSpaceAdditive.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FAnimNode_ApplyMeshSpaceAdditive.InnerSingleton;
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

// Z_Construct_UScriptStruct_FAnimNode_ConvertComponentToLocalSpace @ 147503f50

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FAnimNode_ConvertComponentToLocalSpace(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FAnimNode_ConvertComponentToLocalSpace.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FAnimNode_ConvertComponentToLocalSpace.
                InnerSingleton,
               &Z_Construct_UScriptStruct_FAnimNode_ConvertComponentToLocalSpace_Statics::
                StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FAnimNode_ConvertComponentToLocalSpace.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FAnimNode_ConvertComponentToLocalSpace.InnerSingleton;
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

// Z_Construct_UScriptStruct_FAnimNode_ConvertLocalToComponentSpace @ 147503fd0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FAnimNode_ConvertLocalToComponentSpace(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FAnimNode_ConvertLocalToComponentSpace.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FAnimNode_ConvertLocalToComponentSpace.
                InnerSingleton,
               &Z_Construct_UScriptStruct_FAnimNode_ConvertLocalToComponentSpace_Statics::
                StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FAnimNode_ConvertLocalToComponentSpace.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FAnimNode_ConvertLocalToComponentSpace.InnerSingleton;
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

// Z_Construct_UScriptStruct_FAnimNode_DeadBlending @ 147504050

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FAnimNode_DeadBlending(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FAnimNode_DeadBlending.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FAnimNode_DeadBlending.InnerSingleton,
               &Z_Construct_UScriptStruct_FAnimNode_DeadBlending_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FAnimNode_DeadBlending.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FAnimNode_DeadBlending.InnerSingleton;
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

// Z_Construct_UScriptStruct_FAnimNode_Inertialization @ 1475040d0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FAnimNode_Inertialization(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FAnimNode_Inertialization.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FAnimNode_Inertialization.InnerSingleton,
               &Z_Construct_UScriptStruct_FAnimNode_Inertialization_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FAnimNode_Inertialization.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FAnimNode_Inertialization.InnerSingleton;
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

// Z_Construct_UScriptStruct_FAnimNode_LinkedAnimLayer @ 147504150

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FAnimNode_LinkedAnimLayer(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FAnimNode_LinkedAnimLayer.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FAnimNode_LinkedAnimLayer.InnerSingleton,
               &Z_Construct_UScriptStruct_FAnimNode_LinkedAnimLayer_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FAnimNode_LinkedAnimLayer.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FAnimNode_LinkedAnimLayer.InnerSingleton;
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

// Z_Construct_UScriptStruct_FAnimNode_LinkedInputPose @ 1475041d0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FAnimNode_LinkedInputPose(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FAnimNode_LinkedInputPose.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FAnimNode_LinkedInputPose.InnerSingleton,
               &Z_Construct_UScriptStruct_FAnimNode_LinkedInputPose_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FAnimNode_LinkedInputPose.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FAnimNode_LinkedInputPose.InnerSingleton;
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

// Z_Construct_UScriptStruct_FAnimNode_SaveCachedPose @ 147504250

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FAnimNode_SaveCachedPose(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FAnimNode_SaveCachedPose.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FAnimNode_SaveCachedPose.InnerSingleton,
               &Z_Construct_UScriptStruct_FAnimNode_SaveCachedPose_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FAnimNode_SaveCachedPose.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FAnimNode_SaveCachedPose.InnerSingleton;
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

// Z_Construct_UScriptStruct_FAnimNode_SequencePlayer @ 1475042d0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FAnimNode_SequencePlayer(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FAnimNode_SequencePlayer.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FAnimNode_SequencePlayer.InnerSingleton,
               &Z_Construct_UScriptStruct_FAnimNode_SequencePlayer_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FAnimNode_SequencePlayer.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FAnimNode_SequencePlayer.InnerSingleton;
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

// Z_Construct_UScriptStruct_FAnimNode_SequencePlayer_Standalone @ 147504350

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FAnimNode_SequencePlayer_Standalone(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FAnimNode_SequencePlayer_Standalone.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FAnimNode_SequencePlayer_Standalone.InnerSingleton
               ,&Z_Construct_UScriptStruct_FAnimNode_SequencePlayer_Standalone_Statics::StructParams
              );
  }
  if (Z_Registration_Info_UScriptStruct_FAnimNode_SequencePlayer_Standalone.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FAnimNode_SequencePlayer_Standalone.InnerSingleton;
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

// Z_Construct_UScriptStruct_FAnimNode_StateMachine @ 1475043d0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FAnimNode_StateMachine(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FAnimNode_StateMachine.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FAnimNode_StateMachine.InnerSingleton,
               &Z_Construct_UScriptStruct_FAnimNode_StateMachine_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FAnimNode_StateMachine.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FAnimNode_StateMachine.InnerSingleton;
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

// Z_Construct_UScriptStruct_FAnimNode_StateResult @ 147504450

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FAnimNode_StateResult(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FAnimNode_StateResult.InnerSingleton == (UScriptStruct *)0x0
     ) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FAnimNode_StateResult.InnerSingleton,
               &Z_Construct_UScriptStruct_FAnimNode_StateResult_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FAnimNode_StateResult.InnerSingleton != (UScriptStruct *)0x0
     ) {
    return Z_Registration_Info_UScriptStruct_FAnimNode_StateResult.InnerSingleton;
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

// Z_Construct_UScriptStruct_FAnimNode_TransitionPoseEvaluator @ 1475044d0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FAnimNode_TransitionPoseEvaluator(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FAnimNode_TransitionPoseEvaluator.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FAnimNode_TransitionPoseEvaluator.InnerSingleton,
               &Z_Construct_UScriptStruct_FAnimNode_TransitionPoseEvaluator_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FAnimNode_TransitionPoseEvaluator.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FAnimNode_TransitionPoseEvaluator.InnerSingleton;
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

// Z_Construct_UScriptStruct_FAnimNode_TransitionResult @ 147504550

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FAnimNode_TransitionResult(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FAnimNode_TransitionResult.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FAnimNode_TransitionResult.InnerSingleton,
               &Z_Construct_UScriptStruct_FAnimNode_TransitionResult_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FAnimNode_TransitionResult.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FAnimNode_TransitionResult.InnerSingleton;
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

// Z_Construct_UScriptStruct_FAnimNode_UseCachedPose @ 1475045d0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FAnimNode_UseCachedPose(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FAnimNode_UseCachedPose.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FAnimNode_UseCachedPose.InnerSingleton,
               &Z_Construct_UScriptStruct_FAnimNode_UseCachedPose_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FAnimNode_UseCachedPose.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FAnimNode_UseCachedPose.InnerSingleton;
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

// Z_Construct_UScriptStruct_FAnimNotifyContext @ 147504650

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FAnimNotifyContext(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FAnimNotifyContext.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FAnimNotifyContext.InnerSingleton,
               &Z_Construct_UScriptStruct_FAnimNotifyContext_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FAnimNotifyContext.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FAnimNotifyContext.InnerSingleton;
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

// Z_Construct_UScriptStruct_FAnimNotifyQueue @ 1475046d0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FAnimNotifyQueue(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FAnimNotifyQueue.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FAnimNotifyQueue.InnerSingleton,
               &Z_Construct_UScriptStruct_FAnimNotifyQueue_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FAnimNotifyQueue.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FAnimNotifyQueue.InnerSingleton;
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

// Z_Construct_UScriptStruct_FAnimSequenceTrackContainer @ 147504750

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FAnimSequenceTrackContainer(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FAnimSequenceTrackContainer.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FAnimSequenceTrackContainer.InnerSingleton,
               &Z_Construct_UScriptStruct_FAnimSequenceTrackContainer_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FAnimSequenceTrackContainer.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FAnimSequenceTrackContainer.InnerSingleton;
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

// Z_Construct_UScriptStruct_FAnimationActiveTransitionEntry @ 1475047d0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FAnimationActiveTransitionEntry(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FAnimationActiveTransitionEntry.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FAnimationActiveTransitionEntry.InnerSingleton,
               &Z_Construct_UScriptStruct_FAnimationActiveTransitionEntry_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FAnimationActiveTransitionEntry.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FAnimationActiveTransitionEntry.InnerSingleton;
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

// Z_Construct_UScriptStruct_FAnimationPotentialTransition @ 147504850

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FAnimationPotentialTransition(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FAnimationPotentialTransition.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FAnimationPotentialTransition.InnerSingleton,
               &Z_Construct_UScriptStruct_FAnimationPotentialTransition_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FAnimationPotentialTransition.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FAnimationPotentialTransition.InnerSingleton;
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

// Z_Construct_UScriptStruct_FBranchingPoint @ 1475048d0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FBranchingPoint(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FBranchingPoint.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FBranchingPoint.InnerSingleton,
               &Z_Construct_UScriptStruct_FBranchingPoint_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FBranchingPoint.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FBranchingPoint.InnerSingleton;
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

// Z_Construct_UScriptStruct_FBranchingPointNotifyPayload @ 147504950

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FBranchingPointNotifyPayload(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FBranchingPointNotifyPayload.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FBranchingPointNotifyPayload.InnerSingleton,
               &Z_Construct_UScriptStruct_FBranchingPointNotifyPayload_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FBranchingPointNotifyPayload.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FBranchingPointNotifyPayload.InnerSingleton;
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

// Z_Construct_UScriptStruct_FCompressedTrack @ 1475049d0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FCompressedTrack(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FCompressedTrack.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FCompressedTrack.InnerSingleton,
               &Z_Construct_UScriptStruct_FCompressedTrack_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FCompressedTrack.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FCompressedTrack.InnerSingleton;
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

// Z_Construct_UScriptStruct_FCurveTrack @ 147504a50

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FCurveTrack(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FCurveTrack.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FCurveTrack.InnerSingleton,
               &Z_Construct_UScriptStruct_FCurveTrack_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FCurveTrack.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FCurveTrack.InnerSingleton;
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

// Z_Construct_UScriptStruct_FInertializationBoneDiff @ 147504ad0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FInertializationBoneDiff(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FInertializationBoneDiff.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FInertializationBoneDiff.InnerSingleton,
               &Z_Construct_UScriptStruct_FInertializationBoneDiff_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FInertializationBoneDiff.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FInertializationBoneDiff.InnerSingleton;
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

// Z_Construct_UScriptStruct_FInertializationPose @ 147504b50

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FInertializationPose(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FInertializationPose.InnerSingleton == (UScriptStruct *)0x0)
  {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FInertializationPose.InnerSingleton,
               &Z_Construct_UScriptStruct_FInertializationPose_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FInertializationPose.InnerSingleton != (UScriptStruct *)0x0)
  {
    return Z_Registration_Info_UScriptStruct_FInertializationPose.InnerSingleton;
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

// Z_Construct_UScriptStruct_FInertializationPoseDiff @ 147504bd0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FInertializationPoseDiff(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FInertializationPoseDiff.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FInertializationPoseDiff.InnerSingleton,
               &Z_Construct_UScriptStruct_FInertializationPoseDiff_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FInertializationPoseDiff.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FInertializationPoseDiff.InnerSingleton;
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

// Z_Construct_UScriptStruct_FRotationTrack @ 147504c50

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FRotationTrack(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FRotationTrack.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FRotationTrack.InnerSingleton,
               &Z_Construct_UScriptStruct_FRotationTrack_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FRotationTrack.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FRotationTrack.InnerSingleton;
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

// Z_Construct_UScriptStruct_FScaleTrack @ 147504cd0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FScaleTrack(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FScaleTrack.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FScaleTrack.InnerSingleton,
               &Z_Construct_UScriptStruct_FScaleTrack_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FScaleTrack.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FScaleTrack.InnerSingleton;
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

// Z_Construct_UScriptStruct_FTranslationTrack @ 147504d50

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FTranslationTrack(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FTranslationTrack.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FTranslationTrack.InnerSingleton,
               &Z_Construct_UScriptStruct_FTranslationTrack_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FTranslationTrack.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FTranslationTrack.InnerSingleton;
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

// `dynamic_atexit_destructor_for_'CVarAnimDeadBlendingEnable'' @ 1503e6ef0

void __cdecl _dynamic_atexit_destructor_for__CVarAnimDeadBlendingEnable__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarAnimDeadBlendingEnable);
  return;
}

// `dynamic_atexit_destructor_for_'CVarAnimDynamicsDetailedStats'' @ 1503e6f10

void __cdecl _dynamic_atexit_destructor_for__CVarAnimDynamicsDetailedStats__(void)

{
  CVarAnimDynamicsDetailedStats._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarAnimDynamicsDetailedStats);
  return;
}

// `dynamic_atexit_destructor_for_'CVarAnimDynamicsSimSpaceCentrifugalAlpha'' @ 1503e6f30

void __cdecl _dynamic_atexit_destructor_for__CVarAnimDynamicsSimSpaceCentrifugalAlpha__(void)

{
  CVarAnimDynamicsSimSpaceCentrifugalAlpha._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarAnimDynamicsSimSpaceCentrifugalAlpha);
  return;
}

// `dynamic_atexit_destructor_for_'CVarAnimDynamicsSimSpaceCoriolisAlpha'' @ 1503e6f50

void __cdecl _dynamic_atexit_destructor_for__CVarAnimDynamicsSimSpaceCoriolisAlpha__(void)

{
  CVarAnimDynamicsSimSpaceCoriolisAlpha._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarAnimDynamicsSimSpaceCoriolisAlpha);
  return;
}

// `dynamic_atexit_destructor_for_'CVarAnimDynamicsSimSpaceEulerAlpha'' @ 1503e6f70

void __cdecl _dynamic_atexit_destructor_for__CVarAnimDynamicsSimSpaceEulerAlpha__(void)

{
  CVarAnimDynamicsSimSpaceEulerAlpha._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarAnimDynamicsSimSpaceEulerAlpha)
  ;
  return;
}

// `dynamic_atexit_destructor_for_'CVarAnimInertializationEnable'' @ 1503e6f90

void __cdecl _dynamic_atexit_destructor_for__CVarAnimInertializationEnable__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarAnimInertializationEnable);
  return;
}

// `dynamic_atexit_destructor_for_'CVarAnimInertializationIgnoreDeficit'' @ 1503e6fb0

void __cdecl _dynamic_atexit_destructor_for__CVarAnimInertializationIgnoreDeficit__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarAnimInertializationIgnoreDeficit);
  return;
}

// `dynamic_atexit_destructor_for_'CVarAnimInertializationIgnoreVelocity'' @ 1503e6fd0

void __cdecl _dynamic_atexit_destructor_for__CVarAnimInertializationIgnoreVelocity__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarAnimInertializationIgnoreVelocity);
  return;
}

// `dynamic_atexit_destructor_for_'CVarAnimStateMachineRelevancyReset'' @ 1503e6ff0

void __cdecl _dynamic_atexit_destructor_for__CVarAnimStateMachineRelevancyReset__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarAnimStateMachineRelevancyReset)
  ;
  return;
}

// `dynamic_atexit_destructor_for_'CVarFrameStripping'' @ 1503e7010

void __cdecl _dynamic_atexit_destructor_for__CVarFrameStripping__(void)

{
  CVarFrameStripping._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarFrameStripping);
  return;
}

// `dynamic_atexit_destructor_for_'CVarMontageEndSectionRequiresTimeRemaining'' @ 1503e7030

void __cdecl
MontageCVars::_dynamic_atexit_destructor_for__CVarMontageEndSectionRequiresTimeRemaining__(void)

{
  CVarMontageEndSectionRequiresTimeRemaining._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarMontageEndSectionRequiresTimeRemaining);
  return;
}

// `dynamic_atexit_destructor_for_'CVarOddFrameStripping'' @ 1503e7050

void __cdecl _dynamic_atexit_destructor_for__CVarOddFrameStripping__(void)

{
  CVarOddFrameStripping._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarOddFrameStripping);
  return;
}

// `dynamic_atexit_destructor_for_'CVarStripAdditiveRefPose'' @ 1503e7070

void __cdecl _dynamic_atexit_destructor_for__CVarStripAdditiveRefPose__(void)

{
  CVarStripAdditiveRefPose._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarStripAdditiveRefPose);
  return;
}

// `dynamic_atexit_destructor_for_'EmptyTransformArray'' @ 1503e7090

void __cdecl
`UAnimSequence::GetRetargetTransforms'::__l12::_dynamic_atexit_destructor_for__EmptyTransformArray__
          (void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = EmptyTransformArray.AllocatorInstance.Data;
  if (EmptyTransformArray.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (EmptyTransformArray.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'LogAnimMontage'' @ 1503e70b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogAnimMontage__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogAnimMontage);
  return;
}

// `dynamic_atexit_destructor_for_'LogAnimTrails'' @ 1503e70d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogAnimTrails__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogAnimTrails);
  return;
}

// `dynamic_atexit_destructor_for_'LogAnimTransitionRequests'' @ 1503e70f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogAnimTransitionRequests__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogAnimTransitionRequests);
  return;
}

