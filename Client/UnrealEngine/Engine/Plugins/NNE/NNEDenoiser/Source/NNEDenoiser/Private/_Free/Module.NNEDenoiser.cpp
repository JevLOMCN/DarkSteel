// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NNEDenoiser
// Functions: 220

// DebugName'' @ 141449020

void __cdecl `dynamic_initializer_for_'UE::NNEDenoiser::Private::FGenericDenoiser::DebugName__(void)

{
  ::FString::FString(&UE::NNEDenoiser::Private::FGenericDenoiser::DebugName,L"FGenericDenoiser");
  atexit(`dynamic_atexit_destructor_for_'UE::NNEDenoiser::Private::FGenericDenoiser::DebugName__);
  return;
}

// `dynamic_initializer_for_'CVarNNEDenoiser'' @ 141449050

void __cdecl UE::NNEDenoiser::Private::_dynamic_initializer_for__CVarNNEDenoiser__(void)

{
  bool local_res8 [32];
  
  local_res8[0] = true;
  TAutoConsoleVariable<bool>::TAutoConsoleVariable<bool>
            (&CVarNNEDenoiser,L"NNEDenoiser",local_res8,L"Enable the NNE Denoiser.",0);
  atexit(_dynamic_atexit_destructor_for__CVarNNEDenoiser__);
  return;
}

// `dynamic_initializer_for_'CVarNNEDenoiserAsset'' @ 1414490a0

void __cdecl UE::NNEDenoiser::Private::_dynamic_initializer_for__CVarNNEDenoiserAsset__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarNNEDenoiserAsset,L"NNEDenoiser.Asset",local_res8,
             L"Defines denoiser asset to used to create the denoiser.\n  0: Use denoiser asset defined by Project Settings\n  1: OIDN Fast\n  2: OIDN Balanced\n  3: OIDN High Quality\n  4: OIDN Fast | Alpha\n  5: OIDN Balanced | Alpha\n  6: OIDN High Quality | Alpha"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarNNEDenoiserAsset__);
  return;
}

// `dynamic_initializer_for_'CVarNNEDenoiserRuntimeName'' @ 1414490f0

void __cdecl UE::NNEDenoiser::Private::_dynamic_initializer_for__CVarNNEDenoiserRuntimeName__(void)

{
  FString local_18;
  
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  TAutoConsoleVariable<FString>::TAutoConsoleVariable<FString>
            (&CVarNNEDenoiserRuntimeName,L"NNEDenoiser.Runtime.Name",&local_18,
             L"Defines the runtime name to run the denoiser model. Leave empty to use default.",0);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__CVarNNEDenoiserRuntimeName__);
  return;
}

// `dynamic_initializer_for_'CVarNNEDenoiserRuntimeType'' @ 141449150

void __cdecl UE::NNEDenoiser::Private::_dynamic_initializer_for__CVarNNEDenoiserRuntimeType__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 2;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarNNEDenoiserRuntimeType,L"NNEDenoiser.Runtime.Type",local_res8,
             L"Defines the runtime type to run the denoiser model.\n  0: CPU\n  1: GPU\n  2: RDG\n",
             0);
  atexit(_dynamic_atexit_destructor_for__CVarNNEDenoiserRuntimeType__);
  return;
}

// `dynamic_initializer_for_'CVarNNEDenoiserTemporalAsset'' @ 1414491a0

void __cdecl
UE::NNEDenoiser::Private::_dynamic_initializer_for__CVarNNEDenoiserTemporalAsset__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarNNEDenoiserTemporalAsset,L"NNEDenoiser.TemporalAsset",local_res8,
             L"Defines temporal denoiser asset to used to create the temporal denoiser.\n  0: Use temporal denoiser asset defined by Project Settings\n  1: OIDN Balanced\n  2: OIDN Balanced | Alpha"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarNNEDenoiserTemporalAsset__);
  return;
}

// `dynamic_initializer_for_'FAutoExposureTestAutomationTestInstance'' @ 1414491f0

void __cdecl
UE::NNEDenoiser::Private::`anonymous_namespace'::
_dynamic_initializer_for__FAutoExposureTestAutomationTestInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FAutoExposureTest");
  FAutomationTestBase::FAutomationTestBase
            ((FAutomationTestBase *)&FAutoExposureTestAutomationTestInstance,&local_18,false);
  FAutoExposureTestAutomationTestInstance._0_8_ = &___7FAutoExposureTest_Private_NNEDenoiser_UE__6B_
  ;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FAutoExposureTestAutomationTestInstance__);
  return;
}

// `dynamic_initializer_for_'FTransferFunctionTestAutomationTestInstance'' @ 141449250

void __cdecl
UE::NNEDenoiser::Private::`anonymous_namespace'::
_dynamic_initializer_for__FTransferFunctionTestAutomationTestInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FTransferFunctionTest");
  FAutomationTestBase::FAutomationTestBase
            ((FAutomationTestBase *)&FTransferFunctionTestAutomationTestInstance,&local_18,false);
  FTransferFunctionTestAutomationTestInstance._0_8_ =
       &___7FTransferFunctionTest_Private_NNEDenoiser_UE__6B_;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FTransferFunctionTestAutomationTestInstance__);
  return;
}

// `dynamic_initializer_for_'GPUStat_FAutoExposure'' @ 1414492b0

void __cdecl _dynamic_initializer_for__GPUStat_FAutoExposure__(void)

{
  atexit(_dynamic_atexit_destructor_for__GPUStat_FAutoExposure__);
  return;
}

// `dynamic_initializer_for_'GPUStat_FAutoExposureDownsample'' @ 1414492d0

void __cdecl _dynamic_initializer_for__GPUStat_FAutoExposureDownsample__(void)

{
  atexit(_dynamic_atexit_destructor_for__GPUStat_FAutoExposureDownsample__);
  return;
}

// `dynamic_initializer_for_'GPUStat_FAutoExposureReduce'' @ 1414492f0

void __cdecl _dynamic_initializer_for__GPUStat_FAutoExposureReduce__(void)

{
  atexit(_dynamic_atexit_destructor_for__GPUStat_FAutoExposureReduce__);
  return;
}

// `dynamic_initializer_for_'GPUStat_FAutoExposureReduceFinal'' @ 141449310

void __cdecl _dynamic_initializer_for__GPUStat_FAutoExposureReduceFinal__(void)

{
  atexit(_dynamic_atexit_destructor_for__GPUStat_FAutoExposureReduceFinal__);
  return;
}

// `dynamic_initializer_for_'GPUStat_FModelInstanceGPU'' @ 141449330

void __cdecl _dynamic_initializer_for__GPUStat_FModelInstanceGPU__(void)

{
  atexit(_dynamic_atexit_destructor_for__GPUStat_FModelInstanceGPU__);
  return;
}

// `dynamic_initializer_for_'GPUStat_FNNEDenoiserDefaultIOProcess'' @ 141449350

void __cdecl _dynamic_initializer_for__GPUStat_FNNEDenoiserDefaultIOProcess__(void)

{
  atexit(_dynamic_atexit_destructor_for__GPUStat_FNNEDenoiserDefaultIOProcess__);
  return;
}

// `dynamic_initializer_for_'GPUStat_FNNEDenoiserReadInput'' @ 141449370

void __cdecl _dynamic_initializer_for__GPUStat_FNNEDenoiserReadInput__(void)

{
  atexit(_dynamic_atexit_destructor_for__GPUStat_FNNEDenoiserReadInput__);
  return;
}

// `dynamic_initializer_for_'GPUStat_FNNEDenoiserTransferFunctionOidn'' @ 141449390

void __cdecl _dynamic_initializer_for__GPUStat_FNNEDenoiserTransferFunctionOidn__(void)

{
  atexit(_dynamic_atexit_destructor_for__GPUStat_FNNEDenoiserTransferFunctionOidn__);
  return;
}

// `dynamic_initializer_for_'GPUStat_FNNEDenoiserWriteOutput'' @ 1414493b0

void __cdecl _dynamic_initializer_for__GPUStat_FNNEDenoiserWriteOutput__(void)

{
  atexit(_dynamic_atexit_destructor_for__GPUStat_FNNEDenoiserWriteOutput__);
  return;
}

// `dynamic_initializer_for_'LogNNEDenoiser'' @ 1414493d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogNNEDenoiser__(void)

{
  FLogCategoryBase::FLogCategoryBase((FLogCategoryBase *)&LogNNEDenoiser,L"LogNNEDenoiser",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogNNEDenoiser__);
  return;
}

// `dynamic_initializer_for_'ModuleRegistrantNNEDenoiser'' @ 141449410

void __cdecl _dynamic_initializer_for__ModuleRegistrantNNEDenoiser__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "NNEDenoiser";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"NNEDenoiser",0xb);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,FStaticallyLinkedModuleRegistrant<FNNEDenoiserModule>::InitializeModule);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_NNE_NNEDenoiser_Source_NNEDenoiser_Public_NNEDenoiserAsset_h__Script_NNEDenoiser_2595659464'' @ 141449460

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_NNE_NNEDenoiser_Source_NNEDenoiser_Public_NNEDenoiserAsset_h__Script_NNEDenoiser_2595659464__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/NNEDenoiser",
             Z_CompiledInDeferFile_FID_Engine_Plugins_NNE_NNEDenoiser_Source_NNEDenoiser_Public_NNEDenoiserAsset_h__Script_NNEDenoiser_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_NNE_NNEDenoiser_Source_NNEDenoiser_Public_NNEDenoiserIOMappingData_h__Script_NNEDenoiser_3264409295'' @ 1414494a0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_NNE_NNEDenoiser_Source_NNEDenoiser_Public_NNEDenoiserIOMappingData_h__Script_NNEDenoiser_3264409295__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/NNEDenoiser",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_NNE_NNEDenoiser_Source_NNEDenoiser_Public_NNEDenoiserIOMappingData_h__Script_NNEDenoiser_Statics
             ::ScriptStructInfo,5,
             Z_CompiledInDeferFile_FID_Engine_Plugins_NNE_NNEDenoiser_Source_NNEDenoiser_Public_NNEDenoiserIOMappingData_h__Script_NNEDenoiser_Statics
             ::EnumInfo,4);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_NNE_NNEDenoiser_Source_NNEDenoiser_Public_NNEDenoiserResourceName_h__Script_NNEDenoiser_4027384466'' @ 1414494f0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_NNE_NNEDenoiser_Source_NNEDenoiser_Public_NNEDenoiserResourceName_h__Script_NNEDenoiser_4027384466__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/NNEDenoiser",(FClassRegisterCompiledInInfo *)0x0,0,
             (FStructRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_NNE_NNEDenoiser_Source_NNEDenoiser_Public_NNEDenoiserResourceName_h__Script_NNEDenoiser_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_NNE_NNEDenoiser_Source_NNEDenoiser_Public_NNEDenoiserSettings_h__Script_NNEDenoiser_656593220'' @ 141449540

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_NNE_NNEDenoiser_Source_NNEDenoiser_Public_NNEDenoiserSettings_h__Script_NNEDenoiser_656593220__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/NNEDenoiser",
             Z_CompiledInDeferFile_FID_Engine_Plugins_NNE_NNEDenoiser_Source_NNEDenoiser_Public_NNEDenoiserSettings_h__Script_NNEDenoiser_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_NNE_NNEDenoiser_Source_NNEDenoiser_Public_NNEDenoiserSettings_h__Script_NNEDenoiser_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_NNE_NNEDenoiser_Source_NNEDenoiser_Public_NNEDenoiserTemporalAsset_h__Script_NNEDenoiser_738846812'' @ 141449590

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_NNE_NNEDenoiser_Source_NNEDenoiser_Public_NNEDenoiserTemporalAsset_h__Script_NNEDenoiser_738846812__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/NNEDenoiser",
             Z_CompiledInDeferFile_FID_Engine_Plugins_NNE_NNEDenoiser_Source_NNEDenoiser_Public_NNEDenoiserTemporalAsset_h__Script_NNEDenoiser_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_NNE_NNEDenoiser_Source_NNEDenoiser_Public_NNEDenoiserTilingConfig_h__Script_NNEDenoiser_1782260714'' @ 1414495d0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_NNE_NNEDenoiser_Source_NNEDenoiser_Public_NNEDenoiserTilingConfig_h__Script_NNEDenoiser_1782260714__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/NNEDenoiser",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_NNE_NNEDenoiser_Source_NNEDenoiser_Public_NNEDenoiserTilingConfig_h__Script_NNEDenoiser_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferPackage_UPackage__Script_NNEDenoiser'' @ 141449610

void __cdecl _dynamic_initializer_for__Z_CompiledInDeferPackage_UPackage__Script_NNEDenoiser__(void)

{
  FPackageReloadVersionInfo local_res8 [4];
  
  local_res8[0].BodyHash = 0x30bea9b1;
  local_res8[0].DeclarationsHash = 0x8b1e4a1b;
  RegisterCompiledInInfo
            (Z_Construct_UPackage__Script_NNEDenoiser,L"/Script/NNEDenoiser",
             &Z_Registration_Info_UPackage__Script_NNEDenoiser,local_res8);
  return;
}

// EResourceName_StaticEnum @ 14ead9170

UEnum * __cdecl EResourceName_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EResourceName.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_NNEDenoiser();
    Z_Registration_Info_UEnum_EResourceName.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_NNEDenoiser_EResourceName,(UObject *)pUVar1,
                       L"EResourceName");
  }
  return Z_Registration_Info_UEnum_EResourceName.OuterSingleton;
}

// Z_Construct_UClass_UNNEDenoiserTemporalAsset @ 14ead9270

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UNNEDenoiserTemporalAsset(void)

{
  if (Z_Registration_Info_UClass_UNNEDenoiserTemporalAsset.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UNNEDenoiserTemporalAsset.OuterSingleton,
               &Z_Construct_UClass_UNNEDenoiserTemporalAsset_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UNNEDenoiserTemporalAsset.OuterSingleton;
}

// NewStructOps @ 14ead92d0

void * __cdecl Z_Construct_UScriptStruct_FTilingConfig_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FTilingConfig,&UE::CoreUObject::Private::Construct<FTilingConfig>,&UE::CoreUObject::Private::ConstructForTests<FTilingConfig>,&UE::CoreUObject::Private::Destruct<FTilingConfig>,&UE::CoreUObject::Private::Copy<FTilingConfig>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// `scalar_deleting_destructor' @ 14ead9420

void * __thiscall
FNNEDenoiserModule::_scalar_deleting_destructor_(FNNEDenoiserModule *this,uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ViewExtension).SharedReferenceCount.ReferenceController);
  this->_padding_ = (longlong)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// Z_Construct_UPackage__Script_NNEDenoiser @ 14ead9560

UPackage * __cdecl Z_Construct_UPackage__Script_NNEDenoiser(void)

{
  if (Z_Registration_Info_UPackage__Script_NNEDenoiser.OuterSingleton == (UPackage *)0x0) {
    UECodeGen_Private::ConstructUPackage
              (&Z_Registration_Info_UPackage__Script_NNEDenoiser.OuterSingleton,&PackageParams);
  }
  return Z_Registration_Info_UPackage__Script_NNEDenoiser.OuterSingleton;
}

// `scalar_deleting_destructor' @ 14ead95a0

void * __thiscall
FNNEDenoiserBaseMappingData::_scalar_deleting_destructor_
          (FNNEDenoiserBaseMappingData *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FTableRowBase__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ead9660

void * __thiscall
FNNEDenoiserInputMappingData::_scalar_deleting_destructor_
          (FNNEDenoiserInputMappingData *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FTableRowBase__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ead96e0

void * __thiscall
FNNEDenoiserOutputMappingData::_scalar_deleting_destructor_
          (FNNEDenoiserOutputMappingData *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FTableRowBase__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ead9760

void * __thiscall
FNNEDenoiserTemporalInputMappingData::_scalar_deleting_destructor_
          (FNNEDenoiserTemporalInputMappingData *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FTableRowBase__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ead97e0

void * __thiscall
FNNEDenoiserTemporalOutputMappingData::_scalar_deleting_destructor_
          (FNNEDenoiserTemporalOutputMappingData *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FTableRowBase__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// Z_Construct_UEnum_NNEDenoiser_EInputResourceName @ 14ead9820

UEnum * __cdecl Z_Construct_UEnum_NNEDenoiser_EInputResourceName(void)

{
  if (Z_Registration_Info_UEnum_EInputResourceName.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EInputResourceName.InnerSingleton,
               &Z_Construct_UEnum_NNEDenoiser_EInputResourceName_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EInputResourceName.InnerSingleton;
}

// Z_Construct_UEnum_NNEDenoiser_EOutputResourceName @ 14ead9860

UEnum * __cdecl Z_Construct_UEnum_NNEDenoiser_EOutputResourceName(void)

{
  if (Z_Registration_Info_UEnum_EOutputResourceName.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EOutputResourceName.InnerSingleton,
               &Z_Construct_UEnum_NNEDenoiser_EOutputResourceName_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EOutputResourceName.InnerSingleton;
}

// Z_Construct_UEnum_NNEDenoiser_ETemporalInputResourceName @ 14ead98a0

UEnum * __cdecl Z_Construct_UEnum_NNEDenoiser_ETemporalInputResourceName(void)

{
  if (Z_Registration_Info_UEnum_ETemporalInputResourceName.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ETemporalInputResourceName.InnerSingleton,
               &Z_Construct_UEnum_NNEDenoiser_ETemporalInputResourceName_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ETemporalInputResourceName.InnerSingleton;
}

// Z_Construct_UEnum_NNEDenoiser_ETemporalOutputResourceName @ 14ead98e0

UEnum * __cdecl Z_Construct_UEnum_NNEDenoiser_ETemporalOutputResourceName(void)

{
  if (Z_Registration_Info_UEnum_ETemporalOutputResourceName.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ETemporalOutputResourceName.InnerSingleton,
               &Z_Construct_UEnum_NNEDenoiser_ETemporalOutputResourceName_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ETemporalOutputResourceName.InnerSingleton;
}

// Z_Construct_UScriptStruct_FNNEDenoiserBaseMappingData @ 14ead9920

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FNNEDenoiserBaseMappingData(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FNNEDenoiserBaseMappingData.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FNNEDenoiserBaseMappingData.InnerSingleton,
               &Z_Construct_UScriptStruct_FNNEDenoiserBaseMappingData_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FNNEDenoiserBaseMappingData.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FNNEDenoiserBaseMappingData.InnerSingleton;
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

// EInputResourceName_StaticEnum @ 14ead99a0

UEnum * __cdecl EInputResourceName_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EInputResourceName.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_NNEDenoiser();
    Z_Registration_Info_UEnum_EInputResourceName.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_NNEDenoiser_EInputResourceName,(UObject *)pUVar1,
                       L"EInputResourceName");
  }
  return Z_Registration_Info_UEnum_EInputResourceName.OuterSingleton;
}

// EOutputResourceName_StaticEnum @ 14ead99e0

UEnum * __cdecl EOutputResourceName_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EOutputResourceName.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_NNEDenoiser();
    Z_Registration_Info_UEnum_EOutputResourceName.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_NNEDenoiser_EOutputResourceName,(UObject *)pUVar1,
                       L"EOutputResourceName");
  }
  return Z_Registration_Info_UEnum_EOutputResourceName.OuterSingleton;
}

// ETemporalInputResourceName_StaticEnum @ 14ead9a80

UEnum * __cdecl ETemporalInputResourceName_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ETemporalInputResourceName.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_NNEDenoiser();
    Z_Registration_Info_UEnum_ETemporalInputResourceName.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_NNEDenoiser_ETemporalInputResourceName,(UObject *)pUVar1,
                       L"ETemporalInputResourceName");
  }
  return Z_Registration_Info_UEnum_ETemporalInputResourceName.OuterSingleton;
}

// ETemporalOutputResourceName_StaticEnum @ 14ead9b10

UEnum * __cdecl ETemporalOutputResourceName_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ETemporalOutputResourceName.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_NNEDenoiser();
    Z_Registration_Info_UEnum_ETemporalOutputResourceName.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_NNEDenoiser_ETemporalOutputResourceName,(UObject *)pUVar1,
                       L"ETemporalOutputResourceName");
  }
  return Z_Registration_Info_UEnum_ETemporalOutputResourceName.OuterSingleton;
}

// NewStructOps @ 14ead9b50

void * __cdecl Z_Construct_UScriptStruct_FNNEDenoiserBaseMappingData_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x18;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FNNEDenoiserBaseMappingData,&UE::CoreUObject::Private::Construct<FNNEDenoiserBaseMappingData>,&UE::CoreUObject::Private::ConstructForTests<FNNEDenoiserBaseMappingData>,&UE::CoreUObject::Private::Destruct<FNNEDenoiserBaseMappingData>,&UE::CoreUObject::Private::Copy<FNNEDenoiserBaseMappingData>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14ead9b90

void * __cdecl Z_Construct_UScriptStruct_FNNEDenoiserInputMappingData_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FNNEDenoiserInputMappingData,&UE::CoreUObject::Private::Construct<FNNEDenoiserInputMappingData>,&UE::CoreUObject::Private::ConstructForTests<FNNEDenoiserInputMappingData>,&UE::CoreUObject::Private::Destruct<FNNEDenoiserInputMappingData>,&UE::CoreUObject::Private::Copy<FNNEDenoiserInputMappingData>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14ead9bf0

void * __cdecl Z_Construct_UScriptStruct_FNNEDenoiserOutputMappingData_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FNNEDenoiserOutputMappingData,&UE::CoreUObject::Private::Construct<FNNEDenoiserOutputMappingData>,&UE::CoreUObject::Private::ConstructForTests<FNNEDenoiserOutputMappingData>,&UE::CoreUObject::Private::Destruct<FNNEDenoiserOutputMappingData>,&UE::CoreUObject::Private::Copy<FNNEDenoiserOutputMappingData>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// `scalar_deleting_destructor' @ 14eada730

void * __thiscall
UE::NNEDenoiser::Private::FTransferFunctionTest::_scalar_deleting_destructor_
          (FTransferFunctionTest *this,uint param_1)

{
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// NewStructOps @ 14eada770

void * __cdecl
Z_Construct_UScriptStruct_FNNEDenoiserTemporalInputMappingData_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FNNEDenoiserTemporalInputMappingData,&UE::CoreUObject::Private::Construct<FNNEDenoiserTemporalInputMappingData>,&UE::CoreUObject::Private::ConstructForTests<FNNEDenoiserTemporalInputMappingData>,&UE::CoreUObject::Private::Destruct<FNNEDenoiserTemporalInputMappingData>,&UE::CoreUObject::Private::Copy<FNNEDenoiserTemporalInputMappingData>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14eada7b0

void * __cdecl
Z_Construct_UScriptStruct_FNNEDenoiserTemporalOutputMappingData_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FNNEDenoiserTemporalOutputMappingData,&UE::CoreUObject::Private::Construct<FNNEDenoiserTemporalOutputMappingData>,&UE::CoreUObject::Private::ConstructForTests<FNNEDenoiserTemporalOutputMappingData>,&UE::CoreUObject::Private::Destruct<FNNEDenoiserTemporalOutputMappingData>,&UE::CoreUObject::Private::Copy<FNNEDenoiserTemporalOutputMappingData>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// `scalar_deleting_destructor' @ 14eadaee0

void * __thiscall
UE::NNEDenoiser::Private::FAutoExposureTest::_scalar_deleting_destructor_
          (FAutoExposureTest *this,uint param_1)

{
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// Z_Construct_UClass_UNNEDenoiserSettings @ 14eadb110

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UNNEDenoiserSettings(void)

{
  if (Z_Registration_Info_UClass_UNNEDenoiserSettings.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UNNEDenoiserSettings.OuterSingleton,
               &Z_Construct_UClass_UNNEDenoiserSettings_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UNNEDenoiserSettings.OuterSingleton;
}

// Z_Construct_UEnum_NNEDenoiser_EDenoiserRuntimeType @ 14eadb150

UEnum * __cdecl Z_Construct_UEnum_NNEDenoiser_EDenoiserRuntimeType(void)

{
  if (Z_Registration_Info_UEnum_EDenoiserRuntimeType.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EDenoiserRuntimeType.InnerSingleton,
               &Z_Construct_UEnum_NNEDenoiser_EDenoiserRuntimeType_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EDenoiserRuntimeType.InnerSingleton;
}

// EDenoiserRuntimeType_StaticEnum @ 14eadb190

UEnum * __cdecl EDenoiserRuntimeType_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EDenoiserRuntimeType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_NNEDenoiser();
    Z_Registration_Info_UEnum_EDenoiserRuntimeType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_NNEDenoiser_EDenoiserRuntimeType,(UObject *)pUVar1,
                       L"EDenoiserRuntimeType");
  }
  return Z_Registration_Info_UEnum_EDenoiserRuntimeType.OuterSingleton;
}

// Z_Construct_UClass_UNNEDenoiserAsset_NoRegister @ 14eadb1d0

UClass * __cdecl Z_Construct_UClass_UNNEDenoiserAsset_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNNEDenoiserAsset.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/NNEDenoiser",L"NNEDenoiserAsset",
               &Z_Registration_Info_UClass_UNNEDenoiserAsset.InnerSingleton,
               UNNEDenoiserAsset::StaticRegisterNativesUNNEDenoiserAsset,0xb8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UNNEDenoiserAsset>,
               InternalVTableHelperCtorCaller<UNNEDenoiserAsset>,local_res8,UDataAsset::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNNEDenoiserAsset.InnerSingleton;
}

// Z_Construct_UClass_UNNEDenoiserAsset @ 14eadb350

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UNNEDenoiserAsset(void)

{
  if (Z_Registration_Info_UClass_UNNEDenoiserAsset.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UNNEDenoiserAsset.OuterSingleton,
               &Z_Construct_UClass_UNNEDenoiserAsset_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UNNEDenoiserAsset.OuterSingleton;
}

// Z_Construct_UScriptStruct_FTilingConfig @ 14eadb390

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FTilingConfig(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FTilingConfig.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FTilingConfig.InnerSingleton,
               &Z_Construct_UScriptStruct_FTilingConfig_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FTilingConfig.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FTilingConfig.InnerSingleton;
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

// AddLambda<`FNNEDenoiserModule::StartupModule'::__l2::<lambda_1>_> @ 14eadb730

FDelegateHandle __thiscall
TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
AddLambda<_FNNEDenoiserModule::StartupModule_::__l2::<lambda_1>_>
          (TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *this,
          <lambda_1> *param_1)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  FNNEDenoiserModule *pFVar5;
  ForElementType<TAlignedBytes<16,16>_> *pFVar6;
  undefined8 *in_R8;
  undefined1 local_res10 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_68;
  FDelegateAllocation local_60;
  FDestructionSentinel local_50;
  FDestructionSentinel local_38;
  FDelegateAllocation *local_20;
  
  pFVar5 = (FNNEDenoiserModule *)0x0;
  local_68.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_60.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_68,(FWriteAccessScope *)&local_38);
  local_20 = &local_60;
  puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_60);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FNNEDenoiserModule::StartupModule'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar3[3] = *in_R8;
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,
             (FWriteAccessScope *)&local_38);
  param_1->__this = (FNNEDenoiserModule *)0x0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            (&local_68,(FReadAccessScope *)&local_50);
  if (((local_60.DelegateSize == 0) ||
      (local_60.DelegateAllocator == (ForElementType<TAlignedBytes<16,16>_>)0x0)) ||
     (cVar1 = (**(code **)(*(longlong *)local_60.DelegateAllocator + 0x38))(), cVar1 == '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_50);
  }
  else {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_50);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this,true);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              (&local_68,(FReadAccessScope *)&local_50);
    if ((local_60.DelegateSize != 0) &&
       (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      puVar3 = (undefined8 *)
               (**(code **)(*(longlong *)local_60.DelegateAllocator + 0x40))
                         (local_60.DelegateAllocator,local_res10);
      pFVar5 = (FNNEDenoiserModule *)*puVar3;
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_50);
    iVar2 = *(int *)&this->field_0x10;
    param_1->__this = pFVar5;
    if (iVar2 == *(int *)&this->field_0x14) {
      iVar2 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,(ForAnyElementType *)&this->field_0x8,(int *)&this->field_0x14);
    }
    *(int *)&this->field_0x10 = iVar2 + 1;
    pFVar6 = (ForElementType<TAlignedBytes<16,16>_> *)
             (*(longlong *)&this->field_0x8 + (longlong)iVar2 * 0x10);
    *pFVar6 = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    *(undefined4 *)(pFVar6 + 1) = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_68,(FWriteAccessScope *)&local_50);
    if (*pFVar6 != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)*pFVar6);
    }
    *pFVar6 = local_60.DelegateAllocator;
    local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    *(int *)(pFVar6 + 1) = local_60.DelegateSize;
    local_60.DelegateSize = 0;
    if (local_50.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
    }
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_68,(FWriteAccessScope *)&local_38);
  if ((local_60.DelegateSize != 0) &&
     (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_60.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_60,0,0,0x10);
    local_60.DelegateSize = 0;
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  if (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_60.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_68.AccessDetector);
  return (FDelegateHandle)(ulong64)param_1;
}

// AddPass<`FComputeShaderUtils::AddPass<UE::NNEDenoiserShaders::Internal::FAutoExposureDownsampleCS>'::__l2::<lambda_1>_> @ 14eadb980

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FRDGPass * __thiscall
FRDGBuilder::
AddPass<_FComputeShaderUtils::AddPass<UE::NNEDenoiserShaders::Internal::FAutoExposureDownsampleCS>_::__l2::<lambda_1>_>
          (FRDGBuilder *this,FRDGEventName *param_1,FShaderParametersMetadata *param_2,void *param_3
          ,ERDGPassFlags param_4,<lambda_1>_conflict *param_5)

{
  int *piVar1;
  code *pcVar2;
  FScriptContainerElement *pFVar3;
  undefined8 uVar4;
  bool bVar5;
  ERDGPassFlags EVar6;
  int iVar7;
  wchar_t *pwVar8;
  FRDGPass *pFVar9;
  FRDGParameterStruct local_38;
  
  FRDGUserValidation::ValidateAddPass(&this->UserValidation,param_3,param_2,param_1,param_4);
  FlushAccessModeQueue(this);
  pwVar8 = FRDGEventName::GetTCHAR(param_1);
  EVar6 = OverridePassFlags(this,pwVar8,param_4);
  pFVar9 = FMemStackBase::Alloc((FMemStackBase *)&this->_padding_,0x1b8,8);
  local_38.Contents = param_3;
  if ((param_2->Layout).Reference == (FRHIUniformBufferLayout *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsLayoutInitialized()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                       ,0x17c,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      pFVar9 = (FRDGPass *)(*pcVar2)();
      return pFVar9;
    }
  }
  local_38.Layout.Reference = (param_2->Layout).Reference;
  if (local_38.Layout.Reference != (FRHIUniformBufferLayout *)0x0) {
    FRHIResource::AddRef((FRHIResource *)local_38.Layout.Reference);
  }
  local_38.Metadata = param_2;
  FRDGPass::FRDGPass(pFVar9,param_1,&local_38,EVar6,Async);
  pFVar9->_padding_ =
       (longlong)
       &
       ___7__TRDGLambdaPass_XV<lambda_1>__1____AddPass_VFAutoExposureDownsampleCS_Internal_NNEDenoiserShaders_UE___FComputeShaderUtils__YAPEAVFRDGPass__AEAVFRDGBuilder____QEAVFRDGEventName__W4ERDGPassFlags__AEBV__TShaderRefBase_VFAutoExposureDownsampleCS_Internal_NNEDenoiserShaders_UE__VFShaderMapPointerTable____PEBVFShaderParametersMetadata__PEAVFParameters_FAutoExposureDownsampleCS_Internal_NNEDenoiserShaders_UE__U__TIntVector3_H_Math_UE___Z___6B_
  ;
  pFVar3 = *(FScriptContainerElement **)(param_5 + 8);
  pFVar9[1]._padding_ = *(longlong *)param_5;
  pFVar9[1].FullPathIfDebug.Data.AllocatorInstance.Data = pFVar3;
  uVar4 = *(undefined8 *)(param_5 + 0x10);
  pwVar8 = *(wchar_t **)(param_5 + 0x18);
  pFVar9[1].FullPathIfDebug.Data.ArrayNum = (int)uVar4;
  pFVar9[1].FullPathIfDebug.Data.ArrayMax = (int)((ulonglong)uVar4 >> 0x20);
  pFVar9[1].Name.EventFormat = pwVar8;
  pFVar3 = *(FScriptContainerElement **)(param_5 + 0x20);
  uVar4 = *(undefined8 *)(param_5 + 0x28);
  pFVar9[1].ParameterStruct.Contents = param_3;
  pFVar9[1].Name.FormattedEventName.Data.AllocatorInstance.Data = pFVar3;
  pFVar9[1].Name.FormattedEventName.Data.ArrayNum = (int)uVar4;
  pFVar9[1].Name.FormattedEventName.Data.ArrayMax = (int)((ulonglong)uVar4 >> 0x20);
  ClobberPassOutputs(this,pFVar9);
  iVar7 = (this->Passes).Array.ArrayNum;
  piVar1 = &(this->Passes).Array.ArrayMax;
  if (iVar7 == *piVar1) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGPass_*>_>
                      (0x808,(ForElementType<FRDGPass_*> *)&this->Passes,piVar1);
  }
  (this->Passes).Array.ArrayNum = iVar7 + 1;
  (this->Passes).Array.AllocatorInstance.Data[iVar7] = pFVar9;
  (pFVar9->Handle).Index = (this->Passes).Array.ArrayNum - 1;
  SetupParameterPass(this,pFVar9);
  return pFVar9;
}

// AddPass<`FComputeShaderUtils::AddPass<UE::NNEDenoiserShaders::Internal::FAutoExposureReduceCS>'::__l2::<lambda_1>_> @ 14eadbb10

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FRDGPass * __thiscall
FRDGBuilder::
AddPass<_FComputeShaderUtils::AddPass<UE::NNEDenoiserShaders::Internal::FAutoExposureReduceCS>_::__l2::<lambda_1>_>
          (FRDGBuilder *this,FRDGEventName *param_1,FShaderParametersMetadata *param_2,void *param_3
          ,ERDGPassFlags param_4,<lambda_1>_conflict *param_5)

{
  int *piVar1;
  code *pcVar2;
  FScriptContainerElement *pFVar3;
  undefined8 uVar4;
  bool bVar5;
  ERDGPassFlags EVar6;
  int iVar7;
  wchar_t *pwVar8;
  FRDGPass *pFVar9;
  FRDGParameterStruct local_38;
  
  FRDGUserValidation::ValidateAddPass(&this->UserValidation,param_3,param_2,param_1,param_4);
  FlushAccessModeQueue(this);
  pwVar8 = FRDGEventName::GetTCHAR(param_1);
  EVar6 = OverridePassFlags(this,pwVar8,param_4);
  pFVar9 = FMemStackBase::Alloc((FMemStackBase *)&this->_padding_,0x1b8,8);
  local_38.Contents = param_3;
  if ((param_2->Layout).Reference == (FRHIUniformBufferLayout *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsLayoutInitialized()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                       ,0x17c,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      pFVar9 = (FRDGPass *)(*pcVar2)();
      return pFVar9;
    }
  }
  local_38.Layout.Reference = (param_2->Layout).Reference;
  if (local_38.Layout.Reference != (FRHIUniformBufferLayout *)0x0) {
    FRHIResource::AddRef((FRHIResource *)local_38.Layout.Reference);
  }
  local_38.Metadata = param_2;
  FRDGPass::FRDGPass(pFVar9,param_1,&local_38,EVar6,Async);
  pFVar9->_padding_ =
       (longlong)
       &
       ___7__TRDGLambdaPass_XV<lambda_1>__1____AddPass_VFAutoExposureReduceCS_Internal_NNEDenoiserShaders_UE___FComputeShaderUtils__YAPEAVFRDGPass__AEAVFRDGBuilder____QEAVFRDGEventName__W4ERDGPassFlags__AEBV__TShaderRefBase_VFAutoExposureReduceCS_Internal_NNEDenoiserShaders_UE__VFShaderMapPointerTable____PEBVFShaderParametersMetadata__PEAVFParameters_FAutoExposureReduceCS_Internal_NNEDenoiserShaders_UE__U__TIntVector3_H_Math_UE___Z___6B_
  ;
  pFVar3 = *(FScriptContainerElement **)(param_5 + 8);
  pFVar9[1]._padding_ = *(longlong *)param_5;
  pFVar9[1].FullPathIfDebug.Data.AllocatorInstance.Data = pFVar3;
  uVar4 = *(undefined8 *)(param_5 + 0x10);
  pwVar8 = *(wchar_t **)(param_5 + 0x18);
  pFVar9[1].FullPathIfDebug.Data.ArrayNum = (int)uVar4;
  pFVar9[1].FullPathIfDebug.Data.ArrayMax = (int)((ulonglong)uVar4 >> 0x20);
  pFVar9[1].Name.EventFormat = pwVar8;
  pFVar3 = *(FScriptContainerElement **)(param_5 + 0x20);
  uVar4 = *(undefined8 *)(param_5 + 0x28);
  pFVar9[1].ParameterStruct.Contents = param_3;
  pFVar9[1].Name.FormattedEventName.Data.AllocatorInstance.Data = pFVar3;
  pFVar9[1].Name.FormattedEventName.Data.ArrayNum = (int)uVar4;
  pFVar9[1].Name.FormattedEventName.Data.ArrayMax = (int)((ulonglong)uVar4 >> 0x20);
  ClobberPassOutputs(this,pFVar9);
  iVar7 = (this->Passes).Array.ArrayNum;
  piVar1 = &(this->Passes).Array.ArrayMax;
  if (iVar7 == *piVar1) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGPass_*>_>
                      (0x808,(ForElementType<FRDGPass_*> *)&this->Passes,piVar1);
  }
  (this->Passes).Array.ArrayNum = iVar7 + 1;
  (this->Passes).Array.AllocatorInstance.Data[iVar7] = pFVar9;
  (pFVar9->Handle).Index = (this->Passes).Array.ArrayNum - 1;
  SetupParameterPass(this,pFVar9);
  return pFVar9;
}

// AddPass<`FComputeShaderUtils::AddPass<UE::NNEDenoiserShaders::Internal::FAutoExposureReduceFinalCS>'::__l2::<lambda_1>_> @ 14eadbca0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FRDGPass * __thiscall
FRDGBuilder::
AddPass<_FComputeShaderUtils::AddPass<UE::NNEDenoiserShaders::Internal::FAutoExposureReduceFinalCS>_::__l2::<lambda_1>_>
          (FRDGBuilder *this,FRDGEventName *param_1,FShaderParametersMetadata *param_2,void *param_3
          ,ERDGPassFlags param_4,<lambda_1>_conflict *param_5)

{
  int *piVar1;
  code *pcVar2;
  FScriptContainerElement *pFVar3;
  undefined8 uVar4;
  bool bVar5;
  ERDGPassFlags EVar6;
  int iVar7;
  wchar_t *pwVar8;
  FRDGPass *pFVar9;
  FRDGParameterStruct local_38;
  
  FRDGUserValidation::ValidateAddPass(&this->UserValidation,param_3,param_2,param_1,param_4);
  FlushAccessModeQueue(this);
  pwVar8 = FRDGEventName::GetTCHAR(param_1);
  EVar6 = OverridePassFlags(this,pwVar8,param_4);
  pFVar9 = FMemStackBase::Alloc((FMemStackBase *)&this->_padding_,0x1b8,8);
  local_38.Contents = param_3;
  if ((param_2->Layout).Reference == (FRHIUniformBufferLayout *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsLayoutInitialized()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                       ,0x17c,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      pFVar9 = (FRDGPass *)(*pcVar2)();
      return pFVar9;
    }
  }
  local_38.Layout.Reference = (param_2->Layout).Reference;
  if (local_38.Layout.Reference != (FRHIUniformBufferLayout *)0x0) {
    FRHIResource::AddRef((FRHIResource *)local_38.Layout.Reference);
  }
  local_38.Metadata = param_2;
  FRDGPass::FRDGPass(pFVar9,param_1,&local_38,EVar6,Async);
  pFVar9->_padding_ =
       (longlong)
       &
       ___7__TRDGLambdaPass_XV<lambda_1>__1____AddPass_VFAutoExposureReduceFinalCS_Internal_NNEDenoiserShaders_UE___FComputeShaderUtils__YAPEAVFRDGPass__AEAVFRDGBuilder____QEAVFRDGEventName__W4ERDGPassFlags__AEBV__TShaderRefBase_VFAutoExposureReduceFinalCS_Internal_NNEDenoiserShaders_UE__VFShaderMapPointerTable____PEBVFShaderParametersMetadata__PEAVFParameters_FAutoExposureReduceFinalCS_Internal_NNEDenoiserShaders_UE__U__TIntVector3_H_Math_UE___Z___6B_
  ;
  pFVar3 = *(FScriptContainerElement **)(param_5 + 8);
  pFVar9[1]._padding_ = *(longlong *)param_5;
  pFVar9[1].FullPathIfDebug.Data.AllocatorInstance.Data = pFVar3;
  uVar4 = *(undefined8 *)(param_5 + 0x10);
  pwVar8 = *(wchar_t **)(param_5 + 0x18);
  pFVar9[1].FullPathIfDebug.Data.ArrayNum = (int)uVar4;
  pFVar9[1].FullPathIfDebug.Data.ArrayMax = (int)((ulonglong)uVar4 >> 0x20);
  pFVar9[1].Name.EventFormat = pwVar8;
  pFVar3 = *(FScriptContainerElement **)(param_5 + 0x20);
  uVar4 = *(undefined8 *)(param_5 + 0x28);
  pFVar9[1].ParameterStruct.Contents = param_3;
  pFVar9[1].Name.FormattedEventName.Data.AllocatorInstance.Data = pFVar3;
  pFVar9[1].Name.FormattedEventName.Data.ArrayNum = (int)uVar4;
  pFVar9[1].Name.FormattedEventName.Data.ArrayMax = (int)((ulonglong)uVar4 >> 0x20);
  ClobberPassOutputs(this,pFVar9);
  iVar7 = (this->Passes).Array.ArrayNum;
  piVar1 = &(this->Passes).Array.ArrayMax;
  if (iVar7 == *piVar1) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGPass_*>_>
                      (0x808,(ForElementType<FRDGPass_*> *)&this->Passes,piVar1);
  }
  (this->Passes).Array.ArrayNum = iVar7 + 1;
  (this->Passes).Array.AllocatorInstance.Data[iVar7] = pFVar9;
  (pFVar9->Handle).Index = (this->Passes).Array.ArrayNum - 1;
  SetupParameterPass(this,pFVar9);
  return pFVar9;
}

// AddPass<`FComputeShaderUtils::AddPass<UE::NNEDenoiserShaders::Internal::FBufferTextureMappedCopyCS>'::__l2::<lambda_1>_> @ 14eadbe30

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FRDGPass * __thiscall
FRDGBuilder::
AddPass<_FComputeShaderUtils::AddPass<UE::NNEDenoiserShaders::Internal::FBufferTextureMappedCopyCS>_::__l2::<lambda_1>_>
          (FRDGBuilder *this,FRDGEventName *param_1,FShaderParametersMetadata *param_2,void *param_3
          ,ERDGPassFlags param_4,<lambda_1>_conflict *param_5)

{
  int *piVar1;
  code *pcVar2;
  FScriptContainerElement *pFVar3;
  undefined8 uVar4;
  bool bVar5;
  ERDGPassFlags EVar6;
  int iVar7;
  wchar_t *pwVar8;
  FRDGPass *pFVar9;
  FRDGParameterStruct local_38;
  
  FRDGUserValidation::ValidateAddPass(&this->UserValidation,param_3,param_2,param_1,param_4);
  FlushAccessModeQueue(this);
  pwVar8 = FRDGEventName::GetTCHAR(param_1);
  EVar6 = OverridePassFlags(this,pwVar8,param_4);
  pFVar9 = FMemStackBase::Alloc((FMemStackBase *)&this->_padding_,0x1b8,8);
  local_38.Contents = param_3;
  if ((param_2->Layout).Reference == (FRHIUniformBufferLayout *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsLayoutInitialized()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                       ,0x17c,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      pFVar9 = (FRDGPass *)(*pcVar2)();
      return pFVar9;
    }
  }
  local_38.Layout.Reference = (param_2->Layout).Reference;
  if (local_38.Layout.Reference != (FRHIUniformBufferLayout *)0x0) {
    FRHIResource::AddRef((FRHIResource *)local_38.Layout.Reference);
  }
  local_38.Metadata = param_2;
  FRDGPass::FRDGPass(pFVar9,param_1,&local_38,EVar6,Async);
  pFVar9->_padding_ =
       (longlong)
       &
       ___7__TRDGLambdaPass_XV<lambda_1>__1____AddPass_VFBufferTextureMappedCopyCS_Internal_NNEDenoiserShaders_UE___FComputeShaderUtils__YAPEAVFRDGPass__AEAVFRDGBuilder____QEAVFRDGEventName__W4ERDGPassFlags__AEBV__TShaderRefBase_VFBufferTextureMappedCopyCS_Internal_NNEDenoiserShaders_UE__VFShaderMapPointerTable____PEBVFShaderParametersMetadata__PEAVFParameters_FBufferTextureMappedCopyCS_Internal_NNEDenoiserShaders_UE__U__TIntVector3_H_Math_UE___Z___6B_
  ;
  pFVar3 = *(FScriptContainerElement **)(param_5 + 8);
  pFVar9[1]._padding_ = *(longlong *)param_5;
  pFVar9[1].FullPathIfDebug.Data.AllocatorInstance.Data = pFVar3;
  uVar4 = *(undefined8 *)(param_5 + 0x10);
  pwVar8 = *(wchar_t **)(param_5 + 0x18);
  pFVar9[1].FullPathIfDebug.Data.ArrayNum = (int)uVar4;
  pFVar9[1].FullPathIfDebug.Data.ArrayMax = (int)((ulonglong)uVar4 >> 0x20);
  pFVar9[1].Name.EventFormat = pwVar8;
  pFVar3 = *(FScriptContainerElement **)(param_5 + 0x20);
  uVar4 = *(undefined8 *)(param_5 + 0x28);
  pFVar9[1].ParameterStruct.Contents = param_3;
  pFVar9[1].Name.FormattedEventName.Data.AllocatorInstance.Data = pFVar3;
  pFVar9[1].Name.FormattedEventName.Data.ArrayNum = (int)uVar4;
  pFVar9[1].Name.FormattedEventName.Data.ArrayMax = (int)((ulonglong)uVar4 >> 0x20);
  ClobberPassOutputs(this,pFVar9);
  iVar7 = (this->Passes).Array.ArrayNum;
  piVar1 = &(this->Passes).Array.ArrayMax;
  if (iVar7 == *piVar1) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGPass_*>_>
                      (0x808,(ForElementType<FRDGPass_*> *)&this->Passes,piVar1);
  }
  (this->Passes).Array.ArrayNum = iVar7 + 1;
  (this->Passes).Array.AllocatorInstance.Data[iVar7] = pFVar9;
  (pFVar9->Handle).Index = (this->Passes).Array.ArrayNum - 1;
  SetupParameterPass(this,pFVar9);
  return pFVar9;
}

// AddPass<`FComputeShaderUtils::AddPass<UE::NNEDenoiserShaders::Internal::FDefaultIOProcessCS>'::__l2::<lambda_1>_> @ 14eadbfc0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FRDGPass * __thiscall
FRDGBuilder::
AddPass<_FComputeShaderUtils::AddPass<UE::NNEDenoiserShaders::Internal::FDefaultIOProcessCS>_::__l2::<lambda_1>_>
          (FRDGBuilder *this,FRDGEventName *param_1,FShaderParametersMetadata *param_2,void *param_3
          ,ERDGPassFlags param_4,<lambda_1>_conflict *param_5)

{
  int *piVar1;
  code *pcVar2;
  FScriptContainerElement *pFVar3;
  undefined8 uVar4;
  bool bVar5;
  ERDGPassFlags EVar6;
  int iVar7;
  wchar_t *pwVar8;
  FRDGPass *pFVar9;
  FRDGParameterStruct local_38;
  
  FRDGUserValidation::ValidateAddPass(&this->UserValidation,param_3,param_2,param_1,param_4);
  FlushAccessModeQueue(this);
  pwVar8 = FRDGEventName::GetTCHAR(param_1);
  EVar6 = OverridePassFlags(this,pwVar8,param_4);
  pFVar9 = FMemStackBase::Alloc((FMemStackBase *)&this->_padding_,0x1b8,8);
  local_38.Contents = param_3;
  if ((param_2->Layout).Reference == (FRHIUniformBufferLayout *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsLayoutInitialized()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                       ,0x17c,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      pFVar9 = (FRDGPass *)(*pcVar2)();
      return pFVar9;
    }
  }
  local_38.Layout.Reference = (param_2->Layout).Reference;
  if (local_38.Layout.Reference != (FRHIUniformBufferLayout *)0x0) {
    FRHIResource::AddRef((FRHIResource *)local_38.Layout.Reference);
  }
  local_38.Metadata = param_2;
  FRDGPass::FRDGPass(pFVar9,param_1,&local_38,EVar6,Async);
  pFVar9->_padding_ =
       (longlong)
       &
       ___7__TRDGLambdaPass_XV<lambda_1>__1____AddPass_VFDefaultIOProcessCS_Internal_NNEDenoiserShaders_UE___FComputeShaderUtils__YAPEAVFRDGPass__AEAVFRDGBuilder____QEAVFRDGEventName__W4ERDGPassFlags__AEBV__TShaderRefBase_VFDefaultIOProcessCS_Internal_NNEDenoiserShaders_UE__VFShaderMapPointerTable____PEBVFShaderParametersMetadata__PEAVFParameters_FDefaultIOProcessCS_Internal_NNEDenoiserShaders_UE__U__TIntVector3_H_Math_UE___Z___6B_
  ;
  pFVar3 = *(FScriptContainerElement **)(param_5 + 8);
  pFVar9[1]._padding_ = *(longlong *)param_5;
  pFVar9[1].FullPathIfDebug.Data.AllocatorInstance.Data = pFVar3;
  uVar4 = *(undefined8 *)(param_5 + 0x10);
  pwVar8 = *(wchar_t **)(param_5 + 0x18);
  pFVar9[1].FullPathIfDebug.Data.ArrayNum = (int)uVar4;
  pFVar9[1].FullPathIfDebug.Data.ArrayMax = (int)((ulonglong)uVar4 >> 0x20);
  pFVar9[1].Name.EventFormat = pwVar8;
  pFVar3 = *(FScriptContainerElement **)(param_5 + 0x20);
  uVar4 = *(undefined8 *)(param_5 + 0x28);
  pFVar9[1].ParameterStruct.Contents = param_3;
  pFVar9[1].Name.FormattedEventName.Data.AllocatorInstance.Data = pFVar3;
  pFVar9[1].Name.FormattedEventName.Data.ArrayNum = (int)uVar4;
  pFVar9[1].Name.FormattedEventName.Data.ArrayMax = (int)((ulonglong)uVar4 >> 0x20);
  ClobberPassOutputs(this,pFVar9);
  iVar7 = (this->Passes).Array.ArrayNum;
  piVar1 = &(this->Passes).Array.ArrayMax;
  if (iVar7 == *piVar1) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGPass_*>_>
                      (0x808,(ForElementType<FRDGPass_*> *)&this->Passes,piVar1);
  }
  (this->Passes).Array.ArrayNum = iVar7 + 1;
  (this->Passes).Array.AllocatorInstance.Data[iVar7] = pFVar9;
  (pFVar9->Handle).Index = (this->Passes).Array.ArrayNum - 1;
  SetupParameterPass(this,pFVar9);
  return pFVar9;
}

// AddPass<`FComputeShaderUtils::AddPass<UE::NNEDenoiserShaders::Internal::FTextureBufferMappedCopyCS>'::__l2::<lambda_1>_> @ 14eadc150

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FRDGPass * __thiscall
FRDGBuilder::
AddPass<_FComputeShaderUtils::AddPass<UE::NNEDenoiserShaders::Internal::FTextureBufferMappedCopyCS>_::__l2::<lambda_1>_>
          (FRDGBuilder *this,FRDGEventName *param_1,FShaderParametersMetadata *param_2,void *param_3
          ,ERDGPassFlags param_4,<lambda_1>_conflict *param_5)

{
  int *piVar1;
  code *pcVar2;
  FScriptContainerElement *pFVar3;
  undefined8 uVar4;
  bool bVar5;
  ERDGPassFlags EVar6;
  int iVar7;
  wchar_t *pwVar8;
  FRDGPass *pFVar9;
  FRDGParameterStruct local_38;
  
  FRDGUserValidation::ValidateAddPass(&this->UserValidation,param_3,param_2,param_1,param_4);
  FlushAccessModeQueue(this);
  pwVar8 = FRDGEventName::GetTCHAR(param_1);
  EVar6 = OverridePassFlags(this,pwVar8,param_4);
  pFVar9 = FMemStackBase::Alloc((FMemStackBase *)&this->_padding_,0x1b8,8);
  local_38.Contents = param_3;
  if ((param_2->Layout).Reference == (FRHIUniformBufferLayout *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsLayoutInitialized()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                       ,0x17c,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      pFVar9 = (FRDGPass *)(*pcVar2)();
      return pFVar9;
    }
  }
  local_38.Layout.Reference = (param_2->Layout).Reference;
  if (local_38.Layout.Reference != (FRHIUniformBufferLayout *)0x0) {
    FRHIResource::AddRef((FRHIResource *)local_38.Layout.Reference);
  }
  local_38.Metadata = param_2;
  FRDGPass::FRDGPass(pFVar9,param_1,&local_38,EVar6,Async);
  pFVar9->_padding_ =
       (longlong)
       &
       ___7__TRDGLambdaPass_XV<lambda_1>__1____AddPass_VFTextureBufferMappedCopyCS_Internal_NNEDenoiserShaders_UE___FComputeShaderUtils__YAPEAVFRDGPass__AEAVFRDGBuilder____QEAVFRDGEventName__W4ERDGPassFlags__AEBV__TShaderRefBase_VFTextureBufferMappedCopyCS_Internal_NNEDenoiserShaders_UE__VFShaderMapPointerTable____PEBVFShaderParametersMetadata__PEAVFParameters_FTextureBufferMappedCopyCS_Internal_NNEDenoiserShaders_UE__U__TIntVector3_H_Math_UE___Z___6B_
  ;
  pFVar3 = *(FScriptContainerElement **)(param_5 + 8);
  pFVar9[1]._padding_ = *(longlong *)param_5;
  pFVar9[1].FullPathIfDebug.Data.AllocatorInstance.Data = pFVar3;
  uVar4 = *(undefined8 *)(param_5 + 0x10);
  pwVar8 = *(wchar_t **)(param_5 + 0x18);
  pFVar9[1].FullPathIfDebug.Data.ArrayNum = (int)uVar4;
  pFVar9[1].FullPathIfDebug.Data.ArrayMax = (int)((ulonglong)uVar4 >> 0x20);
  pFVar9[1].Name.EventFormat = pwVar8;
  pFVar3 = *(FScriptContainerElement **)(param_5 + 0x20);
  uVar4 = *(undefined8 *)(param_5 + 0x28);
  pFVar9[1].ParameterStruct.Contents = param_3;
  pFVar9[1].Name.FormattedEventName.Data.AllocatorInstance.Data = pFVar3;
  pFVar9[1].Name.FormattedEventName.Data.ArrayNum = (int)uVar4;
  pFVar9[1].Name.FormattedEventName.Data.ArrayMax = (int)((ulonglong)uVar4 >> 0x20);
  ClobberPassOutputs(this,pFVar9);
  iVar7 = (this->Passes).Array.ArrayNum;
  piVar1 = &(this->Passes).Array.ArrayMax;
  if (iVar7 == *piVar1) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGPass_*>_>
                      (0x808,(ForElementType<FRDGPass_*> *)&this->Passes,piVar1);
  }
  (this->Passes).Array.ArrayNum = iVar7 + 1;
  (this->Passes).Array.AllocatorInstance.Data[iVar7] = pFVar9;
  (pFVar9->Handle).Index = (this->Passes).Array.ArrayNum - 1;
  SetupParameterPass(this,pFVar9);
  return pFVar9;
}

// AddPass<`FComputeShaderUtils::AddPass<UE::NNEDenoiserShaders::Internal::FTransferFunctionOidnCS>'::__l2::<lambda_1>_> @ 14eadc2e0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FRDGPass * __thiscall
FRDGBuilder::
AddPass<_FComputeShaderUtils::AddPass<UE::NNEDenoiserShaders::Internal::FTransferFunctionOidnCS>_::__l2::<lambda_1>_>
          (FRDGBuilder *this,FRDGEventName *param_1,FShaderParametersMetadata *param_2,void *param_3
          ,ERDGPassFlags param_4,<lambda_1>_conflict *param_5)

{
  int *piVar1;
  code *pcVar2;
  FScriptContainerElement *pFVar3;
  undefined8 uVar4;
  bool bVar5;
  ERDGPassFlags EVar6;
  int iVar7;
  wchar_t *pwVar8;
  FRDGPass *pFVar9;
  FRDGParameterStruct local_38;
  
  FRDGUserValidation::ValidateAddPass(&this->UserValidation,param_3,param_2,param_1,param_4);
  FlushAccessModeQueue(this);
  pwVar8 = FRDGEventName::GetTCHAR(param_1);
  EVar6 = OverridePassFlags(this,pwVar8,param_4);
  pFVar9 = FMemStackBase::Alloc((FMemStackBase *)&this->_padding_,0x1b8,8);
  local_38.Contents = param_3;
  if ((param_2->Layout).Reference == (FRHIUniformBufferLayout *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsLayoutInitialized()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                       ,0x17c,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      pFVar9 = (FRDGPass *)(*pcVar2)();
      return pFVar9;
    }
  }
  local_38.Layout.Reference = (param_2->Layout).Reference;
  if (local_38.Layout.Reference != (FRHIUniformBufferLayout *)0x0) {
    FRHIResource::AddRef((FRHIResource *)local_38.Layout.Reference);
  }
  local_38.Metadata = param_2;
  FRDGPass::FRDGPass(pFVar9,param_1,&local_38,EVar6,Async);
  pFVar9->_padding_ =
       (longlong)
       &
       ___7__TRDGLambdaPass_XV<lambda_1>__1____AddPass_VFTransferFunctionOidnCS_Internal_NNEDenoiserShaders_UE___FComputeShaderUtils__YAPEAVFRDGPass__AEAVFRDGBuilder____QEAVFRDGEventName__W4ERDGPassFlags__AEBV__TShaderRefBase_VFTransferFunctionOidnCS_Internal_NNEDenoiserShaders_UE__VFShaderMapPointerTable____PEBVFShaderParametersMetadata__PEAVFParameters_FTransferFunctionOidnCS_Internal_NNEDenoiserShaders_UE__U__TIntVector3_H_Math_UE___Z___6B_
  ;
  pFVar3 = *(FScriptContainerElement **)(param_5 + 8);
  pFVar9[1]._padding_ = *(longlong *)param_5;
  pFVar9[1].FullPathIfDebug.Data.AllocatorInstance.Data = pFVar3;
  uVar4 = *(undefined8 *)(param_5 + 0x10);
  pwVar8 = *(wchar_t **)(param_5 + 0x18);
  pFVar9[1].FullPathIfDebug.Data.ArrayNum = (int)uVar4;
  pFVar9[1].FullPathIfDebug.Data.ArrayMax = (int)((ulonglong)uVar4 >> 0x20);
  pFVar9[1].Name.EventFormat = pwVar8;
  pFVar3 = *(FScriptContainerElement **)(param_5 + 0x20);
  uVar4 = *(undefined8 *)(param_5 + 0x28);
  pFVar9[1].ParameterStruct.Contents = param_3;
  pFVar9[1].Name.FormattedEventName.Data.AllocatorInstance.Data = pFVar3;
  pFVar9[1].Name.FormattedEventName.Data.ArrayNum = (int)uVar4;
  pFVar9[1].Name.FormattedEventName.Data.ArrayMax = (int)((ulonglong)uVar4 >> 0x20);
  ClobberPassOutputs(this,pFVar9);
  iVar7 = (this->Passes).Array.ArrayNum;
  piVar1 = &(this->Passes).Array.ArrayMax;
  if (iVar7 == *piVar1) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGPass_*>_>
                      (0x808,(ForElementType<FRDGPass_*> *)&this->Passes,piVar1);
  }
  (this->Passes).Array.ArrayNum = iVar7 + 1;
  (this->Passes).Array.AllocatorInstance.Data[iVar7] = pFVar9;
  (pFVar9->Handle).Index = (this->Passes).Array.ArrayNum - 1;
  SetupParameterPass(this,pFVar9);
  return pFVar9;
}

// AddPass<UE::NNEDenoiser::Private::FAutoExposureTestDownloadParameters,``UE::NNEDenoiser::Private::FAutoExposureTest::RunTest'::__l2::<lambda_1>::operator()'::__l7::<lambda_2>_> @ 14eadcb90

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EUniformBufferBaseType": Some values do not have unique names */

FRDGPass * __thiscall
FRDGBuilder::
AddPass<UE::NNEDenoiser::Private::FAutoExposureTestDownloadParameters,__UE::NNEDenoiser::Private::FAutoExposureTest::RunTest_::__l2::<lambda_1>::operator()_::__l7::<lambda_2>_>
          (FRDGBuilder *this,FRDGEventName *param_1,FAutoExposureTestDownloadParameters *param_2,
          ERDGPassFlags param_3,<lambda_2> *param_4)

{
  int *piVar1;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  bool bVar4;
  ERDGPassFlags EVar5;
  int iVar6;
  wchar_t *pwVar7;
  FRDGPass *pFVar8;
  code *pcVar9;
  TArray<FShaderParametersMetadata::FMember,TSizedDefaultAllocator<32>_> local_48;
  FRDGParameterStruct local_38;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_UE::NNEDenoiser::Private::FAutoExposureTestDownloadParameters::FTypeInfo::GetStructMetadata(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_UE::NNEDenoiser::Private::FAutoExposureTestDownloadParameters::FTypeInfo::GetStructMetadata(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_UE::NNEDenoiser::Private::FAutoExposureTestDownloadParameters::FTypeInfo::GetStructMetadata(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pcVar9 = UE::NNEDenoiser::Private::FAutoExposureTestDownloadParameters::zzAppendMemberGetPrev;
      local_48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_48.ArrayNum = 0;
      local_48.ArrayMax = 0;
      do {
        pcVar9 = (code *)(*pcVar9)((ulonglong)param_4 & 0xff,&local_48);
      } while (pcVar9 != (code *)0x0);
      AlgoImpl::Reverse<FShaderParametersMetadata::FMember>
                ((FMember *)local_48.AllocatorInstance.Data,local_48.ArrayNum);
      FShaderParametersMetadata::FShaderParametersMetadata
                (&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_UE::NNEDenoiser::Private::FAutoExposureTestDownloadParameters::FTypeInfo::GetStructMetadata(void)'
                  ::__l2::StaticStructMetadata,ShaderParameterStruct,Shader,
                 L"FAutoExposureTestDownloadParameters",L"FAutoExposureTestDownloadParameters",
                 (wchar_t *)0x0,(wchar_t *)0x0,
                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\NNE\\NNEDenoiser\\Source\\NNEDenoiser\\Private\\NNEDenoiserUnitTests.cpp"
                 ,0x17,0x10,&local_48,false,(FRHIUniformBufferLayoutInitializer *)0x0,None);
      if ((FMember *)local_48.AllocatorInstance.Data != (FMember *)0x0) {
        FMemory::Free(local_48.AllocatorInstance.Data);
      }
      atexit(`UE::NNEDenoiser::Private::FAutoExposureTestDownloadParameters::FTypeInfo::
             GetStructMetadata'::__l2::_dynamic_atexit_destructor_for__StaticStructMetadata__);
      _Init_thread_footer(&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_UE::NNEDenoiser::Private::FAutoExposureTestDownloadParameters::FTypeInfo::GetStructMetadata(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FRDGUserValidation::ValidateAddPass
            (&this->UserValidation,param_2,
             &`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_UE::NNEDenoiser::Private::FAutoExposureTestDownloadParameters::FTypeInfo::GetStructMetadata(void)'
              ::__l2::StaticStructMetadata,param_1,param_3);
  FlushAccessModeQueue(this);
  pwVar7 = FRDGEventName::GetTCHAR(param_1);
  EVar5 = OverridePassFlags(this,pwVar7,param_3);
  pFVar8 = FMemStackBase::Alloc((FMemStackBase *)&this->_padding_,0x198,8);
  local_38.Contents = (uchar *)param_2;
  if (`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_UE::NNEDenoiser::Private::FAutoExposureTestDownloadParameters::FTypeInfo::GetStructMetadata(void)'
      ::__l2::StaticStructMetadata.Layout.Reference == (FRHIUniformBufferLayout *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsLayoutInitialized()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                       ,0x17c,L"");
    if (bVar4) {
      pcVar9 = (code *)swi(3);
      pFVar8 = (FRDGPass *)(*pcVar9)();
      return pFVar8;
    }
  }
  local_38.Layout.Reference =
       `public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_UE::NNEDenoiser::Private::FAutoExposureTestDownloadParameters::FTypeInfo::GetStructMetadata(void)'
       ::__l2::StaticStructMetadata.Layout.Reference;
  if (`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_UE::NNEDenoiser::Private::FAutoExposureTestDownloadParameters::FTypeInfo::GetStructMetadata(void)'
      ::__l2::StaticStructMetadata.Layout.Reference != (FRHIUniformBufferLayout *)0x0) {
    FRHIResource::AddRef
              ((FRHIResource *)
               `public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_UE::NNEDenoiser::Private::FAutoExposureTestDownloadParameters::FTypeInfo::GetStructMetadata(void)'
               ::__l2::StaticStructMetadata.Layout.Reference);
  }
  local_38.Metadata =
       &`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_UE::NNEDenoiser::Private::FAutoExposureTestDownloadParameters::FTypeInfo::GetStructMetadata(void)'
        ::__l2::StaticStructMetadata;
  FRDGPass::FRDGPass(pFVar8,param_1,&local_38,EVar5,Inline);
  pFVar8->_padding_ =
       (longlong)
       &TRDGLambdaPass<UE::NNEDenoiser::Private::FAutoExposureTestDownloadParameters,``UE::NNEDenoiser::Private::FAutoExposureTest::RunTest'::`2'::<lambda_1>::operator()'::`7'::<lambda_2>_>
        ::_vftable_;
  pTVar2 = param_4->ResultRDG;
  pFVar3 = (FScriptContainerElement *)param_4->Parameters;
  *(FAutoExposureTestDownloadParameters **)&pFVar8[1].FullPathIfDebug.Data.ArrayNum = param_2;
  pFVar8[1]._padding_ = (longlong)pTVar2;
  pFVar8[1].FullPathIfDebug.Data.AllocatorInstance.Data = pFVar3;
  ClobberPassOutputs(this,pFVar8);
  iVar6 = (this->Passes).Array.ArrayNum;
  piVar1 = &(this->Passes).Array.ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGPass_*>_>
                      (0x808,(ForElementType<FRDGPass_*> *)&this->Passes,piVar1);
  }
  (this->Passes).Array.ArrayNum = iVar6 + 1;
  (this->Passes).Array.AllocatorInstance.Data[iVar6] = pFVar8;
  (pFVar8->Handle).Index = (this->Passes).Array.ArrayNum - 1;
  SetupParameterPass(this,pFVar8);
  return pFVar8;
}

// AddPass<UE::NNEDenoiser::Private::FAutoExposureTestUploadParameters,``UE::NNEDenoiser::Private::FAutoExposureTest::RunTest'::__l2::<lambda_1>::operator()'::__l6::<lambda_1>_> @ 14eadce40

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EUniformBufferBaseType": Some values do not have unique names */

FRDGPass * __thiscall
FRDGBuilder::
AddPass<UE::NNEDenoiser::Private::FAutoExposureTestUploadParameters,__UE::NNEDenoiser::Private::FAutoExposureTest::RunTest_::__l2::<lambda_1>::operator()_::__l6::<lambda_1>_>
          (FRDGBuilder *this,FRDGEventName *param_1,FAutoExposureTestUploadParameters *param_2,
          ERDGPassFlags param_3,<lambda_1> *param_4)

{
  int *piVar1;
  TArray<FLinearColor,TSizedDefaultAllocator<32>_> *pTVar2;
  FAutoExposureTestUploadParameters *pFVar3;
  bool bVar4;
  ERDGPassFlags EVar5;
  int iVar6;
  wchar_t *pwVar7;
  FRDGPass *pFVar8;
  code *pcVar9;
  TArray<FShaderParametersMetadata::FMember,TSizedDefaultAllocator<32>_> local_48;
  FRDGParameterStruct local_38;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_UE::NNEDenoiser::Private::FAutoExposureTestUploadParameters::FTypeInfo::GetStructMetadata(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_UE::NNEDenoiser::Private::FAutoExposureTestUploadParameters::FTypeInfo::GetStructMetadata(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_UE::NNEDenoiser::Private::FAutoExposureTestUploadParameters::FTypeInfo::GetStructMetadata(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pcVar9 = UE::NNEDenoiser::Private::FAutoExposureTestUploadParameters::zzAppendMemberGetPrev;
      local_48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_48.ArrayNum = 0;
      local_48.ArrayMax = 0;
      do {
        pcVar9 = (code *)(*pcVar9)((ulonglong)param_4 & 0xff,&local_48);
      } while (pcVar9 != (code *)0x0);
      AlgoImpl::Reverse<FShaderParametersMetadata::FMember>
                ((FMember *)local_48.AllocatorInstance.Data,local_48.ArrayNum);
      FShaderParametersMetadata::FShaderParametersMetadata
                (&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_UE::NNEDenoiser::Private::FAutoExposureTestUploadParameters::FTypeInfo::GetStructMetadata(void)'
                  ::__l2::StaticStructMetadata,ShaderParameterStruct,Shader,
                 L"FAutoExposureTestUploadParameters",L"FAutoExposureTestUploadParameters",
                 (wchar_t *)0x0,(wchar_t *)0x0,
                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\NNE\\NNEDenoiser\\Source\\NNEDenoiser\\Private\\NNEDenoiserUnitTests.cpp"
                 ,0x13,0x20,&local_48,false,(FRHIUniformBufferLayoutInitializer *)0x0,None);
      if ((FMember *)local_48.AllocatorInstance.Data != (FMember *)0x0) {
        FMemory::Free(local_48.AllocatorInstance.Data);
      }
      atexit(`UE::NNEDenoiser::Private::FAutoExposureTestUploadParameters::FTypeInfo::
             GetStructMetadata'::__l2::_dynamic_atexit_destructor_for__StaticStructMetadata__);
      _Init_thread_footer(&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_UE::NNEDenoiser::Private::FAutoExposureTestUploadParameters::FTypeInfo::GetStructMetadata(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FRDGUserValidation::ValidateAddPass
            (&this->UserValidation,param_2,
             &`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_UE::NNEDenoiser::Private::FAutoExposureTestUploadParameters::FTypeInfo::GetStructMetadata(void)'
              ::__l2::StaticStructMetadata,param_1,param_3);
  FlushAccessModeQueue(this);
  pwVar7 = FRDGEventName::GetTCHAR(param_1);
  EVar5 = OverridePassFlags(this,pwVar7,param_3);
  pFVar8 = FMemStackBase::Alloc((FMemStackBase *)&this->_padding_,0x198,8);
  local_38.Contents = (uchar *)param_2;
  if (`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_UE::NNEDenoiser::Private::FAutoExposureTestUploadParameters::FTypeInfo::GetStructMetadata(void)'
      ::__l2::StaticStructMetadata.Layout.Reference == (FRHIUniformBufferLayout *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsLayoutInitialized()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                       ,0x17c,L"");
    if (bVar4) {
      pcVar9 = (code *)swi(3);
      pFVar8 = (FRDGPass *)(*pcVar9)();
      return pFVar8;
    }
  }
  local_38.Layout.Reference =
       `public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_UE::NNEDenoiser::Private::FAutoExposureTestUploadParameters::FTypeInfo::GetStructMetadata(void)'
       ::__l2::StaticStructMetadata.Layout.Reference;
  if (`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_UE::NNEDenoiser::Private::FAutoExposureTestUploadParameters::FTypeInfo::GetStructMetadata(void)'
      ::__l2::StaticStructMetadata.Layout.Reference != (FRHIUniformBufferLayout *)0x0) {
    FRHIResource::AddRef
              ((FRHIResource *)
               `public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_UE::NNEDenoiser::Private::FAutoExposureTestUploadParameters::FTypeInfo::GetStructMetadata(void)'
               ::__l2::StaticStructMetadata.Layout.Reference);
  }
  local_38.Metadata =
       &`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_UE::NNEDenoiser::Private::FAutoExposureTestUploadParameters::FTypeInfo::GetStructMetadata(void)'
        ::__l2::StaticStructMetadata;
  FRDGPass::FRDGPass(pFVar8,param_1,&local_38,EVar5,Inline);
  pFVar8->_padding_ =
       (longlong)
       &TRDGLambdaPass<UE::NNEDenoiser::Private::FAutoExposureTestUploadParameters,``UE::NNEDenoiser::Private::FAutoExposureTest::RunTest'::`2'::<lambda_1>::operator()'::`6'::<lambda_1>_>
        ::_vftable_;
  pTVar2 = param_4->TestData;
  pFVar3 = param_4->Parameters;
  *(FAutoExposureTestUploadParameters **)&pFVar8[1].FullPathIfDebug.Data.ArrayNum = param_2;
  pFVar8[1]._padding_ = (longlong)pTVar2;
  pFVar8[1].FullPathIfDebug.Data.AllocatorInstance.Data = (FScriptContainerElement *)pFVar3;
  ClobberPassOutputs(this,pFVar8);
  iVar6 = (this->Passes).Array.ArrayNum;
  piVar1 = &(this->Passes).Array.ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGPass_*>_>
                      (0x808,(ForElementType<FRDGPass_*> *)&this->Passes,piVar1);
  }
  (this->Passes).Array.ArrayNum = iVar6 + 1;
  (this->Passes).Array.AllocatorInstance.Data[iVar6] = pFVar8;
  (pFVar8->Handle).Index = (this->Passes).Array.ArrayNum - 1;
  SetupParameterPass(this,pFVar8);
  return pFVar8;
}

// AddPass<FNNEDenoiserModelInstanceCPUTextureParameters,`UE::NNEDenoiser::Private::FModelInstanceCPU::EnqueueRDG'::__l2::<lambda_1>_> @ 14eadd5b0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EUniformBufferBaseType": Some values do not have unique names */

FRDGPass * __thiscall
FRDGBuilder::
AddPass<FNNEDenoiserModelInstanceCPUTextureParameters,_UE::NNEDenoiser::Private::FModelInstanceCPU::EnqueueRDG_::__l2::<lambda_1>_>
          (FRDGBuilder *this,FRDGEventName *param_1,
          FNNEDenoiserModelInstanceCPUTextureParameters *param_2,ERDGPassFlags param_3,
          <lambda_1> *param_4)

{
  int *piVar1;
  FModelInstanceCPU *pFVar2;
  FNNEDenoiserModelInstanceCPUTextureParameters *pFVar3;
  bool bVar4;
  ERDGPassFlags EVar5;
  int iVar6;
  wchar_t *pwVar7;
  FRDGPass *pFVar8;
  code *pcVar9;
  TArray<FShaderParametersMetadata::FMember,TSizedDefaultAllocator<32>_> local_48;
  FRDGParameterStruct local_38;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FNNEDenoiserModelInstanceCPUTextureParameters::FTypeInfo::GetStructMetadata(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FNNEDenoiserModelInstanceCPUTextureParameters::FTypeInfo::GetStructMetadata(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FNNEDenoiserModelInstanceCPUTextureParameters::FTypeInfo::GetStructMetadata(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pcVar9 = FNNEDenoiserModelInstanceCPUTextureParameters::zzAppendMemberGetPrev;
      local_48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_48.ArrayNum = 0;
      local_48.ArrayMax = 0;
      do {
        pcVar9 = (code *)(*pcVar9)((ulonglong)param_4 & 0xff,&local_48);
      } while (pcVar9 != (code *)0x0);
      AlgoImpl::Reverse<FShaderParametersMetadata::FMember>
                ((FMember *)local_48.AllocatorInstance.Data,local_48.ArrayNum);
      FShaderParametersMetadata::FShaderParametersMetadata
                (&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FNNEDenoiserModelInstanceCPUTextureParameters::FTypeInfo::GetStructMetadata(void)'
                  ::__l2::StaticStructMetadata,ShaderParameterStruct,Shader,
                 L"FNNEDenoiserModelInstanceCPUTextureParameters",
                 L"FNNEDenoiserModelInstanceCPUTextureParameters",(wchar_t *)0x0,(wchar_t *)0x0,
                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\NNE\\NNEDenoiser\\Source\\NNEDenoiser\\Private\\NNEDenoiserModelInstanceCPU.cpp"
                 ,0xf,0x20,&local_48,false,(FRHIUniformBufferLayoutInitializer *)0x0,None);
      if ((FMember *)local_48.AllocatorInstance.Data != (FMember *)0x0) {
        FMemory::Free(local_48.AllocatorInstance.Data);
      }
      atexit(`FNNEDenoiserModelInstanceCPUTextureParameters::FTypeInfo::GetStructMetadata'::__l2::
             _dynamic_atexit_destructor_for__StaticStructMetadata__);
      _Init_thread_footer(&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FNNEDenoiserModelInstanceCPUTextureParameters::FTypeInfo::GetStructMetadata(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FRDGUserValidation::ValidateAddPass
            (&this->UserValidation,param_2,
             &`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FNNEDenoiserModelInstanceCPUTextureParameters::FTypeInfo::GetStructMetadata(void)'
              ::__l2::StaticStructMetadata,param_1,param_3);
  FlushAccessModeQueue(this);
  pwVar7 = FRDGEventName::GetTCHAR(param_1);
  EVar5 = OverridePassFlags(this,pwVar7,param_3);
  pFVar8 = FMemStackBase::Alloc((FMemStackBase *)&this->_padding_,0x198,8);
  local_38.Contents = (uchar *)param_2;
  if (`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FNNEDenoiserModelInstanceCPUTextureParameters::FTypeInfo::GetStructMetadata(void)'
      ::__l2::StaticStructMetadata.Layout.Reference == (FRHIUniformBufferLayout *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsLayoutInitialized()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                       ,0x17c,L"");
    if (bVar4) {
      pcVar9 = (code *)swi(3);
      pFVar8 = (FRDGPass *)(*pcVar9)();
      return pFVar8;
    }
  }
  local_38.Layout.Reference =
       `public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FNNEDenoiserModelInstanceCPUTextureParameters::FTypeInfo::GetStructMetadata(void)'
       ::__l2::StaticStructMetadata.Layout.Reference;
  if (`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FNNEDenoiserModelInstanceCPUTextureParameters::FTypeInfo::GetStructMetadata(void)'
      ::__l2::StaticStructMetadata.Layout.Reference != (FRHIUniformBufferLayout *)0x0) {
    FRHIResource::AddRef
              ((FRHIResource *)
               `public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FNNEDenoiserModelInstanceCPUTextureParameters::FTypeInfo::GetStructMetadata(void)'
               ::__l2::StaticStructMetadata.Layout.Reference);
  }
  local_38.Metadata =
       &`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FNNEDenoiserModelInstanceCPUTextureParameters::FTypeInfo::GetStructMetadata(void)'
        ::__l2::StaticStructMetadata;
  FRDGPass::FRDGPass(pFVar8,param_1,&local_38,EVar5,Inline);
  pFVar8->_padding_ =
       (longlong)
       &TRDGLambdaPass<FNNEDenoiserModelInstanceCPUTextureParameters,`UE::NNEDenoiser::Private::FModelInstanceCPU::EnqueueRDG'::`2'::<lambda_1>_>
        ::_vftable_;
  pFVar2 = param_4->__this;
  pFVar3 = param_4->DenoiserParameters;
  *(FNNEDenoiserModelInstanceCPUTextureParameters **)&pFVar8[1].FullPathIfDebug.Data.ArrayNum =
       param_2;
  pFVar8[1]._padding_ = (longlong)pFVar2;
  pFVar8[1].FullPathIfDebug.Data.AllocatorInstance.Data = (FScriptContainerElement *)pFVar3;
  ClobberPassOutputs(this,pFVar8);
  iVar6 = (this->Passes).Array.ArrayNum;
  piVar1 = &(this->Passes).Array.ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGPass_*>_>
                      (0x808,(ForElementType<FRDGPass_*> *)&this->Passes,piVar1);
  }
  (this->Passes).Array.ArrayNum = iVar6 + 1;
  (this->Passes).Array.AllocatorInstance.Data[iVar6] = pFVar8;
  (pFVar8->Handle).Index = (this->Passes).Array.ArrayNum - 1;
  SetupParameterPass(this,pFVar8);
  return pFVar8;
}

// AddPass<FNNEDenoiserModelInstanceGPUTextureParameters,`UE::NNEDenoiser::Private::FModelInstanceGPU::EnqueueRDG'::__l2::<lambda_2>_> @ 14eadd860

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EUniformBufferBaseType": Some values do not have unique names */

FRDGPass * __thiscall
FRDGBuilder::
AddPass<FNNEDenoiserModelInstanceGPUTextureParameters,_UE::NNEDenoiser::Private::FModelInstanceGPU::EnqueueRDG_::__l2::<lambda_2>_>
          (FRDGBuilder *this,FRDGEventName *param_1,
          FNNEDenoiserModelInstanceGPUTextureParameters *param_2,ERDGPassFlags param_3,
          <lambda_2> *param_4)

{
  int *piVar1;
  FModelInstanceGPU *pFVar2;
  FNNEDenoiserModelInstanceGPUTextureParameters *pFVar3;
  bool bVar4;
  ERDGPassFlags EVar5;
  int iVar6;
  wchar_t *pwVar7;
  FRDGPass *pFVar8;
  code *pcVar9;
  TArray<FShaderParametersMetadata::FMember,TSizedDefaultAllocator<32>_> local_48;
  FRDGParameterStruct local_38;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FNNEDenoiserModelInstanceGPUTextureParameters::FTypeInfo::GetStructMetadata(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FNNEDenoiserModelInstanceGPUTextureParameters::FTypeInfo::GetStructMetadata(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FNNEDenoiserModelInstanceGPUTextureParameters::FTypeInfo::GetStructMetadata(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pcVar9 = FNNEDenoiserModelInstanceGPUTextureParameters::zzAppendMemberGetPrev;
      local_48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_48.ArrayNum = 0;
      local_48.ArrayMax = 0;
      do {
        pcVar9 = (code *)(*pcVar9)((ulonglong)param_4 & 0xff,&local_48);
      } while (pcVar9 != (code *)0x0);
      AlgoImpl::Reverse<FShaderParametersMetadata::FMember>
                ((FMember *)local_48.AllocatorInstance.Data,local_48.ArrayNum);
      FShaderParametersMetadata::FShaderParametersMetadata
                (&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FNNEDenoiserModelInstanceGPUTextureParameters::FTypeInfo::GetStructMetadata(void)'
                  ::__l2::StaticStructMetadata,ShaderParameterStruct,Shader,
                 L"FNNEDenoiserModelInstanceGPUTextureParameters",
                 L"FNNEDenoiserModelInstanceGPUTextureParameters",(wchar_t *)0x0,(wchar_t *)0x0,
                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\NNE\\NNEDenoiser\\Source\\NNEDenoiser\\Private\\NNEDenoiserModelInstanceGPU.cpp"
                 ,0x12,0x20,&local_48,false,(FRHIUniformBufferLayoutInitializer *)0x0,None);
      if ((FMember *)local_48.AllocatorInstance.Data != (FMember *)0x0) {
        FMemory::Free(local_48.AllocatorInstance.Data);
      }
      atexit(`FNNEDenoiserModelInstanceGPUTextureParameters::FTypeInfo::GetStructMetadata'::__l2::
             _dynamic_atexit_destructor_for__StaticStructMetadata__);
      _Init_thread_footer(&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FNNEDenoiserModelInstanceGPUTextureParameters::FTypeInfo::GetStructMetadata(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FRDGUserValidation::ValidateAddPass
            (&this->UserValidation,param_2,
             &`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FNNEDenoiserModelInstanceGPUTextureParameters::FTypeInfo::GetStructMetadata(void)'
              ::__l2::StaticStructMetadata,param_1,param_3);
  FlushAccessModeQueue(this);
  pwVar7 = FRDGEventName::GetTCHAR(param_1);
  EVar5 = OverridePassFlags(this,pwVar7,param_3);
  pFVar8 = FMemStackBase::Alloc((FMemStackBase *)&this->_padding_,0x198,8);
  local_38.Contents = (uchar *)param_2;
  if (`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FNNEDenoiserModelInstanceGPUTextureParameters::FTypeInfo::GetStructMetadata(void)'
      ::__l2::StaticStructMetadata.Layout.Reference == (FRHIUniformBufferLayout *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsLayoutInitialized()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                       ,0x17c,L"");
    if (bVar4) {
      pcVar9 = (code *)swi(3);
      pFVar8 = (FRDGPass *)(*pcVar9)();
      return pFVar8;
    }
  }
  local_38.Layout.Reference =
       `public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FNNEDenoiserModelInstanceGPUTextureParameters::FTypeInfo::GetStructMetadata(void)'
       ::__l2::StaticStructMetadata.Layout.Reference;
  if (`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FNNEDenoiserModelInstanceGPUTextureParameters::FTypeInfo::GetStructMetadata(void)'
      ::__l2::StaticStructMetadata.Layout.Reference != (FRHIUniformBufferLayout *)0x0) {
    FRHIResource::AddRef
              ((FRHIResource *)
               `public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FNNEDenoiserModelInstanceGPUTextureParameters::FTypeInfo::GetStructMetadata(void)'
               ::__l2::StaticStructMetadata.Layout.Reference);
  }
  local_38.Metadata =
       &`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FNNEDenoiserModelInstanceGPUTextureParameters::FTypeInfo::GetStructMetadata(void)'
        ::__l2::StaticStructMetadata;
  FRDGPass::FRDGPass(pFVar8,param_1,&local_38,EVar5,Inline);
  pFVar8->_padding_ =
       (longlong)
       &TRDGLambdaPass<FNNEDenoiserModelInstanceGPUTextureParameters,`UE::NNEDenoiser::Private::FModelInstanceGPU::EnqueueRDG'::`2'::<lambda_2>_>
        ::_vftable_;
  pFVar2 = param_4->__this;
  pFVar3 = param_4->DenoiserParameters;
  *(FNNEDenoiserModelInstanceGPUTextureParameters **)&pFVar8[1].FullPathIfDebug.Data.ArrayNum =
       param_2;
  pFVar8[1]._padding_ = (longlong)pFVar2;
  pFVar8[1].FullPathIfDebug.Data.AllocatorInstance.Data = (FScriptContainerElement *)pFVar3;
  ClobberPassOutputs(this,pFVar8);
  iVar6 = (this->Passes).Array.ArrayNum;
  piVar1 = &(this->Passes).Array.ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGPass_*>_>
                      (0x808,(ForElementType<FRDGPass_*> *)&this->Passes,piVar1);
  }
  (this->Passes).Array.ArrayNum = iVar6 + 1;
  (this->Passes).Array.AllocatorInstance.Data[iVar6] = pFVar8;
  (pFVar8->Handle).Index = (this->Passes).Array.ArrayNum - 1;
  SetupParameterPass(this,pFVar8);
  return pFVar8;
}

// AddPass<UE::NNEDenoiser::Private::FTransferFunctionTestDownloadParameters,``UE::NNEDenoiser::Private::FTransferFunctionTest::RunTest'::__l2::<lambda_1>::operator()'::__l8::<lambda_3>_> @ 14eaddfd0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EUniformBufferBaseType": Some values do not have unique names */

FRDGPass * __thiscall
FRDGBuilder::
AddPass<UE::NNEDenoiser::Private::FTransferFunctionTestDownloadParameters,__UE::NNEDenoiser::Private::FTransferFunctionTest::RunTest_::__l2::<lambda_1>::operator()_::__l8::<lambda_3>_>
          (FRDGBuilder *this,FRDGEventName *param_1,FTransferFunctionTestDownloadParameters *param_2
          ,ERDGPassFlags param_3,<lambda_3> *param_4)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  bool bVar3;
  ERDGPassFlags EVar4;
  int iVar5;
  wchar_t *pwVar6;
  FRDGPass *pFVar7;
  code *pcVar8;
  TArray<FShaderParametersMetadata::FMember,TSizedDefaultAllocator<32>_> local_48;
  FRDGParameterStruct local_38;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_UE::NNEDenoiser::Private::FTransferFunctionTestDownloadParameters::FTypeInfo::GetStructMetadata(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_UE::NNEDenoiser::Private::FTransferFunctionTestDownloadParameters::FTypeInfo::GetStructMetadata(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_UE::NNEDenoiser::Private::FTransferFunctionTestDownloadParameters::FTypeInfo::GetStructMetadata(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pcVar8 = UE::NNEDenoiser::Private::FTransferFunctionTestDownloadParameters::
               zzAppendMemberGetPrev;
      local_48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_48.ArrayNum = 0;
      local_48.ArrayMax = 0;
      do {
        pcVar8 = (code *)(*pcVar8)((ulonglong)param_4 & 0xff,&local_48);
      } while (pcVar8 != (code *)0x0);
      AlgoImpl::Reverse<FShaderParametersMetadata::FMember>
                ((FMember *)local_48.AllocatorInstance.Data,local_48.ArrayNum);
      FShaderParametersMetadata::FShaderParametersMetadata
                (&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_UE::NNEDenoiser::Private::FTransferFunctionTestDownloadParameters::FTypeInfo::GetStructMetadata(void)'
                  ::__l2::StaticStructMetadata,ShaderParameterStruct,Shader,
                 L"FTransferFunctionTestDownloadParameters",
                 L"FTransferFunctionTestDownloadParameters",(wchar_t *)0x0,(wchar_t *)0x0,
                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\NNE\\NNEDenoiser\\Source\\NNEDenoiser\\Private\\NNEDenoiserUnitTestOidn.cpp"
                 ,0x1b,0x20,&local_48,false,(FRHIUniformBufferLayoutInitializer *)0x0,None);
      if ((FMember *)local_48.AllocatorInstance.Data != (FMember *)0x0) {
        FMemory::Free(local_48.AllocatorInstance.Data);
      }
      atexit(`UE::NNEDenoiser::Private::FTransferFunctionTestDownloadParameters::FTypeInfo::
             GetStructMetadata'::__l2::_dynamic_atexit_destructor_for__StaticStructMetadata__);
      _Init_thread_footer(&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_UE::NNEDenoiser::Private::FTransferFunctionTestDownloadParameters::FTypeInfo::GetStructMetadata(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FRDGUserValidation::ValidateAddPass
            (&this->UserValidation,param_2,
             &`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_UE::NNEDenoiser::Private::FTransferFunctionTestDownloadParameters::FTypeInfo::GetStructMetadata(void)'
              ::__l2::StaticStructMetadata,param_1,param_3);
  FlushAccessModeQueue(this);
  pwVar6 = FRDGEventName::GetTCHAR(param_1);
  EVar4 = OverridePassFlags(this,pwVar6,param_3);
  pFVar7 = FMemStackBase::Alloc((FMemStackBase *)&this->_padding_,0x1a0,8);
  local_38.Contents = (uchar *)param_2;
  if (`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_UE::NNEDenoiser::Private::FTransferFunctionTestDownloadParameters::FTypeInfo::GetStructMetadata(void)'
      ::__l2::StaticStructMetadata.Layout.Reference == (FRHIUniformBufferLayout *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsLayoutInitialized()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                       ,0x17c,L"");
    if (bVar3) {
      pcVar8 = (code *)swi(3);
      pFVar7 = (FRDGPass *)(*pcVar8)();
      return pFVar7;
    }
  }
  local_38.Layout.Reference =
       `public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_UE::NNEDenoiser::Private::FTransferFunctionTestDownloadParameters::FTypeInfo::GetStructMetadata(void)'
       ::__l2::StaticStructMetadata.Layout.Reference;
  if (`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_UE::NNEDenoiser::Private::FTransferFunctionTestDownloadParameters::FTypeInfo::GetStructMetadata(void)'
      ::__l2::StaticStructMetadata.Layout.Reference != (FRHIUniformBufferLayout *)0x0) {
    FRHIResource::AddRef
              ((FRHIResource *)
               `public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_UE::NNEDenoiser::Private::FTransferFunctionTestDownloadParameters::FTypeInfo::GetStructMetadata(void)'
               ::__l2::StaticStructMetadata.Layout.Reference);
  }
  local_38.Metadata =
       &`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_UE::NNEDenoiser::Private::FTransferFunctionTestDownloadParameters::FTypeInfo::GetStructMetadata(void)'
        ::__l2::StaticStructMetadata;
  FRDGPass::FRDGPass(pFVar7,param_1,&local_38,EVar4,Inline);
  pFVar7->_padding_ =
       (longlong)
       &TRDGLambdaPass<UE::NNEDenoiser::Private::FTransferFunctionTestDownloadParameters,``UE::NNEDenoiser::Private::FTransferFunctionTest::RunTest'::`2'::<lambda_1>::operator()'::`8'::<lambda_3>_>
        ::_vftable_;
  pFVar2 = *(FScriptContainerElement **)&param_4->Num;
  pFVar7[1]._padding_ = (longlong)param_4->ResultRDG;
  pFVar7[1].FullPathIfDebug.Data.AllocatorInstance.Data = pFVar2;
  *(FTransferFunctionTestDownloadParameters **)&pFVar7[1].FullPathIfDebug.Data.ArrayNum =
       param_4->Parameters;
  pFVar7[1].Name.EventFormat = (wchar_t *)param_2;
  ClobberPassOutputs(this,pFVar7);
  iVar5 = (this->Passes).Array.ArrayNum;
  piVar1 = &(this->Passes).Array.ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGPass_*>_>
                      (0x808,(ForElementType<FRDGPass_*> *)&this->Passes,piVar1);
  }
  (this->Passes).Array.ArrayNum = iVar5 + 1;
  (this->Passes).Array.AllocatorInstance.Data[iVar5] = pFVar7;
  (pFVar7->Handle).Index = (this->Passes).Array.ArrayNum - 1;
  SetupParameterPass(this,pFVar7);
  return pFVar7;
}

// AddPass<UE::NNEDenoiser::Private::FTransferFunctionTestUploadBufferParameters,``UE::NNEDenoiser::Private::FTransferFunctionTest::RunTest'::__l2::<lambda_1>::operator()'::__l7::<lambda_2>_> @ 14eade290

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EUniformBufferBaseType": Some values do not have unique names */

FRDGPass * __thiscall
FRDGBuilder::
AddPass<UE::NNEDenoiser::Private::FTransferFunctionTestUploadBufferParameters,__UE::NNEDenoiser::Private::FTransferFunctionTest::RunTest_::__l2::<lambda_1>::operator()_::__l7::<lambda_2>_>
          (FRDGBuilder *this,FRDGEventName *param_1,
          FTransferFunctionTestUploadBufferParameters *param_2,ERDGPassFlags param_3,
          <lambda_2> *param_4)

{
  int *piVar1;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  bool bVar4;
  ERDGPassFlags EVar5;
  int iVar6;
  wchar_t *pwVar7;
  FRDGPass *pFVar8;
  code *pcVar9;
  TArray<FShaderParametersMetadata::FMember,TSizedDefaultAllocator<32>_> local_48;
  FRDGParameterStruct local_38;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_UE::NNEDenoiser::Private::FTransferFunctionTestUploadBufferParameters::FTypeInfo::GetStructMetadata(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_UE::NNEDenoiser::Private::FTransferFunctionTestUploadBufferParameters::FTypeInfo::GetStructMetadata(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_UE::NNEDenoiser::Private::FTransferFunctionTestUploadBufferParameters::FTypeInfo::GetStructMetadata(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pcVar9 = UE::NNEDenoiser::Private::FTransferFunctionTestUploadBufferParameters::
               zzAppendMemberGetPrev;
      local_48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_48.ArrayNum = 0;
      local_48.ArrayMax = 0;
      do {
        pcVar9 = (code *)(*pcVar9)((ulonglong)param_4 & 0xff,&local_48);
      } while (pcVar9 != (code *)0x0);
      AlgoImpl::Reverse<FShaderParametersMetadata::FMember>
                ((FMember *)local_48.AllocatorInstance.Data,local_48.ArrayNum);
      FShaderParametersMetadata::FShaderParametersMetadata
                (&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_UE::NNEDenoiser::Private::FTransferFunctionTestUploadBufferParameters::FTypeInfo::GetStructMetadata(void)'
                  ::__l2::StaticStructMetadata,ShaderParameterStruct,Shader,
                 L"FTransferFunctionTestUploadBufferParameters",
                 L"FTransferFunctionTestUploadBufferParameters",(wchar_t *)0x0,(wchar_t *)0x0,
                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\NNE\\NNEDenoiser\\Source\\NNEDenoiser\\Private\\NNEDenoiserUnitTestOidn.cpp"
                 ,0x17,0x10,&local_48,false,(FRHIUniformBufferLayoutInitializer *)0x0,None);
      if ((FMember *)local_48.AllocatorInstance.Data != (FMember *)0x0) {
        FMemory::Free(local_48.AllocatorInstance.Data);
      }
      atexit(`UE::NNEDenoiser::Private::FTransferFunctionTestUploadBufferParameters::FTypeInfo::
             GetStructMetadata'::__l2::_dynamic_atexit_destructor_for__StaticStructMetadata__);
      _Init_thread_footer(&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_UE::NNEDenoiser::Private::FTransferFunctionTestUploadBufferParameters::FTypeInfo::GetStructMetadata(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FRDGUserValidation::ValidateAddPass
            (&this->UserValidation,param_2,
             &`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_UE::NNEDenoiser::Private::FTransferFunctionTestUploadBufferParameters::FTypeInfo::GetStructMetadata(void)'
              ::__l2::StaticStructMetadata,param_1,param_3);
  FlushAccessModeQueue(this);
  pwVar7 = FRDGEventName::GetTCHAR(param_1);
  EVar5 = OverridePassFlags(this,pwVar7,param_3);
  pFVar8 = FMemStackBase::Alloc((FMemStackBase *)&this->_padding_,0x198,8);
  local_38.Contents = (uchar *)param_2;
  if (`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_UE::NNEDenoiser::Private::FTransferFunctionTestUploadBufferParameters::FTypeInfo::GetStructMetadata(void)'
      ::__l2::StaticStructMetadata.Layout.Reference == (FRHIUniformBufferLayout *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsLayoutInitialized()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                       ,0x17c,L"");
    if (bVar4) {
      pcVar9 = (code *)swi(3);
      pFVar8 = (FRDGPass *)(*pcVar9)();
      return pFVar8;
    }
  }
  local_38.Layout.Reference =
       `public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_UE::NNEDenoiser::Private::FTransferFunctionTestUploadBufferParameters::FTypeInfo::GetStructMetadata(void)'
       ::__l2::StaticStructMetadata.Layout.Reference;
  if (`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_UE::NNEDenoiser::Private::FTransferFunctionTestUploadBufferParameters::FTypeInfo::GetStructMetadata(void)'
      ::__l2::StaticStructMetadata.Layout.Reference != (FRHIUniformBufferLayout *)0x0) {
    FRHIResource::AddRef
              ((FRHIResource *)
               `public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_UE::NNEDenoiser::Private::FTransferFunctionTestUploadBufferParameters::FTypeInfo::GetStructMetadata(void)'
               ::__l2::StaticStructMetadata.Layout.Reference);
  }
  local_38.Metadata =
       &`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_UE::NNEDenoiser::Private::FTransferFunctionTestUploadBufferParameters::FTypeInfo::GetStructMetadata(void)'
        ::__l2::StaticStructMetadata;
  FRDGPass::FRDGPass(pFVar8,param_1,&local_38,EVar5,Inline);
  pFVar8->_padding_ =
       (longlong)
       &TRDGLambdaPass<UE::NNEDenoiser::Private::FTransferFunctionTestUploadBufferParameters,``UE::NNEDenoiser::Private::FTransferFunctionTest::RunTest'::`2'::<lambda_1>::operator()'::`7'::<lambda_2>_>
        ::_vftable_;
  pTVar2 = param_4->InputScale;
  pFVar3 = (FScriptContainerElement *)param_4->Parameters;
  *(FTransferFunctionTestUploadBufferParameters **)&pFVar8[1].FullPathIfDebug.Data.ArrayNum =
       param_2;
  pFVar8[1]._padding_ = (longlong)pTVar2;
  pFVar8[1].FullPathIfDebug.Data.AllocatorInstance.Data = pFVar3;
  ClobberPassOutputs(this,pFVar8);
  iVar6 = (this->Passes).Array.ArrayNum;
  piVar1 = &(this->Passes).Array.ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGPass_*>_>
                      (0x808,(ForElementType<FRDGPass_*> *)&this->Passes,piVar1);
  }
  (this->Passes).Array.ArrayNum = iVar6 + 1;
  (this->Passes).Array.AllocatorInstance.Data[iVar6] = pFVar8;
  (pFVar8->Handle).Index = (this->Passes).Array.ArrayNum - 1;
  SetupParameterPass(this,pFVar8);
  return pFVar8;
}

// AddPass<UE::NNEDenoiser::Private::FTransferFunctionTestUploadTextureParameters,``UE::NNEDenoiser::Private::FTransferFunctionTest::RunTest'::__l2::<lambda_1>::operator()'::__l6::<lambda_1>_> @ 14eade540

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EUniformBufferBaseType": Some values do not have unique names */

FRDGPass * __thiscall
FRDGBuilder::
AddPass<UE::NNEDenoiser::Private::FTransferFunctionTestUploadTextureParameters,__UE::NNEDenoiser::Private::FTransferFunctionTest::RunTest_::__l2::<lambda_1>::operator()_::__l6::<lambda_1>_>
          (FRDGBuilder *this,FRDGEventName *param_1,
          FTransferFunctionTestUploadTextureParameters *param_2,ERDGPassFlags param_3,
          <lambda_1> *param_4)

{
  int *piVar1;
  TArray<FLinearColor,TSizedDefaultAllocator<32>_> *pTVar2;
  FTransferFunctionTestUploadTextureParameters *pFVar3;
  bool bVar4;
  ERDGPassFlags EVar5;
  int iVar6;
  wchar_t *pwVar7;
  FRDGPass *pFVar8;
  code *pcVar9;
  TArray<FShaderParametersMetadata::FMember,TSizedDefaultAllocator<32>_> local_48;
  FRDGParameterStruct local_38;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_UE::NNEDenoiser::Private::FTransferFunctionTestUploadTextureParameters::FTypeInfo::GetStructMetadata(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_UE::NNEDenoiser::Private::FTransferFunctionTestUploadTextureParameters::FTypeInfo::GetStructMetadata(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_UE::NNEDenoiser::Private::FTransferFunctionTestUploadTextureParameters::FTypeInfo::GetStructMetadata(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pcVar9 = UE::NNEDenoiser::Private::FTransferFunctionTestUploadTextureParameters::
               zzAppendMemberGetPrev;
      local_48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_48.ArrayNum = 0;
      local_48.ArrayMax = 0;
      do {
        pcVar9 = (code *)(*pcVar9)((ulonglong)param_4 & 0xff,&local_48);
      } while (pcVar9 != (code *)0x0);
      AlgoImpl::Reverse<FShaderParametersMetadata::FMember>
                ((FMember *)local_48.AllocatorInstance.Data,local_48.ArrayNum);
      FShaderParametersMetadata::FShaderParametersMetadata
                (&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_UE::NNEDenoiser::Private::FTransferFunctionTestUploadTextureParameters::FTypeInfo::GetStructMetadata(void)'
                  ::__l2::StaticStructMetadata,ShaderParameterStruct,Shader,
                 L"FTransferFunctionTestUploadTextureParameters",
                 L"FTransferFunctionTestUploadTextureParameters",(wchar_t *)0x0,(wchar_t *)0x0,
                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\NNE\\NNEDenoiser\\Source\\NNEDenoiser\\Private\\NNEDenoiserUnitTestOidn.cpp"
                 ,0x13,0x20,&local_48,false,(FRHIUniformBufferLayoutInitializer *)0x0,None);
      if ((FMember *)local_48.AllocatorInstance.Data != (FMember *)0x0) {
        FMemory::Free(local_48.AllocatorInstance.Data);
      }
      atexit(`UE::NNEDenoiser::Private::FTransferFunctionTestUploadTextureParameters::FTypeInfo::
             GetStructMetadata'::__l2::_dynamic_atexit_destructor_for__StaticStructMetadata__);
      _Init_thread_footer(&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_UE::NNEDenoiser::Private::FTransferFunctionTestUploadTextureParameters::FTypeInfo::GetStructMetadata(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FRDGUserValidation::ValidateAddPass
            (&this->UserValidation,param_2,
             &`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_UE::NNEDenoiser::Private::FTransferFunctionTestUploadTextureParameters::FTypeInfo::GetStructMetadata(void)'
              ::__l2::StaticStructMetadata,param_1,param_3);
  FlushAccessModeQueue(this);
  pwVar7 = FRDGEventName::GetTCHAR(param_1);
  EVar5 = OverridePassFlags(this,pwVar7,param_3);
  pFVar8 = FMemStackBase::Alloc((FMemStackBase *)&this->_padding_,0x198,8);
  local_38.Contents = (uchar *)param_2;
  if (`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_UE::NNEDenoiser::Private::FTransferFunctionTestUploadTextureParameters::FTypeInfo::GetStructMetadata(void)'
      ::__l2::StaticStructMetadata.Layout.Reference == (FRHIUniformBufferLayout *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsLayoutInitialized()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                       ,0x17c,L"");
    if (bVar4) {
      pcVar9 = (code *)swi(3);
      pFVar8 = (FRDGPass *)(*pcVar9)();
      return pFVar8;
    }
  }
  local_38.Layout.Reference =
       `public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_UE::NNEDenoiser::Private::FTransferFunctionTestUploadTextureParameters::FTypeInfo::GetStructMetadata(void)'
       ::__l2::StaticStructMetadata.Layout.Reference;
  if (`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_UE::NNEDenoiser::Private::FTransferFunctionTestUploadTextureParameters::FTypeInfo::GetStructMetadata(void)'
      ::__l2::StaticStructMetadata.Layout.Reference != (FRHIUniformBufferLayout *)0x0) {
    FRHIResource::AddRef
              ((FRHIResource *)
               `public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_UE::NNEDenoiser::Private::FTransferFunctionTestUploadTextureParameters::FTypeInfo::GetStructMetadata(void)'
               ::__l2::StaticStructMetadata.Layout.Reference);
  }
  local_38.Metadata =
       &`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_UE::NNEDenoiser::Private::FTransferFunctionTestUploadTextureParameters::FTypeInfo::GetStructMetadata(void)'
        ::__l2::StaticStructMetadata;
  FRDGPass::FRDGPass(pFVar8,param_1,&local_38,EVar5,Inline);
  pFVar8->_padding_ =
       (longlong)
       &TRDGLambdaPass<UE::NNEDenoiser::Private::FTransferFunctionTestUploadTextureParameters,``UE::NNEDenoiser::Private::FTransferFunctionTest::RunTest'::`2'::<lambda_1>::operator()'::`6'::<lambda_1>_>
        ::_vftable_;
  pTVar2 = param_4->TestData;
  pFVar3 = param_4->Parameters;
  *(FTransferFunctionTestUploadTextureParameters **)&pFVar8[1].FullPathIfDebug.Data.ArrayNum =
       param_2;
  pFVar8[1]._padding_ = (longlong)pTVar2;
  pFVar8[1].FullPathIfDebug.Data.AllocatorInstance.Data = (FScriptContainerElement *)pFVar3;
  ClobberPassOutputs(this,pFVar8);
  iVar6 = (this->Passes).Array.ArrayNum;
  piVar1 = &(this->Passes).Array.ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGPass_*>_>
                      (0x808,(ForElementType<FRDGPass_*> *)&this->Passes,piVar1);
  }
  (this->Passes).Array.ArrayNum = iVar6 + 1;
  (this->Passes).Array.AllocatorInstance.Data[iVar6] = pFVar8;
  (pFVar8->Handle).Index = (this->Passes).Array.ArrayNum - 1;
  SetupParameterPass(this,pFVar8);
  return pFVar8;
}

// AddPassInternal<void,`FComputeShaderUtils::AddPass<UE::NNEDenoiserShaders::Internal::FAutoExposureDownsampleCS>'::__l2::<lambda_1>_> @ 14eade7f0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FRDGPass * __thiscall
FRDGBuilder::
AddPassInternal<void,_FComputeShaderUtils::AddPass<UE::NNEDenoiserShaders::Internal::FAutoExposureDownsampleCS>_::__l2::<lambda_1>_>
          (FRDGBuilder *this,FRDGEventName *param_1,FShaderParametersMetadata *param_2,void *param_3
          ,ERDGPassFlags param_4,<lambda_1>_conflict *param_5)

{
  int *piVar1;
  code *pcVar2;
  FScriptContainerElement *pFVar3;
  undefined8 uVar4;
  bool bVar5;
  ERDGPassFlags EVar6;
  int iVar7;
  wchar_t *pwVar8;
  FRDGPass *pFVar9;
  FRDGParameterStruct local_38;
  
  FRDGUserValidation::ValidateAddPass(&this->UserValidation,param_3,param_2,param_1,param_4);
  FlushAccessModeQueue(this);
  pwVar8 = FRDGEventName::GetTCHAR(param_1);
  EVar6 = OverridePassFlags(this,pwVar8,param_4);
  pFVar9 = FMemStackBase::Alloc((FMemStackBase *)&this->_padding_,0x1b8,8);
  local_38.Contents = param_3;
  if ((param_2->Layout).Reference == (FRHIUniformBufferLayout *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsLayoutInitialized()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                       ,0x17c,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      pFVar9 = (FRDGPass *)(*pcVar2)();
      return pFVar9;
    }
  }
  local_38.Layout.Reference = (param_2->Layout).Reference;
  if (local_38.Layout.Reference != (FRHIUniformBufferLayout *)0x0) {
    FRHIResource::AddRef((FRHIResource *)local_38.Layout.Reference);
  }
  local_38.Metadata = param_2;
  FRDGPass::FRDGPass(pFVar9,param_1,&local_38,EVar6,Async);
  pFVar9->_padding_ =
       (longlong)
       &
       ___7__TRDGLambdaPass_XV<lambda_1>__1____AddPass_VFAutoExposureDownsampleCS_Internal_NNEDenoiserShaders_UE___FComputeShaderUtils__YAPEAVFRDGPass__AEAVFRDGBuilder____QEAVFRDGEventName__W4ERDGPassFlags__AEBV__TShaderRefBase_VFAutoExposureDownsampleCS_Internal_NNEDenoiserShaders_UE__VFShaderMapPointerTable____PEBVFShaderParametersMetadata__PEAVFParameters_FAutoExposureDownsampleCS_Internal_NNEDenoiserShaders_UE__U__TIntVector3_H_Math_UE___Z___6B_
  ;
  pFVar3 = *(FScriptContainerElement **)(param_5 + 8);
  pFVar9[1]._padding_ = *(longlong *)param_5;
  pFVar9[1].FullPathIfDebug.Data.AllocatorInstance.Data = pFVar3;
  uVar4 = *(undefined8 *)(param_5 + 0x10);
  pwVar8 = *(wchar_t **)(param_5 + 0x18);
  pFVar9[1].FullPathIfDebug.Data.ArrayNum = (int)uVar4;
  pFVar9[1].FullPathIfDebug.Data.ArrayMax = (int)((ulonglong)uVar4 >> 0x20);
  pFVar9[1].Name.EventFormat = pwVar8;
  pFVar3 = *(FScriptContainerElement **)(param_5 + 0x20);
  uVar4 = *(undefined8 *)(param_5 + 0x28);
  pFVar9[1].ParameterStruct.Contents = param_3;
  pFVar9[1].Name.FormattedEventName.Data.AllocatorInstance.Data = pFVar3;
  pFVar9[1].Name.FormattedEventName.Data.ArrayNum = (int)uVar4;
  pFVar9[1].Name.FormattedEventName.Data.ArrayMax = (int)((ulonglong)uVar4 >> 0x20);
  ClobberPassOutputs(this,pFVar9);
  iVar7 = (this->Passes).Array.ArrayNum;
  piVar1 = &(this->Passes).Array.ArrayMax;
  if (iVar7 == *piVar1) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGPass_*>_>
                      (0x808,(ForElementType<FRDGPass_*> *)&this->Passes,piVar1);
  }
  (this->Passes).Array.ArrayNum = iVar7 + 1;
  (this->Passes).Array.AllocatorInstance.Data[iVar7] = pFVar9;
  (pFVar9->Handle).Index = (this->Passes).Array.ArrayNum - 1;
  SetupParameterPass(this,pFVar9);
  return pFVar9;
}

// AddPassInternal<void,`FComputeShaderUtils::AddPass<UE::NNEDenoiserShaders::Internal::FAutoExposureReduceCS>'::__l2::<lambda_1>_> @ 14eade980

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FRDGPass * __thiscall
FRDGBuilder::
AddPassInternal<void,_FComputeShaderUtils::AddPass<UE::NNEDenoiserShaders::Internal::FAutoExposureReduceCS>_::__l2::<lambda_1>_>
          (FRDGBuilder *this,FRDGEventName *param_1,FShaderParametersMetadata *param_2,void *param_3
          ,ERDGPassFlags param_4,<lambda_1>_conflict *param_5)

{
  int *piVar1;
  code *pcVar2;
  FScriptContainerElement *pFVar3;
  undefined8 uVar4;
  bool bVar5;
  ERDGPassFlags EVar6;
  int iVar7;
  wchar_t *pwVar8;
  FRDGPass *pFVar9;
  FRDGParameterStruct local_38;
  
  FRDGUserValidation::ValidateAddPass(&this->UserValidation,param_3,param_2,param_1,param_4);
  FlushAccessModeQueue(this);
  pwVar8 = FRDGEventName::GetTCHAR(param_1);
  EVar6 = OverridePassFlags(this,pwVar8,param_4);
  pFVar9 = FMemStackBase::Alloc((FMemStackBase *)&this->_padding_,0x1b8,8);
  local_38.Contents = param_3;
  if ((param_2->Layout).Reference == (FRHIUniformBufferLayout *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsLayoutInitialized()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                       ,0x17c,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      pFVar9 = (FRDGPass *)(*pcVar2)();
      return pFVar9;
    }
  }
  local_38.Layout.Reference = (param_2->Layout).Reference;
  if (local_38.Layout.Reference != (FRHIUniformBufferLayout *)0x0) {
    FRHIResource::AddRef((FRHIResource *)local_38.Layout.Reference);
  }
  local_38.Metadata = param_2;
  FRDGPass::FRDGPass(pFVar9,param_1,&local_38,EVar6,Async);
  pFVar9->_padding_ =
       (longlong)
       &
       ___7__TRDGLambdaPass_XV<lambda_1>__1____AddPass_VFAutoExposureReduceCS_Internal_NNEDenoiserShaders_UE___FComputeShaderUtils__YAPEAVFRDGPass__AEAVFRDGBuilder____QEAVFRDGEventName__W4ERDGPassFlags__AEBV__TShaderRefBase_VFAutoExposureReduceCS_Internal_NNEDenoiserShaders_UE__VFShaderMapPointerTable____PEBVFShaderParametersMetadata__PEAVFParameters_FAutoExposureReduceCS_Internal_NNEDenoiserShaders_UE__U__TIntVector3_H_Math_UE___Z___6B_
  ;
  pFVar3 = *(FScriptContainerElement **)(param_5 + 8);
  pFVar9[1]._padding_ = *(longlong *)param_5;
  pFVar9[1].FullPathIfDebug.Data.AllocatorInstance.Data = pFVar3;
  uVar4 = *(undefined8 *)(param_5 + 0x10);
  pwVar8 = *(wchar_t **)(param_5 + 0x18);
  pFVar9[1].FullPathIfDebug.Data.ArrayNum = (int)uVar4;
  pFVar9[1].FullPathIfDebug.Data.ArrayMax = (int)((ulonglong)uVar4 >> 0x20);
  pFVar9[1].Name.EventFormat = pwVar8;
  pFVar3 = *(FScriptContainerElement **)(param_5 + 0x20);
  uVar4 = *(undefined8 *)(param_5 + 0x28);
  pFVar9[1].ParameterStruct.Contents = param_3;
  pFVar9[1].Name.FormattedEventName.Data.AllocatorInstance.Data = pFVar3;
  pFVar9[1].Name.FormattedEventName.Data.ArrayNum = (int)uVar4;
  pFVar9[1].Name.FormattedEventName.Data.ArrayMax = (int)((ulonglong)uVar4 >> 0x20);
  ClobberPassOutputs(this,pFVar9);
  iVar7 = (this->Passes).Array.ArrayNum;
  piVar1 = &(this->Passes).Array.ArrayMax;
  if (iVar7 == *piVar1) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGPass_*>_>
                      (0x808,(ForElementType<FRDGPass_*> *)&this->Passes,piVar1);
  }
  (this->Passes).Array.ArrayNum = iVar7 + 1;
  (this->Passes).Array.AllocatorInstance.Data[iVar7] = pFVar9;
  (pFVar9->Handle).Index = (this->Passes).Array.ArrayNum - 1;
  SetupParameterPass(this,pFVar9);
  return pFVar9;
}

// AddPassInternal<void,`FComputeShaderUtils::AddPass<UE::NNEDenoiserShaders::Internal::FAutoExposureReduceFinalCS>'::__l2::<lambda_1>_> @ 14eadeb10

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FRDGPass * __thiscall
FRDGBuilder::
AddPassInternal<void,_FComputeShaderUtils::AddPass<UE::NNEDenoiserShaders::Internal::FAutoExposureReduceFinalCS>_::__l2::<lambda_1>_>
          (FRDGBuilder *this,FRDGEventName *param_1,FShaderParametersMetadata *param_2,void *param_3
          ,ERDGPassFlags param_4,<lambda_1>_conflict *param_5)

{
  int *piVar1;
  code *pcVar2;
  FScriptContainerElement *pFVar3;
  undefined8 uVar4;
  bool bVar5;
  ERDGPassFlags EVar6;
  int iVar7;
  wchar_t *pwVar8;
  FRDGPass *pFVar9;
  FRDGParameterStruct local_38;
  
  FRDGUserValidation::ValidateAddPass(&this->UserValidation,param_3,param_2,param_1,param_4);
  FlushAccessModeQueue(this);
  pwVar8 = FRDGEventName::GetTCHAR(param_1);
  EVar6 = OverridePassFlags(this,pwVar8,param_4);
  pFVar9 = FMemStackBase::Alloc((FMemStackBase *)&this->_padding_,0x1b8,8);
  local_38.Contents = param_3;
  if ((param_2->Layout).Reference == (FRHIUniformBufferLayout *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsLayoutInitialized()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                       ,0x17c,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      pFVar9 = (FRDGPass *)(*pcVar2)();
      return pFVar9;
    }
  }
  local_38.Layout.Reference = (param_2->Layout).Reference;
  if (local_38.Layout.Reference != (FRHIUniformBufferLayout *)0x0) {
    FRHIResource::AddRef((FRHIResource *)local_38.Layout.Reference);
  }
  local_38.Metadata = param_2;
  FRDGPass::FRDGPass(pFVar9,param_1,&local_38,EVar6,Async);
  pFVar9->_padding_ =
       (longlong)
       &
       ___7__TRDGLambdaPass_XV<lambda_1>__1____AddPass_VFAutoExposureReduceFinalCS_Internal_NNEDenoiserShaders_UE___FComputeShaderUtils__YAPEAVFRDGPass__AEAVFRDGBuilder____QEAVFRDGEventName__W4ERDGPassFlags__AEBV__TShaderRefBase_VFAutoExposureReduceFinalCS_Internal_NNEDenoiserShaders_UE__VFShaderMapPointerTable____PEBVFShaderParametersMetadata__PEAVFParameters_FAutoExposureReduceFinalCS_Internal_NNEDenoiserShaders_UE__U__TIntVector3_H_Math_UE___Z___6B_
  ;
  pFVar3 = *(FScriptContainerElement **)(param_5 + 8);
  pFVar9[1]._padding_ = *(longlong *)param_5;
  pFVar9[1].FullPathIfDebug.Data.AllocatorInstance.Data = pFVar3;
  uVar4 = *(undefined8 *)(param_5 + 0x10);
  pwVar8 = *(wchar_t **)(param_5 + 0x18);
  pFVar9[1].FullPathIfDebug.Data.ArrayNum = (int)uVar4;
  pFVar9[1].FullPathIfDebug.Data.ArrayMax = (int)((ulonglong)uVar4 >> 0x20);
  pFVar9[1].Name.EventFormat = pwVar8;
  pFVar3 = *(FScriptContainerElement **)(param_5 + 0x20);
  uVar4 = *(undefined8 *)(param_5 + 0x28);
  pFVar9[1].ParameterStruct.Contents = param_3;
  pFVar9[1].Name.FormattedEventName.Data.AllocatorInstance.Data = pFVar3;
  pFVar9[1].Name.FormattedEventName.Data.ArrayNum = (int)uVar4;
  pFVar9[1].Name.FormattedEventName.Data.ArrayMax = (int)((ulonglong)uVar4 >> 0x20);
  ClobberPassOutputs(this,pFVar9);
  iVar7 = (this->Passes).Array.ArrayNum;
  piVar1 = &(this->Passes).Array.ArrayMax;
  if (iVar7 == *piVar1) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGPass_*>_>
                      (0x808,(ForElementType<FRDGPass_*> *)&this->Passes,piVar1);
  }
  (this->Passes).Array.ArrayNum = iVar7 + 1;
  (this->Passes).Array.AllocatorInstance.Data[iVar7] = pFVar9;
  (pFVar9->Handle).Index = (this->Passes).Array.ArrayNum - 1;
  SetupParameterPass(this,pFVar9);
  return pFVar9;
}

// AddPassInternal<void,`FComputeShaderUtils::AddPass<UE::NNEDenoiserShaders::Internal::FBufferTextureMappedCopyCS>'::__l2::<lambda_1>_> @ 14eadeca0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FRDGPass * __thiscall
FRDGBuilder::
AddPassInternal<void,_FComputeShaderUtils::AddPass<UE::NNEDenoiserShaders::Internal::FBufferTextureMappedCopyCS>_::__l2::<lambda_1>_>
          (FRDGBuilder *this,FRDGEventName *param_1,FShaderParametersMetadata *param_2,void *param_3
          ,ERDGPassFlags param_4,<lambda_1>_conflict *param_5)

{
  int *piVar1;
  code *pcVar2;
  FScriptContainerElement *pFVar3;
  undefined8 uVar4;
  bool bVar5;
  ERDGPassFlags EVar6;
  int iVar7;
  wchar_t *pwVar8;
  FRDGPass *pFVar9;
  FRDGParameterStruct local_38;
  
  FRDGUserValidation::ValidateAddPass(&this->UserValidation,param_3,param_2,param_1,param_4);
  FlushAccessModeQueue(this);
  pwVar8 = FRDGEventName::GetTCHAR(param_1);
  EVar6 = OverridePassFlags(this,pwVar8,param_4);
  pFVar9 = FMemStackBase::Alloc((FMemStackBase *)&this->_padding_,0x1b8,8);
  local_38.Contents = param_3;
  if ((param_2->Layout).Reference == (FRHIUniformBufferLayout *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsLayoutInitialized()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                       ,0x17c,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      pFVar9 = (FRDGPass *)(*pcVar2)();
      return pFVar9;
    }
  }
  local_38.Layout.Reference = (param_2->Layout).Reference;
  if (local_38.Layout.Reference != (FRHIUniformBufferLayout *)0x0) {
    FRHIResource::AddRef((FRHIResource *)local_38.Layout.Reference);
  }
  local_38.Metadata = param_2;
  FRDGPass::FRDGPass(pFVar9,param_1,&local_38,EVar6,Async);
  pFVar9->_padding_ =
       (longlong)
       &
       ___7__TRDGLambdaPass_XV<lambda_1>__1____AddPass_VFBufferTextureMappedCopyCS_Internal_NNEDenoiserShaders_UE___FComputeShaderUtils__YAPEAVFRDGPass__AEAVFRDGBuilder____QEAVFRDGEventName__W4ERDGPassFlags__AEBV__TShaderRefBase_VFBufferTextureMappedCopyCS_Internal_NNEDenoiserShaders_UE__VFShaderMapPointerTable____PEBVFShaderParametersMetadata__PEAVFParameters_FBufferTextureMappedCopyCS_Internal_NNEDenoiserShaders_UE__U__TIntVector3_H_Math_UE___Z___6B_
  ;
  pFVar3 = *(FScriptContainerElement **)(param_5 + 8);
  pFVar9[1]._padding_ = *(longlong *)param_5;
  pFVar9[1].FullPathIfDebug.Data.AllocatorInstance.Data = pFVar3;
  uVar4 = *(undefined8 *)(param_5 + 0x10);
  pwVar8 = *(wchar_t **)(param_5 + 0x18);
  pFVar9[1].FullPathIfDebug.Data.ArrayNum = (int)uVar4;
  pFVar9[1].FullPathIfDebug.Data.ArrayMax = (int)((ulonglong)uVar4 >> 0x20);
  pFVar9[1].Name.EventFormat = pwVar8;
  pFVar3 = *(FScriptContainerElement **)(param_5 + 0x20);
  uVar4 = *(undefined8 *)(param_5 + 0x28);
  pFVar9[1].ParameterStruct.Contents = param_3;
  pFVar9[1].Name.FormattedEventName.Data.AllocatorInstance.Data = pFVar3;
  pFVar9[1].Name.FormattedEventName.Data.ArrayNum = (int)uVar4;
  pFVar9[1].Name.FormattedEventName.Data.ArrayMax = (int)((ulonglong)uVar4 >> 0x20);
  ClobberPassOutputs(this,pFVar9);
  iVar7 = (this->Passes).Array.ArrayNum;
  piVar1 = &(this->Passes).Array.ArrayMax;
  if (iVar7 == *piVar1) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGPass_*>_>
                      (0x808,(ForElementType<FRDGPass_*> *)&this->Passes,piVar1);
  }
  (this->Passes).Array.ArrayNum = iVar7 + 1;
  (this->Passes).Array.AllocatorInstance.Data[iVar7] = pFVar9;
  (pFVar9->Handle).Index = (this->Passes).Array.ArrayNum - 1;
  SetupParameterPass(this,pFVar9);
  return pFVar9;
}

// AddPassInternal<void,`FComputeShaderUtils::AddPass<UE::NNEDenoiserShaders::Internal::FDefaultIOProcessCS>'::__l2::<lambda_1>_> @ 14eadee30

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FRDGPass * __thiscall
FRDGBuilder::
AddPassInternal<void,_FComputeShaderUtils::AddPass<UE::NNEDenoiserShaders::Internal::FDefaultIOProcessCS>_::__l2::<lambda_1>_>
          (FRDGBuilder *this,FRDGEventName *param_1,FShaderParametersMetadata *param_2,void *param_3
          ,ERDGPassFlags param_4,<lambda_1>_conflict *param_5)

{
  int *piVar1;
  code *pcVar2;
  FScriptContainerElement *pFVar3;
  undefined8 uVar4;
  bool bVar5;
  ERDGPassFlags EVar6;
  int iVar7;
  wchar_t *pwVar8;
  FRDGPass *pFVar9;
  FRDGParameterStruct local_38;
  
  FRDGUserValidation::ValidateAddPass(&this->UserValidation,param_3,param_2,param_1,param_4);
  FlushAccessModeQueue(this);
  pwVar8 = FRDGEventName::GetTCHAR(param_1);
  EVar6 = OverridePassFlags(this,pwVar8,param_4);
  pFVar9 = FMemStackBase::Alloc((FMemStackBase *)&this->_padding_,0x1b8,8);
  local_38.Contents = param_3;
  if ((param_2->Layout).Reference == (FRHIUniformBufferLayout *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsLayoutInitialized()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                       ,0x17c,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      pFVar9 = (FRDGPass *)(*pcVar2)();
      return pFVar9;
    }
  }
  local_38.Layout.Reference = (param_2->Layout).Reference;
  if (local_38.Layout.Reference != (FRHIUniformBufferLayout *)0x0) {
    FRHIResource::AddRef((FRHIResource *)local_38.Layout.Reference);
  }
  local_38.Metadata = param_2;
  FRDGPass::FRDGPass(pFVar9,param_1,&local_38,EVar6,Async);
  pFVar9->_padding_ =
       (longlong)
       &
       ___7__TRDGLambdaPass_XV<lambda_1>__1____AddPass_VFDefaultIOProcessCS_Internal_NNEDenoiserShaders_UE___FComputeShaderUtils__YAPEAVFRDGPass__AEAVFRDGBuilder____QEAVFRDGEventName__W4ERDGPassFlags__AEBV__TShaderRefBase_VFDefaultIOProcessCS_Internal_NNEDenoiserShaders_UE__VFShaderMapPointerTable____PEBVFShaderParametersMetadata__PEAVFParameters_FDefaultIOProcessCS_Internal_NNEDenoiserShaders_UE__U__TIntVector3_H_Math_UE___Z___6B_
  ;
  pFVar3 = *(FScriptContainerElement **)(param_5 + 8);
  pFVar9[1]._padding_ = *(longlong *)param_5;
  pFVar9[1].FullPathIfDebug.Data.AllocatorInstance.Data = pFVar3;
  uVar4 = *(undefined8 *)(param_5 + 0x10);
  pwVar8 = *(wchar_t **)(param_5 + 0x18);
  pFVar9[1].FullPathIfDebug.Data.ArrayNum = (int)uVar4;
  pFVar9[1].FullPathIfDebug.Data.ArrayMax = (int)((ulonglong)uVar4 >> 0x20);
  pFVar9[1].Name.EventFormat = pwVar8;
  pFVar3 = *(FScriptContainerElement **)(param_5 + 0x20);
  uVar4 = *(undefined8 *)(param_5 + 0x28);
  pFVar9[1].ParameterStruct.Contents = param_3;
  pFVar9[1].Name.FormattedEventName.Data.AllocatorInstance.Data = pFVar3;
  pFVar9[1].Name.FormattedEventName.Data.ArrayNum = (int)uVar4;
  pFVar9[1].Name.FormattedEventName.Data.ArrayMax = (int)((ulonglong)uVar4 >> 0x20);
  ClobberPassOutputs(this,pFVar9);
  iVar7 = (this->Passes).Array.ArrayNum;
  piVar1 = &(this->Passes).Array.ArrayMax;
  if (iVar7 == *piVar1) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGPass_*>_>
                      (0x808,(ForElementType<FRDGPass_*> *)&this->Passes,piVar1);
  }
  (this->Passes).Array.ArrayNum = iVar7 + 1;
  (this->Passes).Array.AllocatorInstance.Data[iVar7] = pFVar9;
  (pFVar9->Handle).Index = (this->Passes).Array.ArrayNum - 1;
  SetupParameterPass(this,pFVar9);
  return pFVar9;
}

// AddPassInternal<void,`FComputeShaderUtils::AddPass<UE::NNEDenoiserShaders::Internal::FTextureBufferMappedCopyCS>'::__l2::<lambda_1>_> @ 14eadefc0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FRDGPass * __thiscall
FRDGBuilder::
AddPassInternal<void,_FComputeShaderUtils::AddPass<UE::NNEDenoiserShaders::Internal::FTextureBufferMappedCopyCS>_::__l2::<lambda_1>_>
          (FRDGBuilder *this,FRDGEventName *param_1,FShaderParametersMetadata *param_2,void *param_3
          ,ERDGPassFlags param_4,<lambda_1>_conflict *param_5)

{
  int *piVar1;
  code *pcVar2;
  FScriptContainerElement *pFVar3;
  undefined8 uVar4;
  bool bVar5;
  ERDGPassFlags EVar6;
  int iVar7;
  wchar_t *pwVar8;
  FRDGPass *pFVar9;
  FRDGParameterStruct local_38;
  
  FRDGUserValidation::ValidateAddPass(&this->UserValidation,param_3,param_2,param_1,param_4);
  FlushAccessModeQueue(this);
  pwVar8 = FRDGEventName::GetTCHAR(param_1);
  EVar6 = OverridePassFlags(this,pwVar8,param_4);
  pFVar9 = FMemStackBase::Alloc((FMemStackBase *)&this->_padding_,0x1b8,8);
  local_38.Contents = param_3;
  if ((param_2->Layout).Reference == (FRHIUniformBufferLayout *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsLayoutInitialized()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                       ,0x17c,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      pFVar9 = (FRDGPass *)(*pcVar2)();
      return pFVar9;
    }
  }
  local_38.Layout.Reference = (param_2->Layout).Reference;
  if (local_38.Layout.Reference != (FRHIUniformBufferLayout *)0x0) {
    FRHIResource::AddRef((FRHIResource *)local_38.Layout.Reference);
  }
  local_38.Metadata = param_2;
  FRDGPass::FRDGPass(pFVar9,param_1,&local_38,EVar6,Async);
  pFVar9->_padding_ =
       (longlong)
       &
       ___7__TRDGLambdaPass_XV<lambda_1>__1____AddPass_VFTextureBufferMappedCopyCS_Internal_NNEDenoiserShaders_UE___FComputeShaderUtils__YAPEAVFRDGPass__AEAVFRDGBuilder____QEAVFRDGEventName__W4ERDGPassFlags__AEBV__TShaderRefBase_VFTextureBufferMappedCopyCS_Internal_NNEDenoiserShaders_UE__VFShaderMapPointerTable____PEBVFShaderParametersMetadata__PEAVFParameters_FTextureBufferMappedCopyCS_Internal_NNEDenoiserShaders_UE__U__TIntVector3_H_Math_UE___Z___6B_
  ;
  pFVar3 = *(FScriptContainerElement **)(param_5 + 8);
  pFVar9[1]._padding_ = *(longlong *)param_5;
  pFVar9[1].FullPathIfDebug.Data.AllocatorInstance.Data = pFVar3;
  uVar4 = *(undefined8 *)(param_5 + 0x10);
  pwVar8 = *(wchar_t **)(param_5 + 0x18);
  pFVar9[1].FullPathIfDebug.Data.ArrayNum = (int)uVar4;
  pFVar9[1].FullPathIfDebug.Data.ArrayMax = (int)((ulonglong)uVar4 >> 0x20);
  pFVar9[1].Name.EventFormat = pwVar8;
  pFVar3 = *(FScriptContainerElement **)(param_5 + 0x20);
  uVar4 = *(undefined8 *)(param_5 + 0x28);
  pFVar9[1].ParameterStruct.Contents = param_3;
  pFVar9[1].Name.FormattedEventName.Data.AllocatorInstance.Data = pFVar3;
  pFVar9[1].Name.FormattedEventName.Data.ArrayNum = (int)uVar4;
  pFVar9[1].Name.FormattedEventName.Data.ArrayMax = (int)((ulonglong)uVar4 >> 0x20);
  ClobberPassOutputs(this,pFVar9);
  iVar7 = (this->Passes).Array.ArrayNum;
  piVar1 = &(this->Passes).Array.ArrayMax;
  if (iVar7 == *piVar1) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGPass_*>_>
                      (0x808,(ForElementType<FRDGPass_*> *)&this->Passes,piVar1);
  }
  (this->Passes).Array.ArrayNum = iVar7 + 1;
  (this->Passes).Array.AllocatorInstance.Data[iVar7] = pFVar9;
  (pFVar9->Handle).Index = (this->Passes).Array.ArrayNum - 1;
  SetupParameterPass(this,pFVar9);
  return pFVar9;
}

// AddPassInternal<void,`FComputeShaderUtils::AddPass<UE::NNEDenoiserShaders::Internal::FTransferFunctionOidnCS>'::__l2::<lambda_1>_> @ 14eadf150

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FRDGPass * __thiscall
FRDGBuilder::
AddPassInternal<void,_FComputeShaderUtils::AddPass<UE::NNEDenoiserShaders::Internal::FTransferFunctionOidnCS>_::__l2::<lambda_1>_>
          (FRDGBuilder *this,FRDGEventName *param_1,FShaderParametersMetadata *param_2,void *param_3
          ,ERDGPassFlags param_4,<lambda_1>_conflict *param_5)

{
  int *piVar1;
  code *pcVar2;
  FScriptContainerElement *pFVar3;
  undefined8 uVar4;
  bool bVar5;
  ERDGPassFlags EVar6;
  int iVar7;
  wchar_t *pwVar8;
  FRDGPass *pFVar9;
  FRDGParameterStruct local_38;
  
  FRDGUserValidation::ValidateAddPass(&this->UserValidation,param_3,param_2,param_1,param_4);
  FlushAccessModeQueue(this);
  pwVar8 = FRDGEventName::GetTCHAR(param_1);
  EVar6 = OverridePassFlags(this,pwVar8,param_4);
  pFVar9 = FMemStackBase::Alloc((FMemStackBase *)&this->_padding_,0x1b8,8);
  local_38.Contents = param_3;
  if ((param_2->Layout).Reference == (FRHIUniformBufferLayout *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsLayoutInitialized()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                       ,0x17c,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      pFVar9 = (FRDGPass *)(*pcVar2)();
      return pFVar9;
    }
  }
  local_38.Layout.Reference = (param_2->Layout).Reference;
  if (local_38.Layout.Reference != (FRHIUniformBufferLayout *)0x0) {
    FRHIResource::AddRef((FRHIResource *)local_38.Layout.Reference);
  }
  local_38.Metadata = param_2;
  FRDGPass::FRDGPass(pFVar9,param_1,&local_38,EVar6,Async);
  pFVar9->_padding_ =
       (longlong)
       &
       ___7__TRDGLambdaPass_XV<lambda_1>__1____AddPass_VFTransferFunctionOidnCS_Internal_NNEDenoiserShaders_UE___FComputeShaderUtils__YAPEAVFRDGPass__AEAVFRDGBuilder____QEAVFRDGEventName__W4ERDGPassFlags__AEBV__TShaderRefBase_VFTransferFunctionOidnCS_Internal_NNEDenoiserShaders_UE__VFShaderMapPointerTable____PEBVFShaderParametersMetadata__PEAVFParameters_FTransferFunctionOidnCS_Internal_NNEDenoiserShaders_UE__U__TIntVector3_H_Math_UE___Z___6B_
  ;
  pFVar3 = *(FScriptContainerElement **)(param_5 + 8);
  pFVar9[1]._padding_ = *(longlong *)param_5;
  pFVar9[1].FullPathIfDebug.Data.AllocatorInstance.Data = pFVar3;
  uVar4 = *(undefined8 *)(param_5 + 0x10);
  pwVar8 = *(wchar_t **)(param_5 + 0x18);
  pFVar9[1].FullPathIfDebug.Data.ArrayNum = (int)uVar4;
  pFVar9[1].FullPathIfDebug.Data.ArrayMax = (int)((ulonglong)uVar4 >> 0x20);
  pFVar9[1].Name.EventFormat = pwVar8;
  pFVar3 = *(FScriptContainerElement **)(param_5 + 0x20);
  uVar4 = *(undefined8 *)(param_5 + 0x28);
  pFVar9[1].ParameterStruct.Contents = param_3;
  pFVar9[1].Name.FormattedEventName.Data.AllocatorInstance.Data = pFVar3;
  pFVar9[1].Name.FormattedEventName.Data.ArrayNum = (int)uVar4;
  pFVar9[1].Name.FormattedEventName.Data.ArrayMax = (int)((ulonglong)uVar4 >> 0x20);
  ClobberPassOutputs(this,pFVar9);
  iVar7 = (this->Passes).Array.ArrayNum;
  piVar1 = &(this->Passes).Array.ArrayMax;
  if (iVar7 == *piVar1) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGPass_*>_>
                      (0x808,(ForElementType<FRDGPass_*> *)&this->Passes,piVar1);
  }
  (this->Passes).Array.ArrayNum = iVar7 + 1;
  (this->Passes).Array.AllocatorInstance.Data[iVar7] = pFVar9;
  (pFVar9->Handle).Index = (this->Passes).Array.ArrayNum - 1;
  SetupParameterPass(this,pFVar9);
  return pFVar9;
}

// ClearUnusedGraphResources<UE::NNEDenoiserShaders::Internal::FAutoExposureDownsampleCS> @ 14eae0490

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */

void __cdecl
ClearUnusedGraphResources<UE::NNEDenoiserShaders::Internal::FAutoExposureDownsampleCS>
          (TShaderRefBase<UE::NNEDenoiserShaders::Internal::FAutoExposureDownsampleCS,FShaderMapPointerTable>
           *param_1,FShaderParametersMetadata *param_2,FParameters *param_3,
          initializer_list<FRDGResource_*> *param_4)

{
  TShaderRefBase<FShader,FShaderMapPointerTable> local_18;
  
  local_18.ShaderContent = (FShader *)param_1->ShaderContent;
  local_18.ShaderMap = param_1->ShaderMap;
  ValidateShaderParameters(&local_18,param_2,param_3);
  local_18.ShaderContent = (FShader *)param_4->_First;
  local_18.ShaderMap = (FShaderMapBase *)param_4->_Last;
  ClearUnusedGraphResourcesImpl
            ((FShaderParameterBindings *)param_1->ShaderContent,param_2,param_3,
             (initializer_list<FRDGResource_*> *)&local_18);
  return;
}

// ClearUnusedGraphResources<UE::NNEDenoiserShaders::Internal::FAutoExposureReduceCS> @ 14eae0510

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */

void __cdecl
ClearUnusedGraphResources<UE::NNEDenoiserShaders::Internal::FAutoExposureReduceCS>
          (TShaderRefBase<UE::NNEDenoiserShaders::Internal::FAutoExposureReduceCS,FShaderMapPointerTable>
           *param_1,FShaderParametersMetadata *param_2,FParameters *param_3,
          initializer_list<FRDGResource_*> *param_4)

{
  TShaderRefBase<FShader,FShaderMapPointerTable> local_18;
  
  local_18.ShaderContent = (FShader *)param_1->ShaderContent;
  local_18.ShaderMap = param_1->ShaderMap;
  ValidateShaderParameters(&local_18,param_2,param_3);
  local_18.ShaderContent = (FShader *)param_4->_First;
  local_18.ShaderMap = (FShaderMapBase *)param_4->_Last;
  ClearUnusedGraphResourcesImpl
            ((FShaderParameterBindings *)param_1->ShaderContent,param_2,param_3,
             (initializer_list<FRDGResource_*> *)&local_18);
  return;
}

// ClearUnusedGraphResources<UE::NNEDenoiserShaders::Internal::FAutoExposureReduceFinalCS> @ 14eae0590

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */

void __cdecl
ClearUnusedGraphResources<UE::NNEDenoiserShaders::Internal::FAutoExposureReduceFinalCS>
          (TShaderRefBase<UE::NNEDenoiserShaders::Internal::FAutoExposureReduceFinalCS,FShaderMapPointerTable>
           *param_1,FShaderParametersMetadata *param_2,FParameters *param_3,
          initializer_list<FRDGResource_*> *param_4)

{
  TShaderRefBase<FShader,FShaderMapPointerTable> local_18;
  
  local_18.ShaderContent = (FShader *)param_1->ShaderContent;
  local_18.ShaderMap = param_1->ShaderMap;
  ValidateShaderParameters(&local_18,param_2,param_3);
  local_18.ShaderContent = (FShader *)param_4->_First;
  local_18.ShaderMap = (FShaderMapBase *)param_4->_Last;
  ClearUnusedGraphResourcesImpl
            ((FShaderParameterBindings *)param_1->ShaderContent,param_2,param_3,
             (initializer_list<FRDGResource_*> *)&local_18);
  return;
}

// ClearUnusedGraphResources<UE::NNEDenoiserShaders::Internal::FBufferTextureMappedCopyCS> @ 14eae0610

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */

void __cdecl
ClearUnusedGraphResources<UE::NNEDenoiserShaders::Internal::FBufferTextureMappedCopyCS>
          (TShaderRefBase<UE::NNEDenoiserShaders::Internal::FBufferTextureMappedCopyCS,FShaderMapPointerTable>
           *param_1,FShaderParametersMetadata *param_2,FParameters *param_3,
          initializer_list<FRDGResource_*> *param_4)

{
  TShaderRefBase<FShader,FShaderMapPointerTable> local_18;
  
  local_18.ShaderContent = (FShader *)param_1->ShaderContent;
  local_18.ShaderMap = param_1->ShaderMap;
  ValidateShaderParameters(&local_18,param_2,param_3);
  local_18.ShaderContent = (FShader *)param_4->_First;
  local_18.ShaderMap = (FShaderMapBase *)param_4->_Last;
  ClearUnusedGraphResourcesImpl
            ((FShaderParameterBindings *)param_1->ShaderContent,param_2,param_3,
             (initializer_list<FRDGResource_*> *)&local_18);
  return;
}

// ClearUnusedGraphResources<UE::NNEDenoiserShaders::Internal::FDefaultIOProcessCS> @ 14eae0690

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */

void __cdecl
ClearUnusedGraphResources<UE::NNEDenoiserShaders::Internal::FDefaultIOProcessCS>
          (TShaderRefBase<UE::NNEDenoiserShaders::Internal::FDefaultIOProcessCS,FShaderMapPointerTable>
           *param_1,FShaderParametersMetadata *param_2,FParameters *param_3,
          initializer_list<FRDGResource_*> *param_4)

{
  TShaderRefBase<FShader,FShaderMapPointerTable> local_18;
  
  local_18.ShaderContent = (FShader *)param_1->ShaderContent;
  local_18.ShaderMap = param_1->ShaderMap;
  ValidateShaderParameters(&local_18,param_2,param_3);
  local_18.ShaderContent = (FShader *)param_4->_First;
  local_18.ShaderMap = (FShaderMapBase *)param_4->_Last;
  ClearUnusedGraphResourcesImpl
            ((FShaderParameterBindings *)param_1->ShaderContent,param_2,param_3,
             (initializer_list<FRDGResource_*> *)&local_18);
  return;
}

// ClearUnusedGraphResources<UE::NNEDenoiserShaders::Internal::FTextureBufferMappedCopyCS> @ 14eae0710

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */

void __cdecl
ClearUnusedGraphResources<UE::NNEDenoiserShaders::Internal::FTextureBufferMappedCopyCS>
          (TShaderRefBase<UE::NNEDenoiserShaders::Internal::FTextureBufferMappedCopyCS,FShaderMapPointerTable>
           *param_1,FShaderParametersMetadata *param_2,FParameters *param_3,
          initializer_list<FRDGResource_*> *param_4)

{
  TShaderRefBase<FShader,FShaderMapPointerTable> local_18;
  
  local_18.ShaderContent = (FShader *)param_1->ShaderContent;
  local_18.ShaderMap = param_1->ShaderMap;
  ValidateShaderParameters(&local_18,param_2,param_3);
  local_18.ShaderContent = (FShader *)param_4->_First;
  local_18.ShaderMap = (FShaderMapBase *)param_4->_Last;
  ClearUnusedGraphResourcesImpl
            ((FShaderParameterBindings *)param_1->ShaderContent,param_2,param_3,
             (initializer_list<FRDGResource_*> *)&local_18);
  return;
}

// ClearUnusedGraphResources<UE::NNEDenoiserShaders::Internal::FTransferFunctionOidnCS> @ 14eae0790

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */

void __cdecl
ClearUnusedGraphResources<UE::NNEDenoiserShaders::Internal::FTransferFunctionOidnCS>
          (TShaderRefBase<UE::NNEDenoiserShaders::Internal::FTransferFunctionOidnCS,FShaderMapPointerTable>
           *param_1,FShaderParametersMetadata *param_2,FParameters *param_3,
          initializer_list<FRDGResource_*> *param_4)

{
  TShaderRefBase<FShader,FShaderMapPointerTable> local_18;
  
  local_18.ShaderContent = (FShader *)param_1->ShaderContent;
  local_18.ShaderMap = param_1->ShaderMap;
  ValidateShaderParameters(&local_18,param_2,param_3);
  local_18.ShaderContent = (FShader *)param_4->_First;
  local_18.ShaderMap = (FShaderMapBase *)param_4->_Last;
  ClearUnusedGraphResourcesImpl
            ((FShaderParameterBindings *)param_1->ShaderContent,param_2,param_3,
             (initializer_list<FRDGResource_*> *)&local_18);
  return;
}

// ConstructItems<UE::NNEDenoiser::Private::FTile,UE::NNEDenoiser::Private::FTile,int> @ 14eae0810

void __cdecl
ConstructItems<UE::NNEDenoiser::Private::FTile,UE::NNEDenoiser::Private::FTile,int>
          (void *param_1,FTile *param_2,int param_3)

{
  TIntPoint<int>_u_0 *pTVar1;
  TIntPoint<int>_u_0 *pTVar2;
  
  if (param_3 != 0) {
    pTVar1 = (TIntPoint<int>_u_0 *)((longlong)param_1 + 0x10);
    pTVar2 = &(param_2->InputOffsets).field0_0x0._s_0.Max.field0_0x0;
    do {
      pTVar1[-2] = *(TIntPoint<int>_u_0 *)
                    ((longlong)param_2 + (-0x10 - (longlong)param_1) + (longlong)pTVar1);
      pTVar1[-1] = pTVar2[-1];
      *pTVar1 = *pTVar2;
      pTVar1[1] = pTVar2[1];
      pTVar1[2] = pTVar2[2];
      param_3 = param_3 + -1;
      pTVar1 = pTVar1 + 5;
      pTVar2 = pTVar2 + 5;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<UE::NNEDenoiser::Private::FResourceMapping,UE::NNEDenoiser::Private::FResourceMapping,int> @ 14eae0860

void __cdecl
ConstructItems<UE::NNEDenoiser::Private::FResourceMapping,UE::NNEDenoiser::Private::FResourceMapping,int>
          (void *param_1,FResourceMapping *param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  void *_Src;
  longlong lVar3;
  
  if (param_3 != 0) {
    lVar3 = (longlong)param_2 - (longlong)param_1;
    do {
      ((ForAnyElementType *)param_1)->Data = (FScriptContainerElement *)0x0;
      piVar1 = (int *)((longlong)&((ForAnyElementType *)((longlong)param_1 + 8))->Data + 4);
      iVar2 = *(int *)(lVar3 + 8 + (longlong)param_1);
      _Src = *(void **)(lVar3 + (longlong)param_1);
      *(int *)&((ForAnyElementType *)((longlong)param_1 + 8))->Data = iVar2;
      if (iVar2 == 0) {
        *piVar1 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0xc,4,iVar2,0,param_1,iVar2,piVar1);
        memcpy(((ForAnyElementType *)param_1)->Data,_Src,(longlong)iVar2 * 0xc);
      }
      param_1 = (void *)((longlong)param_1 + 0x10);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// DestructItems<TTuple<enum_EDenoiserRuntimeType,FString>,int> @ 14eae2330

void __cdecl
DestructItems<TTuple<enum_EDenoiserRuntimeType,FString>,int>
          (TTuple<EDenoiserRuntimeType,FString> *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)&param_1->field_0x8;
    do {
      if ((void *)*puVar1 != (void *)0x0) {
        FMemory::Free((void *)*puVar1);
      }
      puVar1 = puVar1 + 3;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<UE::NNEDenoiser::Private::FResourceMapping,int> @ 14eae2370

void __cdecl
DestructItems<UE::NNEDenoiser::Private::FResourceMapping,int>(FResourceMapping *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = (param_1->ChannelMapping).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// Enqueue<TRenderCommandTag<`UE::NNEDenoiser::Private::FAutoExposureTest::RunTest'::__l2::TSTR_NNEAutoExposureTest51>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 14eae2f10

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_UE::NNEDenoiser::Private::FAutoExposureTest::RunTest_::__l2::TSTR_NNEAutoExposureTest51>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
          (TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *param_1)

{
  int *piVar1;
  int iVar2;
  TStatIdData *pTVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  FRenderCommandTag *pFVar10;
  FRHICommandListImmediate *pFVar11;
  undefined8 uVar12;
  FThreadStats *this;
  FThreadStatsPool *this_00;
  longlong *plVar13;
  FName FVar14;
  FColor_u_0 FVar15;
  FNameEntryId FVar16;
  FColor_u_0 local_res10;
  uint uStackX_14;
  FColor_u_0 local_res18;
  uint local_res1c;
  FConstructor local_res20;
  undefined8 *local_68;
  LARGE_INTEGER local_60;
  FName local_58;
  FStatMessage local_48;
  
  pFVar10 = (FRenderCommandTag *)
            TRenderCommandTag<`UE::NNEDenoiser::Private::FAutoExposureTest::RunTest'::__l2::TSTR_NNEAutoExposureTest51>
            ::Get();
  if ((CpuChannel->Enabled < 0) || (RenderCommandsChannel->Enabled < 0)) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&pFVar10->SpecId,pFVar10->Name,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
               ,0x255);
    FCpuProfilerTrace::OutputBeginEvent(pFVar10->SpecId);
  }
  bVar8 = IsInRenderingThread();
  if (!bVar8) {
    if (GIsThreadedRendering == false) {
      bVar8 = IsInGameThread();
      if (bVar8) goto LAB_14eae3061;
    }
    if (GMainThreadBlockedOnRenderThread != (TAtomic<bool>)0x0) {
      bVar8 = IsInGameThread();
      if (bVar8) {
        bVar8 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<2708370973442179152>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                           ,0x50,
                           "!GMainThreadBlockedOnRenderThread.Load(EMemoryOrder::Relaxed) || !IsInGameThread()"
                          );
        if (bVar8) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
    }
    if (GRenderCommandPipeMode == None) {
      local_res20.Prerequisites =
           (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
            *)0x0;
      TGraphTask<FRenderThreadCommandPipe::TRenderCommandTask<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>_>
      ::FConstructor::
      ConstructAndDispatchWhenReady<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>,FRenderCommandTag_const_&>
                (&local_res20,(TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)&local_68
                 ,(FRenderCommandTag *)param_1);
      if (local_68 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(local_68 + 6);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)*local_68)(local_68,1);
        }
      }
    }
    else {
      EnqueueAndLaunch(&Instance,param_1,pFVar10);
    }
    goto LAB_14eae3255;
  }
LAB_14eae3061:
  pTVar3 = (pFVar10->StatId).StatIdPtr;
  FVar16.Value = 0;
  bVar8 = false;
  bVar7 = false;
  local_58.ComparisonIndex.Value = 0;
  local_58.Number = 0;
  FVar14 = *(FName *)&pTVar3->Name;
  FVar15.Bits = (uint)FVar14.ComparisonIndex.Value;
  uVar9 = FVar14.Number;
  if ((FVar15.Bits == 0) && (uVar9 == 0)) {
LAB_14eae313f:
    bVar5 = false;
    FVar14 = local_58;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10._s_0,(pTVar3->StatDescriptionAnsi).Ptr);
      bVar8 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res18.Bits = FVar15.Bits;
        local_res1c = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res18._s_0,(pTVar3->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                   ,0x266);
        bVar8 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14eae313f;
    local_res10.Bits = FVar15.Bits;
    uStackX_14 = uVar9;
    local_58 = FVar14;
    FThreadStats::AddMessage(FVar14,CycleScopeStart);
    bVar5 = true;
    FVar16.Value = local_58.ComparisonIndex.Value;
  }
  pFVar11 = GetImmediateCommandList_ForRenderCommand();
  UE::Core::Private::Function::CheckCallable(*(void **)param_1);
  pcVar4 = *(code **)param_1;
  plVar13 = (longlong *)&param_1->field_0x10;
  if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
    plVar13 = *(longlong **)&param_1->field_0x28;
  }
  uVar12 = (**(code **)(*plVar13 + 8))();
  (*pcVar4)(uVar12,pFVar11);
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar5) && (FVar14 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this = TlsGetValue(FThreadStats::TlsSlot);
    if (this == (FThreadStats *)0x0) {
      this_00 = FThreadStatsPool::Get();
      this = FThreadStatsPool::GetFromPool(this_00);
    }
    if (this->bWaitForExplicitFlush < this->ScopeCount) {
      local_48.NameAndInfo.Number = FVar14.Number & 0xffff6fff | 0x6000;
      local_48.NameAndInfo.Index.Value = FVar16.Value;
      QueryPerformanceCounter(&local_60);
      local_48.StatData.Pad[4] = '\0';
      local_48.StatData.Pad[5] = '\0';
      local_48.StatData.Pad[6] = '\0';
      local_48.StatData.Pad[7] = '\0';
      local_48.StatData.Pad[0] = local_60.s.LowPart._0_1_;
      local_48.StatData.Pad[1] = local_60.s.LowPart._1_1_;
      local_48.StatData.Pad[2] = local_60.s.LowPart._2_1_;
      local_48.StatData.Pad[3] = local_60.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this,&local_48);
      piVar1 = &this->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this,false,false);
      }
    }
  }
LAB_14eae3255:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Enqueue<TRenderCommandTag<`UE::NNEDenoiser::Private::FTransferFunctionTest::RunTest'::__l2::TSTR_NNETransferFunctionTest58>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 14eae3290

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_UE::NNEDenoiser::Private::FTransferFunctionTest::RunTest_::__l2::TSTR_NNETransferFunctionTest58>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
          (TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *param_1)

{
  int *piVar1;
  int iVar2;
  TStatIdData *pTVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  FRenderCommandTag *pFVar10;
  FRHICommandListImmediate *pFVar11;
  undefined8 uVar12;
  FThreadStats *this;
  FThreadStatsPool *this_00;
  longlong *plVar13;
  FName FVar14;
  FColor_u_0 FVar15;
  FNameEntryId FVar16;
  FColor_u_0 local_res10;
  uint uStackX_14;
  FColor_u_0 local_res18;
  uint local_res1c;
  FConstructor local_res20;
  undefined8 *local_68;
  LARGE_INTEGER local_60;
  FName local_58;
  FStatMessage local_48;
  
  pFVar10 = (FRenderCommandTag *)
            TRenderCommandTag<`UE::NNEDenoiser::Private::FTransferFunctionTest::RunTest'::__l2::TSTR_NNETransferFunctionTest58>
            ::Get();
  if ((CpuChannel->Enabled < 0) || (RenderCommandsChannel->Enabled < 0)) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&pFVar10->SpecId,pFVar10->Name,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
               ,0x255);
    FCpuProfilerTrace::OutputBeginEvent(pFVar10->SpecId);
  }
  bVar8 = IsInRenderingThread();
  if (!bVar8) {
    if (GIsThreadedRendering == false) {
      bVar8 = IsInGameThread();
      if (bVar8) goto LAB_14eae33e1;
    }
    if (GMainThreadBlockedOnRenderThread != (TAtomic<bool>)0x0) {
      bVar8 = IsInGameThread();
      if (bVar8) {
        bVar8 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<2708370973442179152>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                           ,0x50,
                           "!GMainThreadBlockedOnRenderThread.Load(EMemoryOrder::Relaxed) || !IsInGameThread()"
                          );
        if (bVar8) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
    }
    if (GRenderCommandPipeMode == None) {
      local_res20.Prerequisites =
           (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
            *)0x0;
      TGraphTask<FRenderThreadCommandPipe::TRenderCommandTask<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>_>
      ::FConstructor::
      ConstructAndDispatchWhenReady<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>,FRenderCommandTag_const_&>
                (&local_res20,(TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)&local_68
                 ,(FRenderCommandTag *)param_1);
      if (local_68 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(local_68 + 6);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)*local_68)(local_68,1);
        }
      }
    }
    else {
      EnqueueAndLaunch(&Instance,param_1,pFVar10);
    }
    goto LAB_14eae35d5;
  }
LAB_14eae33e1:
  pTVar3 = (pFVar10->StatId).StatIdPtr;
  FVar16.Value = 0;
  bVar8 = false;
  bVar7 = false;
  local_58.ComparisonIndex.Value = 0;
  local_58.Number = 0;
  FVar14 = *(FName *)&pTVar3->Name;
  FVar15.Bits = (uint)FVar14.ComparisonIndex.Value;
  uVar9 = FVar14.Number;
  if ((FVar15.Bits == 0) && (uVar9 == 0)) {
LAB_14eae34bf:
    bVar5 = false;
    FVar14 = local_58;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10._s_0,(pTVar3->StatDescriptionAnsi).Ptr);
      bVar8 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res18.Bits = FVar15.Bits;
        local_res1c = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res18._s_0,(pTVar3->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                   ,0x266);
        bVar8 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14eae34bf;
    local_res10.Bits = FVar15.Bits;
    uStackX_14 = uVar9;
    local_58 = FVar14;
    FThreadStats::AddMessage(FVar14,CycleScopeStart);
    bVar5 = true;
    FVar16.Value = local_58.ComparisonIndex.Value;
  }
  pFVar11 = GetImmediateCommandList_ForRenderCommand();
  UE::Core::Private::Function::CheckCallable(*(void **)param_1);
  pcVar4 = *(code **)param_1;
  plVar13 = (longlong *)&param_1->field_0x10;
  if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
    plVar13 = *(longlong **)&param_1->field_0x28;
  }
  uVar12 = (**(code **)(*plVar13 + 8))();
  (*pcVar4)(uVar12,pFVar11);
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar5) && (FVar14 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this = TlsGetValue(FThreadStats::TlsSlot);
    if (this == (FThreadStats *)0x0) {
      this_00 = FThreadStatsPool::Get();
      this = FThreadStatsPool::GetFromPool(this_00);
    }
    if (this->bWaitForExplicitFlush < this->ScopeCount) {
      local_48.NameAndInfo.Number = FVar14.Number & 0xffff6fff | 0x6000;
      local_48.NameAndInfo.Index.Value = FVar16.Value;
      QueryPerformanceCounter(&local_60);
      local_48.StatData.Pad[4] = '\0';
      local_48.StatData.Pad[5] = '\0';
      local_48.StatData.Pad[6] = '\0';
      local_48.StatData.Pad[7] = '\0';
      local_48.StatData.Pad[0] = local_60.s.LowPart._0_1_;
      local_48.StatData.Pad[1] = local_60.s.LowPart._1_1_;
      local_48.StatData.Pad[2] = local_60.s.LowPart._2_1_;
      local_48.StatData.Pad[3] = local_60.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this,&local_48);
      piVar1 = &this->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this,false,false);
      }
    }
  }
LAB_14eae35d5:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// InternalConstructor<UNNEDenoiserAsset> @ 14eae4710

void __cdecl InternalConstructor<UNNEDenoiserAsset>(FObjectInitializer *param_1)

{
  UDataAsset *this;
  
  this = (UDataAsset *)param_1->Obj;
  if (this != (UDataAsset *)0x0) {
    UDataAsset::UDataAsset(this,param_1);
    this->_padding_ = (longlong)&___7UNNEDenoiserAsset__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    FUtf8String::Reset((FUtf8String *)&this[1]._padding_,0);
    this[1].NativeClass.Class.field0_0x0.DebugPtr = (UClass *)0x0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    FUtf8String::Reset((FUtf8String *)&this[2]._padding_,0);
    this[2]._padding_ = 0;
    this[3]._padding_ = 0;
    this[3]._padding_ = 0;
    this[3]._padding_ = 0;
    this[2].NativeClass.Class.field0_0x0.DebugPtr = (UClass *)0x0;
    FUtf8String::Reset((FUtf8String *)&this[3]._padding_,0);
    *(undefined4 *)&this[3]._padding_ = 0;
    this[3]._padding_ = 1;
    *(undefined4 *)((longlong)&this[3]._padding_ + 4) = 1;
  }
  return;
}

// InternalConstructor<UNNEDenoiserSettings> @ 14eae47d0

void __cdecl InternalConstructor<UNNEDenoiserSettings>(FObjectInitializer *param_1)

{
  undefined1 *this;
  undefined1 *puVar1;
  undefined1 *this_00;
  undefined1 *puVar2;
  UDeveloperSettingsBackedByCVars *this_01;
  ForAnyElementType FVar3;
  int iVar4;
  FObjectInitializer *pFVar5;
  size_t sVar6;
  FName FStackX_8;
  TStringView<wchar_t> TStack_78;
  FSoftObjectPath FStack_68;
  FSoftObjectPath FStack_48;
  
  this_01 = (UDeveloperSettingsBackedByCVars *)param_1->Obj;
  if (this_01 != (UDeveloperSettingsBackedByCVars *)0x0) {
    pFVar5 = FObjectInitializer::Get();
    UDeveloperSettingsBackedByCVars::UDeveloperSettingsBackedByCVars(this_01,pFVar5);
    this = &this_01[1].field_0x18;
    *(undefined ***)this_01 = &___7UNNEDenoiserSettings__6B_;
    puVar1 = &this_01[1].field_0x24;
    *(undefined8 *)this = 0;
    *(undefined4 *)&this_01[1].field_0x20 = 0;
    *(undefined4 *)puVar1 = 0;
    *(undefined8 *)(this_01 + 1) = 0;
    *(undefined8 *)&this_01[1].field_0x10 = 0;
    *(undefined8 *)&this_01[1].field_0x8 = 0;
    FUtf8String::Reset((FUtf8String *)this,0);
    this_00 = &this_01[2].field_0x8;
    *(undefined8 *)&this_01[1].field_0x28 = 0;
    *(undefined8 *)this_00 = 0;
    puVar2 = &this_01[2].field_0x14;
    *(undefined4 *)puVar2 = 0;
    *(undefined4 *)&this_01[2].field_0x10 = 0;
    *(undefined8 *)(this_01 + 2) = 0;
    *(undefined8 *)&this_01[1].field_0x30 = 0;
    FUtf8String::Reset((FUtf8String *)this_00,0);
    *(undefined4 *)&this_01[2].field_0x18 = 0xffffffff;
    *(undefined8 *)&this_01[2].field_0x20 = 0;
    *(undefined8 *)&this_01[2].field_0x28 = 0;
    FName::FName(&FStackX_8,L"Plugins");
    *(uint *)&this_01->field_0x28 = FStackX_8.ComparisonIndex.Value;
    *(uint *)&this_01->field_0x2c = FStackX_8.Number;
    FName::FName(&FStackX_8,L"NNE Denoiser");
    TStack_78.Size = 0x44;
    *(uint *)&this_01->field_0x30 = FStackX_8.ComparisonIndex.Value;
    *(uint *)&this_01->field_0x34 = FStackX_8.Number;
    TStack_78.DataPtr = L"/NNEDenoiser/NNED_Oidn2-3_Balanced_Alpha.NNED_Oidn2-3_Balanced_Alpha";
    FStack_68.AssetPath.PackageName.ComparisonIndex.Value = 0;
    FStack_68.AssetPath.PackageName.Number = 0;
    FStack_68.AssetPath.AssetName.ComparisonIndex.Value = 0;
    FStack_68.AssetPath.AssetName.Number = 0;
    FStack_68.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    FStack_68.SubPathString.Data.ArrayNum = 0;
    FStack_68.SubPathString.Data.ArrayMax = 0;
    FSoftObjectPath::SetPath(&FStack_68,&TStack_78);
    FVar3.Data = FStack_68.SubPathString.Data.AllocatorInstance.Data;
    *(undefined8 *)(this_01 + 1) = 0;
    *(uint *)&this_01[1].field_0x8 = FStack_68.AssetPath.PackageName.ComparisonIndex.Value;
    *(uint *)&this_01[1].field_0xc = FStack_68.AssetPath.PackageName.Number;
    *(uint *)&this_01[1].field_0x10 = FStack_68.AssetPath.AssetName.ComparisonIndex.Value;
    *(uint *)&this_01[1].field_0x14 = FStack_68.AssetPath.AssetName.Number;
    if ((FUtf8String *)this != &FStack_68.SubPathString) {
      iVar4 = FStack_68.SubPathString.Data.ArrayNum;
      sVar6 = (size_t)FStack_68.SubPathString.Data.ArrayNum;
      *(int *)&this_01[1].field_0x20 = FStack_68.SubPathString.Data.ArrayNum;
      if ((FStack_68.SubPathString.Data.ArrayNum == 0) && (*(int *)puVar1 == 0)) {
        *(undefined4 *)puVar1 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (1,1,FStack_68.SubPathString.Data.ArrayNum,*(int *)puVar1,
                   (ForAnyElementType *)this,FStack_68.SubPathString.Data.ArrayNum,(int *)puVar1);
        if (iVar4 != 0) {
          memcpy(*(void **)this,FVar3.Data,sVar6);
        }
      }
    }
    if (FStack_68.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_68.SubPathString.Data.AllocatorInstance.Data);
    }
    TStack_78.Size = 0x46;
    TStack_78.DataPtr = L"/NNEDenoiser/NNEDT_Oidn2-3_Balanced_Alpha.NNEDT_Oidn2-3_Balanced_Alpha";
    FStack_48.AssetPath.PackageName.ComparisonIndex.Value = 0;
    FStack_48.AssetPath.PackageName.Number = 0;
    FStack_48.AssetPath.AssetName.ComparisonIndex.Value = 0;
    FStack_48.AssetPath.AssetName.Number = 0;
    FStack_48.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    FStack_48.SubPathString.Data.ArrayNum = 0;
    FStack_48.SubPathString.Data.ArrayMax = 0;
    FSoftObjectPath::SetPath(&FStack_48,&TStack_78);
    FVar3.Data = FStack_48.SubPathString.Data.AllocatorInstance.Data;
    *(undefined8 *)&this_01[1].field_0x28 = 0;
    *(uint *)&this_01[1].field_0x30 = FStack_48.AssetPath.PackageName.ComparisonIndex.Value;
    *(uint *)&this_01[1].field_0x34 = FStack_48.AssetPath.PackageName.Number;
    *(uint *)&this_01[2].field_0x0 = FStack_48.AssetPath.AssetName.ComparisonIndex.Value;
    *(uint *)&this_01[2].field_0x4 = FStack_48.AssetPath.AssetName.Number;
    if ((FUtf8String *)this_00 != &FStack_48.SubPathString) {
      iVar4 = FStack_48.SubPathString.Data.ArrayNum;
      sVar6 = (size_t)FStack_48.SubPathString.Data.ArrayNum;
      *(int *)&this_01[2].field_0x10 = FStack_48.SubPathString.Data.ArrayNum;
      if ((FStack_48.SubPathString.Data.ArrayNum == 0) && (*(int *)puVar2 == 0)) {
        *(undefined4 *)puVar2 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (1,1,FStack_48.SubPathString.Data.ArrayNum,*(int *)puVar2,
                   (ForAnyElementType *)this_00,FStack_48.SubPathString.Data.ArrayNum,(int *)puVar2)
        ;
        if (iVar4 != 0) {
          memcpy(*(void **)this_00,FVar3.Data,sVar6);
        }
      }
    }
    if (FStack_48.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_48.SubPathString.Data.AllocatorInstance.Data);
    }
    return;
  }
  return;
}

// InternalConstructor<UNNEDenoiserTemporalAsset> @ 14eae47f0

void __cdecl InternalConstructor<UNNEDenoiserTemporalAsset>(FObjectInitializer *param_1)

{
  UDataAsset *this;
  
  this = (UDataAsset *)param_1->Obj;
  if (this != (UDataAsset *)0x0) {
    UDataAsset::UDataAsset(this,param_1);
    this->_padding_ = (longlong)&___7UNNEDenoiserTemporalAsset__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    FUtf8String::Reset((FUtf8String *)&this[1]._padding_,0);
    this[1].NativeClass.Class.field0_0x0.DebugPtr = (UClass *)0x0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    FUtf8String::Reset((FUtf8String *)&this[2]._padding_,0);
    this[2]._padding_ = 0;
    this[3]._padding_ = 0;
    this[3]._padding_ = 0;
    this[3]._padding_ = 0;
    this[2].NativeClass.Class.field0_0x0.DebugPtr = (UClass *)0x0;
    FUtf8String::Reset((FUtf8String *)&this[3]._padding_,0);
    *(undefined4 *)&this[3]._padding_ = 0;
    this[3]._padding_ = 1;
    *(undefined4 *)((longlong)&this[3]._padding_ + 4) = 1;
  }
  return;
}

// InternalVTableHelperCtorCaller<UNNEDenoiserAsset> @ 14eae48b0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UNNEDenoiserAsset>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UDataAsset *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UNNEDenoiserAsset::GetPrivateStaticClass();
  this = (UDataAsset *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UDataAsset *)0x0) {
    UDataAsset::UDataAsset(this,param_1);
    this->_padding_ = (longlong)&___7UNNEDenoiserAsset__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    FUtf8String::Reset((FUtf8String *)&this[1]._padding_,0);
    this[1].NativeClass.Class.field0_0x0.DebugPtr = (UClass *)0x0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    FUtf8String::Reset((FUtf8String *)&this[2]._padding_,0);
    this[2]._padding_ = 0;
    this[3]._padding_ = 0;
    this[3]._padding_ = 0;
    this[3]._padding_ = 0;
    this[2].NativeClass.Class.field0_0x0.DebugPtr = (UClass *)0x0;
    FUtf8String::Reset((FUtf8String *)&this[3]._padding_,0);
    this[3]._padding_ = 1;
    *(undefined4 *)&this[3]._padding_ = 0;
    *(undefined4 *)((longlong)&this[3]._padding_ + 4) = 1;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UNNEDenoiserSettings> @ 14eae49e0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UNNEDenoiserSettings>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UDeveloperSettingsBackedByCVars *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UNNEDenoiserSettings::GetPrivateStaticClass();
  this = (UDeveloperSettingsBackedByCVars *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UDeveloperSettingsBackedByCVars *)0x0) {
    UDeveloperSettingsBackedByCVars::UDeveloperSettingsBackedByCVars(this,param_1);
    *(undefined ***)this = &___7UNNEDenoiserSettings__6B_;
    *(undefined8 *)&this[1].field_0x18 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    FUtf8String::Reset((FUtf8String *)&this[1].field_0x18,0);
    *(undefined8 *)&this[1].field_0x28 = 0;
    *(undefined8 *)&this[2].field_0x8 = 0;
    *(undefined8 *)&this[2].field_0x10 = 0;
    *(undefined8 *)(this + 2) = 0;
    *(undefined8 *)&this[1].field_0x30 = 0;
    FUtf8String::Reset((FUtf8String *)&this[2].field_0x8,0);
    *(undefined4 *)&this[2].field_0x18 = 0xffffffff;
    *(undefined8 *)&this[2].field_0x20 = 0;
    *(undefined8 *)&this[2].field_0x28 = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UNNEDenoiserTemporalAsset> @ 14eae4ae0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UNNEDenoiserTemporalAsset>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UDataAsset *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UNNEDenoiserTemporalAsset::GetPrivateStaticClass();
  this = (UDataAsset *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UDataAsset *)0x0) {
    UDataAsset::UDataAsset(this,param_1);
    this->_padding_ = (longlong)&___7UNNEDenoiserTemporalAsset__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    FUtf8String::Reset((FUtf8String *)&this[1]._padding_,0);
    this[1].NativeClass.Class.field0_0x0.DebugPtr = (UClass *)0x0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    FUtf8String::Reset((FUtf8String *)&this[2]._padding_,0);
    this[2]._padding_ = 0;
    this[3]._padding_ = 0;
    this[3]._padding_ = 0;
    this[3]._padding_ = 0;
    this[2].NativeClass.Class.field0_0x0.DebugPtr = (UClass *)0x0;
    FUtf8String::Reset((FUtf8String *)&this[3]._padding_,0);
    this[3]._padding_ = 1;
    *(undefined4 *)&this[3]._padding_ = 0;
    *(undefined4 *)((longlong)&this[3]._padding_ + 4) = 1;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// MakeShared<UE::NNEDenoiser::Private::Oidn::FTransferFunction,1> @ 14eae5050

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

TSharedRef<UE::NNEDenoiser::Private::Oidn::FTransferFunction,1> * __cdecl
MakeShared<UE::NNEDenoiser::Private::Oidn::FTransferFunction,1>
          (TSharedRef<UE::NNEDenoiser::Private::Oidn::FTransferFunction,1> *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TSharedRef<UE::NNEDenoiser::Private::Oidn::FTransferFunction,1> *pTVar4;
  
  pTVar3 = operator_new(0x28);
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    __return_storage_ptr__->Object = (FTransferFunction *)0x10;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFTransferFunction_Oidn_Private_NNEDenoiser_UE___00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ = (longlong)&___7FTransferFunction_Oidn_Private_NNEDenoiser_UE__6B_;
    pTVar3[2]._padding_ = 0;
    pTVar3[1].WeakReferenceCount = (atomic<int>)0x4048a5ca;
    pTVar3[1].SharedReferenceCount = (atomic<int>)0x3ea34faa;
    __return_storage_ptr__->Object = (FTransferFunction *)(pTVar3 + 1);
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar3;
    if ((FTransferFunction *)(pTVar3 + 1) == (FTransferFunction *)0x0) {
      bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TSharedRef<UE::NNEDenoiser::Private::Oidn::FTransferFunction,1> *)(*pcVar1)();
        return pTVar4;
      }
    }
  }
  return __return_storage_ptr__;
}

// RemoveIf<TArray<FString,TSizedDefaultAllocator<32>_>,`UE::NNE::GetAllRuntimeNames<INNERuntimeCPU>'::__l2::<lambda_1>_> @ 14eae57e0

int __cdecl
Algo::
RemoveIf<TArray<FString,TSizedDefaultAllocator<32>_>,_UE::NNE::GetAllRuntimeNames<INNERuntimeCPU>_::__l2::<lambda_1>_>
          (TArray<FString,TSizedDefaultAllocator<32>_> *param_1,<lambda_1> param_2)

{
  FScriptContainerElement *pFVar1;
  bool bVar2;
  TWeakInterfacePtr<INNERuntimeCPU> *pTVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  TWeakInterfacePtr<INNERuntimeCPU> local_28;
  TWeakInterfacePtr<INNERuntimeCPU> local_18;
  
  pFVar1 = (param_1->AllocatorInstance).Data;
  pFVar5 = pFVar1 + (longlong)param_1->ArrayNum * 0x10;
  pFVar4 = pFVar1;
LAB_14eae5807:
  if (pFVar4 == pFVar5) {
LAB_14eae5885:
    return (int)((longlong)pFVar4 - (longlong)pFVar1 >> 4);
  }
  pTVar3 = UE::NNE::GetRuntime<INNERuntimeCPU>(&local_28,(FString *)pFVar4);
  if (pTVar3->InterfaceInstance != (INNERuntimeCPU *)0x0) {
    bVar2 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)pTVar3);
    if (bVar2) {
      pFVar4 = pFVar4 + 0x10;
      goto LAB_14eae5807;
    }
  }
  do {
    do {
      pFVar6 = pFVar5;
      pFVar5 = pFVar6 + -0x10;
      if (pFVar4 == pFVar5) goto LAB_14eae5885;
      pTVar3 = UE::NNE::GetRuntime<INNERuntimeCPU>(&local_18,(FString *)pFVar5);
    } while (pTVar3->InterfaceInstance == (INNERuntimeCPU *)0x0);
    bVar2 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)pTVar3);
  } while (!bVar2);
  if (*(void **)&pFVar4->field_0x0 != (void *)0x0) {
    FMemory::Free(*(void **)&pFVar4->field_0x0);
  }
  *(undefined8 *)&pFVar4->field_0x0 = *(undefined8 *)&pFVar5->field_0x0;
  *(undefined8 *)&pFVar5->field_0x0 = 0;
  *(undefined4 *)(pFVar4 + 8) = *(undefined4 *)(pFVar6 + -8);
  *(undefined4 *)(pFVar4 + 0xc) = *(undefined4 *)(pFVar6 + -4);
  pFVar4 = pFVar4 + 0x10;
  *(undefined8 *)(pFVar6 + -8) = 0;
  goto LAB_14eae5807;
}

// RemoveIf<TArray<FString,TSizedDefaultAllocator<32>_>,`UE::NNE::GetAllRuntimeNames<INNERuntimeGPU>'::__l2::<lambda_1>_> @ 14eae58b0

int __cdecl
Algo::
RemoveIf<TArray<FString,TSizedDefaultAllocator<32>_>,_UE::NNE::GetAllRuntimeNames<INNERuntimeGPU>_::__l2::<lambda_1>_>
          (TArray<FString,TSizedDefaultAllocator<32>_> *param_1,<lambda_1> param_2)

{
  FScriptContainerElement *pFVar1;
  bool bVar2;
  TWeakInterfacePtr<INNERuntimeGPU> *pTVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  TWeakInterfacePtr<INNERuntimeGPU> local_28;
  TWeakInterfacePtr<INNERuntimeGPU> local_18;
  
  pFVar1 = (param_1->AllocatorInstance).Data;
  pFVar5 = pFVar1 + (longlong)param_1->ArrayNum * 0x10;
  pFVar4 = pFVar1;
LAB_14eae58d7:
  if (pFVar4 == pFVar5) {
LAB_14eae5955:
    return (int)((longlong)pFVar4 - (longlong)pFVar1 >> 4);
  }
  pTVar3 = UE::NNE::GetRuntime<INNERuntimeGPU>(&local_28,(FString *)pFVar4);
  if (pTVar3->InterfaceInstance != (INNERuntimeGPU *)0x0) {
    bVar2 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)pTVar3);
    if (bVar2) {
      pFVar4 = pFVar4 + 0x10;
      goto LAB_14eae58d7;
    }
  }
  do {
    do {
      pFVar6 = pFVar5;
      pFVar5 = pFVar6 + -0x10;
      if (pFVar4 == pFVar5) goto LAB_14eae5955;
      pTVar3 = UE::NNE::GetRuntime<INNERuntimeGPU>(&local_18,(FString *)pFVar5);
    } while (pTVar3->InterfaceInstance == (INNERuntimeGPU *)0x0);
    bVar2 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)pTVar3);
  } while (!bVar2);
  if (*(void **)&pFVar4->field_0x0 != (void *)0x0) {
    FMemory::Free(*(void **)&pFVar4->field_0x0);
  }
  *(undefined8 *)&pFVar4->field_0x0 = *(undefined8 *)&pFVar5->field_0x0;
  *(undefined8 *)&pFVar5->field_0x0 = 0;
  *(undefined4 *)(pFVar4 + 8) = *(undefined4 *)(pFVar6 + -8);
  *(undefined4 *)(pFVar4 + 0xc) = *(undefined4 *)(pFVar6 + -4);
  pFVar4 = pFVar4 + 0x10;
  *(undefined8 *)(pFVar6 + -8) = 0;
  goto LAB_14eae58d7;
}

// RemoveIf<TArray<FString,TSizedDefaultAllocator<32>_>,`UE::NNE::GetAllRuntimeNames<INNERuntimeRDG>'::__l2::<lambda_1>_> @ 14eae5980

int __cdecl
Algo::
RemoveIf<TArray<FString,TSizedDefaultAllocator<32>_>,_UE::NNE::GetAllRuntimeNames<INNERuntimeRDG>_::__l2::<lambda_1>_>
          (TArray<FString,TSizedDefaultAllocator<32>_> *param_1,<lambda_1> param_2)

{
  FScriptContainerElement *pFVar1;
  bool bVar2;
  TWeakInterfacePtr<INNERuntimeRDG> *pTVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  TWeakInterfacePtr<INNERuntimeRDG> local_28;
  TWeakInterfacePtr<INNERuntimeRDG> local_18;
  
  pFVar1 = (param_1->AllocatorInstance).Data;
  pFVar5 = pFVar1 + (longlong)param_1->ArrayNum * 0x10;
  pFVar4 = pFVar1;
LAB_14eae59a7:
  if (pFVar4 == pFVar5) {
LAB_14eae5a25:
    return (int)((longlong)pFVar4 - (longlong)pFVar1 >> 4);
  }
  pTVar3 = UE::NNE::GetRuntime<INNERuntimeRDG>(&local_28,(FString *)pFVar4);
  if (pTVar3->InterfaceInstance != (INNERuntimeRDG *)0x0) {
    bVar2 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)pTVar3);
    if (bVar2) {
      pFVar4 = pFVar4 + 0x10;
      goto LAB_14eae59a7;
    }
  }
  do {
    do {
      pFVar6 = pFVar5;
      pFVar5 = pFVar6 + -0x10;
      if (pFVar4 == pFVar5) goto LAB_14eae5a25;
      pTVar3 = UE::NNE::GetRuntime<INNERuntimeRDG>(&local_18,(FString *)pFVar5);
    } while (pTVar3->InterfaceInstance == (INNERuntimeRDG *)0x0);
    bVar2 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)pTVar3);
  } while (!bVar2);
  if (*(void **)&pFVar4->field_0x0 != (void *)0x0) {
    FMemory::Free(*(void **)&pFVar4->field_0x0);
  }
  *(undefined8 *)&pFVar4->field_0x0 = *(undefined8 *)&pFVar5->field_0x0;
  *(undefined8 *)&pFVar5->field_0x0 = 0;
  *(undefined4 *)(pFVar4 + 8) = *(undefined4 *)(pFVar6 + -8);
  *(undefined4 *)(pFVar4 + 0xc) = *(undefined4 *)(pFVar6 + -4);
  pFVar4 = pFVar4 + 0x10;
  *(undefined8 *)(pFVar6 + -8) = 0;
  goto LAB_14eae59a7;
}

// StaticEnum<enum_EDenoiserRuntimeType> @ 14eae5a70

UEnum * __cdecl StaticEnum<enum_EDenoiserRuntimeType>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EDenoiserRuntimeType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_NNEDenoiser();
    Z_Registration_Info_UEnum_EDenoiserRuntimeType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_NNEDenoiser_EDenoiserRuntimeType,(UObject *)pUVar1,
                       L"EDenoiserRuntimeType");
  }
  return Z_Registration_Info_UEnum_EDenoiserRuntimeType.OuterSingleton;
}

// StaticEnum<enum_EInputResourceName> @ 14eae5ab0

UEnum * __cdecl StaticEnum<enum_EInputResourceName>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EInputResourceName.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_NNEDenoiser();
    Z_Registration_Info_UEnum_EInputResourceName.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_NNEDenoiser_EInputResourceName,(UObject *)pUVar1,
                       L"EInputResourceName");
  }
  return Z_Registration_Info_UEnum_EInputResourceName.OuterSingleton;
}

// StaticEnum<enum_EOutputResourceName> @ 14eae5af0

UEnum * __cdecl StaticEnum<enum_EOutputResourceName>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EOutputResourceName.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_NNEDenoiser();
    Z_Registration_Info_UEnum_EOutputResourceName.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_NNEDenoiser_EOutputResourceName,(UObject *)pUVar1,
                       L"EOutputResourceName");
  }
  return Z_Registration_Info_UEnum_EOutputResourceName.OuterSingleton;
}

// StaticEnum<enum_EResourceName> @ 14eae5b30

UEnum * __cdecl StaticEnum<enum_EResourceName>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EResourceName.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_NNEDenoiser();
    Z_Registration_Info_UEnum_EResourceName.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_NNEDenoiser_EResourceName,(UObject *)pUVar1,
                       L"EResourceName");
  }
  return Z_Registration_Info_UEnum_EResourceName.OuterSingleton;
}

// StaticEnum<enum_ETemporalInputResourceName> @ 14eae5b70

UEnum * __cdecl StaticEnum<enum_ETemporalInputResourceName>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ETemporalInputResourceName.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_NNEDenoiser();
    Z_Registration_Info_UEnum_ETemporalInputResourceName.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_NNEDenoiser_ETemporalInputResourceName,(UObject *)pUVar1,
                       L"ETemporalInputResourceName");
  }
  return Z_Registration_Info_UEnum_ETemporalInputResourceName.OuterSingleton;
}

// StaticEnum<enum_ETemporalOutputResourceName> @ 14eae5bb0

UEnum * __cdecl StaticEnum<enum_ETemporalOutputResourceName>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ETemporalOutputResourceName.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_NNEDenoiser();
    Z_Registration_Info_UEnum_ETemporalOutputResourceName.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_NNEDenoiser_ETemporalOutputResourceName,(UObject *)pUVar1,
                       L"ETemporalOutputResourceName");
  }
  return Z_Registration_Info_UEnum_ETemporalOutputResourceName.OuterSingleton;
}

// ~TFunction_OwnedObject<`UE::NNEDenoiser::Private::FAutoExposureTest::RunTest'::__l2::<lambda_1>,1,1> @ 14eae6770

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::NNEDenoiser::Private::FAutoExposureTest::RunTest'::__l2::<lambda_1>,1,1>
::
~TFunction_OwnedObject<_UE::NNEDenoiser::Private::FAutoExposureTest::RunTest_::__l2::<lambda_1>,1,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::NNEDenoiser::Private::FAutoExposureTest::RunTest'::`2'::<lambda_1>,1,1>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UE::NNEDenoiser::Private::FTransferFunctionTest::RunTest'::__l2::<lambda_1>,1,1> @ 14eae6790

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::NNEDenoiser::Private::FTransferFunctionTest::RunTest'::__l2::<lambda_1>,1,1>
::
~TFunction_OwnedObject<_UE::NNEDenoiser::Private::FTransferFunctionTest::RunTest_::__l2::<lambda_1>,1,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::NNEDenoiser::Private::FTransferFunctionTest::RunTest'::`2'::<lambda_1>,1,1>
        ::_vftable_;
  *(undefined ***)((longlong)this + 0x20) = &___7ITransferFunction_Private_NNEDenoiser_UE__6B_;
  return;
}

// operator() @ 14eae9850

void __thiscall
``UE::NNEDenoiser::Private::FAutoExposureTest::RunTest'::__l2::<lambda_1>::operator()'::__l6::
<lambda_1>::operator()(void *this,FRHICommandListImmediate *param_1)

{
  longlong *plVar1;
  FRDGResource *this_00;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  
  FGenericPlatformMisc::BeginNamedEvent(&FColor::Magenta,"FAutoExposureTest::Upload");
  bVar4 = -1 < CpuChannel->Enabled;
  if (bVar4) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId73,"FAutoExposureTest::Upload",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\NNE\\NNEDenoiser\\Source\\NNEDenoiser\\Private\\NNEDenoiserUnitTests.cpp"
               ,0x49);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId73);
  }
  plVar1 = *(longlong **)((longlong)this + 8);
  if ((*plVar1 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Texture",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMacros.h"
                         ,0x1c7,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  this_00 = (FRDGResource *)*plVar1;
  FRDGResource::ValidateRHIAccess(this_00);
  UE::NNEDenoiser::Private::CopyTextureFromCPUToGPU<FLinearColor>
            (param_1,*(TArray<FLinearColor,TSizedDefaultAllocator<32>_> **)this,
             (TIntPoint<int>)0x44000000780,(FRHITexture *)this_00->ResourceRHI);
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FGenericPlatformMisc::EndNamedEvent();
  return;
}

// operator() @ 14eae9950

void __thiscall
``UE::NNEDenoiser::Private::FTransferFunctionTest::RunTest'::__l2::<lambda_1>::operator()'::__l6::
<lambda_1>::operator()(void *this,FRHICommandListImmediate *param_1)

{
  longlong *plVar1;
  FRDGResource *this_00;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  
  FGenericPlatformMisc::BeginNamedEvent(&FColor::Magenta,"FTransferFunctionTest::UploadInput");
  bVar4 = -1 < CpuChannel->Enabled;
  if (bVar4) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId80,"FTransferFunctionTest::UploadInput",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\NNE\\NNEDenoiser\\Source\\NNEDenoiser\\Private\\NNEDenoiserUnitTestOidn.cpp"
               ,0x50);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId80);
  }
  plVar1 = *(longlong **)((longlong)this + 8);
  if ((*plVar1 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Texture",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMacros.h"
                         ,0x1c7,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  this_00 = (FRDGResource *)*plVar1;
  FRDGResource::ValidateRHIAccess(this_00);
  UE::NNEDenoiser::Private::CopyTextureFromCPUToGPU<FLinearColor>
            (param_1,*(TArray<FLinearColor,TSizedDefaultAllocator<32>_> **)this,
             (TIntPoint<int>)0x44000000780,(FRHITexture *)this_00->ResourceRHI);
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FGenericPlatformMisc::EndNamedEvent();
  return;
}

// operator() @ 14eaea400

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
``UE::NNEDenoiser::Private::FAutoExposureTest::RunTest'::__l2::<lambda_1>::operator()'::__l7::
<lambda_2>::operator()(void *this,FRHICommandListImmediate *param_1)

{
  undefined8 *puVar1;
  longlong *plVar2;
  FRDGResource *this_00;
  FRHIBuffer *pFVar3;
  code *pcVar4;
  bool bVar5;
  FName *pFVar6;
  undefined8 *puVar7;
  longlong lVar8;
  undefined1 *puVar9;
  bool bVar10;
  undefined1 auStack_c8 [32];
  FName local_a8 [2];
  FRHIGPUBufferReadback local_98;
  undefined1 local_40 [8];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_c8;
  FGenericPlatformMisc::BeginNamedEvent(&FColor::Magenta,"FAutoExposureTest::Download");
  bVar10 = -1 < CpuChannel->Enabled;
  if (bVar10) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId91,"FAutoExposureTest::Download",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\NNE\\NNEDenoiser\\Source\\NNEDenoiser\\Private\\NNEDenoiserUnitTests.cpp"
               ,0x5b);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId91);
  }
  puVar1 = *(undefined8 **)this;
  plVar2 = *(longlong **)((longlong)this + 8);
  if ((*plVar2 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Buffer",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMacros.h"
                         ,0x183,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  this_00 = (FRDGResource *)*plVar2;
  FRDGResource::ValidateRHIAccess(this_00);
  pFVar3 = (FRHIBuffer *)this_00->ResourceRHI;
  FGenericPlatformMisc::BeginNamedEvent(&FColor::Magenta,"NNEDenoiser.CopyBufferFromGPUToCPU");
  bVar5 = -1 < CpuChannel->Enabled;
  if (bVar5) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`void___cdecl_UE::NNEDenoiser::Private::CopyBufferFromGPUToCPU<float>(FRHICommandListImmediate&___ptr64,FRHIBuffer*___ptr64,int,TArray<float,TSizedDefaultAllocator<32>_>&___ptr64)'
                ::__l2::__CpuProfilerEventSpecId94,"NNEDenoiser.CopyBufferFromGPUToCPU",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\NNE\\NNEDenoiser\\Source\\NNEDenoiser\\Private\\NNEDenoiserUtils.h"
               ,0x5e);
    FCpuProfilerTrace::OutputBeginEvent
              (`void___cdecl_UE::NNEDenoiser::Private::CopyBufferFromGPUToCPU<float>(FRHICommandListImmediate&___ptr64,FRHIBuffer*___ptr64,int,TArray<float,TSizedDefaultAllocator<32>_>&___ptr64)'
               ::__l2::__CpuProfilerEventSpecId94);
  }
  pFVar6 = ::FName::FName(local_a8,L"NNEDenoiser.CopyBufferFromGPUToCPU");
  FRHIGPUBufferReadback::FRHIGPUBufferReadback(&local_98,*pFVar6);
  lVar8 = 8;
  FRHIGPUBufferReadback::EnqueueCopy(&local_98,(FRHICommandList *)param_1,pFVar3,8);
  FRHICommandListImmediate::SubmitAndBlockUntilGPUIdle(param_1);
  puVar7 = FRHIGPUBufferReadback::Lock(&local_98,8);
  *(undefined8 *)*puVar1 = *puVar7;
  FRHIGPUBufferReadback::Unlock(&local_98);
  puVar9 = local_40;
  do {
    puVar1 = (undefined8 *)(puVar9 + -8);
    puVar9 = puVar9 + -8;
    lVar8 = lVar8 + -1;
    if ((FRHIResource *)*puVar1 != (FRHIResource *)0x0) {
      FRHIResource::Release((FRHIResource *)*puVar1);
    }
  } while (lVar8 != 0);
  local_98._padding_ = (longlong)&___7FRHIGPUMemoryReadback__6B_;
  if ((FRHIResource *)local_98._padding_ != (FRHIResource *)0x0) {
    FRHIResource::Release((FRHIResource *)local_98._padding_);
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FGenericPlatformMisc::EndNamedEvent();
  if (bVar10) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FGenericPlatformMisc::EndNamedEvent();
  return;
}

// operator() @ 14eaea610

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
``UE::NNEDenoiser::Private::FTransferFunctionTest::RunTest'::__l2::<lambda_1>::operator()'::__l7::
<lambda_2>::operator()(void *this,FRHICommandListImmediate *param_1)

{
  longlong *plVar1;
  FRDGResource *this_00;
  FRHIBuffer *pFVar2;
  undefined8 *puVar3;
  code *pcVar4;
  bool bVar5;
  undefined8 *puVar6;
  bool bVar7;
  
  FGenericPlatformMisc::BeginNamedEvent(&FColor::Magenta,"FTransferFunctionTest::UploadScale");
  bVar7 = -1 < CpuChannel->Enabled;
  if (bVar7) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId96,"FTransferFunctionTest::UploadScale",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\NNE\\NNEDenoiser\\Source\\NNEDenoiser\\Private\\NNEDenoiserUnitTestOidn.cpp"
               ,0x60);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId96);
  }
  plVar1 = *(longlong **)((longlong)this + 8);
  if ((*plVar1 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Buffer",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMacros.h"
                         ,0x183,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  this_00 = (FRDGResource *)*plVar1;
  FRDGResource::ValidateRHIAccess(this_00);
  pFVar2 = (FRHIBuffer *)this_00->ResourceRHI;
  puVar3 = *(undefined8 **)this;
  FGenericPlatformMisc::BeginNamedEvent(&FColor::Magenta,"NNEDenoiser.CopyBufferFromCPUToGPU");
  bVar5 = -1 < CpuChannel->Enabled;
  if (bVar5) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`void___cdecl_UE::NNEDenoiser::Private::CopyBufferFromCPUToGPU<float>(FRHICommandListImmediate&___ptr64,TArray<float,TSizedDefaultAllocator<32>_>_const&___ptr64,int,FRHIBuffer*___ptr64)'
                ::__l2::__CpuProfilerEventSpecId114,"NNEDenoiser.CopyBufferFromCPUToGPU",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\NNE\\NNEDenoiser\\Source\\NNEDenoiser\\Private\\NNEDenoiserUtils.h"
               ,0x72);
    FCpuProfilerTrace::OutputBeginEvent
              (`void___cdecl_UE::NNEDenoiser::Private::CopyBufferFromCPUToGPU<float>(FRHICommandListImmediate&___ptr64,TArray<float,TSizedDefaultAllocator<32>_>_const&___ptr64,int,FRHIBuffer*___ptr64)'
               ::__l2::__CpuProfilerEventSpecId114);
  }
  puVar6 = FRHICommandListBase::LockBuffer((FRHICommandListBase *)param_1,pFVar2,0,8,RLM_WriteOnly);
  *puVar6 = *(undefined8 *)*puVar3;
  FRHICommandListBase::UnlockBuffer((FRHICommandListBase *)param_1,pFVar2);
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FGenericPlatformMisc::EndNamedEvent();
  if (bVar7) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FGenericPlatformMisc::EndNamedEvent();
  return;
}

// operator() @ 14eaea8d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
``UE::NNEDenoiser::Private::FTransferFunctionTest::RunTest'::__l2::<lambda_1>::operator()'::__l8::
<lambda_3>::operator()(void *this,FRHICommandListImmediate *param_1)

{
  undefined8 *puVar1;
  longlong *plVar2;
  FRDGResource *this_00;
  FRHITexture *pFVar3;
  code *pcVar4;
  bool bVar5;
  FName *pFVar6;
  void *_Src;
  void *_Dst;
  longlong lVar7;
  undefined1 *puVar8;
  bool bVar9;
  undefined1 auStackY_e8 [32];
  int local_b8;
  TIntVector3<int>_u_0 local_b4;
  FName local_a0;
  FRHIGPUTextureReadback local_98;
  undefined1 local_40 [8];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_e8;
  FGenericPlatformMisc::BeginNamedEvent(&FColor::Magenta,"FTransferFunctionTest::Download");
  bVar9 = -1 < CpuChannel->Enabled;
  if (bVar9) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId116,"FTransferFunctionTest::Download",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\NNE\\NNEDenoiser\\Source\\NNEDenoiser\\Private\\NNEDenoiserUnitTestOidn.cpp"
               ,0x74);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId116);
  }
  puVar1 = *(undefined8 **)this;
  lVar7 = 0x440;
  plVar2 = *(longlong **)((longlong)this + 0x10);
  if ((*plVar2 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Texture",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMacros.h"
                         ,0x1c7,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  this_00 = (FRDGResource *)*plVar2;
  FRDGResource::ValidateRHIAccess(this_00);
  pFVar3 = (FRHITexture *)this_00->ResourceRHI;
  FGenericPlatformMisc::BeginNamedEvent(&FColor::Magenta,"NNEDenoiser.CopyTextureFromGPUToCPU");
  bVar5 = -1 < CpuChannel->Enabled;
  if (bVar5) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`void___cdecl_UE::NNEDenoiser::Private::CopyTextureFromGPUToCPU<FLinearColor>(FRHICommandListImmediate&___ptr64,FRHITexture*___ptr64,UE::Math::TIntPoint<int>,TArray<FLinearColor,TSizedDefaultAllocator<32>_>&___ptr64)'
                ::__l2::__CpuProfilerEventSpecId56,"NNEDenoiser.CopyTextureFromGPUToCPU",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\NNE\\NNEDenoiser\\Source\\NNEDenoiser\\Private\\NNEDenoiserUtils.h"
               ,0x38);
    FCpuProfilerTrace::OutputBeginEvent
              (`void___cdecl_UE::NNEDenoiser::Private::CopyTextureFromGPUToCPU<FLinearColor>(FRHICommandListImmediate&___ptr64,FRHITexture*___ptr64,UE::Math::TIntPoint<int>,TArray<FLinearColor,TSizedDefaultAllocator<32>_>&___ptr64)'
               ::__l2::__CpuProfilerEventSpecId56);
  }
  pFVar6 = ::FName::FName(&local_a0,L"NNEDenoiser.CopyTextureFromGPUToCPU");
  FRHIGPUTextureReadback::FRHIGPUTextureReadback(&local_98,*pFVar6);
  local_b4._s_0.X = 0x780;
  local_b4._s_0.Y = 0x440;
  local_b4._s_0.Z = 1;
  FRHIGPUTextureReadback::EnqueueCopy
            (&local_98,(FRHICommandList *)param_1,pFVar3,&UE::Math::TIntVector3<int>::ZeroValue,0,
             (TIntVector3<int> *)&local_b4._s_0);
  FRHICommandListImmediate::SubmitAndBlockUntilGPUIdle(param_1);
  local_b8 = 0;
  _Src = FRHIGPUTextureReadback::Lock(&local_98,&local_b8,(int *)0x0);
  _Dst = (void *)*puVar1;
  do {
    memcpy(_Dst,_Src,0x7800);
    _Dst = (void *)((longlong)_Dst + 0x7800);
    _Src = (void *)((longlong)_Src + (longlong)local_b8 * 0x10);
    lVar7 = lVar7 + -1;
  } while (lVar7 != 0);
  FRHIGPUTextureReadback::Unlock(&local_98);
  puVar8 = local_40;
  lVar7 = 8;
  do {
    puVar1 = (undefined8 *)(puVar8 + -8);
    puVar8 = puVar8 + -8;
    lVar7 = lVar7 + -1;
    if ((FRHIResource *)*puVar1 != (FRHIResource *)0x0) {
      FRHIResource::Release((FRHIResource *)*puVar1);
    }
  } while (lVar7 != 0);
  local_98._padding_ = (longlong)&___7FRHIGPUMemoryReadback__6B_;
  if ((FRHIResource *)local_98._padding_ != (FRHIResource *)0x0) {
    FRHIResource::Release((FRHIResource *)local_98._padding_);
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FGenericPlatformMisc::EndNamedEvent();
  if (bVar9) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FGenericPlatformMisc::EndNamedEvent();
  return;
}

// `scalar_deleting_destructor' @ 14eaeac10

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FNNEDenoiserModule::StartupModule'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14eaeac40

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::NNEDenoiser::Private::FAutoExposureTest::RunTest'::__l2::<lambda_1>,1,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::NNEDenoiser::Private::FAutoExposureTest::RunTest'::`2'::<lambda_1>,1,1>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14eaeac80

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::NNEDenoiser::Private::FTransferFunctionTest::RunTest'::__l2::<lambda_1>,1,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::NNEDenoiser::Private::FTransferFunctionTest::RunTest'::`2'::<lambda_1>,1,1>
        ::_vftable_;
  *(undefined ***)((longlong)this + 0x20) = &___7ITransferFunction_Private_NNEDenoiser_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14eaeacc0

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::NNEDenoiser::Private::Oidn::FTransferFunction,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<UE::NNEDenoiser::Private::Oidn::FTransferFunction,1> *this,
          uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14eaead00

void * __thiscall
FRDGAllocator::TObject<UE::NNEDenoiser::Private::FAutoExposureTestDownloadParameters>::
_scalar_deleting_destructor_
          (TObject<UE::NNEDenoiser::Private::FAutoExposureTestDownloadParameters> *this,uint param_1
          )

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14eaead30

void * __thiscall
FRDGAllocator::TObject<UE::NNEDenoiser::Private::FAutoExposureTestUploadParameters>::
_scalar_deleting_destructor_
          (TObject<UE::NNEDenoiser::Private::FAutoExposureTestUploadParameters> *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14eaead60

void * __thiscall
FRDGAllocator::TObject<FNNEDenoiserModelInstanceCPUTextureParameters>::_scalar_deleting_destructor_
          (TObject<FNNEDenoiserModelInstanceCPUTextureParameters> *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14eaead90

void * __thiscall
FRDGAllocator::TObject<FNNEDenoiserModelInstanceGPUTextureParameters>::_scalar_deleting_destructor_
          (TObject<FNNEDenoiserModelInstanceGPUTextureParameters> *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14eaeadc0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void * __thiscall
FRDGAllocator::TObject<UE::NNEDenoiserShaders::Internal::FAutoExposureDownsampleCS::FParameters>::
_scalar_deleting_destructor_
          (TObject<UE::NNEDenoiserShaders::Internal::FAutoExposureDownsampleCS::FParameters> *this,
          uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14eaeadf0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void * __thiscall
FRDGAllocator::TObject<UE::NNEDenoiserShaders::Internal::FAutoExposureReduceCS::FParameters>::
_scalar_deleting_destructor_
          (TObject<UE::NNEDenoiserShaders::Internal::FAutoExposureReduceCS::FParameters> *this,
          uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14eaeae20

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void * __thiscall
FRDGAllocator::TObject<UE::NNEDenoiserShaders::Internal::FAutoExposureReduceFinalCS::FParameters>::
_scalar_deleting_destructor_
          (TObject<UE::NNEDenoiserShaders::Internal::FAutoExposureReduceFinalCS::FParameters> *this,
          uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14eaeae50

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void * __thiscall
FRDGAllocator::TObject<UE::NNEDenoiserShaders::Internal::FBufferTextureMappedCopyCS::FParameters>::
_scalar_deleting_destructor_
          (TObject<UE::NNEDenoiserShaders::Internal::FBufferTextureMappedCopyCS::FParameters> *this,
          uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14eaeae80

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void * __thiscall
FRDGAllocator::TObject<UE::NNEDenoiserShaders::Internal::FDefaultIOProcessCS::FParameters>::
_scalar_deleting_destructor_
          (TObject<UE::NNEDenoiserShaders::Internal::FDefaultIOProcessCS::FParameters> *this,
          uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14eaeaeb0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void * __thiscall
FRDGAllocator::TObject<UE::NNEDenoiserShaders::Internal::FTextureBufferMappedCopyCS::FParameters>::
_scalar_deleting_destructor_
          (TObject<UE::NNEDenoiserShaders::Internal::FTextureBufferMappedCopyCS::FParameters> *this,
          uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14eaeaee0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void * __thiscall
FRDGAllocator::TObject<UE::NNEDenoiserShaders::Internal::FTransferFunctionOidnCS::FParameters>::
_scalar_deleting_destructor_
          (TObject<UE::NNEDenoiserShaders::Internal::FTransferFunctionOidnCS::FParameters> *this,
          uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14eaeaf10

void * __thiscall
FRDGAllocator::TObject<UE::NNEDenoiser::Private::FTransferFunctionTestDownloadParameters>::
_scalar_deleting_destructor_
          (TObject<UE::NNEDenoiser::Private::FTransferFunctionTestDownloadParameters> *this,
          uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14eaeaf40

void * __thiscall
FRDGAllocator::TObject<UE::NNEDenoiser::Private::FTransferFunctionTestUploadBufferParameters>::
_scalar_deleting_destructor_
          (TObject<UE::NNEDenoiser::Private::FTransferFunctionTestUploadBufferParameters> *this,
          uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14eaeaf70

void * __thiscall
FRDGAllocator::TObject<UE::NNEDenoiser::Private::FTransferFunctionTestUploadTextureParameters>::
_scalar_deleting_destructor_
          (TObject<UE::NNEDenoiser::Private::FTransferFunctionTestUploadTextureParameters> *this,
          uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14eaeafa0

void * __thiscall
TRDGLambdaPass<UE::NNEDenoiser::Private::FAutoExposureTestDownloadParameters,``UE::NNEDenoiser::Private::FAutoExposureTest::RunTest'::__l2::<lambda_1>::operator()'::__l7::<lambda_2>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if (*(FRHIResource **)((longlong)this + 0x38) != (FRHIResource *)0x0) {
    FRHIResource::Release(*(FRHIResource **)((longlong)this + 0x38));
  }
  if (*(void **)((longlong)this + 0x20) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x20));
  }
  if (*(void **)((longlong)this + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 8));
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x198);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14eaeb000

void * __thiscall
TRDGLambdaPass<UE::NNEDenoiser::Private::FAutoExposureTestUploadParameters,``UE::NNEDenoiser::Private::FAutoExposureTest::RunTest'::__l2::<lambda_1>::operator()'::__l6::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if (*(FRHIResource **)((longlong)this + 0x38) != (FRHIResource *)0x0) {
    FRHIResource::Release(*(FRHIResource **)((longlong)this + 0x38));
  }
  if (*(void **)((longlong)this + 0x20) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x20));
  }
  if (*(void **)((longlong)this + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 8));
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x198);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14eaeb060

void * __thiscall
TRDGLambdaPass<FNNEDenoiserModelInstanceCPUTextureParameters,`UE::NNEDenoiser::Private::FModelInstanceCPU::EnqueueRDG'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if (*(FRHIResource **)((longlong)this + 0x38) != (FRHIResource *)0x0) {
    FRHIResource::Release(*(FRHIResource **)((longlong)this + 0x38));
  }
  if (*(void **)((longlong)this + 0x20) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x20));
  }
  if (*(void **)((longlong)this + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 8));
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x198);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14eaeb0c0

void * __thiscall
TRDGLambdaPass<FNNEDenoiserModelInstanceGPUTextureParameters,`UE::NNEDenoiser::Private::FModelInstanceGPU::EnqueueRDG'::__l2::<lambda_2>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if (*(FRHIResource **)((longlong)this + 0x38) != (FRHIResource *)0x0) {
    FRHIResource::Release(*(FRHIResource **)((longlong)this + 0x38));
  }
  if (*(void **)((longlong)this + 0x20) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x20));
  }
  if (*(void **)((longlong)this + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 8));
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x198);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14eaeb120

void * __thiscall
TRDGLambdaPass<UE::NNEDenoiser::Private::FTransferFunctionTestDownloadParameters,``UE::NNEDenoiser::Private::FTransferFunctionTest::RunTest'::__l2::<lambda_1>::operator()'::__l8::<lambda_3>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if (*(FRHIResource **)((longlong)this + 0x38) != (FRHIResource *)0x0) {
    FRHIResource::Release(*(FRHIResource **)((longlong)this + 0x38));
  }
  if (*(void **)((longlong)this + 0x20) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x20));
  }
  if (*(void **)((longlong)this + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 8));
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x1a0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14eaeb180

void * __thiscall
TRDGLambdaPass<UE::NNEDenoiser::Private::FTransferFunctionTestUploadBufferParameters,``UE::NNEDenoiser::Private::FTransferFunctionTest::RunTest'::__l2::<lambda_1>::operator()'::__l7::<lambda_2>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if (*(FRHIResource **)((longlong)this + 0x38) != (FRHIResource *)0x0) {
    FRHIResource::Release(*(FRHIResource **)((longlong)this + 0x38));
  }
  if (*(void **)((longlong)this + 0x20) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x20));
  }
  if (*(void **)((longlong)this + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 8));
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x198);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14eaeb1e0

void * __thiscall
TRDGLambdaPass<UE::NNEDenoiser::Private::FTransferFunctionTestUploadTextureParameters,``UE::NNEDenoiser::Private::FTransferFunctionTest::RunTest'::__l2::<lambda_1>::operator()'::__l6::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if (*(FRHIResource **)((longlong)this + 0x38) != (FRHIResource *)0x0) {
    FRHIResource::Release(*(FRHIResource **)((longlong)this + 0x38));
  }
  if (*(void **)((longlong)this + 0x20) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x20));
  }
  if (*(void **)((longlong)this + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 8));
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x198);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14eaeb240

void * __thiscall
TRDGLambdaPass<void,`FComputeShaderUtils::AddPass<UE::NNEDenoiserShaders::Internal::FAutoExposureDownsampleCS>'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if (*(FRHIResource **)((longlong)this + 0x38) != (FRHIResource *)0x0) {
    FRHIResource::Release(*(FRHIResource **)((longlong)this + 0x38));
  }
  if (*(void **)((longlong)this + 0x20) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x20));
  }
  if (*(void **)((longlong)this + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 8));
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x1b8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14eaeb2a0

void * __thiscall
TRDGLambdaPass<void,`FComputeShaderUtils::AddPass<UE::NNEDenoiserShaders::Internal::FAutoExposureReduceCS>'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if (*(FRHIResource **)((longlong)this + 0x38) != (FRHIResource *)0x0) {
    FRHIResource::Release(*(FRHIResource **)((longlong)this + 0x38));
  }
  if (*(void **)((longlong)this + 0x20) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x20));
  }
  if (*(void **)((longlong)this + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 8));
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x1b8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14eaeb300

void * __thiscall
TRDGLambdaPass<void,`FComputeShaderUtils::AddPass<UE::NNEDenoiserShaders::Internal::FAutoExposureReduceFinalCS>'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if (*(FRHIResource **)((longlong)this + 0x38) != (FRHIResource *)0x0) {
    FRHIResource::Release(*(FRHIResource **)((longlong)this + 0x38));
  }
  if (*(void **)((longlong)this + 0x20) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x20));
  }
  if (*(void **)((longlong)this + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 8));
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x1b8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14eaeb360

void * __thiscall
TRDGLambdaPass<void,`FComputeShaderUtils::AddPass<UE::NNEDenoiserShaders::Internal::FBufferTextureMappedCopyCS>'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if (*(FRHIResource **)((longlong)this + 0x38) != (FRHIResource *)0x0) {
    FRHIResource::Release(*(FRHIResource **)((longlong)this + 0x38));
  }
  if (*(void **)((longlong)this + 0x20) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x20));
  }
  if (*(void **)((longlong)this + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 8));
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x1b8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14eaeb3c0

void * __thiscall
TRDGLambdaPass<void,`FComputeShaderUtils::AddPass<UE::NNEDenoiserShaders::Internal::FDefaultIOProcessCS>'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if (*(FRHIResource **)((longlong)this + 0x38) != (FRHIResource *)0x0) {
    FRHIResource::Release(*(FRHIResource **)((longlong)this + 0x38));
  }
  if (*(void **)((longlong)this + 0x20) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x20));
  }
  if (*(void **)((longlong)this + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 8));
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x1b8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14eaeb420

void * __thiscall
TRDGLambdaPass<void,`FComputeShaderUtils::AddPass<UE::NNEDenoiserShaders::Internal::FTextureBufferMappedCopyCS>'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if (*(FRHIResource **)((longlong)this + 0x38) != (FRHIResource *)0x0) {
    FRHIResource::Release(*(FRHIResource **)((longlong)this + 0x38));
  }
  if (*(void **)((longlong)this + 0x20) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x20));
  }
  if (*(void **)((longlong)this + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 8));
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x1b8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14eaeb480

void * __thiscall
TRDGLambdaPass<void,`FComputeShaderUtils::AddPass<UE::NNEDenoiserShaders::Internal::FTransferFunctionOidnCS>'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if (*(FRHIResource **)((longlong)this + 0x38) != (FRHIResource *)0x0) {
    FRHIResource::Release(*(FRHIResource **)((longlong)this + 0x38));
  }
  if (*(void **)((longlong)this + 0x20) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x20));
  }
  if (*(void **)((longlong)this + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 8));
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x1b8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14eaeb4e0

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<UE::NNEDenoiser::Private::FViewExtension,SharedPointerInternals::DefaultDeleter<UE::NNEDenoiser::Private::FViewExtension>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<UE::NNEDenoiser::Private::FViewExtension,SharedPointerInternals::DefaultDeleter<UE::NNEDenoiser::Private::FViewExtension>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14eaeb520

void * __thiscall
UE::NNEDenoiser::Private::FAutoExposure::_scalar_deleting_destructor_
          (FAutoExposure *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14eaeb550

void * __thiscall
UE::NNEDenoiser::Private::FHistory::_scalar_deleting_destructor_(FHistory *this,uint param_1)

{
  void *pvVar1;
  
  *(undefined4 *)&(this->ResourceMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->ResourceMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<enum_EResourceName,TArray<TRefCountPtr<IPooledRenderTarget>,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<enum_EResourceName,TArray<TRefCountPtr<IPooledRenderTarget>,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&this->ResourceMap);
  this->_padding_ =
       (longlong)&___7IHistory_IPathTracingSpatialTemporalDenoiser_Private_Renderer_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x68);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14eaeb5c0

void * __thiscall
UE::NNEDenoiser::Private::FInputProcessBase::_scalar_deleting_destructor_
          (FInputProcessBase *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->TransferFunction).SharedReferenceCount.ReferenceController);
  DestructItems<UE::NNEDenoiser::Private::FResourceMapping,int>
            ((FResourceMapping *)(this->InputLayout).InputMapping.AllocatorInstance.Data,
             (this->InputLayout).InputMapping.ArrayNum);
  pFVar1 = (this->InputLayout).InputMapping.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14eaeb620

void * __thiscall
UE::NNEDenoiser::Private::FModelInstanceCPU::_scalar_deleting_destructor_
          (FModelInstanceCPU *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7FModelInstanceCPU_Private_NNEDenoiser_UE__6B_;
  DestructItems<TArray<unsigned_char,TSizedDefaultAllocator<32>_>,int>
            ((TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)
             (this->ScratchOutputBuffers).AllocatorInstance.Data,
             (this->ScratchOutputBuffers).ArrayNum);
  pFVar1 = (this->ScratchOutputBuffers).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TArray<unsigned_char,TSizedDefaultAllocator<32>_>,int>
            ((TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)
             (this->ScratchInputBuffers).AllocatorInstance.Data,(this->ScratchInputBuffers).ArrayNum
            );
  pFVar1 = (this->ScratchInputBuffers).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ModelInstance).SharedReferenceCount.ReferenceController);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14eaeb6a0

void * __thiscall
UE::NNEDenoiser::Private::FModelInstanceGPU::_scalar_deleting_destructor_
          (FModelInstanceGPU *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7FModelInstanceGPU_Private_NNEDenoiser_UE__6B_;
  DestructItems<TArray<unsigned_char,TSizedDefaultAllocator<32>_>,int>
            ((TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)
             (this->ScratchOutputBuffers).AllocatorInstance.Data,
             (this->ScratchOutputBuffers).ArrayNum);
  pFVar1 = (this->ScratchOutputBuffers).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TArray<unsigned_char,TSizedDefaultAllocator<32>_>,int>
            ((TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)
             (this->ScratchInputBuffers).AllocatorInstance.Data,(this->ScratchInputBuffers).ArrayNum
            );
  pFVar1 = (this->ScratchInputBuffers).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ModelInstance).SharedReferenceCount.ReferenceController);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14eaeb720

void * __thiscall
UE::NNEDenoiser::Private::FModelInstanceRDG::_scalar_deleting_destructor_
          (FModelInstanceRDG *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FModelInstanceRDG_Private_NNEDenoiser_UE__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ModelInstance).SharedReferenceCount.ReferenceController);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14eaeb770

void * __thiscall
UE::NNEDenoiser::Private::FOutputProcessBase::_scalar_deleting_destructor_
          (FOutputProcessBase *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->TransferFunction).SharedReferenceCount.ReferenceController);
  DestructItems<UE::NNEDenoiser::Private::FResourceMapping,int>
            ((FResourceMapping *)(this->OutputLayout).InputMapping.AllocatorInstance.Data,
             (this->OutputLayout).InputMapping.ArrayNum);
  pFVar1 = (this->OutputLayout).InputMapping.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14eaeb7d0

void * __thiscall
UE::NNEDenoiser::Private::FPathTracingDenoiser::_scalar_deleting_destructor_
          (FPathTracingDenoiser *this,uint param_1)

{
  FGenericDenoiser *pFVar1;
  FScriptContainerElement *pFVar2;
  IAutoExposure *pIVar3;
  IOutputProcess *pIVar4;
  IInputProcess *pIVar5;
  IModelInstance *pIVar6;
  
  pFVar1 = (this->Denoiser).Ptr;
  if (pFVar1 != (FGenericDenoiser *)0x0) {
    pFVar2 = (pFVar1->Tiling).Tiles.AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((pFVar1->TransferFunction).SharedReferenceCount.ReferenceController);
    pIVar3 = (pFVar1->AutoExposure).Ptr;
    if (pIVar3 != (IAutoExposure *)0x0) {
      (**(code **)*pIVar3)(pIVar3,1);
    }
    pIVar4 = (pFVar1->OutputProcess).Ptr;
    if (pIVar4 != (IOutputProcess *)0x0) {
      (**(code **)*pIVar4)(pIVar4,1);
    }
    pIVar5 = (pFVar1->InputProcess).Ptr;
    if (pIVar5 != (IInputProcess *)0x0) {
      (**(code **)*pIVar5)(pIVar5,1);
    }
    pIVar6 = (pFVar1->ModelInstance).Ptr;
    if (pIVar6 != (IModelInstance *)0x0) {
      (**(code **)*pIVar6)(pIVar6,1);
    }
    ::operator_delete(pFVar1,0x68);
  }
  this->_padding_ = (longlong)&___7IPathTracingDenoiser_Private_Renderer_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14eaeb8a0

void * __thiscall
UE::NNEDenoiser::Private::FPathTracingSpatialTemporalDenoiser::_scalar_deleting_destructor_
          (FPathTracingSpatialTemporalDenoiser *this,uint param_1)

{
  FGenericDenoiser *pFVar1;
  FScriptContainerElement *pFVar2;
  IAutoExposure *pIVar3;
  IOutputProcess *pIVar4;
  IInputProcess *pIVar5;
  IModelInstance *pIVar6;
  
  pFVar1 = (this->Denoiser).Ptr;
  if (pFVar1 != (FGenericDenoiser *)0x0) {
    pFVar2 = (pFVar1->Tiling).Tiles.AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((pFVar1->TransferFunction).SharedReferenceCount.ReferenceController);
    pIVar3 = (pFVar1->AutoExposure).Ptr;
    if (pIVar3 != (IAutoExposure *)0x0) {
      (**(code **)*pIVar3)(pIVar3,1);
    }
    pIVar4 = (pFVar1->OutputProcess).Ptr;
    if (pIVar4 != (IOutputProcess *)0x0) {
      (**(code **)*pIVar4)(pIVar4,1);
    }
    pIVar5 = (pFVar1->InputProcess).Ptr;
    if (pIVar5 != (IInputProcess *)0x0) {
      (**(code **)*pIVar5)(pIVar5,1);
    }
    pIVar6 = (pFVar1->ModelInstance).Ptr;
    if (pIVar6 != (IModelInstance *)0x0) {
      (**(code **)*pIVar6)(pIVar6,1);
    }
    ::operator_delete(pFVar1,0x68);
  }
  this->_padding_ = (longlong)&___7IPathTracingSpatialTemporalDenoiser_Private_Renderer_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14eaeb970

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void * __thiscall
UE::NNEDenoiser::Private::Oidn::FTransferFunction::_scalar_deleting_destructor_
          (FTransferFunction *this,uint param_1)

{
  this->_padding_ = (longlong)&___7ITransferFunction_Private_NNEDenoiser_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14eaeb9b0

void * __thiscall
UE::NNEDenoiser::Private::FViewExtension::_scalar_deleting_destructor_
          (FViewExtension *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  IPathTracingSpatialTemporalDenoiser *pIVar2;
  IPathTracingDenoiser *pIVar3;
  FString *pFVar4;
  FString local_18;
  
  this->_padding_ = (longlong)&___7FViewExtension_Private_NNEDenoiser_UE__6B_;
  pFVar4 = ::FString::FString(&local_18,L"NNEDenoiser");
  UnregisterDenoiser(pFVar4);
  pFVar1 = (this->TemporalAssetName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->AssetName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->RuntimeName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pIVar2 = (this->SpatialTemporalDenoiserToSwap).Ptr;
  if (pIVar2 != (IPathTracingSpatialTemporalDenoiser *)0x0) {
    (**(code **)*pIVar2)(pIVar2,1);
  }
  pIVar3 = (this->DenoiserToSwap).Ptr;
  if (pIVar3 != (IPathTracingDenoiser *)0x0) {
    (**(code **)*pIVar3)(pIVar3,1);
  }
  FSceneViewExtensionBase::~FSceneViewExtensionBase((FSceneViewExtensionBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x80);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14eaeba70

void * __thiscall
UE::NNEDenoiser::Private::IAutoExposure::_scalar_deleting_destructor_
          (IAutoExposure *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14eaebaa0

void * __thiscall
UE::NNEDenoiser::Private::IInputProcess::_scalar_deleting_destructor_
          (IInputProcess *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14eaebad0

void * __thiscall
UE::NNEDenoiser::Private::IModelInstance::_scalar_deleting_destructor_
          (IModelInstance *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14eaebb00

void * __thiscall
UE::NNE::IModelInstanceRDG::_scalar_deleting_destructor_(IModelInstanceRDG *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14eaebb30

void * __thiscall
UE::NNEDenoiser::Private::IOutputProcess::_scalar_deleting_destructor_
          (IOutputProcess *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14eaebb60

void * __thiscall
UE::Renderer::Private::IPathTracingDenoiser::_scalar_deleting_destructor_
          (IPathTracingDenoiser *this,uint param_1)

{
  *this = (IPathTracingDenoiser)&___7IPathTracingDenoiser_Private_Renderer_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14eaebba0

void * __thiscall
UE::NNEDenoiser::Private::ITransferFunction::_scalar_deleting_destructor_
          (ITransferFunction *this,uint param_1)

{
  *this = (ITransferFunction)&___7ITransferFunction_Private_NNEDenoiser_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14eaebbe0

void * __thiscall
UNNEDenoiserAsset::_scalar_deleting_destructor_(UNNEDenoiserAsset *this,uint param_1)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UNNEDenoiserAsset__6B_;
  pvVar1 = *(void **)&(this->OutputMapping).SoftObjectPtr.field_0x18;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pvVar1 = *(void **)&(this->InputMapping).SoftObjectPtr.field_0x18;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pvVar1 = *(void **)&(this->ModelData).SoftObjectPtr.field_0x18;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  UDataAsset::~UDataAsset((UDataAsset *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xb8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14eaebc70

void * __thiscall
UNNEDenoiserSettings::_scalar_deleting_destructor_(UNNEDenoiserSettings *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&___7UNNEDenoiserSettings__6B_;
  pFVar1 = (this->RuntimeName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pvVar2 = *(void **)&(this->TemporalDenoiserAsset).SoftObjectPtr.field_0x18;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  pvVar2 = *(void **)&(this->DenoiserAsset).SoftObjectPtr.field_0x18;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  UDeveloperSettingsBackedByCVars::~UDeveloperSettingsBackedByCVars
            ((UDeveloperSettingsBackedByCVars *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xa0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14eaebd00

void * __thiscall
UNNEDenoiserTemporalAsset::_scalar_deleting_destructor_
          (UNNEDenoiserTemporalAsset *this,uint param_1)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UNNEDenoiserTemporalAsset__6B_;
  pvVar1 = *(void **)&(this->OutputMapping).SoftObjectPtr.field_0x18;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pvVar1 = *(void **)&(this->InputMapping).SoftObjectPtr.field_0x18;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pvVar1 = *(void **)&(this->ModelData).SoftObjectPtr.field_0x18;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  UDataAsset::~UDataAsset((UDataAsset *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xb8);
  }
  return this;
}

// EmptyLinkFunctionForGeneratedCodeNNEDenoiserAsset @ 14eaf2570

void __cdecl EmptyLinkFunctionForGeneratedCodeNNEDenoiserAsset(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeNNEDenoiserIOMappingData @ 14eaf2580

void __cdecl EmptyLinkFunctionForGeneratedCodeNNEDenoiserIOMappingData(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeNNEDenoiserResourceName @ 14eaf2590

void __cdecl EmptyLinkFunctionForGeneratedCodeNNEDenoiserResourceName(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeNNEDenoiserSettings @ 14eaf25a0

void __cdecl EmptyLinkFunctionForGeneratedCodeNNEDenoiserSettings(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeNNEDenoiserTemporalAsset @ 14eaf25b0

void __cdecl EmptyLinkFunctionForGeneratedCodeNNEDenoiserTemporalAsset(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeNNEDenoiserTilingConfig @ 14eaf25c0

void __cdecl EmptyLinkFunctionForGeneratedCodeNNEDenoiserTilingConfig(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeNNEDenoiser_init @ 14eaf25d0

void __cdecl EmptyLinkFunctionForGeneratedCodeNNEDenoiser_init(void)

{
  return;
}

// Z_Construct_UClass_UNNEDenoiserSettings_NoRegister @ 14eaff800

UClass * __cdecl Z_Construct_UClass_UNNEDenoiserSettings_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNNEDenoiserSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/NNEDenoiser",L"NNEDenoiserSettings",
               &Z_Registration_Info_UClass_UNNEDenoiserSettings.InnerSingleton,
               UNNEDenoiserSettings::StaticRegisterNativesUNNEDenoiserSettings,0xa0,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UNNEDenoiserSettings>,
               InternalVTableHelperCtorCaller<UNNEDenoiserSettings>,local_res8,
               UDeveloperSettingsBackedByCVars::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNNEDenoiserSettings.InnerSingleton;
}

// Z_Construct_UClass_UNNEDenoiserTemporalAsset_NoRegister @ 14eaff8c0

UClass * __cdecl Z_Construct_UClass_UNNEDenoiserTemporalAsset_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNNEDenoiserTemporalAsset.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/NNEDenoiser",L"NNEDenoiserTemporalAsset",
               &Z_Registration_Info_UClass_UNNEDenoiserTemporalAsset.InnerSingleton,
               UNNEDenoiserTemporalAsset::StaticRegisterNativesUNNEDenoiserTemporalAsset,0xb8,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UNNEDenoiserTemporalAsset>,
               InternalVTableHelperCtorCaller<UNNEDenoiserTemporalAsset>,local_res8,
               UDataAsset::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNNEDenoiserTemporalAsset.InnerSingleton;
}

// Z_Construct_UEnum_NNEDenoiser_EResourceName @ 14eaff980

UEnum * __cdecl Z_Construct_UEnum_NNEDenoiser_EResourceName(void)

{
  if (Z_Registration_Info_UEnum_EResourceName.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EResourceName.InnerSingleton,
               &Z_Construct_UEnum_NNEDenoiser_EResourceName_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EResourceName.InnerSingleton;
}

// Z_Construct_UScriptStruct_FNNEDenoiserInputMappingData @ 14eaff9c0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FNNEDenoiserInputMappingData(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FNNEDenoiserInputMappingData.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FNNEDenoiserInputMappingData.InnerSingleton,
               &Z_Construct_UScriptStruct_FNNEDenoiserInputMappingData_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FNNEDenoiserInputMappingData.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FNNEDenoiserInputMappingData.InnerSingleton;
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

// Z_Construct_UScriptStruct_FNNEDenoiserOutputMappingData @ 14eaffa40

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FNNEDenoiserOutputMappingData(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FNNEDenoiserOutputMappingData.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FNNEDenoiserOutputMappingData.InnerSingleton,
               &Z_Construct_UScriptStruct_FNNEDenoiserOutputMappingData_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FNNEDenoiserOutputMappingData.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FNNEDenoiserOutputMappingData.InnerSingleton;
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

// Z_Construct_UScriptStruct_FNNEDenoiserTemporalInputMappingData @ 14eaffac0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FNNEDenoiserTemporalInputMappingData(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FNNEDenoiserTemporalInputMappingData.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FNNEDenoiserTemporalInputMappingData.
                InnerSingleton,
               &Z_Construct_UScriptStruct_FNNEDenoiserTemporalInputMappingData_Statics::StructParams
              );
  }
  if (Z_Registration_Info_UScriptStruct_FNNEDenoiserTemporalInputMappingData.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FNNEDenoiserTemporalInputMappingData.InnerSingleton;
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

// Z_Construct_UScriptStruct_FNNEDenoiserTemporalOutputMappingData @ 14eaffb40

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FNNEDenoiserTemporalOutputMappingData(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FNNEDenoiserTemporalOutputMappingData.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FNNEDenoiserTemporalOutputMappingData.
                InnerSingleton,
               &Z_Construct_UScriptStruct_FNNEDenoiserTemporalOutputMappingData_Statics::
                StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FNNEDenoiserTemporalOutputMappingData.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FNNEDenoiserTemporalOutputMappingData.InnerSingleton;
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

// IMPLEMENT_MODULE_NNEDenoiser @ 14eb00650

void __cdecl IMPLEMENT_MODULE_NNEDenoiser(void)

{
  return;
}

// DebugName'' @ 15046f0d0

void __cdecl
`dynamic_atexit_destructor_for_'UE::NNEDenoiser::Private::FGenericDenoiser::DebugName__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = UE::NNEDenoiser::Private::FGenericDenoiser::DebugName.Data.AllocatorInstance.Data;
  if (UE::NNEDenoiser::Private::FGenericDenoiser::DebugName.Data.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (UE::NNEDenoiser::Private::FGenericDenoiser::DebugName.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'CVarNNEDenoiser'' @ 15046f0f0

void __cdecl UE::NNEDenoiser::Private::_dynamic_atexit_destructor_for__CVarNNEDenoiser__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarNNEDenoiser);
  return;
}

// `dynamic_atexit_destructor_for_'CVarNNEDenoiserAsset'' @ 15046f110

void __cdecl UE::NNEDenoiser::Private::_dynamic_atexit_destructor_for__CVarNNEDenoiserAsset__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarNNEDenoiserAsset);
  return;
}

// `dynamic_atexit_destructor_for_'CVarNNEDenoiserRuntimeName'' @ 15046f130

void __cdecl
UE::NNEDenoiser::Private::_dynamic_atexit_destructor_for__CVarNNEDenoiserRuntimeName__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarNNEDenoiserRuntimeName);
  return;
}

// `dynamic_atexit_destructor_for_'CVarNNEDenoiserRuntimeType'' @ 15046f150

void __cdecl
UE::NNEDenoiser::Private::_dynamic_atexit_destructor_for__CVarNNEDenoiserRuntimeType__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarNNEDenoiserRuntimeType);
  return;
}

// `dynamic_atexit_destructor_for_'CVarNNEDenoiserTemporalAsset'' @ 15046f170

void __cdecl
UE::NNEDenoiser::Private::_dynamic_atexit_destructor_for__CVarNNEDenoiserTemporalAsset__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarNNEDenoiserTemporalAsset);
  return;
}

// `dynamic_atexit_destructor_for_'DefaultRuntimeNames'' @ 15046f190

void __cdecl
`UE::NNEDenoiser::Private::CreateNNEDenoiser'::__l2::
_dynamic_atexit_destructor_for__DefaultRuntimeNames__(void)

{
  DefaultRuntimeNames._72_4_ = 0;
  if (DefaultRuntimeNames._64_8_ != 0) {
    FMemory::Free((void *)DefaultRuntimeNames._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<enum_EDenoiserRuntimeType,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<enum_EDenoiserRuntimeType,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&DefaultRuntimeNames);
  return;
}

// `dynamic_atexit_destructor_for_'Desc'' @ 15046f1d0

void __cdecl
```UE::NNEDenoiser::Private::FAutoExposure::EnqueueRDG'::__l8::Desc::operator()<>'::__l3::<lambda_1>
::operator()<>'::__l2::_dynamic_atexit_destructor_for__Desc__(void)

{
                    /* WARNING: Could not recover jumptable at 0x00015046f1d7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&::Desc.Cs);
  return;
}

// `dynamic_atexit_destructor_for_'Desc'' @ 15046f1f0

void __cdecl
```UE::NNEDenoiser::Private::IOProcessBaseHelper::AddWriteOutputPass'::__l9::Desc::operator()<>'::
__l3::<lambda_1>::operator()<>'::__l2::_dynamic_atexit_destructor_for__Desc__(void)

{
                    /* WARNING: Could not recover jumptable at 0x00015046f1f7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&::Desc.Cs);
  return;
}

// `dynamic_atexit_destructor_for_'Desc'' @ 15046f210

void __cdecl
```UE::NNEDenoiser::Private::IOProcessBaseHelper::AddReadInputPass'::__l51::Desc::operator()<>'::
__l3::<lambda_1>::operator()<>'::__l2::_dynamic_atexit_destructor_for__Desc__(void)

{
                    /* WARNING: Could not recover jumptable at 0x00015046f217. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&::Desc.Cs);
  return;
}

// `dynamic_atexit_destructor_for_'Desc'' @ 15046f230

void __cdecl
```UE::NNEDenoiser::Private::IOProcessBaseHelper::AddPreOrPostProcess'::__l14::Desc::operator()<>'::
__l3::<lambda_1>::operator()<>'::__l2::_dynamic_atexit_destructor_for__Desc__(void)

{
                    /* WARNING: Could not recover jumptable at 0x00015046f237. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&::Desc.Cs);
  return;
}

// `dynamic_atexit_destructor_for_'Desc'' @ 15046f250

void __cdecl
```UE::NNEDenoiser::Private::Oidn::Helper::ApplyTransferFunction'::__l14::Desc::operator()<>'::__l3
::<lambda_1>::operator()<>'::__l2::_dynamic_atexit_destructor_for__Desc__(void)

{
                    /* WARNING: Could not recover jumptable at 0x00015046f257. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&::Desc.Cs);
  return;
}

// `dynamic_atexit_destructor_for_'Desc'' @ 15046f270

void __cdecl
```UE::NNEDenoiser::Private::FModelInstanceGPU::EnqueueRDG'::__l15::Desc::operator()<>'::__l3::
<lambda_1>::operator()<>'::__l2::_dynamic_atexit_destructor_for__Desc__(void)

{
                    /* WARNING: Could not recover jumptable at 0x00015046f277. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&::Desc.Cs);
  return;
}

// `dynamic_atexit_destructor_for_'Desc'' @ 15046f290

void __cdecl
```UE::NNEDenoiser::Private::FAutoExposure::EnqueueRDG'::__l14::<lambda_2>::operator()<>'::__l3::
<lambda_1>::operator()<>'::__l2::_dynamic_atexit_destructor_for__Desc__(void)

{
                    /* WARNING: Could not recover jumptable at 0x00015046f297. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&::Desc.Cs);
  return;
}

// `dynamic_atexit_destructor_for_'Desc'' @ 15046f2b0

void __cdecl
```UE::NNEDenoiser::Private::FAutoExposure::EnqueueRDG'::__l20::<lambda_3>::operator()<>'::__l3::
<lambda_1>::operator()<>'::__l2::_dynamic_atexit_destructor_for__Desc__(void)

{
                    /* WARNING: Could not recover jumptable at 0x00015046f2b7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&::Desc.Cs);
  return;
}

// `dynamic_atexit_destructor_for_'FAutoExposureTestAutomationTestInstance'' @ 15046f2d0

void __cdecl
UE::NNEDenoiser::Private::`anonymous_namespace'::
_dynamic_atexit_destructor_for__FAutoExposureTestAutomationTestInstance__(void)

{
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)&FAutoExposureTestAutomationTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FTransferFunctionTestAutomationTestInstance'' @ 15046f2f0

void __cdecl
UE::NNEDenoiser::Private::`anonymous_namespace'::
_dynamic_atexit_destructor_for__FTransferFunctionTestAutomationTestInstance__(void)

{
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)&FTransferFunctionTestAutomationTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FallbackRuntimeNameRDG'' @ 15046f310

void __cdecl
`UE::NNEDenoiser::Private::CreateNNEDenoiser'::__l2::
_dynamic_atexit_destructor_for__FallbackRuntimeNameRDG__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = FallbackRuntimeNameRDG.Data.AllocatorInstance.Data;
  if (FallbackRuntimeNameRDG.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (FallbackRuntimeNameRDG.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'GPUStat_FAutoExposure'' @ 15046f330

void __cdecl _dynamic_atexit_destructor_for__GPUStat_FAutoExposure__(void)

{
  GPUStat_FAutoExposure._104_4_ = 0;
  if (GPUStat_FAutoExposure._96_8_ != 0) {
    FMemory::Free((void *)GPUStat_FAutoExposure._96_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<UE::RHI::GPUProfiler::FQueue,UE::RHI::GPUProfiler::FGPUStat::FStatInstance>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UE::RHI::GPUProfiler::FQueue,UE::RHI::GPUProfiler::FGPUStat::FStatInstance>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UE::RHI::GPUProfiler::FQueue,UE::RHI::GPUProfiler::FGPUStat::FStatInstance>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&GPUStat_FAutoExposure.field_0x20);
  return;
}

// `dynamic_atexit_destructor_for_'GPUStat_FAutoExposureDownsample'' @ 15046f370

void __cdecl _dynamic_atexit_destructor_for__GPUStat_FAutoExposureDownsample__(void)

{
  GPUStat_FAutoExposureDownsample._104_4_ = 0;
  if (GPUStat_FAutoExposureDownsample._96_8_ != 0) {
    FMemory::Free((void *)GPUStat_FAutoExposureDownsample._96_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<UE::RHI::GPUProfiler::FQueue,UE::RHI::GPUProfiler::FGPUStat::FStatInstance>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UE::RHI::GPUProfiler::FQueue,UE::RHI::GPUProfiler::FGPUStat::FStatInstance>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UE::RHI::GPUProfiler::FQueue,UE::RHI::GPUProfiler::FGPUStat::FStatInstance>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&GPUStat_FAutoExposureDownsample.field_0x20);
  return;
}

// `dynamic_atexit_destructor_for_'GPUStat_FAutoExposureReduce'' @ 15046f3b0

void __cdecl _dynamic_atexit_destructor_for__GPUStat_FAutoExposureReduce__(void)

{
  GPUStat_FAutoExposureReduce._104_4_ = 0;
  if (GPUStat_FAutoExposureReduce._96_8_ != 0) {
    FMemory::Free((void *)GPUStat_FAutoExposureReduce._96_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<UE::RHI::GPUProfiler::FQueue,UE::RHI::GPUProfiler::FGPUStat::FStatInstance>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UE::RHI::GPUProfiler::FQueue,UE::RHI::GPUProfiler::FGPUStat::FStatInstance>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UE::RHI::GPUProfiler::FQueue,UE::RHI::GPUProfiler::FGPUStat::FStatInstance>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&GPUStat_FAutoExposureReduce.field_0x20);
  return;
}

// `dynamic_atexit_destructor_for_'GPUStat_FAutoExposureReduceFinal'' @ 15046f3f0

void __cdecl _dynamic_atexit_destructor_for__GPUStat_FAutoExposureReduceFinal__(void)

{
  GPUStat_FAutoExposureReduceFinal._104_4_ = 0;
  if (GPUStat_FAutoExposureReduceFinal._96_8_ != 0) {
    FMemory::Free((void *)GPUStat_FAutoExposureReduceFinal._96_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<UE::RHI::GPUProfiler::FQueue,UE::RHI::GPUProfiler::FGPUStat::FStatInstance>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UE::RHI::GPUProfiler::FQueue,UE::RHI::GPUProfiler::FGPUStat::FStatInstance>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UE::RHI::GPUProfiler::FQueue,UE::RHI::GPUProfiler::FGPUStat::FStatInstance>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&GPUStat_FAutoExposureReduceFinal.field_0x20);
  return;
}

// `dynamic_atexit_destructor_for_'GPUStat_FModelInstanceGPU'' @ 15046f430

void __cdecl _dynamic_atexit_destructor_for__GPUStat_FModelInstanceGPU__(void)

{
  GPUStat_FModelInstanceGPU._104_4_ = 0;
  if (GPUStat_FModelInstanceGPU._96_8_ != 0) {
    FMemory::Free((void *)GPUStat_FModelInstanceGPU._96_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<UE::RHI::GPUProfiler::FQueue,UE::RHI::GPUProfiler::FGPUStat::FStatInstance>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UE::RHI::GPUProfiler::FQueue,UE::RHI::GPUProfiler::FGPUStat::FStatInstance>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UE::RHI::GPUProfiler::FQueue,UE::RHI::GPUProfiler::FGPUStat::FStatInstance>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&GPUStat_FModelInstanceGPU.field_0x20);
  return;
}

// `dynamic_atexit_destructor_for_'GPUStat_FNNEDenoiserDefaultIOProcess'' @ 15046f470

void __cdecl _dynamic_atexit_destructor_for__GPUStat_FNNEDenoiserDefaultIOProcess__(void)

{
  GPUStat_FNNEDenoiserDefaultIOProcess._104_4_ = 0;
  if (GPUStat_FNNEDenoiserDefaultIOProcess._96_8_ != 0) {
    FMemory::Free((void *)GPUStat_FNNEDenoiserDefaultIOProcess._96_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<UE::RHI::GPUProfiler::FQueue,UE::RHI::GPUProfiler::FGPUStat::FStatInstance>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UE::RHI::GPUProfiler::FQueue,UE::RHI::GPUProfiler::FGPUStat::FStatInstance>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UE::RHI::GPUProfiler::FQueue,UE::RHI::GPUProfiler::FGPUStat::FStatInstance>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&GPUStat_FNNEDenoiserDefaultIOProcess.field_0x20);
  return;
}

// `dynamic_atexit_destructor_for_'GPUStat_FNNEDenoiserReadInput'' @ 15046f4b0

void __cdecl _dynamic_atexit_destructor_for__GPUStat_FNNEDenoiserReadInput__(void)

{
  GPUStat_FNNEDenoiserReadInput._104_4_ = 0;
  if (GPUStat_FNNEDenoiserReadInput._96_8_ != 0) {
    FMemory::Free((void *)GPUStat_FNNEDenoiserReadInput._96_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<UE::RHI::GPUProfiler::FQueue,UE::RHI::GPUProfiler::FGPUStat::FStatInstance>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UE::RHI::GPUProfiler::FQueue,UE::RHI::GPUProfiler::FGPUStat::FStatInstance>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UE::RHI::GPUProfiler::FQueue,UE::RHI::GPUProfiler::FGPUStat::FStatInstance>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&GPUStat_FNNEDenoiserReadInput.field_0x20);
  return;
}

// `dynamic_atexit_destructor_for_'GPUStat_FNNEDenoiserTransferFunctionOidn'' @ 15046f4f0

void __cdecl _dynamic_atexit_destructor_for__GPUStat_FNNEDenoiserTransferFunctionOidn__(void)

{
  GPUStat_FNNEDenoiserTransferFunctionOidn._104_4_ = 0;
  if (GPUStat_FNNEDenoiserTransferFunctionOidn._96_8_ != 0) {
    FMemory::Free((void *)GPUStat_FNNEDenoiserTransferFunctionOidn._96_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<UE::RHI::GPUProfiler::FQueue,UE::RHI::GPUProfiler::FGPUStat::FStatInstance>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UE::RHI::GPUProfiler::FQueue,UE::RHI::GPUProfiler::FGPUStat::FStatInstance>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UE::RHI::GPUProfiler::FQueue,UE::RHI::GPUProfiler::FGPUStat::FStatInstance>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&GPUStat_FNNEDenoiserTransferFunctionOidn.field_0x20);
  return;
}

// `dynamic_atexit_destructor_for_'GPUStat_FNNEDenoiserWriteOutput'' @ 15046f530

void __cdecl _dynamic_atexit_destructor_for__GPUStat_FNNEDenoiserWriteOutput__(void)

{
  GPUStat_FNNEDenoiserWriteOutput._104_4_ = 0;
  if (GPUStat_FNNEDenoiserWriteOutput._96_8_ != 0) {
    FMemory::Free((void *)GPUStat_FNNEDenoiserWriteOutput._96_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<UE::RHI::GPUProfiler::FQueue,UE::RHI::GPUProfiler::FGPUStat::FStatInstance>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UE::RHI::GPUProfiler::FQueue,UE::RHI::GPUProfiler::FGPUStat::FStatInstance>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UE::RHI::GPUProfiler::FQueue,UE::RHI::GPUProfiler::FGPUStat::FStatInstance>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&GPUStat_FNNEDenoiserWriteOutput.field_0x20);
  return;
}

// `dynamic_atexit_destructor_for_'LogNNEDenoiser'' @ 15046f570

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogNNEDenoiser__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogNNEDenoiser);
  return;
}

// `dynamic_atexit_destructor_for_'StaticStructMetadata'' @ 15046f590

void __cdecl
`UE::NNEDenoiser::Private::FAutoExposureTestDownloadParameters::FTypeInfo::GetStructMetadata'::__l2
::_dynamic_atexit_destructor_for__StaticStructMetadata__(void)

{
  FShaderParametersMetadata::~FShaderParametersMetadata
            (&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_UE::NNEDenoiser::Private::FAutoExposureTestDownloadParameters::FTypeInfo::GetStructMetadata(void)'
              ::__l2::StaticStructMetadata);
  return;
}

// `dynamic_atexit_destructor_for_'StaticStructMetadata'' @ 15046f5b0

void __cdecl
`UE::NNEDenoiser::Private::FAutoExposureTestUploadParameters::FTypeInfo::GetStructMetadata'::__l2::
_dynamic_atexit_destructor_for__StaticStructMetadata__(void)

{
  FShaderParametersMetadata::~FShaderParametersMetadata
            (&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_UE::NNEDenoiser::Private::FAutoExposureTestUploadParameters::FTypeInfo::GetStructMetadata(void)'
              ::__l2::StaticStructMetadata);
  return;
}

// `dynamic_atexit_destructor_for_'StaticStructMetadata'' @ 15046f5d0

void __cdecl
`FNNEDenoiserModelInstanceCPUTextureParameters::FTypeInfo::GetStructMetadata'::__l2::
_dynamic_atexit_destructor_for__StaticStructMetadata__(void)

{
  FShaderParametersMetadata::~FShaderParametersMetadata
            (&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FNNEDenoiserModelInstanceCPUTextureParameters::FTypeInfo::GetStructMetadata(void)'
              ::__l2::StaticStructMetadata);
  return;
}

// `dynamic_atexit_destructor_for_'StaticStructMetadata'' @ 15046f5f0

void __cdecl
`FNNEDenoiserModelInstanceGPUTextureParameters::FTypeInfo::GetStructMetadata'::__l2::
_dynamic_atexit_destructor_for__StaticStructMetadata__(void)

{
  FShaderParametersMetadata::~FShaderParametersMetadata
            (&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FNNEDenoiserModelInstanceGPUTextureParameters::FTypeInfo::GetStructMetadata(void)'
              ::__l2::StaticStructMetadata);
  return;
}

// `dynamic_atexit_destructor_for_'StaticStructMetadata'' @ 15046f610

void __cdecl
`UE::NNEDenoiser::Private::FTransferFunctionTestDownloadParameters::FTypeInfo::GetStructMetadata'::
__l2::_dynamic_atexit_destructor_for__StaticStructMetadata__(void)

{
  FShaderParametersMetadata::~FShaderParametersMetadata
            (&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_UE::NNEDenoiser::Private::FTransferFunctionTestDownloadParameters::FTypeInfo::GetStructMetadata(void)'
              ::__l2::StaticStructMetadata);
  return;
}

// `dynamic_atexit_destructor_for_'StaticStructMetadata'' @ 15046f630

void __cdecl
`UE::NNEDenoiser::Private::FTransferFunctionTestUploadBufferParameters::FTypeInfo::
GetStructMetadata'::__l2::_dynamic_atexit_destructor_for__StaticStructMetadata__(void)

{
  FShaderParametersMetadata::~FShaderParametersMetadata
            (&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_UE::NNEDenoiser::Private::FTransferFunctionTestUploadBufferParameters::FTypeInfo::GetStructMetadata(void)'
              ::__l2::StaticStructMetadata);
  return;
}

// `dynamic_atexit_destructor_for_'StaticStructMetadata'' @ 15046f650

void __cdecl
`UE::NNEDenoiser::Private::FTransferFunctionTestUploadTextureParameters::FTypeInfo::
GetStructMetadata'::__l2::_dynamic_atexit_destructor_for__StaticStructMetadata__(void)

{
  FShaderParametersMetadata::~FShaderParametersMetadata
            (&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_UE::NNEDenoiser::Private::FTransferFunctionTestUploadTextureParameters::FTypeInfo::GetStructMetadata(void)'
              ::__l2::StaticStructMetadata);
  return;
}

