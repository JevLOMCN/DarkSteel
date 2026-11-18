// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCacheTracks
// Functions: 43

// `dynamic_initializer_for_'ModuleRegistrantGeometryCacheTracks'' @ 1413b93b0

void __cdecl _dynamic_initializer_for__ModuleRegistrantGeometryCacheTracks__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "GeometryCacheTracks";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"GeometryCacheTracks",0x13);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,
             FStaticallyLinkedModuleRegistrant<FGeometryCacheTracksModule>::InitializeModule);
  return;
}

// `dynamic_initializer_for_'StatPtr_MovieSceneEval_GeometryCache_Evaluate'' @ 1413b9400

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_MovieSceneEval_GeometryCache_Evaluate__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_MovieSceneEval_GeometryCache_Evaluate ==
      (FThreadSafeStaticStat<FStat_MovieSceneEval_GeometryCache_Evaluate>)0x0) {
    pFVar1 = FName::FName(local_res8,"MovieSceneEval_GeometryCache_Evaluate");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_MovieSceneEval_GeometryCache_Evaluate,*pFVar1,
               L"Geometry Cache Evaluate","STATGROUP_MovieSceneEval","STATCAT_Advanced",
               L"Movie Scene Evaluation",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_MovieSceneEval_GeometryCache_TokenExecute'' @ 1413b9490

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_MovieSceneEval_GeometryCache_TokenExecute__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_MovieSceneEval_GeometryCache_TokenExecute ==
      (FThreadSafeStaticStat<FStat_MovieSceneEval_GeometryCache_TokenExecute>)0x0) {
    pFVar1 = FName::FName(local_res8,"MovieSceneEval_GeometryCache_TokenExecute");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_MovieSceneEval_GeometryCache_TokenExecute,
               *pFVar1,L"Geometry Cache Token Execute","STATGROUP_MovieSceneEval","STATCAT_Advanced"
               ,L"Movie Scene Evaluation",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_MovieSceneEval_PersistentData_Access'' @ 1413b9520

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

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GeometryCache_Source_GeometryCacheTracks_Classes_MovieSceneGeometryCacheSection_h__Script_GeometryCacheTracks_4240977261'' @ 1413b95b0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GeometryCache_Source_GeometryCacheTracks_Classes_MovieSceneGeometryCacheSection_h__Script_GeometryCacheTracks_4240977261__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/GeometryCacheTracks",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GeometryCache_Source_GeometryCacheTracks_Classes_MovieSceneGeometryCacheSection_h__Script_GeometryCacheTracks_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GeometryCache_Source_GeometryCacheTracks_Classes_MovieSceneGeometryCacheSection_h__Script_GeometryCacheTracks_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GeometryCache_Source_GeometryCacheTracks_Classes_MovieSceneGeometryCacheTrack_h__Script_GeometryCacheTracks_3368879775'' @ 1413b9600

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GeometryCache_Source_GeometryCacheTracks_Classes_MovieSceneGeometryCacheTrack_h__Script_GeometryCacheTracks_3368879775__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/GeometryCacheTracks",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GeometryCache_Source_GeometryCacheTracks_Classes_MovieSceneGeometryCacheTrack_h__Script_GeometryCacheTracks_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GeometryCache_Source_GeometryCacheTracks_Private_MovieSceneGeometryCacheTemplate_h__Script_GeometryCacheTracks_631272247'' @ 1413b9640

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GeometryCache_Source_GeometryCacheTracks_Private_MovieSceneGeometryCacheTemplate_h__Script_GeometryCacheTracks_631272247__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/GeometryCacheTracks",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GeometryCache_Source_GeometryCacheTracks_Private_MovieSceneGeometryCacheTemplate_h__Script_GeometryCacheTracks_Statics
             ::ScriptStructInfo,2,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferPackage_UPackage__Script_GeometryCacheTracks'' @ 1413b9680

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferPackage_UPackage__Script_GeometryCacheTracks__(void)

{
  FPackageReloadVersionInfo local_res8 [4];
  
  local_res8[0].BodyHash = 0xff3f5b87;
  local_res8[0].DeclarationsHash = 0xe2b8e3fc;
  RegisterCompiledInInfo
            (Z_Construct_UPackage__Script_GeometryCacheTracks,L"/Script/GeometryCacheTracks",
             &Z_Registration_Info_UPackage__Script_GeometryCacheTracks,local_res8);
  return;
}

// Z_Construct_UPackage__Script_GeometryCacheTracks @ 14cd86a00

UPackage * __cdecl Z_Construct_UPackage__Script_GeometryCacheTracks(void)

{
  if (Z_Registration_Info_UPackage__Script_GeometryCacheTracks.OuterSingleton == (UPackage *)0x0) {
    UECodeGen_Private::ConstructUPackage
              (&Z_Registration_Info_UPackage__Script_GeometryCacheTracks.OuterSingleton,
               &PackageParams);
  }
  return Z_Registration_Info_UPackage__Script_GeometryCacheTracks.OuterSingleton;
}

// `scalar_deleting_destructor' @ 14cd86b00

void * __thiscall
FGeometryCacheTracksModule::_scalar_deleting_destructor_
          (FGeometryCacheTracksModule *this,uint param_1)

{
  *this = (FGeometryCacheTracksModule)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cd87140

void * __thiscall
FMovieSceneGeometryCacheSectionTemplate::_scalar_deleting_destructor_
          (FMovieSceneGeometryCacheSectionTemplate *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)(this->Params)._padding_;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  this->_padding_ = (longlong)&___7FMovieSceneEvalTemplateBase__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x70);
  }
  return this;
}

// Z_Construct_UClass_UMovieSceneGeometryCacheSection @ 14cd87190

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMovieSceneGeometryCacheSection(void)

{
  if (Z_Registration_Info_UClass_UMovieSceneGeometryCacheSection.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMovieSceneGeometryCacheSection.OuterSingleton,
               &Z_Construct_UClass_UMovieSceneGeometryCacheSection_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMovieSceneGeometryCacheSection.OuterSingleton;
}

// Z_Construct_UScriptStruct_FMovieSceneGeometryCacheParams @ 14cd871d0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FMovieSceneGeometryCacheParams(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FMovieSceneGeometryCacheParams.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FMovieSceneGeometryCacheParams.InnerSingleton,
               &Z_Construct_UScriptStruct_FMovieSceneGeometryCacheParams_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FMovieSceneGeometryCacheParams.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FMovieSceneGeometryCacheParams.InnerSingleton;
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

// NewProp_bReverse_SetBit @ 14cd87250

void __cdecl
Z_Construct_UScriptStruct_FMovieSceneGeometryCacheParams_Statics::NewProp_bReverse_SetBit
          (void *param_1)

{
  *(uint *)((longlong)param_1 + 0x18) = *(uint *)((longlong)param_1 + 0x18) | 1;
  return;
}

// NewStructOps @ 14cd87260

void * __cdecl Z_Construct_UScriptStruct_FMovieSceneGeometryCacheParams_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x48;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FMovieSceneGeometryCacheParams,&UE::CoreUObject::Private::Construct<FMovieSceneGeometryCacheParams>,&UE::CoreUObject::Private::ConstructForTests<FMovieSceneGeometryCacheParams>,&UE::CoreUObject::Private::Destruct<FMovieSceneGeometryCacheParams>,&UE::CoreUObject::Private::Copy<FMovieSceneGeometryCacheParams>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UScriptStruct_FMovieSceneGeometryCacheSectionTemplateParameters @ 14cd872a0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl
Z_Construct_UScriptStruct_FMovieSceneGeometryCacheSectionTemplateParameters(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FMovieSceneGeometryCacheSectionTemplateParameters.
      InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FMovieSceneGeometryCacheSectionTemplateParameters.
                InnerSingleton,
               &Z_Construct_UScriptStruct_FMovieSceneGeometryCacheSectionTemplateParameters_Statics
                ::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FMovieSceneGeometryCacheSectionTemplateParameters.
      InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FMovieSceneGeometryCacheSectionTemplateParameters.
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

// NewStructOps @ 14cd87320

void * __cdecl
Z_Construct_UScriptStruct_FMovieSceneGeometryCacheSectionTemplateParameters_Statics::NewStructOps
          (void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x50;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FMovieSceneGeometryCacheSectionTemplateParameters,&UE::CoreUObject::Private::Construct<FMovieSceneGeometryCacheSectionTemplateParameters>,&UE::CoreUObject::Private::ConstructForTests<FMovieSceneGeometryCacheSectionTemplateParameters>,&UE::CoreUObject::Private::Destruct<FMovieSceneGeometryCacheSectionTemplateParameters>,&UE::CoreUObject::Private::Copy<FMovieSceneGeometryCacheSectionTemplateParameters>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14cd87360

void * __cdecl
Z_Construct_UScriptStruct_FMovieSceneGeometryCacheSectionTemplate_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x70;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FMovieSceneGeometryCacheSectionTemplate,&UE::CoreUObject::Private::Construct<FMovieSceneGeometryCacheSectionTemplate>,&UE::CoreUObject::Private::ConstructForTests<FMovieSceneGeometryCacheSectionTemplate>,&UE::CoreUObject::Private::Destruct<FMovieSceneGeometryCacheSectionTemplate>,&UE::CoreUObject::Private::Copy<FMovieSceneGeometryCacheSectionTemplate>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UMovieSceneGeometryCacheTrack @ 14cd87460

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMovieSceneGeometryCacheTrack(void)

{
  if (Z_Registration_Info_UClass_UMovieSceneGeometryCacheTrack.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMovieSceneGeometryCacheTrack.OuterSingleton,
               &Z_Construct_UClass_UMovieSceneGeometryCacheTrack_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMovieSceneGeometryCacheTrack.OuterSingleton;
}

// CastChecked<UGeometryCacheComponent,UObject> @ 14cd87770

UGeometryCacheComponent * __cdecl CastChecked<UGeometryCacheComponent,UObject>(UObject *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UObject *)0x0) {
    pFVar3 = GetTypeName<UGeometryCacheComponent>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = Z_Construct_UClass_UGeometryCacheComponent_NoRegister();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
     ((longlong *)
      *(undefined1 **)
       (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
      &pUVar2->_padding_)) {
    return (UGeometryCacheComponent *)param_1;
  }
  pFVar3 = GetTypeName<UGeometryCacheComponent>(&local_28);
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

// CastChecked<UMovieSceneGeometryCacheSection,UMovieSceneSection_const_> @ 14cd87830

UMovieSceneGeometryCacheSection * __cdecl
CastChecked<UMovieSceneGeometryCacheSection,UMovieSceneSection_const_>(UMovieSceneSection *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UMovieSceneSection *)0x0) {
    pFVar3 = GetTypeName<UMovieSceneGeometryCacheSection>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = UMovieSceneGeometryCacheSection::StaticClass();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
      == &pUVar2->_padding_)) {
    return (UMovieSceneGeometryCacheSection *)param_1;
  }
  pFVar3 = GetTypeName<UMovieSceneGeometryCacheSection>(&local_28);
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

// GetFirstLoopStartOffsetAtTrimTime<FMovieSceneGeometryCacheParams> @ 14cd878f0

FFrameNumber __cdecl
GetFirstLoopStartOffsetAtTrimTime<FMovieSceneGeometryCacheParams>
          (FQualifiedFrameTime *param_1,FMovieSceneGeometryCacheParams *param_2,FFrameNumber param_3
          ,FFrameRate param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  TObjectPtr<UGeometryCache>_u_0 TVar4;
  undefined4 uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  int iVar8;
  undefined4 in_register_00000084;
  undefined8 *puVar9;
  float fVar10;
  float fVar11;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dd;
  undefined1 auVar12 [16];
  undefined1 in_XMM2 [16];
  undefined1 auVar13 [16];
  float fVar14;
  double dVar15;
  undefined1 auVar16 [16];
  double dVar17;
  double dVar18;
  float fStackX_c;
  undefined8 in_stack_00000028;
  
  puVar9 = (undefined8 *)CONCAT44(in_register_00000084,param_3.Value);
  fVar11 = *(float *)((longlong)puVar9 + 0x14);
  if ((float)((uint)*(float *)((longlong)puVar9 + 0x14) & __xmm_7fffffff7fffffff7fffffff7fffffff) <=
      __real_322bcc77) {
    fVar11 = __real_3f800000;
  }
  TVar4 = (param_2->GeometryCacheAsset).field0_0x0;
  auVar16 = ZEXT816(0);
  uVar3 = param_2->FirstLoopStartFrameOffset;
  uVar5 = param_2->StartFrameOffset;
  fStackX_c = TVar4._4_4_;
  auVar13 = roundps(in_XMM2,ZEXT416((uint)(fStackX_c - 0.0)),1);
  fVar14 = (fStackX_c - 0.0) - auVar13._0_4_;
  if (FFrameTime::MaxSubframe <= fVar14) {
    fVar14 = FFrameTime::MaxSubframe;
  }
  if (fVar14 <= 0.0) {
    fVar14 = 0.0;
  }
  iVar1 = *(int *)(puVar9 + 2);
  iVar2 = *(int *)((longlong)puVar9 + 0xc);
  iVar8 = (int)((ulonglong)in_stack_00000028 >> 0x20);
  dVar17 = (double)iVar8;
  dVar18 = (double)(int)in_stack_00000028;
  if ((UGeometryCache *)*puVar9 != (UGeometryCache *)0x0) {
    fVar10 = UGeometryCache::CalculateDuration((UGeometryCache *)*puVar9);
    auVar16._4_4_ = extraout_XMM0_Db;
    auVar16._0_4_ = fVar10;
    auVar16._8_4_ = extraout_XMM0_Dc;
    auVar16._12_4_ = extraout_XMM0_Dd;
  }
  dVar15 = __real_3ff0000000000000 / dVar17;
  fVar10 = (float)((double)auVar16._0_4_ -
                  ((double)((longlong)iVar8 * (longlong)(iVar1 + iVar2)) + dVar17 * 0.0) /
                  (dVar18 * (double)fVar11));
  auVar12 = ZEXT416((uint)fVar10);
  fVar11 = FGenericPlatformMath::Fmod
                     ((float)((((double)(int)uVar5 * (double)fVar14 +
                               (double)((longlong)
                                        ((TVar4._0_4_ - param_4.Numerator) + (int)auVar13._0_4_) *
                                       (longlong)(int)uVar5)) / (double)(int)uVar3) * (double)fVar11
                             ),fVar10);
  dVar17 = (double)fVar11 * dVar18 * dVar15;
  auVar13._8_8_ = 0;
  auVar13._0_8_ = dVar17;
  auVar13 = roundpd(auVar12,auVar13,1);
  auVar12._8_8_ = 0;
  auVar12._0_8_ = (double)(int)(dVar17 - auVar13._0_8_) + dVar17;
  auVar16 = roundpd(auVar16,auVar12,1);
  dVar17 = auVar16._0_8_;
  if (__real_41dfffffffc00000 <= auVar16._0_8_) {
    dVar17 = __real_41dfffffffc00000;
  }
  if (dVar17 <= __real_c1e0000000000000) {
    dVar17 = __real_c1e0000000000000;
  }
  dVar15 = (double)fVar10 * dVar18 * dVar15;
  auVar6._8_8_ = 0;
  auVar6._0_8_ = dVar15;
  auVar13 = roundpd(auVar13,auVar6,1);
  dVar18 = dVar15 - auVar13._0_8_;
  auVar7._8_8_ = 0;
  auVar7._0_8_ = (double)(int)dVar18 + dVar15;
  auVar13 = roundpd(ZEXT416((uint)(float)dVar18),auVar7,1);
  dVar18 = auVar13._0_8_;
  if (__real_41dfffffffc00000 <= auVar13._0_8_) {
    dVar18 = __real_41dfffffffc00000;
  }
  if (dVar18 <= __real_c1e0000000000000) {
    dVar18 = __real_c1e0000000000000;
  }
  (param_1->Time).FrameNumber.Value = ((int)dVar17 + *(int *)(puVar9 + 1)) % (int)dVar18;
  return (FFrameNumber)(int)param_1;
}

// GetTypeName<UGeometryCacheComponent> @ 14cd87bb0

FString * __cdecl GetTypeName<UGeometryCacheComponent>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = Z_Construct_UClass_UGeometryCacheComponent_NoRegister();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetTypeName<UMovieSceneGeometryCacheSection> @ 14cd87bf0

FString * __cdecl GetTypeName<UMovieSceneGeometryCacheSection>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = UMovieSceneGeometryCacheSection::StaticClass();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// InternalConstructor<UMovieSceneGeometryCacheSection> @ 14cd87c30

void __cdecl InternalConstructor<UMovieSceneGeometryCacheSection>(FObjectInitializer *param_1)

{
  UMovieSceneSection *this;
  float fVar1;
  
  this = (UMovieSceneSection *)param_1->Obj;
  if (this != (UMovieSceneSection *)0x0) {
    UMovieSceneSection::UMovieSceneSection(this,param_1);
    this->_padding_ = (longlong)&___7UMovieSceneGeometryCacheSection__6B_;
    this[1]._padding_ = 0;
    *(undefined4 *)&this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    FUtf8String::Reset((FUtf8String *)&this[1]._padding_,0);
    fVar1 = GeometryCacheDeprecatedMagicNumber;
    *(uint *)&this[1]._padding_ = (uint)this[1]._padding_ & 0xfffffffe;
    *(float *)((longlong)&this[1]._padding_ + 4) = fVar1;
    *(float *)&this[1]._padding_ = fVar1;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0x3f800000;
    (this->BlendType).BlendType = Absolute;
    (this->BlendType).bIsValid = true;
    (this->EvalOptions).bCanEditCompletionMode = true;
    (this->EvalOptions).CompletionMode = ProjectDefault;
  }
  return;
}

// InternalConstructor<UMovieSceneGeometryCacheTrack> @ 14cd87ce0

void __cdecl InternalConstructor<UMovieSceneGeometryCacheTrack>(FObjectInitializer *param_1)

{
  UMovieSceneNameableTrack *this;
  
  this = (UMovieSceneNameableTrack *)param_1->Obj;
  if (this != (UMovieSceneNameableTrack *)0x0) {
    UMovieSceneNameableTrack::UMovieSceneNameableTrack(this,param_1);
    *(undefined ***)this =
         &UMovieSceneGeometryCacheTrack::_vftable__for__UMovieSceneDecorationContainerObject__;
    *(undefined ***)&this->field_0x70 =
         &UMovieSceneGeometryCacheTrack::_vftable__for__IMovieSceneTrackVirtualAPI__;
    *(undefined ***)(this + 1) = &___7UMovieSceneGeometryCacheTrack__6B_;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    FMovieSceneBlendTypeField::Add((FMovieSceneBlendTypeField *)&this->field_0x88,Absolute);
    *(uint *)&this->field_0x78 = *(uint *)&this->field_0x78 | 5;
  }
  return;
}

// InternalVTableHelperCtorCaller<UMovieSceneGeometryCacheSection> @ 14cd87d50

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UMovieSceneGeometryCacheSection>(FVTableHelper *param_1)

{
  float fVar1;
  UObject *pUVar2;
  UClass *pUVar3;
  UMovieSceneSection *this;
  
  pUVar2 = GetTransientPackageAsObject();
  pUVar3 = UMovieSceneGeometryCacheSection::GetPrivateStaticClass();
  this = (UMovieSceneSection *)
         StaticAllocateObject
                   (pUVar3,pUVar2,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UMovieSceneSection *)0x0) {
    UMovieSceneSection::UMovieSceneSection(this,param_1);
    this->_padding_ = (longlong)&___7UMovieSceneGeometryCacheSection__6B_;
    this[1]._padding_ = 0;
    *(undefined4 *)&this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    FUtf8String::Reset((FUtf8String *)&this[1]._padding_,0);
    fVar1 = GeometryCacheDeprecatedMagicNumber;
    *(uint *)&this[1]._padding_ = (uint)this[1]._padding_ & 0xfffffffe;
    *(float *)((longlong)&this[1]._padding_ + 4) = fVar1;
    *(float *)&this[1]._padding_ = fVar1;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0x3f800000;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMovieSceneGeometryCacheTrack> @ 14cd87e60

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UMovieSceneGeometryCacheTrack>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UMovieSceneNameableTrack *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMovieSceneGeometryCacheTrack::GetPrivateStaticClass();
  this = (UMovieSceneNameableTrack *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UMovieSceneNameableTrack *)0x0) {
    UMovieSceneNameableTrack::UMovieSceneNameableTrack(this,param_1);
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined ***)this =
         &UMovieSceneGeometryCacheTrack::_vftable__for__UMovieSceneDecorationContainerObject__;
    *(undefined ***)&this->field_0x70 =
         &UMovieSceneGeometryCacheTrack::_vftable__for__IMovieSceneTrackVirtualAPI__;
    *(undefined ***)(this + 1) = &___7UMovieSceneGeometryCacheTrack__6B_;
    *(undefined8 *)&this[1].field_0x10 = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// NewObject<UMovieSceneGeometryCacheSection> @ 14cd87f40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UMovieSceneGeometryCacheSection * __cdecl
NewObject<UMovieSceneGeometryCacheSection>
          (UObject *param_1,FName param_2,EObjectFlags param_3,UObject *param_4,bool param_5,
          FObjectInstancingGraph *param_6,UPackage *param_7)

{
  UClass *pUVar1;
  UMovieSceneGeometryCacheSection *pUVar2;
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
  pUVar1 = UMovieSceneGeometryCacheSection::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_b8,pUVar1);
  local_b8[0x20] = param_5;
  local_b8._48_8_ = param_6;
  local_b8._56_8_ = param_7;
  local_b8._8_8_ = param_1;
  local_b8._16_8_ = param_2;
  local_b8._24_4_ = param_3;
  local_b8._40_8_ = param_4;
  pUVar2 = (UMovieSceneGeometryCacheSection *)
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

// `vector_deleting_destructor'`adjustor{280}' @ 14cd88708

/* [thunk]:public: virtual void * __ptr64 __cdecl UMovieSceneGeometryCacheTrack::`vector deleting
   destructor'`adjustor{280}' (unsigned int) __ptr64 */

void * __thiscall
UMovieSceneGeometryCacheTrack::_vector_deleting_destructor__adjustor_280__
          (UMovieSceneGeometryCacheTrack *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UMovieSceneGeometryCacheTrack *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `scalar_deleting_destructor' @ 14cd88720

void * __thiscall
FGeometryCacheExecutionToken::_scalar_deleting_destructor_
          (FGeometryCacheExecutionToken *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)(this->Params)._padding_;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  this->_padding_ = (longlong)&___7IMovieSceneExecutionToken__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x58);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cd88770

void * __thiscall
FPreAnimatedGeometryCacheTokenProducer::_scalar_deleting_destructor_
          (FPreAnimatedGeometryCacheTokenProducer *this,uint param_1)

{
  *this = (FPreAnimatedGeometryCacheTokenProducer)&___7IMovieScenePreAnimatedTokenProducer__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cd887b0

void * __thiscall
`FPreAnimatedGeometryCacheTokenProducer::CacheExistingState'::__l2::FToken::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this = &___7IMovieScenePreAnimatedToken__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cd887f0

void * __thiscall
UMovieSceneGeometryCacheSection::_scalar_deleting_destructor_
          (UMovieSceneGeometryCacheSection *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UMovieSceneGeometryCacheSection__6B_;
  pFVar1 = (this->Params).GeometryCache_DEPRECATED.SubPathString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UMovieSceneSection::~UMovieSceneSection((UMovieSceneSection *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x158);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cd88870

void * __thiscall
UMovieSceneGeometryCacheTrack::_scalar_deleting_destructor_
          (UMovieSceneGeometryCacheTrack *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UMovieSceneDecorationContainerObject__;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneTrackVirtualAPI__;
  this->_padding_ = (longlong)&___7UMovieSceneGeometryCacheTrack__6B_;
  pFVar1 = (this->AnimationSections).AllocatorInstance.Data;
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
    __empty_global_delete(this,0x130);
  }
  return this;
}

// EmptyLinkFunctionForGeneratedCodeGeometryCacheTracks_init @ 14cd89040

void __cdecl EmptyLinkFunctionForGeneratedCodeGeometryCacheTracks_init(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMovieSceneGeometryCacheSection @ 14cd89050

void __cdecl EmptyLinkFunctionForGeneratedCodeMovieSceneGeometryCacheSection(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMovieSceneGeometryCacheTemplate @ 14cd89060

void __cdecl EmptyLinkFunctionForGeneratedCodeMovieSceneGeometryCacheTemplate(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMovieSceneGeometryCacheTrack @ 14cd89070

void __cdecl EmptyLinkFunctionForGeneratedCodeMovieSceneGeometryCacheTrack(void)

{
  return;
}

// Z_Construct_UClass_UMovieSceneGeometryCacheSection_NoRegister @ 14cd8b010

UClass * __cdecl Z_Construct_UClass_UMovieSceneGeometryCacheSection_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneGeometryCacheSection.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GeometryCacheTracks",L"MovieSceneGeometryCacheSection",
               &Z_Registration_Info_UClass_UMovieSceneGeometryCacheSection.InnerSingleton,
               UMovieSceneGeometryCacheSection::StaticRegisterNativesUMovieSceneGeometryCacheSection
               ,0x158,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieSceneGeometryCacheSection>,
               InternalVTableHelperCtorCaller<UMovieSceneGeometryCacheSection>,local_res8,
               UMovieSceneSection::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneGeometryCacheSection.InnerSingleton;
}

// Z_Construct_UClass_UMovieSceneGeometryCacheTrack_NoRegister @ 14cd8b0d0

UClass * __cdecl Z_Construct_UClass_UMovieSceneGeometryCacheTrack_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneGeometryCacheTrack.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GeometryCacheTracks",L"MovieSceneGeometryCacheTrack",
               &Z_Registration_Info_UClass_UMovieSceneGeometryCacheTrack.InnerSingleton,
               UMovieSceneGeometryCacheTrack::StaticRegisterNativesUMovieSceneGeometryCacheTrack,
               0x130,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieSceneGeometryCacheTrack>,
               InternalVTableHelperCtorCaller<UMovieSceneGeometryCacheTrack>,local_res8,
               UMovieSceneNameableTrack::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneGeometryCacheTrack.InnerSingleton;
}

// Z_Construct_UScriptStruct_FMovieSceneGeometryCacheSectionTemplate @ 14cd8b190

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FMovieSceneGeometryCacheSectionTemplate(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FMovieSceneGeometryCacheSectionTemplate.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FMovieSceneGeometryCacheSectionTemplate.
                InnerSingleton,
               &Z_Construct_UScriptStruct_FMovieSceneGeometryCacheSectionTemplate_Statics::
                StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FMovieSceneGeometryCacheSectionTemplate.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FMovieSceneGeometryCacheSectionTemplate.InnerSingleton;
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

// IMPLEMENT_MODULE_GeometryCacheTracks @ 14cd8b220

void __cdecl IMPLEMENT_MODULE_GeometryCacheTracks(void)

{
  return;
}

