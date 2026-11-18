// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioAnalyzer
// Functions: 59

// `dynamic_initializer_for_'LLMTagDeclaration_Audio_Analysis'' @ 1413e0970

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LLMTagDeclaration_Audio_Analysis__(void)

{
  FName FVar1;
  FName FVar2;
  FName FVar3;
  FName *pFVar4;
  FThreadSafeStaticStat<FStat_STAT_AudioSummaryLLM> FVar5;
  FThreadSafeStaticStat<FStat_STAT_AudioAnalysisLLM> FVar6;
  FName local_res8;
  FName local_res10;
  FName local_res18;
  FName local_res20;
  
  FVar5 = StatPtr_STAT_AudioSummaryLLM;
  if (StatPtr_STAT_AudioSummaryLLM == (FThreadSafeStaticStat<FStat_STAT_AudioSummaryLLM>)0x0) {
    pFVar4 = FName::FName(&local_res8,"STAT_AudioSummaryLLM");
    FVar5 = (FThreadSafeStaticStat<FStat_STAT_AudioSummaryLLM>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AudioSummaryLLM,*pFVar4,L"Audio",
                       "STATGROUP_LLM","STATCAT_Advanced",L"LLM Summary",true,false,ST_int64,false,
                       false,MCR_PhysicalLLM);
  }
  local_res8.ComparisonIndex.Value = (uint)*(undefined8 *)FVar5;
  local_res8.Number = (uint)((ulonglong)*(undefined8 *)FVar5 >> 0x20);
  FVar6 = StatPtr_STAT_AudioAnalysisLLM;
  if (StatPtr_STAT_AudioAnalysisLLM == (FThreadSafeStaticStat<FStat_STAT_AudioAnalysisLLM>)0x0) {
    pFVar4 = FName::FName(&local_res10,"STAT_AudioAnalysisLLM");
    FVar6 = (FThreadSafeStaticStat<FStat_STAT_AudioAnalysisLLM>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AudioAnalysisLLM,*pFVar4,
                       L"AudioAnalysis","STATGROUP_LLMFULL","STATCAT_Advanced",L"LLM FULL",true,
                       false,ST_int64,false,false,MCR_PhysicalLLM);
  }
  local_res10.ComparisonIndex.Value = (uint)*(undefined8 *)FVar6;
  local_res10.Number = (uint)((ulonglong)*(undefined8 *)FVar6 >> 0x20);
  pFVar4 = FName::FName(&local_res18,L"Audio");
  FVar1 = *pFVar4;
  pFVar4 = FName::FName(&local_res20,L"Audio Analysis");
  FVar2.Number = local_res8.Number;
  FVar2.ComparisonIndex.Value = local_res8.ComparisonIndex.Value;
  FVar3.Number = local_res10.Number;
  FVar3.ComparisonIndex.Value = local_res10.ComparisonIndex.Value;
  FLLMTagDeclaration::FLLMTagDeclaration
            (&LLMTagDeclaration_Audio_Analysis,L"Audio_Analysis",*pFVar4,FVar1,FVar3,FVar2,None);
  return;
}

// `dynamic_initializer_for_'LogAudioAnalyzer'' @ 1413e0af0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogAudioAnalyzer__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogAudioAnalyzer,L"LogAudioAnalyzer",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogAudioAnalyzer__);
  return;
}

// `dynamic_initializer_for_'ModuleRegistrantAudioAnalyzer'' @ 1413e0b30

void __cdecl _dynamic_initializer_for__ModuleRegistrantAudioAnalyzer__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "AudioAnalyzer";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"AudioAnalyzer",0xd);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,FStaticallyLinkedModuleRegistrant<FAudioAnalyzerModule>::InitializeModule);
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_AudioAnalysisLLM'' @ 1413e0b80

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_AudioAnalysisLLM__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_AudioAnalysisLLM == (FThreadSafeStaticStat<FStat_STAT_AudioAnalysisLLM>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_AudioAnalysisLLM");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AudioAnalysisLLM,*pFVar1,L"AudioAnalysis",
               "STATGROUP_LLMFULL","STATCAT_Advanced",L"LLM FULL",true,false,ST_int64,false,false,
               MCR_PhysicalLLM);
  }
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AudioAnalyzer_Classes_AudioAnalyzerAsset_h__Script_AudioAnalyzer_879709359'' @ 1413e0c10

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AudioAnalyzer_Classes_AudioAnalyzerAsset_h__Script_AudioAnalyzer_879709359__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/AudioAnalyzer",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AudioAnalyzer_Classes_AudioAnalyzerAsset_h__Script_AudioAnalyzer_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AudioAnalyzer_Classes_AudioAnalyzerNRT_h__Script_AudioAnalyzer_858100238'' @ 1413e0c50

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AudioAnalyzer_Classes_AudioAnalyzerNRT_h__Script_AudioAnalyzer_858100238__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/AudioAnalyzer",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AudioAnalyzer_Classes_AudioAnalyzerNRT_h__Script_AudioAnalyzer_Statics
             ::ClassInfo,2,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AudioAnalyzer_Classes_AudioAnalyzerSubsystem_h__Script_AudioAnalyzer_1701454646'' @ 1413e0c90

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AudioAnalyzer_Classes_AudioAnalyzerSubsystem_h__Script_AudioAnalyzer_1701454646__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/AudioAnalyzer",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AudioAnalyzer_Classes_AudioAnalyzerSubsystem_h__Script_AudioAnalyzer_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AudioAnalyzer_Classes_AudioAnalyzer_h__Script_AudioAnalyzer_3228345424'' @ 1413e0cd0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AudioAnalyzer_Classes_AudioAnalyzer_h__Script_AudioAnalyzer_3228345424__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/AudioAnalyzer",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AudioAnalyzer_Classes_AudioAnalyzer_h__Script_AudioAnalyzer_Statics
             ::ClassInfo,2,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferPackage_UPackage__Script_AudioAnalyzer'' @ 1413e0d10

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferPackage_UPackage__Script_AudioAnalyzer__(void)

{
  FPackageReloadVersionInfo local_res8 [4];
  
  local_res8[0].BodyHash = 0xd88217c4;
  local_res8[0].DeclarationsHash = 0x9dfb3438;
  RegisterCompiledInInfo
            (Z_Construct_UPackage__Script_AudioAnalyzer,L"/Script/AudioAnalyzer",
             &Z_Registration_Info_UPackage__Script_AudioAnalyzer,local_res8);
  return;
}

// Z_Construct_UPackage__Script_AudioAnalyzer @ 14d80b9f0

UPackage * __cdecl Z_Construct_UPackage__Script_AudioAnalyzer(void)

{
  if (Z_Registration_Info_UPackage__Script_AudioAnalyzer.OuterSingleton == (UPackage *)0x0) {
    UECodeGen_Private::ConstructUPackage
              (&Z_Registration_Info_UPackage__Script_AudioAnalyzer.OuterSingleton,&PackageParams);
  }
  return Z_Registration_Info_UPackage__Script_AudioAnalyzer.OuterSingleton;
}

// Z_Construct_UClass_UAudioAnalyzerAssetBase @ 14d80bae0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UAudioAnalyzerAssetBase(void)

{
  if (Z_Registration_Info_UClass_UAudioAnalyzerAssetBase.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UAudioAnalyzerAssetBase.OuterSingleton,
               &Z_Construct_UClass_UAudioAnalyzerAssetBase_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UAudioAnalyzerAssetBase.OuterSingleton;
}

// Z_Construct_UClass_UAudioAnalyzer_NoRegister @ 14d80bca0

UClass * __cdecl Z_Construct_UClass_UAudioAnalyzer_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAudioAnalyzer.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AudioAnalyzer",L"AudioAnalyzer",
               &Z_Registration_Info_UClass_UAudioAnalyzer.InnerSingleton,
               UAudioAnalyzer::StaticRegisterNativesUAudioAnalyzer,0xa0,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UAudioAnalyzer>,InternalVTableHelperCtorCaller<UAudioAnalyzer>,
               local_res8,UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAudioAnalyzer.InnerSingleton;
}

// Z_Construct_UClass_UAudioAnalyzerNRT @ 14d80be10

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UAudioAnalyzerNRT(void)

{
  if (Z_Registration_Info_UClass_UAudioAnalyzerNRT.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UAudioAnalyzerNRT.OuterSingleton,
               &Z_Construct_UClass_UAudioAnalyzerNRT_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UAudioAnalyzerNRT.OuterSingleton;
}

// Z_Construct_UClass_UAudioAnalyzerNRTSettings @ 14d80be50

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UAudioAnalyzerNRTSettings(void)

{
  if (Z_Registration_Info_UClass_UAudioAnalyzerNRTSettings.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UAudioAnalyzerNRTSettings.OuterSingleton,
               &Z_Construct_UClass_UAudioAnalyzerNRTSettings_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UAudioAnalyzerNRTSettings.OuterSingleton;
}

// `scalar_deleting_destructor' @ 14d80bf60

void * __thiscall
FAudioAnalyzerModule::_scalar_deleting_destructor_(FAudioAnalyzerModule *this,uint param_1)

{
  *this = (FAudioAnalyzerModule)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// Z_Construct_UClass_UAudioAnalyzerSubsystem_NoRegister @ 14d80bfa0

UClass * __cdecl Z_Construct_UClass_UAudioAnalyzerSubsystem_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAudioAnalyzerSubsystem.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AudioAnalyzer",L"AudioAnalyzerSubsystem",
               &Z_Registration_Info_UClass_UAudioAnalyzerSubsystem.InnerSingleton,
               UAudioAnalyzerSubsystem::StaticRegisterNativesUAudioAnalyzerSubsystem,0x50,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",InternalConstructor<UAudioAnalyzerSubsystem>
               ,InternalVTableHelperCtorCaller<UAudioAnalyzerSubsystem>,local_res8,
               UEngineSubsystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAudioAnalyzerSubsystem.InnerSingleton;
}

// Z_Construct_UClass_UAudioAnalyzerSubsystem @ 14d80c120

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UAudioAnalyzerSubsystem(void)

{
  if (Z_Registration_Info_UClass_UAudioAnalyzerSubsystem.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UAudioAnalyzerSubsystem.OuterSingleton,
               &Z_Construct_UClass_UAudioAnalyzerSubsystem_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UAudioAnalyzerSubsystem.OuterSingleton;
}

// Z_Construct_UClass_UAudioAnalyzer @ 14d80c160

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UAudioAnalyzer(void)

{
  if (Z_Registration_Info_UClass_UAudioAnalyzer.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UAudioAnalyzer.OuterSingleton,
               &Z_Construct_UClass_UAudioAnalyzer_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UAudioAnalyzer.OuterSingleton;
}

// Z_Construct_UClass_UAudioAnalyzerSettings @ 14d80c1a0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UAudioAnalyzerSettings(void)

{
  if (Z_Registration_Info_UClass_UAudioAnalyzerSettings.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UAudioAnalyzerSettings.OuterSingleton,
               &Z_Construct_UClass_UAudioAnalyzerSettings_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UAudioAnalyzerSettings.OuterSingleton;
}

// Z_Construct_UFunction_UAudioAnalyzer_StartAnalyzing @ 14d80c1e0

UFunction * __cdecl Z_Construct_UFunction_UAudioAnalyzer_StartAnalyzing(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAudioAnalyzer_StartAnalyzing_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UAudioAnalyzer_StopAnalyzing @ 14d80c220

UFunction * __cdecl Z_Construct_UFunction_UAudioAnalyzer_StopAnalyzing(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAudioAnalyzer_StopAnalyzing_Statics::FuncParams);
  }
  return ReturnFunction;
}

// InternalConstructor<UAudioAnalyzer> @ 14d80c390

void __cdecl InternalConstructor<UAudioAnalyzer>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined4 *)&this[1].field_0x8 = 0x400;
    *(undefined ***)this = &___7UAudioAnalyzer__6B_;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined8 *)&this[1].field_0x18 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
    *(undefined8 *)(this + 2) = 0;
    *(undefined8 *)&this[2].field_0x8 = 0;
    *(undefined8 *)&this[2].field_0x10 = 0;
    *(undefined8 *)&this[2].field_0x18 = 0;
    *(undefined8 *)&this[2].field_0x20 = 0;
    *(undefined8 *)(this + 3) = 0;
    *(undefined8 *)&this[3].field_0x8 = 0;
    *(undefined8 *)&this[3].field_0x10 = 0;
    *(undefined8 *)&this[3].field_0x18 = 0;
    *(undefined8 *)&this[3].field_0x20 = 0;
  }
  return;
}

// InternalConstructor<UAudioAnalyzerAssetBase> @ 14d80c410

void __cdecl InternalConstructor<UAudioAnalyzerAssetBase>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UAudioAnalyzerAssetBase__6B_;
  }
  return;
}

// InternalConstructor<UAudioAnalyzerNRT> @ 14d80c440

void __cdecl InternalConstructor<UAudioAnalyzerNRT>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UAudioAnalyzerNRT__6B_;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined8 *)&this[1].field_0x18 = 0;
    InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this[1].field_0x20,4000);
    *(undefined4 *)&this[2].field_0x20 = 0;
  }
  return;
}

// InternalConstructor<UAudioAnalyzerNRTSettings> @ 14d80c4a0

void __cdecl InternalConstructor<UAudioAnalyzerNRTSettings>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UAudioAnalyzerNRTSettings__6B_;
  }
  return;
}

// InternalConstructor<UAudioAnalyzerSettings> @ 14d80c4d0

void __cdecl InternalConstructor<UAudioAnalyzerSettings>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UAudioAnalyzerSettings__6B_;
  }
  return;
}

// InternalConstructor<UAudioAnalyzerSubsystem> @ 14d80c500

void __cdecl InternalConstructor<UAudioAnalyzerSubsystem>(FObjectInitializer *param_1)

{
  UEngineSubsystem *this;
  
  this = (UEngineSubsystem *)param_1->Obj;
  if (this != (UEngineSubsystem *)0x0) {
    UEngineSubsystem::UEngineSubsystem(this);
    *(undefined ***)this = &___7UAudioAnalyzerSubsystem__6B_;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined8 *)&this[1].field_0x18 = 0;
  }
  return;
}

// InternalVTableHelperCtorCaller<UAudioAnalyzer> @ 14d80c540

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UAudioAnalyzer>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UAudioAnalyzer::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined4 *)&pUVar1[1].field_0x8 = 0x400;
    *(undefined ***)pUVar1 = &___7UAudioAnalyzer__6B_;
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    *(undefined8 *)&pUVar1[1].field_0x18 = 0;
    *(undefined8 *)&pUVar1[1].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 2) = 0;
    *(undefined8 *)&pUVar1[2].field_0x8 = 0;
    *(undefined8 *)&pUVar1[2].field_0x10 = 0;
    *(undefined8 *)&pUVar1[2].field_0x18 = 0;
    *(undefined8 *)&pUVar1[2].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 3) = 0;
    *(undefined8 *)&pUVar1[3].field_0x8 = 0;
    *(undefined8 *)&pUVar1[3].field_0x10 = 0;
    *(undefined8 *)&pUVar1[3].field_0x18 = 0;
    *(undefined8 *)&pUVar1[3].field_0x20 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UAudioAnalyzerAssetBase> @ 14d80c640

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UAudioAnalyzerAssetBase>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UAudioAnalyzerAssetBase::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UAudioAnalyzerAssetBase__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UAudioAnalyzerNRT> @ 14d80c6f0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UAudioAnalyzerNRT>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UAudioAnalyzerNRT::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UAudioAnalyzerNRT__6B_;
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    *(undefined8 *)&pUVar1[1].field_0x18 = 0;
    InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&pUVar1[1].field_0x20,4000);
    *(undefined4 *)&pUVar1[2].field_0x20 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UAudioAnalyzerNRTSettings> @ 14d80c7c0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UAudioAnalyzerNRTSettings>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UAudioAnalyzerNRTSettings::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UAudioAnalyzerNRTSettings__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UAudioAnalyzerSettings> @ 14d80c870

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UAudioAnalyzerSettings>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UAudioAnalyzerSettings::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UAudioAnalyzerSettings__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UAudioAnalyzerSubsystem> @ 14d80c920

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UAudioAnalyzerSubsystem>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UEngineSubsystem *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UAudioAnalyzerSubsystem::GetPrivateStaticClass();
  this = (UEngineSubsystem *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UEngineSubsystem *)0x0) {
    UEngineSubsystem::UEngineSubsystem(this,param_1);
    *(undefined ***)this = &___7UAudioAnalyzerSubsystem__6B_;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined8 *)&this[1].field_0x18 = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// `scalar_deleting_destructor' @ 14d80d100

void * __thiscall
FAsyncTask<FAudioAnalyzeTask>::_scalar_deleting_destructor_
          (FAsyncTask<FAudioAnalyzeTask> *this,uint param_1)

{
  FAudioAnalyzeTask::~FAudioAnalyzeTask(&this->Task);
  FAsyncTaskBase::~FAsyncTaskBase((FAsyncTaskBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xa8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d80d150

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UAudioAnalyzerSubsystem,bool___cdecl(float),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UAudioAnalyzerSubsystem,bool___cdecl(float),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d80d180

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FAsyncTask<FAudioAnalyzeTask>,SharedPointerInternals::DefaultDeleter<FAsyncTask<FAudioAnalyzeTask>_>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FAsyncTask<FAudioAnalyzeTask>,SharedPointerInternals::DefaultDeleter<FAsyncTask<FAudioAnalyzeTask>_>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d80d1c0

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<Audio::IAnalyzerNRTResult,SharedPointerInternals::DefaultDeleter<Audio::IAnalyzerNRTResult>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<Audio::IAnalyzerNRTResult,SharedPointerInternals::DefaultDeleter<Audio::IAnalyzerNRTResult>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d80d200

void * __thiscall
Audio::IAnalyzerSettings::_scalar_deleting_destructor_(IAnalyzerSettings *this,uint param_1)

{
  *this = (IAnalyzerSettings)&___7IAnalyzerSettings_Audio__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d80d240

void * __thiscall UAudioAnalyzer::_scalar_deleting_destructor_(UAudioAnalyzer *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  IAnalyzerResult *pIVar2;
  FAnalyzerFacade *pFVar3;
  IAnalyzerWorker *pIVar4;
  IAnalyzerSettings *pIVar5;
  
  this->_padding_ = (longlong)&___7UAudioAnalyzer__6B_;
  pFVar1 = (this->AnalysisBuffer).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->AnalyzerControls).SharedReferenceCount.ReferenceController);
  pIVar2 = (this->ResultsInternal).Ptr;
  if (pIVar2 != (IAnalyzerResult *)0x0) {
    (**(code **)*pIVar2)(pIVar2,1);
  }
  pFVar3 = (this->AnalyzerFacade).Ptr;
  if (pFVar3 != (FAnalyzerFacade *)0x0) {
    pIVar4 = (pFVar3->Worker).Ptr;
    if (pIVar4 != (IAnalyzerWorker *)0x0) {
      (**(code **)*pIVar4)(pIVar4,1);
    }
    pIVar5 = (pFVar3->Settings).Ptr;
    if (pIVar5 != (IAnalyzerSettings *)0x0) {
      (**(code **)*pIVar5)(pIVar5,1);
    }
    ::operator_delete(pFVar3,0x20);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->AnalysisTask).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->PatchOutputStrongPtr).SharedReferenceCount.ReferenceController);
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xa0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d80d330

void * __thiscall
UAudioAnalyzerAssetBase::_scalar_deleting_destructor_(UAudioAnalyzerAssetBase *this,uint param_1)

{
  *(undefined ***)this = &___7UAudioAnalyzerAssetBase__6B_;
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

// `scalar_deleting_destructor' @ 14d80d390

void * __thiscall
UAudioAnalyzerNRT::_scalar_deleting_destructor_(UAudioAnalyzerNRT *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UAudioAnalyzerNRT__6B_;
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->ResultCriticalSection);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Result).SharedReferenceCount.ReferenceController);
  this->_padding_ = (longlong)&___7UAudioAnalyzerAssetBase__6B_;
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

// `scalar_deleting_destructor' @ 14d80d410

void * __thiscall
UAudioAnalyzerNRTSettings::_scalar_deleting_destructor_
          (UAudioAnalyzerNRTSettings *this,uint param_1)

{
  *(undefined ***)this = &___7UAudioAnalyzerAssetBase__6B_;
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

// `scalar_deleting_destructor' @ 14d80d470

void * __thiscall
UAudioAnalyzerSettings::_scalar_deleting_destructor_(UAudioAnalyzerSettings *this,uint param_1)

{
  *(undefined ***)this = &___7UAudioAnalyzerAssetBase__6B_;
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

// `scalar_deleting_destructor' @ 14d80d4d0

void * __thiscall
UAudioAnalyzerSubsystem::_scalar_deleting_destructor_(UAudioAnalyzerSubsystem *this,uint param_1)

{
  TWeakPtr<FTSTicker::FElement,1> *pTVar1;
  atomic<int> *paVar2;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  FScriptContainerElement *pFVar5;
  TWeakPtr<FTSTicker::FElement,1> local_28;
  longlong local_18 [2];
  
  pTVar1 = &this->TickerHandle;
  this->_padding_ = (longlong)&___7UAudioAnalyzerSubsystem__6B_;
  if (((pTVar1->Object != (FElement *)0x0) &&
      (pTVar4 = (this->TickerHandle).WeakReferenceCount.ReferenceController,
      pTVar4 != (TReferenceControllerBase<1> *)0x0)) && (0 < (int)pTVar4->SharedReferenceCount)) {
    local_28.Object = pTVar1->Object;
    local_28.WeakReferenceCount.ReferenceController =
         (this->TickerHandle).WeakReferenceCount.ReferenceController;
    if (local_28.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_28.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
           (atomic<int>)
           ((int)(local_28.WeakReferenceCount.ReferenceController)->WeakReferenceCount + 1);
      UNLOCK();
    }
    FTSTicker::RemoveTicker(&local_28);
    if (pTVar1 != (TWeakPtr<FTSTicker::FElement,1> *)local_18) {
      pTVar4 = (this->TickerHandle).WeakReferenceCount.ReferenceController;
      pTVar1->Object = (FElement *)0x0;
      (this->TickerHandle).WeakReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        paVar2 = &pTVar4->WeakReferenceCount;
        aVar3 = *paVar2;
        *paVar2 = (atomic<int>)((int)*paVar2 + -1);
        UNLOCK();
        if (aVar3 == (atomic<int>)0x1) {
          (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
        }
      }
    }
  }
  (this->AudioAnalyzers).ArrayNum = 0;
  if ((this->AudioAnalyzers).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->AudioAnalyzers).AllocatorInstance,0,&(this->AudioAnalyzers).ArrayMax);
  }
  pTVar4 = (this->TickerHandle).WeakReferenceCount.ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar2 = &pTVar4->WeakReferenceCount;
    aVar3 = *paVar2;
    *paVar2 = (atomic<int>)((int)*paVar2 + -1);
    UNLOCK();
    if (aVar3 == (atomic<int>)0x1) {
      (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
    }
  }
  pFVar5 = (this->AudioAnalyzers).AllocatorInstance.Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  UEngineSubsystem::~UEngineSubsystem((UEngineSubsystem *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
    }
    else {
      __empty_global_delete(this,0x50);
    }
  }
  return this;
}

// EmptyLinkFunctionForGeneratedCodeAudioAnalyzer @ 14d80ea40

void __cdecl EmptyLinkFunctionForGeneratedCodeAudioAnalyzer(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeAudioAnalyzerAsset @ 14d80ea50

void __cdecl EmptyLinkFunctionForGeneratedCodeAudioAnalyzerAsset(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeAudioAnalyzerNRT @ 14d80ea60

void __cdecl EmptyLinkFunctionForGeneratedCodeAudioAnalyzerNRT(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeAudioAnalyzerSubsystem @ 14d80ea70

void __cdecl EmptyLinkFunctionForGeneratedCodeAudioAnalyzerSubsystem(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeAudioAnalyzer_init @ 14d80ea80

void __cdecl EmptyLinkFunctionForGeneratedCodeAudioAnalyzer_init(void)

{
  return;
}

// FOnAudioAnalyzerNRTAnalysisComplete_DelegateWrapper @ 14d80ebc0

void __cdecl
FOnAudioAnalyzerNRTAnalysisComplete_DelegateWrapper
          (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *param_1)

{
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            (param_1,(void *)0x0);
  return;
}

// GetAnalyzerFactory @ 14d80eca0

/* WARNING: Enum "Type": Some values do not have unique names */

IAnalyzerFactory * __cdecl Audio::GetAnalyzerFactory(FName param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  FName FVar4;
  bool bVar5;
  int iVar6;
  IModularFeatures *pIVar7;
  longlong lVar8;
  IAnalyzerFactory *pIVar9;
  FName *pFVar10;
  ForAnyElementType FVar11;
  ulonglong uVar12;
  uint uVar13;
  IAnalyzerFactory *pIVar14;
  FName local_res8;
  FLLMScope local_res10 [2];
  FName local_res18;
  FName local_res20;
  IAnalyzerFactory **ppIVar15;
  ForAnyElementType local_c8;
  int local_c0;
  int local_bc;
  ForAnyElementType local_b8;
  int local_b0;
  int iStack_ac;
  IAnalyzerFactory *local_a8;
  FName local_a0;
  FMemScope local_98;
  undefined1 local_90 [8];
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  
  FVar11.Data = (FScriptContainerElement *)&DAT_00000001;
  ppIVar15 = (IAnalyzerFactory **)&DAT_00000001;
  local_res8 = param_1;
  FLLMScope::FLLMScope
            (local_res10,LLMTagDeclaration_Audio_Analysis.UniqueName,false,None,Default,true);
  local_res18 = LLMTagDeclaration_Audio_Analysis.UniqueName;
  FMemScope::FMemScope(&local_98,&local_res18,true);
  pIVar7 = IModularFeatures::Get();
  (**(code **)((longlong)*pIVar7 + 8))(pIVar7);
  pIVar7 = IModularFeatures::Get();
  uVar12 = (ulonglong)_tls_index;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar12 * 8) + 0x9d4c) <
       `public:_static_class_FName___cdecl_Audio::IAnalyzerFactory::GetModularFeatureName(void)'::
       __l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_static_class_FName___cdecl_Audio::IAnalyzerFactory::GetModularFeatureName(void)'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_static_class_FName___cdecl_Audio::IAnalyzerFactory::GetModularFeatureName(void)'::__l2
     ::_thread_safe_static_guard_0__ == -1)) {
    ::FName::FName(&`public:_static_class_FName___cdecl_Audio::IAnalyzerFactory::GetModularFeatureName(void)'
                    ::__l2::AudioExtFeatureName,L"AudioAnalyzerPlugin");
    _Init_thread_footer(&`public:_static_class_FName___cdecl_Audio::IAnalyzerFactory::GetModularFeatureName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  FVar4 = `public:_static_class_FName___cdecl_Audio::IAnalyzerFactory::GetModularFeatureName(void)'
          ::__l2::AudioExtFeatureName;
  pIVar9 = (IAnalyzerFactory *)0x0;
  local_b8.Data = (FScriptContainerElement *)0x0;
  local_b0 = 0;
  iStack_ac = 0;
  iVar6 = (**(code **)((longlong)*pIVar7 + 0x18))
                    (pIVar7,`public:_static_class_FName___cdecl_Audio::IAnalyzerFactory::GetModularFeatureName(void)'
                            ::__l2::AudioExtFeatureName);
  pIVar14 = pIVar9;
  if (0 < iVar6) {
    do {
      lVar8 = (**(code **)((longlong)*pIVar7 + 0x20))
                        (pIVar7,FVar4,pIVar14,*(code **)((longlong)*pIVar7 + 0x20),ppIVar15,
                         FVar11.Data);
      local_a8 = (IAnalyzerFactory *)(lVar8 + -8);
      if (lVar8 == 0) {
        local_a8 = pIVar9;
      }
      if ((local_b8.Data <= (FScriptContainerElement *)&local_a8) &&
         ((FScriptContainerElement *)&local_a8 < local_b8.Data + (longlong)iStack_ac * 8)) {
        ppIVar15 = &local_a8;
        FVar11.Data = local_b8.Data;
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          pIVar9 = (IAnalyzerFactory *)(*pcVar3)();
          return pIVar9;
        }
      }
      if (local_b0 == iStack_ac) {
        local_b0 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,&local_b8,&iStack_ac);
      }
      iVar1 = local_b0 + 1;
      uVar13 = (int)pIVar14 + 1;
      *(IAnalyzerFactory **)(local_b8.Data + (longlong)local_b0 * 8) = local_a8;
      pIVar14 = (IAnalyzerFactory *)(ulonglong)uVar13;
      local_b0 = iVar1;
    } while ((int)uVar13 < iVar6);
    uVar12 = (ulonglong)_tls_index;
  }
  pIVar7 = IModularFeatures::Get();
  (**(code **)((longlong)*pIVar7 + 0x10))(pIVar7);
  FVar4 = local_res8;
  local_c8.Data = (FScriptContainerElement *)0x0;
  local_c0 = 0;
  pFVar2 = local_b8.Data + (longlong)local_b0 * 8;
  local_bc = 0;
  FVar11.Data = local_b8.Data;
  if (local_b8.Data != pFVar2) {
    do {
      pIVar14 = *(IAnalyzerFactory **)FVar11.Data;
      if ((pIVar14 == (IAnalyzerFactory *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("nullptr != Factory",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioAnalyzer\\Private\\AudioAnalyzerFacade.cpp"
                             ,0x15,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        pIVar9 = (IAnalyzerFactory *)(*pcVar3)();
        return pIVar9;
      }
      pFVar10 = (FName *)(**(code **)((longlong)*pIVar14 + 8))(pIVar14,local_90);
      if (*pFVar10 == FVar4) {
        if (((local_c8.Data <= FVar11.Data) &&
            (FVar11.Data < local_c8.Data + (longlong)local_bc * 8)) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar5)) {
          pcVar3 = (code *)swi(3);
          pIVar9 = (IAnalyzerFactory *)(*pcVar3)();
          return pIVar9;
        }
        if (local_c0 == local_bc) {
          local_c0 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x808,&local_c8,&local_bc);
        }
        *(IAnalyzerFactory **)(local_c8.Data + (longlong)local_c0 * 8) =
             *(IAnalyzerFactory **)FVar11.Data;
        local_c0 = local_c0 + 1;
      }
      FVar11.Data = FVar11.Data + 8;
    } while (FVar11.Data != pFVar2);
    uVar12 = (ulonglong)_tls_index;
  }
  if (local_c0 == 0) {
    if (1 < (byte)LogAudioAnalyzer._0_1_) {
      ::FName::ToString(&local_res8,&local_78);
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar12 * 8) + 0x9d4c) <
           `public:_static_class_FName___cdecl_Audio::IAnalyzerFactory::GetModularFeatureName(void)'
           ::__l2::_thread_safe_static_guard_0__) &&
         (_Init_thread_header(&`public:_static_class_FName___cdecl_Audio::IAnalyzerFactory::GetModularFeatureName(void)'
                               ::__l2::_thread_safe_static_guard_0__),
         `public:_static_class_FName___cdecl_Audio::IAnalyzerFactory::GetModularFeatureName(void)'::
         __l2::_thread_safe_static_guard_0__ == -1)) {
        ::FName::FName(&`public:_static_class_FName___cdecl_Audio::IAnalyzerFactory::GetModularFeatureName(void)'
                        ::__l2::AudioExtFeatureName,L"AudioAnalyzerPlugin");
        _Init_thread_footer(&`public:_static_class_FName___cdecl_Audio::IAnalyzerFactory::GetModularFeatureName(void)'
                             ::__l2::_thread_safe_static_guard_0__);
      }
      local_res20 = `public:_static_class_FName___cdecl_Audio::IAnalyzerFactory::GetModularFeatureName(void)'
                    ::__l2::AudioExtFeatureName;
      ::FName::ToString(&local_res20,&local_88);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAudioAnalyzer);
      if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_88.Data.AllocatorInstance.Data);
      }
      if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.Data.AllocatorInstance.Data);
      }
    }
  }
  else {
    if ((1 < local_c0) && (2 < (byte)LogAudioAnalyzer._0_1_)) {
      ::FName::ToString(&local_res8,&local_58);
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar12 * 8) + 0x9d4c) <
           `public:_static_class_FName___cdecl_Audio::IAnalyzerFactory::GetModularFeatureName(void)'
           ::__l2::_thread_safe_static_guard_0__) &&
         (_Init_thread_header(&`public:_static_class_FName___cdecl_Audio::IAnalyzerFactory::GetModularFeatureName(void)'
                               ::__l2::_thread_safe_static_guard_0__),
         `public:_static_class_FName___cdecl_Audio::IAnalyzerFactory::GetModularFeatureName(void)'::
         __l2::_thread_safe_static_guard_0__ == -1)) {
        ::FName::FName(&`public:_static_class_FName___cdecl_Audio::IAnalyzerFactory::GetModularFeatureName(void)'
                        ::__l2::AudioExtFeatureName,L"AudioAnalyzerPlugin");
        _Init_thread_footer(&`public:_static_class_FName___cdecl_Audio::IAnalyzerFactory::GetModularFeatureName(void)'
                             ::__l2::_thread_safe_static_guard_0__);
      }
      local_a0 = `public:_static_class_FName___cdecl_Audio::IAnalyzerFactory::GetModularFeatureName(void)'
                 ::__l2::AudioExtFeatureName;
      ::FName::ToString(&local_a0,&local_68);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAudioAnalyzer);
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
    }
    if ((local_c0 < 1) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar3 = (code *)swi(3);
      pIVar9 = (IAnalyzerFactory *)(*pcVar3)();
      return pIVar9;
    }
    pIVar9 = *(IAnalyzerFactory **)local_c8.Data;
  }
  if (local_c8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.Data);
  }
  if (local_b8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.Data);
  }
  FMemScope::~FMemScope(&local_98);
  FLLMScope::~FLLMScope(local_res10);
  return pIVar9;
}

// GetAnalyzerNRTFactory @ 14d80f220

/* WARNING: Enum "Type": Some values do not have unique names */

IAnalyzerNRTFactory * __cdecl Audio::GetAnalyzerNRTFactory(FName param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  FName FVar4;
  bool bVar5;
  int iVar6;
  IModularFeatures *pIVar7;
  longlong lVar8;
  IAnalyzerNRTFactory *pIVar9;
  FName *pFVar10;
  ForAnyElementType FVar11;
  ulonglong uVar12;
  uint uVar13;
  FName local_res8;
  FName local_res10;
  FName local_res18;
  undefined1 local_res20 [8];
  IAnalyzerNRTFactory *local_b8;
  ForAnyElementType local_b0;
  int local_a8;
  int local_a4;
  ForAnyElementType local_a0;
  int local_98;
  int iStack_94;
  FString local_90;
  FString local_80;
  FString local_70;
  FString local_60 [2];
  IAnalyzerNRTFactory *pIVar14;
  
  local_res8 = param_1;
  pIVar7 = IModularFeatures::Get();
  (**(code **)((longlong)*pIVar7 + 8))(pIVar7);
  pIVar7 = IModularFeatures::Get();
  uVar12 = (ulonglong)_tls_index;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar12 * 8) + 0x9d4c) <
       `public:_static_class_FName___cdecl_Audio::IAnalyzerNRTFactory::GetModularFeatureName(void)'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_static_class_FName___cdecl_Audio::IAnalyzerNRTFactory::GetModularFeatureName(void)'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_static_class_FName___cdecl_Audio::IAnalyzerNRTFactory::GetModularFeatureName(void)'::
     __l2::_thread_safe_static_guard_0__ == -1)) {
    ::FName::FName(&`public:_static_class_FName___cdecl_Audio::IAnalyzerNRTFactory::GetModularFeatureName(void)'
                    ::__l2::AudioExtFeatureName,L"AudioAnalyzerNRTPlugin");
    _Init_thread_footer(&`public:_static_class_FName___cdecl_Audio::IAnalyzerNRTFactory::GetModularFeatureName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  FVar4 = `public:_static_class_FName___cdecl_Audio::IAnalyzerNRTFactory::GetModularFeatureName(void)'
          ::__l2::AudioExtFeatureName;
  pIVar9 = (IAnalyzerNRTFactory *)0x0;
  local_a0.Data = (FScriptContainerElement *)0x0;
  local_98 = 0;
  iStack_94 = 0;
  iVar6 = (**(code **)((longlong)*pIVar7 + 0x18))
                    (pIVar7,`public:_static_class_FName___cdecl_Audio::IAnalyzerNRTFactory::GetModularFeatureName(void)'
                            ::__l2::AudioExtFeatureName);
  pIVar14 = pIVar9;
  if (0 < iVar6) {
    do {
      lVar8 = (**(code **)((longlong)*pIVar7 + 0x20))(pIVar7,FVar4,pIVar14);
      local_b8 = (IAnalyzerNRTFactory *)(lVar8 + -8);
      if (lVar8 == 0) {
        local_b8 = pIVar9;
      }
      if (((local_a0.Data <= (FScriptContainerElement *)&local_b8) &&
          ((FScriptContainerElement *)&local_b8 < local_a0.Data + (longlong)iStack_94 * 8)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar3 = (code *)swi(3);
        pIVar9 = (IAnalyzerNRTFactory *)(*pcVar3)();
        return pIVar9;
      }
      if (local_98 == iStack_94) {
        local_98 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,&local_a0,&iStack_94);
      }
      iVar1 = local_98 + 1;
      uVar13 = (int)pIVar14 + 1;
      pIVar14 = (IAnalyzerNRTFactory *)(ulonglong)uVar13;
      *(IAnalyzerNRTFactory **)(local_a0.Data + (longlong)local_98 * 8) = local_b8;
      local_98 = iVar1;
    } while ((int)uVar13 < iVar6);
    uVar12 = (ulonglong)_tls_index;
  }
  pIVar7 = IModularFeatures::Get();
  (**(code **)((longlong)*pIVar7 + 0x10))(pIVar7);
  FVar4 = local_res8;
  local_b0.Data = (FScriptContainerElement *)0x0;
  local_a8 = 0;
  pFVar2 = local_a0.Data + (longlong)local_98 * 8;
  local_a4 = 0;
  FVar11.Data = local_a0.Data;
  if (local_a0.Data != pFVar2) {
    do {
      pIVar14 = *(IAnalyzerNRTFactory **)FVar11.Data;
      if ((pIVar14 == (IAnalyzerNRTFactory *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("nullptr != Factory",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioAnalyzer\\Private\\AudioAnalyzerNRTFacade.cpp"
                             ,0x14,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        pIVar9 = (IAnalyzerNRTFactory *)(*pcVar3)();
        return pIVar9;
      }
      pFVar10 = (FName *)(**(code **)((longlong)*pIVar14 + 8))(pIVar14,local_res20);
      if (*pFVar10 == FVar4) {
        if (((local_b0.Data <= FVar11.Data) &&
            (FVar11.Data < local_b0.Data + (longlong)local_a4 * 8)) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar5)) {
          pcVar3 = (code *)swi(3);
          pIVar9 = (IAnalyzerNRTFactory *)(*pcVar3)();
          return pIVar9;
        }
        if (local_a8 == local_a4) {
          local_a8 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x808,&local_b0,&local_a4);
        }
        *(IAnalyzerNRTFactory **)(local_b0.Data + (longlong)local_a8 * 8) =
             *(IAnalyzerNRTFactory **)FVar11.Data;
        local_a8 = local_a8 + 1;
      }
      FVar11.Data = FVar11.Data + 8;
    } while (FVar11.Data != pFVar2);
    uVar12 = (ulonglong)_tls_index;
  }
  if (local_a8 == 0) {
    if (1 < (byte)LogAudioAnalyzer._0_1_) {
      ::FName::ToString(&local_res8,&local_80);
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar12 * 8) + 0x9d4c) <
           `public:_static_class_FName___cdecl_Audio::IAnalyzerNRTFactory::GetModularFeatureName(void)'
           ::__l2::_thread_safe_static_guard_0__) &&
         (_Init_thread_header(&`public:_static_class_FName___cdecl_Audio::IAnalyzerNRTFactory::GetModularFeatureName(void)'
                               ::__l2::_thread_safe_static_guard_0__),
         `public:_static_class_FName___cdecl_Audio::IAnalyzerNRTFactory::GetModularFeatureName(void)'
         ::__l2::_thread_safe_static_guard_0__ == -1)) {
        ::FName::FName(&`public:_static_class_FName___cdecl_Audio::IAnalyzerNRTFactory::GetModularFeatureName(void)'
                        ::__l2::AudioExtFeatureName,L"AudioAnalyzerNRTPlugin");
        _Init_thread_footer(&`public:_static_class_FName___cdecl_Audio::IAnalyzerNRTFactory::GetModularFeatureName(void)'
                             ::__l2::_thread_safe_static_guard_0__);
      }
      local_res10 = `public:_static_class_FName___cdecl_Audio::IAnalyzerNRTFactory::GetModularFeatureName(void)'
                    ::__l2::AudioExtFeatureName;
      ::FName::ToString(&local_res10,&local_90);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAudioAnalyzer);
      if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_90.Data.AllocatorInstance.Data);
      }
      if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_80.Data.AllocatorInstance.Data);
      }
    }
  }
  else {
    if ((1 < local_a8) && (2 < (byte)LogAudioAnalyzer._0_1_)) {
      ::FName::ToString(&local_res8,local_60);
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar12 * 8) + 0x9d4c) <
           `public:_static_class_FName___cdecl_Audio::IAnalyzerNRTFactory::GetModularFeatureName(void)'
           ::__l2::_thread_safe_static_guard_0__) &&
         (_Init_thread_header(&`public:_static_class_FName___cdecl_Audio::IAnalyzerNRTFactory::GetModularFeatureName(void)'
                               ::__l2::_thread_safe_static_guard_0__),
         `public:_static_class_FName___cdecl_Audio::IAnalyzerNRTFactory::GetModularFeatureName(void)'
         ::__l2::_thread_safe_static_guard_0__ == -1)) {
        ::FName::FName(&`public:_static_class_FName___cdecl_Audio::IAnalyzerNRTFactory::GetModularFeatureName(void)'
                        ::__l2::AudioExtFeatureName,L"AudioAnalyzerNRTPlugin");
        _Init_thread_footer(&`public:_static_class_FName___cdecl_Audio::IAnalyzerNRTFactory::GetModularFeatureName(void)'
                             ::__l2::_thread_safe_static_guard_0__);
      }
      local_res18 = `public:_static_class_FName___cdecl_Audio::IAnalyzerNRTFactory::GetModularFeatureName(void)'
                    ::__l2::AudioExtFeatureName;
      ::FName::ToString(&local_res18,&local_70);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAudioAnalyzer);
      if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_70.Data.AllocatorInstance.Data);
      }
      if (local_60[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_60[0].Data.AllocatorInstance.Data);
      }
    }
    if ((local_a8 < 1) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar3 = (code *)swi(3);
      pIVar9 = (IAnalyzerNRTFactory *)(*pcVar3)();
      return pIVar9;
    }
    pIVar9 = *(IAnalyzerNRTFactory **)local_b0.Data;
  }
  if (local_b0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b0.Data);
  }
  if (local_a0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a0.Data);
  }
  return pIVar9;
}

// Z_Construct_UClass_UAudioAnalyzerAssetBase_NoRegister @ 14d811300

UClass * __cdecl Z_Construct_UClass_UAudioAnalyzerAssetBase_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAudioAnalyzerAssetBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AudioAnalyzer",L"AudioAnalyzerAssetBase",
               &Z_Registration_Info_UClass_UAudioAnalyzerAssetBase.InnerSingleton,
               UAudioAnalyzerAssetBase::StaticRegisterNativesUAudioAnalyzerAssetBase,0x28,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UAudioAnalyzerAssetBase>,
               InternalVTableHelperCtorCaller<UAudioAnalyzerAssetBase>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAudioAnalyzerAssetBase.InnerSingleton;
}

// Z_Construct_UClass_UAudioAnalyzerNRTSettings_NoRegister @ 14d8113b0

UClass * __cdecl Z_Construct_UClass_UAudioAnalyzerNRTSettings_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAudioAnalyzerNRTSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AudioAnalyzer",L"AudioAnalyzerNRTSettings",
               &Z_Registration_Info_UClass_UAudioAnalyzerNRTSettings.InnerSingleton,
               UAudioAnalyzerNRTSettings::StaticRegisterNativesUAudioAnalyzerNRTSettings,0x28,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UAudioAnalyzerNRTSettings>,
               InternalVTableHelperCtorCaller<UAudioAnalyzerNRTSettings>,local_res8,
               UAudioAnalyzerAssetBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAudioAnalyzerNRTSettings.InnerSingleton;
}

// Z_Construct_UClass_UAudioAnalyzerNRT_NoRegister @ 14d811470

UClass * __cdecl Z_Construct_UClass_UAudioAnalyzerNRT_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAudioAnalyzerNRT.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AudioAnalyzer",L"AudioAnalyzerNRT",
               &Z_Registration_Info_UClass_UAudioAnalyzerNRT.InnerSingleton,
               UAudioAnalyzerNRT::StaticRegisterNativesUAudioAnalyzerNRT,0x78,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UAudioAnalyzerNRT>,
               InternalVTableHelperCtorCaller<UAudioAnalyzerNRT>,local_res8,
               UAudioAnalyzerAssetBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAudioAnalyzerNRT.InnerSingleton;
}

// Z_Construct_UClass_UAudioAnalyzerSettings_NoRegister @ 14d811530

UClass * __cdecl Z_Construct_UClass_UAudioAnalyzerSettings_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAudioAnalyzerSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AudioAnalyzer",L"AudioAnalyzerSettings",
               &Z_Registration_Info_UClass_UAudioAnalyzerSettings.InnerSingleton,
               UAudioAnalyzerSettings::StaticRegisterNativesUAudioAnalyzerSettings,0x28,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UAudioAnalyzerSettings>,
               InternalVTableHelperCtorCaller<UAudioAnalyzerSettings>,local_res8,
               UAudioAnalyzerAssetBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAudioAnalyzerSettings.InnerSingleton;
}

// Z_Construct_UDelegateFunction_AudioAnalyzer_OnAudioAnalyzerNRTAnalysisComplete__DelegateSignature @ 14d8115f0

UFunction * __cdecl
Z_Construct_UDelegateFunction_AudioAnalyzer_OnAudioAnalyzerNRTAnalysisComplete__DelegateSignature
          (void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUDelegateFunction
              (&ReturnFunction,
               &Z_Construct_UDelegateFunction_AudioAnalyzer_OnAudioAnalyzerNRTAnalysisComplete__DelegateSignature_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// IMPLEMENT_MODULE_AudioAnalyzer @ 14d811d60

void __cdecl IMPLEMENT_MODULE_AudioAnalyzer(void)

{
  return;
}

// `dynamic_atexit_destructor_for_'LogAudioAnalyzer'' @ 15045a4c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogAudioAnalyzer__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogAudioAnalyzer);
  return;
}

