// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SequencerScripting
// Functions: 43

// `dynamic_initializer_for_'ModuleRegistrantSequencerScripting'' @ 1413ae320

void __cdecl _dynamic_initializer_for__ModuleRegistrantSequencerScripting__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "SequencerScripting";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"SequencerScripting",0x12);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,
             FStaticallyLinkedModuleRegistrant<FSequencerScriptingModule>::InitializeModule);
  return;
}

// `dynamic_initializer_for_'StatPtr_MovieSceneEval_ApplyProperties'' @ 1413ae370

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

// `dynamic_initializer_for_'StatPtr_MovieSceneEval_AquireComponentAccessLocks'' @ 1413ae400

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

// `dynamic_initializer_for_'StatPtr_MovieSceneEval_ReleaseComponentAccessLocks'' @ 1413ae490

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

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Public_ExtensionLibraries_MovieSceneVectorTrackExtensions_h__Script_SequencerScripting_2139047522'' @ 1413ae520

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Public_ExtensionLibraries_MovieSceneVectorTrackExtensions_h__Script_SequencerScripting_2139047522__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/SequencerScripting",
             Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Public_ExtensionLibraries_MovieSceneVectorTrackExtensions_h__Script_SequencerScripting_Statics
             ::ClassInfo,2,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Public_ExtensionLibraries_SequencerScriptingRangeExtensions_h__Script_SequencerScripting_3267352100'' @ 1413ae560

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Public_ExtensionLibraries_SequencerScriptingRangeExtensions_h__Script_SequencerScripting_3267352100__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/SequencerScripting",
             Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Public_ExtensionLibraries_SequencerScriptingRangeExtensions_h__Script_SequencerScripting_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// Z_Construct_UClass_UMovieSceneDoubleVectorTrackExtensions @ 14c6ba590

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMovieSceneDoubleVectorTrackExtensions(void)

{
  if (Z_Registration_Info_UClass_UMovieSceneDoubleVectorTrackExtensions.OuterSingleton ==
      (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMovieSceneDoubleVectorTrackExtensions.OuterSingleton,
               &Z_Construct_UClass_UMovieSceneDoubleVectorTrackExtensions_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMovieSceneDoubleVectorTrackExtensions.OuterSingleton;
}

// Z_Construct_UClass_UMovieSceneFloatVectorTrackExtensions @ 14c6ba5d0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMovieSceneFloatVectorTrackExtensions(void)

{
  if (Z_Registration_Info_UClass_UMovieSceneFloatVectorTrackExtensions.OuterSingleton ==
      (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMovieSceneFloatVectorTrackExtensions.OuterSingleton,
               &Z_Construct_UClass_UMovieSceneFloatVectorTrackExtensions_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMovieSceneFloatVectorTrackExtensions.OuterSingleton;
}

// Z_Construct_UFunction_UMovieSceneFloatVectorTrackExtensions_GetNumChannelsUsed @ 14c6ba610

UFunction * __cdecl
Z_Construct_UFunction_UMovieSceneFloatVectorTrackExtensions_GetNumChannelsUsed(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneFloatVectorTrackExtensions_GetNumChannelsUsed_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieSceneFloatVectorTrackExtensions_SetNumChannelsUsed @ 14c6ba650

UFunction * __cdecl
Z_Construct_UFunction_UMovieSceneFloatVectorTrackExtensions_SetNumChannelsUsed(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneFloatVectorTrackExtensions_SetNumChannelsUsed_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieSceneDoubleVectorTrackExtensions_GetNumChannelsUsed @ 14c6ba810

UFunction * __cdecl
Z_Construct_UFunction_UMovieSceneDoubleVectorTrackExtensions_GetNumChannelsUsed(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneDoubleVectorTrackExtensions_GetNumChannelsUsed_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMovieSceneDoubleVectorTrackExtensions_SetNumChannelsUsed @ 14c6ba850

UFunction * __cdecl
Z_Construct_UFunction_UMovieSceneDoubleVectorTrackExtensions_SetNumChannelsUsed(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMovieSceneDoubleVectorTrackExtensions_SetNumChannelsUsed_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_USequencerScriptingRangeExtensions @ 14c6ba950

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_USequencerScriptingRangeExtensions(void)

{
  if (Z_Registration_Info_UClass_USequencerScriptingRangeExtensions.OuterSingleton == (UClass *)0x0)
  {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_USequencerScriptingRangeExtensions.OuterSingleton,
               &Z_Construct_UClass_USequencerScriptingRangeExtensions_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_USequencerScriptingRangeExtensions.OuterSingleton;
}

// Z_Construct_UFunction_USequencerScriptingRangeExtensions_GetEndFrame @ 14c6ba990

UFunction * __cdecl Z_Construct_UFunction_USequencerScriptingRangeExtensions_GetEndFrame(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_USequencerScriptingRangeExtensions_GetEndFrame_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_USequencerScriptingRangeExtensions_GetEndSeconds @ 14c6ba9d0

UFunction * __cdecl Z_Construct_UFunction_USequencerScriptingRangeExtensions_GetEndSeconds(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_USequencerScriptingRangeExtensions_GetEndSeconds_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_USequencerScriptingRangeExtensions_GetStartFrame @ 14c6baa10

UFunction * __cdecl Z_Construct_UFunction_USequencerScriptingRangeExtensions_GetStartFrame(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_USequencerScriptingRangeExtensions_GetStartFrame_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_USequencerScriptingRangeExtensions_GetStartSeconds @ 14c6baa50

UFunction * __cdecl Z_Construct_UFunction_USequencerScriptingRangeExtensions_GetStartSeconds(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_USequencerScriptingRangeExtensions_GetStartSeconds_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 14c6baa90

void __cdecl
Z_Construct_UFunction_USequencerScriptingRangeExtensions_HasEnd_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x14) = 1;
  return;
}

// Z_Construct_UFunction_USequencerScriptingRangeExtensions_HasEnd @ 14c6baaa0

UFunction * __cdecl Z_Construct_UFunction_USequencerScriptingRangeExtensions_HasEnd(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_USequencerScriptingRangeExtensions_HasEnd_Statics::FuncParams)
    ;
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 14c6baae0

void __cdecl
Z_Construct_UFunction_USequencerScriptingRangeExtensions_HasStart_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x14) = 1;
  return;
}

// Z_Construct_UFunction_USequencerScriptingRangeExtensions_HasStart @ 14c6baaf0

UFunction * __cdecl Z_Construct_UFunction_USequencerScriptingRangeExtensions_HasStart(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_USequencerScriptingRangeExtensions_HasStart_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_USequencerScriptingRangeExtensions_RemoveEnd @ 14c6bab30

UFunction * __cdecl Z_Construct_UFunction_USequencerScriptingRangeExtensions_RemoveEnd(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_USequencerScriptingRangeExtensions_RemoveEnd_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_USequencerScriptingRangeExtensions_RemoveStart @ 14c6bab70

UFunction * __cdecl Z_Construct_UFunction_USequencerScriptingRangeExtensions_RemoveStart(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_USequencerScriptingRangeExtensions_RemoveStart_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_USequencerScriptingRangeExtensions_SetEndFrame @ 14c6babb0

UFunction * __cdecl Z_Construct_UFunction_USequencerScriptingRangeExtensions_SetEndFrame(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_USequencerScriptingRangeExtensions_SetEndFrame_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_USequencerScriptingRangeExtensions_SetEndSeconds @ 14c6babf0

UFunction * __cdecl Z_Construct_UFunction_USequencerScriptingRangeExtensions_SetEndSeconds(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_USequencerScriptingRangeExtensions_SetEndSeconds_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_USequencerScriptingRangeExtensions_SetStartFrame @ 14c6bac30

UFunction * __cdecl Z_Construct_UFunction_USequencerScriptingRangeExtensions_SetStartFrame(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_USequencerScriptingRangeExtensions_SetStartFrame_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_USequencerScriptingRangeExtensions_SetStartSeconds @ 14c6bac70

UFunction * __cdecl Z_Construct_UFunction_USequencerScriptingRangeExtensions_SetStartSeconds(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_USequencerScriptingRangeExtensions_SetStartSeconds_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// `scalar_deleting_destructor' @ 14c6bacd0

void * __thiscall
FSequencerScriptingModule::_scalar_deleting_destructor_
          (FSequencerScriptingModule *this,uint param_1)

{
  *this = (FSequencerScriptingModule)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// InternalConstructor<UMovieSceneDoubleVectorTrackExtensions> @ 14c6bad10

void __cdecl
InternalConstructor<UMovieSceneDoubleVectorTrackExtensions>(FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary *this;
  
  this = (UBlueprintFunctionLibrary *)param_1->Obj;
  if (this != (UBlueprintFunctionLibrary *)0x0) {
    UBlueprintFunctionLibrary::UBlueprintFunctionLibrary(this,param_1);
    *(undefined ***)this = &___7UMovieSceneDoubleVectorTrackExtensions__6B_;
  }
  return;
}

// InternalConstructor<UMovieSceneFloatVectorTrackExtensions> @ 14c6bad40

void __cdecl InternalConstructor<UMovieSceneFloatVectorTrackExtensions>(FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary *this;
  
  this = (UBlueprintFunctionLibrary *)param_1->Obj;
  if (this != (UBlueprintFunctionLibrary *)0x0) {
    UBlueprintFunctionLibrary::UBlueprintFunctionLibrary(this,param_1);
    *(undefined ***)this = &___7UMovieSceneFloatVectorTrackExtensions__6B_;
  }
  return;
}

// InternalConstructor<USequencerScriptingRangeExtensions> @ 14c6bad70

void __cdecl InternalConstructor<USequencerScriptingRangeExtensions>(FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary *this;
  
  this = (UBlueprintFunctionLibrary *)param_1->Obj;
  if (this != (UBlueprintFunctionLibrary *)0x0) {
    UBlueprintFunctionLibrary::UBlueprintFunctionLibrary(this,param_1);
    *(undefined ***)this = &___7USequencerScriptingRangeExtensions__6B_;
  }
  return;
}

// InternalVTableHelperCtorCaller<UMovieSceneDoubleVectorTrackExtensions> @ 14c6bada0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UMovieSceneDoubleVectorTrackExtensions>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMovieSceneDoubleVectorTrackExtensions::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UBlueprintFunctionLibrary::UBlueprintFunctionLibrary
              ((UBlueprintFunctionLibrary *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UMovieSceneDoubleVectorTrackExtensions__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMovieSceneFloatVectorTrackExtensions> @ 14c6bae50

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UMovieSceneFloatVectorTrackExtensions>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMovieSceneFloatVectorTrackExtensions::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UBlueprintFunctionLibrary::UBlueprintFunctionLibrary
              ((UBlueprintFunctionLibrary *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UMovieSceneFloatVectorTrackExtensions__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<USequencerScriptingRangeExtensions> @ 14c6baf00

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<USequencerScriptingRangeExtensions>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = USequencerScriptingRangeExtensions::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UBlueprintFunctionLibrary::UBlueprintFunctionLibrary
              ((UBlueprintFunctionLibrary *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7USequencerScriptingRangeExtensions__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// `scalar_deleting_destructor' @ 14c6bb130

void * __thiscall
UMovieSceneDoubleVectorTrackExtensions::_scalar_deleting_destructor_
          (UMovieSceneDoubleVectorTrackExtensions *this,uint param_1)

{
  *(undefined ***)this = &___7UMovieSceneDoubleVectorTrackExtensions__6B_;
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

// `scalar_deleting_destructor' @ 14c6bb190

void * __thiscall
UMovieSceneFloatVectorTrackExtensions::_scalar_deleting_destructor_
          (UMovieSceneFloatVectorTrackExtensions *this,uint param_1)

{
  *(undefined ***)this = &___7UMovieSceneFloatVectorTrackExtensions__6B_;
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

// `scalar_deleting_destructor' @ 14c6bb1f0

void * __thiscall
USequencerScriptingRangeExtensions::_scalar_deleting_destructor_
          (USequencerScriptingRangeExtensions *this,uint param_1)

{
  *(undefined ***)this = &___7USequencerScriptingRangeExtensions__6B_;
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

// EmptyLinkFunctionForGeneratedCodeMovieSceneVectorTrackExtensions @ 14c6bb250

void __cdecl EmptyLinkFunctionForGeneratedCodeMovieSceneVectorTrackExtensions(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeSequencerScriptingRangeExtensions @ 14c6bb260

void __cdecl EmptyLinkFunctionForGeneratedCodeSequencerScriptingRangeExtensions(void)

{
  return;
}

// Z_Construct_UClass_UMovieSceneDoubleVectorTrackExtensions_NoRegister @ 14c6bb900

UClass * __cdecl Z_Construct_UClass_UMovieSceneDoubleVectorTrackExtensions_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneDoubleVectorTrackExtensions.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/SequencerScripting",L"MovieSceneDoubleVectorTrackExtensions",
               &Z_Registration_Info_UClass_UMovieSceneDoubleVectorTrackExtensions.InnerSingleton,
               UMovieSceneDoubleVectorTrackExtensions::
               StaticRegisterNativesUMovieSceneDoubleVectorTrackExtensions,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieSceneDoubleVectorTrackExtensions>,
               InternalVTableHelperCtorCaller<UMovieSceneDoubleVectorTrackExtensions>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneDoubleVectorTrackExtensions.InnerSingleton;
}

// Z_Construct_UClass_UMovieSceneFloatVectorTrackExtensions_NoRegister @ 14c6bb9c0

UClass * __cdecl Z_Construct_UClass_UMovieSceneFloatVectorTrackExtensions_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneFloatVectorTrackExtensions.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/SequencerScripting",L"MovieSceneFloatVectorTrackExtensions",
               &Z_Registration_Info_UClass_UMovieSceneFloatVectorTrackExtensions.InnerSingleton,
               UMovieSceneFloatVectorTrackExtensions::
               StaticRegisterNativesUMovieSceneFloatVectorTrackExtensions,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieSceneFloatVectorTrackExtensions>,
               InternalVTableHelperCtorCaller<UMovieSceneFloatVectorTrackExtensions>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneFloatVectorTrackExtensions.InnerSingleton;
}

// Z_Construct_UClass_USequencerScriptingRangeExtensions_NoRegister @ 14c6bba80

UClass * __cdecl Z_Construct_UClass_USequencerScriptingRangeExtensions_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USequencerScriptingRangeExtensions.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/SequencerScripting",L"SequencerScriptingRangeExtensions",
               &Z_Registration_Info_UClass_USequencerScriptingRangeExtensions.InnerSingleton,
               USequencerScriptingRangeExtensions::
               StaticRegisterNativesUSequencerScriptingRangeExtensions,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<USequencerScriptingRangeExtensions>,
               InternalVTableHelperCtorCaller<USequencerScriptingRangeExtensions>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USequencerScriptingRangeExtensions.InnerSingleton;
}

// IMPLEMENT_MODULE_SequencerScripting @ 14c6bc960

void __cdecl IMPLEMENT_MODULE_SequencerScripting(void)

{
  return;
}

