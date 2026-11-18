// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NiagaraSimCaching
// Functions: 60

// `dynamic_initializer_for_'LogNiagaraSimCaching'' @ 141445560

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogNiagaraSimCaching__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogNiagaraSimCaching,L"LogNiagaraSimCaching",Verbose,All);
  atexit(_dynamic_atexit_destructor_for__LogNiagaraSimCaching__);
  return;
}

// `dynamic_initializer_for_'ModuleRegistrantNiagaraSimCaching'' @ 1414455a0

void __cdecl _dynamic_initializer_for__ModuleRegistrantNiagaraSimCaching__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "NiagaraSimCaching";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"NiagaraSimCaching",0x11);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,FStaticallyLinkedModuleRegistrant<INiagaraSimCachingPlugin>::InitializeModule
            );
  return;
}

// `dynamic_initializer_for_'StatPtr_MovieSceneEval_NiagaraCache_TokenExecute'' @ 1414455f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_MovieSceneEval_NiagaraCache_TokenExecute__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_MovieSceneEval_NiagaraCache_TokenExecute ==
      (FThreadSafeStaticStat<FStat_MovieSceneEval_NiagaraCache_TokenExecute>)0x0) {
    pFVar1 = FName::FName(local_res8,"MovieSceneEval_NiagaraCache_TokenExecute");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_MovieSceneEval_NiagaraCache_TokenExecute,
               *pFVar1,L"Niagara Cache - Token Execute","STATGROUP_MovieSceneEval",
               "STATCAT_Advanced",L"Movie Scene Evaluation",true,true,ST_int64,true,false,
               MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_MovieSceneEval_PersistentData_Access'' @ 141445680

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

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_FX_NiagaraSimCaching_Source_NiagaraSimCaching_Private_Niagara_Sequencer_MovieSceneNiagaraCacheTemplate_h__Script_NiagaraSimCaching_1556099938'' @ 141445710

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_FX_NiagaraSimCaching_Source_NiagaraSimCaching_Private_Niagara_Sequencer_MovieSceneNiagaraCacheTemplate_h__Script_NiagaraSimCaching_1556099938__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/NiagaraSimCaching",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_FX_NiagaraSimCaching_Source_NiagaraSimCaching_Private_Niagara_Sequencer_MovieSceneNiagaraCacheTemplate_h__Script_NiagaraSimCaching_Statics
             ::ScriptStructInfo,2,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_FX_NiagaraSimCaching_Source_NiagaraSimCaching_Public_Niagara_Sequencer_MovieSceneNiagaraCacheSection_h__Script_NiagaraSimCaching_4113300702'' @ 141445750

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_FX_NiagaraSimCaching_Source_NiagaraSimCaching_Public_Niagara_Sequencer_MovieSceneNiagaraCacheSection_h__Script_NiagaraSimCaching_4113300702__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/NiagaraSimCaching",
             Z_CompiledInDeferFile_FID_Engine_Plugins_FX_NiagaraSimCaching_Source_NiagaraSimCaching_Public_Niagara_Sequencer_MovieSceneNiagaraCacheSection_h__Script_NiagaraSimCaching_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Plugins_FX_NiagaraSimCaching_Source_NiagaraSimCaching_Public_Niagara_Sequencer_MovieSceneNiagaraCacheSection_h__Script_NiagaraSimCaching_Statics
             ::ScriptStructInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Plugins_FX_NiagaraSimCaching_Source_NiagaraSimCaching_Public_Niagara_Sequencer_MovieSceneNiagaraCacheSection_h__Script_NiagaraSimCaching_Statics
             ::EnumInfo,2);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_FX_NiagaraSimCaching_Source_NiagaraSimCaching_Public_Niagara_Sequencer_MovieSceneNiagaraCacheTrack_h__Script_NiagaraSimCaching_1294254666'' @ 1414457a0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_FX_NiagaraSimCaching_Source_NiagaraSimCaching_Public_Niagara_Sequencer_MovieSceneNiagaraCacheTrack_h__Script_NiagaraSimCaching_1294254666__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/NiagaraSimCaching",
             Z_CompiledInDeferFile_FID_Engine_Plugins_FX_NiagaraSimCaching_Source_NiagaraSimCaching_Public_Niagara_Sequencer_MovieSceneNiagaraCacheTrack_h__Script_NiagaraSimCaching_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferPackage_UPackage__Script_NiagaraSimCaching'' @ 1414457e0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferPackage_UPackage__Script_NiagaraSimCaching__(void)

{
  FPackageReloadVersionInfo local_res8 [4];
  
  local_res8[0].BodyHash = 0xb1a467e4;
  local_res8[0].DeclarationsHash = 0x4c8ce17f;
  RegisterCompiledInInfo
            (Z_Construct_UPackage__Script_NiagaraSimCaching,L"/Script/NiagaraSimCaching",
             &Z_Registration_Info_UPackage__Script_NiagaraSimCaching,local_res8);
  return;
}

// `scalar_deleting_destructor' @ 14ea20a10

void * __thiscall
FMovieSceneNiagaraCacheSectionTemplate::_scalar_deleting_destructor_
          (FMovieSceneNiagaraCacheSectionTemplate *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<FMovieSceneNiagaraSectionTemplateParameter,int>
            ((FMovieSceneNiagaraSectionTemplateParameter *)
             (this->CacheSections).AllocatorInstance.Data,(this->CacheSections).ArrayNum);
  pFVar1 = (this->CacheSections).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7FMovieSceneEvalTemplateBase__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// Z_Construct_UPackage__Script_NiagaraSimCaching @ 14ea20a70

UPackage * __cdecl Z_Construct_UPackage__Script_NiagaraSimCaching(void)

{
  if (Z_Registration_Info_UPackage__Script_NiagaraSimCaching.OuterSingleton == (UPackage *)0x0) {
    UECodeGen_Private::ConstructUPackage
              (&Z_Registration_Info_UPackage__Script_NiagaraSimCaching.OuterSingleton,&PackageParams
              );
  }
  return Z_Registration_Info_UPackage__Script_NiagaraSimCaching.OuterSingleton;
}

// `scalar_deleting_destructor' @ 14ea20ad0

void * __thiscall
INiagaraSimCachingPlugin::_scalar_deleting_destructor_(INiagaraSimCachingPlugin *this,uint param_1)

{
  *this = (INiagaraSimCachingPlugin)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// Z_Construct_UClass_UMovieSceneNiagaraCacheSection @ 14ea20c20

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMovieSceneNiagaraCacheSection(void)

{
  if (Z_Registration_Info_UClass_UMovieSceneNiagaraCacheSection.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMovieSceneNiagaraCacheSection.OuterSingleton,
               &Z_Construct_UClass_UMovieSceneNiagaraCacheSection_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMovieSceneNiagaraCacheSection.OuterSingleton;
}

// Z_Construct_UEnum_NiagaraSimCaching_ENiagaraSimCacheSectionPlayMode @ 14ea20c60

UEnum * __cdecl Z_Construct_UEnum_NiagaraSimCaching_ENiagaraSimCacheSectionPlayMode(void)

{
  if (Z_Registration_Info_UEnum_ENiagaraSimCacheSectionPlayMode.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ENiagaraSimCacheSectionPlayMode.InnerSingleton,
               &Z_Construct_UEnum_NiagaraSimCaching_ENiagaraSimCacheSectionPlayMode_Statics::
                EnumParams);
  }
  return Z_Registration_Info_UEnum_ENiagaraSimCacheSectionPlayMode.InnerSingleton;
}

// Z_Construct_UEnum_NiagaraSimCaching_ENiagaraSimCacheSectionStretchMode @ 14ea20ca0

UEnum * __cdecl Z_Construct_UEnum_NiagaraSimCaching_ENiagaraSimCacheSectionStretchMode(void)

{
  if (Z_Registration_Info_UEnum_ENiagaraSimCacheSectionStretchMode.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ENiagaraSimCacheSectionStretchMode.InnerSingleton,
               &Z_Construct_UEnum_NiagaraSimCaching_ENiagaraSimCacheSectionStretchMode_Statics::
                EnumParams);
  }
  return Z_Registration_Info_UEnum_ENiagaraSimCacheSectionStretchMode.InnerSingleton;
}

// Z_Construct_UScriptStruct_FMovieSceneNiagaraCacheParams @ 14ea20ce0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FMovieSceneNiagaraCacheParams(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FMovieSceneNiagaraCacheParams.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FMovieSceneNiagaraCacheParams.InnerSingleton,
               &Z_Construct_UScriptStruct_FMovieSceneNiagaraCacheParams_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FMovieSceneNiagaraCacheParams.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FMovieSceneNiagaraCacheParams.InnerSingleton;
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

// ENiagaraSimCacheSectionPlayMode_StaticEnum @ 14ea20d80

UEnum * __cdecl ENiagaraSimCacheSectionPlayMode_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ENiagaraSimCacheSectionPlayMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_NiagaraSimCaching();
    Z_Registration_Info_UEnum_ENiagaraSimCacheSectionPlayMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_NiagaraSimCaching_ENiagaraSimCacheSectionPlayMode,
                       (UObject *)pUVar1,L"ENiagaraSimCacheSectionPlayMode");
  }
  return Z_Registration_Info_UEnum_ENiagaraSimCacheSectionPlayMode.OuterSingleton;
}

// ENiagaraSimCacheSectionStretchMode_StaticEnum @ 14ea20f50

UEnum * __cdecl ENiagaraSimCacheSectionStretchMode_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ENiagaraSimCacheSectionStretchMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_NiagaraSimCaching();
    Z_Registration_Info_UEnum_ENiagaraSimCacheSectionStretchMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_NiagaraSimCaching_ENiagaraSimCacheSectionStretchMode,
                       (UObject *)pUVar1,L"ENiagaraSimCacheSectionStretchMode");
  }
  return Z_Registration_Info_UEnum_ENiagaraSimCacheSectionStretchMode.OuterSingleton;
}

// NewProp_bLockCacheToReadOnly_SetBit @ 14ea20f90

void __cdecl
Z_Construct_UScriptStruct_FMovieSceneNiagaraCacheParams_Statics::NewProp_bLockCacheToReadOnly_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x80) = 1;
  return;
}

// NewProp_bOverrideQualityLevel_SetBit @ 14ea20fa0

void __cdecl
Z_Construct_UScriptStruct_FMovieSceneNiagaraCacheParams_Statics::
NewProp_bOverrideQualityLevel_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x81) = 1;
  return;
}

// NewStructOps @ 14ea20fb0

void * __cdecl Z_Construct_UScriptStruct_FMovieSceneNiagaraCacheParams_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x88;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FMovieSceneNiagaraCacheParams,&UE::CoreUObject::Private::Construct<FMovieSceneNiagaraCacheParams>,&UE::CoreUObject::Private::ConstructForTests<FMovieSceneNiagaraCacheParams>,&UE::CoreUObject::Private::Destruct<FMovieSceneNiagaraCacheParams>,&UE::CoreUObject::Private::Copy<FMovieSceneNiagaraCacheParams>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_bCacheOutOfDate_SetBit @ 14ea20ff0

void __cdecl
Z_Construct_UClass_UMovieSceneNiagaraCacheSection_Statics::NewProp_bCacheOutOfDate_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x1a0) = 1;
  return;
}

// Z_Construct_UClass_UMovieSceneNiagaraCacheTrack @ 14ea21290

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMovieSceneNiagaraCacheTrack(void)

{
  if (Z_Registration_Info_UClass_UMovieSceneNiagaraCacheTrack.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMovieSceneNiagaraCacheTrack.OuterSingleton,
               &Z_Construct_UClass_UMovieSceneNiagaraCacheTrack_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMovieSceneNiagaraCacheTrack.OuterSingleton;
}

// NewProp_bIsRecording_SetBit @ 14ea212d0

void __cdecl
Z_Construct_UClass_UMovieSceneNiagaraCacheTrack_Statics::NewProp_bIsRecording_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x128) = 1;
  return;
}

// NewProp_bCacheRecordingEnabled_SetBit @ 14ea212e0

void __cdecl
Z_Construct_UClass_UMovieSceneNiagaraCacheTrack_Statics::NewProp_bCacheRecordingEnabled_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x140) = 1;
  return;
}

// Z_Construct_UScriptStruct_FMovieSceneNiagaraSectionTemplateParameter @ 14ea213b0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FMovieSceneNiagaraSectionTemplateParameter(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FMovieSceneNiagaraSectionTemplateParameter.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FMovieSceneNiagaraSectionTemplateParameter.
                InnerSingleton,
               &Z_Construct_UScriptStruct_FMovieSceneNiagaraSectionTemplateParameter_Statics::
                StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FMovieSceneNiagaraSectionTemplateParameter.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FMovieSceneNiagaraSectionTemplateParameter.
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

// NewStructOps @ 14ea21430

void * __cdecl
Z_Construct_UScriptStruct_FMovieSceneNiagaraSectionTemplateParameter_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x98;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FMovieSceneNiagaraSectionTemplateParameter,&UE::CoreUObject::Private::Construct<FMovieSceneNiagaraSectionTemplateParameter>,&UE::CoreUObject::Private::ConstructForTests<FMovieSceneNiagaraSectionTemplateParameter>,&UE::CoreUObject::Private::Destruct<FMovieSceneNiagaraSectionTemplateParameter>,&UE::CoreUObject::Private::Copy<FMovieSceneNiagaraSectionTemplateParameter>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14ea21470

void * __cdecl
Z_Construct_UScriptStruct_FMovieSceneNiagaraCacheSectionTemplate_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FMovieSceneNiagaraCacheSectionTemplate,&UE::CoreUObject::Private::Construct<FMovieSceneNiagaraCacheSectionTemplate>,&UE::CoreUObject::Private::ConstructForTests<FMovieSceneNiagaraCacheSectionTemplate>,&UE::CoreUObject::Private::Destruct<FMovieSceneNiagaraCacheSectionTemplate>,&UE::CoreUObject::Private::Copy<FMovieSceneNiagaraCacheSectionTemplate>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// ConstructItems<FMovieSceneNiagaraSectionTemplateParameter,FMovieSceneNiagaraSectionTemplateParameter,int> @ 14ea21c50

void __cdecl
ConstructItems<FMovieSceneNiagaraSectionTemplateParameter,FMovieSceneNiagaraSectionTemplateParameter,int>
          (void *param_1,FMovieSceneNiagaraSectionTemplateParameter *param_2,int param_3)

{
  TRangeBound<FFrameNumber> TVar1;
  
  for (; param_3 != 0; param_3 = param_3 + -1) {
    TVar1 = (param_2->SectionRange).Value.UpperBound;
    *(TRangeBound<FFrameNumber> *)param_1 = (param_2->SectionRange).Value.LowerBound;
    *(TRangeBound<FFrameNumber> *)((longlong)param_1 + 8) = TVar1;
    FMovieSceneNiagaraCacheParams::FMovieSceneNiagaraCacheParams
              ((FMovieSceneNiagaraCacheParams *)((longlong)param_1 + 0x10),&param_2->Params);
    param_2 = param_2 + 1;
    param_1 = (void *)((longlong)param_1 + 0x98);
  }
  return;
}

// DefaultConstructItems<FMovieSceneNiagaraSectionTemplateParameter,int> @ 14ea21cb0

void __cdecl
DefaultConstructItems<FMovieSceneNiagaraSectionTemplateParameter,int>(void *param_1,int param_2)

{
  TObjectPtr<UNiagaraSimCache>_u_0 TVar1;
  ulonglong uVar2;
  FMovieSceneNiagaraCacheParams *this;
  uint local_res8;
  uint local_res18;
  
  if (param_2 != 0) {
    this = (FMovieSceneNiagaraCacheParams *)((longlong)param_1 + 0x10);
    do {
      local_res8 = local_res8 & 0xffffff00;
      TVar1._4_4_ = 0;
      TVar1._0_4_ = local_res8;
      this[-1].SimCache.field0_0x0 = TVar1;
      local_res18 = local_res18 & 0xffffff00;
      uVar2 = (ulonglong)local_res18;
      this[-1].bLockCacheToReadOnly = (bool)(char)uVar2;
      this[-1].bOverrideQualityLevel = (bool)(char)(uVar2 >> 8);
      this[-1].RecordQualityLevel = (char)(uVar2 >> 0x10);
      this[-1].CacheReplayPlayMode = (char)(uVar2 >> 0x18);
      this[-1].SectionStretchMode = (char)(uVar2 >> 0x20);
      *(int3 *)&this[-1].field_0x85 = (int3)(uVar2 >> 0x28);
      FMovieSceneNiagaraCacheParams::FMovieSceneNiagaraCacheParams(this);
      this = (FMovieSceneNiagaraCacheParams *)&this[1]._padding_;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FMovieSceneNiagaraSectionTemplateParameter,int> @ 14ea21d20

void __cdecl
DestructItems<FMovieSceneNiagaraSectionTemplateParameter,int>
          (FMovieSceneNiagaraSectionTemplateParameter *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FMovieSceneNiagaraCacheParams::~FMovieSceneNiagaraCacheParams(&param_1->Params);
    param_1 = (FMovieSceneNiagaraSectionTemplateParameter *)(&param_1->Params + 1);
  }
  return;
}

// InternalConstructor<UMovieSceneNiagaraCacheSection> @ 14ea21f10

void __cdecl InternalConstructor<UMovieSceneNiagaraCacheSection>(FObjectInitializer *param_1)

{
  UMovieSceneBaseCacheSection *this;
  
  this = (UMovieSceneBaseCacheSection *)param_1->Obj;
  if (this != (UMovieSceneBaseCacheSection *)0x0) {
    UMovieSceneBaseCacheSection::UMovieSceneBaseCacheSection(this,param_1);
    this->_padding_ = (longlong)&___7UMovieSceneNiagaraCacheSection__6B_;
    FMovieSceneNiagaraCacheParams::FMovieSceneNiagaraCacheParams
              ((FMovieSceneNiagaraCacheParams *)(this + 1));
    this->ParamsPtr = (FMovieSceneBaseCacheParams *)(this + 1);
    *(undefined1 *)&this[1]._padding_ = 0;
  }
  return;
}

// InternalConstructor<UMovieSceneNiagaraCacheTrack> @ 14ea21f70

void __cdecl InternalConstructor<UMovieSceneNiagaraCacheTrack>(FObjectInitializer *param_1)

{
  UMovieSceneNameableTrack *this;
  
  this = (UMovieSceneNameableTrack *)param_1->Obj;
  if (this != (UMovieSceneNameableTrack *)0x0) {
    UMovieSceneNameableTrack::UMovieSceneNameableTrack(this,param_1);
    this[1].field_0x10 = 0;
    *(undefined ***)this =
         &UMovieSceneNiagaraCacheTrack::_vftable__for__UMovieSceneDecorationContainerObject__;
    this[1].field_0x28 = 1;
    *(undefined ***)&this->field_0x70 =
         &UMovieSceneNiagaraCacheTrack::_vftable__for__IMovieSceneTrackVirtualAPI__;
    *(undefined ***)(this + 1) =
         &UMovieSceneNiagaraCacheTrack::_vftable__for__IMovieSceneTrackTemplateProducer__;
    *(undefined ***)&this[1].field_0x8 =
         &UMovieSceneNiagaraCacheTrack::_vftable__for__IMovieSceneCachedTrack__;
    *(undefined8 *)&this[1].field_0x18 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
    FMovieSceneBlendTypeField::Add((FMovieSceneBlendTypeField *)&this->field_0x88,Absolute);
    *(uint *)&this->field_0x78 = *(uint *)&this->field_0x78 | 5;
  }
  return;
}

// InternalVTableHelperCtorCaller<UMovieSceneNiagaraCacheSection> @ 14ea22000

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UMovieSceneNiagaraCacheSection>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UMovieSceneBaseCacheSection *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMovieSceneNiagaraCacheSection::GetPrivateStaticClass();
  this = (UMovieSceneBaseCacheSection *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UMovieSceneBaseCacheSection *)0x0) {
    UMovieSceneBaseCacheSection::UMovieSceneBaseCacheSection(this,param_1);
    this->_padding_ = (longlong)&___7UMovieSceneNiagaraCacheSection__6B_;
    FMovieSceneNiagaraCacheParams::FMovieSceneNiagaraCacheParams
              ((FMovieSceneNiagaraCacheParams *)(this + 1));
    *(undefined1 *)&this[1]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMovieSceneNiagaraCacheTrack> @ 14ea220c0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UMovieSceneNiagaraCacheTrack>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UMovieSceneNameableTrack *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMovieSceneNiagaraCacheTrack::GetPrivateStaticClass();
  this = (UMovieSceneNameableTrack *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UMovieSceneNameableTrack *)0x0) {
    UMovieSceneNameableTrack::UMovieSceneNameableTrack(this,param_1);
    this[1].field_0x10 = 0;
    *(undefined ***)this =
         &UMovieSceneNiagaraCacheTrack::_vftable__for__UMovieSceneDecorationContainerObject__;
    *(undefined ***)&this->field_0x70 =
         &UMovieSceneNiagaraCacheTrack::_vftable__for__IMovieSceneTrackVirtualAPI__;
    *(undefined ***)(this + 1) =
         &UMovieSceneNiagaraCacheTrack::_vftable__for__IMovieSceneTrackTemplateProducer__;
    *(undefined ***)&this[1].field_0x8 =
         &UMovieSceneNiagaraCacheTrack::_vftable__for__IMovieSceneCachedTrack__;
    *(undefined8 *)&this[1].field_0x18 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
    this[1].field_0x28 = 1;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// IsObjectPtrEqual<UNiagaraSimCache,UNiagaraSimCache_*,0> @ 14ea221b0

bool __cdecl
ObjectPtr_Private::IsObjectPtrEqual<UNiagaraSimCache,UNiagaraSimCache_*,0>
          (TObjectPtr<UNiagaraSimCache> *param_1,UNiagaraSimCache **param_2)

{
  if ((param_1->field0_0x0).DebugPtr == (UNiagaraSimCache *)0x0) {
    return *param_2 == (UNiagaraSimCache *)0x0;
  }
  return (param_1->field0_0x0).DebugPtr == *param_2;
}

// NewObject<UMovieSceneNiagaraCacheSection> @ 14ea221d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UMovieSceneNiagaraCacheSection * __cdecl
NewObject<UMovieSceneNiagaraCacheSection>
          (UObject *param_1,FName param_2,EObjectFlags param_3,UObject *param_4,bool param_5,
          FObjectInstancingGraph *param_6,UPackage *param_7)

{
  UClass *pUVar1;
  UMovieSceneNiagaraCacheSection *pUVar2;
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
  pUVar1 = UMovieSceneNiagaraCacheSection::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_b8,pUVar1);
  local_b8[0x20] = param_5;
  local_b8._48_8_ = param_6;
  local_b8._56_8_ = param_7;
  local_b8._8_8_ = param_1;
  local_b8._16_8_ = param_2;
  local_b8._24_4_ = param_3;
  local_b8._40_8_ = param_4;
  pUVar2 = (UMovieSceneNiagaraCacheSection *)
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

// NewObject<UNiagaraSimCache> @ 14ea222c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UNiagaraSimCache * __cdecl
NewObject<UNiagaraSimCache>
          (UObject *param_1,FName param_2,EObjectFlags param_3,UObject *param_4,bool param_5,
          FObjectInstancingGraph *param_6,UPackage *param_7)

{
  UClass *pUVar1;
  UNiagaraSimCache *pUVar2;
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
  pUVar1 = Z_Construct_UClass_UNiagaraSimCache_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_b8,pUVar1);
  local_b8[0x20] = param_5;
  local_b8._48_8_ = param_6;
  local_b8._56_8_ = param_7;
  local_b8._8_8_ = param_1;
  local_b8._16_8_ = param_2;
  local_b8._24_4_ = param_3;
  local_b8._40_8_ = param_4;
  pUVar2 = (UNiagaraSimCache *)
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

// StaticEnum<enum_ENiagaraSimCacheSectionPlayMode> @ 14ea225c0

UEnum * __cdecl StaticEnum<enum_ENiagaraSimCacheSectionPlayMode>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ENiagaraSimCacheSectionPlayMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_NiagaraSimCaching();
    Z_Registration_Info_UEnum_ENiagaraSimCacheSectionPlayMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_NiagaraSimCaching_ENiagaraSimCacheSectionPlayMode,
                       (UObject *)pUVar1,L"ENiagaraSimCacheSectionPlayMode");
  }
  return Z_Registration_Info_UEnum_ENiagaraSimCacheSectionPlayMode.OuterSingleton;
}

// StaticEnum<enum_ENiagaraSimCacheSectionStretchMode> @ 14ea22600

UEnum * __cdecl StaticEnum<enum_ENiagaraSimCacheSectionStretchMode>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ENiagaraSimCacheSectionStretchMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_NiagaraSimCaching();
    Z_Registration_Info_UEnum_ENiagaraSimCacheSectionStretchMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_NiagaraSimCaching_ENiagaraSimCacheSectionStretchMode,
                       (UObject *)pUVar1,L"ENiagaraSimCacheSectionStretchMode");
  }
  return Z_Registration_Info_UEnum_ENiagaraSimCacheSectionStretchMode.OuterSingleton;
}

// `vector_deleting_destructor'`adjustor{280}' @ 14ea22ce4

/* [thunk]:public: virtual void * __ptr64 __cdecl UMovieSceneNiagaraCacheTrack::`vector deleting
   destructor'`adjustor{280}' (unsigned int) __ptr64 */

void * __thiscall
UMovieSceneNiagaraCacheTrack::_vector_deleting_destructor__adjustor_280__
          (UMovieSceneNiagaraCacheTrack *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UMovieSceneNiagaraCacheTrack *)&this[-1]._padding_,param_1)
  ;
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{288}' @ 14ea22cf8

/* [thunk]:public: virtual void * __ptr64 __cdecl UMovieSceneNiagaraCacheTrack::`vector deleting
   destructor'`adjustor{288}' (unsigned int) __ptr64 */

void * __thiscall
UMovieSceneNiagaraCacheTrack::_vector_deleting_destructor__adjustor_288__
          (UMovieSceneNiagaraCacheTrack *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UMovieSceneNiagaraCacheTrack *)&this[-1]._padding_,param_1)
  ;
  return pvVar1;
}

// `scalar_deleting_destructor' @ 14ea22d10

void * __thiscall
FMovieSceneNiagaraCacheParams::_scalar_deleting_destructor_
          (FMovieSceneNiagaraCacheParams *this,uint param_1)

{
  ~FMovieSceneNiagaraCacheParams(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x88);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ea22d50

void * __thiscall
FNiagaraCacheExecutionToken::_scalar_deleting_destructor_
          (FNiagaraCacheExecutionToken *this,uint param_1)

{
  if ((this->CacheSection).bIsSet != false) {
    FMovieSceneNiagaraCacheParams::~FMovieSceneNiagaraCacheParams
              (&(this->CacheSection).TypedValue.Params);
  }
  this->_padding_ = (longlong)&___7IMovieSceneExecutionToken__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xb0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ea22db0

void * __thiscall
FNiagaraCacheResetToken::_scalar_deleting_destructor_(FNiagaraCacheResetToken *this,uint param_1)

{
  *this = (FNiagaraCacheResetToken)&___7IMovieSceneExecutionToken__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ea22df0

void * __thiscall
FNiagaraSharedMarkerToken::_scalar_deleting_destructor_
          (FNiagaraSharedMarkerToken *this,uint param_1)

{
  ForElementType<FSetElementId> FVar1;
  
  (this->BoundObjectIDs).HashSize = 0;
  FVar1 = (this->BoundObjectIDs).Hash.SecondaryData;
  if (FVar1 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<TSparseSetElement<FGuid>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FGuid>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->BoundObjectIDs).Elements);
  this->_padding_ = (longlong)&___7IMovieSceneSharedExecutionToken__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ea22e60

void * __thiscall
FPreAnimatedNiagaraCacheTokenProducer::_scalar_deleting_destructor_
          (FPreAnimatedNiagaraCacheTokenProducer *this,uint param_1)

{
  *this = (FPreAnimatedNiagaraCacheTokenProducer)&___7IMovieScenePreAnimatedTokenProducer__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ea22ea0

void * __thiscall
`FPreAnimatedNiagaraCacheTokenProducer::CacheExistingState'::__l2::FToken::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this = &___7IMovieScenePreAnimatedToken__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ea22ee0

void * __thiscall
IMovieSceneCachedTrack::_scalar_deleting_destructor_(IMovieSceneCachedTrack *this,uint param_1)

{
  *this = (IMovieSceneCachedTrack)&___7IMovieSceneCachedTrack__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ea22f20

void * __thiscall
IMovieSceneSharedExecutionToken::_scalar_deleting_destructor_
          (IMovieSceneSharedExecutionToken *this,uint param_1)

{
  this->_padding_ = (longlong)&___7IMovieSceneSharedExecutionToken__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ea22f60

void * __thiscall
UMovieSceneNiagaraCacheSection::_scalar_deleting_destructor_
          (UMovieSceneNiagaraCacheSection *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UMovieSceneNiagaraCacheSection__6B_;
  FMovieSceneNiagaraCacheParams::~FMovieSceneNiagaraCacheParams(&this->Params);
  UMovieSceneBaseCacheSection::~UMovieSceneBaseCacheSection((UMovieSceneBaseCacheSection *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x1a8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ea22fd0

void * __thiscall
UMovieSceneNiagaraCacheTrack::_scalar_deleting_destructor_
          (UMovieSceneNiagaraCacheTrack *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UMovieSceneDecorationContainerObject__;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneTrackVirtualAPI__;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneTrackTemplateProducer__;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneCachedTrack__;
  pFVar1 = (this->AnimationSections).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7IMovieSceneCachedTrack__6B_;
  this->_padding_ = (longlong)&___7IMovieSceneTrackTemplateProducer__6B_;
  UMovieSceneNameableTrack::~UMovieSceneNameableTrack((UMovieSceneNameableTrack *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x148);
  }
  return this;
}

// EmptyLinkFunctionForGeneratedCodeMovieSceneNiagaraCacheSection @ 14ea234a0

void __cdecl EmptyLinkFunctionForGeneratedCodeMovieSceneNiagaraCacheSection(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMovieSceneNiagaraCacheTemplate @ 14ea234b0

void __cdecl EmptyLinkFunctionForGeneratedCodeMovieSceneNiagaraCacheTemplate(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMovieSceneNiagaraCacheTrack @ 14ea234c0

void __cdecl EmptyLinkFunctionForGeneratedCodeMovieSceneNiagaraCacheTrack(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeNiagaraSimCaching_init @ 14ea234d0

void __cdecl EmptyLinkFunctionForGeneratedCodeNiagaraSimCaching_init(void)

{
  return;
}

// Z_Construct_UClass_UMovieSceneNiagaraCacheSection_NoRegister @ 14ea24ee0

UClass * __cdecl Z_Construct_UClass_UMovieSceneNiagaraCacheSection_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneNiagaraCacheSection.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/NiagaraSimCaching",L"MovieSceneNiagaraCacheSection",
               &Z_Registration_Info_UClass_UMovieSceneNiagaraCacheSection.InnerSingleton,
               UMovieSceneNiagaraCacheSection::StaticRegisterNativesUMovieSceneNiagaraCacheSection,
               0x1a8,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieSceneNiagaraCacheSection>,
               InternalVTableHelperCtorCaller<UMovieSceneNiagaraCacheSection>,local_res8,
               UMovieSceneBaseCacheSection::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneNiagaraCacheSection.InnerSingleton;
}

// Z_Construct_UClass_UMovieSceneNiagaraCacheTrack_NoRegister @ 14ea24fa0

UClass * __cdecl Z_Construct_UClass_UMovieSceneNiagaraCacheTrack_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneNiagaraCacheTrack.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/NiagaraSimCaching",L"MovieSceneNiagaraCacheTrack",
               &Z_Registration_Info_UClass_UMovieSceneNiagaraCacheTrack.InnerSingleton,
               UMovieSceneNiagaraCacheTrack::StaticRegisterNativesUMovieSceneNiagaraCacheTrack,0x148
               ,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieSceneNiagaraCacheTrack>,
               InternalVTableHelperCtorCaller<UMovieSceneNiagaraCacheTrack>,local_res8,
               UMovieSceneNameableTrack::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneNiagaraCacheTrack.InnerSingleton;
}

// Z_Construct_UScriptStruct_FMovieSceneNiagaraCacheSectionTemplate @ 14ea25060

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FMovieSceneNiagaraCacheSectionTemplate(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FMovieSceneNiagaraCacheSectionTemplate.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FMovieSceneNiagaraCacheSectionTemplate.
                InnerSingleton,
               &Z_Construct_UScriptStruct_FMovieSceneNiagaraCacheSectionTemplate_Statics::
                StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FMovieSceneNiagaraCacheSectionTemplate.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FMovieSceneNiagaraCacheSectionTemplate.InnerSingleton;
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

// IMPLEMENT_MODULE_NiagaraSimCaching @ 14ea25110

void __cdecl IMPLEMENT_MODULE_NiagaraSimCaching(void)

{
  return;
}

// `dynamic_atexit_destructor_for_'LogNiagaraSimCaching'' @ 15046da00

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogNiagaraSimCaching__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogNiagaraSimCaching);
  return;
}

