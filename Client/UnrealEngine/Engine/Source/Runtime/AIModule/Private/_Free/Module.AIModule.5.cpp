// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AIModule
// Functions: 111

// `dynamic_initializer_for_'KeySelf'' @ 1410bde00

void __cdecl FBlackboard::_dynamic_initializer_for__KeySelf__(void)

{
  ::FName::FName(&KeySelf,L"SelfActor");
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_AI_Sensing'' @ 1410bde20

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_AI_Sensing__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_AI_Sensing == (FThreadSafeStaticStat<FStat_STAT_AI_Sensing>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_AI_Sensing");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AI_Sensing,*pFVar1,L"Sensing",
               "STATGROUP_AI","STATCAT_Advanced",L"AI",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'TAG_EQS'' @ 1410bdeb0

void __cdecl EVisLogTags::_dynamic_initializer_for__TAG_EQS__(void)

{
  ::FString::FString(&TAG_EQS,L"LogEQS");
  atexit(_dynamic_atexit_destructor_for__TAG_EQS__);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISense_Team_h__Script_AIModule_3963437658'' @ 1410bdee0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISense_Team_h__Script_AIModule_3963437658__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/AIModule",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISense_Team_h__Script_AIModule_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISense_Team_h__Script_AIModule_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISense_Touch_h__Script_AIModule_2582918456'' @ 1410bdf30

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISense_Touch_h__Script_AIModule_2582918456__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/AIModule",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISense_Touch_h__Script_AIModule_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISense_Touch_h__Script_AIModule_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISightTargetInterface_h__Script_AIModule_4104984780'' @ 1410bdf80

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISightTargetInterface_h__Script_AIModule_4104984780__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/AIModule",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISightTargetInterface_h__Script_AIModule_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Perception_PawnSensingComponent_h__Script_AIModule_1714574706'' @ 1410bdfc0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Perception_PawnSensingComponent_h__Script_AIModule_1714574706__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/AIModule",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Perception_PawnSensingComponent_h__Script_AIModule_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Tasks_AITask_LockLogic_h__Script_AIModule_2560083081'' @ 1410be000

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Tasks_AITask_LockLogic_h__Script_AIModule_2560083081__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/AIModule",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Tasks_AITask_LockLogic_h__Script_AIModule_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Tasks_AITask_MoveTo_h__Script_AIModule_2914070349'' @ 1410be040

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Tasks_AITask_MoveTo_h__Script_AIModule_2914070349__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/AIModule",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Tasks_AITask_MoveTo_h__Script_AIModule_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Tasks_AITask_RunEQS_h__Script_AIModule_3244509176'' @ 1410be080

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Tasks_AITask_RunEQS_h__Script_AIModule_3244509176__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/AIModule",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Tasks_AITask_RunEQS_h__Script_AIModule_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Tasks_AITask_h__Script_AIModule_1881004582'' @ 1410be0c0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Tasks_AITask_h__Script_AIModule_1881004582__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/AIModule",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Tasks_AITask_h__Script_AIModule_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Tasks_AITask_h__Script_AIModule_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_VisualLoggerExtension_h__Script_AIModule_2275235241'' @ 1410be110

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_VisualLoggerExtension_h__Script_AIModule_2275235241__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/AIModule",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_VisualLoggerExtension_h__Script_AIModule_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// Z_Construct_UClass_UPawnSensingComponent @ 146fe8990

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UPawnSensingComponent(void)

{
  if (Z_Registration_Info_UClass_UPawnSensingComponent.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UPawnSensingComponent.OuterSingleton,
               &Z_Construct_UClass_UPawnSensingComponent_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UPawnSensingComponent.OuterSingleton;
}

// Z_Construct_UDelegateFunction_UPawnSensingComponent_HearNoiseDelegate__DelegateSignature @ 146fe89d0

UFunction * __cdecl
Z_Construct_UDelegateFunction_UPawnSensingComponent_HearNoiseDelegate__DelegateSignature(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUDelegateFunction
              (&ReturnFunction,
               &Z_Construct_UDelegateFunction_UPawnSensingComponent_HearNoiseDelegate__DelegateSignature_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UDelegateFunction_UPawnSensingComponent_SeePawnDelegate__DelegateSignature @ 146fe8a10

UFunction * __cdecl
Z_Construct_UDelegateFunction_UPawnSensingComponent_SeePawnDelegate__DelegateSignature(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUDelegateFunction
              (&ReturnFunction,
               &Z_Construct_UDelegateFunction_UPawnSensingComponent_SeePawnDelegate__DelegateSignature_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UPawnSensingComponent_GetPeripheralVisionAngle @ 146fe8a50

UFunction * __cdecl Z_Construct_UFunction_UPawnSensingComponent_GetPeripheralVisionAngle(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPawnSensingComponent_GetPeripheralVisionAngle_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UPawnSensingComponent_GetPeripheralVisionCosine @ 146fe8a90

UFunction * __cdecl Z_Construct_UFunction_UPawnSensingComponent_GetPeripheralVisionCosine(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPawnSensingComponent_GetPeripheralVisionCosine_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UPawnSensingComponent_SetPeripheralVisionAngle @ 146fe8ad0

UFunction * __cdecl Z_Construct_UFunction_UPawnSensingComponent_SetPeripheralVisionAngle(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPawnSensingComponent_SetPeripheralVisionAngle_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UAITask_MoveTo_NoRegister @ 146fe8b10

UClass * __cdecl Z_Construct_UClass_UAITask_MoveTo_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAITask_MoveTo.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"AITask_MoveTo",
               &Z_Registration_Info_UClass_UAITask_MoveTo.InnerSingleton,
               UAITask_MoveTo::StaticRegisterNativesUAITask_MoveTo,0x160,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Game",
               InternalConstructor<UAITask_MoveTo>,InternalVTableHelperCtorCaller<UAITask_MoveTo>,
               local_res8,UAITask::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAITask_MoveTo.InnerSingleton;
}

// Z_Construct_UFunction_UPawnSensingComponent_SetSensingInterval @ 146fe8bd0

UFunction * __cdecl Z_Construct_UFunction_UPawnSensingComponent_SetSensingInterval(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPawnSensingComponent_SetSensingInterval_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bEnabled_SetBit @ 146fe8c10

void __cdecl
Z_Construct_UFunction_UPawnSensingComponent_SetSensingUpdatesEnabled_Statics::
NewProp_bEnabled_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UPawnSensingComponent_SetSensingUpdatesEnabled @ 146fe8c20

UFunction * __cdecl Z_Construct_UFunction_UPawnSensingComponent_SetSensingUpdatesEnabled(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPawnSensingComponent_SetSensingUpdatesEnabled_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bEnableSensingUpdates_SetBit @ 146fe8c60

void __cdecl
Z_Construct_UClass_UPawnSensingComponent_Statics::NewProp_bEnableSensingUpdates_SetBit
          (void *param_1)

{
  *(uint *)((longlong)param_1 + 0xd4) = *(uint *)((longlong)param_1 + 0xd4) | 1;
  return;
}

// NewProp_bOnlySensePlayers_SetBit @ 146fe8c70

void __cdecl
Z_Construct_UClass_UPawnSensingComponent_Statics::NewProp_bOnlySensePlayers_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0xd4) = *(uint *)((longlong)param_1 + 0xd4) | 2;
  return;
}

// NewProp_bSeePawns_SetBit @ 146fe8d40

void __cdecl
Z_Construct_UClass_UPawnSensingComponent_Statics::NewProp_bSeePawns_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0xd4) = *(uint *)((longlong)param_1 + 0xd4) | 4;
  return;
}

// NewProp_bHearNoises_SetBit @ 146fe8d50

void __cdecl
Z_Construct_UClass_UPawnSensingComponent_Statics::NewProp_bHearNoises_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0xd4) = *(uint *)((longlong)param_1 + 0xd4) | 8;
  return;
}

// Z_Construct_UClass_UAISightTargetInterface @ 146fe8e20

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UAISightTargetInterface(void)

{
  if (Z_Registration_Info_UClass_UAISightTargetInterface.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UAISightTargetInterface.OuterSingleton,
               &Z_Construct_UClass_UAISightTargetInterface_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UAISightTargetInterface.OuterSingleton;
}

// Z_Construct_UClass_UAISense_Touch @ 146fe8f20

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UAISense_Touch(void)

{
  if (Z_Registration_Info_UClass_UAISense_Touch.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UAISense_Touch.OuterSingleton,
               &Z_Construct_UClass_UAISense_Touch_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UAISense_Touch.OuterSingleton;
}

// Z_Construct_UScriptStruct_FAITouchEvent @ 146fe8f60

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FAITouchEvent(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FAITouchEvent.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FAITouchEvent.InnerSingleton,
               &Z_Construct_UScriptStruct_FAITouchEvent_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FAITouchEvent.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FAITouchEvent.InnerSingleton;
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

// NewStructOps @ 146fe8fe0

void * __cdecl Z_Construct_UScriptStruct_FAITouchEvent_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x30;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FAITouchEvent,&UE::CoreUObject::Private::Construct<FAITouchEvent>,&UE::CoreUObject::Private::ConstructForTests<FAITouchEvent>,&UE::CoreUObject::Private::Destruct<FAITouchEvent>,&UE::CoreUObject::Private::Copy<FAITouchEvent>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UAISense_Touch_ReportTouchEvent @ 146fe9020

UFunction * __cdecl Z_Construct_UFunction_UAISense_Touch_ReportTouchEvent(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAISense_Touch_ReportTouchEvent_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UAITask @ 146fe9280

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UAITask(void)

{
  if (Z_Registration_Info_UClass_UAITask.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UAITask.OuterSingleton,
               &Z_Construct_UClass_UAITask_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UAITask.OuterSingleton;
}

// EAITaskPriority_StaticEnum @ 146fe92c0

UEnum * __cdecl EAITaskPriority_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EAITaskPriority.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AIModule();
    Z_Registration_Info_UEnum_EAITaskPriority.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_AIModule_EAITaskPriority,(UObject *)pUVar1,
                       L"EAITaskPriority");
  }
  return Z_Registration_Info_UEnum_EAITaskPriority.OuterSingleton;
}

// Z_Construct_UClass_UAITask_LockLogic @ 146fe93c0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UAITask_LockLogic(void)

{
  if (Z_Registration_Info_UClass_UAITask_LockLogic.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UAITask_LockLogic.OuterSingleton,
               &Z_Construct_UClass_UAITask_LockLogic_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UAITask_LockLogic.OuterSingleton;
}

// Z_Construct_UClass_UAITask_MoveTo @ 146fe9400

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UAITask_MoveTo(void)

{
  if (Z_Registration_Info_UClass_UAITask_MoveTo.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UAITask_MoveTo.OuterSingleton,
               &Z_Construct_UClass_UAITask_MoveTo_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UAITask_MoveTo.OuterSingleton;
}

// Z_Construct_UDelegateFunction_AIModule_MoveTaskCompletedSignature__DelegateSignature @ 146fe9440

UFunction * __cdecl
Z_Construct_UDelegateFunction_AIModule_MoveTaskCompletedSignature__DelegateSignature(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUDelegateFunction
              (&ReturnFunction,
               &Z_Construct_UDelegateFunction_AIModule_MoveTaskCompletedSignature__DelegateSignature_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UVisualLoggerExtension @ 146fe94c0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UVisualLoggerExtension(void)

{
  if (Z_Registration_Info_UClass_UVisualLoggerExtension.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UVisualLoggerExtension.OuterSingleton,
               &Z_Construct_UClass_UVisualLoggerExtension_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UVisualLoggerExtension.OuterSingleton;
}

// NewProp_bUsePathfinding_SetBit @ 146fe95c0

void __cdecl
Z_Construct_UFunction_UAITask_MoveTo_AIMoveTo_Statics::NewProp_bUsePathfinding_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x2e) = 1;
  return;
}

// NewProp_bLockAILogic_SetBit @ 146fe95d0

void __cdecl
Z_Construct_UFunction_UAITask_MoveTo_AIMoveTo_Statics::NewProp_bLockAILogic_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x2f) = 1;
  return;
}

// NewProp_bUseContinuousGoalTracking_SetBit @ 146fe95e0

void __cdecl
Z_Construct_UFunction_UAITask_MoveTo_AIMoveTo_Statics::NewProp_bUseContinuousGoalTracking_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x30) = 1;
  return;
}

// Z_Construct_UFunction_UAITask_MoveTo_AIMoveTo @ 146fe95f0

UFunction * __cdecl Z_Construct_UFunction_UAITask_MoveTo_AIMoveTo(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_UAITask_MoveTo_AIMoveTo_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UAISense_Team @ 146fe9630

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UAISense_Team(void)

{
  if (Z_Registration_Info_UClass_UAISense_Team.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UAISense_Team.OuterSingleton,
               &Z_Construct_UClass_UAISense_Team_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UAISense_Team.OuterSingleton;
}

// Z_Construct_UScriptStruct_FAITeamStimulusEvent @ 146fe9670

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FAITeamStimulusEvent(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FAITeamStimulusEvent.InnerSingleton == (UScriptStruct *)0x0)
  {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FAITeamStimulusEvent.InnerSingleton,
               &Z_Construct_UScriptStruct_FAITeamStimulusEvent_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FAITeamStimulusEvent.InnerSingleton != (UScriptStruct *)0x0)
  {
    return Z_Registration_Info_UScriptStruct_FAITeamStimulusEvent.InnerSingleton;
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

// NewStructOps @ 146fe96f0

void * __cdecl Z_Construct_UScriptStruct_FAITeamStimulusEvent_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x50;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FAITeamStimulusEvent,&UE::CoreUObject::Private::Construct<FAITeamStimulusEvent>,&UE::CoreUObject::Private::ConstructForTests<FAITeamStimulusEvent>,&UE::CoreUObject::Private::Destruct<FAITeamStimulusEvent>,&UE::CoreUObject::Private::Copy<FAITeamStimulusEvent>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UAITask_RunEQS_NoRegister @ 146fe9780

UClass * __cdecl Z_Construct_UClass_UAITask_RunEQS_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAITask_RunEQS.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"AITask_RunEQS",
               &Z_Registration_Info_UClass_UAITask_RunEQS.InnerSingleton,
               UAITask_RunEQS::StaticRegisterNativesUAITask_RunEQS,0x108,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Game",
               InternalConstructor<UAITask_RunEQS>,InternalVTableHelperCtorCaller<UAITask_RunEQS>,
               local_res8,UAITask::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAITask_RunEQS.InnerSingleton;
}

// Z_Construct_UClass_UAITask_RunEQS @ 146fe99f0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UAITask_RunEQS(void)

{
  if (Z_Registration_Info_UClass_UAITask_RunEQS.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UAITask_RunEQS.OuterSingleton,
               &Z_Construct_UClass_UAITask_RunEQS_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UAITask_RunEQS.OuterSingleton;
}

// Z_Construct_UFunction_UAITask_RunEQS_RunEQS @ 146fe9a30

UFunction * __cdecl Z_Construct_UFunction_UAITask_RunEQS_RunEQS(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_UAITask_RunEQS_RunEQS_Statics::FuncParams);
  }
  return ReturnFunction;
}

// InternalConstructor<UAISense_Team> @ 146fea070

void __cdecl InternalConstructor<UAISense_Team>(FObjectInitializer *param_1)

{
  UAISense *this;
  
  this = (UAISense *)param_1->Obj;
  if (this != (UAISense *)0x0) {
    UAISense::UAISense(this,param_1);
    this->_padding_ = (longlong)&___7UAISense_Team__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
  }
  return;
}

// InternalConstructor<UAISense_Touch> @ 146fea0b0

void __cdecl InternalConstructor<UAISense_Touch>(FObjectInitializer *param_1)

{
  if ((UAISense_Touch *)param_1->Obj != (UAISense_Touch *)0x0) {
    UAISense_Touch::UAISense_Touch((UAISense_Touch *)param_1->Obj,param_1);
    return;
  }
  return;
}

// InternalConstructor<UAISightTargetInterface> @ 146fea0d0

void __cdecl InternalConstructor<UAISightTargetInterface>(FObjectInitializer *param_1)

{
  UInterface *this;
  
  this = (UInterface *)param_1->Obj;
  if (this != (UInterface *)0x0) {
    UInterface::UInterface(this,param_1);
    *(undefined ***)this = &___7UAISightTargetInterface__6B_;
  }
  return;
}

// InternalConstructor<UAITask> @ 146fea100

void __cdecl InternalConstructor<UAITask>(FObjectInitializer *param_1)

{
  UGameplayTask *this;
  
  this = (UGameplayTask *)param_1->Obj;
  if (this != (UGameplayTask *)0x0) {
    UGameplayTask::UGameplayTask(this,param_1);
    this->Priority = '\x7f';
    this->_padding_ = (longlong)&UAITask::_vftable__for__UObject__;
    this->_padding_ = (longlong)&UAITask::_vftable__for__IGameplayTaskOwnerInterface__;
    this[1]._padding_ = 0;
  }
  return;
}

// InternalConstructor<UAITask_LockLogic> @ 146fea150

void __cdecl InternalConstructor<UAITask_LockLogic>(FObjectInitializer *param_1)

{
  UGameplayTask *this;
  
  this = (UGameplayTask *)param_1->Obj;
  if (this != (UGameplayTask *)0x0) {
    UGameplayTask::UGameplayTask(this,param_1);
    this[1]._padding_ = 0;
    this->_padding_ = (longlong)&UAITask_LockLogic::_vftable__for__UObject__;
    this->_padding_ = (longlong)&UAITask_LockLogic::_vftable__for__IGameplayTaskOwnerInterface__;
    this->Priority = '\x7f';
  }
  return;
}

// InternalConstructor<UAITask_MoveTo> @ 146fea1a0

void __cdecl InternalConstructor<UAITask_MoveTo>(FObjectInitializer *param_1)

{
  if ((UAITask_MoveTo *)param_1->Obj != (UAITask_MoveTo *)0x0) {
    UAITask_MoveTo::UAITask_MoveTo((UAITask_MoveTo *)param_1->Obj,param_1);
    return;
  }
  return;
}

// InternalConstructor<UAITask_RunEQS> @ 146fea1c0

void __cdecl InternalConstructor<UAITask_RunEQS>(FObjectInitializer *param_1)

{
  if ((UAITask_RunEQS *)param_1->Obj != (UAITask_RunEQS *)0x0) {
    UAITask_RunEQS::UAITask_RunEQS((UAITask_RunEQS *)param_1->Obj,param_1);
    return;
  }
  return;
}

// InternalConstructor<UPawnSensingComponent> @ 146fea1e0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl InternalConstructor<UPawnSensingComponent>(FObjectInitializer *param_1)

{
  byte *pbVar1;
  uint *puVar2;
  UActorComponent *this;
  
  this = (UActorComponent *)param_1->Obj;
  if (this != (UActorComponent *)0x0) {
    UActorComponent::UActorComponent(this,param_1);
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0x452f0000;
    this->_padding_ = (longlong)&UPawnSensingComponent::_vftable__for__UObject__;
    this->_padding_ = (longlong)&UPawnSensingComponent::_vftable__for__IInterface_AssetUserData__;
    this->_padding_ = (longlong)&UPawnSensingComponent::_vftable__for__IAsyncPhysicsStateProcessor__
    ;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1].PrimaryComponentTick._padding_ = 0;
    this[1].PrimaryComponentTick._padding_ = 0;
    this[1].PrimaryComponentTick._padding_ = 0;
    pbVar1 = (byte *)((longlong)&(this->PrimaryComponentTick)._padding_ + 2);
    *pbVar1 = *pbVar1 & 0xfd;
    this->bWantsInitializeComponent = '\x01';
    this->bAutoActivate = '\0';
    puVar2 = (uint *)((longlong)&this[1]._padding_ + 4);
    *puVar2 = *puVar2 | 0xf;
    *(undefined4 *)&this[1]._padding_ = 0x44af0000;
    *(undefined4 *)&this[1]._padding_ = 0x459c4000;
    *(undefined4 *)&this[1].PrimaryComponentTick._padding_ = 0x42b40000;
    *(undefined4 *)((longlong)&this[1].PrimaryComponentTick._padding_ + 4) = 0xb33bbd2e;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0x3f000000;
    *(undefined4 *)&this[1]._padding_ = 0x3f800000;
  }
  return;
}

// InternalConstructor<UVisualLoggerExtension> @ 146fea2c0

void __cdecl InternalConstructor<UVisualLoggerExtension>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UVisualLoggerExtension__6B_;
  }
  return;
}

// InternalVTableHelperCtorCaller<UAISense_Team> @ 146fea2f0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UAISense_Team>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UAISense *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UAISense_Team::GetPrivateStaticClass();
  this = (UAISense *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UAISense *)0x0) {
    UAISense::UAISense(this,param_1);
    this->_padding_ = (longlong)&___7UAISense_Team__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UAISense_Touch> @ 146fea3b0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UAISense_Touch>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UAISense *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UAISense_Touch::GetPrivateStaticClass();
  this = (UAISense *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UAISense *)0x0) {
    UAISense::UAISense(this,param_1);
    this->_padding_ = (longlong)&___7UAISense_Touch__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1].PerceptionSystemInstance.field0_0x0.DebugPtr = (UAIPerceptionSystem *)0x0;
    this[1].TimeUntilNextUpdate = 0.0;
    *(undefined4 *)&this[1].SenseID = 0x80;
    this[1].SenseID.Name.ComparisonIndex.Value = 0xffffffff;
    this[1].SenseID.Name.Number = 0;
    *(undefined8 *)&this[1].OnNewListenerDelegate.field_0x8 = 0;
    *(undefined4 *)&this[1].OnNewListenerDelegate.field_0x10 = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UAISightTargetInterface> @ 146fea4b0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UAISightTargetInterface>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UAISightTargetInterface::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UInterface::UInterface((UInterface *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UAISightTargetInterface__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UAITask> @ 146fea560

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UAITask>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UGameplayTask *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UAITask::GetPrivateStaticClass();
  this = (UGameplayTask *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UGameplayTask *)0x0) {
    UGameplayTask::UGameplayTask(this,param_1);
    this->_padding_ = (longlong)&UAITask::_vftable__for__UObject__;
    this->_padding_ = (longlong)&UAITask::_vftable__for__IGameplayTaskOwnerInterface__;
    this[1]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UAITask_LockLogic> @ 146fea620

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UAITask_LockLogic>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UGameplayTask *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UAITask_LockLogic::GetPrivateStaticClass();
  this = (UGameplayTask *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UGameplayTask *)0x0) {
    UGameplayTask::UGameplayTask(this,param_1);
    this[1]._padding_ = 0;
    this->_padding_ = (longlong)&UAITask_LockLogic::_vftable__for__UObject__;
    this->_padding_ = (longlong)&UAITask_LockLogic::_vftable__for__IGameplayTaskOwnerInterface__;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UAITask_MoveTo> @ 146fea6e0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UAITask_MoveTo>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UGameplayTask *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UAITask_MoveTo::GetPrivateStaticClass();
  this = (UGameplayTask *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UGameplayTask *)0x0) {
    UGameplayTask::UGameplayTask(this,param_1);
    this[1]._padding_ = 0;
    this->_padding_ = (longlong)&UAITask_MoveTo::_vftable__for__UObject__;
    this[1]._padding_ = 0;
    this->_padding_ = (longlong)&UAITask_MoveTo::_vftable__for__IGameplayTaskOwnerInterface__;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 2;
    this[1]._padding_ = 0;
    this[1].InstanceName.ComparisonIndex = 0;
    this[1].InstanceName.Number = 0;
    this[1].Priority = '\0';
    this[1].TaskState = Uninitialized;
    this[1].ResourceOverlapPolicy = StartOnTop;
    *(undefined5 *)&this[1].field_0x3b = 0;
    this[1].RequiredResources = 0;
    this[1].ClaimedResources = 0;
    *(undefined4 *)&this[1].field_0x44 = 0;
    this[1].TaskOwner.ObjectInstance.WeakPtr = (FWeakObjectPtr)0x0;
    this[1].TaskOwner.InterfaceInstance = (IGameplayTaskOwnerInterface *)0x0;
    FAIMoveRequest::FAIMoveRequest((FAIMoveRequest *)&this[1].TasksComponent);
    this[2].InstanceName.ComparisonIndex = 0;
    this[2].InstanceName.Number = 0;
    this[2].Priority = '\0';
    this[2].TaskState = Uninitialized;
    this[2].ResourceOverlapPolicy = StartOnTop;
    *(undefined5 *)&this[2].field_0x3b = 0;
    this[2].RequiredResources = 0;
    this[2].ClaimedResources = 0;
    *(undefined4 *)&this[2].field_0x44 = 0;
    this[2].TaskOwner.ObjectInstance.WeakPtr = (FWeakObjectPtr)0x0;
    *(undefined4 *)&this[2].TaskOwner.InterfaceInstance = 0xffffffff;
    this[2].TasksComponent.WeakPtr = (FWeakObjectPtr)0x0;
    this[2].ChildTask.field0_0x0.DebugPtr = (UGameplayTask *)0x0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UAITask_RunEQS> @ 146fea830

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UAITask_RunEQS>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UGameplayTask *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UAITask_RunEQS::GetPrivateStaticClass();
  this = (UGameplayTask *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UGameplayTask *)0x0) {
    UGameplayTask::UGameplayTask(this,param_1);
    this[1]._padding_ = 0;
    this->_padding_ = (longlong)&UAITask_RunEQS::_vftable__for__UObject__;
    this->_padding_ = (longlong)&UAITask_RunEQS::_vftable__for__IGameplayTaskOwnerInterface__;
    FEQSParametrizedQueryExecutionRequest::FEQSParametrizedQueryExecutionRequest
              ((FEQSParametrizedQueryExecutionRequest *)&this[1]._padding_);
    this[1].TaskOwner.InterfaceInstance = (IGameplayTaskOwnerInterface *)0x0;
    this[1].TasksComponent.WeakPtr = (FWeakObjectPtr)0x0;
    *(undefined4 *)&this[1].ChildTask.field0_0x0 = 0;
    this[1].DebugDescription.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    this[1].DebugDescription.Data.ArrayNum = 0;
    this[1].DebugDescription.Data.ArrayMax = 0;
    *(undefined4 *)&this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UPawnSensingComponent> @ 146fea930

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UPawnSensingComponent>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UActorComponent *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UPawnSensingComponent::GetPrivateStaticClass();
  this = (UActorComponent *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UActorComponent *)0x0) {
    UActorComponent::UActorComponent(this,param_1);
    this->_padding_ = (longlong)&UPawnSensingComponent::_vftable__for__UObject__;
    this->_padding_ = (longlong)&UPawnSensingComponent::_vftable__for__IInterface_AssetUserData__;
    this->_padding_ = (longlong)&UPawnSensingComponent::_vftable__for__IAsyncPhysicsStateProcessor__
    ;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1].PrimaryComponentTick._padding_ = 0;
    this[1].PrimaryComponentTick._padding_ = 0;
    this[1].PrimaryComponentTick._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UVisualLoggerExtension> @ 146feaa30

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UVisualLoggerExtension>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UVisualLoggerExtension::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UVisualLoggerExtension__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// NewObject<UAITask_RunEQS> @ 146feaae0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UAITask_RunEQS * __cdecl
NewObject<UAITask_RunEQS>
          (UObject *param_1,UClass *param_2,FName param_3,EObjectFlags param_4,UObject *param_5,
          bool param_6,FObjectInstancingGraph *param_7,UPackage *param_8)

{
  UClass *pUVar1;
  UAITask_RunEQS *pUVar2;
  longlong *plVar3;
  undefined1 auStack_e8 [32];
  undefined1 local_c8 [128];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_e8;
  if (param_3 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              (param_1,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar1 = UAITask_RunEQS::StaticClass();
  CheckIsClassChildOf_Internal(pUVar1,param_2);
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_c8,param_2);
  local_c8[0x20] = param_6;
  local_c8._40_8_ = param_5;
  local_c8._48_8_ = param_7;
  local_c8._56_8_ = param_8;
  local_c8._8_8_ = param_1;
  local_c8._16_8_ = param_3;
  local_c8._24_4_ = param_4;
  pUVar2 = (UAITask_RunEQS *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_c8);
  if (local_c8._64_8_ != 0) {
    plVar3 = (longlong *)(local_c8 + 0x50);
    if ((longlong *)local_c8._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_c8._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// NewObject<UEQSRenderingComponent> @ 146feabe0

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

UEQSRenderingComponent * __cdecl NewObject<UEQSRenderingComponent>(UObject *param_1)

{
  UClass *pUVar1;
  UEQSRenderingComponent *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = Z_Construct_UClass_UEQSRenderingComponent_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UEQSRenderingComponent *)
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

// StaticEnum<enum_EAITaskPriority> @ 146feb730

UEnum * __cdecl StaticEnum<enum_EAITaskPriority>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EAITaskPriority.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AIModule();
    Z_Registration_Info_UEnum_EAITaskPriority.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_AIModule_EAITaskPriority,(UObject *)pUVar1,
                       L"EAITaskPriority");
  }
  return Z_Registration_Info_UEnum_EAITaskPriority.OuterSingleton;
}

// `vcall'{800,{flat}}'_}' @ 146fecafc

/* [thunk]: __cdecl UAITask_MoveTo::`vcall'{800,{flat}}' }' */

void __thiscall UAITask_MoveTo::_vcall__800__flat______(UAITask_MoveTo *this)

{
                    /* WARNING: Could not recover jumptable at 0x000146fecaff. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 800))();
  return;
}

// `vcall'{808,{flat}}'_}' @ 146fecb0c

/* [thunk]: __cdecl UAITask_MoveTo::`vcall'{808,{flat}}' }' */

void __thiscall UAITask_MoveTo::_vcall__808__flat______(UAITask_MoveTo *this)

{
                    /* WARNING: Could not recover jumptable at 0x000146fecb0f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x328))();
  return;
}

// `vcall'{816,{flat}}'_}' @ 146fecb1c

/* [thunk]: __cdecl UAITask_MoveTo::`vcall'{816,{flat}}' }' */

void __thiscall UAITask_MoveTo::_vcall__816__flat______(UAITask_MoveTo *this)

{
                    /* WARNING: Could not recover jumptable at 0x000146fecb1f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x330))();
  return;
}

// `vcall'{1376,{flat}}'_}' @ 146fecb2c

/* [thunk]: __cdecl UPawnSensingComponent::`vcall'{1376,{flat}}' }' */

void __thiscall UPawnSensingComponent::_vcall__1376__flat______(UPawnSensingComponent *this)

{
                    /* WARNING: Could not recover jumptable at 0x000146fecb2f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x560))();
  return;
}

// `vector_deleting_destructor'`adjustor{40}' @ 146fecb3c

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* [thunk]:public: virtual void * __ptr64 __cdecl UAITask::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall UAITask::_vector_deleting_destructor__adjustor_40__(UAITask *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UAITask *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 146fecb4c

/* [thunk]:public: virtual void * __ptr64 __cdecl UAITask_LockLogic::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UAITask_LockLogic::_vector_deleting_destructor__adjustor_40__(UAITask_LockLogic *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UAITask_LockLogic *)&this[-1].field_0x58,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 146fecb5c

/* [thunk]:public: virtual void * __ptr64 __cdecl UAITask_MoveTo::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UAITask_MoveTo::_vector_deleting_destructor__adjustor_40__(UAITask_MoveTo *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UAITask_MoveTo *)&this[-1].PathRetryTimerHandle,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 146fecb6c

/* [thunk]:public: virtual void * __ptr64 __cdecl UAITask_RunEQS::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UAITask_RunEQS::_vector_deleting_destructor__adjustor_40__(UAITask_RunEQS *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UAITask_RunEQS *)&this[-1].NotificationDelegate,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 146fecb7c

/* [thunk]:public: virtual void * __ptr64 __cdecl UPawnSensingComponent::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UPawnSensingComponent::_vector_deleting_destructor__adjustor_40__
          (UPawnSensingComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UPawnSensingComponent *)&this[-1].OnSeePawn.field_0x10,param_1);
  return pvVar1;
}

// `scalar_deleting_destructor' @ 146fecb90

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UAISense_Touch,void___cdecl(FPerceptionListener_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UAISense_Touch,void___cdecl(FPerceptionListener_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146fecbc0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UAITask_MoveTo,void___cdecl(FNavigationPath_*,enum_ENavPathEvent::Type),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146fecbf0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UAITask_MoveTo,void___cdecl(FAIRequestID,FPathFollowingResult_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UAITask_MoveTo,void___cdecl(FAIRequestID,FPathFollowingResult_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146fecc20

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UAITask_MoveTo,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UAITask_MoveTo,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146fecc50

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UAITask_RunEQS,void___cdecl(TSharedPtr<FEnvQueryResult,1>),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UAITask_RunEQS,void___cdecl(TSharedPtr<FEnvQueryResult,1>),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146fecc80

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UPawnSensingComponent,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UPawnSensingComponent,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146feccb0

void * __thiscall UAISense_Team::_scalar_deleting_destructor_(UAISense_Team *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UAISense_Team__6B_;
  pFVar1 = (this->RegisteredEvents).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UAISense::~UAISense((UAISense *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xa0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146fecd30

void * __thiscall UAISense_Touch::_scalar_deleting_destructor_(UAISense_Touch *this,uint param_1)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&___7UAISense_Touch__6B_;
  *(undefined4 *)&(this->DigestedProperties).field_0x48 = 0;
  pvVar1 = *(void **)&(this->DigestedProperties).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FAIGenericID<FPerceptionListenerCounter>,UAISense_Touch::FDigestedTouchProperties>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FAIGenericID<FPerceptionListenerCounter>,UAISense_Touch::FDigestedTouchProperties>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FAIGenericID<FPerceptionListenerCounter>,UAISense_Touch::FDigestedTouchProperties>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->DigestedProperties);
  pFVar2 = (this->RegisteredEvents).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  UAISense::~UAISense((UAISense *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146fecde0

void * __thiscall
UAISightTargetInterface::_scalar_deleting_destructor_(UAISightTargetInterface *this,uint param_1)

{
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

// `scalar_deleting_destructor' @ 146fece40

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void * __thiscall UAITask::_scalar_deleting_destructor_(UAITask *this,uint param_1)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  UGameplayTask::~UGameplayTask((UGameplayTask *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x80);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146feceb0

void * __thiscall
UAITask_LockLogic::_scalar_deleting_destructor_(UAITask_LockLogic *this,uint param_1)

{
  *(undefined ***)this = &UAITask::_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &UAITask::_vftable__for__IGameplayTaskOwnerInterface__;
  UGameplayTask::~UGameplayTask((UGameplayTask *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x80);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146fecf20

void * __thiscall UAITask_MoveTo::_scalar_deleting_destructor_(UAITask_MoveTo *this,uint param_1)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Path).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->MoveRequest).UserData.SharedReferenceCount.ReferenceController);
  pvVar1 = *(void **)&(this->OnMoveFinished).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnMoveFinished);
  pvVar1 = *(void **)&(this->OnRequestFailed).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnRequestFailed);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnMoveTaskFinished).field_0x8,*(int *)&(this->OnMoveTaskFinished).field_0x10);
  pvVar1 = *(void **)&(this->OnMoveTaskFinished).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnMoveTaskFinished);
  this->_padding_ = (longlong)&UAITask::_vftable__for__UObject__;
  this->_padding_ = (longlong)&UAITask::_vftable__for__IGameplayTaskOwnerInterface__;
  UGameplayTask::~UGameplayTask((UGameplayTask *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x160);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146fed040

void * __thiscall UAITask_RunEQS::_scalar_deleting_destructor_(UAITask_RunEQS *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->QueryResult).SharedReferenceCount.ReferenceController);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->NotificationDelegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->EQSFinishedDelegate);
  pFVar1 = (this->EQSRequest).EQSQueryBlackboardKey.AllowedTypes.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FAIDynamicParam,int>
            ((FAIDynamicParam *)(this->EQSRequest).QueryConfig.AllocatorInstance.Data,
             (this->EQSRequest).QueryConfig.ArrayNum);
  pFVar1 = (this->EQSRequest).QueryConfig.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&UAITask::_vftable__for__UObject__;
  this->_padding_ = (longlong)&UAITask::_vftable__for__IGameplayTaskOwnerInterface__;
  UGameplayTask::~UGameplayTask((UGameplayTask *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x108);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146fed120

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
UPawnSensingComponent::_scalar_deleting_destructor_(UPawnSensingComponent *this,uint param_1)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  pvVar1 = *(void **)&(this->OnHearNoise).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnHearNoise);
  pvVar1 = *(void **)&(this->OnSeePawn).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnSeePawn);
  UActorComponent::~UActorComponent((UActorComponent *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x118);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146fed1e0

void * __thiscall
UVisualLoggerExtension::_scalar_deleting_destructor_(UVisualLoggerExtension *this,uint param_1)

{
  *(undefined ***)this = &___7UVisualLoggerExtension__6B_;
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

// EmptyLinkFunctionForGeneratedCodeAISense_Team @ 146fefb30

void __cdecl EmptyLinkFunctionForGeneratedCodeAISense_Team(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeAISense_Touch @ 146fefb40

void __cdecl EmptyLinkFunctionForGeneratedCodeAISense_Touch(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeAISightTargetInterface @ 146fefb50

void __cdecl EmptyLinkFunctionForGeneratedCodeAISightTargetInterface(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeAITask @ 146fefb60

void __cdecl EmptyLinkFunctionForGeneratedCodeAITask(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeAITask_LockLogic @ 146fefb70

void __cdecl EmptyLinkFunctionForGeneratedCodeAITask_LockLogic(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeAITask_MoveTo @ 146fefb80

void __cdecl EmptyLinkFunctionForGeneratedCodeAITask_MoveTo(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeAITask_RunEQS @ 146fefb90

void __cdecl EmptyLinkFunctionForGeneratedCodeAITask_RunEQS(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodePawnSensingComponent @ 146fefba0

void __cdecl EmptyLinkFunctionForGeneratedCodePawnSensingComponent(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeVisualLoggerExtension @ 146fefbb0

void __cdecl EmptyLinkFunctionForGeneratedCodeVisualLoggerExtension(void)

{
  return;
}

// FMoveTaskCompletedSignature_DelegateWrapper @ 146ff03d0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __cdecl
FMoveTaskCompletedSignature_DelegateWrapper
          (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *param_1,Type param_2,
          AAIController *param_3)

{
  undefined1 local_18 [8];
  AAIController *local_10;
  
  local_18[0] = (undefined1)param_2;
  local_10 = param_3;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            (param_1,local_18);
  return;
}

// Z_Construct_UClass_UAISense_Team_NoRegister @ 146ff4830

UClass * __cdecl Z_Construct_UClass_UAISense_Team_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAISense_Team.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"AISense_Team",
               &Z_Registration_Info_UClass_UAISense_Team.InnerSingleton,
               UAISense_Team::StaticRegisterNativesUAISense_Team,0xa0,8,CLASS_Intrinsic|CLASS_Config
               ,CASTCLASS_None,L"Engine",InternalConstructor<UAISense_Team>,
               InternalVTableHelperCtorCaller<UAISense_Team>,local_res8,UAISense::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAISense_Team.InnerSingleton;
}

// Z_Construct_UClass_UAISense_Touch_NoRegister @ 146ff48f0

UClass * __cdecl Z_Construct_UClass_UAISense_Touch_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAISense_Touch.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"AISense_Touch",
               &Z_Registration_Info_UClass_UAISense_Touch.InnerSingleton,
               UAISense_Touch::StaticRegisterNativesUAISense_Touch,0xf0,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UAISense_Touch>,InternalVTableHelperCtorCaller<UAISense_Touch>,
               local_res8,UAISense::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAISense_Touch.InnerSingleton;
}

// Z_Construct_UClass_UAISightTargetInterface_NoRegister @ 146ff49b0

UClass * __cdecl Z_Construct_UClass_UAISightTargetInterface_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAISightTargetInterface.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"AISightTargetInterface",
               &Z_Registration_Info_UClass_UAISightTargetInterface.InnerSingleton,
               UAISightTargetInterface::StaticRegisterNativesUAISightTargetInterface,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UAISightTargetInterface>,
               InternalVTableHelperCtorCaller<UAISightTargetInterface>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAISightTargetInterface.InnerSingleton;
}

// Z_Construct_UClass_UAITask_LockLogic_NoRegister @ 146ff4a70

UClass * __cdecl Z_Construct_UClass_UAITask_LockLogic_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAITask_LockLogic.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"AITask_LockLogic",
               &Z_Registration_Info_UClass_UAITask_LockLogic.InnerSingleton,
               UAITask_LockLogic::StaticRegisterNativesUAITask_LockLogic,0x80,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Game",
               InternalConstructor<UAITask_LockLogic>,
               InternalVTableHelperCtorCaller<UAITask_LockLogic>,local_res8,UAITask::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAITask_LockLogic.InnerSingleton;
}

// Z_Construct_UClass_UAITask_NoRegister @ 146ff4b30

UClass * __cdecl Z_Construct_UClass_UAITask_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAITask.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"AITask",&Z_Registration_Info_UClass_UAITask.InnerSingleton,
               UAITask::StaticRegisterNativesUAITask,0x80,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_Abstract,CASTCLASS_None,L"Game",
               InternalConstructor<UAITask>,InternalVTableHelperCtorCaller<UAITask>,local_res8,
               UGameplayTask::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAITask.InnerSingleton;
}

// Z_Construct_UClass_UPawnSensingComponent_NoRegister @ 146ff4bf0

UClass * __cdecl Z_Construct_UClass_UPawnSensingComponent_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPawnSensingComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"PawnSensingComponent",
               &Z_Registration_Info_UClass_UPawnSensingComponent.InnerSingleton,
               UPawnSensingComponent::StaticRegisterNativesUPawnSensingComponent,0x118,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UPawnSensingComponent>,
               InternalVTableHelperCtorCaller<UPawnSensingComponent>,local_res8,
               UActorComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPawnSensingComponent.InnerSingleton;
}

// Z_Construct_UClass_UVisualLoggerExtension_NoRegister @ 146ff4cb0

UClass * __cdecl Z_Construct_UClass_UVisualLoggerExtension_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UVisualLoggerExtension.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"VisualLoggerExtension",
               &Z_Registration_Info_UClass_UVisualLoggerExtension.InnerSingleton,
               UVisualLoggerExtension::StaticRegisterNativesUVisualLoggerExtension,0x28,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UVisualLoggerExtension>,
               InternalVTableHelperCtorCaller<UVisualLoggerExtension>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UVisualLoggerExtension.InnerSingleton;
}

// Z_Construct_UEnum_AIModule_EAITaskPriority @ 146ff4d60

UEnum * __cdecl Z_Construct_UEnum_AIModule_EAITaskPriority(void)

{
  if (Z_Registration_Info_UEnum_EAITaskPriority.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EAITaskPriority.InnerSingleton,
               &Z_Construct_UEnum_AIModule_EAITaskPriority_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EAITaskPriority.InnerSingleton;
}

// `dynamic_atexit_destructor_for_'TAG_EQS'' @ 1503e1d70

void __cdecl EVisLogTags::_dynamic_atexit_destructor_for__TAG_EQS__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = TAG_EQS.Data.AllocatorInstance.Data;
  if (TAG_EQS.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (TAG_EQS.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

