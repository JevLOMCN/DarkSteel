// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LiveLinkMovieScene
// Functions: 158

// PropertyCache'' @ 1413c6450

void __cdecl `dynamic_initializer_for_'FLiveLinkStructPropertyBindings::PropertyCache__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FLiveLinkStructPropertyBindings::PropertyCache__);
  return;
}

// `dynamic_initializer_for_'CVarSequencerAlwaysSendInterpolatedLiveLink'' @ 1413c6470

void __cdecl _dynamic_initializer_for__CVarSequencerAlwaysSendInterpolatedLiveLink__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarSequencerAlwaysSendInterpolatedLiveLink,
             L"Sequencer.AlwaysSendInterpolatedLiveLink",local_res8,
             L"If nonzero we always interpolate when sending out live link data, if 0 we may send out frames at a higher rate than engine tick, if the data is dense."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarSequencerAlwaysSendInterpolatedLiveLink__);
  return;
}

// `dynamic_initializer_for_'ColorStrings'' @ 1413c64c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl MovieSceneLiveLinkPropertiesUtil::_dynamic_initializer_for__ColorStrings__(void)

{
  ulonglong *puVar1;
  longlong lVar2;
  ulonglong *puVar3;
  undefined1 auStackY_98 [32];
  FString local_58;
  FString local_48;
  FString local_38;
  FString local_28;
  ulonglong local_18 [2];
  
  local_18[0] = __security_cookie.value ^ (ulonglong)auStackY_98;
  ::FString::FString(&local_58,"Color.R");
  ::FString::FString(&local_48,"Color.G");
  ::FString::FString(&local_38,"Color.B");
  ::FString::FString(&local_28,"Color.A");
  lVar2 = 4;
  ColorStrings.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  ColorStrings.ArrayNum = 4;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,4,0,&ColorStrings.AllocatorInstance,4,&ColorStrings.ArrayMax);
  ConstructItems<FString,FString,int>(ColorStrings.AllocatorInstance.Data,&local_58,4);
  puVar3 = local_18;
  do {
    puVar1 = puVar3 + -2;
    puVar3 = puVar3 + -2;
    lVar2 = lVar2 + -1;
    if ((void *)*puVar1 != (void *)0x0) {
      FMemory::Free((void *)*puVar1);
    }
  } while (lVar2 != 0);
  atexit(_dynamic_atexit_destructor_for__ColorStrings__);
  return;
}

// `dynamic_initializer_for_'LogLiveLinkMovieScene'' @ 1413c65e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogLiveLinkMovieScene__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogLiveLinkMovieScene,L"LogLiveLinkMovieScene",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogLiveLinkMovieScene__);
  return;
}

// `dynamic_initializer_for_'ModuleRegistrantLiveLinkMovieScene'' @ 1413c6620

void __cdecl _dynamic_initializer_for__ModuleRegistrantLiveLinkMovieScene__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "LiveLinkMovieScene";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"LiveLinkMovieScene",0x12);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,FStaticallyLinkedModuleRegistrant<FDefaultModuleImpl>::InitializeModule);
  return;
}

// `dynamic_initializer_for_'StatPtr_MovieSceneEval_ApplyProperties'' @ 1413c6670

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::MovieScene::_dynamic_initializer_for__StatPtr_MovieSceneEval_ApplyProperties__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_MovieSceneEval_ApplyProperties ==
      (FThreadSafeStaticStat<UE::MovieScene::FStat_MovieSceneEval_ApplyProperties>)0x0) {
    pFVar1 = ::FName::FName(local_res8,"MovieSceneEval_ApplyProperties");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_MovieSceneEval_ApplyProperties,*pFVar1,
               L"Apply properties","STATGROUP_MovieSceneECS","STATCAT_Advanced",
               L"Movie Scene Evaluation Systems",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_MovieSceneEval_AquireComponentAccessLocks'' @ 1413c6700

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::MovieScene::_dynamic_initializer_for__StatPtr_MovieSceneEval_AquireComponentAccessLocks__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_MovieSceneEval_AquireComponentAccessLocks ==
      (FThreadSafeStaticStat<UE::MovieScene::FStat_MovieSceneEval_AquireComponentAccessLocks>)0x0) {
    pFVar1 = ::FName::FName(local_res8,"MovieSceneEval_AquireComponentAccessLocks");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_MovieSceneEval_AquireComponentAccessLocks,
               *pFVar1,L"Aquire Component Access Locks","STATGROUP_MovieSceneECS","STATCAT_Advanced"
               ,L"Movie Scene Evaluation Systems",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_MovieSceneEval_PersistentData_Access'' @ 1413c6790

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

// `dynamic_initializer_for_'StatPtr_MovieSceneEval_PropertyTrack_TokenExecute'' @ 1413c6820

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_MovieSceneEval_PropertyTrack_TokenExecute__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_MovieSceneEval_PropertyTrack_TokenExecute ==
      (FThreadSafeStaticStat<FStat_MovieSceneEval_PropertyTrack_TokenExecute>)0x0) {
    pFVar1 = FName::FName(local_res8,"MovieSceneEval_PropertyTrack_TokenExecute");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_MovieSceneEval_PropertyTrack_TokenExecute,
               *pFVar1,L"Property Track Token Execute","STATGROUP_MovieSceneEval","STATCAT_Advanced"
               ,L"Movie Scene Evaluation",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_MovieSceneEval_ReleaseComponentAccessLocks'' @ 1413c68b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::MovieScene::_dynamic_initializer_for__StatPtr_MovieSceneEval_ReleaseComponentAccessLocks__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_MovieSceneEval_ReleaseComponentAccessLocks ==
      (FThreadSafeStaticStat<UE::MovieScene::FStat_MovieSceneEval_ReleaseComponentAccessLocks>)0x0)
  {
    pFVar1 = ::FName::FName(local_res8,"MovieSceneEval_ReleaseComponentAccessLocks");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_MovieSceneEval_ReleaseComponentAccessLocks,
               *pFVar1,L"Release Component Access Locks","STATGROUP_MovieSceneECS",
               "STATCAT_Advanced",L"Movie Scene Evaluation Systems",true,true,ST_int64,true,false,
               MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StringArray'' @ 1413c6940

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
MovieSceneLiveLinkSubSectionAnimationUtil::_dynamic_initializer_for__StringArray__(void)

{
  ulonglong *puVar1;
  longlong lVar2;
  ulonglong *puVar3;
  undefined1 auStackY_e8 [32];
  FString local_a8;
  FString local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  FString local_28;
  ulonglong local_18 [2];
  
  local_18[0] = __security_cookie.value ^ (ulonglong)auStackY_e8;
  ::FString::FString(&local_a8,"Translation-X");
  ::FString::FString(&local_98,"Translation-Y");
  ::FString::FString(&local_88,"Translation-Z");
  ::FString::FString(&local_78,"Rotation-X");
  ::FString::FString(&local_68,"Rotation-Y");
  ::FString::FString(&local_58,"Rotation-Z");
  ::FString::FString(&local_48,"Scale-X");
  ::FString::FString(&local_38,"Scale-Y");
  ::FString::FString(&local_28,"Scale-Z");
  lVar2 = 9;
  StringArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  StringArray.ArrayNum = 9;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,9,0,&StringArray.AllocatorInstance,9,&StringArray.ArrayMax);
  ConstructItems<FString,FString,int>(StringArray.AllocatorInstance.Data,&local_a8,9);
  puVar3 = local_18;
  do {
    puVar1 = puVar3 + -2;
    puVar3 = puVar3 + -2;
    lVar2 = lVar2 + -1;
    if ((void *)*puVar1 != (void *)0x0) {
      FMemory::Free((void *)*puVar1);
    }
  } while (lVar2 != 0);
  atexit(_dynamic_atexit_destructor_for__StringArray__);
  return;
}

// `dynamic_initializer_for_'TransformStrings'' @ 1413c6ac0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl MovieSceneLiveLinkPropertiesUtil::_dynamic_initializer_for__TransformStrings__(void)

{
  ulonglong *puVar1;
  longlong lVar2;
  ulonglong *puVar3;
  undefined1 auStackY_e8 [32];
  FString local_a8;
  FString local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  FString local_28;
  ulonglong local_18 [2];
  
  local_18[0] = __security_cookie.value ^ (ulonglong)auStackY_e8;
  ::FString::FString(&local_a8,"Translation.X");
  ::FString::FString(&local_98,"Translation.Y");
  ::FString::FString(&local_88,"Translation.Z");
  ::FString::FString(&local_78,"Rotation.X");
  ::FString::FString(&local_68,"Rotation.Y");
  ::FString::FString(&local_58,"Rotation.Z");
  ::FString::FString(&local_48,"Scale.X");
  ::FString::FString(&local_38,"Scale.Y");
  ::FString::FString(&local_28,"Scale.Z");
  lVar2 = 9;
  TransformStrings.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  TransformStrings.ArrayNum = 9;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,9,0,&TransformStrings.AllocatorInstance,9,&TransformStrings.ArrayMax);
  ConstructItems<FString,FString,int>(TransformStrings.AllocatorInstance.Data,&local_a8,9);
  puVar3 = local_18;
  do {
    puVar1 = puVar3 + -2;
    puVar3 = puVar3 + -2;
    lVar2 = lVar2 + -1;
    if ((void *)*puVar1 != (void *)0x0) {
      FMemory::Free((void *)*puVar1);
    }
  } while (lVar2 != 0);
  atexit(_dynamic_atexit_destructor_for__TransformStrings__);
  return;
}

// `dynamic_initializer_for_'VectorStrings'' @ 1413c6c40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl MovieSceneLiveLinkPropertiesUtil::_dynamic_initializer_for__VectorStrings__(void)

{
  ulonglong *puVar1;
  longlong lVar2;
  ulonglong *puVar3;
  undefined1 auStackY_88 [32];
  FString local_48;
  FString local_38;
  FString local_28;
  ulonglong local_18 [2];
  
  local_18[0] = __security_cookie.value ^ (ulonglong)auStackY_88;
  ::FString::FString(&local_48,"Vector.X");
  ::FString::FString(&local_38,"Vector.Y");
  ::FString::FString(&local_28,"Vector.Z");
  lVar2 = 3;
  VectorStrings.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  VectorStrings.ArrayNum = 3;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,3,0,&VectorStrings.AllocatorInstance,3,&VectorStrings.ArrayMax);
  ConstructItems<FString,FString,int>(VectorStrings.AllocatorInstance.Data,&local_48,3);
  puVar3 = local_18;
  do {
    puVar1 = puVar3 + -2;
    puVar3 = puVar3 + -2;
    lVar2 = lVar2 + -1;
    if ((void *)*puVar1 != (void *)0x0) {
      FMemory::Free((void *)*puVar1);
    }
  } while (lVar2 != 0);
  atexit(_dynamic_atexit_destructor_for__VectorStrings__);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLinkMovieScene_Private_MovieScene_MovieSceneLiveLinkSectionTemplate_h__Script_LiveLinkMovieScene_1780975010'' @ 1413c6d40

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLinkMovieScene_Private_MovieScene_MovieSceneLiveLinkSectionTemplate_h__Script_LiveLinkMovieScene_1780975010__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/LiveLinkMovieScene",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLinkMovieScene_Private_MovieScene_MovieSceneLiveLinkSectionTemplate_h__Script_LiveLinkMovieScene_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLinkMovieScene_Public_MovieScene_MovieSceneLiveLinkSection_h__Script_LiveLinkMovieScene_2488800789'' @ 1413c6d80

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLinkMovieScene_Public_MovieScene_MovieSceneLiveLinkSection_h__Script_LiveLinkMovieScene_2488800789__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/LiveLinkMovieScene",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLinkMovieScene_Public_MovieScene_MovieSceneLiveLinkSection_h__Script_LiveLinkMovieScene_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLinkMovieScene_Public_MovieScene_MovieSceneLiveLinkStructProperties_h__Script_LiveLinkMovieScene_3637997197'' @ 1413c6dc0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLinkMovieScene_Public_MovieScene_MovieSceneLiveLinkStructProperties_h__Script_LiveLinkMovieScene_3637997197__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/LiveLinkMovieScene",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLinkMovieScene_Public_MovieScene_MovieSceneLiveLinkStructProperties_h__Script_LiveLinkMovieScene_Statics
             ::ScriptStructInfo,2,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLinkMovieScene_Public_MovieScene_MovieSceneLiveLinkSubSectionAnimation_h__Script_LiveLinkMovieScene_2842327953'' @ 1413c6e00

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLinkMovieScene_Public_MovieScene_MovieSceneLiveLinkSubSectionAnimation_h__Script_LiveLinkMovieScene_2842327953__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/LiveLinkMovieScene",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLinkMovieScene_Public_MovieScene_MovieSceneLiveLinkSubSectionAnimation_h__Script_LiveLinkMovieScene_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLinkMovieScene_Public_MovieScene_MovieSceneLiveLinkSubSectionBasicRole_h__Script_LiveLinkMovieScene_2081317435'' @ 1413c6e40

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLinkMovieScene_Public_MovieScene_MovieSceneLiveLinkSubSectionBasicRole_h__Script_LiveLinkMovieScene_2081317435__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/LiveLinkMovieScene",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLinkMovieScene_Public_MovieScene_MovieSceneLiveLinkSubSectionBasicRole_h__Script_LiveLinkMovieScene_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLinkMovieScene_Public_MovieScene_MovieSceneLiveLinkSubSectionProperties_h__Script_LiveLinkMovieScene_3207535597'' @ 1413c6e80

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLinkMovieScene_Public_MovieScene_MovieSceneLiveLinkSubSectionProperties_h__Script_LiveLinkMovieScene_3207535597__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/LiveLinkMovieScene",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLinkMovieScene_Public_MovieScene_MovieSceneLiveLinkSubSectionProperties_h__Script_LiveLinkMovieScene_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLinkMovieScene_Public_MovieScene_MovieSceneLiveLinkSubSection_h__Script_LiveLinkMovieScene_3410925974'' @ 1413c6ec0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLinkMovieScene_Public_MovieScene_MovieSceneLiveLinkSubSection_h__Script_LiveLinkMovieScene_3410925974__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/LiveLinkMovieScene",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLinkMovieScene_Public_MovieScene_MovieSceneLiveLinkSubSection_h__Script_LiveLinkMovieScene_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLinkMovieScene_Public_MovieScene_MovieSceneLiveLinkTrack_h__Script_LiveLinkMovieScene_1783663539'' @ 1413c6f00

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLinkMovieScene_Public_MovieScene_MovieSceneLiveLinkTrack_h__Script_LiveLinkMovieScene_1783663539__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/LiveLinkMovieScene",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLinkMovieScene_Public_MovieScene_MovieSceneLiveLinkTrack_h__Script_LiveLinkMovieScene_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferPackage_UPackage__Script_LiveLinkMovieScene'' @ 1413c6f40

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferPackage_UPackage__Script_LiveLinkMovieScene__(void)

{
  FPackageReloadVersionInfo local_res8 [4];
  
  local_res8[0].BodyHash = 0x2fd66132;
  local_res8[0].DeclarationsHash = 0x93fd201c;
  RegisterCompiledInInfo
            (Z_Construct_UPackage__Script_LiveLinkMovieScene,L"/Script/LiveLinkMovieScene",
             &Z_Registration_Info_UPackage__Script_LiveLinkMovieScene,local_res8);
  return;
}

// Z_Construct_UScriptStruct_FLiveLinkPropertyData @ 14d0972f0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FLiveLinkPropertyData(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FLiveLinkPropertyData.InnerSingleton == (UScriptStruct *)0x0
     ) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FLiveLinkPropertyData.InnerSingleton,
               &Z_Construct_UScriptStruct_FLiveLinkPropertyData_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FLiveLinkPropertyData.InnerSingleton != (UScriptStruct *)0x0
     ) {
    return Z_Registration_Info_UScriptStruct_FLiveLinkPropertyData.InnerSingleton;
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

// NewStructOps @ 14d097370

void * __cdecl Z_Construct_UScriptStruct_FLiveLinkPropertyData_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x58;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FLiveLinkPropertyData,&UE::CoreUObject::Private::Construct<FLiveLinkPropertyData>,&UE::CoreUObject::Private::ConstructForTests<FLiveLinkPropertyData>,&UE::CoreUObject::Private::Destruct<FLiveLinkPropertyData>,&UE::CoreUObject::Private::Copy<FLiveLinkPropertyData>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14d0973b0

void * __cdecl Z_Construct_UScriptStruct_FLiveLinkSubSectionData_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FLiveLinkSubSectionData,&UE::CoreUObject::Private::Construct<FLiveLinkSubSectionData>,&UE::CoreUObject::Private::ConstructForTests<FLiveLinkSubSectionData>,&UE::CoreUObject::Private::Destruct<FLiveLinkSubSectionData>,&UE::CoreUObject::Private::Copy<FLiveLinkSubSectionData>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UPackage__Script_LiveLinkMovieScene @ 14d0973f0

UPackage * __cdecl Z_Construct_UPackage__Script_LiveLinkMovieScene(void)

{
  if (Z_Registration_Info_UPackage__Script_LiveLinkMovieScene.OuterSingleton == (UPackage *)0x0) {
    UECodeGen_Private::ConstructUPackage
              (&Z_Registration_Info_UPackage__Script_LiveLinkMovieScene.OuterSingleton,
               &PackageParams);
  }
  return Z_Registration_Info_UPackage__Script_LiveLinkMovieScene.OuterSingleton;
}

// Z_Construct_UClass_UMovieSceneLiveLinkSubSection @ 14d0974f0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMovieSceneLiveLinkSubSection(void)

{
  if (Z_Registration_Info_UClass_UMovieSceneLiveLinkSubSection.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMovieSceneLiveLinkSubSection.OuterSingleton,
               &Z_Construct_UClass_UMovieSceneLiveLinkSubSection_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMovieSceneLiveLinkSubSection.OuterSingleton;
}

// Z_Construct_UClass_UMovieSceneLiveLinkSubSectionAnimation @ 14d097530

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMovieSceneLiveLinkSubSectionAnimation(void)

{
  if (Z_Registration_Info_UClass_UMovieSceneLiveLinkSubSectionAnimation.OuterSingleton ==
      (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMovieSceneLiveLinkSubSectionAnimation.OuterSingleton,
               &Z_Construct_UClass_UMovieSceneLiveLinkSubSectionAnimation_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMovieSceneLiveLinkSubSectionAnimation.OuterSingleton;
}

// Z_Construct_UClass_UMovieSceneLiveLinkSubSectionBasicRole @ 14d097570

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMovieSceneLiveLinkSubSectionBasicRole(void)

{
  if (Z_Registration_Info_UClass_UMovieSceneLiveLinkSubSectionBasicRole.OuterSingleton ==
      (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMovieSceneLiveLinkSubSectionBasicRole.OuterSingleton,
               &Z_Construct_UClass_UMovieSceneLiveLinkSubSectionBasicRole_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMovieSceneLiveLinkSubSectionBasicRole.OuterSingleton;
}

// Z_Construct_UClass_UMovieSceneLiveLinkSubSectionProperties @ 14d0975b0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMovieSceneLiveLinkSubSectionProperties(void)

{
  if (Z_Registration_Info_UClass_UMovieSceneLiveLinkSubSectionProperties.OuterSingleton ==
      (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMovieSceneLiveLinkSubSectionProperties.OuterSingleton,
               &Z_Construct_UClass_UMovieSceneLiveLinkSubSectionProperties_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMovieSceneLiveLinkSubSectionProperties.OuterSingleton;
}

// Z_Construct_UClass_UMovieSceneLiveLinkSubSection_NoRegister @ 14d0975f0

UClass * __cdecl Z_Construct_UClass_UMovieSceneLiveLinkSubSection_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneLiveLinkSubSection.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/LiveLinkMovieScene",L"MovieSceneLiveLinkSubSection",
               &Z_Registration_Info_UClass_UMovieSceneLiveLinkSubSection.InnerSingleton,
               UMovieSceneLiveLinkSubSection::StaticRegisterNativesUMovieSceneLiveLinkSubSection,
               0x50,8,CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieSceneLiveLinkSubSection>,
               InternalVTableHelperCtorCaller<UMovieSceneLiveLinkSubSection>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneLiveLinkSubSection.InnerSingleton;
}

// Z_Construct_UScriptStruct_FLiveLinkSubSectionData @ 14d0978d0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FLiveLinkSubSectionData(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FLiveLinkSubSectionData.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FLiveLinkSubSectionData.InnerSingleton,
               &Z_Construct_UScriptStruct_FLiveLinkSubSectionData_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FLiveLinkSubSectionData.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FLiveLinkSubSectionData.InnerSingleton;
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

// NewStructOps @ 14d097950

void * __cdecl
Z_Construct_UScriptStruct_FMovieSceneLiveLinkSectionTemplate_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xb8;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FMovieSceneLiveLinkSectionTemplate,&UE::CoreUObject::Private::Construct<FMovieSceneLiveLinkSectionTemplate>,&UE::CoreUObject::Private::ConstructForTests<FMovieSceneLiveLinkSectionTemplate>,&UE::CoreUObject::Private::Destruct<FMovieSceneLiveLinkSectionTemplate>,&UE::CoreUObject::Private::SerializeArchive<FMovieSceneLiveLinkSectionTemplate>,&UE::CoreUObject::Private::Copy<FMovieSceneLiveLinkSectionTemplate>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UMovieSceneLiveLinkSection @ 14d097b50

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMovieSceneLiveLinkSection(void)

{
  if (Z_Registration_Info_UClass_UMovieSceneLiveLinkSection.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMovieSceneLiveLinkSection.OuterSingleton,
               &Z_Construct_UClass_UMovieSceneLiveLinkSection_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMovieSceneLiveLinkSection.OuterSingleton;
}

// Z_Construct_UClass_UMovieSceneLiveLinkTrack @ 14d097b90

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMovieSceneLiveLinkTrack(void)

{
  if (Z_Registration_Info_UClass_UMovieSceneLiveLinkTrack.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMovieSceneLiveLinkTrack.OuterSingleton,
               &Z_Construct_UClass_UMovieSceneLiveLinkTrack_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMovieSceneLiveLinkTrack.OuterSingleton;
}

// AreChannelsUsable<FMovieSceneBoolChannel> @ 14d0982f0

bool __cdecl
LiveLinkSectionTemplateUtils::AreChannelsUsable<FMovieSceneBoolChannel>
          (TArray<FMovieSceneBoolChannel,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  undefined1 local_res8 [8];
  
  iVar1 = param_1->ArrayNum;
  if (iVar1 < 1) {
    return true;
  }
  pFVar5 = (param_1->AllocatorInstance).Data;
  pFVar6 = pFVar5 + (longlong)iVar1 * 0x120;
  while( true ) {
    if (param_1->ArrayNum != iVar1) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FMovieSceneBoolChannel_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar5 == pFVar6) {
      return false;
    }
    if (*(int *)(pFVar5 + 0x78) < 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
    }
    else if (0 < *(int *)(pFVar5 + 0x78)) {
      return true;
    }
    if (pFVar5[0x81] != (FScriptContainerElement)0x0) break;
    pFVar5 = pFVar5 + 0x120;
  }
  return true;
}

// AreChannelsUsable<FMovieSceneByteChannel> @ 14d0983a0

bool __cdecl
LiveLinkSectionTemplateUtils::AreChannelsUsable<FMovieSceneByteChannel>
          (TArray<FMovieSceneByteChannel,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  undefined1 local_res8 [8];
  
  iVar1 = param_1->ArrayNum;
  if (iVar1 < 1) {
    return true;
  }
  pFVar5 = (param_1->AllocatorInstance).Data;
  pFVar6 = pFVar5 + (longlong)iVar1 * 0x128;
  while( true ) {
    if (param_1->ArrayNum != iVar1) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FMovieSceneByteChannel_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar5 == pFVar6) {
      return false;
    }
    if (*(int *)(pFVar5 + 0x78) < 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
    }
    else if (0 < *(int *)(pFVar5 + 0x78)) {
      return true;
    }
    if (pFVar5[0x81] != (FScriptContainerElement)0x0) break;
    pFVar5 = pFVar5 + 0x128;
  }
  return true;
}

// AreChannelsUsable<FMovieSceneFloatChannel> @ 14d098450

bool __cdecl
LiveLinkSectionTemplateUtils::AreChannelsUsable<FMovieSceneFloatChannel>
          (TArray<FMovieSceneFloatChannel,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  undefined1 local_res8 [8];
  
  iVar1 = param_1->ArrayNum;
  if (iVar1 < 1) {
    return true;
  }
  pFVar5 = (param_1->AllocatorInstance).Data;
  pFVar6 = pFVar5 + (longlong)iVar1 * 0x128;
  while( true ) {
    if (param_1->ArrayNum != iVar1) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FMovieSceneFloatChannel_const_,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res8);
    }
    if (pFVar5 == pFVar6) {
      return false;
    }
    if (*(int *)(pFVar5 + 0x78) < 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
    }
    else if (0 < *(int *)(pFVar5 + 0x78)) {
      return true;
    }
    if (pFVar5[0x94] != (FScriptContainerElement)0x0) break;
    pFVar5 = pFVar5 + 0x128;
  }
  return true;
}

// AreChannelsUsable<FMovieSceneIntegerChannel> @ 14d098500

bool __cdecl
LiveLinkSectionTemplateUtils::AreChannelsUsable<FMovieSceneIntegerChannel>
          (TArray<FMovieSceneIntegerChannel,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  undefined1 local_res8 [8];
  
  iVar1 = param_1->ArrayNum;
  if (iVar1 < 1) {
    return true;
  }
  pFVar5 = (param_1->AllocatorInstance).Data;
  pFVar6 = pFVar5 + (longlong)iVar1 * 0x120;
  while( true ) {
    if (param_1->ArrayNum != iVar1) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FMovieSceneIntegerChannel_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar5 == pFVar6) {
      return false;
    }
    if (*(int *)(pFVar5 + 0x78) < 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
    }
    else if (0 < *(int *)(pFVar5 + 0x78)) {
      return true;
    }
    if (pFVar5[0x84] != (FScriptContainerElement)0x0) break;
    pFVar5 = pFVar5 + 0x120;
  }
  return true;
}

// AreChannelsUsable<FMovieSceneStringChannel> @ 14d0985b0

bool __cdecl
LiveLinkSectionTemplateUtils::AreChannelsUsable<FMovieSceneStringChannel>
          (TArray<FMovieSceneStringChannel,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  undefined1 uVar6;
  FString *pFVar7;
  ForAnyElementType FVar8;
  int iVar9;
  FScriptContainerElement *pFVar10;
  FScriptContainerElement *pFVar11;
  FScriptContainerElement *pFVar12;
  uint local_res8;
  uint uStackX_c;
  FString local_48;
  FString local_38;
  
  bVar5 = false;
  local_res8 = 0;
  iVar1 = param_1->ArrayNum;
  if (iVar1 < 1) {
    return true;
  }
  pFVar10 = (param_1->AllocatorInstance).Data;
  pFVar12 = (FScriptContainerElement *)((ulonglong)uStackX_c << 0x20);
  iVar9 = 0;
  pFVar11 = pFVar10 + (longlong)iVar1 * 0x128;
  do {
    if (param_1->ArrayNum != iVar1) {
      local_res8 = local_res8 & 0xffffff00;
      `TCheckedPointerIterator<FMovieSceneStringChannel_const_,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(&local_res8);
    }
    if (pFVar10 == pFVar11) {
      return false;
    }
    if (*(int *)(pFVar10 + 0x70) < 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L"");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        uVar6 = (*pcVar3)();
        return (bool)uVar6;
      }
LAB_14d098653:
      if (pFVar10[0x98] == (FScriptContainerElement)0x0) {
        local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        pFVar7 = &local_48;
        local_48.Data.ArrayNum = 0;
        bVar4 = false;
        bVar5 = true;
        local_48.Data.ArrayMax = -1;
        FVar8.Data = (FScriptContainerElement *)0x0;
      }
      else {
        ::FString::FString(&local_38,(FString *)(pFVar10 + 0x88));
        if ((local_38.Data.ArrayMax == -1) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsSet()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                               ,0xbd,
                               L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                              ), bVar5)) {
          pcVar3 = (code *)swi(3);
          uVar6 = (*pcVar3)();
          return (bool)uVar6;
        }
        pFVar7 = &local_38;
        bVar4 = true;
        bVar5 = false;
        FVar8.Data = local_38.Data.AllocatorInstance.Data;
      }
      iVar2 = (pFVar7->Data).ArrayMax;
      pFVar12 = (FScriptContainerElement *)0x0;
      iVar9 = -1;
      if (iVar2 != -1) {
        (pFVar7->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (pFVar7->Data).ArrayNum = 0;
        (pFVar7->Data).ArrayMax = 0;
        pFVar12 = FVar8.Data;
        iVar9 = iVar2;
      }
      if (((bVar5) && (local_48.Data.ArrayMax != -1)) &&
         (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
      if (((bVar4) && (local_38.Data.ArrayMax != -1)) &&
         (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
      bVar5 = true;
      if (iVar9 != -1) goto LAB_14d098733;
      bVar4 = false;
    }
    else {
      if (*(int *)(pFVar10 + 0x70) < 1) goto LAB_14d098653;
LAB_14d098733:
      bVar4 = true;
    }
    if (((bVar5) && (bVar5 = false, iVar9 != -1)) && (pFVar12 != (FScriptContainerElement *)0x0)) {
      FMemory::Free(pFVar12);
    }
    if (bVar4) {
      return true;
    }
    pFVar10 = pFVar10 + 0x128;
  } while( true );
}

// CastChecked<UMovieSceneLiveLinkSection_const_,UMovieSceneSection_const_> @ 14d098790

UMovieSceneLiveLinkSection * __cdecl
CastChecked<UMovieSceneLiveLinkSection_const_,UMovieSceneSection_const_>
          (UMovieSceneSection *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UMovieSceneSection *)0x0) {
    pFVar3 = GetTypeName<UMovieSceneLiveLinkSection_const_>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = UMovieSceneLiveLinkSection::StaticClass();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
      == &pUVar2->_padding_)) {
    return (UMovieSceneLiveLinkSection *)param_1;
  }
  pFVar3 = GetTypeName<UMovieSceneLiveLinkSection_const_>(&local_28);
  pwVar4 = L"";
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  pFVar3 = GetFullNameForCastLogError<UMovieSceneSection_const_>(&local_18,param_1);
  if ((pFVar3->Data).ArrayNum != 0) {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar4,pwVar5);
}

// ConstructItems<FLiveLinkPropertyData,FLiveLinkPropertyData,int> @ 14d098850

void __cdecl
ConstructItems<FLiveLinkPropertyData,FLiveLinkPropertyData,int>
          (void *param_1,FLiveLinkPropertyData *param_2,int param_3)

{
  ForAnyElementType *pFVar1;
  int iVar2;
  FMovieSceneFloatChannel *pFVar3;
  FMovieSceneStringChannel *pFVar4;
  FMovieSceneIntegerChannel *pFVar5;
  FMovieSceneBoolChannel *pFVar6;
  FMovieSceneByteChannel *pFVar7;
  int *piVar8;
  int *piVar9;
  
  if (param_3 != 0) {
    piVar8 = (int *)((longlong)param_1 + 0x20);
    piVar9 = &(param_2->StringChannel).ArrayNum;
    do {
      pFVar1 = (ForAnyElementType *)(piVar8 + -6);
      *(undefined8 *)((longlong)piVar9 + (longlong)param_1 + (-0x20 - (longlong)param_2)) =
           *(undefined8 *)(piVar9 + -8);
      pFVar1->Data = (FScriptContainerElement *)0x0;
      iVar2 = piVar9[-4];
      pFVar3 = *(FMovieSceneFloatChannel **)(piVar9 + -6);
      piVar8[-4] = iVar2;
      if (iVar2 == 0) {
        piVar8[-3] = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x128,8,iVar2,0,pFVar1,iVar2,piVar8 + -3);
        ConstructItems<FMovieSceneFloatChannel,FMovieSceneFloatChannel,int>
                  (pFVar1->Data,pFVar3,iVar2);
      }
      piVar8[-2] = 0;
      piVar8[-1] = 0;
      iVar2 = *piVar9;
      pFVar4 = (FMovieSceneStringChannel *)
               (((TArray<FMovieSceneStringChannel,TSizedDefaultAllocator<32>_> *)(piVar9 + -2))->
               AllocatorInstance).Data;
      *piVar8 = iVar2;
      if (iVar2 == 0) {
        piVar8[1] = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x128,8,iVar2,0,(ForAnyElementType *)(piVar8 + -2),iVar2,piVar8 + 1);
        ConstructItems<FMovieSceneStringChannel,FMovieSceneStringChannel,int>
                  (((ForAnyElementType *)(piVar8 + -2))->Data,pFVar4,iVar2);
      }
      piVar8[2] = 0;
      piVar8[3] = 0;
      iVar2 = piVar9[4];
      pFVar5 = *(FMovieSceneIntegerChannel **)(piVar9 + 2);
      piVar8[4] = iVar2;
      if (iVar2 == 0) {
        piVar8[5] = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x120,8,iVar2,0,(ForAnyElementType *)(piVar8 + 2),iVar2,piVar8 + 5);
        ConstructItems<FMovieSceneIntegerChannel,FMovieSceneIntegerChannel,int>
                  (((ForAnyElementType *)(piVar8 + 2))->Data,pFVar5,iVar2);
      }
      piVar8[6] = 0;
      piVar8[7] = 0;
      iVar2 = piVar9[8];
      pFVar6 = *(FMovieSceneBoolChannel **)(piVar9 + 6);
      piVar8[8] = iVar2;
      if (iVar2 == 0) {
        piVar8[9] = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x120,8,iVar2,0,(ForAnyElementType *)(piVar8 + 6),iVar2,piVar8 + 9);
        ConstructItems<FMovieSceneBoolChannel,FMovieSceneBoolChannel,int>
                  (((ForAnyElementType *)(piVar8 + 6))->Data,pFVar6,iVar2);
      }
      piVar8[10] = 0;
      piVar8[0xb] = 0;
      iVar2 = piVar9[0xc];
      pFVar7 = *(FMovieSceneByteChannel **)(piVar9 + 10);
      piVar8[0xc] = iVar2;
      if (iVar2 == 0) {
        piVar8[0xd] = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x128,8,iVar2,0,(ForAnyElementType *)(piVar8 + 10),iVar2,piVar8 + 0xd);
        ConstructItems<FMovieSceneByteChannel,FMovieSceneByteChannel,int>
                  (((ForAnyElementType *)(piVar8 + 10))->Data,pFVar7,iVar2);
      }
      piVar8 = piVar8 + 0x16;
      piVar9 = piVar9 + 0x16;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<FLiveLinkSubSectionData,FLiveLinkSubSectionData,int> @ 14d098a70

void __cdecl
ConstructItems<FLiveLinkSubSectionData,FLiveLinkSubSectionData,int>
          (void *param_1,FLiveLinkSubSectionData *param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  FLiveLinkPropertyData *pFVar3;
  longlong lVar4;
  
  if (param_3 != 0) {
    lVar4 = (longlong)param_2 - (longlong)param_1;
    do {
      ((ForAnyElementType *)param_1)->Data = (FScriptContainerElement *)0x0;
      piVar1 = (int *)((longlong)&((ForAnyElementType *)((longlong)param_1 + 8))->Data + 4);
      iVar2 = *(int *)(lVar4 + 8 + (longlong)param_1);
      pFVar3 = *(FLiveLinkPropertyData **)(lVar4 + (longlong)param_1);
      *(int *)&((ForAnyElementType *)((longlong)param_1 + 8))->Data = iVar2;
      if (iVar2 == 0) {
        *piVar1 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x58,8,iVar2,0,param_1,iVar2,piVar1);
        ConstructItems<FLiveLinkPropertyData,FLiveLinkPropertyData,int>
                  (((ForAnyElementType *)param_1)->Data,pFVar3,iVar2);
      }
      param_1 = (void *)((longlong)param_1 + 0x10);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<FMovieSceneBoolChannel,FMovieSceneBoolChannel,int> @ 14d098b20

void __cdecl
ConstructItems<FMovieSceneBoolChannel,FMovieSceneBoolChannel,int>
          (void *param_1,FMovieSceneBoolChannel *param_2,int param_3)

{
  ForAnyElementType *pFVar1;
  FMovieSceneChannel *this;
  int iVar2;
  void *_Src;
  FScriptContainerElement *_Src_00;
  int *piVar3;
  int *piVar4;
  
  if (param_3 != 0) {
    piVar3 = (int *)((longlong)param_1 + 0x90);
    piVar4 = &(param_2->Values).ArrayNum;
    do {
      this = (FMovieSceneChannel *)
             ((longlong)param_1 + (-0x90 - (longlong)param_2) + (longlong)piVar4);
      FMovieSceneChannel::FMovieSceneChannel(this,(FMovieSceneChannel *)(piVar4 + -0x24));
      this->_padding_ = (longlong)&___7FMovieSceneBoolChannel__6B_;
      pFVar1 = (ForAnyElementType *)(piVar3 + -8);
      *(char *)(piVar3 + -10) = (char)piVar4[-10];
      *(undefined1 *)((longlong)piVar3 + -0x27) = *(undefined1 *)((longlong)piVar4 + -0x27);
      pFVar1->Data = (FScriptContainerElement *)0x0;
      iVar2 = piVar4[-6];
      _Src = *(void **)(piVar4 + -8);
      piVar3[-6] = iVar2;
      if (iVar2 == 0) {
        piVar3[-5] = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,iVar2,0,pFVar1,iVar2,piVar3 + -5);
        memcpy(pFVar1->Data,_Src,(longlong)iVar2 << 2);
      }
      pFVar1 = (ForAnyElementType *)(piVar3 + -2);
      *(char *)(piVar3 + -4) = (char)piVar4[-4];
      *(undefined1 *)((longlong)piVar3 + -0xf) = *(undefined1 *)((longlong)piVar4 + -0xf);
      pFVar1->Data = (FScriptContainerElement *)0x0;
      iVar2 = *piVar4;
      _Src_00 = (((TArray<bool,TSizedDefaultAllocator<32>_> *)(piVar4 + -2))->AllocatorInstance).
                Data;
      *piVar3 = iVar2;
      if (iVar2 == 0) {
        piVar3[1] = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (1,1,iVar2,0,pFVar1,iVar2,piVar3 + 1);
        memcpy(pFVar1->Data,_Src_00,(longlong)iVar2);
      }
      piVar3[2] = 0;
      piVar3[3] = 0;
      piVar3[4] = 0;
      piVar3[5] = 0;
      piVar4 = piVar4 + 0x48;
      piVar3[10] = 0;
      piVar3[0xb] = 0;
      piVar3[0xc] = 0;
      piVar3[0xd] = 0x80;
      piVar3[0xe] = -1;
      piVar3[0xf] = 0;
      piVar3[0x10] = 0;
      piVar3[0x11] = 0;
      piVar3[0x12] = 0;
      piVar3[0x13] = 0;
      piVar3[0x18] = 0;
      piVar3[0x19] = 0;
      piVar3[0x1a] = 0;
      piVar3[0x1b] = 0x80;
      piVar3[0x1c] = -1;
      piVar3[0x1d] = 0;
      piVar3[0x20] = 0;
      piVar3[0x21] = 0;
      piVar3[0x22] = 0;
      piVar3 = piVar3 + 0x48;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<FMovieSceneByteChannel,FMovieSceneByteChannel,int> @ 14d098cf0

void __cdecl
ConstructItems<FMovieSceneByteChannel,FMovieSceneByteChannel,int>
          (void *param_1,FMovieSceneByteChannel *param_2,int param_3)

{
  ForAnyElementType *pFVar1;
  FMovieSceneChannel *this;
  int iVar2;
  void *_Src;
  FScriptContainerElement *_Src_00;
  UObject *pUVar3;
  int *piVar4;
  int *piVar5;
  
  if (param_3 != 0) {
    piVar4 = (int *)((longlong)param_1 + 0x90);
    piVar5 = &(param_2->Values).ArrayNum;
    do {
      this = (FMovieSceneChannel *)
             ((longlong)piVar5 + (longlong)param_1 + (-0x90 - (longlong)param_2));
      FMovieSceneChannel::FMovieSceneChannel(this,(FMovieSceneChannel *)(piVar5 + -0x24));
      this->_padding_ = (longlong)&___7FMovieSceneByteChannel__6B_;
      pFVar1 = (ForAnyElementType *)(piVar4 + -8);
      *(char *)(piVar4 + -10) = (char)piVar5[-10];
      *(undefined1 *)((longlong)piVar4 + -0x27) = *(undefined1 *)((longlong)piVar5 + -0x27);
      pFVar1->Data = (FScriptContainerElement *)0x0;
      iVar2 = piVar5[-6];
      _Src = *(void **)(piVar5 + -8);
      piVar4[-6] = iVar2;
      if (iVar2 == 0) {
        piVar4[-5] = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,iVar2,0,pFVar1,iVar2,piVar4 + -5);
        memcpy(pFVar1->Data,_Src,(longlong)iVar2 << 2);
      }
      pFVar1 = (ForAnyElementType *)(piVar4 + -2);
      *(char *)(piVar4 + -4) = (char)piVar5[-4];
      *(undefined1 *)((longlong)piVar4 + -0xf) = *(undefined1 *)((longlong)piVar5 + -0xf);
      pFVar1->Data = (FScriptContainerElement *)0x0;
      iVar2 = *piVar5;
      _Src_00 = (((TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)(piVar5 + -2))->
                AllocatorInstance).Data;
      *piVar4 = iVar2;
      if (iVar2 == 0) {
        piVar4[1] = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (1,1,iVar2,0,pFVar1,iVar2,piVar4 + 1);
        memcpy(pFVar1->Data,_Src_00,(longlong)iVar2);
      }
      pUVar3 = *(UObject **)(piVar5 + 2);
      *(UObject **)(piVar4 + 2) = pUVar3;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar3);
      }
      piVar4[4] = 0;
      piVar4[5] = 0;
      piVar4[6] = 0;
      piVar4[7] = 0;
      piVar5 = piVar5 + 0x4a;
      piVar4[0xc] = 0;
      piVar4[0xd] = 0;
      piVar4[0xe] = 0;
      piVar4[0xf] = 0x80;
      piVar4[0x10] = -1;
      piVar4[0x11] = 0;
      piVar4[0x12] = 0;
      piVar4[0x13] = 0;
      piVar4[0x14] = 0;
      piVar4[0x15] = 0;
      piVar4[0x1a] = 0;
      piVar4[0x1b] = 0;
      piVar4[0x1c] = 0;
      piVar4[0x1d] = 0x80;
      piVar4[0x1e] = -1;
      piVar4[0x1f] = 0;
      piVar4[0x22] = 0;
      piVar4[0x23] = 0;
      piVar4[0x24] = 0;
      piVar4 = piVar4 + 0x4a;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<FMovieSceneFloatChannel,FMovieSceneFloatChannel,int> @ 14d098ee0

void __cdecl
ConstructItems<FMovieSceneFloatChannel,FMovieSceneFloatChannel,int>
          (void *param_1,FMovieSceneFloatChannel *param_2,int param_3)

{
  ForAnyElementType *pFVar1;
  int *piVar2;
  FMovieSceneChannel *this;
  int iVar3;
  void *_Src;
  FScriptContainerElement *_Src_00;
  int *piVar4;
  int *piVar5;
  
  if (param_3 != 0) {
    piVar4 = &(param_2->Values).ArrayNum;
    piVar5 = (int *)((longlong)param_1 + 0x88);
    do {
      this = (FMovieSceneChannel *)
             ((longlong)piVar4 + (longlong)param_1 + (-0x88 - (longlong)param_2));
      FMovieSceneChannel::FMovieSceneChannel(this,(FMovieSceneChannel *)(piVar4 + -0x22));
      this->_padding_ = (longlong)&___7FMovieSceneFloatChannel__6B_;
      pFVar1 = (ForAnyElementType *)(piVar5 + -6);
      *(char *)(piVar5 + -8) = (char)piVar4[-8];
      *(undefined1 *)((longlong)piVar5 + -0x1f) = *(undefined1 *)((longlong)piVar4 + -0x1f);
      pFVar1->Data = (FScriptContainerElement *)0x0;
      iVar3 = piVar4[-4];
      _Src = *(void **)(piVar4 + -6);
      piVar5[-4] = iVar3;
      if (iVar3 == 0) {
        piVar5[-3] = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,iVar3,0,pFVar1,iVar3,piVar5 + -3);
        memcpy(pFVar1->Data,_Src,(longlong)iVar3 << 2);
      }
      piVar5[-2] = 0;
      piVar5[-1] = 0;
      iVar3 = *piVar4;
      _Src_00 = (((TArray<FMovieSceneFloatValue,TSizedDefaultAllocator<32>_> *)(piVar4 + -2))->
                AllocatorInstance).Data;
      *piVar5 = iVar3;
      if (iVar3 == 0) {
        piVar5[1] = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x1c,4,iVar3,0,(ForAnyElementType *)(piVar5 + -2),iVar3,piVar5 + 1);
        memcpy(((ForAnyElementType *)(piVar5 + -2))->Data,_Src_00,(longlong)iVar3 * 0x1c);
      }
      piVar5[2] = piVar4[2];
      iVar3 = piVar4[3];
      piVar5[4] = 0;
      piVar5[5] = 0;
      piVar5[6] = 0;
      piVar5[7] = 0;
      piVar5[0xc] = 0;
      piVar5[0xd] = 0;
      *(char *)(piVar5 + 3) = (char)iVar3;
      piVar5[0xe] = 0;
      piVar5[0xf] = 0x80;
      piVar5[0x10] = -1;
      piVar5[0x11] = 0;
      piVar5[0x12] = 0;
      piVar5[0x13] = 0;
      piVar5[0x14] = 0;
      piVar5[0x15] = 0;
      piVar5[0x1a] = 0;
      piVar5[0x1b] = 0;
      piVar5[0x1c] = 0;
      piVar5[0x1d] = 0x80;
      piVar5[0x1e] = -1;
      piVar5[0x1f] = 0;
      piVar5[0x22] = 0;
      piVar5[0x23] = 0;
      piVar5[0x24] = 0;
      piVar2 = piVar4 + 0x26;
      piVar4 = piVar4 + 0x4a;
      *(undefined8 *)(piVar5 + 0x26) = *(undefined8 *)piVar2;
      piVar5 = piVar5 + 0x4a;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<FMovieSceneIntegerChannel,FMovieSceneIntegerChannel,int> @ 14d0990c0

void __cdecl
ConstructItems<FMovieSceneIntegerChannel,FMovieSceneIntegerChannel,int>
          (void *param_1,FMovieSceneIntegerChannel *param_2,int param_3)

{
  ForAnyElementType *pFVar1;
  FMovieSceneChannel *this;
  int iVar2;
  void *_Src;
  FScriptContainerElement *_Src_00;
  int *piVar3;
  int *piVar4;
  
  if (param_3 != 0) {
    piVar3 = (int *)((longlong)param_1 + 0x90);
    piVar4 = &(param_2->Values).ArrayNum;
    do {
      this = (FMovieSceneChannel *)
             ((longlong)piVar4 + (longlong)param_1 + (-0x90 - (longlong)param_2));
      FMovieSceneChannel::FMovieSceneChannel(this,(FMovieSceneChannel *)(piVar4 + -0x24));
      this->_padding_ = (longlong)&___7FMovieSceneIntegerChannel__6B_;
      pFVar1 = (ForAnyElementType *)(piVar3 + -8);
      *(char *)(piVar3 + -10) = (char)piVar4[-10];
      *(undefined1 *)((longlong)piVar3 + -0x27) = *(undefined1 *)((longlong)piVar4 + -0x27);
      *(undefined1 *)((longlong)piVar3 + -0x26) = *(undefined1 *)((longlong)piVar4 + -0x26);
      pFVar1->Data = (FScriptContainerElement *)0x0;
      iVar2 = piVar4[-6];
      _Src = *(void **)(piVar4 + -8);
      piVar3[-6] = iVar2;
      if (iVar2 == 0) {
        piVar3[-5] = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,iVar2,0,pFVar1,iVar2,piVar3 + -5);
        memcpy(pFVar1->Data,_Src,(longlong)iVar2 << 2);
      }
      pFVar1 = (ForAnyElementType *)(piVar3 + -2);
      piVar3[-4] = piVar4[-4];
      *(char *)(piVar3 + -3) = (char)piVar4[-3];
      pFVar1->Data = (FScriptContainerElement *)0x0;
      iVar2 = *piVar4;
      _Src_00 = (((TArray<int,TSizedDefaultAllocator<32>_> *)(piVar4 + -2))->AllocatorInstance).Data
      ;
      *piVar3 = iVar2;
      if (iVar2 == 0) {
        piVar3[1] = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,iVar2,0,pFVar1,iVar2,piVar3 + 1);
        memcpy(pFVar1->Data,_Src_00,(longlong)iVar2 << 2);
      }
      piVar3[2] = 0;
      piVar3[3] = 0;
      piVar3[4] = 0;
      piVar3[5] = 0;
      piVar4 = piVar4 + 0x48;
      piVar3[10] = 0;
      piVar3[0xb] = 0;
      piVar3[0xc] = 0;
      piVar3[0xd] = 0x80;
      piVar3[0xe] = -1;
      piVar3[0xf] = 0;
      piVar3[0x10] = 0;
      piVar3[0x11] = 0;
      piVar3[0x12] = 0;
      piVar3[0x13] = 0;
      piVar3[0x18] = 0;
      piVar3[0x19] = 0;
      piVar3[0x1a] = 0;
      piVar3[0x1b] = 0x80;
      piVar3[0x1c] = -1;
      piVar3[0x1d] = 0;
      piVar3[0x20] = 0;
      piVar3[0x21] = 0;
      piVar3[0x22] = 0;
      piVar3 = piVar3 + 0x48;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<FMovieSceneStringChannel,FMovieSceneStringChannel,int> @ 14d0992a0

void __cdecl
ConstructItems<FMovieSceneStringChannel,FMovieSceneStringChannel,int>
          (void *param_1,FMovieSceneStringChannel *param_2,int param_3)

{
  ForAnyElementType *pFVar1;
  FMovieSceneChannel *this;
  int iVar2;
  void *_Src;
  FScriptContainerElement *pFVar3;
  int *piVar4;
  int *piVar5;
  
  if (param_3 != 0) {
    piVar4 = (int *)((longlong)param_1 + 0x74);
    piVar5 = &(param_2->Values).ArrayNum;
    do {
      this = (FMovieSceneChannel *)
             ((longlong)param_1 + (-0x80 - (longlong)param_2) + (longlong)piVar5);
      FMovieSceneChannel::FMovieSceneChannel(this,(FMovieSceneChannel *)(piVar5 + -0x20));
      this->_padding_ = (longlong)&___7FMovieSceneStringChannel__6B_;
      pFVar1 = (ForAnyElementType *)(piVar4 + -3);
      pFVar1->Data = (FScriptContainerElement *)0x0;
      iVar2 = piVar5[-4];
      _Src = *(void **)(piVar5 + -6);
      piVar4[-1] = iVar2;
      if (iVar2 == 0) {
        *piVar4 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,iVar2,0,pFVar1,iVar2,piVar4);
        memcpy(pFVar1->Data,_Src,(longlong)iVar2 << 2);
      }
      piVar4[1] = 0;
      piVar4[2] = 0;
      iVar2 = *piVar5;
      pFVar3 = (((TArray<FString,TSizedDefaultAllocator<32>_> *)(piVar5 + -2))->AllocatorInstance).
               Data;
      piVar4[3] = iVar2;
      if (iVar2 == 0) {
        piVar4[4] = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,iVar2,0,(ForAnyElementType *)(piVar4 + 1),iVar2,piVar4 + 4);
        ConstructItems<FString,FString,int>
                  (((ForAnyElementType *)(piVar4 + 1))->Data,(FString *)pFVar3,iVar2);
      }
      FString::FString((FString *)(piVar4 + 5),(FString *)(piVar5 + 2));
      *(char *)(piVar4 + 9) = (char)piVar5[6];
      piVar5 = piVar5 + 0x4a;
      piVar4[0xb] = 0;
      piVar4[0xc] = 0;
      piVar4[0xd] = 0;
      piVar4[0xe] = 0;
      piVar4[0x13] = 0;
      piVar4[0x14] = 0;
      piVar4[0x15] = 0;
      piVar4[0x16] = 0x80;
      piVar4[0x17] = -1;
      piVar4[0x18] = 0;
      piVar4[0x19] = 0;
      piVar4[0x1a] = 0;
      piVar4[0x1b] = 0;
      piVar4[0x1c] = 0;
      piVar4[0x21] = 0;
      piVar4[0x22] = 0;
      piVar4[0x23] = 0;
      piVar4[0x24] = 0x80;
      piVar4[0x25] = -1;
      piVar4[0x26] = 0;
      piVar4[0x29] = 0;
      piVar4[0x2a] = 0;
      piVar4[0x2b] = 0;
      piVar4 = piVar4 + 0x4a;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<TSharedPtr<IMovieSceneLiveLinkPropertyHandler,1>,TSharedPtr<IMovieSceneLiveLinkPropertyHandler,1>,int> @ 14d099470

void __cdecl
ConstructItems<TSharedPtr<IMovieSceneLiveLinkPropertyHandler,1>,TSharedPtr<IMovieSceneLiveLinkPropertyHandler,1>,int>
          (void *param_1,TSharedPtr<IMovieSceneLiveLinkPropertyHandler,1> *param_2,int param_3)

{
  TReferenceControllerBase<1> *pTVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_1 - (longlong)param_2;
    do {
      *(IMovieSceneLiveLinkPropertyHandler **)(lVar2 + (longlong)param_2) = param_2->Object;
      pTVar1 = (param_2->SharedReferenceCount).ReferenceController;
      *(TReferenceControllerBase<1> **)(lVar2 + 8 + (longlong)param_2) = pTVar1;
      if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
        UNLOCK();
      }
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// DefaultConstructItems<FLiveLinkPropertyData,int> @ 14d0994b0

void __cdecl DefaultConstructItems<FLiveLinkPropertyData,int>(void *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)((longlong)param_1 + 8);
    do {
      puVar1[-1] = 0;
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[2] = 0;
      puVar1[3] = 0;
      puVar1[4] = 0;
      puVar1[5] = 0;
      puVar1[6] = 0;
      puVar1[7] = 0;
      puVar1[8] = 0;
      puVar1[9] = 0;
      puVar1 = puVar1 + 0xb;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<FLiveLinkTransformKeys,int> @ 14d099500

void __cdecl DefaultConstructItems<FLiveLinkTransformKeys,int>(void *param_1,int param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = (longlong)param_1 + 0xc;
    do {
      *(undefined8 *)(lVar1 + -0xc) = 0;
      *(undefined8 *)(lVar1 + -4) = 0;
      *(undefined8 *)(lVar1 + 4) = 0;
      *(undefined8 *)(lVar1 + 0xc) = 0;
      *(undefined8 *)(lVar1 + 0x14) = 0;
      *(undefined8 *)(lVar1 + 0x1c) = 0;
      *(undefined8 *)(lVar1 + 0x24) = 0;
      *(undefined8 *)(lVar1 + 0x2c) = 0;
      *(undefined8 *)(lVar1 + 0x34) = 0;
      *(undefined8 *)(lVar1 + 0x3c) = 0;
      *(undefined8 *)(lVar1 + 0x44) = 0;
      *(undefined8 *)(lVar1 + 0x4c) = 0;
      *(undefined8 *)(lVar1 + 0x54) = 0;
      *(undefined8 *)(lVar1 + 0x5c) = 0;
      *(undefined8 *)(lVar1 + 100) = 0;
      *(undefined8 *)(lVar1 + 0x6c) = 0;
      *(undefined8 *)(lVar1 + 0x74) = 0;
      *(undefined8 *)(lVar1 + 0x7c) = 0;
      *(undefined8 *)(lVar1 + 0x84) = 0;
      *(undefined8 *)(lVar1 + 0x8c) = 0;
      lVar1 = lVar1 + 0xa0;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<FMovieSceneBoolChannel,int> @ 14d099580

void __cdecl DefaultConstructItems<FMovieSceneBoolChannel,int>(void *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)((longlong)param_1 + 0x10);
    do {
      puVar1[-1] = 0;
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[2] = 2;
      puVar1[3] = 0;
      puVar1[4] = 0;
      puVar1[5] = 0;
      puVar1[6] = 2;
      puVar1[7] = 0;
      puVar1[8] = 0;
      puVar1[9] = 0;
      puVar1[10] = 2;
      puVar1[-2] = &___7FMovieSceneBoolChannel__6B_;
      *(undefined2 *)(puVar1 + 0xb) = 0x404;
      puVar1[0xc] = 0;
      puVar1[0xd] = 0;
      *(undefined2 *)(puVar1 + 0xe) = 0;
      puVar1[0xf] = 0;
      puVar1[0x10] = 0;
      puVar1[0x11] = 0;
      puVar1[0x12] = 0;
      puVar1[0x15] = 0;
      *(undefined4 *)(puVar1 + 0x16) = 0;
      *(undefined4 *)((longlong)puVar1 + 0xb4) = 0x80;
      *(undefined4 *)(puVar1 + 0x17) = 0xffffffff;
      *(undefined4 *)((longlong)puVar1 + 0xbc) = 0;
      puVar1[0x18] = 0;
      puVar1[0x19] = 0;
      puVar1[0x1c] = 0;
      *(undefined4 *)(puVar1 + 0x1d) = 0;
      *(undefined4 *)((longlong)puVar1 + 0xec) = 0x80;
      *(undefined4 *)(puVar1 + 0x1e) = 0xffffffff;
      *(undefined4 *)((longlong)puVar1 + 0xf4) = 0;
      puVar1[0x20] = 0;
      *(undefined4 *)(puVar1 + 0x21) = 0;
      puVar1 = puVar1 + 0x24;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<FMovieSceneByteChannel,int> @ 14d099680

void __cdecl DefaultConstructItems<FMovieSceneByteChannel,int>(void *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)((longlong)param_1 + 0x10);
    do {
      puVar1[-1] = 0;
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[2] = 2;
      puVar1[3] = 0;
      puVar1[4] = 0;
      puVar1[5] = 0;
      puVar1[6] = 2;
      puVar1[7] = 0;
      puVar1[8] = 0;
      puVar1[9] = 0;
      puVar1[10] = 2;
      puVar1[-2] = &___7FMovieSceneByteChannel__6B_;
      *(undefined2 *)(puVar1 + 0xb) = 0x404;
      puVar1[0xc] = 0;
      puVar1[0xd] = 0;
      *(undefined2 *)(puVar1 + 0xe) = 0;
      puVar1[0xf] = 0;
      puVar1[0x10] = 0;
      puVar1[0x11] = 0;
      puVar1[0x14] = 0;
      puVar1[0x15] = 0;
      puVar1[0x1b] = 0;
      puVar1[0x1c] = 0;
      puVar1[0x20] = 0;
      puVar1[0x22] = 0;
      puVar1[0x12] = 0;
      puVar1[0x13] = 0;
      puVar1[0x16] = 0;
      *(undefined4 *)(puVar1 + 0x17) = 0;
      *(undefined4 *)((longlong)puVar1 + 0xbc) = 0x80;
      *(undefined4 *)(puVar1 + 0x18) = 0xffffffff;
      *(undefined4 *)((longlong)puVar1 + 0xc4) = 0;
      puVar1[0x19] = 0;
      puVar1[0x1a] = 0;
      puVar1[0x1d] = 0;
      *(undefined4 *)(puVar1 + 0x1e) = 0;
      *(undefined4 *)((longlong)puVar1 + 0xf4) = 0x80;
      *(undefined4 *)(puVar1 + 0x1f) = 0xffffffff;
      *(undefined4 *)((longlong)puVar1 + 0xfc) = 0;
      puVar1[0x21] = 0;
      puVar1 = puVar1 + 0x25;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<FMovieSceneFloatChannel,int> @ 14d0997c0

void __cdecl DefaultConstructItems<FMovieSceneFloatChannel,int>(void *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FMovieSceneFloatChannel::FMovieSceneFloatChannel(param_1);
    param_1 = (void *)((longlong)param_1 + 0x128);
  }
  return;
}

// DefaultConstructItems<FMovieSceneIntegerChannel,int> @ 14d099800

void __cdecl DefaultConstructItems<FMovieSceneIntegerChannel,int>(void *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)((longlong)param_1 + 0x10);
    do {
      puVar1[-1] = 0;
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[2] = 2;
      puVar1[3] = 0;
      puVar1[4] = 0;
      puVar1[5] = 0;
      puVar1[6] = 2;
      puVar1[7] = 0;
      puVar1[8] = 0;
      puVar1[9] = 0;
      puVar1[10] = 2;
      puVar1[-2] = &___7FMovieSceneIntegerChannel__6B_;
      *(undefined2 *)(puVar1 + 0xb) = 0x404;
      *(undefined1 *)((longlong)puVar1 + 0x5a) = 0;
      puVar1[0xc] = 0;
      puVar1[0xd] = 0;
      *(undefined4 *)(puVar1 + 0xe) = 0;
      *(undefined1 *)((longlong)puVar1 + 0x74) = 0;
      puVar1[0xf] = 0;
      puVar1[0x10] = 0;
      puVar1[0x11] = 0;
      puVar1[0x12] = 0;
      puVar1[0x15] = 0;
      *(undefined4 *)(puVar1 + 0x16) = 0;
      *(undefined4 *)((longlong)puVar1 + 0xb4) = 0x80;
      *(undefined4 *)(puVar1 + 0x17) = 0xffffffff;
      *(undefined4 *)((longlong)puVar1 + 0xbc) = 0;
      puVar1[0x18] = 0;
      puVar1[0x19] = 0;
      puVar1[0x1c] = 0;
      *(undefined4 *)(puVar1 + 0x1d) = 0;
      *(undefined4 *)((longlong)puVar1 + 0xec) = 0x80;
      *(undefined4 *)(puVar1 + 0x1e) = 0xffffffff;
      *(undefined4 *)((longlong)puVar1 + 0xf4) = 0;
      puVar1[0x20] = 0;
      *(undefined4 *)(puVar1 + 0x21) = 0;
      puVar1 = puVar1 + 0x24;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<FMovieSceneStringChannel,int> @ 14d099910

void __cdecl DefaultConstructItems<FMovieSceneStringChannel,int>(void *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)((longlong)param_1 + 0x10);
    do {
      puVar1[-1] = 0;
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[2] = 2;
      puVar1[3] = 0;
      puVar1[4] = 0;
      puVar1[5] = 0;
      puVar1[6] = 2;
      puVar1[7] = 0;
      puVar1[8] = 0;
      puVar1[9] = 0;
      puVar1[10] = 2;
      puVar1[0xb] = 0;
      puVar1[0xc] = 0;
      puVar1[0xd] = 0;
      puVar1[0xe] = 0;
      puVar1[-2] = &___7FMovieSceneStringChannel__6B_;
      puVar1[0xf] = 0;
      puVar1[0x10] = 0;
      *(undefined1 *)(puVar1 + 0x11) = 0;
      puVar1[0x12] = 0;
      puVar1[0x13] = 0;
      puVar1[0x16] = 0;
      *(undefined4 *)(puVar1 + 0x17) = 0;
      *(undefined4 *)((longlong)puVar1 + 0xbc) = 0x80;
      *(undefined4 *)(puVar1 + 0x18) = 0xffffffff;
      *(undefined4 *)((longlong)puVar1 + 0xc4) = 0;
      puVar1[0x19] = 0;
      puVar1[0x1a] = 0;
      puVar1[0x1d] = 0;
      *(undefined4 *)(puVar1 + 0x1e) = 0;
      *(undefined4 *)((longlong)puVar1 + 0xf4) = 0x80;
      *(undefined4 *)(puVar1 + 0x1f) = 0xffffffff;
      *(undefined4 *)((longlong)puVar1 + 0xfc) = 0;
      puVar1[0x21] = 0;
      *(undefined4 *)(puVar1 + 0x22) = 0;
      puVar1 = puVar1 + 0x25;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FLiveLinkPropertyKey<FString>,int> @ 14d099a20

void __cdecl
DestructItems<FLiveLinkPropertyKey<FString>,int>(FLiveLinkPropertyKey<FString> *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = (param_1->Value).Data.AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<FLiveLinkPropertyData,int> @ 14d099a60

void __cdecl DestructItems<FLiveLinkPropertyData,int>(FLiveLinkPropertyData *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  TArray<FMovieSceneByteChannel,TSizedDefaultAllocator<32>_> *pTVar2;
  
  if (param_2 != 0) {
    pTVar2 = &param_1->ByteChannel;
    do {
      DestructItems<FMovieSceneByteChannel,int>
                ((FMovieSceneByteChannel *)(pTVar2->AllocatorInstance).Data,pTVar2->ArrayNum);
      pFVar1 = (pTVar2->AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      DestructItems<FMovieSceneBoolChannel,int>
                ((FMovieSceneBoolChannel *)
                 (((TArray<FMovieSceneBoolChannel,TSizedDefaultAllocator<32>_> *)(pTVar2 + -1))->
                 AllocatorInstance).Data,
                 ((TArray<FMovieSceneBoolChannel,TSizedDefaultAllocator<32>_> *)(pTVar2 + -1))->
                 ArrayNum);
      pFVar1 = (((TArray<FMovieSceneBoolChannel,TSizedDefaultAllocator<32>_> *)(pTVar2 + -1))->
               AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      DestructItems<FMovieSceneIntegerChannel,int>
                ((FMovieSceneIntegerChannel *)
                 (((TArray<FMovieSceneIntegerChannel,TSizedDefaultAllocator<32>_> *)(pTVar2 + -2))->
                 AllocatorInstance).Data,
                 ((TArray<FMovieSceneIntegerChannel,TSizedDefaultAllocator<32>_> *)(pTVar2 + -2))->
                 ArrayNum);
      pFVar1 = (((TArray<FMovieSceneIntegerChannel,TSizedDefaultAllocator<32>_> *)(pTVar2 + -2))->
               AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      DestructItems<FMovieSceneStringChannel,int>
                ((FMovieSceneStringChannel *)
                 (((TArray<FMovieSceneStringChannel,TSizedDefaultAllocator<32>_> *)(pTVar2 + -3))->
                 AllocatorInstance).Data,
                 ((TArray<FMovieSceneStringChannel,TSizedDefaultAllocator<32>_> *)(pTVar2 + -3))->
                 ArrayNum);
      pFVar1 = (((TArray<FMovieSceneStringChannel,TSizedDefaultAllocator<32>_> *)(pTVar2 + -3))->
               AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      DestructItems<FMovieSceneFloatChannel,int>
                ((FMovieSceneFloatChannel *)
                 (((TArray<FMovieSceneFloatChannel,TSizedDefaultAllocator<32>_> *)(pTVar2 + -4))->
                 AllocatorInstance).Data,
                 ((TArray<FMovieSceneFloatChannel,TSizedDefaultAllocator<32>_> *)(pTVar2 + -4))->
                 ArrayNum);
      pFVar1 = (((TArray<FMovieSceneFloatChannel,TSizedDefaultAllocator<32>_> *)(pTVar2 + -4))->
               AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pTVar2 = (TArray<FMovieSceneByteChannel,TSizedDefaultAllocator<32>_> *)
               ((longlong)(pTVar2 + 5) + 8);
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FLiveLinkSubSectionData,int> @ 14d099b20

void __cdecl
DestructItems<FLiveLinkSubSectionData,int>(FLiveLinkSubSectionData *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    DestructItems<FLiveLinkPropertyData,int>
              ((FLiveLinkPropertyData *)(param_1->Properties).AllocatorInstance.Data,
               (param_1->Properties).ArrayNum);
    pFVar1 = (param_1->Properties).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<FLiveLinkTransformKeys,int> @ 14d099b70

void __cdecl DestructItems<FLiveLinkTransformKeys,int>(FLiveLinkTransformKeys *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  TArray<FMovieSceneFloatValue,TSizedDefaultAllocator<32>_> *pTVar2;
  
  if (param_2 != 0) {
    pTVar2 = &param_1->ScaleY;
    do {
      pFVar1 = pTVar2[1].AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = (pTVar2->AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = pTVar2[-1].AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = pTVar2[-2].AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = pTVar2[-3].AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = pTVar2[-4].AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = pTVar2[-5].AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = pTVar2[-6].AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = pTVar2[-7].AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = (((FLiveLinkTransformKeys *)(pTVar2 + -8))->Times).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pTVar2 = pTVar2 + 10;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FMovieSceneBoolChannel,int> @ 14d099c40

void __cdecl DestructItems<FMovieSceneBoolChannel,int>(FMovieSceneBoolChannel *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)&(param_1->KeyHandles).field_0x78;
    do {
      *(undefined4 *)(puVar1 + 1) = 0;
      if ((void *)*puVar1 != (void *)0x0) {
        FMemory::Free((void *)*puVar1);
      }
      TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)(puVar1 + -8));
      TSparseArray<FKeyHandle,FDefaultSparseArrayAllocator>::
      ~TSparseArray<FKeyHandle,FDefaultSparseArrayAllocator>
                ((TSparseArray<FKeyHandle,FDefaultSparseArrayAllocator> *)(puVar1 + -0xf));
      if ((void *)puVar1[-0x11] != (void *)0x0) {
        FMemory::Free((void *)puVar1[-0x11]);
      }
      if ((void *)puVar1[-0x14] != (void *)0x0) {
        FMemory::Free((void *)puVar1[-0x14]);
      }
      FMovieSceneChannel::~FMovieSceneChannel((FMovieSceneChannel *)(puVar1 + -0x22));
      puVar1 = puVar1 + 0x24;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FMovieSceneByteChannel,int> @ 14d099ce0

void __cdecl DestructItems<FMovieSceneByteChannel,int>(FMovieSceneByteChannel *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)&(param_1->KeyHandles).field_0x78;
    do {
      *(undefined4 *)(puVar1 + 1) = 0;
      if ((void *)*puVar1 != (void *)0x0) {
        FMemory::Free((void *)*puVar1);
      }
      TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)(puVar1 + -8));
      TSparseArray<FKeyHandle,FDefaultSparseArrayAllocator>::
      ~TSparseArray<FKeyHandle,FDefaultSparseArrayAllocator>
                ((TSparseArray<FKeyHandle,FDefaultSparseArrayAllocator> *)(puVar1 + -0xf));
      if ((void *)puVar1[-0x12] != (void *)0x0) {
        FMemory::Free((void *)puVar1[-0x12]);
      }
      if ((void *)puVar1[-0x15] != (void *)0x0) {
        FMemory::Free((void *)puVar1[-0x15]);
      }
      FMovieSceneChannel::~FMovieSceneChannel((FMovieSceneChannel *)(puVar1 + -0x23));
      puVar1 = puVar1 + 0x25;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FMovieSceneIntegerChannel,int> @ 14d099d80

void __cdecl
DestructItems<FMovieSceneIntegerChannel,int>(FMovieSceneIntegerChannel *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)&(param_1->KeyHandles).field_0x78;
    do {
      *(undefined4 *)(puVar1 + 1) = 0;
      if ((void *)*puVar1 != (void *)0x0) {
        FMemory::Free((void *)*puVar1);
      }
      TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)(puVar1 + -8));
      TSparseArray<FKeyHandle,FDefaultSparseArrayAllocator>::
      ~TSparseArray<FKeyHandle,FDefaultSparseArrayAllocator>
                ((TSparseArray<FKeyHandle,FDefaultSparseArrayAllocator> *)(puVar1 + -0xf));
      if ((void *)puVar1[-0x11] != (void *)0x0) {
        FMemory::Free((void *)puVar1[-0x11]);
      }
      if ((void *)puVar1[-0x14] != (void *)0x0) {
        FMemory::Free((void *)puVar1[-0x14]);
      }
      FMovieSceneChannel::~FMovieSceneChannel((FMovieSceneChannel *)(puVar1 + -0x22));
      puVar1 = puVar1 + 0x24;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FMovieSceneStringChannel,int> @ 14d099e20

void __cdecl
DestructItems<FMovieSceneStringChannel,int>(FMovieSceneStringChannel *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)&(param_1->KeyHandles).field_0x78;
    do {
      *(undefined4 *)(puVar1 + 1) = 0;
      if ((void *)*puVar1 != (void *)0x0) {
        FMemory::Free((void *)*puVar1);
      }
      TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)(puVar1 + -8));
      TSparseArray<FKeyHandle,FDefaultSparseArrayAllocator>::
      ~TSparseArray<FKeyHandle,FDefaultSparseArrayAllocator>
                ((TSparseArray<FKeyHandle,FDefaultSparseArrayAllocator> *)(puVar1 + -0xf));
      if ((void *)puVar1[-0x12] != (void *)0x0) {
        FMemory::Free((void *)puVar1[-0x12]);
      }
      DestructItems<FString,int>((FString *)puVar1[-0x14],*(int *)(puVar1 + -0x13));
      if ((void *)puVar1[-0x14] != (void *)0x0) {
        FMemory::Free((void *)puVar1[-0x14]);
      }
      if ((void *)puVar1[-0x16] != (void *)0x0) {
        FMemory::Free((void *)puVar1[-0x16]);
      }
      FMovieSceneChannel::~FMovieSceneChannel((FMovieSceneChannel *)(puVar1 + -0x23));
      puVar1 = puVar1 + 0x25;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<TArray<FLiveLinkPropertyKey<unsigned_char>,TSizedDefaultAllocator<32>_>,int> @ 14d099ee0

void __cdecl
DestructItems<TArray<FLiveLinkPropertyKey<unsigned_char>,TSizedDefaultAllocator<32>_>,int>
          (TArray<FLiveLinkPropertyKey<unsigned_char>,TSizedDefaultAllocator<32>_> *param_1,
          int param_2)

{
  FScriptContainerElement *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = (param_1->AllocatorInstance).Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<TArray<FLiveLinkPropertyKey<int>,TSizedDefaultAllocator<32>_>,int> @ 14d099f20

void __cdecl
DestructItems<TArray<FLiveLinkPropertyKey<int>,TSizedDefaultAllocator<32>_>,int>
          (TArray<FLiveLinkPropertyKey<int>,TSizedDefaultAllocator<32>_> *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = (param_1->AllocatorInstance).Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<TArray<FLiveLinkPropertyKey<float>,TSizedDefaultAllocator<32>_>,int> @ 14d099f60

void __cdecl
DestructItems<TArray<FLiveLinkPropertyKey<float>,TSizedDefaultAllocator<32>_>,int>
          (TArray<FLiveLinkPropertyKey<float>,TSizedDefaultAllocator<32>_> *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = (param_1->AllocatorInstance).Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<TArray<FLiveLinkPropertyKey<UE::Math::TVector<double>_>,TSizedDefaultAllocator<32>_>,int> @ 14d099fa0

void __cdecl
DestructItems<TArray<FLiveLinkPropertyKey<UE::Math::TVector<double>_>,TSizedDefaultAllocator<32>_>,int>
          (TArray<FLiveLinkPropertyKey<UE::Math::TVector<double>_>,TSizedDefaultAllocator<32>_>
           *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = (param_1->AllocatorInstance).Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<TArray<FLiveLinkPropertyKey<FColor>,TSizedDefaultAllocator<32>_>,int> @ 14d099fe0

void __cdecl
DestructItems<TArray<FLiveLinkPropertyKey<FColor>,TSizedDefaultAllocator<32>_>,int>
          (TArray<FLiveLinkPropertyKey<FColor>,TSizedDefaultAllocator<32>_> *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = (param_1->AllocatorInstance).Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<TArray<FLiveLinkPropertyKey<FString>,TSizedDefaultAllocator<32>_>,int> @ 14d09a020

void __cdecl
DestructItems<TArray<FLiveLinkPropertyKey<FString>,TSizedDefaultAllocator<32>_>,int>
          (TArray<FLiveLinkPropertyKey<FString>,TSizedDefaultAllocator<32>_> *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    DestructItems<FLiveLinkPropertyKey<FString>,int>
              ((FLiveLinkPropertyKey<FString> *)(param_1->AllocatorInstance).Data,param_1->ArrayNum)
    ;
    pFVar1 = (param_1->AllocatorInstance).Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<TArray<FLiveLinkPropertyKey<__int64>,TSizedDefaultAllocator<32>_>,int> @ 14d09a070

void __cdecl
DestructItems<TArray<FLiveLinkPropertyKey<__int64>,TSizedDefaultAllocator<32>_>,int>
          (TArray<FLiveLinkPropertyKey<__int64>,TSizedDefaultAllocator<32>_> *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = (param_1->AllocatorInstance).Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<TArray<FLiveLinkPropertyKey<bool>,TSizedDefaultAllocator<32>_>,int> @ 14d09a0b0

void __cdecl
DestructItems<TArray<FLiveLinkPropertyKey<bool>,TSizedDefaultAllocator<32>_>,int>
          (TArray<FLiveLinkPropertyKey<bool>,TSizedDefaultAllocator<32>_> *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = (param_1->AllocatorInstance).Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<TSharedPtr<IMovieSceneLiveLinkPropertyHandler,1>,int> @ 14d09a0f0

void __cdecl
DestructItems<TSharedPtr<IMovieSceneLiveLinkPropertyHandler,1>,int>
          (TSharedPtr<IMovieSceneLiveLinkPropertyHandler,1> *param_1,int param_2)

{
  FSharedReferencer<1> *pFVar1;
  
  if (param_2 != 0) {
    pFVar1 = &param_1->SharedReferenceCount;
    do {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pFVar1->ReferenceController);
      pFVar1 = pFVar1 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// GetTypeName<UMovieSceneLiveLinkSection_const_> @ 14d09c3f0

FString * __cdecl GetTypeName<UMovieSceneLiveLinkSection_const_>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = UMovieSceneLiveLinkSection::StaticClass();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// InternalConstructor<UMovieSceneLiveLinkSection> @ 14d09c670

void __cdecl InternalConstructor<UMovieSceneLiveLinkSection>(FObjectInitializer *param_1)

{
  UMovieSceneSection *this;
  
  this = (UMovieSceneSection *)param_1->Obj;
  if (this != (UMovieSceneSection *)0x0) {
    UMovieSceneSection::UMovieSceneSection(this,param_1);
    this->_padding_ = (longlong)&___7UMovieSceneLiveLinkSection__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined1 *)&this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    FLiveLinkFrameData::FLiveLinkFrameData((FLiveLinkFrameData *)&this[1].EvalOptions);
    this[1].ChannelProxy.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    *(undefined8 *)&this[1].ChannelProxyType = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    (this->BlendType).BlendType = Absolute;
    (this->BlendType).bIsValid = true;
  }
  return;
}

// InternalConstructor<UMovieSceneLiveLinkSubSection> @ 14d09c760

void __cdecl InternalConstructor<UMovieSceneLiveLinkSubSection>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UMovieSceneLiveLinkSubSection__6B_;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined8 *)&this[1].field_0x18 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
  }
  return;
}

// InternalConstructor<UMovieSceneLiveLinkSubSectionAnimation> @ 14d09c7b0

void __cdecl
InternalConstructor<UMovieSceneLiveLinkSubSectionAnimation>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined8 *)&this[1].field_0x18 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
    *(undefined ***)this = &___7UMovieSceneLiveLinkSubSectionAnimation__6B_;
    *(undefined8 *)(this + 2) = 0;
    *(undefined8 *)&this[2].field_0x8 = 0;
  }
  return;
}

// InternalConstructor<UMovieSceneLiveLinkSubSectionBasicRole> @ 14d09c800

void __cdecl
InternalConstructor<UMovieSceneLiveLinkSubSectionBasicRole>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined8 *)&this[1].field_0x18 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
    *(undefined ***)this = &___7UMovieSceneLiveLinkSubSectionBasicRole__6B_;
    *(undefined8 *)(this + 2) = 0;
    *(undefined8 *)&this[2].field_0x8 = 0;
  }
  return;
}

// InternalConstructor<UMovieSceneLiveLinkSubSectionProperties> @ 14d09c850

void __cdecl
InternalConstructor<UMovieSceneLiveLinkSubSectionProperties>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined8 *)&this[1].field_0x18 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
    *(undefined ***)this = &___7UMovieSceneLiveLinkSubSectionProperties__6B_;
    *(undefined8 *)(this + 2) = 0;
    *(undefined8 *)&this[2].field_0x8 = 0;
  }
  return;
}

// InternalConstructor<UMovieSceneLiveLinkTrack> @ 14d09c8a0

void __cdecl InternalConstructor<UMovieSceneLiveLinkTrack>(FObjectInitializer *param_1)

{
  UMovieScenePropertyTrack *this;
  FMovieSceneBlendTypeField FVar1;
  undefined7 extraout_var;
  
  this = (UMovieScenePropertyTrack *)param_1->Obj;
  if (this != (UMovieScenePropertyTrack *)0x0) {
    UMovieScenePropertyTrack::UMovieScenePropertyTrack(this,param_1);
    this[1]._padding_ = 0;
    this->_padding_ =
         (longlong)&UMovieSceneLiveLinkTrack::_vftable__for__UMovieSceneDecorationContainerObject__;
    this->_padding_ =
         (longlong)&UMovieSceneLiveLinkTrack::_vftable__for__IMovieSceneTrackVirtualAPI__;
    this[1]._padding_ = (longlong)&___7UMovieSceneLiveLinkTrack__6B_;
    FVar1 = FMovieSceneBlendTypeField::All();
    *(undefined1 *)&this->_padding_ = *(undefined1 *)CONCAT71(extraout_var,FVar1.BlendTypeField);
  }
  return;
}

// InternalVTableHelperCtorCaller<UMovieSceneLiveLinkSection> @ 14d09c910

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UMovieSceneLiveLinkSection>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UMovieSceneSection *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMovieSceneLiveLinkSection::GetPrivateStaticClass();
  this = (UMovieSceneSection *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UMovieSceneSection *)0x0) {
    UMovieSceneSection::UMovieSceneSection(this,param_1);
    this->_padding_ = (longlong)&___7UMovieSceneLiveLinkSection__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined1 *)&this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    FLiveLinkFrameData::FLiveLinkFrameData((FLiveLinkFrameData *)&this[1].EvalOptions);
    this[1].ChannelProxy.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    *(undefined8 *)&this[1].ChannelProxyType = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMovieSceneLiveLinkSubSection> @ 14d09ca70

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UMovieSceneLiveLinkSubSection>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMovieSceneLiveLinkSubSection::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UMovieSceneLiveLinkSubSection__6B_;
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    *(undefined8 *)&pUVar1[1].field_0x18 = 0;
    *(undefined8 *)&pUVar1[1].field_0x20 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMovieSceneLiveLinkSubSectionAnimation> @ 14d09cb30

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UMovieSceneLiveLinkSubSectionAnimation>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMovieSceneLiveLinkSubSectionAnimation::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined ***)pUVar1 = &___7UMovieSceneLiveLinkSubSectionAnimation__6B_;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    *(undefined8 *)&pUVar1[1].field_0x18 = 0;
    *(undefined8 *)&pUVar1[1].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 2) = 0;
    *(undefined8 *)&pUVar1[2].field_0x8 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMovieSceneLiveLinkSubSectionBasicRole> @ 14d09cc00

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UMovieSceneLiveLinkSubSectionBasicRole>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMovieSceneLiveLinkSubSectionBasicRole::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined ***)pUVar1 = &___7UMovieSceneLiveLinkSubSectionBasicRole__6B_;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    *(undefined8 *)&pUVar1[1].field_0x18 = 0;
    *(undefined8 *)&pUVar1[1].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 2) = 0;
    *(undefined8 *)&pUVar1[2].field_0x8 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMovieSceneLiveLinkSubSectionProperties> @ 14d09ccd0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UMovieSceneLiveLinkSubSectionProperties>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMovieSceneLiveLinkSubSectionProperties::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined ***)pUVar1 = &___7UMovieSceneLiveLinkSubSectionProperties__6B_;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    *(undefined8 *)&pUVar1[1].field_0x18 = 0;
    *(undefined8 *)&pUVar1[1].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 2) = 0;
    *(undefined8 *)&pUVar1[2].field_0x8 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMovieSceneLiveLinkTrack> @ 14d09cda0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UMovieSceneLiveLinkTrack>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UMovieScenePropertyTrack *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMovieSceneLiveLinkTrack::GetPrivateStaticClass();
  this = (UMovieScenePropertyTrack *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UMovieScenePropertyTrack *)0x0) {
    UMovieScenePropertyTrack::UMovieScenePropertyTrack(this,param_1);
    this[1]._padding_ = 0;
    this->_padding_ =
         (longlong)&UMovieSceneLiveLinkTrack::_vftable__for__UMovieSceneDecorationContainerObject__;
    this->_padding_ =
         (longlong)&UMovieSceneLiveLinkTrack::_vftable__for__IMovieSceneTrackVirtualAPI__;
    this[1]._padding_ = (longlong)&___7UMovieSceneLiveLinkTrack__6B_;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// MakeShared<FLiveLinkBaseDataStruct<FLiveLinkBaseStaticData>,1> @ 14d09ce70

TSharedRef<FLiveLinkBaseDataStruct<FLiveLinkBaseStaticData>,1> * __cdecl
MakeShared<FLiveLinkBaseDataStruct<FLiveLinkBaseStaticData>,1>
          (TSharedRef<FLiveLinkBaseDataStruct<FLiveLinkBaseStaticData>,1> *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TSharedRef<FLiveLinkBaseDataStruct<FLiveLinkBaseStaticData>,1> *pTVar4;
  
  pTVar3 = operator_new(0x38);
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    __return_storage_ptr__->Object = (FLiveLinkBaseDataStruct<FLiveLinkBaseStaticData> *)0x10;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__FLiveLinkBaseDataStruct_UFLiveLinkBaseStaticData_____00_SharedPointerInternals__6B_
    ;
    ((FStructOnScope *)(pTVar3 + 1))->_padding_ = 0;
    pTVar3[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[1].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[2]._padding_ = 0;
    pTVar3[2].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[2].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[3]._padding_ = 0;
    FStructOnScope::FStructOnScope((FStructOnScope *)(pTVar3 + 1));
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar3;
    __return_storage_ptr__->Object =
         (FLiveLinkBaseDataStruct<FLiveLinkBaseStaticData> *)(pTVar3 + 1);
    if (pTVar3 + 1 == (TReferenceControllerBase<1> *)0x0) {
      bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TSharedRef<FLiveLinkBaseDataStruct<FLiveLinkBaseStaticData>,1> *)(*pcVar1)();
        return pTVar4;
      }
    }
  }
  return __return_storage_ptr__;
}

// NewObject<UMovieSceneLiveLinkSubSection> @ 14d09cf30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UMovieSceneLiveLinkSubSection * __cdecl
NewObject<UMovieSceneLiveLinkSubSection>
          (UObject *param_1,UClass *param_2,FName param_3,EObjectFlags param_4,UObject *param_5,
          bool param_6,FObjectInstancingGraph *param_7,UPackage *param_8)

{
  UClass *pUVar1;
  UMovieSceneLiveLinkSubSection *pUVar2;
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
  pUVar1 = UMovieSceneLiveLinkSubSection::StaticClass();
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
  pUVar2 = (UMovieSceneLiveLinkSubSection *)
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

// NewObject<UMovieSceneLiveLinkSubSectionAnimation> @ 14d09d030

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UMovieSceneLiveLinkSubSectionAnimation * __cdecl
NewObject<UMovieSceneLiveLinkSubSectionAnimation>
          (UObject *param_1,UClass *param_2,FName param_3,EObjectFlags param_4,UObject *param_5,
          bool param_6,FObjectInstancingGraph *param_7,UPackage *param_8)

{
  UClass *pUVar1;
  UMovieSceneLiveLinkSubSectionAnimation *pUVar2;
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
  pUVar1 = UMovieSceneLiveLinkSubSectionAnimation::StaticClass();
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
  pUVar2 = (UMovieSceneLiveLinkSubSectionAnimation *)
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

// NewObject<UMovieSceneLiveLinkSubSectionBasicRole> @ 14d09d130

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UMovieSceneLiveLinkSubSectionBasicRole * __cdecl
NewObject<UMovieSceneLiveLinkSubSectionBasicRole>
          (UObject *param_1,UClass *param_2,FName param_3,EObjectFlags param_4,UObject *param_5,
          bool param_6,FObjectInstancingGraph *param_7,UPackage *param_8)

{
  UClass *pUVar1;
  UMovieSceneLiveLinkSubSectionBasicRole *pUVar2;
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
  pUVar1 = UMovieSceneLiveLinkSubSectionBasicRole::StaticClass();
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
  pUVar2 = (UMovieSceneLiveLinkSubSectionBasicRole *)
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

// NewObject<UMovieSceneLiveLinkSubSectionProperties> @ 14d09d230

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UMovieSceneLiveLinkSubSectionProperties * __cdecl
NewObject<UMovieSceneLiveLinkSubSectionProperties>
          (UObject *param_1,UClass *param_2,FName param_3,EObjectFlags param_4,UObject *param_5,
          bool param_6,FObjectInstancingGraph *param_7,UPackage *param_8)

{
  UClass *pUVar1;
  UMovieSceneLiveLinkSubSectionProperties *pUVar2;
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
  pUVar1 = UMovieSceneLiveLinkSubSectionProperties::StaticClass();
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
  pUVar2 = (UMovieSceneLiveLinkSubSectionProperties *)
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

// NewObject<UMovieSceneSection> @ 14d09d330

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UMovieSceneSection * __cdecl
NewObject<UMovieSceneSection>
          (UObject *param_1,UClass *param_2,FName param_3,EObjectFlags param_4,UObject *param_5,
          bool param_6,FObjectInstancingGraph *param_7,UPackage *param_8)

{
  UClass *pUVar1;
  UMovieSceneSection *pUVar2;
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
  pUVar1 = Z_Construct_UClass_UMovieSceneSection_NoRegister();
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
  pUVar2 = (UMovieSceneSection *)
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

// operator<< @ 14d09f2f0

FArchive * __cdecl
operator<<(FArchive *param_1,FLiveLinkBaseDataStruct<FLiveLinkBaseStaticData> *param_2)

{
  undefined8 *puVar1;
  bool bVar2;
  FWeakObjectPtr FVar3;
  int iVar4;
  size_t sVar5;
  UClass *pUVar6;
  UScriptStruct *pUVar7;
  UScriptStruct *pUVar8;
  void *pvVar9;
  FString *pFVar10;
  ForAnyElementType FVar11;
  FWeakObjectPtr local_res8;
  UScriptStruct *local_res18 [2];
  FString local_58;
  FString local_48;
  TStringView<wchar_t> local_38;
  
  if ((param_1->field_0x28 & 1) == 0) {
    local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_58.Data.ArrayNum = 0;
    local_58.Data.ArrayMax = 0;
    pUVar7 = (UScriptStruct *)(**(code **)((param_2->WrappedStruct)._padding_ + 0x20))(param_2);
    if (pUVar7 != (UScriptStruct *)0x0) {
      pUVar6 = Z_Construct_UClass_UScriptStruct_NoRegister();
      iVar4 = (int)pUVar6->_padding_;
      if ((iVar4 <= *(int *)(pUVar7->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar7->_padding_ + 0x30) + (longlong)iVar4 * 8) ==
          &pUVar6->_padding_)) {
        pFVar10 = UObjectBaseUtility::GetPathName
                            ((UObjectBaseUtility *)pUVar7,(FString *)&local_38,(UObject *)0x0);
        if (&local_58 != pFVar10) {
          if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_58.Data.AllocatorInstance.Data);
          }
          local_58.Data.AllocatorInstance.Data = (pFVar10->Data).AllocatorInstance.Data;
          (pFVar10->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_58.Data.ArrayNum = (pFVar10->Data).ArrayNum;
          local_58.Data.ArrayMax = (pFVar10->Data).ArrayMax;
          (pFVar10->Data).ArrayNum = 0;
          (pFVar10->Data).ArrayMax = 0;
        }
        if ((FScriptContainerElement *)local_38.DataPtr != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38.DataPtr);
        }
        operator<<(param_1,&local_58);
        pvVar9 = (void *)(**(code **)((param_2->WrappedStruct)._padding_ + 0x18))(param_2);
        UScriptStruct::SerializeItem(pUVar7,param_1,pvVar9,(void *)0x0);
        FVar11.Data = local_58.Data.AllocatorInstance.Data;
        goto LAB_14d09f517;
      }
    }
    operator<<(param_1,&local_58);
    FVar11.Data = local_58.Data.AllocatorInstance.Data;
    goto LAB_14d09f517;
  }
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  operator<<(param_1,&local_48);
  FVar11.Data = local_48.Data.AllocatorInstance.Data;
  if (local_48.Data.ArrayNum < 2) goto LAB_14d09f517;
  if (local_48.Data.ArrayNum == 0) {
    local_38.DataPtr = L"";
LAB_14d09f34d:
    sVar5 = wcslen(local_38.DataPtr);
    iVar4 = (int)sVar5;
  }
  else {
    iVar4 = 0;
    local_38.DataPtr = (wchar_t *)local_48.Data.AllocatorInstance.Data;
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) goto LAB_14d09f34d;
  }
  local_38.Size = iVar4;
  pUVar6 = Z_Construct_UClass_UScriptStruct_NoRegister();
  pUVar7 = (UScriptStruct *)StaticFindObject(pUVar6,(UObject *)0x0,&local_38,None);
  if ((pUVar7 != (UScriptStruct *)0x0) &&
     (pUVar8 = FLiveLinkBaseStaticData::StaticStruct(), pUVar8 != (UScriptStruct *)0x0)) {
    iVar4 = (int)pUVar8->_padding_;
    if (((int)pUVar7->_padding_ < iVar4) ||
       ((longlong *)*(undefined1 **)(pUVar7->_padding_ + (longlong)iVar4 * 8) != &pUVar8->_padding_)
       ) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)pUVar7);
      }
      local_res8.ObjectIndex = 0;
      local_res8.ObjectSerialNumber = 0;
      local_res18[0] = pUVar7;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)pUVar7);
      }
      FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)local_res18);
      FVar3 = local_res8;
      (**(code **)((param_2->WrappedStruct)._padding_ + 0x40))(param_2);
      puVar1 = (undefined8 *)(param_2->WrappedStruct)._padding_;
      (param_2->WrappedStruct).ScriptStruct.WeakPtr = FVar3;
      (*(code *)*puVar1)(param_2);
      pvVar9 = (void *)(**(code **)((param_2->WrappedStruct)._padding_ + 0x18))(param_2);
      UScriptStruct::SerializeItem(pUVar7,param_1,pvVar9,(void *)0x0);
      FVar11.Data = local_48.Data.AllocatorInstance.Data;
      goto LAB_14d09f517;
    }
  }
  FArchiveState::SetError((FArchiveState *)param_1);
  FVar11.Data = local_48.Data.AllocatorInstance.Data;
LAB_14d09f517:
  if (FVar11.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar11.Data);
  }
  return param_1;
}

// `vector_deleting_destructor'`adjustor{328}' @ 14d09f610

/* [thunk]:public: virtual void * __ptr64 __cdecl UMovieSceneLiveLinkTrack::`vector deleting
   destructor'`adjustor{328}' (unsigned int) __ptr64 */

void * __thiscall
UMovieSceneLiveLinkTrack::_vector_deleting_destructor__adjustor_328__
          (UMovieSceneLiveLinkTrack *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UMovieSceneLiveLinkTrack *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `scalar_deleting_destructor' @ 14d09f630

void * __thiscall
FMovieSceneLiveLinkPropertyHandler<unsigned_char>::_scalar_deleting_destructor_
          (FMovieSceneLiveLinkPropertyHandler<unsigned_char> *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<TArray<FLiveLinkPropertyKey<unsigned_char>,TSizedDefaultAllocator<32>_>,int>
            ((TArray<FLiveLinkPropertyKey<unsigned_char>,TSizedDefaultAllocator<32>_> *)
             (this->Keys).AllocatorInstance.Data,(this->Keys).ArrayNum);
  pFVar1 = (this->Keys).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->PropertyBinding).PropertyPath.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d09f690

void * __thiscall
FMovieSceneLiveLinkPropertyHandler<int>::_scalar_deleting_destructor_
          (FMovieSceneLiveLinkPropertyHandler<int> *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<TArray<FLiveLinkPropertyKey<int>,TSizedDefaultAllocator<32>_>,int>
            ((TArray<FLiveLinkPropertyKey<int>,TSizedDefaultAllocator<32>_> *)
             (this->Keys).AllocatorInstance.Data,(this->Keys).ArrayNum);
  pFVar1 = (this->Keys).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->PropertyBinding).PropertyPath.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d09f6f0

void * __thiscall
FMovieSceneLiveLinkPropertyHandler<float>::_scalar_deleting_destructor_
          (FMovieSceneLiveLinkPropertyHandler<float> *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<TArray<FLiveLinkPropertyKey<float>,TSizedDefaultAllocator<32>_>,int>
            ((TArray<FLiveLinkPropertyKey<float>,TSizedDefaultAllocator<32>_> *)
             (this->Keys).AllocatorInstance.Data,(this->Keys).ArrayNum);
  pFVar1 = (this->Keys).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->PropertyBinding).PropertyPath.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d09f750

void * __thiscall
FMovieSceneLiveLinkPropertyHandler<UE::Math::TVector<double>_>::_scalar_deleting_destructor_
          (FMovieSceneLiveLinkPropertyHandler<UE::Math::TVector<double>_> *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<TArray<FLiveLinkPropertyKey<UE::Math::TVector<double>_>,TSizedDefaultAllocator<32>_>,int>
            ((TArray<FLiveLinkPropertyKey<UE::Math::TVector<double>_>,TSizedDefaultAllocator<32>_> *
             )(this->Keys).AllocatorInstance.Data,(this->Keys).ArrayNum);
  pFVar1 = (this->Keys).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->PropertyBinding).PropertyPath.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d09f7b0

void * __thiscall
FMovieSceneLiveLinkPropertyHandler<FColor>::_scalar_deleting_destructor_
          (FMovieSceneLiveLinkPropertyHandler<FColor> *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<TArray<FLiveLinkPropertyKey<FColor>,TSizedDefaultAllocator<32>_>,int>
            ((TArray<FLiveLinkPropertyKey<FColor>,TSizedDefaultAllocator<32>_> *)
             (this->Keys).AllocatorInstance.Data,(this->Keys).ArrayNum);
  pFVar1 = (this->Keys).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->PropertyBinding).PropertyPath.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d09f810

void * __thiscall
FMovieSceneLiveLinkPropertyHandler<FString>::_scalar_deleting_destructor_
          (FMovieSceneLiveLinkPropertyHandler<FString> *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<TArray<FLiveLinkPropertyKey<FString>,TSizedDefaultAllocator<32>_>,int>
            ((TArray<FLiveLinkPropertyKey<FString>,TSizedDefaultAllocator<32>_> *)
             (this->Keys).AllocatorInstance.Data,(this->Keys).ArrayNum);
  pFVar1 = (this->Keys).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->PropertyBinding).PropertyPath.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d09f870

void * __thiscall
FMovieSceneLiveLinkPropertyHandler<bool>::_scalar_deleting_destructor_
          (FMovieSceneLiveLinkPropertyHandler<bool> *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<TArray<FLiveLinkPropertyKey<bool>,TSizedDefaultAllocator<32>_>,int>
            ((TArray<FLiveLinkPropertyKey<bool>,TSizedDefaultAllocator<32>_> *)
             (this->Keys).AllocatorInstance.Data,(this->Keys).ArrayNum);
  pFVar1 = (this->Keys).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->PropertyBinding).PropertyPath.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d09f8d0

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<FLiveLinkBaseDataStruct<FLiveLinkBaseStaticData>,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FLiveLinkBaseDataStruct<FLiveLinkBaseStaticData>,1> *this,
          uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d09f910

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<FMovieSceneLiveLinkPropertyHandler<unsigned_char>,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FMovieSceneLiveLinkPropertyHandler<unsigned_char>,1> *this,
          uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d09f950

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FMovieSceneLiveLinkPropertyHandler<int>,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FMovieSceneLiveLinkPropertyHandler<int>,1> *this,
          uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d09f990

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FMovieSceneLiveLinkPropertyHandler<float>,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FMovieSceneLiveLinkPropertyHandler<float>,1> *this,
          uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d09f9d0

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<FMovieSceneLiveLinkPropertyHandler<UE::Math::TVector<double>_>,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FMovieSceneLiveLinkPropertyHandler<UE::Math::TVector<double>_>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d09fa10

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FMovieSceneLiveLinkPropertyHandler<FColor>,1>
::_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FMovieSceneLiveLinkPropertyHandler<FColor>,1> *this,
          uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d09fa50

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FMovieSceneLiveLinkPropertyHandler<FString>,1>
::_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FMovieSceneLiveLinkPropertyHandler<FString>,1> *this,
          uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d09fa90

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FMovieSceneLiveLinkPropertyHandler<bool>,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FMovieSceneLiveLinkPropertyHandler<bool>,1> *this,
          uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d09fad0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FMovieSceneLiveLinkEnumHandler,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FMovieSceneLiveLinkEnumHandler,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d09fb10

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FMovieSceneLiveLinkSource,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FMovieSceneLiveLinkSource,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x90);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d09fb50

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FMovieSceneLiveLinkTransformHandler,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FMovieSceneLiveLinkTransformHandler,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d09fb90

void * __thiscall
FMovieSceneLiveLinkEnumHandler::_scalar_deleting_destructor_
          (FMovieSceneLiveLinkEnumHandler *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<TArray<FLiveLinkPropertyKey<__int64>,TSizedDefaultAllocator<32>_>,int>
            ((TArray<FLiveLinkPropertyKey<__int64>,TSizedDefaultAllocator<32>_> *)
             (this->Keys).AllocatorInstance.Data,(this->Keys).ArrayNum);
  pFVar1 = (this->Keys).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->PropertyBinding).PropertyPath.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d09fbf0

void * __thiscall
FMovieSceneLiveLinkSectionTemplate::_scalar_deleting_destructor_
          (FMovieSceneLiveLinkSectionTemplate *this,uint param_1)

{
  ~FMovieSceneLiveLinkSectionTemplate(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xb8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d09fc30

void * __thiscall
FMovieSceneLiveLinkSectionTemplatePersistentData::_scalar_deleting_destructor_
          (FMovieSceneLiveLinkSectionTemplatePersistentData *this,uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->LiveLinkSource).SharedReferenceCount.ReferenceController);
  this->_padding_ = (longlong)&___7IPersistentEvaluationData__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d09fc80

void * __thiscall
FMovieSceneLiveLinkSource::_scalar_deleting_destructor_
          (FMovieSceneLiveLinkSource *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  this->_padding_ = (longlong)&___7FMovieSceneLiveLinkSource__6B_;
  plVar3 = (longlong *)this->_padding_;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  this->_padding_ = (longlong)&___7ILiveLinkSource__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x80);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d09fcf0

void * __thiscall
FMovieSceneLiveLinkTransformHandler::_scalar_deleting_destructor_
          (FMovieSceneLiveLinkTransformHandler *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<FLiveLinkTransformKeys,int>
            ((FLiveLinkTransformKeys *)(this->BufferedTransformsPerElement).AllocatorInstance.Data,
             (this->BufferedTransformsPerElement).ArrayNum);
  pFVar1 = (this->BufferedTransformsPerElement).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->PropertyBinding).PropertyPath.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d09fd50

void * __thiscall
IMovieSceneLiveLinkPropertyHandler::_scalar_deleting_destructor_
          (IMovieSceneLiveLinkPropertyHandler *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d09fd80

void * __thiscall
UMovieSceneLiveLinkSection::_scalar_deleting_destructor_
          (UMovieSceneLiveLinkSection *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&___7UMovieSceneLiveLinkSection__6B_;
  DestructItems<FMovieSceneFloatChannel,int>
            ((FMovieSceneFloatChannel *)
             (this->PropertyFloatChannels_DEPRECATED).AllocatorInstance.Data,
             (this->PropertyFloatChannels_DEPRECATED).ArrayNum);
  pFVar1 = (this->PropertyFloatChannels_DEPRECATED).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->CurveNames_DEPRECATED).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->RefSkeleton_DEPRECATED).BoneParents.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->RefSkeleton_DEPRECATED).BoneNames.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->TemplateToPush_DEPRECATED).MetaData.StringMetaData.field_0x48 = 0;
  pvVar2 = *(void **)&(this->TemplateToPush_DEPRECATED).MetaData.StringMetaData.field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&(this->TemplateToPush_DEPRECATED).MetaData);
  pFVar1 = (this->TemplateToPush_DEPRECATED).CurveElements.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->TemplateToPush_DEPRECATED).Transforms.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->StaticData).SharedReferenceCount.ReferenceController);
  pFVar1 = (this->SubSections).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ChannelMask).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UMovieSceneSection::~UMovieSceneSection((UMovieSceneSection *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x250);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d09fec0

void * __thiscall
UMovieSceneLiveLinkSubSection::_scalar_deleting_destructor_
          (UMovieSceneLiveLinkSubSection *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UMovieSceneLiveLinkSubSection__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->StaticData).SharedReferenceCount.ReferenceController);
  DestructItems<FLiveLinkPropertyData,int>
            ((FLiveLinkPropertyData *)(this->SubSectionData).Properties.AllocatorInstance.Data,
             (this->SubSectionData).Properties.ArrayNum);
  pFVar1 = (this->SubSectionData).Properties.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
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

// `scalar_deleting_destructor' @ 14d09ff50

void * __thiscall
UMovieSceneLiveLinkSubSectionAnimation::_scalar_deleting_destructor_
          (UMovieSceneLiveLinkSubSectionAnimation *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UMovieSceneLiveLinkSubSectionAnimation__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->TransformHandler).SharedReferenceCount.ReferenceController);
  this->_padding_ = (longlong)&___7UMovieSceneLiveLinkSubSection__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)this->_padding_);
  DestructItems<FLiveLinkPropertyData,int>
            ((FLiveLinkPropertyData *)this->_padding_,(int)this->_padding_);
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d09fff0

void * __thiscall
UMovieSceneLiveLinkSubSectionBasicRole::_scalar_deleting_destructor_
          (UMovieSceneLiveLinkSubSectionBasicRole *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UMovieSceneLiveLinkSubSectionBasicRole__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->PropertyHandler).SharedReferenceCount.ReferenceController);
  this->_padding_ = (longlong)&___7UMovieSceneLiveLinkSubSection__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)this->_padding_);
  DestructItems<FLiveLinkPropertyData,int>
            ((FLiveLinkPropertyData *)this->_padding_,(int)this->_padding_);
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d0a0090

void * __thiscall
UMovieSceneLiveLinkSubSectionProperties::_scalar_deleting_destructor_
          (UMovieSceneLiveLinkSubSectionProperties *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UMovieSceneLiveLinkSubSectionProperties__6B_;
  DestructItems<TSharedPtr<IMovieSceneLiveLinkPropertyHandler,1>,int>
            ((TSharedPtr<IMovieSceneLiveLinkPropertyHandler,1> *)
             (this->PropertyHandlers).AllocatorInstance.Data,(this->PropertyHandlers).ArrayNum);
  pFVar1 = (this->PropertyHandlers).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7UMovieSceneLiveLinkSubSection__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)this->_padding_);
  DestructItems<FLiveLinkPropertyData,int>
            ((FLiveLinkPropertyData *)this->_padding_,(int)this->_padding_);
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d0a0140

void * __thiscall
UMovieSceneLiveLinkTrack::_scalar_deleting_destructor_(UMovieSceneLiveLinkTrack *this,uint param_1)

{
  this->_padding_ = (longlong)&_vftable__for__UMovieSceneDecorationContainerObject__;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneTrackVirtualAPI__;
  this->_padding_ = (longlong)&___7IMovieSceneTrackTemplateProducer__6B_;
  UMovieScenePropertyTrack::~UMovieScenePropertyTrack((UMovieScenePropertyTrack *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x158);
  }
  return this;
}

// ConvertFrameTimeToTimeCodeTime @ 14d0a1a30

FQualifiedFrameTime * __cdecl
ConvertFrameTimeToTimeCodeTime
          (FQualifiedFrameTime *__return_storage_ptr__,FFrameTime *param_1,FFrameRate *param_2,
          FFrameTime *param_3,FQualifiedFrameTime *param_4)

{
  code *pcVar1;
  float fVar2;
  bool bVar3;
  uint uVar4;
  FQualifiedFrameTime *pFVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  FFrameRate FVar11;
  int iVar12;
  float fVar13;
  undefined1 auVar14 [16];
  float fVar15;
  undefined1 in_XMM2 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  float fVar18;
  double dVar19;
  float fStackX_c;
  float fStackX_14;
  
  fStackX_c = (*param_1).SubFrame;
  FVar11 = param_4->Rate;
  fStackX_14 = (*param_3).SubFrame;
  auVar16 = roundps(in_XMM2,ZEXT416((uint)(fStackX_c - fStackX_14)),1);
  fVar18 = (fStackX_c - fStackX_14) - auVar16._0_4_;
  if (FFrameTime::MaxSubframe <= fVar18) {
    fVar18 = FFrameTime::MaxSubframe;
  }
  iVar12 = (int)auVar16._0_4_ + ((*param_1).FrameNumber.Value - (*param_3).FrameNumber);
  if (fVar18 <= 0.0) {
    fVar18 = 0.0;
  }
  iVar10 = (*param_2).Numerator;
  iVar7 = (*param_2).Denominator;
  if ((iVar10 != FVar11.Numerator) || (iVar7 != FVar11.Denominator)) {
    if ((iVar10 == 0) &&
       (bVar3 = FDebug::CheckVerifyFailedImpl2
                          ("SourceRate.Numerator != 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\FrameRate.h"
                           ,0x113,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pFVar5 = (FQualifiedFrameTime *)(*pcVar1)();
      return pFVar5;
    }
    lVar8 = (longlong)iVar7 * (longlong)FVar11.Numerator;
    lVar9 = (longlong)FVar11.Denominator * (longlong)iVar10;
    auVar17._0_8_ = (double)lVar8;
    auVar17._8_8_ = 0;
    lVar6 = (iVar12 * lVar8) / lVar9;
    dVar19 = (((double)lVar8 * (double)iVar12) / (double)lVar9 - (double)lVar6) +
             ((double)fVar18 * auVar17._0_8_) / (double)lVar9;
    auVar16._8_8_ = 0;
    auVar16._0_8_ = dVar19;
    auVar16 = roundpd(auVar17,auVar16,1);
    fVar18 = (float)(dVar19 - auVar16._0_8_);
    lVar6 = lVar6 + (longlong)auVar16._0_8_;
    if ((0.0 < fVar18) && (FFrameTime::MaxSubframe <= fVar18)) {
      fVar18 = FFrameTime::MaxSubframe;
    }
    FVar11 = param_4->Rate;
    if (FFrameTime::MaxSubframe <= fVar18) {
      fVar18 = FFrameTime::MaxSubframe;
    }
    lVar8 = 0x7fffffff;
    if (lVar6 < 0x7fffffff) {
      lVar8 = lVar6;
    }
    if (fVar18 <= 0.0) {
      fVar18 = 0.0;
    }
    iVar12 = -0x80000000;
    if (-0x80000000 < lVar8) {
      iVar12 = (int)lVar8;
    }
  }
  fVar2 = FFrameTime::MaxSubframe;
  fStackX_c = (param_4->Time).SubFrame;
  fVar18 = fVar18 + fStackX_c;
  iVar12 = ((int)ROUND((fVar18 + fVar18) - __real_3f000000) >> 1) +
           (param_4->Time).FrameNumber.Value + iVar12;
  iVar7 = (int)fVar18;
  fVar13 = fVar18;
  if ((iVar7 != -0x80000000) && ((float)iVar7 != fVar18)) {
    auVar14._4_4_ = fVar18;
    auVar14._0_4_ = fVar18;
    auVar14._8_8_ = 0;
    uVar4 = movmskps(iVar12,auVar14);
    fVar13 = (float)(int)(iVar7 - (uVar4 & 1));
  }
  __return_storage_ptr__->Rate = FVar11;
  fVar15 = fVar18 - fVar13;
  if (fVar2 <= fVar18 - fVar13) {
    fVar15 = fVar2;
  }
  if (fVar15 <= 0.0) {
    fVar15 = 0.0;
  }
  param_4 = (FQualifiedFrameTime *)CONCAT44(fVar15,iVar12);
  __return_storage_ptr__->Time = (FFrameTime)param_4;
  return __return_storage_ptr__;
}

// CreateHandlerFromProperty @ 14d0a5670

TSharedPtr<IMovieSceneLiveLinkPropertyHandler,1> * __cdecl
LiveLinkPropertiesUtils::CreateHandlerFromProperty
          (TSharedPtr<IMovieSceneLiveLinkPropertyHandler,1> *__return_storage_ptr__,
          FProperty *param_1,FLiveLinkStructPropertyBindings *param_2,FLiveLinkPropertyData *param_3
          )

{
  FFieldClass *pFVar1;
  ulonglong uVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  FNameEntryId FVar6;
  FFieldClass *pFVar7;
  TSharedPtr<IMovieSceneLiveLinkPropertyHandler,1> *pTVar8;
  TReferenceControllerBase<1> *pTVar9;
  undefined **ppuVar10;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined4 extraout_var_01;
  TReferenceControllerBase<1> *pTVar11;
  undefined1 local_res10 [8];
  undefined1 local_38 [4];
  undefined1 local_34 [12];
  
  pFVar7 = FFloatProperty::StaticClass();
  if ((pFVar7 == (FFieldClass *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("FieldType",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                         ,0x2dd,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pTVar8 = (TSharedPtr<IMovieSceneLiveLinkPropertyHandler,1> *)(*pcVar3)();
    return pTVar8;
  }
  pFVar1 = (FFieldClass *)param_1->_padding_;
  if (pFVar7->Id == CASTCLASS_None) {
    for (; pFVar1 != (FFieldClass *)0x0; pFVar1 = pFVar1->SuperClass) {
      if (pFVar1 == pFVar7) {
        bVar4 = true;
        goto LAB_14d0a56f6;
      }
    }
    bVar4 = false;
  }
  else {
    bVar4 = (pFVar1->CastFlags & pFVar7->Id) != CASTCLASS_None;
  }
LAB_14d0a56f6:
  if (bVar4) {
    pTVar9 = ::operator_new(0x50);
    if (pTVar9 == (TReferenceControllerBase<1> *)0x0) goto LAB_14d0a57c3;
    pTVar9->SharedReferenceCount = (atomic<int>)0x1;
    pTVar9->WeakReferenceCount = (atomic<int>)0x1;
    pTVar9->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__FMovieSceneLiveLinkPropertyHandler_M___00_SharedPointerInternals__6B_
    ;
    ppuVar10 = &___7__FMovieSceneLiveLinkPropertyHandler_M__6B_;
LAB_14d0a5738:
    pTVar9[1]._padding_ = (longlong)ppuVar10;
    *(FLiveLinkPropertyData **)&pTVar9[1].SharedReferenceCount = param_3;
    ::FString::FString((FString *)(pTVar9 + 2),&param_2->PropertyPath);
    pTVar9[3]._padding_ = (longlong)param_2->PropertyName;
    pTVar9[3].SharedReferenceCount = (atomic<int>)0x0;
    pTVar9[4]._padding_ = 0;
    pTVar9[4].SharedReferenceCount = (atomic<int>)0x0;
    pTVar9[4].WeakReferenceCount = (atomic<int>)0x0;
    **(FName **)&pTVar9[1].SharedReferenceCount = param_2->PropertyName;
  }
  else {
    pFVar7 = FIntProperty::StaticClass();
    if ((pFVar7 == (FFieldClass *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("FieldType",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                           ,0x2dd,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      pTVar8 = (TSharedPtr<IMovieSceneLiveLinkPropertyHandler,1> *)(*pcVar3)();
      return pTVar8;
    }
    pFVar1 = (FFieldClass *)param_1->_padding_;
    bVar4 = false;
    if (pFVar7->Id == CASTCLASS_None) {
      for (; bVar5 = bVar4, pFVar1 != (FFieldClass *)0x0; pFVar1 = pFVar1->SuperClass) {
        if (pFVar1 == pFVar7) {
          bVar5 = true;
          break;
        }
      }
    }
    else {
      bVar5 = (pFVar1->CastFlags & pFVar7->Id) != CASTCLASS_None;
    }
    if (bVar5) {
      pTVar9 = ::operator_new(0x50);
      if (pTVar9 == (TReferenceControllerBase<1> *)0x0) goto LAB_14d0a57c3;
      pTVar9->SharedReferenceCount = (atomic<int>)0x1;
      pTVar9->WeakReferenceCount = (atomic<int>)0x1;
      pTVar9->_padding_ =
           (longlong)
           &
           ___7__TIntrusiveReferenceController_V__FMovieSceneLiveLinkPropertyHandler_H___00_SharedPointerInternals__6B_
      ;
      pTVar9[1]._padding_ = (longlong)&___7__FMovieSceneLiveLinkPropertyHandler_H__6B_;
      *(FLiveLinkPropertyData **)&pTVar9[1].SharedReferenceCount = param_3;
      ::FString::FString((FString *)(pTVar9 + 2),&param_2->PropertyPath);
      pTVar11 = pTVar9 + 1;
      pTVar9[3]._padding_ = (longlong)param_2->PropertyName;
      pTVar9[4]._padding_ = 0;
      pTVar9[4].SharedReferenceCount = (atomic<int>)0x0;
      pTVar9[4].WeakReferenceCount = (atomic<int>)0x0;
      pTVar9[3].SharedReferenceCount = (atomic<int>)0x0;
      **(FName **)&pTVar9[1].SharedReferenceCount = param_2->PropertyName;
      if ((pTVar11 == (TReferenceControllerBase<1> *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("InObject != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x246,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        pTVar8 = (TSharedPtr<IMovieSceneLiveLinkPropertyHandler,1> *)(*pcVar3)();
        return pTVar8;
      }
      goto LAB_14d0a57a1;
    }
    pFVar7 = FBoolProperty::StaticClass();
    if ((pFVar7 == (FFieldClass *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("FieldType",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                           ,0x2dd,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      pTVar8 = (TSharedPtr<IMovieSceneLiveLinkPropertyHandler,1> *)(*pcVar3)();
      return pTVar8;
    }
    pFVar1 = (FFieldClass *)param_1->_padding_;
    if (pFVar7->Id == CASTCLASS_None) {
      for (; bVar5 = bVar4, pFVar1 != (FFieldClass *)0x0; pFVar1 = pFVar1->SuperClass) {
        if (pFVar1 == pFVar7) {
          bVar5 = true;
          break;
        }
      }
    }
    else {
      bVar5 = (pFVar1->CastFlags & pFVar7->Id) != CASTCLASS_None;
    }
    if (bVar5) {
      pTVar9 = ::operator_new(0x50);
      if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
        pTVar9->SharedReferenceCount = (atomic<int>)0x1;
        pTVar9->WeakReferenceCount = (atomic<int>)0x1;
        pTVar9->_padding_ =
             (longlong)
             &
             ___7__TIntrusiveReferenceController_V__FMovieSceneLiveLinkPropertyHandler__N___00_SharedPointerInternals__6B_
        ;
        pTVar9[1]._padding_ = (longlong)&___7__FMovieSceneLiveLinkPropertyHandler__N__6B_;
        *(FLiveLinkPropertyData **)&pTVar9[1].SharedReferenceCount = param_3;
        ::FString::FString((FString *)(pTVar9 + 2),&param_2->PropertyPath);
        pTVar11 = pTVar9 + 1;
        pTVar9[3]._padding_ = (longlong)param_2->PropertyName;
        pTVar9[4]._padding_ = 0;
        pTVar9[4].SharedReferenceCount = (atomic<int>)0x0;
        pTVar9[4].WeakReferenceCount = (atomic<int>)0x0;
        pTVar9[3].SharedReferenceCount = (atomic<int>)0x0;
        **(FName **)&pTVar9[1].SharedReferenceCount = param_2->PropertyName;
        if ((pTVar11 == (TReferenceControllerBase<1> *)0x0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("InObject != nullptr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x246,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          pTVar8 = (TSharedPtr<IMovieSceneLiveLinkPropertyHandler,1> *)(*pcVar3)();
          return pTVar8;
        }
        goto LAB_14d0a57a1;
      }
LAB_14d0a57c3:
      __return_storage_ptr__->Object = (IMovieSceneLiveLinkPropertyHandler *)0x10;
      (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      return __return_storage_ptr__;
    }
    pFVar7 = FStrProperty::StaticClass();
    if ((pFVar7 == (FFieldClass *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("FieldType",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                           ,0x2dd,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      pTVar8 = (TSharedPtr<IMovieSceneLiveLinkPropertyHandler,1> *)(*pcVar3)();
      return pTVar8;
    }
    pFVar1 = (FFieldClass *)param_1->_padding_;
    if (pFVar7->Id == CASTCLASS_None) {
      for (; pFVar1 != (FFieldClass *)0x0; pFVar1 = pFVar1->SuperClass) {
        if (pFVar1 == pFVar7) {
          bVar4 = true;
          break;
        }
      }
    }
    else {
      bVar4 = (pFVar1->CastFlags & pFVar7->Id) != CASTCLASS_None;
    }
    if (bVar4) {
      pTVar9 = ::operator_new(0x50);
      if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
        pTVar9->SharedReferenceCount = (atomic<int>)0x1;
        pTVar9->WeakReferenceCount = (atomic<int>)0x1;
        pTVar9->_padding_ =
             (longlong)
             &
             ___7__TIntrusiveReferenceController_V__FMovieSceneLiveLinkPropertyHandler_VFString_____00_SharedPointerInternals__6B_
        ;
        pTVar9[1]._padding_ = (longlong)&___7__FMovieSceneLiveLinkPropertyHandler_VFString____6B_;
        *(FLiveLinkPropertyData **)&pTVar9[1].SharedReferenceCount = param_3;
        ::FString::FString((FString *)(pTVar9 + 2),&param_2->PropertyPath);
        pTVar11 = pTVar9 + 1;
        pTVar9[3]._padding_ = (longlong)param_2->PropertyName;
        pTVar9[4]._padding_ = 0;
        pTVar9[4].SharedReferenceCount = (atomic<int>)0x0;
        pTVar9[4].WeakReferenceCount = (atomic<int>)0x0;
        pTVar9[3].SharedReferenceCount = (atomic<int>)0x0;
        **(FName **)&pTVar9[1].SharedReferenceCount = param_2->PropertyName;
        if ((pTVar11 == (TReferenceControllerBase<1> *)0x0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("InObject != nullptr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x246,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          pTVar8 = (TSharedPtr<IMovieSceneLiveLinkPropertyHandler,1> *)(*pcVar3)();
          return pTVar8;
        }
        goto LAB_14d0a57a1;
      }
      goto LAB_14d0a57c3;
    }
    pFVar7 = FByteProperty::StaticClass();
    bVar4 = FField::IsA((FField *)param_1,pFVar7);
    if (bVar4) {
      pTVar9 = ::operator_new(0x50);
      if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
        pTVar9->SharedReferenceCount = (atomic<int>)0x1;
        pTVar9->WeakReferenceCount = (atomic<int>)0x1;
        pTVar9->_padding_ =
             (longlong)
             &
             ___7__TIntrusiveReferenceController_V__FMovieSceneLiveLinkPropertyHandler_E___00_SharedPointerInternals__6B_
        ;
        pTVar9[1]._padding_ = (longlong)&___7__FMovieSceneLiveLinkPropertyHandler_E__6B_;
        *(FLiveLinkPropertyData **)&pTVar9[1].SharedReferenceCount = param_3;
        ::FString::FString((FString *)(pTVar9 + 2),&param_2->PropertyPath);
        pTVar11 = pTVar9 + 1;
        pTVar9[3]._padding_ = (longlong)param_2->PropertyName;
        pTVar9[4]._padding_ = 0;
        pTVar9[4].SharedReferenceCount = (atomic<int>)0x0;
        pTVar9[4].WeakReferenceCount = (atomic<int>)0x0;
        pTVar9[3].SharedReferenceCount = (atomic<int>)0x0;
        **(FName **)&pTVar9[1].SharedReferenceCount = param_2->PropertyName;
        if ((pTVar11 == (TReferenceControllerBase<1> *)0x0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("InObject != nullptr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x246,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          pTVar8 = (TSharedPtr<IMovieSceneLiveLinkPropertyHandler,1> *)(*pcVar3)();
          return pTVar8;
        }
        goto LAB_14d0a57a1;
      }
      goto LAB_14d0a57c3;
    }
    pFVar7 = FEnumProperty::StaticClass();
    bVar4 = FField::IsA((FField *)param_1,pFVar7);
    if (bVar4) {
      pTVar9 = ::operator_new(0x50);
      if (pTVar9 == (TReferenceControllerBase<1> *)0x0) goto LAB_14d0a57c3;
      pTVar9->SharedReferenceCount = (atomic<int>)0x1;
      pTVar9->WeakReferenceCount = (atomic<int>)0x1;
      *(FLiveLinkPropertyData **)&pTVar9[1].SharedReferenceCount = param_3;
      pTVar9->_padding_ =
           (longlong)
           &
           ___7__TIntrusiveReferenceController_VFMovieSceneLiveLinkEnumHandler___00_SharedPointerInternals__6B_
      ;
      pTVar9[1]._padding_ = (longlong)&___7FMovieSceneLiveLinkEnumHandler__6B_;
      ::FString::FString((FString *)(pTVar9 + 2),&param_2->PropertyPath);
      pTVar9[3]._padding_ = (longlong)param_2->PropertyName;
      pTVar9[3].SharedReferenceCount = (atomic<int>)0x0;
      pTVar9[4]._padding_ = 0;
      pTVar9[4].SharedReferenceCount = (atomic<int>)0x0;
      pTVar9[4].WeakReferenceCount = (atomic<int>)0x0;
    }
    else {
      pFVar7 = FStructProperty::StaticClass();
      bVar4 = FField::IsA((FField *)param_1,pFVar7);
      if ((!bVar4) || ((*(uint *)(param_1->_padding_ + 0x18) >> 0x14 & 1) == 0)) {
LAB_14d0a5e26:
        __return_storage_ptr__->Object = (IMovieSceneLiveLinkPropertyHandler *)0x0;
        (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
        return __return_storage_ptr__;
      }
      uVar2 = *(ulonglong *)(param_1[1]._padding_ + 0x18);
      FVar6 = FNameEntryId::FromValidEName((EName)local_res10);
      if (uVar2 != *(uint *)CONCAT44(extraout_var,FVar6.Value)) {
        uVar2 = *(ulonglong *)(param_1[1]._padding_ + 0x18);
        FVar6 = FNameEntryId::FromValidEName((EName)local_38);
        if (uVar2 == *(uint *)CONCAT44(extraout_var_00,FVar6.Value)) {
          pTVar9 = ::operator_new(0x50);
          if (pTVar9 == (TReferenceControllerBase<1> *)0x0) goto LAB_14d0a57c3;
          pTVar9->SharedReferenceCount = (atomic<int>)0x1;
          pTVar9->WeakReferenceCount = (atomic<int>)0x1;
          pTVar9->_padding_ =
               (longlong)
               &
               ___7__TIntrusiveReferenceController_V__FMovieSceneLiveLinkPropertyHandler_U__TVector_N_Math_UE_____00_SharedPointerInternals__6B_
          ;
          ppuVar10 = &___7__FMovieSceneLiveLinkPropertyHandler_U__TVector_N_Math_UE____6B_;
        }
        else {
          uVar2 = *(ulonglong *)(param_1[1]._padding_ + 0x18);
          FVar6 = FNameEntryId::FromValidEName((EName)local_34);
          if (uVar2 != *(uint *)CONCAT44(extraout_var_01,FVar6.Value)) goto LAB_14d0a5e26;
          pTVar9 = ::operator_new(0x50);
          if (pTVar9 == (TReferenceControllerBase<1> *)0x0) goto LAB_14d0a57c3;
          pTVar9->SharedReferenceCount = (atomic<int>)0x1;
          pTVar9->WeakReferenceCount = (atomic<int>)0x1;
          pTVar9->_padding_ =
               (longlong)
               &
               ___7__TIntrusiveReferenceController_V__FMovieSceneLiveLinkPropertyHandler_UFColor_____00_SharedPointerInternals__6B_
          ;
          ppuVar10 = &___7__FMovieSceneLiveLinkPropertyHandler_UFColor____6B_;
        }
        goto LAB_14d0a5738;
      }
      pTVar9 = ::operator_new(0x50);
      if (pTVar9 == (TReferenceControllerBase<1> *)0x0) goto LAB_14d0a57c3;
      pTVar9->SharedReferenceCount = (atomic<int>)0x1;
      pTVar9->WeakReferenceCount = (atomic<int>)0x1;
      *(FLiveLinkPropertyData **)&pTVar9[1].SharedReferenceCount = param_3;
      pTVar9->_padding_ =
           (longlong)
           &
           ___7__TIntrusiveReferenceController_VFMovieSceneLiveLinkTransformHandler___00_SharedPointerInternals__6B_
      ;
      pTVar9[1]._padding_ = (longlong)&___7FMovieSceneLiveLinkTransformHandler__6B_;
      ::FString::FString((FString *)(pTVar9 + 2),&param_2->PropertyPath);
      pTVar9[3]._padding_ = (longlong)param_2->PropertyName;
      pTVar9[3].SharedReferenceCount = (atomic<int>)0x0;
      pTVar9[4]._padding_ = 0;
      pTVar9[4].SharedReferenceCount = (atomic<int>)0x0;
      pTVar9[4].WeakReferenceCount = (atomic<int>)0x0;
    }
  }
  pTVar11 = pTVar9 + 1;
  if ((pTVar11 == (TReferenceControllerBase<1> *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pTVar8 = (TSharedPtr<IMovieSceneLiveLinkPropertyHandler,1> *)(*pcVar3)();
    return pTVar8;
  }
LAB_14d0a57a1:
  __return_storage_ptr__->Object = (IMovieSceneLiveLinkPropertyHandler *)pTVar11;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar9;
  LOCK();
  pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
  UNLOCK();
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  return __return_storage_ptr__;
}

// CreatePropertyHandler @ 14d0a6900

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TSharedPtr<IMovieSceneLiveLinkPropertyHandler,1> * __cdecl
LiveLinkPropertiesUtils::CreatePropertyHandler
          (TSharedPtr<IMovieSceneLiveLinkPropertyHandler,1> *__return_storage_ptr__,
          UScriptStruct *param_1,FLiveLinkPropertyData *param_2)

{
  FName FVar1;
  FFieldClass *pFVar2;
  code *pcVar3;
  FFieldClass *pFVar4;
  bool bVar5;
  FString *pFVar6;
  FProperty *pFVar7;
  FFieldClass *pFVar8;
  TSharedPtr<IMovieSceneLiveLinkPropertyHandler,1> *pTVar9;
  FString local_38;
  FLiveLinkStructPropertyBindings local_28;
  
  pFVar6 = ::FName::ToString(&param_2->PropertyName,&local_38);
  FVar1 = param_2->PropertyName;
  ::FString::FString(&local_28.PropertyPath,pFVar6);
  local_28.PropertyName = FVar1;
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  pFVar7 = FLiveLinkStructPropertyBindings::GetProperty(&local_28,param_1);
  if (pFVar7 == (FProperty *)0x0) {
    __return_storage_ptr__->Object = (IMovieSceneLiveLinkPropertyHandler *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pFVar8 = FArrayProperty::StaticClass();
    if ((pFVar8 == (FFieldClass *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("FieldType",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                           ,0x2dd,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      pTVar9 = (TSharedPtr<IMovieSceneLiveLinkPropertyHandler,1> *)(*pcVar3)();
      return pTVar9;
    }
    pFVar2 = (FFieldClass *)pFVar7->_padding_;
    pFVar4 = pFVar2;
    if (pFVar8->Id == CASTCLASS_None) {
      for (; pFVar4 != (FFieldClass *)0x0; pFVar4 = pFVar4->SuperClass) {
        if (pFVar4 == pFVar8) {
          bVar5 = true;
          goto LAB_14d0a69e0;
        }
      }
      bVar5 = false;
    }
    else {
      bVar5 = (pFVar2->CastFlags & pFVar8->Id) != CASTCLASS_None;
    }
LAB_14d0a69e0:
    if (bVar5) {
      if (((uint)(int)pFVar2->CastFlags >> 0x15 & 1) == 0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("CastResult",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                           ,0x472,L"CastFieldChecked failed with 0x%016llx");
        pFVar7 = _DAT_00000078;
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          pTVar9 = (TSharedPtr<IMovieSceneLiveLinkPropertyHandler,1> *)(*pcVar3)();
          return pTVar9;
        }
      }
      else {
        pFVar7 = (FProperty *)pFVar7[1]._padding_;
      }
    }
    CreateHandlerFromProperty(__return_storage_ptr__,pFVar7,&local_28,param_2);
  }
  if (local_28.PropertyPath.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.PropertyPath.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// EmptyLinkFunctionForGeneratedCodeLiveLinkMovieScene_init @ 14d0a7420

void __cdecl EmptyLinkFunctionForGeneratedCodeLiveLinkMovieScene_init(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMovieSceneLiveLinkSection @ 14d0a7430

void __cdecl EmptyLinkFunctionForGeneratedCodeMovieSceneLiveLinkSection(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMovieSceneLiveLinkSectionTemplate @ 14d0a7440

void __cdecl EmptyLinkFunctionForGeneratedCodeMovieSceneLiveLinkSectionTemplate(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMovieSceneLiveLinkStructProperties @ 14d0a7450

void __cdecl EmptyLinkFunctionForGeneratedCodeMovieSceneLiveLinkStructProperties(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMovieSceneLiveLinkSubSection @ 14d0a7460

void __cdecl EmptyLinkFunctionForGeneratedCodeMovieSceneLiveLinkSubSection(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMovieSceneLiveLinkSubSectionAnimation @ 14d0a7470

void __cdecl EmptyLinkFunctionForGeneratedCodeMovieSceneLiveLinkSubSectionAnimation(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMovieSceneLiveLinkSubSectionBasicRole @ 14d0a7480

void __cdecl EmptyLinkFunctionForGeneratedCodeMovieSceneLiveLinkSubSectionBasicRole(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMovieSceneLiveLinkSubSectionProperties @ 14d0a7490

void __cdecl EmptyLinkFunctionForGeneratedCodeMovieSceneLiveLinkSubSectionProperties(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMovieSceneLiveLinkTrack @ 14d0a74a0

void __cdecl EmptyLinkFunctionForGeneratedCodeMovieSceneLiveLinkTrack(void)

{
  return;
}

// FillColor @ 14d0a7980

void __cdecl
LiveLinkPropertyHandlerUtils::FillColor
          (int param_1,int *param_2,
          TArray<FMovieSceneByteChannel,TSizedDefaultAllocator<32>_> *param_3,FColor *param_4)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uchar *puVar6;
  uint uVar7;
  FColor_u_0 local_res10;
  TArrayView<unsigned_char_const_,int> local_58;
  TArrayView<unsigned_char_const_,int> local_48;
  TArrayView<unsigned_char_const_,int> local_38;
  TArrayView<unsigned_char_const_,int> local_28;
  
  uVar5 = *param_2;
  uVar7 = 0;
  if ((int)uVar5 < param_3->ArrayNum) {
    uVar7 = ~uVar5 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar2 = (param_3->AllocatorInstance).Data;
  local_58.DataPtr = *(uchar **)(pFVar2 + (longlong)(int)uVar5 * 0x128 + 0x88);
  iVar1 = *(int *)(pFVar2 + (longlong)(int)uVar5 * 0x128 + 0x90);
  if (iVar1 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  local_58.ArrayNum = iVar1;
  puVar6 = TArrayView<unsigned_char_const_,int>::operator[](&local_58,param_1);
  uVar7 = *param_2 + 1;
  local_res10._s_0.R = *puVar6;
  *param_2 = uVar7;
  uVar5 = 0;
  if ((int)uVar7 < param_3->ArrayNum) {
    uVar5 = ~uVar7 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar2 = (param_3->AllocatorInstance).Data;
  local_48.DataPtr = *(uchar **)(pFVar2 + (longlong)(int)uVar7 * 0x128 + 0x88);
  iVar1 = *(int *)(pFVar2 + (longlong)(int)uVar7 * 0x128 + 0x90);
  if (iVar1 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  local_48.ArrayNum = iVar1;
  puVar6 = TArrayView<unsigned_char_const_,int>::operator[](&local_48,param_1);
  uVar7 = *param_2 + 1;
  local_res10._s_0.G = *puVar6;
  *param_2 = uVar7;
  uVar5 = 0;
  if ((int)uVar7 < param_3->ArrayNum) {
    uVar5 = ~uVar7 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar2 = (param_3->AllocatorInstance).Data;
  local_38.DataPtr = *(uchar **)(pFVar2 + (longlong)(int)uVar7 * 0x128 + 0x88);
  iVar1 = *(int *)(pFVar2 + (longlong)(int)uVar7 * 0x128 + 0x90);
  if (iVar1 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  local_38.ArrayNum = iVar1;
  puVar6 = TArrayView<unsigned_char_const_,int>::operator[](&local_38,param_1);
  uVar7 = *param_2 + 1;
  local_res10._s_0.B = *puVar6;
  *param_2 = uVar7;
  uVar5 = 0;
  if ((int)uVar7 < param_3->ArrayNum) {
    uVar5 = ~uVar7 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar2 = (param_3->AllocatorInstance).Data;
  local_28.DataPtr = *(uchar **)(pFVar2 + (longlong)(int)uVar7 * 0x128 + 0x88);
  iVar1 = *(int *)(pFVar2 + (longlong)(int)uVar7 * 0x128 + 0x90);
  if (iVar1 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  local_28.ArrayNum = iVar1;
  puVar6 = TArrayView<unsigned_char_const_,int>::operator[](&local_28,param_1);
  local_res10._s_0.A = *puVar6;
  *param_2 = *param_2 + 1;
  param_4->field0_0x0 = local_res10;
  return;
}

// FillColorInterpolated @ 14d0a7ca0

void __cdecl
LiveLinkPropertyHandlerUtils::FillColorInterpolated
          (FFrameTime *param_1,int *param_2,
          TArray<FMovieSceneByteChannel,TSizedDefaultAllocator<32>_> *param_3,FColor *param_4)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FColor_u_0 local_res8 [2];
  
  uVar1 = *param_2;
  *param_2 = uVar1 + 1;
  uVar4 = 0;
  if ((int)uVar1 < param_3->ArrayNum) {
    uVar4 = ~uVar1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  FMovieSceneByteChannel::Evaluate
            ((FMovieSceneByteChannel *)
             ((param_3->AllocatorInstance).Data + (longlong)(int)uVar1 * 0x128),*param_1,
             &local_res8[0]._s_0.R);
  uVar1 = *param_2;
  *param_2 = uVar1 + 1;
  uVar4 = 0;
  if ((int)uVar1 < param_3->ArrayNum) {
    uVar4 = ~uVar1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  FMovieSceneByteChannel::Evaluate
            ((FMovieSceneByteChannel *)
             ((param_3->AllocatorInstance).Data + (longlong)(int)uVar1 * 0x128),*param_1,
             &local_res8[0]._s_0.G);
  uVar1 = *param_2;
  *param_2 = uVar1 + 1;
  uVar4 = 0;
  if ((int)uVar1 < param_3->ArrayNum) {
    uVar4 = ~uVar1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  FMovieSceneByteChannel::Evaluate
            ((FMovieSceneByteChannel *)
             ((param_3->AllocatorInstance).Data + (longlong)(int)uVar1 * 0x128),*param_1,
             (uchar *)&local_res8[0].Bits);
  uVar1 = *param_2;
  *param_2 = uVar1 + 1;
  uVar4 = 0;
  if ((int)uVar1 < param_3->ArrayNum) {
    uVar4 = ~uVar1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  FMovieSceneByteChannel::Evaluate
            ((FMovieSceneByteChannel *)
             ((param_3->AllocatorInstance).Data + (longlong)(int)uVar1 * 0x128),*param_1,
             &local_res8[0]._s_0.A);
  param_4->field0_0x0 = local_res8[0];
  return;
}

// FillTransform @ 14d0aab70

void __cdecl
LiveLinkTransformHandlerUtils::FillTransform
          (int param_1,int *param_2,
          TArray<FMovieSceneFloatChannel,TSizedDefaultAllocator<32>_> *param_3,
          TTransform<double> *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  longlong lVar6;
  code *pcVar7;
  bool bVar8;
  uint uVar9;
  uint uVar10;
  longlong lVar11;
  uint uVar12;
  TRotator<double> local_68;
  TQuat<double> local_48;
  
  uVar9 = *param_2;
  uVar12 = 0;
  if ((int)uVar9 < param_3->ArrayNum) {
    uVar12 = ~uVar9 >> 0x1f;
  }
  if (uVar12 == 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  pFVar5 = (param_3->AllocatorInstance).Data;
  iVar4 = *(int *)(pFVar5 + (longlong)(int)uVar9 * 0x128 + 0x88);
  lVar6 = *(longlong *)(pFVar5 + (longlong)(int)uVar9 * 0x128 + 0x80);
  if (iVar4 < 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  uVar12 = (uint)~param_1 >> 0x1f;
  uVar9 = 0;
  if (param_1 < iVar4) {
    uVar9 = uVar12;
  }
  if (uVar9 == 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  lVar11 = (longlong)param_1 * 0x1c;
  fVar1 = *(float *)(lVar6 + lVar11);
  *param_2 = *param_2 + 1;
  uVar9 = *param_2;
  uVar10 = 0;
  if ((int)uVar9 < param_3->ArrayNum) {
    uVar10 = ~uVar9 >> 0x1f;
  }
  if (uVar10 == 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  pFVar5 = (param_3->AllocatorInstance).Data;
  iVar4 = *(int *)(pFVar5 + (longlong)(int)uVar9 * 0x128 + 0x88);
  lVar6 = *(longlong *)(pFVar5 + (longlong)(int)uVar9 * 0x128 + 0x80);
  if (iVar4 < 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  uVar9 = 0;
  if (param_1 < iVar4) {
    uVar9 = uVar12;
  }
  if (uVar9 == 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  fVar2 = *(float *)(lVar6 + lVar11);
  *param_2 = *param_2 + 1;
  uVar9 = *param_2;
  uVar10 = 0;
  if ((int)uVar9 < param_3->ArrayNum) {
    uVar10 = ~uVar9 >> 0x1f;
  }
  if (uVar10 == 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  pFVar5 = (param_3->AllocatorInstance).Data;
  iVar4 = *(int *)(pFVar5 + (longlong)(int)uVar9 * 0x128 + 0x88);
  lVar6 = *(longlong *)(pFVar5 + (longlong)(int)uVar9 * 0x128 + 0x80);
  if (iVar4 < 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  uVar9 = 0;
  if (param_1 < iVar4) {
    uVar9 = uVar12;
  }
  if (uVar9 == 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  fVar3 = *(float *)(lVar6 + lVar11);
  *param_2 = *param_2 + 1;
  (param_4->Translation).XY.m128d_f64[0] = (double)fVar1;
  (param_4->Translation).XY.m128d_f64[1] = (double)fVar2;
  (param_4->Translation).ZW.m128d_f64[0] = (double)fVar3;
  (param_4->Translation).ZW.m128d_f64[1] = 0.0;
  uVar9 = *param_2;
  uVar10 = 0;
  if ((int)uVar9 < param_3->ArrayNum) {
    uVar10 = ~uVar9 >> 0x1f;
  }
  if (uVar10 == 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  pFVar5 = (param_3->AllocatorInstance).Data;
  iVar4 = *(int *)(pFVar5 + (longlong)(int)uVar9 * 0x128 + 0x88);
  lVar6 = *(longlong *)(pFVar5 + (longlong)(int)uVar9 * 0x128 + 0x80);
  if (iVar4 < 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  uVar9 = 0;
  if (param_1 < iVar4) {
    uVar9 = uVar12;
  }
  if (uVar9 == 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  fVar1 = *(float *)(lVar6 + lVar11);
  *param_2 = *param_2 + 1;
  uVar9 = *param_2;
  uVar10 = 0;
  if ((int)uVar9 < param_3->ArrayNum) {
    uVar10 = ~uVar9 >> 0x1f;
  }
  if (uVar10 == 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  pFVar5 = (param_3->AllocatorInstance).Data;
  iVar4 = *(int *)(pFVar5 + (longlong)(int)uVar9 * 0x128 + 0x88);
  lVar6 = *(longlong *)(pFVar5 + (longlong)(int)uVar9 * 0x128 + 0x80);
  if (iVar4 < 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  uVar9 = 0;
  if (param_1 < iVar4) {
    uVar9 = uVar12;
  }
  if (uVar9 == 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  fVar2 = *(float *)(lVar6 + lVar11);
  *param_2 = *param_2 + 1;
  uVar9 = *param_2;
  uVar10 = 0;
  if ((int)uVar9 < param_3->ArrayNum) {
    uVar10 = ~uVar9 >> 0x1f;
  }
  if (uVar10 == 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  pFVar5 = (param_3->AllocatorInstance).Data;
  iVar4 = *(int *)(pFVar5 + (longlong)(int)uVar9 * 0x128 + 0x88);
  lVar6 = *(longlong *)(pFVar5 + (longlong)(int)uVar9 * 0x128 + 0x80);
  if (iVar4 < 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  uVar9 = 0;
  if (param_1 < iVar4) {
    uVar9 = uVar12;
  }
  if (uVar9 == 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  fVar3 = *(float *)(lVar6 + lVar11);
  *param_2 = *param_2 + 1;
  local_68.Yaw = (double)fVar3;
  local_68.Pitch = (double)fVar2;
  local_68.Roll = (double)fVar1;
  UE::Math::TRotator<double>::Quaternion(&local_68,&local_48);
  (param_4->Rotation).XY.m128d_f64[0] = local_48.X;
  (param_4->Rotation).XY.m128d_f64[1] = local_48.Y;
  (param_4->Rotation).ZW.m128d_f64[0] = local_48.Z;
  (param_4->Rotation).ZW.m128d_f64[1] = local_48.W;
  uVar9 = *param_2;
  uVar10 = 0;
  if ((int)uVar9 < param_3->ArrayNum) {
    uVar10 = ~uVar9 >> 0x1f;
  }
  if (uVar10 == 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  pFVar5 = (param_3->AllocatorInstance).Data;
  iVar4 = *(int *)(pFVar5 + (longlong)(int)uVar9 * 0x128 + 0x88);
  lVar6 = *(longlong *)(pFVar5 + (longlong)(int)uVar9 * 0x128 + 0x80);
  if (iVar4 < 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  uVar9 = 0;
  if (param_1 < iVar4) {
    uVar9 = uVar12;
  }
  if (uVar9 == 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  fVar1 = *(float *)(lVar6 + lVar11);
  *param_2 = *param_2 + 1;
  uVar9 = *param_2;
  uVar10 = 0;
  if ((int)uVar9 < param_3->ArrayNum) {
    uVar10 = ~uVar9 >> 0x1f;
  }
  if (uVar10 == 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  pFVar5 = (param_3->AllocatorInstance).Data;
  iVar4 = *(int *)(pFVar5 + (longlong)(int)uVar9 * 0x128 + 0x88);
  lVar6 = *(longlong *)(pFVar5 + (longlong)(int)uVar9 * 0x128 + 0x80);
  if (iVar4 < 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  uVar9 = 0;
  if (param_1 < iVar4) {
    uVar9 = uVar12;
  }
  if (uVar9 == 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  fVar2 = *(float *)(lVar6 + lVar11);
  *param_2 = *param_2 + 1;
  uVar9 = *param_2;
  uVar10 = 0;
  if ((int)uVar9 < param_3->ArrayNum) {
    uVar10 = ~uVar9 >> 0x1f;
  }
  if (uVar10 == 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  pFVar5 = (param_3->AllocatorInstance).Data;
  iVar4 = *(int *)(pFVar5 + (longlong)(int)uVar9 * 0x128 + 0x88);
  lVar6 = *(longlong *)(pFVar5 + (longlong)(int)uVar9 * 0x128 + 0x80);
  if (iVar4 < 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  uVar9 = 0;
  if (param_1 < iVar4) {
    uVar9 = uVar12;
  }
  if (uVar9 == 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  fVar3 = *(float *)(lVar6 + lVar11);
  *param_2 = *param_2 + 1;
  (param_4->Scale3D).XY.m128d_f64[0] = (double)fVar1;
  (param_4->Scale3D).XY.m128d_f64[1] = (double)fVar2;
  (param_4->Scale3D).ZW.m128d_f64[0] = (double)fVar3;
  (param_4->Scale3D).ZW.m128d_f64[1] = 0.0;
  return;
}

// FillTransformInterpolated @ 14d0ab420

void __cdecl
LiveLinkTransformHandlerUtils::FillTransformInterpolated
          (FFrameTime *param_1,int *param_2,
          TArray<FMovieSceneFloatChannel,TSizedDefaultAllocator<32>_> *param_3,
          TTransform<double> *param_4)

{
  uint uVar1;
  code *pcVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  bool bVar5;
  uint uVar6;
  longlong lVar7;
  float *pfVar8;
  longlong lVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  float local_a8;
  float local_a4;
  float local_a0;
  TRotator<double> local_98;
  TQuat<double> local_78;
  undefined1 local_58 [16];
  double local_48;
  
  lVar9 = 3;
  pfVar8 = &local_a8;
  lVar7 = 3;
  do {
    uVar1 = *param_2;
    *param_2 = uVar1 + 1;
    uVar6 = 0;
    if ((int)uVar1 < param_3->ArrayNum) {
      uVar6 = ~uVar1 >> 0x1f;
    }
    if (uVar6 == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    FMovieSceneFloatChannel::Evaluate
              ((FMovieSceneFloatChannel *)
               ((param_3->AllocatorInstance).Data + (longlong)(int)uVar1 * 0x128),*param_1,pfVar8);
    pfVar8 = pfVar8 + 1;
    lVar7 = lVar7 + -1;
  } while (lVar7 != 0);
  pfVar8 = &local_a8;
  lVar7 = 3;
  local_48 = (double)local_a0;
  uVar10 = SUB84((double)local_a4,0);
  uVar11 = (undefined4)((ulonglong)(double)local_a4 >> 0x20);
  local_58._8_4_ = uVar10;
  local_58._0_8_ = (double)local_a8;
  local_58._12_4_ = uVar11;
  auVar3._8_4_ = uVar10;
  auVar3._0_8_ = (double)local_a8;
  auVar3._12_4_ = uVar11;
  *(undefined1 (*) [16])(param_4->Translation).XY.m128d_f64 = auVar3;
  (param_4->Translation).ZW.m128d_f64[0] = local_48;
  (param_4->Translation).ZW.m128d_f64[1] = 0.0;
  do {
    uVar1 = *param_2;
    *param_2 = uVar1 + 1;
    uVar6 = 0;
    if ((int)uVar1 < param_3->ArrayNum) {
      uVar6 = ~uVar1 >> 0x1f;
    }
    if (uVar6 == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    FMovieSceneFloatChannel::Evaluate
              ((FMovieSceneFloatChannel *)
               ((param_3->AllocatorInstance).Data + (longlong)(int)uVar1 * 0x128),*param_1,pfVar8);
    pfVar8 = pfVar8 + 1;
    lVar7 = lVar7 + -1;
  } while (lVar7 != 0);
  local_98.Pitch = (double)local_a4;
  local_98.Yaw = (double)local_a0;
  local_98.Roll = (double)local_a8;
  UE::Math::TRotator<double>::Quaternion(&local_98,&local_78);
  pfVar8 = &local_a8;
  (param_4->Rotation).XY.m128d_f64[0] = local_78.X;
  (param_4->Rotation).XY.m128d_f64[1] = local_78.Y;
  (param_4->Rotation).ZW.m128d_f64[0] = local_78.Z;
  (param_4->Rotation).ZW.m128d_f64[1] = local_78.W;
  do {
    uVar1 = *param_2;
    *param_2 = uVar1 + 1;
    uVar6 = 0;
    if ((int)uVar1 < param_3->ArrayNum) {
      uVar6 = ~uVar1 >> 0x1f;
    }
    if (uVar6 == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    FMovieSceneFloatChannel::Evaluate
              ((FMovieSceneFloatChannel *)
               ((param_3->AllocatorInstance).Data + (longlong)(int)uVar1 * 0x128),*param_1,pfVar8);
    pfVar8 = pfVar8 + 1;
    lVar9 = lVar9 + -1;
  } while (lVar9 != 0);
  auVar4._8_4_ = SUB84((double)local_a4,0);
  auVar4._0_8_ = (double)local_a8;
  auVar4._12_4_ = (int)((ulonglong)(double)local_a4 >> 0x20);
  *(undefined1 (*) [16])(param_4->Scale3D).XY.m128d_f64 = auVar4;
  (param_4->Scale3D).ZW.m128d_f64[0] = (double)local_a0;
  (param_4->Scale3D).ZW.m128d_f64[1] = 0.0;
  return;
}

// FillVector @ 14d0ab6b0

void __cdecl
LiveLinkPropertyHandlerUtils::FillVector
          (int param_1,int *param_2,
          TArray<FMovieSceneFloatChannel,TSizedDefaultAllocator<32>_> *param_3,
          TVector<double> *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  longlong lVar6;
  code *pcVar7;
  bool bVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  longlong lVar12;
  
  uVar9 = *param_2;
  uVar11 = 0;
  if ((int)uVar9 < param_3->ArrayNum) {
    uVar11 = ~uVar9 >> 0x1f;
  }
  if (uVar11 == 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  pFVar5 = (param_3->AllocatorInstance).Data;
  iVar4 = *(int *)(pFVar5 + (longlong)(int)uVar9 * 0x128 + 0x88);
  lVar6 = *(longlong *)(pFVar5 + (longlong)(int)uVar9 * 0x128 + 0x80);
  if (iVar4 < 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  uVar11 = (uint)~param_1 >> 0x1f;
  uVar9 = 0;
  if (param_1 < iVar4) {
    uVar9 = uVar11;
  }
  if (uVar9 == 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  lVar12 = (longlong)param_1 * 0x1c;
  fVar1 = *(float *)(lVar6 + lVar12);
  *param_2 = *param_2 + 1;
  uVar9 = *param_2;
  uVar10 = 0;
  if ((int)uVar9 < param_3->ArrayNum) {
    uVar10 = ~uVar9 >> 0x1f;
  }
  if (uVar10 == 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  pFVar5 = (param_3->AllocatorInstance).Data;
  iVar4 = *(int *)(pFVar5 + (longlong)(int)uVar9 * 0x128 + 0x88);
  lVar6 = *(longlong *)(pFVar5 + (longlong)(int)uVar9 * 0x128 + 0x80);
  if (iVar4 < 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  uVar9 = 0;
  if (param_1 < iVar4) {
    uVar9 = uVar11;
  }
  if (uVar9 == 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  fVar2 = *(float *)(lVar6 + lVar12);
  *param_2 = *param_2 + 1;
  uVar9 = *param_2;
  uVar10 = 0;
  if ((int)uVar9 < param_3->ArrayNum) {
    uVar10 = ~uVar9 >> 0x1f;
  }
  if (uVar10 == 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  pFVar5 = (param_3->AllocatorInstance).Data;
  iVar4 = *(int *)(pFVar5 + (longlong)(int)uVar9 * 0x128 + 0x88);
  lVar6 = *(longlong *)(pFVar5 + (longlong)(int)uVar9 * 0x128 + 0x80);
  if (iVar4 < 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  uVar9 = 0;
  if (param_1 < iVar4) {
    uVar9 = uVar11;
  }
  if (uVar9 == 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  fVar3 = *(float *)(lVar6 + lVar12);
  *param_2 = *param_2 + 1;
  (param_4->field0_0x0)._s_0.X = (double)fVar1;
  (param_4->field0_0x0)._s_0.Y = (double)fVar2;
  (param_4->field0_0x0)._s_0.Z = (double)fVar3;
  return;
}

// FillVectorInterpolated @ 14d0ab9b0

void __cdecl
LiveLinkPropertyHandlerUtils::FillVectorInterpolated
          (FFrameTime *param_1,int *param_2,
          TArray<FMovieSceneFloatChannel,TSizedDefaultAllocator<32>_> *param_3,
          TVector<double> *param_4)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  longlong lVar5;
  float *pfVar6;
  float local_28;
  float local_24;
  float local_20;
  
  pfVar6 = &local_28;
  lVar5 = 3;
  do {
    uVar1 = *param_2;
    *param_2 = uVar1 + 1;
    uVar4 = 0;
    if ((int)uVar1 < param_3->ArrayNum) {
      uVar4 = ~uVar1 >> 0x1f;
    }
    if (uVar4 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    FMovieSceneFloatChannel::Evaluate
              ((FMovieSceneFloatChannel *)
               ((param_3->AllocatorInstance).Data + (longlong)(int)uVar1 * 0x128),*param_1,pfVar6);
    pfVar6 = pfVar6 + 1;
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  (param_4->field0_0x0)._s_0.X = (double)local_28;
  (param_4->field0_0x0)._s_0.Y = (double)local_24;
  (param_4->field0_0x0)._s_0.Z = (double)local_20;
  return;
}

// GetTypeHash @ 14d0b2e60

uint __cdecl GetTypeHash(FPropertyNameKey *param_1)

{
  FName FVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  FVar1 = param_1->PropertyName;
  uVar2 = GetTypeHash(FVar1.ComparisonIndex.Value);
  uVar2 = uVar2 + FVar1.Number;
  FVar1 = param_1->StructName;
  uVar3 = GetTypeHash(FVar1.ComparisonIndex.Value);
  uVar5 = (FVar1.Number - uVar2) + uVar3 ^ uVar2 >> 0xd;
  uVar3 = (-0x61c88647 - uVar5) - uVar2 ^ uVar5 << 8;
  uVar4 = (uVar2 - uVar5) - uVar3 ^ uVar3 >> 0xd;
  uVar5 = (uVar5 - uVar4) - uVar3 ^ uVar4 >> 0xc;
  uVar2 = (uVar3 - uVar5) - uVar4 ^ uVar5 << 0x10;
  uVar3 = (uVar4 - uVar2) - uVar5 ^ uVar2 >> 5;
  uVar4 = (uVar5 - uVar3) - uVar2 ^ uVar3 >> 3;
  uVar2 = (uVar2 - uVar4) - uVar3 ^ uVar4 << 10;
  return (uVar3 - uVar2) - uVar4 ^ uVar2 >> 0xf;
}

// SetupDefaultValues @ 14d0b78c0

void __cdecl LiveLinkSectionUtils::SetupDefaultValues(UMovieSceneLiveLinkSubSection *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined8 *puVar4;
  void *_Src;
  undefined1 *puVar5;
  code *pcVar6;
  FScriptContainerElement *pFVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  FString *pFVar11;
  uint uVar12;
  ulonglong uVar13;
  ForAnyElementType FVar14;
  longlong lVar15;
  longlong *plVar16;
  FMovieSceneChannel *pFVar17;
  uint uVar18;
  FScriptContainerElement *pFVar19;
  longlong *plVar20;
  FMovieSceneChannel *pFVar21;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined1 local_c8;
  undefined1 local_c7;
  undefined1 local_c6 [2];
  uint local_c4;
  int local_c0;
  ForAnyElementType local_b8;
  int local_b0;
  int local_ac;
  uint local_a8;
  FScriptContainerElement *local_a0;
  FString local_98;
  FString local_88;
  FScriptContainerElement *local_78;
  FMovieSceneChannelData local_70;
  longlong *local_58;
  
  local_a8 = (param_1->SubSectionData).Properties.ArrayNum;
  uVar13 = (ulonglong)(int)local_a8;
  pFVar19 = (param_1->SubSectionData).Properties.AllocatorInstance.Data;
  local_c4 = 0;
  local_78 = pFVar19 + uVar13 * 0x58;
  do {
    pFVar7 = local_78;
    uVar18 = local_c4;
    if ((param_1->SubSectionData).Properties.ArrayNum != (int)uVar13) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<FLiveLinkPropertyData,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res10);
    }
    if (pFVar19 == pFVar7) {
      return;
    }
    iVar1 = *(int *)(pFVar19 + 0x10);
    plVar16 = *(longlong **)(pFVar19 + 8);
    plVar20 = plVar16 + (longlong)iVar1 * 0x25;
    while( true ) {
      if (*(int *)(pFVar19 + 0x10) != iVar1) {
        local_res18[0] = 0;
        `TCheckedPointerIterator<FMovieSceneFloatChannel,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res18);
      }
      if (plVar16 == plVar20) break;
      iVar9 = (**(code **)(*plVar16 + 0x50))(plVar16);
      if ((0 < iVar9) && (*(char *)((longlong)plVar16 + 0x94) == '\0')) {
        puVar3 = (undefined4 *)plVar16[0x10];
        if ((int)plVar16[0x11] < 0) {
          bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L"");
          if (bVar8) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
LAB_14d0b79a6:
          bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
          if (bVar8) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
        }
        else if ((int)plVar16[0x11] < 1) goto LAB_14d0b79a6;
        *(undefined4 *)(plVar16 + 0x12) = *puVar3;
        *(undefined1 *)((longlong)plVar16 + 0x94) = 1;
      }
      plVar16 = plVar16 + 0x25;
    }
    iVar1 = *(int *)(pFVar19 + 0x20);
    pFVar17 = *(FMovieSceneChannel **)(pFVar19 + 0x18);
    pFVar21 = (FMovieSceneChannel *)((longlong)iVar1 * 0x128 + (longlong)pFVar17);
    while( true ) {
      if (*(int *)(pFVar19 + 0x20) != iVar1) {
        local_res20[0] = 0;
        `TCheckedPointerIterator<FMovieSceneStringChannel,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res20);
      }
      if (pFVar17 == pFVar21) break;
      iVar10 = (**(code **)(pFVar17->_padding_ + 0x50))(pFVar17);
      iVar9 = local_c0;
      if (iVar10 < 1) {
LAB_14d0b7b28:
        bVar8 = false;
      }
      else {
        if (pFVar17[1].KeyDeletedEvent.field_0x8 == '\0') {
          FVar14.Data = (FScriptContainerElement *)0x0;
          local_98.Data.ArrayMax = -1;
          local_98.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          pFVar11 = &local_98;
          local_98.Data.ArrayNum = 0;
          uVar12 = 4;
        }
        else {
          ::FString::FString(&local_88,(FString *)&pFVar17[1].KeyAddedEvent.field_0x18);
          if ((local_88.Data.ArrayMax == -1) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsSet()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                 ,0xbd,
                                 L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                                ), bVar8)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          pFVar11 = &local_88;
          uVar12 = 2;
          FVar14.Data = local_88.Data.AllocatorInstance.Data;
        }
        uVar18 = uVar18 | 1 | uVar12;
        local_a0 = (FScriptContainerElement *)0x0;
        iVar9 = (pFVar11->Data).ArrayMax;
        local_c0 = -1;
        if (iVar9 != -1) {
          (pFVar11->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          (pFVar11->Data).ArrayNum = 0;
          (pFVar11->Data).ArrayMax = 0;
          local_c0 = iVar9;
          local_a0 = FVar14.Data;
        }
        iVar9 = local_c0;
        if ((((uVar18 & 4) != 0) && (uVar18 = uVar18 & 0xfffffffb, local_98.Data.ArrayMax != -1)) &&
           (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
          FMemory::Free(local_98.Data.AllocatorInstance.Data);
        }
        if ((((uVar18 & 2) != 0) && (uVar18 = uVar18 & 0xfffffffd, local_88.Data.ArrayMax != -1)) &&
           (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
          FMemory::Free(local_88.Data.AllocatorInstance.Data);
        }
        if (iVar9 != -1) goto LAB_14d0b7b28;
        bVar8 = true;
      }
      if ((((uVar18 & 1) != 0) && (uVar18 = uVar18 & 0xfffffffe, iVar9 != -1)) &&
         (local_a0 != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_a0);
      }
      if (bVar8) {
        FMovieSceneChannelData::FMovieSceneChannelData
                  (&local_70,pFVar17,
                   (TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)(pFVar17 + 1),
                   (FKeyHandleLookupTable *)&pFVar17[1].KeyDeletedEvent.field_0x10);
        local_58 = (longlong *)&pFVar17[1].KeyAddedEvent.field_0x8;
        if (((local_70.Times == (TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)0x0) ||
            (local_58 == (longlong *)0x0)) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Times && Values",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Channels\\MovieSceneChannelData.h"
                               ,0x122,L""), bVar8)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        plVar16 = local_58;
        if (((local_70.Times == (TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)0x0) ||
            (local_58 == (longlong *)0x0)) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Times && Values",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Channels\\MovieSceneChannelData.h"
                               ,0x2f3,L""), bVar8)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        puVar4 = (undefined8 *)*plVar16;
        iVar9 = (int)plVar16[1];
        if (iVar9 < 0) {
          bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L"");
          if (bVar8) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
LAB_14d0b7c0b:
          bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
          if (bVar8) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
        }
        else if (iVar9 < 1) goto LAB_14d0b7c0b;
        local_b8.Data = (FScriptContainerElement *)0x0;
        local_b0 = *(int *)(puVar4 + 1);
        lVar15 = (longlong)local_b0;
        _Src = (void *)*puVar4;
        if (local_b0 == 0) {
          local_ac = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,local_b0,0,&local_b8,local_b0,&local_ac);
          memcpy(local_b8.Data,_Src,lVar15 * 2);
        }
        pFVar17[1].KeyDeletedEvent.field_0x8 = 1;
        iVar9 = local_b0 + -1;
        if (local_b0 == 0) {
          iVar9 = 0;
        }
        ::FString::AssignRange
                  ((FString *)&pFVar17[1].KeyAddedEvent.field_0x18,(wchar_t *)local_b8.Data,iVar9);
        if (local_b8.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_b8.Data);
        }
      }
      pFVar17 = (FMovieSceneChannel *)&pFVar17[2].KeyMovedEvent.field_0x10;
    }
    iVar1 = *(int *)(pFVar19 + 0x30);
    plVar16 = *(longlong **)(pFVar19 + 0x28);
    plVar20 = plVar16 + (longlong)iVar1 * 0x24;
    local_c4 = uVar18;
    while( true ) {
      if (*(int *)(pFVar19 + 0x30) != iVar1) {
        local_c8 = 0;
        `TCheckedPointerIterator<FMovieSceneIntegerChannel,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_c8);
      }
      if (plVar16 == plVar20) break;
      iVar9 = (**(code **)(*plVar16 + 0x50))(plVar16);
      if ((0 < iVar9) && (*(char *)((longlong)plVar16 + 0x84) == '\0')) {
        puVar3 = (undefined4 *)plVar16[0x11];
        if ((int)plVar16[0x12] < 0) {
          bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L"");
          if (bVar8) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
LAB_14d0b7d6e:
          bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
          if (bVar8) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
        }
        else if ((int)plVar16[0x12] < 1) goto LAB_14d0b7d6e;
        uVar2 = *puVar3;
        *(undefined1 *)((longlong)plVar16 + 0x84) = 1;
        *(undefined4 *)(plVar16 + 0x10) = uVar2;
      }
      plVar16 = plVar16 + 0x24;
    }
    iVar1 = *(int *)(pFVar19 + 0x40);
    plVar16 = *(longlong **)(pFVar19 + 0x38);
    plVar20 = plVar16 + (longlong)iVar1 * 0x24;
    while( true ) {
      if (*(int *)(pFVar19 + 0x40) != iVar1) {
        local_c7 = 0;
        `TCheckedPointerIterator<FMovieSceneBoolChannel,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_c7);
      }
      if (plVar16 == plVar20) break;
      iVar9 = (**(code **)(*plVar16 + 0x50))(plVar16);
      if ((0 < iVar9) && (*(char *)((longlong)plVar16 + 0x81) == '\0')) {
        puVar5 = (undefined1 *)plVar16[0x11];
        if ((int)plVar16[0x12] < 0) {
          bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L"");
          if (bVar8) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
LAB_14d0b7e42:
          bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
          if (bVar8) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
        }
        else if ((int)plVar16[0x12] < 1) goto LAB_14d0b7e42;
        *(undefined1 *)(plVar16 + 0x10) = *puVar5;
        *(undefined1 *)((longlong)plVar16 + 0x81) = 1;
      }
      plVar16 = plVar16 + 0x24;
    }
    iVar1 = *(int *)(pFVar19 + 0x50);
    plVar16 = *(longlong **)(pFVar19 + 0x48);
    plVar20 = plVar16 + (longlong)iVar1 * 0x25;
    while( true ) {
      if (*(int *)(pFVar19 + 0x50) != iVar1) {
        local_c6[0] = 0;
        `TCheckedPointerIterator<FMovieSceneByteChannel,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_c6);
      }
      if (plVar16 == plVar20) break;
      iVar9 = (**(code **)(*plVar16 + 0x50))(plVar16);
      if ((0 < iVar9) && (*(char *)((longlong)plVar16 + 0x81) == '\0')) {
        puVar5 = (undefined1 *)plVar16[0x11];
        if ((int)plVar16[0x12] < 0) {
          bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L"");
          if (bVar8) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
LAB_14d0b7f18:
          bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
          if (bVar8) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
        }
        else if ((int)plVar16[0x12] < 1) goto LAB_14d0b7f18;
        *(undefined1 *)(plVar16 + 0x10) = *puVar5;
        *(undefined1 *)((longlong)plVar16 + 0x81) = 1;
      }
      plVar16 = plVar16 + 0x25;
    }
    pFVar19 = pFVar19 + 0x58;
    uVar13 = (ulonglong)local_a8;
  } while( true );
}

// Z_Construct_UClass_UMovieSceneLiveLinkSection_NoRegister @ 14d0b8510

UClass * __cdecl Z_Construct_UClass_UMovieSceneLiveLinkSection_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneLiveLinkSection.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/LiveLinkMovieScene",L"MovieSceneLiveLinkSection",
               &Z_Registration_Info_UClass_UMovieSceneLiveLinkSection.InnerSingleton,
               UMovieSceneLiveLinkSection::StaticRegisterNativesUMovieSceneLiveLinkSection,0x250,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieSceneLiveLinkSection>,
               InternalVTableHelperCtorCaller<UMovieSceneLiveLinkSection>,local_res8,
               UMovieSceneSection::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneLiveLinkSection.InnerSingleton;
}

// Z_Construct_UClass_UMovieSceneLiveLinkSubSectionAnimation_NoRegister @ 14d0b85d0

UClass * __cdecl Z_Construct_UClass_UMovieSceneLiveLinkSubSectionAnimation_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneLiveLinkSubSectionAnimation.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/LiveLinkMovieScene",L"MovieSceneLiveLinkSubSectionAnimation",
               &Z_Registration_Info_UClass_UMovieSceneLiveLinkSubSectionAnimation.InnerSingleton,
               UMovieSceneLiveLinkSubSectionAnimation::
               StaticRegisterNativesUMovieSceneLiveLinkSubSectionAnimation,0x60,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieSceneLiveLinkSubSectionAnimation>,
               InternalVTableHelperCtorCaller<UMovieSceneLiveLinkSubSectionAnimation>,local_res8,
               UMovieSceneLiveLinkSubSection::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneLiveLinkSubSectionAnimation.InnerSingleton;
}

// Z_Construct_UClass_UMovieSceneLiveLinkSubSectionBasicRole_NoRegister @ 14d0b8690

UClass * __cdecl Z_Construct_UClass_UMovieSceneLiveLinkSubSectionBasicRole_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneLiveLinkSubSectionBasicRole.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/LiveLinkMovieScene",L"MovieSceneLiveLinkSubSectionBasicRole",
               &Z_Registration_Info_UClass_UMovieSceneLiveLinkSubSectionBasicRole.InnerSingleton,
               UMovieSceneLiveLinkSubSectionBasicRole::
               StaticRegisterNativesUMovieSceneLiveLinkSubSectionBasicRole,0x60,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieSceneLiveLinkSubSectionBasicRole>,
               InternalVTableHelperCtorCaller<UMovieSceneLiveLinkSubSectionBasicRole>,local_res8,
               UMovieSceneLiveLinkSubSection::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneLiveLinkSubSectionBasicRole.InnerSingleton;
}

// Z_Construct_UClass_UMovieSceneLiveLinkSubSectionProperties_NoRegister @ 14d0b8750

UClass * __cdecl Z_Construct_UClass_UMovieSceneLiveLinkSubSectionProperties_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneLiveLinkSubSectionProperties.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/LiveLinkMovieScene",L"MovieSceneLiveLinkSubSectionProperties",
               &Z_Registration_Info_UClass_UMovieSceneLiveLinkSubSectionProperties.InnerSingleton,
               UMovieSceneLiveLinkSubSectionProperties::
               StaticRegisterNativesUMovieSceneLiveLinkSubSectionProperties,0x60,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieSceneLiveLinkSubSectionProperties>
               ,InternalVTableHelperCtorCaller<UMovieSceneLiveLinkSubSectionProperties>,local_res8,
               UMovieSceneLiveLinkSubSection::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneLiveLinkSubSectionProperties.InnerSingleton;
}

// Z_Construct_UClass_UMovieSceneLiveLinkTrack_NoRegister @ 14d0b8810

UClass * __cdecl Z_Construct_UClass_UMovieSceneLiveLinkTrack_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneLiveLinkTrack.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/LiveLinkMovieScene",L"MovieSceneLiveLinkTrack",
               &Z_Registration_Info_UClass_UMovieSceneLiveLinkTrack.InnerSingleton,
               UMovieSceneLiveLinkTrack::StaticRegisterNativesUMovieSceneLiveLinkTrack,0x158,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieSceneLiveLinkTrack>,
               InternalVTableHelperCtorCaller<UMovieSceneLiveLinkTrack>,local_res8,
               UMovieScenePropertyTrack::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneLiveLinkTrack.InnerSingleton;
}

// Z_Construct_UScriptStruct_FMovieSceneLiveLinkSectionTemplate @ 14d0b88d0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FMovieSceneLiveLinkSectionTemplate(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FMovieSceneLiveLinkSectionTemplate.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FMovieSceneLiveLinkSectionTemplate.InnerSingleton,
               &Z_Construct_UScriptStruct_FMovieSceneLiveLinkSectionTemplate_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FMovieSceneLiveLinkSectionTemplate.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FMovieSceneLiveLinkSectionTemplate.InnerSingleton;
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

// IMPLEMENT_MODULE_LiveLinkMovieScene @ 14d0b8960

void __cdecl IMPLEMENT_MODULE_LiveLinkMovieScene(void)

{
  return;
}

// PropertyCache'' @ 1504557e0

void __cdecl `dynamic_atexit_destructor_for_'FLiveLinkStructPropertyBindings::PropertyCache__(void)

{
  FLiveLinkStructPropertyBindings::PropertyCache._72_4_ = 0;
  if (FLiveLinkStructPropertyBindings::PropertyCache._64_8_ != 0) {
    FMemory::Free((void *)FLiveLinkStructPropertyBindings::PropertyCache._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<FLiveLinkStructPropertyBindings::FPropertyNameKey,FLiveLinkStructPropertyBindings::FPropertyWrapper>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FLiveLinkStructPropertyBindings::FPropertyNameKey,FLiveLinkStructPropertyBindings::FPropertyWrapper>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FLiveLinkStructPropertyBindings::FPropertyNameKey,FLiveLinkStructPropertyBindings::FPropertyWrapper>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&FLiveLinkStructPropertyBindings::PropertyCache);
  return;
}

// `dynamic_atexit_destructor_for_'CVarSequencerAlwaysSendInterpolatedLiveLink'' @ 150455820

void __cdecl _dynamic_atexit_destructor_for__CVarSequencerAlwaysSendInterpolatedLiveLink__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarSequencerAlwaysSendInterpolatedLiveLink);
  return;
}

// `dynamic_atexit_destructor_for_'ColorStrings'' @ 150455840

void __cdecl MovieSceneLiveLinkPropertiesUtil::_dynamic_atexit_destructor_for__ColorStrings__(void)

{
  DestructItems<FString,int>((FString *)ColorStrings.AllocatorInstance.Data,ColorStrings.ArrayNum);
  if (ColorStrings.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(ColorStrings.AllocatorInstance.Data);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'LogLiveLinkMovieScene'' @ 150455880

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogLiveLinkMovieScene__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogLiveLinkMovieScene);
  return;
}

// `dynamic_atexit_destructor_for_'StringArray'' @ 1504558a0

void __cdecl
MovieSceneLiveLinkSubSectionAnimationUtil::_dynamic_atexit_destructor_for__StringArray__(void)

{
  DestructItems<FString,int>((FString *)StringArray.AllocatorInstance.Data,StringArray.ArrayNum);
  if (StringArray.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(StringArray.AllocatorInstance.Data);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'TransformStrings'' @ 1504558e0

void __cdecl
MovieSceneLiveLinkPropertiesUtil::_dynamic_atexit_destructor_for__TransformStrings__(void)

{
  DestructItems<FString,int>
            ((FString *)TransformStrings.AllocatorInstance.Data,TransformStrings.ArrayNum);
  if (TransformStrings.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(TransformStrings.AllocatorInstance.Data);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'VectorStrings'' @ 150455920

void __cdecl MovieSceneLiveLinkPropertiesUtil::_dynamic_atexit_destructor_for__VectorStrings__(void)

{
  DestructItems<FString,int>((FString *)VectorStrings.AllocatorInstance.Data,VectorStrings.ArrayNum)
  ;
  if (VectorStrings.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(VectorStrings.AllocatorInstance.Data);
    return;
  }
  return;
}

