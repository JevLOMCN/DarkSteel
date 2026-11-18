// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ActorSequence
// Functions: 60

// `dynamic_initializer_for_'CVarDefaultDisplayRate'' @ 141448a00

void __cdecl _dynamic_initializer_for__CVarDefaultDisplayRate__(void)

{
  FString local_18;
  
  FString::FString(&local_18,L"30fps");
  TAutoConsoleVariable<FString>::TAutoConsoleVariable<FString>
            (&CVarDefaultDisplayRate,L"ActorSequence.DefaultDisplayRate",&local_18,
             L"Specifies default a display frame rate for newly created level sequences; also defines frame locked frame rate where sequences are set to be frame locked. Examples: 30 fps, 120/1 (120 fps), 30000/1001 (29.97), 0.01s (10ms)."
             ,0);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__CVarDefaultDisplayRate__);
  return;
}

// `dynamic_initializer_for_'CVarDefaultEvaluationType'' @ 141448a70

void __cdecl _dynamic_initializer_for__CVarDefaultEvaluationType__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarDefaultEvaluationType,L"ActorSequence.DefaultEvaluationType",local_res8,
             L"0: Playback locked to playback frames\n1: Unlocked playback with sub frame interpolation"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarDefaultEvaluationType__);
  return;
}

// `dynamic_initializer_for_'CVarDefaultTickResolution'' @ 141448ac0

void __cdecl _dynamic_initializer_for__CVarDefaultTickResolution__(void)

{
  FString local_18;
  
  FString::FString(&local_18,L"24000fps");
  TAutoConsoleVariable<FString>::TAutoConsoleVariable<FString>
            (&CVarDefaultTickResolution,L"ActorSequence.DefaultTickResolution",&local_18,
             L"Specifies default a tick resolution for newly created level sequences. Examples: 30 fps, 120/1 (120 fps), 30000/1001 (29.97), 0.01s (10ms)."
             ,0);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__CVarDefaultTickResolution__);
  return;
}

// `dynamic_initializer_for_'ModuleRegistrantActorSequence'' @ 141448b30

void __cdecl _dynamic_initializer_for__ModuleRegistrantActorSequence__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "ActorSequence";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"ActorSequence",0xd);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,FStaticallyLinkedModuleRegistrant<FDefaultModuleImpl>::InitializeModule);
  return;
}

// `dynamic_initializer_for_'StatPtr_MovieSceneEval_PersistentData_Access'' @ 141448b80

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_MovieSceneEval_PersistentData_Access__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_MovieSceneEval_PersistentData_Access ==
      (FThreadSafeStaticStat<FStat_MovieSceneEval_PersistentData_Access>)0x0) {
    pFVar1 = FName::FName(local_res8,"MovieSceneEval_PersistentData_Access");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_MovieSceneEval_PersistentData_Access,*pFVar1,
               L"Persistent Data Access","STATGROUP_MovieSceneEval","STATCAT_Advanced",
               L"Movie Scene Evaluation",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_ActorSequence_Source_ActorSequence_Public_ActorSequenceComponent_h__Script_ActorSequence_2190841069'' @ 141448c10

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_ActorSequence_Source_ActorSequence_Public_ActorSequenceComponent_h__Script_ActorSequence_2190841069__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/ActorSequence",
             Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_ActorSequence_Source_ActorSequence_Public_ActorSequenceComponent_h__Script_ActorSequence_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_ActorSequence_Source_ActorSequence_Public_ActorSequenceObjectReference_h__Script_ActorSequence_1633677676'' @ 141448c50

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_ActorSequence_Source_ActorSequence_Public_ActorSequenceObjectReference_h__Script_ActorSequence_1633677676__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/ActorSequence",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_ActorSequence_Source_ActorSequence_Public_ActorSequenceObjectReference_h__Script_ActorSequence_Statics
             ::ScriptStructInfo,3,
             Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_ActorSequence_Source_ActorSequence_Public_ActorSequenceObjectReference_h__Script_ActorSequence_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_ActorSequence_Source_ActorSequence_Public_ActorSequencePlayer_h__Script_ActorSequence_2669744842'' @ 141448ca0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_ActorSequence_Source_ActorSequence_Public_ActorSequencePlayer_h__Script_ActorSequence_2669744842__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/ActorSequence",
             Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_ActorSequence_Source_ActorSequence_Public_ActorSequencePlayer_h__Script_ActorSequence_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_ActorSequence_Source_ActorSequence_Public_ActorSequence_h__Script_ActorSequence_1523127209'' @ 141448ce0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_ActorSequence_Source_ActorSequence_Public_ActorSequence_h__Script_ActorSequence_1523127209__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/ActorSequence",
             Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_ActorSequence_Source_ActorSequence_Public_ActorSequence_h__Script_ActorSequence_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferPackage_UPackage__Script_ActorSequence'' @ 141448d20

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferPackage_UPackage__Script_ActorSequence__(void)

{
  FPackageReloadVersionInfo local_res8 [4];
  
  local_res8[0].BodyHash = 0x153685ba;
  local_res8[0].DeclarationsHash = 0xa310ad23;
  RegisterCompiledInInfo
            (Z_Construct_UPackage__Script_ActorSequence,L"/Script/ActorSequence",
             &Z_Registration_Info_UPackage__Script_ActorSequence,local_res8);
  return;
}

// Z_Construct_UPackage__Script_ActorSequence @ 14eacf710

UPackage * __cdecl Z_Construct_UPackage__Script_ActorSequence(void)

{
  if (Z_Registration_Info_UPackage__Script_ActorSequence.OuterSingleton == (UPackage *)0x0) {
    UECodeGen_Private::ConstructUPackage
              (&Z_Registration_Info_UPackage__Script_ActorSequence.OuterSingleton,&PackageParams);
  }
  return Z_Registration_Info_UPackage__Script_ActorSequence.OuterSingleton;
}

// Z_Construct_UEnum_ActorSequence_EActorSequenceObjectReferenceType @ 14eacf750

UEnum * __cdecl Z_Construct_UEnum_ActorSequence_EActorSequenceObjectReferenceType(void)

{
  if (Z_Registration_Info_UEnum_EActorSequenceObjectReferenceType.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EActorSequenceObjectReferenceType.InnerSingleton,
               &Z_Construct_UEnum_ActorSequence_EActorSequenceObjectReferenceType_Statics::
                EnumParams);
  }
  return Z_Registration_Info_UEnum_EActorSequenceObjectReferenceType.InnerSingleton;
}

// Z_Construct_UScriptStruct_FActorSequenceObjectReference @ 14eacf790

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FActorSequenceObjectReference(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FActorSequenceObjectReference.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FActorSequenceObjectReference.InnerSingleton,
               &Z_Construct_UScriptStruct_FActorSequenceObjectReference_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FActorSequenceObjectReference.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FActorSequenceObjectReference.InnerSingleton;
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

// Z_Construct_UScriptStruct_FActorSequenceObjectReferences @ 14eacf810

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FActorSequenceObjectReferences(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FActorSequenceObjectReferences.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FActorSequenceObjectReferences.InnerSingleton,
               &Z_Construct_UScriptStruct_FActorSequenceObjectReferences_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FActorSequenceObjectReferences.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FActorSequenceObjectReferences.InnerSingleton;
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

// EActorSequenceObjectReferenceType_StaticEnum @ 14eacf890

UEnum * __cdecl EActorSequenceObjectReferenceType_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EActorSequenceObjectReferenceType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ActorSequence();
    Z_Registration_Info_UEnum_EActorSequenceObjectReferenceType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_ActorSequence_EActorSequenceObjectReferenceType,
                       (UObject *)pUVar1,L"EActorSequenceObjectReferenceType");
  }
  return Z_Registration_Info_UEnum_EActorSequenceObjectReferenceType.OuterSingleton;
}

// NewStructOps @ 14eacf8d0

void * __cdecl Z_Construct_UScriptStruct_FActorSequenceObjectReference_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x28;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FActorSequenceObjectReference,&UE::CoreUObject::Private::Construct<FActorSequenceObjectReference>,&UE::CoreUObject::Private::ConstructForTests<FActorSequenceObjectReference>,&UE::CoreUObject::Private::Destruct<FActorSequenceObjectReference>,&UE::CoreUObject::Private::Copy<FActorSequenceObjectReference>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14eacf9d0

void * __cdecl Z_Construct_UScriptStruct_FActorSequenceObjectReferences_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FActorSequenceObjectReferences,&UE::CoreUObject::Private::Construct<FActorSequenceObjectReferences>,&UE::CoreUObject::Private::ConstructForTests<FActorSequenceObjectReferences>,&UE::CoreUObject::Private::Destruct<FActorSequenceObjectReferences>,&UE::CoreUObject::Private::Copy<FActorSequenceObjectReferences>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14eacfa10

void * __cdecl
Z_Construct_UScriptStruct_FActorSequenceObjectReferenceMap_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FActorSequenceObjectReferenceMap,&UE::CoreUObject::Private::Construct<FActorSequenceObjectReferenceMap>,&UE::CoreUObject::Private::ConstructForTests<FActorSequenceObjectReferenceMap>,&UE::CoreUObject::Private::Destruct<FActorSequenceObjectReferenceMap>,&UE::CoreUObject::Private::Copy<FActorSequenceObjectReferenceMap>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UActorSequencePlayer @ 14eacfa50

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UActorSequencePlayer(void)

{
  if (Z_Registration_Info_UClass_UActorSequencePlayer.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UActorSequencePlayer.OuterSingleton,
               &Z_Construct_UClass_UActorSequencePlayer_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UActorSequencePlayer.OuterSingleton;
}

// Z_Construct_UClass_UActorSequence @ 14eacfa90

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UActorSequence(void)

{
  if (Z_Registration_Info_UClass_UActorSequence.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UActorSequence.OuterSingleton,
               &Z_Construct_UClass_UActorSequence_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UActorSequence.OuterSingleton;
}

// Z_Construct_UScriptStruct_FActorSequenceObjectReferenceMap @ 14eacfad0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FActorSequenceObjectReferenceMap(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FActorSequenceObjectReferenceMap.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FActorSequenceObjectReferenceMap.InnerSingleton,
               &Z_Construct_UScriptStruct_FActorSequenceObjectReferenceMap_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FActorSequenceObjectReferenceMap.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FActorSequenceObjectReferenceMap.InnerSingleton;
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

// Z_Construct_UClass_UActorSequencePlayer_NoRegister @ 14eacfc10

UClass * __cdecl Z_Construct_UClass_UActorSequencePlayer_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UActorSequencePlayer.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ActorSequence",L"ActorSequencePlayer",
               &Z_Registration_Info_UClass_UActorSequencePlayer.InnerSingleton,
               UActorSequencePlayer::StaticRegisterNativesUActorSequencePlayer,0x4b0,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",InternalConstructor<UActorSequencePlayer>,
               InternalVTableHelperCtorCaller<UActorSequencePlayer>,local_res8,
               UMovieSceneSequencePlayer::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UActorSequencePlayer.InnerSingleton;
}

// Z_Construct_UClass_UActorSequenceComponent @ 14eacfd90

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UActorSequenceComponent(void)

{
  if (Z_Registration_Info_UClass_UActorSequenceComponent.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UActorSequenceComponent.OuterSingleton,
               &Z_Construct_UClass_UActorSequenceComponent_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UActorSequenceComponent.OuterSingleton;
}

// Z_Construct_UFunction_UActorSequenceComponent_PauseSequence @ 14eacfdd0

UFunction * __cdecl Z_Construct_UFunction_UActorSequenceComponent_PauseSequence(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UActorSequenceComponent_PauseSequence_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UActorSequenceComponent_PlaySequence @ 14eacfe10

UFunction * __cdecl Z_Construct_UFunction_UActorSequenceComponent_PlaySequence(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UActorSequenceComponent_PlaySequence_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UActorSequenceComponent_PlaySequenceReverse @ 14eacfe50

UFunction * __cdecl Z_Construct_UFunction_UActorSequenceComponent_PlaySequenceReverse(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UActorSequenceComponent_PlaySequenceReverse_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UActorSequenceComponent_StopSequence @ 14eacfe90

UFunction * __cdecl Z_Construct_UFunction_UActorSequenceComponent_StopSequence(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UActorSequenceComponent_StopSequence_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UActorSequence_NoRegister @ 14eacfed0

UClass * __cdecl Z_Construct_UClass_UActorSequence_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UActorSequence.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ActorSequence",L"ActorSequence",
               &Z_Registration_Info_UClass_UActorSequence.InnerSingleton,
               UActorSequence::StaticRegisterNativesUActorSequence,0x98,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UActorSequence>,InternalVTableHelperCtorCaller<UActorSequence>,
               local_res8,UMovieSceneSequence::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UActorSequence.InnerSingleton;
}

// ConstructItems<FActorSequenceObjectReference,FActorSequenceObjectReference,int> @ 14ead05b0

void __cdecl
ConstructItems<FActorSequenceObjectReference,FActorSequenceObjectReference,int>
          (void *param_1,FActorSequenceObjectReference *param_2,int param_3)

{
  ForAnyElementType *pFVar1;
  int iVar2;
  void *_Src;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  FGuid *pFVar7;
  
  if (param_3 != 0) {
    piVar6 = (int *)((longlong)param_1 + 0x24);
    pFVar7 = &param_2->ActorId;
    do {
      pFVar1 = (ForAnyElementType *)(piVar6 + -3);
      *(undefined1 *)((longlong)param_1 + (-4 - (longlong)param_2) + (longlong)pFVar7) =
           *(undefined1 *)((longlong)(pFVar7 + -1) + 0xc);
      uVar3 = pFVar7->B;
      uVar4 = pFVar7->C;
      uVar5 = pFVar7->D;
      piVar6[-8] = pFVar7->A;
      piVar6[-7] = uVar3;
      piVar6[-6] = uVar4;
      piVar6[-5] = uVar5;
      pFVar1->Data = (FScriptContainerElement *)0x0;
      iVar2 = *(int *)((longlong)(pFVar7 + 1) + 0xc);
      _Src = *(void **)((longlong)(pFVar7 + 1) + 4);
      piVar6[-1] = iVar2;
      if (iVar2 == 0) {
        *piVar6 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,iVar2,0,pFVar1,iVar2,piVar6);
        memcpy(pFVar1->Data,_Src,(longlong)iVar2 * 2);
      }
      pFVar7 = (FGuid *)((longlong)(pFVar7 + 2) + 8);
      piVar6 = piVar6 + 10;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<FActorSequenceObjectReferences,FActorSequenceObjectReferences,int> @ 14ead0690

void __cdecl
ConstructItems<FActorSequenceObjectReferences,FActorSequenceObjectReferences,int>
          (void *param_1,FActorSequenceObjectReferences *param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  FActorSequenceObjectReference *pFVar3;
  longlong lVar4;
  
  if (param_3 != 0) {
    lVar4 = (longlong)param_2 - (longlong)param_1;
    do {
      ((ForAnyElementType *)param_1)->Data = (FScriptContainerElement *)0x0;
      piVar1 = (int *)((longlong)&((ForAnyElementType *)((longlong)param_1 + 8))->Data + 4);
      iVar2 = *(int *)(lVar4 + 8 + (longlong)param_1);
      pFVar3 = *(FActorSequenceObjectReference **)(lVar4 + (longlong)param_1);
      *(int *)&((ForAnyElementType *)((longlong)param_1 + 8))->Data = iVar2;
      if (iVar2 == 0) {
        *piVar1 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x28,8,iVar2,0,param_1,iVar2,piVar1);
        ConstructItems<FActorSequenceObjectReference,FActorSequenceObjectReference,int>
                  (((ForAnyElementType *)param_1)->Data,pFVar3,iVar2);
      }
      param_1 = (void *)((longlong)param_1 + 0x10);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// DefaultConstructItems<FActorSequenceObjectReferences,int> @ 14ead0740

void __cdecl DefaultConstructItems<FActorSequenceObjectReferences,int>(void *param_1,int param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = (longlong)param_1 + 0xc;
    do {
      *(undefined8 *)(lVar1 + -0xc) = 0;
      *(undefined8 *)(lVar1 + -4) = 0;
      lVar1 = lVar1 + 0x10;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FActorSequenceObjectReference,int> @ 14ead0770

void __cdecl
DestructItems<FActorSequenceObjectReference,int>(FActorSequenceObjectReference *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  FString *pFVar2;
  
  if (param_2 != 0) {
    pFVar2 = &param_1->PathToComponent;
    do {
      pFVar1 = (pFVar2->Data).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar2 = (FString *)((longlong)(pFVar2 + 2) + 8);
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FActorSequenceObjectReferences,int> @ 14ead07b0

void __cdecl
DestructItems<FActorSequenceObjectReferences,int>
          (FActorSequenceObjectReferences *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    DestructItems<FActorSequenceObjectReference,int>
              ((FActorSequenceObjectReference *)(param_1->Array).AllocatorInstance.Data,
               (param_1->Array).ArrayNum);
    pFVar1 = (param_1->Array).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// GetDefault<UActorSequenceComponent> @ 14ead0800

UActorSequenceComponent * __cdecl GetDefault<UActorSequenceComponent>(void)

{
  UClass *this;
  
  this = UActorSequenceComponent::StaticClass();
  if ((this->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(this);
    return (UActorSequenceComponent *)(this->ClassDefaultObject).field0_0x0.DebugPtr;
  }
  return (UActorSequenceComponent *)(this->ClassDefaultObject).field0_0x0.DebugPtr;
}

// GetFullNameForCastLogError<UMovieSceneSequence> @ 14ead0840

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

FString * __cdecl
GetFullNameForCastLogError<UMovieSceneSequence>
          (FString *__return_storage_ptr__,UMovieSceneSequence *param_1)

{
  UObjectBaseUtility::GetFullName
            ((UObjectBaseUtility *)param_1,__return_storage_ptr__,(UObject *)0x0,None);
  return __return_storage_ptr__;
}

// GetTypeName<UActorSequence> @ 14ead0870

FString * __cdecl GetTypeName<UActorSequence>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = UActorSequence::StaticClass();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// InternalConstructor<UActorSequence> @ 14ead08b0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __cdecl InternalConstructor<UActorSequence>(FObjectInitializer *param_1)

{
  UMovieSceneSequence *this;
  FName FVar1;
  FName *pFVar2;
  UClass *pUVar3;
  UObjectBase *this_00;
  FName local_res8;
  
  this = (UMovieSceneSequence *)param_1->Obj;
  if (this != (UMovieSceneSequence *)0x0) {
    UMovieSceneSequence::UMovieSceneSequence(this,param_1);
    this->bParentContextsAreSignificant = true;
    this->_padding_ = (longlong)&___7UActorSequence__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    pFVar2 = FName::FName(&local_res8,"MovieScene");
    FVar1 = *pFVar2;
    pUVar3 = Z_Construct_UClass_UMovieScene_NoRegister();
    this_00 = (UObjectBase *)
              FObjectInitializer::CreateDefaultSubobject
                        (param_1,(UObject *)this,FVar1,pUVar3,pUVar3,true,false);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this_00 != (UObjectBase *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this_00);
    }
    this[1]._padding_ = (longlong)this_00;
    UObjectBase::AtomicallySetFlags(this_00,RF_Transactional);
  }
  return;
}

// InternalConstructor<UActorSequenceComponent> @ 14ead0980

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl InternalConstructor<UActorSequenceComponent>(FObjectInitializer *param_1)

{
  byte *pbVar1;
  uint *puVar2;
  UActorComponent *this;
  FName FVar3;
  UActorSequenceComponent *pUVar4;
  UActorSequenceComponent *pUVar5;
  FName *pFVar6;
  UClass *pUVar7;
  UObjectBase *this_00;
  FName local_res8;
  
  this = (UActorComponent *)param_1->Obj;
  if (this != (UActorComponent *)0x0) {
    UActorComponent::UActorComponent(this,param_1);
    pbVar1 = (byte *)((longlong)&(this->PrimaryComponentTick)._padding_ + 2);
    *pbVar1 = *pbVar1 | 2;
    this->_padding_ = (longlong)&UActorSequenceComponent::_vftable__for__UObject__;
    *(uint *)&this[1]._padding_ = (uint)this[1]._padding_ & 0xfffffffe;
    puVar2 = (uint *)((longlong)&this[1]._padding_ + 4);
    *puVar2 = *puVar2 & 0xffffffc0;
    this->_padding_ = (longlong)&UActorSequenceComponent::_vftable__for__IInterface_AssetUserData__;
    this->_padding_ =
         (longlong)&UActorSequenceComponent::_vftable__for__IAsyncPhysicsStateProcessor__;
    *(undefined8 *)((longlong)&this[1]._padding_ + 4) = 0;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0;
    *(uint *)((longlong)&this[1]._padding_ + 4) =
         *(uint *)((longlong)&this[1]._padding_ + 4) & 0xfffffffa | 2;
    *(undefined2 *)&this[1]._padding_ = 0x100;
    *(undefined8 *)((longlong)&this[1]._padding_ + 4) = 0x3f800000;
    *(undefined1 *)&this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    if ((this->_padding_ & 0x10) == 0) {
      pUVar4 = (UActorSequenceComponent *)UObject::GetArchetype((UObject *)this);
      pUVar5 = GetDefault<UActorSequenceComponent>();
      if (pUVar4 != pUVar5) {
        return;
      }
    }
    pFVar6 = FName::FName(&local_res8,"Sequence");
    FVar3 = *pFVar6;
    pUVar7 = UActorSequence::StaticClass();
    this_00 = (UObjectBase *)
              FObjectInitializer::CreateDefaultSubobject
                        (param_1,(UObject *)this,FVar3,pUVar7,pUVar7,true,false);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this_00 != (UObjectBase *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this_00);
    }
    this[1]._padding_ = (longlong)this_00;
    UObjectBase::AtomicallySetFlags(this_00,RF_Transactional|RF_Public);
  }
  return;
}

// InternalConstructor<UActorSequencePlayer> @ 14ead0ac0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl InternalConstructor<UActorSequencePlayer>(FObjectInitializer *param_1)

{
  UMovieSceneSequencePlayer *this;
  
  this = (UMovieSceneSequencePlayer *)param_1->Obj;
  if (this != (UMovieSceneSequencePlayer *)0x0) {
    UMovieSceneSequencePlayer::UMovieSceneSequencePlayer(this,param_1);
    this->_padding_ = (longlong)&UActorSequencePlayer::_vftable__for__UObject__;
    this->_padding_ = (longlong)&UActorSequencePlayer::_vftable__for__IMovieScenePlayer__;
    this->_padding_ =
         (longlong)&UActorSequencePlayer::_vftable__for__IMovieSceneSequenceTickManagerClient__;
  }
  return;
}

// InternalVTableHelperCtorCaller<UActorSequence> @ 14ead0b10

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UActorSequence>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UMovieSceneSequence *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UActorSequence::GetPrivateStaticClass();
  this = (UMovieSceneSequence *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UMovieSceneSequence *)0x0) {
    UMovieSceneSequence::UMovieSceneSequence(this,param_1);
    this->_padding_ = (longlong)&___7UActorSequence__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UActorSequenceComponent> @ 14ead0be0

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

UObject * __cdecl InternalVTableHelperCtorCaller<UActorSequenceComponent>(FVTableHelper *param_1)

{
  uint *puVar1;
  uint uVar2;
  UObject *pUVar3;
  UClass *pUVar4;
  UActorComponent *this;
  
  pUVar3 = GetTransientPackageAsObject();
  pUVar4 = UActorSequenceComponent::GetPrivateStaticClass();
  this = (UActorComponent *)
         StaticAllocateObject
                   (pUVar4,pUVar3,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UActorComponent *)0x0) {
    UActorComponent::UActorComponent(this,param_1);
    this->_padding_ = (longlong)&UActorSequenceComponent::_vftable__for__UObject__;
    uVar2 = *(uint *)((longlong)&this[1]._padding_ + 4);
    *(uint *)&this[1]._padding_ = (uint)this[1]._padding_ & 0xfffffffe;
    puVar1 = (uint *)((longlong)&this[1]._padding_ + 4);
    *puVar1 = *puVar1 & 0xffffffc0;
    this->_padding_ = (longlong)&UActorSequenceComponent::_vftable__for__IInterface_AssetUserData__;
    *(uint *)((longlong)&this[1]._padding_ + 4) = uVar2 & 0xfffffffa | 2;
    this->_padding_ =
         (longlong)&UActorSequenceComponent::_vftable__for__IAsyncPhysicsStateProcessor__;
    *(undefined8 *)((longlong)&this[1]._padding_ + 4) = 0;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0;
    *(undefined2 *)&this[1]._padding_ = 0x100;
    *(undefined8 *)((longlong)&this[1]._padding_ + 4) = 0x3f800000;
    *(undefined1 *)&this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UActorSequencePlayer> @ 14ead0d00

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UActorSequencePlayer>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UMovieSceneSequencePlayer *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UActorSequencePlayer::GetPrivateStaticClass();
  this = (UMovieSceneSequencePlayer *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UMovieSceneSequencePlayer *)0x0) {
    UMovieSceneSequencePlayer::UMovieSceneSequencePlayer(this,param_1);
    this->_padding_ = (longlong)&UActorSequencePlayer::_vftable__for__UObject__;
    this->_padding_ = (longlong)&UActorSequencePlayer::_vftable__for__IMovieScenePlayer__;
    this->_padding_ =
         (longlong)&UActorSequencePlayer::_vftable__for__IMovieSceneSequenceTickManagerClient__;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// NewObject<UActorSequencePlayer> @ 14ead0dd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UActorSequencePlayer * __cdecl
NewObject<UActorSequencePlayer>
          (UObject *param_1,FName param_2,EObjectFlags param_3,UObject *param_4,bool param_5,
          FObjectInstancingGraph *param_6,UPackage *param_7)

{
  UClass *pUVar1;
  UActorSequencePlayer *pUVar2;
  longlong *plVar3;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [128];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_d8;
  if (param_2 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              (param_1,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar1 = UActorSequencePlayer::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_b8,pUVar1);
  local_b8[0x20] = param_5;
  local_b8._48_8_ = param_6;
  local_b8._56_8_ = param_7;
  local_b8._8_8_ = param_1;
  local_b8._16_8_ = param_2;
  local_b8._24_4_ = param_3;
  local_b8._40_8_ = param_4;
  pUVar2 = (UActorSequencePlayer *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_b8);
  if (local_b8._64_8_ != 0) {
    plVar3 = (longlong *)(local_b8 + 0x50);
    if ((longlong *)local_b8._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_b8._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// StaticEnum<enum_EActorSequenceObjectReferenceType> @ 14ead0ec0

UEnum * __cdecl StaticEnum<enum_EActorSequenceObjectReferenceType>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EActorSequenceObjectReferenceType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ActorSequence();
    Z_Registration_Info_UEnum_EActorSequenceObjectReferenceType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_ActorSequence_EActorSequenceObjectReferenceType,
                       (UObject *)pUVar1,L"EActorSequenceObjectReferenceType");
  }
  return Z_Registration_Info_UEnum_EActorSequenceObjectReferenceType.OuterSingleton;
}

// `vector_deleting_destructor'`adjustor{40}' @ 14ead13d0

/* [thunk]:public: virtual void * __ptr64 __cdecl UActorSequenceComponent::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UActorSequenceComponent::_vector_deleting_destructor__adjustor_40__
          (UActorSequenceComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UActorSequenceComponent *)
                      &this[-1].PlaybackSettings.TickInterval.bTickWhenPaused,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{536}' @ 14ead13e0

/* [thunk]:public: virtual void * __ptr64 __cdecl UActorSequencePlayer::`vector deleting
   destructor'`adjustor{536}' (unsigned int) __ptr64 */

void * __thiscall
UActorSequencePlayer::_vector_deleting_destructor__adjustor_536__
          (UActorSequencePlayer *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UActorSequencePlayer *)&this[-1].field_0x298,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 14ead13f4

/* [thunk]:public: virtual void * __ptr64 __cdecl UActorSequencePlayer::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UActorSequencePlayer::_vector_deleting_destructor__adjustor_40__
          (UActorSequencePlayer *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UActorSequencePlayer *)&this[-1].field_0x488,param_1);
  return pvVar1;
}

// `scalar_deleting_destructor' @ 14ead1410

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void * __thiscall UActorSequence::_scalar_deleting_destructor_(UActorSequence *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UActorSequence__6B_;
  DestructItems<FActorSequenceObjectReferences,int>
            ((FActorSequenceObjectReferences *)
             (this->ObjectReferences).References.AllocatorInstance.Data,
             (this->ObjectReferences).References.ArrayNum);
  pFVar1 = (this->ObjectReferences).References.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ObjectReferences).BindingIds.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UMovieSceneSequence::~UMovieSceneSequence((UMovieSceneSequence *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x98);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ead14b0

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
UActorSequenceComponent::_scalar_deleting_destructor_(UActorSequenceComponent *this,uint param_1)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  UActorComponent::~UActorComponent((UActorComponent *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xf8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ead1530

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
UActorSequencePlayer::_scalar_deleting_destructor_(UActorSequencePlayer *this,uint param_1)

{
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IMovieScenePlayer__;
  *(undefined ***)&this->field_0x218 = &_vftable__for__IMovieSceneSequenceTickManagerClient__;
  UMovieSceneSequencePlayer::~UMovieSceneSequencePlayer((UMovieSceneSequencePlayer *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x4b0);
  }
  return this;
}

// EmptyLinkFunctionForGeneratedCodeActorSequence @ 14ead1f90

void __cdecl EmptyLinkFunctionForGeneratedCodeActorSequence(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeActorSequenceComponent @ 14ead1fa0

void __cdecl EmptyLinkFunctionForGeneratedCodeActorSequenceComponent(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeActorSequenceObjectReference @ 14ead1fb0

void __cdecl EmptyLinkFunctionForGeneratedCodeActorSequenceObjectReference(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeActorSequencePlayer @ 14ead1fc0

void __cdecl EmptyLinkFunctionForGeneratedCodeActorSequencePlayer(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeActorSequence_init @ 14ead1fd0

void __cdecl EmptyLinkFunctionForGeneratedCodeActorSequence_init(void)

{
  return;
}

// Z_Construct_UClass_UActorSequenceComponent_NoRegister @ 14ead2ec0

UClass * __cdecl Z_Construct_UClass_UActorSequenceComponent_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UActorSequenceComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ActorSequence",L"ActorSequenceComponent",
               &Z_Registration_Info_UClass_UActorSequenceComponent.InnerSingleton,
               UActorSequenceComponent::StaticRegisterNativesUActorSequenceComponent,0xf8,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UActorSequenceComponent>,
               InternalVTableHelperCtorCaller<UActorSequenceComponent>,local_res8,
               UActorComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UActorSequenceComponent.InnerSingleton;
}

// IMPLEMENT_MODULE_ActorSequence @ 14ead3040

void __cdecl IMPLEMENT_MODULE_ActorSequence(void)

{
  return;
}

// `dynamic_atexit_destructor_for_'CVarDefaultDisplayRate'' @ 15046ee20

void __cdecl _dynamic_atexit_destructor_for__CVarDefaultDisplayRate__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarDefaultDisplayRate);
  return;
}

// `dynamic_atexit_destructor_for_'CVarDefaultEvaluationType'' @ 15046ee40

void __cdecl _dynamic_atexit_destructor_for__CVarDefaultEvaluationType__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarDefaultEvaluationType);
  return;
}

// `dynamic_atexit_destructor_for_'CVarDefaultTickResolution'' @ 15046ee60

void __cdecl _dynamic_atexit_destructor_for__CVarDefaultTickResolution__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarDefaultTickResolution);
  return;
}

