// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MediaCompositing
// Functions: 90

// `dynamic_initializer_for_'CVarAvoidSeekOnJump'' @ 141446e70

void __cdecl _dynamic_initializer_for__CVarAvoidSeekOnJump__(void)

{
  bool local_res8 [32];
  
  local_res8[0] = true;
  TAutoConsoleVariable<bool>::TAutoConsoleVariable<bool>
            (&CVarAvoidSeekOnJump,L"MediaTrack.AvoidSeekOnJump",local_res8,
             L"When the play head jumps (on loop for instance), seek only if needed, i.e. if player doesn\'t have cached samples already."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarAvoidSeekOnJump__);
  return;
}

// `dynamic_initializer_for_'CVarUpdatePlaybackRange'' @ 141446ec0

void __cdecl _dynamic_initializer_for__CVarUpdatePlaybackRange__(void)

{
  bool local_res8 [32];
  
  local_res8[0] = true;
  TAutoConsoleVariable<bool>::TAutoConsoleVariable<bool>
            (&CVarUpdatePlaybackRange,L"MediaTrack.UpdatePlaybackRange",local_res8,
             L"Update Player PlaybackRange. Improves looping performance with better pre-caching.",0
            );
  atexit(_dynamic_atexit_destructor_for__CVarUpdatePlaybackRange__);
  return;
}

// `dynamic_initializer_for_'MediaPlayerDataContainerSharedKey'' @ 141446f10

void __cdecl
UE::MediaCompositing::Private::_dynamic_initializer_for__MediaPlayerDataContainerSharedKey__(void)

{
  FMovieSceneSharedDataId FVar1;
  undefined4 extraout_var;
  
  FVar1 = FMovieSceneSharedDataId::Allocate();
  MediaPlayerDataContainerSharedKey.UniqueId.UniqueId =
       *(uint *)CONCAT44(extraout_var,FVar1.UniqueId);
  MediaPlayerDataContainerSharedKey.Operand.ObjectBindingID = (FGuid)ZEXT816(0);
  MediaPlayerDataContainerSharedKey.Operand.SequenceID.Value = 0;
  return;
}

// `dynamic_initializer_for_'ModuleRegistrantMediaCompositing'' @ 141446f60

void __cdecl _dynamic_initializer_for__ModuleRegistrantMediaCompositing__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "MediaCompositing";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"MediaCompositing",0x10);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,FStaticallyLinkedModuleRegistrant<FDefaultModuleImpl>::InitializeModule);
  return;
}

// `dynamic_initializer_for_'StatPtr_MovieSceneEval_ApplyProperties'' @ 141446fb0

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

// `dynamic_initializer_for_'StatPtr_MovieSceneEval_AquireComponentAccessLocks'' @ 141447040

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

// `dynamic_initializer_for_'StatPtr_MovieSceneEval_PersistentData_Access'' @ 1414470d0

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

// `dynamic_initializer_for_'StatPtr_MovieSceneEval_PropertyTrack_TokenExecute'' @ 141447160

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

// `dynamic_initializer_for_'StatPtr_MovieSceneEval_ReleaseComponentAccessLocks'' @ 1414471f0

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

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaCompositing_Source_MediaCompositing_Private_MovieScene_MovieSceneMediaPlayerPropertyTemplate_h__Script_MediaCompositing_3495251335'' @ 141447280

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaCompositing_Source_MediaCompositing_Private_MovieScene_MovieSceneMediaPlayerPropertyTemplate_h__Script_MediaCompositing_3495251335__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/MediaCompositing",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaCompositing_Source_MediaCompositing_Private_MovieScene_MovieSceneMediaPlayerPropertyTemplate_h__Script_MediaCompositing_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaCompositing_Source_MediaCompositing_Private_MovieScene_MovieSceneMediaTemplate_h__Script_MediaCompositing_3092136525'' @ 1414472c0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaCompositing_Source_MediaCompositing_Private_MovieScene_MovieSceneMediaTemplate_h__Script_MediaCompositing_3092136525__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/MediaCompositing",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaCompositing_Source_MediaCompositing_Private_MovieScene_MovieSceneMediaTemplate_h__Script_MediaCompositing_Statics
             ::ScriptStructInfo,2,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaCompositing_Source_MediaCompositing_Public_MovieSceneMediaPlayerPropertySection_h__Script_MediaCompositing_334101203'' @ 141447300

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaCompositing_Source_MediaCompositing_Public_MovieSceneMediaPlayerPropertySection_h__Script_MediaCompositing_334101203__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/MediaCompositing",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaCompositing_Source_MediaCompositing_Public_MovieSceneMediaPlayerPropertySection_h__Script_MediaCompositing_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaCompositing_Source_MediaCompositing_Public_MovieSceneMediaPlayerPropertyTrack_h__Script_MediaCompositing_1553708529'' @ 141447340

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaCompositing_Source_MediaCompositing_Public_MovieSceneMediaPlayerPropertyTrack_h__Script_MediaCompositing_1553708529__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/MediaCompositing",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaCompositing_Source_MediaCompositing_Public_MovieSceneMediaPlayerPropertyTrack_h__Script_MediaCompositing_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaCompositing_Source_MediaCompositing_Public_MovieSceneMediaSection_h__Script_MediaCompositing_2488935002'' @ 141447380

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaCompositing_Source_MediaCompositing_Public_MovieSceneMediaSection_h__Script_MediaCompositing_2488935002__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/MediaCompositing",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaCompositing_Source_MediaCompositing_Public_MovieSceneMediaSection_h__Script_MediaCompositing_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaCompositing_Source_MediaCompositing_Public_MovieSceneMediaTrack_h__Script_MediaCompositing_2979582063'' @ 1414473c0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaCompositing_Source_MediaCompositing_Public_MovieSceneMediaTrack_h__Script_MediaCompositing_2979582063__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/MediaCompositing",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaCompositing_Source_MediaCompositing_Public_MovieSceneMediaTrack_h__Script_MediaCompositing_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferPackage_UPackage__Script_MediaCompositing'' @ 141447400

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferPackage_UPackage__Script_MediaCompositing__(void)

{
  FPackageReloadVersionInfo local_res8 [4];
  
  local_res8[0].BodyHash = 0xef48d36f;
  local_res8[0].DeclarationsHash = 0xec710a2a;
  RegisterCompiledInInfo
            (Z_Construct_UPackage__Script_MediaCompositing,L"/Script/MediaCompositing",
             &Z_Registration_Info_UPackage__Script_MediaCompositing,local_res8);
  return;
}

// Z_Construct_UScriptStruct_FMovieSceneMediaSectionParams @ 14ea61f80

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FMovieSceneMediaSectionParams(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FMovieSceneMediaSectionParams.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FMovieSceneMediaSectionParams.InnerSingleton,
               &Z_Construct_UScriptStruct_FMovieSceneMediaSectionParams_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FMovieSceneMediaSectionParams.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FMovieSceneMediaSectionParams.InnerSingleton;
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

// NewProp_bLooping_SetBit @ 14ea62000

void __cdecl
Z_Construct_UScriptStruct_FMovieSceneMediaSectionParams_Statics::NewProp_bLooping_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x48) = 1;
  return;
}

// NewStructOps @ 14ea62010

void * __cdecl Z_Construct_UScriptStruct_FMovieSceneMediaSectionParams_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x180;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FMovieSceneMediaSectionParams,&UE::CoreUObject::Private::Construct<FMovieSceneMediaSectionParams>,&UE::CoreUObject::Private::ConstructForTests<FMovieSceneMediaSectionParams>,&UE::CoreUObject::Private::Destruct<FMovieSceneMediaSectionParams>,&UE::CoreUObject::Private::Copy<FMovieSceneMediaSectionParams>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14ea62110

void * __cdecl Z_Construct_UScriptStruct_FMovieSceneMediaSectionTemplate_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x1a8;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FMovieSceneMediaSectionTemplate,&UE::CoreUObject::Private::Construct<FMovieSceneMediaSectionTemplate>,&UE::CoreUObject::Private::ConstructForTests<FMovieSceneMediaSectionTemplate>,&UE::CoreUObject::Private::Destruct<FMovieSceneMediaSectionTemplate>,&UE::CoreUObject::Private::Copy<FMovieSceneMediaSectionTemplate>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_bLoop_SetBit @ 14ea62150

void __cdecl
Z_Construct_UScriptStruct_FMovieSceneMediaPlayerPropertySectionTemplate_Statics::
NewProp_bLoop_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x44) = 1;
  return;
}

// NewStructOps @ 14ea62160

void * __cdecl
Z_Construct_UScriptStruct_FMovieSceneMediaPlayerPropertySectionTemplate_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x48;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FMovieSceneMediaPlayerPropertySectionTemplate,&UE::CoreUObject::Private::Construct<FMovieSceneMediaPlayerPropertySectionTemplate>,&UE::CoreUObject::Private::ConstructForTests<FMovieSceneMediaPlayerPropertySectionTemplate>,&UE::CoreUObject::Private::Destruct<FMovieSceneMediaPlayerPropertySectionTemplate>,&UE::CoreUObject::Private::Copy<FMovieSceneMediaPlayerPropertySectionTemplate>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UPackage__Script_MediaCompositing @ 14ea621a0

UPackage * __cdecl Z_Construct_UPackage__Script_MediaCompositing(void)

{
  if (Z_Registration_Info_UPackage__Script_MediaCompositing.OuterSingleton == (UPackage *)0x0) {
    UECodeGen_Private::ConstructUPackage
              (&Z_Registration_Info_UPackage__Script_MediaCompositing.OuterSingleton,&PackageParams)
    ;
  }
  return Z_Registration_Info_UPackage__Script_MediaCompositing.OuterSingleton;
}

// Z_Construct_UClass_UMovieSceneMediaPlayerPropertyTrack @ 14ea621e0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMovieSceneMediaPlayerPropertyTrack(void)

{
  if (Z_Registration_Info_UClass_UMovieSceneMediaPlayerPropertyTrack.OuterSingleton == (UClass *)0x0
     ) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMovieSceneMediaPlayerPropertyTrack.OuterSingleton,
               &Z_Construct_UClass_UMovieSceneMediaPlayerPropertyTrack_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMovieSceneMediaPlayerPropertyTrack.OuterSingleton;
}

// Z_Construct_UClass_UMovieSceneMediaSection_NoRegister @ 14ea62220

UClass * __cdecl Z_Construct_UClass_UMovieSceneMediaSection_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneMediaSection.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MediaCompositing",L"MovieSceneMediaSection",
               &Z_Registration_Info_UClass_UMovieSceneMediaSection.InnerSingleton,
               UMovieSceneMediaSection::StaticRegisterNativesUMovieSceneMediaSection,0x2a0,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",InternalConstructor<UMovieSceneMediaSection>
               ,InternalVTableHelperCtorCaller<UMovieSceneMediaSection>,local_res8,
               UMovieSceneSection::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneMediaSection.InnerSingleton;
}

// Z_Construct_UClass_UMovieSceneMediaSection @ 14ea623a0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMovieSceneMediaSection(void)

{
  if (Z_Registration_Info_UClass_UMovieSceneMediaSection.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMovieSceneMediaSection.OuterSingleton,
               &Z_Construct_UClass_UMovieSceneMediaSection_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMovieSceneMediaSection.OuterSingleton;
}

// NewProp_bLooping_SetBit @ 14ea623e0

void __cdecl
Z_Construct_UClass_UMovieSceneMediaSection_Statics::NewProp_bLooping_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x11c) = 1;
  return;
}

// NewProp_bUseExternalMediaPlayer_SetBit @ 14ea623f0

void __cdecl
Z_Construct_UClass_UMovieSceneMediaSection_Statics::NewProp_bUseExternalMediaPlayer_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x138) = 1;
  return;
}

// NewProp_bManualFrameRateAlignment_SetBit @ 14ea62400

void __cdecl
Z_Construct_UClass_UMovieSceneMediaSection_Statics::NewProp_bManualFrameRateAlignment_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x154) = 1;
  return;
}

// NewProp_bHasMediaPlayerProxy_SetBit @ 14ea62410

void __cdecl
Z_Construct_UClass_UMovieSceneMediaSection_Statics::NewProp_bHasMediaPlayerProxy_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x160) = 1;
  return;
}

// Z_Construct_UClass_UMovieSceneMediaPlayerPropertySection @ 14ea62420

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMovieSceneMediaPlayerPropertySection(void)

{
  if (Z_Registration_Info_UClass_UMovieSceneMediaPlayerPropertySection.OuterSingleton ==
      (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMovieSceneMediaPlayerPropertySection.OuterSingleton,
               &Z_Construct_UClass_UMovieSceneMediaPlayerPropertySection_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMovieSceneMediaPlayerPropertySection.OuterSingleton;
}

// NewProp_bLoop_SetBit @ 14ea62460

void __cdecl
Z_Construct_UClass_UMovieSceneMediaPlayerPropertySection_Statics::NewProp_bLoop_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x118) = 1;
  return;
}

// `scalar_deleting_destructor' @ 14ea626c0

void * __thiscall
FMovieSceneMediaPlayerPropertySectionTemplate::_scalar_deleting_destructor_
          (FMovieSceneMediaPlayerPropertySectionTemplate *this,uint param_1)

{
  FMovieScenePropertySectionTemplate::~FMovieScenePropertySectionTemplate
            ((FMovieScenePropertySectionTemplate *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x48);
  }
  return this;
}

// Z_Construct_UClass_UMovieSceneMediaTrack @ 14ea62700

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMovieSceneMediaTrack(void)

{
  if (Z_Registration_Info_UClass_UMovieSceneMediaTrack.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMovieSceneMediaTrack.OuterSingleton,
               &Z_Construct_UClass_UMovieSceneMediaTrack_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMovieSceneMediaTrack.OuterSingleton;
}

// NewProp_bSynchronousScrubbing_SetBit @ 14ea62740

void __cdecl
Z_Construct_UClass_UMovieSceneMediaTrack_Statics::NewProp_bSynchronousScrubbing_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x120) = 1;
  return;
}

// `scalar_deleting_destructor' @ 14ea63d00

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void * __thiscall
FMovieSceneMediaSectionTemplate::_scalar_deleting_destructor_
          (FMovieSceneMediaSectionTemplate *this,uint param_1)

{
  FMovieSceneFloatChannel::~FMovieSceneFloatChannel(&(this->Params).ProxyTextureBlend);
  this->_padding_ = (longlong)&___7FMovieSceneEvalTemplateBase__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x1a8);
  }
  return this;
}

// CastChecked<UMovieSceneMediaPlayerPropertySection_const_,UMovieSceneSection_const_> @ 14ea654b0

UMovieSceneMediaPlayerPropertySection * __cdecl
CastChecked<UMovieSceneMediaPlayerPropertySection_const_,UMovieSceneSection_const_>
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
    pFVar3 = GetTypeName<UMovieSceneMediaPlayerPropertySection_const_>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = UMovieSceneMediaPlayerPropertySection::StaticClass();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
      == &pUVar2->_padding_)) {
    return (UMovieSceneMediaPlayerPropertySection *)param_1;
  }
  pFVar3 = GetTypeName<UMovieSceneMediaPlayerPropertySection_const_>(&local_28);
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

// CastChecked<UMovieSceneMediaSection_const_,UMovieSceneSection_const_> @ 14ea65570

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

UMovieSceneMediaSection * __cdecl
CastChecked<UMovieSceneMediaSection_const_,UMovieSceneSection_const_>(UMovieSceneSection *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UMovieSceneSection *)0x0) {
    pFVar3 = GetTypeName<UMovieSceneMediaSection_const_>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = UMovieSceneMediaSection::StaticClass();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
      == &pUVar2->_padding_)) {
    return (UMovieSceneMediaSection *)param_1;
  }
  pFVar3 = GetTypeName<UMovieSceneMediaSection_const_>(&local_28);
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

// CastChecked<UMediaPlayer,UObject> @ 14ea65630

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

UMediaPlayer * __cdecl CastChecked<UMediaPlayer,UObject>(UObject *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UObject *)0x0) {
    pFVar3 = GetTypeName<UMediaPlayer>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = Z_Construct_UClass_UMediaPlayer_NoRegister();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
     ((longlong *)
      *(undefined1 **)
       (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
      &pUVar2->_padding_)) {
    return (UMediaPlayer *)param_1;
  }
  pFVar3 = GetTypeName<UMediaPlayer>(&local_28);
  pwVar4 = L"";
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  pFVar3 = GetFullNameForCastLogError<UObject>(&local_18,param_1);
  if ((pFVar3->Data).ArrayNum != 0) {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar4,pwVar5);
}

// GetTypeName<UMovieSceneMediaPlayerPropertySection_const_> @ 14ea66360

FString * __cdecl
GetTypeName<UMovieSceneMediaPlayerPropertySection_const_>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = UMovieSceneMediaPlayerPropertySection::StaticClass();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetTypeName<UMovieSceneMediaSection_const_> @ 14ea663a0

FString * __cdecl GetTypeName<UMovieSceneMediaSection_const_>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = UMovieSceneMediaSection::StaticClass();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetTypeName<UMediaPlayer> @ 14ea663e0

FString * __cdecl GetTypeName<UMediaPlayer>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = Z_Construct_UClass_UMediaPlayer_NoRegister();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// InternalConstructor<UMovieSceneMediaPlayerPropertySection> @ 14ea66670

void __cdecl InternalConstructor<UMovieSceneMediaPlayerPropertySection>(FObjectInitializer *param_1)

{
  UMovieSceneSection *this;
  int iVar1;
  UClass *pUVar2;
  UObject *pUVar3;
  undefined8 uVar4;
  double dVar5;
  undefined1 in_XMM2 [16];
  undefined1 auVar6 [16];
  double dVar7;
  float fVar8;
  float fVar9;
  
  this = (UMovieSceneSection *)param_1->Obj;
  if (this != (UMovieSceneSection *)0x0) {
    UMovieSceneSection::UMovieSceneSection(this,param_1);
    (this->EvalOptions).CompletionMode = RestoreState;
    this->_padding_ = (longlong)&___7UMovieSceneMediaPlayerPropertySection__6B_;
    this[1]._padding_ = 0;
    *(undefined1 *)&this[1]._padding_ = 0;
    pUVar2 = Z_Construct_UClass_UMovieScene_NoRegister();
    pUVar3 = UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar2);
    if (pUVar3 == (UObject *)0x0) {
      uVar4 = 0x100000018;
    }
    else {
      uVar4 = *(undefined8 *)&pUVar3[7].field_0x20;
    }
    dVar7 = ((double)(int)uVar4 * __real_3fe0000000000000) / (double)(int)((ulonglong)uVar4 >> 0x20)
    ;
    auVar6._8_8_ = 0;
    auVar6._0_8_ = dVar7;
    auVar6 = roundpd(in_XMM2,auVar6,1);
    dVar5 = auVar6._0_8_;
    dVar7 = dVar7 - dVar5;
    if (__real_41dfffffffc00000 <= dVar5) {
      dVar5 = __real_41dfffffffc00000;
    }
    if (dVar5 <= __real_c1e0000000000000) {
      dVar5 = __real_c1e0000000000000;
    }
    iVar1 = (int)dVar7;
    fVar8 = (float)dVar7 - (float)iVar1;
    fVar9 = fVar8;
    if ((0.0 < fVar8) && (fVar9 = FFrameTime::MaxSubframe, fVar8 <= FFrameTime::MaxSubframe)) {
      fVar9 = fVar8;
    }
    fVar8 = FFrameTime::MaxSubframe;
    if (fVar9 <= FFrameTime::MaxSubframe) {
      fVar8 = fVar9;
    }
    if (fVar8 <= 0.0) {
      fVar8 = 0.0;
    }
    iVar1 = (int)dVar5 + iVar1;
    if (__real_3f000000 <= fVar8) {
      iVar1 = iVar1 + 1;
    }
    (this->PreRollFrames).Value = iVar1;
  }
  return;
}

// InternalConstructor<UMovieSceneMediaPlayerPropertyTrack> @ 14ea66780

void __cdecl InternalConstructor<UMovieSceneMediaPlayerPropertyTrack>(FObjectInitializer *param_1)

{
  UMovieScenePropertyTrack *this;
  
  this = (UMovieScenePropertyTrack *)param_1->Obj;
  if (this != (UMovieScenePropertyTrack *)0x0) {
    UMovieScenePropertyTrack::UMovieScenePropertyTrack(this,param_1);
    *(uint *)&this->_padding_ = (uint)this->_padding_ & 0xfffffffc;
    *(uint *)&this->_padding_ = (uint)this->_padding_ | 0xc;
    this->_padding_ =
         (longlong)
         &UMovieSceneMediaPlayerPropertyTrack::_vftable__for__UMovieSceneDecorationContainerObject__
    ;
    this->_padding_ =
         (longlong)&UMovieSceneMediaPlayerPropertyTrack::_vftable__for__IMovieSceneTrackVirtualAPI__
    ;
    this[1]._padding_ = (longlong)&___7UMovieSceneMediaPlayerPropertyTrack__6B_;
  }
  return;
}

// InternalConstructor<UMovieSceneMediaSection> @ 14ea667d0

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __cdecl InternalConstructor<UMovieSceneMediaSection>(FObjectInitializer *param_1)

{
  if ((UMovieSceneMediaSection *)param_1->Obj != (UMovieSceneMediaSection *)0x0) {
    UMovieSceneMediaSection::UMovieSceneMediaSection
              ((UMovieSceneMediaSection *)param_1->Obj,param_1);
    return;
  }
  return;
}

// InternalConstructor<UMovieSceneMediaTrack> @ 14ea667f0

void __cdecl InternalConstructor<UMovieSceneMediaTrack>(FObjectInitializer *param_1)

{
  UMovieSceneNameableTrack *this;
  
  this = (UMovieSceneNameableTrack *)param_1->Obj;
  if (this != (UMovieSceneNameableTrack *)0x0) {
    UMovieSceneNameableTrack::UMovieSceneNameableTrack(this,param_1);
    *(uint *)&this->field_0x78 = *(uint *)&this->field_0x78 & 0xfffffffc;
    *(uint *)&this->field_0x78 = *(uint *)&this->field_0x78 | 0xc;
    *(undefined ***)this =
         &UMovieSceneMediaTrack::_vftable__for__UMovieSceneDecorationContainerObject__;
    this[1].field_0x8 = 0;
    *(undefined ***)&this->field_0x70 =
         &UMovieSceneMediaTrack::_vftable__for__IMovieSceneTrackVirtualAPI__;
    *(undefined ***)(this + 1) = &___7UMovieSceneMediaTrack__6B_;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined8 *)&this[1].field_0x18 = 0;
    FMovieSceneBlendTypeField::Add((FMovieSceneBlendTypeField *)&this->field_0x88,Absolute);
    return;
  }
  return;
}

// InternalVTableHelperCtorCaller<UMovieSceneMediaPlayerPropertySection> @ 14ea66870

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UMovieSceneMediaPlayerPropertySection>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UMovieSceneSection *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMovieSceneMediaPlayerPropertySection::GetPrivateStaticClass();
  this = (UMovieSceneSection *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UMovieSceneSection *)0x0) {
    UMovieSceneSection::UMovieSceneSection(this,param_1);
    this->_padding_ = (longlong)&___7UMovieSceneMediaPlayerPropertySection__6B_;
    this[1]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMovieSceneMediaPlayerPropertyTrack> @ 14ea66930

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UMovieSceneMediaPlayerPropertyTrack>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UMovieScenePropertyTrack *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMovieSceneMediaPlayerPropertyTrack::GetPrivateStaticClass();
  this = (UMovieScenePropertyTrack *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UMovieScenePropertyTrack *)0x0) {
    UMovieScenePropertyTrack::UMovieScenePropertyTrack(this,param_1);
    this->_padding_ =
         (longlong)
         &UMovieSceneMediaPlayerPropertyTrack::_vftable__for__UMovieSceneDecorationContainerObject__
    ;
    this->_padding_ =
         (longlong)&UMovieSceneMediaPlayerPropertyTrack::_vftable__for__IMovieSceneTrackVirtualAPI__
    ;
    this[1]._padding_ = (longlong)&___7UMovieSceneMediaPlayerPropertyTrack__6B_;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMovieSceneMediaSection> @ 14ea66a00

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UMovieSceneMediaSection>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UMovieSceneSection *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMovieSceneMediaSection::GetPrivateStaticClass();
  this = (UMovieSceneSection *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UMovieSceneSection *)0x0) {
    UMovieSceneSection::UMovieSceneSection(this,param_1);
    this->_padding_ = (longlong)&___7UMovieSceneMediaSection__6B_;
    this[1]._padding_ = 0;
    *(undefined4 *)&this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined1 *)&this[1]._padding_ = 0;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0x3e4ccccd;
    *(undefined4 *)&this[1]._padding_ = 60000;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 1;
    FMovieSceneBoolChannel::FMovieSceneBoolChannel((FMovieSceneBoolChannel *)&this[1]._padding_);
    this[2]._padding_ = 0;
    this[2].EvalOptions.bCanEditCompletionMode = false;
    this[2].EvalOptions.CompletionMode = KeepState;
    this[2].EventHandlers = (TDataEventContainer<UE::MovieScene::ISectionEventHandler>)0x0;
    this[2].field_0x73 = 0;
    this[2]._padding_ = 0;
    this[2].Easing.AutoEaseInDuration = 0;
    this[2].Easing.AutoEaseOutDuration = -1;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMovieSceneMediaTrack> @ 14ea66b20

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UMovieSceneMediaTrack>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UMovieSceneNameableTrack *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMovieSceneMediaTrack::GetPrivateStaticClass();
  this = (UMovieSceneNameableTrack *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UMovieSceneNameableTrack *)0x0) {
    UMovieSceneNameableTrack::UMovieSceneNameableTrack(this,param_1);
    this[1].field_0x8 = 0;
    *(undefined ***)this =
         &UMovieSceneMediaTrack::_vftable__for__UMovieSceneDecorationContainerObject__;
    *(undefined ***)&this->field_0x70 =
         &UMovieSceneMediaTrack::_vftable__for__IMovieSceneTrackVirtualAPI__;
    *(undefined ***)(this + 1) = &___7UMovieSceneMediaTrack__6B_;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined8 *)&this[1].field_0x18 = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// NewObject<UMovieSceneMediaPlayerPropertySection> @ 14ea66c00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UMovieSceneMediaPlayerPropertySection * __cdecl
NewObject<UMovieSceneMediaPlayerPropertySection>
          (UObject *param_1,FName param_2,EObjectFlags param_3,UObject *param_4,bool param_5,
          FObjectInstancingGraph *param_6,UPackage *param_7)

{
  UClass *pUVar1;
  UMovieSceneMediaPlayerPropertySection *pUVar2;
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
  pUVar1 = UMovieSceneMediaPlayerPropertySection::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_b8,pUVar1);
  local_b8[0x20] = param_5;
  local_b8._48_8_ = param_6;
  local_b8._56_8_ = param_7;
  local_b8._8_8_ = param_1;
  local_b8._16_8_ = param_2;
  local_b8._24_4_ = param_3;
  local_b8._40_8_ = param_4;
  pUVar2 = (UMovieSceneMediaPlayerPropertySection *)
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

// NewObject<UMovieSceneMediaSection> @ 14ea66cf0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UMovieSceneMediaSection * __cdecl
NewObject<UMovieSceneMediaSection>
          (UObject *param_1,FName param_2,EObjectFlags param_3,UObject *param_4,bool param_5,
          FObjectInstancingGraph *param_6,UPackage *param_7)

{
  UClass *pUVar1;
  UMovieSceneMediaSection *pUVar2;
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
  pUVar1 = UMovieSceneMediaSection::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_b8,pUVar1);
  local_b8[0x20] = param_5;
  local_b8._48_8_ = param_6;
  local_b8._56_8_ = param_7;
  local_b8._8_8_ = param_1;
  local_b8._16_8_ = param_2;
  local_b8._24_4_ = param_3;
  local_b8._40_8_ = param_4;
  pUVar2 = (UMovieSceneMediaSection *)
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

// `vector_deleting_destructor'`adjustor{328}' @ 14ea68370

/* [thunk]:public: virtual void * __ptr64 __cdecl UMovieSceneMediaPlayerPropertyTrack::`vector
   deleting destructor'`adjustor{328}' (unsigned int) __ptr64 */

void * __thiscall
UMovieSceneMediaPlayerPropertyTrack::_vector_deleting_destructor__adjustor_328__
          (UMovieSceneMediaPlayerPropertyTrack *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UMovieSceneMediaPlayerPropertyTrack *)&this[-1].field_0x8,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{280}' @ 14ea68384

/* [thunk]:public: virtual void * __ptr64 __cdecl UMovieSceneMediaTrack::`vector deleting
   destructor'`adjustor{280}' (unsigned int) __ptr64 */

void * __thiscall
UMovieSceneMediaTrack::_vector_deleting_destructor__adjustor_280__
          (UMovieSceneMediaTrack *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UMovieSceneMediaTrack *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `scalar_deleting_destructor' @ 14ea683a0

void * __thiscall
TBaseRawMethodDelegateInstance<0,FMovieSceneMediaData,void___cdecl(enum_EMediaEvent),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ea683d0

void * __thiscall
TBaseRawMethodDelegateInstance<0,FMovieSceneMediaPlayerStore,void___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,FMovieSceneMediaPlayerStore,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ea68400

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FMovieSceneMediaPlayerStore,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FMovieSceneMediaPlayerStore,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,200);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ea68440

void * __thiscall
TStatelessPreAnimatedTokenProducer<FMediaPlayerPreAnimatedState>::_scalar_deleting_destructor_
          (TStatelessPreAnimatedTokenProducer<FMediaPlayerPreAnimatedState> *this,uint param_1)

{
  *this = (TStatelessPreAnimatedTokenProducer<FMediaPlayerPreAnimatedState>)
          &___7IMovieScenePreAnimatedTokenProducer__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ea68480

void * __thiscall
FMediaPlayerPreAnimatedState::_scalar_deleting_destructor_
          (FMediaPlayerPreAnimatedState *this,uint param_1)

{
  *this = (FMediaPlayerPreAnimatedState)&___7IMovieScenePreAnimatedToken__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ea684c0

void * __thiscall
FMediaPlayerSectionExecutionToken::_scalar_deleting_destructor_
          (FMediaPlayerSectionExecutionToken *this,uint param_1)

{
  this->_padding_ = (longlong)&___7IMovieSceneExecutionToken__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ea68500

void * __thiscall
FMediaPlayerSectionPreRollExecutionToken::_scalar_deleting_destructor_
          (FMediaPlayerSectionPreRollExecutionToken *this,uint param_1)

{
  this->_padding_ = (longlong)&___7IMovieSceneExecutionToken__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ea68540

void * __thiscall
FMediaSectionBaseExecutionToken::_scalar_deleting_destructor_
          (FMediaSectionBaseExecutionToken *this,uint param_1)

{
  this->_padding_ = (longlong)&___7IMovieSceneExecutionToken__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x68);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ea68580

void * __thiscall
FMediaSectionExecutionToken::_scalar_deleting_destructor_
          (FMediaSectionExecutionToken *this,uint param_1)

{
  this->_padding_ = (longlong)&___7IMovieSceneExecutionToken__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x78);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ea685c0

void * __thiscall
FMediaSectionPostRollExecutionToken::_scalar_deleting_destructor_
          (FMediaSectionPostRollExecutionToken *this,uint param_1)

{
  *this = (FMediaSectionPostRollExecutionToken)&___7IMovieSceneExecutionToken__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ea68600

void * __thiscall
FMediaSectionPreRollExecutionToken::_scalar_deleting_destructor_
          (FMediaSectionPreRollExecutionToken *this,uint param_1)

{
  this->_padding_ = (longlong)&___7IMovieSceneExecutionToken__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ea68640

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

void * __thiscall
FMovieSceneMediaData::_scalar_deleting_destructor_(FMovieSceneMediaData *this,uint param_1)

{
  ~FMovieSceneMediaData(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xa8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ea68680

void * __thiscall
FMovieSceneMediaPlayerStore::_scalar_deleting_destructor_
          (FMovieSceneMediaPlayerStore *this,uint param_1)

{
  ~FMovieSceneMediaPlayerStore(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xb8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ea686c0

void * __thiscall
FMovieSceneMediaPlayerStoreContainer::_scalar_deleting_destructor_
          (FMovieSceneMediaPlayerStoreContainer *this,uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->MediaPlayerStore).SharedReferenceCount.ReferenceController);
  this->_padding_ = (longlong)&___7IPersistentEvaluationData__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ea68710

void * __thiscall
UMovieSceneMediaPlayerPropertySection::_scalar_deleting_destructor_
          (UMovieSceneMediaPlayerPropertySection *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UMovieSceneMediaPlayerPropertySection__6B_;
  UMovieSceneSection::~UMovieSceneSection((UMovieSceneSection *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x120);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ea68770

void * __thiscall
UMovieSceneMediaPlayerPropertyTrack::_scalar_deleting_destructor_
          (UMovieSceneMediaPlayerPropertyTrack *this,uint param_1)

{
  *(undefined ***)this = &_vftable__for__UMovieSceneDecorationContainerObject__;
  *(undefined ***)&this->field_0x70 = &_vftable__for__IMovieSceneTrackVirtualAPI__;
  *(undefined ***)&this->field_0x148 = &___7IMovieSceneTrackTemplateProducer__6B_;
  UMovieScenePropertyTrack::~UMovieScenePropertyTrack((UMovieScenePropertyTrack *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x150);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ea687f0

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void * __thiscall
UMovieSceneMediaSection::_scalar_deleting_destructor_(UMovieSceneMediaSection *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UMovieSceneMediaSection__6B_;
  FMovieSceneBoolChannel::~FMovieSceneBoolChannel(&this->ChannelCanPlayerBeOpen);
  UMovieSceneSection::~UMovieSceneSection((UMovieSceneSection *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x2a0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ea68860

void * __thiscall
UMovieSceneMediaTrack::_scalar_deleting_destructor_(UMovieSceneMediaTrack *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UMovieSceneDecorationContainerObject__;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneTrackVirtualAPI__;
  this->_padding_ = (longlong)&___7UMovieSceneMediaTrack__6B_;
  pFVar1 = (this->MediaSections).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7IMovieSceneTrackTemplateProducer__6B_;
  UMovieSceneNameableTrack::~UMovieSceneNameableTrack((UMovieSceneNameableTrack *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x138);
  }
  return this;
}

// EmptyLinkFunctionForGeneratedCodeMediaCompositing_init @ 14ea6a2d0

void __cdecl EmptyLinkFunctionForGeneratedCodeMediaCompositing_init(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMovieSceneMediaPlayerPropertySection @ 14ea6a2e0

void __cdecl EmptyLinkFunctionForGeneratedCodeMovieSceneMediaPlayerPropertySection(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMovieSceneMediaPlayerPropertyTemplate @ 14ea6a2f0

void __cdecl EmptyLinkFunctionForGeneratedCodeMovieSceneMediaPlayerPropertyTemplate(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMovieSceneMediaPlayerPropertyTrack @ 14ea6a300

void __cdecl EmptyLinkFunctionForGeneratedCodeMovieSceneMediaPlayerPropertyTrack(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMovieSceneMediaSection @ 14ea6a310

void __cdecl EmptyLinkFunctionForGeneratedCodeMovieSceneMediaSection(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMovieSceneMediaTemplate @ 14ea6a320

void __cdecl EmptyLinkFunctionForGeneratedCodeMovieSceneMediaTemplate(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMovieSceneMediaTrack @ 14ea6a330

void __cdecl EmptyLinkFunctionForGeneratedCodeMovieSceneMediaTrack(void)

{
  return;
}

// GetTypeHash @ 14ea6cd70

uint __cdecl GetTypeHash(FSharedPersistentDataKey *param_1)

{
  int iVar1;
  ulong64 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar4 = (param_1->UniqueId).UniqueId;
  uVar2 = CityHash64((char *)&param_1->Operand,0x10);
  iVar1 = (int)uVar2;
  uVar5 = (param_1->Operand).SequenceID.Value - iVar1 ^ (uint)(uVar2 >> 0xd) & 0x7ffff;
  uVar3 = (-0x61c88647 - uVar5) - iVar1 ^ uVar5 << 8;
  uVar6 = (iVar1 - uVar3) - uVar5 ^ uVar3 >> 0xd;
  uVar5 = (uVar5 - uVar6) - uVar3 ^ uVar6 >> 0xc;
  uVar3 = (uVar3 - uVar5) - uVar6 ^ uVar5 << 0x10;
  uVar6 = (uVar6 - uVar3) - uVar5 ^ uVar3 >> 5;
  uVar5 = (uVar5 - uVar6) - uVar3 ^ uVar6 >> 3;
  uVar3 = (uVar3 - uVar5) - uVar6 ^ uVar5 << 10;
  uVar5 = ((uVar6 - uVar3) - uVar5 ^ uVar3 >> 0xf) - uVar4 ^ uVar4 >> 0xd;
  uVar3 = (-0x61c88647 - uVar5) - uVar4 ^ uVar5 << 8;
  uVar4 = (uVar4 - uVar3) - uVar5 ^ uVar3 >> 0xd;
  uVar5 = (uVar5 - uVar4) - uVar3 ^ uVar4 >> 0xc;
  uVar3 = (uVar3 - uVar5) - uVar4 ^ uVar5 << 0x10;
  uVar4 = (uVar4 - uVar3) - uVar5 ^ uVar3 >> 5;
  uVar5 = (uVar5 - uVar4) - uVar3 ^ uVar4 >> 3;
  uVar3 = (uVar3 - uVar5) - uVar4 ^ uVar5 << 10;
  return (uVar4 - uVar3) - uVar5 ^ uVar3 >> 0xf;
}

// ImgMediaSmartCacheEnabled @ 14ea6d140

FName * __cdecl MediaPlayerOptionValues::ImgMediaSmartCacheEnabled(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `class_FName_const&___ptr64___cdecl_MediaPlayerOptionValues::ImgMediaSmartCacheEnabled(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`class_FName_const&___ptr64___cdecl_MediaPlayerOptionValues::ImgMediaSmartCacheEnabled(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`class_FName_const&___ptr64___cdecl_MediaPlayerOptionValues::ImgMediaSmartCacheEnabled(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`class_FName_const&___ptr64___cdecl_MediaPlayerOptionValues::ImgMediaSmartCacheEnabled(void)'
                      ::__l2::OptName,L"ImgMediaSmartCacheEnabled");
      _Init_thread_footer(&`class_FName_const&___ptr64___cdecl_MediaPlayerOptionValues::ImgMediaSmartCacheEnabled(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`class_FName_const&___ptr64___cdecl_MediaPlayerOptionValues::ImgMediaSmartCacheEnabled(void)'
              ::__l2::OptName;
    }
  }
  return &`class_FName_const&___ptr64___cdecl_MediaPlayerOptionValues::ImgMediaSmartCacheEnabled(void)'
          ::__l2::OptName;
}

// ImgMediaSmartCacheTimeToLookAhead @ 14ea6d1c0

FName * __cdecl MediaPlayerOptionValues::ImgMediaSmartCacheTimeToLookAhead(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `class_FName_const&___ptr64___cdecl_MediaPlayerOptionValues::ImgMediaSmartCacheTimeToLookAhead(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`class_FName_const&___ptr64___cdecl_MediaPlayerOptionValues::ImgMediaSmartCacheTimeToLookAhead(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`class_FName_const&___ptr64___cdecl_MediaPlayerOptionValues::ImgMediaSmartCacheTimeToLookAhead(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`class_FName_const&___ptr64___cdecl_MediaPlayerOptionValues::ImgMediaSmartCacheTimeToLookAhead(void)'
                      ::__l2::OptName,L"ImgMediaSmartCacheTimeToLookAhead");
      _Init_thread_footer(&`class_FName_const&___ptr64___cdecl_MediaPlayerOptionValues::ImgMediaSmartCacheTimeToLookAhead(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`class_FName_const&___ptr64___cdecl_MediaPlayerOptionValues::ImgMediaSmartCacheTimeToLookAhead(void)'
              ::__l2::OptName;
    }
  }
  return &`class_FName_const&___ptr64___cdecl_MediaPlayerOptionValues::ImgMediaSmartCacheTimeToLookAhead(void)'
          ::__l2::OptName;
}

// Z_Construct_UClass_UMovieSceneMediaPlayerPropertySection_NoRegister @ 14ea70d00

UClass * __cdecl Z_Construct_UClass_UMovieSceneMediaPlayerPropertySection_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneMediaPlayerPropertySection.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MediaCompositing",L"MovieSceneMediaPlayerPropertySection",
               &Z_Registration_Info_UClass_UMovieSceneMediaPlayerPropertySection.InnerSingleton,
               UMovieSceneMediaPlayerPropertySection::
               StaticRegisterNativesUMovieSceneMediaPlayerPropertySection,0x120,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieSceneMediaPlayerPropertySection>,
               InternalVTableHelperCtorCaller<UMovieSceneMediaPlayerPropertySection>,local_res8,
               UMovieSceneSection::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneMediaPlayerPropertySection.InnerSingleton;
}

// Z_Construct_UClass_UMovieSceneMediaPlayerPropertyTrack_NoRegister @ 14ea70dc0

UClass * __cdecl Z_Construct_UClass_UMovieSceneMediaPlayerPropertyTrack_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneMediaPlayerPropertyTrack.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MediaCompositing",L"MovieSceneMediaPlayerPropertyTrack",
               &Z_Registration_Info_UClass_UMovieSceneMediaPlayerPropertyTrack.InnerSingleton,
               UMovieSceneMediaPlayerPropertyTrack::
               StaticRegisterNativesUMovieSceneMediaPlayerPropertyTrack,0x150,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieSceneMediaPlayerPropertyTrack>,
               InternalVTableHelperCtorCaller<UMovieSceneMediaPlayerPropertyTrack>,local_res8,
               UMovieScenePropertyTrack::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneMediaPlayerPropertyTrack.InnerSingleton;
}

// Z_Construct_UClass_UMovieSceneMediaTrack_NoRegister @ 14ea70e80

UClass * __cdecl Z_Construct_UClass_UMovieSceneMediaTrack_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneMediaTrack.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MediaCompositing",L"MovieSceneMediaTrack",
               &Z_Registration_Info_UClass_UMovieSceneMediaTrack.InnerSingleton,
               UMovieSceneMediaTrack::StaticRegisterNativesUMovieSceneMediaTrack,0x138,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",InternalConstructor<UMovieSceneMediaTrack>,
               InternalVTableHelperCtorCaller<UMovieSceneMediaTrack>,local_res8,
               UMovieSceneNameableTrack::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneMediaTrack.InnerSingleton;
}

// Z_Construct_UScriptStruct_FMovieSceneMediaPlayerPropertySectionTemplate @ 14ea70f40

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl
Z_Construct_UScriptStruct_FMovieSceneMediaPlayerPropertySectionTemplate(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FMovieSceneMediaPlayerPropertySectionTemplate.InnerSingleton
      == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FMovieSceneMediaPlayerPropertySectionTemplate.
                InnerSingleton,
               &Z_Construct_UScriptStruct_FMovieSceneMediaPlayerPropertySectionTemplate_Statics::
                StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FMovieSceneMediaPlayerPropertySectionTemplate.InnerSingleton
      != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FMovieSceneMediaPlayerPropertySectionTemplate.
           InnerSingleton;
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

// Z_Construct_UScriptStruct_FMovieSceneMediaSectionTemplate @ 14ea70fc0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FMovieSceneMediaSectionTemplate(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FMovieSceneMediaSectionTemplate.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FMovieSceneMediaSectionTemplate.InnerSingleton,
               &Z_Construct_UScriptStruct_FMovieSceneMediaSectionTemplate_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FMovieSceneMediaSectionTemplate.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FMovieSceneMediaSectionTemplate.InnerSingleton;
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

// IMPLEMENT_MODULE_MediaCompositing @ 14ea71060

void __cdecl IMPLEMENT_MODULE_MediaCompositing(void)

{
  return;
}

// `dynamic_atexit_destructor_for_'CVarAvoidSeekOnJump'' @ 15046e080

void __cdecl _dynamic_atexit_destructor_for__CVarAvoidSeekOnJump__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarAvoidSeekOnJump);
  return;
}

// `dynamic_atexit_destructor_for_'CVarUpdatePlaybackRange'' @ 15046e0a0

void __cdecl _dynamic_atexit_destructor_for__CVarUpdatePlaybackRange__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarUpdatePlaybackRange);
  return;
}

